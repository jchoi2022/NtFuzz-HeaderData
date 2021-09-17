#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <pshpack4.h>
typedef struct {
    DWORD AddressType;
    DWORD NumofDigits;
    UCHAR Addr[ATM_ADDR_SIZE];
} ATM_ADDRESS;
typedef struct {
    DWORD Layer2Protocol;
    DWORD Layer2UserSpecifiedProtocol;
    DWORD Layer3Protocol;
    DWORD Layer3UserSpecifiedProtocol;
    DWORD Layer3IPI;
    UCHAR SnapID[5];
} ATM_BLLI;
typedef struct {
    DWORD HighLayerInfoType;
    DWORD HighLayerInfoLength;
    UCHAR HighLayerInfo[8];
} ATM_BHLI;
typedef struct sockaddr_atm {
    u_short satm_family;
    ATM_ADDRESS satm_number;
    ATM_BLLI satm_blli;
    ATM_BHLI satm_bhli;
} sockaddr_atm, SOCKADDR_ATM, *PSOCKADDR_ATM, *LPSOCKADDR_ATM;
typedef enum {
    IE_AALParameters,
    IE_TrafficDescriptor,
    IE_BroadbandBearerCapability,
    IE_BHLI,
    IE_BLLI,
    IE_CalledPartyNumber,
    IE_CalledPartySubaddress,
    IE_CallingPartyNumber,
    IE_CallingPartySubaddress,
    IE_Cause,
    IE_QOSClass,
    IE_TransitNetworkSelection,
} Q2931_IE_TYPE;
typedef struct {
    Q2931_IE_TYPE IEType;
    ULONG IELength;
    UCHAR IE[1];
} Q2931_IE;
typedef enum {
    AALTYPE_5 = 5,
    AALTYPE_USER = 16,
} AAL_TYPE;
typedef struct {
    ULONG ForwardMaxCPCSSDUSize;
    ULONG BackwardMaxCPCSSDUSize;
    UCHAR Mode;
    UCHAR SSCSType;
} AAL5_PARAMETERS;
typedef struct {
    ULONG UserDefined;
} AALUSER_PARAMETERS;
typedef struct {
    AAL_TYPE AALType;
    union {
        AAL5_PARAMETERS AAL5Parameters;
        AALUSER_PARAMETERS AALUserParameters;
    } AALSpecificParameters;
} AAL_PARAMETERS_IE;
typedef struct {
    ULONG PeakCellRate_CLP0;
    ULONG PeakCellRate_CLP01;
    ULONG SustainableCellRate_CLP0;
    ULONG SustainableCellRate_CLP01;
    ULONG MaxBurstSize_CLP0;
    ULONG MaxBurstSize_CLP01;
    BOOL Tagging;
} ATM_TD;
typedef struct {
    ATM_TD Forward;
    ATM_TD Backward;
    BOOL BestEffort;
} ATM_TRAFFIC_DESCRIPTOR_IE;
typedef struct {
    UCHAR BearerClass;
    UCHAR TrafficType;
    UCHAR TimingRequirements;
    UCHAR ClippingSusceptability;
    UCHAR UserPlaneConnectionConfig;
} ATM_BROADBAND_BEARER_CAPABILITY_IE;
typedef ATM_BHLI ATM_BHLI_IE;
typedef struct {
    DWORD Layer2Protocol;
    UCHAR Layer2Mode;
    UCHAR Layer2WindowSize;
    DWORD Layer2UserSpecifiedProtocol;
    DWORD Layer3Protocol;
    UCHAR Layer3Mode;
    UCHAR Layer3DefaultPacketSize;
    UCHAR Layer3PacketWindowSize;
    DWORD Layer3UserSpecifiedProtocol;
    DWORD Layer3IPI;
    UCHAR SnapID[5];
} ATM_BLLI_IE;
typedef ATM_ADDRESS ATM_CALLED_PARTY_NUMBER_IE;
typedef ATM_ADDRESS ATM_CALLED_PARTY_SUBADDRESS_IE;
typedef struct {
    ATM_ADDRESS ATM_Number;
    UCHAR Presentation_Indication;
    UCHAR Screening_Indicator;
} ATM_CALLING_PARTY_NUMBER_IE;
typedef ATM_ADDRESS ATM_CALLING_PARTY_SUBADDRESS_IE;
typedef struct {
    UCHAR Location;
    UCHAR Cause;
    UCHAR DiagnosticsLength;
    UCHAR Diagnostics[4];
} ATM_CAUSE_IE;
typedef struct {
    UCHAR QOSClassForward;
    UCHAR QOSClassBackward;
} ATM_QOS_CLASS_IE;
typedef struct {
    UCHAR TypeOfNetworkId;
    UCHAR NetworkIdPlan;
    UCHAR NetworkIdLength;
    UCHAR NetworkId[1];
} ATM_TRANSIT_NETWORK_SELECTION_IE;
typedef struct {
    DWORD DeviceNumber;
    DWORD VPI;
    DWORD VCI;
} ATM_CONNECTION_ID;
typedef struct {
   ATM_CONNECTION_ID PvcConnectionId;
   QOS PvcQos;
} ATM_PVC_PARAMS;
#include <poppack.h>
#endif
#pragma endregion
