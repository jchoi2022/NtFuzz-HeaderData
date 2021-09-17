#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <oaidl.h>
#pragma pack(1)
extern "C" {
DECLARE_OPAQUE32(HCALL);
typedef HCALL FAR * LPHCALL;
DECLARE_OPAQUE32(HLINE);
typedef HLINE FAR * LPHLINE;
DECLARE_OPAQUE32(HPHONE);
typedef HPHONE FAR * LPHPHONE;
DECLARE_OPAQUE32(HLINEAPP);
typedef HLINEAPP FAR * LPHLINEAPP;
DECLARE_OPAQUE32(HPHONEAPP);
typedef HPHONEAPP FAR * LPHPHONEAPP;
DECLARE_OPAQUE32(HAGENTSESSION);
typedef HAGENTSESSION FAR * LPHAGENTSESSION;
DECLARE_OPAQUE32(HAGENT);
typedef HAGENT FAR * LPHAGENT;
typedef HICON FAR * LPHICON;
typedef void (CALLBACK * LINECALLBACK)(
    DWORD hDevice,
    DWORD dwMessage,
    DWORD_PTR dwInstance,
    DWORD_PTR dwParam1,
    DWORD_PTR dwParam2,
    DWORD_PTR dwParam3
    );
typedef void (CALLBACK * PHONECALLBACK)(
    DWORD hDevice,
    DWORD dwMessage,
    DWORD_PTR dwInstance,
    DWORD_PTR dwParam1,
    DWORD_PTR dwParam2,
    DWORD_PTR dwParam3
    );
typedef struct _GUID
{
    unsigned long Data1;
    unsigned short Data2;
    unsigned short Data3;
    unsigned char Data4[8];
} GUID;
typedef GUID *LPGUID;
typedef struct lineaddresscaps_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwLineDeviceID;
    DWORD dwAddressSize;
    DWORD dwAddressOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwAddressSharing;
    DWORD dwAddressStates;
    DWORD dwCallInfoStates;
    DWORD dwCallerIDFlags;
    DWORD dwCalledIDFlags;
    DWORD dwConnectedIDFlags;
    DWORD dwRedirectionIDFlags;
    DWORD dwRedirectingIDFlags;
    DWORD dwCallStates;
    DWORD dwDialToneModes;
    DWORD dwBusyModes;
    DWORD dwSpecialInfo;
    DWORD dwDisconnectModes;
    DWORD dwMaxNumActiveCalls;
    DWORD dwMaxNumOnHoldCalls;
    DWORD dwMaxNumOnHoldPendingCalls;
    DWORD dwMaxNumConference;
    DWORD dwMaxNumTransConf;
    DWORD dwAddrCapFlags;
    DWORD dwCallFeatures;
    DWORD dwRemoveFromConfCaps;
    DWORD dwRemoveFromConfState;
    DWORD dwTransferModes;
    DWORD dwParkModes;
    DWORD dwForwardModes;
    DWORD dwMaxForwardEntries;
    DWORD dwMaxSpecificEntries;
    DWORD dwMinFwdNumRings;
    DWORD dwMaxFwdNumRings;
    DWORD dwMaxCallCompletions;
    DWORD dwCallCompletionConds;
    DWORD dwCallCompletionModes;
    DWORD dwNumCompletionMessages;
    DWORD dwCompletionMsgTextEntrySize;
    DWORD dwCompletionMsgTextSize;
    DWORD dwCompletionMsgTextOffset;
    DWORD dwAddressFeatures;
    DWORD dwPredictiveAutoTransferStates;
    DWORD dwNumCallTreatments;
    DWORD dwCallTreatmentListSize;
    DWORD dwCallTreatmentListOffset;
    DWORD dwDeviceClassesSize;
    DWORD dwDeviceClassesOffset;
    DWORD dwMaxCallDataSize;
    DWORD dwCallFeatures2;
    DWORD dwMaxNoAnswerTimeout;
    DWORD dwConnectedModes;
    DWORD dwOfferingModes;
    DWORD dwAvailableMediaModes;
} LINEADDRESSCAPS, FAR *LPLINEADDRESSCAPS;
typedef struct lineaddressstatus_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumInUse;
    DWORD dwNumActiveCalls;
    DWORD dwNumOnHoldCalls;
    DWORD dwNumOnHoldPendCalls;
    DWORD dwAddressFeatures;
    DWORD dwNumRingsNoAnswer;
    DWORD dwForwardNumEntries;
    DWORD dwForwardSize;
    DWORD dwForwardOffset;
    DWORD dwTerminalModesSize;
    DWORD dwTerminalModesOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
} LINEADDRESSSTATUS, FAR *LPLINEADDRESSSTATUS;
typedef struct lineagentactivityentry_tag
{
    DWORD dwID;
    DWORD dwNameSize;
    DWORD dwNameOffset;
} LINEAGENTACTIVITYENTRY, *LPLINEAGENTACTIVITYENTRY;
typedef struct lineagentactivitylist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumEntries;
    DWORD dwListSize;
    DWORD dwListOffset;
} LINEAGENTACTIVITYLIST, *LPLINEAGENTACTIVITYLIST;
typedef struct lineagentcaps_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwAgentHandlerInfoSize;
    DWORD dwAgentHandlerInfoOffset;
    DWORD dwCapsVersion;
    DWORD dwFeatures;
    DWORD dwStates;
    DWORD dwNextStates;
    DWORD dwMaxNumGroupEntries;
    DWORD dwAgentStatusMessages;
    DWORD dwNumAgentExtensionIDs;
    DWORD dwAgentExtensionIDListSize;
    DWORD dwAgentExtensionIDListOffset;
    GUID ProxyGUID;
} LINEAGENTCAPS, *LPLINEAGENTCAPS;
typedef struct lineagentgroupentry_tag
{
    struct
    {
        DWORD dwGroupID1;
        DWORD dwGroupID2;
        DWORD dwGroupID3;
        DWORD dwGroupID4;
    } GroupID;
    DWORD dwNameSize;
    DWORD dwNameOffset;
} LINEAGENTGROUPENTRY, *LPLINEAGENTGROUPENTRY;
typedef struct lineagentgrouplist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumEntries;
    DWORD dwListSize;
    DWORD dwListOffset;
} LINEAGENTGROUPLIST, *LPLINEAGENTGROUPLIST;
typedef struct lineagentstatus_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumEntries;
    DWORD dwGroupListSize;
    DWORD dwGroupListOffset;
    DWORD dwState;
    DWORD dwNextState;
    DWORD dwActivityID;
    DWORD dwActivitySize;
    DWORD dwActivityOffset;
    DWORD dwAgentFeatures;
    DWORD dwValidStates;
    DWORD dwValidNextStates;
} LINEAGENTSTATUS, *LPLINEAGENTSTATUS;
typedef struct lineappinfo_tag
{
    DWORD dwMachineNameSize;
    DWORD dwMachineNameOffset;
    DWORD dwUserNameSize;
    DWORD dwUserNameOffset;
    DWORD dwModuleFilenameSize;
    DWORD dwModuleFilenameOffset;
    DWORD dwFriendlyNameSize;
    DWORD dwFriendlyNameOffset;
    DWORD dwMediaModes;
    DWORD dwAddressID;
} LINEAPPINFO, *LPLINEAPPINFO;
typedef struct lineagententry_tag
{
    HAGENT hAgent;
    DWORD dwNameSize;
    DWORD dwNameOffset;
    DWORD dwIDSize;
    DWORD dwIDOffset;
    DWORD dwPINSize;
    DWORD dwPINOffset;
} LINEAGENTENTRY, *LPLINEAGENTENTRY;
typedef struct lineagentlist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumEntries;
    DWORD dwListSize;
    DWORD dwListOffset;
} LINEAGENTLIST, *LPLINEAGENTLIST;
typedef struct lineagentinfo_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwAgentState;
    DWORD dwNextAgentState;
    DWORD dwMeasurementPeriod;
    CURRENCY cyOverallCallRate;
    DWORD dwNumberOfACDCalls;
    DWORD dwNumberOfIncomingCalls;
    DWORD dwNumberOfOutgoingCalls;
    DWORD dwTotalACDTalkTime;
    DWORD dwTotalACDCallTime;
    DWORD dwTotalACDWrapUpTime;
} LINEAGENTINFO, *LPLINEAGENTINFO;
typedef struct lineagentsession_tag
{
    HAGENTSESSION hAgentSession;
    HAGENT hAgent;
    GUID GroupID;
    DWORD dwWorkingAddressID;
} LINEAGENTSESSIONENTRY , *LPLINEAGENTSESSIONENTRY;
typedef struct lineagentsessionlist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumEntries;
    DWORD dwListSize;
    DWORD dwListOffset;
} LINEAGENTSESSIONLIST, *LPLINEAGENTSESSIONLIST;
typedef struct lineagentsessioninfo_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwAgentSessionState;
    DWORD dwNextAgentSessionState;
    DATE dateSessionStartTime;
    DWORD dwSessionDuration;
    DWORD dwNumberOfCalls;
    DWORD dwTotalTalkTime;
    DWORD dwAverageTalkTime;
    DWORD dwTotalCallTime;
    DWORD dwAverageCallTime;
    DWORD dwTotalWrapUpTime;
    DWORD dwAverageWrapUpTime;
    CURRENCY cyACDCallRate;
    DWORD dwLongestTimeToAnswer;
    DWORD dwAverageTimeToAnswer;
} LINEAGENTSESSIONINFO, *LPLINEAGENTSESSIONINFO;
typedef struct linequeueentry_tag
{
    DWORD dwQueueID;
    DWORD dwNameSize;
    DWORD dwNameOffset;
} LINEQUEUEENTRY, *LPLINEQUEUEENTRY;
typedef struct linequeuelist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumEntries;
    DWORD dwListSize;
    DWORD dwListOffset;
} LINEQUEUELIST, *LPLINEQUEUELIST;
typedef struct linequeueinfo_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwMeasurementPeriod;
    DWORD dwTotalCallsQueued;
    DWORD dwCurrentCallsQueued;
    DWORD dwTotalCallsAbandoned;
    DWORD dwTotalCallsFlowedIn;
    DWORD dwTotalCallsFlowedOut;
    DWORD dwLongestEverWaitTime;
    DWORD dwCurrentLongestWaitTime;
    DWORD dwAverageWaitTime;
    DWORD dwFinalDisposition;
} LINEQUEUEINFO, *LPLINEQUEUEINFO;
typedef struct lineproxyrequestlist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumEntries;
    DWORD dwListSize;
    DWORD dwListOffset;
} LINEPROXYREQUESTLIST, *LPLINEPROXYREQUESTLIST;
typedef struct linedialparams_tag
{
    DWORD dwDialPause;
    DWORD dwDialSpeed;
    DWORD dwDigitDuration;
    DWORD dwWaitForDialtone;
} LINEDIALPARAMS, FAR *LPLINEDIALPARAMS;
typedef struct linecallinfo_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    HLINE hLine;
    DWORD dwLineDeviceID;
    DWORD dwAddressID;
    DWORD dwBearerMode;
    DWORD dwRate;
    DWORD dwMediaMode;
    DWORD dwAppSpecific;
    DWORD dwCallID;
    DWORD dwRelatedCallID;
    DWORD dwCallParamFlags;
    DWORD dwCallStates;
    DWORD dwMonitorDigitModes;
    DWORD dwMonitorMediaModes;
    LINEDIALPARAMS DialParams;
    DWORD dwOrigin;
    DWORD dwReason;
    DWORD dwCompletionID;
    DWORD dwNumOwners;
    DWORD dwNumMonitors;
    DWORD dwCountryCode;
    DWORD dwTrunk;
    DWORD dwCallerIDFlags;
    DWORD dwCallerIDSize;
    DWORD dwCallerIDOffset;
    DWORD dwCallerIDNameSize;
    DWORD dwCallerIDNameOffset;
    DWORD dwCalledIDFlags;
    DWORD dwCalledIDSize;
    DWORD dwCalledIDOffset;
    DWORD dwCalledIDNameSize;
    DWORD dwCalledIDNameOffset;
    DWORD dwConnectedIDFlags;
    DWORD dwConnectedIDSize;
    DWORD dwConnectedIDOffset;
    DWORD dwConnectedIDNameSize;
    DWORD dwConnectedIDNameOffset;
    DWORD dwRedirectionIDFlags;
    DWORD dwRedirectionIDSize;
    DWORD dwRedirectionIDOffset;
    DWORD dwRedirectionIDNameSize;
    DWORD dwRedirectionIDNameOffset;
    DWORD dwRedirectingIDFlags;
    DWORD dwRedirectingIDSize;
    DWORD dwRedirectingIDOffset;
    DWORD dwRedirectingIDNameSize;
    DWORD dwRedirectingIDNameOffset;
    DWORD dwAppNameSize;
    DWORD dwAppNameOffset;
    DWORD dwDisplayableAddressSize;
    DWORD dwDisplayableAddressOffset;
    DWORD dwCalledPartySize;
    DWORD dwCalledPartyOffset;
    DWORD dwCommentSize;
    DWORD dwCommentOffset;
    DWORD dwDisplaySize;
    DWORD dwDisplayOffset;
    DWORD dwUserUserInfoSize;
    DWORD dwUserUserInfoOffset;
    DWORD dwHighLevelCompSize;
    DWORD dwHighLevelCompOffset;
    DWORD dwLowLevelCompSize;
    DWORD dwLowLevelCompOffset;
    DWORD dwChargingInfoSize;
    DWORD dwChargingInfoOffset;
    DWORD dwTerminalModesSize;
    DWORD dwTerminalModesOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwCallTreatment;
    DWORD dwCallDataSize;
    DWORD dwCallDataOffset;
    DWORD dwSendingFlowspecSize;
    DWORD dwSendingFlowspecOffset;
    DWORD dwReceivingFlowspecSize;
    DWORD dwReceivingFlowspecOffset;
} LINECALLINFO, FAR *LPLINECALLINFO;
typedef struct linecalllist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwCallsNumEntries;
    DWORD dwCallsSize;
    DWORD dwCallsOffset;
} LINECALLLIST, FAR *LPLINECALLLIST;
typedef struct linecallparams_tag
{
    DWORD dwTotalSize;
    DWORD dwBearerMode;
    DWORD dwMinRate;
    DWORD dwMaxRate;
    DWORD dwMediaMode;
    DWORD dwCallParamFlags;
    DWORD dwAddressMode;
    DWORD dwAddressID;
    LINEDIALPARAMS DialParams;
    DWORD dwOrigAddressSize;
    DWORD dwOrigAddressOffset;
    DWORD dwDisplayableAddressSize;
    DWORD dwDisplayableAddressOffset;
    DWORD dwCalledPartySize;
    DWORD dwCalledPartyOffset;
    DWORD dwCommentSize;
    DWORD dwCommentOffset;
    DWORD dwUserUserInfoSize;
    DWORD dwUserUserInfoOffset;
    DWORD dwHighLevelCompSize;
    DWORD dwHighLevelCompOffset;
    DWORD dwLowLevelCompSize;
    DWORD dwLowLevelCompOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwPredictiveAutoTransferStates;
    DWORD dwTargetAddressSize;
    DWORD dwTargetAddressOffset;
    DWORD dwSendingFlowspecSize;
    DWORD dwSendingFlowspecOffset;
    DWORD dwReceivingFlowspecSize;
    DWORD dwReceivingFlowspecOffset;
    DWORD dwDeviceClassSize;
    DWORD dwDeviceClassOffset;
    DWORD dwDeviceConfigSize;
    DWORD dwDeviceConfigOffset;
    DWORD dwCallDataSize;
    DWORD dwCallDataOffset;
    DWORD dwNoAnswerTimeout;
    DWORD dwCallingPartyIDSize;
    DWORD dwCallingPartyIDOffset;
} LINECALLPARAMS, FAR *LPLINECALLPARAMS;
typedef struct linecallstatus_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwCallState;
    DWORD dwCallStateMode;
    DWORD dwCallPrivilege;
    DWORD dwCallFeatures;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwCallFeatures2;
    WORD tStateEntryTime[8];
} LINECALLSTATUS, FAR *LPLINECALLSTATUS;
typedef struct linecalltreatmententry_tag
{
    DWORD dwCallTreatmentID;
    DWORD dwCallTreatmentNameSize;
    DWORD dwCallTreatmentNameOffset;
} LINECALLTREATMENTENTRY, FAR *LPLINECALLTREATMENTENTRY;
typedef struct linecardentry_tag
{
    DWORD dwPermanentCardID;
    DWORD dwCardNameSize;
    DWORD dwCardNameOffset;
    DWORD dwCardNumberDigits;
    DWORD dwSameAreaRuleSize;
    DWORD dwSameAreaRuleOffset;
    DWORD dwLongDistanceRuleSize;
    DWORD dwLongDistanceRuleOffset;
    DWORD dwInternationalRuleSize;
    DWORD dwInternationalRuleOffset;
    DWORD dwOptions;
} LINECARDENTRY, FAR *LPLINECARDENTRY;
typedef struct linecountryentry_tag
{
    DWORD dwCountryID;
    DWORD dwCountryCode;
    DWORD dwNextCountryID;
    DWORD dwCountryNameSize;
    DWORD dwCountryNameOffset;
    DWORD dwSameAreaRuleSize;
    DWORD dwSameAreaRuleOffset;
    DWORD dwLongDistanceRuleSize;
    DWORD dwLongDistanceRuleOffset;
    DWORD dwInternationalRuleSize;
    DWORD dwInternationalRuleOffset;
} LINECOUNTRYENTRY, FAR *LPLINECOUNTRYENTRY;
typedef struct linecountrylist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumCountries;
    DWORD dwCountryListSize;
    DWORD dwCountryListOffset;
} LINECOUNTRYLIST, FAR *LPLINECOUNTRYLIST;
typedef struct linedevcaps_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwProviderInfoSize;
    DWORD dwProviderInfoOffset;
    DWORD dwSwitchInfoSize;
    DWORD dwSwitchInfoOffset;
    DWORD dwPermanentLineID;
    DWORD dwLineNameSize;
    DWORD dwLineNameOffset;
    DWORD dwStringFormat;
    DWORD dwAddressModes;
    DWORD dwNumAddresses;
    DWORD dwBearerModes;
    DWORD dwMaxRate;
    DWORD dwMediaModes;
    DWORD dwGenerateToneModes;
    DWORD dwGenerateToneMaxNumFreq;
    DWORD dwGenerateDigitModes;
    DWORD dwMonitorToneMaxNumFreq;
    DWORD dwMonitorToneMaxNumEntries;
    DWORD dwMonitorDigitModes;
    DWORD dwGatherDigitsMinTimeout;
    DWORD dwGatherDigitsMaxTimeout;
    DWORD dwMedCtlDigitMaxListSize;
    DWORD dwMedCtlMediaMaxListSize;
    DWORD dwMedCtlToneMaxListSize;
    DWORD dwMedCtlCallStateMaxListSize;
    DWORD dwDevCapFlags;
    DWORD dwMaxNumActiveCalls;
    DWORD dwAnswerMode;
    DWORD dwRingModes;
    DWORD dwLineStates;
    DWORD dwUUIAcceptSize;
    DWORD dwUUIAnswerSize;
    DWORD dwUUIMakeCallSize;
    DWORD dwUUIDropSize;
    DWORD dwUUISendUserUserInfoSize;
    DWORD dwUUICallInfoSize;
    LINEDIALPARAMS MinDialParams;
    LINEDIALPARAMS MaxDialParams;
    LINEDIALPARAMS DefaultDialParams;
    DWORD dwNumTerminals;
    DWORD dwTerminalCapsSize;
    DWORD dwTerminalCapsOffset;
    DWORD dwTerminalTextEntrySize;
    DWORD dwTerminalTextSize;
    DWORD dwTerminalTextOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwLineFeatures;
    DWORD dwSettableDevStatus;
    DWORD dwDeviceClassesSize;
    DWORD dwDeviceClassesOffset;
    GUID PermanentLineGuid;
} LINEDEVCAPS, FAR *LPLINEDEVCAPS;
typedef struct linedevstatus_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumOpens;
    DWORD dwOpenMediaModes;
    DWORD dwNumActiveCalls;
    DWORD dwNumOnHoldCalls;
    DWORD dwNumOnHoldPendCalls;
    DWORD dwLineFeatures;
    DWORD dwNumCallCompletions;
    DWORD dwRingMode;
    DWORD dwSignalLevel;
    DWORD dwBatteryLevel;
    DWORD dwRoamMode;
    DWORD dwDevStatusFlags;
    DWORD dwTerminalModesSize;
    DWORD dwTerminalModesOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwAvailableMediaModes;
    DWORD dwAppInfoSize;
    DWORD dwAppInfoOffset;
} LINEDEVSTATUS, FAR *LPLINEDEVSTATUS;
typedef struct lineextensionid_tag
{
    DWORD dwExtensionID0;
    DWORD dwExtensionID1;
    DWORD dwExtensionID2;
    DWORD dwExtensionID3;
} LINEEXTENSIONID, FAR *LPLINEEXTENSIONID;
typedef struct lineforward_tag
{
    DWORD dwForwardMode;
    DWORD dwCallerAddressSize;
    DWORD dwCallerAddressOffset;
    DWORD dwDestCountryCode;
    DWORD dwDestAddressSize;
    DWORD dwDestAddressOffset;
} LINEFORWARD, FAR *LPLINEFORWARD;
typedef struct lineforwardlist_tag
{
    DWORD dwTotalSize;
    DWORD dwNumEntries;
    LINEFORWARD ForwardList[1];
} LINEFORWARDLIST, FAR *LPLINEFORWARDLIST;
typedef struct linegeneratetone_tag
{
    DWORD dwFrequency;
    DWORD dwCadenceOn;
    DWORD dwCadenceOff;
    DWORD dwVolume;
} LINEGENERATETONE, FAR *LPLINEGENERATETONE;
typedef struct lineinitializeexparams_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwOptions;
    union
    {
        HANDLE hEvent;
        HANDLE hCompletionPort;
    } Handles;
    DWORD dwCompletionKey;
} LINEINITIALIZEEXPARAMS, FAR *LPLINEINITIALIZEEXPARAMS;
typedef struct linelocationentry_tag
{
    DWORD dwPermanentLocationID;
    DWORD dwLocationNameSize;
    DWORD dwLocationNameOffset;
    DWORD dwCountryCode;
    DWORD dwCityCodeSize;
    DWORD dwCityCodeOffset;
    DWORD dwPreferredCardID;
    DWORD dwLocalAccessCodeSize;
    DWORD dwLocalAccessCodeOffset;
    DWORD dwLongDistanceAccessCodeSize;
    DWORD dwLongDistanceAccessCodeOffset;
    DWORD dwTollPrefixListSize;
    DWORD dwTollPrefixListOffset;
    DWORD dwCountryID;
    DWORD dwOptions;
    DWORD dwCancelCallWaitingSize;
    DWORD dwCancelCallWaitingOffset;
} LINELOCATIONENTRY, FAR *LPLINELOCATIONENTRY;
typedef struct linemediacontrolcallstate_tag
{
    DWORD dwCallStates;
    DWORD dwMediaControl;
} LINEMEDIACONTROLCALLSTATE, FAR *LPLINEMEDIACONTROLCALLSTATE;
typedef struct linemediacontroldigit_tag
{
    DWORD dwDigit;
    DWORD dwDigitModes;
    DWORD dwMediaControl;
} LINEMEDIACONTROLDIGIT, FAR *LPLINEMEDIACONTROLDIGIT;
typedef struct linemediacontrolmedia_tag
{
    DWORD dwMediaModes;
    DWORD dwDuration;
    DWORD dwMediaControl;
} LINEMEDIACONTROLMEDIA, FAR *LPLINEMEDIACONTROLMEDIA;
typedef struct linemediacontroltone_tag
{
    DWORD dwAppSpecific;
    DWORD dwDuration;
    DWORD dwFrequency1;
    DWORD dwFrequency2;
    DWORD dwFrequency3;
    DWORD dwMediaControl;
} LINEMEDIACONTROLTONE, FAR *LPLINEMEDIACONTROLTONE;
typedef struct linemessage_tag
{
    DWORD hDevice;
    DWORD dwMessageID;
    DWORD_PTR dwCallbackInstance;
    DWORD_PTR dwParam1;
    DWORD_PTR dwParam2;
    DWORD_PTR dwParam3;
} LINEMESSAGE, FAR *LPLINEMESSAGE;
typedef struct linemonitortone_tag
{
    DWORD dwAppSpecific;
    DWORD dwDuration;
    DWORD dwFrequency1;
    DWORD dwFrequency2;
    DWORD dwFrequency3;
} LINEMONITORTONE, FAR *LPLINEMONITORTONE;
typedef struct lineproviderentry_tag
{
    DWORD dwPermanentProviderID;
    DWORD dwProviderFilenameSize;
    DWORD dwProviderFilenameOffset;
} LINEPROVIDERENTRY, FAR *LPLINEPROVIDERENTRY;
typedef struct lineproviderlist_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumProviders;
    DWORD dwProviderListSize;
    DWORD dwProviderListOffset;
} LINEPROVIDERLIST, FAR *LPLINEPROVIDERLIST;
typedef struct lineproxyrequest_tag
{
    DWORD dwSize;
    DWORD dwClientMachineNameSize;
    DWORD dwClientMachineNameOffset;
    DWORD dwClientUserNameSize;
    DWORD dwClientUserNameOffset;
    DWORD dwClientAppAPIVersion;
    DWORD dwRequestType;
    union
    {
    struct
    {
        DWORD dwAddressID;
        LINEAGENTGROUPLIST GroupList;
    } SetAgentGroup;
    struct
    {
        DWORD dwAddressID;
        DWORD dwAgentState;
        DWORD dwNextAgentState;
    } SetAgentState;
    struct
    {
        DWORD dwAddressID;
        DWORD dwActivityID;
    } SetAgentActivity;
    struct
    {
        DWORD dwAddressID;
        LINEAGENTCAPS AgentCaps;
    } GetAgentCaps;
    struct
    {
        DWORD dwAddressID;
        LINEAGENTSTATUS AgentStatus;
    } GetAgentStatus;
    struct
    {
        DWORD dwAddressID;
        DWORD dwAgentExtensionIDIndex;
        DWORD dwSize;
        BYTE Params[1];
    } AgentSpecific;
    struct
    {
        DWORD dwAddressID;
        LINEAGENTACTIVITYLIST ActivityList;
    } GetAgentActivityList;
    struct
    {
        DWORD dwAddressID;
        LINEAGENTGROUPLIST GroupList;
    } GetAgentGroupList;
    struct
    {
        HAGENT hAgent;
        DWORD dwAgentIDSize;
        DWORD dwAgentIDOffset;
        DWORD dwAgentPINSize;
        DWORD dwAgentPINOffset;
    } CreateAgent;
    struct
    {
        HAGENT hAgent;
        DWORD dwAgentState;
        DWORD dwNextAgentState;
    } SetAgentStateEx;
    struct
    {
        HAGENT hAgent;
        DWORD dwMeasurementPeriod;
    } SetAgentMeasurementPeriod;
    struct
    {
        HAGENT hAgent;
        LINEAGENTINFO AgentInfo;
    } GetAgentInfo;
    struct
    {
        HAGENTSESSION hAgentSession;
        DWORD dwAgentPINSize;
        DWORD dwAgentPINOffset;
        HAGENT hAgent;
        GUID GroupID;
        DWORD dwWorkingAddressID;
    } CreateAgentSession;
    struct
    {
        HAGENT hAgent;
        LINEAGENTSESSIONLIST SessionList;
    } GetAgentSessionList;
    struct
    {
        HAGENTSESSION hAgentSession;
        LINEAGENTSESSIONINFO SessionInfo;
    } GetAgentSessionInfo;
    struct
    {
        HAGENTSESSION hAgentSession;
        DWORD dwAgentSessionState;
        DWORD dwNextAgentSessionState;
    } SetAgentSessionState;
    struct
    {
        GUID GroupID;
        LINEQUEUELIST QueueList;
    } GetQueueList;
    struct
    {
        DWORD dwQueueID;
        DWORD dwMeasurementPeriod;
    } SetQueueMeasurementPeriod;
    struct
    {
        DWORD dwQueueID;
        LINEQUEUEINFO QueueInfo;
    } GetQueueInfo;
    struct
    {
        LINEAGENTGROUPLIST GroupList;
    } GetGroupList;
    };
} LINEPROXYREQUEST, *LPLINEPROXYREQUEST;
typedef struct linereqmakecall_tag
{
    char szDestAddress[TAPIMAXDESTADDRESSSIZE];
    char szAppName[TAPIMAXAPPNAMESIZE];
    char szCalledParty[TAPIMAXCALLEDPARTYSIZE];
    char szComment[TAPIMAXCOMMENTSIZE];
} LINEREQMAKECALL, FAR *LPLINEREQMAKECALL;
typedef struct linereqmakecallW_tag
{
    WCHAR szDestAddress[TAPIMAXDESTADDRESSSIZE];
    WCHAR szAppName[TAPIMAXAPPNAMESIZE];
    WCHAR szCalledParty[TAPIMAXCALLEDPARTYSIZE];
    WCHAR szComment[TAPIMAXCOMMENTSIZE];
} LINEREQMAKECALLW, FAR *LPLINEREQMAKECALLW;
typedef struct linereqmediacall_tag
{
    HWND hWnd;
    WPARAM wRequestID;
    char szDeviceClass[TAPIMAXDEVICECLASSSIZE];
    unsigned char ucDeviceID[TAPIMAXDEVICEIDSIZE];
    DWORD dwSize;
    DWORD dwSecure;
    char szDestAddress[TAPIMAXDESTADDRESSSIZE];
    char szAppName[TAPIMAXAPPNAMESIZE];
    char szCalledParty[TAPIMAXCALLEDPARTYSIZE];
    char szComment[TAPIMAXCOMMENTSIZE];
} LINEREQMEDIACALL, FAR *LPLINEREQMEDIACALL;
typedef struct linereqmediacallW_tag
{
    HWND hWnd;
    WPARAM wRequestID;
    WCHAR szDeviceClass[TAPIMAXDEVICECLASSSIZE];
    unsigned char ucDeviceID[TAPIMAXDEVICEIDSIZE];
    DWORD dwSize;
    DWORD dwSecure;
    WCHAR szDestAddress[TAPIMAXDESTADDRESSSIZE];
    WCHAR szAppName[TAPIMAXAPPNAMESIZE];
    WCHAR szCalledParty[TAPIMAXCALLEDPARTYSIZE];
    WCHAR szComment[TAPIMAXCOMMENTSIZE];
} LINEREQMEDIACALLW, FAR *LPLINEREQMEDIACALLW;
typedef struct linetermcaps_tag
{
    DWORD dwTermDev;
    DWORD dwTermModes;
    DWORD dwTermSharing;
} LINETERMCAPS, FAR *LPLINETERMCAPS;
typedef struct linetranslatecaps_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwNumLocations;
    DWORD dwLocationListSize;
    DWORD dwLocationListOffset;
    DWORD dwCurrentLocationID;
    DWORD dwNumCards;
    DWORD dwCardListSize;
    DWORD dwCardListOffset;
    DWORD dwCurrentPreferredCardID;
} LINETRANSLATECAPS, FAR *LPLINETRANSLATECAPS;
typedef struct linetranslateoutput_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwDialableStringSize;
    DWORD dwDialableStringOffset;
    DWORD dwDisplayableStringSize;
    DWORD dwDisplayableStringOffset;
    DWORD dwCurrentCountry;
    DWORD dwDestCountry;
    DWORD dwTranslateResults;
} LINETRANSLATEOUTPUT, FAR *LPLINETRANSLATEOUTPUT;
typedef struct phonebuttoninfo_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwButtonMode;
    DWORD dwButtonFunction;
    DWORD dwButtonTextSize;
    DWORD dwButtonTextOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwButtonState;
} PHONEBUTTONINFO, FAR *LPPHONEBUTTONINFO;
typedef struct phonecaps_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwProviderInfoSize;
    DWORD dwProviderInfoOffset;
    DWORD dwPhoneInfoSize;
    DWORD dwPhoneInfoOffset;
    DWORD dwPermanentPhoneID;
    DWORD dwPhoneNameSize;
    DWORD dwPhoneNameOffset;
    DWORD dwStringFormat;
    DWORD dwPhoneStates;
    DWORD dwHookSwitchDevs;
    DWORD dwHandsetHookSwitchModes;
    DWORD dwSpeakerHookSwitchModes;
    DWORD dwHeadsetHookSwitchModes;
    DWORD dwVolumeFlags;
    DWORD dwGainFlags;
    DWORD dwDisplayNumRows;
    DWORD dwDisplayNumColumns;
    DWORD dwNumRingModes;
    DWORD dwNumButtonLamps;
    DWORD dwButtonModesSize;
    DWORD dwButtonModesOffset;
    DWORD dwButtonFunctionsSize;
    DWORD dwButtonFunctionsOffset;
    DWORD dwLampModesSize;
    DWORD dwLampModesOffset;
    DWORD dwNumSetData;
    DWORD dwSetDataSize;
    DWORD dwSetDataOffset;
    DWORD dwNumGetData;
    DWORD dwGetDataSize;
    DWORD dwGetDataOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwDeviceClassesSize;
    DWORD dwDeviceClassesOffset;
    DWORD dwPhoneFeatures;
    DWORD dwSettableHandsetHookSwitchModes;
    DWORD dwSettableSpeakerHookSwitchModes;
    DWORD dwSettableHeadsetHookSwitchModes;
    DWORD dwMonitoredHandsetHookSwitchModes;
    DWORD dwMonitoredSpeakerHookSwitchModes;
    DWORD dwMonitoredHeadsetHookSwitchModes;
    GUID PermanentPhoneGuid;
} PHONECAPS, FAR *LPPHONECAPS;
typedef struct phoneextensionid_tag
{
    DWORD dwExtensionID0;
    DWORD dwExtensionID1;
    DWORD dwExtensionID2;
    DWORD dwExtensionID3;
} PHONEEXTENSIONID, FAR *LPPHONEEXTENSIONID;
typedef struct phoneinitializeexparams_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwOptions;
    union
    {
        HANDLE hEvent;
        HANDLE hCompletionPort;
    } Handles;
    DWORD dwCompletionKey;
} PHONEINITIALIZEEXPARAMS, FAR *LPPHONEINITIALIZEEXPARAMS;
typedef struct phonemessage_tag
{
    DWORD hDevice;
    DWORD dwMessageID;
    DWORD_PTR dwCallbackInstance;
    DWORD_PTR dwParam1;
    DWORD_PTR dwParam2;
    DWORD_PTR dwParam3;
} PHONEMESSAGE, FAR *LPPHONEMESSAGE;
typedef struct phonestatus_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwStatusFlags;
    DWORD dwNumOwners;
    DWORD dwNumMonitors;
    DWORD dwRingMode;
    DWORD dwRingVolume;
    DWORD dwHandsetHookSwitchMode;
    DWORD dwHandsetVolume;
    DWORD dwHandsetGain;
    DWORD dwSpeakerHookSwitchMode;
    DWORD dwSpeakerVolume;
    DWORD dwSpeakerGain;
    DWORD dwHeadsetHookSwitchMode;
    DWORD dwHeadsetVolume;
    DWORD dwHeadsetGain;
    DWORD dwDisplaySize;
    DWORD dwDisplayOffset;
    DWORD dwLampModesSize;
    DWORD dwLampModesOffset;
    DWORD dwOwnerNameSize;
    DWORD dwOwnerNameOffset;
    DWORD dwDevSpecificSize;
    DWORD dwDevSpecificOffset;
    DWORD dwPhoneFeatures;
} PHONESTATUS, FAR *LPPHONESTATUS;
typedef struct varstring_tag
{
    DWORD dwTotalSize;
    DWORD dwNeededSize;
    DWORD dwUsedSize;
    DWORD dwStringFormat;
    DWORD dwStringSize;
    DWORD dwStringOffset;
} VARSTRING, FAR *LPVARSTRING;
LONG
WINAPI
lineAccept(
    HCALL hCall,
    LPCSTR lpsUserUserInfo,
    DWORD dwSize
    );
