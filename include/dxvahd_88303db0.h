#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXVAHD_Device IDXVAHD_Device;
typedef interface IDXVAHD_VideoProcessor IDXVAHD_VideoProcessor;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef DWORD IDirect3DDevice9Ex;
typedef DWORD IDirect3DSurface9;
typedef DWORD D3DCOLOR;
typedef DWORD D3DFORMAT;
typedef DWORD D3DPOOL;
#endif
typedef
enum _DXVAHD_FRAME_FORMAT
    {
        DXVAHD_FRAME_FORMAT_PROGRESSIVE = 0,
        DXVAHD_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST = 1,
        DXVAHD_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST = 2
    } DXVAHD_FRAME_FORMAT;
typedef
enum _DXVAHD_DEVICE_USAGE
    {
        DXVAHD_DEVICE_USAGE_PLAYBACK_NORMAL = 0,
        DXVAHD_DEVICE_USAGE_OPTIMAL_SPEED = 1,
        DXVAHD_DEVICE_USAGE_OPTIMAL_QUALITY = 2
    } DXVAHD_DEVICE_USAGE;
typedef
enum _DXVAHD_SURFACE_TYPE
    {
        DXVAHD_SURFACE_TYPE_VIDEO_INPUT = 0,
        DXVAHD_SURFACE_TYPE_VIDEO_INPUT_PRIVATE = 1,
        DXVAHD_SURFACE_TYPE_VIDEO_OUTPUT = 2
    } DXVAHD_SURFACE_TYPE;
typedef
enum _DXVAHD_DEVICE_TYPE
    {
        DXVAHD_DEVICE_TYPE_HARDWARE = 0,
        DXVAHD_DEVICE_TYPE_SOFTWARE = 1,
        DXVAHD_DEVICE_TYPE_REFERENCE = 2,
        DXVAHD_DEVICE_TYPE_OTHER = 3
    } DXVAHD_DEVICE_TYPE;
typedef
enum _DXVAHD_DEVICE_CAPS
    {
        DXVAHD_DEVICE_CAPS_LINEAR_SPACE = 0x1,
        DXVAHD_DEVICE_CAPS_xvYCC = 0x2,
        DXVAHD_DEVICE_CAPS_RGB_RANGE_CONVERSION = 0x4,
        DXVAHD_DEVICE_CAPS_YCbCr_MATRIX_CONVERSION = 0x8
    } DXVAHD_DEVICE_CAPS;
typedef
enum _DXVAHD_FEATURE_CAPS
    {
        DXVAHD_FEATURE_CAPS_ALPHA_FILL = 0x1,
        DXVAHD_FEATURE_CAPS_CONSTRICTION = 0x2,
        DXVAHD_FEATURE_CAPS_LUMA_KEY = 0x4,
        DXVAHD_FEATURE_CAPS_ALPHA_PALETTE = 0x8
    } DXVAHD_FEATURE_CAPS;
typedef
enum _DXVAHD_FILTER_CAPS
    {
        DXVAHD_FILTER_CAPS_BRIGHTNESS = 0x1,
        DXVAHD_FILTER_CAPS_CONTRAST = 0x2,
        DXVAHD_FILTER_CAPS_HUE = 0x4,
        DXVAHD_FILTER_CAPS_SATURATION = 0x8,
        DXVAHD_FILTER_CAPS_NOISE_REDUCTION = 0x10,
        DXVAHD_FILTER_CAPS_EDGE_ENHANCEMENT = 0x20,
        DXVAHD_FILTER_CAPS_ANAMORPHIC_SCALING = 0x40
    } DXVAHD_FILTER_CAPS;
typedef
enum _DXVAHD_INPUT_FORMAT_CAPS
    {
        DXVAHD_INPUT_FORMAT_CAPS_RGB_INTERLACED = 0x1,
        DXVAHD_INPUT_FORMAT_CAPS_RGB_PROCAMP = 0x2,
        DXVAHD_INPUT_FORMAT_CAPS_RGB_LUMA_KEY = 0x4,
        DXVAHD_INPUT_FORMAT_CAPS_PALETTE_INTERLACED = 0x8
    } DXVAHD_INPUT_FORMAT_CAPS;
