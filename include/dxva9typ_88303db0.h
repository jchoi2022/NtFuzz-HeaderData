#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <stdlib.h>
#include <objbase.h>
#include <windows.h>
typedef struct _DXVAUncompDataInfo
{
    DWORD UncompWidth;
    DWORD UncompHeight;
    D3DFORMAT UncompFormat;
} DXVAUncompDataInfo;
typedef struct _DXVACompBufferInfo
{
    DWORD NumCompBuffers;
    DWORD WidthToCreate;
    DWORD HeightToCreate;
    DWORD BytesToAllocate;
    DWORD Usage;
    D3DPOOL Pool;
    D3DFORMAT Format;
} DXVACompBufferInfo;
typedef struct _DXVABufferInfo
{
    VOID* pCompSurface;
    DWORD DataOffset;
    DWORD DataSize;
} DXVABufferInfo;
typedef enum _DXVA_SampleFormat {
    DXVA_SampleFormatMask = 0xFF,
    DXVA_SampleUnknown = 0,
    DXVA_SamplePreviousFrame = 1,
    DXVA_SampleProgressiveFrame = 2,
    DXVA_SampleFieldInterleavedEvenFirst = 3,
    DXVA_SampleFieldInterleavedOddFirst = 4,
    DXVA_SampleFieldSingleEven = 5,
    DXVA_SampleFieldSingleOdd = 6,
    DXVA_SampleSubStream = 7
} DXVA_SampleFormat;
    (((_sf) & (_Mask)) >> (_Shift))