LONG
WINAPI
lineAddProvider(
    LPCSTR lpszProviderFilename,
    HWND hwndOwner,
    LPDWORD lpdwPermanentProviderID
    );
LONG
WINAPI
lineAddToConference(
    HCALL hConfCall,
    HCALL hConsultCall
    );
LONG
WINAPI
lineAgentSpecific(
    HLINE hLine,
    DWORD dwAddressID,
    DWORD dwAgentExtensionIDIndex,
    LPVOID lpParams,
    DWORD dwSize
    );
LONG
WINAPI
lineAnswer(
    HCALL hCall,
    LPCSTR lpsUserUserInfo,
    DWORD dwSize
    );
LONG
WINAPI
lineBlindTransfer(
    HCALL hCall,
    LPCSTR lpszDestAddress,
    DWORD dwCountryCode
    );
LONG
WINAPI
lineClose(
    HLINE hLine
    );
LONG
WINAPI
lineCompleteCall(
    HCALL hCall,
    LPDWORD lpdwCompletionID,
    DWORD dwCompletionMode,
    DWORD dwMessageID
    );
LONG
WINAPI
lineCompleteTransfer(
    HCALL hCall,
    HCALL hConsultCall,
    LPHCALL lphConfCall,
    DWORD dwTransferMode
    );
