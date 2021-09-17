#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDXGIDisplayControl IDXGIDisplayControl;
typedef interface IDXGIOutputDuplication IDXGIOutputDuplication;
typedef interface IDXGISurface2 IDXGISurface2;
typedef interface IDXGIResource1 IDXGIResource1;
typedef interface IDXGIDevice2 IDXGIDevice2;
typedef interface IDXGISwapChain1 IDXGISwapChain1;
typedef interface IDXGIFactory2 IDXGIFactory2;
typedef interface IDXGIAdapter2 IDXGIAdapter2;
typedef interface IDXGIOutput1 IDXGIOutput1;
#include "dxgi.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIDisplayControl;
    typedef struct IDXGIDisplayControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDisplayControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDisplayControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDisplayControl * This);
        BOOL ( STDMETHODCALLTYPE *IsStereoEnabled )(
            IDXGIDisplayControl * This);
        void ( STDMETHODCALLTYPE *SetStereoEnabled )(
            IDXGIDisplayControl * This,
            BOOL enabled);
        END_INTERFACE
    } IDXGIDisplayControlVtbl;
    interface IDXGIDisplayControl
    {
        CONST_VTBL struct IDXGIDisplayControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsStereoEnabled(This) )
    ( (This)->lpVtbl -> SetStereoEnabled(This,enabled) )
typedef struct DXGI_OUTDUPL_MOVE_RECT
    {
    POINT SourcePoint;
    RECT DestinationRect;
    } DXGI_OUTDUPL_MOVE_RECT;
typedef struct DXGI_OUTDUPL_DESC
    {
    DXGI_MODE_DESC ModeDesc;
    DXGI_MODE_ROTATION Rotation;
    BOOL DesktopImageInSystemMemory;
    } DXGI_OUTDUPL_DESC;
typedef struct DXGI_OUTDUPL_POINTER_POSITION
    {
    POINT Position;
    BOOL Visible;
    } DXGI_OUTDUPL_POINTER_POSITION;
typedef
enum DXGI_OUTDUPL_POINTER_SHAPE_TYPE
    {
        DXGI_OUTDUPL_POINTER_SHAPE_TYPE_MONOCHROME = 0x1,
        DXGI_OUTDUPL_POINTER_SHAPE_TYPE_COLOR = 0x2,
        DXGI_OUTDUPL_POINTER_SHAPE_TYPE_MASKED_COLOR = 0x4
    } DXGI_OUTDUPL_POINTER_SHAPE_TYPE;
typedef struct DXGI_OUTDUPL_POINTER_SHAPE_INFO
    {
    UINT Type;
    UINT Width;
    UINT Height;
    UINT Pitch;
    POINT HotSpot;
    } DXGI_OUTDUPL_POINTER_SHAPE_INFO;
