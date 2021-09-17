#include <d3dkmdt.h>
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4200)
#pragma warning(disable:4214)
typedef struct _OBJECT_ATTRIBUTES OBJECT_ATTRIBUTES;
typedef OBJECT_ATTRIBUTES *POBJECT_ATTRIBUTES;
typedef struct _D3DKMT_CREATEDEVICEFLAGS
{
    UINT LegacyMode : 1;
    UINT RequestVSync : 1;
    UINT DisableGpuTimeout : 1;
    UINT Reserved : 29;
} D3DKMT_CREATEDEVICEFLAGS;
typedef struct _D3DKMT_CREATEDEVICE
{
    union
    {
        D3DKMT_HANDLE hAdapter;
        VOID* pAdapter;
    };
    D3DKMT_CREATEDEVICEFLAGS Flags;
    D3DKMT_HANDLE hDevice;
    VOID* pCommandBuffer;
    UINT CommandBufferSize;
    D3DDDI_ALLOCATIONLIST* pAllocationList;
    UINT AllocationListSize;
    D3DDDI_PATCHLOCATIONLIST* pPatchLocationList;
    UINT PatchLocationListSize;
} D3DKMT_CREATEDEVICE;
typedef struct _D3DKMT_DESTROYDEVICE
{
    D3DKMT_HANDLE hDevice;
}D3DKMT_DESTROYDEVICE;
typedef enum _D3DKMT_CLIENTHINT
{
    D3DKMT_CLIENTHINT_UNKNOWN = 0,
    D3DKMT_CLIENTHINT_OPENGL = 1,
    D3DKMT_CLIENTHINT_CDD = 2,
    D3DKMT_CLIENTHINT_DX7 = 7,
    D3DKMT_CLIENTHINT_DX8 = 8,
    D3DKMT_CLIENTHINT_DX9 = 9,
    D3DKMT_CLIENTHINT_DX10 = 10,
} D3DKMT_CLIENTHINT;
typedef struct _D3DKMT_CREATECONTEXT
{
    D3DKMT_HANDLE hDevice;
    UINT NodeOrdinal;
    UINT EngineAffinity;
    D3DDDI_CREATECONTEXTFLAGS Flags;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    D3DKMT_CLIENTHINT ClientHint;
    D3DKMT_HANDLE hContext;
    VOID* pCommandBuffer;
    UINT CommandBufferSize;
    D3DDDI_ALLOCATIONLIST* pAllocationList;
    UINT AllocationListSize;
    D3DDDI_PATCHLOCATIONLIST* pPatchLocationList;
    UINT PatchLocationListSize;
    D3DGPU_VIRTUAL_ADDRESS CommandBuffer;
} D3DKMT_CREATECONTEXT;
typedef struct _D3DKMT_DESTROYCONTEXT
{
    D3DKMT_HANDLE hContext;
} D3DKMT_DESTROYCONTEXT;
typedef struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE hDevice;
    D3DDDI_SYNCHRONIZATIONOBJECTINFO Info;
    D3DKMT_HANDLE hSyncObject;
} D3DKMT_CREATESYNCHRONIZATIONOBJECT;
typedef struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2
{
    D3DKMT_HANDLE hDevice;
    D3DDDI_SYNCHRONIZATIONOBJECTINFO2 Info;
    D3DKMT_HANDLE hSyncObject;
} D3DKMT_CREATESYNCHRONIZATIONOBJECT2;
typedef struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE hSyncObject;
} D3DKMT_DESTROYSYNCHRONIZATIONOBJECT;
typedef struct _D3DKMT_OPENSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE hSharedHandle;
    D3DKMT_HANDLE hSyncObject;
    UINT64 Reserved[8];
} D3DKMT_OPENSYNCHRONIZATIONOBJECT;
typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE hContext;
    UINT ObjectCount;
    D3DKMT_HANDLE ObjectHandleArray[D3DDDI_MAX_OBJECT_WAITED_ON];
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECT;
typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2
{
    D3DKMT_HANDLE hContext;
    UINT ObjectCount;
    D3DKMT_HANDLE ObjectHandleArray[D3DDDI_MAX_OBJECT_WAITED_ON];
    union
    {
        struct {
            UINT64 FenceValue;
        } Fence;
        UINT64 Reserved[8];
    };
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2;
typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT
{
    D3DKMT_HANDLE hContext;
    UINT ObjectCount;
    D3DKMT_HANDLE ObjectHandleArray[D3DDDI_MAX_OBJECT_SIGNALED];
    D3DDDICB_SIGNALFLAGS Flags;
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECT;
typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2
{
    D3DKMT_HANDLE hContext;
    UINT ObjectCount;
    D3DKMT_HANDLE ObjectHandleArray[D3DDDI_MAX_OBJECT_SIGNALED];
    D3DDDICB_SIGNALFLAGS Flags;
    ULONG BroadcastContextCount;
    D3DKMT_HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    union
    {
        struct {
            UINT64 FenceValue;
        } Fence;
        HANDLE CpuEventHandle;
        UINT64 Reserved[8];
    };
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2;
typedef struct _D3DKMT_LOCK
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hAllocation;
    UINT PrivateDriverData;
    UINT NumPages;
    CONST UINT* pPages;
    VOID* pData;
    D3DDDICB_LOCKFLAGS Flags;
    D3DGPU_VIRTUAL_ADDRESS GpuVirtualAddress;
} D3DKMT_LOCK;
typedef struct _D3DKMT_UNLOCK
{
    D3DKMT_HANDLE hDevice;
    UINT NumAllocations;
    CONST D3DKMT_HANDLE* phAllocations;
} D3DKMT_UNLOCK;
typedef enum _D3DKMDT_MODE_PRUNING_REASON
{
    D3DKMDT_MPR_UNINITIALIZED = 0,
    D3DKMDT_MPR_ALLCAPS = 1,
    D3DKMDT_MPR_DESCRIPTOR_MONITOR_SOURCE_MODE = 2,
    D3DKMDT_MPR_DESCRIPTOR_MONITOR_FREQUENCY_RANGE = 3,
    D3DKMDT_MPR_DESCRIPTOR_OVERRIDE_MONITOR_SOURCE_MODE = 4,
    D3DKMDT_MPR_DESCRIPTOR_OVERRIDE_MONITOR_FREQUENCY_RANGE = 5,
    D3DKMDT_MPR_DEFAULT_PROFILE_MONITOR_SOURCE_MODE = 6,
    D3DKMDT_MPR_DRIVER_RECOMMENDED_MONITOR_SOURCE_MODE = 7,
    D3DKMDT_MPR_MONITOR_FREQUENCY_RANGE_OVERRIDE = 8,
    D3DKMDT_MPR_CLONE_PATH_PRUNED = 9,
    D3DKMDT_MPR_MAXVALID = 10
}
D3DKMDT_MODE_PRUNING_REASON;
typedef struct _D3DKMDT_DISPLAYMODE_FLAGS
{
    UINT ValidatedAgainstMonitorCaps : 1;
    UINT RoundedFakeMode : 1;
    UINT : 0;
    D3DKMDT_MODE_PRUNING_REASON ModePruningReason : 4;
    UINT Stereo : 1;
    UINT AdvancedScanCapable : 1;
    UINT PreferredTiming : 1;
    UINT PhysicalModeSupported : 1;
    UINT Reserved : 24;
}
D3DKMDT_DISPLAYMODE_FLAGS;
typedef struct _D3DKMT_DISPLAYMODE
{
    UINT Width;
    UINT Height;
    D3DDDIFORMAT Format;
    UINT IntegerRefreshRate;
    D3DDDI_RATIONAL RefreshRate;
    D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering;
    D3DDDI_ROTATION DisplayOrientation;
    UINT DisplayFixedOutput;
    D3DKMDT_DISPLAYMODE_FLAGS Flags;
} D3DKMT_DISPLAYMODE;
typedef struct _D3DKMT_GETDISPLAYMODELIST
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_DISPLAYMODE* pModeList;
    UINT ModeCount;
} D3DKMT_GETDISPLAYMODELIST;
typedef struct _D3DKMT_DISPLAYMODELIST
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT ModeCount;
    D3DKMT_DISPLAYMODE pModeList[0];
} D3DKMT_DISPLAYMODELIST;
typedef struct _D3DKMT_SETDISPLAYMODE_FLAGS
{
    BOOLEAN PreserveVidPn : 1;
    UINT Reserved : 31;
}
D3DKMT_SETDISPLAYMODE_FLAGS;
typedef struct _D3DKMT_SETDISPLAYMODE
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hPrimaryAllocation;
    D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING ScanLineOrdering;
    D3DDDI_ROTATION DisplayOrientation;
    UINT PrivateDriverFormatAttribute;
    D3DKMT_SETDISPLAYMODE_FLAGS Flags;
} D3DKMT_SETDISPLAYMODE;
typedef struct _D3DKMT_MULTISAMPLEMETHOD
{
    UINT NumSamples;
    UINT NumQualityLevels;
    UINT Reserved;
} D3DKMT_MULTISAMPLEMETHOD;
typedef struct _D3DKMT_GETMULTISAMPLEMETHODLIST
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT Width;
    UINT Height;
    D3DDDIFORMAT Format;
    D3DKMT_MULTISAMPLEMETHOD* pMethodList;
    UINT MethodCount;
} D3DKMT_GETMULTISAMPLEMETHODLIST;
typedef struct _D3DKMT_PRESENTFLAGS
{
    union
    {
        struct
        {
            UINT Blt : 1;
            UINT ColorFill : 1;
            UINT Flip : 1;
            UINT FlipDoNotFlip : 1;
            UINT FlipDoNotWait : 1;
            UINT FlipRestart : 1;
            UINT DstRectValid : 1;
            UINT SrcRectValid : 1;
            UINT RestrictVidPnSource : 1;
            UINT SrcColorKey : 1;
            UINT DstColorKey : 1;
            UINT LinearToSrgb : 1;
            UINT PresentCountValid : 1;
            UINT Rotate : 1;
            UINT PresentToBitmap : 1;
            UINT RedirectedFlip : 1;
            UINT RedirectedBlt : 1;
            UINT FlipStereo : 1;
            UINT FlipStereoTemporaryMono : 1;
            UINT FlipStereoPreferRight : 1;
            UINT BltStereoUseRight : 1;
            UINT PresentHistoryTokenOnly : 1;
            UINT PresentRegionsValid : 1;
            UINT PresentDDA : 1;
            UINT ProtectedContentBlankedOut : 1;
            UINT RemoteSession : 1;
            UINT CrossAdapter : 1;
            UINT DurationValid : 1;
            UINT PresentIndirect : 1;
            UINT PresentHMD : 1;
            UINT Reserved : 2;
        };
        UINT Value;
    };
} D3DKMT_PRESENTFLAGS;
typedef enum _D3DKMT_PRESENT_MODEL
{
    D3DKMT_PM_UNINITIALIZED = 0,
    D3DKMT_PM_REDIRECTED_GDI = 1,
    D3DKMT_PM_REDIRECTED_FLIP = 2,
    D3DKMT_PM_REDIRECTED_BLT = 3,
    D3DKMT_PM_REDIRECTED_VISTABLT = 4,
    D3DKMT_PM_SCREENCAPTUREFENCE = 5,
    D3DKMT_PM_REDIRECTED_GDI_SYSMEM = 6,
    D3DKMT_PM_REDIRECTED_COMPOSITION = 7,
    D3DKMT_PM_SURFACECOMPLETE = 8,
    D3DKMT_PM_FLIPMANAGER = 9,
} D3DKMT_PRESENT_MODEL;
typedef enum _D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE
{
    D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_SUBMITTED = 0,
    D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE_FLIP_COMPLETE = 1,
} D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE;
typedef struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS
{
    union
    {
        struct
        {
            UINT Video : 1;
            UINT RestrictedContent : 1;
            UINT ClipToView : 1;
            UINT StereoPreferRight : 1;
            UINT TemporaryMono : 1;
            UINT FlipRestart : 1;
            UINT HDRMetaDataChanged : 1;
            UINT AlphaMode : 2;
            UINT SignalLimitOnTokenCompletion : 1;
            UINT YCbCrFlags : 3;
            UINT IndependentFlip : 1;
            D3DKMT_FLIPMODEL_INDEPENDENT_FLIP_STAGE IndependentFlipStage : 2;
            UINT IndependentFlipReleaseCount : 2;
            UINT IndependentFlipForceNotifyDwm : 1;
            UINT UseCustomDuration : 1;
            UINT IndependentFlipRequestDwmConfirm:1;
            UINT IndependentFlipCandidate : 1;
            UINT IndependentFlipCheckNeeded : 1;
            UINT IndependentFlipTrueImmediate : 1;
            UINT IndependentFlipRequestDwmExit : 1;
            UINT CompSurfaceNotifiedEarly : 1;
            UINT IndependentFlipDoNotFlip : 1;
            UINT Reserved : 5;
        };
        UINT Value;
    };
} D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS;
typedef struct _D3DKMT_DIRTYREGIONS
{
    UINT NumRects;
    RECT Rects[D3DKMT_MAX_PRESENT_HISTORY_RECTS];
} D3DKMT_DIRTYREGIONS;
typedef struct _D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN
{
    ULONG64 hPrivateData;
} D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN
{
    ULONG64 hPrivateData;
    ULONGLONG PresentAtQpc;
    union
    {
        struct
        {
            UINT Discard : 1;
            UINT PresentAt : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    }Flags;
} D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN
{
    ULONG64 hLogicalSurface;
    ULONG64 hPhysicalSurface;
    RECT ScrollRect;
    POINT ScrollOffset;
    D3DKMT_DIRTYREGIONS DirtyRegions;
} D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN
{
    ULONG64 hlsurf;
    DWORD dwDirtyFlags;
    UINT64 uiCookie;
} D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN;
typedef ULONGLONG D3DKMT_VISTABLTMODEL_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_FENCE_PRESENTHISTORYTOKEN
{
    UINT64 Key;
} D3DKMT_FENCE_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN
{
    ULONG64 hLogicalSurface;
    ULONG64 hPhysicalSurface;
    ULONG64 EventId;
    D3DKMT_DIRTYREGIONS DirtyRegions;
} D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_SCATTERBLT
{
    ULONG64 hLogicalSurfaceDestination;
    LONG64 hDestinationCompSurfDWM;
    UINT64 DestinationCompositionBindingId;
    RECT SourceRect;
    POINT DestinationOffset;
} D3DKMT_SCATTERBLT;
typedef struct _D3DKMT_SCATTERBLTS
{
    UINT NumBlts;
    D3DKMT_SCATTERBLT Blts[D3DKMT_MAX_PRESENT_HISTORY_SCATTERBLTS];
} D3DKMT_SCATTERBLTS;
typedef struct _D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN
{
    UINT64 FenceValue;
    ULONG64 hLogicalSurface;
    UINT_PTR dxgContext;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT SwapChainIndex;
    UINT64 PresentLimitSemaphoreId;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    D3DKMT_FLIPMODEL_PRESENTHISTORYTOKENFLAGS Flags;
    LONG64 hCompSurf;
    LUID compSurfLuid;
    UINT64 confirmationCookie;
    UINT64 CompositionSyncKey;
    UINT RemainingTokens;
    RECT ScrollRect;
    POINT ScrollOffset;
    UINT PresentCount;
    FLOAT RevealColor[4];
    D3DDDI_ROTATION Rotation;
    union
    {
        D3DKMT_SCATTERBLTS ScatterBlts;
        struct
        {
            HANDLE hSyncObject;
            D3DDDI_HDR_METADATA_TYPE HDRMetaDataType;
            union
            {
                D3DDDI_HDR_METADATA_HDR10 HDRMetaDataHDR10;
                D3DDDI_HDR_METADATA_HDR10PLUS HDRMetaDataHDR10Plus;
            };
        };
    };
    D3DKMT_HANDLE Reserved;
    RECT SourceRect;
    UINT DestWidth;
    UINT DestHeight;
    RECT TargetRect;
    FLOAT Transform[6];
    UINT CustomDuration;
    D3DDDI_FLIPINTERVAL_TYPE CustomDurationFlipInterval;
    UINT PlaneIndex;
    D3DDDI_COLOR_SPACE_TYPE ColorSpace;
    D3DKMT_DIRTYREGIONS DirtyRegions;
} D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN
{
    ULONG64 hLogicalSurface;
} D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_PRESENTHISTORYTOKEN
{
    D3DKMT_PRESENT_MODEL Model;
    UINT TokenSize;
    UINT64 CompositionBindingId;
    union
    {
        D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN Flip;
        D3DKMT_BLTMODEL_PRESENTHISTORYTOKEN Blt;
        D3DKMT_VISTABLTMODEL_PRESENTHISTORYTOKEN VistaBlt;
        D3DKMT_GDIMODEL_PRESENTHISTORYTOKEN Gdi;
        D3DKMT_FENCE_PRESENTHISTORYTOKEN Fence;
        D3DKMT_GDIMODEL_SYSMEM_PRESENTHISTORYTOKEN GdiSysMem;
        D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN Composition;
        D3DKMT_FLIPMANAGER_PRESENTHISTORYTOKEN FlipManager;
        D3DKMT_SURFACECOMPLETE_PRESENTHISTORYTOKEN SurfaceComplete;
    }
    Token;
} D3DKMT_PRESENTHISTORYTOKEN;
typedef struct _D3DKMT_PRESENT_RGNS
{
    UINT DirtyRectCount;
    _Field_size_( DirtyRectCount ) const RECT* pDirtyRects;
    UINT MoveRectCount;
    _Field_size_( MoveRectCount ) const D3DKMT_MOVE_RECT* pMoveRects;
}D3DKMT_PRESENT_RGNS;
typedef struct _D3DKMT_PRESENT
{
    union
    {
        D3DKMT_HANDLE hDevice;
        D3DKMT_HANDLE hContext;
    };
    HWND hWindow;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_HANDLE hSource;
    D3DKMT_HANDLE hDestination;
    UINT Color;
    RECT DstRect;
    RECT SrcRect;
    UINT SubRectCnt;
    CONST RECT* pSrcSubRects;
    UINT PresentCount;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    D3DKMT_PRESENTFLAGS Flags;
    ULONG BroadcastContextCount;
    D3DKMT_HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    HANDLE PresentLimitSemaphore;
    D3DKMT_PRESENTHISTORYTOKEN PresentHistoryToken;
    D3DKMT_PRESENT_RGNS* pPresentRegions;
    union
    {
        D3DKMT_HANDLE hAdapter;
        D3DKMT_HANDLE hIndirectContext;
    };
    UINT Duration;
    _Field_size_(BroadcastContextCount)
    D3DKMT_HANDLE* BroadcastSrcAllocation;
    _Field_size_opt_(BroadcastContextCount)
    D3DKMT_HANDLE* BroadcastDstAllocation;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateDriverDataSize)
    PVOID pPrivateDriverData;
    BOOLEAN bOptimizeForComposition;
} D3DKMT_PRESENT;
typedef struct _D3DKMT_PRESENT_REDIRECTEDS_FLAGS
{
    union
    {
        struct
        {
            UINT Reserved : 32;
        };
        UINT Value;
    };
}D3DKMT_PRESENT_REDIRECTED_FLAGS;
typedef struct _D3DKMT_PRESENT_REDIRECTED
{
    D3DKMT_HANDLE hSyncObj;
    D3DKMT_HANDLE hDevice;
    ULONGLONG WaitedFenceValue;
    D3DKMT_PRESENTHISTORYTOKEN PresentHistoryToken;
    D3DKMT_PRESENT_REDIRECTED_FLAGS Flags;
    D3DKMT_HANDLE hSource;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateDriverDataSize)
    PVOID pPrivateDriverData;
}D3DKMT_PRESENT_REDIRECTED;
typedef struct _D3DKMT_SUBMITPRESENTBLTTOHWQUEUE
{
    D3DKMT_HANDLE hHwQueue;
    UINT64 HwQueueProgressFenceId;
    D3DKMT_PRESENT PrivatePresentData;
} D3DKMT_SUBMITPRESENTBLTTOHWQUEUE;
typedef struct _D3DKMT_SUBMITPRESENTTOHWQUEUE
{
    _Field_size_(PrivatePresentData.BroadcastContextCount + 1)
    D3DKMT_HANDLE* hHwQueues;
    D3DKMT_PRESENT PrivatePresentData;
} D3DKMT_SUBMITPRESENTTOHWQUEUE;
typedef enum D3DKMT_MULTIPLANE_OVERLAY_FLAGS
{
    D3DKMT_MULTIPLANE_OVERLAY_FLAG_VERTICAL_FLIP = 0x1,
    D3DKMT_MULTIPLANE_OVERLAY_FLAG_HORIZONTAL_FLIP = 0x2,
} D3DKMT_MULTIPLANE_OVERLAY_FLAGS;
typedef enum D3DKMT_MULTIPLANE_OVERLAY_BLEND
{
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_OPAQUE = 0x0,
    D3DKMT_MULTIPLANE_OVERLAY_BLEND_ALPHABLEND = 0x1,
} D3DKMT_MULTIPLANE_OVERLAY_BLEND;
typedef enum D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT
{
    D3DKMT_MULIIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_PROGRESSIVE = 0,
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_TOP_FIELD_FIRST = 1,
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT_INTERLACED_BOTTOM_FIELD_FIRST = 2
} D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT;
typedef enum D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAGS
{
    D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAG_NOMINAL_RANGE = 0x1,
    D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAG_BT709 = 0x2,
    D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAG_xvYCC = 0x4,
} D3DKMT_MULTIPLANE_OVERLAY_YCbCr_FLAGS;
typedef enum D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT
{
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO = 0,
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_HORIZONTAL = 1,
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_VERTICAL = 2,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_SEPARATE = 3,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_MONO_OFFSET = 4,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_ROW_INTERLEAVED = 5,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_COLUMN_INTERLEAVED = 6,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT_CHECKERBOARD = 7
} D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT;
typedef enum _DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE
{
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_NONE = 0,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME0 = 1,
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_FRAME1 = 2,
} DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE;
typedef enum _DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY
{
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR = 0x1,
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH = 0x2,
} DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY;
typedef struct D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES
{
    UINT Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    D3DDDI_ROTATION Rotation;
    D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend;
    UINT DirtyRectCount;
    RECT* pDirtyRects;
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    UINT YCbCrFlags;
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT StereoFormat;
    BOOL StereoLeftViewFrame0;
    BOOL StereoBaseViewFrame0;
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode;
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
} D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES;
typedef struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE
{
    D3DKMT_HANDLE hResource;
    LUID CompSurfaceLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE;
typedef struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO
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
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO;
typedef struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT
{
    D3DKMT_HANDLE hDevice;
    UINT PlaneCount;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE* pOverlayPlanes;
    BOOL Supported;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2
{
    UINT Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    D3DDDI_ROTATION Rotation;
    D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend;
    UINT DirtyRectCount;
    RECT* pDirtyRects;
    D3DKMT_MULTIPLANE_OVERLAY_VIDEO_FRAME_FORMAT VideoFrameFormat;
    D3DDDI_COLOR_SPACE_TYPE ColorSpace;
    D3DKMT_MULTIPLANE_OVERLAY_STEREO_FORMAT StereoFormat;
    BOOL StereoLeftViewFrame0;
    BOOL StereoBaseViewFrame0;
    DXGKMT_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode;
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
    UINT Reserved1;
} D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2;
typedef struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2
{
    UINT LayerIndex;
    D3DKMT_HANDLE hResource;
    LUID CompSurfaceLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2 PlaneAttributes;
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2;
typedef struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hDevice;
    UINT PlaneCount;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2* pOverlayPlanes;
    BOOL Supported;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY2
{
    UINT LayerIndex;
    BOOL Enabled;
    D3DKMT_HANDLE hAllocation;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES2 PlaneAttributes;
} D3DKMT_MULTIPLANE_OVERLAY2;
typedef struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2
{
    D3DKMT_HANDLE hAdapter;
    union
    {
        D3DKMT_HANDLE hDevice;
        D3DKMT_HANDLE hContext;
    };
    ULONG BroadcastContextCount;
    D3DKMT_HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PresentCount;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    D3DKMT_PRESENTFLAGS Flags;
    UINT PresentPlaneCount;
    D3DKMT_MULTIPLANE_OVERLAY2* pPresentPlanes;
    UINT Duration;
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY2;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3
{
    UINT Flags;
    RECT SrcRect;
    RECT DstRect;
    RECT ClipRect;
    D3DDDI_ROTATION Rotation;
    D3DKMT_MULTIPLANE_OVERLAY_BLEND Blend;
    UINT DirtyRectCount;
    _Field_size_(DirtyRectCount) RECT* pDirtyRects;
    D3DDDI_COLOR_SPACE_TYPE ColorSpace;
    DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY StretchQuality;
    UINT SDRWhiteLevel;
} D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3;
typedef struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3
{
    UINT LayerIndex;
    D3DKMT_HANDLE hResource;
    LUID CompSurfaceLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3* pPlaneAttributes;
} D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS
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
} D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION
{
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_FLAGS Flags;
    RECT SrcRect;
    RECT DstRect;
    D3DDDI_ROTATION Rotation;
} D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION PostComposition;
} D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE;
typedef struct _D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hDevice;
    UINT PlaneCount;
    _Field_size_(PlaneCount)
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3** ppOverlayPlanes;
    UINT PostCompositionCount;
    _Field_size_(PostCompositionCount)
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE** ppPostComposition;
    BOOL Supported;
    D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO ReturnInfo;
} D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3;
typedef struct _D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS
{
    union
    {
        struct
        {
            UINT Enabled : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS;
typedef struct _D3DKMT_PLANE_SPECIFIC_OUTPUT_FLAGS
{
    union
    {
        struct
        {
            UINT FlipConvertedToImmediate : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} D3DKMT_PLANE_SPECIFIC_OUTPUT_FLAGS;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY3
{
    UINT LayerIndex;
    D3DKMT_PLANE_SPECIFIC_INPUT_FLAGS InputFlags;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    UINT MaxImmediateFlipLine;
    UINT AllocationCount;
    _Field_size_(AllocationCount)
    D3DKMT_HANDLE* pAllocationList;
    UINT DriverPrivateDataSize;
    _Field_size_bytes_(DriverPrivateDataSize)
    VOID* pDriverPrivateData;
    const D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3* pPlaneAttributes;
} D3DKMT_MULTIPLANE_OVERLAY3;
typedef struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS
{
    union
    {
        struct
        {
            UINT FlipStereo : 1;
            UINT FlipStereoTemporaryMono : 1;
            UINT FlipStereoPreferRight : 1;
            UINT FlipDoNotWait : 1;
            UINT FlipDoNotFlip : 1;
            UINT FlipRestart : 1;
            UINT DurationValid : 1;
            UINT HDRMetaDataValid : 1;
            UINT HMD : 1;
            UINT TrueImmediate : 1;
            UINT Reserved :22;
        };
        UINT Value;
    };
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS;
typedef struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3
{
    D3DKMT_HANDLE hAdapter;
    UINT ContextCount;
    _Field_size_(ContextCount)
    D3DKMT_HANDLE* pContextList;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PresentCount;
    D3DKMT_PRESENT_MULTIPLANE_OVERLAY_FLAGS Flags;
    UINT PresentPlaneCount;
    _Field_size_(PresentPlaneCount)
    D3DKMT_MULTIPLANE_OVERLAY3** ppPresentPlanes;
    D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION* pPostComposition;
    UINT Duration;
    D3DDDI_HDR_METADATA_TYPE HDRMetaDataType;
    UINT HDRMetaDataSize;
    _Field_size_bytes_(HDRMetaDataSize)
    const VOID* pHDRMetaData;
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY3;
typedef struct _D3DKMT_MULTIPLANE_OVERLAY_CAPS
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
            UINT Version3DDISupport : 1;
            UINT Reserved : 20;
        };
        UINT Value;
    };
} D3DKMT_MULTIPLANE_OVERLAY_CAPS;
typedef struct _D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT MaxPlanes;
    UINT MaxRGBPlanes;
    UINT MaxYUVPlanes;
    D3DKMT_MULTIPLANE_OVERLAY_CAPS OverlayCaps;
    float MaxStretchFactor;
    float MaxShrinkFactor;
} D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS;
typedef struct _D3DKMT_GET_POST_COMPOSITION_CAPS
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    float MaxStretchFactor;
    float MaxShrinkFactor;
} D3DKMT_GET_POST_COMPOSITION_CAPS;
typedef struct _D3DKMT_MULTIPLANEOVERLAY_STRETCH_SUPPORT
{
    UINT VidPnSourceId;
    BOOL Update;
    BOOL Supported;
} D3DKMT_MULTIPLANEOVERLAY_STRETCH_SUPPORT;
typedef struct D3DKMT_MULTIPLANE_OVERLAY
{
    UINT LayerIndex;
    BOOL Enabled;
    D3DKMT_HANDLE hAllocation;
    D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES PlaneAttributes;
} D3DKMT_MULTIPLANE_OVERLAY;
typedef struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY
{
    union
    {
        D3DKMT_HANDLE hDevice;
        D3DKMT_HANDLE hContext;
    };
    ULONG BroadcastContextCount;
    D3DKMT_HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PresentCount;
    D3DDDI_FLIPINTERVAL_TYPE FlipInterval;
    D3DKMT_PRESENTFLAGS Flags;
    UINT PresentPlaneCount;
    D3DKMT_MULTIPLANE_OVERLAY* pPresentPlanes;
    UINT Duration;
} D3DKMT_PRESENT_MULTIPLANE_OVERLAY;
typedef struct _D3DKMT_RENDERFLAGS
{
    UINT ResizeCommandBuffer : 1;
    UINT ResizeAllocationList : 1;
    UINT ResizePatchLocationList : 1;
    UINT NullRendering : 1;
    UINT PresentRedirected : 1;
    UINT RenderKm : 1;
    UINT RenderKmReadback : 1;
    UINT Reserved : 25;
} D3DKMT_RENDERFLAGS;
typedef struct _D3DKMT_OUTPUTDUPLPRESENTFLAGS
{
    union
    {
        struct
        {
            UINT ProtectedContentBlankedOut : 1;
            UINT RemoteSession : 1;
            UINT FullScreenPresent : 1;
            UINT PresentIndirect : 1;
            UINT Reserved : 28;
        };
        UINT Value;
    };
}D3DKMT_OUTPUTDUPLPRESENTFLAGS;
typedef struct _D3DKMT_OUTPUTDUPLPRESENT
{
    D3DKMT_HANDLE hContext;
    D3DKMT_HANDLE hSource;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    ULONG BroadcastContextCount;
    D3DKMT_HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    D3DKMT_PRESENT_RGNS PresentRegions;
    D3DKMT_OUTPUTDUPLPRESENTFLAGS Flags;
    D3DKMT_HANDLE hIndirectContext;
} D3DKMT_OUTPUTDUPLPRESENT;
typedef struct _D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE
{
    D3DKMT_HANDLE hSource;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    ULONG BroadcastHwQueueCount;
    _Field_size_(BroadcastHwQueueCount)
    D3DKMT_HANDLE* hHwQueues;
    D3DKMT_PRESENT_RGNS PresentRegions;
    D3DKMT_OUTPUTDUPLPRESENTFLAGS Flags;
    D3DKMT_HANDLE hIndirectHwQueue;
} D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE;
typedef struct _D3DKMT_RENDER
{
    union
    {
        D3DKMT_HANDLE hDevice;
        D3DKMT_HANDLE hContext;
    };
    UINT CommandOffset;
    UINT CommandLength;
    UINT AllocationCount;
    UINT PatchLocationCount;
    VOID* pNewCommandBuffer;
    UINT NewCommandBufferSize;
    D3DDDI_ALLOCATIONLIST* pNewAllocationList;
    UINT NewAllocationListSize;
    D3DDDI_PATCHLOCATIONLIST* pNewPatchLocationList;
    UINT NewPatchLocationListSize;
    D3DKMT_RENDERFLAGS Flags;
    ULONGLONG PresentHistoryToken;
    ULONG BroadcastContextCount;
    D3DKMT_HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    ULONG QueuedBufferCount;
    D3DGPU_VIRTUAL_ADDRESS NewCommandBuffer;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} D3DKMT_RENDER;
typedef enum _D3DKMT_STANDARDALLOCATIONTYPE
{
    D3DKMT_STANDARDALLOCATIONTYPE_EXISTINGHEAP = 1,
} D3DKMT_STANDARDALLOCATIONTYPE;
typedef struct _D3DKMT_STANDARDALLOCATION_EXISTINGHEAP
{
    SIZE_T Size;
} D3DKMT_STANDARDALLOCATION_EXISTINGHEAP;
typedef struct _D3DKMT_CREATESTANDARDALLOCATIONFLAGS
{
    union
    {
        struct
        {
            UINT Reserved : 32;
        };
        UINT Value;
    };
} D3DKMT_CREATESTANDARDALLOCATIONFLAGS;
typedef struct _D3DKMT_CREATESTANDARDALLOCATION
{
    D3DKMT_STANDARDALLOCATIONTYPE Type;
    union
    {
        D3DKMT_STANDARDALLOCATION_EXISTINGHEAP ExistingHeapData;
    };
    D3DKMT_CREATESTANDARDALLOCATIONFLAGS Flags;
} D3DKMT_CREATESTANDARDALLOCATION;
typedef struct _D3DKMT_CREATEALLOCATIONFLAGS
{
    UINT CreateResource : 1;
    UINT CreateShared : 1;
    UINT NonSecure : 1;
    UINT CreateProtected : 1;
    UINT RestrictSharedAccess : 1;
    UINT ExistingSysMem : 1;
    UINT NtSecuritySharing : 1;
    UINT ReadOnly : 1;
    UINT CreateWriteCombined : 1;
    UINT CreateCached : 1;
    UINT SwapChainBackBuffer : 1;
    UINT CrossAdapter : 1;
    UINT OpenCrossAdapter : 1;
    UINT PartialSharedCreation : 1;
    UINT Zeroed : 1;
    UINT WriteWatch : 1;
    UINT StandardAllocation : 1;
    UINT ExistingSection : 1;
    UINT Reserved : 14;
} D3DKMT_CREATEALLOCATIONFLAGS;
typedef struct _D3DKMT_CREATEALLOCATION
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hResource;
    D3DKMT_HANDLE hGlobalShare;
    _Field_size_bytes_(PrivateRuntimeDataSize)
    CONST VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
    union
    {
        D3DKMT_CREATESTANDARDALLOCATION* pStandardAllocation;
        _Field_size_bytes_(PrivateDriverDataSize)
        CONST VOID* pPrivateDriverData;
    };
    UINT PrivateDriverDataSize;
    UINT NumAllocations;
    union
    {
        _Field_size_(NumAllocations) D3DDDI_ALLOCATIONINFO* pAllocationInfo;
        _Field_size_(NumAllocations) D3DDDI_ALLOCATIONINFO2* pAllocationInfo2;
    };
    D3DKMT_CREATEALLOCATIONFLAGS Flags;
    HANDLE hPrivateRuntimeResourceHandle;
} D3DKMT_CREATEALLOCATION;
typedef struct _D3DKMT_OPENRESOURCE
{
                                                        D3DKMT_HANDLE hDevice;
                                                        D3DKMT_HANDLE hGlobalShare;
                                                        UINT NumAllocations;
   union {
    _Field_size_(NumAllocations) D3DDDI_OPENALLOCATIONINFO* pOpenAllocationInfo;
    _Field_size_(NumAllocations) D3DDDI_OPENALLOCATIONINFO2* pOpenAllocationInfo2;
   };
    _Field_size_bytes_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;
                                                        UINT PrivateRuntimeDataSize;
    _Field_size_bytes_(ResourcePrivateDriverDataSize) VOID* pResourcePrivateDriverData;
                                                        UINT ResourcePrivateDriverDataSize;
    _Field_size_bytes_(TotalPrivateDriverDataBufferSize) VOID* pTotalPrivateDriverDataBuffer;
                                                        UINT TotalPrivateDriverDataBufferSize;
                                                        D3DKMT_HANDLE hResource;
}D3DKMT_OPENRESOURCE;
typedef struct _D3DKMT_OPENRESOURCEFROMNTHANDLE
{
                                                        D3DKMT_HANDLE hDevice;
                                                        HANDLE hNtHandle;
                                                        UINT NumAllocations;
    _Field_size_(NumAllocations) D3DDDI_OPENALLOCATIONINFO2* pOpenAllocationInfo2;
                                                        UINT PrivateRuntimeDataSize;
    _Field_size_bytes_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;
                                                        UINT ResourcePrivateDriverDataSize;
    _Field_size_bytes_(ResourcePrivateDriverDataSize) VOID* pResourcePrivateDriverData;
                                                        UINT TotalPrivateDriverDataBufferSize;
    _Field_size_bytes_(TotalPrivateDriverDataBufferSize) VOID* pTotalPrivateDriverDataBuffer;
                                                        D3DKMT_HANDLE hResource;
                                                        D3DKMT_HANDLE hKeyedMutex;
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pKeyedMutexPrivateRuntimeData;
                                                        UINT KeyedMutexPrivateRuntimeDataSize;
                                                        D3DKMT_HANDLE hSyncObject;
} D3DKMT_OPENRESOURCEFROMNTHANDLE;
typedef struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE
{
    HANDLE hNtHandle;
    D3DKMT_HANDLE hSyncObject;
} D3DKMT_OPENSYNCOBJECTFROMNTHANDLE;
typedef struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2
{
    HANDLE hNtHandle;
    D3DKMT_HANDLE hDevice;
    D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS Flags;
    D3DKMT_HANDLE hSyncObject;
    union
    {
        struct
        {
            VOID* FenceValueCPUVirtualAddress;
            D3DGPU_VIRTUAL_ADDRESS FenceValueGPUVirtualAddress;
            UINT EngineAffinity;
        } MonitoredFence;
        UINT64 Reserved[8];
    };
} D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2;
typedef struct _D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME
{
    DWORD dwDesiredAccess;
    OBJECT_ATTRIBUTES* pObjAttrib;
    HANDLE hNtHandle;
} D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME;
typedef struct _D3DKMT_OPENNTHANDLEFROMNAME
{
    DWORD dwDesiredAccess;
    OBJECT_ATTRIBUTES* pObjAttrib;
    HANDLE hNtHandle;
} D3DKMT_OPENNTHANDLEFROMNAME;
typedef struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE
{
    D3DKMT_HANDLE hDevice;
    HANDLE hNtHandle;
    VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
    UINT TotalPrivateDriverDataSize;
    UINT ResourcePrivateDriverDataSize;
    UINT NumAllocations;
}D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE;
typedef struct _D3DKMT_QUERYRESOURCEINFO
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hGlobalShare;
    VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
    UINT TotalPrivateDriverDataSize;
    UINT ResourcePrivateDriverDataSize;
    UINT NumAllocations;
}D3DKMT_QUERYRESOURCEINFO;
typedef struct _D3DKMT_DESTROYALLOCATION
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hResource;
    CONST D3DKMT_HANDLE* phAllocationList;
    UINT AllocationCount;
} D3DKMT_DESTROYALLOCATION;
typedef struct _D3DKMT_DESTROYALLOCATION2
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hResource;
    CONST D3DKMT_HANDLE* phAllocationList;
    UINT AllocationCount;
    D3DDDICB_DESTROYALLOCATION2FLAGS Flags;
} D3DKMT_DESTROYALLOCATION2;
typedef struct _D3DKMT_SETALLOCATIONPRIORITY
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hResource;
    CONST D3DKMT_HANDLE* phAllocationList;
    UINT AllocationCount;
    CONST UINT* pPriorities;
} D3DKMT_SETALLOCATIONPRIORITY;
typedef enum _D3DKMT_ALLOCATIONRESIDENCYSTATUS
{
    D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINGPUMEMORY=1,
    D3DKMT_ALLOCATIONRESIDENCYSTATUS_RESIDENTINSHAREDMEMORY=2,
    D3DKMT_ALLOCATIONRESIDENCYSTATUS_NOTRESIDENT=3,
} D3DKMT_ALLOCATIONRESIDENCYSTATUS;
typedef struct _D3DKMT_QUERYALLOCATIONRESIDENCY
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hResource;
    CONST D3DKMT_HANDLE* phAllocationList;
    UINT AllocationCount;
    D3DKMT_ALLOCATIONRESIDENCYSTATUS* pResidencyStatus;
} D3DKMT_QUERYALLOCATIONRESIDENCY;
typedef struct _D3DKMT_GETRUNTIMEDATA
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hGlobalShare;
    VOID* pRuntimeData;
    UINT RuntimeDataSize;
} D3DKMT_GETRUNTIMEDATA;
typedef enum _KMTUMDVERSION
{
    KMTUMDVERSION_DX9 = 0,
    KMTUMDVERSION_DX10,
    KMTUMDVERSION_DX11,
    KMTUMDVERSION_DX12,
    NUM_KMTUMDVERSIONS
} KMTUMDVERSION;
typedef struct _D3DKMT_UMDFILENAMEINFO
{
    KMTUMDVERSION Version;
    WCHAR UmdFileName[MAX_PATH];
} D3DKMT_UMDFILENAMEINFO;
typedef struct _D3DKMT_OPENGLINFO
{
    WCHAR UmdOpenGlIcdFileName[MAX_PATH];
    ULONG Version;
    ULONG Flags;
} D3DKMT_OPENGLINFO;
typedef struct _D3DKMT_SEGMENTSIZEINFO
{
    ULONGLONG DedicatedVideoMemorySize;
    ULONGLONG DedicatedSystemMemorySize;
    ULONGLONG SharedSystemMemorySize;
} D3DKMT_SEGMENTSIZEINFO;
typedef struct _D3DKMT_SEGMENTGROUPSIZEINFO
{
    UINT32 PhysicalAdapterIndex;
    D3DKMT_SEGMENTSIZEINFO LegacyInfo;
    ULONGLONG LocalMemory;
    ULONGLONG NonLocalMemory;
    ULONGLONG NonBudgetMemory;
} D3DKMT_SEGMENTGROUPSIZEINFO;
typedef struct _D3DKMT_WORKINGSETFLAGS
{
    UINT UseDefault : 1;
    UINT Reserved : 31;
} D3DKMT_WORKINGSETFLAGS;
typedef struct _D3DKMT_WORKINGSETINFO
{
    D3DKMT_WORKINGSETFLAGS Flags;
    ULONG MinimumWorkingSetPercentile;
    ULONG MaximumWorkingSetPercentile;
} D3DKMT_WORKINGSETINFO;
typedef struct _D3DKMT_FLIPINFOFLAGS
{
    UINT FlipInterval : 1;
    UINT Reserved : 31;
} D3DKMT_FLIPINFOFLAGS;
typedef struct _D3DKMT_FLIPQUEUEINFO
{
    UINT MaxHardwareFlipQueueLength;
    UINT MaxSoftwareFlipQueueLength;
    D3DKMT_FLIPINFOFLAGS FlipFlags;
} D3DKMT_FLIPQUEUEINFO;
typedef struct _D3DKMT_ADAPTERADDRESS
{
    UINT BusNumber;
    UINT DeviceNumber;
    UINT FunctionNumber;
} D3DKMT_ADAPTERADDRESS;
typedef struct _D3DKMT_ADAPTERREGISTRYINFO
{
    WCHAR AdapterString[MAX_PATH];
    WCHAR BiosString[MAX_PATH];
    WCHAR DacType[MAX_PATH];
    WCHAR ChipType[MAX_PATH];
} D3DKMT_ADAPTERREGISTRYINFO;
typedef struct _D3DKMT_CURRENTDISPLAYMODE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_DISPLAYMODE DisplayMode;
} D3DKMT_CURRENTDISPLAYMODE;
typedef struct _D3DKMT_VIRTUALADDRESSFLAGS
{
    UINT VirtualAddressSupported : 1;
    UINT Reserved : 31;
} D3DKMT_VIRTUALADDRESSFLAGS;
typedef struct _D3DKMT_VIRTUALADDRESSINFO
{
    D3DKMT_VIRTUALADDRESSFLAGS VirtualAddressFlags;
} D3DKMT_VIRTUALADDRESSINFO;
typedef enum _QAI_DRIVERVERSION
{
    KMT_DRIVERVERSION_WDDM_1_0 = 1000,
    KMT_DRIVERVERSION_WDDM_1_1_PRERELEASE = 1102,
    KMT_DRIVERVERSION_WDDM_1_1 = 1105,
    KMT_DRIVERVERSION_WDDM_1_2 = 1200,
    KMT_DRIVERVERSION_WDDM_1_3 = 1300,
    KMT_DRIVERVERSION_WDDM_2_0 = 2000,
    KMT_DRIVERVERSION_WDDM_2_1 = 2100,
    KMT_DRIVERVERSION_WDDM_2_2 = 2200,
    KMT_DRIVERVERSION_WDDM_2_3 = 2300,
    KMT_DRIVERVERSION_WDDM_2_4 = 2400,
    KMT_DRIVERVERSION_WDDM_2_5 = 2500,
    KMT_DRIVERVERSION_WDDM_2_6 = 2600
} D3DKMT_DRIVERVERSION;
typedef struct _D3DKMT_ADAPTERTYPE
{
    union
    {
        struct
        {
            UINT RenderSupported : 1;
            UINT DisplaySupported : 1;
            UINT SoftwareDevice : 1;
            UINT PostDevice : 1;
            UINT HybridDiscrete : 1;
            UINT HybridIntegrated : 1;
            UINT IndirectDisplayDevice : 1;
            UINT Paravirtualized : 1;
            UINT ACGSupported : 1;
            UINT SupportSetTimingsFromVidPn : 1;
            UINT Detachable : 1;
            UINT ComputeOnly : 1;
            UINT Prototype : 1;
            UINT Reserved : 19;
        };
        UINT Value;
    };
} D3DKMT_ADAPTERTYPE;
typedef struct _D3DKMT_OUTPUTDUPLCONTEXTSCOUNT
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT OutputDuplicationCount;
} D3DKMT_OUTPUTDUPLCONTEXTSCOUNT;
typedef struct _D3DKMT_UMD_DRIVER_VERSION
{
    LARGE_INTEGER DriverVersion;
} D3DKMT_UMD_DRIVER_VERSION;
typedef struct _D3DKMT_KMD_DRIVER_VERSION
{
    LARGE_INTEGER DriverVersion;
} D3DKMT_KMD_DRIVER_VERSION;
typedef struct _D3DKMT_DIRECTFLIP_SUPPORT
{
    BOOL Supported;
} D3DKMT_DIRECTFLIP_SUPPORT;
typedef struct _D3DKMT_MULTIPLANEOVERLAY_SUPPORT
{
    BOOL Supported;
} D3DKMT_MULTIPLANEOVERLAY_SUPPORT;
typedef struct _D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT
{
    UINT VidPnSourceId;
    BOOL Update;
    BOOL KernelSupported;
    BOOL HudSupported;
} D3DKMT_MULTIPLANEOVERLAY_HUD_SUPPORT;
typedef struct _D3DKMT_DLIST_DRIVER_NAME
{
    WCHAR DListFileName[MAX_PATH];
} D3DKMT_DLIST_DRIVER_NAME;
typedef struct _D3DKMT_CPDRIVERNAME
{
    WCHAR ContentProtectionFileName[MAX_PATH];
} D3DKMT_CPDRIVERNAME;
typedef struct _D3DKMT_MIRACASTCOMPANIONDRIVERNAME
{
    WCHAR MiracastCompanionDriverName[MAX_PATH];
} D3DKMT_MIRACASTCOMPANIONDRIVERNAME;
typedef struct _D3DKMT_XBOX
{
    BOOL IsXBOX;
} D3DKMT_XBOX;
typedef struct _D3DKMT_INDEPENDENTFLIP_SUPPORT
{
    BOOL Supported;
} D3DKMT_INDEPENDENTFLIP_SUPPORT;
typedef struct _D3DKMT_MULTIPLANEOVERLAY_DECODE_SUPPORT
{
    BOOL Supported;
} D3DKMT_MULTIPLANEOVERLAY_DECODE_SUPPORT;
typedef struct _D3DKMT_ISBADDRIVERFORHWPROTECTIONDISABLED
{
    BOOL Disabled;
} D3DKMT_ISBADDRIVERFORHWPROTECTIONDISABLED;
typedef struct _D3DKMT_MULTIPLANEOVERLAY_SECONDARY_SUPPORT
{
    BOOL Supported;
} D3DKMT_MULTIPLANEOVERLAY_SECONDARY_SUPPORT;
typedef struct _D3DKMT_INDEPENDENTFLIP_SECONDARY_SUPPORT
{
    BOOL Supported;
} D3DKMT_INDEPENDENTFLIP_SECONDARY_SUPPORT;
typedef struct _D3DKMT_PANELFITTER_SUPPORT
{
    BOOL Supported;
} D3DKMT_PANELFITTER_SUPPORT;
typedef struct _D3DKMT_PHYSICAL_ADAPTER_COUNT
{
    UINT Count;
} D3DKMT_PHYSICAL_ADAPTER_COUNT;
typedef struct _D3DKMT_DEVICE_IDS
{
    UINT VendorID;
    UINT DeviceID;
    UINT SubVendorID;
    UINT SubSystemID;
    UINT RevisionID;
    UINT BusType;
} D3DKMT_DEVICE_IDS;
typedef struct _D3DKMT_QUERY_DEVICE_IDS
{
    UINT PhysicalAdapterIndex;
    D3DKMT_DEVICE_IDS DeviceIds;
} D3DKMT_QUERY_DEVICE_IDS;
typedef enum _D3DKMT_PNP_KEY_TYPE
{
    D3DKMT_PNP_KEY_HARDWARE = 1,
    D3DKMT_PNP_KEY_SOFTWARE = 2
} D3DKMT_PNP_KEY_TYPE;
typedef struct _D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY
{
    UINT PhysicalAdapterIndex;
    D3DKMT_PNP_KEY_TYPE PnPKeyType;
    _Field_size_opt_(*pCchDest)
    WCHAR *pDest;
    UINT *pCchDest;
} D3DKMT_QUERY_PHYSICAL_ADAPTER_PNP_KEY;
typedef enum _D3DKMT_MIRACAST_DRIVER_TYPE
{
    D3DKMT_MIRACAST_DRIVER_NOT_SUPPORTED = 0,
    D3DKMT_MIRACAST_DRIVER_IHV = 1,
    D3DKMT_MIRACAST_DRIVER_MS = 2,
} D3DKMT_MIRACAST_DRIVER_TYPE;
typedef struct _D3DKMT_QUERY_MIRACAST_DRIVER_TYPE
{
    D3DKMT_MIRACAST_DRIVER_TYPE MiracastDriverType;
} D3DKMT_QUERY_MIRACAST_DRIVER_TYPE;
typedef struct _D3DKMT_GPUMMU_CAPS
{
    union
    {
        struct
        {
            UINT ReadOnlyMemorySupported : 1;
            UINT NoExecuteMemorySupported : 1;
            UINT CacheCoherentMemorySupported : 1;
            UINT Reserved : 29;
        };
        UINT Value;
    } Flags;
    UINT VirtualAddressBitCount;
} D3DKMT_GPUMMU_CAPS;
typedef struct _D3DKMT_QUERY_GPUMMU_CAPS
{
    UINT PhysicalAdapterIndex;
    D3DKMT_GPUMMU_CAPS Caps;
} D3DKMT_QUERY_GPUMMU_CAPS;
typedef struct _D3DKMT_MPO3DDI_SUPPORT
{
    BOOL Supported;
} D3DKMT_MPO3DDI_SUPPORT;
typedef struct _D3DKMT_HWDRM_SUPPORT
{
    BOOLEAN Supported;
} D3DKMT_HWDRM_SUPPORT;
typedef struct _D3DKMT_MPOKERNELCAPS_SUPPORT
{
    BOOL Supported;
} D3DKMT_MPOKERNELCAPS_SUPPORT;
typedef struct _D3DKMT_GET_DEVICE_VIDPN_OWNERSHIP_INFO
{
    D3DKMT_HANDLE hDevice;
    BOOLEAN bFailedDwmAcquireVidPn;
} D3DKMT_GET_DEVICE_VIDPN_OWNERSHIP_INFO;
typedef struct _D3DKMT_BLOCKLIST_INFO
{
    UINT Size;
    WCHAR BlockList[1];
} D3DKMT_BLOCKLIST_INFO;
typedef struct _D3DKMT_QUERY_ADAPTER_UNIQUE_GUID
{
    WCHAR AdapterUniqueGUID[40];
} D3DKMT_QUERY_ADAPTER_UNIQUE_GUID;
typedef struct _D3DKMT_NODE_PERFDATA
{
    UINT32 NodeOrdinal;
    UINT32 PhysicalAdapterIndex;
    ULONGLONG Frequency;
    ULONGLONG MaxFrequency;
    ULONGLONG MaxFrequencyOC;
    ULONG Voltage;
    ULONG VoltageMax;
    ULONG VoltageMaxOC;
    ULONGLONG MaxTransitionLatency;
} D3DKMT_NODE_PERFDATA;
typedef struct _D3DKMT_ADAPTER_PERFDATA
{
    UINT32 PhysicalAdapterIndex;
    ULONGLONG MemoryFrequency;
    ULONGLONG MaxMemoryFrequency;
    ULONGLONG MaxMemoryFrequencyOC;
    ULONGLONG MemoryBandwidth;
    ULONGLONG PCIEBandwidth;
    ULONG FanRPM;
    ULONG Power;
    ULONG Temperature;
    UCHAR PowerStateOverride;
} D3DKMT_ADAPTER_PERFDATA;
typedef struct _D3DKMT_ADAPTER_PERFDATACAPS
{
    UINT32 PhysicalAdapterIndex;
    ULONGLONG MaxMemoryBandwidth;
    ULONGLONG MaxPCIEBandwidth;
    ULONG MaxFanRPM;
    ULONG TemperatureMax;
    ULONG TemperatureWarning;
} D3DKMT_ADAPTER_PERFDATACAPS;
typedef struct _D3DKMT_GPUVERSION
{
    UINT32 PhysicalAdapterIndex;
    WCHAR BiosVersion[DXGK_MAX_GPUVERSION_NAME_LENGTH];
    WCHAR GpuArchitecture[DXGK_MAX_GPUVERSION_NAME_LENGTH];
} D3DKMT_GPUVERSION;
typedef struct _D3DKMT_DRIVER_DESCRIPTION
{
    WCHAR DriverDescription[4096];
} D3DKMT_DRIVER_DESCRIPTION;
typedef struct _D3DKMT_QUERY_SCANOUT_CAPS
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT Caps;
} D3DKMT_QUERY_SCANOUT_CAPS;
typedef enum _KMTQUERYADAPTERINFOTYPE
{
     KMTQAITYPE_UMDRIVERPRIVATE = 0,
     KMTQAITYPE_UMDRIVERNAME = 1,
     KMTQAITYPE_UMOPENGLINFO = 2,
     KMTQAITYPE_GETSEGMENTSIZE = 3,
     KMTQAITYPE_ADAPTERGUID = 4,
     KMTQAITYPE_FLIPQUEUEINFO = 5,
     KMTQAITYPE_ADAPTERADDRESS = 6,
     KMTQAITYPE_SETWORKINGSETINFO = 7,
     KMTQAITYPE_ADAPTERREGISTRYINFO = 8,
     KMTQAITYPE_CURRENTDISPLAYMODE = 9,
     KMTQAITYPE_MODELIST = 10,
     KMTQAITYPE_CHECKDRIVERUPDATESTATUS = 11,
     KMTQAITYPE_VIRTUALADDRESSINFO = 12,
     KMTQAITYPE_DRIVERVERSION = 13,
     KMTQAITYPE_ADAPTERTYPE = 15,
     KMTQAITYPE_OUTPUTDUPLCONTEXTSCOUNT = 16,
     KMTQAITYPE_WDDM_1_2_CAPS = 17,
     KMTQAITYPE_UMD_DRIVER_VERSION = 18,
     KMTQAITYPE_DIRECTFLIP_SUPPORT = 19,
     KMTQAITYPE_MULTIPLANEOVERLAY_SUPPORT = 20,
     KMTQAITYPE_DLIST_DRIVER_NAME = 21,
     KMTQAITYPE_WDDM_1_3_CAPS = 22,
     KMTQAITYPE_MULTIPLANEOVERLAY_HUD_SUPPORT = 23,
     KMTQAITYPE_WDDM_2_0_CAPS = 24,
     KMTQAITYPE_NODEMETADATA = 25,
     KMTQAITYPE_CPDRIVERNAME = 26,
     KMTQAITYPE_XBOX = 27,
     KMTQAITYPE_INDEPENDENTFLIP_SUPPORT = 28,
     KMTQAITYPE_MIRACASTCOMPANIONDRIVERNAME = 29,
     KMTQAITYPE_PHYSICALADAPTERCOUNT = 30,
     KMTQAITYPE_PHYSICALADAPTERDEVICEIDS = 31,
     KMTQAITYPE_DRIVERCAPS_EXT = 32,
     KMTQAITYPE_QUERY_MIRACAST_DRIVER_TYPE = 33,
     KMTQAITYPE_QUERY_GPUMMU_CAPS = 34,
     KMTQAITYPE_QUERY_MULTIPLANEOVERLAY_DECODE_SUPPORT = 35,
     KMTQAITYPE_QUERY_HW_PROTECTION_TEARDOWN_COUNT = 36,
     KMTQAITYPE_QUERY_ISBADDRIVERFORHWPROTECTIONDISABLED = 37,
     KMTQAITYPE_MULTIPLANEOVERLAY_SECONDARY_SUPPORT = 38,
     KMTQAITYPE_INDEPENDENTFLIP_SECONDARY_SUPPORT = 39,
     KMTQAITYPE_PANELFITTER_SUPPORT = 40,
     KMTQAITYPE_PHYSICALADAPTERPNPKEY = 41,
     KMTQAITYPE_GETSEGMENTGROUPSIZE = 42,
     KMTQAITYPE_MPO3DDI_SUPPORT = 43,
     KMTQAITYPE_HWDRM_SUPPORT = 44,
     KMTQAITYPE_MPOKERNELCAPS_SUPPORT = 45,
     KMTQAITYPE_MULTIPLANEOVERLAY_STRETCH_SUPPORT = 46,
     KMTQAITYPE_GET_DEVICE_VIDPN_OWNERSHIP_INFO = 47,
     KMTQAITYPE_QUERYREGISTRY = 48,
     KMTQAITYPE_KMD_DRIVER_VERSION = 49,
     KMTQAITYPE_BLOCKLIST_KERNEL = 50,
     KMTQAITYPE_BLOCKLIST_RUNTIME = 51,
     KMTQAITYPE_ADAPTERGUID_RENDER = 52,
     KMTQAITYPE_ADAPTERADDRESS_RENDER = 53,
     KMTQAITYPE_ADAPTERREGISTRYINFO_RENDER = 54,
     KMTQAITYPE_CHECKDRIVERUPDATESTATUS_RENDER = 55,
     KMTQAITYPE_DRIVERVERSION_RENDER = 56,
     KMTQAITYPE_ADAPTERTYPE_RENDER = 57,
     KMTQAITYPE_WDDM_1_2_CAPS_RENDER = 58,
     KMTQAITYPE_WDDM_1_3_CAPS_RENDER = 59,
     KMTQAITYPE_QUERY_ADAPTER_UNIQUE_GUID = 60,
     KMTQAITYPE_NODEPERFDATA = 61,
     KMTQAITYPE_ADAPTERPERFDATA = 62,
     KMTQAITYPE_ADAPTERPERFDATA_CAPS = 63,
     KMTQUITYPE_GPUVERSION = 64,
     KMTQAITYPE_DRIVER_DESCRIPTION = 65,
     KMTQAITYPE_DRIVER_DESCRIPTION_RENDER = 66,
     KMTQAITYPE_SCANOUT_CAPS = 67,
} KMTQUERYADAPTERINFOTYPE;
typedef struct _D3DKMT_QUERYADAPTERINFO
{
    D3DKMT_HANDLE hAdapter;
    KMTQUERYADAPTERINFOTYPE Type;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} D3DKMT_QUERYADAPTERINFO;