LONG
WINAPI
lineConfigDialog(
    DWORD dwDeviceID,
    HWND hwndOwner,
    LPCSTR lpszDeviceClass
    );
LONG
WINAPI
lineConfigDialogEdit(
    DWORD dwDeviceID,
    HWND hwndOwner,
    LPCSTR lpszDeviceClass,
    LPVOID const lpDeviceConfigIn,
    DWORD dwSize,
    LPVARSTRING lpDeviceConfigOut
    );
LONG
WINAPI
lineConfigProvider(
    HWND hwndOwner,
    DWORD dwPermanentProviderID
    );
LONG
WINAPI
lineCreateAgentW(
    HLINE hLine,
    _In_opt_ LPCWSTR lpszAgentID,
    _In_opt_ LPCWSTR lpszAgentPIN,
    LPHAGENT lphAgent
    );
LONG
WINAPI
lineCreateAgentA(
    HLINE hLine,
    _In_opt_ LPCSTR lpszAgentID,
    _In_opt_ LPCSTR lpszAgentPIN,
    LPHAGENT lphAgent
    );
LONG
WINAPI
lineCreateAgentSessionW(
    HLINE hLine,
    HAGENT hAgent,
    _In_opt_ LPCWSTR lpszAgentPIN,
    DWORD dwWorkingAddressID,
    LPGUID lpGroupID,
    LPHAGENTSESSION lphAgentSession
    );
