#include <d3dkmdt.h>
#pragma warning(push)
#pragma warning(disable:4200)
#pragma warning(disable:4201)
#pragma warning(disable:4510 4512 4610 )
typedef D3DDDI_SEGMENTPREFERENCE DXGK_SEGMENTPREFERENCE;
typedef struct _DXGK_SEGMENTBANKPREFERENCE
{
    union
    {
        struct
        {
            UINT Bank0 : 7;
            UINT Direction0 : 1;
            UINT Bank1 : 7;
            UINT Direction1 : 1;
            UINT Bank2 : 7;
            UINT Direction2 : 1;
            UINT Bank3 : 7;
            UINT Direction3 : 1;
        };
        UINT Value;
    };
} DXGK_SEGMENTBANKPREFERENCE;
typedef struct _DXGK_ALLOCATIONLIST
{
    HANDLE hDeviceSpecificAllocation;
    struct
    {
        UINT WriteOperation : 1;
        UINT SegmentId : 5;
        UINT Reserved : 26;
    };
    union
    {
        PHYSICAL_ADDRESS PhysicalAddress;
        D3DGPU_VIRTUAL_ADDRESS VirtualAddress;
    };
} DXGK_ALLOCATIONLIST;
typedef _In_ BOOLEAN IN_BOOLEAN;
typedef _In_ UCHAR IN_UCHAR;
typedef _In_ DEVICE_POWER_STATE IN_DEVICE_POWER_STATE;
typedef _In_ CONST HANDLE IN_CONST_HANDLE;
typedef _Inout_ UINT* INOUT_PUINT;
typedef _Out_ UINT* OUT_PUINT;
typedef _In_ ULONG IN_ULONG;
typedef _Out_ PULONG OUT_PULONG;
typedef _In_ POWER_ACTION IN_POWER_ACTION;
typedef _In_ PVOID IN_PVOID;
typedef _In_ CONST PVOID IN_CONST_PVOID;
typedef _Outptr_ PVOID* OUT_PPVOID;
typedef _In_ CONST SIZE_T IN_CONST_SIZE_T;
typedef _Out_ SIZE_T* OUT_PSIZE_T;
typedef _Out_ SIZE_T* CONST OUT_PSIZE_T_CONST;
typedef struct _DXGKARG_RENDER
{
    CONST VOID* pCommand;
    UINT CommandLength;
    VOID* pDmaBuffer;
    UINT DmaSize;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    DXGK_ALLOCATIONLIST* pAllocationList;
    UINT AllocationListSize;
    D3DDDI_PATCHLOCATIONLIST* pPatchLocationListIn;
    UINT PatchLocationListInSize;
    D3DDDI_PATCHLOCATIONLIST* pPatchLocationListOut;
    UINT PatchLocationListOutSize;
    UINT MultipassOffset;
    UINT DmaBufferSegmentId;
    PHYSICAL_ADDRESS DmaBufferPhysicalAddress;
} DXGKARG_RENDER;
typedef _Inout_ DXGKARG_RENDER* INOUT_PDXGKARG_RENDER;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RENDER)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RENDER(
    IN_CONST_HANDLE hContext,
    INOUT_PDXGKARG_RENDER pRender
    );
typedef struct _DXGK_PRESENTFLAGS
{
    union
    {
        struct
        {
            UINT Blt : 1;
            UINT ColorFill : 1;
            UINT Flip : 1;
            UINT FlipWithNoWait : 1;
            UINT SrcColorKey : 1;
            UINT DstColorKey : 1;
            UINT LinearToSrgb : 1;
            UINT Rotate : 1;
            UINT FlipStereo : 1;
            UINT FlipStereoTemporaryMono : 1;
            UINT FlipStereoPreferRight : 1;
            UINT BltStereoUseRight : 1;
            UINT FlipWithMultiPlaneOverlay : 1;
            UINT RedirectedFlip : 1;
            UINT Reserved :18;
        };
        UINT Value;
    };
} DXGK_PRESENTFLAGS;
typedef struct _DXGK_PRESENTALLOCATIONINFO
{
    HANDLE hDeviceSpecificAllocation;
    D3DGPU_VIRTUAL_ADDRESS AllocationVirtualAddress;
    PHYSICAL_ADDRESS PhysicalAddress;
    WORD SegmentId;
    WORD PhysicalAdapterIndex;
} DXGK_PRESENTALLOCATIONINFO;
typedef struct _DXGK_PRESENTMULTIPLANEOVERLAYLIST
{
    UINT LayerIndex;
    BOOL Enabled;
    HANDLE hDeviceSpecificAllocation;
    struct
    {
        UINT SegmentId : 5;
        UINT Reserved : 27;
    };
    PHYSICAL_ADDRESS PhysicalAddress;
} DXGK_PRESENTMULTIPLANEOVERLAYLIST;
typedef struct _DXGK_PRESENTMULTIPLANEOVERLAYINFO
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PlaneListCount;
    DXGK_PRESENTMULTIPLANEOVERLAYLIST* pPlaneList;
} DXGK_PRESENTMULTIPLANEOVERLAYINFO;
typedef struct _DXGKARG_PRESENT
{
    VOID* pDmaBuffer;
    UINT DmaSize;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    union
    {
        DXGK_ALLOCATIONLIST* pAllocationList;
        DXGK_PRESENTALLOCATIONINFO* pAllocationInfo;
        DXGK_PRESENTMULTIPLANEOVERLAYINFO* pPresentMultiPlaneOverlayInfo;
    };
    D3DDDI_PATCHLOCATIONLIST* pPatchLocationListOut;
    UINT PatchLocationListOutSize;
    UINT MultipassOffset;
    UINT Color;
    RECT DstRect;
    RECT SrcRect;
    UINT SubRectCnt;
    CONST RECT* pDstSubRects;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    DXGK_PRESENTFLAGS Flags;
    UINT DmaBufferSegmentId;
    PHYSICAL_ADDRESS DmaBufferPhysicalAddress;
    UINT Reserved;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferGpuVirtualAddress;
    UINT NumSrcAllocations;
    UINT NumDstAllocations;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateDriverDataSize)
    PVOID pPrivateDriverData;
} DXGKARG_PRESENT;
typedef _Inout_ DXGKARG_PRESENT* INOUT_PDXGKARG_PRESENT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_PRESENT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_PRESENT(
    IN_CONST_HANDLE hContext,
    INOUT_PDXGKARG_PRESENT pPresent
    );
