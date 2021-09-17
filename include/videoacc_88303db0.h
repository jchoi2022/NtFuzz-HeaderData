#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAMVideoAcceleratorNotify IAMVideoAcceleratorNotify;
typedef interface IAMVideoAccelerator IAMVideoAccelerator;
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef void *LPVOID;
typedef void *LPGUID;
typedef void *LPDIRECTDRAWSURFACE;
typedef void *LPDDPIXELFORMAT;
typedef void *LPAMVAInternalMemInfo;
typedef void AMVAUncompDataInfo;
typedef void *LPAMVACompBufferInfo;
typedef void AMVABUFFERINFO;
typedef void AMVAEndFrameInfo;
typedef void *LPAMVAUncompBufferInfo;
typedef void AMVABeginFrameInfo;
typedef IUnknown *IMediaSample;
#endif
#include <ddraw.h>
#include <amva.h>
extern RPC_IF_HANDLE __MIDL_itf_videoacc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_videoacc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMVideoAcceleratorNotify;
    typedef struct IAMVideoAcceleratorNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVideoAcceleratorNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVideoAcceleratorNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVideoAcceleratorNotify * This);
        HRESULT ( STDMETHODCALLTYPE *GetUncompSurfacesInfo )(
            IAMVideoAcceleratorNotify * This,
                       const GUID *pGuid,
            _Inout_ LPAMVAUncompBufferInfo pUncompBufferInfo);
        HRESULT ( STDMETHODCALLTYPE *SetUncompSurfacesInfo )(
            IAMVideoAcceleratorNotify * This,
                       DWORD dwActualUncompSurfacesAllocated);
        HRESULT ( STDMETHODCALLTYPE *GetCreateVideoAcceleratorData )(
            IAMVideoAcceleratorNotify * This,
                       const GUID *pGuid,
            _Out_ LPDWORD pdwSizeMiscData,
            _Outptr_result_bytebuffer_(*pdwSizeMiscData) LPVOID *ppMiscData);
        END_INTERFACE
    } IAMVideoAcceleratorNotifyVtbl;
    interface IAMVideoAcceleratorNotify
    {
        CONST_VTBL struct IAMVideoAcceleratorNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUncompSurfacesInfo(This,pGuid,pUncompBufferInfo) )
    ( (This)->lpVtbl -> SetUncompSurfacesInfo(This,dwActualUncompSurfacesAllocated) )
    ( (This)->lpVtbl -> GetCreateVideoAcceleratorData(This,pGuid,pdwSizeMiscData,ppMiscData) )
