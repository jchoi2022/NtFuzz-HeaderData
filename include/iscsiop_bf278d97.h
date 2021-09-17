#include <iscsidef.h>
    { 0xea4d82bf,0x29da,0x4e12, { 0x80,0x0a,0xe5,0x43,0x79,0x64,0x46,0x2c } }
DEFINE_GUID(MSiSCSI_Operations_GUID, \
            0xea4d82bf,0x29da,0x4e12,0x80,0x0a,0xe5,0x43,0x79,0x64,0x46,0x2c);
typedef struct _SendTargets_IN
{
    ULONGLONG UniqueSessionId;
    #define SendTargets_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define SendTargets_IN_UniqueSessionId_ID 1
    WCHAR SendTargetsText[223 + 1];
    #define SendTargets_IN_SendTargetsText_ID 2
} SendTargets_IN, *PSendTargets_IN;
typedef struct _SendTargets_OUT
{
    ULONG Status;
    #define SendTargets_OUT_Status_SIZE sizeof(ULONG)
    #define SendTargets_OUT_Status_ID 3
    ULONG ResponseSize;
    #define SendTargets_OUT_ResponseSize_SIZE sizeof(ULONG)
    #define SendTargets_OUT_ResponseSize_ID 4
    UCHAR Response[1];
    #define SendTargets_OUT_Response_ID 5
} SendTargets_OUT, *PSendTargets_OUT;
typedef enum {
    ISCSI_LOGINTARGET_DISCOVERY = 0,
    ISCSI_LOGINTARGET_INFORMATIONAL = 1,
    ISCSI_LOGINTARGET_DATA = 2
} LOGINSESSIONTYPE, *PLOGINSESSIONTYPE;
typedef struct _LoginToTarget_IN
{
    ULONG PortNumber;
    #define LoginToTarget_IN_PortNumber_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_PortNumber_ID 1
    ISCSI_LoginOptions LoginOptions;
    #define LoginToTarget_IN_LoginOptions_SIZE sizeof(ISCSI_LoginOptions)
    #define LoginToTarget_IN_LoginOptions_ID 2
    ULONG SessionType;
    #define LoginToTarget_IN_SessionType_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_SessionType_ID 3
    ULONGLONG SecurityFlags;
    #define LoginToTarget_IN_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define LoginToTarget_IN_SecurityFlags_ID 4
    ISCSI_TargetPortal TargetPortal;
    #define LoginToTarget_IN_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define LoginToTarget_IN_TargetPortal_ID 5
    ULONG UsernameSize;
    #define LoginToTarget_IN_UsernameSize_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_UsernameSize_ID 6
    ULONG PasswordSize;
    #define LoginToTarget_IN_PasswordSize_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_PasswordSize_ID 7
    ULONG KeySize;
    #define LoginToTarget_IN_KeySize_SIZE sizeof(ULONG)
    #define LoginToTarget_IN_KeySize_ID 8
    USHORT UniqueIdForISID;
    #define LoginToTarget_IN_UniqueIdForISID_SIZE sizeof(USHORT)
    #define LoginToTarget_IN_UniqueIdForISID_ID 9
    BOOLEAN PersistentLogin;
    #define LoginToTarget_IN_PersistentLogin_SIZE sizeof(BOOLEAN)
    #define LoginToTarget_IN_PersistentLogin_ID 10
    WCHAR InitiatorNode[223 + 1];
    #define LoginToTarget_IN_InitiatorNode_ID 11
    WCHAR InitiatorAlias[255 + 1];
    #define LoginToTarget_IN_InitiatorAlias_ID 12
    WCHAR TargetName[223 + 1];
    #define LoginToTarget_IN_TargetName_ID 13
    ISCSI_TargetMapping Mappings;
    #define LoginToTarget_IN_Mappings_SIZE sizeof(ISCSI_TargetMapping)
    #define LoginToTarget_IN_Mappings_ID 14
    UCHAR Key[1];
    #define LoginToTarget_IN_Key_ID 15
    #define LoginToTarget_IN_Username_ID 16
    #define LoginToTarget_IN_Password_ID 17
} LoginToTarget_IN, *PLoginToTarget_IN;
typedef struct _LoginToTarget_OUT
{
    ULONG Status;
    #define LoginToTarget_OUT_Status_SIZE sizeof(ULONG)
    #define LoginToTarget_OUT_Status_ID 18
    ULONGLONG UniqueSessionId;
    #define LoginToTarget_OUT_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define LoginToTarget_OUT_UniqueSessionId_ID 19
    ULONGLONG UniqueConnectionId;
    #define LoginToTarget_OUT_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define LoginToTarget_OUT_UniqueConnectionId_ID 20
} LoginToTarget_OUT, *PLoginToTarget_OUT;
typedef struct _LogoutFromTarget_IN
{
    ULONGLONG UniqueSessionId;
    #define LogoutFromTarget_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define LogoutFromTarget_IN_UniqueSessionId_ID 1
} LogoutFromTarget_IN, *PLogoutFromTarget_IN;
typedef struct _LogoutFromTarget_OUT
{
    ULONG Status;
    #define LogoutFromTarget_OUT_Status_SIZE sizeof(ULONG)
    #define LogoutFromTarget_OUT_Status_ID 2
} LogoutFromTarget_OUT, *PLogoutFromTarget_OUT;
typedef struct _AddConnectionToSession_IN
{
    ULONGLONG UniqueAdapterId;
    #define AddConnectionToSession_IN_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_IN_UniqueAdapterId_ID 1
    ULONGLONG UniqueSessionId;
    #define AddConnectionToSession_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_IN_UniqueSessionId_ID 2
    ULONGLONG SecurityFlags;
    #define AddConnectionToSession_IN_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_IN_SecurityFlags_ID 3
    ULONG PortNumber;
    #define AddConnectionToSession_IN_PortNumber_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_PortNumber_ID 4
    ISCSI_LoginOptions LoginOptions;
    #define AddConnectionToSession_IN_LoginOptions_SIZE sizeof(ISCSI_LoginOptions)
    #define AddConnectionToSession_IN_LoginOptions_ID 5
    ISCSI_TargetPortal TargetPortal;
    #define AddConnectionToSession_IN_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define AddConnectionToSession_IN_TargetPortal_ID 6
    ULONG UsernameSize;
    #define AddConnectionToSession_IN_UsernameSize_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_UsernameSize_ID 7
    ULONG PasswordSize;
    #define AddConnectionToSession_IN_PasswordSize_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_PasswordSize_ID 8
    ULONG KeySize;
    #define AddConnectionToSession_IN_KeySize_SIZE sizeof(ULONG)
    #define AddConnectionToSession_IN_KeySize_ID 9
    UCHAR Key[1];
    #define AddConnectionToSession_IN_Key_ID 10
    #define AddConnectionToSession_IN_Username_ID 11
    #define AddConnectionToSession_IN_Password_ID 12
} AddConnectionToSession_IN, *PAddConnectionToSession_IN;
typedef struct _AddConnectionToSession_OUT
{
    ULONG Status;
    #define AddConnectionToSession_OUT_Status_SIZE sizeof(ULONG)
    #define AddConnectionToSession_OUT_Status_ID 13
    ULONGLONG UniqueConnectionId;
    #define AddConnectionToSession_OUT_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define AddConnectionToSession_OUT_UniqueConnectionId_ID 14
} AddConnectionToSession_OUT, *PAddConnectionToSession_OUT;
typedef struct _RemovePersistentLogin_IN
{
    ULONG PortNumber;
    #define RemovePersistentLogin_IN_PortNumber_SIZE sizeof(ULONG)
    #define RemovePersistentLogin_IN_PortNumber_ID 1
    WCHAR TargetName[223 + 1];
    #define RemovePersistentLogin_IN_TargetName_ID 2
    ISCSI_TargetPortal TargetPortal;
    #define RemovePersistentLogin_IN_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define RemovePersistentLogin_IN_TargetPortal_ID 3
} RemovePersistentLogin_IN, *PRemovePersistentLogin_IN;
typedef struct _RemovePersistentLogin_OUT
{
    ULONG Status;
    #define RemovePersistentLogin_OUT_Status_SIZE sizeof(ULONG)
    #define RemovePersistentLogin_OUT_Status_ID 4
} RemovePersistentLogin_OUT, *PRemovePersistentLogin_OUT;
typedef struct _RemoveConnectionFromSession_IN
{
    ULONGLONG UniqueSessionId;
    #define RemoveConnectionFromSession_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define RemoveConnectionFromSession_IN_UniqueSessionId_ID 1
    ULONGLONG UniqueConnectionId;
    #define RemoveConnectionFromSession_IN_UniqueConnectionId_SIZE sizeof(ULONGLONG)
    #define RemoveConnectionFromSession_IN_UniqueConnectionId_ID 2
} RemoveConnectionFromSession_IN, *PRemoveConnectionFromSession_IN;
typedef struct _RemoveConnectionFromSession_OUT
{
    ULONG Status;
    #define RemoveConnectionFromSession_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveConnectionFromSession_OUT_Status_ID 3
} RemoveConnectionFromSession_OUT, *PRemoveConnectionFromSession_OUT;
typedef struct _ScsiInquiry_IN
{
    ULONGLONG UniqueSessionId;
    #define ScsiInquiry_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ScsiInquiry_IN_UniqueSessionId_ID 1
    ULONGLONG Lun;
    #define ScsiInquiry_IN_Lun_SIZE sizeof(ULONGLONG)
    #define ScsiInquiry_IN_Lun_ID 2
    UCHAR InquiryFlags;
    #define ScsiInquiry_IN_InquiryFlags_SIZE sizeof(UCHAR)
    #define ScsiInquiry_IN_InquiryFlags_ID 3
    UCHAR PageCode;
    #define ScsiInquiry_IN_PageCode_SIZE sizeof(UCHAR)
    #define ScsiInquiry_IN_PageCode_ID 4
} ScsiInquiry_IN, *PScsiInquiry_IN;
typedef struct _ScsiInquiry_OUT
{
    ULONG Status;
    #define ScsiInquiry_OUT_Status_SIZE sizeof(ULONG)
    #define ScsiInquiry_OUT_Status_ID 5
    ULONG ResponseBufferSize;
    #define ScsiInquiry_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiInquiry_OUT_ResponseBufferSize_ID 6
    UCHAR ScsiStatus;
    #define ScsiInquiry_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiInquiry_OUT_ScsiStatus_ID 7
    UCHAR SenseBuffer[18];
    #define ScsiInquiry_OUT_SenseBuffer_SIZE sizeof(UCHAR[18])
    #define ScsiInquiry_OUT_SenseBuffer_ID 8
    UCHAR ResponseBuffer[1];
    #define ScsiInquiry_OUT_ResponseBuffer_ID 9
} ScsiInquiry_OUT, *PScsiInquiry_OUT;
typedef struct _ScsiReadCapacity_IN
{
    ULONGLONG UniqueSessionId;
    #define ScsiReadCapacity_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ScsiReadCapacity_IN_UniqueSessionId_ID 1
    ULONGLONG Lun;
    #define ScsiReadCapacity_IN_Lun_SIZE sizeof(ULONGLONG)
    #define ScsiReadCapacity_IN_Lun_ID 2
} ScsiReadCapacity_IN, *PScsiReadCapacity_IN;
typedef struct _ScsiReadCapacity_OUT
{
    ULONG Status;
    #define ScsiReadCapacity_OUT_Status_SIZE sizeof(ULONG)
    #define ScsiReadCapacity_OUT_Status_ID 3
    ULONG ResponseBufferSize;
    #define ScsiReadCapacity_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReadCapacity_OUT_ResponseBufferSize_ID 4
    UCHAR ScsiStatus;
    #define ScsiReadCapacity_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiReadCapacity_OUT_ScsiStatus_ID 5
    UCHAR SenseBuffer[18];
    #define ScsiReadCapacity_OUT_SenseBuffer_SIZE sizeof(UCHAR[18])
    #define ScsiReadCapacity_OUT_SenseBuffer_ID 6
    UCHAR ResponseBuffer[1];
    #define ScsiReadCapacity_OUT_ResponseBuffer_ID 7
} ScsiReadCapacity_OUT, *PScsiReadCapacity_OUT;
typedef struct _ScsiReportLuns_IN
{
    ULONGLONG UniqueSessionId;
    #define ScsiReportLuns_IN_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define ScsiReportLuns_IN_UniqueSessionId_ID 1
} ScsiReportLuns_IN, *PScsiReportLuns_IN;
typedef struct _ScsiReportLuns_OUT
{
    ULONG Status;
    #define ScsiReportLuns_OUT_Status_SIZE sizeof(ULONG)
    #define ScsiReportLuns_OUT_Status_ID 2
    ULONG ResponseBufferSize;
    #define ScsiReportLuns_OUT_ResponseBufferSize_SIZE sizeof(ULONG)
    #define ScsiReportLuns_OUT_ResponseBufferSize_ID 3
    UCHAR ScsiStatus;
    #define ScsiReportLuns_OUT_ScsiStatus_SIZE sizeof(UCHAR)
    #define ScsiReportLuns_OUT_ScsiStatus_ID 4
    UCHAR SenseBuffer[18];
    #define ScsiReportLuns_OUT_SenseBuffer_SIZE sizeof(UCHAR[18])
    #define ScsiReportLuns_OUT_SenseBuffer_ID 5
    UCHAR ResponseBuffer[1];
    #define ScsiReportLuns_OUT_ResponseBuffer_ID 6
} ScsiReportLuns_OUT, *PScsiReportLuns_OUT;
typedef struct _SetCHAPSharedSecret_IN
{
    ULONG SharedSecretSize;
    #define SetCHAPSharedSecret_IN_SharedSecretSize_SIZE sizeof(ULONG)
    #define SetCHAPSharedSecret_IN_SharedSecretSize_ID 1
    UCHAR SharedSecret[1];
    #define SetCHAPSharedSecret_IN_SharedSecret_ID 2
} SetCHAPSharedSecret_IN, *PSetCHAPSharedSecret_IN;
typedef struct _SetCHAPSharedSecret_OUT
{
    ULONG Status;
    #define SetCHAPSharedSecret_OUT_Status_SIZE sizeof(ULONG)
    #define SetCHAPSharedSecret_OUT_Status_ID 3
} SetCHAPSharedSecret_OUT, *PSetCHAPSharedSecret_OUT;
typedef struct _SetRADIUSSharedSecret_IN
{
    ULONG SharedSecretSize;
    #define SetRADIUSSharedSecret_IN_SharedSecretSize_SIZE sizeof(ULONG)
    #define SetRADIUSSharedSecret_IN_SharedSecretSize_ID 1
    UCHAR SharedSecret[1];
    #define SetRADIUSSharedSecret_IN_SharedSecret_ID 2
} SetRADIUSSharedSecret_IN, *PSetRADIUSSharedSecret_IN;
typedef struct _SetRADIUSSharedSecret_OUT
{
    ULONG Status;
    #define SetRADIUSSharedSecret_OUT_Status_SIZE sizeof(ULONG)
    #define SetRADIUSSharedSecret_OUT_Status_ID 3
} SetRADIUSSharedSecret_OUT, *PSetRADIUSSharedSecret_OUT;
typedef struct _DeleteInitiatorNodeName_IN
{
    WCHAR DeletedInitiatorName[223 + 1];
    #define DeleteInitiatorNodeName_IN_DeletedInitiatorName_ID 1
} DeleteInitiatorNodeName_IN, *PDeleteInitiatorNodeName_IN;
typedef struct _DeleteInitiatorNodeName_OUT
{
    ULONG Status;
    #define DeleteInitiatorNodeName_OUT_Status_SIZE sizeof(ULONG)
    #define DeleteInitiatorNodeName_OUT_Status_ID 2
} DeleteInitiatorNodeName_OUT, *PDeleteInitiatorNodeName_OUT;
typedef struct _SetInitiatorNodeName_IN
{
    WCHAR CreatedInitiatorName[223 + 1];
    #define SetInitiatorNodeName_IN_CreatedInitiatorName_ID 1
} SetInitiatorNodeName_IN, *PSetInitiatorNodeName_IN;
typedef struct _SetInitiatorNodeName_OUT
{
    ULONG Status;
    #define SetInitiatorNodeName_OUT_Status_SIZE sizeof(ULONG)
    #define SetInitiatorNodeName_OUT_Status_ID 2
} SetInitiatorNodeName_OUT, *PSetInitiatorNodeName_OUT;
typedef struct _AddiSNSServer_IN
{
    WCHAR iSNSServerName[223 + 1];
    #define AddiSNSServer_IN_iSNSServerName_ID 1
} AddiSNSServer_IN, *PAddiSNSServer_IN;
typedef struct _AddiSNSServer_OUT
{
    ULONG Status;
    #define AddiSNSServer_OUT_Status_SIZE sizeof(ULONG)
    #define AddiSNSServer_OUT_Status_ID 2
} AddiSNSServer_OUT, *PAddiSNSServer_OUT;
typedef struct _RemoveiSNSServer_IN
{
    WCHAR iSNSServerName[223 + 1];
    #define RemoveiSNSServer_IN_iSNSServerName_ID 1
} RemoveiSNSServer_IN, *PRemoveiSNSServer_IN;
typedef struct _RemoveiSNSServer_OUT
{
    ULONG Status;
    #define RemoveiSNSServer_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveiSNSServer_OUT_Status_ID 2
} RemoveiSNSServer_OUT, *PRemoveiSNSServer_OUT;
typedef struct _AddRADIUSServer_IN
{
    ISCSI_IP_Address RADIUSIPAddress;
    #define AddRADIUSServer_IN_RADIUSIPAddress_SIZE sizeof(ISCSI_IP_Address)
    #define AddRADIUSServer_IN_RADIUSIPAddress_ID 1
} AddRADIUSServer_IN, *PAddRADIUSServer_IN;
typedef struct _AddRADIUSServer_OUT
{
    ULONG Status;
    #define AddRADIUSServer_OUT_Status_SIZE sizeof(ULONG)
    #define AddRADIUSServer_OUT_Status_ID 2
} AddRADIUSServer_OUT, *PAddRADIUSServer_OUT;
typedef struct _RemoveRADIUSServer_IN
{
    ISCSI_IP_Address RADIUSIPAddress;
    #define RemoveRADIUSServer_IN_RADIUSIPAddress_SIZE sizeof(ISCSI_IP_Address)
    #define RemoveRADIUSServer_IN_RADIUSIPAddress_ID 1
} RemoveRADIUSServer_IN, *PRemoveRADIUSServer_IN;
typedef struct _RemoveRADIUSServer_OUT
{
    ULONG Status;
    #define RemoveRADIUSServer_OUT_Status_SIZE sizeof(ULONG)
    #define RemoveRADIUSServer_OUT_Status_ID 2
} RemoveRADIUSServer_OUT, *PRemoveRADIUSServer_OUT;
    { 0x1ac62a5d,0xa418,0x4c15, { 0x96,0xbd,0x2c,0x3a,0x9d,0xb8,0xc8,0xca } }