typedef struct DXGI_OUTDUPL_FRAME_INFO
    {
    LARGE_INTEGER LastPresentTime;
    LARGE_INTEGER LastMouseUpdateTime;
    UINT AccumulatedFrames;
    BOOL RectsCoalesced;
    BOOL ProtectedContentMaskedOut;
    DXGI_OUTDUPL_POINTER_POSITION PointerPosition;
    UINT TotalMetadataBufferSize;
    UINT PointerShapeBufferSize;
    } DXGI_OUTDUPL_FRAME_INFO;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIOutputDuplication;
    typedef struct IDXGIOutputDuplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutputDuplication * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutputDuplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutputDuplication * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutputDuplication * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutputDuplication * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutputDuplication * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutputDuplication * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        void ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutputDuplication * This,
            _Out_ DXGI_OUTDUPL_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *AcquireNextFrame )(
            IDXGIOutputDuplication * This,
            _In_ UINT TimeoutInMilliseconds,
            _Out_ DXGI_OUTDUPL_FRAME_INFO *pFrameInfo,
            _COM_Outptr_ IDXGIResource **ppDesktopResource);
        HRESULT ( STDMETHODCALLTYPE *GetFrameDirtyRects )(
            IDXGIOutputDuplication * This,
            _In_ UINT DirtyRectsBufferSize,
            _Out_writes_bytes_to_(DirtyRectsBufferSize, *pDirtyRectsBufferSizeRequired) RECT *pDirtyRectsBuffer,
            _Out_ UINT *pDirtyRectsBufferSizeRequired);
        HRESULT ( STDMETHODCALLTYPE *GetFrameMoveRects )(
            IDXGIOutputDuplication * This,
            _In_ UINT MoveRectsBufferSize,
            _Out_writes_bytes_to_(MoveRectsBufferSize, *pMoveRectsBufferSizeRequired) DXGI_OUTDUPL_MOVE_RECT *pMoveRectBuffer,
            _Out_ UINT *pMoveRectsBufferSizeRequired);
        HRESULT ( STDMETHODCALLTYPE *GetFramePointerShape )(
            IDXGIOutputDuplication * This,
            _In_ UINT PointerShapeBufferSize,
            _Out_writes_bytes_to_(PointerShapeBufferSize, *pPointerShapeBufferSizeRequired) void *pPointerShapeBuffer,
            _Out_ UINT *pPointerShapeBufferSizeRequired,
            _Out_ DXGI_OUTDUPL_POINTER_SHAPE_INFO *pPointerShapeInfo);
        HRESULT ( STDMETHODCALLTYPE *MapDesktopSurface )(
            IDXGIOutputDuplication * This,
            _Out_ DXGI_MAPPED_RECT *pLockedRect);
        HRESULT ( STDMETHODCALLTYPE *UnMapDesktopSurface )(
            IDXGIOutputDuplication * This);
        HRESULT ( STDMETHODCALLTYPE *ReleaseFrame )(
            IDXGIOutputDuplication * This);
        END_INTERFACE
    } IDXGIOutputDuplicationVtbl;
    interface IDXGIOutputDuplication
    {
        CONST_VTBL struct IDXGIOutputDuplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> AcquireNextFrame(This,TimeoutInMilliseconds,pFrameInfo,ppDesktopResource) )
    ( (This)->lpVtbl -> GetFrameDirtyRects(This,DirtyRectsBufferSize,pDirtyRectsBuffer,pDirtyRectsBufferSizeRequired) )
    ( (This)->lpVtbl -> GetFrameMoveRects(This,MoveRectsBufferSize,pMoveRectBuffer,pMoveRectsBufferSizeRequired) )
    ( (This)->lpVtbl -> GetFramePointerShape(This,PointerShapeBufferSize,pPointerShapeBuffer,pPointerShapeBufferSizeRequired,pPointerShapeInfo) )
    ( (This)->lpVtbl -> MapDesktopSurface(This,pLockedRect) )
    ( (This)->lpVtbl -> UnMapDesktopSurface(This) )
    ( (This)->lpVtbl -> ReleaseFrame(This) )
#endif
#pragma endregion
#pragma region App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum DXGI_ALPHA_MODE
    {
        DXGI_ALPHA_MODE_UNSPECIFIED = 0,
        DXGI_ALPHA_MODE_PREMULTIPLIED = 1,
        DXGI_ALPHA_MODE_STRAIGHT = 2,
        DXGI_ALPHA_MODE_IGNORE = 3,
        DXGI_ALPHA_MODE_FORCE_DWORD = 0xffffffff
    } DXGI_ALPHA_MODE;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISurface2;
    typedef struct IDXGISurface2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISurface2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISurface2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISurface2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISurface2 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISurface2 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISurface2 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISurface2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISurface2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISurface2 * This,
            _Out_ DXGI_SURFACE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *Map )(
            IDXGISurface2 * This,
            _Out_ DXGI_MAPPED_RECT *pLockedRect,
                       UINT MapFlags);
        HRESULT ( STDMETHODCALLTYPE *Unmap )(
            IDXGISurface2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDC )(
            IDXGISurface2 * This,
                       BOOL Discard,
            _Out_ HDC *phdc);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDC )(
            IDXGISurface2 * This,
            _In_opt_ RECT *pDirtyRect);
        HRESULT ( STDMETHODCALLTYPE *GetResource )(
            IDXGISurface2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParentResource,
            _Out_ UINT *pSubresourceIndex);
        END_INTERFACE
    } IDXGISurface2Vtbl;
    interface IDXGISurface2
    {
        CONST_VTBL struct IDXGISurface2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> Map(This,pLockedRect,MapFlags) )
    ( (This)->lpVtbl -> Unmap(This) )
    ( (This)->lpVtbl -> GetDC(This,Discard,phdc) )
    ( (This)->lpVtbl -> ReleaseDC(This,pDirtyRect) )
    ( (This)->lpVtbl -> GetResource(This,riid,ppParentResource,pSubresourceIndex) )