typedef
enum _DXVAHD_PROCESSOR_CAPS
    {
        DXVAHD_PROCESSOR_CAPS_DEINTERLACE_BLEND = 0x1,
        DXVAHD_PROCESSOR_CAPS_DEINTERLACE_BOB = 0x2,
        DXVAHD_PROCESSOR_CAPS_DEINTERLACE_ADAPTIVE = 0x4,
        DXVAHD_PROCESSOR_CAPS_DEINTERLACE_MOTION_COMPENSATION = 0x8,
        DXVAHD_PROCESSOR_CAPS_INVERSE_TELECINE = 0x10,
        DXVAHD_PROCESSOR_CAPS_FRAME_RATE_CONVERSION = 0x20
    } DXVAHD_PROCESSOR_CAPS;
typedef
enum _DXVAHD_ITELECINE_CAPS
    {
        DXVAHD_ITELECINE_CAPS_32 = 0x1,
        DXVAHD_ITELECINE_CAPS_22 = 0x2,
        DXVAHD_ITELECINE_CAPS_2224 = 0x4,
        DXVAHD_ITELECINE_CAPS_2332 = 0x8,
        DXVAHD_ITELECINE_CAPS_32322 = 0x10,
        DXVAHD_ITELECINE_CAPS_55 = 0x20,
        DXVAHD_ITELECINE_CAPS_64 = 0x40,
        DXVAHD_ITELECINE_CAPS_87 = 0x80,
        DXVAHD_ITELECINE_CAPS_222222222223 = 0x100,
        DXVAHD_ITELECINE_CAPS_OTHER = 0x80000000
    } DXVAHD_ITELECINE_CAPS;
typedef
enum _DXVAHD_FILTER
    {
        DXVAHD_FILTER_BRIGHTNESS = 0,
        DXVAHD_FILTER_CONTRAST = 1,
        DXVAHD_FILTER_HUE = 2,
        DXVAHD_FILTER_SATURATION = 3,
        DXVAHD_FILTER_NOISE_REDUCTION = 4,
        DXVAHD_FILTER_EDGE_ENHANCEMENT = 5,
        DXVAHD_FILTER_ANAMORPHIC_SCALING = 6
    } DXVAHD_FILTER;
typedef
enum _DXVAHD_BLT_STATE
    {
        DXVAHD_BLT_STATE_TARGET_RECT = 0,
        DXVAHD_BLT_STATE_BACKGROUND_COLOR = 1,
        DXVAHD_BLT_STATE_OUTPUT_COLOR_SPACE = 2,
        DXVAHD_BLT_STATE_ALPHA_FILL = 3,
        DXVAHD_BLT_STATE_CONSTRICTION = 4,
        DXVAHD_BLT_STATE_PRIVATE = 1000
    } DXVAHD_BLT_STATE;
typedef
enum _DXVAHD_ALPHA_FILL_MODE
    {
        DXVAHD_ALPHA_FILL_MODE_OPAQUE = 0,
        DXVAHD_ALPHA_FILL_MODE_BACKGROUND = 1,
        DXVAHD_ALPHA_FILL_MODE_DESTINATION = 2,
        DXVAHD_ALPHA_FILL_MODE_SOURCE_STREAM = 3
    } DXVAHD_ALPHA_FILL_MODE;
typedef
enum _DXVAHD_STREAM_STATE
    {
        DXVAHD_STREAM_STATE_D3DFORMAT = 0,
        DXVAHD_STREAM_STATE_FRAME_FORMAT = 1,
        DXVAHD_STREAM_STATE_INPUT_COLOR_SPACE = 2,
        DXVAHD_STREAM_STATE_OUTPUT_RATE = 3,
        DXVAHD_STREAM_STATE_SOURCE_RECT = 4,
        DXVAHD_STREAM_STATE_DESTINATION_RECT = 5,
        DXVAHD_STREAM_STATE_ALPHA = 6,
        DXVAHD_STREAM_STATE_PALETTE = 7,
        DXVAHD_STREAM_STATE_LUMA_KEY = 8,
        DXVAHD_STREAM_STATE_ASPECT_RATIO = 9,
        DXVAHD_STREAM_STATE_FILTER_BRIGHTNESS = 100,
        DXVAHD_STREAM_STATE_FILTER_CONTRAST = 101,
        DXVAHD_STREAM_STATE_FILTER_HUE = 102,
        DXVAHD_STREAM_STATE_FILTER_SATURATION = 103,
        DXVAHD_STREAM_STATE_FILTER_NOISE_REDUCTION = 104,
        DXVAHD_STREAM_STATE_FILTER_EDGE_ENHANCEMENT = 105,
        DXVAHD_STREAM_STATE_FILTER_ANAMORPHIC_SCALING = 106,
        DXVAHD_STREAM_STATE_PRIVATE = 1000
    } DXVAHD_STREAM_STATE;