DEFINE_GUID(ISCSI_Persistent_Login_GUID, \
            0x1ac62a5d,0xa418,0x4c15,0x96,0xbd,0x2c,0x3a,0x9d,0xb8,0xc8,0xca);
typedef struct _ISCSI_Persistent_Login
{
    WCHAR TargetName[223 + 1];
    #define ISCSI_Persistent_Login_TargetName_ID 1
    ULONGLONG SecurityFlags;
    #define ISCSI_Persistent_Login_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define ISCSI_Persistent_Login_SecurityFlags_ID 2
    ULONG InitiatorPortNumber;
    #define ISCSI_Persistent_Login_InitiatorPortNumber_SIZE sizeof(ULONG)
    #define ISCSI_Persistent_Login_InitiatorPortNumber_ID 3
    ULONG UsernameSize;
    #define ISCSI_Persistent_Login_UsernameSize_SIZE sizeof(ULONG)
    #define ISCSI_Persistent_Login_UsernameSize_ID 4
    BOOLEAN IsInformationalSession;
    #define ISCSI_Persistent_Login_IsInformationalSession_SIZE sizeof(BOOLEAN)
    #define ISCSI_Persistent_Login_IsInformationalSession_ID 5
    USHORT UniqueIdForISID;
    #define ISCSI_Persistent_Login_UniqueIdForISID_SIZE sizeof(USHORT)
    #define ISCSI_Persistent_Login_UniqueIdForISID_ID 6
    ISCSI_TargetPortal TargetPortal;
    #define ISCSI_Persistent_Login_TargetPortal_SIZE sizeof(ISCSI_TargetPortal)
    #define ISCSI_Persistent_Login_TargetPortal_ID 7
    ISCSI_LoginOptions LoginOptions;
    #define ISCSI_Persistent_Login_LoginOptions_SIZE sizeof(ISCSI_LoginOptions)
    #define ISCSI_Persistent_Login_LoginOptions_ID 8
    ISCSI_TargetMapping TargetMapping;
    #define ISCSI_Persistent_Login_TargetMapping_SIZE sizeof(ISCSI_TargetMapping)
    #define ISCSI_Persistent_Login_TargetMapping_ID 9
    UCHAR Username[1];
    #define ISCSI_Persistent_Login_Username_ID 10
} ISCSI_Persistent_Login, *PISCSI_Persistent_Login;
    { 0x420512d9,0x0537,0x4c67, { 0xa7,0x79,0x84,0xba,0x7b,0x29,0xce,0x9f } }