EXTERN_C const IID IID_IDXGIResource1;
    typedef struct IDXGIResource1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIResource1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIResource1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIResource1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIResource1 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIResource1 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIResource1 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIResource1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGIResource1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetSharedHandle )(
            IDXGIResource1 * This,
            _Out_ HANDLE *pSharedHandle);
        HRESULT ( STDMETHODCALLTYPE *GetUsage )(
            IDXGIResource1 * This,
                        DXGI_USAGE *pUsage);
        HRESULT ( STDMETHODCALLTYPE *SetEvictionPriority )(
            IDXGIResource1 * This,
                       UINT EvictionPriority);
        HRESULT ( STDMETHODCALLTYPE *GetEvictionPriority )(
            IDXGIResource1 * This,
            _Out_ UINT *pEvictionPriority);
        HRESULT ( STDMETHODCALLTYPE *CreateSubresourceSurface )(
            IDXGIResource1 * This,
            UINT index,
            _COM_Outptr_ IDXGISurface2 **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            IDXGIResource1 * This,
            _In_opt_ const SECURITY_ATTRIBUTES *pAttributes,
            _In_ DWORD dwAccess,
            _In_opt_ LPCWSTR lpName,
            _Out_ HANDLE *pHandle);
        END_INTERFACE
    } IDXGIResource1Vtbl;
    interface IDXGIResource1
    {
        CONST_VTBL struct IDXGIResource1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> GetSharedHandle(This,pSharedHandle) )
    ( (This)->lpVtbl -> GetUsage(This,pUsage) )
    ( (This)->lpVtbl -> SetEvictionPriority(This,EvictionPriority) )
    ( (This)->lpVtbl -> GetEvictionPriority(This,pEvictionPriority) )
    ( (This)->lpVtbl -> CreateSubresourceSurface(This,index,ppSurface) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pAttributes,dwAccess,lpName,pHandle) )
typedef
enum _DXGI_OFFER_RESOURCE_PRIORITY
    {
        DXGI_OFFER_RESOURCE_PRIORITY_LOW = 1,
        DXGI_OFFER_RESOURCE_PRIORITY_NORMAL = ( DXGI_OFFER_RESOURCE_PRIORITY_LOW + 1 ) ,
        DXGI_OFFER_RESOURCE_PRIORITY_HIGH = ( DXGI_OFFER_RESOURCE_PRIORITY_NORMAL + 1 )
    } DXGI_OFFER_RESOURCE_PRIORITY;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIDevice2;
    typedef struct IDXGIDevice2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIDevice2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIDevice2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIDevice2 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIDevice2 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIDevice2 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIDevice2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetAdapter )(
            IDXGIDevice2 * This,
            _COM_Outptr_ IDXGIAdapter **pAdapter);
        HRESULT ( STDMETHODCALLTYPE *CreateSurface )(
            IDXGIDevice2 * This,
            _In_ const DXGI_SURFACE_DESC *pDesc,
                       UINT NumSurfaces,
                       DXGI_USAGE Usage,
            _In_opt_ const DXGI_SHARED_RESOURCE *pSharedResource,
            _COM_Outptr_ IDXGISurface **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *QueryResourceResidency )(
            IDXGIDevice2 * This,
            _In_reads_(NumResources) IUnknown *const *ppResources,
            _Out_writes_(NumResources) DXGI_RESIDENCY *pResidencyStatus,
                       UINT NumResources);
        HRESULT ( STDMETHODCALLTYPE *SetGPUThreadPriority )(
            IDXGIDevice2 * This,
                       INT Priority);
        HRESULT ( STDMETHODCALLTYPE *GetGPUThreadPriority )(
            IDXGIDevice2 * This,
            _Out_ INT *pPriority);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumFrameLatency )(
            IDXGIDevice2 * This,
                       UINT MaxLatency);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumFrameLatency )(
            IDXGIDevice2 * This,
            _Out_ UINT *pMaxLatency);
        HRESULT ( STDMETHODCALLTYPE *OfferResources )(
            IDXGIDevice2 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _In_ DXGI_OFFER_RESOURCE_PRIORITY Priority);
        HRESULT ( STDMETHODCALLTYPE *ReclaimResources )(
            IDXGIDevice2 * This,
            _In_ UINT NumResources,
            _In_reads_(NumResources) IDXGIResource *const *ppResources,
            _Out_writes_all_opt_(NumResources) BOOL *pDiscarded);
        HRESULT ( STDMETHODCALLTYPE *EnqueueSetEvent )(
            IDXGIDevice2 * This,
            _In_ HANDLE hEvent);
        END_INTERFACE
    } IDXGIDevice2Vtbl;
    interface IDXGIDevice2
    {
        CONST_VTBL struct IDXGIDevice2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetAdapter(This,pAdapter) )
    ( (This)->lpVtbl -> CreateSurface(This,pDesc,NumSurfaces,Usage,pSharedResource,ppSurface) )
    ( (This)->lpVtbl -> QueryResourceResidency(This,ppResources,pResidencyStatus,NumResources) )
    ( (This)->lpVtbl -> SetGPUThreadPriority(This,Priority) )
    ( (This)->lpVtbl -> GetGPUThreadPriority(This,pPriority) )
    ( (This)->lpVtbl -> SetMaximumFrameLatency(This,MaxLatency) )
    ( (This)->lpVtbl -> GetMaximumFrameLatency(This,pMaxLatency) )
    ( (This)->lpVtbl -> OfferResources(This,NumResources,ppResources,Priority) )
    ( (This)->lpVtbl -> ReclaimResources(This,NumResources,ppResources,pDiscarded) )
    ( (This)->lpVtbl -> EnqueueSetEvent(This,hEvent) )