typedef enum _DXVA_VideoTransferFunction
{
    DXVA_VideoTransFuncShift = (DXVA_ExtColorData_ShiftBase + 19),
    DXVA_VideoTransFuncMask = DXVAColorMask(5, DXVA_VideoTransFuncShift),
    DXVA_VideoTransFunc_Unknown = 0,
    DXVA_VideoTransFunc_10 = 1,
    DXVA_VideoTransFunc_18 = 2,
    DXVA_VideoTransFunc_20 = 3,
    DXVA_VideoTransFunc_22 = 4,
    DXVA_VideoTransFunc_22_709 = 5,
    DXVA_VideoTransFunc_22_240M = 6,
    DXVA_VideoTransFunc_22_8bit_sRGB = 7,
    DXVA_VideoTransFunc_28 = 8
} DXVA_VideoTransferFunction;
typedef enum _DXVA_VideoPrimaries
{
    DXVA_VideoPrimariesShift = (DXVA_ExtColorData_ShiftBase + 14),
    DXVA_VideoPrimariesMask = DXVAColorMask(5, DXVA_VideoPrimariesShift),
    DXVA_VideoPrimaries_Unknown = 0,
    DXVA_VideoPrimaries_reserved = 1,
    DXVA_VideoPrimaries_BT709 = 2,
    DXVA_VideoPrimaries_BT470_2_SysM = 3,
    DXVA_VideoPrimaries_BT470_2_SysBG = 4,
    DXVA_VideoPrimaries_SMPTE170M = 5,
    DXVA_VideoPrimaries_SMPTE240M = 6,
    DXVA_VideoPrimaries_EBU3213 = 7,
    DXVA_VideoPrimaries_SMPTE_C = 8
} DXVA_VideoPrimaries;
typedef enum _DXVA_VideoLighting
{
    DXVA_VideoLightingShift = (DXVA_ExtColorData_ShiftBase + 10),
    DXVA_VideoLightingMask = DXVAColorMask(4, DXVA_VideoLightingShift),
    DXVA_VideoLighting_Unknown = 0,
    DXVA_VideoLighting_bright = 1,
    DXVA_VideoLighting_office = 2,
    DXVA_VideoLighting_dim = 3,
    DXVA_VideoLighting_dark = 4
} DXVA_VideoLighting;
typedef enum _DXVA_VideoTransferMatrix
{
    DXVA_VideoTransferMatrixShift = (DXVA_ExtColorData_ShiftBase + 7),
    DXVA_VideoTransferMatrixMask = DXVAColorMask(3, DXVA_VideoTransferMatrixShift),
    DXVA_VideoTransferMatrix_Unknown = 0,
    DXVA_VideoTransferMatrix_BT709 = 1,
    DXVA_VideoTransferMatrix_BT601 = 2,
    DXVA_VideoTransferMatrix_SMPTE240M = 3
} DXVA_VideoTransferMatrix;
typedef enum _DXVA_NominalRange
{
    DXVA_NominalRangeShift = (DXVA_ExtColorData_ShiftBase + 4),
    DXVA_NominalRangeMask = DXVAColorMask(3, DXVA_NominalRangeShift),
    DXVA_NominalRange_Unknown = 0,
    DXVA_NominalRange_Normal = 1,
    DXVA_NominalRange_Wide = 2,
    DXVA_NominalRange_0_255 = 1,
    DXVA_NominalRange_16_235 = 2,
    DXVA_NominalRange_48_208 = 3
} DXVA_NominalRange;
typedef enum _DXVA_VideoChromaSubsampling
{
    DXVA_VideoChromaSubsamplingShift = (DXVA_ExtColorData_ShiftBase + 0),
    DXVA_VideoChromaSubsamplingMask = DXVAColorMask(4, DXVA_VideoChromaSubsamplingShift),
    DXVA_VideoChromaSubsampling_Unknown = 0,
    DXVA_VideoChromaSubsampling_ProgressiveChroma = 0x8,
    DXVA_VideoChromaSubsampling_Horizontally_Cosited = 0x4,
    DXVA_VideoChromaSubsampling_Vertically_Cosited = 0x2,
    DXVA_VideoChromaSubsampling_Vertically_AlignedChromaPlanes = 0x1,
    DXVA_VideoChromaSubsampling_MPEG2 = DXVA_VideoChromaSubsampling_Horizontally_Cosited |
                                           DXVA_VideoChromaSubsampling_Vertically_AlignedChromaPlanes,
    DXVA_VideoChromaSubsampling_MPEG1 = DXVA_VideoChromaSubsampling_Vertically_AlignedChromaPlanes,
    DXVA_VideoChromaSubsampling_DV_PAL = DXVA_VideoChromaSubsampling_Horizontally_Cosited |
                                           DXVA_VideoChromaSubsampling_Vertically_Cosited,
    DXVA_VideoChromaSubsampling_Cosited = DXVA_VideoChromaSubsampling_Horizontally_Cosited |
                                           DXVA_VideoChromaSubsampling_Vertically_Cosited |
                                           DXVA_VideoChromaSubsampling_Vertically_AlignedChromaPlanes,
} DXVA_VideoChromaSubsampling;
typedef struct _DXVA_ExtendedFormat
{
    UINT SampleFormat : 8;
    UINT VideoChromaSubsampling : 4;
    DXVA_NominalRange NominalRange : 3;
    DXVA_VideoTransferMatrix VideoTransferMatrix : 3;
    DXVA_VideoLighting VideoLighting : 4;
    DXVA_VideoPrimaries VideoPrimaries : 5;
    DXVA_VideoTransferFunction VideoTransferFunction : 5;
} DXVA_ExtendedFormat;
DEFINE_GUID(DXVA_COPPDevice,
    0xd2457add,0x8999,0x45ed,0x8a,0x8a,0xd1,0xaa,0x04,0x7b,0xa4,0xd5);
typedef struct _DXVA_COPPSignature {
    UCHAR Signature[256];
} DXVA_COPPSignature, *LPDXVA_COPPSignature;
typedef struct _DXVA_COPPCommand {
    GUID macKDI;
    GUID guidCommandID;
    ULONG dwSequence;
    ULONG cbSizeData;
    UCHAR CommandData[4056];
} DXVA_COPPCommand, *LPDXVA_COPPCommand;
DEFINE_GUID(DXVA_COPPSetProtectionLevel,
    0x9bb9327c,0x4eb5,0x4727,0x9f,0x00,0xb4,0x2b,0x09,0x19,0xc0,0xda);