DEFINE_GUID(MSiSCSI_PersistentLogins_GUID, \
            0x420512d9,0x0537,0x4c67,0xa7,0x79,0x84,0xba,0x7b,0x29,0xce,0x9f);
typedef struct _MSiSCSI_PersistentLogins
{
    ULONG PersistentLoginCount;
    #define MSiSCSI_PersistentLogins_PersistentLoginCount_SIZE sizeof(ULONG)
    #define MSiSCSI_PersistentLogins_PersistentLoginCount_ID 1
    ULONG Reserved;
    #define MSiSCSI_PersistentLogins_Reserved_SIZE sizeof(ULONG)
    #define MSiSCSI_PersistentLogins_Reserved_ID 2
    ISCSI_Persistent_Login PersistentLogins[1];
    #define MSiSCSI_PersistentLogins_PersistentLogins_ID 3
} MSiSCSI_PersistentLogins, *PMSiSCSI_PersistentLogins;
    { 0x41646815,0x7524,0x4bc0, { 0x90,0x4a,0xcd,0x7d,0x51,0x0e,0xac,0x02 } }
DEFINE_GUID(MSiSCSI_TargetMappings_GUID, \
            0x41646815,0x7524,0x4bc0,0x90,0x4a,0xcd,0x7d,0x51,0x0e,0xac,0x02);