typedef struct _DXGK_MULTIPLANE_OVERLAY_FLAGS
{
    union
    {
        struct
        {
            UINT VerticalFlip : 1;
            UINT HorizontalFlip : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGK_MULTIPLANE_OVERLAY_FLAGS;
typedef struct _DXGK_MULTIPLANE_OVERLAY_BLEND
{
    union
    {
        struct
        {
            UINT AlphaBlend : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_MULTIPLANE_OVERLAY_BLEND;
typedef struct _DXGK_MULTIPLANE_OVERLAY_YCbCr_FLAGS
{
    union
    {
        struct
        {
            UINT NominalRange : 1;
            UINT Bt709 : 1;
            UINT xvYCC : 1;
            UINT Reserved : 29;
        };
        UINT Value;
    };
} DXGK_MULTIPLANE_OVERLAY_YCbCr_FLAGS;
typedef enum _DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT
{
    DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_PROGRESSIVE = 0,
    DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST = 1,
    DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST = 2,
} DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT;
typedef enum _DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT
{
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO = 0,
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_HORIZONTAL = 1,
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_VERTICAL = 2,
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_SEPARATE = 3,
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO_OFFSET = 4,
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_ROW_INTERLEAVED = 5,
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_COLUMN_INTERLEAVED = 6,
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT_CHECKERBOARD = 7,
} DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT;
typedef enum _DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE
{
   DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_NONE = 0,
   DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME0 = 1,
   DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME1 = 2,
} DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE;
typedef enum _DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY
{
    DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR = 0x1,
    DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH = 0x2,
} DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY;
typedef struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES
{
    DXGK_MULTIPLANE_OVERLAY_FLAGS Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    D3DDDI_ROTATION Rotation;
    DXGK_MULTIPLANE_OVERLAY_BLEND Blend;
    DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    DXGK_MULTIPLANE_OVERLAY_YCbCr_FLAGS YCbCrFlags;
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT StereoFormat;
    BOOL StereoLeftViewFrame0;
    BOOL StereoBaseViewFrame0;
    DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode;
    DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
} DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES;
typedef struct _DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE
{
    HANDLE hAllocation;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE;
typedef struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO
{
    union
    {
        struct
        {
            UINT FailingPlane : 4;
            UINT TryAgain : 1;
            UINT Reserved : 27;
        };
        UINT Value;
    };
} DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO;
typedef struct _DXGK_MULTIPLANE_OVERLAY_PLANE
{
    UINT LayerIndex;
    BOOL Enabled;
    UINT AllocationSegment;
    PHYSICAL_ADDRESS AllocationAddress;
    HANDLE hAllocation;
    DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} DXGK_MULTIPLANE_OVERLAY_PLANE;
typedef struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2
{
    DXGK_MULTIPLANE_OVERLAY_FLAGS Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    D3DDDI_ROTATION Rotation;
    DXGK_MULTIPLANE_OVERLAY_BLEND Blend;
    DXGK_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    D3DDDI_COLOR_SPACE_TYPE ColorSpaceType;
    DXGK_MULTIPLANE_OVERLAY_STEREO_FORMAT StereoFormat;
    BOOL StereoLeftViewFrame0;
    BOOL StereoBaseViewFrame0;
    DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode;
    DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
    UINT Reserved1;
} DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2;
typedef struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE
{
    HANDLE hAllocation;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT LayerIndex;
    DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 PlaneAttributes;
} DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE;
typedef struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2
{
    UINT PlaneCount;
    DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE* pPlanes;
    BOOL Supported;
    DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2;
typedef _Inout_ DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2* IN_OUT_PDXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2;
typedef enum _DXGK_GDIROP_BITBLT
{
    DXGK_GDIROP_INVALID = 0,
    DXGK_GDIROP_SRCCOPY = 1,
    DXGK_GDIROP_SRCINVERT = 2,
    DXGK_GDIROP_SRCAND = 3,
    DXGK_GDIROP_SRCOR = 4,
    DXGK_GDIROP_ROP3 = 5,
} DXGK_GDIROP_BITBLT;
typedef struct _DXGK_GDIARG_BITBLT
{
    RECT SrcRect;
    RECT DstRect;
    UINT SrcAllocationIndex;
    UINT DstAllocationIndex;
    UINT NumSubRects;
    RECT* pSubRects;
    WORD Rop;
    WORD Rop3;
    UINT SrcPitch;
    UINT DstPitch;
} DXGK_GDIARG_BITBLT;
typedef enum _DXGK_GDIROP_COLORFILL
{
    DXGK_GDIROPCF_INVALID = 0,
    DXGK_GDIROPCF_PATCOPY = 1,
    DXGK_GDIROPCF_PATINVERT = 2,
    DXGK_GDIROPCF_PDXN = 3,
    DXGK_GDIROPCF_DSTINVERT = 4,
    DXGK_GDIROPCF_PATAND = 5,
    DXGK_GDIROPCF_PATOR = 6,
    DXGK_GDIROPCF_ROP3 = 7,
} DXGK_GDIROP_COLORFILL;
typedef struct _DXGK_GDIARG_STRETCHBLT
{
    RECT SrcRect;
    RECT DstRect;
    UINT DstAllocationIndex;
    UINT SrcAllocationIndex;
    UINT NumSubRects;
    RECT* pSubRects;
    union
    {
        struct
        {
            UINT Mode : 16;
            UINT MirrorX : 1;
            UINT MirrorY : 1;
        };
        UINT Flags;
    };
    UINT SrcPitch;
} DXGK_GDIARG_STRETCHBLT;
typedef struct _DXGK_GDIARG_COLORFILL
{
    RECT DstRect;
    UINT DstAllocationIndex;
    UINT NumSubRects;
    RECT* pSubRects;
    UINT Color;
    WORD Rop;
    WORD Rop3;
} DXGK_GDIARG_COLORFILL;
typedef struct _DXGK_GDIARG_ALPHABLEND
{
    RECT SrcRect;
    RECT DstRect;
    UINT SrcAllocationIndex;
    UINT DstAllocationIndex;
    UINT NumSubRects;
    RECT* pSubRects;
    BYTE SourceConstantAlpha;
    BOOLEAN SourceHasAlpha;
    UINT SrcPitch;
} DXGK_GDIARG_ALPHABLEND;
typedef struct _D3DKM_TRANSPARENTBLTFLAGS
{
    union
    {
        struct
        {
            UINT HonorAlpha : 1;
        };
        UINT Value;
    };
} D3DKM_TRANSPARENTBLTFLAGS;
typedef struct _DXGK_GDIARG_TRANSPARENTBLT
{
    RECT SrcRect;
    RECT DstRect;
    UINT SrcAllocationIndex;
    UINT DstAllocationIndex;
    UINT Color;
    UINT NumSubRects;
    RECT* pSubRects;
    D3DKM_TRANSPARENTBLTFLAGS Flags;
    UINT SrcPitch;
} DXGK_GDIARG_TRANSPARENTBLT;
typedef struct _DXGK_GDIARG_CLEARTYPEBLEND
{
    RECT DstRect;
    UINT TmpSurfAllocationIndex;
    UINT GammaSurfAllocationIndex;
    UINT AlphaSurfAllocationIndex;
    UINT DstAllocationIndex;
    INT DstToAlphaOffsetX;
    INT DstToAlphaOffsetY;
    UINT Color;
    UINT Gamma;
    UINT NumSubRects;
    RECT* pSubRects;
    UINT AlphaSurfPitch;
    UINT Color2;
} DXGK_GDIARG_CLEARTYPEBLEND;
typedef enum _DXGK_RENDERKM_OPERATION
{
    DXGK_GDIOP_BITBLT = 1,
    DXGK_GDIOP_COLORFILL = 2,
    DXGK_GDIOP_ALPHABLEND = 3,
    DXGK_GDIOP_STRETCHBLT = 4,
    DXGK_GDIOP_ESCAPE = 5,
    DXGK_GDIOP_TRANSPARENTBLT = 6,
    DXGK_GDIOP_CLEARTYPEBLEND = 7,
} DXGK_RENDERKM_OPERATION;
typedef struct _DXGK_RENDERKM_COMMAND
{
    DXGK_RENDERKM_OPERATION OpCode;
    UINT CommandSize;
    union
    {
        DXGK_GDIARG_BITBLT BitBlt;
        DXGK_GDIARG_COLORFILL ColorFill;
        DXGK_GDIARG_ALPHABLEND AlphaBlend;
        DXGK_GDIARG_STRETCHBLT StretchBlt;
        DXGK_GDIARG_TRANSPARENTBLT TransparentBlt;
        DXGK_GDIARG_CLEARTYPEBLEND ClearTypeBlend;
    } Command;
} DXGK_RENDERKM_COMMAND;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RENDER)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RENDERKM(
    IN_CONST_HANDLE hContext,
    INOUT_PDXGKARG_RENDER pRenderKmArgs
    );
typedef struct _DXGKARG_STOPCAPTURE
{
    HANDLE hAllocation;
} DXGKARG_STOPCAPTURE;
typedef _In_ CONST DXGKARG_STOPCAPTURE* IN_CONST_PDXGKARG_STOPCAPTURE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_STOPCAPTURE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_STOPCAPTURE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_STOPCAPTURE pStopCapture
    );
typedef enum _DXGK_PRESENT_DISPLAY_ONLY_PROGRESS_ID
{
    DXGK_PRESENT_DISPLAYONLY_PROGRESS_ID_COMPLETE = 0,
    DXGK_PRESENT_DISPLAYONLY_PROGRESS_ID_FAILED = 1,
} DXGK_PRESENT_DISPLAY_ONLY_PROGRESS_ID;
typedef struct _DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGK_PRESENT_DISPLAY_ONLY_PROGRESS_ID ProgressId;
} DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS;
typedef _In_ CONST DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS* IN_CONST_PDXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS;
typedef enum _DXGK_INTERRUPT_TYPE
{
    DXGK_INTERRUPT_DMA_COMPLETED = 1,
    DXGK_INTERRUPT_DMA_PREEMPTED = 2,
    DXGK_INTERRUPT_CRTC_VSYNC = 3,
    DXGK_INTERRUPT_DMA_FAULTED = 4,
    DXGK_INTERRUPT_DISPLAYONLY_VSYNC = 5,
    DXGK_INTERRUPT_DISPLAYONLY_PRESENT_PROGRESS = 6,
    DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY = 7,
    DXGK_INTERRUPT_MICACAST_CHUNK_PROCESSING_COMPLETE = 8,
    DXGK_INTERRUPT_DMA_PAGE_FAULTED = 9,
    DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 = 10,
    DXGK_INTERRUPT_MONITORED_FENCE_SIGNALED = 11,
    DXGK_INTERRUPT_HWQUEUE_PAGE_FAULTED = 12,
    DXGK_INTERRUPT_HWCONTEXTLIST_SWITCH_COMPLETED = 13,
    DXGK_INTERRUPT_PERIODIC_MONITORED_FENCE_SIGNALED = 14,
    DXGK_INTERRUPT_SCHEDULING_LOG_INTERRUPT = 15,
    DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT = 16,
    DXGK_INTERRUPT_SUSPEND_CONTEXT_COMPLETED = 17
} DXGK_INTERRUPT_TYPE;
typedef struct _DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO
{
    DWORD LayerIndex;
    BOOL Enabled;
    PHYSICAL_ADDRESS PhysicalAddress;
    DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO;
typedef struct _DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS
{
    union
    {
        struct
        {
            UINT ValidPhysicalAdapterMask : 1;
            UINT HsyncFlipCompletion : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS;
typedef struct _DXGKCB_NOTIFY_MPO_VSYNC_FLAGS
{
    union
    {
        struct
        {
            UINT PostPresentNeeded : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGKCB_NOTIFY_MPO_VSYNC_FLAGS;
typedef struct _DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2
{
    DWORD LayerIndex;
    ULONGLONG PresentId;
    DXGKCB_NOTIFY_MPO_VSYNC_FLAGS Flags;
} DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2;
typedef struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA
{
    DXGK_INTERRUPT_TYPE InterruptType;
    union
    {
        struct
        {
            UINT SubmissionFenceId;
            UINT NodeOrdinal;
            UINT EngineOrdinal;
        } DmaCompleted;
        struct
        {
            UINT PreemptionFenceId;
            UINT LastCompletedFenceId;
            UINT NodeOrdinal;
            UINT EngineOrdinal;
        } DmaPreempted;
        struct
        {
            UINT FaultedFenceId;
            NTSTATUS Status;
            UINT NodeOrdinal;
            UINT EngineOrdinal;
        } DmaFaulted;
        struct
        {
            D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
            PHYSICAL_ADDRESS PhysicalAddress;
            UINT PhysicalAdapterMask;
        } CrtcVsync;
        struct
        {
            D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
        } DisplayOnlyVsync;
        struct
        {
            D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
            UINT PhysicalAdapterMask;
            UINT MultiPlaneOverlayVsyncInfoCount;
            DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo;
        } CrtcVsyncWithMultiPlaneOverlay;
        DXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS DisplayOnlyPresentProgress;
        struct
        {
            D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
            DXGK_MIRACAST_CHUNK_INFO ChunkInfo;
            PVOID pPrivateDriverData;
            UINT PrivateDataDriverSize;
            NTSTATUS Status;
        } MiracastEncodeChunkCompleted;
        struct
        {
            UINT FaultedFenceId;
            UINT64 FaultedPrimitiveAPISequenceNumber;
            DXGK_RENDER_PIPELINE_STAGE FaultedPipelineStage;
            UINT FaultedBindTableEntry;
            DXGK_PAGE_FAULT_FLAGS PageFaultFlags;
            D3DGPU_VIRTUAL_ADDRESS FaultedVirtualAddress;
            UINT NodeOrdinal;
            UINT EngineOrdinal;
            UINT PageTableLevel;
            DXGK_FAULT_ERROR_CODE FaultErrorCode;
            HANDLE FaultedProcessHandle;
        } DmaPageFaulted;
        struct
        {
            D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
            UINT PhysicalAdapterMask;
            UINT MultiPlaneOverlayVsyncInfoCount;
            _Field_size_(MultiPlaneOverlayVsyncInfoCount) DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO2 *pMultiPlaneOverlayVsyncInfo;
            ULONGLONG GpuFrequency;
            ULONGLONG GpuClockCounter;
        } CrtcVsyncWithMultiPlaneOverlay2;
        struct
        {
            UINT NodeOrdinal;
            UINT EngineOrdinal;
        } MonitoredFenceSignaled;
        struct
        {
            UINT NodeOrdinal;
            UINT EngineOrdinal;
            UINT64 ContextSwitchFence;
        } HwContextListSwitchCompleted;
        struct
        {
            UINT64 FaultedFenceId;
            D3DGPU_VIRTUAL_ADDRESS FaultedVirtualAddress;
            UINT64 FaultedPrimitiveAPISequenceNumber;
            union
            {
                HANDLE FaultedHwQueue;
                HANDLE FaultedHwContext;
                HANDLE FaultedProcessHandle;
            };
            UINT NodeOrdinal;
            UINT EngineOrdinal;
            DXGK_RENDER_PIPELINE_STAGE FaultedPipelineStage;
            UINT FaultedBindTableEntry;
            DXGK_PAGE_FAULT_FLAGS PageFaultFlags;
            UINT PageTableLevel;
            DXGK_FAULT_ERROR_CODE FaultErrorCode;
        } HwQueuePageFaulted;
        struct
        {
            D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
            UINT NotificationID;
        } PeriodicMonitoredFenceSignaled;
        struct
        {
            UINT NodeOrdinal;
            UINT EngineOrdinal;
        } SchedulingLogInterrupt;
        struct
        {
            UINT NodeOrdinal;
            UINT EngineOrdinal;
        } GpuEngineTimeout;
        struct
        {
            HANDLE hContext;
            UINT64 ContextSuspendFence;
        } SuspendContextCompleted;
        struct
        {
            UINT Reserved[16];
        } Reserved;
    };
    DXGKCB_NOTIFY_INTERRUPT_DATA_FLAGS Flags;
} DXGKARGCB_NOTIFY_INTERRUPT_DATA;
typedef _Inout_ DXGKARGCB_NOTIFY_INTERRUPT_DATA* IN_CONST_PDXGKARGCB_NOTIFY_INTERRUPT_DATA;
typedef
    _Function_class_DXGK_(DXGKCB_NOTIFY_INTERRUPT)
    _IRQL_requires_(HIGH_LEVEL)
VOID (APIENTRY CALLBACK *DXGKCB_NOTIFY_INTERRUPT)(
    IN_CONST_HANDLE hAdapter, IN_CONST_PDXGKARGCB_NOTIFY_INTERRUPT_DATA
    );
typedef
    _Function_class_DXGK_(DXGKCB_NOTIFY_DPC)
    _IRQL_requires_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_NOTIFY_DPC)(
    IN_CONST_HANDLE hAdapter
    );
typedef struct _DXGK_OPENALLOCATIONINFO
{
    D3DKMT_HANDLE hAllocation;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    HANDLE hDeviceSpecificAllocation;
} DXGK_OPENALLOCATIONINFO;
typedef struct _DXGK_OPENALLOCATIONFLAGS
{
    union
    {
        struct
        {
            UINT Create : 1;
            UINT ReadOnly : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGK_OPENALLOCATIONFLAGS;
typedef struct _DXGKARG_OPENALLOCATION
{
    UINT NumAllocations;
    DXGK_OPENALLOCATIONINFO* pOpenAllocation;
    VOID* pPrivateDriverData;
    UINT PrivateDriverSize;
    DXGK_OPENALLOCATIONFLAGS Flags;
    UINT SubresourceIndex;
    SIZE_T SubresourceOffset;
    UINT Pitch;
} DXGKARG_OPENALLOCATION;
typedef _In_ CONST DXGKARG_OPENALLOCATION* IN_CONST_PDXGKARG_OPENALLOCATION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_OPENALLOCATIONINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_OPENALLOCATIONINFO(
    IN_CONST_HANDLE hDevice,
    IN_CONST_PDXGKARG_OPENALLOCATION pOpenAllocation
    );
typedef struct _DXGKARG_CLOSEALLOCATION
{
    UINT NumAllocations;
    CONST HANDLE* pOpenHandleList;
} DXGKARG_CLOSEALLOCATION;
typedef _In_ CONST DXGKARG_CLOSEALLOCATION* IN_CONST_PDXGKARG_CLOSEALLOCATION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CLOSEALLOCATION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CLOSEALLOCATION(
    IN_CONST_HANDLE hDevice,
    IN_CONST_PDXGKARG_CLOSEALLOCATION pCloseAllocation
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYDEVICE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYDEVICE(
    IN_CONST_HANDLE hDevice
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYCONTEXT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYCONTEXT(
    IN_CONST_HANDLE hContext
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYHWCONTEXT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYHWCONTEXT(
    IN_CONST_HANDLE hHwContext
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYHWQUEUE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYHWQUEUE(
    IN_CONST_HANDLE hHwQueue
    );
typedef _In_ D3DKMT_HANDLE IN_D3DKMT_HANDLE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_GETHANDLEPARENT)
    _IRQL_requires_(PASSIVE_LEVEL)
D3DKMT_HANDLE
(APIENTRY CALLBACK *DXGKCB_GETHANDLEPARENT)(IN_D3DKMT_HANDLE hAllocation);
typedef enum _DXGK_HANDLE_TYPE
{
    DXGK_HANDLE_ALLOCATION = 1,
    DXGK_HANDLE_RESOURCE = 2,
} DXGK_HANDLE_TYPE;
typedef struct _DXGKCB_GETHANDLEDATAFLAGS
{
    union
    {
        struct
        {
            UINT DeviceSpecific : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGKCB_GETHANDLEDATAFLAGS;
typedef struct _DXGKARGCB_GETHANDLEDATA
{
    D3DKMT_HANDLE hObject;
    DXGK_HANDLE_TYPE Type;
    DXGKCB_GETHANDLEDATAFLAGS Flags;
} DXGKARGCB_GETHANDLEDATA;
typedef _In_ CONST DXGKARGCB_GETHANDLEDATA* IN_CONST_PDXGKARGCB_GETHANDLEDATA;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_GETHANDLEDATA)
    _IRQL_requires_(PASSIVE_LEVEL)
VOID*
(APIENTRY CALLBACK *DXGKCB_GETHANDLEDATA)(IN_CONST_PDXGKARGCB_GETHANDLEDATA);
typedef VOID * DXGKARG_RELEASE_HANDLE;
typedef DXGKARG_RELEASE_HANDLE * PDXGKARG_RELEASE_HANDLE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_ACQUIREHANDLEDATA)
    _IRQL_requires_max_(APC_LEVEL)
VOID*
(APIENTRY CALLBACK *DXGKCB_ACQUIREHANDLEDATA)(IN_CONST_PDXGKARGCB_GETHANDLEDATA, _Out_ PDXGKARG_RELEASE_HANDLE);
typedef struct _DXGKARGCB_RELEASEHANDLEDATA
{
    DXGKARG_RELEASE_HANDLE ReleaseHandle;
    DXGK_HANDLE_TYPE Type;
} DXGKARGCB_RELEASEHANDLEDATA;
typedef _In_ CONST DXGKARGCB_RELEASEHANDLEDATA IN_CONST_DXGKARGCB_RELEASEHANDLEDATA;
typedef
    _Function_class_DXGK_(DXGKCB_RELEASEHANDLEDATA)
    _IRQL_requires_max_(APC_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_RELEASEHANDLEDATA)(IN_CONST_DXGKARGCB_RELEASEHANDLEDATA);
typedef struct _DXGKARGCB_ENUMHANDLECHILDREN
{
    D3DKMT_HANDLE hObject;
    UINT Index;
} DXGKARGCB_ENUMHANDLECHILDREN;
typedef _In_ CONST DXGKARGCB_ENUMHANDLECHILDREN* IN_CONST_PDXGKARGCB_ENUMHANDLECHILDREN;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_ENUMHANDLECHILDREN)
    _IRQL_requires_(PASSIVE_LEVEL)
D3DKMT_HANDLE
(APIENTRY CALLBACK *DXGKCB_ENUMHANDLECHILDREN)(IN_CONST_PDXGKARGCB_ENUMHANDLECHILDREN);
typedef struct _DXGKARGCB_GETCAPTUREADDRESS
{
    D3DKMT_HANDLE hAllocation;
    UINT SegmentId;
    PHYSICAL_ADDRESS PhysicalAddress;
} DXGKARGCB_GETCAPTUREADDRESS;
typedef _Inout_ DXGKARGCB_GETCAPTUREADDRESS* INOUT_PDXGKARGCB_GETCAPTUREADDRESS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_GETCAPTUREADDRESS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_GETCAPTUREADDRESS)(INOUT_PDXGKARGCB_GETCAPTUREADDRESS);
typedef struct _DXGK_DEVICEINFOFLAGS
{
    union
    {
        struct
        {
            UINT GuaranteedDmaBufferContract : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
 } DXGK_DEVICEINFOFLAGS;
typedef struct _DXGK_DEVICEINFO
{
    UINT DmaBufferSize;
    UINT DmaBufferSegmentSet;
    UINT DmaBufferPrivateDataSize;
    UINT AllocationListSize;
    UINT PatchLocationListSize;
    DXGK_DEVICEINFOFLAGS Flags;
} DXGK_DEVICEINFO;
typedef struct _DXGK_CREATEDEVICEFLAGS
{
    union
    {
        struct
        {
            UINT SystemDevice : 1;
            UINT GdiDevice : 1;
            UINT Reserved : 29;
            UINT DXGK_DEVICE_RESERVED0 : 1;
        };
        UINT Value;
    };
} DXGK_CREATEDEVICEFLAGS;
typedef struct _DXGKARG_CREATEDEVICE
{
    HANDLE hDevice;
    union
    {
        DXGK_CREATEDEVICEFLAGS Flags;
        DXGK_DEVICEINFO* pInfo;
    };
    ULONG Pasid;
    HANDLE hKmdProcess;
} DXGKARG_CREATEDEVICE;
typedef _Inout_ DXGKARG_CREATEDEVICE* INOUT_PDXGKARG_CREATEDEVICE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATEDEVICE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEDEVICE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_CREATEDEVICE pCreateDevice
    );
typedef struct _DXGK_CREATECONTEXTFLAGS
{
    union
    {
        struct
        {
            UINT SystemContext : 1;
            UINT GdiContext : 1;
            UINT VirtualAddressing : 1;
            UINT SystemProtectedContext : 1;
            UINT HwQueueSupported : 1;
            UINT Reserved : 27;
        };
        UINT Value;
    };
} DXGK_CREATECONTEXTFLAGS;
typedef struct _DXGK_CONTEXTINFO_CAPS
{
    union
    {
        struct
        {
            UINT NoPatchingRequired : 1;
            UINT DriverManagesResidency : 1;
            UINT UseIoMmu : 1;
            UINT Reserved : 29;
        };
        UINT Value;
    };
} DXGK_CONTEXTINFO_CAPS;
typedef struct _DXGK_CONTEXTINFO
{
    UINT DmaBufferSize;
    UINT DmaBufferSegmentSet;
    UINT DmaBufferPrivateDataSize;
    UINT AllocationListSize;
    UINT PatchLocationListSize;
    UINT Reserved;
    DXGK_CONTEXTINFO_CAPS Caps;
    ULONG PagingCompanionNodeId;
} DXGK_CONTEXTINFO;
typedef struct _DXGKARG_CREATECONTEXT
{
    HANDLE hContext;
    UINT NodeOrdinal;
    UINT EngineAffinity;
    DXGK_CREATECONTEXTFLAGS Flags;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    DXGK_CONTEXTINFO ContextInfo;
} DXGKARG_CREATECONTEXT;
typedef _Inout_ DXGKARG_CREATECONTEXT* INOUT_PDXGKARG_CREATECONTEXT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATECONTEXT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATECONTEXT(
    IN_CONST_HANDLE hDevice,
    INOUT_PDXGKARG_CREATECONTEXT pCreateContext
    );
typedef struct _DXGK_HWCONTEXT_CAPS
{
    union
    {
        struct
        {
            UINT UseIoMmu : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} DXGK_HWCONTEXT_CAPS;
typedef struct _DXGKARG_CREATEHWCONTEXT
{
    HANDLE hHwContext;
    UINT NodeOrdinal;
    UINT EngineAffinity;
    D3DDDI_CREATEHWCONTEXTFLAGS Flags;
    UINT PrivateDriverDataSize;
    _Inout_
    _Field_size_bytes_ (PrivateDriverDataSize)
    VOID* pPrivateDriverData;
    DXGK_HWCONTEXT_CAPS ContextCaps;
} DXGKARG_CREATEHWCONTEXT;
typedef _Inout_ DXGKARG_CREATEHWCONTEXT* INOUT_PDXGKARG_CREATEHWCONTEXT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATEHWCONTEXT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEHWCONTEXT(
    IN_CONST_HANDLE hDevice,
    INOUT_PDXGKARG_CREATEHWCONTEXT pCreateContext
    );
typedef struct _DXGKARG_CREATEHWQUEUE
{
    HANDLE hHwQueue;
    D3DDDI_CREATEHWQUEUEFLAGS Flags;
    UINT PrivateDriverDataSize;
    _Inout_
    _Field_size_bytes_ (PrivateDriverDataSize)
    VOID* pPrivateDriverData;
    D3DKMT_HANDLE hHwQueueProgressFence;
    VOID* HwQueueProgressFenceCPUVirtualAddress;
    D3DGPU_VIRTUAL_ADDRESS HwQueueProgressFenceGPUVirtualAddress;
} DXGKARG_CREATEHWQUEUE;
typedef _Inout_ DXGKARG_CREATEHWQUEUE* INOUT_PDXGKARG_CREATEHWQUEUE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATEHWQUEUE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEHWQUEUE(
    IN_CONST_HANDLE hHwContext,
    INOUT_PDXGKARG_CREATEHWQUEUE pCreateHwQueue
    );
typedef _In_ CONST DXGKARG_SETPALETTE* IN_CONST_PDXGKARG_SETPALETTE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETPALETTE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETPALETTE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETPALETTE pSetPalette
    );
typedef struct _DXGK_POINTERFLAGS
{
    union
    {
        struct
        {
            UINT Monochrome : 1;
            UINT Color : 1;
            UINT MaskedColor : 1;
            UINT Reserved :29;
        };
        UINT Value;
    };
} DXGK_POINTERFLAGS;
typedef struct _DXGKARG_SETPOINTERSHAPE
{
    DXGK_POINTERFLAGS Flags;
    UINT Width;
    UINT Height;
    UINT Pitch;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    CONST VOID* pPixels;
    UINT XHot;
    UINT YHot;
} DXGKARG_SETPOINTERSHAPE;
typedef _In_ CONST DXGKARG_SETPOINTERSHAPE* IN_CONST_PDXGKARG_SETPOINTERSHAPE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETPOINTERSHAPE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETPOINTERSHAPE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETPOINTERSHAPE pSetPointerShape
    );
typedef struct _DXGK_SETPOINTERPOSITIONFLAGS
{
    union
    {
        struct
        {
            UINT Visible : 1;
            UINT Procedural : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGK_SETPOINTERPOSITIONFLAGS;
typedef struct _DXGKARG_SETPOINTERPOSITION
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    INT X;
    INT Y;
    DXGK_SETPOINTERPOSITIONFLAGS Flags;
} DXGKARG_SETPOINTERPOSITION;
typedef _In_ CONST DXGKARG_SETPOINTERPOSITION* IN_CONST_PDXGKARG_SETPOINTERPOSITION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETPOINTERPOSITION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETPOINTERPOSITION(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETPOINTERPOSITION pSetPointerPosition
    );
typedef enum _DXGK_QUERYADAPTERINFOTYPE
{
    DXGKQAITYPE_UMDRIVERPRIVATE = 0,
    DXGKQAITYPE_DRIVERCAPS = 1,
    DXGKQAITYPE_QUERYSEGMENT = 2,
    DXGKQAITYPE_RESERVED = 3,
    DXGKQAITYPE_QUERYSEGMENT2 = 4,
    DXGKQAITYPE_QUERYSEGMENT3 = 5,
    DXGKQAITYPE_NUMPOWERCOMPONENTS = 6,
    DXGKQAITYPE_POWERCOMPONENTINFO = 7,
    DXGKQAITYPE_PREFERREDGPUNODE = 8,
    DXGKQAITYPE_POWERCOMPONENTPSTATEINFO = 9,
    DXGKQAITYPE_HISTORYBUFFERPRECISION = 10,
    DXGKQAITYPE_QUERYSEGMENT4 = 11,
    DXGKQAITYPE_SEGMENTMEMORYSTATE = 12,
    DXGKQAITYPE_GPUMMUCAPS = 13,
    DXGKQAITYPE_PAGETABLELEVELDESC = 14,
    DXGKQAITYPE_PHYSICALADAPTERCAPS = 15,
    DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION = 16,
    DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR = 17,
    DXGKQAITYPE_UEFIFRAMEBUFFERRANGES = 18,
    DXGKQAITYPE_QUERYCOLORIMETRYOVERRIDES = 19,
    DXGKQAITYPE_DISPLAYID_DESCRIPTOR = 20,
    DXGKQAITYPE_FRAMEBUFFERSAVESIZE = 21,
    DXGKQAITYPE_HARDWARERESERVEDRANGES = 22,
    DXGKQAITYPE_INTEGRATED_DISPLAY_DESCRIPTOR2 = 23,
    DXGKQAITYPE_NODEPERFDATA = 24,
    DXGKQAITYPE_ADAPTERPERFDATA = 25,
    DXGKQAITYPE_ADAPTERPERFDATA_CAPS = 26,
    DXGKQAITYPE_GPUVERSION = 27,
    DXGKQAITYPE_DEVICE_TYPE_CAPS = 28,
    DXGKQAITYPE_WDDMDEVICECAPS = 29,
    DXGKQAITYPE_GPUPCAPS = 30,
    DXGKQAITYPE_QUERYTARGETGAMMACAPS = 31,
    DXGKQAITYPE_MIPI_DSI2_QUERY_CAPS = 32,
    DXGKQAITYPE_SCANOUT_CAPS = 33,
} DXGK_QUERYADAPTERINFOTYPE;
typedef struct _DXGK_GAMMARAMPCAPS
{
    union
    {
        struct
        {
            UINT Gamma_Rgb256x3x16 : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_GAMMARAMPCAPS;
typedef struct _DXGK_COLORTRANSFORMCAPS
{
    union
    {
        struct
        {
            UINT Gamma_Rgb256x3x16 : 1;
            UINT Gamma_Dxgi1 : 1;
            UINT Transform_3x4Matrix : 1;
            UINT Transform_3x4Matrix_WideColor : 1;
            UINT Transform_3x4Matrix_HighColor : 1;
            UINT Transform_Matrix_V2 : 1;
            UINT Reserved :26;
        };
        UINT Value;
    };
} DXGK_COLORTRANSFORMCAPS;
typedef struct _DXGK_PRESENTATIONCAPS
{
    union
    {
        struct
        {
            UINT NoScreenToScreenBlt : 1;
            UINT NoOverlapScreenBlt : 1;
            UINT SupportKernelModeCommandBuffer : 1;
            UINT NoSameBitmapAlphaBlend : 1;
            UINT NoSameBitmapStretchBlt : 1;
            UINT NoSameBitmapTransparentBlt : 1;
            UINT NoSameBitmapOverlappedAlphaBlend: 1;
            UINT NoSameBitmapOverlappedStretchBlt: 1;
            UINT DriverSupportsCddDwmInterop : 1;
            UINT Reserved0 : 1;
            UINT AlignmentShift : 4;
            UINT MaxTextureWidthShift : 3;
            UINT MaxTextureHeightShift : 3;
            UINT SupportAllBltRops : 1;
            UINT SupportMirrorStretchBlt : 1;
            UINT SupportMonoStretchBltModes : 1;
            UINT StagingRectStartPitchAligned : 1;
            UINT NoSameBitmapBitBlt : 1;
            UINT NoSameBitmapOverlappedBitBlt : 1;
            UINT Reserved1 : 1;
            UINT NoTempSurfaceForClearTypeBlend : 1;
            UINT SupportSoftwareDeviceBitmaps : 1;
            UINT NoCacheCoherentApertureMemory : 1;
            UINT SupportLinearHeap : 1;
            UINT Reserved : 1;
        };
        UINT Value;
    };
} DXGK_PRESENTATIONCAPS;
typedef struct _DXGK_FLIPCAPS
{
    union
    {
        struct
        {
            UINT FlipOnVSyncWithNoWait : 1;
            UINT FlipOnVSyncMmIo : 1;
            UINT FlipInterval : 1;
            UINT FlipImmediateMmIo : 1;
            UINT FlipIndependent : 1;
            UINT DdiPresentForIFlip : 1;
            UINT FlipImmediateOnHSync : 1;
            UINT Reserved :25;
        };
        UINT Value;
    };
} DXGK_FLIPCAPS;
typedef struct _DXGK_VIDSCHCAPS
{
    union
    {
        struct
        {
            UINT MultiEngineAware :1;
            UINT VSyncPowerSaveAware :1;
            UINT PreemptionAware :1;
            UINT NoDmaPatching :1;
            UINT CancelCommandAware :1;
            UINT No64BitAtomics :1;
            UINT LowIrqlPreemptCommand :1;
            UINT HwQueuePacketCap :4;
            UINT Reserved :21;
        };
        UINT Value;
    };
} DXGK_VIDSCHCAPS;
typedef enum _DXGK_PAGETABLEUPDATEMODE
{
   DXGK_PAGETABLEUPDATE_CPU_VIRTUAL,
   DXGK_PAGETABLEUPDATE_GPU_VIRTUAL,
   DXGK_PAGETABLEUPDATE_GPU_PHYSICAL,
} DXGK_PAGETABLEUPDATEMODE;
typedef struct _DXGK_PAGETABLEUPDATEADDRESS
{
    union
    {
        PVOID CpuVirtual;
        D3DGPU_PHYSICAL_ADDRESS GpuPhysical;
        D3DGPU_VIRTUAL_ADDRESS GpuVirtual;
    };
} DXGK_PAGETABLEUPDATEADDRESS;
typedef struct _DXGK_PAGE_TABLE_LEVEL_DESC
{
    UINT PageTableIndexBitCount;
    UINT PageTableSegmentId;
    UINT PagingProcessPageTableSegmentId;
    UINT PageTableSizeInBytes;
    UINT PageTableAlignmentInBytes;
} DXGK_PAGE_TABLE_LEVEL_DESC;
typedef struct _DXGK_UPDATEPAGETABLEFLAGS
{
   UINT Repeat : 1;
   UINT InitialUpdate : 1;
   UINT NotifyEviction : 1;
   UINT Use64KBPages : 1;
   UINT Reserved : 28;
} DXGK_UPDATEPAGETABLEFLAGS;
typedef struct _DXGK_QUERYGPUMMUCAPSIN
{
    UINT PhysicalAdapterIndex;
} DXGK_QUERYGPUMMUCAPSIN;
typedef struct _DXGK_QUERYPAGETABLELEVELDESCIN
{
    WORD LevelIndex;
    WORD PhysicalAdapterIndex;
} DXGK_QUERYPAGETABLELEVELDESCIN;
typedef struct _DXGK_QUERYHISTORYBUFFERPRECISIONIN
{
    UINT PhysicalAdapterIndex;
} DXGK_QUERYHISTORYBUFFERPRECISIONIN;
typedef struct _DXGK_GPUMMUCAPS
{
    union
    {
        struct
        {
            UINT ReadOnlyMemorySupported : 1;
            UINT NoExecuteMemorySupported : 1;
            UINT ZeroInPteSupported : 1;
            UINT ExplicitPageTableInvalidation : 1;
            UINT CacheCoherentMemorySupported : 1;
            UINT PageTableUpdateRequireAddressSpaceIdle : 1;
            UINT LargePageSupported : 1;
            UINT DualPteSupported : 1;
            UINT AllowNonAlignedLargePageAddress : 1;
            UINT SysMem64KBPageSupported : 1;
            UINT InvalidTlbEntriesNotCached : 1;
            UINT Reserved : 21;
        };
        UINT Value;
    };
    DXGK_PAGETABLEUPDATEMODE PageTableUpdateMode;
    UINT VirtualAddressBitCount;
    UINT LeafPageTableSizeFor64KPagesInBytes;
    UINT PageTableLevelCount;
    struct
    {
        UINT SourcePageTableVaInTransfer : 1;
        UINT Reserved : 31;
    } LegacyBehaviors;
} DXGK_GPUMMUCAPS;
typedef struct _DXGK_QUERYPHYSICALADAPTERCAPSIN
{
    UINT PhysicalAdapterIndex;
} DXGK_QUERYPHYSICALADAPTERCAPSIN;
typedef struct _DXGK_PHYSICALADAPTERFLAGS
{
   union
   {
      struct
      {
         UINT IoMmuSupported : 1;
         UINT GpuMmuSupported : 1;
         UINT MovePagingSupported : 1;
         UINT VPRPagingContextRequired : 1;
         UINT AllowHardwareProtectedNoVpr : 1;
         UINT Reserved : 27;
      };
      UINT Value;
   };
} DXGK_PHYSICALADAPTERFLAGS;
typedef struct _DXGK_PHYSICALADAPTERCAPS
{
    WORD NumExecutionNodes;
    WORD PagingNodeIndex;
    HANDLE DxgkPhysicalAdapterHandle;
    DXGK_PHYSICALADAPTERFLAGS Flags;
    UINT VPRPagingNode;
} DXGK_PHYSICALADAPTERCAPS;
typedef struct _DXGK_CPUHOSTAPERTURE
{
    UINT64 PhysicalAddress;
    UINT32 SizeInPages;
} DXGK_CPUHOSTAPERTURE;
typedef struct _DXGK_FRAMEBUFFERSAVEAREA
{
    SIZE_T MaximumSize;
} DXGK_FRAMEBUFFERSAVEAREA;
typedef struct _DXGK_PHYSICAL_MEMORY_RANGE
{
    PHYSICAL_ADDRESS BaseAddress;
    LARGE_INTEGER NumberOfBytes;
} DXGK_PHYSICAL_MEMORY_RANGE;
typedef struct _DXGK_HARDWARERESERVEDRANGES
{
    UINT32 NumRanges;
    _Field_size_(NumRanges)
    DXGK_PHYSICAL_MEMORY_RANGE *pPhysicalRanges;
} DXGK_HARDWARERESERVEDRANGES;
typedef struct _DXGK_VIDMMCAPS
{
    union
    {
        struct
        {
            UINT OutOfOrderLock : 1;
            UINT DedicatedPagingEngine : 1;
            UINT PagingEngineCanSwizzle : 1;
            UINT SectionBackedPrimary : 1;
            UINT CrossAdapterResource : 1;
            UINT VirtualAddressingSupported : 1;
            UINT GpuMmuSupported : 1;
            UINT IoMmuSupported : 1;
            UINT ReplicateGdiContent : 1;
            UINT NonCpuVisiblePrimary : 1;
            UINT ParavirtualizationSupported : 1;
            UINT IoMmuSecureModeSupported : 1;
            UINT DisableSelfRefreshVRAMInS3 : 1;
            UINT Reserved : 19;
        };
        UINT Value;
    };
    UINT PagingNode;
} DXGK_VIDMMCAPS;
typedef struct _DXGK_GPUENGINETOPOLOGY
{
    UINT NbAsymetricProcessingNodes;
    UINT Reserved[DXGK_MAX_ASYMETRICAL_PROCESSING_NODES];
} DXGK_GPUENGINETOPOLOGY;
typedef struct _DXGK_VIRTUALADDRESSCAPS_DEPRECATED
{
    union
    {
        struct
        {
            UINT PrivilegedMemorySupported : 1;
            UINT ReadOnlyMemorySupported : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    };
    UINT VirtualAddressBitCount;
    UINT PageTableCoverageBitCount;
    UINT PageDirectoryEntrySize;
    UINT PageDirectorySegment;
    UINT PageTableSegment;
    UINT IdealGPUPageSize;
} DXGK_VIRTUALADDRESSCAPS_DEPRECATED;
typedef struct _DXGK_DMABUFFERCAPS_DEPRECATED
{
    struct
    {
        UINT Size;
        UINT PrivateDriverDataSize;
        UINT SegmentId;
        UINT Reserved1;
        UINT Reserved[16];
    } PresentDmaBuffer;
    struct
    {
        UINT Size;
        UINT PrivateDriverDataSize;
        UINT SegmentId;
        UINT Reserved1;
        UINT Reserved[16];
    } PagingDmaBuffer;
} DXGK_DMABUFFERCAPS_DEPRECATED;
typedef enum _DXGK_WDDMVERSION
{
     DXGKDDI_WDDMv1 = 0x1000,
     DXGKDDI_WDDMv1_2 = 0x1200,
     DXGKDDI_WDDMv1_3 = 0x1300,
     DXGKDDI_WDDMv2 = 0x2000,
     DXGKDDI_WDDMv2_1 = 0x2100,
     DXGKDDI_WDDMv2_1_5 = 0x2105,
     DXGKDDI_WDDMv2_1_6 = 0x2106,
     DXGKDDI_WDDMv2_2 = 0x2200,
     DXGKDDI_WDDMv2_3 = 0x2300,
     DXGKDDI_WDDMv2_4 = 0x2400,
     DXGKDDI_WDDMv2_5 = 0x2500,
     DXGKDDI_WDDMv2_6 = 0x2600
} DXGK_WDDMVERSION;
typedef struct _DXGK_DRIVERCAPS
{
    PHYSICAL_ADDRESS HighestAcceptableAddress;
    UINT MaxAllocationListSlotId;
    SIZE_T ApertureSegmentCommitLimit;
    UINT MaxPointerWidth;
    UINT MaxPointerHeight;
    DXGK_POINTERFLAGS PointerCaps;
    UINT InterruptMessageNumber;
    UINT NumberOfSwizzlingRanges;
    UINT MaxOverlays;
    union
    {
        DXGK_GAMMARAMPCAPS GammaRampCaps;
        DXGK_COLORTRANSFORMCAPS ColorTransformCaps;
    };
    DXGK_PRESENTATIONCAPS PresentationCaps;
    UINT MaxQueuedFlipOnVSync;
    DXGK_FLIPCAPS FlipCaps;
    DXGK_VIDSCHCAPS SchedulingCaps;
    DXGK_VIDMMCAPS MemoryManagementCaps;
    DXGK_GPUENGINETOPOLOGY GpuEngineTopology;
    DXGK_WDDMVERSION WDDMVersion;
    DXGK_VIRTUALADDRESSCAPS_DEPRECATED Reserved;
    DXGK_DMABUFFERCAPS_DEPRECATED Reserved1;
    D3DKMDT_PREEMPTION_CAPS PreemptionCaps;
    BOOLEAN SupportNonVGA;
    BOOLEAN SupportSmoothRotation;
    BOOLEAN SupportPerEngineTDR;
    BOOLEAN SupportDirectFlip;
    BOOLEAN SupportMultiPlaneOverlay;
    BOOLEAN SupportRuntimePowerManagement;
    BOOLEAN SupportSurpriseRemovalInHibernation;
    BOOLEAN HybridDiscrete;
    UINT MaxOverlayPlanes;
    BOOLEAN HybridIntegrated;
    D3DGPU_VIRTUAL_ADDRESS InternalGpuVirtualAddressRangeStart;
    D3DGPU_VIRTUAL_ADDRESS InternalGpuVirtualAddressRangeEnd;
    BOOLEAN SupportSurpriseRemoval;
    BOOLEAN SupportMultiPlaneOverlayImmediateFlip;
    BOOLEAN CursorScaledWithMultiPlaneOverlayPlane0;
    BOOLEAN HybridAcpiChainingRequired;
    UINT MaxQueuedMultiPlaneOverlayFlipVSync;
    union
    {
        struct
        {
            UINT SupportContextlessPresent : 1;
            UINT Detachable : 1;
            UINT VirtualGpuOnly : 1;
            UINT ComputeOnly : 1;
            UINT Reserved : 28;
        };
        UINT Value;
    } MiscCaps;
} DXGK_DRIVERCAPS;
typedef struct _DXGK_WDDMDEVICECAPSIN
{
    ULONG DxgkrnlInterfaceVersion;
} DXGK_WDDMDEVICECAPSIN;
typedef struct _DXGK_WDDMDEVICECAPS
{
    DXGK_WDDMVERSION WDDMVersion;
} DXGK_WDDMDEVICECAPS;
typedef struct _DXGK_GPUPCAPS
{
    union
    {
        struct
        {
            UINT VirtualMachineHibernation : 1;
            UINT HotDriverUpdate : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    } Caps;
} DXGK_GPUPCAPS;
typedef struct _DXGK_SEGMENTFLAGS
{
    union
    {
        struct
        {
            UINT Aperture : 1;
            UINT Agp : 1;
            UINT CpuVisible : 1;
            UINT UseBanking : 1;
            UINT CacheCoherent : 1;
            UINT PitchAlignment : 1;
            UINT PopulatedFromSystemMemory : 1;
            UINT PreservedDuringStandby : 1;
            UINT PreservedDuringHibernate : 1;
            UINT PartiallyPreservedDuringHibernate : 1;
            UINT DirectFlip : 1;
            UINT Use64KBPages : 1;
            UINT ReservedSysMem : 1;
            UINT SupportsCpuHostAperture : 1;
            UINT SupportsCachedCpuHostAperture : 1;
            UINT ApplicationTarget : 1;
            UINT VprSupported : 1;
            UINT VprPreservedDuringStandby : 1;
            UINT EncryptedPagingSupported : 1;
            UINT LocalBudgetGroup : 1;
            UINT NonLocalBudgetGroup : 1;
            UINT Reserved :11;
        };
        UINT Value;
    };
} DXGK_SEGMENTFLAGS;
typedef struct _DXGK_SEGMENTDESCRIPTOR
{
    PHYSICAL_ADDRESS BaseAddress;
    PHYSICAL_ADDRESS CpuTranslatedAddress;
    SIZE_T Size;
    UINT NbOfBanks;
    SIZE_T* pBankRangeTable;
    SIZE_T CommitLimit;
    DXGK_SEGMENTFLAGS Flags;
} DXGK_SEGMENTDESCRIPTOR;
typedef struct _DXGK_QUERYSEGMENTIN
{
    PHYSICAL_ADDRESS AgpApertureBase;
    LARGE_INTEGER AgpApertureSize;
    DXGK_SEGMENTFLAGS AgpFlags;
} DXGK_QUERYSEGMENTIN;
typedef struct _DXGK_QUERYSEGMENTOUT
{
    UINT NbSegment;
    DXGK_SEGMENTDESCRIPTOR* pSegmentDescriptor;
    UINT PagingBufferSegmentId;
    UINT PagingBufferSize;
    UINT PagingBufferPrivateDataSize;
} DXGK_QUERYSEGMENTOUT;
typedef struct _DXGK_SEGMENTFLAGS2
{
    union
    {
        struct
        {
            UINT Aperture : 1;
            UINT PopulatedFromSystemMemory : 1;
            UINT SystemMemoryReservedByBios : 1;
            UINT CpuVisible : 1;
            UINT Reserved :28;
        };
        UINT Value;
    };
} DXGK_SEGMENTFLAGS2;
typedef struct _DXGK_SEGMENTDESCRIPTOR2
{
    DXGK_SEGMENTFLAGS2 Flags;
    SIZE_T Size;
    PMDL pMdl;
    PHYSICAL_ADDRESS BaseAddress;
    PHYSICAL_ADDRESS CpuTranslatedAddress;
} DXGK_SEGMENTDESCRIPTOR2;
typedef struct _DXGK_QUERYSEGMENTOUT2
{
    UINT SegmentCount;
    DXGK_SEGMENTDESCRIPTOR2* pSegmentDescriptor;
} DXGK_QUERYSEGMENTOUT2;
typedef struct _DXGK_SEGMENTDESCRIPTOR3
{
    DXGK_SEGMENTFLAGS Flags;
    PHYSICAL_ADDRESS BaseAddress;
    PHYSICAL_ADDRESS CpuTranslatedAddress;
    SIZE_T Size;
    UINT NbOfBanks;
    SIZE_T* pBankRangeTable;
    SIZE_T CommitLimit;
    SIZE_T SystemMemoryEndAddress;
    SIZE_T Reserved;
} DXGK_SEGMENTDESCRIPTOR3;
typedef struct _DXGK_QUERYSEGMENTOUT3
{
    UINT NbSegment;
    DXGK_SEGMENTDESCRIPTOR3* pSegmentDescriptor;
    UINT PagingBufferSegmentId;
    UINT PagingBufferSize;
    UINT PagingBufferPrivateDataSize;
} DXGK_QUERYSEGMENTOUT3;
typedef struct _DXGK_QUERYSEGMENTIN4
{
    UINT PhysicalAdapterIndex;
} DXGK_QUERYSEGMENTIN4;
typedef struct _DXGK_SEGMENTDESCRIPTOR4
{
    DXGK_SEGMENTFLAGS Flags;
    PHYSICAL_ADDRESS BaseAddress;
    SIZE_T Size;
    SIZE_T CommitLimit;
    SIZE_T SystemMemoryEndAddress;
    union
    {
        PHYSICAL_ADDRESS CpuTranslatedAddress;
        DXGK_CPUHOSTAPERTURE CpuHostAperture;
    };
    UINT NumInvalidMemoryRanges;
    SIZE_T VprRangeStartOffset;
    SIZE_T VprRangeSize;
    UINT VprAlignment;
    UINT NumVprSupported;
    UINT VprReserveSize;
    UINT NumUEFIFrameBufferRanges;
} DXGK_SEGMENTDESCRIPTOR4;
typedef struct _DXGK_QUERYSEGMENTOUT4
{
    UINT NbSegment;
    BYTE* pSegmentDescriptor;
    UINT PagingBufferSegmentId;
    UINT PagingBufferSize;
    UINT PagingBufferPrivateDataSize;
    SIZE_T SegmentDescriptorStride;
} DXGK_QUERYSEGMENTOUT4;
typedef struct _DXGK_MEMORYRANGE
{
    UINT64 SegmentOffset;
    UINT64 SizeInBytes;
} DXGK_MEMORYRANGE;
typedef struct _DXGK_QUERYSEGMENTMEMORYSTATE
{
    WORD DriverSegmentId;
    WORD PhysicalAdapterIndex;
    union
    {
        UINT NumInvalidMemoryRanges;
        UINT NumUEFIFrameBufferRanges;
    };
    DXGK_MEMORYRANGE* pMemoryRanges;
} DXGK_QUERYSEGMENTMEMORYSTATE, DXGK_SEGMENTMEMORYSTATE;
typedef _In_ CONST DXGK_SEGMENTMEMORYSTATE* IN_CONST_PDXGK_SEGMENTMEMORYSTATE;
typedef struct _DXGK_DISPLAY_DRIVERCAPS_EXTENSION
{
    union
    {
        struct
        {
            UINT SecureDisplaySupport : 1;
            UINT VirtualModeSupport : 1;
            UINT HdrFP16ScanoutSupport : 1;
            UINT HdrARGB10ScanoutSupport : 1;
            UINT Reserved :28;
        };
        UINT Value;
    };
} DXGK_DISPLAY_DRIVERCAPS_EXTENSION;
typedef UINT DXGK_DISPLAYPANELORIENTATION;
typedef union _DXGK_INTEGRATEDDISPLAYFLAGS
{
    struct
    {
        DXGK_DISPLAYPANELORIENTATION UndockedOrientation : 2;
        DXGK_DISPLAYPANELORIENTATION DockedOrientation : 2;
        UINT Reserved :28;
    };
    UINT Value;
} DXGK_INTEGRATEDDISPLAYFLAGS, *PDXGK_INTEGRATEDDISPLAYFLAGS;
typedef union _DXGK_STANDARD_COLORIMETRY_FLAGS
{
    struct
    {
        UINT BT2020YCC : 1;
        UINT BT2020RGB : 1;
        UINT ST2084 : 1;
        UINT Reserved :29;
    };
    ULONG Value;
} DXGK_STANDARD_COLORIMETRY_FLAGS, *PDXGK_STANDARD_COLORIMETRY_FLAGS;
typedef struct _DXGK_COLORIMETRY
{
    D3DKMDT_2DOFFSET RedPoint;
    D3DKMDT_2DOFFSET GreenPoint;
    D3DKMDT_2DOFFSET BluePoint;
    D3DKMDT_2DOFFSET WhitePoint;
    ULONG MinLuminance;
    ULONG MaxLuminance;
    ULONG MaxFullFrameLuminance;
    D3DKMDT_WIRE_FORMAT_AND_PREFERENCE FormatBitDepths;
    DXGK_STANDARD_COLORIMETRY_FLAGS StandardColorimetryFlags;
} DXGK_COLORIMETRY, *PDXGK_COLORIMETRY;
typedef struct _DXGK_DEVICE_TYPE_CAPS
{
    union
    {
        struct
        {
            UINT32 Discrete : 1;
            UINT32 Detachable : 1;
            UINT32 Reserved : 30;
        };
        UINT32 Value;
    };
} DXGK_DEVICE_TYPE_CAPS;
typedef struct _DXGK_QUERYINTEGRATEDDISPLAYOUT
{
    DXGK_INTEGRATEDDISPLAYFLAGS Flags;
    D3DKMDT_VIDEO_SIGNAL_INFO NativeTiming;
    DXGK_MONITORLINKINFO_CAPABILITIES LinkCapabilities;
    DXGK_COLORIMETRY Colorimetry;
    DXGK_DISPLAY_TECHNOLOGY DisplayTechnology;
    DXGK_DISPLAY_USAGE IntendedUsage;
    BYTE Instance;
    DXGK_DISPLAY_DESCRIPTOR_TYPE DescriptorType;
    BYTE Descriptor[1];
} DXGK_QUERYINTEGRATEDDISPLAYOUT, *PDXGK_QUERYINTEGRATEDDISPLAYOUT;
typedef struct _DXGK_QAITARGETIN
{
    D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
} DXGK_QAITARGETIN;
typedef DXGK_QAITARGETIN DXGK_QUERYINTEGRATEDDISPLAYIN;
typedef DXGK_QAITARGETIN DXGK_QUERYCOLORIMETRYOVERRIDESIN;
typedef enum _DXGK_GAMMA_DATA_TYPE
{
    DXGK_GAMMA_DATA_TYPE_FIXED_POINT = 0,
    DXGK_GAMMA_DATA_TYPE_FLOAT,
}DXGK_GAMMA_DATA_TYPE;
typedef struct _DKGK_GAMMA_DATA_CAP
{
    DXGK_GAMMA_DATA_TYPE DataType;
    union
    {
        struct
        {
            UINT BitCountOfInteger : 6;
            UINT BitCountOfFraction: 6;
        };
        struct
        {
            UINT BitCountOfExponent: 6;
            UINT BitCountOfMantissa: 6;
        };
        UINT Value;
    };
    float NumericRangeMin;
    float NumericRangeMax;
}DKGK_GAMMA_DATA_CAP;
typedef struct _DXGK_GAMMA_1DLUT_CAP
{
    UINT NumberOfLUTEntries;
    DKGK_GAMMA_DATA_CAP GammaDataCap;
}DXGK_GAMMA_1DLUT_CAP, *PDXGK_GAMMA_1DLUT_CAP;
typedef struct _DXGK_GAMMA_MATRIX_CAP
{
    union
    {
        struct
        {
            UINT MatrixSizeX : 10;
            UINT MatrixSizeY : 10;
        };
        UINT Value;
    };
    DKGK_GAMMA_DATA_CAP GammaDataCap;
}DXGK_GAMMA_MATRIX_CAP, *PDXGK_GAMMA_MATRIX_CAP;
typedef enum _DXGK_TARGET_GAMMA_CAPS_VERSION
{
    DXGK_TARGET_GAMMA_CAPS_VERSION_DEFALUT = 0,
    DXGK_TARGET_GAMMA_CAPS_VERSION_1 = 1,
    DXGK_TARGET_GAMMA_CAPS_VERSION_NOT_SUPPORTED = DXGK_TARGET_GAMMA_CAPS_VERSION_DEFALUT,
}DXGK_TARGET_GAMMA_CAPS_VERSION;
typedef struct _DXGK_TARGET_GAMMA_CAPS
{
    DXGK_TARGET_GAMMA_CAPS_VERSION Version;
    DXGK_GAMMA_1DLUT_CAP LookupTable1DDegammaCap;
    DXGK_GAMMA_MATRIX_CAP ColorMatrix3x3Cap;
    DXGK_GAMMA_1DLUT_CAP LookupTable1DRegammaCap;
}DXGK_TARGET_GAMMA_CAPS, *PDXGK_TARGET_GAMMA_CAPS;
typedef DXGK_QAITARGETIN DXGK_QUERYTARGETGAMMACAPSIN;
typedef struct _DXGK_DSI2_CAPS
{
    BYTE DSI2VersionMajor;
    BYTE DSI2VersionMinor;
    WORD TargetMaximumReturnPacketSize;
    BYTE ResultCodeFlags;
    BYTE ResultCodeStatus;
    BYTE Revision;
    BYTE Level;
    BYTE DeviceClassHi;
    BYTE DeviceClassLo;
    BYTE ManufacturerHi;
    BYTE ManufacturerLo;
    BYTE ProductHi;
    BYTE ProductLo;
    BYTE LengthHi;
    BYTE LengthLo;
} DXGK_DSI2_CAPS, *PDXGK_DSI2_CAPS;
typedef DXGK_QAITARGETIN DXGK_QUERYTARGETMIPIDSI2CAPSIN;
typedef struct _DXGK_QAISOURCEIN
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID Source;
} DXGK_QAISOURCEIN;
typedef DXGK_QAISOURCEIN DXGK_QUERY_SCANOUT_CAPS_IN;
typedef struct _DXGK_QUERY_SCANOUT_CAPS_OUT
{
    UINT Caps;
} DXGK_QUERY_SCANOUT_CAPS_OUT, *PDXGK_QUERY_SCANOUT_CAPS_OUT;
typedef struct _DXGK_QUERYDISPLAYIDIN
{
    D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
} DXGK_QUERYDISPLAYIDIN;
typedef struct _DXGK_QUERYDISPLAYIDOUT
{
    UINT Length;
    BYTE* pDescriptor;
} DXGK_QUERYDISPLAYIDOUT;
typedef struct _DXGK_QUERYINTEGRATEDDISPLAYOUT2
{
    DXGK_INTEGRATEDDISPLAYFLAGS Flags;
    D3DKMDT_VIDEO_SIGNAL_INFO NativeTiming;
    DXGK_MONITORLINKINFO_CAPABILITIES LinkCapabilities;
    DXGK_COLORIMETRY Colorimetry;
    DXGK_DISPLAY_TECHNOLOGY DisplayTechnology;
    DXGK_DISPLAY_USAGE IntendedUsage;
    BYTE Instance;
    DXGK_DISPLAY_DESCRIPTOR_TYPE DescriptorType;
    D3DKMDT_WIRE_FORMAT_AND_PREFERENCE DitheringSupport;
} DXGK_QUERYINTEGRATEDDISPLAYOUT2, *PDXGK_QUERYINTEGRATEDDISPLAYOUT2;
DEFINE_GUID(GUID_DXGKDDI_POWER_VOLTAGE_UP,
0x6131c9ed, 0xb9ec, 0x40b3, 0xa5, 0xe2, 0xc0, 0x61, 0x3e, 0x43, 0x7b, 0x7e);
DEFINE_GUID(GUID_DXGKDDI_POWER_VOLTAGE_DOWN,
0x7f81ce3d, 0x5989, 0x4519, 0x83, 0x94, 0xb4, 0x57, 0xf6, 0x37, 0xba, 0x39);
DEFINE_GUID(GUID_DXGKDDI_POWER_VOLTAGE,
0x78ba81db, 0xf5c, 0x45fd, 0x8f, 0x3, 0xc7, 0xb5, 0xcc, 0xd1, 0xe0, 0xda);
DEFINE_GUID(GUID_DXGKDDI_POWER_CLOCK_UP,
0x8c7fde48, 0xff0b, 0x48ff, 0x93, 0x6b, 0x33, 0x2a, 0xbb, 0x9b, 0xd3, 0xb3);
DEFINE_GUID(GUID_DXGKDDI_POWER_CLOCK_DOWN,
0x611114f3, 0xcb1e, 0x4d0c, 0x8e, 0xe8, 0x87, 0x2e, 0x1f, 0xbd, 0xac, 0xeb);
DEFINE_GUID(GUID_DXGKDDI_POWER_CLOCK,
0x51c6873b, 0x1c29, 0x4c45, 0x82, 0x46, 0x5, 0xe4, 0xd6, 0xd8, 0xd, 0x15);
DEFINE_GUID(GUID_DXGKDDI_POWER_BANDWIDTH_UP,
0x1995dcb1, 0x986e, 0x47ba, 0x9a, 0x73, 0x60, 0xaf, 0x51, 0x11, 0x93, 0x8b);
DEFINE_GUID(GUID_DXGKDDI_POWER_BANDWIDTH_DOWN,
0x97ce1383, 0xef2d, 0x49cb, 0x9b, 0xcf, 0x26, 0xa7, 0x38, 0xf3, 0xce, 0x32);
DEFINE_GUID(GUID_DXGKDDI_POWER_BANDWIDTH,
0x38751bfd, 0x64ba, 0x4962, 0xa5, 0xa9, 0x9f, 0x2e, 0x62, 0x7a, 0x64, 0x3e);
DEFINE_GUID(GUID_DXGKDDI_POWER_MANAGEMENT_PREPARE_TO_START,
0xcba549d4, 0xcf3a, 0x445c, 0x94, 0x68, 0x23, 0x83, 0xfd, 0x52, 0x31, 0x16);
DEFINE_GUID(GUID_DXGKDDI_POWER_MANAGEMENT_STARTED,
0x6c929c1d, 0x7d76, 0x4538, 0x93, 0xad, 0x44, 0x9d, 0xc9, 0xfd, 0xc2, 0x39);
DEFINE_GUID(GUID_DXGKDDI_POWER_MANAGEMENT_STOPPED,
0xa9d9621, 0xbc21, 0x4dd4, 0xa0, 0xfc, 0xd9, 0x76, 0xe4, 0x28, 0xf7, 0x38);
typedef struct _DXGK_POWER_RUNTIME_STATE
{
    ULONGLONG TransitionLatency;
   ULONGLONG ResidencyRequirement;
   ULONG NominalPower;
} DXGK_POWER_RUNTIME_STATE;
typedef enum _DXGK_POWER_COMPONENT_TYPE
{
   DXGK_POWER_COMPONENT_ENGINE = 0,
   DXGK_POWER_COMPONENT_MONITOR = 1,
   DXGK_POWER_COMPONENT_MONITOR_REFRESH = 2,
   DXGK_POWER_COMPONENT_MEMORY = 3,
   DXGK_POWER_COMPONENT_MEMORY_REFRESH = 4,
   DXGK_POWER_COMPONENT_OTHER = 5,
   DXGK_POWER_COMPONENT_D3_TRANSITION = 6,
   DXGK_POWER_COMPONENT_SHARED = 7,
   DXGK_POWER_COMPONENT_MAX = 8,
} DXGK_POWER_COMPONENT_TYPE;
typedef struct _DXGK_POWER_COMPONENT_MAPPING
{
   DXGK_POWER_COMPONENT_TYPE ComponentType;
   union
   {
      struct DXGK_POWER_COMPONENT_ENGINE_DESC
      {
          UINT NodeIndex;
      } EngineDesc;
      struct DXGK_POWER_COMPONENT_MONITOR_REFRESH_DESC
      {
          UINT VidPnSourceID;
      } MonitorRefreshDesc;
      struct DXGK_POWER_COMPONENT_MONITOR_DESC
      {
          UINT VidPnTargetID;
      } MonitorDesc;
      struct DXGK_POWER_COMPONENT_MEMORY_DESC
      {
          UINT SegmentID;
      } MemoryDesc;
      struct DXGK_POWER_COMPONENT_SHARED_DESC
      {
          union
          {
              struct
              {
                  WORD SharedTypeFlag;
                  WORD DriverCustomValueSet;
              };
              UINT SharedType;
          };
      } SharedDesc;
   };
} DXGK_POWER_COMPONENT_MAPPING;
typedef struct _DXGK_POWER_COMPONENT_INDEX
{
    union
    {
        struct
        {
            WORD PhysicalAdapterComponentIndex;
            WORD PhysicalAdapterIndex;
        };
        UINT Value;
    };
} DXGK_POWER_COMPONENT_INDEX;
typedef struct _DXGK_POWER_COMPONENT_FLAGS
{
    union
    {
        struct
        {
            UINT Reserved0 : 1;
            UINT DriverCompletesFStateTransition : 1;
            UINT TransitionTo_F0_OnDx : 1;
            UINT NoDebounce : 1;
            UINT ActiveInD3 : 1;
            UINT Reserved : 27;
        };
        UINT Value;
    };
} DXGK_POWER_COMPONENT_FLAGS;
typedef struct _DXGK_POWER_RUNTIME_COMPONENT
{
    ULONG StateCount;
    DXGK_POWER_RUNTIME_STATE States[DXGK_MAX_F_STATES];
    DXGK_POWER_COMPONENT_MAPPING ComponentMapping;
    DXGK_POWER_COMPONENT_FLAGS Flags;
    GUID ComponentGuid;
    UCHAR ComponentName[DXGK_POWER_COMPONENT_NAME_SIZE];
    ULONG ProviderCount;
    ULONG Providers[DXGK_MAX_POWER_COMPONENT_PROVIDERS];
} DXGK_POWER_RUNTIME_COMPONENT;
typedef struct _DXGK_POWER_P_STATE
{
    ULONG OperatingFrequency;
} DXGK_POWER_P_STATE;
typedef struct _DXGK_POWER_COMPONENT_P_FLAGS
{
    union
    {
        struct
        {
            UINT Reserved : 32;
        };
        UINT Value;
    };
} DXGK_POWER_COMPONENT_P_FLAGS;
typedef struct _DXGK_POWER_P_COMPONENT
{
    ULONG StateCount;
    DXGK_POWER_P_STATE States[DXGK_MAX_P_STATES];
    DXGK_POWER_COMPONENT_P_FLAGS Flags;
} DXGK_POWER_P_COMPONENT;
typedef struct _DXGK_QUERYADAPTERINFOFLAGS
{
    union
    {
        struct
        {
            UINT VirtualMachineData : 1;
            UINT SecureVirtualMachine : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
 } DXGK_QUERYADAPTERINFOFLAGS;
typedef struct _DXGKARG_QUERYADAPTERINFO
{
    DXGK_QUERYADAPTERINFOTYPE Type;
    VOID* pInputData;
    UINT InputDataSize;
    VOID* pOutputData;
    UINT OutputDataSize;
    DXGK_QUERYADAPTERINFOFLAGS Flags;
    HANDLE hKmdProcessHandle;
} DXGKARG_QUERYADAPTERINFO;
typedef _In_ CONST DXGKARG_QUERYADAPTERINFO* IN_CONST_PDXGKARG_QUERYADAPTERINFO;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_QUERYADAPTERINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_QUERYADAPTERINFO(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_QUERYADAPTERINFO pQueryAdapterInfo
    );
typedef struct _DXGKARG_ACQUIRESWIZZLINGRANGE
{
    HANDLE hAllocation;
    UINT PrivateDriverData;
    UINT RangeId;
    UINT SegmentId;
    SIZE_T RangeSize;
    PHYSICAL_ADDRESS CPUTranslatedAddress;
} DXGKARG_ACQUIRESWIZZLINGRANGE;
typedef _Inout_ DXGKARG_ACQUIRESWIZZLINGRANGE* INOUT_PDXGKARG_ACQUIRESWIZZLINGRANGE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_ACQUIRESWIZZLINGRANGE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_ACQUIRESWIZZLINGRANGE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_ACQUIRESWIZZLINGRANGE pAcquireSwizzlingRange
    );
typedef struct _DXGKARG_RELEASESWIZZLINGRANGE
{
    HANDLE hAllocation;
    UINT PrivateDriverData;
    UINT RangeId;
} DXGKARG_RELEASESWIZZLINGRANGE;
typedef _In_ CONST DXGKARG_RELEASESWIZZLINGRANGE* IN_CONST_PDXGKARG_RELEASESWIZZLINGRANGE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RELEASESWIZZLINGRANGE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RELEASESWIZZLINGRANGE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_RELEASESWIZZLINGRANGE pReleaseSwizzlingRange
    );
typedef struct _DXGK_ALLOCATIONINFOFLAGS
{
    union
    {
        struct
        {
            UINT CpuVisible : 1;
            UINT PermanentSysMem : 1;
            UINT Cached : 1;
            UINT Protected : 1;
            UINT ExistingSysMem : 1;
            UINT ExistingKernelSysMem : 1;
            UINT FromEndOfSegment : 1;
            UINT Swizzled : 1;
            UINT Overlay : 1;
            UINT Capture : 1;
            UINT UseAlternateVA : 1;
            UINT SynchronousPaging : 1;
            UINT LinkMirrored : 1;
            UINT LinkInstanced : 1;
            UINT HistoryBuffer : 1;
            UINT AccessedPhysically : 1;
            UINT ExplicitResidencyNotification : 1;
            UINT HardwareProtected : 1;
            UINT CpuVisibleOnDemand : 1;
            UINT DXGK_ALLOC_RESERVED16 : 1;
            UINT DXGK_ALLOC_RESERVED15 : 1;
            UINT DXGK_ALLOC_RESERVED14 : 1;
            UINT DXGK_ALLOC_RESERVED13 : 1;
            UINT DXGK_ALLOC_RESERVED12 : 1;
            UINT DXGK_ALLOC_RESERVED11 : 1;
            UINT DXGK_ALLOC_RESERVED10 : 1;
            UINT DXGK_ALLOC_RESERVED9 : 1;
            UINT DXGK_ALLOC_RESERVED4 : 1;
            UINT DXGK_ALLOC_RESERVED3 : 1;
            UINT DXGK_ALLOC_RESERVED2 : 1;
            UINT DXGK_ALLOC_RESERVED1 : 1;
            UINT DXGK_ALLOC_RESERVED0 : 1;
        };
        UINT Value;
    };
} DXGK_ALLOCATIONINFOFLAGS;
typedef struct _DXGK_ALLOCATIONINFOFLAGS_WDDM2_0
{
    union
    {
        struct
        {
            UINT CpuVisible : 1;
            UINT PermanentSysMem : 1;
            UINT Cached : 1;
            UINT Protected : 1;
            UINT ExistingSysMem : 1;
            UINT ExistingKernelSysMem : 1;
            UINT FromEndOfSegment : 1;
            UINT DisableLargePageMapping : 1;
            UINT Overlay : 1;
            UINT Capture : 1;
            UINT CreateInVpr : 1;
            UINT DXGK_ALLOC_RESERVED17 : 1;
            UINT Reserved02 : 1;
            UINT Reserved03 : 1;
            UINT HistoryBuffer : 1;
            UINT AccessedPhysically : 1;
            UINT ExplicitResidencyNotification : 1;
            UINT HardwareProtected : 1;
            UINT CpuVisibleOnDemand : 1;
            UINT DXGK_ALLOC_RESERVED16 : 1;
            UINT DXGK_ALLOC_RESERVED15 : 1;
            UINT DXGK_ALLOC_RESERVED14 : 1;
            UINT DXGK_ALLOC_RESERVED13 : 1;
            UINT DXGK_ALLOC_RESERVED12 : 1;
            UINT DXGK_ALLOC_RESERVED11 : 1;
            UINT DXGK_ALLOC_RESERVED10 : 1;
            UINT DXGK_ALLOC_RESERVED9 : 1;
            UINT DXGK_ALLOC_RESERVED4 : 1;
            UINT DXGK_ALLOC_RESERVED3 : 1;
            UINT DXGK_ALLOC_RESERVED2 : 1;
            UINT DXGK_ALLOC_RESERVED1 : 1;
            UINT DXGK_ALLOC_RESERVED0 : 1;
        };
        UINT Value;
    };
} DXGK_ALLOCATIONINFOFLAGS_WDDM2_0;
typedef struct _DXGK_ALLOCATIONUSAGEINFO1
{
    union
    {
        struct
        {
            UINT PrivateFormat : 1;
            UINT Swizzled : 1;
            UINT MipMap : 1;
            UINT Cube : 1;
            UINT Volume : 1;
            UINT Vertex : 1;
            UINT Index : 1;
            UINT Reserved : 25;
        };
        UINT Value;
    } Flags;
    union
    {
        D3DDDIFORMAT Format;
        UINT PrivateFormat;
    };
    UINT SwizzledFormat;
    UINT ByteOffset;
    UINT Width;
    UINT Height;
    UINT Pitch;
    UINT Depth;
    UINT SlicePitch;
} DXGK_ALLOCATIONUSAGEINFO1;
typedef struct _DXGK_ALLOCATIONUSAGEHINT
{
    UINT Version;
    DXGK_ALLOCATIONUSAGEINFO1 v1;
} DXGK_ALLOCATIONUSAGEHINT;
typedef struct _DXGK_ALLOCATIONINFO
{
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    UINT Alignment;
    SIZE_T Size;
    SIZE_T PitchAlignedSize;
    DXGK_SEGMENTBANKPREFERENCE HintedBank;
    DXGK_SEGMENTPREFERENCE PreferredSegment;
    UINT SupportedReadSegmentSet;
    UINT SupportedWriteSegmentSet;
    UINT EvictionSegmentSet;
    union
    {
        UINT MaximumRenamingListLength;
        UINT PhysicalAdapterIndex;
    };
    HANDLE hAllocation;
    union
    {
        DXGK_ALLOCATIONINFOFLAGS Flags;
        DXGK_ALLOCATIONINFOFLAGS_WDDM2_0 FlagsWddm2;
    };
    DXGK_ALLOCATIONUSAGEHINT* pAllocationUsageHint;
    UINT AllocationPriority;
} DXGK_ALLOCATIONINFO;
typedef struct _DXGK_CREATEALLOCATIONFLAGS
{
    union
    {
        struct
        {
            UINT Resource : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_CREATEALLOCATIONFLAGS;
typedef struct _DXGKARG_CREATEALLOCATION
{
    CONST VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    UINT NumAllocations;
    DXGK_ALLOCATIONINFO* pAllocationInfo;
    HANDLE hResource;
    DXGK_CREATEALLOCATIONFLAGS Flags;
} DXGKARG_CREATEALLOCATION;
typedef _Inout_ DXGKARG_CREATEALLOCATION* INOUT_PDXGKARG_CREATEALLOCATION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATEALLOCATION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEALLOCATION(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_CREATEALLOCATION pCreateAllocation
    );
typedef struct _DXGK_CREATECONTEXTALLOCATIONFLAGS
{
    union
    {
        struct
        {
            UINT SharedAcrossContexts : 1;
            UINT MapGpuVirtualAddress : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGK_CREATECONTEXTALLOCATIONFLAGS;
typedef struct _DXGKARGCB_CREATECONTEXTALLOCATION
{
    DXGK_CREATECONTEXTALLOCATIONFLAGS ContextAllocationFlags;
    HANDLE hAdapter;
    HANDLE hDevice;
    HANDLE hContext;
    HANDLE hDriverAllocation;
    SIZE_T Size;
    UINT Alignment;
    UINT SupportedSegmentSet;
    UINT EvictionSegmentSet;
    DXGK_SEGMENTPREFERENCE PreferredSegment;
    DXGK_SEGMENTBANKPREFERENCE HintedBank;
    DXGK_ALLOCATIONINFOFLAGS Flags;
    HANDLE hAllocation;
    UINT PhysicalAdapterIndex;
} DXGKARGCB_CREATECONTEXTALLOCATION;
typedef _Inout_ DXGKARGCB_CREATECONTEXTALLOCATION* INOUT_PDXGKARGCB_CREATECONTEXTALLOCATION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_CREATECONTEXTALLOCATION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_CREATECONTEXTALLOCATION)(
    INOUT_PDXGKARGCB_CREATECONTEXTALLOCATION
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_DESTROYCONTEXTALLOCATION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_DESTROYCONTEXTALLOCATION)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_HANDLE hAllocation
    );
typedef struct _DXGK_DESCRIBEALLOCATIONFLAGS
{
    union
    {
        struct
        {
            UINT CheckDisplayMode : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_DESCRIBEALLOCATIONFLAGS;
typedef struct _DXGKARG_DESCRIBEALLOCATION
{
    HANDLE hAllocation;
    UINT Width;
    UINT Height;
    D3DDDIFORMAT Format;
    D3DDDI_MULTISAMPLINGMETHOD MultisampleMethod;
    D3DDDI_RATIONAL RefreshRate;
    UINT PrivateDriverFormatAttribute;
    DXGK_DESCRIBEALLOCATIONFLAGS Flags;
    D3DDDI_ROTATION Rotation;
} DXGKARG_DESCRIBEALLOCATION;
typedef _Inout_ DXGKARG_DESCRIBEALLOCATION* INOUT_PDXGKARG_DESCRIBEALLOCATION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESCRIBEALLOCATION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESCRIBEALLOCATION(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_DESCRIBEALLOCATION pDescribeAllocation
    );
typedef struct _DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA
{
    D3DKMDT_STANDARDALLOCATION_TYPE StandardAllocationType;
    union
    {
        D3DKMDT_SHAREDPRIMARYSURFACEDATA* pCreateSharedPrimarySurfaceData;
        D3DKMDT_SHADOWSURFACEDATA* pCreateShadowSurfaceData;
        D3DKMDT_STAGINGSURFACEDATA* pCreateStagingSurfaceData;
        D3DKMDT_GDISURFACEDATA* pCreateGdiSurfaceData;
        D3DKMDT_VIRTUALGPUSURFACEDATA* pCreateVirtualGpuSurfaceData;
    };
    VOID* pAllocationPrivateDriverData;
    UINT AllocationPrivateDriverDataSize;
    VOID* pResourcePrivateDriverData;
    UINT ResourcePrivateDriverDataSize;
    UINT PhysicalAdapterIndex;
} DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA;
typedef _Inout_ DXGKARG_GETSTANDARDALLOCATIONDRIVERDATA* INOUT_PDXGKARG_GETSTANDARDALLOCATIONDRIVERDATA;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_GETSTANDARDALLOCATIONDRIVERDATA)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_GETSTANDARDALLOCATIONDRIVERDATA(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_GETSTANDARDALLOCATIONDRIVERDATA pGetStandardAllocationDriverData
    );
typedef struct _DXGK_DESTROYALLOCATIONFLAGS
{
    union
    {
        struct
        {
            UINT DestroyResource : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_DESTROYALLOCATIONFLAGS;
typedef struct _DXGKARG_DESTROYALLOCATION
{
    UINT NumAllocations;
    CONST HANDLE* pAllocationList;
    HANDLE hResource;
    DXGK_DESTROYALLOCATIONFLAGS Flags;
} DXGKARG_DESTROYALLOCATION;
typedef _In_ CONST DXGKARG_DESTROYALLOCATION* IN_CONST_PDXGKARG_DESTROYALLOCATION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYALLOCATION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYALLOCATION(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_DESTROYALLOCATION pDestroyAllocation
    );
typedef struct _DXGK_PATCHFLAGS
{
    union
    {
        struct
        {
            UINT Paging : 1;
            UINT Present : 1;
            UINT RedirectedPresent : 1;
            UINT NullRendering : 1;
            UINT Reserved :28;
        };
        UINT Value;
    };
} DXGK_PATCHFLAGS;
typedef struct _DXGKARG_PATCH
{
    union
    {
        HANDLE hDevice;
        HANDLE hContext;
    };
    UINT DmaBufferSegmentId;
    PHYSICAL_ADDRESS DmaBufferPhysicalAddress;
    VOID* pDmaBuffer;
    UINT DmaBufferSize;
    UINT DmaBufferSubmissionStartOffset;
    UINT DmaBufferSubmissionEndOffset;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    UINT DmaBufferPrivateDataSubmissionStartOffset;
    UINT DmaBufferPrivateDataSubmissionEndOffset;
    CONST DXGK_ALLOCATIONLIST* pAllocationList;
    UINT AllocationListSize;
    CONST D3DDDI_PATCHLOCATIONLIST* pPatchLocationList;
    UINT PatchLocationListSize;
    UINT PatchLocationListSubmissionStart;
    UINT PatchLocationListSubmissionLength;
    UINT SubmissionFenceId;
    DXGK_PATCHFLAGS Flags;
    UINT EngineOrdinal;
} DXGKARG_PATCH;
typedef _In_ CONST DXGKARG_PATCH* IN_CONST_PDXGKARG_PATCH;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_PATCH)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_PATCH(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_PATCH pPatch
    );
typedef struct _DXGK_SUBMITCOMMANDFLAGS
{
    union
    {
        struct
        {
            UINT Paging : 1;
            UINT Present : 1;
            UINT RedirectedPresent : 1;
            UINT NullRendering : 1;
            UINT Flip : 1;
            UINT FlipWithNoWait : 1;
            UINT ContextSwitch : 1;
            UINT Resubmission : 1;
            UINT VirtualMachineData : 1;
            UINT Reserved :23;
        };
        UINT Value;
    };
} DXGK_SUBMITCOMMANDFLAGS;
typedef struct _DXGKARG_SUBMITCOMMAND
{
    union
    {
        HANDLE hDevice;
        HANDLE hContext;
    };
    UINT DmaBufferSegmentId;
    PHYSICAL_ADDRESS DmaBufferPhysicalAddress;
    UINT DmaBufferSize;
    UINT DmaBufferSubmissionStartOffset;
    UINT DmaBufferSubmissionEndOffset;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    UINT DmaBufferPrivateDataSubmissionStartOffset;
    UINT DmaBufferPrivateDataSubmissionEndOffset;
    UINT SubmissionFenceId;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    DXGK_SUBMITCOMMANDFLAGS Flags;
    UINT EngineOrdinal;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferVirtualAddress;
    UINT NodeOrdinal;
} DXGKARG_SUBMITCOMMAND;
typedef _In_ CONST DXGKARG_SUBMITCOMMAND* IN_CONST_PDXGKARG_SUBMITCOMMAND;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SUBMITCOMMAND)
    _IRQL_requires_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SUBMITCOMMAND(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SUBMITCOMMAND pSubmitCommand
    );
typedef struct _DXGK_PREEMPTCOMMANDFLAGS
{
    union
    {
        struct
        {
            UINT Reserved :32;
        };
        UINT Value;
    };
} DXGK_PREEMPTCOMMANDFLAGS;
typedef struct _DXGKARG_PREEMPTCOMMAND
{
    UINT PreemptionFenceId;
    UINT NodeOrdinal;
    UINT EngineOrdinal;
    DXGK_PREEMPTCOMMANDFLAGS Flags;
} DXGKARG_PREEMPTCOMMAND;
typedef _In_ CONST DXGKARG_PREEMPTCOMMAND* IN_CONST_PDXGKARG_PREEMPTCOMMAND;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_PREEMPTCOMMAND)
    _IRQL_requires_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_PREEMPTCOMMAND(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_PREEMPTCOMMAND pPreemptCommand
    );
typedef struct _DXGKARG_CANCELCOMMAND
{
    HANDLE hContext;
    VOID* pDmaBuffer;
    UINT DmaBufferSize;
    UINT DmaBufferSubmissionStartOffset;
    UINT DmaBufferSubmissionEndOffset;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    UINT DmaBufferPrivateDataSubmissionStartOffset;
    UINT DmaBufferPrivateDataSubmissionEndOffset;
    CONST DXGK_ALLOCATIONLIST* pAllocationList;
    UINT AllocationListSize;
    CONST D3DDDI_PATCHLOCATIONLIST* pPatchLocationList;
    UINT PatchLocationListSize;
    UINT PatchLocationListSubmissionStart;
    UINT PatchLocationListSubmissionLength;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferVirtualAddress;
    UINT DmaBufferUmdPrivateDataSize;
} DXGKARG_CANCELCOMMAND;
typedef _In_ CONST DXGKARG_CANCELCOMMAND* IN_CONST_PDXGKARG_CANCELCOMMAND;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CANCELCOMMAND)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CANCELCOMMAND(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_CANCELCOMMAND pCancelCommand
    );
typedef struct _DXGKARG_QUERYCURRENTFENCE
{
    UINT CurrentFence;
    UINT NodeOrdinal;
    UINT EngineOrdinal;
} DXGKARG_QUERYCURRENTFENCE;
typedef _Inout_ DXGKARG_QUERYCURRENTFENCE* INOUT_PDXGKARG_QUERYCURRENTFENCE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_QUERYCURRENTFENCE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_QUERYCURRENTFENCE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_QUERYCURRENTFENCE pCurrentFence
    );
typedef _In_ CONST DXGK_INTERRUPT_TYPE IN_CONST_DXGK_INTERRUPT_TYPE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CONTROLINTERRUPT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CONTROLINTERRUPT(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_DXGK_INTERRUPT_TYPE InterruptType,
    IN_BOOLEAN EnableInterrupt
    );
typedef enum _DXGK_INTERRUPT_STATE
{
    DXGK_INTERRUPT_ENABLE = 0,
    DXGK_INTERRUPT_DISABLE = 1,
} DXGK_INTERRUPT_STATE;
typedef enum _DXGK_CRTC_VSYNC_STATE
{
    DXGK_VSYNC_ENABLE = 0,
    DXGK_VSYNC_DISABLE_KEEP_PHASE = 1,
    DXGK_VSYNC_DISABLE_NO_PHASE = 2,
} DXGK_CRTC_VSYNC_STATE;
typedef struct _DXGKARG_CONTROLINTERRUPT2
{
  DXGK_INTERRUPT_TYPE InterruptType;
  union
  {
      DXGK_INTERRUPT_STATE InterruptState;
      DXGK_CRTC_VSYNC_STATE CrtcVsyncState;
  };
} DXGKARG_CONTROLINTERRUPT2;
typedef _In_ CONST DXGKARG_CONTROLINTERRUPT2 IN_CONST_DXGKARG_CONTROLINTERRUPT2;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CONTROLINTERRUPT2)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CONTROLINTERRUPT2(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_DXGKARG_CONTROLINTERRUPT2 InterruptControl
    );
typedef enum _DXGK_BUILDPAGINGBUFFER_OPERATION
{
    DXGK_OPERATION_TRANSFER = 0,
    DXGK_OPERATION_FILL = 1,
    DXGK_OPERATION_DISCARD_CONTENT = 2,
    DXGK_OPERATION_READ_PHYSICAL = 3,
    DXGK_OPERATION_WRITE_PHYSICAL = 4,
    DXGK_OPERATION_MAP_APERTURE_SEGMENT = 5,
    DXGK_OPERATION_UNMAP_APERTURE_SEGMENT = 6,
    DXGK_OPERATION_SPECIAL_LOCK_TRANSFER = 7,
    DXGK_OPERATION_VIRTUAL_TRANSFER = 8,
    DXGK_OPERATION_VIRTUAL_FILL = 9,
    DXGK_OPERATION_INIT_CONTEXT_RESOURCE = 10,
    DXGK_OPERATION_UPDATE_PAGE_TABLE = 11,
    DXGK_OPERATION_FLUSH_TLB = 12,
    DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION = 13,
    DXGK_OPERATION_COPY_PAGE_TABLE_ENTRIES = 14,
    DXGK_OPERATION_NOTIFY_RESIDENCY = 15,
    DXGK_OPERATION_SIGNAL_MONITORED_FENCE = 16,
} DXGK_BUILDPAGINGBUFFER_OPERATION;
typedef struct _DXGK_TRANSFERFLAGS
{
    union
    {
        struct
        {
            UINT Swizzle : 1;
            UINT Unswizzle : 1;
            UINT AllocationIsIdle : 1;
            UINT TransferStart : 1;
            UINT TransferEnd : 1;
            UINT Reserved :27;
        };
        UINT Value;
    };
} DXGK_TRANSFERFLAGS;
typedef struct _DXGK_DISCARDCONTENTFLAGS
{
    union
    {
        struct
        {
            UINT AllocationIsIdle : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_DISCARDCONTENTFLAGS;
typedef struct _DXGK_MAPAPERTUREFLAGS
{
    union
    {
        struct
        {
            UINT CacheCoherent : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_MAPAPERTUREFLAGS;
typedef struct _DXGK_BUILDPAGINGBUFFER_COPY_RANGE
{
    UINT NumPageTableEntries;
    D3DGPU_VIRTUAL_ADDRESS SrcPageTableAddress;
    D3DGPU_VIRTUAL_ADDRESS DstPageTableAddress;
    UINT SrcStartPteIndex;
    UINT DstStartPteIndex;
} DXGK_BUILDPAGINGBUFFER_COPY_RANGE;
typedef struct _DXGK_BUILDPAGINGBUFFER_FLUSHTLB
{
    D3DGPU_PHYSICAL_ADDRESS RootPageTableAddress;
    HANDLE hProcess;
    D3DGPU_VIRTUAL_ADDRESS StartVirtualAddress;
    D3DGPU_VIRTUAL_ADDRESS EndVirtualAddress;
} DXGK_BUILDPAGINGBUFFER_FLUSHTLB;
typedef struct _DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE
{
    UINT PageTableLevel;
    HANDLE hAllocation;
    DXGK_PAGETABLEUPDATEADDRESS PageTableAddress;
    DXGK_PTE* pPageTableEntries;
    UINT StartIndex;
    UINT NumPageTableEntries;
    UINT Reserved0;
    DXGK_UPDATEPAGETABLEFLAGS Flags;
    UINT64 DriverProtection;
    UINT64 AllocationOffsetInBytes;
    HANDLE hProcess;
    DXGK_PAGETABLEUPDATEMODE UpdateMode;
    DXGK_PTE* pPageTableEntries64KB;
    D3DGPU_VIRTUAL_ADDRESS FirstPteVirtualAddress;
} DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE;
typedef struct _DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL
{
    HANDLE hAllocation;
    UINT64 AllocationOffsetInBytes;
    UINT64 FillSizeInBytes;
    UINT FillPattern;
    D3DGPU_VIRTUAL_ADDRESS DestinationVirtualAddress;
} DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL;
typedef enum _DXGK_MEMORY_TRANSFER_DIRECTION
{
    DXGK_MEMORY_TRANSFER_LOCAL_TO_SYSTEM = 0,
    DXGK_MEMORY_TRANSFER_SYSTEM_TO_LOCAL = 1,
    DXGK_MEMORY_TRANSFER_LOCAL_TO_LOCAL = 2,
} DXGK_MEMORY_TRANSFER_DIRECTION;
typedef struct _DXGK_TRANSFERVIRTUALFLAGS
{
   union
   {
        struct
        {
            UINT Src64KBPages : 1;
            UINT Dst64KBPages : 1;
            UINT Reserved : 30;
        };
        UINT Flags;
   };
} DXGK_TRANSFERVIRTUALFLAGS;
typedef struct _DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL
{
    HANDLE hAllocation;
    UINT64 AllocationOffsetInBytes;
    UINT64 TransferSizeInBytes;
    D3DGPU_VIRTUAL_ADDRESS SourceVirtualAddress;
    D3DGPU_VIRTUAL_ADDRESS DestinationVirtualAddress;
    D3DGPU_VIRTUAL_ADDRESS SourcePageTable;
    DXGK_MEMORY_TRANSFER_DIRECTION TransferDirection;
    DXGK_TRANSFERVIRTUALFLAGS Flags;
    D3DGPU_VIRTUAL_ADDRESS DestinationPageTable;
} DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL;
typedef struct _DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY
{
    HANDLE hAllocation;
    D3DGPU_PHYSICAL_ADDRESS PhysicalAddress;
    union
    {
        UINT Resident : 1;
        UINT Reserved : 31;
    };
} DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY;
typedef struct _DXGK_BUILDPAGINGBUFFER_COPYPAGETABLEENTRIES
{
    UINT NumRanges;
    DXGK_BUILDPAGINGBUFFER_COPY_RANGE* pRanges;
} DXGK_BUILDPAGINGBUFFER_COPYPAGETABLEENTRIES;
typedef struct _DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION
{
    D3DGPU_VIRTUAL_ADDRESS ContextAllocation;
    UINT64 ContextAllocationSize;
    PVOID pDriverPrivateData;
    UINT DriverPrivateDataSize;
} DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION;
typedef struct _DXGK_BUILDPAGINGBUFFER_SIGNALMONITOREDFENCE
{
    D3DGPU_VIRTUAL_ADDRESS MonitoredFenceGpuVa;
    UINT64 MonitoredFenceValue;
} DXGK_BUILDPAGINGBUFFER_SIGNALMONITOREDFENCE;
typedef struct _DXGKARG_BUILDPAGINGBUFFER
{
    VOID* pDmaBuffer;
    UINT DmaSize;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    DXGK_BUILDPAGINGBUFFER_OPERATION Operation;
    UINT MultipassOffset;
    union
    {
        struct
        {
            HANDLE hAllocation;
            UINT TransferOffset;
            SIZE_T TransferSize;
            struct
            {
                UINT SegmentId;
                union
                {
                    LARGE_INTEGER SegmentAddress;
                    MDL* pMdl;
                };
            } Source;
            struct
            {
                UINT SegmentId;
                union
                {
                    LARGE_INTEGER SegmentAddress;
                    MDL* pMdl;
                };
            } Destination;
            DXGK_TRANSFERFLAGS Flags;
            UINT MdlOffset;
        } Transfer;
        struct
        {
            HANDLE hAllocation;
            SIZE_T FillSize;
            UINT FillPattern;
            struct
            {
                UINT SegmentId;
                LARGE_INTEGER SegmentAddress;
            } Destination;
        } Fill;
        struct
        {
            HANDLE hAllocation;
            DXGK_DISCARDCONTENTFLAGS Flags;
            UINT SegmentId;
            PHYSICAL_ADDRESS SegmentAddress;
        } DiscardContent;
        struct
        {
            UINT SegmentId;
            PHYSICAL_ADDRESS PhysicalAddress;
        } ReadPhysical;
        struct
        {
            UINT SegmentId;
            PHYSICAL_ADDRESS PhysicalAddress;
        } WritePhysical;
        struct
        {
            HANDLE hDevice;
            HANDLE hAllocation;
            UINT SegmentId;
            SIZE_T OffsetInPages;
            SIZE_T NumberOfPages;
            PMDL pMdl;
            DXGK_MAPAPERTUREFLAGS Flags;
            ULONG MdlOffset;
        } MapApertureSegment;
        struct
        {
            HANDLE hDevice;
            HANDLE hAllocation;
            UINT SegmentId;
            SIZE_T OffsetInPages;
            SIZE_T NumberOfPages;
            PHYSICAL_ADDRESS DummyPage;
        } UnmapApertureSegment;
        struct
        {
            HANDLE hAllocation;
            UINT TransferOffset;
            SIZE_T TransferSize;
            struct
            {
                UINT SegmentId;
                union
                {
                    LARGE_INTEGER SegmentAddress;
                    MDL* pMdl;
                };
            } Source;
            struct
            {
                UINT SegmentId;
                union
                {
                    LARGE_INTEGER SegmentAddress;
                    MDL* pMdl;
                };
            } Destination;
            DXGK_TRANSFERFLAGS Flags;
            UINT SwizzlingRangeId;
            UINT SwizzlingRangeData;
        } SpecialLockTransfer;
        struct
        {
            HANDLE hAllocation;
            struct
            {
                UINT SegmentId;
                union
                {
                    LARGE_INTEGER SegmentAddress;
                    MDL* pMdl;
                };
                PVOID VirtualAddress;
                D3DGPU_VIRTUAL_ADDRESS GpuVirtualAddress;
            } Destination;
        } InitContextResource;
        DXGK_BUILDPAGINGBUFFER_TRANSFERVIRTUAL TransferVirtual;
        DXGK_BUILDPAGINGBUFFER_FILLVIRTUAL FillVirtual;
        DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE UpdatePageTable;
        DXGK_BUILDPAGINGBUFFER_FLUSHTLB FlushTlb;
        DXGK_BUILDPAGINGBUFFER_COPYPAGETABLEENTRIES CopyPageTableEntries;
        DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION UpdateContextAllocation;
        DXGK_BUILDPAGINGBUFFER_NOTIFYRESIDENCY NotifyResidency;
        DXGK_BUILDPAGINGBUFFER_SIGNALMONITOREDFENCE SignalMonitoredFence;
        struct
        {
            UINT Reserved[64];
        } Reserved;
    };
    HANDLE hSystemContext;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferGpuVirtualAddress;
    UINT DmaBufferWriteOffset;
} DXGKARG_BUILDPAGINGBUFFER;
typedef _In_ DXGKARG_BUILDPAGINGBUFFER* IN_PDXGKARG_BUILDPAGINGBUFFER;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_BUILDPAGINGBUFFER)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_BUILDPAGINGBUFFER(
    IN_CONST_HANDLE hAdapter,
    IN_PDXGKARG_BUILDPAGINGBUFFER pBuildPagingBuffer
    );
typedef struct _DXGKARG_SETROOTPAGETABLE
{
   HANDLE hContext;
   D3DGPU_PHYSICAL_ADDRESS Address;
   UINT NumEntries;
} DXGKARG_SETROOTPAGETABLE;
typedef _In_ CONST DXGKARG_SETROOTPAGETABLE* IN_CONST_PDXGKARG_SETROOTPAGETABLE;
typedef
    _Function_class_DXGK_(DXGKDDI_SETROOTPAGETABLE)
    _IRQL_requires_(PASSIVE_LEVEL)
VOID
APIENTRY
DXGKDDI_SETROOTPAGETABLE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETROOTPAGETABLE pSetPageTable
    );
typedef struct _DXGKARG_GETROOTPAGETABLESIZE
{
    UINT NumberOfPte;
    UINT PhysicalAdapterIndex;
} DXGKARG_GETROOTPAGETABLESIZE;
typedef _Inout_ DXGKARG_GETROOTPAGETABLESIZE* INOUT_PDXGKARG_GETROOTPAGETABLESIZE;
typedef
    _Function_class_DXGK_(DXGKDDI_GETROOTPAGETABLESIZE)
    _IRQL_requires_(PASSIVE_LEVEL)
SIZE_T
APIENTRY
DXGKDDI_GETROOTPAGETABLESIZE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_GETROOTPAGETABLESIZE pArgs
    );
typedef struct _DXGK_CREATEPROCESSFLAGS
{
    union
    {
        struct
        {
            UINT SystemProcess : 1;
            UINT GdiProcess : 1;
            UINT VirtualMachineProcess : 1;
            UINT VirtualMachineWorkerProcess : 1;
            UINT SessionIsolatedContainer : 1;
            UINT Reserved : 27;
        };
        UINT Value;
    };
} DXGK_CREATEPROCESSFLAGS;
typedef struct _DXGKARG_CREATEPROCESS
{
    HANDLE hDxgkProcess;
    HANDLE hKmdProcess;
    DXGK_CREATEPROCESSFLAGS Flags;
    UINT NumPasid;
    _Field_size_(NumPasid)
    ULONG* pPasid;
    HANDLE hKmdVmWorkerProcess;
    UINT ProcessNameLength;
    _Field_size_(ProcessNameLength)
    WCHAR* pProcessName;
} DXGKARG_CREATEPROCESS;
typedef _Inout_ DXGKARG_CREATEPROCESS* INOUT_PDXGKARG_CREATEPROCESS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATEPROCESS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEPROCESS(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_CREATEPROCESS pArgs
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYPROCESS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYPROCESS(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_HANDLE hKmdProcess
    );
typedef struct _DXGKARG_SUBMITCOMMANDVIRTUAL
{
    HANDLE hContext;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferVirtualAddress;
    UINT DmaBufferSize;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    UINT DmaBufferUmdPrivateDataSize;
    UINT SubmissionFenceId;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    DXGK_SUBMITCOMMANDFLAGS Flags;
    UINT EngineOrdinal;
    UINT NodeOrdinal;
} DXGKARG_SUBMITCOMMANDVIRTUAL;
typedef _In_ CONST DXGKARG_SUBMITCOMMANDVIRTUAL* IN_CONST_PDXGKARG_SUBMITCOMMANDVIRTUAL;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SUBMITCOMMANDVIRTUAL)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SUBMITCOMMANDVIRTUAL(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SUBMITCOMMANDVIRTUAL pSubmitCommand
    );
typedef struct _DXGKARG_SUBMITCOMMANDTOHWQUEUE
{
    HANDLE hHwQueue;
    UINT64 HwQueueProgressFenceId;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferVirtualAddress;
    UINT DmaBufferSize;
    UINT DmaBufferPrivateDataSize;
    _Field_size_bytes_ (DmaBufferPrivateDataSize)
    VOID* pDmaBufferPrivateData;
    DXGK_SUBMITCOMMANDFLAGS Flags;
    D3DGPU_VIRTUAL_ADDRESS HwQueueProgressFenceGpuVa;
    VOID* HwQueueProgressFenceCpuVa;
} DXGKARG_SUBMITCOMMANDTOHWQUEUE;
typedef _In_ CONST DXGKARG_SUBMITCOMMANDTOHWQUEUE* IN_CONST_PDXGKARG_SUBMITCOMMANDTOHWQUEUE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SUBMITCOMMANDTOHWQUEUE)
    _IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SUBMITCOMMANDTOHWQUEUE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SUBMITCOMMANDTOHWQUEUE pSubmitCommandToHwQueue
    );
typedef struct _DXGKARG_SWITCHTOHWCONTEXTLIST
{
    HANDLE hHwContextFirst;
    HANDLE hHwContextSecond;
    UINT NodeOrdinal;
    UINT EngineOrdinal;
} DXGKARG_SWITCHTOHWCONTEXTLIST;
typedef _In_ CONST DXGKARG_SWITCHTOHWCONTEXTLIST* IN_CONST_PDXGKARG_SWITCHTOHWCONTEXTLIST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SWITCHTOHWCONTEXTLIST)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SWITCHTOHWCONTEXTLIST(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SWITCHTOHWCONTEXTLIST pHwContextList
    );
typedef struct _DXGK_UPDATEHWCONTEXTSTATE_FLAGS
{
    union
    {
        struct
        {
            UINT Suspended : 1;
            UINT InterruptOnSwitchCompletion : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGK_UPDATEHWCONTEXTSTATE_FLAGS;
typedef struct _DXGKARG_UPDATEHWCONTEXTSTATE
{
    HANDLE hHwContext;
    UINT64 ContextSwitchFence;
    UINT Priority;
    DXGK_UPDATEHWCONTEXTSTATE_FLAGS Flags;
} DXGKARG_UPDATEHWCONTEXTSTATE;
typedef _In_ CONST DXGKARG_UPDATEHWCONTEXTSTATE* IN_CONST_PDXGKARG_UPDATEHWCONTEXTSTATE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_UPDATEHWCONTEXTSTATE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_UPDATEHWCONTEXTSTATE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_UPDATEHWCONTEXTSTATE pUpdateHwContextState
    );
typedef enum _DXGK_SCHEDULING_LOG_OPERATION
{
    DXGK_SCHEDULING_LOG_OPERATION_CONTEXT_STATE_CHANGE = 0
} DXGK_SCHEDULING_LOG_OPERATION;
typedef enum _DXGK_SCHEDULING_LOG_CONTEXT_STATE
{
    DXGK_SCHEDULING_LOG_CONTEXT_STATE_IDLE = 0,
    DXGK_SCHEDULING_LOG_CONTEXT_STATE_RUNNING = 1,
    DXGK_SCHEDULING_LOG_CONTEXT_STATE_READY = 2,
    DXGK_SCHEDULING_LOG_CONTEXT_STATE_READY_STANDBY = 3,
} DXGK_SCHEDULING_LOG_CONTEXT_STATE;
typedef struct _DXGK_SCHEDULING_LOG_CONTEXT_STATE_CHANGE
{
    HANDLE hKmdContext;
    DXGK_SCHEDULING_LOG_CONTEXT_STATE newContextState;
} DXGK_SCHEDULING_LOG_CONTEXT_STATE_CHANGE;
typedef struct _DXGK_SCHEDULING_LOG_HEADER
{
    union
    {
        struct
        {
            UINT32 FirstFreeEntryIndex;
            UINT32 WraparoundCount;
        };
        ULARGE_INTEGER AtomicWraparoundAndEntryIndex;
    };
    UINT64 NumberOfEntries;
    UINT64 Reserved[2];
} DXGK_SCHEDULING_LOG_HEADER;
typedef struct _DXGK_SCHEDULING_LOG_ENTRY
{
    UINT64 GpuTimeStamp;
    UINT OperationType : 32;
    UINT ReservedOperationTypeBits: 32;
    union
    {
        DXGK_SCHEDULING_LOG_CONTEXT_STATE_CHANGE ContextStateChange;
        UINT64 ReservedOperationData[2];
    };
} DXGK_SCHEDULING_LOG_ENTRY;
typedef struct _DXGK_SCHEDULING_LOG_BUFFER
{
    DXGK_SCHEDULING_LOG_HEADER Header;
    _Field_size_(Header.NumberOfEntries)
    DXGK_SCHEDULING_LOG_ENTRY Entries[1];
} DXGK_SCHEDULING_LOG_BUFFER;
typedef struct _DXGKARG_SETSCHEDULINGLOGBUFFER
{
    UINT NodeOrdinal;
    UINT EngineOrdinal;
    UINT NumberOfEntries;
    _Field_size_bytes_(32 + 32 * NumberOfEntries)
    DXGK_SCHEDULING_LOG_BUFFER* LogBufferCpuVa;
    D3DGPU_VIRTUAL_ADDRESS LogBufferGpuVa;
    _Field_range_(0, NumberOfEntries - 1)
    UINT InterruptEntry;
} DXGKARG_SETSCHEDULINGLOGBUFFER;
typedef _In_ CONST DXGKARG_SETSCHEDULINGLOGBUFFER* IN_CONST_PDXGKARG_SETSCHEDULINGLOGBUFFER;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETSCHEDULINGLOGBUFFER)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETSCHEDULINGLOGBUFFER(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETSCHEDULINGLOGBUFFER pSetSchedulingLogBuffer
    );
typedef enum _DXGK_SCHEDULING_PRIORITY_BAND
{
    DXGK_SCHEDULING_PRIORITY_BAND_IDLE = 0,
    DXGK_SCHEDULING_PRIORITY_BAND_NORMAL = 1,
    DXGK_SCHEDULING_PRIORITY_BAND_FOCUS = 2,
    DXGK_SCHEDULING_PRIORITY_BAND_REALTIME = 3,
    DXGK_SCHEDULING_PRIORITY_BAND_COUNT = 4
} DXGK_SCHEDULING_PRIORITY_BAND;
typedef struct _DXGKARG_SETUPPRIORITYBANDS
{
    UINT64 gracePeriodForBand[DXGK_SCHEDULING_PRIORITY_BAND_COUNT];
    UINT64 processQuantumForBand[DXGK_SCHEDULING_PRIORITY_BAND_COUNT];
    UINT64 processGracePeriodForBand[DXGK_SCHEDULING_PRIORITY_BAND_COUNT];
    UINT targetNormalBandPercentage;
} DXGKARG_SETUPPRIORITYBANDS;
typedef _In_ CONST DXGKARG_SETUPPRIORITYBANDS* IN_CONST_PDXGKARG_SETUPPRIORITYBANDS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETUPPRIORITYBANDS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETUPPRIORITYBANDS(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETUPPRIORITYBANDS pSetupPriorityBands
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_NOTIFYFOCUSPRESENT)
    _IRQL_requires_min_(PASSIVE_LEVEL)
    _IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_NOTIFYFOCUSPRESENT(
    IN_CONST_HANDLE hAdapter
    );
typedef struct _DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES
{
    HANDLE hContext;
    DXGK_SCHEDULING_PRIORITY_BAND priorityBand;
    INT realtimeBandPriorityLevel;
    INT inProcessPriority;
    UINT64 quantum;
    UINT64 gracePeriodSamePriority;
    UINT64 gracePeriodLowerPriority;
} DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES;
typedef _In_ CONST DXGKARG_SETCONTEXTSCHEDULINGPROPERTIES* IN_CONST_PDXGKARG_SETCONTEXTSCHEDULINGPROPERTIES;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETCONTEXTSCHEDULINGPROPERTIES)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETCONTEXTSCHEDULINGPROPERTIES(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETCONTEXTSCHEDULINGPROPERTIES pSetContextSchedulingProperties
    );
typedef struct _DXGKARG_SUSPENDCONTEXT
{
    HANDLE hContext;
    UINT64 contextSuspendFence;
} DXGKARG_SUSPENDCONTEXT;
typedef _In_ CONST DXGKARG_SUSPENDCONTEXT* IN_CONST_PDXGKARG_SUSPENDCONTEXT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SUSPENDCONTEXT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SUSPENDCONTEXT(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SUSPENDCONTEXT pSuspendContext
    );
typedef struct _DXGKARG_RESUMECONTEXT
{
    HANDLE hContext;
} DXGKARG_RESUMECONTEXT;
typedef _In_ CONST DXGKARG_RESUMECONTEXT* IN_CONST_PDXGKARG_RESUMECONTEXT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RESUMECONTEXT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RESUMECONTEXT(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_RESUMECONTEXT pResumeContext
    );
typedef struct _DXGK_VIRTUALMACHINEDATAFLAGS
{
    union
    {
        struct
        {
            UINT SecureVirtualMachine : 1;
        };
        UINT Value;
    };
} DXGK_VIRTUALMACHINEDATAFLAGS;
typedef struct _DXGKARG_SETVIRTUALMACHINEDATA
{
    HANDLE hKmdVmWorkerProcess;
    GUID* pVmGuid;
    DXGK_VIRTUALMACHINEDATAFLAGS Flags;
} DXGKARG_SETVIRTUALMACHINEDATA;
typedef _In_ CONST DXGKARG_SETVIRTUALMACHINEDATA* IN_CONST_PDXGKARG_SETVIRTUALMACHINEDATA;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETVIRTUALMACHINEDATA)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETVIRTUALMACHINEDATA(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETVIRTUALMACHINEDATA Args
    );
typedef enum _DXGK_KERNEL_SUBMISSION_TYPE
{
    DXGK_KERNEL_SUBMISSION_BUILD_PAGING_BUFFER = 0,
    DXGK_KERNEL_SUBMISSION_RENDERGDI = 1,
    DXGK_KERNEL_SUBMISSION_PRESENTBLT = 2
} DXGK_KERNEL_SUBMISSION_TYPE;
typedef struct _DXGKARG_SIGNALMONITOREDFENCE
{
    DXGK_KERNEL_SUBMISSION_TYPE KernelSubmissionType;
    VOID* pDmaBuffer;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferGpuVirtualAddress;
    UINT DmaSize;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    UINT MultipassOffset;
    D3DGPU_VIRTUAL_ADDRESS MonitoredFenceGpuVa;
    UINT64 MonitoredFenceValue;
    VOID* MonitoredFenceCpuVa;
    HANDLE hHwQueue;
} DXGKARG_SIGNALMONITOREDFENCE;
typedef _Inout_ DXGKARG_SIGNALMONITOREDFENCE* INOUT_PDXGKARG_SIGNALMONITOREDFENCE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SIGNALMONITOREDFENCE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SIGNALMONITOREDFENCE(
    IN_CONST_HANDLE hContext,
    INOUT_PDXGKARG_SIGNALMONITOREDFENCE pSignalMonitoredFence
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_PRESENTTOHWQUEUE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_PRESENTTOHWQUEUE(
    IN_CONST_HANDLE hHwQueue,
    INOUT_PDXGKARG_PRESENT pPresent
    );
typedef struct _DXGK_VALIDATESUBMITCOMMANDFLAGS
{
    union
    {
        struct
        {
            UINT HardwareQueueSubmission : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_VALIDATESUBMITCOMMANDFLAGS;
typedef struct _DXGKARG_VALIDATESUBMITCOMMAND
{
    D3DGPU_VIRTUAL_ADDRESS Commands;
    UINT CommandLength;
    DXGK_VALIDATESUBMITCOMMANDFLAGS Flags;
    UINT ContextCount;
    HANDLE Context[D3DDDI_MAX_BROADCAST_CONTEXT];
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    UINT UmdPrivateDataSize;
    UINT64 HwQueueProgressFenceId;
} DXGKARG_VALIDATESUBMITCOMMAND;
typedef _Inout_ DXGKARG_VALIDATESUBMITCOMMAND* INOUT_PDXGKARG_VALIDATESUBMITCOMMAND;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VALIDATESUBMITCOMMAND)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_VALIDATESUBMITCOMMAND(
    IN_CONST_HANDLE hContext,
    INOUT_PDXGKARG_VALIDATESUBMITCOMMAND pArgs
    );
typedef struct _DXGKARG_RENDERGDI
{
    CONST VOID* pCommand;
    UINT CommandLength;
    VOID* pDmaBuffer;
    D3DGPU_VIRTUAL_ADDRESS DmaBufferGpuVirtualAddress;
    UINT DmaSize;
    VOID* pDmaBufferPrivateData;
    UINT DmaBufferPrivateDataSize;
    DXGK_ALLOCATIONLIST* pAllocationList;
    UINT AllocationListSize;
    UINT MultipassOffset;
} DXGKARG_RENDERGDI;
typedef _Inout_ DXGKARG_RENDERGDI* INOUT_PDXGKARG_RENDERGDI;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RENDERGDI)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RENDERGDI(
    IN_CONST_HANDLE hContext,
    INOUT_PDXGKARG_RENDERGDI pRenderGdi
    );
typedef struct _DXGKARG_MAPCPUHOSTAPERTURE
{
    HANDLE hAllocation;
    WORD SegmentId;
    WORD PhysicalAdapterIndex;
    UINT64 NumberOfPages;
    UINT32* pCpuHostAperturePages;
    UINT64* pMemorySegmentPages;
} DXGKARG_MAPCPUHOSTAPERTURE;
typedef _In_ CONST DXGKARG_MAPCPUHOSTAPERTURE* IN_CONST_PDXGKARG_MAPCPUHOSTAPERTURE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MAPCPUHOSTAPERTURE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_MAPCPUHOSTAPERTURE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_MAPCPUHOSTAPERTURE pArgs
    );
typedef struct _DXGKARG_UNMAPCPUHOSTAPERTURE
{
    UINT64 NumberOfPages;
    UINT32* pCpuHostAperturePages;
    WORD SegmentId;
    WORD PhysicalAdapterIndex;
} DXGKARG_UNMAPCPUHOSTAPERTURE;
typedef _In_ CONST DXGKARG_UNMAPCPUHOSTAPERTURE* IN_CONST_PDXGKARG_UNMAPCPUHOSTAPERTURE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_UNMAPCPUHOSTAPERTURE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_UNMAPCPUHOSTAPERTURE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_UNMAPCPUHOSTAPERTURE pArgs
    );
typedef struct DXGKARG_SETSTABLEPOWERSTATE
{
    BOOL Enabled;
} DXGKARG_SETSTABLEPOWERSTATE;
typedef _In_ CONST DXGKARG_SETSTABLEPOWERSTATE* IN_CONST_PDXGKARG_SETSTABLEPOWERSTATE;
typedef
    _Function_class_DXGK_(DXGKDDI_SETSTABLEPOWERSTATE)
    _IRQL_requires_(PASSIVE_LEVEL)
VOID
APIENTRY
DXGKDDI_SETSTABLEPOWERSTATE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETSTABLEPOWERSTATE pArgs
    );
typedef struct _DXGKARG_SETVIDEOPROTECTEDREGION
{
    UINT PhysicalAdapterIndex;
    UINT SegmentIndex;
    UINT VprIndex;
    SIZE_T CurrentStartOffset;
    SIZE_T CurrentSize;
    SIZE_T NewStartOffset;
    SIZE_T NewSize;
} DXGKARG_SETVIDEOPROTECTEDREGION;
typedef _In_ CONST DXGKARG_SETVIDEOPROTECTEDREGION* IN_CONST_PDXGKARG_SETVIDEOPROTECTEDREGION;
typedef
    _Function_class_DXGK_(DXGKDDI_SETVIDEOPROTECTEDREGION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETVIDEOPROTECTEDREGION(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETVIDEOPROTECTEDREGION pArgs
    );
typedef struct _DXGKARG_ESCAPE
{
    HANDLE hDevice;
    D3DDDI_ESCAPEFLAGS Flags;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    HANDLE hContext;
    HANDLE hKmdProcessHandle;
} DXGKARG_ESCAPE;
typedef _In_ CONST DXGKARG_ESCAPE* IN_CONST_PDXGKARG_ESCAPE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_ESCAPE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_ESCAPE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_ESCAPE pEscape
    );
typedef struct _DXGKARG_COLLECTDBGINFO_EXT
{
    UINT BucketingKey;
    UINT CurrentDmaBufferOffset;
    UINT Reserved2;
    UINT Reserved3;
    UINT Reserved4;
    UINT Reserved5;
    UINT Reserved6;
    UINT Reserved7;
} DXGKARG_COLLECTDBGINFO_EXT;
typedef struct _DXGKARG_COLLECTDBGINFO
{
    UINT Reason;
    VOID* pBuffer;
    SIZE_T BufferSize;
    DXGKARG_COLLECTDBGINFO_EXT* pExtension;
} DXGKARG_COLLECTDBGINFO;
typedef _In_ CONST DXGKARG_COLLECTDBGINFO* IN_CONST_PDXGKARG_COLLECTDBGINFO;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_COLLECTDBGINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_COLLECTDBGINFO(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_COLLECTDBGINFO pCollectDbgInfo
    );
typedef struct _DXGK_OVERLAYINFO
{
    HANDLE hAllocation;
    PHYSICAL_ADDRESS PhysicalAddress;
    UINT SegmentId;
    RECT DstRect;
    RECT SrcRect;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} DXGK_OVERLAYINFO;
typedef struct _DXGKARG_CREATEOVERLAY
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGK_OVERLAYINFO OverlayInfo;
    HANDLE hOverlay;
} DXGKARG_CREATEOVERLAY;
typedef _Inout_ DXGKARG_CREATEOVERLAY* INOUT_PDXGKARG_CREATEOVERLAY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATEOVERLAY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEOVERLAY(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_CREATEOVERLAY pCreateOverlay
    );
typedef struct _DXGKARG_UPDATEOVERLAY
{
    DXGK_OVERLAYINFO OverlayInfo;
} DXGKARG_UPDATEOVERLAY;
typedef _In_ CONST DXGKARG_UPDATEOVERLAY* IN_CONST_PDXGKARG_UPDATEOVERLAY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_UPDATEOVERLAY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_UPDATEOVERLAY(
    IN_CONST_HANDLE hOverlay,
    IN_CONST_PDXGKARG_UPDATEOVERLAY pUpdateOverlay
    );
typedef struct _DXGKARG_FLIPOVERLAY
{
    HANDLE hSource;
    PHYSICAL_ADDRESS SrcPhysicalAddress;
    UINT SrcSegmentId;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} DXGKARG_FLIPOVERLAY;
typedef _In_ CONST DXGKARG_FLIPOVERLAY* IN_CONST_PDXGKARG_FLIPOVERLAY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_FLIPOVERLAY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_FLIPOVERLAY(
    IN_CONST_HANDLE hOverlay,
    IN_CONST_PDXGKARG_FLIPOVERLAY pFlipOverlay
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYOVERLAY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYOVERLAY(
    IN_CONST_HANDLE hOverlay
    );
typedef struct _DXGKARG_GETSCANLINE
{
    D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
    BOOLEAN InVerticalBlank;
    UINT ScanLine;
} DXGKARG_GETSCANLINE;
typedef _Inout_ DXGKARG_GETSCANLINE* INOUT_PDXGKARG_GETSCANLINE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_GETSCANLINE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_GETSCANLINE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_GETSCANLINE pGetScanLine
    );
typedef struct _DXGKARG_ISSUPPORTEDVIDPN
{
    IN D3DKMDT_HVIDPN hDesiredVidPn;
    OUT BOOLEAN IsVidPnSupported;
} DXGKARG_ISSUPPORTEDVIDPN;
typedef _Inout_ DXGKARG_ISSUPPORTEDVIDPN* INOUT_PDXGKARG_ISSUPPORTEDVIDPN;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_ISSUPPORTEDVIDPN)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_ISSUPPORTEDVIDPN(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_ISSUPPORTEDVIDPN pIsSupportedVidPn
    );
typedef struct _DXGK_ENUM_PIVOT
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
} DXGK_ENUM_PIVOT;
typedef struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY
{
    IN D3DKMDT_HVIDPN hConstrainingVidPn;
    IN D3DKMDT_ENUMCOFUNCMODALITY_PIVOT_TYPE EnumPivotType;
    IN DXGK_ENUM_PIVOT EnumPivot;
} DXGKARG_ENUMVIDPNCOFUNCMODALITY;
typedef _In_ CONST DXGKARG_ENUMVIDPNCOFUNCMODALITY* CONST IN_CONST_PDXGKARG_ENUMVIDPNCOFUNCMODALITY_CONST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_ENUMVIDPNCOFUNCMODALITY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_ENUMVIDPNCOFUNCMODALITY(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_ENUMVIDPNCOFUNCMODALITY_CONST pEnumCofuncModality
    );
typedef enum _DXGK_RECOMMENDFUNCTIONALVIDPN_REASON
{
    DXGK_RFVR_UNINITIALIZED = 0,
    DXGK_RFVR_HOTKEY = 1,
    DXGK_RFVR_USERMODE = 2,
    DXGK_RFVR_FIRMWARE = 3,
}
DXGK_RECOMMENDFUNCTIONALVIDPN_REASON;
typedef struct _DXGKARG_RECOMMENDFUNCTIONALVIDPN
{
    IN UINT NumberOfVidPnTargets;
    IN CONST D3DDDI_VIDEO_PRESENT_TARGET_ID* pVidPnTargetPrioritizationVector;
    IN D3DKMDT_HVIDPN hRecommendedFunctionalVidPn;
    IN DXGK_RECOMMENDFUNCTIONALVIDPN_REASON RequestReason;
    IN OPTIONAL VOID* pPrivateDriverData;
    IN UINT PrivateDriverDataSize;
} DXGKARG_RECOMMENDFUNCTIONALVIDPN;
typedef _In_ CONST DXGKARG_RECOMMENDFUNCTIONALVIDPN* CONST IN_CONST_PDXGKARG_RECOMMENDFUNCTIONALVIDPN_CONST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RECOMMENDFUNCTIONALVIDPN)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RECOMMENDFUNCTIONALVIDPN(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_RECOMMENDFUNCTIONALVIDPN_CONST pRecommendFunctionalVidPn
    );
typedef struct _DXGK_SETVIDPNSOURCEADDRESS_FLAGS
{
    union
    {
        struct
        {
            UINT ModeChange : 1;
            UINT FlipImmediate : 1;
            UINT FlipOnNextVSync : 1;
            UINT FlipStereo : 1;
            UINT FlipStereoTemporaryMono : 1;
            UINT FlipStereoPreferRight : 1;
            UINT SharedPrimaryTransition : 1;
            UINT IndependentFlipExclusive : 1;
            UINT MoveFlip : 1;
            UINT Reserved :23;
        };
        UINT Value;
    };
} DXGK_SETVIDPNSOURCEADDRESS_FLAGS;
typedef struct _DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS
{
    union
    {
        struct
        {
            UINT FlipStereo : 1;
            UINT FlipStereoTemporaryMono : 1;
            UINT FlipStereoPreferRight : 1;
            UINT RetryAtLowerIrql : 1;
            UINT Reserved :28;
        };
        UINT Value;
    };
} DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS;
typedef struct _DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS
{
    union
    {
        struct
        {
            UINT PrePresentNeeded : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS;
typedef struct _DXGK_PLANE_SPECIFIC_INPUT_FLAGS
{
    union
    {
        struct
        {
            UINT Enabled : 1;
            UINT FlipImmediate : 1;
            UINT FlipOnNextVSync : 1;
            UINT SharedPrimaryTransition : 1;
            UINT IndependentFlipExclusive : 1;
            UINT FlipImmediateNoTearing : 1;
            UINT Reserved :26;
        };
        UINT Value;
    };
} DXGK_PLANE_SPECIFIC_INPUT_FLAGS;
typedef struct _DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS
{
    union
    {
        struct
        {
            UINT FlipConvertedToImmediate : 1;
            UINT PostPresentNeeded : 1;
            UINT HsyncInterruptCompletion : 1;
            UINT Reserved :29;
        };
        UINT Value;
    };
} DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS;
typedef struct _DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3
{
    DXGK_MULTIPLANE_OVERLAY_FLAGS Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    D3DDDI_ROTATION Rotation;
    DXGK_MULTIPLANE_OVERLAY_BLEND Blend;
    D3DDDI_COLOR_SPACE_TYPE ColorSpaceType;
    DXGK_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
    UINT SDRWhiteLevel;
    UINT DirtyRectCnt;
    _Field_size_opt_(DirtyRectCnt)
    CONST RECT* pDirtyRects;
} DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3;
typedef struct _DXGK_HDR_METADATA
{
    D3DDDI_HDR_METADATA_TYPE Type;
    UINT Size;
    VOID* pMetaData;
} DXGK_HDR_METADATA;
typedef struct _DXGK_PRIMARYDATA
{
    HANDLE hAllocation;
    WORD SegmentId;
    PHYSICAL_ADDRESS SegmentAddress;
} DXGK_PRIMARYDATA;
typedef struct _DXGKARG_SETVIDPNSOURCEADDRESS
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PrimarySegment;
    PHYSICAL_ADDRESS PrimaryAddress;
    HANDLE hAllocation;
    UINT ContextCount;
    HANDLE Context[1+D3DDDI_MAX_BROADCAST_CONTEXT];
    DXGK_SETVIDPNSOURCEADDRESS_FLAGS Flags;
    UINT Duration;
    DXGK_PRIMARYDATA PrimaryData[D3DDDI_MAX_BROADCAST_CONTEXT];
    UINT DriverPrivateDataSize;
    _Field_size_bytes_(DriverPrivateDataSize)
    PVOID pDriverPrivateData;
} DXGKARG_SETVIDPNSOURCEADDRESS;
typedef _In_ CONST DXGKARG_SETVIDPNSOURCEADDRESS* IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETVIDPNSOURCEADDRESS)
    _IRQL_requires_min_(PASSIVE_LEVEL)
    _IRQL_requires_max_(PROFILE_LEVEL - 1)
NTSTATUS
APIENTRY
DXGKDDI_SETVIDPNSOURCEADDRESS(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESS pSetVidPnSourceAddress
    );
typedef struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY
{
    UINT ContextCount;
    HANDLE Context[1+D3DDDI_MAX_BROADCAST_CONTEXT];
    DXGK_SETVIDPNSOURCEADDRESS_FLAGS Flags;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PlaneCount;
    DXGK_MULTIPLANE_OVERLAY_PLANE* pPlanes;
    UINT Duration;
} DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY;
typedef _In_ CONST DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY* IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY)
    _IRQL_requires_max_(PROFILE_LEVEL - 1)
NTSTATUS
APIENTRY
DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY
                  pSetVidPnSourceAddressWithMultiPlaneOverlay
    );
typedef _In_ CONST DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY*
     IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY;
typedef struct _DXGK_MULTIPLANE_OVERLAY_PLANE2
{
    UINT LayerIndex;
    BOOL Enabled;
    UINT AllocationSegment;
    PHYSICAL_ADDRESS AllocationAddress;
    HANDLE hAllocation;
    DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES2 PlaneAttributes;
} DXGK_MULTIPLANE_OVERLAY_PLANE2;
typedef struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2
{
    UINT ContextCount;
    HANDLE Context[1+D3DDDI_MAX_BROADCAST_CONTEXT];
    DXGK_SETVIDPNSOURCEADDRESS_FLAGS Flags;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PlaneCount;
    DXGK_MULTIPLANE_OVERLAY_PLANE2* pPlanes;
    UINT Duration;
} DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2;
typedef _In_ CONST DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2* IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2)
    _IRQL_requires_max_(PROFILE_LEVEL - 1)
NTSTATUS
APIENTRY
DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2
                  pSetVidPnSourceAddressWithMultiPlaneOverlay
    );
typedef _In_ CONST DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2*
     IN_CONST_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2;
typedef struct _DXGK_PRIMARYCONTEXTDATA
{
    HANDLE hContext;
    HANDLE hAllocation;
    WORD SegmentId;
    PHYSICAL_ADDRESS SegmentAddress;
} DXGK_PRIMARYCONTEXTDATA;
typedef struct _DXGK_MULTIPLANE_OVERLAY_PLANE3
{
    UINT LayerIndex;
    ULONGLONG PresentId;
    DXGK_PLANE_SPECIFIC_INPUT_FLAGS InputFlags;
    DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS OutputFlags;
    UINT MaxImmediateFlipLine;
    UINT ContextCount;
    _Field_size_(ContextCount) DXGK_PRIMARYCONTEXTDATA** ppContextData;
    UINT DriverPrivateDataSize;
    _Field_size_bytes_(DriverPrivateDataSize)
    PVOID pDriverPrivateData;
    DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3 PlaneAttributes;
} DXGK_MULTIPLANE_OVERLAY_PLANE3;
typedef struct _DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS
{
    union
    {
        struct
        {
            UINT VerticalFlip : 1;
            UINT HorizontalFlip : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS;
typedef struct _DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION
{
    DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS Flags;
    RECT SrcRect;
    RECT DstRect;
    D3DDDI_ROTATION Rotation;
} DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION;
typedef struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGK_SETVIDPNSOURCEADDRESS_INPUT_FLAGS InputFlags;
    DXGK_SETVIDPNSOURCEADDRESS_OUTPUT_FLAGS OutputFlags;
    UINT PlaneCount;
    _Field_size_(PlaneCount) DXGK_MULTIPLANE_OVERLAY_PLANE3** ppPlanes;
    DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION* pPostComposition;
    UINT Duration;
    DXGK_HDR_METADATA* pHDRMetaData;
} DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3;
typedef _Inout_ DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3* IN_OUT_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3)
    _IRQL_requires_max_(PROFILE_LEVEL - 1)
NTSTATUS
APIENTRY
DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3
                  pSetVidPnSourceAddressWithMultiPlaneOverlay
    );
typedef struct _DXGKARG_POSTMULTIPLANEOVERLAYPRESENT
{
    D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
    UINT PhysicalAdapterMask;
    DWORD LayerIndex;
    ULONGLONG PresentID;
} DXGKARG_POSTMULTIPLANEOVERLAYPRESENT;
typedef _In_ CONST DXGKARG_POSTMULTIPLANEOVERLAYPRESENT* IN_CONST_PDXGKARG_POSTMULTIPLANEOVERLAYPRESENT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_POSTMULTIPLANEOVERLAYPRESENT)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_POSTMULTIPLANEOVERLAYPRESENT(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_POSTMULTIPLANEOVERLAYPRESENT
                  pPostPresent
    );
typedef struct _DXGKARG_VALIDATEUPDATEALLOCPROPERTY
{
    HANDLE hAllocation;
    UINT SupportedSegmentSet;
    D3DDDI_SEGMENTPREFERENCE PreferredSegment;
    D3DDDI_UPDATEALLOCPROPERTY_FLAGS Flags;
    union
    {
        struct
        {
            UINT SetAccessedPhysically : 1;
            UINT SetSupportedSegmentSet : 1;
            UINT SetPreferredSegment : 1;
            UINT Reserved : 29;
        };
        UINT PropertyMaskValue;
    };
} DXGKARG_VALIDATEUPDATEALLOCPROPERTY;
typedef _In_ CONST DXGKARG_VALIDATEUPDATEALLOCPROPERTY* IN_CONST_PDXGKARG_VALIDATEUPDATEALLOCPROPERTY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VALIDATEUPDATEALLOCATIONPROPERTY)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_VALIDATEUPDATEALLOCATIONPROPERTY(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_VALIDATEUPDATEALLOCPROPERTY pValidateUpdateAllocProperty
    );
typedef struct _DXGKARG_CREATEPERIODICFRAMENOTIFICATION
{
    HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnTargetId;
    UINT64 Time;
    UINT NotificationID;
    HANDLE hNotification;
} DXGKARG_CREATEPERIODICFRAMENOTIFICATION;
typedef _Inout_ DXGKARG_CREATEPERIODICFRAMENOTIFICATION* INOUT_PDXGKARG_CREATEPERIODICFRAMENOTIFICATION;
typedef
    _Check_return_
    _Function_class_DXGK_ (DXGKARG_CREATEPERIODICFRAMENOTIFICATION)
    _IRQL_requires_max_ (PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEPERIODICFRAMENOTIFICATION (
    INOUT_PDXGKARG_CREATEPERIODICFRAMENOTIFICATION pCreatePeriodicFrameNotification
    );
typedef struct _DXGKARG_DESTROYPERIODICFRAMENOTIFICATION
{
    HANDLE hNotification;
    HANDLE hAdapter;
} DXGKARG_DESTROYPERIODICFRAMENOTIFICATION;
typedef _In_ CONST DXGKARG_DESTROYPERIODICFRAMENOTIFICATION* IN_CONST_PDXGKARG_DESTROYPERIODICFRAMENOTIFICATION;
typedef
    _Check_return_
    _Function_class_DXGK_ (DXGKARG_DESTROYPERIODICFRAMENOTIFICATION)
    _IRQL_requires_max_ (PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYPERIODICFRAMENOTIFICATION (
    IN_CONST_PDXGKARG_DESTROYPERIODICFRAMENOTIFICATION pDestroyPeriodicFrameNotification
    );
typedef struct _DXGK_MULTIPLANEOVERLAYCAPS
{
    union
    {
        struct
        {
            UINT Rotation : 1;
            UINT RotationWithoutIndependentFlip : 1;
            UINT VerticalFlip : 1;
            UINT HorizontalFlip : 1;
            UINT StretchRGB : 1;
            UINT StretchYUV : 1;
            UINT BilinearFilter : 1;
            UINT HighFilter : 1;
            UINT Shared : 1;
            UINT Immediate : 1;
            UINT Plane0ForVirtualModeOnly : 1;
            UINT Reserved : 21;
        };
        UINT Value;
    };
} DXGK_MULTIPLANEOVERLAYCAPS;
typedef struct _DXGKARG_GETMULTIPLANEOVERLAYCAPS
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT MaxPlanes;
    UINT MaxRGBPlanes;
    UINT MaxYUVPlanes;
    DXGK_MULTIPLANEOVERLAYCAPS OverlayCaps;
    float MaxStretchFactor;
    float MaxShrinkFactor;
} DXGKARG_GETMULTIPLANEOVERLAYCAPS;
typedef _Inout_ DXGKARG_GETMULTIPLANEOVERLAYCAPS* IN_OUT_PDXGKARG_GETMULTIPLANEOVERLAYCAPS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_GETMULTIPLANEOVERLAYCAPS)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_GETMULTIPLANEOVERLAYCAPS(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_GETMULTIPLANEOVERLAYCAPS
                  pGetMultiPlaneOverlayCaps
    );
typedef struct _DXGKARG_GETPOSTCOMPOSITIONCAPS
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    float MaxStretchFactor;
    float MaxShrinkFactor;
} DXGKARG_GETPOSTCOMPOSITIONCAPS;
typedef _Inout_ DXGKARG_GETPOSTCOMPOSITIONCAPS* IN_OUT_PDXGKARG_GETPOSTCOMPOSITIONCAPS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_GETPOSTCOMPOSITIONCAPS)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_GETPOSTCOMPOSITIONCAPS(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_GETPOSTCOMPOSITIONCAPS
                  pGetPostCompositionCaps
    );
typedef struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT
{
    UINT PlaneCount;
    DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE* pPlanes;
    BOOL Supported;
    DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT;
typedef _Inout_ DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT* IN_OUT_PDXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT
                  pCheckMultiPlaneOverlaySupport
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT2)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT2(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT2
                  pCheckMultiPlaneOverlaySupport
    );
typedef struct _DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2
{
    HANDLE hAllocation;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT LayerIndex;
    DXGK_MULTIPLANE_OVERLAY_ATTRIBUTES3 PlaneAttributes;
} DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2;
typedef struct _DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION PostComposition;
} DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE;
typedef struct _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3
{
    UINT PlaneCount;
    _Field_size_(PlaneCount) DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2** ppPlanes;
    UINT PostCompositionCount;
    _Field_size_(PostCompositionCount) DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE** ppPostComposition;
    BOOL Supported;
    DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3;
typedef _Inout_ DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3* IN_OUT_PDXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT3)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT3(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3
                  pCheckMultiPlaneOverlaySupport
    );
typedef struct _DXGKARG_SETVIDPNSOURCEVISIBILITY
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    BOOLEAN Visible;
} DXGKARG_SETVIDPNSOURCEVISIBILITY;
typedef _In_ CONST DXGKARG_SETVIDPNSOURCEVISIBILITY* IN_CONST_PDXGKARG_SETVIDPNSOURCEVISIBILITY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETVIDPNSOURCEVISIBILITY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETVIDPNSOURCEVISIBILITY(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETVIDPNSOURCEVISIBILITY pSetVidPnSourceVisibility
    );
typedef struct _DXGKARG_COMMITVIDPN_FLAGS
{
    UINT PathPowerTransition : 1;
    UINT PathPoweredOff : 1;
    UINT Reserved : 30;
} DXGKARG_COMMITVIDPN_FLAGS;
typedef struct _DXGKARG_COMMITVIDPN
{
    IN D3DKMDT_HVIDPN hFunctionalVidPn;
    IN D3DDDI_VIDEO_PRESENT_SOURCE_ID AffectedVidPnSourceId;
    IN D3DKMDT_MONITOR_CONNECTIVITY_CHECKS MonitorConnectivityChecks;
    IN HANDLE hPrimaryAllocation;
    IN DXGKARG_COMMITVIDPN_FLAGS Flags;
} DXGKARG_COMMITVIDPN;
typedef _In_ CONST DXGKARG_COMMITVIDPN* CONST IN_CONST_PDXGKARG_COMMITVIDPN_CONST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_COMMITVIDPN)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_COMMITVIDPN(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_COMMITVIDPN_CONST pCommitVidPn
    );
typedef struct _DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH
{
    IN D3DKMDT_VIDPN_PRESENT_PATH VidPnPresentPathInfo;
} DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH;
typedef _In_ CONST DXGKARG_UPDATEACTIVEVIDPNPRESENTPATH* CONST IN_CONST_PDXGKARG_UPDATEACTIVEVIDPNPRESENTPATH_CONST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_UPDATEACTIVEVIDPNPRESENTPATH)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_UPDATEACTIVEVIDPNPRESENTPATH(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_UPDATEACTIVEVIDPNPRESENTPATH_CONST pUpdateActiveVidPnPresentPath
    );
typedef enum _DXGK_RECOMMENDVIDPNTOPOLOGY_REASON
{
    DXGK_RVT_UNINITIALIZED = 0,
    DXGK_RVT_INITIALIZATION_NOLKG = 1,
    DXGK_RVT_AUGMENTATION_NOLKG = 2,
    DXGK_RVT_AUGMENTATION_LKGOVERRIDE = 3,
    DXGK_RVT_INITIALIZATION_LKGOVERRIDE = 4,
}
DXGK_RECOMMENDVIDPNTOPOLOGY_REASON;
typedef struct _DXGKARG_RECOMMENDVIDPNTOPOLOGY
{
    IN D3DKMDT_HVIDPN hVidPn;
    IN D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    IN DXGK_RECOMMENDVIDPNTOPOLOGY_REASON RequestReason;
    IN D3DKMDT_HVIDPNTOPOLOGY hFallbackTopology;
} DXGKARG_RECOMMENDVIDPNTOPOLOGY;
typedef _In_ CONST DXGKARG_RECOMMENDVIDPNTOPOLOGY* CONST IN_CONST_PDXGKARG_RECOMMENDVIDPNTOPOLOGY_CONST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RECOMMENDVIDPNTOPOLOGY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RECOMMENDVIDPNTOPOLOGY(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_RECOMMENDVIDPNTOPOLOGY_CONST pRecommendVidPnTopology
    );
typedef _In_ CONST D3DKMDT_HVIDPNTOPOLOGY IN_CONST_D3DKMDT_HVIDPNTOPOLOGY;
typedef _In_ D3DKMDT_HVIDPNTOPOLOGY IN_D3DKMDT_HVIDPNTOPOLOGY;
typedef _In_ CONST D3DDDI_VIDEO_PRESENT_SOURCE_ID IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID;
typedef _In_ CONST D3DDDI_VIDEO_PRESENT_TARGET_ID IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID;
typedef _In_ CONST D3DKMDT_VIDPN_PRESENT_PATH_INDEX IN_CONST_D3DKMDT_VIDPN_PRESENT_PATH_INDEX;
typedef _Out_ D3DDDI_VIDEO_PRESENT_TARGET_ID* OUT_PD3DDDI_VIDEO_PRESENT_TARGET_ID;
typedef _Out_ D3DDDI_VIDEO_PRESENT_SOURCE_ID* OUT_PD3DDDI_VIDEO_PRESENT_SOURCE_ID;
typedef _Outptr_ D3DKMDT_VIDPN_PRESENT_PATH** DEREF_OUT_PPD3DKMDT_VIDPN_PRESENT_PATH;
typedef _Outptr_ CONST D3DKMDT_VIDPN_PRESENT_PATH** DEREF_OUT_CONST_PPD3DKMDT_VIDPN_PRESENT_PATH;
typedef _In_ D3DKMDT_VIDPN_PRESENT_PATH* IN_PD3DKMDT_VIDPN_PRESENT_PATH;
typedef _In_ CONST D3DKMDT_VIDPN_PRESENT_PATH* IN_CONST_PD3DKMDT_VIDPN_PRESENT_PATH;
typedef _In_ CONST D3DKMDT_VIDPN_PRESENT_PATH* CONST IN_CONST_PD3DKMDT_VIDPN_PRESENT_PATH_CONST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_GETNUMPATHS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_GETNUMPATHS)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
    OUT_PSIZE_T pNumPaths
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_GETNUMPATHSFROMSOURCE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_GETNUMPATHSFROMSOURCE)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    OUT_PSIZE_T pNumPathsFromSource
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_ENUMPATHTARGETSFROMSOURCE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_ENUMPATHTARGETSFROMSOURCE)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    IN_CONST_D3DKMDT_VIDPN_PRESENT_PATH_INDEX VidPnPresentPathIndex,
    OUT_PD3DDDI_VIDEO_PRESENT_TARGET_ID pVidPnTargetId
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_GETPATHSOURCEFROMTARGET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_GETPATHSOURCEFROMTARGET)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidTopology,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    OUT_PD3DDDI_VIDEO_PRESENT_SOURCE_ID pVidPnSourceId
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_ACQUIREPATHINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_ACQUIREPATHINFO)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_PRESENT_PATH ppVidPnPresentPathInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_ACQUIREFIRSTPATHINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_ACQUIREFIRSTPATHINFO)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_PRESENT_PATH ppFirstVidPnPresentPathInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_ACQUIRENEXTPATHINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_ACQUIRENEXTPATHINFO)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
    IN_CONST_PD3DKMDT_VIDPN_PRESENT_PATH_CONST pVidPnPresentPathInfo,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_PRESENT_PATH ppNextVidPnPresentPathInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_UPDATEPATHSUPPORTINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_UPDATEPATHSUPPORTINFO)(
     IN_CONST_D3DKMDT_HVIDPNTOPOLOGY i_hVidPnTopology,
     IN_CONST_PD3DKMDT_VIDPN_PRESENT_PATH i_pVidPnPresentPathInfo
     );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_RELEASEPATHINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_RELEASEPATHINFO)(
     IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
     IN_CONST_PD3DKMDT_VIDPN_PRESENT_PATH_CONST pVidPnPresentPathInfo
     );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_CREATENEWPATHINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_CREATENEWPATHINFO)(
     IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
     DEREF_OUT_PPD3DKMDT_VIDPN_PRESENT_PATH ppNewVidPnPresentPathInfo
     );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_ADDPATH)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_ADDPATH)(
     IN_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
     IN_PD3DKMDT_VIDPN_PRESENT_PATH pVidPnPresentPath
     );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTOPOLOGY_REMOVEPATH)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTOPOLOGY_REMOVEPATH)(
    IN_CONST_D3DKMDT_HVIDPNTOPOLOGY hVidPnTopology,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId
    );