LONG
WINAPI
lineCreateAgentSessionA(
    HLINE hLine,
    HAGENT hAgent,
    _In_opt_ LPCSTR lpszAgentPIN,
    DWORD dwWorkingAddressID,
    LPGUID lpGroupID,
    LPHAGENTSESSION lphAgentSession
    );
LONG
WINAPI
lineDeallocateCall(
    HCALL hCall
    );
LONG
WINAPI
lineDevSpecific(
    HLINE hLine,
    DWORD dwAddressID,
    HCALL hCall,
    LPVOID lpParams,
    DWORD dwSize
    );
LONG
WINAPI
lineDevSpecificFeature(
    HLINE hLine,
    DWORD dwFeature,
    LPVOID lpParams,
    DWORD dwSize
    );
LONG
WINAPI
lineDial(
    HCALL hCall,
    LPCSTR lpszDestAddress,
    DWORD dwCountryCode
    );
LONG
WINAPI
lineDrop(
    HCALL hCall,
    LPCSTR lpsUserUserInfo,
    DWORD dwSize
    );
LONG
WINAPI
lineForward(
    HLINE hLine,
    DWORD bAllAddresses,
    DWORD dwAddressID,
    LPLINEFORWARDLIST const lpForwardList,
    DWORD dwNumRingsNoAnswer,
    LPHCALL lphConsultCall,
    LPLINECALLPARAMS const lpCallParams
    );