EXTERN_C const IID IID_IAMVideoAccelerator;
    typedef struct IAMVideoAcceleratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMVideoAccelerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMVideoAccelerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMVideoAccelerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetVideoAcceleratorGUIDs )(
            IAMVideoAccelerator * This,
            _Inout_ LPDWORD pdwNumGuidsSupported,
            _Out_writes_to_opt_(*pdwNumGuidsSupported, *pdwNumGuidsSupported) LPGUID pGuidsSupported);
        HRESULT ( STDMETHODCALLTYPE *GetUncompFormatsSupported )(
            IAMVideoAccelerator * This,
                       const GUID *pGuid,
            _Inout_ LPDWORD pdwNumFormatsSupported,
            _Out_writes_to_opt_(*pdwNumFormatsSupported, *pdwNumFormatsSupported) LPDDPIXELFORMAT pFormatsSupported);
        HRESULT ( STDMETHODCALLTYPE *GetInternalMemInfo )(
            IAMVideoAccelerator * This,
                       const GUID *pGuid,
                       const AMVAUncompDataInfo *pamvaUncompDataInfo,
            _Inout_ LPAMVAInternalMemInfo pamvaInternalMemInfo);
        HRESULT ( STDMETHODCALLTYPE *GetCompBufferInfo )(
            IAMVideoAccelerator * This,
                       const GUID *pGuid,
                       const AMVAUncompDataInfo *pamvaUncompDataInfo,
            _Inout_ LPDWORD pdwNumTypesCompBuffers,
            _Out_writes_to_opt_(*pdwNumTypesCompBuffers, *pdwNumTypesCompBuffers) LPAMVACompBufferInfo pamvaCompBufferInfo);
        HRESULT ( STDMETHODCALLTYPE *GetInternalCompBufferInfo )(
            IAMVideoAccelerator * This,
            _Inout_ LPDWORD pdwNumTypesCompBuffers,
            _Out_writes_to_opt_(*pdwNumTypesCompBuffers, *pdwNumTypesCompBuffers) LPAMVACompBufferInfo pamvaCompBufferInfo);
        HRESULT ( STDMETHODCALLTYPE *BeginFrame )(
            IAMVideoAccelerator * This,
                       const AMVABeginFrameInfo *amvaBeginFrameInfo);
        HRESULT ( STDMETHODCALLTYPE *EndFrame )(
            IAMVideoAccelerator * This,
                       const AMVAEndFrameInfo *pEndFrameInfo);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IAMVideoAccelerator * This,
                       DWORD dwTypeIndex,
                       DWORD dwBufferIndex,
                       BOOL bReadOnly,
            _Out_ LPVOID *ppBuffer,
            _Out_ LONG *lpStride);
        HRESULT ( STDMETHODCALLTYPE *ReleaseBuffer )(
            IAMVideoAccelerator * This,
                       DWORD dwTypeIndex,
                       DWORD dwBufferIndex);
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            IAMVideoAccelerator * This,
                       DWORD dwFunction,
                       LPVOID lpPrivateInputData,
                       DWORD cbPrivateInputData,
                       LPVOID lpPrivateOutputDat,
                       DWORD cbPrivateOutputData,
                       DWORD dwNumBuffers,
            _In_reads_(dwNumBuffers) const AMVABUFFERINFO *pamvaBufferInfo);
        HRESULT ( STDMETHODCALLTYPE *QueryRenderStatus )(
            IAMVideoAccelerator * This,
                       DWORD dwTypeIndex,
                       DWORD dwBufferIndex,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DisplayFrame )(
            IAMVideoAccelerator * This,
                       DWORD dwFlipToIndex,
                       IMediaSample *pMediaSample);
        END_INTERFACE
    } IAMVideoAcceleratorVtbl;
    interface IAMVideoAccelerator
    {
        CONST_VTBL struct IAMVideoAcceleratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVideoAcceleratorGUIDs(This,pdwNumGuidsSupported,pGuidsSupported) )
    ( (This)->lpVtbl -> GetUncompFormatsSupported(This,pGuid,pdwNumFormatsSupported,pFormatsSupported) )
    ( (This)->lpVtbl -> GetInternalMemInfo(This,pGuid,pamvaUncompDataInfo,pamvaInternalMemInfo) )
    ( (This)->lpVtbl -> GetCompBufferInfo(This,pGuid,pamvaUncompDataInfo,pdwNumTypesCompBuffers,pamvaCompBufferInfo) )
    ( (This)->lpVtbl -> GetInternalCompBufferInfo(This,pdwNumTypesCompBuffers,pamvaCompBufferInfo) )
    ( (This)->lpVtbl -> BeginFrame(This,amvaBeginFrameInfo) )
    ( (This)->lpVtbl -> EndFrame(This,pEndFrameInfo) )
    ( (This)->lpVtbl -> GetBuffer(This,dwTypeIndex,dwBufferIndex,bReadOnly,ppBuffer,lpStride) )
    ( (This)->lpVtbl -> ReleaseBuffer(This,dwTypeIndex,dwBufferIndex) )
    ( (This)->lpVtbl -> Execute(This,dwFunction,lpPrivateInputData,cbPrivateInputData,lpPrivateOutputDat,cbPrivateOutputData,dwNumBuffers,pamvaBufferInfo) )
    ( (This)->lpVtbl -> QueryRenderStatus(This,dwTypeIndex,dwBufferIndex,dwFlags) )
    ( (This)->lpVtbl -> DisplayFrame(This,dwFlipToIndex,pMediaSample) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_videoacc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_videoacc_0000_0002_v0_0_s_ifspec;
}
