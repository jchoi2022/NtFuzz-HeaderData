#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAdvancedMediaCaptureInitializationSettings IAdvancedMediaCaptureInitializationSettings;
typedef interface IAdvancedMediaCaptureSettings IAdvancedMediaCaptureSettings;
typedef interface IAdvancedMediaCapture IAdvancedMediaCapture;
#include "mfobjects.h"
extern "C"{
#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfmediacapture_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediacapture_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAdvancedMediaCaptureInitializationSettings;
    typedef struct IAdvancedMediaCaptureInitializationSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAdvancedMediaCaptureInitializationSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAdvancedMediaCaptureInitializationSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAdvancedMediaCaptureInitializationSettings * This);
        HRESULT ( STDMETHODCALLTYPE *SetDirectxDeviceManager )(
            IAdvancedMediaCaptureInitializationSettings * This,
                       IMFDXGIDeviceManager *value);
        END_INTERFACE
    } IAdvancedMediaCaptureInitializationSettingsVtbl;
    interface IAdvancedMediaCaptureInitializationSettings
    {
        CONST_VTBL struct IAdvancedMediaCaptureInitializationSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDirectxDeviceManager(This,value) )
EXTERN_C const IID IID_IAdvancedMediaCaptureSettings;
    typedef struct IAdvancedMediaCaptureSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAdvancedMediaCaptureSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAdvancedMediaCaptureSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAdvancedMediaCaptureSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetDirectxDeviceManager )(
            IAdvancedMediaCaptureSettings * This,
                        IMFDXGIDeviceManager **value);
        END_INTERFACE
    } IAdvancedMediaCaptureSettingsVtbl;
    interface IAdvancedMediaCaptureSettings
    {
        CONST_VTBL struct IAdvancedMediaCaptureSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDirectxDeviceManager(This,value) )
EXTERN_C const IID IID_IAdvancedMediaCapture;
    typedef struct IAdvancedMediaCaptureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAdvancedMediaCapture * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAdvancedMediaCapture * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAdvancedMediaCapture * This);
        HRESULT ( STDMETHODCALLTYPE *GetAdvancedMediaCaptureSettings )(
            __RPC__in IAdvancedMediaCapture * This,
                        __RPC__deref_out_opt IAdvancedMediaCaptureSettings **value);
        END_INTERFACE
    } IAdvancedMediaCaptureVtbl;
    interface IAdvancedMediaCapture
    {
        CONST_VTBL struct IAdvancedMediaCaptureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAdvancedMediaCaptureSettings(This,value) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_mfmediacapture_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfmediacapture_0000_0003_v0_0_s_ifspec;
}