LONG
WINAPI
lineGatherDigits(
    HCALL hCall,
    DWORD dwDigitModes,
    _Out_writes_opt_(dwNumDigits)
    LPSTR lpsDigits,
    DWORD dwNumDigits,
    LPCSTR lpszTerminationDigits,
    DWORD dwFirstDigitTimeout,
    DWORD dwInterDigitTimeout
    );
LONG
WINAPI
lineGenerateDigits(
    HCALL hCall,
    DWORD dwDigitMode,
    LPCSTR lpszDigits,
    DWORD dwDuration
    );
LONG
WINAPI
lineGenerateTone(
    HCALL hCall,
    DWORD dwToneMode,
    DWORD dwDuration,
    DWORD dwNumTones,
    LPLINEGENERATETONE const lpTones
    );
LONG
WINAPI
lineGetAddressCaps(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAddressID,
    DWORD dwAPIVersion,
    DWORD dwExtVersion,
    LPLINEADDRESSCAPS lpAddressCaps
    );
LONG
WINAPI
lineGetAddressID(
    HLINE hLine,
    LPDWORD lpdwAddressID,
    DWORD dwAddressMode,
    LPCSTR lpsAddress,
    DWORD dwSize
    );
LONG
WINAPI
lineGetAddressStatus(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEADDRESSSTATUS lpAddressStatus
    );