typedef struct _MSiSCSI_TargetMappings
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_TargetMappings_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_TargetMappings_UniqueAdapterId_ID 1
    ULONG TargetMappingCount;
    #define MSiSCSI_TargetMappings_TargetMappingCount_SIZE sizeof(ULONG)
    #define MSiSCSI_TargetMappings_TargetMappingCount_ID 2
    ULONG Reserved;
    #define MSiSCSI_TargetMappings_Reserved_SIZE sizeof(ULONG)
    #define MSiSCSI_TargetMappings_Reserved_ID 3
    ISCSI_TargetMapping TargetMappings[1];
    #define MSiSCSI_TargetMappings_TargetMappings_ID 4
} MSiSCSI_TargetMappings, *PMSiSCSI_TargetMappings;
    { 0x7bb02370,0xb8ae,0x4d29, { 0x88,0xde,0x76,0x95,0x1d,0x32,0x45,0xba } }
DEFINE_GUID(MSiSCSI_LUNMappingInformation_GUID, \
            0x7bb02370,0xb8ae,0x4d29,0x88,0xde,0x76,0x95,0x1d,0x32,0x45,0xba);
typedef struct _MSiSCSI_LUNMappingInformation
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_LUNMappingInformation_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_LUNMappingInformation_UniqueAdapterId_ID 1
    ULONGLONG UniqueSessionId;
    #define MSiSCSI_LUNMappingInformation_UniqueSessionId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_LUNMappingInformation_UniqueSessionId_ID 2
    ULONG OSBus;
    #define MSiSCSI_LUNMappingInformation_OSBus_SIZE sizeof(ULONG)
    #define MSiSCSI_LUNMappingInformation_OSBus_ID 3
    ULONG OSTarget;
    #define MSiSCSI_LUNMappingInformation_OSTarget_SIZE sizeof(ULONG)
    #define MSiSCSI_LUNMappingInformation_OSTarget_ID 4
    ULONG OSLUN;
    #define MSiSCSI_LUNMappingInformation_OSLUN_SIZE sizeof(ULONG)
    #define MSiSCSI_LUNMappingInformation_OSLUN_ID 5
} MSiSCSI_LUNMappingInformation, *PMSiSCSI_LUNMappingInformation;
    { 0x391f3325,0x0ba3,0x4083, { 0xa8,0x61,0xcf,0x4f,0x6f,0x97,0xa5,0x27 } }
