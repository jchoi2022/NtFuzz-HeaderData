       
typedef ULONG_PTR HTAPI_LINE;
typedef ULONG_PTR HDRV_LINE;
typedef ULONG_PTR HTAPI_CALL;
typedef ULONG_PTR HDRV_CALL;
typedef struct _LINE_ADDRESS_CAPS
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG ulLineDeviceID;
    ULONG ulAddressSize;
    ULONG ulAddressOffset;
    ULONG ulDevSpecificSize;
    ULONG ulDevSpecificOffset;
    ULONG ulAddressSharing;
    ULONG ulAddressStates;
    ULONG ulCallInfoStates;
    ULONG ulCallerIDFlags;
    ULONG ulCalledIDFlags;
    ULONG ulConnectedIDFlags;
    ULONG ulRedirectionIDFlags;
    ULONG ulRedirectingIDFlags;
    ULONG ulCallStates;
    ULONG ulDialToneModes;
    ULONG ulBusyModes;
    ULONG ulSpecialInfo;
    ULONG ulDisconnectModes;
    ULONG ulMaxNumActiveCalls;
    ULONG ulMaxNumOnHoldCalls;
    ULONG ulMaxNumOnHoldPendingCalls;
    ULONG ulMaxNumConference;
    ULONG ulMaxNumTransConf;
    ULONG ulAddrCapFlags;
    ULONG ulCallFeatures;
    ULONG ulRemoveFromConfCaps;
    ULONG ulRemoveFromConfState;
    ULONG ulTransferModes;
    ULONG ulParkModes;
    ULONG ulForwardModes;
    ULONG ulMaxForwardEntries;
    ULONG ulMaxSpecificEntries;
    ULONG ulMinFwdNumRings;
    ULONG ulMaxFwdNumRings;
    ULONG ulMaxCallCompletions;
    ULONG ulCallCompletionConds;
    ULONG ulCallCompletionModes;
    ULONG ulNumCompletionMessages;
    ULONG ulCompletionMsgTextEntrySize;
    ULONG ulCompletionMsgTextSize;
    ULONG ulCompletionMsgTextOffset;
} LINE_ADDRESS_CAPS, *PLINE_ADDRESS_CAPS;
typedef struct _LINE_ADDRESS_STATUS
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG ulNumInUse;
    ULONG ulNumActiveCalls;
    ULONG ulNumOnHoldCalls;
    ULONG ulNumOnHoldPendCalls;
    ULONG ulAddressFeatures;
    ULONG ulNumRingsNoAnswer;
    ULONG ulForwardNumEntries;
    ULONG ulForwardSize;
    ULONG ulForwardOffset;
    ULONG ulTerminalModesSize;
    ULONG ulTerminalModesOffset;
    ULONG ulDevSpecificSize;
    ULONG ulDevSpecificOffset;
} LINE_ADDRESS_STATUS, *PLINE_ADDRESS_STATUS;
typedef struct _LINE_DIAL_PARAMS
{
    ULONG ulDialPause;
    ULONG ulDialSpeed;
    ULONG ulDigitDuration;
    ULONG ulWaitForDialtone;
} LINE_DIAL_PARAMS, *PLINE_DIAL_PARAMS;
typedef struct _LINE_CALL_INFO
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG hLine;
    ULONG ulLineDeviceID;
    ULONG ulAddressID;
    ULONG ulBearerMode;
    ULONG ulRate;
    ULONG ulMediaMode;
    ULONG ulAppSpecific;
    ULONG ulCallID;
    ULONG ulRelatedCallID;
    ULONG ulCallParamFlags;
    ULONG ulCallStates;
    ULONG ulMonitorDigitModes;
    ULONG ulMonitorMediaModes;
    LINE_DIAL_PARAMS DialParams;
    ULONG ulOrigin;
    ULONG ulReason;
    ULONG ulCompletionID;
    ULONG ulNumOwners;
    ULONG ulNumMonitors;
    ULONG ulCountryCode;
    ULONG ulTrunk;
    ULONG ulCallerIDFlags;
    ULONG ulCallerIDSize;
    ULONG ulCallerIDOffset;
    ULONG ulCallerIDNameSize;
    ULONG ulCallerIDNameOffset;
    ULONG ulCalledIDFlags;
    ULONG ulCalledIDSize;
    ULONG ulCalledIDOffset;
    ULONG ulCalledIDNameSize;
    ULONG ulCalledIDNameOffset;
    ULONG ulConnectedIDFlags;
    ULONG ulConnectedIDSize;
    ULONG ulConnectedIDOffset;
    ULONG ulConnectedIDNameSize;
    ULONG ulConnectedIDNameOffset;
    ULONG ulRedirectionIDFlags;
    ULONG ulRedirectionIDSize;
    ULONG ulRedirectionIDOffset;
    ULONG ulRedirectionIDNameSize;
    ULONG ulRedirectionIDNameOffset;
    ULONG ulRedirectingIDFlags;
    ULONG ulRedirectingIDSize;
    ULONG ulRedirectingIDOffset;
    ULONG ulRedirectingIDNameSize;
    ULONG ulRedirectingIDNameOffset;
    ULONG ulAppNameSize;
    ULONG ulAppNameOffset;
    ULONG ulDisplayableAddressSize;
    ULONG ulDisplayableAddressOffset;
    ULONG ulCalledPartySize;
    ULONG ulCalledPartyOffset;
    ULONG ulCommentSize;
    ULONG ulCommentOffset;
    ULONG ulDisplaySize;
    ULONG ulDisplayOffset;
    ULONG ulUserUserInfoSize;
    ULONG ulUserUserInfoOffset;
    ULONG ulHighLevelCompSize;
    ULONG ulHighLevelCompOffset;
    ULONG ulLowLevelCompSize;
    ULONG ulLowLevelCompOffset;
    ULONG ulChargingInfoSize;
    ULONG ulChargingInfoOffset;
    ULONG ulTerminalModesSize;
    ULONG ulTerminalModesOffset;
    ULONG ulDevSpecificSize;
    ULONG ulDevSpecificOffset;
} LINE_CALL_INFO, *PLINE_CALL_INFO;
typedef struct _LINE_CALL_PARAMS
{
    ULONG ulTotalSize;
    ULONG ulBearerMode;
    ULONG ulMinRate;
    ULONG ulMaxRate;
    ULONG ulMediaMode;
    ULONG ulCallParamFlags;
    ULONG ulAddressMode;
    ULONG ulAddressID;
    LINE_DIAL_PARAMS DialParams;
    ULONG ulOrigAddressSize;
    ULONG ulOrigAddressOffset;
    ULONG ulDisplayableAddressSize;
    ULONG ulDisplayableAddressOffset;
    ULONG ulCalledPartySize;
    ULONG ulCalledPartyOffset;
    ULONG ulCommentSize;
    ULONG ulCommentOffset;
    ULONG ulUserUserInfoSize;
    ULONG ulUserUserInfoOffset;
    ULONG ulHighLevelCompSize;
    ULONG ulHighLevelCompOffset;
    ULONG ulLowLevelCompSize;
    ULONG ulLowLevelCompOffset;
    ULONG ulDevSpecificSize;
    ULONG ulDevSpecificOffset;
} LINE_CALL_PARAMS, *PLINE_CALL_PARAMS;
typedef struct _LINE_CALL_STATUS
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG ulCallState;
    ULONG ulCallStateMode;
    ULONG ulCallPrivilege;
    ULONG ulCallFeatures;
    ULONG ulDevSpecificSize;
    ULONG ulDevSpecificOffset;
} LINE_CALL_STATUS, *PLINE_CALL_STATUS;
typedef struct _LINE_EXTENSION_ID
{
    ULONG ulExtensionID0;
    ULONG ulExtensionID1;
    ULONG ulExtensionID2;
    ULONG ulExtensionID3;
} LINE_EXTENSION_ID, *PLINE_EXTENSION_ID;
typedef struct _LINE_DEV_CAPS
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG ulProviderInfoSize;
    ULONG ulProviderInfoOffset;
    ULONG ulSwitchInfoSize;
    ULONG ulSwitchInfoOffset;
    ULONG ulPermanentLineID;
    ULONG ulLineNameSize;
    ULONG ulLineNameOffset;
    ULONG ulStringFormat;
    ULONG ulAddressModes;
    ULONG ulNumAddresses;
    ULONG ulBearerModes;
    ULONG ulMaxRate;
    ULONG ulMediaModes;
    ULONG ulGenerateToneModes;
    ULONG ulGenerateToneMaxNumFreq;
    ULONG ulGenerateDigitModes;
    ULONG ulMonitorToneMaxNumFreq;
    ULONG ulMonitorToneMaxNumEntries;
    ULONG ulMonitorDigitModes;
    ULONG ulGatherDigitsMinTimeout;
    ULONG ulGatherDigitsMaxTimeout;
    ULONG ulMedCtlDigitMaxListSize;
    ULONG ulMedCtlMediaMaxListSize;
    ULONG ulMedCtlToneMaxListSize;
    ULONG ulMedCtlCallStateMaxListSize;
    ULONG ulDevCapFlags;
    ULONG ulMaxNumActiveCalls;
    ULONG ulAnswerMode;
    ULONG ulRingModes;
    ULONG ulLineStates;
    ULONG ulUUIAcceptSize;
    ULONG ulUUIAnswerSize;
    ULONG ulUUIMakeCallSize;
    ULONG ulUUIDropSize;
    ULONG ulUUISendUserUserInfoSize;
    ULONG ulUUICallInfoSize;
    LINE_DIAL_PARAMS MinDialParams;
    LINE_DIAL_PARAMS MaxDialParams;
    LINE_DIAL_PARAMS DefaultDialParams;
    ULONG ulNumTerminals;
    ULONG ulTerminalCapsSize;
    ULONG ulTerminalCapsOffset;
    ULONG ulTerminalTextEntrySize;
    ULONG ulTerminalTextSize;
    ULONG ulTerminalTextOffset;
    ULONG ulDevSpecificSize;
    ULONG ulDevSpecificOffset;
} LINE_DEV_CAPS, *PLINE_DEV_CAPS;
typedef struct _LINE_DEV_STATUS
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG ulNumOpens;
    ULONG ulOpenMediaModes;
    ULONG ulNumActiveCalls;
    ULONG ulNumOnHoldCalls;
    ULONG ulNumOnHoldPendCalls;
    ULONG ulLineFeatures;
    ULONG ulNumCallCompletions;
    ULONG ulRingMode;
    ULONG ulSignalLevel;
    ULONG ulBatteryLevel;
    ULONG ulRoamMode;
    ULONG ulDevStatusFlags;
    ULONG ulTerminalModesSize;
    ULONG ulTerminalModesOffset;
    ULONG ulDevSpecificSize;
    ULONG ulDevSpecificOffset;
} LINE_DEV_STATUS, *PLINE_DEV_STATUS;
typedef struct _VAR_STRING
{
    ULONG ulTotalSize;
    ULONG ulNeededSize;
    ULONG ulUsedSize;
    ULONG ulStringFormat;
    ULONG ulStringSize;
    ULONG ulStringOffset;
} VAR_STRING, *PVAR_STRING;
typedef struct _NDIS_TAPI_ACCEPT
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulUserUserInfoSize;
    _In_ UCHAR UserUserInfo[1];
} NDIS_TAPI_ACCEPT, *PNDIS_TAPI_ACCEPT;
typedef struct _NDIS_TAPI_ANSWER
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulUserUserInfoSize;
    _In_ UCHAR UserUserInfo[1];
} NDIS_TAPI_ANSWER, *PNDIS_TAPI_ANSWER;
typedef struct _NDIS_TAPI_CLOSE
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
} NDIS_TAPI_CLOSE, *PNDIS_TAPI_CLOSE;
typedef struct _NDIS_TAPI_CLOSE_CALL
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
} NDIS_TAPI_CLOSE_CALL, *PNDIS_TAPI_CLOSE_CALL;
typedef struct _NDIS_TAPI_CONDITIONAL_MEDIA_DETECTION
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ ULONG ulMediaModes;
    _In_ LINE_CALL_PARAMS LineCallParams;
} NDIS_TAPI_CONDITIONAL_MEDIA_DETECTION,
*PNDIS_TAPI_CONDITIONAL_MEDIA_DETECTION;
typedef struct _NDIS_TAPI_CONFIG_DIALOG
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _In_ ULONG ulDeviceClassSize;
    _In_ ULONG ulDeviceClassOffset;
    _In_ ULONG ulLibraryNameTotalSize;
    _Out_ ULONG ulLibraryNameNeededSize;
    _Out_ CHAR szLibraryName[1];
} NDIS_TAPI_CONFIG_DIALOG, *PNDIS_TAPI_CONFIG_DIALOG;
typedef struct _NDIS_TAPI_DEV_SPECIFIC
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ ULONG ulAddressID;
    _In_ HDRV_CALL hdCall;
    _Inout_ ULONG ulParamsSize;
    _Inout_ UCHAR Params[1];
} NDIS_TAPI_DEV_SPECIFIC, *PNDIS_TAPI_DEV_SPECIFIC;
typedef struct _NDIS_TAPI_DIAL
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulDestAddressSize;
    _In_ CHAR szDestAddress[1];
} NDIS_TAPI_DIAL, *PNDIS_TAPI_DIAL;
typedef struct _NDIS_TAPI_DROP
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulUserUserInfoSize;
    _In_ UCHAR UserUserInfo[1];
} NDIS_TAPI_DROP, *PNDIS_TAPI_DROP;
typedef struct _NDIS_TAPI_GET_ADDRESS_CAPS
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _In_ ULONG ulAddressID;
    _In_ ULONG ulExtVersion;
    _Out_ LINE_ADDRESS_CAPS LineAddressCaps;
} NDIS_TAPI_GET_ADDRESS_CAPS, *PNDIS_TAPI_GET_ADDRESS_CAPS;
typedef struct _NDIS_TAPI_GET_ADDRESS_ID
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _Out_ ULONG ulAddressID;
    _In_ ULONG ulAddressMode;
    _In_ ULONG ulAddressSize;
    _In_ CHAR szAddress[1];
} NDIS_TAPI_GET_ADDRESS_ID, *PNDIS_TAPI_GET_ADDRESS_ID;
typedef struct _NDIS_TAPI_GET_ADDRESS_STATUS
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ ULONG ulAddressID;
    _Out_ LINE_ADDRESS_STATUS LineAddressStatus;
} NDIS_TAPI_GET_ADDRESS_STATUS, *PNDIS_TAPI_GET_ADDRESS_STATUS;
typedef struct _NDIS_TAPI_GET_CALL_ADDRESS_ID
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _Out_ ULONG ulAddressID;
} NDIS_TAPI_GET_CALL_ADDRESS_ID, *PNDIS_TAPI_GET_CALL_ADDRESS_ID;
typedef struct _NDIS_TAPI_GET_CALL_INFO
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _Out_ LINE_CALL_INFO LineCallInfo;
} NDIS_TAPI_GET_CALL_INFO, *PNDIS_TAPI_GET_CALL_INFO;
typedef struct _NDIS_TAPI_GET_CALL_STATUS
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _Out_ LINE_CALL_STATUS LineCallStatus;
} NDIS_TAPI_GET_CALL_STATUS, *PNDIS_TAPI_GET_CALL_STATUS;
typedef struct _NDIS_TAPI_GET_DEV_CAPS
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _In_ ULONG ulExtVersion;
    _Out_ LINE_DEV_CAPS LineDevCaps;
} NDIS_TAPI_GET_DEV_CAPS, *PNDIS_TAPI_GET_DEV_CAPS;
typedef struct _NDIS_TAPI_GET_DEV_CONFIG
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _In_ ULONG ulDeviceClassSize;
    _In_ ULONG ulDeviceClassOffset;
    _Out_ VAR_STRING DeviceConfig;
} NDIS_TAPI_GET_DEV_CONFIG, *PNDIS_TAPI_GET_DEV_CONFIG;
typedef struct _NDIS_TAPI_GET_EXTENSION_ID
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _Out_ LINE_EXTENSION_ID LineExtensionID;
} NDIS_TAPI_GET_EXTENSION_ID, *PNDIS_TAPI_GET_EXTENSION_ID;
typedef struct _NDIS_TAPI_GET_ID
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ ULONG ulAddressID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulSelect;
    _In_ ULONG ulDeviceClassSize;
    _In_ ULONG ulDeviceClassOffset;
    _Out_ VAR_STRING DeviceID;
} NDIS_TAPI_GET_ID, *PNDIS_TAPI_GET_ID;
typedef struct _NDIS_TAPI_GET_LINE_DEV_STATUS
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _Out_ LINE_DEV_STATUS LineDevStatus;
} NDIS_TAPI_GET_LINE_DEV_STATUS, *PNDIS_TAPI_GET_LINE_DEV_STATUS;
typedef struct _NDIS_TAPI_MAKE_CALL
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ HTAPI_CALL htCall;
    _Out_ HDRV_CALL hdCall;
    _In_ ULONG ulDestAddressSize;
    _In_ ULONG ulDestAddressOffset;
    _In_ BOOLEAN bUseDefaultLineCallParams;
    _In_ LINE_CALL_PARAMS LineCallParams;
} NDIS_TAPI_MAKE_CALL, *PNDIS_TAPI_MAKE_CALL;
typedef struct _NDIS_TAPI_NEGOTIATE_EXT_VERSION
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _In_ ULONG ulLowVersion;
    _In_ ULONG ulHighVersion;
    _Out_ ULONG ulExtVersion;
} NDIS_TAPI_NEGOTIATE_EXT_VERSION, *PNDIS_TAPI_NEGOTIATE_EXT_VERSION;
typedef struct _NDIS_TAPI_OPEN
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _In_ HTAPI_LINE htLine;
    _Out_ HDRV_LINE hdLine;
} NDIS_TAPI_OPEN, *PNDIS_TAPI_OPEN;
typedef struct _NDIS_TAPI_PROVIDER_INITIALIZE
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceIDBase;
    _Out_ ULONG ulNumLineDevs;
    _Out_ ULONG_PTR ulProviderID;
} NDIS_TAPI_PROVIDER_INITIALIZE, *PNDIS_TAPI_PROVIDER_INITIALIZE;
typedef struct _NDIS_TAPI_PROVIDER_SHUTDOWN
{
    _In_ ULONG ulRequestID;
} NDIS_TAPI_PROVIDER_SHUTDOWN, *PNDIS_TAPI_PROVIDER_SHUTDOWN;
typedef struct _NDIS_TAPI_SECURE_CALL
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
} NDIS_TAPI_SECURE_CALL, *PNDIS_TAPI_SECURE_CALL;
typedef struct _NDIS_TAPI_SELECT_EXT_VERSION
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ ULONG ulExtVersion;
} NDIS_TAPI_SELECT_EXT_VERSION, *PNDIS_TAPI_SELECT_EXT_VERSION;
typedef struct _NDIS_TAPI_SEND_USER_USER_INFO
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulUserUserInfoSize;
    _In_ UCHAR UserUserInfo[1];
} NDIS_TAPI_SEND_USER_USER_INFO, *PNDIS_TAPI_SEND_USER_USER_INFO;
typedef struct _NDIS_TAPI_SET_APP_SPECIFIC
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulAppSpecific;
} NDIS_TAPI_SET_APP_SPECIFIC, *PNDIS_TAPI_SET_APP_SPECIFIC;
typedef struct _NDIS_TAPI_SET_CALL_PARAMS
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulBearerMode;
    _In_ ULONG ulMinRate;
    _In_ ULONG ulMaxRate;
    _In_ BOOLEAN bSetLineDialParams;
    _In_ LINE_DIAL_PARAMS LineDialParams;
} NDIS_TAPI_SET_CALL_PARAMS, *PNDIS_TAPI_SET_CALL_PARAMS;
typedef struct _NDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ ULONG ulMediaModes;
} NDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION,
*PNDIS_TAPI_SET_DEFAULT_MEDIA_DETECTION;
typedef struct _NDIS_TAPI_SET_DEV_CONFIG
{
    _In_ ULONG ulRequestID;
    _In_ ULONG ulDeviceID;
    _In_ ULONG ulDeviceClassSize;
    _In_ ULONG ulDeviceClassOffset;
    _In_ ULONG ulDeviceConfigSize;
    _In_ UCHAR DeviceConfig[1];
} NDIS_TAPI_SET_DEV_CONFIG, *PNDIS_TAPI_SET_DEV_CONFIG;
typedef struct _NDIS_TAPI_SET_MEDIA_MODE
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_CALL hdCall;
    _In_ ULONG ulMediaMode;
} NDIS_TAPI_SET_MEDIA_MODE, *PNDIS_TAPI_SET_MEDIA_MODE;
typedef struct _NDIS_TAPI_SET_STATUS_MESSAGES
{
    _In_ ULONG ulRequestID;
    _In_ HDRV_LINE hdLine;
    _In_ ULONG ulLineStates;
    _In_ ULONG ulAddressStates;
} NDIS_TAPI_SET_STATUS_MESSAGES, *PNDIS_TAPI_SET_STATUS_MESSAGES;
typedef struct _NDIS_TAPI_EVENT
{
    _In_ HTAPI_LINE htLine;
    _In_ HTAPI_CALL htCall;
    _In_ ULONG ulMsg;
    _In_ ULONG_PTR ulParam1;
    _In_ ULONG_PTR ulParam2;
    _In_ ULONG_PTR ulParam3;
} NDIS_TAPI_EVENT, *PNDIS_TAPI_EVENT;
typedef struct _NDISTAPI_CHARACTERISTICS {
 PVOID RequestProc;
 GUID Guid;
 NDIS_WAN_MEDIUM_SUBTYPE MediaType;
} NDISTAPI_CHARACTERISTICS, *PNDISTAPI_CHARACTERISTICS;
typedef struct _NDIS_TAPI_GATHER_DIGITS
{
    _In_ ULONG ulRequestID;
 IN HDRV_CALL hdCall;
 IN ULONG ulEndToEndID;
 IN ULONG ulDigitModes;
 _Field_size_(ulNumDigitsNeeded) IN LPWSTR lpsOrigDigitsBuffer;
 IN ULONG ulDigitsBufferOffset;
 IN ULONG ulNumDigitsNeeded;
 OUT ULONG ulNumDigitsRead;
 OUT ULONG ulTickCount;
 OUT ULONG ulTerminationReason;
 IN ULONG ulTerminationDigitsMask;
 IN ULONG ulFirstDigitTimeout;
 IN ULONG ulInterDigitTimeout;
} NDIS_TAPI_GATHER_DIGITS, *PNDIS_TAPI_GATHER_DIGITS;
typedef struct _NDIS_TAPI_MONITOR_DIGITS
{
 IN HDRV_CALL hdCall;
 IN ULONG ulDigitModes;
} NDIS_TAPI_MONITOR_DIGITS, *PNDIS_TAPI_MONITOR_DIGITS;
typedef struct _CO_TAPI_CM_CAPS
{
    _Out_ ULONG ulCoTapiVersion;
    _Out_ ULONG ulNumLines;
    _Out_ ULONG ulFlags;
} CO_TAPI_CM_CAPS, *PCO_TAPI_CM_CAPS;
typedef struct _CO_TAPI_LINE_CAPS
{
    _In_ ULONG ulLineID;
    _Out_ ULONG ulFlags;
    _Out_ LINE_DEV_CAPS LineDevCaps;
} CO_TAPI_LINE_CAPS, *PCO_TAPI_LINE_CAPS;
typedef struct _CO_TAPI_ADDRESS_CAPS
{
    _In_ ULONG ulLineID;
    _In_ ULONG ulAddressID;
    _Out_ ULONG ulFlags;
    _Out_ LINE_ADDRESS_CAPS LineAddressCaps;
} CO_TAPI_ADDRESS_CAPS, *PCO_TAPI_ADDRESS_CAPS;
typedef struct _CO_TAPI_TRANSLATE_TAPI_CALLPARAMS
{
    _In_ ULONG ulLineID;
    _In_ ULONG ulAddressID;
    _In_ ULONG ulFlags;
    _In_ NDIS_VAR_DATA_DESC DestAddress;
    _In_ NDIS_VAR_DATA_DESC LineCallParams;
    _Out_ NDIS_VAR_DATA_DESC NdisCallParams;
} CO_TAPI_TRANSLATE_TAPI_CALLPARAMS, *PCO_TAPI_TRANSLATE_TAPI_CALLPARAMS;
typedef struct _CO_TAPI_TRANSLATE_NDIS_CALLPARAMS
{
    _In_ ULONG ulFlags;
    _In_ NDIS_VAR_DATA_DESC NdisCallParams;
    _Out_ NDIS_VAR_DATA_DESC LineCallInfo;
} CO_TAPI_TRANSLATE_NDIS_CALLPARAMS, *PCO_TAPI_TRANSLATE_NDIS_CALLPARAMS;
typedef struct _CO_TAPI_TRANSLATE_SAP
{
    _In_ ULONG ulLineID;
    _In_ ULONG ulAddressID;
    _In_ ULONG ulMediaModes;
    _In_ ULONG Reserved;
    _Out_ ULONG NumberOfSaps;
    _Out_ NDIS_VAR_DATA_DESC NdisSapParams[1];
} CO_TAPI_TRANSLATE_SAP, *PCO_TAPI_TRANSLATE_SAP;
typedef struct _CO_TAPI_CALL_DIAGNOSTICS
{
    _Out_ ULONG ulOrigin;
    _Out_ ULONG ulReason;
    _Out_ NDIS_VAR_DATA_DESC DiagInfo;
} CO_TAPI_CALL_DIAGNOSTICS, *PCO_TAPI_CALL_DIAGNOSTICS;
typedef struct _CO_AF_TAPI_MAKE_CALL_PARAMETERS
{
    _In_ ULONG ulLineID;
    _In_ ULONG ulAddressID;
    _In_ ULONG ulFlags;
    _In_ NDIS_VAR_DATA_DESC DestAddress;
    _In_ NDIS_VAR_DATA_DESC LineCallParams;
} CO_AF_TAPI_MAKE_CALL_PARAMETERS, *PCO_AF_TAPI_MAKE_CALL_PARAMETERS;
typedef struct _CO_AF_TAPI_INCOMING_CALL_PARAMETERS
{
    _In_ ULONG ulLineID;
    _In_ ULONG ulAddressID;
    _In_ ULONG ulFlags;
    _In_ NDIS_VAR_DATA_DESC LineCallInfo;
} CO_AF_TAPI_INCOMING_CALL_PARAMETERS, *PCO_AF_TAPI_INCOMING_CALL_PARAMETERS;
typedef struct _CO_AF_TAPI_SAP
{
    _In_ ULONG ulLineID;
    _In_ ULONG ulAddressID;
    _In_ ULONG ulMediaModes;
} CO_AF_TAPI_SAP, *PCO_AF_TAPI_SAP;
