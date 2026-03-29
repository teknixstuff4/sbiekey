.data
extern pIsInteractiveUserSession : qword 
extern pQueryActiveSession : qword 
extern pQueryUserToken : qword 
extern pRegisterUsertokenForNoWinlogon : qword 
extern pWTSCloseServer : qword 
extern pWTSConnectSessionA : qword 
extern pWTSConnectSessionW : qword 
extern pWTSCreateListenerA : qword 
extern pWTSCreateListenerW : qword 
extern pWTSDisconnectSession : qword 
extern pWTSEnableChildSessions : qword 
extern pWTSEnumerateListenersA : qword 
extern pWTSEnumerateListenersW : qword 
extern pWTSEnumerateProcessesA : qword 
extern pWTSEnumerateProcessesExA : qword 
extern pWTSEnumerateProcessesExW : qword 
extern pWTSEnumerateProcessesW : qword 
extern pWTSEnumerateServersA : qword 
extern pWTSEnumerateServersW : qword 
extern pWTSEnumerateSessionsA : qword 
extern pWTSEnumerateSessionsExA : qword 
extern pWTSEnumerateSessionsExW : qword 
extern pWTSEnumerateSessionsW : qword 
extern pWTSFreeMemory : qword 
extern pWTSFreeMemoryExA : qword 
extern pWTSFreeMemoryExW : qword 
extern pWTSGetChildSessionId : qword 
extern pWTSGetListenerSecurityA : qword 
extern pWTSGetListenerSecurityW : qword 
extern pWTSIsChildSessionsEnabled : qword 
extern pWTSLogoffSession : qword 
extern pWTSOpenServerA : qword 
extern pWTSOpenServerExA : qword 
extern pWTSOpenServerExW : qword 
extern pWTSOpenServerW : qword 
extern pWTSQueryListenerConfigA : qword 
extern pWTSQueryListenerConfigW : qword 
extern pWTSQuerySessionInformationA : qword 
extern pWTSQuerySessionInformationW : qword 
extern pWTSQueryUserConfigA : qword 
extern pWTSQueryUserConfigW : qword 
extern pWTSQueryUserToken : qword 
extern pWTSRegisterSessionNotification : qword 
extern pWTSRegisterSessionNotificationEx : qword 
extern pWTSSendMessageA : qword 
extern pWTSSendMessageW : qword 
extern pWTSSetListenerSecurityA : qword 
extern pWTSSetListenerSecurityW : qword 
extern pWTSSetRenderHint : qword 
extern pWTSSetSessionInformationA : qword 
extern pWTSSetSessionInformationW : qword 
extern pWTSSetUserConfigA : qword 
extern pWTSSetUserConfigW : qword 
extern pWTSShutdownSystem : qword 
extern pWTSStartRemoteControlSessionA : qword 
extern pWTSStartRemoteControlSessionW : qword 
extern pWTSStopRemoteControlSession : qword 
extern pWTSTerminateProcess : qword 
extern pWTSUnRegisterSessionNotification : qword 
extern pWTSUnRegisterSessionNotificationEx : qword 
extern pWTSVirtualChannelClose : qword 
extern pWTSVirtualChannelOpen : qword 
extern pWTSVirtualChannelOpenEx : qword 
extern pWTSVirtualChannelPurgeInput : qword 
extern pWTSVirtualChannelPurgeOutput : qword 
extern pWTSVirtualChannelQuery : qword 
extern pWTSVirtualChannelRead : qword 
extern pWTSVirtualChannelWrite : qword 
extern pWTSWaitSystemEvent : qword 
.code
IsInteractiveUserSession proc
jmp qword ptr [pIsInteractiveUserSession]  
IsInteractiveUserSession endp 
QueryActiveSession proc  
jmp qword ptr [pQueryActiveSession]  
QueryActiveSession endp 
QueryUserToken proc  
jmp qword ptr [pQueryUserToken]  
QueryUserToken endp 
RegisterUsertokenForNoWinlogon proc  
jmp qword ptr [pRegisterUsertokenForNoWinlogon]  
RegisterUsertokenForNoWinlogon endp 
WTSCloseServer proc  
jmp qword ptr [pWTSCloseServer]  
WTSCloseServer endp 
WTSConnectSessionA proc  
jmp qword ptr [pWTSConnectSessionA]  
WTSConnectSessionA endp 
WTSConnectSessionW proc  
jmp qword ptr [pWTSConnectSessionW]  
WTSConnectSessionW endp 
WTSCreateListenerA proc  
jmp qword ptr [pWTSCreateListenerA]  
WTSCreateListenerA endp 
WTSCreateListenerW proc  
jmp qword ptr [pWTSCreateListenerW]  
WTSCreateListenerW endp 
WTSDisconnectSession proc  
jmp qword ptr [pWTSDisconnectSession]  
WTSDisconnectSession endp 
WTSEnableChildSessions proc  
jmp qword ptr [pWTSEnableChildSessions]  
WTSEnableChildSessions endp 
WTSEnumerateListenersA proc  
jmp qword ptr [pWTSEnumerateListenersA]  
WTSEnumerateListenersA endp 
WTSEnumerateListenersW proc  
jmp qword ptr [pWTSEnumerateListenersW]  
WTSEnumerateListenersW endp 
WTSEnumerateProcessesA proc  
jmp qword ptr [pWTSEnumerateProcessesA]  
WTSEnumerateProcessesA endp 
WTSEnumerateProcessesExA proc  
jmp qword ptr [pWTSEnumerateProcessesExA]  
WTSEnumerateProcessesExA endp 
WTSEnumerateProcessesExW proc  
jmp qword ptr [pWTSEnumerateProcessesExW]  
WTSEnumerateProcessesExW endp 
WTSEnumerateProcessesW proc  
jmp qword ptr [pWTSEnumerateProcessesW]  
WTSEnumerateProcessesW endp 
WTSEnumerateServersA proc  
jmp qword ptr [pWTSEnumerateServersA]  
WTSEnumerateServersA endp 
WTSEnumerateServersW proc  
jmp qword ptr [pWTSEnumerateServersW]  
WTSEnumerateServersW endp 
WTSEnumerateSessionsA proc  
jmp qword ptr [pWTSEnumerateSessionsA]  
WTSEnumerateSessionsA endp 
WTSEnumerateSessionsExA proc  
jmp qword ptr [pWTSEnumerateSessionsExA]  
WTSEnumerateSessionsExA endp 
WTSEnumerateSessionsExW proc  
jmp qword ptr [pWTSEnumerateSessionsExW]  
WTSEnumerateSessionsExW endp 
WTSEnumerateSessionsW proc  
jmp qword ptr [pWTSEnumerateSessionsW]  
WTSEnumerateSessionsW endp 
WTSFreeMemory proc  
jmp qword ptr [pWTSFreeMemory]  
WTSFreeMemory endp 
WTSFreeMemoryExA proc  
jmp qword ptr [pWTSFreeMemoryExA]  
WTSFreeMemoryExA endp 
WTSFreeMemoryExW proc  
jmp qword ptr [pWTSFreeMemoryExW]  
WTSFreeMemoryExW endp 
WTSGetChildSessionId proc  
jmp qword ptr [pWTSGetChildSessionId]  
WTSGetChildSessionId endp 
WTSGetListenerSecurityA proc  
jmp qword ptr [pWTSGetListenerSecurityA]  
WTSGetListenerSecurityA endp 
WTSGetListenerSecurityW proc  
jmp qword ptr [pWTSGetListenerSecurityW]  
WTSGetListenerSecurityW endp 
WTSIsChildSessionsEnabled proc  
jmp qword ptr [pWTSIsChildSessionsEnabled]  
WTSIsChildSessionsEnabled endp 
WTSLogoffSession proc  
jmp qword ptr [pWTSLogoffSession]  
WTSLogoffSession endp 
WTSOpenServerA proc  
jmp qword ptr [pWTSOpenServerA]  
WTSOpenServerA endp 
WTSOpenServerExA proc  
jmp qword ptr [pWTSOpenServerExA]  
WTSOpenServerExA endp 
WTSOpenServerExW proc  
jmp qword ptr [pWTSOpenServerExW]  
WTSOpenServerExW endp 
WTSOpenServerW proc  
jmp qword ptr [pWTSOpenServerW]  
WTSOpenServerW endp 
WTSQueryListenerConfigA proc  
jmp qword ptr [pWTSQueryListenerConfigA]  
WTSQueryListenerConfigA endp 
WTSQueryListenerConfigW proc  
jmp qword ptr [pWTSQueryListenerConfigW]  
WTSQueryListenerConfigW endp 
WTSQuerySessionInformationA proc  
jmp qword ptr [pWTSQuerySessionInformationA]  
WTSQuerySessionInformationA endp 
WTSQuerySessionInformationW proc  
jmp qword ptr [pWTSQuerySessionInformationW]  
WTSQuerySessionInformationW endp 
WTSQueryUserConfigA proc  
jmp qword ptr [pWTSQueryUserConfigA]  
WTSQueryUserConfigA endp 
WTSQueryUserConfigW proc  
jmp qword ptr [pWTSQueryUserConfigW]  
WTSQueryUserConfigW endp 
WTSQueryUserToken proc  
jmp qword ptr [pWTSQueryUserToken]  
WTSQueryUserToken endp 
WTSRegisterSessionNotification proc  
jmp qword ptr [pWTSRegisterSessionNotification]  
WTSRegisterSessionNotification endp 
WTSRegisterSessionNotificationEx proc  
jmp qword ptr [pWTSRegisterSessionNotificationEx]  
WTSRegisterSessionNotificationEx endp 
WTSSendMessageA proc  
jmp qword ptr [pWTSSendMessageA]  
WTSSendMessageA endp 
WTSSendMessageW proc  
jmp qword ptr [pWTSSendMessageW]  
WTSSendMessageW endp 
WTSSetListenerSecurityA proc  
jmp qword ptr [pWTSSetListenerSecurityA]  
WTSSetListenerSecurityA endp 
WTSSetListenerSecurityW proc  
jmp qword ptr [pWTSSetListenerSecurityW]  
WTSSetListenerSecurityW endp 
WTSSetRenderHint proc  
jmp qword ptr [pWTSSetRenderHint]  
WTSSetRenderHint endp 
WTSSetSessionInformationA proc  
jmp qword ptr [pWTSSetSessionInformationA]  
WTSSetSessionInformationA endp 
WTSSetSessionInformationW proc  
jmp qword ptr [pWTSSetSessionInformationW]  
WTSSetSessionInformationW endp 
WTSSetUserConfigA proc  
jmp qword ptr [pWTSSetUserConfigA]  
WTSSetUserConfigA endp 
WTSSetUserConfigW proc  
jmp qword ptr [pWTSSetUserConfigW]  
WTSSetUserConfigW endp 
WTSShutdownSystem proc  
jmp qword ptr [pWTSShutdownSystem]  
WTSShutdownSystem endp 
WTSStartRemoteControlSessionA proc  
jmp qword ptr [pWTSStartRemoteControlSessionA]  
WTSStartRemoteControlSessionA endp 
WTSStartRemoteControlSessionW proc  
jmp qword ptr [pWTSStartRemoteControlSessionW]  
WTSStartRemoteControlSessionW endp 
WTSStopRemoteControlSession proc  
jmp qword ptr [pWTSStopRemoteControlSession]  
WTSStopRemoteControlSession endp 
WTSTerminateProcess proc  
jmp qword ptr [pWTSTerminateProcess]  
WTSTerminateProcess endp 
WTSUnRegisterSessionNotification proc  
jmp qword ptr [pWTSUnRegisterSessionNotification]  
WTSUnRegisterSessionNotification endp 
WTSUnRegisterSessionNotificationEx proc  
jmp qword ptr [pWTSUnRegisterSessionNotificationEx]  
WTSUnRegisterSessionNotificationEx endp 
WTSVirtualChannelClose proc  
jmp qword ptr [pWTSVirtualChannelClose]  
WTSVirtualChannelClose endp 
WTSVirtualChannelOpen proc  
jmp qword ptr [pWTSVirtualChannelOpen]  
WTSVirtualChannelOpen endp 
WTSVirtualChannelOpenEx proc  
jmp qword ptr [pWTSVirtualChannelOpenEx]  
WTSVirtualChannelOpenEx endp 
WTSVirtualChannelPurgeInput proc  
jmp qword ptr [pWTSVirtualChannelPurgeInput]  
WTSVirtualChannelPurgeInput endp 
WTSVirtualChannelPurgeOutput proc  
jmp qword ptr [pWTSVirtualChannelPurgeOutput]  
WTSVirtualChannelPurgeOutput endp 
WTSVirtualChannelQuery proc  
jmp qword ptr [pWTSVirtualChannelQuery]  
WTSVirtualChannelQuery endp 
WTSVirtualChannelRead proc  
jmp qword ptr [pWTSVirtualChannelRead]  
WTSVirtualChannelRead endp 
WTSVirtualChannelWrite proc  
jmp qword ptr [pWTSVirtualChannelWrite]  
WTSVirtualChannelWrite endp 
WTSWaitSystemEvent proc  
jmp qword ptr [pWTSWaitSystemEvent]  
WTSWaitSystemEvent endp 
end