typedef struct _DXGK_VIDPNTOPOLOGY_INTERFACE
{
    DXGKDDI_VIDPNTOPOLOGY_GETNUMPATHS pfnGetNumPaths;
    DXGKDDI_VIDPNTOPOLOGY_GETNUMPATHSFROMSOURCE pfnGetNumPathsFromSource;
    DXGKDDI_VIDPNTOPOLOGY_ENUMPATHTARGETSFROMSOURCE pfnEnumPathTargetsFromSource;
    DXGKDDI_VIDPNTOPOLOGY_GETPATHSOURCEFROMTARGET pfnGetPathSourceFromTarget;
    DXGKDDI_VIDPNTOPOLOGY_ACQUIREPATHINFO pfnAcquirePathInfo;
    DXGKDDI_VIDPNTOPOLOGY_ACQUIREFIRSTPATHINFO pfnAcquireFirstPathInfo;
    DXGKDDI_VIDPNTOPOLOGY_ACQUIRENEXTPATHINFO pfnAcquireNextPathInfo;
    DXGKDDI_VIDPNTOPOLOGY_UPDATEPATHSUPPORTINFO pfnUpdatePathSupportInfo;
    DXGKDDI_VIDPNTOPOLOGY_RELEASEPATHINFO pfnReleasePathInfo;
    DXGKDDI_VIDPNTOPOLOGY_CREATENEWPATHINFO pfnCreateNewPathInfo;
    DXGKDDI_VIDPNTOPOLOGY_ADDPATH pfnAddPath;
    DXGKDDI_VIDPNTOPOLOGY_REMOVEPATH pfnRemovePath;
} DXGK_VIDPNTOPOLOGY_INTERFACE;
typedef _In_ D3DKMDT_HVIDPNSOURCEMODESET IN_D3DKMDT_HVIDPNSOURCEMODESET;
typedef _In_ CONST D3DKMDT_HVIDPNSOURCEMODESET IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET;
typedef _In_ D3DKMDT_VIDPN_SOURCE_MODE* CONST IN_PD3DKMDT_VIDPN_SOURCE_MODE_CONST;
typedef _In_ CONST D3DKMDT_VIDPN_SOURCE_MODE* CONST IN_CONST_PD3DKMDT_VIDPN_SOURCE_MODE_CONST;
typedef _Outptr_ D3DKMDT_VIDPN_SOURCE_MODE** DEREF_OUT_PPD3DKMDT_VIDPN_SOURCE_MODE;
typedef _Outptr_ CONST D3DKMDT_VIDPN_SOURCE_MODE** DEREF_OUT_CONST_PPD3DKMDT_VIDPN_SOURCE_MODE;
typedef _In_ CONST D3DKMDT_VIDEO_PRESENT_SOURCE_MODE_ID IN_CONST_D3DKMDT_VIDEO_PRESENT_SOURCE_MODE_ID;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_GETNUMMODES)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_GETNUMMODES)(
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    OUT_PSIZE_T_CONST pNumSourceModes
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_ACQUIREFIRSTMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_ACQUIREFIRSTMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_SOURCE_MODE ppFirstVidPnSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_ACQUIRENEXTMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_ACQUIRENEXTMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    IN_CONST_PD3DKMDT_VIDPN_SOURCE_MODE_CONST pVidPnSourceModeInfo,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_SOURCE_MODE ppNextVidPnSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_ACQUIREPINNEDMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_ACQUIREPINNEDMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_SOURCE_MODE ppPinnedVidPnSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_RELEASEMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_RELEASEMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    IN_CONST_PD3DKMDT_VIDPN_SOURCE_MODE_CONST pVidPnSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_CREATENEWMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_CREATENEWMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    DEREF_OUT_PPD3DKMDT_VIDPN_SOURCE_MODE ppNewVidPnSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_ADDMODE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_ADDMODE)(
    IN_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    IN_PD3DKMDT_VIDPN_SOURCE_MODE_CONST pVidPnSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNSOURCEMODESET_PINMODE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNSOURCEMODESET_PINMODE)(
    IN_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet,
    IN_CONST_D3DKMDT_VIDEO_PRESENT_SOURCE_MODE_ID VidPnSourceModeId
    );
