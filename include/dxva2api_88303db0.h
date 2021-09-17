#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDirect3DDeviceManager9 IDirect3DDeviceManager9;
typedef interface IDirectXVideoAccelerationService IDirectXVideoAccelerationService;
typedef interface IDirectXVideoDecoderService IDirectXVideoDecoderService;
typedef interface IDirectXVideoProcessorService IDirectXVideoProcessorService;
typedef interface IDirectXVideoDecoder IDirectXVideoDecoder;
typedef interface IDirectXVideoProcessor IDirectXVideoProcessor;
typedef interface IDirectXVideoMemoryConfiguration IDirectXVideoMemoryConfiguration;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#if 0
typedef DWORD IDirect3DDevice9;
typedef DWORD IDirect3DSurface9;
typedef DWORD D3DFORMAT;
typedef DWORD D3DPOOL;
#endif
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(DXVA2_ModeMPEG2_MoComp, 0xe6a9f44b, 0x61b0, 0x4563,0x9e,0xa4,0x63,0xd2,0xa3,0xc6,0xfe,0x66);
DEFINE_GUID(DXVA2_ModeMPEG2_IDCT, 0xbf22ad00, 0x03ea, 0x4690,0x80,0x77,0x47,0x33,0x46,0x20,0x9b,0x7e);
DEFINE_GUID(DXVA2_ModeMPEG2_VLD, 0xee27417f, 0x5e28, 0x4e65,0xbe,0xea,0x1d,0x26,0xb5,0x08,0xad,0xc9);
DEFINE_GUID(DXVA2_ModeMPEG1_VLD, 0x6f3ec719, 0x3735, 0x42cc,0x80,0x63,0x65,0xcc,0x3c,0xb3,0x66,0x16);
DEFINE_GUID(DXVA2_ModeMPEG2and1_VLD,0x86695f12, 0x340e, 0x4f04,0x9f,0xd3,0x92,0x53,0xdd,0x32,0x74,0x60);
DEFINE_GUID(DXVA2_ModeH264_A, 0x1b81be64, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeH264_B, 0x1b81be65, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeH264_C, 0x1b81be66, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeH264_D, 0x1b81be67, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeH264_E, 0x1b81be68, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeH264_F, 0x1b81be69, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeH264_VLD_WithFMOASO_NoFGT, 0xd5f04ff9, 0x3418,0x45d8,0x95,0x61,0x32,0xa7,0x6a,0xae,0x2d,0xdd);
DEFINE_GUID(DXVA2_ModeH264_VLD_Stereo_Progressive_NoFGT, 0xd79be8da, 0x0cf1,0x4c81,0xb8,0x2a,0x69,0xa4,0xe2,0x36,0xf4,0x3d);
DEFINE_GUID(DXVA2_ModeH264_VLD_Stereo_NoFGT, 0xf9aaccbb, 0xc2b6,0x4cfc,0x87,0x79,0x57,0x07,0xb1,0x76,0x05,0x52);
DEFINE_GUID(DXVA2_ModeH264_VLD_Multiview_NoFGT, 0x705b9d82, 0x76cf,0x49d6,0xb7,0xe6,0xac,0x88,0x72,0xdb,0x01,0x3c);
DEFINE_GUID(DXVA2_ModeWMV8_A, 0x1b81be80, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeWMV8_B, 0x1b81be81, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeWMV9_A, 0x1b81be90, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeWMV9_B, 0x1b81be91, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeWMV9_C, 0x1b81be94, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeVC1_A, 0x1b81beA0, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeVC1_B, 0x1b81beA1, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeVC1_C, 0x1b81beA2, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeVC1_D, 0x1b81beA3, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_ModeVC1_D2010,0x1b81beA4, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_NoEncrypt, 0x1b81beD0, 0xa0c7,0x11d3,0xb9,0x84,0x00,0xc0,0x4f,0x2e,0x73,0xc5);
DEFINE_GUID(DXVA2_VideoProcProgressiveDevice, 0x5a54a0c9,0xc7ec,0x4bd9,0x8e,0xde,0xf3,0xc7,0x5d,0xc4,0x39,0x3b);
DEFINE_GUID(DXVA2_VideoProcBobDevice, 0x335aa36e,0x7884,0x43a4,0x9c,0x91,0x7f,0x87,0xfa,0xf3,0xe3,0x7e);
DEFINE_GUID(DXVA2_VideoProcSoftwareDevice, 0x4553d47f,0xee7e,0x4e3f,0x94,0x75,0xdb,0xf1,0x37,0x6c,0x48,0x10);
DEFINE_GUID(DXVA2_ModeMPEG4pt2_VLD_Simple, 0xefd64d74, 0xc9e8,0x41d7,0xa5,0xe9,0xe9,0xb0,0xe3,0x9f,0xa3,0x19);
DEFINE_GUID(DXVA2_ModeMPEG4pt2_VLD_AdvSimple_NoGMC, 0xed418a9f, 0x010d,0x4eda,0x9a,0xe3,0x9a,0x65,0x35,0x8d,0x8d,0x2e);
DEFINE_GUID(DXVA2_ModeMPEG4pt2_VLD_AdvSimple_GMC, 0xab998b5b, 0x4258,0x44a9,0x9f,0xeb,0x94,0xe5,0x97,0xa6,0xba,0xae);
DEFINE_GUID(DXVA2_ModeHEVC_VLD_Main, 0x5b11d51b, 0x2f4c,0x4452,0xbc,0xc3,0x09,0xf2,0xa1,0x16,0x0c,0xc0);
DEFINE_GUID(DXVA2_ModeHEVC_VLD_Main10, 0x107af0e0, 0xef1a,0x4d19,0xab,0xa8,0x67,0xa1,0x63,0x07,0x3d,0x13);
DEFINE_GUID(DXVA2_ModeVP9_VLD_Profile0, 0x463707f8, 0xa1d0, 0x4585, 0x87, 0x6d, 0x83, 0xaa, 0x6d, 0x60, 0xb8, 0x9e);
DEFINE_GUID(DXVA2_ModeVP9_VLD_10bit_Profile2, 0xa4c749ef, 0x6ecf, 0x48aa, 0x84, 0x48, 0x50, 0xa7, 0xa1, 0x16, 0x5f, 0xf7);
DEFINE_GUID(DXVA2_ModeVP8_VLD, 0x90b899ea, 0x3a62, 0x4705, 0x88, 0xb3, 0x8d, 0xf0, 0x4b, 0x27, 0x44, 0xe7);
#pragma warning( push )
#pragma warning( disable : 4201 )
typedef struct _DXVA2_ExtendedFormat
    {
    union
        {
        struct
            {
            UINT SampleFormat : 8;
            UINT VideoChromaSubsampling : 4;
            UINT NominalRange : 3;
            UINT VideoTransferMatrix : 3;
            UINT VideoLighting : 4;
            UINT VideoPrimaries : 5;
            UINT VideoTransferFunction : 5;
            } ;
        UINT value;
        } ;
    } DXVA2_ExtendedFormat;