typedef struct DXGI_MODE_DESC1
    {
    UINT Width;
    UINT Height;
    DXGI_RATIONAL RefreshRate;
    DXGI_FORMAT Format;
    DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
    DXGI_MODE_SCALING Scaling;
    BOOL Stereo;
    } DXGI_MODE_DESC1;
typedef
enum DXGI_SCALING
    {
        DXGI_SCALING_STRETCH = 0,
        DXGI_SCALING_NONE = 1,
        DXGI_SCALING_ASPECT_RATIO_STRETCH = 2
    } DXGI_SCALING;
typedef struct DXGI_SWAP_CHAIN_DESC1
    {
    UINT Width;
    UINT Height;
    DXGI_FORMAT Format;
    BOOL Stereo;
    DXGI_SAMPLE_DESC SampleDesc;
    DXGI_USAGE BufferUsage;
    UINT BufferCount;
    DXGI_SCALING Scaling;
    DXGI_SWAP_EFFECT SwapEffect;
    DXGI_ALPHA_MODE AlphaMode;
    UINT Flags;
    } DXGI_SWAP_CHAIN_DESC1;
typedef struct DXGI_SWAP_CHAIN_FULLSCREEN_DESC
    {
    DXGI_RATIONAL RefreshRate;
    DXGI_MODE_SCANLINE_ORDER ScanlineOrdering;
    DXGI_MODE_SCALING Scaling;
    BOOL Windowed;
    } DXGI_SWAP_CHAIN_FULLSCREEN_DESC;
