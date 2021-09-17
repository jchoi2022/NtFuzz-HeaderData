    { 0x36b58ea2,0xc461,0x4bb0, { 0xac,0x8e,0x95,0x2f,0x59,0xd2,0x51,0xed } }
DEFINE_GUID(MSiSCSI_MMIPSECStats_GUID, \
            0x36b58ea2,0xc461,0x4bb0,0xac,0x8e,0x95,0x2f,0x59,0xd2,0x51,0xed);
typedef struct _MSiSCSI_MMIPSECStats
{
    ULONGLONG ActiveAcquire;
    #define MSiSCSI_MMIPSECStats_ActiveAcquire_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ActiveAcquire_ID 1
    ULONGLONG ActiveReceive;
    #define MSiSCSI_MMIPSECStats_ActiveReceive_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ActiveReceive_ID 2
    ULONGLONG AcquireFailures;
    #define MSiSCSI_MMIPSECStats_AcquireFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_AcquireFailures_ID 3
    ULONGLONG ReceiveFailures;
    #define MSiSCSI_MMIPSECStats_ReceiveFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ReceiveFailures_ID 4
    ULONGLONG SendFailures;
    #define MSiSCSI_MMIPSECStats_SendFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_SendFailures_ID 5
    ULONGLONG AcquireHeapSize;
    #define MSiSCSI_MMIPSECStats_AcquireHeapSize_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_AcquireHeapSize_ID 6
    ULONGLONG ReceiveHeapSize;
    #define MSiSCSI_MMIPSECStats_ReceiveHeapSize_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ReceiveHeapSize_ID 7
    ULONGLONG NegotiationFailures;
    #define MSiSCSI_MMIPSECStats_NegotiationFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_NegotiationFailures_ID 8
    ULONGLONG AuthenticationFailures;
    #define MSiSCSI_MMIPSECStats_AuthenticationFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_AuthenticationFailures_ID 9
    ULONGLONG InvalidCookiesReceived;
    #define MSiSCSI_MMIPSECStats_InvalidCookiesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_InvalidCookiesReceived_ID 10
    ULONGLONG TotalGetSPI;
    #define MSiSCSI_MMIPSECStats_TotalGetSPI_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_TotalGetSPI_ID 11
    ULONGLONG KeyAdditions;
    #define MSiSCSI_MMIPSECStats_KeyAdditions_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyAdditions_ID 12
    ULONGLONG KeyUpdates;
    #define MSiSCSI_MMIPSECStats_KeyUpdates_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyUpdates_ID 13
    ULONGLONG GetSPIFailures;
    #define MSiSCSI_MMIPSECStats_GetSPIFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_GetSPIFailures_ID 14
    ULONGLONG KeyAdditionFailures;
    #define MSiSCSI_MMIPSECStats_KeyAdditionFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyAdditionFailures_ID 15
    ULONGLONG KeyUpdateFailures;
    #define MSiSCSI_MMIPSECStats_KeyUpdateFailures_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_KeyUpdateFailures_ID 16
    ULONGLONG ConnectionListSize;
    #define MSiSCSI_MMIPSECStats_ConnectionListSize_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_ConnectionListSize_ID 17
    ULONGLONG OakleyMainMode;
    #define MSiSCSI_MMIPSECStats_OakleyMainMode_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_OakleyMainMode_ID 18
    ULONGLONG OakleyQuickMode;
    #define MSiSCSI_MMIPSECStats_OakleyQuickMode_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_OakleyQuickMode_ID 19
    ULONGLONG InvalidPackets;
    #define MSiSCSI_MMIPSECStats_InvalidPackets_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_InvalidPackets_ID 20
    ULONGLONG SoftAssociations;
    #define MSiSCSI_MMIPSECStats_SoftAssociations_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_MMIPSECStats_SoftAssociations_ID 21
} MSiSCSI_MMIPSECStats, *PMSiSCSI_MMIPSECStats;
    { 0xb4d1c606,0x8682,0x4b7a, { 0xac,0x6b,0xd8,0x83,0xd9,0x15,0x55,0xfb } }
DEFINE_GUID(MSiSCSI_QMIPSECStats_GUID, \
            0xb4d1c606,0x8682,0x4b7a,0xac,0x6b,0xd8,0x83,0xd9,0x15,0x55,0xfb);
