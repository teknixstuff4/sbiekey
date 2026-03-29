#include <Windows.h>

#pragma comment(linker,"/EXPORT:IsInteractiveUserSession") 
#pragma comment(linker,"/EXPORT:QueryActiveSession") 
#pragma comment(linker,"/EXPORT:QueryUserToken") 
#pragma comment(linker,"/EXPORT:RegisterUsertokenForNoWinlogon") 
#pragma comment(linker,"/EXPORT:WTSCloseServer") 
#pragma comment(linker,"/EXPORT:WTSConnectSessionA") 
#pragma comment(linker,"/EXPORT:WTSConnectSessionW") 
#pragma comment(linker,"/EXPORT:WTSCreateListenerA") 
#pragma comment(linker,"/EXPORT:WTSCreateListenerW") 
#pragma comment(linker,"/EXPORT:WTSDisconnectSession") 
#pragma comment(linker,"/EXPORT:WTSEnableChildSessions") 
#pragma comment(linker,"/EXPORT:WTSEnumerateListenersA") 
#pragma comment(linker,"/EXPORT:WTSEnumerateListenersW") 
#pragma comment(linker,"/EXPORT:WTSEnumerateProcessesA") 
#pragma comment(linker,"/EXPORT:WTSEnumerateProcessesExA") 
#pragma comment(linker,"/EXPORT:WTSEnumerateProcessesExW") 
#pragma comment(linker,"/EXPORT:WTSEnumerateProcessesW") 
#pragma comment(linker,"/EXPORT:WTSEnumerateServersA") 
#pragma comment(linker,"/EXPORT:WTSEnumerateServersW") 
#pragma comment(linker,"/EXPORT:WTSEnumerateSessionsA") 
#pragma comment(linker,"/EXPORT:WTSEnumerateSessionsExA") 
#pragma comment(linker,"/EXPORT:WTSEnumerateSessionsExW") 
#pragma comment(linker,"/EXPORT:WTSEnumerateSessionsW") 
#pragma comment(linker,"/EXPORT:WTSFreeMemory") 
#pragma comment(linker,"/EXPORT:WTSFreeMemoryExA") 
#pragma comment(linker,"/EXPORT:WTSFreeMemoryExW") 
#pragma comment(linker,"/EXPORT:WTSGetChildSessionId") 
#pragma comment(linker,"/EXPORT:WTSGetListenerSecurityA") 
#pragma comment(linker,"/EXPORT:WTSGetListenerSecurityW") 
#pragma comment(linker,"/EXPORT:WTSIsChildSessionsEnabled") 
#pragma comment(linker,"/EXPORT:WTSLogoffSession") 
#pragma comment(linker,"/EXPORT:WTSOpenServerA") 
#pragma comment(linker,"/EXPORT:WTSOpenServerExA") 
#pragma comment(linker,"/EXPORT:WTSOpenServerExW") 
#pragma comment(linker,"/EXPORT:WTSOpenServerW") 
#pragma comment(linker,"/EXPORT:WTSQueryListenerConfigA") 
#pragma comment(linker,"/EXPORT:WTSQueryListenerConfigW") 
#pragma comment(linker,"/EXPORT:WTSQuerySessionInformationA") 
#pragma comment(linker,"/EXPORT:WTSQuerySessionInformationW") 
#pragma comment(linker,"/EXPORT:WTSQueryUserConfigA") 
#pragma comment(linker,"/EXPORT:WTSQueryUserConfigW") 
#pragma comment(linker,"/EXPORT:WTSQueryUserToken") 
#pragma comment(linker,"/EXPORT:WTSRegisterSessionNotification") 
#pragma comment(linker,"/EXPORT:WTSRegisterSessionNotificationEx") 
#pragma comment(linker,"/EXPORT:WTSSendMessageA") 
#pragma comment(linker,"/EXPORT:WTSSendMessageW") 
#pragma comment(linker,"/EXPORT:WTSSetListenerSecurityA") 
#pragma comment(linker,"/EXPORT:WTSSetListenerSecurityW") 
#pragma comment(linker,"/EXPORT:WTSSetRenderHint") 
#pragma comment(linker,"/EXPORT:WTSSetSessionInformationA") 
#pragma comment(linker,"/EXPORT:WTSSetSessionInformationW") 
#pragma comment(linker,"/EXPORT:WTSSetUserConfigA") 
#pragma comment(linker,"/EXPORT:WTSSetUserConfigW") 
#pragma comment(linker,"/EXPORT:WTSShutdownSystem") 
#pragma comment(linker,"/EXPORT:WTSStartRemoteControlSessionA") 
#pragma comment(linker,"/EXPORT:WTSStartRemoteControlSessionW") 
#pragma comment(linker,"/EXPORT:WTSStopRemoteControlSession") 
#pragma comment(linker,"/EXPORT:WTSTerminateProcess") 
#pragma comment(linker,"/EXPORT:WTSUnRegisterSessionNotification") 
#pragma comment(linker,"/EXPORT:WTSUnRegisterSessionNotificationEx") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelClose") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelOpen") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelOpenEx") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelPurgeInput") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelPurgeOutput") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelQuery") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelRead") 
#pragma comment(linker,"/EXPORT:WTSVirtualChannelWrite") 
#pragma comment(linker,"/EXPORT:WTSWaitSystemEvent") 