typedef
enum _DXVAHD_OUTPUT_RATE
    {
        DXVAHD_OUTPUT_RATE_NORMAL = 0,
        DXVAHD_OUTPUT_RATE_HALF = 1,
        DXVAHD_OUTPUT_RATE_CUSTOM = 2
    } DXVAHD_OUTPUT_RATE;
typedef struct _DXVAHD_RATIONAL
    {
    UINT Numerator;
    UINT Denominator;
    } DXVAHD_RATIONAL;
typedef struct _DXVAHD_COLOR_RGBA
    {
    FLOAT R;
    FLOAT G;
    FLOAT B;
    FLOAT A;
    } DXVAHD_COLOR_RGBA;
typedef struct _DXVAHD_COLOR_YCbCrA
    {
    FLOAT Y;
    FLOAT Cb;
    FLOAT Cr;
    FLOAT A;
    } DXVAHD_COLOR_YCbCrA;
typedef union _DXVAHD_COLOR
    {
    DXVAHD_COLOR_RGBA RGB;
    DXVAHD_COLOR_YCbCrA YCbCr;
    } DXVAHD_COLOR;
typedef struct _DXVAHD_CONTENT_DESC
    {
    DXVAHD_FRAME_FORMAT InputFrameFormat;
    DXVAHD_RATIONAL InputFrameRate;
    UINT InputWidth;
    UINT InputHeight;
    DXVAHD_RATIONAL OutputFrameRate;
    UINT OutputWidth;
    UINT OutputHeight;
    } DXVAHD_CONTENT_DESC;
typedef struct _DXVAHD_VPDEVCAPS
    {
    DXVAHD_DEVICE_TYPE DeviceType;
    UINT DeviceCaps;
    UINT FeatureCaps;
    UINT FilterCaps;
    UINT InputFormatCaps;
    D3DPOOL InputPool;
    UINT OutputFormatCount;
    UINT InputFormatCount;
    UINT VideoProcessorCount;
    UINT MaxInputStreams;
    UINT MaxStreamStates;
    } DXVAHD_VPDEVCAPS;
typedef struct _DXVAHD_VPCAPS
    {
    GUID VPGuid;
    UINT PastFrames;
    UINT FutureFrames;
    UINT ProcessorCaps;
    UINT ITelecineCaps;
    UINT CustomRateCount;
    } DXVAHD_VPCAPS;
typedef struct _DXVAHD_CUSTOM_RATE_DATA
    {
    DXVAHD_RATIONAL CustomRate;
    UINT OutputFrames;
    BOOL InputInterlaced;
    UINT InputFramesOrFields;
    } DXVAHD_CUSTOM_RATE_DATA;
typedef struct _DXVAHD_FILTER_RANGE_DATA
    {
    INT Minimum;
    INT Maximum;
    INT Default;
    FLOAT Multiplier;
    } DXVAHD_FILTER_RANGE_DATA;
typedef struct _DXVAHD_BLT_STATE_TARGET_RECT_DATA
    {
    BOOL Enable;
    RECT TargetRect;
    } DXVAHD_BLT_STATE_TARGET_RECT_DATA;
typedef struct _DXVAHD_BLT_STATE_BACKGROUND_COLOR_DATA
    {
    BOOL YCbCr;
    DXVAHD_COLOR BackgroundColor;
    } DXVAHD_BLT_STATE_BACKGROUND_COLOR_DATA;