#pragma warning( pop )
typedef
enum _DXVA2_SampleFormat
    {
        DXVA2_SampleFormatMask = 0xff,
        DXVA2_SampleUnknown = 0,
        DXVA2_SampleProgressiveFrame = 2,
        DXVA2_SampleFieldInterleavedEvenFirst = 3,
        DXVA2_SampleFieldInterleavedOddFirst = 4,
        DXVA2_SampleFieldSingleEven = 5,
        DXVA2_SampleFieldSingleOdd = 6,
        DXVA2_SampleSubStream = 7
    } DXVA2_SampleFormat;
typedef
enum _DXVA2_VideoChromaSubSampling
    {
        DXVA2_VideoChromaSubsamplingMask = 0xf,
        DXVA2_VideoChromaSubsampling_Unknown = 0,
        DXVA2_VideoChromaSubsampling_ProgressiveChroma = 0x8,
        DXVA2_VideoChromaSubsampling_Horizontally_Cosited = 0x4,
        DXVA2_VideoChromaSubsampling_Vertically_Cosited = 0x2,
        DXVA2_VideoChromaSubsampling_Vertically_AlignedChromaPlanes = 0x1,
        DXVA2_VideoChromaSubsampling_MPEG2 = ( DXVA2_VideoChromaSubsampling_Horizontally_Cosited | DXVA2_VideoChromaSubsampling_Vertically_AlignedChromaPlanes ) ,
        DXVA2_VideoChromaSubsampling_MPEG1 = DXVA2_VideoChromaSubsampling_Vertically_AlignedChromaPlanes,
        DXVA2_VideoChromaSubsampling_DV_PAL = ( DXVA2_VideoChromaSubsampling_Horizontally_Cosited | DXVA2_VideoChromaSubsampling_Vertically_Cosited ) ,
        DXVA2_VideoChromaSubsampling_Cosited = ( ( DXVA2_VideoChromaSubsampling_Horizontally_Cosited | DXVA2_VideoChromaSubsampling_Vertically_Cosited ) | DXVA2_VideoChromaSubsampling_Vertically_AlignedChromaPlanes )
    } DXVA2_VideoChromaSubSampling;