typedef struct DXGI_PRESENT_PARAMETERS
    {
    UINT DirtyRectsCount;
    _Field_size_full_opt_(DirtyRectsCount) RECT *pDirtyRects;
    RECT *pScrollRect;
    POINT *pScrollOffset;
    } DXGI_PRESENT_PARAMETERS;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGISwapChain1;
    typedef struct IDXGISwapChain1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGISwapChain1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGISwapChain1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGISwapChain1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGISwapChain1 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGISwapChain1 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGISwapChain1 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGISwapChain1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IDXGISwapChain1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *Present )(
            IDXGISwapChain1 * This,
                       UINT SyncInterval,
                       UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IDXGISwapChain1 * This,
                       UINT Buffer,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppSurface);
        HRESULT ( STDMETHODCALLTYPE *SetFullscreenState )(
            IDXGISwapChain1 * This,
                       BOOL Fullscreen,
            _In_opt_ IDXGIOutput *pTarget);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenState )(
            IDXGISwapChain1 * This,
            _Out_opt_ BOOL *pFullscreen,
            _COM_Outptr_opt_result_maybenull_ IDXGIOutput **ppTarget);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGISwapChain1 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *ResizeBuffers )(
            IDXGISwapChain1 * This,
                       UINT BufferCount,
                       UINT Width,
                       UINT Height,
                       DXGI_FORMAT NewFormat,
                       UINT SwapChainFlags);
        HRESULT ( STDMETHODCALLTYPE *ResizeTarget )(
            IDXGISwapChain1 * This,
            _In_ const DXGI_MODE_DESC *pNewTargetParameters);
        HRESULT ( STDMETHODCALLTYPE *GetContainingOutput )(
            IDXGISwapChain1 * This,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGISwapChain1 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetLastPresentCount )(
            IDXGISwapChain1 * This,
            _Out_ UINT *pLastPresentCount);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGISwapChain1 * This,
            _Out_ DXGI_SWAP_CHAIN_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetFullscreenDesc )(
            IDXGISwapChain1 * This,
            _Out_ DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetHwnd )(
            IDXGISwapChain1 * This,
            _Out_ HWND *pHwnd);
        HRESULT ( STDMETHODCALLTYPE *GetCoreWindow )(
            IDXGISwapChain1 * This,
            _In_ REFIID refiid,
            _COM_Outptr_ void **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Present1 )(
            IDXGISwapChain1 * This,
                       UINT SyncInterval,
                       UINT PresentFlags,
            _In_ const DXGI_PRESENT_PARAMETERS *pPresentParameters);
        BOOL ( STDMETHODCALLTYPE *IsTemporaryMonoSupported )(
            IDXGISwapChain1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictToOutput )(
            IDXGISwapChain1 * This,
            _Out_ IDXGIOutput **ppRestrictToOutput);
        HRESULT ( STDMETHODCALLTYPE *SetBackgroundColor )(
            IDXGISwapChain1 * This,
            _In_ const DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *GetBackgroundColor )(
            IDXGISwapChain1 * This,
            _Out_ DXGI_RGBA *pColor);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            IDXGISwapChain1 * This,
            _In_ DXGI_MODE_ROTATION Rotation);
        HRESULT ( STDMETHODCALLTYPE *GetRotation )(
            IDXGISwapChain1 * This,
            _Out_ DXGI_MODE_ROTATION *pRotation);
        END_INTERFACE
    } IDXGISwapChain1Vtbl;
    interface IDXGISwapChain1
    {
        CONST_VTBL struct IDXGISwapChain1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppDevice) )
    ( (This)->lpVtbl -> Present(This,SyncInterval,Flags) )
    ( (This)->lpVtbl -> GetBuffer(This,Buffer,riid,ppSurface) )
    ( (This)->lpVtbl -> SetFullscreenState(This,Fullscreen,pTarget) )
    ( (This)->lpVtbl -> GetFullscreenState(This,pFullscreen,ppTarget) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> ResizeBuffers(This,BufferCount,Width,Height,NewFormat,SwapChainFlags) )
    ( (This)->lpVtbl -> ResizeTarget(This,pNewTargetParameters) )
    ( (This)->lpVtbl -> GetContainingOutput(This,ppOutput) )
    ( (This)->lpVtbl -> GetFrameStatistics(This,pStats) )
    ( (This)->lpVtbl -> GetLastPresentCount(This,pLastPresentCount) )
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
    ( (This)->lpVtbl -> GetFullscreenDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetHwnd(This,pHwnd) )
    ( (This)->lpVtbl -> GetCoreWindow(This,refiid,ppUnk) )
    ( (This)->lpVtbl -> Present1(This,SyncInterval,PresentFlags,pPresentParameters) )
    ( (This)->lpVtbl -> IsTemporaryMonoSupported(This) )
    ( (This)->lpVtbl -> GetRestrictToOutput(This,ppRestrictToOutput) )
    ( (This)->lpVtbl -> SetBackgroundColor(This,pColor) )
    ( (This)->lpVtbl -> GetBackgroundColor(This,pColor) )
    ( (This)->lpVtbl -> SetRotation(This,Rotation) )
    ( (This)->lpVtbl -> GetRotation(This,pRotation) )
