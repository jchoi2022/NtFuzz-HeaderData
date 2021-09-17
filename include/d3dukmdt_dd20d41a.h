#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
   #error This header should not be included directly!
#pragma warning(push)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
            (((version) == DXGKDDI_INTERFACE_VERSION_VISTA) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_VISTA_SP1) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WIN7) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WIN8) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM1_3) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM1_3_PATH_INDEPENDENT_ROTATION) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_0) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_1) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_1_5) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_1_6) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_2) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_3) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_4) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_5) || \
             ((version) == DXGKDDI_INTERFACE_VERSION_WDDM2_6) \
            )
typedef ULONGLONG D3DGPU_VIRTUAL_ADDRESS;
typedef ULONGLONG D3DGPU_SIZE_T;
typedef struct _GPUP_DRIVER_ESCAPE_INPUT
{
   LUID vfLUID;
} GPUP_DRIVER_ESCAPE_INPUT, *PGPUP_DRIVER_ESCAPE_INPUT;
typedef enum _DXGKVGPU_ESCAPE_TYPE
{
    DXGKVGPU_ESCAPE_TYPE_READ_PCI_CONFIG = 0,
    DXGKVGPU_ESCAPE_TYPE_WRITE_PCI_CONFIG = 1,
    DXGKVGPU_ESCAPE_TYPE_INITIALIZE = 2,
    DXGKVGPU_ESCAPE_TYPE_RELEASE = 3,
    DXGKVGPU_ESCAPE_TYPE_GET_VGPU_TYPE = 4,
    DXGKVGPU_ESCAPE_TYPE_POWERTRANSITIONCOMPLETE = 5,
} DXGKVGPU_ESCAPE_TYPE;
typedef struct _DXGKVGPU_ESCAPE_HEAD
{
    GPUP_DRIVER_ESCAPE_INPUT Luid;
    DXGKVGPU_ESCAPE_TYPE Type;
} DXGKVGPU_ESCAPE_HEAD;
typedef struct _DXGKVGPU_ESCAPE_READ_PCI_CONFIG
{
    DXGKVGPU_ESCAPE_HEAD Header;
    UINT Offset;
    UINT Size;
} DXGKVGPU_ESCAPE_READ_PCI_CONFIG;
typedef struct _DXGKVGPU_ESCAPE_WRITE_PCI_CONFIG
{
    DXGKVGPU_ESCAPE_HEAD Header;
    UINT Offset;
    UINT Size;
} DXGKVGPU_ESCAPE_WRITE_PCI_CONFIG;
typedef struct _DXGKVGPU_ESCAPE_READ_VGPU_TYPE
{
    DXGKVGPU_ESCAPE_HEAD Header;
} DXGKVGPU_ESCAPE_READ_VGPU_TYPE;
typedef struct _DXGKVGPU_ESCAPE_POWERTRANSITIONCOMPLETE
{
    DXGKVGPU_ESCAPE_HEAD Header;
    UINT PowerState;
} DXGKVGPU_ESCAPE_POWERTRANSITIONCOMPLETE;
typedef struct _DXGKVGPU_ESCAPE_INITIALIZE
{
    DXGKVGPU_ESCAPE_HEAD Header;
    GUID VmGuid;
} DXGKVGPU_ESCAPE_INITIALIZE;
typedef struct _DXGKVGPU_ESCAPE_RELEASE
{
    DXGKVGPU_ESCAPE_HEAD Header;
} DXGKVGPU_ESCAPE_RELEASE;
typedef enum _DXGK_PTE_PAGE_SIZE
{
    DXGK_PTE_PAGE_TABLE_PAGE_4KB = 0,
    DXGK_PTE_PAGE_TABLE_PAGE_64KB = 1,
} DXGK_PTE_PAGE_SIZE;
typedef struct _DXGK_PTE
{
    union
    {
        struct
        {
            ULONGLONG Valid : 1;
            ULONGLONG Zero : 1;
            ULONGLONG CacheCoherent : 1;
            ULONGLONG ReadOnly : 1;
            ULONGLONG NoExecute : 1;
            ULONGLONG Segment : 5;
            ULONGLONG LargePage : 1;
            ULONGLONG PhysicalAdapterIndex : 6;
            ULONGLONG PageTablePageSize : 2;
            ULONGLONG SystemReserved0 : 1;
            ULONGLONG Reserved : 44;
        };
        ULONGLONG Flags;
    };
    union
    {
        ULONGLONG PageAddress;
        ULONGLONG PageTableAddress;
    };
} DXGK_PTE;
typedef struct _D3DGPU_PHYSICAL_ADDRESS
{
    UINT SegmentId;
    UINT64 SegmentOffset;
} D3DGPU_PHYSICAL_ADDRESS;
typedef UINT D3DDDI_VIDEO_PRESENT_SOURCE_ID;
typedef UINT D3DDDI_VIDEO_PRESENT_TARGET_ID;
typedef UINT D3DKMT_HANDLE;
typedef struct _D3DDDI_RATIONAL
{
    UINT Numerator;
    UINT Denominator;
} D3DDDI_RATIONAL;
typedef struct _D3DDDI_ALLOCATIONINFO
{
    D3DKMT_HANDLE hAllocation;
    CONST VOID* pSystemMem;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    union
    {
        struct
        {
            UINT Primary : 1;
            UINT Stereo : 1;
            UINT Reserved :30;
        };
        UINT Value;
    } Flags;
} D3DDDI_ALLOCATIONINFO;
typedef struct _D3DDDI_ALLOCATIONINFO2
{
    D3DKMT_HANDLE hAllocation;
    union
    {
        HANDLE hSection;
        CONST VOID* pSystemMem;
    };
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    union
    {
        struct
        {
            UINT Primary : 1;
            UINT Stereo : 1;
            UINT OverridePriority : 1;
            UINT Reserved : 29;
        };
        UINT Value;
    } Flags;
    D3DGPU_VIRTUAL_ADDRESS GpuVirtualAddress;
    union
    {
        UINT Priority;
        ULONG_PTR Unused;
    };
    ULONG_PTR Reserved[5];
} D3DDDI_ALLOCATIONINFO2;
typedef struct _D3DDDI_OPENALLOCATIONINFO
{
    D3DKMT_HANDLE hAllocation;
    CONST VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} D3DDDI_OPENALLOCATIONINFO;