typedef
enum _DXVA2_NominalRange
    {
        DXVA2_NominalRangeMask = 0x7,
        DXVA2_NominalRange_Unknown = 0,
        DXVA2_NominalRange_Normal = 1,
        DXVA2_NominalRange_Wide = 2,
        DXVA2_NominalRange_0_255 = 1,
        DXVA2_NominalRange_16_235 = 2,
        DXVA2_NominalRange_48_208 = 3
    } DXVA2_NominalRange;
typedef
enum _DXVA2_VideoTransferMatrix
    {
        DXVA2_VideoTransferMatrixMask = 0x7,
        DXVA2_VideoTransferMatrix_Unknown = 0,
        DXVA2_VideoTransferMatrix_BT709 = 1,
        DXVA2_VideoTransferMatrix_BT601 = 2,
        DXVA2_VideoTransferMatrix_SMPTE240M = 3
    } DXVA2_VideoTransferMatrix;
typedef
enum _DXVA2_VideoLighting
    {
        DXVA2_VideoLightingMask = 0xf,
        DXVA2_VideoLighting_Unknown = 0,
        DXVA2_VideoLighting_bright = 1,
        DXVA2_VideoLighting_office = 2,
        DXVA2_VideoLighting_dim = 3,
        DXVA2_VideoLighting_dark = 4
    } DXVA2_VideoLighting;
typedef
enum _DXVA2_VideoPrimaries
    {
        DXVA2_VideoPrimariesMask = 0x1f,
        DXVA2_VideoPrimaries_Unknown = 0,
        DXVA2_VideoPrimaries_reserved = 1,
        DXVA2_VideoPrimaries_BT709 = 2,
        DXVA2_VideoPrimaries_BT470_2_SysM = 3,
        DXVA2_VideoPrimaries_BT470_2_SysBG = 4,
        DXVA2_VideoPrimaries_SMPTE170M = 5,
        DXVA2_VideoPrimaries_SMPTE240M = 6,
        DXVA2_VideoPrimaries_EBU3213 = 7,
        DXVA2_VideoPrimaries_SMPTE_C = 8
    } DXVA2_VideoPrimaries;
typedef
enum _DXVA2_VideoTransferFunction
    {
        DXVA2_VideoTransFuncMask = 0x1f,
        DXVA2_VideoTransFunc_Unknown = 0,
        DXVA2_VideoTransFunc_10 = 1,
        DXVA2_VideoTransFunc_18 = 2,
        DXVA2_VideoTransFunc_20 = 3,
        DXVA2_VideoTransFunc_22 = 4,
        DXVA2_VideoTransFunc_709 = 5,
        DXVA2_VideoTransFunc_240M = 6,
        DXVA2_VideoTransFunc_sRGB = 7,
        DXVA2_VideoTransFunc_28 = 8
    } DXVA2_VideoTransferFunction;