typedef struct _D3DKMT_OPENADAPTERFROMHDC
{
    HDC hDc;
    D3DKMT_HANDLE hAdapter;
    LUID AdapterLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
} D3DKMT_OPENADAPTERFROMHDC;
typedef struct _D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME
{
    WCHAR DeviceName[32];
    D3DKMT_HANDLE hAdapter;
    LUID AdapterLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
} D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME;
typedef struct _D3DKMT_OPENADAPTERFROMDEVICENAME
{
    PCWSTR pDeviceName;
    D3DKMT_HANDLE hAdapter;
    LUID AdapterLuid;
} D3DKMT_OPENADAPTERFROMDEVICENAME;
typedef struct _D3DKMT_ADAPTERINFO
{
    D3DKMT_HANDLE hAdapter;
    LUID AdapterLuid;
    ULONG NumOfSources;
    BOOL bPresentMoveRegionsPreferred;
} D3DKMT_ADAPTERINFO;
typedef struct _D3DKMT_ENUMADAPTERS
{
    _In_range_(0, MAX_ENUM_ADAPTERS) ULONG NumAdapters;
    D3DKMT_ADAPTERINFO Adapters[MAX_ENUM_ADAPTERS];
} D3DKMT_ENUMADAPTERS;
typedef struct _D3DKMT_ENUMADAPTERS2
{
    ULONG NumAdapters;
    D3DKMT_ADAPTERINFO* pAdapters;
} D3DKMT_ENUMADAPTERS2;
typedef struct _D3DKMT_OPENADAPTERFROMLUID
{
    LUID AdapterLuid;
    D3DKMT_HANDLE hAdapter;
} D3DKMT_OPENADAPTERFROMLUID;
typedef struct _D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME
{
    WCHAR DeviceName[32];
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
} D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME;
typedef struct _D3DKMT_CLOSEADAPTER
{
    D3DKMT_HANDLE hAdapter;
} D3DKMT_CLOSEADAPTER;
typedef struct _D3DKMT_GETSHAREDPRIMARYHANDLE
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_HANDLE hSharedPrimary;
} D3DKMT_GETSHAREDPRIMARYHANDLE;
typedef struct _D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION
{
    LUID AdapterLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    RECTL LockRect;
} D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION;
typedef struct _D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION
{
    LUID AdapterLuid;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
} D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION;
typedef struct _D3DKMT_PINDIRECTFLIPRESOURCES
{
     D3DKMT_HANDLE hDevice;
     UINT ResourceCount;
    _Field_size_(ResourceCount) D3DKMT_HANDLE* pResourceList;
} D3DKMT_PINDIRECTFLIPRESOURCES;
typedef struct _D3DKMT_UNPINDIRECTFLIPRESOURCES
{
     D3DKMT_HANDLE hDevice;
     UINT ResourceCount;
    _Field_size_(ResourceCount) D3DKMT_HANDLE* pResourceList;
} D3DKMT_UNPINDIRECTFLIPRESOURCES;
typedef enum _D3DKMT_ESCAPETYPE
{
    D3DKMT_ESCAPE_DRIVERPRIVATE = 0,
    D3DKMT_ESCAPE_VIDMM = 1,
    D3DKMT_ESCAPE_TDRDBGCTRL = 2,
    D3DKMT_ESCAPE_VIDSCH = 3,
    D3DKMT_ESCAPE_DEVICE = 4,
    D3DKMT_ESCAPE_DMM = 5,
    D3DKMT_ESCAPE_DEBUG_SNAPSHOT = 6,
    D3DKMT_ESCAPE_DRT_TEST = 8,
    D3DKMT_ESCAPE_DIAGNOSTICS = 9,
    D3DKMT_ESCAPE_OUTPUTDUPL_SNAPSHOT = 10,
    D3DKMT_ESCAPE_OUTPUTDUPL_DIAGNOSTICS = 11,
    D3DKMT_ESCAPE_BDD_PNP = 12,
    D3DKMT_ESCAPE_BDD_FALLBACK = 13,
    D3DKMT_ESCAPE_ACTIVATE_SPECIFIC_DIAG = 14,
    D3DKMT_ESCAPE_MODES_PRUNED_OUT = 15,
    D3DKMT_ESCAPE_WHQL_INFO = 16,
    D3DKMT_ESCAPE_BRIGHTNESS = 17,
    D3DKMT_ESCAPE_EDID_CACHE = 18,
    D3DKMT_ESCAPE_GENERIC_ADAPTER_DIAG_INFO = 19,
    D3DKMT_ESCAPE_MIRACAST_DISPLAY_REQUEST = 20,
    D3DKMT_ESCAPE_HISTORY_BUFFER_STATUS = 21,
    D3DKMT_ESCAPE_MIRACAST_ADAPTER_DIAG_INFO = 23,
    D3DKMT_ESCAPE_FORCE_BDDFALLBACK_HEADLESS = 24,
    D3DKMT_ESCAPE_REQUEST_MACHINE_CRASH = 25,
    D3DKMT_ESCAPE_SOFTGPU_ENABLE_DISABLE_HMD = 27,
    D3DKMT_ESCAPE_PROCESS_VERIFIER_OPTION = 28,
    D3DKMT_ESCAPE_ADAPTER_VERIFIER_OPTION = 29,
    D3DKMT_ESCAPE_IDD_REQUEST = 30,
    D3DKMT_ESCAPE_DOD_SET_DIRTYRECT_MODE = 31,
    D3DKMT_ESCAPE_LOG_CODEPOINT_PACKET = 32,
    D3DKMT_ESCAPE_LOG_USERMODE_DAIG_PACKET = 33,
    D3DKMT_ESCAPE_GET_EXTERNAL_DIAGNOSTICS = 34,
    D3DKMT_ESCAPE_GET_DISPLAY_CONFIGURATIONS = 36,
    D3DKMT_ESCAPE_QUERY_IOMMU_STATUS = 37,
    D3DKMT_ESCAPE_CCD_DATABASE = 38,
    D3DKMT_ESCAPE_WIN32K_START = 1024,
    D3DKMT_ESCAPE_WIN32K_HIP_DEVICE_INFO = 1024,
    D3DKMT_ESCAPE_WIN32K_QUERY_CD_ROTATION_BLOCK = 1025,
    D3DKMT_ESCAPE_WIN32K_DPI_INFO = 1026,
    D3DKMT_ESCAPE_WIN32K_PRESENTER_VIEW_INFO = 1027,
    D3DKMT_ESCAPE_WIN32K_SYSTEM_DPI = 1028,
    D3DKMT_ESCAPE_WIN32K_BDD_FALLBACK = 1029,
    D3DKMT_ESCAPE_WIN32K_DDA_TEST_CTL = 1030,
    D3DKMT_ESCAPE_WIN32K_USER_DETECTED_BLACK_SCREEN = 1031,
    D3DKMT_ESCAPE_WIN32K_LPMDISPLAY_CONTROL = 1034,
    D3DKMT_ESCAPE_WIN32K_DISPBROKER_TEST = 1035,
    D3DKMT_ESCAPE_WIN32K_COLOR_PROFILE_INFO = 1036,
} D3DKMT_ESCAPETYPE;
typedef struct _D3DKMT_DOD_SET_DIRTYRECT_MODE
{
    BOOL bForceFullScreenDirty;
}D3DKMT_DOD_SET_DIRTYRECT_MODE;
typedef enum _D3DKMT_TDRDBGCTRLTYPE
{
    D3DKMT_TDRDBGCTRLTYPE_FORCETDR = 0,
    D3DKMT_TDRDBGCTRLTYPE_DISABLEBREAK = 1,
    D3DKMT_TDRDBGCTRLTYPE_ENABLEBREAK = 2,
    D3DKMT_TDRDBGCTRLTYPE_UNCONDITIONAL = 3,
    D3DKMT_TDRDBGCTRLTYPE_VSYNCTDR = 4,
    D3DKMT_TDRDBGCTRLTYPE_GPUTDR = 5,
    D3DKMT_TDRDBGCTRLTYPE_FORCEDODTDR = 6,
    D3DKMT_TDRDBGCTRLTYPE_FORCEDODVSYNCTDR = 7,
    D3DKMT_TDRDBGCTRLTYPE_ENGINETDR = 8,
} D3DKMT_TDRDBGCTRLTYPE;
typedef enum _D3DKMT_VIDMMESCAPETYPE
{
    D3DKMT_VIDMMESCAPETYPE_SETFAULT = 0,
    D3DKMT_VIDMMESCAPETYPE_RUN_COHERENCY_TEST = 1,
    D3DKMT_VIDMMESCAPETYPE_RUN_UNMAP_TO_DUMMY_PAGE_TEST = 2,
    D3DKMT_VIDMMESCAPETYPE_APERTURE_CORRUPTION_CHECK = 3,
    D3DKMT_VIDMMESCAPETYPE_SUSPEND_CPU_ACCESS_TEST = 4,
    D3DKMT_VIDMMESCAPETYPE_EVICT = 5,
    D3DKMT_VIDMMESCAPETYPE_EVICT_BY_NT_HANDLE = 6,
    D3DKMT_VIDMMESCAPETYPE_GET_VAD_INFO = 7,
    D3DKMT_VIDMMESCAPETYPE_SET_BUDGET = 8,
    D3DKMT_VIDMMESCAPETYPE_SUSPEND_PROCESS = 9,
    D3DKMT_VIDMMESCAPETYPE_RESUME_PROCESS = 10,
    D3DKMT_VIDMMESCAPETYPE_GET_BUDGET = 11,
    D3DKMT_VIDMMESCAPETYPE_SET_TRIM_INTERVALS = 12,
    D3DKMT_VIDMMESCAPETYPE_EVICT_BY_CRITERIA = 13,
    D3DKMT_VIDMMESCAPETYPE_WAKE = 14,
    D3DKMT_VIDMMESCAPETYPE_DEFRAG = 15,
    D3DKMT_VIDMMESCAPETYPE_DELAYEXECUTION = 16,
} D3DKMT_VIDMMESCAPETYPE;
typedef enum _D3DKMT_VIDSCHESCAPETYPE
{
    D3DKMT_VIDSCHESCAPETYPE_PREEMPTIONCONTROL = 0,
    D3DKMT_VIDSCHESCAPETYPE_SUSPENDSCHEDULER = 1,
    D3DKMT_VIDSCHESCAPETYPE_TDRCONTROL = 2,
    D3DKMT_VIDSCHESCAPETYPE_SUSPENDRESUME = 3,
    D3DKMT_VIDSCHESCAPETYPE_ENABLECONTEXTDELAY = 4,
    D3DKMT_VIDSCHESCAPETYPE_CONFIGURE_TDR_LIMIT = 5,
    D3DKMT_VIDSCHESCAPETYPE_VGPU_RESET = 6,
    D3DKMT_VIDSCHESCAPETYPE_PFN_CONTROL = 7,
} D3DKMT_VIDSCHESCAPETYPE;
typedef enum _D3DKMT_DMMESCAPETYPE
{
    D3DKMT_DMMESCAPETYPE_UNINITIALIZED = 0,
    D3DKMT_DMMESCAPETYPE_GET_SUMMARY_INFO = 1,
    D3DKMT_DMMESCAPETYPE_GET_VIDEO_PRESENT_SOURCES_INFO = 2,
    D3DKMT_DMMESCAPETYPE_GET_VIDEO_PRESENT_TARGETS_INFO = 3,
    D3DKMT_DMMESCAPETYPE_GET_ACTIVEVIDPN_INFO = 4,
    D3DKMT_DMMESCAPETYPE_GET_MONITORS_INFO = 5,
    D3DKMT_DMMESCAPETYPE_RECENTLY_COMMITTED_VIDPNS_INFO = 6,
    D3DKMT_DMMESCAPETYPE_RECENT_MODECHANGE_REQUESTS_INFO = 7,
    D3DKMT_DMMESCAPETYPE_RECENTLY_RECOMMENDED_VIDPNS_INFO = 8,
    D3DKMT_DMMESCAPETYPE_RECENT_MONITOR_PRESENCE_EVENTS_INFO = 9,
    D3DKMT_DMMESCAPETYPE_ACTIVEVIDPN_SOURCEMODESET_INFO = 10,
    D3DKMT_DMMESCAPETYPE_ACTIVEVIDPN_COFUNCPATHMODALITY_INFO = 11,
    D3DKMT_DMMESCAPETYPE_GET_LASTCLIENTCOMMITTEDVIDPN_INFO = 12,
    D3DKMT_DMMESCAPETYPE_GET_VERSION_INFO = 13,
    D3DKMT_DMMESCAPETYPE_VIDPN_MGR_DIAGNOSTICS = 14
} D3DKMT_DMMESCAPETYPE;
typedef struct _D3DKMT_HISTORY_BUFFER_STATUS
{
    BOOLEAN Enabled;
    UINT Reserved;
} D3DKMT_HISTORY_BUFFER_STATUS;
typedef enum _D3DKMT_VAD_ESCAPE_COMMAND
{
    D3DKMT_VAD_ESCAPE_GETNUMVADS,
    D3DKMT_VAD_ESCAPE_GETVAD,
    D3DKMT_VAD_ESCAPE_GETVADRANGE,
    D3DKMT_VAD_ESCAPE_GET_PTE,
    D3DKMT_VAD_ESCAPE_GET_GPUMMU_CAPS,
    D3DKMT_VAD_ESCAPE_GET_SEGMENT_CAPS,
} D3DKMT_VAD_ESCAPE_COMMAND;
typedef struct _D3DKMT_VAD_DESC
{
    UINT VadIndex;
    UINT64 VadAddress;
    UINT NumMappedRanges;
    UINT VadType;
    UINT64 StartAddress;
    UINT64 EndAddress;
} D3DKMT_VAD_DESC;
typedef struct _D3DKMT_VA_RANGE_DESC
{
    UINT64 VadAddress;
    UINT VaRangeIndex;
    UINT PhysicalAdapterIndex;
    UINT64 StartAddress;
    UINT64 EndAddress;
    UINT64 DriverProtection;
    UINT OwnerType;
    UINT64 pOwner;
    UINT64 OwnerOffset;
    UINT Protection;
} D3DKMT_VA_RANGE_DESC;
typedef struct _D3DKMT_EVICTION_CRITERIA
{
    UINT64 MinimumSize;
    UINT64 MaximumSize;
    struct
    {
        union
        {
            struct
            {
                UINT Primary : 1;
                UINT Reserved : 31;
            } Flags;
            UINT Value;
        };
    };
} D3DKMT_EVICTION_CRITERIA;
typedef enum _D3DKMT_DEFRAG_ESCAPE_OPERATION
{
    D3DKMT_DEFRAG_ESCAPE_GET_FRAGMENTATION_STATS = 0,
    D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD = 1,
    D3DKMT_DEFRAG_ESCAPE_DEFRAG_DOWNWARD = 2,
    D3DKMT_DEFRAG_ESCAPE_DEFRAG_PASS = 3,
    D3DKMT_DEFRAG_ESCAPE_VERIFY_TRANSFER = 4,
} D3DKMT_DEFRAG_ESCAPE_OPERATION;
typedef struct _D3DKMT_PAGE_TABLE_LEVEL_DESC
{
    UINT IndexBitCount;
    UINT64 IndexMask;
    UINT64 IndexShift;
    UINT64 LowerLevelsMask;
    UINT64 EntryCoverageInPages;
} D3DKMT_PAGE_TABLE_LEVEL_DESC;
typedef struct _DXGK_ESCAPE_GPUMMUCAPS
{
    BOOLEAN ReadOnlyMemorySupported;
    BOOLEAN NoExecuteMemorySupported;
    BOOLEAN ZeroInPteSupported;
    BOOLEAN CacheCoherentMemorySupported;
    BOOLEAN LargePageSupported;
    BOOLEAN DualPteSupported;
    BOOLEAN AllowNonAlignedLargePageAddress;
    UINT VirtualAddressBitCount;
    UINT PageTableLevelCount;
    D3DKMT_PAGE_TABLE_LEVEL_DESC PageTableLevelDesk[DXGK_MAX_PAGE_TABLE_LEVEL_COUNT];
} DXGK_ESCAPE_GPUMMUCAPS;
typedef struct _D3DKMT_GET_GPUMMU_CAPS
{
    UINT PhysicalAdapterIndex;
    DXGK_ESCAPE_GPUMMUCAPS GpuMmuCaps;
} D3DKMT_GET_GPUMMU_CAPS;
typedef struct _D3DKMT_GET_PTE
{
    UINT PhysicalAdapterIndex;
    UINT PageTableLevel;
    UINT PageTableIndex[DXGK_MAX_PAGE_TABLE_LEVEL_COUNT];
    BOOLEAN b64KBPte;
    UINT NumPtes;
    DXGK_PTE Pte[D3DKMT_GET_PTE_MAX];
    UINT NumValidEntries;
} D3DKMT_GET_PTE;
typedef enum _D3DKMT_MEMORY_SEGMENT_GROUP
{
    D3DKMT_MEMORY_SEGMENT_GROUP_LOCAL = 0,
    D3DKMT_MEMORY_SEGMENT_GROUP_NON_LOCAL = 1
} D3DKMT_MEMORY_SEGMENT_GROUP;
typedef struct _D3DKMT_SEGMENT_CAPS
{
    UINT64 Size;
    UINT PageSize;
    ULONG SegmentId;
    BOOLEAN bAperture;
    BOOLEAN bReservedSysMem;
    D3DKMT_MEMORY_SEGMENT_GROUP BudgetGroup;
} D3DKMT_SEGMENT_CAPS;
typedef struct _D3DKMT_GET_SEGMENT_CAPS
{
    UINT PhysicalAdapterIndex;
    UINT NumSegments;
    D3DKMT_SEGMENT_CAPS SegmentCaps[D3DKMT_MAX_SEGMENT_COUNT];
} D3DKMT_GET_SEGMENT_CAPS;
typedef enum _D3DKMT_ESCAPE_PFN_CONTROL_COMMAND
{
    D3DKMT_ESCAPE_PFN_CONTROL_DEFAULT,
    D3DKMT_ESCAPE_PFN_CONTROL_FORCE_CPU,
    D3DKMT_ESCAPE_PFN_CONTROL_FORCE_GPU
} D3DKMT_ESCAPE_PFN_CONTROL_COMMAND;
typedef struct _D3DKMT_VIDMM_ESCAPE
{
    D3DKMT_VIDMMESCAPETYPE Type;
    union
    {
        struct
        {
            union
            {
                struct
                {
                    ULONG ProbeAndLock : 1;
                    ULONG SplitPoint : 1;
                    ULONG NoDemotion : 1;
                    ULONG SwizzlingAperture : 1;
                    ULONG PagingPathLockSubRange : 1;
                    ULONG PagingPathLockMinRange : 1;
                    ULONG ComplexLock : 1;
                    ULONG FailVARotation : 1;
                    ULONG NoWriteCombined : 1;
                    ULONG NoPrePatching : 1;
                    ULONG AlwaysRepatch : 1;
                    ULONG ExpectPreparationFailure : 1;
                    ULONG FailUserModeVAMapping : 1;
                    ULONG NeverDiscardOfferedAllocation : 1;
                    ULONG AlwaysDiscardOfferedAllocation : 1;
                    ULONG Reserved : 17;
                };
                ULONG Value;
            };
        } SetFault;
        struct
        {
            D3DKMT_HANDLE ResourceHandle;
            D3DKMT_HANDLE AllocationHandle;
            HANDLE hProcess;
        } Evict;
        struct
        {
            UINT64 NtHandle;
        } EvictByNtHandle;
        struct
        {
            union
            {
                struct
                {
                    UINT NumVads;
                } GetNumVads;
                D3DKMT_VAD_DESC GetVad;
                D3DKMT_VA_RANGE_DESC GetVadRange;
                D3DKMT_GET_GPUMMU_CAPS GetGpuMmuCaps;
                D3DKMT_GET_PTE GetPte;
                D3DKMT_GET_SEGMENT_CAPS GetSegmentCaps;
            };
            D3DKMT_VAD_ESCAPE_COMMAND Command;
            NTSTATUS Status;
        } GetVads;
        struct
        {
            ULONGLONG LocalMemoryBudget;
            ULONGLONG SystemMemoryBudget;
        } SetBudget;
        struct
        {
            HANDLE hProcess;
            BOOL bAllowWakeOnSubmission;
        } SuspendProcess;
        struct
        {
            HANDLE hProcess;
        } ResumeProcess;
        struct
        {
            UINT64 NumBytesToTrim;
        } GetBudget;
        struct
        {
            ULONG MinTrimInterval;
            ULONG MaxTrimInterval;
            ULONG IdleTrimInterval;
        } SetTrimIntervals;
        D3DKMT_EVICTION_CRITERIA EvictByCriteria;
        struct
        {
            BOOL bFlush;
        } Wake;
        struct
        {
            D3DKMT_DEFRAG_ESCAPE_OPERATION Operation;
            UINT SegmentId;
            ULONGLONG TotalCommitted;
            ULONGLONG TotalFree;
            ULONGLONG LargestGapBefore;
            ULONGLONG LargestGapAfter;
        } Defrag;
        struct
        {
            D3DKMT_HANDLE hPagingQueue;
            UINT PhysicalAdapterIndex;
            ULONG Milliseconds;
            ULONGLONG PagingFenceValue;
        } DelayExecution;
    };
} D3DKMT_VIDMM_ESCAPE;
typedef struct _D3DKMT_VIDSCH_ESCAPE
{
    D3DKMT_VIDSCHESCAPETYPE Type;
    union
    {
        BOOL PreemptionControl;
        BOOL EnableContextDelay;
        struct
        {
            ULONG TdrControl;
            union
            {
                ULONG NodeOrdinal;
            };
        } TdrControl2;
        BOOL SuspendScheduler;
        ULONG TdrControl;
        ULONG SuspendTime;
        struct
        {
            UINT Count;
            UINT Time;
        } TdrLimit;
        D3DKMT_ESCAPE_PFN_CONTROL_COMMAND PfnControl;
    };
} D3DKMT_VIDSCH_ESCAPE;
typedef struct _D3DKMT_TDRDBGCTRL_ESCAPE
{
    D3DKMT_TDRDBGCTRLTYPE TdrControl;
    union
    {
        ULONG NodeOrdinal;
    };
} D3DKMT_TDRDBGCTRL_ESCAPE;
enum
{
    D3DKMT_MAX_DMM_ESCAPE_DATASIZE = 100*1024
};
typedef struct _D3DKMT_DMM_ESCAPE
{
    _In_ D3DKMT_DMMESCAPETYPE Type;
    _In_ SIZE_T ProvidedBufferSize;
    _Out_ SIZE_T MinRequiredBufferSize;
    _Out_writes_bytes_(ProvidedBufferSize) UCHAR Data[1];
} D3DKMT_DMM_ESCAPE;
typedef enum _D3DKMT_BRIGHTNESS_INFO_TYPE
{
    D3DKMT_BRIGHTNESS_INFO_GET_POSSIBLE_LEVELS = 1,
    D3DKMT_BRIGHTNESS_INFO_GET = 2,
    D3DKMT_BRIGHTNESS_INFO_SET = 3,
    D3DKMT_BRIGHTNESS_INFO_GET_CAPS = 4,
    D3DKMT_BRIGHTNESS_INFO_SET_STATE = 5,
    D3DKMT_BRIGHTNESS_INFO_SET_OPTIMIZATION = 6,
    D3DKMT_BRIGHTNESS_INFO_GET_REDUCTION = 7,
    D3DKMT_BRIGHTNESS_INFO_BEGIN_MANUAL_MODE = 8,
    D3DKMT_BRIGHTNESS_INFO_END_MANUAL_MODE = 9,
    D3DKMT_BRIGHTNESS_INFO_TOGGLE_LOGGING = 10,
    D3DKMT_BRIGHTNESS_INFO_GET_NIT_RANGES = 11,
} D3DKMT_BRIGHTNESS_INFO_TYPE;
typedef struct _D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS
{
    UCHAR LevelCount;
    UCHAR BrightnessLevels[256];
} D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS;
typedef struct _D3DKMT_BRIGHTNESS_INFO
{
    D3DKMT_BRIGHTNESS_INFO_TYPE Type;
    ULONG ChildUid;
    union
    {
        D3DKMT_BRIGHTNESS_POSSIBLE_LEVELS PossibleLevels;
        UCHAR Brightness;
        DXGK_BRIGHTNESS_CAPS BrightnessCaps;
        DXGK_BRIGHTNESS_STATE BrightnessState;
        DXGK_BACKLIGHT_OPTIMIZATION_LEVEL OptimizationLevel;
        DXGK_BACKLIGHT_INFO ReductionInfo;
        BOOLEAN VerboseLogging;
        DXGK_BRIGHTNESS_GET_NIT_RANGES_OUT NitRanges;
        DXGK_BRIGHTNESS_GET_OUT GetBrightnessMillinits;
        DXGK_BRIGHTNESS_SET_IN SetBrightnessMillinits;
    };
} D3DKMT_BRIGHTNESS_INFO;
typedef struct _D3DKMT_BDDFALLBACK_CTL
{
    BOOLEAN ForceBddHeadlessNextFallback;
} D3DKMT_BDDFALLBACK_CTL;
typedef struct _D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE
{
    ULONG_PTR Param1;
    ULONG_PTR Param2;
    ULONG_PTR Param3;
} D3DKMT_REQUEST_MACHINE_CRASH_ESCAPE;
typedef enum _D3DKMT_VERIFIER_OPTION_MODE
{
    D3DKMT_VERIFIER_OPTION_QUERY,
    D3DKMT_VERIFIER_OPTION_SET
} D3DKMT_VERIFIER_OPTION_MODE;
typedef enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE
{
    D3DKMT_PROCESS_VERIFIER_OPTION_VIDMM_FLAGS = 1000,
    D3DKMT_PROCESS_VERIFIER_OPTION_VIDMM_RESTRICT_BUDGET = 1001,
} D3DKMT_PROCESS_VERIFIER_OPTION_TYPE;
typedef union _D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS
{
    struct
    {
        UINT ForceSynchronousEvict : 1;
        UINT NeverDeferEvictions : 1;
        UINT AlwaysFailCommitOnReclaim : 1;
        UINT Reserved : 29;
    };
    UINT32 Value;
} D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS;
typedef struct _D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET
{
    UINT64 LocalBudget;
    UINT64 NonLocalBudget;
} D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET;
typedef union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA
{
    D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS VidMmFlags;
    D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET VidMmRestrictBudget;
} D3DKMT_PROCESS_VERIFIER_OPTION_DATA;
typedef struct _D3DKMT_PROCESS_VERIFIER_OPTION
{
    HANDLE hProcess;
    D3DKMT_PROCESS_VERIFIER_OPTION_TYPE Type;
    D3DKMT_VERIFIER_OPTION_MODE Mode;
    D3DKMT_PROCESS_VERIFIER_OPTION_DATA Data;
} D3DKMT_PROCESS_VERIFIER_OPTION;
typedef enum _D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE
{
    D3DKMT_ADAPTER_VERIFIER_OPTION_VIDMM_FLAGS = 1000,
    D3DKMT_ADAPTER_VERIFIER_OPTION_VIDMM_TRIM_INTERVAL = 1001,
} D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE;
typedef union _D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS
{
    struct
    {
        UINT AlwaysRepatch : 1;
        UINT FailSharedPrimary : 1;
        UINT FailProbeAndLock : 1;
        UINT AlwaysDiscardOffer : 1;
        UINT NeverDiscardOffer : 1;
        UINT ForceComplexLock : 1;
        UINT NeverPrepatch : 1;
        UINT ExpectPreparationFailure : 1;
        UINT TakeSplitPoint : 1;
        UINT FailAcquireSwizzlingRange : 1;
        UINT PagingPathLockSubrange : 1;
        UINT PagingPathLockMinrange : 1;
        UINT FailVaRotation : 1;
        UINT NoDemotion : 1;
        UINT FailDefragPass : 1;
        UINT AlwaysProcessOfferList : 1;
        UINT AlwaysDecommitOffer : 1;
        UINT NeverMoveDefrag : 1;
        UINT AlwaysRelocateDisplayableResources : 1;
        UINT Reserved : 13;
    };
    UINT32 Value;
} D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS;
typedef struct _D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL
{
    UINT64 MinimumTrimInterval;
    UINT64 MaximumTrimInterval;
    UINT64 IdleTrimInterval;
} D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL;
typedef union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA
{
    D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS VidMmFlags;
    D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL VidMmTrimInterval;
} D3DKMT_ADAPTER_VERIFIER_OPTION_DATA;
typedef struct _D3DKMT_ADAPTER_VERIFIER_OPTION
{
    D3DKMT_ADAPTER_VERIFIER_OPTION_TYPE Type;
    D3DKMT_VERIFIER_OPTION_MODE Mode;
    D3DKMT_ADAPTER_VERIFIER_OPTION_DATA Data;
} D3DKMT_ADAPTER_VERIFIER_OPTION;
typedef enum _D3DKMT_DEVICEESCAPE_TYPE
{
    D3DKMT_DEVICEESCAPE_VIDPNFROMALLOCATION = 0,
    D3DKMT_DEVICEESCAPE_RESTOREGAMMA = 1,
} D3DKMT_DEVICEESCAPE_TYPE;
typedef struct _D3DKMT_DEVICE_ESCAPE
{
    D3DKMT_DEVICEESCAPE_TYPE Type;
    union
    {
        struct
        {
            D3DKMT_HANDLE hPrimaryAllocation;
            D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
        } VidPnFromAllocation;
    };
} D3DKMT_DEVICE_ESCAPE;
typedef struct _D3DKMT_DEBUG_SNAPSHOT_ESCAPE
{
    ULONG Length;
    BYTE Buffer[1];
} D3DKMT_DEBUG_SNAPSHOT_ESCAPE;
typedef enum _OUTPUTDUPL_CONTEXT_DEBUG_STATUS
{
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_INACTIVE = 0,
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_ACTIVE = 1,
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_PENDING_DESTROY = 2,
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS_FORCE_UINT32 = 0xffffffff
}OUTPUTDUPL_CONTEXT_DEBUG_STATUS;
typedef struct _OUTPUTDUPL_CONTEXT_DEBUG_INFO
{
    OUTPUTDUPL_CONTEXT_DEBUG_STATUS Status;
    HANDLE ProcessID;
    UINT32 AccumulatedPresents;
    LARGE_INTEGER LastPresentTime;
    LARGE_INTEGER LastMouseTime;
    CHAR ProcessName[DXGK_DIAG_PROCESS_NAME_LENGTH];
} OUTPUTDUPL_CONTEXT_DEBUG_INFO;
    (pSnapshot->OutputDuplDebugInfos[(VidPnSource * pSnapshot->NumOutputDuplContexts) + OutputDuplContextIndex])
