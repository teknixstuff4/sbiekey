
// DSE-Patcher - Patch DSE (Driver Signature Enforcement)
// Copyright (C) 2022 Kai Schtrom
//
// This file is part of DSE-Patcher.
//
// DSE-Patcher is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// DSE-Patcher is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with DSE-Patcher. If not, see <http://www.gnu.org/licenses/>.

#ifndef _KILLDSE
#define _KILLDSE

// Attention: The library file msvcrt.lib is copied from "C:\WinDDK\7600.16385.1\lib\Crt\amd64".
// This import library reduces the executable size and we have not to install any Microsoft
// redistributables to run the executable.

// deprecate unsafe function warnings e.g. strcpy, sprintf
#define _CRT_SECURE_NO_DEPRECATE

#include <windows.h>
#include <commctrl.h>
// sprintf
#include <stdio.h>
// NtQuerySystemInformation
#include <winternl.h>
#include <SetupAPI.h>
// MAX_CLASS_NAME_LEN
#include <cfgmgr32.h>
// UpdateDriverForPlugAndPlayDevices
#include <newdev.h>
// ACL function e.g. SetNamedSecurityInfo
#include <Aclapi.h>
// PathFileExists
#include <Shlwapi.h>

// SetupAPI functions
#pragma comment(lib,"setupapi.lib")
// UpdateDriverForPlugAndPlayDevices
#pragma comment(lib,"newdev.lib")
// PathFileExists
#pragma comment(lib,"shlwapi.lib")

// maximum number of supported vulnerable drivers
#define MAX_VULNERABLE_DRIVERS 1
// maximum number of supported driver files
#define MAX_DRIVER_FILES 1

// NtQuerySystemInformation structures
typedef struct _RTL_PROCESS_MODULE_INFORMATION
{
	HANDLE Section;
	PVOID MappedBase;
	PVOID ImageBase;
	ULONG ImageSize;
	ULONG Flags;
	USHORT LoadOrderIndex;
	USHORT InitOrderIndex;
	USHORT LoadCount;
	USHORT OffsetToFileName;
	UCHAR FullPathName[256];
}RTL_PROCESS_MODULE_INFORMATION,*PRTL_PROCESS_MODULE_INFORMATION;

typedef struct _RTL_PROCESS_MODULES
{
	ULONG NumberOfModules;
	RTL_PROCESS_MODULE_INFORMATION Modules[1];
}RTL_PROCESS_MODULES,*PRTL_PROCESS_MODULES;

// forward declaration of structure for use in function pointers of start and stop driver
struct _VULNERABLE_DRIVER;

// vulnerable driver structure function prototypes
typedef int (*FunctionOpenDevice)(const wchar_t *szDriverFile,HANDLE *hDevice);
typedef int (*FunctionReadMemory)(HANDLE hDevice,DWORD64 dw64Address,DWORD dwSize,DWORD *dwValue);
typedef int (*FunctionWriteMemory)(HANDLE hDevice,DWORD64 dw64Address,DWORD dwSize,DWORD dwValue);
typedef int (*FunctionStartDriver)(struct _VULNERABLE_DRIVER *vd);
typedef int (*FunctionStopDriver)(struct _VULNERABLE_DRIVER *vd);

// driver files structure
typedef struct _DRIVER_FILE
{
	wchar_t szFilePath[MAX_PATH];
	BYTE *bData;
	DWORD dwSize;
}DRIVER_FILE,*PDRIVER_FILE;

// vulnerable driver structure
typedef struct _VULNERABLE_DRIVER
{
	const wchar_t *szProvider;
	FunctionOpenDevice pFunctionOpenDevice;
	FunctionReadMemory pFunctionReadMemory;
	FunctionWriteMemory pFunctionWriteMemory;
	FunctionStartDriver pFunctionStartDriver;
	FunctionStopDriver pFunctionStopDriver;
	const wchar_t *szServiceName;
	const wchar_t *szDriverSymLink;
	// reserve space for max number of driver files (sys, inf, cat and WDFCoInstaller DLL)
	DRIVER_FILE driverFile[MAX_DRIVER_FILES];
	const wchar_t *szHardwareId;
	HDEVINFO DeviceInfoSet;
	SP_DEVINFO_DATA DeviceInfoData;
	DWORD dwMinSupportedBuildNumber;
	DWORD dwMaxSupportedBuildNumber;
}VULNERABLE_DRIVER,*PVULNERABLE_DRIVER;

// patch data structure
typedef struct _PATCH_DATA
{
	// operating system
	const wchar_t *szOS;
	// module to patch
	const char *szModuleName;
	// variable name in module to patch e.g. g_CiEnabled, g_CiOptions
	const wchar_t *szVariableName;
	// DSE original value
	DWORD dwDSEOriginalValue;
	// DSE disable value
	DWORD dwDSEDisableValue;
	// DSE enable value
	DWORD dwDSEEnableValue;
	// DSE actual value
	DWORD dwDSEActualValue;
	// patch size in bytes
	DWORD dwPatchSize;
	// image base of module to patch
	UINT64 ui64ImageBase;
	// image size of module to patch
	ULONG ulImageSize;
	// variable address to patch
	UINT64 ui64PatchAddress;
	// has original value been set
	BOOL bDSEOriginalValue;
}PATCH_DATA,*PPATCH_DATA;

// thread task number enumeration
typedef enum
{
	ThreadTaskReadDSEOnFirstRun = 1,
	ThreadTaskDisableDSE = 2,
	ThreadTaskEnableDSE = 3,
	ThreadTaskRestoreDSE = 4
}THREAD_TASK_NO;

// globals structure
typedef struct _GLOBALS
{
	HMODULE hInstance;
	unsigned char ucRunning;
	VULNERABLE_DRIVER vd[MAX_VULNERABLE_DRIVERS];
	BOOL vdInit;
	PATCH_DATA pd;
	wchar_t szMsg[1024];
	NTSTATUS(NTAPI* NtLoadDriver_p)(PCUNICODE_STRING DriverServiceName);
	NTSTATUS(NTAPI* NtUnloadDriver_p)(PCUNICODE_STRING DriverServiceName);
}GLOBALS,*PGLOBALS;

//------------------------------------------------------------------------------
// exported functions
//------------------------------------------------------------------------------

extern "C" DWORD WINAPI DSEAction(THREAD_TASK_NO ttno);

#endif // _KILLDSE