typedef struct _DXVAHD_BLT_STATE_OUTPUT_COLOR_SPACE_DATA
    {
    union
        {
        struct
            {
            UINT Usage : 1;
            UINT RGB_Range : 1;
            UINT YCbCr_Matrix : 1;
            UINT YCbCr_xvYCC : 1;
            UINT Reserved : 28;
            } ;
        UINT Value;
        } ;
    } DXVAHD_BLT_STATE_OUTPUT_COLOR_SPACE_DATA;
typedef struct _DXVAHD_BLT_STATE_ALPHA_FILL_DATA
    {
    DXVAHD_ALPHA_FILL_MODE Mode;
    UINT StreamNumber;
    } DXVAHD_BLT_STATE_ALPHA_FILL_DATA;
typedef struct _DXVAHD_BLT_STATE_CONSTRICTION_DATA
    {
    BOOL Enable;
    SIZE Size;
    } DXVAHD_BLT_STATE_CONSTRICTION_DATA;
typedef struct _DXVAHD_BLT_STATE_PRIVATE_DATA
    {
    GUID Guid;
    UINT DataSize;
    void *pData;
    } DXVAHD_BLT_STATE_PRIVATE_DATA;
typedef struct _DXVAHD_STREAM_STATE_D3DFORMAT_DATA
    {
    D3DFORMAT Format;
    } DXVAHD_STREAM_STATE_D3DFORMAT_DATA;
typedef struct _DXVAHD_STREAM_STATE_FRAME_FORMAT_DATA
    {
    DXVAHD_FRAME_FORMAT FrameFormat;
    } DXVAHD_STREAM_STATE_FRAME_FORMAT_DATA;
typedef struct _DXVAHD_STREAM_STATE_INPUT_COLOR_SPACE_DATA
    {
    union
        {
        struct
            {
            UINT Type : 1;
            UINT RGB_Range : 1;
            UINT YCbCr_Matrix : 1;
            UINT YCbCr_xvYCC : 1;
            UINT Reserved : 28;
            } ;
        UINT Value;
        } ;
    } DXVAHD_STREAM_STATE_INPUT_COLOR_SPACE_DATA;
typedef struct _DXVAHD_STREAM_STATE_OUTPUT_RATE_DATA
    {
    BOOL RepeatFrame;
    DXVAHD_OUTPUT_RATE OutputRate;
    DXVAHD_RATIONAL CustomRate;
    } DXVAHD_STREAM_STATE_OUTPUT_RATE_DATA;
typedef struct _DXVAHD_STREAM_STATE_SOURCE_RECT_DATA
    {
    BOOL Enable;
    RECT SourceRect;
    } DXVAHD_STREAM_STATE_SOURCE_RECT_DATA;
typedef struct _DXVAHD_STREAM_STATE_DESTINATION_RECT_DATA
    {
    BOOL Enable;
    RECT DestinationRect;
    } DXVAHD_STREAM_STATE_DESTINATION_RECT_DATA;
typedef struct _DXVAHD_STREAM_STATE_ALPHA_DATA
    {
    BOOL Enable;
    FLOAT Alpha;
    } DXVAHD_STREAM_STATE_ALPHA_DATA;
typedef struct _DXVAHD_STREAM_STATE_PALETTE_DATA
    {
    UINT Count;
    D3DCOLOR *pEntries;
    } DXVAHD_STREAM_STATE_PALETTE_DATA;
typedef struct _DXVAHD_STREAM_STATE_LUMA_KEY_DATA
    {
    BOOL Enable;
    FLOAT Lower;
    FLOAT Upper;
    } DXVAHD_STREAM_STATE_LUMA_KEY_DATA;
typedef struct _DXVAHD_STREAM_STATE_ASPECT_RATIO_DATA
    {
    BOOL Enable;
    DXVAHD_RATIONAL SourceAspectRatio;
    DXVAHD_RATIONAL DestinationAspectRatio;
    } DXVAHD_STREAM_STATE_ASPECT_RATIO_DATA;
typedef struct _DXVAHD_STREAM_STATE_FILTER_DATA
    {
    BOOL Enable;
    INT Level;
    } DXVAHD_STREAM_STATE_FILTER_DATA;