typedef struct _D3DKMT_OUTPUTDUPL_SNAPSHOT
{
    UINT Size;
    UINT SessionProcessCount;
    UINT SessionActiveConnectionsCount;
    UINT NumVidPnSources;
    UINT NumOutputDuplContexts;
    _Field_size_bytes_(Size - sizeof(_D3DKMT_OUTPUTDUPL_SNAPSHOT)) OUTPUTDUPL_CONTEXT_DEBUG_INFO OutputDuplDebugInfos[0];
} D3DKMT_OUTPUTDUPL_SNAPSHOT;
typedef enum _D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE
{
    D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE_EXTRA_CCD_DATABASE_INFO = 0,
    D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE_MODES_PRUNED = 15,
}D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE;
typedef struct _D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE
{
    D3DKMT_ACTIVATE_SPECIFIC_DIAG_TYPE Type;
    BOOL Activate;
} D3DKMT_ACTIVATE_SPECIFIC_DIAG_ESCAPE;
typedef struct _D3DKMT_ESCAPE
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hDevice;
    D3DKMT_ESCAPETYPE Type;
    D3DDDI_ESCAPEFLAGS Flags;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    D3DKMT_HANDLE hContext;
} D3DKMT_ESCAPE;
typedef enum _D3DKMT_VIDPNSOURCEOWNER_TYPE
{
     D3DKMT_VIDPNSOURCEOWNER_UNOWNED = 0,
     D3DKMT_VIDPNSOURCEOWNER_SHARED = 1,
     D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVE = 2,
     D3DKMT_VIDPNSOURCEOWNER_EXCLUSIVEGDI = 3,
     D3DKMT_VIDPNSOURCEOWNER_EMULATED = 4,
} D3DKMT_VIDPNSOURCEOWNER_TYPE;
typedef struct _D3DKMT_VIDPNSOURCEOWNER_FLAGS
{
    union
    {
        struct
        {
            UINT AllowOutputDuplication : 1;
            UINT DisableDWMVirtualMode : 1;
            UINT UseNtHandles : 1;
            UINT Reserved : 29;
        };
        UINT Value;
    };
} D3DKMT_VIDPNSOURCEOWNER_FLAGS;
typedef struct _D3DKMT_SETVIDPNSOURCEOWNER
{
    D3DKMT_HANDLE hDevice;
    CONST D3DKMT_VIDPNSOURCEOWNER_TYPE* pType;
    CONST D3DDDI_VIDEO_PRESENT_SOURCE_ID* pVidPnSourceId;
    UINT VidPnSourceCount;
} D3DKMT_SETVIDPNSOURCEOWNER;
typedef struct _D3DKMT_SETVIDPNSOURCEOWNER1
{
    D3DKMT_SETVIDPNSOURCEOWNER Version0;
    D3DKMT_VIDPNSOURCEOWNER_FLAGS Flags;
} D3DKMT_SETVIDPNSOURCEOWNER1;
typedef struct _D3DKMT_SETVIDPNSOURCEOWNER2
{
    D3DKMT_SETVIDPNSOURCEOWNER1 Version1;
    CONST HANDLE* pVidPnSourceNtHandles;
} D3DKMT_SETVIDPNSOURCEOWNER2;
typedef struct _D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
} D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP;
typedef struct _D3DKMT_GETPRESENTHISTORY
{
    D3DKMT_HANDLE hAdapter;
    UINT ProvidedSize;
    UINT WrittenSize;
    _Field_size_bytes_(ProvidedSize) D3DKMT_PRESENTHISTORYTOKEN *pTokens;
    UINT NumTokens;
} D3DKMT_GETPRESENTHISTORY;
typedef struct _D3DKMT_CREATEOVERLAY
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_HANDLE hDevice;
    D3DDDI_KERNELOVERLAYINFO OverlayInfo;
    D3DKMT_HANDLE hOverlay;
} D3DKMT_CREATEOVERLAY;
typedef struct _D3DKMT_UPDATEOVERLAY
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hOverlay;
    D3DDDI_KERNELOVERLAYINFO OverlayInfo;
} D3DKMT_UPDATEOVERLAY;
typedef struct _D3DKMT_FLIPOVERLAY
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hOverlay;
    D3DKMT_HANDLE hSource;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} D3DKMT_FLIPOVERLAY;