typedef struct _D3DDDI_OPENALLOCATIONINFO2
{
    D3DKMT_HANDLE hAllocation;
    CONST VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
    D3DGPU_VIRTUAL_ADDRESS GpuVirtualAddress;
    ULONG_PTR Reserved[6];
} D3DDDI_OPENALLOCATIONINFO2;
typedef enum _D3DDDI_OFFER_PRIORITY
{
    D3DDDI_OFFER_PRIORITY_NONE=0,
    D3DDDI_OFFER_PRIORITY_LOW=1,
    D3DDDI_OFFER_PRIORITY_NORMAL,
    D3DDDI_OFFER_PRIORITY_HIGH,
    D3DDDI_OFFER_PRIORITY_AUTO,
} D3DDDI_OFFER_PRIORITY;
typedef struct _D3DDDI_ALLOCATIONLIST
{
    D3DKMT_HANDLE hAllocation;
    union
    {
        struct
        {
            UINT WriteOperation : 1;
            UINT DoNotRetireInstance : 1;
            UINT OfferPriority : 3;
            UINT Reserved :27;
        };
        UINT Value;
    };
} D3DDDI_ALLOCATIONLIST;
typedef struct _D3DDDI_PATCHLOCATIONLIST
{
    UINT AllocationIndex;
    union
    {
        struct
        {
            UINT SlotId : 24;
            UINT Reserved : 8;
        };
        UINT Value;
    };
    UINT DriverId;
    UINT AllocationOffset;
    UINT PatchOffset;
    UINT SplitOffset;
} D3DDDI_PATCHLOCATIONLIST;
typedef struct _D3DDDICB_LOCKFLAGS
{
    union
    {
        struct
        {
            UINT ReadOnly : 1;
            UINT WriteOnly : 1;
            UINT DonotWait : 1;
            UINT IgnoreSync : 1;
            UINT LockEntire : 1;
            UINT DonotEvict : 1;
            UINT AcquireAperture : 1;
            UINT Discard : 1;
            UINT NoExistingReference : 1;
            UINT UseAlternateVA : 1;
            UINT IgnoreReadSync : 1;
            UINT Reserved :21;
        };
        UINT Value;
    };
} D3DDDICB_LOCKFLAGS;
typedef struct _D3DDDICB_LOCK2FLAGS
{
    union
    {
        struct
        {
            UINT Reserved : 32;
        };
        UINT Value;
    };
} D3DDDICB_LOCK2FLAGS;
typedef struct _D3DDDICB_DESTROYALLOCATION2FLAGS
{
    union
    {
        struct
        {
            UINT AssumeNotInUse : 1;
            UINT SynchronousDestroy : 1;
            UINT Reserved : 29;
            UINT SystemUseOnly : 1;
        };
        UINT Value;
    };
} D3DDDICB_DESTROYALLOCATION2FLAGS;
typedef struct _D3DDDI_ESCAPEFLAGS
{
    union
    {
        struct
        {
            UINT HardwareAccess : 1;
            UINT DeviceStatusQuery : 1;
            UINT ChangeFrameLatency : 1;
            UINT NoAdapterSynchronization : 1;
            UINT Reserved : 1;
            UINT VirtualMachineData : 1;
            UINT DriverKnownEscape : 1;
            UINT DriverCommonEscape : 1;
            UINT Reserved2 :24;
        };
        UINT Value;
    };
} D3DDDI_ESCAPEFLAGS;
typedef enum _D3DDDI_DRIVERESCAPETYPE
{
    D3DDDI_DRIVERESCAPETYPE_TRANSLATEALLOCATIONHANDLE = 0,
    D3DDDI_DRIVERESCAPETYPE_TRANSLATERESOURCEHANDLE = 1,
    D3DDDI_DRIVERESCAPETYPE_MAX,
} D3DDDI_DRIVERESCAPETYPE;
typedef struct _D3DDDI_DRIVERESCAPE_TRANSLATEALLOCATIONEHANDLE
{
     D3DDDI_DRIVERESCAPETYPE EscapeType;
     D3DKMT_HANDLE hAllocation;
} D3DDDI_DRIVERESCAPE_TRANSLATEALLOCATIONEHANDLE;
typedef struct _D3DDDI_DRIVERESCAPE_TRANSLATERESOURCEHANDLE
{
     D3DDDI_DRIVERESCAPETYPE EscapeType;
     D3DKMT_HANDLE hResource;
} D3DDDI_DRIVERESCAPE_TRANSLATERESOURCEHANDLE;
typedef struct _D3DDDI_CREATECONTEXTFLAGS
{
    union
    {
        struct
        {
            UINT NullRendering : 1;
            UINT InitialData : 1;
            UINT DisableGpuTimeout : 1;
            UINT SynchronizationOnly : 1;
            UINT HwQueueSupported : 1;
            UINT Reserved :27;
        };
        UINT Value;
    };
} D3DDDI_CREATECONTEXTFLAGS;
typedef struct _D3DDDI_CREATEHWCONTEXTFLAGS
{
    union
    {
        struct
        {
            UINT Reserved :32;
        };
        UINT Value;
    };
} D3DDDI_CREATEHWCONTEXTFLAGS;
typedef struct _D3DDDI_CREATEHWQUEUEFLAGS
{
    union
    {
        struct
        {
            UINT DisableGpuTimeout : 1;
            UINT Reserved :31;
        };
        UINT Value;
    };
} D3DDDI_CREATEHWQUEUEFLAGS;
typedef struct _D3DDDI_SEGMENTPREFERENCE
{
    union
    {
        struct
        {
            UINT SegmentId0 : 5;
            UINT Direction0 : 1;
            UINT SegmentId1 : 5;
            UINT Direction1 : 1;
            UINT SegmentId2 : 5;
            UINT Direction2 : 1;
            UINT SegmentId3 : 5;
            UINT Direction3 : 1;
            UINT SegmentId4 : 5;
            UINT Direction4 : 1;
            UINT Reserved : 2;
        };
        UINT Value;
    };
} D3DDDI_SEGMENTPREFERENCE;
    #define MAKEFOURCC(ch0, ch1, ch2, ch3) \
                ((DWORD)(BYTE)(ch0) | ((DWORD)(BYTE)(ch1) << 8) | \
                ((DWORD)(BYTE)(ch2) << 16) | ((DWORD)(BYTE)(ch3) << 24 ))