EXTERN_C const IID IID_IDXGIFactory2;
    typedef struct IDXGIFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIFactory2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIFactory2 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIFactory2 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIFactory2 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIFactory2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters )(
            IDXGIFactory2 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *MakeWindowAssociation )(
            IDXGIFactory2 * This,
            HWND WindowHandle,
            UINT Flags);
        HRESULT ( STDMETHODCALLTYPE *GetWindowAssociation )(
            IDXGIFactory2 * This,
            _Out_ HWND *pWindowHandle);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChain )(
            IDXGIFactory2 * This,
            _In_ IUnknown *pDevice,
            _In_ DXGI_SWAP_CHAIN_DESC *pDesc,
            _COM_Outptr_ IDXGISwapChain **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSoftwareAdapter )(
            IDXGIFactory2 * This,
                       HMODULE Module,
            _COM_Outptr_ IDXGIAdapter **ppAdapter);
        HRESULT ( STDMETHODCALLTYPE *EnumAdapters1 )(
            IDXGIFactory2 * This,
                       UINT Adapter,
            _COM_Outptr_ IDXGIAdapter1 **ppAdapter);
        BOOL ( STDMETHODCALLTYPE *IsCurrent )(
            IDXGIFactory2 * This);
        BOOL ( STDMETHODCALLTYPE *IsWindowedStereoEnabled )(
            IDXGIFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForHwnd )(
            IDXGIFactory2 * This,
            _In_ IUnknown *pDevice,
            _In_ HWND hWnd,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ const DXGI_SWAP_CHAIN_FULLSCREEN_DESC *pFullscreenDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForCoreWindow )(
            IDXGIFactory2 * This,
            _In_ IUnknown *pDevice,
            _In_ IUnknown *pWindow,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        HRESULT ( STDMETHODCALLTYPE *GetSharedResourceAdapterLuid )(
            IDXGIFactory2 * This,
            _In_ HANDLE hResource,
            _Out_ LUID *pLuid);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusWindow )(
            IDXGIFactory2 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterStereoStatusEvent )(
            IDXGIFactory2 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterStereoStatus )(
            IDXGIFactory2 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusWindow )(
            IDXGIFactory2 * This,
            _In_ HWND WindowHandle,
            _In_ UINT wMsg,
            _Out_ DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *RegisterOcclusionStatusEvent )(
            IDXGIFactory2 * This,
            _In_ HANDLE hEvent,
            _Out_ DWORD *pdwCookie);
        void ( STDMETHODCALLTYPE *UnregisterOcclusionStatus )(
            IDXGIFactory2 * This,
            _In_ DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *CreateSwapChainForComposition )(
            IDXGIFactory2 * This,
            _In_ IUnknown *pDevice,
            _In_ const DXGI_SWAP_CHAIN_DESC1 *pDesc,
            _In_opt_ IDXGIOutput *pRestrictToOutput,
            _COM_Outptr_ IDXGISwapChain1 **ppSwapChain);
        END_INTERFACE
    } IDXGIFactory2Vtbl;
    interface IDXGIFactory2
    {
        CONST_VTBL struct IDXGIFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> EnumAdapters(This,Adapter,ppAdapter) )
    ( (This)->lpVtbl -> MakeWindowAssociation(This,WindowHandle,Flags) )
    ( (This)->lpVtbl -> GetWindowAssociation(This,pWindowHandle) )
    ( (This)->lpVtbl -> CreateSwapChain(This,pDevice,pDesc,ppSwapChain) )
    ( (This)->lpVtbl -> CreateSoftwareAdapter(This,Module,ppAdapter) )
    ( (This)->lpVtbl -> EnumAdapters1(This,Adapter,ppAdapter) )
    ( (This)->lpVtbl -> IsCurrent(This) )
    ( (This)->lpVtbl -> IsWindowedStereoEnabled(This) )
    ( (This)->lpVtbl -> CreateSwapChainForHwnd(This,pDevice,hWnd,pDesc,pFullscreenDesc,pRestrictToOutput,ppSwapChain) )
    ( (This)->lpVtbl -> CreateSwapChainForCoreWindow(This,pDevice,pWindow,pDesc,pRestrictToOutput,ppSwapChain) )
    ( (This)->lpVtbl -> GetSharedResourceAdapterLuid(This,hResource,pLuid) )
    ( (This)->lpVtbl -> RegisterStereoStatusWindow(This,WindowHandle,wMsg,pdwCookie) )
    ( (This)->lpVtbl -> RegisterStereoStatusEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterStereoStatus(This,dwCookie) )
    ( (This)->lpVtbl -> RegisterOcclusionStatusWindow(This,WindowHandle,wMsg,pdwCookie) )
    ( (This)->lpVtbl -> RegisterOcclusionStatusEvent(This,hEvent,pdwCookie) )
    ( (This)->lpVtbl -> UnregisterOcclusionStatus(This,dwCookie) )
    ( (This)->lpVtbl -> CreateSwapChainForComposition(This,pDevice,pDesc,pRestrictToOutput,ppSwapChain) )
typedef
enum DXGI_GRAPHICS_PREEMPTION_GRANULARITY
    {
        DXGI_GRAPHICS_PREEMPTION_DMA_BUFFER_BOUNDARY = 0,
        DXGI_GRAPHICS_PREEMPTION_PRIMITIVE_BOUNDARY = 1,
        DXGI_GRAPHICS_PREEMPTION_TRIANGLE_BOUNDARY = 2,
        DXGI_GRAPHICS_PREEMPTION_PIXEL_BOUNDARY = 3,
        DXGI_GRAPHICS_PREEMPTION_INSTRUCTION_BOUNDARY = 4
    } DXGI_GRAPHICS_PREEMPTION_GRANULARITY;
typedef
enum DXGI_COMPUTE_PREEMPTION_GRANULARITY
    {
        DXGI_COMPUTE_PREEMPTION_DMA_BUFFER_BOUNDARY = 0,
        DXGI_COMPUTE_PREEMPTION_DISPATCH_BOUNDARY = 1,
        DXGI_COMPUTE_PREEMPTION_THREAD_GROUP_BOUNDARY = 2,
        DXGI_COMPUTE_PREEMPTION_THREAD_BOUNDARY = 3,
        DXGI_COMPUTE_PREEMPTION_INSTRUCTION_BOUNDARY = 4
    } DXGI_COMPUTE_PREEMPTION_GRANULARITY;