LONG
WINAPI
lineGetAgentActivityListA(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEAGENTACTIVITYLIST lpAgentActivityList
    );
LONG
WINAPI
lineGetAgentActivityListW(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEAGENTACTIVITYLIST lpAgentActivityList
    );
LONG
WINAPI
lineGetAgentCapsA(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAddressID,
    DWORD dwAppAPIVersion,
    LPLINEAGENTCAPS lpAgentCaps
    );
LONG
WINAPI
lineGetAgentCapsW(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAddressID,
    DWORD dwAppAPIVersion,
    LPLINEAGENTCAPS lpAgentCaps
    );
LONG
WINAPI
lineGetAgentGroupListA(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEAGENTGROUPLIST lpAgentGroupList
    );
LONG
WINAPI
lineGetAgentGroupListW(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEAGENTGROUPLIST lpAgentGroupList
    );
LONG
WINAPI
lineGetAgentInfo(
    HLINE hLine,
    HAGENT hAgent,
    LPLINEAGENTINFO lpAgentInfo
    );
LONG
WINAPI
lineGetAgentSessionInfo(
    HLINE hLine,
    HAGENTSESSION hAgentSession,
    LPLINEAGENTSESSIONINFO lpAgentSessionInfo
    );
LONG
WINAPI
lineGetAgentSessionList(
    HLINE hLine,
    HAGENT hAgent,
    LPLINEAGENTSESSIONLIST lpAgentSessionList
    );
LONG
WINAPI
lineGetAgentStatusA(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEAGENTSTATUS lpAgentStatus
    );
LONG
WINAPI
lineGetAgentStatusW(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEAGENTSTATUS lpAgentStatus
    );
LONG
WINAPI
lineGetAppPriority(
    LPCSTR lpszAppFilename,
    DWORD dwMediaMode,
    LPLINEEXTENSIONID lpExtensionID,
    DWORD dwRequestMode,
    LPVARSTRING lpExtensionName,
    LPDWORD lpdwPriority
    );
LONG
WINAPI
lineGetCallInfo(
    HCALL hCall,
    LPLINECALLINFO lpCallInfo
    );
LONG
WINAPI
lineGetCallStatus(
    HCALL hCall,
    LPLINECALLSTATUS lpCallStatus
    );
LONG
WINAPI
lineGetConfRelatedCalls(
    HCALL hCall,
    LPLINECALLLIST lpCallList
    );
LONG
WINAPI
lineGetCountry(
    DWORD dwCountryID,
    DWORD dwAPIVersion,
    LPLINECOUNTRYLIST lpLineCountryList
    );
LONG
WINAPI
lineGetDevCaps(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAPIVersion,
    DWORD dwExtVersion,
    LPLINEDEVCAPS lpLineDevCaps
    );
LONG
WINAPI
lineGetDevConfig(
    DWORD dwDeviceID,
    LPVARSTRING lpDeviceConfig,
    LPCSTR lpszDeviceClass
    );
LONG
WINAPI
lineGetGroupListA(
    HLINE hLine,
    LPLINEAGENTGROUPLIST lpGroupList
    );
LONG
WINAPI
lineGetGroupListW(
    HLINE hLine,
    LPLINEAGENTGROUPLIST lpGroupList
    );
LONG
WINAPI
lineGetIcon(
    DWORD dwDeviceID,
    LPCSTR lpszDeviceClass,
    LPHICON lphIcon
    );
LONG
WINAPI
lineGetID(
    HLINE hLine,
    DWORD dwAddressID,
    HCALL hCall,
    DWORD dwSelect,
    LPVARSTRING lpDeviceID,
    LPCSTR lpszDeviceClass
    );
LONG
WINAPI
lineGetLineDevStatus(
    HLINE hLine,
    LPLINEDEVSTATUS lpLineDevStatus
    );
LONG
WINAPI
lineGetMessage(
    HLINEAPP hLineApp,
    LPLINEMESSAGE lpMessage,
    DWORD dwTimeout
    );
LONG
WINAPI
lineGetNewCalls(
    HLINE hLine,
    DWORD dwAddressID,
    DWORD dwSelect,
    LPLINECALLLIST lpCallList
    );
LONG
WINAPI
lineGetNumRings(
    HLINE hLine,
    DWORD dwAddressID,
    LPDWORD lpdwNumRings
    );
LONG
WINAPI
lineGetProviderList(
    DWORD dwAPIVersion,
    LPLINEPROVIDERLIST lpProviderList
    );
LONG
WINAPI
lineGetProxyStatus(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAppAPIVersion,
    LPLINEPROXYREQUESTLIST lpLineProxyReqestList
    );
LONG
WINAPI
lineGetQueueInfo(
    HLINE hLine,
    DWORD dwQueueID,
    LPLINEQUEUEINFO lpLineQueueInfo
    );
LONG
WINAPI
lineGetQueueListA(
    HLINE hLine,
    LPGUID lpGroupID,
    LPLINEQUEUELIST lpQueueList
    );
LONG
WINAPI
lineGetQueueListW(
    HLINE hLine,
    LPGUID lpGroupID,
    LPLINEQUEUELIST lpQueueList
    );
LONG
WINAPI
lineGetRequest(
    HLINEAPP hLineApp,
    DWORD dwRequestMode,
    LPVOID lpRequestBuffer
    );
LONG
WINAPI
lineGetStatusMessages(
    HLINE hLine,
    LPDWORD lpdwLineStates,
    LPDWORD lpdwAddressStates
    );
LONG
WINAPI
lineGetTranslateCaps(
    HLINEAPP hLineApp,
    DWORD dwAPIVersion,
    LPLINETRANSLATECAPS lpTranslateCaps
    );
LONG
WINAPI
lineHandoff(
    HCALL hCall,
    LPCSTR lpszFileName,
    DWORD dwMediaMode
    );
LONG
WINAPI
lineHold(
    HCALL hCall
    );
LONG
WINAPI
lineInitialize(
    LPHLINEAPP lphLineApp,
    HINSTANCE hInstance,
    LINECALLBACK lpfnCallback,
    LPCSTR lpszAppName,
    LPDWORD lpdwNumDevs
    );
LONG
WINAPI
lineInitializeExA(
    LPHLINEAPP lphLineApp,
    HINSTANCE hInstance,
    LINECALLBACK lpfnCallback,
    LPCSTR lpszFriendlyAppName,
    LPDWORD lpdwNumDevs,
    LPDWORD lpdwAPIVersion,
    LPLINEINITIALIZEEXPARAMS lpLineInitializeExParams
    );
LONG
WINAPI
lineInitializeExW(
    LPHLINEAPP lphLineApp,
    HINSTANCE hInstance,
    LINECALLBACK lpfnCallback,
    LPCWSTR lpszFriendlyAppName,
    LPDWORD lpdwNumDevs,
    LPDWORD lpdwAPIVersion,
    LPLINEINITIALIZEEXPARAMS lpLineInitializeExParams
    );
LONG
WINAPI
lineMakeCall(
    HLINE hLine,
    LPHCALL lphCall,
    LPCSTR lpszDestAddress,
    DWORD dwCountryCode,
    LPLINECALLPARAMS const lpCallParams
    );
LONG
WINAPI
lineMonitorDigits(
    HCALL hCall,
    DWORD dwDigitModes
    );
LONG
WINAPI
lineMonitorMedia(
    HCALL hCall,
    DWORD dwMediaModes
    );
LONG
WINAPI
lineMonitorTones(
    HCALL hCall,
    LPLINEMONITORTONE const lpToneList,
    DWORD dwNumEntries
    );