typedef struct _DXGK_VIDPNSOURCEMODESET_INTERFACE
{
    DXGKDDI_VIDPNSOURCEMODESET_GETNUMMODES pfnGetNumModes;
    DXGKDDI_VIDPNSOURCEMODESET_ACQUIREFIRSTMODEINFO pfnAcquireFirstModeInfo;
    DXGKDDI_VIDPNSOURCEMODESET_ACQUIRENEXTMODEINFO pfnAcquireNextModeInfo;
    DXGKDDI_VIDPNSOURCEMODESET_ACQUIREPINNEDMODEINFO pfnAcquirePinnedModeInfo;
    DXGKDDI_VIDPNSOURCEMODESET_RELEASEMODEINFO pfnReleaseModeInfo;
    DXGKDDI_VIDPNSOURCEMODESET_CREATENEWMODEINFO pfnCreateNewModeInfo;
    DXGKDDI_VIDPNSOURCEMODESET_ADDMODE pfnAddMode;
    DXGKDDI_VIDPNSOURCEMODESET_PINMODE pfnPinMode;
} DXGK_VIDPNSOURCEMODESET_INTERFACE;
typedef _In_ D3DKMDT_HVIDPNTARGETMODESET IN_D3DKMDT_HVIDPNTARGETMODESET;
typedef _In_ CONST D3DKMDT_HVIDPNTARGETMODESET IN_CONST_D3DKMDT_HVIDPNTARGETMODESET;
typedef _In_ D3DKMDT_VIDPN_TARGET_MODE* CONST IN_PD3DKMDT_VIDPN_TARGET_MODE_CONST;
typedef _In_ CONST D3DKMDT_VIDPN_TARGET_MODE* CONST IN_CONST_PD3DKMDT_VIDPN_TARGET_MODE_CONST;
typedef _Outptr_ D3DKMDT_VIDPN_TARGET_MODE** DEREF_OUT_PPD3DKMDT_VIDPN_TARGET_MODE;
typedef _Outptr_ CONST D3DKMDT_VIDPN_TARGET_MODE** DEREF_OUT_CONST_PPD3DKMDT_VIDPN_TARGET_MODE;
typedef _In_ CONST D3DKMDT_VIDEO_PRESENT_TARGET_MODE_ID IN_CONST_D3DKMDT_VIDEO_PRESENT_TARGET_MODE_ID;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_GETNUMMODES)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_GETNUMMODES)(
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    OUT_PSIZE_T_CONST pNumTargetModes
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_ACQUIREFIRSTMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_ACQUIREFIRSTMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_TARGET_MODE ppFirstVidPnTargetModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_ACQUIRENEXTMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_ACQUIRENEXTMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    IN_CONST_PD3DKMDT_VIDPN_TARGET_MODE_CONST pVidPnTargetModeInfo,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_TARGET_MODE ppNextVidPnTargetModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_ACQUIREPINNEDMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_ACQUIREPINNEDMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    DEREF_OUT_CONST_PPD3DKMDT_VIDPN_TARGET_MODE ppPinnedVidPnTargetModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_RELEASEMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_RELEASEMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    IN_CONST_PD3DKMDT_VIDPN_TARGET_MODE_CONST pVidPnTargetModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_CREATENEWMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_CREATENEWMODEINFO)(
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    DEREF_OUT_PPD3DKMDT_VIDPN_TARGET_MODE ppNewVidPnTargetModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_ADDMODE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_ADDMODE)(
    IN_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    IN_PD3DKMDT_VIDPN_TARGET_MODE_CONST pVidPnTargetModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPNTARGETMODESET_PINMODE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPNTARGETMODESET_PINMODE)(
    IN_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet,
    IN_CONST_D3DKMDT_VIDEO_PRESENT_TARGET_MODE_ID VidPnTargetModeId
    );