DEFINE_GUID(MSiSCSI_SecurityConfigOperations_GUID, \
            0x391f3325,0x0ba3,0x4083,0xa8,0x61,0xcf,0x4f,0x6f,0x97,0xa5,0x27);
typedef struct _SetPresharedKeyForId_IN
{
    ULONG PortNumber;
    #define SetPresharedKeyForId_IN_PortNumber_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_IN_PortNumber_ID 1
    ULONGLONG SecurityFlags;
    #define SetPresharedKeyForId_IN_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define SetPresharedKeyForId_IN_SecurityFlags_ID 2
    UCHAR IdType;
    #define SetPresharedKeyForId_IN_IdType_SIZE sizeof(UCHAR)
    #define SetPresharedKeyForId_IN_IdType_ID 3
    ULONG IdSize;
    #define SetPresharedKeyForId_IN_IdSize_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_IN_IdSize_ID 4
    ULONG KeySize;
    #define SetPresharedKeyForId_IN_KeySize_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_IN_KeySize_ID 5
    UCHAR Id[1];
    #define SetPresharedKeyForId_IN_Id_ID 6
    #define SetPresharedKeyForId_IN_Key_ID 7
} SetPresharedKeyForId_IN, *PSetPresharedKeyForId_IN;
typedef struct _SetPresharedKeyForId_OUT
{
    ULONG Status;
    #define SetPresharedKeyForId_OUT_Status_SIZE sizeof(ULONG)
    #define SetPresharedKeyForId_OUT_Status_ID 8
} SetPresharedKeyForId_OUT, *PSetPresharedKeyForId_OUT;
typedef struct _GetPresharedKeyForId_IN
{
    ULONG PortNumber;
    #define GetPresharedKeyForId_IN_PortNumber_SIZE sizeof(ULONG)
    #define GetPresharedKeyForId_IN_PortNumber_ID 1
    UCHAR IdType;
    #define GetPresharedKeyForId_IN_IdType_SIZE sizeof(UCHAR)
    #define GetPresharedKeyForId_IN_IdType_ID 2
    ULONG IdSize;
    #define GetPresharedKeyForId_IN_IdSize_SIZE sizeof(ULONG)
    #define GetPresharedKeyForId_IN_IdSize_ID 3
    UCHAR Id[1];
    #define GetPresharedKeyForId_IN_Id_ID 4
} GetPresharedKeyForId_IN, *PGetPresharedKeyForId_IN;
typedef struct _GetPresharedKeyForId_OUT
{
    ULONG Status;
    #define GetPresharedKeyForId_OUT_Status_SIZE sizeof(ULONG)
    #define GetPresharedKeyForId_OUT_Status_ID 5
    ULONGLONG SecurityFlags;
    #define GetPresharedKeyForId_OUT_SecurityFlags_SIZE sizeof(ULONGLONG)
    #define GetPresharedKeyForId_OUT_SecurityFlags_ID 6
} GetPresharedKeyForId_OUT, *PGetPresharedKeyForId_OUT;
typedef struct _SetGroupPresharedKey_IN
{
    ULONG KeySize;
    #define SetGroupPresharedKey_IN_KeySize_SIZE sizeof(ULONG)
    #define SetGroupPresharedKey_IN_KeySize_ID 1
    UCHAR Key[1];
    #define SetGroupPresharedKey_IN_Key_ID 2
} SetGroupPresharedKey_IN, *PSetGroupPresharedKey_IN;
typedef struct _SetGroupPresharedKey_OUT
{
    ULONG Status;
    #define SetGroupPresharedKey_OUT_Status_SIZE sizeof(ULONG)
    #define SetGroupPresharedKey_OUT_Status_ID 3
} SetGroupPresharedKey_OUT, *PSetGroupPresharedKey_OUT;
typedef struct _SetTunnelModeOuterAddress_IN
{
    ULONG PortNumber;
    #define SetTunnelModeOuterAddress_IN_PortNumber_SIZE sizeof(ULONG)
    #define SetTunnelModeOuterAddress_IN_PortNumber_ID 1
    ISCSI_IP_Address DestinationAddress;
    #define SetTunnelModeOuterAddress_IN_DestinationAddress_SIZE sizeof(ISCSI_IP_Address)
    #define SetTunnelModeOuterAddress_IN_DestinationAddress_ID 2
    ISCSI_IP_Address TunnelModeOuterAddress;
    #define SetTunnelModeOuterAddress_IN_TunnelModeOuterAddress_SIZE sizeof(ISCSI_IP_Address)
    #define SetTunnelModeOuterAddress_IN_TunnelModeOuterAddress_ID 3
} SetTunnelModeOuterAddress_IN, *PSetTunnelModeOuterAddress_IN;
typedef struct _SetTunnelModeOuterAddress_OUT
{
    ULONG Status;
    #define SetTunnelModeOuterAddress_OUT_Status_SIZE sizeof(ULONG)
    #define SetTunnelModeOuterAddress_OUT_Status_ID 4
} SetTunnelModeOuterAddress_OUT, *PSetTunnelModeOuterAddress_OUT;
typedef struct _ClearCache_OUT
{
    ULONG Status;
    #define ClearCache_OUT_Status_SIZE sizeof(ULONG)
    #define ClearCache_OUT_Status_ID 1
} ClearCache_OUT, *PClearCache_OUT;
typedef struct _SetGenerationalGuid_IN
{
    UCHAR GenerationalGuid[16];
    #define SetGenerationalGuid_IN_GenerationalGuid_SIZE sizeof(UCHAR[16])
    #define SetGenerationalGuid_IN_GenerationalGuid_ID 1
} SetGenerationalGuid_IN, *PSetGenerationalGuid_IN;
typedef struct _SetGenerationalGuid_OUT
{
    ULONG Status;
    #define SetGenerationalGuid_OUT_Status_SIZE sizeof(ULONG)
    #define SetGenerationalGuid_OUT_Status_ID 2
} SetGenerationalGuid_OUT, *PSetGenerationalGuid_OUT;
    { 0xee5a2356,0xc703,0x489b, { 0xb1,0x36,0x69,0xc9,0x94,0xae,0x3a,0x20 } }