typedef struct DXGI_ADAPTER_DESC2
    {
    WCHAR Description[ 128 ];
    UINT VendorId;
    UINT DeviceId;
    UINT SubSysId;
    UINT Revision;
    SIZE_T DedicatedVideoMemory;
    SIZE_T DedicatedSystemMemory;
    SIZE_T SharedSystemMemory;
    LUID AdapterLuid;
    UINT Flags;
    DXGI_GRAPHICS_PREEMPTION_GRANULARITY GraphicsPreemptionGranularity;
    DXGI_COMPUTE_PREEMPTION_GRANULARITY ComputePreemptionGranularity;
    } DXGI_ADAPTER_DESC2;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IDXGIAdapter2;
    typedef struct IDXGIAdapter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIAdapter2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIAdapter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIAdapter2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIAdapter2 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIAdapter2 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIAdapter2 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIAdapter2 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *EnumOutputs )(
            IDXGIAdapter2 * This,
                       UINT Output,
            _COM_Outptr_ IDXGIOutput **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIAdapter2 * This,
            _Out_ DXGI_ADAPTER_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *CheckInterfaceSupport )(
            IDXGIAdapter2 * This,
            _In_ REFGUID InterfaceName,
            _Out_ LARGE_INTEGER *pUMDVersion);
        HRESULT ( STDMETHODCALLTYPE *GetDesc1 )(
            IDXGIAdapter2 * This,
            _Out_ DXGI_ADAPTER_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDesc2 )(
            IDXGIAdapter2 * This,
            _Out_ DXGI_ADAPTER_DESC2 *pDesc);
        END_INTERFACE
    } IDXGIAdapter2Vtbl;
    interface IDXGIAdapter2
    {
        CONST_VTBL struct IDXGIAdapter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> EnumOutputs(This,Output,ppOutput) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> CheckInterfaceSupport(This,InterfaceName,pUMDVersion) )
    ( (This)->lpVtbl -> GetDesc1(This,pDesc) )
    ( (This)->lpVtbl -> GetDesc2(This,pDesc) )
EXTERN_C const IID IID_IDXGIOutput1;
    typedef struct IDXGIOutput1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDXGIOutput1 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDXGIOutput1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDXGIOutput1 * This);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateData )(
            IDXGIOutput1 * This,
            _In_ REFGUID Name,
                       UINT DataSize,
            _In_reads_bytes_(DataSize) const void *pData);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateDataInterface )(
            IDXGIOutput1 * This,
            _In_ REFGUID Name,
            _In_opt_ const IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDXGIOutput1 * This,
            _In_ REFGUID Name,
            _Inout_ UINT *pDataSize,
            _Out_writes_bytes_(*pDataSize) void *pData);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            IDXGIOutput1 * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppParent);
        HRESULT ( STDMETHODCALLTYPE *GetDesc )(
            IDXGIOutput1 * This,
            _Out_ DXGI_OUTPUT_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList )(
            IDXGIOutput1 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode )(
            IDXGIOutput1 * This,
            _In_ const DXGI_MODE_DESC *pModeToMatch,
            _Out_ DXGI_MODE_DESC *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *WaitForVBlank )(
            IDXGIOutput1 * This);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            IDXGIOutput1 * This,
            _In_ IUnknown *pDevice,
            BOOL Exclusive);
        void ( STDMETHODCALLTYPE *ReleaseOwnership )(
            IDXGIOutput1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControlCapabilities )(
            IDXGIOutput1 * This,
            _Out_ DXGI_GAMMA_CONTROL_CAPABILITIES *pGammaCaps);
        HRESULT ( STDMETHODCALLTYPE *SetGammaControl )(
            IDXGIOutput1 * This,
            _In_ const DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *GetGammaControl )(
            IDXGIOutput1 * This,
            _Out_ DXGI_GAMMA_CONTROL *pArray);
        HRESULT ( STDMETHODCALLTYPE *SetDisplaySurface )(
            IDXGIOutput1 * This,
            _In_ IDXGISurface *pScanoutSurface);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData )(
            IDXGIOutput1 * This,
            _In_ IDXGISurface *pDestination);
        HRESULT ( STDMETHODCALLTYPE *GetFrameStatistics )(
            IDXGIOutput1 * This,
            _Out_ DXGI_FRAME_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayModeList1 )(
            IDXGIOutput1 * This,
                       DXGI_FORMAT EnumFormat,
                       UINT Flags,
            _Inout_ UINT *pNumModes,
            _Out_writes_to_opt_(*pNumModes,*pNumModes) DXGI_MODE_DESC1 *pDesc);
        HRESULT ( STDMETHODCALLTYPE *FindClosestMatchingMode1 )(
            IDXGIOutput1 * This,
            _In_ const DXGI_MODE_DESC1 *pModeToMatch,
            _Out_ DXGI_MODE_DESC1 *pClosestMatch,
            _In_opt_ IUnknown *pConcernedDevice);
        HRESULT ( STDMETHODCALLTYPE *GetDisplaySurfaceData1 )(
            IDXGIOutput1 * This,
            _In_ IDXGIResource *pDestination);
        HRESULT ( STDMETHODCALLTYPE *DuplicateOutput )(
            IDXGIOutput1 * This,
            _In_ IUnknown *pDevice,
            _COM_Outptr_ IDXGIOutputDuplication **ppOutputDuplication);
        END_INTERFACE
    } IDXGIOutput1Vtbl;
    interface IDXGIOutput1
    {
        CONST_VTBL struct IDXGIOutput1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPrivateData(This,Name,DataSize,pData) )
    ( (This)->lpVtbl -> SetPrivateDataInterface(This,Name,pUnknown) )
    ( (This)->lpVtbl -> GetPrivateData(This,Name,pDataSize,pData) )
    ( (This)->lpVtbl -> GetParent(This,riid,ppParent) )
    ( (This)->lpVtbl -> GetDesc(This,pDesc) )
    ( (This)->lpVtbl -> GetDisplayModeList(This,EnumFormat,Flags,pNumModes,pDesc) )
    ( (This)->lpVtbl -> FindClosestMatchingMode(This,pModeToMatch,pClosestMatch,pConcernedDevice) )
    ( (This)->lpVtbl -> WaitForVBlank(This) )
    ( (This)->lpVtbl -> TakeOwnership(This,pDevice,Exclusive) )
    ( (This)->lpVtbl -> ReleaseOwnership(This) )
    ( (This)->lpVtbl -> GetGammaControlCapabilities(This,pGammaCaps) )
    ( (This)->lpVtbl -> SetGammaControl(This,pArray) )
    ( (This)->lpVtbl -> GetGammaControl(This,pArray) )
    ( (This)->lpVtbl -> SetDisplaySurface(This,pScanoutSurface) )
    ( (This)->lpVtbl -> GetDisplaySurfaceData(This,pDestination) )
    ( (This)->lpVtbl -> GetFrameStatistics(This,pStats) )
    ( (This)->lpVtbl -> GetDisplayModeList1(This,EnumFormat,Flags,pNumModes,pDesc) )
    ( (This)->lpVtbl -> FindClosestMatchingMode1(This,pModeToMatch,pClosestMatch,pConcernedDevice) )
    ( (This)->lpVtbl -> GetDisplaySurfaceData1(This,pDestination) )
    ( (This)->lpVtbl -> DuplicateOutput(This,pDevice,ppOutputDuplication) )
