       
typedef ULONG ATM_ADDRESSTYPE;
typedef struct _ATM_ADDRESS
{
 ATM_ADDRESSTYPE AddressType;
 ULONG NumberOfDigits;
 UCHAR Address[ATM_ADDRESS_LENGTH];
} ATM_ADDRESS, *PATM_ADDRESS;
typedef ULONG ATM_AAL_TYPE, *PATM_AAL_TYPE;
typedef enum
{
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
 IE_BroadbandSendingComplete,
 IE_LIJCallId,
 IE_Raw
} Q2931_IE_TYPE;
typedef struct _Q2931_IE
{
 Q2931_IE_TYPE IEType;
 ULONG IELength;
 UCHAR IE[1];
} Q2931_IE, *PQ2931_IE;
typedef struct _AAL1_PARAMETERS
{
 UCHAR Subtype;
 UCHAR CBRRate;
 USHORT Multiplier;
 UCHAR SourceClockRecoveryMethod;
 UCHAR ErrorCorrectionMethod;
 USHORT StructuredDataTransferBlocksize;
 UCHAR PartiallyFilledCellsMethod;
} AAL1_PARAMETERS, *PAAL1_PARAMETERS;
typedef struct _AAL34_PARAMETERS
{
 USHORT ForwardMaxCPCSSDUSize;
 USHORT BackwardMaxCPCSSDUSize;
 USHORT LowestMID;
 USHORT HighestMID;
 UCHAR SSCSType;
} AAL34_PARAMETERS, *PAAL34_PARAMETERS;
typedef struct _AAL5_PARAMETERS
{
 ULONG ForwardMaxCPCSSDUSize;
 ULONG BackwardMaxCPCSSDUSize;
 UCHAR Mode;
 UCHAR SSCSType;
} AAL5_PARAMETERS, *PAAL5_PARAMETERS;
typedef struct _AALUSER_PARAMETERS
{
 ULONG UserDefined;
} AALUSER_PARAMETERS, *PAALUSER_PARAMETERS;
typedef struct _AAL_PARAMETERS_IE
{
 ATM_AAL_TYPE AALType;
 union
 {
  AAL1_PARAMETERS AAL1Parameters;
  AAL34_PARAMETERS AAL34Parameters;
  AAL5_PARAMETERS AAL5Parameters;
  AALUSER_PARAMETERS AALUserParameters;
 } AALSpecificParameters;
} AAL_PARAMETERS_IE, *PAAL_PARAMETERS_IE;
typedef struct _ATM_TRAFFIC_DESCRIPTOR
{
 ULONG PeakCellRateCLP0;
 ULONG PeakCellRateCLP01;
 ULONG SustainableCellRateCLP0;
 ULONG SustainableCellRateCLP01;
 ULONG MaximumBurstSizeCLP0;
 ULONG MaximumBurstSizeCLP01;
 BOOLEAN Tagging;
} ATM_TRAFFIC_DESCRIPTOR, *PATM_TRAFFIC_DESCRIPTOR;
typedef struct _ATM_TRAFFIC_DESCRIPTOR_IE
{
 ATM_TRAFFIC_DESCRIPTOR ForwardTD;
 ATM_TRAFFIC_DESCRIPTOR BackwardTD;
 BOOLEAN BestEffort;
} ATM_TRAFFIC_DESCRIPTOR_IE, *PATM_TRAFFIC_DESCRIPTOR_IE;
typedef struct _ATM_BROADBAND_BEARER_CAPABILITY_IE
{
 UCHAR BearerClass;
 UCHAR TrafficType;
 UCHAR TimingRequirements;
 UCHAR ClippingSusceptability;
 UCHAR UserPlaneConnectionConfig;
} ATM_BROADBAND_BEARER_CAPABILITY_IE, *PATM_BROADBAND_BEARER_CAPABILITY_IE;
typedef struct _ATM_BHLI_IE
{
 ULONG HighLayerInfoType;
 ULONG HighLayerInfoLength;
 UCHAR HighLayerInfo[8];
} ATM_BHLI_IE, *PATM_BHLI_IE;
typedef struct _ATM_BLLI_IE
{
 ULONG Layer2Protocol;
 UCHAR Layer2Mode;
 UCHAR Layer2WindowSize;
 ULONG Layer2UserSpecifiedProtocol;
 ULONG Layer3Protocol;
 UCHAR Layer3Mode;
 UCHAR Layer3DefaultPacketSize;
 UCHAR Layer3PacketWindowSize;
 ULONG Layer3UserSpecifiedProtocol;
 ULONG Layer3IPI;
 UCHAR SnapId[5];
} ATM_BLLI_IE, *PATM_BLLI_IE;
typedef ATM_ADDRESS ATM_CALLED_PARTY_NUMBER_IE;
typedef ATM_ADDRESS ATM_CALLED_PARTY_SUBADDRESS_IE;
typedef struct _ATM_CALLING_PARTY_NUMBER_IE
{
 ATM_ADDRESS Number;
 UCHAR PresentationIndication;
 UCHAR ScreeningIndicator;
} ATM_CALLING_PARTY_NUMBER_IE, *PATM_CALLING_PARTY_NUMBER_IE;
typedef ATM_ADDRESS ATM_CALLING_PARTY_SUBADDRESS_IE;
typedef struct _ATM_QOS_CLASS_IE
{
 UCHAR QOSClassForward;
 UCHAR QOSClassBackward;
} ATM_QOS_CLASS_IE, *PATM_QOS_CLASS_IE;
typedef struct _ATM_BROADBAND_SENDING_COMPLETE_IE
{
 UCHAR SendingComplete;
} ATM_BROADBAND_SENDING_COMPLETE_IE, *PATM_BROADBAND_SENDING_COMPLETE_IE;
typedef struct _ATM_TRANSIT_NETWORK_SELECTION_IE
{
 UCHAR TypeOfNetworkId;
 UCHAR NetworkIdPlan;
 UCHAR NetworkIdLength;
 UCHAR NetworkId[1];
} ATM_TRANSIT_NETWORK_SELECTION_IE, *PATM_TRANSIT_NETWORK_SELECTION_IE;
typedef struct _ATM_CAUSE_IE
{
 UCHAR Location;
 UCHAR Cause;
 UCHAR DiagnosticsLength;
 UCHAR Diagnostics[4];
} ATM_CAUSE_IE, *PATM_CAUSE_IE;
typedef struct _ATM_LIJ_CALLID_IE
{
 ULONG Identifier;
} ATM_LIJ_CALLID_IE, *PATM_LIJ_CALLID_IE;
typedef struct _ATM_RAW_IE
{
 ULONG RawIELength;
 ULONG RawIEType;
 UCHAR RawIEValue[1];
} ATM_RAW_IE, *PATM_RAW_IE;
typedef struct _Q2931_CALLMGR_PARAMETERS
{
 ATM_ADDRESS CalledParty;
 ATM_ADDRESS CallingParty;
 ULONG InfoElementCount;
 UCHAR InfoElements[1];
} Q2931_CALLMGR_PARAMETERS, *PQ2931_CALLMGR_PARAMETERS;
typedef struct _ATM_VPIVCI
{
 ULONG Vpi;
 ULONG Vci;
} ATM_VPIVCI, *PATM_VPIVCI;
typedef ULONG ATM_SERVICE_CATEGORY, *PATM_SERVICE_CATEGORY;
typedef struct _ATM_FLOW_PARAMETERS
{
 ATM_SERVICE_CATEGORY ServiceCategory;
 ULONG AverageCellRate;
 ULONG PeakCellRate;
 ULONG MinimumCellRate;
 ULONG InitialCellRate;
 ULONG BurstLengthCells;
 ULONG MaxSduSize;
 ULONG TransientBufferExposure;
 ULONG CumulativeRMFixedRTT;
 UCHAR RateIncreaseFactor;
 UCHAR RateDecreaseFactor;
 USHORT ACRDecreaseTimeFactor;
 UCHAR MaximumCellsPerForwardRMCell;
 UCHAR MaximumForwardRMCellInterval;
 UCHAR CutoffDecreaseFactor;
 UCHAR Reserved1;
 ULONG MissingRMCellCount;
 ULONG Reserved2;
 ULONG Reserved3;
} ATM_FLOW_PARAMETERS, *PATM_FLOW_PARAMETERS;
typedef struct _ATM_MEDIA_PARAMETERS
{
 ATM_VPIVCI ConnectionId;
 ATM_AAL_TYPE AALType;
 ULONG CellDelayVariationCLP0;
 ULONG CellDelayVariationCLP1;
 ULONG CellLossRatioCLP0;
 ULONG CellLossRatioCLP1;
 ULONG CellTransferDelayCLP0;
 ULONG CellTransferDelayCLP1;
 ULONG DefaultCLP;
 ATM_FLOW_PARAMETERS Transmit;
 ATM_FLOW_PARAMETERS Receive;
} ATM_MEDIA_PARAMETERS, *PATM_MEDIA_PARAMETERS;
typedef struct _ATM_SAP
{
 ATM_BLLI_IE Blli;
 ATM_BHLI_IE Bhli;
 ULONG NumberOfAddresses;
 UCHAR Addresses[1];
} ATM_SAP, *PATM_SAP;
typedef struct _ATM_PVC_SAP
{
 ATM_BLLI_IE Blli;
 ATM_BHLI_IE Bhli;
} ATM_PVC_SAP, *PATM_PVC_SAP;
typedef struct _Q2931_ADD_PVC
{
 ATM_ADDRESS CalledParty;
 ATM_ADDRESS CallingParty;
 ATM_VPIVCI ConnectionId;
 ATM_AAL_TYPE AALType;
 ATM_FLOW_PARAMETERS ForwardFP;
 ATM_FLOW_PARAMETERS BackwardFP;
 ULONG Flags;
 ATM_PVC_SAP LocalSap;
 ATM_PVC_SAP DestinationSap;
 BOOLEAN LIJIdPresent;
 ATM_LIJ_CALLID_IE LIJId;
} Q2931_ADD_PVC, *PQ2931_ADD_PVC;
typedef struct _Q2931_DELETE_PVC
{
 ATM_VPIVCI ConnectionId;
} Q2931_DELETE_PVC, *PQ2931_DELETE_PVC;
typedef struct _CO_GET_CALL_INFORMATION
{
 ULONG CallInfoType;
 ULONG CallInfoLength;
 PVOID CallInfoBuffer;
} CO_GET_CALL_INFORMATION, *PCO_GET_CALL_INFORMATION;
typedef struct _ATM_VC_RATES_SUPPORTED
{
 ULONG MinCellRate;
 ULONG MaxCellRate;
} ATM_VC_RATES_SUPPORTED, *PATM_VC_RATES_SUPPORTED;
typedef struct _ATM_AAL_OOB_INFO
{
 ATM_AAL_TYPE AalType;
 union
 {
  struct _ATM_AAL5_INFO
  {
   BOOLEAN CellLossPriority;
   UCHAR UserToUserIndication;
   UCHAR CommonPartIndicator;
  } ATM_AAL5_INFO;
  struct _ATM_AAL0_INFO
  {
   BOOLEAN CellLossPriority;
   UCHAR PayLoadTypeIdentifier;
  } ATM_AAL0_INFO;
 };
} ATM_AAL_OOB_INFO, *PATM_AAL_OOB_INFO;
typedef ULONG ATM_SERVICE_REGISTRY_TYPE;
typedef struct _ATM_SERVICE_ADDRESS_LIST
{
 ATM_SERVICE_REGISTRY_TYPE ServiceRegistryType;
 ULONG NumberOfAddressesAvailable;
 ULONG NumberOfAddressesReturned;
 ATM_ADDRESS Address[1];
} ATM_SERVICE_ADDRESS_LIST, *PATM_SERVICE_ADDRESS_LIST;