typedef struct _DXGK_VIDPNTARGETMODESET_INTERFACE
{
    DXGKDDI_VIDPNTARGETMODESET_GETNUMMODES pfnGetNumModes;
    DXGKDDI_VIDPNTARGETMODESET_ACQUIREFIRSTMODEINFO pfnAcquireFirstModeInfo;
    DXGKDDI_VIDPNTARGETMODESET_ACQUIRENEXTMODEINFO pfnAcquireNextModeInfo;
    DXGKDDI_VIDPNTARGETMODESET_ACQUIREPINNEDMODEINFO pfnAcquirePinnedModeInfo;
    DXGKDDI_VIDPNTARGETMODESET_RELEASEMODEINFO pfnReleaseModeInfo;
    DXGKDDI_VIDPNTARGETMODESET_CREATENEWMODEINFO pfnCreateNewModeInfo;
    DXGKDDI_VIDPNTARGETMODESET_ADDMODE pfnAddMode;
    DXGKDDI_VIDPNTARGETMODESET_PINMODE pfnPinMode;
} DXGK_VIDPNTARGETMODESET_INTERFACE;
typedef _In_ D3DKMDT_HVIDPN IN_D3DKMDT_HVIDPN;
typedef _In_ CONST D3DKMDT_HVIDPN IN_CONST_D3DKMDT_HVIDPN;
typedef _Out_ D3DKMDT_HVIDPNTOPOLOGY* OUT_PD3DKMDT_HVIDPNTOPOLOGY;
typedef _Outptr_ CONST DXGK_VIDPNTOPOLOGY_INTERFACE** DEREF_OUT_CONST_PPDXGK_VIDPNTOPOLOGY_INTERFACE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_GETTOPOLOGY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_GETTOPOLOGY)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    OUT_PD3DKMDT_HVIDPNTOPOLOGY phVidPnTopology,
    DEREF_OUT_CONST_PPDXGK_VIDPNTOPOLOGY_INTERFACE ppVidPnTopologyInterface
    );
