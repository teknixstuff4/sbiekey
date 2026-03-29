!include nsDialogs.nsh
!include WordFunc.nsh

SetCompress force
SetCompressor lzma
Icon icon.ico
Unicode true
Name "Sandboxie-Plus Activator"
caption "Sandboxie-Plus Activator"
RequestExecutionLevel Admin
ShowInstDetails show
XPStyle on
BrandingText "crackthemall@teknixstuff.com"
ChangeUI all uires.dll
InstallButtonText "&Activate"

Var Dialog
Var ImageCtrl
Var InstPathCtrl
Var NameCtrl
Var BmpHandle
Var SbieDir
Var LicName

Function GetParent
  Exch $R0
  Push $R1
  Push $R2
  Push $R3
 
  StrCpy $R1 0
  StrLen $R2 $R0
 
  loop:
    IntOp $R1 $R1 + 1
    IntCmp $R1 $R2 get 0 get
    StrCpy $R3 $R0 1 -$R1
    StrCmp $R3 "\" get
  Goto loop
 
  get:
    StrCpy $R0 $R0 -$R1
 
    Pop $R3
    Pop $R2
    Pop $R1
    Exch $R0
FunctionEnd

Function .onInit
  InitPluginsDir
FunctionEnd

Function mainPageCreate
  nsDialogs::Create 1018
  Pop $Dialog

  ${If} $Dialog == error
    Abort
  ${EndIf}

  File /oname=$PLUGINSDIR\sbielogo.bmp sbielogo.bmp
  ${NSD_CreateBitmap} 0 0 100% 91 ""
  Pop $ImageCtrl
  ${NSD_SetBitmap} $ImageCtrl $PLUGINSDIR\sbielogo.bmp $BmpHandle

  ${NSD_CreateLabel} 7 110 406 20 "Sandboxie installation path:"
  Pop $0
  ReadRegStr $0 HKLM SYSTEM\CurrentControlSet\Services\SbieDrv ImagePath
  StrCpy $1 $0 4
  ${If} $1 == "\??\"
    StrCpy $0 $0 "" 4
  ${EndIf}
  Push $0
  Call GetParent
  Pop $0
  ${NSD_CreateText} 7 130 323 21 $0
  Pop $InstPathCtrl
  ${NSD_CreateBrowseButton} 334 130 75 22 "Browse..."
  Pop $0
  GetFunctionAddress $1 OnClick_Browse
  nsDialogs::OnClick $0 $1

  ${NSD_CreateLabel} 7 164 406 20 "License name:"
  Pop $0
  ReadEnvStr $0 USERNAME
  ${NSD_CreateText} 7 184 406 21 $0
  Pop $NameCtrl

  nsDialogs::Show

  ${NSD_FreeBitmap} $BmpHandle
  Delete $PLUGINSDIR\sbielogo.bmp
FunctionEnd

Function mainPageExit
  ${NSD_GetText} $InstPathCtrl $SbieDir
  ${IfNot} ${FileExists} "$SbieDir\kmdutil.exe"
    MessageBox MB_OK|MB_ICONSTOP "Invalid installation directory."
    Abort
  ${EndIf}
  ${NSD_GetText} $NameCtrl $LicName
FunctionEnd

Function OnClick_Browse
  ${NSD_GetText} $InstPathCtrl $SbieDir
  nsDialogs::SelectFolderDialog "Select Sandboxie installation directory" "$SbieDir"
  Pop $0
  ${If} $0 == error
    Abort
  ${EndIf}
  ${NSD_SetText} $InstPathCtrl $0
FunctionEnd

Page custom mainPageCreate mainPageExit
Page instFiles

Section ""
  ${WordReplace} $SbieDir "\" "\\" "+" $0
  ;ExecWait "mshta $\"vbscript:Close(Execute($\"$\"Set objService = CreateObject($\"$\"$\"$\"WbemScripting.SWbemLocator$\"$\"$\"$\").ConnectServer($\"$\"$\"$\".$\"$\"$\"$\", $\"$\"$\"$\"root\cimv2$\"$\"$\"$\") : objService.Security_.ImpersonationLevel = 3 : For each oProc in objService.ExecQuery($\"$\"$\"$\"SELECT * FROM Win32_Process WHERE ExecutablePath='$0\\SandMan.exe' OR ExecutablePath='$0\\SbieCtrl.exe' OR ExecutablePath='$0\\Start.exe'$\"$\"$\"$\") : oProc.Terminate() : Next$\"$\"))$\""
  nsExec::ExecToLog "wmic path Win32_Process where $\"ExecutablePath='$0\\SandMan.exe' OR ExecutablePath='$0\\SbieCtrl.exe' OR ExecutablePath='$0\\Start.exe'$\" call terminate"
  Pop $0
  SetOutPath $SbieDir
  SetOverwrite try
  ExecWait "$\"$SbieDir\kmdutil.exe$\" stop sbiesvc"
  File ${InputLib}
  DetailPrint "Write: certificate.dat"
  FileOpen $0 Certificate.dat w
  FileWrite $0 "NAME: $LicName$\r$\nTYPE: CONTRIBUTOR$\r$\nSIGNATURE: NONE"
  FileClose $0
  ExecWait "$\"$SbieDir\kmdutil.exe$\" stop sbiesvc"
  ExecWait "$\"$SbieDir\kmdutil.exe$\" stop sbiedrv"
  ExecWait "$\"$SbieDir\kmdutil.exe$\" start sbiesvc"
SectionEnd