typedef struct _DXVAHD_STREAM_STATE_PRIVATE_DATA
    {
    GUID Guid;
    UINT DataSize;
    void *pData;
    } DXVAHD_STREAM_STATE_PRIVATE_DATA;
typedef struct _DXVAHD_STREAM_DATA
    {
    BOOL Enable;
    UINT OutputIndex;
    UINT InputFrameOrField;
    UINT PastFrames;
    UINT FutureFrames;
    IDirect3DSurface9 **ppPastSurfaces;
    IDirect3DSurface9 *pInputSurface;
    IDirect3DSurface9 **ppFutureSurfaces;
    } DXVAHD_STREAM_DATA;
DEFINE_GUID(DXVAHD_STREAM_STATE_PRIVATE_IVTC, 0x9c601e3c,0x0f33,0x414c,0xa7,0x39,0x99,0x54,0x0e,0xe4,0x2d,0xa5);
typedef struct _DXVAHD_STREAM_STATE_PRIVATE_IVTC_DATA
    {
    BOOL Enable;
    UINT ITelecineFlags;
    UINT Frames;
    UINT InputField;
    } DXVAHD_STREAM_STATE_PRIVATE_IVTC_DATA;
extern RPC_IF_HANDLE __MIDL_itf_dxvahd_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxvahd_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXVAHD_Device;
    typedef struct IDXVAHD_DeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXVAHD_Device * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXVAHD_Device * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXVAHD_Device * This);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoSurface )(
            IDXVAHD_Device * This,
            _In_ UINT Width,
            _In_ UINT Height,
            _In_ D3DFORMAT Format,
            _In_ D3DPOOL Pool,
            _In_ DWORD Usage,
            _In_ DXVAHD_SURFACE_TYPE Type,
            _In_ UINT NumSurfaces,
            _Out_writes_(NumSurfaces) IDirect3DSurface9 **ppSurfaces,
            _Inout_opt_ HANDLE *pSharedHandle);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorDeviceCaps )(
            IDXVAHD_Device * This,
            _Out_ DXVAHD_VPDEVCAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorOutputFormats )(
            IDXVAHD_Device * This,
            _In_ UINT Count,
            _Out_writes_(Count) D3DFORMAT *pFormats);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorInputFormats )(
            IDXVAHD_Device * This,
            _In_ UINT Count,
            _Out_writes_(Count) D3DFORMAT *pFormats);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorCaps )(
            IDXVAHD_Device * This,
            _In_ UINT Count,
            _Out_writes_(Count) DXVAHD_VPCAPS *pCaps);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorCustomRates )(
            IDXVAHD_Device * This,
            _In_ const GUID *pVPGuid,
            _In_ UINT Count,
            _Out_writes_(Count) DXVAHD_CUSTOM_RATE_DATA *pRates);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessorFilterRange )(
            IDXVAHD_Device * This,
            _In_ DXVAHD_FILTER Filter,
            _Out_ DXVAHD_FILTER_RANGE_DATA *pRange);
        HRESULT ( STDMETHODCALLTYPE *CreateVideoProcessor )(
            IDXVAHD_Device * This,
            _In_ const GUID *pVPGuid,
            _Outptr_ IDXVAHD_VideoProcessor **ppVideoProcessor);
        END_INTERFACE
    } IDXVAHD_DeviceVtbl;
    interface IDXVAHD_Device
    {
        CONST_VTBL struct IDXVAHD_DeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateVideoSurface(This,Width,Height,Format,Pool,Usage,Type,NumSurfaces,ppSurfaces,pSharedHandle) )
    ( (This)->lpVtbl -> GetVideoProcessorDeviceCaps(This,pCaps) )
    ( (This)->lpVtbl -> GetVideoProcessorOutputFormats(This,Count,pFormats) )
    ( (This)->lpVtbl -> GetVideoProcessorInputFormats(This,Count,pFormats) )
    ( (This)->lpVtbl -> GetVideoProcessorCaps(This,Count,pCaps) )
    ( (This)->lpVtbl -> GetVideoProcessorCustomRates(This,pVPGuid,Count,pRates) )
    ( (This)->lpVtbl -> GetVideoProcessorFilterRange(This,Filter,pRange) )
    ( (This)->lpVtbl -> CreateVideoProcessor(This,pVPGuid,ppVideoProcessor) )