typedef enum _D3DDDIFORMAT
{
    D3DDDIFMT_UNKNOWN = 0,
    D3DDDIFMT_R8G8B8 = 20,
    D3DDDIFMT_A8R8G8B8 = 21,
    D3DDDIFMT_X8R8G8B8 = 22,
    D3DDDIFMT_R5G6B5 = 23,
    D3DDDIFMT_X1R5G5B5 = 24,
    D3DDDIFMT_A1R5G5B5 = 25,
    D3DDDIFMT_A4R4G4B4 = 26,
    D3DDDIFMT_R3G3B2 = 27,
    D3DDDIFMT_A8 = 28,
    D3DDDIFMT_A8R3G3B2 = 29,
    D3DDDIFMT_X4R4G4B4 = 30,
    D3DDDIFMT_A2B10G10R10 = 31,
    D3DDDIFMT_A8B8G8R8 = 32,
    D3DDDIFMT_X8B8G8R8 = 33,
    D3DDDIFMT_G16R16 = 34,
    D3DDDIFMT_A2R10G10B10 = 35,
    D3DDDIFMT_A16B16G16R16 = 36,
    D3DDDIFMT_A8P8 = 40,
    D3DDDIFMT_P8 = 41,
    D3DDDIFMT_L8 = 50,
    D3DDDIFMT_A8L8 = 51,
    D3DDDIFMT_A4L4 = 52,
    D3DDDIFMT_V8U8 = 60,
    D3DDDIFMT_L6V5U5 = 61,
    D3DDDIFMT_X8L8V8U8 = 62,
    D3DDDIFMT_Q8W8V8U8 = 63,
    D3DDDIFMT_V16U16 = 64,
    D3DDDIFMT_W11V11U10 = 65,
    D3DDDIFMT_A2W10V10U10 = 67,
    D3DDDIFMT_UYVY = MAKEFOURCC('U', 'Y', 'V', 'Y'),
    D3DDDIFMT_R8G8_B8G8 = MAKEFOURCC('R', 'G', 'B', 'G'),
    D3DDDIFMT_YUY2 = MAKEFOURCC('Y', 'U', 'Y', '2'),
    D3DDDIFMT_G8R8_G8B8 = MAKEFOURCC('G', 'R', 'G', 'B'),
    D3DDDIFMT_DXT1 = MAKEFOURCC('D', 'X', 'T', '1'),
    D3DDDIFMT_DXT2 = MAKEFOURCC('D', 'X', 'T', '2'),
    D3DDDIFMT_DXT3 = MAKEFOURCC('D', 'X', 'T', '3'),
    D3DDDIFMT_DXT4 = MAKEFOURCC('D', 'X', 'T', '4'),
    D3DDDIFMT_DXT5 = MAKEFOURCC('D', 'X', 'T', '5'),
    D3DDDIFMT_D16_LOCKABLE = 70,
    D3DDDIFMT_D32 = 71,
    D3DDDIFMT_D15S1 = 73,
    D3DDDIFMT_D24S8 = 75,
    D3DDDIFMT_D24X8 = 77,
    D3DDDIFMT_D24X4S4 = 79,
    D3DDDIFMT_D16 = 80,
    D3DDDIFMT_D32F_LOCKABLE = 82,
    D3DDDIFMT_D24FS8 = 83,
    D3DDDIFMT_D32_LOCKABLE = 84,
    D3DDDIFMT_S8_LOCKABLE = 85,
    D3DDDIFMT_S1D15 = 72,
    D3DDDIFMT_S8D24 = 74,
    D3DDDIFMT_X8D24 = 76,
    D3DDDIFMT_X4S4D24 = 78,
    D3DDDIFMT_L16 = 81,
    D3DDDIFMT_G8R8 = 91,
    D3DDDIFMT_R8 = 92,
    D3DDDIFMT_VERTEXDATA =100,
    D3DDDIFMT_INDEX16 =101,
    D3DDDIFMT_INDEX32 =102,
    D3DDDIFMT_Q16W16V16U16 =110,
    D3DDDIFMT_MULTI2_ARGB8 = MAKEFOURCC('M','E','T','1'),
    D3DDDIFMT_R16F = 111,
    D3DDDIFMT_G16R16F = 112,
    D3DDDIFMT_A16B16G16R16F = 113,
    D3DDDIFMT_R32F = 114,
    D3DDDIFMT_G32R32F = 115,
    D3DDDIFMT_A32B32G32R32F = 116,
    D3DDDIFMT_CxV8U8 = 117,
    D3DDDIFMT_A1 = 118,
    D3DDDIFMT_A2B10G10R10_XR_BIAS = 119,
    D3DDDIFMT_DXVACOMPBUFFER_BASE = 150,
    D3DDDIFMT_PICTUREPARAMSDATA = D3DDDIFMT_DXVACOMPBUFFER_BASE+0,
    D3DDDIFMT_MACROBLOCKDATA = D3DDDIFMT_DXVACOMPBUFFER_BASE+1,
    D3DDDIFMT_RESIDUALDIFFERENCEDATA = D3DDDIFMT_DXVACOMPBUFFER_BASE+2,
    D3DDDIFMT_DEBLOCKINGDATA = D3DDDIFMT_DXVACOMPBUFFER_BASE+3,
    D3DDDIFMT_INVERSEQUANTIZATIONDATA = D3DDDIFMT_DXVACOMPBUFFER_BASE+4,
    D3DDDIFMT_SLICECONTROLDATA = D3DDDIFMT_DXVACOMPBUFFER_BASE+5,
    D3DDDIFMT_BITSTREAMDATA = D3DDDIFMT_DXVACOMPBUFFER_BASE+6,
    D3DDDIFMT_MOTIONVECTORBUFFER = D3DDDIFMT_DXVACOMPBUFFER_BASE+7,
    D3DDDIFMT_FILMGRAINBUFFER = D3DDDIFMT_DXVACOMPBUFFER_BASE+8,
    D3DDDIFMT_DXVA_RESERVED9 = D3DDDIFMT_DXVACOMPBUFFER_BASE+9,
    D3DDDIFMT_DXVA_RESERVED10 = D3DDDIFMT_DXVACOMPBUFFER_BASE+10,
    D3DDDIFMT_DXVA_RESERVED11 = D3DDDIFMT_DXVACOMPBUFFER_BASE+11,
    D3DDDIFMT_DXVA_RESERVED12 = D3DDDIFMT_DXVACOMPBUFFER_BASE+12,
    D3DDDIFMT_DXVA_RESERVED13 = D3DDDIFMT_DXVACOMPBUFFER_BASE+13,
    D3DDDIFMT_DXVA_RESERVED14 = D3DDDIFMT_DXVACOMPBUFFER_BASE+14,
    D3DDDIFMT_DXVA_RESERVED15 = D3DDDIFMT_DXVACOMPBUFFER_BASE+15,
    D3DDDIFMT_DXVA_RESERVED16 = D3DDDIFMT_DXVACOMPBUFFER_BASE+16,
    D3DDDIFMT_DXVA_RESERVED17 = D3DDDIFMT_DXVACOMPBUFFER_BASE+17,
    D3DDDIFMT_DXVA_RESERVED18 = D3DDDIFMT_DXVACOMPBUFFER_BASE+18,
    D3DDDIFMT_DXVA_RESERVED19 = D3DDDIFMT_DXVACOMPBUFFER_BASE+19,
    D3DDDIFMT_DXVA_RESERVED20 = D3DDDIFMT_DXVACOMPBUFFER_BASE+20,
    D3DDDIFMT_DXVA_RESERVED21 = D3DDDIFMT_DXVACOMPBUFFER_BASE+21,
    D3DDDIFMT_DXVA_RESERVED22 = D3DDDIFMT_DXVACOMPBUFFER_BASE+22,
    D3DDDIFMT_DXVA_RESERVED23 = D3DDDIFMT_DXVACOMPBUFFER_BASE+23,
    D3DDDIFMT_DXVA_RESERVED24 = D3DDDIFMT_DXVACOMPBUFFER_BASE+24,
    D3DDDIFMT_DXVA_RESERVED25 = D3DDDIFMT_DXVACOMPBUFFER_BASE+25,
    D3DDDIFMT_DXVA_RESERVED26 = D3DDDIFMT_DXVACOMPBUFFER_BASE+26,
    D3DDDIFMT_DXVA_RESERVED27 = D3DDDIFMT_DXVACOMPBUFFER_BASE+27,
    D3DDDIFMT_DXVA_RESERVED28 = D3DDDIFMT_DXVACOMPBUFFER_BASE+28,
    D3DDDIFMT_DXVA_RESERVED29 = D3DDDIFMT_DXVACOMPBUFFER_BASE+29,
    D3DDDIFMT_DXVA_RESERVED30 = D3DDDIFMT_DXVACOMPBUFFER_BASE+30,
    D3DDDIFMT_DXVA_RESERVED31 = D3DDDIFMT_DXVACOMPBUFFER_BASE+31,
    D3DDDIFMT_DXVACOMPBUFFER_MAX = D3DDDIFMT_DXVA_RESERVED31,
    D3DDDIFMT_BINARYBUFFER = 199,
    D3DDDIFMT_FORCE_UINT =0x7fffffff
} D3DDDIFORMAT;
typedef enum D3DDDI_COLOR_SPACE_TYPE
{
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P709 = 0,
    D3DDDI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 = 1,
    D3DDDI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P709 = 2,
    D3DDDI_COLOR_SPACE_RGB_STUDIO_G22_NONE_P2020 = 3,
    D3DDDI_COLOR_SPACE_RESERVED = 4,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_NONE_P709_X601 = 5,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601 = 6,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P601 = 7,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 = 8,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709 = 9,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P2020 = 10,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P2020 = 11,
    D3DDDI_COLOR_SPACE_RGB_FULL_G2084_NONE_P2020 = 12,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G2084_LEFT_P2020 = 13,
    D3DDDI_COLOR_SPACE_RGB_STUDIO_G2084_NONE_P2020 = 14,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_TOPLEFT_P2020 = 15,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G2084_TOPLEFT_P2020 = 16,
    D3DDDI_COLOR_SPACE_RGB_FULL_G22_NONE_P2020 = 17,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_GHLG_TOPLEFT_P2020 = 18,
    D3DDDI_COLOR_SPACE_YCBCR_FULL_GHLG_TOPLEFT_P2020 = 19,
    D3DDDI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P709 = 20,
    D3DDDI_COLOR_SPACE_RGB_STUDIO_G24_NONE_P2020 = 21,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P709 = 22,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G24_LEFT_P2020 = 23,
    D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G24_TOPLEFT_P2020 = 24,
    D3DDDI_COLOR_SPACE_CUSTOM = 0xFFFFFFFF
} D3DDDI_COLOR_SPACE_TYPE;
typedef enum _D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE
{
    D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709 = 0,
    D3DDDI_OUTPUT_WIRE_COLOR_SPACE_RESERVED = 4,
    D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020 = 12,
    D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P709_WCG = 30,
    D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G22_P2020 = 31,
    D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_HDR10PLUS = 32,
    D3DDDI_OUTPUT_WIRE_COLOR_SPACE_G2084_P2020_DVLL = 33,
} D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE;
typedef struct _D3DDDIRECT
{
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
} D3DDDIRECT;
typedef struct _D3DDDI_KERNELOVERLAYINFO
{
    D3DKMT_HANDLE hAllocation;
    D3DDDIRECT DstRect;
    D3DDDIRECT SrcRect;
    VOID* pPrivateDriverData;
    UINT PrivateDriverDataSize;
} D3DDDI_KERNELOVERLAYINFO;
typedef enum _D3DDDI_GAMMARAMP_TYPE
{
    D3DDDI_GAMMARAMP_UNINITIALIZED = 0,
    D3DDDI_GAMMARAMP_DEFAULT = 1,
    D3DDDI_GAMMARAMP_RGB256x3x16 = 2,
    D3DDDI_GAMMARAMP_DXGI_1 = 3,
    D3DDDI_GAMMARAMP_MATRIX_3x4 = 4,
    D3DDDI_GAMMARAMP_MATRIX_V2 = 5,
} D3DDDI_GAMMARAMP_TYPE;
typedef struct _D3DDDI_GAMMA_RAMP_RGB256x3x16
{
    USHORT Red[256];
    USHORT Green[256];
    USHORT Blue[256];
} D3DDDI_GAMMA_RAMP_RGB256x3x16;
typedef struct D3DDDI_DXGI_RGB
{
    float Red;
    float Green;
    float Blue;
} D3DDDI_DXGI_RGB;
typedef struct _D3DDDI_GAMMA_RAMP_DXGI_1
{
    D3DDDI_DXGI_RGB Scale;
    D3DDDI_DXGI_RGB Offset;
    D3DDDI_DXGI_RGB GammaCurve[1025];
} D3DDDI_GAMMA_RAMP_DXGI_1;
typedef struct _D3DKMDT_3X4_COLORSPACE_TRANSFORM
{
    float ColorMatrix3x4[3][4];
    float ScalarMultiplier;
    D3DDDI_DXGI_RGB LookupTable1D[4096];
} D3DKMDT_3x4_COLORSPACE_TRANSFORM, *PD3DDDI_3x4_COLORSPACE_TRANSFORM;
typedef enum _D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL
{
    D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL_NO_CHANGE = 0,
    D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL_ENABLE = 1,
    D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL_BYPASS = 2,
}D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL, *PD3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL;
typedef struct _D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2
{
    D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL StageControlLookupTable1DDegamma;
    D3DDDI_DXGI_RGB LookupTable1DDegamma[4096];
    D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL StageControlColorMatrix3x3;
    float ColorMatrix3x3[3][3];
    D3DKMDT_COLORSPACE_TRANSFORM_STAGE_CONTROL StageControlLookupTable1DRegamma;
    D3DDDI_DXGI_RGB LookupTable1DRegamma[4096];
} D3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2, *PD3DKMDT_COLORSPACE_TRANSFORM_MATRIX_V2;
typedef enum _D3DDDI_HDR_METADATA_TYPE
{
    D3DDDI_HDR_METADATA_TYPE_NONE = 0,
    D3DDDI_HDR_METADATA_TYPE_HDR10 = 1,
    D3DDDI_HDR_METADATA_TYPE_HDR10PLUS = 2,
} D3DDDI_HDR_METADATA_TYPE;
typedef struct _D3DDDI_HDR_METADATA_HDR10
{
    UINT16 RedPrimary[2];
    UINT16 GreenPrimary[2];
    UINT16 BluePrimary[2];
    UINT16 WhitePoint[2];
    UINT MaxMasteringLuminance;
    UINT MinMasteringLuminance;
    UINT16 MaxContentLightLevel;
    UINT16 MaxFrameAverageLightLevel;
} D3DDDI_HDR_METADATA_HDR10;
typedef struct D3DDDI_HDR_METADATA_HDR10PLUS
{
    BYTE Data[72];
} D3DDDI_HDR_METADATA_HDR10PLUS;
typedef struct _D3DDDI_MULTISAMPLINGMETHOD
{
    UINT NumSamples;
    UINT NumQualityLevels;
}
D3DDDI_MULTISAMPLINGMETHOD;
typedef enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING
{
    D3DDDI_VSSLO_UNINITIALIZED = 0,
    D3DDDI_VSSLO_PROGRESSIVE = 1,
    D3DDDI_VSSLO_INTERLACED_UPPERFIELDFIRST = 2,
    D3DDDI_VSSLO_INTERLACED_LOWERFIELDFIRST = 3,
    D3DDDI_VSSLO_OTHER = 255
}
D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING;
typedef enum D3DDDI_FLIPINTERVAL_TYPE
{
    D3DDDI_FLIPINTERVAL_IMMEDIATE = 0,
    D3DDDI_FLIPINTERVAL_ONE = 1,
    D3DDDI_FLIPINTERVAL_TWO = 2,
    D3DDDI_FLIPINTERVAL_THREE = 3,
    D3DDDI_FLIPINTERVAL_FOUR = 4,
    D3DDDI_FLIPINTERVAL_IMMEDIATE_ALLOW_TEARING = 5,
} D3DDDI_FLIPINTERVAL_TYPE;
typedef enum _D3DDDI_POOL
{
     D3DDDIPOOL_SYSTEMMEM = 1,
     D3DDDIPOOL_VIDEOMEMORY = 2,
     D3DDDIPOOL_LOCALVIDMEM = 3,
     D3DDDIPOOL_NONLOCALVIDMEM = 4,
     D3DDDIPOOL_STAGINGMEM = 5,
} D3DDDI_POOL;
typedef enum _D3DDDIMULTISAMPLE_TYPE
{
    D3DDDIMULTISAMPLE_NONE = 0,
    D3DDDIMULTISAMPLE_NONMASKABLE = 1,
    D3DDDIMULTISAMPLE_2_SAMPLES = 2,
    D3DDDIMULTISAMPLE_3_SAMPLES = 3,
    D3DDDIMULTISAMPLE_4_SAMPLES = 4,
    D3DDDIMULTISAMPLE_5_SAMPLES = 5,
    D3DDDIMULTISAMPLE_6_SAMPLES = 6,
    D3DDDIMULTISAMPLE_7_SAMPLES = 7,
    D3DDDIMULTISAMPLE_8_SAMPLES = 8,
    D3DDDIMULTISAMPLE_9_SAMPLES = 9,
    D3DDDIMULTISAMPLE_10_SAMPLES = 10,
    D3DDDIMULTISAMPLE_11_SAMPLES = 11,
    D3DDDIMULTISAMPLE_12_SAMPLES = 12,
    D3DDDIMULTISAMPLE_13_SAMPLES = 13,
    D3DDDIMULTISAMPLE_14_SAMPLES = 14,
    D3DDDIMULTISAMPLE_15_SAMPLES = 15,
    D3DDDIMULTISAMPLE_16_SAMPLES = 16,
    D3DDDIMULTISAMPLE_FORCE_UINT = 0x7fffffff
} D3DDDIMULTISAMPLE_TYPE;
typedef struct _D3DDDI_RESOURCEFLAGS
{
    union
    {
        struct
        {
            UINT RenderTarget : 1;
            UINT ZBuffer : 1;
            UINT Dynamic : 1;
            UINT HintStatic : 1;
            UINT AutogenMipmap : 1;
            UINT DMap : 1;
            UINT WriteOnly : 1;
            UINT NotLockable : 1;
            UINT Points : 1;
            UINT RtPatches : 1;
            UINT NPatches : 1;
            UINT SharedResource : 1;
            UINT DiscardRenderTarget : 1;
            UINT Video : 1;
            UINT CaptureBuffer : 1;
            UINT Primary : 1;
            UINT Texture : 1;
            UINT CubeMap : 1;
            UINT Volume : 1;
            UINT VertexBuffer : 1;
            UINT IndexBuffer : 1;
            UINT DecodeRenderTarget : 1;
            UINT DecodeCompressedBuffer : 1;
            UINT VideoProcessRenderTarget: 1;
            UINT CpuOptimized : 1;
            UINT MightDrawFromLocked : 1;
            UINT Overlay : 1;
            UINT MatchGdiPrimary : 1;
            UINT InterlacedRefresh : 1;
            UINT TextApi : 1;
            UINT RestrictedContent : 1;
            UINT RestrictSharedAccess : 1;
        };
        UINT Value;
    };
} D3DDDI_RESOURCEFLAGS;
typedef struct _D3DDDI_SURFACEINFO
{
    UINT Width;
    UINT Height;
    UINT Depth;
    CONST VOID* pSysMem;
    UINT SysMemPitch;
    UINT SysMemSlicePitch;
} D3DDDI_SURFACEINFO;
typedef enum _D3DDDI_ROTATION
{
    D3DDDI_ROTATION_IDENTITY = 1,
    D3DDDI_ROTATION_90 = 2,
    D3DDDI_ROTATION_180 = 3,
    D3DDDI_ROTATION_270 = 4
} D3DDDI_ROTATION;
typedef enum D3DDDI_SCANLINEORDERING
{
    D3DDDI_SCANLINEORDERING_UNKNOWN = 0,
    D3DDDI_SCANLINEORDERING_PROGRESSIVE = 1,
    D3DDDI_SCANLINEORDERING_INTERLACED = 2,
} D3DDDI_SCANLINEORDERING;
typedef struct _D3DDDIARG_CREATERESOURCE
{
    D3DDDIFORMAT Format;
    D3DDDI_POOL Pool;
    D3DDDIMULTISAMPLE_TYPE MultisampleType;
    UINT MultisampleQuality;
    CONST D3DDDI_SURFACEINFO* pSurfList;
    UINT SurfCount;
    UINT MipLevels;
    UINT Fvf;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DDDI_RATIONAL RefreshRate;
    HANDLE hResource;
    D3DDDI_RESOURCEFLAGS Flags;
    D3DDDI_ROTATION Rotation;
} D3DDDIARG_CREATERESOURCE;
typedef struct _D3DDDI_RESOURCEFLAGS2
{
    union
    {
        struct
        {
            UINT VideoEncoder : 1;
            UINT UserMemory : 1;
            UINT CrossAdapter : 1;
            UINT IsDisplayable : 1;
            UINT Reserved : 28;
         };
        UINT Value;
    };
} D3DDDI_RESOURCEFLAGS2;
typedef struct _D3DDDIARG_CREATERESOURCE2
{
    D3DDDIFORMAT Format;
    D3DDDI_POOL Pool;
    D3DDDIMULTISAMPLE_TYPE MultisampleType;
    UINT MultisampleQuality;
    CONST D3DDDI_SURFACEINFO* pSurfList;
    UINT SurfCount;
    UINT MipLevels;
    UINT Fvf;
    D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId;
    D3DDDI_RATIONAL RefreshRate;
    HANDLE hResource;
    D3DDDI_RESOURCEFLAGS Flags;
    D3DDDI_ROTATION Rotation;
    D3DDDI_RESOURCEFLAGS2 Flags2;
} D3DDDIARG_CREATERESOURCE2;
typedef struct _D3DDDICB_SIGNALFLAGS
{
    union
    {
        struct
        {
            UINT SignalAtSubmission : 1;
            UINT EnqueueCpuEvent : 1;
            UINT AllowFenceRewind : 1;
            UINT Reserved : 28;
            UINT DXGK_SIGNAL_FLAG_INTERNAL0 : 1;
        };
        UINT Value;
    };
} D3DDDICB_SIGNALFLAGS;
typedef enum _D3DDDI_SYNCHRONIZATIONOBJECT_TYPE
{
    D3DDDI_SYNCHRONIZATION_MUTEX = 1,
    D3DDDI_SEMAPHORE = 2,
    D3DDDI_FENCE = 3,
    D3DDDI_CPU_NOTIFICATION = 4,
    D3DDDI_MONITORED_FENCE = 5,
    D3DDDI_PERIODIC_MONITORED_FENCE = 6,
    D3DDDI_SYNCHRONIZATION_TYPE_LIMIT
} D3DDDI_SYNCHRONIZATIONOBJECT_TYPE;
typedef union
{
    struct
    {
        UINT64 FrameNumber : 40;
        UINT64 PartNumber : 24;
    };
    UINT64 Value;
}DXGK_MIRACAST_CHUNK_ID;
typedef enum _DXGK_MIRACAST_CHUNK_TYPE
{
    DXGK_MIRACAST_CHUNK_TYPE_UNKNOWN = 0,
    DXGK_MIRACAST_CHUNK_TYPE_COLOR_CONVERT_COMPLETE = 1,
    DXGK_MIRACAST_CHUNK_TYPE_ENCODE_COMPLETE = 2,
    DXGK_MIRACAST_CHUNK_TYPE_FRAME_START = 3,
    DXGK_MIRACAST_CHUNK_TYPE_FRAME_DROPPED = 4,
    DXGK_MIRACAST_CHUNK_TYPE_ENCODE_DRIVER_DEFINED_1 = 0x80000000,
    DXGK_MIRACAST_CHUNK_TYPE_ENCODE_DRIVER_DEFINED_2 = 0x80000001,
} DXGK_MIRACAST_CHUNK_TYPE;
typedef struct
{
    DXGK_MIRACAST_CHUNK_TYPE ChunkType;
    DXGK_MIRACAST_CHUNK_ID ChunkId;
    UINT ProcessingTime;
    UINT EncodeRate;
} DXGK_MIRACAST_CHUNK_INFO;
typedef enum D3DDDI_PAGINGQUEUE_PRIORITY
{
    D3DDDI_PAGINGQUEUE_PRIORITY_BELOW_NORMAL = -1,
    D3DDDI_PAGINGQUEUE_PRIORITY_NORMAL = 0,
    D3DDDI_PAGINGQUEUE_PRIORITY_ABOVE_NORMAL = 1,
} D3DDDI_PAGINGQUEUE_PRIORITY;
typedef struct D3DDDI_MAKERESIDENT_FLAGS
{
    union
    {
        struct
        {
            UINT CantTrimFurther : 1;
            UINT MustSucceed : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    };
} D3DDDI_MAKERESIDENT_FLAGS;
typedef struct D3DDDI_MAKERESIDENT
{
    D3DKMT_HANDLE hPagingQueue;
    UINT NumAllocations;
    _Field_size_(NumAllocations)
    CONST D3DKMT_HANDLE* AllocationList;
    CONST UINT* PriorityList;
    D3DDDI_MAKERESIDENT_FLAGS Flags;
    UINT64 PagingFenceValue;
    UINT64 NumBytesToTrim;
} D3DDDI_MAKERESIDENT;
typedef struct D3DDDI_EVICT_FLAGS
{
    union
    {
        struct
        {
            UINT EvictOnlyIfNecessary : 1;
            UINT NotWrittenTo : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    };
} D3DDDI_EVICT_FLAGS;
typedef struct D3DDDI_TRIMRESIDENCYSET_FLAGS
{
    union
    {
        struct
        {
            UINT PeriodicTrim : 1;
            UINT RestartPeriodicTrim : 1;
            UINT TrimToBudget : 1;
            UINT Reserved : 29;
        };
        UINT Value;
    };
} D3DDDI_TRIMRESIDENCYSET_FLAGS;
typedef struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE
{
    union
    {
        struct
        {
            UINT64 Write : 1;
            UINT64 Execute : 1;
            UINT64 Zero : 1;
            UINT64 NoAccess : 1;
            UINT64 SystemUseOnly : 1;
            UINT64 Reserved : 59;
        };
        UINT64 Value;
    };
} D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE;
typedef enum _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE
{
   D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP = 0,
   D3DDDI_UPDATEGPUVIRTUALADDRESS_UNMAP = 1,
   D3DDDI_UPDATEGPUVIRTUALADDRESS_COPY = 2,
   D3DDDI_UPDATEGPUVIRTUALADDRESS_MAP_PROTECT = 3,
} D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE;
typedef struct _D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION
{
    D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION_TYPE OperationType;
    union
    {
        struct
        {
            D3DGPU_VIRTUAL_ADDRESS BaseAddress;
            D3DGPU_SIZE_T SizeInBytes;
            D3DKMT_HANDLE hAllocation;
            D3DGPU_SIZE_T AllocationOffsetInBytes;
            D3DGPU_SIZE_T AllocationSizeInBytes;
        } Map;
        struct
        {
            D3DGPU_VIRTUAL_ADDRESS BaseAddress;
            D3DGPU_SIZE_T SizeInBytes;
            D3DKMT_HANDLE hAllocation;
            D3DGPU_SIZE_T AllocationOffsetInBytes;
            D3DGPU_SIZE_T AllocationSizeInBytes;
            D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE Protection;
            UINT64 DriverProtection;
        } MapProtect;
        struct
        {
            D3DGPU_VIRTUAL_ADDRESS BaseAddress;
            D3DGPU_SIZE_T SizeInBytes;
            D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE Protection;
        } Unmap;
        struct
        {
            D3DGPU_VIRTUAL_ADDRESS SourceAddress;
            D3DGPU_SIZE_T SizeInBytes;
            D3DGPU_VIRTUAL_ADDRESS DestAddress;
        } Copy;
    };
} D3DDDI_UPDATEGPUVIRTUALADDRESS_OPERATION;
typedef enum _D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE
{
    D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_ACCESS = 0,
    D3DDDIGPUVIRTUALADDRESS_RESERVE_ZERO = 1,
    D3DDDIGPUVIRTUALADDRESS_RESERVE_NO_COMMIT = 2
} D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE;
typedef struct D3DDDI_MAPGPUVIRTUALADDRESS
{
    D3DKMT_HANDLE hPagingQueue;
    D3DGPU_VIRTUAL_ADDRESS BaseAddress;
    D3DGPU_VIRTUAL_ADDRESS MinimumAddress;
    D3DGPU_VIRTUAL_ADDRESS MaximumAddress;
    D3DKMT_HANDLE hAllocation;
    D3DGPU_SIZE_T OffsetInPages;
    D3DGPU_SIZE_T SizeInPages;
    D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE Protection;
    UINT64 DriverProtection;
    UINT Reserved0;
    UINT64 Reserved1;
    D3DGPU_VIRTUAL_ADDRESS VirtualAddress;
    UINT64 PagingFenceValue;
} D3DDDI_MAPGPUVIRTUALADDRESS;
typedef struct D3DDDI_RESERVEGPUVIRTUALADDRESS
{
    union
    {
        D3DKMT_HANDLE hPagingQueue;
        D3DKMT_HANDLE hAdapter;
    };
    D3DGPU_VIRTUAL_ADDRESS BaseAddress;
    D3DGPU_VIRTUAL_ADDRESS MinimumAddress;
    D3DGPU_VIRTUAL_ADDRESS MaximumAddress;
    D3DGPU_SIZE_T Size;
    union
    {
        D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE ReservationType;
        UINT Reserved0;
    };
    union
    {
        UINT64 DriverProtection;
        UINT64 Reserved1;
    };
    D3DGPU_VIRTUAL_ADDRESS VirtualAddress;
    union
    {
        UINT64 PagingFenceValue;
        UINT64 Reserved2;
    };
} D3DDDI_RESERVEGPUVIRTUALADDRESS;
typedef struct _D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA
{
    D3DKMT_HANDLE hResource;
    UINT PrivateDriverDataSize;
    PVOID pPrivateDriverData;
} D3DDDI_GETRESOURCEPRESENTPRIVATEDRIVERDATA;
typedef struct D3DDDI_DESTROYPAGINGQUEUE
{
    D3DKMT_HANDLE hPagingQueue;
} D3DDDI_DESTROYPAGINGQUEUE;
typedef struct D3DDDI_UPDATEALLOCPROPERTY_FLAGS
{
    union
    {
        struct
        {
            UINT AccessedPhysically : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} D3DDDI_UPDATEALLOCPROPERTY_FLAGS;
typedef struct D3DDDI_UPDATEALLOCPROPERTY
{
    D3DKMT_HANDLE hPagingQueue;
    D3DKMT_HANDLE hAllocation;
    UINT SupportedSegmentSet;
    D3DDDI_SEGMENTPREFERENCE PreferredSegment;
    D3DDDI_UPDATEALLOCPROPERTY_FLAGS Flags;
    UINT64 PagingFenceValue;
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
} D3DDDI_UPDATEALLOCPROPERTY;
typedef struct D3DDDI_OFFER_FLAGS
{
    union
    {
        struct
        {
            UINT AllowDecommit : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} D3DDDI_OFFER_FLAGS;
typedef enum _D3DDDI_RECLAIM_RESULT
{
    D3DDDI_RECLAIM_RESULT_OK = 0,
    D3DDDI_RECLAIM_RESULT_DISCARDED = 1,
    D3DDDI_RECLAIM_RESULT_NOT_COMMITTED = 2,
} D3DDDI_RECLAIM_RESULT;
typedef struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO
{
    D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type;
    union
    {
        struct
        {
            BOOL InitialState;
        } SynchronizationMutex;
        struct
        {
            UINT MaxCount;
            UINT InitialCount;
        } Semaphore;
        struct
        {
            UINT Reserved[16];
        } Reserved;
    };
} D3DDDI_SYNCHRONIZATIONOBJECTINFO;
typedef struct _D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS
{
    union
    {
        struct
        {
            UINT Shared : 1;
            UINT NtSecuritySharing : 1;
            UINT CrossAdapter : 1;
            UINT TopOfPipeline : 1;
            UINT NoSignal : 1;
            UINT NoWait : 1;
            UINT NoSignalMaxValueOnTdr : 1;
            UINT NoGPUAccess : 1;
            UINT Reserved : 23;
            UINT D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS_RESERVED0 : 1;
        };
        UINT Value;
    };
} D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS;
typedef struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2
{
    D3DDDI_SYNCHRONIZATIONOBJECT_TYPE Type;
    D3DDDI_SYNCHRONIZATIONOBJECT_FLAGS Flags;
    union
    {
        struct
        {
            BOOL InitialState;
        } SynchronizationMutex;
        struct
        {
            UINT MaxCount;
            UINT InitialCount;
        } Semaphore;
        struct
        {
            UINT64 FenceValue;
        } Fence;
        struct
        {
            HANDLE Event;
        } CPUNotification;
        struct
        {
            UINT64 InitialFenceValue;
            VOID* FenceValueCPUVirtualAddress;
            D3DGPU_VIRTUAL_ADDRESS FenceValueGPUVirtualAddress;
            UINT EngineAffinity;
        } MonitoredFence;
        struct
        {
            D3DKMT_HANDLE hAdapter;
            D3DDDI_VIDEO_PRESENT_TARGET_ID VidPnTargetId;
            UINT64 Time;
            VOID* FenceValueCPUVirtualAddress;
            D3DGPU_VIRTUAL_ADDRESS FenceValueGPUVirtualAddress;
            UINT EngineAffinity;
        } PeriodicMonitoredFence;
        struct
        {
            UINT64 Reserved[8];
        } Reserved;
    };
    D3DKMT_HANDLE SharedHandle;
} D3DDDI_SYNCHRONIZATIONOBJECTINFO2;
typedef struct _D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS
{
    union
    {
        struct
        {
            UINT WaitAny : 1;
            UINT Reserved : 31;
        };
        UINT Value;
    };
} D3DDDI_WAITFORSYNCHRONIZATIONOBJECTFROMCPU_FLAGS;
typedef struct _D3DDDI_QUERYREGISTRY_FLAGS
{
    union
    {
        struct
        {
            UINT TranslatePath : 1;
            UINT MutableValue : 1;
            UINT Reserved : 30;
        };
        UINT Value;
    };
} D3DDDI_QUERYREGISTRY_FLAGS;
typedef enum _D3DDDI_QUERYREGISTRY_TYPE
{
   D3DDDI_QUERYREGISTRY_SERVICEKEY = 0,
   D3DDDI_QUERYREGISTRY_ADAPTERKEY = 1,
   D3DDDI_QUERYREGISTRY_DRIVERSTOREPATH = 2,
   D3DDDI_QUERYREGISTRY_DRIVERIMAGEPATH = 3,
   D3DDDI_QUERYREGISTRY_MAX,
} D3DDDI_QUERYREGISTRY_TYPE;
typedef enum _D3DDDI_QUERYREGISTRY_STATUS
{
   D3DDDI_QUERYREGISTRY_STATUS_SUCCESS = 0,
   D3DDDI_QUERYREGISTRY_STATUS_BUFFER_OVERFLOW = 1,
   D3DDDI_QUERYREGISTRY_STATUS_FAIL = 2,
   D3DDDI_QUERYREGISTRY_STATUS_MAX,
} D3DDDI_QUERYREGISTRY_STATUS;
typedef struct _D3DDDI_QUERYREGISTRY_INFO
{
   D3DDDI_QUERYREGISTRY_TYPE QueryType;
   D3DDDI_QUERYREGISTRY_FLAGS QueryFlags;
   WCHAR ValueName[MAX_PATH];
   ULONG ValueType;
   ULONG PhysicalAdapterIndex;
   ULONG OutputValueSize;
   D3DDDI_QUERYREGISTRY_STATUS Status;
   union {
        DWORD OutputDword;
        UINT64 OutputQword;
        WCHAR OutputString[1];
        BYTE OutputBinary[1];
   };
 } D3DDDI_QUERYREGISTRY_INFO;
#pragma warning(pop)
#endif
#pragma endregion