LONG
WINAPI
lineNegotiateAPIVersion(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAPILowVersion,
    DWORD dwAPIHighVersion,
    LPDWORD lpdwAPIVersion,
    LPLINEEXTENSIONID lpExtensionID
    );
LONG
WINAPI
lineNegotiateExtVersion(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAPIVersion,
    DWORD dwExtLowVersion,
    DWORD dwExtHighVersion,
    LPDWORD lpdwExtVersion
    );
LONG
WINAPI
lineOpen(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    LPHLINE lphLine,
    DWORD dwAPIVersion,
    DWORD dwExtVersion,
    DWORD_PTR dwCallbackInstance,
    DWORD dwPrivileges,
    DWORD dwMediaModes,
    LPLINECALLPARAMS const lpCallParams
    );
LONG
WINAPI
linePark(
    HCALL hCall,
    DWORD dwParkMode,
    LPCSTR lpszDirAddress,
    LPVARSTRING lpNonDirAddress
    );
LONG
WINAPI
linePickup(
    HLINE hLine,
    DWORD dwAddressID,
    LPHCALL lphCall,
    LPCSTR lpszDestAddress,
    LPCSTR lpszGroupID
    );
LONG
WINAPI
linePrepareAddToConference(
    HCALL hConfCall,
    LPHCALL lphConsultCall,
    LPLINECALLPARAMS const lpCallParams
    );
LONG
WINAPI
lineProxyMessage(
    HLINE hLine,
    HCALL hCall,
    DWORD dwMsg,
    DWORD dwParam1,
    DWORD dwParam2,
    DWORD dwParam3
    );
LONG
WINAPI
lineProxyResponse(
    HLINE hLine,
    LPLINEPROXYREQUEST lpProxyRequest,
    DWORD dwResult
    );
LONG
WINAPI
lineRedirect(
    HCALL hCall,
    LPCSTR lpszDestAddress,
    DWORD dwCountryCode
    );
LONG
WINAPI
lineRegisterRequestRecipient(
    HLINEAPP hLineApp,
    DWORD dwRegistrationInstance,
    DWORD dwRequestMode,
    DWORD bEnable
    );
LONG
WINAPI
lineReleaseUserUserInfo(
    HCALL hCall
    );
LONG
WINAPI
lineRemoveFromConference(
    HCALL hCall
    );
LONG
WINAPI
lineRemoveProvider(
    DWORD dwPermanentProviderID,
    HWND hwndOwner
    );
LONG
WINAPI
lineSecureCall(
    HCALL hCall
    );
LONG
WINAPI
lineSendUserUserInfo(
    HCALL hCall,
    LPCSTR lpsUserUserInfo,
    DWORD dwSize
    );
LONG
WINAPI
lineSetAgentActivity(
    HLINE hLine,
    DWORD dwAddressID,
    DWORD dwActivityID
    );
LONG
WINAPI
lineSetAgentGroup(
    HLINE hLine,
    DWORD dwAddressID,
    LPLINEAGENTGROUPLIST lpAgentGroupList
    );
LONG
WINAPI
lineSetAgentMeasurementPeriod(
    HLINE hLine,
    HAGENT hAgent,
    DWORD dwMeasurementPeriod
    );
LONG
WINAPI
lineSetAgentSessionState(
    HLINE hLine,
    HAGENTSESSION hAgentSession,
    DWORD dwAgentSessionState,
    DWORD dwNextAgentSessionState
    );
LONG
WINAPI
lineSetAgentStateEx(
    HLINE hLine,
    HAGENT hAgent,
    DWORD dwAgentState,
    DWORD dwNextAgentState
    );
LONG
WINAPI
lineSetAgentState(
    HLINE hLine,
    DWORD dwAddressID,
    DWORD dwAgentState,
    DWORD dwNextAgentState
    );
LONG
WINAPI
lineSetAppPriority(
    LPCSTR lpszAppFilename,
    DWORD dwMediaMode,
    LPLINEEXTENSIONID lpExtensionID,
    DWORD dwRequestMode,
    LPCSTR lpszExtensionName,
    DWORD dwPriority
    );
LONG
WINAPI
lineSetAppSpecific(
    HCALL hCall,
    DWORD dwAppSpecific
    );
LONG
WINAPI
lineSetCallData(
    HCALL hCall,
    LPVOID lpCallData,
    DWORD dwSize
    );
LONG
WINAPI
lineSetCallParams(
    HCALL hCall,
    DWORD dwBearerMode,
    DWORD dwMinRate,
    DWORD dwMaxRate,
    LPLINEDIALPARAMS const lpDialParams
    );
LONG
WINAPI
lineSetCallPrivilege(
    HCALL hCall,
    DWORD dwCallPrivilege
    );
LONG
WINAPI
lineSetCallQualityOfService(
    HCALL hCall,
    LPVOID lpSendingFlowspec,
    DWORD dwSendingFlowspecSize,
    LPVOID lpReceivingFlowspec,
    DWORD dwReceivingFlowspecSize
    );
LONG
WINAPI
lineSetCallTreatment(
    HCALL hCall,
    DWORD dwTreatment
    );
LONG
WINAPI
lineSetCurrentLocation(
    HLINEAPP hLineApp,
    DWORD dwLocation
    );
LONG
WINAPI
lineSetDevConfig(
    DWORD dwDeviceID,
    LPVOID const lpDeviceConfig,
    DWORD dwSize,
    LPCSTR lpszDeviceClass
    );
LONG
WINAPI
lineSetLineDevStatus(
    HLINE hLine,
    DWORD dwStatusToChange,
    DWORD fStatus
    );
LONG
WINAPI
lineSetMediaControl(
    HLINE hLine,
    DWORD dwAddressID,
    HCALL hCall,
    DWORD dwSelect,
    LPLINEMEDIACONTROLDIGIT const lpDigitList,
    DWORD dwDigitNumEntries,
    LPLINEMEDIACONTROLMEDIA const lpMediaList,
    DWORD dwMediaNumEntries,
    LPLINEMEDIACONTROLTONE const lpToneList,
    DWORD dwToneNumEntries,
    LPLINEMEDIACONTROLCALLSTATE const lpCallStateList,
    DWORD dwCallStateNumEntries
    );
LONG
WINAPI
lineSetMediaMode(
    HCALL hCall,
    DWORD dwMediaModes
    );
LONG
WINAPI
lineSetQueueMeasurementPeriod(
    HLINE hLine,
    DWORD dwQueueID,
    DWORD dwMeasurementPeriod
    );
LONG
WINAPI
lineSetNumRings(
    HLINE hLine,
    DWORD dwAddressID,
    DWORD dwNumRings
    );
LONG
WINAPI
lineSetStatusMessages(
    HLINE hLine,
    DWORD dwLineStates,
    DWORD dwAddressStates
    );
LONG
WINAPI
lineSetTerminal(
    HLINE hLine,
    DWORD dwAddressID,
    HCALL hCall,
    DWORD dwSelect,
    DWORD dwTerminalModes,
    DWORD dwTerminalID,
    DWORD bEnable
    );
LONG
WINAPI
lineSetTollList(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    LPCSTR lpszAddressIn,
    DWORD dwTollListOption
    );
LONG
WINAPI
lineSetupConference(
    HCALL hCall,
    HLINE hLine,
    LPHCALL lphConfCall,
    LPHCALL lphConsultCall,
    DWORD dwNumParties,
    LPLINECALLPARAMS const lpCallParams
    );
LONG
WINAPI
lineSetupTransfer(
    HCALL hCall,
    LPHCALL lphConsultCall,
    LPLINECALLPARAMS const lpCallParams
    );
LONG
WINAPI
lineShutdown(
    HLINEAPP hLineApp
    );
LONG
WINAPI
lineSwapHold(
    HCALL hActiveCall,
    HCALL hHeldCall
    );
LONG
WINAPI
lineTranslateAddress(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAPIVersion,
    LPCSTR lpszAddressIn,
    DWORD dwCard,
    DWORD dwTranslateOptions,
    LPLINETRANSLATEOUTPUT lpTranslateOutput
    );
LONG
WINAPI
lineTranslateDialog(
    HLINEAPP hLineApp,
    DWORD dwDeviceID,
    DWORD dwAPIVersion,
    HWND hwndOwner,
    LPCSTR lpszAddressIn
    );
LONG
WINAPI
lineUncompleteCall(
    HLINE hLine,
    DWORD dwCompletionID
    );