DEFINE_GUID(MSiSCSI_BootInformation_GUID, \
            0xee5a2356,0xc703,0x489b,0xb1,0x36,0x69,0xc9,0x94,0xae,0x3a,0x20);
typedef struct _MSiSCSI_BootInformation
{
    UCHAR NodeName[223];
    #define MSiSCSI_BootInformation_NodeName_SIZE sizeof(UCHAR[223])
    #define MSiSCSI_BootInformation_NodeName_ID 1
    ULONG SharedSecretLength;
    #define MSiSCSI_BootInformation_SharedSecretLength_SIZE sizeof(ULONG)
    #define MSiSCSI_BootInformation_SharedSecretLength_ID 2
    UCHAR SharedSecret[255];
    #define MSiSCSI_BootInformation_SharedSecret_SIZE sizeof(UCHAR[255])
    #define MSiSCSI_BootInformation_SharedSecret_ID 3
} MSiSCSI_BootInformation, *PMSiSCSI_BootInformation;
typedef enum {
    ISCSI_ADAPTER_TARGETS_CHANGED = 3
} ISCSI_ADAPTER_EVENT_CODE, *PISCSI_ADAPTER_EVENT_CODE;
    { 0x46b122c0,0x3767,0x4069, { 0x91,0x6e,0x3a,0x43,0x70,0x2f,0x05,0xce } }
DEFINE_GUID(MSiSCSI_AdapterEvent_GUID, \
            0x46b122c0,0x3767,0x4069,0x91,0x6e,0x3a,0x43,0x70,0x2f,0x05,0xce);
typedef struct _MSiSCSI_AdapterEvent
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_AdapterEvent_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_AdapterEvent_UniqueAdapterId_ID 1
    ULONG EventCode;
    #define MSiSCSI_AdapterEvent_EventCode_SIZE sizeof(ULONG)
    #define MSiSCSI_AdapterEvent_EventCode_ID 2
} MSiSCSI_AdapterEvent, *PMSiSCSI_AdapterEvent;