typedef struct _MSiSCSI_QMIPSECStats
{
    ULONGLONG ActiveSA;
    #define MSiSCSI_QMIPSECStats_ActiveSA_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ActiveSA_ID 1
    ULONGLONG PendingKeyOperations;
    #define MSiSCSI_QMIPSECStats_PendingKeyOperations_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PendingKeyOperations_ID 2
    ULONGLONG KeyAdditions;
    #define MSiSCSI_QMIPSECStats_KeyAdditions_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_KeyAdditions_ID 3
    ULONGLONG KeyDeletions;
    #define MSiSCSI_QMIPSECStats_KeyDeletions_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_KeyDeletions_ID 4
    ULONGLONG ReKeys;
    #define MSiSCSI_QMIPSECStats_ReKeys_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ReKeys_ID 5
    ULONGLONG ActiveTunnels;
    #define MSiSCSI_QMIPSECStats_ActiveTunnels_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ActiveTunnels_ID 6
    ULONGLONG BadSPIPackets;
    #define MSiSCSI_QMIPSECStats_BadSPIPackets_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_BadSPIPackets_ID 7
    ULONGLONG PacketsNotDecrypted;
    #define MSiSCSI_QMIPSECStats_PacketsNotDecrypted_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PacketsNotDecrypted_ID 8
    ULONGLONG PacketsNotAuthenticated;
    #define MSiSCSI_QMIPSECStats_PacketsNotAuthenticated_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PacketsNotAuthenticated_ID 9
    ULONGLONG PacketsWithReplayDetection;
    #define MSiSCSI_QMIPSECStats_PacketsWithReplayDetection_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_PacketsWithReplayDetection_ID 10
    ULONGLONG ConfidentialBytesSent;
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesSent_ID 11
    ULONGLONG ConfidentialBytesReceived;
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_ConfidentialBytesReceived_ID 12
    ULONGLONG AuthenticatedBytesSent;
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesSent_ID 13
    ULONGLONG AuthenticatedBytesReceived;
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_AuthenticatedBytesReceived_ID 14
    ULONGLONG TransportBytesSent;
    #define MSiSCSI_QMIPSECStats_TransportBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TransportBytesSent_ID 15
    ULONGLONG TransportBytesReceived;
    #define MSiSCSI_QMIPSECStats_TransportBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TransportBytesReceived_ID 16
    ULONGLONG TunnelBytesSent;
    #define MSiSCSI_QMIPSECStats_TunnelBytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TunnelBytesSent_ID 17
    ULONGLONG TunnelBytesReceived;
    #define MSiSCSI_QMIPSECStats_TunnelBytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_QMIPSECStats_TunnelBytesReceived_ID 18
} MSiSCSI_QMIPSECStats, *PMSiSCSI_QMIPSECStats;
    { 0x4ae27cd9,0x8dfa,0x4c37, { 0xa4,0x2c,0xb8,0x8a,0x93,0xe3,0xe5,0x21 } }
DEFINE_GUID(MSiSCSI_ConnectionStatistics_GUID, \
            0x4ae27cd9,0x8dfa,0x4c37,0xa4,0x2c,0xb8,0x8a,0x93,0xe3,0xe5,0x21);
typedef struct _MSiSCSI_ConnectionStatistics
{
    WCHAR iSCSIName[223 + 1];
    #define MSiSCSI_ConnectionStatistics_iSCSIName_ID 1
    USHORT CID;
    #define MSiSCSI_ConnectionStatistics_CID_SIZE sizeof(USHORT)
    #define MSiSCSI_ConnectionStatistics_CID_ID 2
    ULONGLONG USID;
    #define MSiSCSI_ConnectionStatistics_USID_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_USID_ID 3
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_ConnectionStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_UniqueAdapterId_ID 4
    ULONGLONG BytesSent;
    #define MSiSCSI_ConnectionStatistics_BytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_BytesSent_ID 5
    ULONGLONG BytesReceived;
    #define MSiSCSI_ConnectionStatistics_BytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_BytesReceived_ID 6
    ULONGLONG PDUCommandsSent;
    #define MSiSCSI_ConnectionStatistics_PDUCommandsSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_PDUCommandsSent_ID 7
    ULONGLONG PDUResponsesReceived;
    #define MSiSCSI_ConnectionStatistics_PDUResponsesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_ConnectionStatistics_PDUResponsesReceived_ID 8
} MSiSCSI_ConnectionStatistics, *PMSiSCSI_ConnectionStatistics;
    { 0xc827993c,0x6d1f,0x4194, { 0x9b,0x5c,0xd7,0xc0,0xa5,0xf1,0xcf,0xb7 } }