typedef struct _DXVA_COPPSetProtectionLevelCmdData {
    ULONG ProtType;
    ULONG ProtLevel;
    ULONG ExtendedInfoChangeMask;
    ULONG ExtendedInfoData;
} DXVA_COPPSetProtectionLevelCmdData;
typedef enum _COPP_HDCP_Protection_Level {
    COPP_HDCP_Level0 = 0,
    COPP_HDCP_LevelMin = COPP_HDCP_Level0,
    COPP_HDCP_Level1 = 1,
    COPP_HDCP_LevelMax = COPP_HDCP_Level1,
    COPP_HDCP_ForceDWORD = 0x7fffffff
} COPP_HDCP_Protection_Level;
typedef enum _COPP_CGMSA_Protection_Level {
    COPP_CGMSA_Disabled = 0,
    COPP_CGMSA_LevelMin = COPP_CGMSA_Disabled,
    COPP_CGMSA_CopyFreely = 1,
    COPP_CGMSA_CopyNoMore = 2,
    COPP_CGMSA_CopyOneGeneration = 3,
    COPP_CGMSA_CopyNever = 4,
    COPP_CGMSA_RedistributionControlRequired = 0x08,
    COPP_CGMSA_LevelMax = (COPP_CGMSA_RedistributionControlRequired + COPP_CGMSA_CopyNever),
    COPP_CGMSA_ForceDWORD = 0x7fffffff
} COPP_CGMSA_Protection_Level;
typedef enum _COPP_ACP_Protection_Level {
    COPP_ACP_Level0 = 0,
    COPP_ACP_LevelMin = COPP_ACP_Level0,
    COPP_ACP_Level1 = 1,
    COPP_ACP_Level2 = 2,
    COPP_ACP_Level3 = 3,
    COPP_ACP_LevelMax = COPP_ACP_Level3,
    COPP_ACP_ForceDWORD = 0x7fffffff
} COPP_ACP_Protection_Level;
enum {
    COPP_ProtectionType_Unknown = 0x80000000,
    COPP_ProtectionType_None = 0x00000000,
    COPP_ProtectionType_HDCP = 0x00000001,
    COPP_ProtectionType_ACP = 0x00000002,
    COPP_ProtectionType_CGMSA = 0x00000004,
    COPP_ProtectionType_Mask = 0x80000007,
    COPP_ProtectionType_Reserved = 0x7FFFFFF8
};
DEFINE_GUID(DXVA_COPPSetSignaling,
    0x9a631a5, 0xd684, 0x4c60, 0x8e, 0x4d, 0xd3, 0xbb, 0xf, 0xb, 0xe3, 0xee);