LONG
WINAPI
lineUnhold(
    HCALL hCall
    );
LONG
WINAPI
lineUnpark(
    HLINE hLine,
    DWORD dwAddressID,
    LPHCALL lphCall,
    LPCSTR lpszDestAddress
    );
LONG
WINAPI
phoneClose(
    HPHONE hPhone
    );
LONG
WINAPI
phoneConfigDialog(
    DWORD dwDeviceID,
    HWND hwndOwner,
    LPCSTR lpszDeviceClass
    );
LONG
WINAPI
phoneDevSpecific(
    HPHONE hPhone,
    LPVOID lpParams,
    DWORD dwSize
    );
LONG
WINAPI
phoneGetButtonInfo(
    HPHONE hPhone,
    DWORD dwButtonLampID,
    LPPHONEBUTTONINFO lpButtonInfo
    );
LONG
WINAPI
phoneGetData(
    HPHONE hPhone,
    DWORD dwDataID,
    LPVOID lpData,
    DWORD dwSize
    );
LONG
WINAPI
phoneGetDevCaps(
    HPHONEAPP hPhoneApp,
    DWORD dwDeviceID,
    DWORD dwAPIVersion,
    DWORD dwExtVersion,
    LPPHONECAPS lpPhoneCaps
    );
LONG
WINAPI
phoneGetDisplay(
    HPHONE hPhone,
    LPVARSTRING lpDisplay
    );
LONG
WINAPI
phoneGetGain(
    HPHONE hPhone,
    DWORD dwHookSwitchDev,
    LPDWORD lpdwGain
    );
LONG
WINAPI
phoneGetHookSwitch(
    HPHONE hPhone,
    LPDWORD lpdwHookSwitchDevs
    );
LONG
WINAPI
phoneGetIcon(
    DWORD dwDeviceID,
    LPCSTR lpszDeviceClass,
    LPHICON lphIcon
    );
LONG
WINAPI
phoneGetID(
    HPHONE hPhone,
    LPVARSTRING lpDeviceID,
    LPCSTR lpszDeviceClass
    );
LONG
WINAPI
phoneGetLamp(
    HPHONE hPhone,
    DWORD dwButtonLampID,
    LPDWORD lpdwLampMode
    );
LONG
WINAPI
phoneGetMessage(
    HPHONEAPP hPhoneApp,
    LPPHONEMESSAGE lpMessage,
    DWORD dwTimeout
    );
LONG
WINAPI
phoneGetRing(
    HPHONE hPhone,
    LPDWORD lpdwRingMode,
    LPDWORD lpdwVolume
    );
LONG
WINAPI
phoneGetStatus(
    HPHONE hPhone,
    LPPHONESTATUS lpPhoneStatus
    );
LONG
WINAPI
phoneGetStatusMessages(
    HPHONE hPhone,
    LPDWORD lpdwPhoneStates,
    LPDWORD lpdwButtonModes,
    LPDWORD lpdwButtonStates
    );
LONG
WINAPI
phoneGetVolume(
    HPHONE hPhone,
    DWORD dwHookSwitchDev,
    LPDWORD lpdwVolume
    );
LONG
WINAPI
phoneInitialize(
    LPHPHONEAPP lphPhoneApp,
    HINSTANCE hInstance,
    PHONECALLBACK lpfnCallback,
    LPCSTR lpszAppName,
    LPDWORD lpdwNumDevs
    );
LONG
WINAPI
phoneInitializeExA(
    LPHPHONEAPP lphPhoneApp,
    HINSTANCE hInstance,
    PHONECALLBACK lpfnCallback,
    LPCSTR lpszFriendlyAppName,
    LPDWORD lpdwNumDevs,
    LPDWORD lpdwAPIVersion,
    LPPHONEINITIALIZEEXPARAMS lpPhoneInitializeExParams
    );
LONG
WINAPI
phoneInitializeExW(
    LPHPHONEAPP lphPhoneApp,
    HINSTANCE hInstance,
    PHONECALLBACK lpfnCallback,
    LPCWSTR lpszFriendlyAppName,
    LPDWORD lpdwNumDevs,
    LPDWORD lpdwAPIVersion,
    LPPHONEINITIALIZEEXPARAMS lpPhoneInitializeExParams
    );
LONG
WINAPI
phoneNegotiateAPIVersion(
    HPHONEAPP hPhoneApp,
    DWORD dwDeviceID,
    DWORD dwAPILowVersion,
    DWORD dwAPIHighVersion,
    LPDWORD lpdwAPIVersion,
    LPPHONEEXTENSIONID lpExtensionID
    );
LONG
WINAPI
phoneNegotiateExtVersion(
    HPHONEAPP hPhoneApp,
    DWORD dwDeviceID,
    DWORD dwAPIVersion,
    DWORD dwExtLowVersion,
    DWORD dwExtHighVersion,
    LPDWORD lpdwExtVersion
    );
LONG
WINAPI
phoneOpen(
    HPHONEAPP hPhoneApp,
    DWORD dwDeviceID,
    LPHPHONE lphPhone,
    DWORD dwAPIVersion,
    DWORD dwExtVersion,
    DWORD_PTR dwCallbackInstance,
    DWORD dwPrivilege
    );
LONG
WINAPI
phoneSetButtonInfo(
    HPHONE hPhone,
    DWORD dwButtonLampID,
    LPPHONEBUTTONINFO const lpButtonInfo
    );
LONG
WINAPI
phoneSetData(
    HPHONE hPhone,
    DWORD dwDataID,
    LPVOID const lpData,
    DWORD dwSize
    );
LONG
WINAPI
phoneSetDisplay(
    HPHONE hPhone,
    DWORD dwRow,
    DWORD dwColumn,
    LPCSTR lpsDisplay,
    DWORD dwSize
    );
LONG
WINAPI
phoneSetGain(
    HPHONE hPhone,
    DWORD dwHookSwitchDev,
    DWORD dwGain
    );
LONG
WINAPI
phoneSetHookSwitch(
    HPHONE hPhone,
    DWORD dwHookSwitchDevs,
    DWORD dwHookSwitchMode
    );
LONG
WINAPI
phoneSetLamp(
    HPHONE hPhone,
    DWORD dwButtonLampID,
    DWORD dwLampMode
    );
LONG
WINAPI
phoneSetRing(
    HPHONE hPhone,
    DWORD dwRingMode,
    DWORD dwVolume
    );
LONG
WINAPI
phoneSetStatusMessages(
    HPHONE hPhone,
    DWORD dwPhoneStates,
    DWORD dwButtonModes,
    DWORD dwButtonStates
    );
LONG
WINAPI
phoneSetVolume(
    HPHONE hPhone,
    DWORD dwHookSwitchDev,
    DWORD dwVolume
    );
LONG
WINAPI
phoneShutdown(
    HPHONEAPP hPhoneApp
    );
LONG
WINAPI
tapiGetLocationInfo(
    _Out_writes_(8) LPSTR lpszCountryCode,
    _Out_writes_(8) LPSTR lpszCityCode
    );
LONG
WINAPI
tapiRequestDrop(
    HWND hwnd,
    WPARAM wRequestID
    );
LONG
WINAPI
tapiRequestMakeCall(
    LPCSTR lpszDestAddress,
    LPCSTR lpszAppName,
    LPCSTR lpszCalledParty,
    LPCSTR lpszComment
    );
LONG
WINAPI
tapiRequestMediaCall(
    HWND hwnd,
    WPARAM wRequestID,
    LPCSTR lpszDeviceClass,
    LPCSTR lpDeviceID,
    DWORD dwSize,
    DWORD dwSecure,
    LPCSTR lpszDestAddress,
    LPCSTR lpszAppName,
    LPCSTR lpszCalledParty,
    LPCSTR lpszComment
    );
                                                                                               \
                    ( ( (__ErrCode__) > 0xFFFF0000 ) ? \
                                                                                               \
                            ( (__ErrCode__) & 0x0000FFFF ) : \
                                                                                               \
                            ( ( (__ErrCode__) & 0x10000000 ) ? \
                                                                                               \
                              ( (__ErrCode__) - 0x90000000 + 0xF000 ) : \
                                                                                               \
                              ( (__ErrCode__) - 0x80000000 + 0xE000 ) ) )
}
#pragma pack()
#endif
#pragma endregion