DEFINE_GUID(MSiSCSI_SessionStatistics_GUID, \
            0xc827993c,0x6d1f,0x4194,0x9b,0x5c,0xd7,0xc0,0xa5,0xf1,0xcf,0xb7);
typedef struct _MSiSCSI_SessionStatistics
{
    WCHAR iSCSIName[223 + 1];
    #define MSiSCSI_SessionStatistics_iSCSIName_ID 1
    ULONGLONG USID;
    #define MSiSCSI_SessionStatistics_USID_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_USID_ID 2
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_SessionStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_UniqueAdapterId_ID 3
    ULONGLONG BytesSent;
    #define MSiSCSI_SessionStatistics_BytesSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_BytesSent_ID 4
    ULONGLONG BytesReceived;
    #define MSiSCSI_SessionStatistics_BytesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_BytesReceived_ID 5
    ULONGLONG PDUCommandsSent;
    #define MSiSCSI_SessionStatistics_PDUCommandsSent_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_PDUCommandsSent_ID 6
    ULONGLONG PDUResponsesReceived;
    #define MSiSCSI_SessionStatistics_PDUResponsesReceived_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_PDUResponsesReceived_ID 7
    ULONGLONG DigestErrors;
    #define MSiSCSI_SessionStatistics_DigestErrors_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_DigestErrors_ID 8
    ULONGLONG ConnectionTimeoutErrors;
    #define MSiSCSI_SessionStatistics_ConnectionTimeoutErrors_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_ConnectionTimeoutErrors_ID 9
    ULONGLONG FormatErrors;
    #define MSiSCSI_SessionStatistics_FormatErrors_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_SessionStatistics_FormatErrors_ID 10
} MSiSCSI_SessionStatistics, *PMSiSCSI_SessionStatistics;
    { 0xf022f413,0x3bf5,0x47ec, { 0xa9,0x42,0x33,0xb8,0x1c,0xf8,0xe7,0xff } }
DEFINE_GUID(MSiSCSI_InitiatorLoginStatistics_GUID, \
            0xf022f413,0x3bf5,0x47ec,0xa9,0x42,0x33,0xb8,0x1c,0xf8,0xe7,0xff);
typedef struct _MSiSCSI_InitiatorLoginStatistics
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_InitiatorLoginStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorLoginStatistics_UniqueAdapterId_ID 1
    ULONG LoginAcceptRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginAcceptRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginAcceptRsps_ID 2
    ULONG LoginOtherFailRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginOtherFailRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginOtherFailRsps_ID 3
    ULONG LoginRedirectRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginRedirectRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginRedirectRsps_ID 4
    ULONG LoginAuthFailRsps;
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthFailRsps_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthFailRsps_ID 5
    ULONG LoginAuthenticateFails;
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthenticateFails_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginAuthenticateFails_ID 6
    ULONG LoginNegotiateFails;
    #define MSiSCSI_InitiatorLoginStatistics_LoginNegotiateFails_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginNegotiateFails_ID 7
    ULONG LogoutNormals;
    #define MSiSCSI_InitiatorLoginStatistics_LogoutNormals_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LogoutNormals_ID 8
    ULONG LogoutOtherCodes;
    #define MSiSCSI_InitiatorLoginStatistics_LogoutOtherCodes_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LogoutOtherCodes_ID 9
    ULONG LoginFailures;
    #define MSiSCSI_InitiatorLoginStatistics_LoginFailures_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorLoginStatistics_LoginFailures_ID 10
} MSiSCSI_InitiatorLoginStatistics, *PMSiSCSI_InitiatorLoginStatistics;
    { 0xfa30c290,0x68db,0x430a, { 0xaf,0x76,0x91,0xa2,0xe1,0xc4,0x91,0x54 } }