typedef struct _D3DKMT_GETOVERLAYSTATE
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hOverlay;
    BOOLEAN OverlayEnabled;
} D3DKMT_GETOVERLAYSTATE;
typedef struct _D3DKMT_DESTROYOVERLAY
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hOverlay;
} D3DKMT_DESTROYOVERLAY;
typedef struct _D3DKMT_WAITFORVERTICALBLANKEVENT
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
} D3DKMT_WAITFORVERTICALBLANKEVENT;
typedef struct _D3DKMT_WAITFORVERTICALBLANKEVENT2
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT NumObjects;
    HANDLE ObjectHandleArray[D3DKMT_MAX_WAITFORVERTICALBLANK_OBJECTS];
} D3DKMT_WAITFORVERTICALBLANKEVENT2;
typedef struct _D3DKMT_GETVERTICALBLANKEVENT
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    HANDLE* phEvent;
} D3DKMT_GETVERTICALBLANKEVENT;
typedef struct _D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET
{
    D3DKMT_HANDLE hAdapter;
    D3DKMT_HANDLE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT TargetSyncRefreshCount;
} D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET;
typedef struct _D3DKMT_SETGAMMARAMP
{
    D3DKMT_HANDLE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DDDI_GAMMARAMP_TYPE Type;
    union
    {
        D3DDDI_GAMMA_RAMP_RGB256x3x16* pGammaRampRgb256x3x16;
        D3DDDI_GAMMA_RAMP_DXGI_1* pGammaRampDXGI1;
    };
    UINT Size;
} D3DKMT_SETGAMMARAMP;
typedef struct _D3DKMT_ADJUSTFULLSCREENGAMMA
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DDDI_DXGI_RGB Scale;
    D3DDDI_DXGI_RGB Offset;
} D3DKMT_ADJUSTFULLSCREENGAMMA;
typedef struct _D3DKMT_SET_COLORSPACE_TRANSFORM
{
    _In_ LUID AdapterLuid;
    _In_ D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
    _In_ D3DDDI_GAMMARAMP_TYPE Type;
    _In_ UINT Size;
    union
    {
        _In_reads_bytes_opt_(Size) D3DKMDT_3x4_COLORSPACE_TRANSFORM* pColorSpaceTransform;
    };
} D3DKMT_SET_COLORSPACE_TRANSFORM;
typedef struct _D3DKMT_SETVIDPNSOURCEHWPROTECTION
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    BOOL HwProtected;
} D3DKMT_SETVIDPNSOURCEHWPROTECTION;
typedef struct _D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY
{
    D3DKMT_HANDLE hAdapter;
    BOOL Recovered;
} D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY;
typedef enum _D3DKMT_DEVICEEXECUTION_STATE
{
    D3DKMT_DEVICEEXECUTION_ACTIVE = 1,
    D3DKMT_DEVICEEXECUTION_RESET = 2,
    D3DKMT_DEVICEEXECUTION_HUNG = 3,
    D3DKMT_DEVICEEXECUTION_STOPPED = 4,
    D3DKMT_DEVICEEXECUTION_ERROR_OUTOFMEMORY = 5,
    D3DKMT_DEVICEEXECUTION_ERROR_DMAFAULT = 6,
    D3DKMT_DEVICEEXECUTION_ERROR_DMAPAGEFAULT = 7,
} D3DKMT_DEVICEEXECUTION_STATE;
typedef struct _D3DKMT_DEVICERESET_STATE
{
    union
    {
        struct
        {
            UINT DesktopSwitched : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} D3DKMT_DEVICERESET_STATE;
typedef struct _D3DKMT_PRESENT_STATS
{
    UINT PresentCount;
    UINT PresentRefreshCount;
    UINT SyncRefreshCount;
    LARGE_INTEGER SyncQPCTime;
    LARGE_INTEGER SyncGPUTime;
} D3DKMT_PRESENT_STATS;
typedef struct _D3DKMT_DEVICEPRESENT_STATE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_PRESENT_STATS PresentStats;
} D3DKMT_DEVICEPRESENT_STATE;
typedef struct _D3DKMT_PRESENT_STATS_DWM
{
    UINT PresentCount;
    UINT PresentRefreshCount;
    LARGE_INTEGER PresentQPCTime;
    UINT SyncRefreshCount;
    LARGE_INTEGER SyncQPCTime;
    UINT CustomPresentDuration;
} D3DKMT_PRESENT_STATS_DWM;
typedef struct _D3DKMT_DEVICEPAGEFAULT_STATE
{
    UINT64 FaultedPrimitiveAPISequenceNumber;
    DXGK_RENDER_PIPELINE_STAGE FaultedPipelineStage;
    UINT FaultedBindTableEntry;
    DXGK_PAGE_FAULT_FLAGS PageFaultFlags;
    DXGK_FAULT_ERROR_CODE FaultErrorCode;
    D3DGPU_VIRTUAL_ADDRESS FaultedVirtualAddress;
} D3DKMT_DEVICEPAGEFAULT_STATE;
typedef struct _D3DKMT_DEVICEPRESENT_STATE_DWM
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_PRESENT_STATS_DWM PresentStatsDWM;
} D3DKMT_DEVICEPRESENT_STATE_DWM;
typedef struct _D3DKMT_DEVICEPRESENT_QUEUE_STATE
{
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    BOOLEAN bQueuedPresentLimitReached;
} D3DKMT_DEVICEPRESENT_QUEUE_STATE;
typedef enum _D3DKMT_DEVICESTATE_TYPE
{
    D3DKMT_DEVICESTATE_EXECUTION = 1,
    D3DKMT_DEVICESTATE_PRESENT = 2,
    D3DKMT_DEVICESTATE_RESET = 3,
    D3DKMT_DEVICESTATE_PRESENT_DWM = 4,
    D3DKMT_DEVICESTATE_PAGE_FAULT = 5,
    D3DKMT_DEVICESTATE_PRESENT_QUEUE = 6,
} D3DKMT_DEVICESTATE_TYPE;
typedef struct _D3DKMT_GETDEVICESTATE
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_DEVICESTATE_TYPE StateType;
    union
    {
        D3DKMT_DEVICEEXECUTION_STATE ExecutionState;
        D3DKMT_DEVICEPRESENT_STATE PresentState;
        D3DKMT_DEVICERESET_STATE ResetState;
        D3DKMT_DEVICEPRESENT_STATE_DWM PresentStateDWM;
        D3DKMT_DEVICEPAGEFAULT_STATE PageFaultState;
        D3DKMT_DEVICEPRESENT_QUEUE_STATE PresentQueueState;
    };
} D3DKMT_GETDEVICESTATE;
typedef struct _D3DKMT_CREATEDCFROMMEMORY
{
    VOID* pMemory;
    D3DDDIFORMAT Format;
    UINT Width;
    UINT Height;
    UINT Pitch;
    HDC hDeviceDc;
    PALETTEENTRY* pColorTable;
    HDC hDc;
    HANDLE hBitmap;
} D3DKMT_CREATEDCFROMMEMORY;
typedef struct _D3DKMT_DESTROYDCFROMMEMORY
{
    HDC hDc;
    HANDLE hBitmap;
} D3DKMT_DESTROYDCFROMMEMORY;
typedef struct _D3DKMT_SETCONTEXTSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE hContext;
    INT Priority;
} D3DKMT_SETCONTEXTSCHEDULINGPRIORITY;
typedef struct _D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE hContext;
    INT Priority;
} D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY;
typedef struct _D3DKMT_CHANGESURFACEPOINTER
{
    HDC hDC;
    HANDLE hBitmap;
    LPVOID pSurfacePointer;
    UINT Width;
    UINT Height;
    UINT Pitch;
} D3DKMT_CHANGESURFACEPOINTER;
typedef struct _D3DKMT_GETCONTEXTSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE hContext;
    INT Priority;
} D3DKMT_GETCONTEXTSCHEDULINGPRIORITY;
typedef struct _D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY
{
    D3DKMT_HANDLE hContext;
    INT Priority;
} D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY;
typedef enum _D3DKMT_SCHEDULINGPRIORITYCLASS
{
    D3DKMT_SCHEDULINGPRIORITYCLASS_IDLE = 0,
    D3DKMT_SCHEDULINGPRIORITYCLASS_BELOW_NORMAL = 1,
    D3DKMT_SCHEDULINGPRIORITYCLASS_NORMAL = 2,
    D3DKMT_SCHEDULINGPRIORITYCLASS_ABOVE_NORMAL = 3,
    D3DKMT_SCHEDULINGPRIORITYCLASS_HIGH = 4,
    D3DKMT_SCHEDULINGPRIORITYCLASS_REALTIME = 5,
} D3DKMT_SCHEDULINGPRIORITYCLASS;
typedef struct _D3DKMT_GETSCANLINE
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    BOOLEAN InVerticalBlank;
    UINT ScanLine;
} D3DKMT_GETSCANLINE;
typedef enum _D3DKMT_QUEUEDLIMIT_TYPE
{
    D3DKMT_SET_QUEUEDLIMIT_PRESENT = 1,
    D3DKMT_GET_QUEUEDLIMIT_PRESENT = 2,
} D3DKMT_QUEUEDLIMIT_TYPE;
typedef struct _D3DKMT_SETQUEUEDLIMIT
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_QUEUEDLIMIT_TYPE Type;
    union
    {
        UINT QueuedPresentLimit;
        struct
        {
            D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
            UINT QueuedPendingFlipLimit;
        };
    };
} D3DKMT_SETQUEUEDLIMIT;
typedef struct _D3DKMT_POLLDISPLAYCHILDREN
{
    D3DKMT_HANDLE hAdapter;
    UINT NonDestructiveOnly : 1;
    UINT SynchronousPolling : 1;
    UINT DisableModeReset : 1;
    UINT PollAllAdapters : 1;
    UINT PollInterruptible : 1;
    UINT Reserved : 27;
} D3DKMT_POLLDISPLAYCHILDREN;
typedef struct _D3DKMT_INVALIDATEACTIVEVIDPN
{
    D3DKMT_HANDLE hAdapter;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} D3DKMT_INVALIDATEACTIVEVIDPN;