EXTERN_C const IID IID_IDXVAHD_VideoProcessor;
    typedef struct IDXVAHD_VideoProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXVAHD_VideoProcessor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXVAHD_VideoProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXVAHD_VideoProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *SetVideoProcessBltState )(
            IDXVAHD_VideoProcessor * This,
            _In_ DXVAHD_BLT_STATE State,
            _In_ UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessBltState )(
            IDXVAHD_VideoProcessor * This,
            _In_ DXVAHD_BLT_STATE State,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetVideoProcessStreamState )(
            IDXVAHD_VideoProcessor * This,
            _In_ UINT StreamNumber,
            _In_ DXVAHD_STREAM_STATE State,
            _In_ UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetVideoProcessStreamState )(
            IDXVAHD_VideoProcessor * This,
            _In_ UINT StreamNumber,
            _In_ DXVAHD_STREAM_STATE State,
            _In_ UINT DataSize,
            _Inout_updates_bytes_(DataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *VideoProcessBltHD )(
            IDXVAHD_VideoProcessor * This,
            _In_ IDirect3DSurface9 *pOutputSurface,
            _In_ UINT OutputFrame,
            _In_ UINT StreamCount,
            _In_reads_(StreamCount) const DXVAHD_STREAM_DATA *pStreams);
        END_INTERFACE
    } IDXVAHD_VideoProcessorVtbl;
    interface IDXVAHD_VideoProcessor
    {
        CONST_VTBL struct IDXVAHD_VideoProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetVideoProcessBltState(This,State,DataSize,pData) )
    ( (This)->lpVtbl -> GetVideoProcessBltState(This,State,DataSize,pData) )
    ( (This)->lpVtbl -> SetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData) )
    ( (This)->lpVtbl -> GetVideoProcessStreamState(This,StreamNumber,State,DataSize,pData) )
    ( (This)->lpVtbl -> VideoProcessBltHD(This,pOutputSurface,OutputFrame,StreamCount,pStreams) )
typedef HRESULT (CALLBACK* PDXVAHDSW_CreateDevice)(
    _In_ IDirect3DDevice9Ex* pD3DDevice,
    _Out_ HANDLE* phDevice
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_ProposeVideoPrivateFormat)(
    _In_ HANDLE hDevice,
    _Inout_ D3DFORMAT* pFormat
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessorDeviceCaps)(
    _In_ HANDLE hDevice,
    _In_ const DXVAHD_CONTENT_DESC* pContentDesc,
    _In_ DXVAHD_DEVICE_USAGE Usage,
    _Out_ DXVAHD_VPDEVCAPS* pCaps
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessorOutputFormats)(
    _In_ HANDLE hDevice,
    _In_ const DXVAHD_CONTENT_DESC* pContentDesc,
    _In_ DXVAHD_DEVICE_USAGE Usage,
    _In_ UINT Count,
    _Out_writes_(Count) D3DFORMAT* pFormats
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessorInputFormats)(
    _In_ HANDLE hDevice,
    _In_ const DXVAHD_CONTENT_DESC* pContentDesc,
    _In_ DXVAHD_DEVICE_USAGE Usage,
    _In_ UINT Count,
    _Out_writes_(Count) D3DFORMAT* pFormats
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessorCaps)(
    _In_ HANDLE hDevice,
    _In_ const DXVAHD_CONTENT_DESC* pContentDesc,
    _In_ DXVAHD_DEVICE_USAGE Usage,
    _In_ UINT Count,
    _Out_writes_(Count) DXVAHD_VPCAPS* pCaps
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessorCustomRates)(
    _In_ HANDLE hDevice,
    _In_ const GUID* pVPGuid,
    _In_ UINT Count,
    _Out_writes_(Count) DXVAHD_CUSTOM_RATE_DATA* pRates
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessorFilterRange)(
    _In_ HANDLE hDevice,
    _In_ DXVAHD_FILTER Filter,
    _Out_ DXVAHD_FILTER_RANGE_DATA* pRange
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_DestroyDevice)(
    _In_ HANDLE hDevice
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_CreateVideoProcessor)(
    _In_ HANDLE hDevice,
    _In_ const GUID* pVPGuid,
    _Out_ HANDLE* phVideoProcessor
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_SetVideoProcessBltState)(
    _In_ HANDLE hVideoProcessor,
    _In_ DXVAHD_BLT_STATE State,
    _In_ UINT DataSize,
    _In_reads_bytes_(DataSize) const void* pData
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessBltStatePrivate)(
    _In_ HANDLE hVideoProcessor,
    _Inout_ DXVAHD_BLT_STATE_PRIVATE_DATA* pData
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_SetVideoProcessStreamState)(
    _In_ HANDLE hVideoProcessor,
    _In_ UINT StreamNumber,
    _In_ DXVAHD_STREAM_STATE State,
    _In_ UINT DataSize,
    _In_reads_bytes_(DataSize) const void* pData
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_GetVideoProcessStreamStatePrivate)(
    _In_ HANDLE hVideoProcessor,
    _In_ UINT StreamNumber,
    _Inout_ DXVAHD_STREAM_STATE_PRIVATE_DATA* pData
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_VideoProcessBltHD)(
    _In_ HANDLE hVideoProcessor,
    _In_ IDirect3DSurface9* pOutputSurface,
    _In_ UINT OutputFrame,
    _In_ UINT StreamCount,
    _In_reads_(StreamCount) const DXVAHD_STREAM_DATA* pStreams
    );