DEFINE_GUID(MSiSCSI_InitiatorInstanceStatistics_GUID, \
            0xfa30c290,0x68db,0x430a,0xaf,0x76,0x91,0xa2,0xe1,0xc4,0x91,0x54);
typedef struct _MSiSCSI_InitiatorInstanceStatistics
{
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_InitiatorInstanceStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_InitiatorInstanceStatistics_UniqueAdapterId_ID 1
    ULONG SessionDigestErrorCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionDigestErrorCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionDigestErrorCount_ID 2
    ULONG SessionConnectionTimeoutErrorCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionConnectionTimeoutErrorCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionConnectionTimeoutErrorCount_ID 3
    ULONG SessionFormatErrorCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFormatErrorCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFormatErrorCount_ID 4
    ULONG SessionFailureCount;
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFailureCount_SIZE sizeof(ULONG)
    #define MSiSCSI_InitiatorInstanceStatistics_SessionFailureCount_ID 5
} MSiSCSI_InitiatorInstanceStatistics, *PMSiSCSI_InitiatorInstanceStatistics;
    { 0x5c59fd61,0xe919,0x4687, { 0x84,0xe2,0x72,0x00,0xab,0xe2,0x20,0x9b } }
DEFINE_GUID(MSiSCSI_NICPerformance_GUID, \
            0x5c59fd61,0xe919,0x4687,0x84,0xe2,0x72,0x00,0xab,0xe2,0x20,0x9b);
typedef struct _MSiSCSI_NICPerformance
{
    ULONG BytesTransmitted;
    #define MSiSCSI_NICPerformance_BytesTransmitted_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_BytesTransmitted_ID 1
    ULONG BytesReceived;
    #define MSiSCSI_NICPerformance_BytesReceived_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_BytesReceived_ID 2
    ULONG PDUTransmitted;
    #define MSiSCSI_NICPerformance_PDUTransmitted_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_PDUTransmitted_ID 3
    ULONG PDUReceived;
    #define MSiSCSI_NICPerformance_PDUReceived_SIZE sizeof(ULONG)
    #define MSiSCSI_NICPerformance_PDUReceived_ID 4
} MSiSCSI_NICPerformance, *PMSiSCSI_NICPerformance;
    { 0xe0b40aa8,0x544b,0x4d5e, { 0xba,0x60,0xa0,0x3f,0x13,0x6d,0xa8,0x3d } }
DEFINE_GUID(MSiSCSI_RequestTimeStatistics_GUID, \
            0xe0b40aa8,0x544b,0x4d5e,0xba,0x60,0xa0,0x3f,0x13,0x6d,0xa8,0x3d);
typedef struct _MSiSCSI_RequestTimeStatistics
{
    WCHAR iSCSIName[223 + 1];
    #define MSiSCSI_RequestTimeStatistics_iSCSIName_ID 1
    USHORT CID;
    #define MSiSCSI_RequestTimeStatistics_CID_SIZE sizeof(USHORT)
    #define MSiSCSI_RequestTimeStatistics_CID_ID 2
    ULONGLONG USID;
    #define MSiSCSI_RequestTimeStatistics_USID_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_RequestTimeStatistics_USID_ID 3
    ULONGLONG UniqueAdapterId;
    #define MSiSCSI_RequestTimeStatistics_UniqueAdapterId_SIZE sizeof(ULONGLONG)
    #define MSiSCSI_RequestTimeStatistics_UniqueAdapterId_ID 4
    ULONG MaximumProcessingTime;
    #define MSiSCSI_RequestTimeStatistics_MaximumProcessingTime_SIZE sizeof(ULONG)
    #define MSiSCSI_RequestTimeStatistics_MaximumProcessingTime_ID 5
    ULONG AverageProcessingTime;
    #define MSiSCSI_RequestTimeStatistics_AverageProcessingTime_SIZE sizeof(ULONG)
    #define MSiSCSI_RequestTimeStatistics_AverageProcessingTime_ID 6
} MSiSCSI_RequestTimeStatistics, *PMSiSCSI_RequestTimeStatistics;
