#include <windows.h>
#include <RilAPItypes.h>
extern "C" {
typedef HANDLE HRIL, *LPHRIL;
typedef void (CALLBACK *RILRESULTCALLBACK)(
    HRIL hRil,
    DWORD dwCode,
    LPVOID usersContext,
    const void* lpData,
    DWORD cbData,
    LPVOID lpParam
);
typedef void (CALLBACK *RILNOTIFYCALLBACK)(
    HRIL hRil,
    DWORD dwCode,
    const void* lpData,
    DWORD cbData,
    LPVOID lpParam
);
HRESULT RIL_Initialize(
    _In_ DWORD dwIndex,
    _In_ RILRESULTCALLBACK pfnResult,
    _In_ RILNOTIFYCALLBACK pfnNotify,
    _In_ DWORD *lpdwNotifications,
    _In_ DWORD dwNotificationCount,
    _In_ LPVOID lpParam,
    _In_z_ WCHAR* pwszClientName,
    _Out_ HRIL* lphRil
);
HRESULT RIL_Deinitialize(
    HRIL hRil
);
HRESULT RIL_GetNumberOfModems(
    DWORD *lpdwNumModem
);
HRESULT RIL_EnableNotifications(
    HRIL hRil,
    LPVOID usersContext,
    DWORD *lpdwNotifications,
    DWORD dwNotificationCount
);
HRESULT RIL_DisableNotifications(
    HRIL hRil,
    LPVOID usersContext,
    DWORD *lpdwNotifications,
    DWORD dwNotificationCount
);
HRESULT RIL_GetDriverVersion(HRIL hRil, LPVOID lpContext, DWORD dwMinVersion, DWORD dwMaxVersion);
HRESULT RIL_GetDevCaps(HRIL hRil, LPVOID lpContext, DWORD dwCapsType);
HRESULT RIL_GetDeviceInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILDEVICEINFORMATION dwId);
HRESULT RIL_GetEquipmentState(HRIL hRil, LPVOID lpContext);
HRESULT RIL_SetEquipmentState(HRIL hRil, LPVOID lpContext, DWORD dwEquipmentState);
HRESULT RIL_SetNotificationFilterState(HRIL hRil, LPVOID lpContext, DWORD dwFilterMask, DWORD dwFilterState);
HRESULT RIL_GetNotificationFilterState(HRIL hRil, LPVOID lpContext);
HRESULT RIL_ResetModem(HRIL hRil, LPVOID lpContext, RILRESETMODEMKIND dwResetKind);
HRESULT RIL_EnumerateSlots(HRIL hRil, LPVOID lpContext);
HRESULT RIL_GetCardInfo(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex);
HRESULT RIL_SetSlotPower(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, BOOL fPowerOn);
HRESULT RIL_GetUiccRecordStatus(HRIL hRil, LPVOID lpContext, const RILUICCFILEPATH *lpFilePath);
HRESULT RIL_SendRestrictedUiccCmd(HRIL hRil, LPVOID lpContext, RILUICCCOMMAND dwCommand, const RILUICCCMDPARAMETERS *lpParameters, const BYTE *lpbData, DWORD dwSize, const RILUICCLOCKCREDENTIAL *lpLockVerification);
HRESULT RIL_WatchUiccFileChange(HRIL hRil, LPVOID lpContext, const RILUICCFILES * lpUiccFiles);
HRESULT RIL_GetUiccPRLID(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
HRESULT RIL_GetIMSI(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
HRESULT RIL_GetSubscriberNumbers(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
HRESULT RIL_GetUiccATR(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex);
HRESULT RIL_OpenUiccLogicalChannel(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelGroup, DWORD dwAppIdLength, const BYTE *pbAppId, DWORD dwSelectP2Arg);
HRESULT RIL_CloseUiccLogicalChannel(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelId);
HRESULT RIL_CloseUiccLogicalChannelGroup(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelGroup);
HRESULT RIL_ExchangeUiccAPDU(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, DWORD dwChannelId, DWORD dwAPDULength, const BYTE *bAPDU);
HRESULT RIL_GetUiccLockState(HRIL hRil, LPVOID lpContext, const RILUICCLOCK *lpRilUiccLock);
HRESULT RIL_GetUiccServiceLock(HRIL hRil, LPVOID lpContext, const RILUICCSERVICE *lpService);
HRESULT RIL_VerifyUiccLock(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpVerification);
HRESULT RIL_SetUiccLockEnabled(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpLockCredential, BOOL fEnable);
HRESULT RIL_UnblockUiccLock(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpLockCredential, LPCSTR lpszNewPassword);
HRESULT RIL_ChangeUiccLockPassword(HRIL hRil, LPVOID lpContext, const RILUICCLOCKCREDENTIAL *lpLockCredential, LPCSTR lpszNewPassword);
HRESULT RIL_GetUiccAppPersoCheckState(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
HRESULT RIL_GetPersoDeactivationState(HRIL hRil, LPVOID lpContext, DWORD dwPersoFeature);
HRESULT RIL_DeactivatePerso(HRIL hRil, LPVOID lpContext, DWORD dwPersoFeature, LPCSTR lpszPassword);
HRESULT RIL_GetUiccServiceState(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILUICCSERVICESERVICE dwService);
HRESULT RIL_SetUiccServiceState(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILUICCSERVICESERVICE dwService, const RILUICCLOCKCREDENTIAL *lpLockCredential, BOOL fEnable);
HRESULT RIL_ReadPhonebookEntries(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation, DWORD dwStartIndex, DWORD dwEndIndex);
HRESULT RIL_WritePhonebookEntry(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation, const RILPHONEBOOKENTRY *lpEntry, const RILUICCLOCKCREDENTIAL *lpLockVerification);
HRESULT RIL_DeletePhonebookEntry(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation, DWORD dwIndex, const RILUICCLOCKCREDENTIAL *lpLockVerification);
HRESULT RIL_GetPhonebookOptions(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILPHONEENTRYSTORELOCATION dwStoreLocation);
HRESULT RIL_GetAllAdditionalNumberStrings(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
HRESULT RIL_WriteAdditionalNumberString(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, const RILPHONEBOOKADDITIONALNUMBERSTRING *lpRilPBANS);
HRESULT RIL_DeleteAdditionalNumberString(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwNumId);
HRESULT RIL_GetAllEmergencyNumbers(HRIL hRil, LPVOID lpContext);
HRESULT RIL_SetRadioConfiguration(HRIL hRil, LPVOID lpContext, DWORD dwConfigIdx);
HRESULT RIL_GetRadioConfiguration(HRIL hRil, LPVOID lpContext);
HRESULT RIL_SetExecutorConfig(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const RILEXECUTORCONFIG *lpRilExecutorConfig);
HRESULT RIL_GetExecutorConfig(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_SetSystemSelectionPrefs_V1(HRIL hRil, LPVOID lpContext, RILSETSYSTEMSELECTIONPREFSFLAG dwFlags, const RILSYSTEMSELECTIONPREFS_V1 *lpRilSystemSelectionPrefs);
HRESULT RIL_SetSystemSelectionPrefs(HRIL hRil, LPVOID lpContext, RILSETSYSTEMSELECTIONPREFSFLAG dwFlags, const RILSYSTEMSELECTIONPREFS *lpRilSystemSelectionPrefs);
HRESULT RIL_GetSystemSelectionPrefs(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetOperatorList(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, DWORD dwSystemTypes);
HRESULT RIL_GetPreferredOperatorList(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, RILGETPREFERENCEDOPERATORLISTFORMAT dwFormat);
HRESULT RIL_SetPreferredOperatorList(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwPreferredListSize, RILOPERATORNAMES *lpPreferredList);
HRESULT RIL_GetCurrentRegStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetSignalQuality(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_RegisterUiccToolkitService(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex);
HRESULT RIL_SetUiccToolkitProfile(HRIL hRil, LPVOID lpContext, const RILUICCTOOLKITPROFILE *lpToolkitProfile);
HRESULT RIL_GetUiccToolkitProfile(HRIL hRil, LPVOID lpContext);
HRESULT RIL_SendUiccToolkitCmdResponse(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, const LPBYTE pbDetails, DWORD dwDetailSize);
HRESULT RIL_SendUiccToolkitEnvelope(HRIL hRil, LPVOID lpContext, DWORD dwSlotIndex, const LPBYTE pbEnvelope, DWORD dwEnvelopeSize);
HRESULT RIL_Dial_V1(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const RILADDRESS *lpraAddress, DWORD dwOptions);
HRESULT RIL_Dial(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const RILADDRESS *lpraAddress, DWORD dwOptions, RILCALLTYPE dwType, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer);
HRESULT RIL_ManageCalls_V1(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID);
HRESULT RIL_ManageCalls_V2(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer);
HRESULT RIL_ManageCalls_V3(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer, const LPRILADDRESS lpraAddress);
HRESULT RIL_ManageCalls(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILMANAGECALLPARAMSCOMMAND dwCommand, DWORD dwID, const LPRILCALLMEDIAOFFERANSWERSET lprcmOfferAnswer, const LPRILADDRESS lpraAddress, const LPRILCALLRTT lpstRTTInfo);
HRESULT RIL_GetCallList(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_EmergencyModeControl(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILEMERGENCYMODECONTROLPARAMSCONTROL dwEmergencyModeControl);
HRESULT RIL_GetCallForwardingSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, BOOL fAllClasses, DWORD dwInfoClasses);
HRESULT RIL_SetCallForwardingStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, BOOL fAllClasses, DWORD dwInfoClasses, RILSERVICESETTINGSSTATUS dwStatus);
HRESULT RIL_AddCallForwarding(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, const RILCALLFORWARDINGSETTINGS *lpSettings);
HRESULT RIL_RemoveCallForwarding(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLFORWARDINGSETTINGSREASON dwReason, DWORD dwInfoClasses);
HRESULT RIL_GetCallBarringStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLBARRINGSTATUSPARAMSTYPE dwType, BOOL fAllClasses, DWORD dwInfoClasses);
HRESULT RIL_SetCallBarringStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLBARRINGSTATUSPARAMSTYPE dwType, BOOL fAllClasses, DWORD dwInfoClasses, LPCSTR lpszPassword, RILCALLBARRINGSTATUSPARAMSSTATUS dwStatus);
HRESULT RIL_ChangeCallBarringPassword(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, RILCALLBARRINGSTATUSPARAMSTYPE dwType, LPCSTR lpwszOldPassword, LPCSTR lpwszNewPassword, LPCSTR lpszConfirmPassword);
HRESULT RIL_GetCallWaitingSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, BOOL fAllClasses, DWORD dwInfoClasses);
HRESULT RIL_SetCallWaitingStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, BOOL fAllClasses, DWORD dwInfoClasses, RILSERVICESETTINGSSTATUS dwStatus);
HRESULT RIL_GetCallerIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetDialedIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetHideConnectedIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetHideIdSettings(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_SendFlash(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, LPRILADDRESS lpraRilAddress);
HRESULT RIL_SendSupServiceData(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const WCHAR *lpwszData);
HRESULT RIL_SendSupServiceDataResponse(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, const WCHAR *lpwszData);
HRESULT RIL_CancelSupServiceDataSession(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_SendRTT(HRIL hRil, LPVOID lpContext, DWORD dwID, DWORD dwExecutor, const WCHAR *lpwszRTTText);
HRESULT RIL_SendDTMF(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, LPCSTR lpszChars, DWORD dwDigitOnTimeMs, DWORD dwDigitOffTimeMs);
HRESULT RIL_StartDTMF(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, CHAR ch);
HRESULT RIL_StopDTMF(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetMsgServiceOptions(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
HRESULT RIL_ReadMsg(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex);
HRESULT RIL_WriteMsg(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, const RILMESSAGE* lpMessage, RILMESSAGESTATUS dwStatus);
HRESULT RIL_DeleteMsg(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex);
HRESULT RIL_GetCellBroadcastMsgConfig(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_SetCellBroadcastMsgConfig(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, const RILCBMSGCONFIG *lpCbMsgConfigInfo);
HRESULT RIL_GetMsgInUiccStatus(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex);
HRESULT RIL_SetMsgInUiccStatus(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, DWORD dwIndex, RILMESSAGESTATUS dwStatus);
HRESULT RIL_SetMsgMemoryStatus(HRIL hRil, LPVOID lpContext, BOOL bMsgMemoryFull);
HRESULT RIL_SendMsg(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, HUICCAPP hUiccApp, const RILMESSAGE *lpMessage, DWORD dwOptions);
HRESULT RIL_SendMsgAck_V1(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, HUICCAPP hUiccApp, DWORD dwAckID, RILMSGACKSTATUS dwMsgStatus);
HRESULT RIL_SendMsgAck(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, HUICCAPP hUiccApp, DWORD dwAckID, RILMSGACKSTATUS dwMsgStatus, RILSMSFORMAT dwSmsFormat, RILSMSACKOPT dwOptions);
HRESULT RIL_GetSMSC(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp);
HRESULT RIL_SetSMSC(HRIL hRil, LPVOID lpContext, HUICCAPP hUiccApp, const RILADDRESS *lpraSvcCtrAddress);
HRESULT RIL_GetIMSStatus(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetDMProfileConfigInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, DWORD dwConfigItem);
HRESULT RIL_SetDMProfileConfigInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, DWORD dwConfigItem, const RILDMCONFIGINFOVALUE *rciValue);
HRESULT RIL_GetPositionInfo(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_SetGeolocationData(HRIL hRil, LPVOID lpContext, const RILSETGEOLOCATIONDATAPARAMS* pGeolocationData);
HRESULT RIL_GetRadioStateGroups(HRIL hRil, LPVOID lpContext, DWORD dwParentGroupId);
HRESULT RIL_GetRadioStateDetails(HRIL hRil, LPVOID lpContext, DWORD dwGroupId, DWORD dwItemId);
HRESULT RIL_SetRadioStateDetails(HRIL hRil, LPVOID lpContext, const RILRADIOSTATEITEMS *pItems);
HRESULT RIL_RadioStatePasswordCompare(HRIL hRil, LPVOID lpContext, const RILRADIOSTATEPASSWORD *lpRspRadioStatePassword);
HRESULT RIL_RadioStateGetPasswordRetryCount(HRIL hRil, LPVOID lpContext, DWORD dwPasswordId);
HRESULT RIL_DevSpecific(HRIL hRil, LPVOID lpContext, const BYTE *lpbParams, DWORD dwSize);
HRESULT RIL_SetRFState_V1(HRIL hRil, LPVOID lpContext, DWORD dwRFState);
HRESULT RIL_SetRFState(HRIL hRil, LPVOID lpContext, const LPRILRFSTATE lpRFState);
HRESULT RIL_GetRFState(HRIL hRil, LPVOID lpContext);
HRESULT RIL_GetExecutorFocus(HRIL hRil, LPVOID lpContext);
HRESULT RIL_SetExecutorFocus(HRIL hRil, LPVOID lpContext, BOOL *pfFocusState, DWORD dwExecutorCount);
HRESULT RIL_GetEmergencyMode(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_GetExecutorRFState(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_SetExecutorRFState(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, BOOL fExecutorRFState);
HRESULT RIL_EnableModemFilters(HRIL hRil, LPVOID lpContext, DWORD filterID);
HRESULT RIL_DisableModemFilters(HRIL hRil, LPVOID lpContext, DWORD filterID);
HRESULT RIL_StartModemLogs(HRIL hRil, LPVOID lpContext);
HRESULT RIL_StopModemLogs(HRIL hRil, LPVOID lpContext);
HRESULT RIL_DrainModemLogs(HRIL hRil, LPVOID lpContext);
HRESULT RIL_CancelGetOperatorList(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
HRESULT RIL_AvoidCDMASystem(HRIL hRil, LPVOID lpContext, DWORD dwExecutor, enum RILCDMAAVOIDANCEREQUESTYPE requestType);
HRESULT RIL_SetPSMediaConfiguration(HRIL hRil, LPVOID lpContext, const LPRILPSMEDIACONFIGURATIONSET pConfigurationSet);
HRESULT RIL_GetPSMediaConfiguration(HRIL hRil, LPVOID lpContext, DWORD dwExecutor);
    }