typedef HRESULT (CALLBACK* PDXVAHDSW_DestroyVideoProcessor)(
    _In_ HANDLE hVideoProcessor
    );
typedef struct _DXVAHDSW_CALLBACKS
{
    PDXVAHDSW_CreateDevice CreateDevice;
    PDXVAHDSW_ProposeVideoPrivateFormat ProposeVideoPrivateFormat;
    PDXVAHDSW_GetVideoProcessorDeviceCaps GetVideoProcessorDeviceCaps;
    PDXVAHDSW_GetVideoProcessorOutputFormats GetVideoProcessorOutputFormats;
    PDXVAHDSW_GetVideoProcessorInputFormats GetVideoProcessorInputFormats;
    PDXVAHDSW_GetVideoProcessorCaps GetVideoProcessorCaps;
    PDXVAHDSW_GetVideoProcessorCustomRates GetVideoProcessorCustomRates;
    PDXVAHDSW_GetVideoProcessorFilterRange GetVideoProcessorFilterRange;
    PDXVAHDSW_DestroyDevice DestroyDevice;
    PDXVAHDSW_CreateVideoProcessor CreateVideoProcessor;
    PDXVAHDSW_SetVideoProcessBltState SetVideoProcessBltState;
    PDXVAHDSW_GetVideoProcessBltStatePrivate GetVideoProcessBltStatePrivate;
    PDXVAHDSW_SetVideoProcessStreamState SetVideoProcessStreamState;
    PDXVAHDSW_GetVideoProcessStreamStatePrivate GetVideoProcessStreamStatePrivate;
    PDXVAHDSW_VideoProcessBltHD VideoProcessBltHD;
    PDXVAHDSW_DestroyVideoProcessor DestroyVideoProcessor;
} DXVAHDSW_CALLBACKS;
typedef HRESULT (CALLBACK* PDXVAHDSW_Plugin)(
    _In_ UINT Size,
    _Out_writes_bytes_(Size) void* pCallbacks
    );