typedef _In_ CONST D3DKMDT_HVIDPNSOURCEMODESET IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET;
typedef _Out_ D3DKMDT_HVIDPNSOURCEMODESET* OUT_PD3DKMDT_HVIDPNSOURCEMODESET;
typedef _Outptr_ CONST DXGK_VIDPNSOURCEMODESET_INTERFACE** DEREF_OUT_CONST_PPDXGK_VIDPNSOURCEMODESET_INTERFACE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_ACQUIRESOURCEMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_ACQUIRESOURCEMODESET)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    OUT_PD3DKMDT_HVIDPNSOURCEMODESET phVidPnSourceModeSet,
    DEREF_OUT_CONST_PPDXGK_VIDPNSOURCEMODESET_INTERFACE ppVidPnSourceModeSetInterface
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_RELEASESOURCEMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_RELEASESOURCEMODESET)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_CREATENEWSOURCEMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_CREATENEWSOURCEMODESET)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    OUT_PD3DKMDT_HVIDPNSOURCEMODESET phNewVidPnSourceModeSet,
    DEREF_OUT_CONST_PPDXGK_VIDPNSOURCEMODESET_INTERFACE ppVidPnSourceModeSetInterface
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_ASSIGNSOURCEMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_ASSIGNSOURCEMODESET)(
    IN_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    IN_CONST_D3DKMDT_HVIDPNSOURCEMODESET hVidPnSourceModeSet
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_ASSIGNMULTISAMPLINGMETHODSET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_ASSIGNMULTISAMPLINGMETHODSET)(
    IN_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId,
    IN_CONST_SIZE_T NumMethods,
    _In_reads_(NumMethods) CONST D3DDDI_MULTISAMPLINGMETHOD* pSupportedMethodSet
    );
typedef _In_ CONST D3DKMDT_HVIDPNTARGETMODESET IN_CONST_D3DKMDT_HVIDPNTARGETMODESET;
typedef _Out_ D3DKMDT_HVIDPNTARGETMODESET* OUT_PD3DKMDT_HVIDPNTARGETMODESET;
typedef _Outptr_ CONST DXGK_VIDPNTARGETMODESET_INTERFACE** DEREF_OUT_CONST_PPDXGK_VIDPNTARGETMODESET_INTERFACE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_ACQUIRETARGETMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_ACQUIRETARGETMODESET)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    OUT_PD3DKMDT_HVIDPNTARGETMODESET phVidPnTargetModeSet,
    DEREF_OUT_CONST_PPDXGK_VIDPNTARGETMODESET_INTERFACE ppVidPnTargetModeSetInterface
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_RELEASETARGETMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_RELEASETARGETMODESET)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_CREATENEWTARGETMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_CREATENEWTARGETMODESET)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    OUT_PD3DKMDT_HVIDPNTARGETMODESET phNewVidPnTargetModeSet,
    DEREF_OUT_CONST_PPDXGK_VIDPNTARGETMODESET_INTERFACE ppVidPnTargetModeSetInterace
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_VIDPN_ASSIGNTARGETMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_VIDPN_ASSIGNTARGETMODESET)(
    IN_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId,
    IN_CONST_D3DKMDT_HVIDPNTARGETMODESET hVidPnTargetModeSet
    );
typedef enum _DXGK_VIDPN_INTERFACE_VERSION
{
    DXGK_VIDPN_INTERFACE_VERSION_UNINITIALIZED = 0,
    DXGK_VIDPN_INTERFACE_VERSION_V1 = 1,
} DXGK_VIDPN_INTERFACE_VERSION;
typedef struct _DXGK_VIDPN_INTERFACE
{
    DXGK_VIDPN_INTERFACE_VERSION Version;
    DXGKDDI_VIDPN_GETTOPOLOGY pfnGetTopology;
    DXGKDDI_VIDPN_ACQUIRESOURCEMODESET pfnAcquireSourceModeSet;
    DXGKDDI_VIDPN_RELEASESOURCEMODESET pfnReleaseSourceModeSet;
    DXGKDDI_VIDPN_CREATENEWSOURCEMODESET pfnCreateNewSourceModeSet;
    DXGKDDI_VIDPN_ASSIGNSOURCEMODESET pfnAssignSourceModeSet;
    DXGKDDI_VIDPN_ASSIGNMULTISAMPLINGMETHODSET pfnAssignMultisamplingMethodSet;
    DXGKDDI_VIDPN_ACQUIRETARGETMODESET pfnAcquireTargetModeSet;
    DXGKDDI_VIDPN_RELEASETARGETMODESET pfnReleaseTargetModeSet;
    DXGKDDI_VIDPN_CREATENEWTARGETMODESET pfnCreateNewTargetModeSet;
    DXGKDDI_VIDPN_ASSIGNTARGETMODESET pfnAssignTargetModeSet;
}
DXGK_VIDPN_INTERFACE;
typedef _In_ CONST DXGK_VIDPN_INTERFACE_VERSION IN_CONST_DXGK_VIDPN_INTERFACE_VERSION;
typedef _Outptr_ CONST DXGK_VIDPN_INTERFACE** DEREF_OUT_CONST_PPDXGK_VIDPN_INTERFACE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_QUERYVIDPNINTERFACE)
    _IRQL_requires_max_(APC_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_QUERYVIDPNINTERFACE)(
    IN_CONST_D3DKMDT_HVIDPN hVidPn,
    IN_CONST_DXGK_VIDPN_INTERFACE_VERSION VidPnInterfaceVersion,
    DEREF_OUT_CONST_PPDXGK_VIDPN_INTERFACE ppVidPnInterface
    );
typedef _In_ CONST D3DKMDT_HMONITORSOURCEMODESET IN_CONST_D3DKMDT_HMONITORSOURCEMODESET;
typedef _In_ D3DKMDT_MONITOR_SOURCE_MODE* CONST IN_PD3DKMDT_MONITOR_SOURCE_MODE_CONST;
typedef _In_ CONST D3DKMDT_MONITOR_SOURCE_MODE* CONST IN_CONST_PD3DKMDT_MONITOR_SOURCE_MODE_CONST;
typedef _Outptr_ D3DKMDT_MONITOR_SOURCE_MODE** DEREF_OUT_PPD3DKMDT_MONITOR_SOURCE_MODE;
typedef _Outptr_ CONST D3DKMDT_MONITOR_SOURCE_MODE** DEREF_OUT_CONST_PPD3DKMDT_MONITOR_SOURCE_MODE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORSOURCEMODESET_GETNUMMODES)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORSOURCEMODESET_GETNUMMODES)(
    IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet,
    OUT_PSIZE_T_CONST pNumMonitorSourceModes
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORSOURCEMODESET_ACQUIREPREFERREDMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORSOURCEMODESET_ACQUIREPREFERREDMODEINFO)(
    IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet,
    DEREF_OUT_CONST_PPD3DKMDT_MONITOR_SOURCE_MODE ppFirstMonitorSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORSOURCEMODESET_ACQUIREFIRSTMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORSOURCEMODESET_ACQUIREFIRSTMODEINFO)(
    IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet,
    DEREF_OUT_CONST_PPD3DKMDT_MONITOR_SOURCE_MODE ppFirstMonitorSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORSOURCEMODESET_ACQUIRENEXTMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORSOURCEMODESET_ACQUIRENEXTMODEINFO)(
    IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet,
    IN_CONST_PD3DKMDT_MONITOR_SOURCE_MODE_CONST pMonitorSourceModeInfo,
    DEREF_OUT_CONST_PPD3DKMDT_MONITOR_SOURCE_MODE ppNextMonitorSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORSOURCEMODESET_CREATENEWMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORSOURCEMODESET_CREATENEWMODEINFO)(
    IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet,
    DEREF_OUT_PPD3DKMDT_MONITOR_SOURCE_MODE ppNewMonitorSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORSOURCEMODESET_ADDMODE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORSOURCEMODESET_ADDMODE)(
    IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet,
    IN_PD3DKMDT_MONITOR_SOURCE_MODE_CONST pMonitorSourceModeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORSOURCEMODESET_RELEASEMODEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORSOURCEMODESET_RELEASEMODEINFO)(
     IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet,
     IN_CONST_PD3DKMDT_MONITOR_SOURCE_MODE_CONST pMonitorSourceModeInfo
     );
typedef struct _DXGK_MONITORSOURCEMODESET_INTERFACE
{
    DXGKDDI_MONITORSOURCEMODESET_GETNUMMODES pfnGetNumModes;
    DXGKDDI_MONITORSOURCEMODESET_ACQUIREPREFERREDMODEINFO pfnAcquirePreferredModeInfo;
    DXGKDDI_MONITORSOURCEMODESET_ACQUIREFIRSTMODEINFO pfnAcquireFirstModeInfo;
    DXGKDDI_MONITORSOURCEMODESET_ACQUIRENEXTMODEINFO pfnAcquireNextModeInfo;
    DXGKDDI_MONITORSOURCEMODESET_CREATENEWMODEINFO pfnCreateNewModeInfo;
    DXGKDDI_MONITORSOURCEMODESET_ADDMODE pfnAddMode;
    DXGKDDI_MONITORSOURCEMODESET_RELEASEMODEINFO pfnReleaseModeInfo;
} DXGK_MONITORSOURCEMODESET_INTERFACE;
typedef _In_ CONST D3DKMDT_HMONITORFREQUENCYRANGESET IN_CONST_D3DKMDT_HMONITORFREQUENCYRANGESET;
typedef _In_ CONST D3DKMDT_MONITOR_FREQUENCY_RANGE* CONST IN_CONST_PD3DKMDT_MONITOR_FREQUENCY_RANGE_CONST;
typedef _Outptr_ CONST D3DKMDT_MONITOR_FREQUENCY_RANGE** DEREF_OUT_CONST_PPD3DKMDT_MONITOR_FREQUENCY_RANGE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORFREQUENCYRANGESET_GETNUMFREQUENCYRANGES)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORFREQUENCYRANGESET_GETNUMFREQUENCYRANGES)(
    IN_CONST_D3DKMDT_HMONITORFREQUENCYRANGESET hMonitorFrequencyRangeSet,
    OUT_PSIZE_T_CONST pNumMonitorFrequencyRanges
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORFREQUENCYRANGESET_ACQUIREFIRSTFREQUENCYRANGEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORFREQUENCYRANGESET_ACQUIREFIRSTFREQUENCYRANGEINFO)(
    IN_CONST_D3DKMDT_HMONITORFREQUENCYRANGESET hMonitorFrequencyRangeSet,
    DEREF_OUT_CONST_PPD3DKMDT_MONITOR_FREQUENCY_RANGE ppFirstMonitorFrequencyRangeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORFREQUENCYRANGESET_ACQUIRENEXTFREQUENCYRANGEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORFREQUENCYRANGESET_ACQUIRENEXTFREQUENCYRANGEINFO)(
    IN_CONST_D3DKMDT_HMONITORFREQUENCYRANGESET hMonitorFrequencyRangeSet,
    IN_CONST_PD3DKMDT_MONITOR_FREQUENCY_RANGE_CONST pMonitorFrequencyRangeInfo,
    DEREF_OUT_CONST_PPD3DKMDT_MONITOR_FREQUENCY_RANGE ppNextMonitorFrequencyRangeInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORFREQUENCYRANGESET_RELEASEFREQUENCYRANGEINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORFREQUENCYRANGESET_RELEASEFREQUENCYRANGEINFO)(
     IN_CONST_D3DKMDT_HMONITORFREQUENCYRANGESET hMonitorFrequencyRangeSet,
     IN_CONST_PD3DKMDT_MONITOR_FREQUENCY_RANGE_CONST pMonitorFrequencyRangeInfo
     );
typedef struct _DXGK_MONITORFREQUENCYRANGESET_INTERFACE
{
    DXGKDDI_MONITORFREQUENCYRANGESET_GETNUMFREQUENCYRANGES pfnGetNumFrequencyRanges;
    DXGKDDI_MONITORFREQUENCYRANGESET_ACQUIREFIRSTFREQUENCYRANGEINFO pfnAcquireFirstFrequencyRangeInfo;
    DXGKDDI_MONITORFREQUENCYRANGESET_ACQUIRENEXTFREQUENCYRANGEINFO pfnAcquireNextFrequencyRangeInfo;
    DXGKDDI_MONITORFREQUENCYRANGESET_RELEASEFREQUENCYRANGEINFO pfnReleaseFrequencyRangeInfo;
} DXGK_MONITORFREQUENCYRANGESET_INTERFACE;
typedef _In_ CONST D3DKMDT_HMONITORDESCRIPTORSET IN_CONST_D3DKMDT_HMONITORDESCRIPTORSET;
typedef _In_ CONST D3DKMDT_MONITOR_DESCRIPTOR* CONST IN_CONST_PD3DKMDT_MONITOR_DESCRIPTOR_CONST;
typedef _Outptr_ CONST D3DKMDT_MONITOR_DESCRIPTOR** DEREF_OUT_CONST_PPD3DKMDT_MONITOR_DESCRIPTOR;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORDESCRIPTORSET_GETNUMDESCRIPTORS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORDESCRIPTORSET_GETNUMDESCRIPTORS)(
    IN_CONST_D3DKMDT_HMONITORDESCRIPTORSET hMonitorDescriptorSet,
    OUT_PSIZE_T_CONST pNumMonitorDescriptors
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORDESCRIPTORSET_ACQUIREFIRSTDESCRIPTORINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORDESCRIPTORSET_ACQUIREFIRSTDESCRIPTORINFO)(
    IN_CONST_D3DKMDT_HMONITORDESCRIPTORSET hMonitorDescriptorSet,
    DEREF_OUT_CONST_PPD3DKMDT_MONITOR_DESCRIPTOR ppFirstMonitorDescriptorInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORDESCRIPTORSET_ACQUIRENEXTDESCRIPTORINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORDESCRIPTORSET_ACQUIRENEXTDESCRIPTORINFO)(
    IN_CONST_D3DKMDT_HMONITORDESCRIPTORSET hMonitorDescriptorSet,
    IN_CONST_PD3DKMDT_MONITOR_DESCRIPTOR_CONST pMonitorDescriptorInfo,
    DEREF_OUT_CONST_PPD3DKMDT_MONITOR_DESCRIPTOR ppNextMonitorDescriptorInfo
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITORDESCRIPTORSET_RELEASEDESCRIPTORINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITORDESCRIPTORSET_RELEASEDESCRIPTORINFO)(
     IN_CONST_D3DKMDT_HMONITORDESCRIPTORSET hMonitorDescriptorSet,
     IN_CONST_PD3DKMDT_MONITOR_DESCRIPTOR_CONST pMonitorDescriptorInfo
     );
typedef struct _DXGK_MONITORDESCRIPTORSET_INTERFACE
{
    DXGKDDI_MONITORDESCRIPTORSET_GETNUMDESCRIPTORS pfnGetNumDescriptors;
    DXGKDDI_MONITORDESCRIPTORSET_ACQUIREFIRSTDESCRIPTORINFO pfnAcquireFirstDescriptorInfo;
    DXGKDDI_MONITORDESCRIPTORSET_ACQUIRENEXTDESCRIPTORINFO pfnAcquireNextDescriptorInfo;
    DXGKDDI_MONITORDESCRIPTORSET_RELEASEDESCRIPTORINFO pfnReleaseDescriptorInfo;
} DXGK_MONITORDESCRIPTORSET_INTERFACE;
typedef _In_ CONST D3DKMDT_ADAPTER IN_CONST_D3DKMDT_ADAPTER;
typedef _Out_ D3DKMDT_HMONITORDESCRIPTORSET* OUT_PD3DKMDT_HMONITORDESCRIPTORSET;
typedef _Out_ D3DKMDT_HMONITORSOURCEMODESET* OUT_PD3DKMDT_HMONITORSOURCEMODESET;
typedef _Out_ D3DKMDT_HMONITORFREQUENCYRANGESET* OUT_PD3DKMDT_HMONITORFREQUENCYRANGESET;
typedef _Outptr_ CONST DXGK_MONITORSOURCEMODESET_INTERFACE** DEREF_OUT_CONST_PPDXGK_MONITORSOURCEMODESET_INTERFACE;
typedef _Outptr_ CONST DXGK_MONITORFREQUENCYRANGESET_INTERFACE** DEREF_OUT_CONST_PPDXGK_MONITORFREQUENCYRANGESET_INTERFACE;
typedef _Outptr_ CONST DXGK_MONITORDESCRIPTORSET_INTERFACE** DEREF_OUT_CONST_PPDXGK_MONITORDESCRIPTORSET_INTERFACE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITOR_ACQUIREMONITORSOURCEMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITOR_ACQUIREMONITORSOURCEMODESET)(
    IN_CONST_D3DKMDT_ADAPTER hAdapter,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VideoPresentTargetId,
    OUT_PD3DKMDT_HMONITORSOURCEMODESET phMonitorSourceModeSet,
    DEREF_OUT_CONST_PPDXGK_MONITORSOURCEMODESET_INTERFACE ppMonitorSourceModeSetInterface
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITOR_RELEASEMONITORSOURCEMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITOR_RELEASEMONITORSOURCEMODESET)(
    IN_CONST_D3DKMDT_ADAPTER hAdapter,
    IN_CONST_D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITOR_GETMONITORFREQUENCYRANGESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITOR_GETMONITORFREQUENCYRANGESET)(
    IN_CONST_D3DKMDT_ADAPTER hAdapter,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VideoPresentTargetId,
    OUT_PD3DKMDT_HMONITORFREQUENCYRANGESET phMonitorFrequencyRangeSet,
    DEREF_OUT_CONST_PPDXGK_MONITORFREQUENCYRANGESET_INTERFACE ppMonitorFrequencyRangeSetInterface
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITOR_GETMONITORDESCRIPTORSET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITOR_GETMONITORDESCRIPTORSET)(
    IN_CONST_D3DKMDT_ADAPTER hAdapter,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VideoPresentTargetId,
    OUT_PD3DKMDT_HMONITORDESCRIPTORSET phMonitorDescriptorSet,
    DEREF_OUT_CONST_PPDXGK_MONITORDESCRIPTORSET_INTERFACE ppMonitorDescriptorSetInterface
    );
typedef enum _DXGK_MONITOR_INTERFACE_VERSION
{
    DXGK_MONITOR_INTERFACE_VERSION_UNINITIALIZED = 0,
    DXGK_MONITOR_INTERFACE_VERSION_V1 = 1,
    DXGK_MONITOR_INTERFACE_VERSION_V2 = 2,
} DXGK_MONITOR_INTERFACE_VERSION;
typedef struct _DXGK_MONITOR_INTERFACE
{
    DXGK_MONITOR_INTERFACE_VERSION Version;
    DXGKDDI_MONITOR_ACQUIREMONITORSOURCEMODESET pfnAcquireMonitorSourceModeSet;
    DXGKDDI_MONITOR_RELEASEMONITORSOURCEMODESET pfnReleaseMonitorSourceModeSet;
    DXGKDDI_MONITOR_GETMONITORFREQUENCYRANGESET pfnGetMonitorFrequencyRangeSet;
    DXGKDDI_MONITOR_GETMONITORDESCRIPTORSET pfnGetMonitorDescriptorSet;
}
DXGK_MONITOR_INTERFACE;
typedef _In_ CONST DXGK_TARGETMODE_DETAIL_TIMING* IN_CONST_PDXGK_TARGETMODE_DETAIL_TIMING;
typedef DXGK_TARGETMODE_DETAIL_TIMING** DEREF_ECOUNT_PPDXGK_TARGETMODE_DETAIL_TIMING;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITOR_GETADDITIONALMONITORMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITOR_GETADDITIONALMONITORMODESET)(
    IN_CONST_D3DKMDT_ADAPTER hAdapter,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VideoPresentTargetId,
    OUT_PUINT pNumberModes,
    _At_(*ppAdditionalModesSet, _Inout_updates_(*pNumberModes))
    DEREF_ECOUNT_PPDXGK_TARGETMODE_DETAIL_TIMING ppAdditionalModesSet
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_MONITOR_RELEASEADDITIONALMONITORMODESET)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY *DXGKDDI_MONITOR_RELEASEADDITIONALMONITORMODESET)(
    IN_CONST_D3DKMDT_ADAPTER hAdapter,
    IN_CONST_D3DDDI_VIDEO_PRESENT_TARGET_ID VideoPresentTargetId,
    IN_CONST_PDXGK_TARGETMODE_DETAIL_TIMING pAdditionalModesSet
    );
typedef struct _DXGK_MONITOR_INTERFACE_V2
{
    DXGK_MONITOR_INTERFACE_VERSION Version;
    DXGKDDI_MONITOR_ACQUIREMONITORSOURCEMODESET pfnAcquireMonitorSourceModeSet;
    DXGKDDI_MONITOR_RELEASEMONITORSOURCEMODESET pfnReleaseMonitorSourceModeSet;
    DXGKDDI_MONITOR_GETMONITORFREQUENCYRANGESET pfnGetMonitorFrequencyRangeSet;
    DXGKDDI_MONITOR_GETMONITORDESCRIPTORSET pfnGetMonitorDescriptorSet;
    DXGKDDI_MONITOR_GETADDITIONALMONITORMODESET pfnGetAdditionalMonitorModeSet;
    DXGKDDI_MONITOR_RELEASEADDITIONALMONITORMODESET pfnReleaseAdditionalMonitorModeSet;
}
DXGK_MONITOR_INTERFACE_V2;
typedef _In_ CONST DXGK_MONITOR_INTERFACE_VERSION IN_CONST_DXGK_MONITOR_INTERFACE_VERSION;
typedef _Outptr_ CONST DXGK_MONITOR_INTERFACE** DEREF_OUT_CONST_PPDXGK_MONITOR_INTERFACE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_QUERYMONITORINTERFACE)
    _IRQL_requires_max_(APC_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_QUERYMONITORINTERFACE)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_DXGK_MONITOR_INTERFACE_VERSION MonitorInterfaceVersion,
    DEREF_OUT_CONST_PPDXGK_MONITOR_INTERFACE ppMonitorInterface
    );