DWORD_PTR pIsInteractiveUserSession;
DWORD_PTR pQueryActiveSession;
DWORD_PTR pQueryUserToken;
DWORD_PTR pRegisterUsertokenForNoWinlogon;
DWORD_PTR pWTSCloseServer;
DWORD_PTR pWTSConnectSessionA;
DWORD_PTR pWTSConnectSessionW;
DWORD_PTR pWTSCreateListenerA;
DWORD_PTR pWTSCreateListenerW;
DWORD_PTR pWTSDisconnectSession;
DWORD_PTR pWTSEnableChildSessions;
DWORD_PTR pWTSEnumerateListenersA;
DWORD_PTR pWTSEnumerateListenersW;
DWORD_PTR pWTSEnumerateProcessesA;
DWORD_PTR pWTSEnumerateProcessesExA;
DWORD_PTR pWTSEnumerateProcessesExW;
DWORD_PTR pWTSEnumerateProcessesW;
DWORD_PTR pWTSEnumerateServersA;
DWORD_PTR pWTSEnumerateServersW;
DWORD_PTR pWTSEnumerateSessionsA;
DWORD_PTR pWTSEnumerateSessionsExA;
DWORD_PTR pWTSEnumerateSessionsExW;
DWORD_PTR pWTSEnumerateSessionsW;
DWORD_PTR pWTSFreeMemory;
DWORD_PTR pWTSFreeMemoryExA;
DWORD_PTR pWTSFreeMemoryExW;
DWORD_PTR pWTSGetChildSessionId;
DWORD_PTR pWTSGetListenerSecurityA;
DWORD_PTR pWTSGetListenerSecurityW;
DWORD_PTR pWTSIsChildSessionsEnabled;
DWORD_PTR pWTSLogoffSession;
DWORD_PTR pWTSOpenServerA;
DWORD_PTR pWTSOpenServerExA;
DWORD_PTR pWTSOpenServerExW;
DWORD_PTR pWTSOpenServerW;
DWORD_PTR pWTSQueryListenerConfigA;
DWORD_PTR pWTSQueryListenerConfigW;
DWORD_PTR pWTSQuerySessionInformationA;
DWORD_PTR pWTSQuerySessionInformationW;
DWORD_PTR pWTSQueryUserConfigA;
DWORD_PTR pWTSQueryUserConfigW;
DWORD_PTR pWTSQueryUserToken;
DWORD_PTR pWTSRegisterSessionNotification;
DWORD_PTR pWTSRegisterSessionNotificationEx;
DWORD_PTR pWTSSendMessageA;
DWORD_PTR pWTSSendMessageW;
DWORD_PTR pWTSSetListenerSecurityA;
DWORD_PTR pWTSSetListenerSecurityW;
DWORD_PTR pWTSSetRenderHint;
DWORD_PTR pWTSSetSessionInformationA;
DWORD_PTR pWTSSetSessionInformationW;
DWORD_PTR pWTSSetUserConfigA;
DWORD_PTR pWTSSetUserConfigW;
DWORD_PTR pWTSShutdownSystem;
DWORD_PTR pWTSStartRemoteControlSessionA;
DWORD_PTR pWTSStartRemoteControlSessionW;
DWORD_PTR pWTSStopRemoteControlSession;
DWORD_PTR pWTSTerminateProcess;
DWORD_PTR pWTSUnRegisterSessionNotification;
DWORD_PTR pWTSUnRegisterSessionNotificationEx;
DWORD_PTR pWTSVirtualChannelClose;
DWORD_PTR pWTSVirtualChannelOpen;
DWORD_PTR pWTSVirtualChannelOpenEx;
DWORD_PTR pWTSVirtualChannelPurgeInput;
DWORD_PTR pWTSVirtualChannelPurgeOutput;
DWORD_PTR pWTSVirtualChannelQuery;
DWORD_PTR pWTSVirtualChannelRead;
DWORD_PTR pWTSVirtualChannelWrite;
DWORD_PTR pWTSWaitSystemEvent;
HMODULE hModule = NULL;