typedef struct _DXVA_COPPSetSignalingCmdData {
    ULONG ActiveTVProtectionStandard;
    ULONG AspectRatioChangeMask1;
    ULONG AspectRatioData1;
    ULONG AspectRatioChangeMask2;
    ULONG AspectRatioData2;
    ULONG AspectRatioChangeMask3;
    ULONG AspectRatioData3;
    ULONG ExtendedInfoChangeMask[4];
    ULONG ExtendedInfoData[4];
    ULONG Reserved;
} DXVA_COPPSetSignalingCmdData;
typedef enum _COPP_TVProtectionStandard {
    COPP_ProtectionStandard_Unknown = 0x80000000,
    COPP_ProtectionStandard_None = 0x00000000,
    COPP_ProtectionStandard_IEC61880_525i = 0x00000001,
    COPP_ProtectionStandard_IEC61880_2_525i = 0x00000002,
    COPP_ProtectionStandard_IEC62375_625p = 0x00000004,
    COPP_ProtectionStandard_EIA608B_525 = 0x00000008,
    COPP_ProtectionStandard_EN300294_625i = 0x00000010,
    COPP_ProtectionStandard_CEA805A_TypeA_525p = 0x00000020,
    COPP_ProtectionStandard_CEA805A_TypeA_750p = 0x00000040,
    COPP_ProtectionStandard_CEA805A_TypeA_1125i = 0x00000080,
    COPP_ProtectionStandard_CEA805A_TypeB_525p = 0x00000100,
    COPP_ProtectionStandard_CEA805A_TypeB_750p = 0x00000200,
    COPP_ProtectionStandard_CEA805A_TypeB_1125i = 0x00000400,
    COPP_ProtectionStandard_ARIBTRB15_525i = 0x00000800,
    COPP_ProtectionStandard_ARIBTRB15_525p = 0x00001000,
    COPP_ProtectionStandard_ARIBTRB15_750p = 0x00002000,
    COPP_ProtectionStandard_ARIBTRB15_1125i = 0x00004000,
    COPP_ProtectionStandard_Mask = 0x80007FFF,
    COPP_ProtectionStandard_Reserved = 0x7FFF8000
} COPP_TVProtectionStandard;
typedef enum _COPP_ImageAspectRatio_EN300294 {
    COPP_AspectRatio_EN300294_FullFormat4by3 = 0,
    COPP_AspectRatio_EN300294_Box14by9Center = 1,
    COPP_AspectRatio_EN300294_Box14by9Top = 2,
    COPP_AspectRatio_EN300294_Box16by9Center = 3,
    COPP_AspectRatio_EN300294_Box16by9Top = 4,
    COPP_AspectRatio_EN300294_BoxGT16by9Center = 5,
    COPP_AspectRatio_EN300294_FullFormat4by3ProtectedCenter = 6,
    COPP_AspectRatio_EN300294_FullFormat16by9Anamorphic = 7,
    COPP_AspectRatio_ForceDWORD = 0x7fffffff
} COPP_ImageAspectRatio_EN300294;
typedef struct _DXVA_COPPStatusInput {
    GUID rApp;
    GUID guidStatusRequestID;
    ULONG dwSequence;
    ULONG cbSizeData;
    UCHAR StatusData[4056];
} DXVA_COPPStatusInput, *LPDXVA_COPPStatusInput;
typedef struct _DXVA_COPPStatusOutput {
    GUID macKDI;
    ULONG cbSizeData;
    UCHAR COPPStatus[4076];
} DXVA_COPPStatusOutput, *LPDXVA_COPPStatusOutput;
typedef enum _COPP_StatusFlags {
    COPP_StatusNormal = 0x00,
    COPP_LinkLost = 0x01,
    COPP_RenegotiationRequired = 0x02,
    COPP_StatusFlagsReserved = 0xFFFFFFFC
} COPP_StatusFlags;
typedef struct _DXVA_COPPStatusData {
    GUID rApp;
    ULONG dwFlags;
    ULONG dwData;
    ULONG ExtendedInfoValidMask;
    ULONG ExtendedInfoData;
} DXVA_COPPStatusData;
typedef struct _DXVA_COPPStatusDisplayData {
    GUID rApp;
    ULONG dwFlags;
    ULONG DisplayWidth;
    ULONG DisplayHeight;
    ULONG Format;
    ULONG d3dFormat;
    ULONG FreqNumerator;
    ULONG FreqDenominator;
} DXVA_COPPStatusDisplayData;
typedef enum _COPP_StatusHDCPFlags {
    COPP_HDCPRepeater = 0x01,
    COPP_HDCPFlagsReserved = 0xFFFFFFFE
} COPP_StatusHDCPFlags;
typedef struct _DXVA_COPPStatusHDCPKeyData {
    GUID rApp;
    ULONG dwFlags;
    ULONG dwHDCPFlags;
    GUID BKey;
    GUID Reserved1;
    GUID Reserved2;
} DXVA_COPPStatusHDCPKeyData;
DEFINE_GUID(DXVA_COPPQueryConnectorType,
      0x81d0bfd5,0x6afe,0x48c2,0x99,0xc0,0x95,0xa0,0x8f,0x97,0xc5,0xda);