typedef struct _D3DKMT_CHECKOCCLUSION
{
    HWND hWindow;
} D3DKMT_CHECKOCCLUSION;
typedef struct _D3DKMT_WAITFORIDLE
{
    D3DKMT_HANDLE hDevice;
} D3DKMT_WAITFORIDLE;
typedef struct _D3DKMT_CHECKMONITORPOWERSTATE
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
} D3DKMT_CHECKMONITORPOWERSTATE;
typedef struct _D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT
{
    D3DKMT_HANDLE hDevice;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT PrivateDriverFormatAttribute;
} D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT;
typedef struct _D3DKMT_CREATEKEYEDMUTEX
{
    UINT64 InitialValue;
    D3DKMT_HANDLE hSharedHandle;
    D3DKMT_HANDLE hKeyedMutex;
} D3DKMT_CREATEKEYEDMUTEX;
typedef struct _D3DKMT_OPENKEYEDMUTEX
{
    D3DKMT_HANDLE hSharedHandle;
    D3DKMT_HANDLE hKeyedMutex;
} D3DKMT_OPENKEYEDMUTEX;
typedef struct _D3DKMT_DESTROYKEYEDMUTEX
{
    D3DKMT_HANDLE hKeyedMutex;
} D3DKMT_DESTROYKEYEDMUTEX;
typedef struct _D3DKMT_ACQUIREKEYEDMUTEX
{
    D3DKMT_HANDLE hKeyedMutex;
    UINT64 Key;
    PLARGE_INTEGER pTimeout;
    UINT64 FenceValue;
} D3DKMT_ACQUIREKEYEDMUTEX;
typedef struct _D3DKMT_RELEASEKEYEDMUTEX
{
    D3DKMT_HANDLE hKeyedMutex;
    UINT64 Key;
    UINT64 FenceValue;
} D3DKMT_RELEASEKEYEDMUTEX;
typedef struct _D3DKMT_CREATEKEYEDMUTEX2_FLAGS
{
    union
    {
        struct
        {
            UINT NtSecuritySharing : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} D3DKMT_CREATEKEYEDMUTEX2_FLAGS;
typedef struct _D3DKMT_CREATEKEYEDMUTEX2
{
    UINT64 InitialValue;
    D3DKMT_HANDLE hSharedHandle;
    D3DKMT_HANDLE hKeyedMutex;
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
    D3DKMT_CREATEKEYEDMUTEX2_FLAGS Flags;
} D3DKMT_CREATEKEYEDMUTEX2;
typedef struct _D3DKMT_OPENKEYEDMUTEX2
{
    D3DKMT_HANDLE hSharedHandle;
    D3DKMT_HANDLE hKeyedMutex;
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
} D3DKMT_OPENKEYEDMUTEX2;
typedef struct _D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE
{
    HANDLE hNtHandle;
    D3DKMT_HANDLE hKeyedMutex;
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
} D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE;
typedef struct _D3DKMT_ACQUIREKEYEDMUTEX2
{
    D3DKMT_HANDLE hKeyedMutex;
    UINT64 Key;
    PLARGE_INTEGER pTimeout;
    UINT64 FenceValue;
    _Out_writes_bytes_all_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
} D3DKMT_ACQUIREKEYEDMUTEX2;
typedef struct _D3DKMT_RELEASEKEYEDMUTEX2
{
    D3DKMT_HANDLE hKeyedMutex;
    UINT64 Key;
    UINT64 FenceValue;
    _In_reads_bytes_opt_(PrivateRuntimeDataSize) VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
} D3DKMT_RELEASEKEYEDMUTEX2;
typedef struct _D3DKMT_CONFIGURESHAREDRESOURCE
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hResource;
    BOOLEAN IsDwm;
    HANDLE hProcess;
    BOOLEAN AllowAccess;
} D3DKMT_CONFIGURESHAREDRESOURCE;
typedef struct _D3DKMT_CHECKSHAREDRESOURCEACCESS
{
    D3DKMT_HANDLE hResource;
    UINT ClientPid;
} D3DKMT_CHECKSHAREDRESOURCEACCESS;
typedef enum _D3DKMT_OFFER_PRIORITY
{
    D3DKMT_OFFER_PRIORITY_LOW=1,
    D3DKMT_OFFER_PRIORITY_NORMAL,
    D3DKMT_OFFER_PRIORITY_HIGH,
    D3DKMT_OFFER_PRIORITY_AUTO,
} D3DKMT_OFFER_PRIORITY;
typedef struct _D3DKMT_OFFER_FLAGS
{
    union
    {
        struct
        {
            UINT OfferImmediately : 1;
            UINT AllowDecommit : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    };
} D3DKMT_OFFER_FLAGS;
typedef struct _D3DKMT_OFFERALLOCATIONS
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE* pResources;
    CONST D3DKMT_HANDLE* HandleList;
    UINT NumAllocations;
    D3DKMT_OFFER_PRIORITY Priority;
    D3DKMT_OFFER_FLAGS Flags;
} D3DKMT_OFFERALLOCATIONS;
typedef struct _D3DKMT_RECLAIMALLOCATIONS
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE* pResources;
    CONST D3DKMT_HANDLE* HandleList;
    BOOL* pDiscarded;
    UINT NumAllocations;
} D3DKMT_RECLAIMALLOCATIONS;
typedef struct _D3DKMT_RECLAIMALLOCATIONS2
{
    D3DKMT_HANDLE hPagingQueue;
    UINT NumAllocations;
    D3DKMT_HANDLE* pResources;
    CONST D3DKMT_HANDLE* HandleList;
    union
    {
        BOOL* pDiscarded;
        D3DDDI_RECLAIM_RESULT* pResults;
    };
    UINT64 PagingFenceValue;
} D3DKMT_RECLAIMALLOCATIONS2;
typedef struct _D3DKMT_OUTPUTDUPLCREATIONFLAGS
{
    union
    {
        struct
        {
            UINT CompositionUiCaptureOnly : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} D3DKMT_OUTPUTDUPLCREATIONFLAGS;
typedef struct _D3DKMT_OUTPUTDUPL_KEYEDMUTEX
{
    HANDLE hSharedSurfaceNt;
}D3DKMT_OUTPUTDUPL_KEYEDMUTEX;
typedef struct _D3DKMT_CREATE_OUTPUTDUPL
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT KeyedMutexCount;
    UINT RequiredKeyedMutexCount;
    D3DKMT_OUTPUTDUPL_KEYEDMUTEX KeyedMutexs[OUTPUTDUPL_CREATE_MAX_KEYEDMUTXES];
    D3DKMT_OUTPUTDUPLCREATIONFLAGS Flags;
} D3DKMT_CREATE_OUTPUTDUPL;
typedef struct _D3DKMT_DESTROY_OUTPUTDUPL
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    BOOL bDestroyAllContexts;
} D3DKMT_DESTROY_OUTPUTDUPL;
typedef struct _D3DKMT_OUTPUTDUPL_POINTER_POSITION
{
    POINT Position;
    BOOL Visible;
} D3DKMT_OUTPUTDUPL_POINTER_POSITION;
typedef struct _D3DKMT_OUTPUTDUPL_FRAMEINFO
{
    LARGE_INTEGER LastPresentTime;
    LARGE_INTEGER LastMouseUpdateTime;
    UINT AccumulatedFrames;
    BOOL RectsCoalesced;
    BOOL ProtectedContentMaskedOut;
    D3DKMT_OUTPUTDUPL_POINTER_POSITION PointerPosition;
    UINT TotalMetadataBufferSize;
    UINT PointerShapeBufferSize;
} D3DKMT_OUTPUTDUPL_FRAMEINFO;
typedef struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_OUTPUTDUPL_FRAMEINFO FrameInfo;
} D3DKMT_OUTPUTDUPL_GET_FRAMEINFO;
typedef enum _D3DKMT_OUTPUTDUPL_METADATATYPE
{
    D3DKMT_OUTPUTDUPL_METADATATYPE_DIRTY_RECTS = 0,
    D3DKMT_OUTPUTDUPL_METADATATYPE_MOVE_RECTS = 1
} D3DKMT_OUTPUTDUPL_METADATATYPE;
typedef struct _D3DKMT_OUTPUTDUPL_METADATA
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_OUTPUTDUPL_METADATATYPE Type;
    UINT BufferSizeSupplied;
    _Field_size_bytes_part_(BufferSizeSupplied, BufferSizeRequired) PVOID pBuffer;
    UINT BufferSizeRequired;
} D3DKMT_OUTPUTDUPL_METADATA;
typedef enum _D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE
{
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE_MONOCHROME = 0x00000001,
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE_COLOR = 0x00000002,
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE_MASKED_COLOR = 0x00000004
} D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE;
typedef struct _D3DKMT_OUTDUPL_POINTER_SHAPE_INFO
{
    D3DKMT_OUTDUPL_POINTER_SHAPE_TYPE Type;
    UINT Width;
    UINT Height;
    UINT Pitch;
    POINT HotSpot;
} D3DKMT_OUTDUPL_POINTER_SHAPE_INFO;
typedef struct _D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT BufferSizeSupplied;
    _Field_size_bytes_part_(BufferSizeSupplied, BufferSizeRequired) PVOID pShapeBuffer;
    UINT BufferSizeRequired;
    D3DKMT_OUTDUPL_POINTER_SHAPE_INFO ShapeInfo;
} D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA;
typedef struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME
{
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    UINT NextKeyMutexIdx;
} D3DKMT_OUTPUTDUPL_RELEASE_FRAME;
typedef struct _D3DKMT_GETSHAREDRESOURCEADAPTERLUID
{
    D3DKMT_HANDLE hGlobalShare;
    HANDLE hNtHandle;
    LUID AdapterLuid;
} D3DKMT_GETSHAREDRESOURCEADAPTERLUID;
typedef enum _D3DKMT_GPU_PREFERENCE_QUERY_STATE
{
    D3DKMT_GPU_PREFERENCE_STATE_UNINITIALIZED,
    D3DKMT_GPU_PREFERENCE_STATE_HIGH_PERFORMANCE,
    D3DKMT_GPU_PREFERENCE_STATE_MINIMUM_POWER,
    D3DKMT_GPU_PREFERENCE_STATE_UNSPECIFIED
} D3DKMT_GPU_PREFERENCE_QUERY_STATE;
typedef enum _D3DKMT_GPU_PREFERENCE_QUERY_TYPE
{
    D3DKMT_GPU_PREFERENCE_TYPE_IHV_DLIST,
    D3DKMT_GPU_PREFERENCE_TYPE_DX_DATABASE,
    D3DKMT_GPU_PREFERENCE_TYPE_USER_PREFERENCE
} D3DKMT_GPU_PREFERENCE_QUERY_TYPE;
typedef struct _D3DKMT_HYBRID_LIST
{
    D3DKMT_GPU_PREFERENCE_QUERY_STATE State;
    LUID AdapterLuid;
    BOOL bUserPreferenceQuery;
    D3DKMT_GPU_PREFERENCE_QUERY_TYPE QueryType;
} D3DKMT_HYBRID_LIST;
typedef struct
{
    DXGK_MIRACAST_CHUNK_INFO ChunkInfo;
    UINT PrivateDriverDataSize;
    BYTE PrivateDriverData[1];
} D3DKMT_MIRACAST_CHUNK_DATA;
typedef enum
{
    MiracastStopped = 0,
    MiracastStartPending = 1,
    MiracastStarted = 2,
    MiracastStopPending = 3,
} D3DKMT_MIRACAST_DISPLAY_DEVICE_STATE;
typedef enum
{
    D3DKMT_MIRACAST_DEVICE_STATUS_SUCCESS = 0,
    D3DKMT_MIRACAST_DEVICE_STATUS_SUCCESS_NO_MONITOR = 1,
    D3DKMT_MIRACAST_DEVICE_STATUS_PENDING = 2,
    D3DKMT_MIRACAST_DEVICE_STATUS_UNKOWN_ERROR = 0x80000001,
    D3DKMT_MIRACAST_DEVICE_STATUS_GPU_RESOURCE_IN_USE = 0x80000002,
    D3DKMT_MIRACAST_DEVICE_STATUS_DEVICE_ERROR = 0x80000003,
    D3DKMT_MIRACAST_DEVICE_STATUS_UNKOWN_PAIRING = 0x80000004,
    D3DKMT_MIRACAST_DEVICE_STATUS_REMOTE_SESSION = 0x80000005,
    D3DKMT_MIRACAST_DEVICE_STATUS_DEVICE_NOT_FOUND = 0x80000006,
    D3DKMT_MIRACAST_DEVICE_STATUS_DEVICE_NOT_STARTED = 0x80000007,
    D3DKMT_MIRACAST_DEVICE_STATUS_INVALID_PARAMETER = 0x80000008,
    D3DKMT_MIRACAST_DEVICE_STATUS_INSUFFICIENT_BANDWIDTH = 0x80000009,
    D3DKMT_MIRACAST_DEVICE_STATUS_INSUFFICIENT_MEMORY = 0x8000000A,
    D3DKMT_MIRACAST_DEVICE_STATUS_CANCELLED = 0x8000000B,
} D3DKMT_MIRACAST_DEVICE_STATUS;
typedef struct _D3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS
{
    D3DKMT_MIRACAST_DISPLAY_DEVICE_STATE State;
} D3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS, *PD3DKMT_MIRACAST_DISPLAY_DEVICE_STATUS;
typedef struct _D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS
{
    BOOLEAN HdcpSupported;
    ULONG DefaultControlPort;
    BOOLEAN UsesIhvSolution;
} D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS, *PD3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS;
typedef struct _D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS
{
    LUID AdapterLuid;
    D3DDDI_VIDEO_PRESENT_TARGET_ID TargetId;
    UINT StopReason;
} D3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS, *PD3DKMT_MIRACAST_DISPLAY_STOP_SESSIONS;
typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU
{
    D3DKMT_HANDLE hDevice;
    UINT ObjectCount;
    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE* ObjectHandleArray;
    _Field_size_(ObjectCount)
    const UINT64* FenceValueArray;
    HANDLE hAsyncEvent;
    D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS Flags;
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU;
typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU
{
    D3DKMT_HANDLE hDevice;
    UINT ObjectCount;
    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE* ObjectHandleArray;
    _Field_size_(ObjectCount)
    const UINT64* FenceValueArray;
    D3DDDICB_SIGNALFLAGS Flags;
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU;
typedef struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU
{
    D3DKMT_HANDLE hContext;
    UINT ObjectCount;
    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE* ObjectHandleArray;
    union
    {
        _Field_size_(ObjectCount)
        const UINT64* MonitoredFenceValueArray;
        UINT64 FenceValue;
        UINT64 Reserved[8];
    };
} D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU;
typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU
{
    D3DKMT_HANDLE hContext;
    UINT ObjectCount;
    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE* ObjectHandleArray;
    union
    {
        _Field_size_(ObjectCount)
        const UINT64* MonitoredFenceValueArray;
        UINT64 Reserved[8];
    };
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU;
typedef struct _D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2
{
    UINT ObjectCount;
    _Field_size_(ObjectCount)
    const D3DKMT_HANDLE* ObjectHandleArray;
    D3DDDICB_SIGNALFLAGS Flags;
    ULONG BroadcastContextCount;
    _Field_size_(BroadcastContextCount)
    const D3DKMT_HANDLE* BroadcastContextArray;
    union
    {
        UINT64 FenceValue;
        HANDLE CpuEventHandle;
        _Field_size_(ObjectCount)
        const UINT64* MonitoredFenceValueArray;
        UINT64 Reserved[8];
    };
} D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2;
typedef struct _D3DKMT_CREATEPAGINGQUEUE
{
    D3DKMT_HANDLE hDevice;
    D3DDDI_PAGINGQUEUE_PRIORITY Priority;
    D3DKMT_HANDLE hPagingQueue;
    D3DKMT_HANDLE hSyncObject;
    VOID* FenceValueCPUVirtualAddress;
    UINT PhysicalAdapterIndex;
} D3DKMT_CREATEPAGINGQUEUE;
typedef struct _D3DKMT_EVICT
{
    D3DKMT_HANDLE hDevice;
    UINT NumAllocations;
    CONST D3DKMT_HANDLE* AllocationList;
    D3DDDI_EVICT_FLAGS Flags;
    UINT64 NumBytesToTrim;
} D3DKMT_EVICT;
typedef struct _D3DKMT_LOCK2
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hAllocation;
    D3DDDICB_LOCK2FLAGS Flags;
    PVOID pData;
} D3DKMT_LOCK2;
typedef struct _D3DKMT_UNLOCK2
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hAllocation;
} D3DKMT_UNLOCK2;
typedef struct _D3DKMT_INVALIDATECACHE
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hAllocation;
    SIZE_T Offset;
    SIZE_T Length;
} D3DKMT_INVALIDATECACHE;
typedef struct _D3DKMT_FREEGPUVIRTUALADDRESS
{
    D3DKMT_HANDLE hAdapter;
    D3DGPU_VIRTUAL_ADDRESS BaseAddress;
    D3DGPU_SIZE_T Size;
} D3DKMT_FREEGPUVIRTUALADDRESS;
typedef struct _D3DKMT_UPDATEGPUVIRTUALADDRESS
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hContext;
    D3DKMT_HANDLE hFenceObject;
    UINT NumOperations;
    D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION* Operations;
    UINT Reserved0;
    UINT64 Reserved1;
    UINT64 FenceValue;
    union
    {
       struct
       {
           UINT DoNotWait : 1;
           UINT Reserved : 31;
       };
       UINT Value;
    } Flags;
} D3DKMT_UPDATEGPUVIRTUALADDRESS;
typedef struct _D3DKMT_CREATECONTEXTVIRTUAL
{
    D3DKMT_HANDLE hDevice;
    UINT NodeOrdinal;
    UINT EngineAffinity;
    D3DDDI_CREATECONTEXTFLAGS Flags;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    D3DKMT_CLIENTHINT ClientHint;
    D3DKMT_HANDLE hContext;
} D3DKMT_CREATECONTEXTVIRTUAL;
typedef struct _D3DKMT_SUBMITCOMMANDFLAGS
{
    UINT NullRendering : 1;
    UINT PresentRedirected : 1;
    UINT Reserved : 30;
} D3DKMT_SUBMITCOMMANDFLAGS;
typedef struct _D3DKMT_SUBMITCOMMAND
{
    D3DGPU_VIRTUAL_ADDRESS Commands;
    UINT CommandLength;
    D3DKMT_SUBMITCOMMANDFLAGS Flags;
    ULONGLONG PresentHistoryToken;
    UINT BroadcastContextCount;
    D3DKMT_HANDLE BroadcastContext[D3DDDI_MAX_BROADCAST_CONTEXT];
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    UINT NumPrimaries;
    D3DKMT_HANDLE WrittenPrimaries[D3DDDI_MAX_WRITTEN_PRIMARIES];
    UINT NumHistoryBuffers;
    D3DKMT_HANDLE* HistoryBufferArray;
} D3DKMT_SUBMITCOMMAND;
typedef struct _D3DKMT_SUBMITCOMMANDTOHWQUEUE
{
    D3DKMT_HANDLE hHwQueue;
    UINT64 HwQueueProgressFenceId;
    D3DGPU_VIRTUAL_ADDRESS CommandBuffer;
    UINT CommandLength;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_ (PrivateDriverDataSize)
    VOID* pPrivateDriverData;
    UINT NumPrimaries;
    _Field_size_ (NumPrimaries)
    D3DKMT_HANDLE CONST* WrittenPrimaries;
} D3DKMT_SUBMITCOMMANDTOHWQUEUE;
typedef struct _D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE
{
    D3DKMT_HANDLE hHwQueue;
    UINT ObjectCount;
    _Field_size_ (ObjectCount)
    const D3DKMT_HANDLE* ObjectHandleArray;
    _Field_size_ (ObjectCount)
    const UINT64* FenceValueArray;
} D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE;
typedef struct _D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE
{
    D3DDDICB_SIGNALFLAGS Flags;
    ULONG BroadcastHwQueueCount;
    _Field_size_ (BroadcastHwQueueCount)
    const D3DKMT_HANDLE* BroadcastHwQueueArray;
    UINT ObjectCount;
    _Field_size_ (ObjectCount)
    const D3DKMT_HANDLE* ObjectHandleArray;
    _Field_size_ (ObjectCount)
    const UINT64* FenceValueArray;
} D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE;
typedef struct _D3DKMT_QUERYVIDEOMEMORYINFO
{
    HANDLE hProcess;
    D3DKMT_HANDLE hAdapter;
    D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup;
    UINT64 Budget;
    UINT64 CurrentUsage;
    UINT64 CurrentReservation;
    UINT64 AvailableForReservation;
    UINT PhysicalAdapterIndex;
} D3DKMT_QUERYVIDEOMEMORYINFO;
typedef struct _D3DKMT_CHANGEVIDEOMMEMORYRESERVATION
{
    HANDLE hProcess;
    D3DKMT_HANDLE hAdapter;
    D3DKMT_MEMORY_SEGMENT_GROUP MemorySegmentGroup;
    UINT64 Reservation;
    UINT PhysicalAdapterIndex;
} D3DKMT_CHANGEVIDEOMEMORYRESERVATION;
typedef struct _D3DKMT_SETSTABLEPOWERSTATE
{
    D3DKMT_HANDLE hAdapter;
    BOOL Enabled;
} D3DKMT_SETSTABLEPOWERSTATE;
typedef struct _D3DKMT_TRIMNOTIFICATION
{
    VOID* Context;
    D3DDDI_TRIMRESIDENCYSET_FLAGS Flags;
    UINT64 NumBytesToTrim;
} D3DKMT_TRIMNOTIFICATION;
typedef VOID (APIENTRY *PFND3DKMT_TRIMNOTIFICATIONCALLBACK)(_Inout_ D3DKMT_TRIMNOTIFICATION*);
typedef struct _D3DKMT_REGISTERTRIMNOTIFICATION
{
    LUID AdapterLuid;
    D3DKMT_HANDLE hDevice;
    PFND3DKMT_TRIMNOTIFICATIONCALLBACK Callback;
    VOID* Context;
    VOID* Handle;
} D3DKMT_REGISTERTRIMNOTIFICATION;
typedef struct _D3DKMT_UNREGISTERTRIMNOTIFICATION
{
    VOID* Handle;
    PFND3DKMT_TRIMNOTIFICATIONCALLBACK Callback;
} D3DKMT_UNREGISTERTRIMNOTIFICATION;
typedef struct _D3DKMT_BUDGETCHANGENOTIFICATION
{
    VOID* Context;
    UINT64 Budget;
} D3DKMT_BUDGETCHANGENOTIFICATION;
typedef VOID (APIENTRY *PFND3DKMT_BUDGETCHANGENOTIFICATIONCALLBACK)(_In_ D3DKMT_BUDGETCHANGENOTIFICATION*);
typedef struct _D3DKMT_REGISTERBUDGETCHANGENOTIFICATION
{
    D3DKMT_HANDLE hDevice;
    PFND3DKMT_BUDGETCHANGENOTIFICATIONCALLBACK Callback;
    VOID* Context;
    VOID* Handle;
} D3DKMT_REGISTERBUDGETCHANGENOTIFICATION;
typedef struct _D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION
{
    VOID* Handle;
} D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION;
typedef struct _D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP
{
    HANDLE hProcess;
    HWND hWindow;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    LUID AdapterLuid;
    D3DKMT_VIDPNSOURCEOWNER_TYPE OwnerType;
} D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP;
typedef enum _D3DKMT_DEVICE_ERROR_REASON {
    D3DKMT_DEVICE_ERROR_REASON_GENERIC = 0x80000000,
    D3DKMT_DEVICE_ERROR_REASON_DRIVER_ERROR = 0x80000006,
} D3DKMT_DEVICE_ERROR_REASON;
typedef struct _D3DKMT_MARKDEVICEASERROR
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_DEVICE_ERROR_REASON Reason;
} D3DKMT_MARKDEVICEASERROR;
typedef struct _D3DKMT_FLUSHHEAPTRANSITIONS
{
    D3DKMT_HANDLE hAdapter;
} D3DKMT_FLUSHHEAPTRANSITIONS;
typedef struct _D3DKMT_QUERYPROCESSOFFERINFO
{
    _In_ ULONG cbSize;
    _In_ HANDLE hProcess;
    _Out_ UINT64 DecommitUniqueness;
    _Out_ UINT64 DecommittableBytes;
} D3DKMT_QUERYPROCESSOFFERINFO;
typedef union _D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS
{
    struct
    {
        UINT Lazy : 1;
        UINT OnlyRepurposed : 1;
        UINT Reserved : 30;
    };
    UINT Value;
} D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS;
typedef struct _D3DKMT_TRIMPROCESSCOMMITMENT
{
    _In_ ULONG cbSize;
    _In_ HANDLE hProcess;
    _In_ D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS Flags;
    _In_ UINT64 DecommitRequested;
    _Out_ UINT64 NumBytesDecommitted;
} D3DKMT_TRIMPROCESSCOMMITMENT;
typedef struct _D3DKMT_CREATEHWCONTEXT
{
    D3DKMT_HANDLE hDevice;
    UINT NodeOrdinal;
    UINT EngineAffinity;
    D3DDDI_CREATEHWCONTEXTFLAGS Flags;
    UINT PrivateDriverDataSize;
    _Inout_
    _Field_size_bytes_ (PrivateDriverDataSize)
    VOID* pPrivateDriverData;
    D3DKMT_HANDLE hHwContext;
} D3DKMT_CREATEHWCONTEXT;
typedef struct _D3DKMT_DESTROYHWCONTEXT
{
    D3DKMT_HANDLE hHwContext;
} D3DKMT_DESTROYHWCONTEXT;
typedef struct _D3DKMT_CREATEHWQUEUE
{
    D3DKMT_HANDLE hHwContext;
    D3DDDI_CREATEHWQUEUEFLAGS Flags;
    UINT PrivateDriverDataSize;
    _Inout_
    _Field_size_bytes_ (PrivateDriverDataSize)
    VOID* pPrivateDriverData;
    D3DKMT_HANDLE hHwQueue;
    D3DKMT_HANDLE hHwQueueProgressFence;
    VOID* HwQueueProgressFenceCPUVirtualAddress;
    D3DGPU_VIRTUAL_ADDRESS HwQueueProgressFenceGPUVirtualAddress;
} D3DKMT_CREATEHWQUEUE;
typedef struct _D3DKMT_DESTROYHWQUEUE
{
    D3DKMT_HANDLE hHwQueue;
} D3DKMT_DESTROYHWQUEUE;
typedef struct _D3DKMT_GETALLOCATIONPRIORITY
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hResource;
    CONST D3DKMT_HANDLE* phAllocationList;
    UINT AllocationCount;
    UINT* pPriorities;
} D3DKMT_GETALLOCATIONPRIORITY;
typedef union _D3DKMT_SETFSEBLOCKFLAGS
{
    struct
    {
        UINT Block : 1;
        UINT Reserved : 31;
    };
    UINT Value;
} D3DKMT_SETFSEBLOCKFLAGS;
typedef struct _D3DKMT_SETFSEBLOCK
{
    LUID AdapterLuid;
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_SETFSEBLOCKFLAGS Flags;
} D3DKMT_SETFSEBLOCK;
typedef union _D3DKMT_QUERYFSEFLAGS
{
    struct
    {
        UINT Blocked : 1;
        UINT Reserved : 31;
    };
    UINT Value;
} D3DKMT_QUERYFSEBLOCKFLAGS;
typedef struct _D3DKMT_QUERYFSEBLOCK
{
    LUID AdapterLuid;
    D3DKMT_HANDLE hAdapter;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DKMT_QUERYFSEBLOCKFLAGS Flags;
} D3DKMT_QUERYFSEBLOCK;
typedef struct _D3DKMT_CREATEPROTECTEDSESSION
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hSyncObject;
    _Field_size_bytes_(PrivateDriverDataSize) CONST VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateRuntimeDataSize) CONST VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
    D3DKMT_HANDLE hHandle;
} D3DKMT_CREATEPROTECTEDSESSION;
typedef struct _D3DKMT_DESTROYPROTECTEDSESSION
{
    D3DKMT_HANDLE hHandle;
} D3DKMT_DESTROYPROTECTEDSESSION;
typedef enum _D3DKMT_PROTECTED_SESSION_STATUS
{
    D3DKMT_PROTECTED_SESSION_STATUS_OK = 0,
    D3DKMT_PROTECTED_SESSION_STATUS_INVALID = 1,
} D3DKMT_PROTECTED_SESSION_STATUS;
typedef struct _D3DKMT_QUERYPROTECTEDSESSIONSTATUS
{
    D3DKMT_HANDLE hHandle;
    D3DKMT_PROTECTED_SESSION_STATUS Status;
} D3DKMT_QUERYPROTECTEDSESSIONSTATUS;
typedef struct _D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE
{
    HANDLE hNtHandle;
    _Field_size_bytes_(PrivateDriverDataSize) CONST VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    _Field_size_bytes_(PrivateRuntimeDataSize) CONST VOID* pPrivateRuntimeData;
    UINT PrivateRuntimeDataSize;
} D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE;
typedef struct _D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE
{
    HANDLE hNtHandle;
    D3DKMT_HANDLE hHandle;
} D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE;
typedef struct _D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT
{
    HANDLE hProcess;
    LUID AdapterLuid;
    BOOLEAN Support;
} D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT;
typedef enum _D3DKMT_TRACKEDWORKLOADPOLICY
{
       D3DKMT_TRACKEDWORKLOADPOLICY_NORMAL = 0,
       D3DKMT_TRACKEDWORKLOADPOLICY_ENERGY_EFFICIENT = 1,
       D3DKMT_TRACKEDWORKLOADPOLICY_HIGH_SPEED = 2
} D3DKMT_TRACKEDWORKLOADPOLICY;
typedef enum _D3DKMT_TRACKEDWORKLOADDEADLINETYPE
{
       D3DKMT_TRACKEDWORKLOADDEADLINETYPE_ABSOLUTE = 0,
       D3DKMT_TRACKEDWORKLOADDEADLINETYPE_VBLANK = 1,
} D3DKMT_TRACKEDWORKLOADDEADLINETYPE;
typedef struct _D3DKMT_TRACKEDWORKLOADDEADLINE {
    union {
        UINT64 VBlankOffsetHundredsNS;
        UINT64 AbsoluteQPC;
    };
} D3DKMT_TRACKEDWORKLOADDEADLINE;
typedef struct _D3DKMT_TRACKEDWORKLOADFLAGS
{
    union
    {
        struct
        {
            UINT Periodic : 1;
            UINT SimilarLoad : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    };
} D3DKMT_TRACKEDWORKLOADFLAGS;
typedef struct _D3DKMT_CREATETRACKEDWORKLOAD
{
    ULONG ContextCount;
    _Field_size_(ContextCount)
    const D3DKMT_HANDLE *ContextArray;
    D3DKMT_TRACKEDWORKLOADDEADLINETYPE DeadlineType;
    UINT32 VidPnTargetId;
    D3DKMT_TRACKEDWORKLOADFLAGS Flags;
    D3DKMT_TRACKEDWORKLOADPOLICY Policy;
    UINT MaxInstances;
    D3DKMT_HANDLE hResourceQueryTimestamps;
    D3DKMT_HANDLE hTrackedWorkload;
} D3DKMT_CREATETRACKEDWORKLOAD;
typedef struct _D3DKMT_DESTROYTRACKEDWORKLOAD
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hTrackedWorkload;
} D3DKMT_DESTROYTRACKEDWORKLOAD;
typedef struct _D3DKMT_UPDATETRACKEDWORKLOAD
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hTrackedWorkload;
    D3DKMT_TRACKEDWORKLOADDEADLINE FinishDeadline;
    UINT BeginTrackedWorkloadIndex;
    UINT EndTrackedWorkloadIndex;
    UINT64 FenceSubmissionValue;
    UINT64 FenceCompletedValue;
    UINT64 GPUTimestampFrequency;
    UINT64 GPUCalibrationTimestamp;
    UINT64 CPUCalibrationTimestamp;
    UINT64 TimestampArray[D3DKMT_MAX_TRACKED_WORKLOAD_INSTANCES * 2];
} D3DKMT_UPDATETRACKEDWORKLOAD;
typedef struct _D3DKMT_ENDTRACKEDWORKLOAD
{
    D3DKMT_HANDLE hTrackedWorkload;
} D3DKMT_ENDTRACKEDWORKLOAD;
typedef struct _D3DKMT_GETAVAILABLETRACKEDWORKLOADINDEX
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hTrackedWorkload;
    UINT64 FenceCompletedValue;
    UINT AvailableTrackedWorkloadIndex;
    UINT64 TimestampArray[D3DKMT_MAX_TRACKED_WORKLOAD_INSTANCES * 2];
} D3DKMT_GETAVAILABLETRACKEDWORKLOADINDEX;
typedef struct _D3DKMT_TRACKEDWORKLOADSTATEFLAGS
{
    union
    {
        struct
        {
            UINT Saturated : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} D3DKMT_TRACKEDWORKLOADSTATEFLAGS;
typedef struct _D3DKMT_TRACKEDWORKLOAD_STATISTICS
{
    INT64 Mean;
    INT64 Minimum;
    INT64 Maximum;
    INT64 Variance;
} D3DKMT_TRACKEDWORKLOAD_STATISTICS;
typedef struct _D3DKMT_GETTRACKEDWORKLOADSTATISTICS
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hTrackedWorkload;
    D3DKMT_TRACKEDWORKLOAD_STATISTICS DeadlineOffsetHundredsNS;
    UINT64 MissedDeadlines;
    D3DKMT_TRACKEDWORKLOADSTATEFLAGS Flags;
} D3DKMT_GETTRACKEDWORKLOADSTATISTICS;
typedef struct _D3DKMT_RESETTRACKEDWORKLOAD
{
    D3DKMT_HANDLE hDevice;
    D3DKMT_HANDLE hTrackedWorkload;
} D3DKMT_RESETTRACKEDWORKLOAD;
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEALLOCATION)(_Inout_ D3DKMT_CREATEALLOCATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEALLOCATION2)(_Inout_ D3DKMT_CREATEALLOCATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYRESOURCEINFO)(_Inout_ D3DKMT_QUERYRESOURCEINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYRESOURCEINFOFROMNTHANDLE)(_Inout_ D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SHAREOBJECTS)(
    _In_range_(1, D3DKMT_MAX_OBJECTS_PER_HANDLE) UINT cObjects,
    _In_reads_(cObjects) CONST D3DKMT_HANDLE * hObjects,
    _In_ POBJECT_ATTRIBUTES pObjectAttributes,
    _In_ DWORD dwDesiredAccess,
    _Out_ HANDLE * phSharedNtHandle
    );
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENNTHANDLEFROMNAME)(_Inout_ D3DKMT_OPENNTHANDLEFROMNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENRESOURCEFROMNTHANDLE)(_Inout_ D3DKMT_OPENRESOURCEFROMNTHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCOBJECTFROMNTHANDLE)(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENRESOURCE)(_Inout_ D3DKMT_OPENRESOURCE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENRESOURCE2)(_Inout_ D3DKMT_OPENRESOURCE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYALLOCATION)(_In_ CONST D3DKMT_DESTROYALLOCATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYALLOCATION2)(_In_ CONST D3DKMT_DESTROYALLOCATION2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETALLOCATIONPRIORITY)(_In_ CONST D3DKMT_SETALLOCATIONPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYALLOCATIONRESIDENCY)(_In_ CONST D3DKMT_QUERYALLOCATIONRESIDENCY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEDEVICE)(_Inout_ D3DKMT_CREATEDEVICE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYDEVICE)(_In_ CONST D3DKMT_DESTROYDEVICE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATECONTEXT)(_Inout_ D3DKMT_CREATECONTEXT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYCONTEXT)(_In_ CONST D3DKMT_DESTROYCONTEXT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATESYNCHRONIZATIONOBJECT)(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATESYNCHRONIZATIONOBJECT2)(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCHRONIZATIONOBJECT)(_Inout_ D3DKMT_OPENSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYSYNCHRONIZATIONOBJECT)(_In_ CONST D3DKMT_DESTROYSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECT)(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECT2)(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECT)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECT2)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_LOCK)(_Inout_ D3DKMT_LOCK*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNLOCK)(_In_ CONST D3DKMT_UNLOCK*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETDISPLAYMODELIST)(_Inout_ D3DKMT_GETDISPLAYMODELIST*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETDISPLAYMODE)(_Inout_ CONST D3DKMT_SETDISPLAYMODE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETMULTISAMPLEMETHODLIST)(_Inout_ D3DKMT_GETMULTISAMPLEMETHODLIST*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENT)(_Inout_ D3DKMT_PRESENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RENDER)(_Inout_ D3DKMT_RENDER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETRUNTIMEDATA)(_Inout_ CONST D3DKMT_GETRUNTIMEDATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYADAPTERINFO)(_Inout_ CONST D3DKMT_QUERYADAPTERINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMHDC)(_Inout_ D3DKMT_OPENADAPTERFROMHDC*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMGDIDISPLAYNAME)(_Inout_ D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMDEVICENAME)(_Inout_ D3DKMT_OPENADAPTERFROMDEVICENAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CLOSEADAPTER)(_In_ CONST D3DKMT_CLOSEADAPTER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETSHAREDPRIMARYHANDLE)(_Inout_ D3DKMT_GETSHAREDPRIMARYHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ESCAPE)(_In_ CONST D3DKMT_ESCAPE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETVIDPNSOURCEOWNER)(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETPRESENTHISTORY)(_Inout_ D3DKMT_GETPRESENTHISTORY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEOVERLAY)(_Inout_ D3DKMT_CREATEOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UPDATEOVERLAY)(_In_ CONST D3DKMT_UPDATEOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_FLIPOVERLAY)(_In_ CONST D3DKMT_FLIPOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYOVERLAY)(_In_ CONST D3DKMT_DESTROYOVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORVERTICALBLANKEVENT)(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETGAMMARAMP)(_In_ CONST D3DKMT_SETGAMMARAMP*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETDEVICESTATE)(_Inout_ D3DKMT_GETDEVICESTATE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEDCFROMMEMORY)(_Inout_ D3DKMT_CREATEDCFROMMEMORY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYDCFROMMEMORY)(_In_ CONST D3DKMT_DESTROYDCFROMMEMORY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETCONTEXTSCHEDULINGPRIORITY)(_In_ CONST D3DKMT_SETCONTEXTSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETCONTEXTSCHEDULINGPRIORITY)(_Inout_ D3DKMT_GETCONTEXTSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETPROCESSSCHEDULINGPRIORITYCLASS)(_In_ HANDLE, _In_ D3DKMT_SCHEDULINGPRIORITYCLASS);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETPROCESSSCHEDULINGPRIORITYCLASS)(_In_ HANDLE, _Out_ D3DKMT_SCHEDULINGPRIORITYCLASS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RELEASEPROCESSVIDPNSOURCEOWNERS)(_In_ HANDLE);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETSCANLINE)(_Inout_ D3DKMT_GETSCANLINE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHANGESURFACEPOINTER)(_In_ CONST D3DKMT_CHANGESURFACEPOINTER*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETQUEUEDLIMIT)(_In_ CONST D3DKMT_SETQUEUEDLIMIT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_POLLDISPLAYCHILDREN)(_In_ CONST D3DKMT_POLLDISPLAYCHILDREN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_INVALIDATEACTIVEVIDPN)(_In_ CONST D3DKMT_INVALIDATEACTIVEVIDPN*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKOCCLUSION)(_In_ CONST D3DKMT_CHECKOCCLUSION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORIDLE)(_In_ CONST D3DKMT_WAITFORIDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMONITORPOWERSTATE)(_In_ CONST D3DKMT_CHECKMONITORPOWERSTATE*);
typedef _Check_return_ BOOLEAN (APIENTRY *PFND3DKMT_CHECKEXCLUSIVEOWNERSHIP)();
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP)(_In_ CONST D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT)(_In_ CONST D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SHAREDPRIMARYLOCKNOTIFICATION)(_In_ CONST D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION)(_In_ CONST D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEKEYEDMUTEX)(_Inout_ D3DKMT_CREATEKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENKEYEDMUTEX)(_Inout_ D3DKMT_OPENKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYKEYEDMUTEX)(_In_ CONST D3DKMT_DESTROYKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ACQUIREKEYEDMUTEX)(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RELEASEKEYEDMUTEX)(_Inout_ D3DKMT_RELEASEKEYEDMUTEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEKEYEDMUTEX2)(_Inout_ D3DKMT_CREATEKEYEDMUTEX2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENKEYEDMUTEX2)(_Inout_ D3DKMT_OPENKEYEDMUTEX2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ACQUIREKEYEDMUTEX2)(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RELEASEKEYEDMUTEX2)(_Inout_ D3DKMT_RELEASEKEYEDMUTEX2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CONFIGURESHAREDRESOURCE)(_In_ CONST D3DKMT_CONFIGURESHAREDRESOURCE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETOVERLAYSTATE)(_Inout_ D3DKMT_GETOVERLAYSTATE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKSHAREDRESOURCEACCESS)(_In_ CONST D3DKMT_CHECKSHAREDRESOURCEACCESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OFFERALLOCATIONS)(_In_ CONST D3DKMT_OFFERALLOCATIONS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RECLAIMALLOCATIONS)(_Inout_ CONST D3DKMT_RECLAIMALLOCATIONS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEOUTPUTDUPL)(_In_ CONST D3DKMT_CREATE_OUTPUTDUPL*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYOUTPUTDUPL)(_In_ CONST D3DKMT_DESTROY_OUTPUTDUPL*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLGETFRAMEINFO)(_Inout_ D3DKMT_OUTPUTDUPL_GET_FRAMEINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLGETMETADATA)(_Inout_ D3DKMT_OUTPUTDUPL_METADATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLGETPOINTERSHAPEDATA)(_Inout_ D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLRELEASEFRAME)(_In_ D3DKMT_OUTPUTDUPL_RELEASE_FRAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLPRESENT)(_In_ CONST D3DKMT_OUTPUTDUPLPRESENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ENUMADAPTERS)(_Inout_ CONST D3DKMT_ENUMADAPTERS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ENUMADAPTERS2)(_Inout_ CONST D3DKMT_ENUMADAPTERS2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENADAPTERFROMLUID)(_Inout_ D3DKMT_OPENADAPTERFROMLUID*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME)(_Inout_ D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETVIDPNSOURCEOWNER1)(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER1*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PINDIRECTFLIPRESOURCES)(_In_ CONST D3DKMT_PINDIRECTFLIPRESOURCES*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNPINDIRECTFLIPRESOURCES)(_In_ CONST D3DKMT_UNPINDIRECTFLIPRESOURCES*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORVERTICALBLANKEVENT2)(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETDWMVERTICALBLANKEVENT)(_In_ CONST D3DKMT_GETVERTICALBLANKEVENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETSYNCREFRESHCOUNTWAITTARGET)(_In_ CONST D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY)(_In_ CONST D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY)(_Inout_ D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENTMULTIPLANEOVERLAY)(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETSHAREDRESOURCEADAPTERLUID)(_Inout_ D3DKMT_GETSHAREDRESOURCEADAPTERLUID*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETSTEREOENABLED)(_In_ BOOL);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYHYBRIDLISTVALUE)(_Inout_ D3DKMT_HYBRID_LIST*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETHYBRIDLISTVVALUE)(_Inout_ D3DKMT_HYBRID_LIST*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT)(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_MAKERESIDENT)(_Inout_ D3DDDI_MAKERESIDENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_EVICT)(_Inout_ D3DKMT_EVICT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU)(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU)(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2)(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEPAGINGQUEUE)(_Inout_ D3DKMT_CREATEPAGINGQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYPAGINGQUEUE)(_Inout_ D3DDDI_DESTROYPAGINGQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_LOCK2)(_Inout_ D3DKMT_LOCK2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNLOCK2)(_In_ CONST D3DKMT_UNLOCK2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_INVALIDATECACHE)(_In_ const D3DKMT_INVALIDATECACHE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RESERVEGPUVIRTUALADDRESS)(_Inout_ D3DDDI_RESERVEGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_MAPGPUVIRTUALADDRESS)(_Inout_ D3DDDI_MAPGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_FREEGPUVIRTUALADDRESS)(_In_ CONST D3DKMT_FREEGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UPDATEGPUVIRTUALADDRESS)(_In_ CONST D3DKMT_UPDATEGPUVIRTUALADDRESS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETRESOURCEPRESENTPRIVATEDRIVERDATA)(_Inout_ D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATECONTEXTVIRTUAL)(_Inout_ D3DKMT_CREATECONTEXTVIRTUAL*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SUBMITCOMMAND)(_In_ CONST D3DKMT_SUBMITCOMMAND*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCOBJECTFROMNTHANDLE2)(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME)(_Inout_ D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYVIDEOMEMORYINFO)(_Inout_ D3DKMT_QUERYVIDEOMEMORYINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHANGEVIDEOMEMORYRESERVATION)(_In_ CONST D3DKMT_CHANGEVIDEOMEMORYRESERVATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_REGISTERTRIMNOTIFICATION)(_Inout_ D3DKMT_REGISTERTRIMNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNREGISTERTRIMNOTIFICATION)(_Inout_ D3DKMT_UNREGISTERTRIMNOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_REGISTERBUDGETCHANGENOTIFICATION)(_Inout_ D3DKMT_REGISTERBUDGETCHANGENOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION)(_Inout_ D3DKMT_UNREGISTERBUDGETCHANGENOTIFICATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2)(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENTMULTIPLANEOVERLAY2)(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RECLAIMALLOCATIONS2)(_Inout_ D3DKMT_RECLAIMALLOCATIONS2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETSTABLEPOWERSTATE)(_In_ CONST D3DKMT_SETSTABLEPOWERSTATE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYCLOCKCALIBRATION)(_Inout_ D3DKMT_QUERYCLOCKCALIBRATION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP)(_Inout_ D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ADJUSTFULLSCREENGAMMA)(_In_ D3DKMT_ADJUSTFULLSCREENGAMMA*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETVIDPNSOURCEHWPROTECTION)(_In_ D3DKMT_SETVIDPNSOURCEHWPROTECTION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_MARKDEVICEASERROR)(_In_ D3DKMT_MARKDEVICEASERROR*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_FLUSHHEAPTRANSITIONS)(_In_ D3DKMT_FLUSHHEAPTRANSITIONS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY)(_In_ D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYPROCESSOFFERINFO)(_Inout_ D3DKMT_QUERYPROCESSOFFERINFO*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_TRIMPROCESSCOMMITMENT)(_Inout_ D3DKMT_TRIMPROCESSCOMMITMENT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UPDATEALLOCATIONPROPERTY)(_Inout_ D3DDDI_UPDATEALLOCPROPERTY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3)(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_PRESENTMULTIPLANEOVERLAY3)(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY3*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETFSEBLOCK)(_In_ CONST D3DKMT_SETFSEBLOCK*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYFSEBLOCK)(_Inout_ D3DKMT_QUERYFSEBLOCK*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETALLOCATIONPRIORITY)(_In_ CONST D3DKMT_GETALLOCATIONPRIORITY*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETMULTIPLANEOVERLAYCAPS)(_Inout_ D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETPOSTCOMPOSITIONCAPS)(_Inout_ D3DKMT_GET_POST_COMPOSITION_CAPS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SETVIDPNSOURCEOWNER2)(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER2*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETPROCESSDEVICEREMOVALSUPPORT)(_Inout_ D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEPROTECTEDSESSION)(_Inout_ D3DKMT_CREATEPROTECTEDSESSION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYPROTECTEDSESSION)(_Inout_ D3DKMT_DESTROYPROTECTEDSESSION*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYPROTECTEDSESSIONSTATUS)(_Inout_ D3DKMT_QUERYPROTECTEDSESSIONSTATUS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE)(_Inout_ D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE)(_Inout_ D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OPENKEYEDMUTEXFROMNTHANDLE)(_Inout_ D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATEHWQUEUE)(_Inout_ D3DKMT_CREATEHWQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYHWQUEUE)(_In_ CONST D3DKMT_DESTROYHWQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SUBMITCOMMANDTOHWQUEUE)(_In_ CONST D3DKMT_SUBMITCOMMANDTOHWQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE)(_In_ CONST D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE)(_In_ CONST D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SUBMITPRESENTBLTTOHWQUEUE)(_In_ CONST D3DKMT_SUBMITPRESENTBLTTOHWQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_SUBMITPRESENTTOHWQUEUE)(_Inout_ D3DKMT_SUBMITPRESENTTOHWQUEUE*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_CREATETRACKEDWORKLOAD)(_Inout_ D3DKMT_CREATETRACKEDWORKLOAD*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_DESTROYTRACKEDWORKLOAD)(_In_ D3DKMT_DESTROYTRACKEDWORKLOAD*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETAVAILABLETRACKEDWORKLOADINDEX)(_Inout_ D3DKMT_GETAVAILABLETRACKEDWORKLOADINDEX*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_UPDATETRACKEDWORKLOAD)(_In_ D3DKMT_UPDATETRACKEDWORKLOAD*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_ENDTRACKEDWORKLOAD)(_In_ D3DKMT_ENDTRACKEDWORKLOAD*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_GETTRACKEDWORKLOADSTATISTICS)(_Inout_ D3DKMT_GETTRACKEDWORKLOADSTATISTICS*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_RESETTRACKEDWORKLOAD)(_In_ D3DKMT_RESETTRACKEDWORKLOAD*);
typedef _Check_return_ NTSTATUS (APIENTRY *PFND3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE)(_In_ CONST D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE*);
extern "C"
{
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateAllocation(_Inout_ D3DKMT_CREATEALLOCATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateAllocation2(_Inout_ D3DKMT_CREATEALLOCATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryResourceInfo(_Inout_ D3DKMT_QUERYRESOURCEINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryResourceInfoFromNtHandle(_Inout_ D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTShareObjects(
    _In_range_(1, D3DKMT_MAX_OBJECTS_PER_HANDLE) UINT cObjects,
    _In_reads_(cObjects) CONST D3DKMT_HANDLE * hObjects,
    _In_ POBJECT_ATTRIBUTES pObjectAttributes,
    _In_ DWORD dwDesiredAccess,
    _Out_ HANDLE * phSharedNtHandle
    );
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenNtHandleFromName(_Inout_ D3DKMT_OPENNTHANDLEFROMNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenResourceFromNtHandle(_Inout_ D3DKMT_OPENRESOURCEFROMNTHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSyncObjectFromNtHandle(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenResource(_Inout_ D3DKMT_OPENRESOURCE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenResource2(_Inout_ D3DKMT_OPENRESOURCE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyAllocation(_In_ CONST D3DKMT_DESTROYALLOCATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyAllocation2(_In_ CONST D3DKMT_DESTROYALLOCATION2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetAllocationPriority(_In_ CONST D3DKMT_SETALLOCATIONPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryAllocationResidency(_In_ CONST D3DKMT_QUERYALLOCATIONRESIDENCY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateDevice(_Inout_ D3DKMT_CREATEDEVICE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyDevice(_In_ CONST D3DKMT_DESTROYDEVICE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateContext(_Inout_ D3DKMT_CREATECONTEXT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyContext(_In_ CONST D3DKMT_DESTROYCONTEXT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateSynchronizationObject(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateSynchronizationObject2(_Inout_ D3DKMT_CREATESYNCHRONIZATIONOBJECT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSynchronizationObject(_Inout_ D3DKMT_OPENSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroySynchronizationObject(_In_ CONST D3DKMT_DESTROYSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObject(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObject2(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObject(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObject2(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTLock(_Inout_ D3DKMT_LOCK*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUnlock(_In_ CONST D3DKMT_UNLOCK*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetDisplayModeList(_Inout_ D3DKMT_GETDISPLAYMODELIST*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetDisplayMode(_Inout_ CONST D3DKMT_SETDISPLAYMODE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetMultisampleMethodList(_Inout_ D3DKMT_GETMULTISAMPLEMETHODLIST*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresent(_Inout_ D3DKMT_PRESENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTRender(_Inout_ D3DKMT_RENDER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetRuntimeData(_Inout_ CONST D3DKMT_GETRUNTIMEDATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryAdapterInfo(_Inout_ CONST D3DKMT_QUERYADAPTERINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromHdc(_Inout_ D3DKMT_OPENADAPTERFROMHDC*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromGdiDisplayName(_Inout_ D3DKMT_OPENADAPTERFROMGDIDISPLAYNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromDeviceName(_Inout_ D3DKMT_OPENADAPTERFROMDEVICENAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCloseAdapter(_In_ CONST D3DKMT_CLOSEADAPTER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetSharedPrimaryHandle(_Inout_ D3DKMT_GETSHAREDPRIMARYHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEscape(_In_ CONST D3DKMT_ESCAPE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetVidPnSourceOwner(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetPresentHistory(_Inout_ D3DKMT_GETPRESENTHISTORY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetPresentQueueEvent(_In_ D3DKMT_HANDLE hAdapter, _Inout_ HANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateOverlay(_Inout_ D3DKMT_CREATEOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUpdateOverlay(_In_ CONST D3DKMT_UPDATEOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTFlipOverlay(_In_ CONST D3DKMT_FLIPOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyOverlay(_In_ CONST D3DKMT_DESTROYOVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForVerticalBlankEvent(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetGammaRamp(_In_ CONST D3DKMT_SETGAMMARAMP*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetDeviceState(_Inout_ D3DKMT_GETDEVICESTATE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateDCFromMemory(_Inout_ D3DKMT_CREATEDCFROMMEMORY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyDCFromMemory(_In_ CONST D3DKMT_DESTROYDCFROMMEMORY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetContextSchedulingPriority(_In_ CONST D3DKMT_SETCONTEXTSCHEDULINGPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetContextSchedulingPriority(_Inout_ D3DKMT_GETCONTEXTSCHEDULINGPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetProcessSchedulingPriorityClass(_In_ HANDLE, _In_ D3DKMT_SCHEDULINGPRIORITYCLASS);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetProcessSchedulingPriorityClass(_In_ HANDLE, _Out_ D3DKMT_SCHEDULINGPRIORITYCLASS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReleaseProcessVidPnSourceOwners(_In_ HANDLE);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetScanLine(_Inout_ D3DKMT_GETSCANLINE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTChangeSurfacePointer(_In_ CONST D3DKMT_CHANGESURFACEPOINTER*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetQueuedLimit(_In_ CONST D3DKMT_SETQUEUEDLIMIT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPollDisplayChildren(_In_ CONST D3DKMT_POLLDISPLAYCHILDREN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTInvalidateActiveVidPn(_In_ CONST D3DKMT_INVALIDATEACTIVEVIDPN*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckOcclusion(_In_ CONST D3DKMT_CHECKOCCLUSION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForIdle(IN CONST D3DKMT_WAITFORIDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMonitorPowerState(_In_ CONST D3DKMT_CHECKMONITORPOWERSTATE*);
EXTERN_C _Check_return_ BOOLEAN APIENTRY D3DKMTCheckExclusiveOwnership(VOID);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckVidPnExclusiveOwnership(_In_ CONST D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetDisplayPrivateDriverFormat(_In_ CONST D3DKMT_SETDISPLAYPRIVATEDRIVERFORMAT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSharedPrimaryLockNotification(_In_ CONST D3DKMT_SHAREDPRIMARYLOCKNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSharedPrimaryUnLockNotification(_In_ CONST D3DKMT_SHAREDPRIMARYUNLOCKNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateKeyedMutex(_Inout_ D3DKMT_CREATEKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenKeyedMutex(_Inout_ D3DKMT_OPENKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyKeyedMutex(_In_ CONST D3DKMT_DESTROYKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAcquireKeyedMutex(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReleaseKeyedMutex(_Inout_ D3DKMT_RELEASEKEYEDMUTEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateKeyedMutex2(_Inout_ D3DKMT_CREATEKEYEDMUTEX2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenKeyedMutex2(_Inout_ D3DKMT_OPENKEYEDMUTEX2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAcquireKeyedMutex2(_Inout_ D3DKMT_ACQUIREKEYEDMUTEX2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReleaseKeyedMutex2(_Inout_ D3DKMT_RELEASEKEYEDMUTEX2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTConfigureSharedResource(_In_ CONST D3DKMT_CONFIGURESHAREDRESOURCE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetOverlayState(_Inout_ D3DKMT_GETOVERLAYSTATE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckSharedResourceAccess(_In_ CONST D3DKMT_CHECKSHAREDRESOURCEACCESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOfferAllocations(_In_ CONST D3DKMT_OFFERALLOCATIONS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReclaimAllocations(_Inout_ CONST D3DKMT_RECLAIMALLOCATIONS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateOutputDupl(_In_ CONST D3DKMT_CREATE_OUTPUTDUPL*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyOutputDupl(_In_ CONST D3DKMT_DESTROY_OUTPUTDUPL*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplGetFrameInfo(_Inout_ D3DKMT_OUTPUTDUPL_GET_FRAMEINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplGetMetaData(_Inout_ D3DKMT_OUTPUTDUPL_METADATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplGetPointerShapeData(_Inout_ D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplReleaseFrame(_Inout_ D3DKMT_OUTPUTDUPL_RELEASE_FRAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplPresent(_In_ CONST D3DKMT_OUTPUTDUPLPRESENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEnumAdapters(_Inout_ CONST D3DKMT_ENUMADAPTERS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEnumAdapters2(_Inout_ CONST D3DKMT_ENUMADAPTERS2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenAdapterFromLuid(_Inout_ CONST D3DKMT_OPENADAPTERFROMLUID*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryRemoteVidPnSourceFromGdiDisplayName(_Inout_ D3DKMT_QUERYREMOTEVIDPNSOURCEFROMGDIDISPLAYNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetVidPnSourceOwner1(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER1*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForVerticalBlankEvent2(_In_ CONST D3DKMT_WAITFORVERTICALBLANKEVENT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetSyncRefreshCountWaitTarget(_In_ CONST D3DKMT_SETSYNCREFRESHCOUNTWAITTARGET*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetDWMVerticalBlankEvent(_In_ CONST D3DKMT_GETVERTICALBLANKEVENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresentMultiPlaneOverlay(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetSharedResourceAdapterLuid(_Inout_ D3DKMT_GETSHAREDRESOURCEADAPTERLUID*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMultiPlaneOverlaySupport(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetContextInProcessSchedulingPriority(_In_ CONST D3DKMT_SETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetContextInProcessSchedulingPriority(_Inout_ D3DKMT_GETCONTEXTINPROCESSSCHEDULINGPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTMakeResident(_Inout_ D3DDDI_MAKERESIDENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEvict(_Inout_ D3DKMT_EVICT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObjectFromCpu(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObjectFromCpu(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTWaitForSynchronizationObjectFromGpu(_In_ CONST D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObjectFromGpu(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSignalSynchronizationObjectFromGpu2(_In_ CONST D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreatePagingQueue(_Inout_ D3DKMT_CREATEPAGINGQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyPagingQueue(_Inout_ D3DDDI_DESTROYPAGINGQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTLock2(_Inout_ D3DKMT_LOCK2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUnlock2(_In_ CONST D3DKMT_UNLOCK2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTInvalidateCache(_In_ CONST D3DKMT_INVALIDATECACHE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTMapGpuVirtualAddress(_Inout_ D3DDDI_MAPGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReserveGpuVirtualAddress(_Inout_ D3DDDI_RESERVEGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTFreeGpuVirtualAddress(_In_ CONST D3DKMT_FREEGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUpdateGpuVirtualAddress(_In_ CONST D3DKMT_UPDATEGPUVIRTUALADDRESS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetResourcePresentPrivateDriverData(_Inout_ D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateContextVirtual(_In_ D3DKMT_CREATECONTEXTVIRTUAL*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSubmitCommand(_In_ CONST D3DKMT_SUBMITCOMMAND*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSyncObjectFromNtHandle2(_Inout_ D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenSyncObjectNtHandleFromName(_Inout_ D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryVideoMemoryInfo(_Inout_ D3DKMT_QUERYVIDEOMEMORYINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTChangeVideoMemoryReservation(_In_ CONST D3DKMT_CHANGEVIDEOMEMORYRESERVATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTRegisterTrimNotification(_Inout_ D3DKMT_REGISTERTRIMNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUnregisterTrimNotification(_Inout_ D3DKMT_UNREGISTERTRIMNOTIFICATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMultiPlaneOverlaySupport2(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresentMultiPlaneOverlay2(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTReclaimAllocations2(_Inout_ D3DKMT_RECLAIMALLOCATIONS2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetStablePowerState(_In_ CONST D3DKMT_SETSTABLEPOWERSTATE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryClockCalibration(_Inout_ D3DKMT_QUERYCLOCKCALIBRATION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryVidPnExclusiveOwnership(_Inout_ D3DKMT_QUERYVIDPNEXCLUSIVEOWNERSHIP*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTAdjustFullscreenGamma(_In_ D3DKMT_ADJUSTFULLSCREENGAMMA*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetVidPnSourceHwProtection(_In_ D3DKMT_SETVIDPNSOURCEHWPROTECTION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTMarkDeviceAsError(_In_ D3DKMT_MARKDEVICEASERROR*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTFlushHeapTransitions(_In_ D3DKMT_FLUSHHEAPTRANSITIONS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetHwProtectionTeardownRecovery(_In_ D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryProcessOfferInfo(_Inout_ D3DKMT_QUERYPROCESSOFFERINFO*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTTrimProcessCommitment(_Inout_ D3DKMT_TRIMPROCESSCOMMITMENT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUpdateAllocationProperty(_Inout_ D3DDDI_UPDATEALLOCPROPERTY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCheckMultiPlaneOverlaySupport3(_Inout_ D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresentMultiPlaneOverlay3(_In_ CONST D3DKMT_PRESENT_MULTIPLANE_OVERLAY3*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetFSEBlock(_In_ CONST D3DKMT_SETFSEBLOCK*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryFSEBlock(_Inout_ D3DKMT_QUERYFSEBLOCK*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateHwContext(_Inout_ D3DKMT_CREATEHWCONTEXT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyHwContext(_In_ CONST D3DKMT_DESTROYHWCONTEXT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateHwQueue(_Inout_ D3DKMT_CREATEHWQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyHwQueue(_In_ CONST D3DKMT_DESTROYHWQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSubmitCommandToHwQueue(_In_ CONST D3DKMT_SUBMITCOMMANDTOHWQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSubmitWaitForSyncObjectsToHwQueue(_In_ CONST D3DKMT_SUBMITWAITFORSYNCOBJECTSTOHWQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSubmitSignalSyncObjectsToHwQueue(_In_ CONST D3DKMT_SUBMITSIGNALSYNCOBJECTSTOHWQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetAllocationPriority(_In_ CONST D3DKMT_GETALLOCATIONPRIORITY*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetMultiPlaneOverlayCaps(_Inout_ D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetPostCompositionCaps(_Inout_ D3DKMT_GET_POST_COMPOSITION_CAPS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTPresentRedirected(_In_ D3DKMT_PRESENT_REDIRECTED*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetVidPnSourceOwner2(_In_ CONST D3DKMT_SETVIDPNSOURCEOWNER2*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSetMonitorColorSpaceTransform(_In_ D3DKMT_SET_COLORSPACE_TRANSFORM*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateProtectedSession(_Inout_ D3DKMT_CREATEPROTECTEDSESSION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyProtectedSession(_Inout_ D3DKMT_DESTROYPROTECTEDSESSION*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryProtectedSessionStatus(_Inout_ D3DKMT_QUERYPROTECTEDSESSIONSTATUS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTQueryProtectedSessionInfoFromNtHandle(_Inout_ D3DKMT_QUERYPROTECTEDSESSIONINFOFROMNTHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenProtectedSessionFromNtHandle(_Inout_ D3DKMT_OPENPROTECTEDSESSIONFROMNTHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetProcessDeviceRemovalSupport(_Inout_ D3DKMT_GETPROCESSDEVICEREMOVALSUPPORT*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOpenKeyedMutexFromNtHandle(_Inout_ D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSubmitPresentBltToHwQueue(_In_ CONST D3DKMT_SUBMITPRESENTBLTTOHWQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTSubmitPresentToHwQueue(_Inout_ D3DKMT_SUBMITPRESENTTOHWQUEUE*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTCreateTrackedWorkload(_Inout_ D3DKMT_CREATETRACKEDWORKLOAD*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTDestroyTrackedWorkload(_In_ D3DKMT_DESTROYTRACKEDWORKLOAD*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetAvailableTrackedWorkloadIndex(_Inout_ D3DKMT_GETAVAILABLETRACKEDWORKLOADINDEX*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTUpdateTrackedWorkload(_In_ D3DKMT_UPDATETRACKEDWORKLOAD*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTEndTrackedWorkload(_In_ D3DKMT_ENDTRACKEDWORKLOAD*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTGetTrackedWorkloadStatistics(_Inout_ D3DKMT_GETTRACKEDWORKLOADSTATISTICS*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTResetTrackedWorkload (_In_ D3DKMT_RESETTRACKEDWORKLOAD*);
EXTERN_C _Check_return_ NTSTATUS APIENTRY D3DKMTOutputDuplPresentToHwQueue(_In_ CONST D3DKMT_OUTPUTDUPLPRESENTTOHWQUEUE*);
DEFINE_GUID(GUID_DEVINTERFACE_GRAPHICSPOWER, 0xea5c6870, 0xe93c, 0x4588, 0xbe, 0xf1, 0xfe, 0xc4, 0x2f, 0xc9, 0x42, 0x9a);
    CTL_CODE(FILE_DEVICE_VIDEO, 0xa01, METHOD_NEITHER, FILE_ANY_ACCESS)
typedef
    _IRQL_requires_max_(PASSIVE_LEVEL)
VOID
(*PDXGK_POWER_NOTIFICATION)(
    PVOID GraphicsDeviceHandle,
    DEVICE_POWER_STATE NewGrfxPowerState,
    BOOLEAN PreNotification,
    PVOID PrivateHandle
    );
typedef
    _IRQL_requires_max_(PASSIVE_LEVEL)
VOID
(*PDXGK_REMOVAL_NOTIFICATION)(
    PVOID GraphicsDeviceHandle,
    PVOID PrivateHandle
    );
typedef
    _IRQL_requires_max_(DISPATCH_LEVEL)
VOID
(*PDXGK_FSTATE_NOTIFICATION)(
    PVOID GraphicsDeviceHandle,
    ULONG ComponentIndex,
    UINT NewFState,
    BOOLEAN PreNotification,
    PVOID PrivateHandle
    );
typedef
    _IRQL_requires_(DISPATCH_LEVEL)
VOID
(*PDXGK_INITIAL_COMPONENT_STATE) (
    PVOID GraphicsDeviceHandle,
    PVOID PrivateHandle,
    ULONG ComponentIndex,
    BOOLEAN IsBlockingType,
    UINT InitialFState,
    GUID ComponentGuid,
    UINT PowerComponentMappingFlag
);
typedef struct _DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2 {
    ULONG Version;
    PVOID PrivateHandle;
    PDXGK_POWER_NOTIFICATION PowerNotificationCb;
    PDXGK_REMOVAL_NOTIFICATION RemovalNotificationCb;
    PDXGK_FSTATE_NOTIFICATION FStateNotificationCb;
    PDXGK_INITIAL_COMPONENT_STATE InitialComponentStateCb;
} DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2, *PDXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2;
typedef DXGK_GRAPHICSPOWER_REGISTER_INPUT_V_1_2 DXGK_GRAPHICSPOWER_REGISTER_INPUT;
typedef DXGK_GRAPHICSPOWER_REGISTER_INPUT *PDXGK_GRAPHICSPOWER_REGISTER_INPUT;
typedef
    _Check_return_
    _IRQL_requires_max_(APC_LEVEL)
NTSTATUS
(*PDXGK_SET_SHARED_POWER_COMPONENT_STATE)(
    PVOID DeviceHandle,
    PVOID PrivateHandle,
    ULONG ComponentIndex,
    BOOLEAN Active
    );
typedef
    _Check_return_
    _IRQL_requires_max_(APC_LEVEL)
NTSTATUS
(*PDXGK_GRAPHICSPOWER_UNREGISTER)(
    PVOID DeviceHandle,
    PVOID PrivateHandle
    );
typedef struct _DXGK_GRAPHICSPOWER_REGISTER_OUTPUT
{
    PVOID DeviceHandle;
    DEVICE_POWER_STATE InitialGrfxPowerState;
    PDXGK_SET_SHARED_POWER_COMPONENT_STATE SetSharedPowerComponentStateCb;
    PDXGK_GRAPHICSPOWER_UNREGISTER UnregisterCb;
} DXGK_GRAPHICSPOWER_REGISTER_OUTPUT, *PDXGK_GRAPHICSPOWER_REGISTER_OUTPUT;
typedef enum _DXGKMT_POWER_SHARED_TYPE
{
    DXGKMT_POWER_SHARED_TYPE_AUDIO = 0,
} DXGKMT_POWER_SHARED_TYPE;
}
#pragma warning(pop)