typedef struct _DXGKARG_QUERYVIDPNHWCAPABILITY
{
    IN D3DKMDT_HVIDPN hFunctionalVidPn;
    IN D3DDDI_VIDEO_PRESENT_SOURCE_ID SourceId;
    IN D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
    OUT D3DKMDT_VIDPN_HW_CAPABILITY VidPnHWCaps;
}
DXGKARG_QUERYVIDPNHWCAPABILITY;
typedef _Inout_ DXGKARG_QUERYVIDPNHWCAPABILITY* INOUT_PDXGKARG_QUERYVIDPNHWCAPABILITY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_QUERYVIDPNHWCAPABILITY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_QUERYVIDPNHWCAPABILITY(
    IN_CONST_HANDLE i_hAdapter,
    INOUT_PDXGKARG_QUERYVIDPNHWCAPABILITY io_pVidPnHWCaps
    );
typedef
    _Function_class_DXGK_(DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)
    _IRQL_requires_min_(PASSIVE_LEVEL)
    _IRQL_requires_max_(PROFILE_LEVEL - 1)
VOID (APIENTRY CALLBACK *DXGKCB_PRESENT_DISPLAYONLY_PROGRESS)(
    IN_CONST_HANDLE hAdapter, IN_CONST_PDXGKARGCB_PRESENT_DISPLAYONLY_PROGRESS
    );
typedef struct _D3DKMT_PRESENT_DISPLAY_ONLY_FLAGS
{
    union
    {
        struct
        {
            UINT Rotate : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} D3DKMT_PRESENT_DISPLAY_ONLY_FLAGS;
typedef struct _DXGKARG_PRESENT_DISPLAYONLY
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    VOID* pSource;
    ULONG BytesPerPixel;
    LONG Pitch;
    D3DKMT_PRESENT_DISPLAY_ONLY_FLAGS Flags;
    ULONG NumMoves;
    _Field_size_(NumMoves)
    D3DKMT_MOVE_RECT* pMoves;
    ULONG NumDirtyRects;
    _Field_size_(NumDirtyRects)
    RECT* pDirtyRect;
    DXGKCB_PRESENT_DISPLAYONLY_PROGRESS pfnPresentDisplayOnlyProgress;
} DXGKARG_PRESENT_DISPLAYONLY;
typedef _In_ CONST DXGKARG_PRESENT_DISPLAYONLY* IN_CONST_PDXGKARG_PRESENT_DISPLAYONLY;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_PRESENTDISPLAYONLY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_PRESENTDISPLAYONLY(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_PRESENT_DISPLAYONLY pPresentDisplayOnly
    );
typedef struct _DXGKARG_QUERYDEPENDENTENGINEGROUP
{
    UINT NodeOrdinal;
    UINT EngineOrdinal;
    ULONGLONG DependentNodeOrdinalMask;
} DXGKARG_QUERYDEPENDENTENGINEGROUP;
typedef _Inout_ DXGKARG_QUERYDEPENDENTENGINEGROUP* INOUT_DXGKARG_QUERYDEPENDENTENGINEGROUP;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_QUERYDEPENDENTENGINEGROUP)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_QUERYDEPENDENTENGINEGROUP(
    IN_CONST_HANDLE hAdapter,
    INOUT_DXGKARG_QUERYDEPENDENTENGINEGROUP pQueryDependentEngineGroup
    );
typedef struct _DXGK_ENGINESTATUS
{
    union
    {
        struct
        {
            UINT Responsive : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} DXGK_ENGINESTATUS;
typedef struct _DXGKARG_QUERYENGINESTATUS
{
    UINT NodeOrdinal;
    UINT EngineOrdinal;
    DXGK_ENGINESTATUS EngineStatus;
} DXGKARG_QUERYENGINESTATUS;
typedef _Inout_ DXGKARG_QUERYENGINESTATUS* INOUT_PDXGKARG_QUERYENGINESTATUS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_QUERYENGINESTATUS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_QUERYENGINESTATUS(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_QUERYENGINESTATUS pQueryEngineStatus
    );
typedef struct _DXGKARG_RESETENGINE
{
    UINT NodeOrdinal;
    UINT EngineOrdinal;
    UINT LastAbortedFenceId;
} DXGKARG_RESETENGINE;
typedef _Inout_ DXGKARG_RESETENGINE* INOUT_PDXGKARG_RESETENGINE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RESETENGINE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RESETENGINE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_RESETENGINE pResetEngine
    );
typedef struct _DXGKARG_RESETHWENGINE
{
    UINT NodeOrdinal;
    UINT EngineOrdinal;
} DXGKARG_RESETHWENGINE;
typedef _Inout_ DXGKARG_RESETHWENGINE* INOUT_PDXGKARG_RESETHWENGINE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RESETHWENGINE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RESETHWENGINE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_RESETHWENGINE pResetHwEngine
    );
typedef struct _DXGK_INVALIDATEHWCONTEXTFLAGS
{
    union
    {
        struct
        {
            UINT CollateralDamage : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} DXGK_INVALIDATEHWCONTEXTFLAGS;
typedef struct _DXGKARGCB_INVALIDATEHWCONTEXT
{
    HANDLE hAdapter;
    HANDLE hHwContext;
    DXGK_INVALIDATEHWCONTEXTFLAGS Flags;
} DXGKARGCB_INVALIDATEHWCONTEXT;
typedef _In_ CONST DXGKARGCB_INVALIDATEHWCONTEXT* IN_CONST_PDXGKARGCB_INVALIDATEHWCONTEXT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_INVALIDATEHWCONTEXT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_INVALIDATEHWCONTEXT)(
    IN_CONST_PDXGKARGCB_INVALIDATEHWCONTEXT
    );
typedef
_Function_class_DXGK_(DXGKCB_INDICATE_CONNECTOR_CHANGE)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(APIENTRY *DXGKCB_INDICATE_CONNECTOR_CHANGE)(
    IN_CONST_HANDLE hAdapter
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RESETFROMTIMEOUT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY CALLBACK
DXGKDDI_RESETFROMTIMEOUT(
    IN_CONST_HANDLE hAdapter
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RESTARTFROMTIMEOUT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY CALLBACK
DXGKDDI_RESTARTFROMTIMEOUT(
    IN_CONST_HANDLE hAdapter
    );
typedef enum _DXGK_ACTIVE_VIDPN_INVALIDATION_REASON
{
    DXGK_AVIR_UNINITIALIZED = DXGK_RFVR_UNINITIALIZED,
    DXGK_AVIR_HOTKEY = DXGK_RFVR_HOTKEY,
    DXGK_AVIR_USERMODE = DXGK_RFVR_USERMODE,
}
DXGK_ACTIVE_VIDPN_INVALIDATION_REASON;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_UNBLOCKUEFIFRAMEBUFFERRANGES)
    _IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_UNBLOCKUEFIFRAMEBUFFERRANGES)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGK_SEGMENTMEMORYSTATE pSegmentMemoryState);
typedef struct _DXGK_INTERFACESPECIFICDATA
{
    HANDLE hAdapter;
    DXGKCB_GETHANDLEDATA pfnGetHandleDataCb;
    DXGKCB_GETHANDLEPARENT pfnGetHandleParentCb;
    DXGKCB_ENUMHANDLECHILDREN pfnEnumHandleChildrenCb;
    DXGKCB_NOTIFY_INTERRUPT pfnNotifyInterruptCb;
    DXGKCB_NOTIFY_DPC pfnNotifyDpcCb;
    DXGKCB_QUERYVIDPNINTERFACE pfnQueryVidPnInterfaceCb;
    DXGKCB_GETCAPTUREADDRESS pfnGetCaptureAddressCb;
} DXGK_INTERFACESPECIFICDATA;
typedef struct _DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    HANDLE PrimaryAllocation;
    UINT PrivateDriverFormatAttribute;
} DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT;
typedef _In_ DXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT* IN_CONST_PDXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETDISPLAYPRIVATEDRIVERFORMAT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETDISPLAYPRIVATEDRIVERFORMAT(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETDISPLAYPRIVATEDRIVERFORMAT pSetDisplayPrivateDriverFormat
    );
typedef struct _DXGKARG_RECOMMENDMONITORMODES
{
    IN D3DDDI_VIDEO_PRESENT_TARGET_ID VideoPresentTargetId;
    IN D3DKMDT_HMONITORSOURCEMODESET hMonitorSourceModeSet;
    IN CONST DXGK_MONITORSOURCEMODESET_INTERFACE* pMonitorSourceModeSetInterface;
} DXGKARG_RECOMMENDMONITORMODES;
typedef _In_ CONST DXGKARG_RECOMMENDMONITORMODES* CONST IN_CONST_PDXGKARG_RECOMMENDMONITORMODES_CONST;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RECOMMENDMONITORMODES)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RECOMMENDMONITORMODES(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_RECOMMENDMONITORMODES_CONST pRecommendMonitorModes
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDISETPOWERCOMPONENTFSTATE)
    _IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDISETPOWERCOMPONENTFSTATE(
    IN_CONST_HANDLE DriverContext,
    UINT ComponentIndex,
    UINT FState
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDISETPOWERPSTATE)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDISETPOWERPSTATE(
    IN_CONST_HANDLE DriverContext,
    UINT ComponentIndex,
    UINT RequestedComponentPState
);
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDIPOWERRUNTIMECONTROLREQUEST)
    _IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDIPOWERRUNTIMECONTROLREQUEST(
    IN_CONST_HANDLE DriverContext,
    IN LPCGUID PowerControlCode,
    IN OPTIONAL PVOID InBuffer,
    IN SIZE_T InBufferSize,
    OUT OPTIONAL PVOID OutBuffer,
    IN SIZE_T OutBufferSize,
    OUT OPTIONAL PSIZE_T BytesReturned
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_POWERRUNTIMESETDEVICEHANDLE)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_POWERRUNTIMESETDEVICEHANDLE(
    IN_CONST_HANDLE DriverContext,
    IN HANDLE PoDeviceHandle
    );
typedef
    _Function_class_DXGK_(DXGKCB_SETPOWERCOMPONENTACTIVE)
    _IRQL_requires_max_(PASSIVE_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_SETPOWERCOMPONENTACTIVE)(
    IN_CONST_HANDLE hAdapter,
    UINT ComponentIndex
    );
typedef DXGKCB_SETPOWERCOMPONENTACTIVE *PDXGKCB_SETPOWERCOMPONENTACTIVE;
typedef
    _Function_class_DXGK_(DXGKCB_POWERRUNTIMECONTROLREQUEST)
    _IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_POWERRUNTIMECONTROLREQUEST)(
    IN_CONST_HANDLE hAdapter,
    IN LPCGUID PowerControlCode,
    IN OPTIONAL PVOID InBuffer,
    IN SIZE_T InBufferSize,
    OUT OPTIONAL PVOID OutBuffer,
    IN SIZE_T OutBufferSize,
    OUT OPTIONAL PSIZE_T BytesReturned
    );
typedef DXGKCB_POWERRUNTIMECONTROLREQUEST *PDXGKCB_POWERRUNTIMECONTROLREQUEST;
typedef
    _Function_class_DXGK_(DXGKCB_SETPOWERCOMPONENTIDLE)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_SETPOWERCOMPONENTIDLE)(
    IN_CONST_HANDLE hAdapter,
    UINT ComponentIndex
    );
typedef DXGKCB_SETPOWERCOMPONENTIDLE *PDXGKCB_SETPOWERCOMPONENTIDLE;
typedef
    _Function_class_DXGK_(DXGKCB_SETPOWERCOMPONENTLATENCY)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_SETPOWERCOMPONENTLATENCY)(
    IN_CONST_HANDLE hAdapter,
    UINT ComponentIndex,
    ULONGLONG Latency
    );
typedef DXGKCB_SETPOWERCOMPONENTLATENCY *PDXGKCB_SETPOWERCOMPONENTLATENCY;
typedef
    _Function_class_DXGK_(DXGKCB_SETPOWERCOMPONENTRESIDENCY)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_SETPOWERCOMPONENTRESIDENCY)(
    IN_CONST_HANDLE hAdapter,
    UINT ComponentIndex,
    ULONGLONG Residency
    );
typedef DXGKCB_SETPOWERCOMPONENTRESIDENCY *PDXGKCB_SETPOWERCOMPONENTRESIDENCY;
typedef
    _Function_class_DXGK_(DXGKCB_COMPLETEFSTATETRANSITION)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_COMPLETEFSTATETRANSITION)(
    IN_CONST_HANDLE hAdapter,
    UINT ComponentIndex
    );
typedef DXGKCB_COMPLETEFSTATETRANSITION *PDXGKCB_COMPLETEFSTATETRANSITION;
typedef enum _DXGK_HARDWARE_CONTENT_PROTECTION_TEARDOWN_FLAGS
{
    DXGK_HARDWARE_CONTENT_PROTECTION_TEARDOWN_FLAG_PREEMPTIVE = 1
} DXGK_HARDWARE_CONTENT_PROTECTION_TEARDOWN_FLAGS;
typedef
    _Function_class_DXGK_(DXGKCB_HARDWARECONTENTPROTECTIONTEARDOWN)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_HARDWARECONTENTPROTECTIONTEARDOWN)(
    IN_CONST_HANDLE hAdapter,
    UINT Flags
    );
typedef
    _Function_class_DXGK_(DXGKCB_MULTIPLANEOVERLAYDISABLED)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_MULTIPLANEOVERLAYDISABLED)(
    IN_CONST_HANDLE hAdapter,
    UINT VidPnSourceId
    );
typedef
    _Function_class_DXGK_(DXGKCB_MITIGATEDRANGEUPDATE)
    _IRQL_requires_max_(PASSIVE_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_DXGKCB_MITIGATEDRANGEUPDATE)(
    IN_CONST_HANDLE hAdapter,
    IN ULONG VirtualFunctionIndex
    );
typedef _Out_ DXGKARG_GETNODEMETADATA* OUT_PDXGKARG_GETNODEMETADATA;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_GETNODEMETADATA)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_GETNODEMETADATA(
    IN_CONST_HANDLE hAdapter,
    UINT NodeOrdinalAndAdapterIndex,
    OUT_PDXGKARG_GETNODEMETADATA pGetNodeMetadata
    );
typedef
    _Function_class_DXGK_(DXGKCB_COMPLETEPSTATETRANSITION)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_COMPLETEPSTATETRANSITION)(
    IN_CONST_HANDLE hAdapter,
    IN UINT ComponentIndex,
    IN UINT CompletedPState
    );
typedef DXGKCB_COMPLETEPSTATETRANSITION *PDXGKCB_COMPLETEPSTATETRANSITION;
typedef struct _DXGKARGCB_MAPCONTEXTALLOCATION
{
    D3DGPU_VIRTUAL_ADDRESS BaseAddress;
    D3DGPU_VIRTUAL_ADDRESS MinimumAddress;
    D3DGPU_VIRTUAL_ADDRESS MaximumAddress;
    HANDLE hAllocation;
    D3DGPU_SIZE_T OffsetInPages;
    D3DGPU_SIZE_T SizeInPages;
    D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE Protection;
    UINT64 DriverProtection;
} DXGKARGCB_MAPCONTEXTALLOCATION;
typedef _In_ CONST DXGKARGCB_MAPCONTEXTALLOCATION* IN_CONST_PDXGKARGCB_MAPCONTEXTALLOCATION;
typedef
    _Function_class_DXGK_(DXGKCB_MAPCONTEXTALLOCATION)
    _IRQL_requires_max_(PASSIVE_LEVEL)
D3DGPU_VIRTUAL_ADDRESS
(APIENTRY CALLBACK *DXGKCB_MAPCONTEXTALLOCATION)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_MAPCONTEXTALLOCATION pArgs
    );
typedef struct _DXGKARGCB_UPDATECONTEXTALLOCATION
{
    HANDLE hAllocation;
    PVOID pPrivateDriverData;
    UINT PrivateDriverDataSize;
} DXGKARGCB_UPDATECONTEXTALLOCATION;
typedef _In_ CONST DXGKARGCB_UPDATECONTEXTALLOCATION* IN_CONST_PDXGKARGCB_UPDATECONTEXTALLOCATION;
typedef
    _Function_class_DXGK_(DXGKCB_UPDATECONTEXTALLOCATION)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_UPDATECONTEXTALLOCATION)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_UPDATECONTEXTALLOCATION pArgs
    );
typedef struct _DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE
{
    HANDLE hDxgkProcess;
    UINT64 SizeInBytes;
    UINT Alignment;
    UINT64 StartVirtualAddress;
    UINT64 BaseAddress;
    union
    {
        struct
        {
            UINT AllowUserModeMapping : 1;
        };
        UINT Flags;
    };
} DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE;
typedef _Inout_ DXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE* INOUT_PDXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE;
typedef
    _Function_class_DXGK_(DXGKCB_RESERVEGPUVIRTUALADDRESSRANGE)
    _IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_RESERVEGPUVIRTUALADDRESSRANGE)(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARGCB_RESERVEGPUVIRTUALADDRESSRANGE pArgs
    );
typedef
    _Function_class_DXGK_(DXGKCB_NOTIFYVSYNC)
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_NOTIFYVSYNC)(
    IN_CONST_HANDLE hAdapter,
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId
    );
typedef DXGKCB_NOTIFYVSYNC *PDXGKCB_NOTIFYVSYNC;
typedef struct _DXGKARG_HISTORYBUFFERPRECISION
{
    UINT32 PrecisionBits;
} DXGKARG_HISTORYBUFFERPRECISION;
typedef struct _DXGK_HISTORY_BUFFER_HEADER
{
    UINT32 RenderCbSequence;
    UINT32 NumTimestamps;
    UINT32 PrivateDataSize;
    UINT32 Reserved;
} DXGK_HISTORY_BUFFER_HEADER;
typedef struct _DXGK_HISTORY_BUFFER
{
    DXGK_HISTORY_BUFFER_HEADER Header;
    UINT8 DriverPrivateData[1];
} DXGK_HISTORY_BUFFER;
typedef struct _DXGKARG_FORMATHISTORYBUFFER
{
    DXGK_HISTORY_BUFFER* pHistoryBuffer;
    UINT32 HistoryBufferSize;
    PVOID pFormattedBuffer;
    UINT32 FormattedBufferSize;
    UINT32 NumTimestamps;
    DXGKARG_HISTORYBUFFERPRECISION Precision;
    UINT32 Offset;
 } DXGKARG_FORMATHISTORYBUFFER;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_FORMATHISTORYBUFFER)
    _IRQL_requires_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_FORMATHISTORYBUFFER(
    IN_CONST_HANDLE hContext,
    IN DXGKARG_FORMATHISTORYBUFFER* pFormatData
    );
typedef _Out_ DXGKARG_CALIBRATEGPUCLOCK* OUT_PDXGKARG_CALIBRATEGPUCLOCK;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CALIBRATEGPUCLOCK)
    _IRQL_requires_max_(DISPATCH_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CALIBRATEGPUCLOCK(
    IN_CONST_HANDLE hAdapter,
    IN UINT32 NodeOrdinal,
    IN UINT32 EngineOrdinal,
    OUT_PDXGKARG_CALIBRATEGPUCLOCK pClockCalibration
    );
typedef union _DXGK_MODE_BEHAVIOR_FLAGS
{
    struct
    {
        UINT PrioritizeHDR : 1;
        UINT ColorimetricControl : 1;
        UINT Reserved :30;
    };
    UINT Value;
} DXGK_MODE_BEHAVIOR_FLAGS;
typedef struct _DXGKARG_CONTROLMODEBEHAVIOR
{
    IN DXGK_MODE_BEHAVIOR_FLAGS Request;
    OUT DXGK_MODE_BEHAVIOR_FLAGS Satisfied;
    OUT DXGK_MODE_BEHAVIOR_FLAGS NotSatisfied;
} DXGKARG_CONTROLMODEBEHAVIOR;
typedef _Inout_ DXGKARG_CONTROLMODEBEHAVIOR* INOUT_PDXGKARG_CONTROLMODEBEHAVIOR;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CONTROLMODEBEHAVIOR)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CONTROLMODEBEHAVIOR(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_CONTROLMODEBEHAVIOR pControlModeBehaviorArg
    );
typedef struct _DXGK_MONITORLINKINFO
{
    DXGK_MONITORLINKINFO_USAGEHINTS UsageHints;
    DXGK_MONITORLINKINFO_CAPABILITIES Capabilities;
    D3DKMDT_WIRE_FORMAT_AND_PREFERENCE DitheringSupport;
} DXGK_MONITORLINKINFO;
typedef struct _DXGKARG_UPDATEMONITORLINKINFO
{
    IN D3DDDI_VIDEO_PRESENT_TARGET_ID VideoPresentTargetId;
    IN DXGK_MONITORLINKINFO MonitorLinkInfo;
} DXGKARG_UPDATEMONITORLINKINFO;
typedef _Inout_ DXGKARG_UPDATEMONITORLINKINFO* INOUT_PDXGKARG_UPDATEMONITORLINKINFO;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_UPDATEMONITORLINKINFO)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_UPDATEMONITORLINKINFO(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_UPDATEMONITORLINKINFO pUpdateMonitorLinkInfoArg
    );
typedef UINT DXGK_CONNECTION_STATUS;
typedef struct _DXGK_CONNECTION_CHANGE {
    ULONGLONG ConnectionChangeId;
    D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId :24;
    DXGK_CONNECTION_STATUS ConnectionStatus : 4;
    UINT Reserved : 4;
    union {
        struct {
            D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY LinkTargetType;
        } MonitorConnect;
        struct {
            D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY BaseTargetType;
            D3DDDI_VIDEO_PRESENT_TARGET_ID NewTargetId;
        } TargetConnect;
        struct {
            D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY BaseTargetType;
            D3DDDI_VIDEO_PRESENT_TARGET_ID NewTargetId;
        } TargetJoin;
    };
} DXGK_CONNECTION_CHANGE, *PDXGK_CONNECTION_CHANGE;
typedef struct _DXGK_SET_TIMING_FLAGS
{
    union
    {
        struct
        {
            UINT Reserved;
        };
        UINT Value;
    };
} DXGK_SET_TIMING_FLAGS;
typedef struct _DXGK_SET_TIMING_RESULTS
{
    union
    {
        struct
        {
            UINT ConnectionStatusChanges : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} DXGK_SET_TIMING_RESULTS, *PDXGK_SET_TIMING_RESULTS;
typedef UINT DXGK_PATH_UPDATE;
typedef UINT DXGK_SYNC_LOCK_STYLE;
typedef UINT8 DXGK_GLITCH_CAUSE;
typedef UINT8 DXGK_GLITCH_EFFECT;
typedef UINT8 DXGK_GLITCH_DURATION;
typedef struct _DXGK_SET_TIMING_PATH_INFO
{
    D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
    union
    {
        D3DDDI_COLOR_SPACE_TYPE OutputColorSpace;
        D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE OutputWireColorSpace;
    };
    D3DKMDT_WIRE_FORMAT_AND_PREFERENCE SelectedWireFormat;
    union
    {
        struct
        {
            DXGK_PATH_UPDATE VidPnPathUpdates : 2;
            UINT Active : 1;
            UINT IgnoreConnectivity : 1;
            UINT PreserveInherited : 1;
            UINT SyncLockGroup : 3;
            DXGK_SYNC_LOCK_STYLE SyncLockStyle : 4;
            UINT Reserved :20;
        } Input;
        UINT InputFlags;
    };
    union
    {
        struct
        {
            UINT RecheckMPO : 1;
            UINT Reserved :31;
        } Output;
        UINT OutputFlags;
    };
    DXGK_CONNECTION_CHANGE TargetState;
    union
    {
        struct
        {
            DXGK_GLITCH_CAUSE GlitchCause;
            DXGK_GLITCH_EFFECT GlitchEffect;
            DXGK_GLITCH_DURATION GlitchDuration;
            UINT8 Reserved;
        };
        UINT DiagnosticInfo;
    };
} DXGK_SET_TIMING_PATH_INFO;
typedef struct _DXGKARG_SETTIMINGSFROMVIDPN
{
    D3DKMDT_HVIDPN hFunctionalVidPn;
    DXGK_SET_TIMING_FLAGS SetFlags;
    PDXGK_SET_TIMING_RESULTS pResultsFlags;
    UINT PathCount;
    _Field_size_(PathCount) DXGK_SET_TIMING_PATH_INFO * pSetTimingPathInfo;
} DXGKARG_SETTIMINGSFROMVIDPN;
typedef _Inout_ DXGKARG_SETTIMINGSFROMVIDPN* IN_OUT_PDXGKARG_SETTIMINGSFROMVIDPN;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETTIMINGSFROMVIDPN)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETTIMINGSFROMVIDPN(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_SETTIMINGSFROMVIDPN pSetTimings
    );
typedef struct _DXGKARG_SETTARGETGAMMA
{
    IN D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
    IN D3DKMDT_GAMMA_RAMP GammaRamp;
} DXGKARG_SETTARGETGAMMA;
typedef _In_ CONST DXGKARG_SETTARGETGAMMA* IN_CONST_PDXGKARG_SETTARGETGAMMA;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETTARGETGAMMA)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETTARGETGAMMA(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETTARGETGAMMA pSetTargetGammaArg
    );
typedef enum _DXGK_TARGET_CONTROL_TYPE
{
    DXGKTCTYPE_INVALID = 0,
    DXGKTCTYPE_DSI2_TRANSMISSION,
} DXGK_TARGET_CONTROL_TYPE;
typedef enum _DXGK_DSI2_CONTROL_TRANSMISSION_MODE
{
    DXGK_DCT_DEFAULT = 0,
    DXGK_DCT_FORCE_LOW_POWER,
    DXGK_DCT_FORCE_HIGH_SPEED,
    DXGK_DCT_FORCE_HIGH_PERFORMANCE = DXGK_DCT_FORCE_HIGH_SPEED,
} DXGK_DSI2_CONTROL_TRANSMISSION_MODE;
typedef struct _DXGK_DSI2_PACKET
{
    union
    {
        UINT DataId :8;
        struct
        {
            UINT DataType :6;
            UINT VirtualChannel :2;
        };
    };
    union
    {
        struct
        {
            UINT Data0 :8;
            UINT Data1 :8;
        };
        UINT LongWriteWordCount :16;
    };
    UINT EccFiller :8;
    BYTE Payload[DXGK_DSI2_PACKET_EMBEDDED_PAYLOAD_SIZE];
} DXGK_DSI2_PACKET, *PDXGK_DSI2_PACKET;
typedef struct _DXGK_DSI2_TRANSMISSION
{
    UINT TotalBufferSize;
    struct
    {
        UINT PacketCount : 8;
        UINT FailedPacket : 8;
        UINT TransmissionMode : 2;
        UINT ReportMipiErrors : 1;
        UINT ClearMipiErrors : 1;
        UINT SecondaryPort : 1;
        UINT Reserved :11;
    };
    WORD ReadWordCount;
    WORD FinalCommandExtraPayload;
    WORD MipiErrors;
    WORD HostErrors;
    DXGK_DSI2_PACKET Packets[1];
} DXGK_DSI2_TRANSMISSION, *PDXGK_DSI2_TRANSMISSION;
typedef struct _DXGKARG_SUBMITTARGETCONTROL
{
    IN D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
    IN DXGK_TARGET_CONTROL_TYPE Type;
    union
    {
        _Inout_ PDXGK_DSI2_TRANSMISSION pDsi2Transmission;
    };
} DXGKARG_SUBMITTARGETCONTROL, *PDXGKARG_SUBMITTARGETCONTROL;
typedef _Inout_ DXGKARG_SUBMITTARGETCONTROL* IN_OUT_PDXGKARG_SUBMITTARGETCONTROL;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SUBMITTARGETCONTROL)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SUBMITTARGETCONTROL(
    IN_CONST_HANDLE hAdapter,
    IN_OUT_PDXGKARG_SUBMITTARGETCONTROL pSubmitTargetControl
    );
typedef struct _DXGKARG_SETTARGETCONTENTTYPE
{
    IN D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
    IN D3DKMDT_VIDPN_PRESENT_PATH_CONTENT ContentType;
} DXGKARG_SETTARGETCONTENTTYPE;
typedef _In_ CONST DXGKARG_SETTARGETCONTENTTYPE* IN_CONST_PDXGKARG_SETTARGETCONTENTTYPE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETTARGETCONTENTTYPE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETTARGETCONTENTTYPE(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETTARGETCONTENTTYPE pSetTargetContentTypeArg
    );
typedef struct _DXGKARG_SETTARGETANALOGCOPYPROTECTION
{
    IN D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
    D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_TYPE CopyProtectionType;
    UINT APSTriggerBits;
    D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT CopyProtectionSupport;
} DXGKARG_SETTARGETANALOGCOPYPROTECTION;
typedef _In_ CONST DXGKARG_SETTARGETANALOGCOPYPROTECTION* IN_CONST_PDXGKARG_SETTARGETANALOGCOPYPROTECTION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETTARGETANALOGCOPYPROTECTION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETTARGETANALOGCOPYPROTECTION(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_SETTARGETANALOGCOPYPROTECTION pSetTargetAnalogCopyProtectionArg
    );
typedef UINT DXGK_DISPLAYDETECTCONTROLTYPE;
typedef struct _DXGKARG_DISPLAYDETECTCONTROL
{
    D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId :24;
    DXGK_DISPLAYDETECTCONTROLTYPE Type : 4;
    UINT NonDestructiveOnly : 1;
    UINT Reserved : 3;
} DXGKARG_DISPLAYDETECTCONTROL;
typedef _In_ CONST DXGKARG_DISPLAYDETECTCONTROL* IN_CONST_PDXGKARG_DISPLAYDETECTCONTROL;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DISPLAYDETECTCONTROL)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DISPLAYDETECTCONTROL(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARG_DISPLAYDETECTCONTROL pDisplayDetectControl
    );
typedef struct _DXGKARG_QUERYCONNECTIONCHANGE
{
    DXGK_CONNECTION_CHANGE ConnectionChange;
} DXGKARG_QUERYCONNECTIONCHANGE;
typedef _In_ DXGKARG_QUERYCONNECTIONCHANGE* IN_PDXGKARG_QUERYCONNECTIONCHANGE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_QUERYCONNECTIONCHANGE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_QUERYCONNECTIONCHANGE(
    IN_CONST_HANDLE hAdapter,
    IN_PDXGKARG_QUERYCONNECTIONCHANGE pQueryConnectionChange
    );