void InitProxy() {
	WCHAR szSysdir[MAX_PATH];
	GetSystemDirectory(szSysdir, ARRAYSIZE(szSysdir));
	wcscat_s(szSysdir, ARRAYSIZE(szSysdir), L"\\wtsapi32.dll");
	hModule = LoadLibrary(szSysdir);
	if (!hModule) {
		return;
	}
	pIsInteractiveUserSession = (DWORD_PTR)GetProcAddress(hModule, "IsInteractiveUserSession");
	pQueryActiveSession = (DWORD_PTR)GetProcAddress(hModule, "QueryActiveSession");
	pQueryUserToken = (DWORD_PTR)GetProcAddress(hModule, "QueryUserToken");
	pRegisterUsertokenForNoWinlogon = (DWORD_PTR)GetProcAddress(hModule, "RegisterUsertokenForNoWinlogon");
	pWTSCloseServer = (DWORD_PTR)GetProcAddress(hModule, "WTSCloseServer");
	pWTSConnectSessionA = (DWORD_PTR)GetProcAddress(hModule, "WTSConnectSessionA");
	pWTSConnectSessionW = (DWORD_PTR)GetProcAddress(hModule, "WTSConnectSessionW");
	pWTSCreateListenerA = (DWORD_PTR)GetProcAddress(hModule, "WTSCreateListenerA");
	pWTSCreateListenerW = (DWORD_PTR)GetProcAddress(hModule, "WTSCreateListenerW");
	pWTSDisconnectSession = (DWORD_PTR)GetProcAddress(hModule, "WTSDisconnectSession");
	pWTSEnableChildSessions = (DWORD_PTR)GetProcAddress(hModule, "WTSEnableChildSessions");
	pWTSEnumerateListenersA = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateListenersA");
	pWTSEnumerateListenersW = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateListenersW");
	pWTSEnumerateProcessesA = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateProcessesA");
	pWTSEnumerateProcessesExA = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateProcessesExA");
	pWTSEnumerateProcessesExW = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateProcessesExW");
	pWTSEnumerateProcessesW = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateProcessesW");
	pWTSEnumerateServersA = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateServersA");
	pWTSEnumerateServersW = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateServersW");
	pWTSEnumerateSessionsA = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateSessionsA");
	pWTSEnumerateSessionsExA = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateSessionsExA");
	pWTSEnumerateSessionsExW = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateSessionsExW");
	pWTSEnumerateSessionsW = (DWORD_PTR)GetProcAddress(hModule, "WTSEnumerateSessionsW");
	pWTSFreeMemory = (DWORD_PTR)GetProcAddress(hModule, "WTSFreeMemory");
	pWTSFreeMemoryExA = (DWORD_PTR)GetProcAddress(hModule, "WTSFreeMemoryExA");
	pWTSFreeMemoryExW = (DWORD_PTR)GetProcAddress(hModule, "WTSFreeMemoryExW");
	pWTSGetChildSessionId = (DWORD_PTR)GetProcAddress(hModule, "WTSGetChildSessionId");
	pWTSGetListenerSecurityA = (DWORD_PTR)GetProcAddress(hModule, "WTSGetListenerSecurityA");
	pWTSGetListenerSecurityW = (DWORD_PTR)GetProcAddress(hModule, "WTSGetListenerSecurityW");
	pWTSIsChildSessionsEnabled = (DWORD_PTR)GetProcAddress(hModule, "WTSIsChildSessionsEnabled");
	pWTSLogoffSession = (DWORD_PTR)GetProcAddress(hModule, "WTSLogoffSession");
	pWTSOpenServerA = (DWORD_PTR)GetProcAddress(hModule, "WTSOpenServerA");
	pWTSOpenServerExA = (DWORD_PTR)GetProcAddress(hModule, "WTSOpenServerExA");
	pWTSOpenServerExW = (DWORD_PTR)GetProcAddress(hModule, "WTSOpenServerExW");
	pWTSOpenServerW = (DWORD_PTR)GetProcAddress(hModule, "WTSOpenServerW");
	pWTSQueryListenerConfigA = (DWORD_PTR)GetProcAddress(hModule, "WTSQueryListenerConfigA");
	pWTSQueryListenerConfigW = (DWORD_PTR)GetProcAddress(hModule, "WTSQueryListenerConfigW");
	pWTSQuerySessionInformationA = (DWORD_PTR)GetProcAddress(hModule, "WTSQuerySessionInformationA");
	pWTSQuerySessionInformationW = (DWORD_PTR)GetProcAddress(hModule, "WTSQuerySessionInformationW");
	pWTSQueryUserConfigA = (DWORD_PTR)GetProcAddress(hModule, "WTSQueryUserConfigA");
	pWTSQueryUserConfigW = (DWORD_PTR)GetProcAddress(hModule, "WTSQueryUserConfigW");
	pWTSQueryUserToken = (DWORD_PTR)GetProcAddress(hModule, "WTSQueryUserToken");
	pWTSRegisterSessionNotification = (DWORD_PTR)GetProcAddress(hModule, "WTSRegisterSessionNotification");
	pWTSRegisterSessionNotificationEx = (DWORD_PTR)GetProcAddress(hModule, "WTSRegisterSessionNotificationEx");
	pWTSSendMessageA = (DWORD_PTR)GetProcAddress(hModule, "WTSSendMessageA");
	pWTSSendMessageW = (DWORD_PTR)GetProcAddress(hModule, "WTSSendMessageW");
	pWTSSetListenerSecurityA = (DWORD_PTR)GetProcAddress(hModule, "WTSSetListenerSecurityA");
	pWTSSetListenerSecurityW = (DWORD_PTR)GetProcAddress(hModule, "WTSSetListenerSecurityW");
	pWTSSetRenderHint = (DWORD_PTR)GetProcAddress(hModule, "WTSSetRenderHint");
	pWTSSetSessionInformationA = (DWORD_PTR)GetProcAddress(hModule, "WTSSetSessionInformationA");
	pWTSSetSessionInformationW = (DWORD_PTR)GetProcAddress(hModule, "WTSSetSessionInformationW");
	pWTSSetUserConfigA = (DWORD_PTR)GetProcAddress(hModule, "WTSSetUserConfigA");
	pWTSSetUserConfigW = (DWORD_PTR)GetProcAddress(hModule, "WTSSetUserConfigW");
	pWTSShutdownSystem = (DWORD_PTR)GetProcAddress(hModule, "WTSShutdownSystem");
	pWTSStartRemoteControlSessionA = (DWORD_PTR)GetProcAddress(hModule, "WTSStartRemoteControlSessionA");
	pWTSStartRemoteControlSessionW = (DWORD_PTR)GetProcAddress(hModule, "WTSStartRemoteControlSessionW");
	pWTSStopRemoteControlSession = (DWORD_PTR)GetProcAddress(hModule, "WTSStopRemoteControlSession");
	pWTSTerminateProcess = (DWORD_PTR)GetProcAddress(hModule, "WTSTerminateProcess");
	pWTSUnRegisterSessionNotification = (DWORD_PTR)GetProcAddress(hModule, "WTSUnRegisterSessionNotification");
	pWTSUnRegisterSessionNotificationEx = (DWORD_PTR)GetProcAddress(hModule, "WTSUnRegisterSessionNotificationEx");
	pWTSVirtualChannelClose = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelClose");
	pWTSVirtualChannelOpen = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelOpen");
	pWTSVirtualChannelOpenEx = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelOpenEx");
	pWTSVirtualChannelPurgeInput = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelPurgeInput");
	pWTSVirtualChannelPurgeOutput = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelPurgeOutput");
	pWTSVirtualChannelQuery = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelQuery");
	pWTSVirtualChannelRead = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelRead");
	pWTSVirtualChannelWrite = (DWORD_PTR)GetProcAddress(hModule, "WTSVirtualChannelWrite");
	pWTSWaitSystemEvent = (DWORD_PTR)GetProcAddress(hModule, "WTSWaitSystemEvent");
}

void UninitProxy() {
	if (hModule) {
		FreeLibrary(hModule);
		hModule = NULL;
	}
}