typedef enum _COPP_ConnectorType {
    COPP_ConnectorType_Unknown = -1,
    COPP_ConnectorType_VGA = 0,
    COPP_ConnectorType_SVideo = 1,
    COPP_ConnectorType_CompositeVideo = 2,
    COPP_ConnectorType_ComponentVideo = 3,
    COPP_ConnectorType_DVI = 4,
    COPP_ConnectorType_HDMI = 5,
    COPP_ConnectorType_LVDS = 6,
    COPP_ConnectorType_TMDS = 7,
    COPP_ConnectorType_D_JPN = 8,
    COPP_ConnectorType_Internal = 0x80000000,
    COPP_ConnectorType_ForceDWORD = 0x7fffffff
} COPP_ConnectorType;
DEFINE_GUID(DXVA_COPPQueryProtectionType,
    0x38f2a801,0x9a6c,0x48bb,0x91,0x07,0xb6,0x69,0x6e,0x6f,0x17,0x97);
DEFINE_GUID(DXVA_COPPQueryLocalProtectionLevel,
    0xb2075857,0x3eda,0x4d5d,0x88,0xdb,0x74,0x8f,0x8c,0x1a,0x05,0x49);
DEFINE_GUID(DXVA_COPPQueryGlobalProtectionLevel,
    0x1957210a,0x7766,0x452a,0xb9,0x9a,0xd2,0x7a,0xed,0x54,0xf0,0x3a);
DEFINE_GUID(DXVA_COPPQueryDisplayData,
    0xd7bf1ba3,0xad13,0x4f8e,0xaf,0x98,0x0d,0xcb,0x3c,0xa2,0x04,0xcc);
DEFINE_GUID(DXVA_COPPQueryHDCPKeyData,
    0xdb59d74, 0xa992, 0x492e, 0xa0, 0xbd, 0xc2, 0x3f, 0xda, 0x56, 0x4e, 0x0);
DEFINE_GUID(DXVA_COPPQueryBusData,
    0xc6f4d673, 0x6174, 0x4184, 0x8e, 0x35, 0xf6, 0xdb, 0x52, 0x0, 0xbc, 0xba);
typedef enum _COPP_BusType {
    COPP_BusType_Unknown = 0,
    COPP_BusType_PCI = 1,
    COPP_BusType_PCIX = 2,
    COPP_BusType_PCIExpress = 3,
    COPP_BusType_AGP = 4,
    COPP_BusType_Integrated = 0x80000000,
    COPP_BusType_ForceDWORD = 0x7fffffff
} COPP_BusType;
DEFINE_GUID(DXVA_COPPQuerySignaling,
    0x6629a591, 0x3b79, 0x4cf3, 0x92, 0x4a, 0x11, 0xe8, 0xe7, 0x81, 0x16, 0x71);
typedef struct _DXVA_COPPStatusSignalingCmdData {
    GUID rApp;
    ULONG dwFlags;
    ULONG AvailableTVProtectionStandards;
    ULONG ActiveTVProtectionStandard;
    ULONG TVType;
    ULONG AspectRatioValidMask1;
    ULONG AspectRatioData1;
    ULONG AspectRatioValidMask2;
    ULONG AspectRatioData2;
    ULONG AspectRatioValidMask3;
    ULONG AspectRatioData3;
    ULONG ExtendedInfoValidMask[4];
    ULONG ExtendedInfoData[4];
} DXVA_COPPStatusSignalingCmdData;
#endif
#pragma endregion