DEFINE_GUID(DXVAHDControlGuid, 0xa0386e75,0xf70c,0x464c,0xa9,0xce,0x33,0xc4,0x4e,0x09,0x16,0x23);
DEFINE_GUID(DXVAHDETWGUID_CREATEVIDEOPROCESSOR, 0x681e3d1e,0x5674,0x4fb3,0xa5,0x03,0x2f,0x20,0x55,0xe9,0x1f,0x60);
DEFINE_GUID(DXVAHDETWGUID_VIDEOPROCESSBLTSTATE, 0x76c94b5a,0x193f,0x4692,0x94,0x84,0xa4,0xd9,0x99,0xda,0x81,0xa8);
DEFINE_GUID(DXVAHDETWGUID_VIDEOPROCESSSTREAMSTATE, 0x262c0b02,0x209d,0x47ed,0x94,0xd8,0x82,0xae,0x02,0xb8,0x4a,0xa7);
DEFINE_GUID(DXVAHDETWGUID_VIDEOPROCESSBLTHD, 0xbef3d435,0x78c7,0x4de3,0x97,0x07,0xcd,0x1b,0x08,0x3b,0x16,0x0a);
DEFINE_GUID(DXVAHDETWGUID_VIDEOPROCESSBLTHD_STREAM, 0x27ae473e,0xa5fc,0x4be5,0xb4,0xe3,0xf2,0x49,0x94,0xd3,0xc4,0x95);
DEFINE_GUID(DXVAHDETWGUID_DESTROYVIDEOPROCESSOR, 0xf943f0a0,0x3f16,0x43e0,0x80,0x93,0x10,0x5a,0x98,0x6a,0xa5,0xf1);
typedef struct _DXVAHDETW_CREATEVIDEOPROCESSOR
    {
    ULONGLONG pObject;
    ULONGLONG pD3D9Ex;
    GUID VPGuid;
    } DXVAHDETW_CREATEVIDEOPROCESSOR;
typedef struct _DXVAHDETW_VIDEOPROCESSBLTSTATE
    {
    ULONGLONG pObject;
    DXVAHD_BLT_STATE State;
    UINT DataSize;
    BOOL SetState;
    } DXVAHDETW_VIDEOPROCESSBLTSTATE;
typedef struct _DXVAHDETW_VIDEOPROCESSSTREAMSTATE
    {
    ULONGLONG pObject;
    UINT StreamNumber;
    DXVAHD_STREAM_STATE State;
    UINT DataSize;
    BOOL SetState;
    } DXVAHDETW_VIDEOPROCESSSTREAMSTATE;
typedef struct _DXVAHDETW_VIDEOPROCESSBLTHD
    {
    ULONGLONG pObject;
    ULONGLONG pOutputSurface;
    RECT TargetRect;
    D3DFORMAT OutputFormat;
    UINT ColorSpace;
    UINT OutputFrame;
    UINT StreamCount;
    BOOL Enter;
    } DXVAHDETW_VIDEOPROCESSBLTHD;
typedef struct _DXVAHDETW_VIDEOPROCESSBLTHD_STREAM
    {
    ULONGLONG pObject;
    ULONGLONG pInputSurface;
    RECT SourceRect;
    RECT DestinationRect;
    D3DFORMAT InputFormat;
    DXVAHD_FRAME_FORMAT FrameFormat;
    UINT ColorSpace;
    UINT StreamNumber;
    UINT OutputIndex;
    UINT InputFrameOrField;
    UINT PastFrames;
    UINT FutureFrames;
    } DXVAHDETW_VIDEOPROCESSBLTHD_STREAM;
typedef struct _DXVAHDETW_DESTROYVIDEOPROCESSOR
    {
    ULONGLONG pObject;
    } DXVAHDETW_DESTROYVIDEOPROCESSOR;
HRESULT WINAPI
DXVAHD_CreateDevice(
    _In_ IDirect3DDevice9Ex* pD3DDevice,
    _In_ const DXVAHD_CONTENT_DESC* pContentDesc,
    _In_ DXVAHD_DEVICE_USAGE Usage,
    _In_opt_ PDXVAHDSW_Plugin pPlugin,
    _Outptr_ IDXVAHD_Device** ppDevice
    );
typedef HRESULT (WINAPI* PDXVAHD_CreateDevice)(
    _In_ IDirect3DDevice9Ex* pD3DDevice,
    _In_ const DXVAHD_CONTENT_DESC* pContentDesc,
    _In_ DXVAHD_DEVICE_USAGE Usage,
    _In_opt_ PDXVAHDSW_Plugin pPlugin,
    _Outptr_ IDXVAHD_Device** ppDevice
    );
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dxvahd_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxvahd_0000_0002_v0_0_s_ifspec;
}