typedef struct _DXGK_INHERITED_TIMING_INFO
{
    union
    {
        D3DDDI_COLOR_SPACE_TYPE OutputColorSpace;
        D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE OutputWireColorSpace;
    };
    D3DKMDT_WIRE_FORMAT_AND_PREFERENCE SelectedWireFormat;
    union
    {
        struct
        {
            DXGK_GLITCH_CAUSE GlitchCause;
            DXGK_GLITCH_EFFECT GlitchEffect;
            DXGK_GLITCH_DURATION GlitchDuration;
            UINT8 Reserved;
        };
        UINT DiagnosticInfo;
    };
} DXGK_INHERITED_TIMING_INFO, *PDXGK_INHERITED_TIMING_INFO;
typedef struct _DXGKARG_CREATEPROTECTEDSESSION
{
    HANDLE hProtectedSession;
    PVOID pPrivateDriverData;
    UINT PrivateDriverDataSize;
} DXGKARG_CREATEPROTECTEDSESSION;
typedef _Inout_ DXGKARG_CREATEPROTECTEDSESSION* INOUT_PDXGKARG_CREATEPROTECTEDSESSION;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_CREATEPROTECTEDSESSION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_CREATEPROTECTEDSESSION(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_CREATEPROTECTEDSESSION pCreateProtectedSession
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_DESTROYPROTECTEDSESSION)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_DESTROYPROTECTEDSESSION(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_HANDLE hProtectedSession
    );
typedef enum _DXGK_PROTECTED_SESSION_STATUS
{
    DXGK_PROTECTED_SESSION_STATUS_OK = 0,
    DXGK_PROTECTED_SESSION_STATUS_INVALID = 1,
} DXGK_PROTECTED_SESSION_STATUS;
typedef struct _DXGKARGCB_PROTECTEDSESSIONSTATUS
{
    HANDLE hProtectedSession;
    DXGK_PROTECTED_SESSION_STATUS Status;
} DXGKARGCB_PROTECTEDSESSIONSTATUS;
typedef _In_ CONST DXGKARGCB_PROTECTEDSESSIONSTATUS* IN_CONST_PDXGKARGCB_PROTECTEDSESSIONSTATUS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_SETPROTECTEDSESSIONSTATUS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_SETPROTECTEDSESSIONSTATUS)(
    IN_CONST_PDXGKARGCB_PROTECTEDSESSIONSTATUS pProtectedSessionStatus
    );
typedef enum _DXGK_MEMORY_CACHING_TYPE
{
    DXGK_MEMORY_CACHING_TYPE_NON_CACHED,
    DXGK_MEMORY_CACHING_TYPE_CACHED,
    DXGK_MEMORY_CACHING_TYPE_WRITE_COMBINED
} DXGK_MEMORY_CACHING_TYPE;
typedef struct _DXGKARGCB_ALLOCATECONTIGUOUSMEMORY
{
    _In_ SIZE_T NumberOfBytes;
    _In_ PHYSICAL_ADDRESS LowestAcceptableAddress;
    _In_ PHYSICAL_ADDRESS HighestAcceptableAddress;
    _In_ PHYSICAL_ADDRESS BoundaryAddressMultiple;
    _In_ DXGK_MEMORY_CACHING_TYPE CacheType;
    _Out_ HANDLE hMemoryHandle;
    _Out_ PVOID pMemory;
} DXGKARGCB_ALLOCATECONTIGUOUSMEMORY;
typedef struct _DXGKARGCB_FREECONTIGUOUSMEMORY
{
    _In_ HANDLE hMemoryHandle;
} DXGKARGCB_FREECONTIGUOUSMEMORY;
typedef struct _DXGKARGCB_ALLOCATEPAGESFORMDL
{
    _In_ PHYSICAL_ADDRESS LowAddress;
    _In_ PHYSICAL_ADDRESS HighAddress;
    _In_ PHYSICAL_ADDRESS SkipBytes;
    _In_ SIZE_T TotalBytes;
    _In_ DXGK_MEMORY_CACHING_TYPE CacheType;
    _In_ ULONG Flags;
    _Out_ HANDLE hMemoryHandle;
    _Out_ PMDL pMdl;
} DXGKARGCB_ALLOCATEPAGESFORMDL;
typedef struct _DXGKARGCB_FREEPAGESFROMMDL
{
    _In_ HANDLE hMemoryHandle;
} DXGKARGCB_FREEPAGESFROMMDL;
typedef struct _DXGKARGCB_MAPMDLTOIOMMU
{
    _In_ PMDL pMdl;
    _Out_ HANDLE hMemoryHandle;
} DXGKARGCB_MAPMDLTOIOMMU;
typedef struct _DXGKARGCB_UNMAPMDLFROMIOMMU
{
    _In_ HANDLE hMemoryHandle;
} DXGKARGCB_UNMAPMDLFROMIOMMU;
typedef struct _DXGKARGCB_PINFRAMEBUFFERFORSAVE
{
    _In_ UINT PhysicalAdapterIndex;
    _In_ SIZE_T CommitSize;
    _Out_ PMDL pMdl;
} DXGKARGCB_PINFRAMEBUFFERFORSAVE;
typedef struct _DXGKARGCB_UNPINFRAMEBUFFERFORSAVE
{
    _In_ UINT PhysicalAdapterIndex;
} DXGKARGCB_UNPINFRAMEBUFFERFORSAVE;
typedef struct _DXGKARGCB_MAPFRAMEBUFFERPOINTER
{
    _In_ UINT PhysicalAdapterIndex;
    _In_ SIZE_T Size;
    _Inout_ SIZE_T Offset;
    _Out_ PVOID pBaseAddress;
} DXGKARGCB_MAPFRAMEBUFFERPOINTER;
typedef struct _DXGKARGCB_UNMAPFRAMEBUFFERPOINTER
{
    _In_ UINT PhysicalAdapterIndex;
    _In_ PVOID pBaseAddress;
} DXGKARGCB_UNMAPFRAMEBUFFERPOINTER;
typedef _Inout_ DXGKARGCB_ALLOCATECONTIGUOUSMEMORY* INOUT_PDXGKARGCB_ALLOCATECONTIGUOUSMEMORY;
typedef _In_ CONST DXGKARGCB_FREECONTIGUOUSMEMORY* IN_CONST_PDXGKARGCB_FREECONTIGUOUSMEMORY;
typedef _Inout_ DXGKARGCB_ALLOCATEPAGESFORMDL* INOUT_PDXGKARGCB_ALLOCATEPAGESFORMDL;
typedef _In_ CONST DXGKARGCB_FREEPAGESFROMMDL* IN_CONST_PDXGKARGCB_FREEPAGESFROMMDL;
typedef _Inout_ DXGKARGCB_MAPMDLTOIOMMU* INOUT_PDXGKARGCB_MAPMDLTOIOMMU;
typedef _In_ CONST DXGKARGCB_UNMAPMDLFROMIOMMU* IN_CONST_PDXGKARGCB_UNMAPMDLFROMIOMMU;
typedef _Inout_ DXGKARGCB_PINFRAMEBUFFERFORSAVE* INOUT_PDXGKARGCB_PINFRAMEBUFFERFORSAVE;
typedef _In_ CONST DXGKARGCB_UNPINFRAMEBUFFERFORSAVE* IN_CONST_PDXGKARGCB_UNPINFRAMEBUFFERFORSAVE;
typedef _Inout_ DXGKARGCB_MAPFRAMEBUFFERPOINTER* INOUT_PDXGKARGCB_MAPFRAMEBUFFERPOINTER;
typedef _In_ CONST DXGKARGCB_UNMAPFRAMEBUFFERPOINTER* IN_CONST_PDXGKARGCB_UNMAPFRAMEBUFFERPOINTER;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_ALLOCATECONTIGUOUSMEMORY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_ALLOCATECONTIGUOUSMEMORY)(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARGCB_ALLOCATECONTIGUOUSMEMORY pAllocateContiguousMemory
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_FREECONTIGUOUSMEMORY)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_FREECONTIGUOUSMEMORY)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_FREECONTIGUOUSMEMORY pFreeContiguousMemory
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_ALLOCATEPAGESFORMDL)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_ALLOCATEPAGESFORMDL)(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARGCB_ALLOCATEPAGESFORMDL pAllocatePagesForMdl
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_FREEPAGESFROMMDL)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_FREEPAGESFROMMDL)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_FREEPAGESFROMMDL pFreePagesFromMdl
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_MAPMDLTOIOMMU)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_MAPMDLTOIOMMU)(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARGCB_MAPMDLTOIOMMU pMapMdlToIoMmu
    );
typedef
    _Function_class_DXGK_(DXGKCB_UNMAPMDLFROMIOMMU)
    _IRQL_requires_(PASSIVE_LEVEL)
VOID
(APIENTRY CALLBACK *DXGKCB_UNMAPMDLFROMIOMMU)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_UNMAPMDLFROMIOMMU pUnmapMdlFromIoMmu
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_PINFRAMEBUFFERFORSAVE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_PINFRAMEBUFFERFORSAVE)(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARGCB_PINFRAMEBUFFERFORSAVE pPinFrameBufferForSave
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_UNPINFRAMEBUFFERFORSAVE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_UNPINFRAMEBUFFERFORSAVE)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_UNPINFRAMEBUFFERFORSAVE pUnpinFrameBufferForSave
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_MAPFRAMEBUFFERPOINTER)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_MAPFRAMEBUFFERPOINTER)(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARGCB_MAPFRAMEBUFFERPOINTER pMapFrameBufferPointer
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_UNMAPFRAMEBUFFERPOINTER)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_UNMAPFRAMEBUFFERPOINTER)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_UNMAPFRAMEBUFFERPOINTER pUnmapFrameBufferPointer
    );
typedef struct _DXGKARG_BEGINEXCLUSIVEACCESS
{
    UINT Reserved;
} DXGKARG_BEGINEXCLUSIVEACCESS;
typedef struct _DXGKARG_ENDEXCLUSIVEACCESS
{
    UINT Reserved;
} DXGKARG_ENDEXCLUSIVEACCESS;
typedef _In_ DXGKARG_BEGINEXCLUSIVEACCESS* IN_PDXGKARG_BEGINEXCLUSIVEACCESS;
typedef _In_ DXGKARG_ENDEXCLUSIVEACCESS* IN_PDXGKARG_ENDEXCLUSIVEACCESS;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_BEGINEXCLUSIVEACCESS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_BEGINEXCLUSIVEACCESS(
    IN_CONST_HANDLE hAdapter,
    IN_PDXGKARG_BEGINEXCLUSIVEACCESS pBeginExclusiveAccess
    );
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_ENDEXCLUSIVEACCESS)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_ENDEXCLUSIVEACCESS(
    IN_CONST_HANDLE hAdapter,
    IN_PDXGKARG_ENDEXCLUSIVEACCESS pEndExclusiveAccess
    );
typedef struct _DXGKARG_RESUMEHWENGINE
{
    UINT NodeOrdinal;
    UINT EngineOrdinal;
} DXGKARG_RESUMEHWENGINE;
typedef _Inout_ DXGKARG_RESUMEHWENGINE* INOUT_PDXGKARG_RESUMEHWENGINE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RESUMEHWENGINE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RESUMEHWENGINE(
    IN_CONST_HANDLE hAdapter,
    INOUT_PDXGKARG_RESUMEHWENGINE pResumeHwEngine
    );
typedef struct _DXGK_TRACKEDWORKLOAD_STATE_FLAGS
{
    union
    {
        struct
        {
            UINT Saturated : 1;
            UINT OptimalLevel : 1;
            UINT Reserved :30;
        };
        UINT Value;
    };
} DXGK_TRACKEDWORKLOAD_STATE_FLAGS;
typedef struct _DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL
{
    UINT PowerLevel;
    UINT EffectivePowerLevel;
    DXGK_TRACKEDWORKLOAD_STATE_FLAGS Flags;
} DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL;
typedef _Inout_ DXGKARG_SETTRACKEDWORKLOADPOWERLEVEL* INOUT_PDXGKARG_SETTRACKEDWORKLOADPOWERLEVEL;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SETTRACKEDWORKLOADPOWERLEVEL)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SETTRACKEDWORKLOADPOWERLEVEL(
    IN_CONST_HANDLE hContext,
    INOUT_PDXGKARG_SETTRACKEDWORKLOADPOWERLEVEL pTrackedWorkloadPowerLevel
    );
typedef struct _DXGKARGCB_SIGNALEVENT
{
    HANDLE hDxgkProcess;
    HANDLE hEvent;
    union
    {
        struct
        {
            UINT Reserved : 32;
        };
        UINT Flags;
    };
} DXGKARGCB_SIGNALEVENT;
typedef _In_ CONST DXGKARGCB_SIGNALEVENT * IN_CONST_PDXGKARGCB_SIGNALEVENT;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_SIGNALEVENT)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_SIGNALEVENT)(IN_CONST_PDXGKARGCB_SIGNALEVENT);
typedef enum _DXGK_FEATURE_ID
{
    DXGK_FEATURE_HWSCH = 0
} DXGK_FEATURE_ID;
typedef struct _DXGKARGCB_ISFEATUREENABLED
{
    HANDLE DeviceHandle;
    DXGK_FEATURE_ID FeatureId;
    BOOLEAN Enabled;
} DXGKARGCB_ISFEATUREENABLED;
typedef _Inout_ DXGKARGCB_ISFEATUREENABLED* INOUT_PDXGKARGCB_ISFEATUREENABLED;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_ISFEATUREENABLED)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_ISFEATUREENABLED)(INOUT_PDXGKARGCB_ISFEATUREENABLED);
typedef struct _DXGK_KSR_MEMORY_RANGE
{
    ULONGLONG MemoryRangeDesc;
} DXGK_KSR_MEMORY_RANGE, *PDXGK_KSR_MEMORY_RANGE;
typedef struct _DXGKARGCB_SAVEMEMORYFORHOTUPDATE
{
   UINT NumDataMemoryRanges;
   _Field_size_(NumDataMemoryRanges)
   DXGK_KSR_MEMORY_RANGE* pDataMemoryRanges;
   PMDL pDataMdl;
   UINT DataSize;
   _Field_size_(DataSize)
   PVOID pData;
   UINT MetaDataSize;
   _Field_size_(MetaDataSize)
   BYTE* pMetaData;
} DXGKARGCB_SAVEMEMORYFORHOTUPDATE;
typedef _In_ CONST DXGKARGCB_SAVEMEMORYFORHOTUPDATE* IN_CONST_PDXGKARGCB_SAVEMEMORYFORHOTUPDATE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKCB_SAVEMEMORYFORHOTUPDATE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
(APIENTRY CALLBACK *DXGKCB_SAVEMEMORYFORHOTUPDATE)(
    IN_CONST_HANDLE hAdapter,
    IN_CONST_PDXGKARGCB_SAVEMEMORYFORHOTUPDATE pArgs
    );
typedef struct _DXGK_SAVEMEMORYFORHOTUPDATEFLAGS
{
    union
    {
        struct
        {
            UINT CancelHotUpdate : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} DXGK_SAVEMEMORYFORHOTUPDATEFLAGS;
typedef struct _DXGKARG_SAVEMEMORYFORHOTUPDATE
{
    DXGK_SAVEMEMORYFORHOTUPDATEFLAGS Flags;
} DXGKARG_SAVEMEMORYFORHOTUPDATE;
typedef _In_ CONST DXGKARG_SAVEMEMORYFORHOTUPDATE* IN_CONST_PDXGKARG_SAVEMEMORYFORHOTUPDATE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_SAVEMEMORYFORHOTUPDATE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_SAVEMEMORYFORHOTUPDATE(
    IN_CONST_HANDLE hContext,
    IN_CONST_PDXGKARG_SAVEMEMORYFORHOTUPDATE pArgs
    );
typedef struct _DXGK_RESTOREMEMORYFORHOTUPDATEFLAGS
{
    union
    {
        struct
        {
            UINT RestoreComplete : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} DXGK_RESTOREMEMORYFORHOTUPDATEFLAGS;
typedef struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE
{
    DXGK_RESTOREMEMORYFORHOTUPDATEFLAGS Flags;
    PMDL pDataMdl;
    UINT MetaDataSize;
   _Field_size_(MetaDataSize)
    PVOID pMetaData;
} DXGKARG_RESTOREMEMORYFORHOTUPDATE;
typedef _In_ CONST DXGKARG_RESTOREMEMORYFORHOTUPDATE * IN_CONST_PDXGKARG_RESTOREMEMORYFORHOTUPDATE;
typedef
    _Check_return_
    _Function_class_DXGK_(DXGKDDI_RESTOREMEMORYFORHOTUPDATE)
    _IRQL_requires_(PASSIVE_LEVEL)
NTSTATUS
APIENTRY
DXGKDDI_RESTOREMEMORYFORHOTUPDATE(
    IN_CONST_HANDLE hContext,
    IN_CONST_PDXGKARG_RESTOREMEMORYFORHOTUPDATE pArgs
    );
typedef DXGKDDI_QUERYADAPTERINFO *PDXGKDDI_QUERYADAPTERINFO;
typedef DXGKDDI_CREATEDEVICE *PDXGKDDI_CREATEDEVICE;
typedef DXGKDDI_CREATEALLOCATION *PDXGKDDI_CREATEALLOCATION;
typedef DXGKDDI_DESTROYALLOCATION *PDXGKDDI_DESTROYALLOCATION;
typedef DXGKDDI_DESCRIBEALLOCATION *PDXGKDDI_DESCRIBEALLOCATION;
typedef DXGKDDI_GETSTANDARDALLOCATIONDRIVERDATA *PDXGKDDI_GETSTANDARDALLOCATIONDRIVERDATA;
typedef DXGKDDI_ACQUIRESWIZZLINGRANGE *PDXGKDDI_ACQUIRESWIZZLINGRANGE;
typedef DXGKDDI_RELEASESWIZZLINGRANGE *PDXGKDDI_RELEASESWIZZLINGRANGE;
typedef DXGKDDI_PATCH *PDXGKDDI_PATCH;
typedef DXGKDDI_SUBMITCOMMAND *PDXGKDDI_SUBMITCOMMAND;
typedef DXGKDDI_PREEMPTCOMMAND *PDXGKDDI_PREEMPTCOMMAND;
typedef DXGKDDI_CANCELCOMMAND *PDXGKDDI_CANCELCOMMAND;
typedef DXGKDDI_BUILDPAGINGBUFFER *PDXGKDDI_BUILDPAGINGBUFFER;
typedef DXGKDDI_SETPALETTE *PDXGKDDI_SETPALETTE;
typedef DXGKDDI_SETPOINTERPOSITION *PDXGKDDI_SETPOINTERPOSITION;
typedef DXGKDDI_SETPOINTERSHAPE *PDXGKDDI_SETPOINTERSHAPE;
typedef DXGKDDI_RESETFROMTIMEOUT *PDXGKDDI_RESETFROMTIMEOUT;
typedef DXGKDDI_RESTARTFROMTIMEOUT *PDXGKDDI_RESTARTFROMTIMEOUT;
typedef DXGKDDI_ESCAPE *PDXGKDDI_ESCAPE;
typedef DXGKDDI_COLLECTDBGINFO *PDXGKDDI_COLLECTDBGINFO;
typedef DXGKDDI_QUERYCURRENTFENCE *PDXGKDDI_QUERYCURRENTFENCE;
typedef DXGKDDI_ISSUPPORTEDVIDPN *PDXGKDDI_ISSUPPORTEDVIDPN;
typedef DXGKDDI_RECOMMENDFUNCTIONALVIDPN *PDXGKDDI_RECOMMENDFUNCTIONALVIDPN;
typedef DXGKDDI_ENUMVIDPNCOFUNCMODALITY *PDXGKDDI_ENUMVIDPNCOFUNCMODALITY;
typedef DXGKDDI_SETVIDPNSOURCEADDRESS *PDXGKDDI_SETVIDPNSOURCEADDRESS;
typedef DXGKDDI_SETVIDPNSOURCEVISIBILITY *PDXGKDDI_SETVIDPNSOURCEVISIBILITY;
typedef DXGKDDI_COMMITVIDPN *PDXGKDDI_COMMITVIDPN;
typedef DXGKDDI_UPDATEACTIVEVIDPNPRESENTPATH *PDXGKDDI_UPDATEACTIVEVIDPNPRESENTPATH;
typedef DXGKDDI_RECOMMENDMONITORMODES *PDXGKDDI_RECOMMENDMONITORMODES;
typedef DXGKDDI_RECOMMENDVIDPNTOPOLOGY *PDXGKDDI_RECOMMENDVIDPNTOPOLOGY;
typedef DXGKDDI_GETSCANLINE *PDXGKDDI_GETSCANLINE;
typedef DXGKDDI_STOPCAPTURE *PDXGKDDI_STOPCAPTURE;
typedef DXGKDDI_CONTROLINTERRUPT *PDXGKDDI_CONTROLINTERRUPT;
typedef DXGKDDI_CREATEOVERLAY *PDXGKDDI_CREATEOVERLAY;
typedef DXGKDDI_DESTROYDEVICE *PDXGKDDI_DESTROYDEVICE;
typedef DXGKDDI_OPENALLOCATIONINFO *PDXGKDDI_OPENALLOCATIONINFO;
typedef DXGKDDI_CLOSEALLOCATION *PDXGKDDI_CLOSEALLOCATION;
typedef DXGKDDI_RENDER *PDXGKDDI_RENDER;
typedef DXGKDDI_PRESENT *PDXGKDDI_PRESENT;
typedef DXGKDDI_UPDATEOVERLAY *PDXGKDDI_UPDATEOVERLAY;
typedef DXGKDDI_FLIPOVERLAY *PDXGKDDI_FLIPOVERLAY;
typedef DXGKDDI_DESTROYOVERLAY *PDXGKDDI_DESTROYOVERLAY;
typedef DXGKDDI_CREATECONTEXT *PDXGKDDI_CREATECONTEXT;
typedef DXGKDDI_DESTROYCONTEXT *PDXGKDDI_DESTROYCONTEXT;
typedef DXGKDDI_SETDISPLAYPRIVATEDRIVERFORMAT *PDXGKDDI_SETDISPLAYPRIVATEDRIVERFORMAT;
typedef DXGKDDI_RENDERKM *PDXGKDDI_RENDERKM;
typedef DXGKDDI_QUERYVIDPNHWCAPABILITY *PDXGKDDI_QUERYVIDPNHWCAPABILITY;
typedef DXGKDDISETPOWERCOMPONENTFSTATE *PDXGKDDISETPOWERCOMPONENTFSTATE;
typedef DXGKDDIPOWERRUNTIMECONTROLREQUEST *PDXGKDDIPOWERRUNTIMECONTROLREQUEST;
typedef DXGKDDI_QUERYDEPENDENTENGINEGROUP *PDXGKDDI_QUERYDEPENDENTENGINEGROUP;
typedef DXGKDDI_QUERYENGINESTATUS *PDXGKDDI_QUERYENGINESTATUS;
typedef DXGKDDI_RESETENGINE *PDXGKDDI_RESETENGINE;
typedef DXGKDDI_PRESENTDISPLAYONLY *PDXGKDDI_PRESENTDISPLAYONLY;
typedef DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY *PDXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY;
typedef DXGKDDI_GETNODEMETADATA *PDXGKDDI_GETNODEMETADATA;
typedef DXGKDDISETPOWERPSTATE *PDXGKDDISETPOWERPSTATE;
typedef DXGKDDI_CONTROLINTERRUPT2 *PDXGKDDI_CONTROLINTERRUPT2;
typedef DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT *PDXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT;
typedef DXGKDDI_FORMATHISTORYBUFFER *PDXGKDDI_FORMATHISTORYBUFFER;
typedef DXGKDDI_CALIBRATEGPUCLOCK *PDXGKDDI_CALIBRATEGPUCLOCK;
typedef DXGKDDI_RENDERGDI *PDXGKDDI_RENDERGDI;
typedef DXGKDDI_SUBMITCOMMANDVIRTUAL *PDXGKDDI_SUBMITCOMMANDVIRTUAL;
typedef DXGKDDI_SETROOTPAGETABLE *PDXGKDDI_SETROOTPAGETABLE;
typedef DXGKDDI_GETROOTPAGETABLESIZE *PDXGKDDI_GETROOTPAGETABLESIZE;
typedef DXGKDDI_MAPCPUHOSTAPERTURE *PDXGKDDI_MAPCPUHOSTAPERTURE;
typedef DXGKDDI_UNMAPCPUHOSTAPERTURE *PDXGKDDI_UNMAPCPUHOSTAPERTURE;
typedef DXGKDDI_CREATEPROCESS *PDXGKDDI_CREATEPROCESS;
typedef DXGKDDI_DESTROYPROCESS *PDXGKDDI_DESTROYPROCESS;
typedef DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT2 *PDXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT2;
typedef DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2 *PDXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY2;
typedef DXGKDDI_POWERRUNTIMESETDEVICEHANDLE *PDXGKDDI_POWERRUNTIMESETDEVICEHANDLE;
typedef DXGKDDI_SETSTABLEPOWERSTATE *PDXGKDDI_SETSTABLEPOWERSTATE;
typedef DXGKDDI_SETVIDEOPROTECTEDREGION *PDXGKDDI_SETVIDEOPROTECTEDREGION;
typedef DXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT3 *PDXGKDDI_CHECKMULTIPLANEOVERLAYSUPPORT3;
typedef DXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *PDXGKDDI_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3;
typedef DXGKDDI_POSTMULTIPLANEOVERLAYPRESENT *PDXGKDDI_POSTMULTIPLANEOVERLAYPRESENT;
typedef DXGKDDI_CONTROLMODEBEHAVIOR *PDXGKDDI_CONTROLMODEBEHAVIOR;
typedef DXGKDDI_UPDATEMONITORLINKINFO *PDXGKDDI_UPDATEMONITORLINKINFO;
typedef DXGKDDI_VALIDATEUPDATEALLOCATIONPROPERTY *PDXGKDDI_VALIDATEUPDATEALLOCATIONPROPERTY;
typedef DXGKDDI_CREATEHWCONTEXT *PDXGKDDI_CREATEHWCONTEXT;
typedef DXGKDDI_DESTROYHWCONTEXT *PDXGKDDI_DESTROYHWCONTEXT;
typedef DXGKDDI_CREATEHWQUEUE *PDXGKDDI_CREATEHWQUEUE;
typedef DXGKDDI_DESTROYHWQUEUE *PDXGKDDI_DESTROYHWQUEUE;
typedef DXGKDDI_SUBMITCOMMANDTOHWQUEUE *PDXGKDDI_SUBMITCOMMANDTOHWQUEUE;
typedef DXGKDDI_SWITCHTOHWCONTEXTLIST *PDXGKDDI_SWITCHTOHWCONTEXTLIST;
typedef DXGKDDI_RESETHWENGINE *PDXGKDDI_RESETHWENGINE;
typedef DXGKDDI_CREATEPERIODICFRAMENOTIFICATION *PDXGKDDI_CREATEPERIODICFRAMENOTIFICATION;
typedef DXGKDDI_DESTROYPERIODICFRAMENOTIFICATION *PDXGKDDI_DESTROYPERIODICFRAMENOTIFICATION;
typedef DXGKDDI_SETTIMINGSFROMVIDPN *PDXGKDDI_SETTIMINGSFROMVIDPN;
typedef DXGKDDI_SETTARGETGAMMA *PDXGKDDI_SETTARGETGAMMA;
typedef DXGKDDI_SETTARGETCONTENTTYPE *PDXGKDDI_SETTARGETCONTENTTYPE;
typedef DXGKDDI_SETTARGETANALOGCOPYPROTECTION *PDXGKDDI_SETTARGETANALOGCOPYPROTECTION;
typedef DXGKDDI_DISPLAYDETECTCONTROL *PDXGKDDI_DISPLAYDETECTCONTROL;
typedef DXGKDDI_QUERYCONNECTIONCHANGE *PDXGKDDI_QUERYCONNECTIONCHANGE;
typedef DXGKDDI_GETMULTIPLANEOVERLAYCAPS *PDXGKDDI_GETMULTIPLANEOVERLAYCAPS;
typedef DXGKDDI_GETPOSTCOMPOSITIONCAPS *PDXGKDDI_GETPOSTCOMPOSITIONCAPS;
typedef DXGKDDI_UPDATEHWCONTEXTSTATE *PDXGKDDI_UPDATEHWCONTEXTSTATE;
typedef DXGKDDI_CREATEPROTECTEDSESSION* PDXGKDDI_CREATEPROTECTEDSESSION;
typedef DXGKDDI_DESTROYPROTECTEDSESSION* PDXGKDDI_DESTROYPROTECTEDSESSION;
typedef DXGKDDI_SETSCHEDULINGLOGBUFFER *PDXGKDDI_SETSCHEDULINGLOGBUFFER;
typedef DXGKDDI_SETUPPRIORITYBANDS *PDXGKDDI_SETUPPRIORITYBANDS;
typedef DXGKDDI_NOTIFYFOCUSPRESENT *PDXGKDDI_NOTIFYFOCUSPRESENT;
typedef DXGKDDI_SETCONTEXTSCHEDULINGPROPERTIES *PDXGKDDI_SETCONTEXTSCHEDULINGPROPERTIES;
typedef DXGKDDI_SUSPENDCONTEXT *PDXGKDDI_SUSPENDCONTEXT;
typedef DXGKDDI_RESUMECONTEXT *PDXGKDDI_RESUMECONTEXT;
typedef DXGKDDI_SETVIRTUALMACHINEDATA *PDXGKDDI_SETVIRTUALMACHINEDATA;
typedef DXGKDDI_BEGINEXCLUSIVEACCESS *PDXGKDDI_BEGINEXCLUSIVEACCESS;
typedef DXGKDDI_ENDEXCLUSIVEACCESS *PDXGKDDI_ENDEXCLUSIVEACCESS;
typedef DXGKDDI_RESUMEHWENGINE *PDXGKDDI_RESUMEHWENGINE;
typedef DXGKDDI_SIGNALMONITOREDFENCE *PDXGKDDI_SIGNALMONITOREDFENCE;
typedef DXGKDDI_PRESENTTOHWQUEUE *PDXGKDDI_PRESENTTOHWQUEUE;
typedef DXGKDDI_VALIDATESUBMITCOMMAND *PDXGKDDI_VALIDATESUBMITCOMMAND;
typedef DXGKDDI_SETTRACKEDWORKLOADPOWERLEVEL *PDXGKDDI_SETTRACKEDWORKLOADPOWERLEVEL;
typedef DXGKDDI_SAVEMEMORYFORHOTUPDATE *PDXGKDDI_SAVEMEMORYFORHOTUPDATE;
typedef DXGKDDI_RESTOREMEMORYFORHOTUPDATE *PDXGKDDI_RESTOREMEMORYFORHOTUPDATE;
typedef DXGKDDI_SUBMITTARGETCONTROL *PDXGKDDI_SUBMITTARGETCONTROL;
#pragma warning(pop)