typedef struct _DXVA2_Frequency
    {
    UINT Numerator;
    UINT Denominator;
    } DXVA2_Frequency;
typedef struct _DXVA2_VideoDesc
    {
    UINT SampleWidth;
    UINT SampleHeight;
    DXVA2_ExtendedFormat SampleFormat;
    D3DFORMAT Format;
    DXVA2_Frequency InputSampleFreq;
    DXVA2_Frequency OutputFrameFreq;
    UINT UABProtectionLevel;
    UINT Reserved;
    } DXVA2_VideoDesc;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0003
    {
        DXVA2_DeinterlaceTech_Unknown = 0,
        DXVA2_DeinterlaceTech_BOBLineReplicate = 0x1,
        DXVA2_DeinterlaceTech_BOBVerticalStretch = 0x2,
        DXVA2_DeinterlaceTech_BOBVerticalStretch4Tap = 0x4,
        DXVA2_DeinterlaceTech_MedianFiltering = 0x8,
        DXVA2_DeinterlaceTech_EdgeFiltering = 0x10,
        DXVA2_DeinterlaceTech_FieldAdaptive = 0x20,
        DXVA2_DeinterlaceTech_PixelAdaptive = 0x40,
        DXVA2_DeinterlaceTech_MotionVectorSteered = 0x80,
        DXVA2_DeinterlaceTech_InverseTelecine = 0x100,
        DXVA2_DeinterlaceTech_Mask = 0x1ff
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0004
    {
        DXVA2_NoiseFilterLumaLevel = 1,
        DXVA2_NoiseFilterLumaThreshold = 2,
        DXVA2_NoiseFilterLumaRadius = 3,
        DXVA2_NoiseFilterChromaLevel = 4,
        DXVA2_NoiseFilterChromaThreshold = 5,
        DXVA2_NoiseFilterChromaRadius = 6,
        DXVA2_DetailFilterLumaLevel = 7,
        DXVA2_DetailFilterLumaThreshold = 8,
        DXVA2_DetailFilterLumaRadius = 9,
        DXVA2_DetailFilterChromaLevel = 10,
        DXVA2_DetailFilterChromaThreshold = 11,
        DXVA2_DetailFilterChromaRadius = 12
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0005
    {
        DXVA2_NoiseFilterTech_Unsupported = 0,
        DXVA2_NoiseFilterTech_Unknown = 0x1,
        DXVA2_NoiseFilterTech_Median = 0x2,
        DXVA2_NoiseFilterTech_Temporal = 0x4,
        DXVA2_NoiseFilterTech_BlockNoise = 0x8,
        DXVA2_NoiseFilterTech_MosquitoNoise = 0x10,
        DXVA2_NoiseFilterTech_Mask = 0x1f
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0006
    {
        DXVA2_DetailFilterTech_Unsupported = 0,
        DXVA2_DetailFilterTech_Unknown = 0x1,
        DXVA2_DetailFilterTech_Edge = 0x2,
        DXVA2_DetailFilterTech_Sharpening = 0x4,
        DXVA2_DetailFilterTech_Mask = 0x7
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0007
    {
        DXVA2_ProcAmp_None = 0,
        DXVA2_ProcAmp_Brightness = 0x1,
        DXVA2_ProcAmp_Contrast = 0x2,
        DXVA2_ProcAmp_Hue = 0x4,
        DXVA2_ProcAmp_Saturation = 0x8,
        DXVA2_ProcAmp_Mask = 0xf
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0008
    {
        DXVA2_VideoProcess_None = 0,
        DXVA2_VideoProcess_YUV2RGB = 0x1,
        DXVA2_VideoProcess_StretchX = 0x2,
        DXVA2_VideoProcess_StretchY = 0x4,
        DXVA2_VideoProcess_AlphaBlend = 0x8,
        DXVA2_VideoProcess_SubRects = 0x10,
        DXVA2_VideoProcess_SubStreams = 0x20,
        DXVA2_VideoProcess_SubStreamsExtended = 0x40,
        DXVA2_VideoProcess_YUV2RGBExtended = 0x80,
        DXVA2_VideoProcess_AlphaBlendExtended = 0x100,
        DXVA2_VideoProcess_Constriction = 0x200,
        DXVA2_VideoProcess_NoiseFilter = 0x400,
        DXVA2_VideoProcess_DetailFilter = 0x800,
        DXVA2_VideoProcess_PlanarAlpha = 0x1000,
        DXVA2_VideoProcess_LinearScaling = 0x2000,
        DXVA2_VideoProcess_GammaCompensated = 0x4000,
        DXVA2_VideoProcess_MaintainsOriginalFieldData = 0x8000,
        DXVA2_VideoProcess_Mask = 0xffff
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0009
    {
        DXVA2_VPDev_HardwareDevice = 0x1,
        DXVA2_VPDev_EmulatedDXVA1 = 0x2,
        DXVA2_VPDev_SoftwareDevice = 0x4,
        DXVA2_VPDev_Mask = 0x7
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0010
    {
        DXVA2_SampleData_RFF = 0x1,
        DXVA2_SampleData_TFF = 0x2,
        DXVA2_SampleData_RFF_TFF_Present = 0x4,
        DXVA2_SampleData_Mask = 0xffff
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0011
    {
        DXVA2_DestData_RFF = 0x1,
        DXVA2_DestData_TFF = 0x2,
        DXVA2_DestData_RFF_TFF_Present = 0x4,
        DXVA2_DestData_Mask = 0xffff
    } ;
typedef struct _DXVA2_VideoProcessorCaps
    {
    UINT DeviceCaps;
    D3DPOOL InputPool;
    UINT NumForwardRefSamples;
    UINT NumBackwardRefSamples;
    UINT Reserved;
    UINT DeinterlaceTechnology;
    UINT ProcAmpControlCaps;
    UINT VideoProcessorOperations;
    UINT NoiseFilterTechnology;
    UINT DetailFilterTechnology;
    } DXVA2_VideoProcessorCaps;
typedef LONG DXVA2_Fixed32;
typedef struct _DXVA2_AYUVSample8
    {
    UCHAR Cr;
    UCHAR Cb;
    UCHAR Y;
    UCHAR Alpha;
    } DXVA2_AYUVSample8;
typedef struct _DXVA2_AYUVSample16
    {
    USHORT Cr;
    USHORT Cb;
    USHORT Y;
    USHORT Alpha;
    } DXVA2_AYUVSample16;
typedef LONGLONG REFERENCE_TIME;
typedef struct _DXVA2_ValueRange
    {
    DXVA2_Fixed32 MinValue;
    DXVA2_Fixed32 MaxValue;
    DXVA2_Fixed32 DefaultValue;
    DXVA2_Fixed32 StepSize;
    } DXVA2_ValueRange;
typedef struct _DXVA2_ProcAmpValues
    {
    DXVA2_Fixed32 Brightness;
    DXVA2_Fixed32 Contrast;
    DXVA2_Fixed32 Hue;
    DXVA2_Fixed32 Saturation;
    } DXVA2_ProcAmpValues;
typedef struct _DXVA2_FilterValues
    {
    DXVA2_Fixed32 Level;
    DXVA2_Fixed32 Threshold;
    DXVA2_Fixed32 Radius;
    } DXVA2_FilterValues;
typedef struct _DXVA2_VideoProcessBltParams
    {
    REFERENCE_TIME TargetFrame;
    RECT TargetRect;
    SIZE ConstrictionSize;
    UINT StreamingFlags;
    DXVA2_AYUVSample16 BackgroundColor;
    DXVA2_ExtendedFormat DestFormat;
    DXVA2_ProcAmpValues ProcAmpValues;
    DXVA2_Fixed32 Alpha;
    DXVA2_FilterValues NoiseFilterLuma;
    DXVA2_FilterValues NoiseFilterChroma;
    DXVA2_FilterValues DetailFilterLuma;
    DXVA2_FilterValues DetailFilterChroma;
    DWORD DestData;
    } DXVA2_VideoProcessBltParams;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0012
    {
        DXVA2_PictureParametersBufferType = 0,
        DXVA2_MacroBlockControlBufferType = 1,
        DXVA2_ResidualDifferenceBufferType = 2,
        DXVA2_DeblockingControlBufferType = 3,
        DXVA2_InverseQuantizationMatrixBufferType = 4,
        DXVA2_SliceControlBufferType = 5,
        DXVA2_BitStreamDateBufferType = 6,
        DXVA2_MotionVectorBuffer = 7,
        DXVA2_FilmGrainBuffer = 8
    } ;
enum __MIDL___MIDL_itf_dxva2api_0000_0000_0013
    {
        DXVA2_VideoDecoderRenderTarget = 0,
        DXVA2_VideoProcessorRenderTarget = 1,
        DXVA2_VideoSoftwareRenderTarget = 2
    } ;
typedef struct _DXVA2_ConfigPictureDecode
    {
    GUID guidConfigBitstreamEncryption;
    GUID guidConfigMBcontrolEncryption;
    GUID guidConfigResidDiffEncryption;
    UINT ConfigBitstreamRaw;
    UINT ConfigMBcontrolRasterOrder;
    UINT ConfigResidDiffHost;
    UINT ConfigSpatialResid8;
    UINT ConfigResid8Subtraction;
    UINT ConfigSpatialHost8or9Clipping;
    UINT ConfigSpatialResidInterleaved;
    UINT ConfigIntraResidUnsigned;
    UINT ConfigResidDiffAccelerator;
    UINT ConfigHostInverseScan;
    UINT ConfigSpecificIDCT;
    UINT Config4GroupedCoefs;
    USHORT ConfigMinRenderTargetBuffCount;
    USHORT ConfigDecoderSpecific;
    } DXVA2_ConfigPictureDecode;
typedef struct _DXVA2_DecodeBufferDesc
    {
    DWORD CompressedBufferType;
    UINT BufferIndex;
    UINT DataOffset;
    UINT DataSize;
    UINT FirstMBaddress;
    UINT NumMBsInBuffer;
    UINT Width;
    UINT Height;
    UINT Stride;
    UINT ReservedBits;
    PVOID pvPVPState;
    } DXVA2_DecodeBufferDesc;
typedef struct _DXVA2_AES_CTR_IV
    {
    UINT64 IV;
    UINT64 Count;
    } DXVA2_AES_CTR_IV;
typedef struct _DXVA2_DecodeExtensionData
    {
    UINT Function;
    PVOID pPrivateInputData;
    UINT PrivateInputDataSize;
    PVOID pPrivateOutputData;
    UINT PrivateOutputDataSize;
    } DXVA2_DecodeExtensionData;
typedef struct _DXVA2_DecodeExecuteParams
    {
    UINT NumCompBuffers;
    DXVA2_DecodeBufferDesc *pCompressedBuffers;
    DXVA2_DecodeExtensionData *pExtensionData;
    } DXVA2_DecodeExecuteParams;
__inline DXVA2_Fixed32 DXVA2FloatToFixed(_In_ const float _float_)
{
    DXVA2_Fixed32 _fixed_;
    _fixed_.Fraction = LOWORD(_float_ * 0x10000);
    _fixed_.Value = HIWORD(_float_ * 0x10000);
    return _fixed_;
}
__inline float DXVA2FixedToFloat(_In_ const DXVA2_Fixed32 _fixed_)
{
    return (FLOAT)_fixed_.Value + (FLOAT)_fixed_.Fraction / 0x10000;
}
__inline const DXVA2_Fixed32 DXVA2_Fixed32TransparentAlpha()
{
    DXVA2_Fixed32 _fixed_ = {0, 0};
    return _fixed_;
}
__inline const DXVA2_Fixed32 DXVA2_Fixed32OpaqueAlpha()
{
    DXVA2_Fixed32 _fixed_ = {0, 1};
    return _fixed_;
}
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dxva2api_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxva2api_0000_0007_v0_0_s_ifspec;
}