#endif
#pragma endregion
DEFINE_GUID(IID_IDXGIDisplayControl,0xea9dbf1a,0xc88e,0x4486,0x85,0x4a,0x98,0xaa,0x01,0x38,0xf3,0x0c);
DEFINE_GUID(IID_IDXGIOutputDuplication,0x191cfac3,0xa341,0x470d,0xb2,0x6e,0xa8,0x64,0xf4,0x28,0x31,0x9c);
DEFINE_GUID(IID_IDXGISurface2,0xaba496dd,0xb617,0x4cb8,0xa8,0x66,0xbc,0x44,0xd7,0xeb,0x1f,0xa2);
DEFINE_GUID(IID_IDXGIResource1,0x30961379,0x4609,0x4a41,0x99,0x8e,0x54,0xfe,0x56,0x7e,0xe0,0xc1);
DEFINE_GUID(IID_IDXGIDevice2,0x05008617,0xfbfd,0x4051,0xa7,0x90,0x14,0x48,0x84,0xb4,0xf6,0xa9);
DEFINE_GUID(IID_IDXGISwapChain1,0x790a45f7,0x0d42,0x4876,0x98,0x3a,0x0a,0x55,0xcf,0xe6,0xf4,0xaa);
DEFINE_GUID(IID_IDXGIFactory2,0x50c83a1c,0xe072,0x4c48,0x87,0xb0,0x36,0x30,0xfa,0x36,0xa6,0xd0);
DEFINE_GUID(IID_IDXGIAdapter2,0x0AA1AE0A,0xFA0E,0x4B84,0x86,0x44,0xE0,0x5F,0xF8,0xE5,0xAC,0xB5);
DEFINE_GUID(IID_IDXGIOutput1,0x00cddea8,0x939b,0x4b83,0xa3,0x40,0xa6,0x85,0x22,0x66,0x66,0xcc);
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dxgi1_2_0000_0009_v0_0_s_ifspec;
}
