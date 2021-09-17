#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioFrameNative IAudioFrameNative;
typedef interface IVideoFrameNative IVideoFrameNative;
typedef interface IAudioFrameNativeFactory IAudioFrameNativeFactory;
typedef interface IVideoFrameNativeFactory IVideoFrameNativeFactory;
#include "Inspectable.h"
#include "mfobjects.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern const __declspec(selectany) CLSID CLSID_AudioFrameNativeFactory = { 0x16a0a3b9, 0x9f65, 0x4102, { 0x93, 0x67, 0x2c, 0xda, 0x3a, 0x4f, 0x37, 0x2a } };
extern const __declspec(selectany) CLSID CLSID_VideoFrameNativeFactory = { 0xd194386a, 0x4e3, 0x4814, { 0x81, 0x0, 0xb2, 0xb0, 0xae, 0x6d, 0x78, 0xc7 } };
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Einterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Einterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioFrameNative;
    typedef struct IAudioFrameNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioFrameNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioFrameNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioFrameNative * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IAudioFrameNative * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IAudioFrameNative * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IAudioFrameNative * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            IAudioFrameNative * This,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        END_INTERFACE
    } IAudioFrameNativeVtbl;
    interface IAudioFrameNative
    {
        CONST_VTBL struct IAudioFrameNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetData(This,riid,ppv) )
EXTERN_C const IID IID_IVideoFrameNative;
    typedef struct IVideoFrameNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVideoFrameNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVideoFrameNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVideoFrameNative * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IVideoFrameNative * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IVideoFrameNative * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IVideoFrameNative * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            IVideoFrameNative * This,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IVideoFrameNative * This,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        END_INTERFACE
    } IVideoFrameNativeVtbl;
    interface IVideoFrameNative
    {
        CONST_VTBL struct IVideoFrameNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetData(This,riid,ppv) )
    ( (This)->lpVtbl -> GetDevice(This,riid,ppv) )
EXTERN_C const IID IID_IAudioFrameNativeFactory;
    typedef struct IAudioFrameNativeFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioFrameNativeFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioFrameNativeFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioFrameNativeFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IAudioFrameNativeFactory * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IAudioFrameNativeFactory * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IAudioFrameNativeFactory * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateFromMFSample )(
            IAudioFrameNativeFactory * This,
            _In_ IMFSample *data,
            _In_ BOOL forceReadOnly,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        END_INTERFACE
    } IAudioFrameNativeFactoryVtbl;
    interface IAudioFrameNativeFactory
    {
        CONST_VTBL struct IAudioFrameNativeFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateFromMFSample(This,data,forceReadOnly,riid,ppv) )
EXTERN_C const IID IID_IVideoFrameNativeFactory;
    typedef struct IVideoFrameNativeFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVideoFrameNativeFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVideoFrameNativeFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVideoFrameNativeFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IVideoFrameNativeFactory * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IVideoFrameNativeFactory * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IVideoFrameNativeFactory * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *CreateFromMFSample )(
            IVideoFrameNativeFactory * This,
            _In_ IMFSample *data,
            _In_ REFGUID subtype,
            _In_ UINT32 width,
            _In_ UINT32 height,
            _In_ BOOL forceReadOnly,
            _In_opt_ const MFVideoArea *minDisplayAperture,
            _In_opt_ IMFDXGIDeviceManager *device,
            _In_ REFIID riid,
            _COM_Outptr_ LPVOID *ppv);
        END_INTERFACE
    } IVideoFrameNativeFactoryVtbl;
    interface IVideoFrameNativeFactory
    {
        CONST_VTBL struct IVideoFrameNativeFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> CreateFromMFSample(This,data,subtype,width,height,forceReadOnly,minDisplayAperture,device,riid,ppv) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Einterop_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Emedia2Ecore2Einterop_0000_0004_v0_0_s_ifspec;
}
