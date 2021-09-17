#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IInkCommitRequestHandler IInkCommitRequestHandler;
typedef interface IInkPresenterDesktop IInkPresenterDesktop;
typedef interface IInkHostWorkItem IInkHostWorkItem;
typedef interface IInkDesktopHost IInkDesktopHost;
typedef class InkDesktopHost InkDesktopHost;
#include "oaidl.h"
#include "ocidl.h"
#include "inspectable.h"
#include "weakreference.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_inkpresenterdesktop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inkpresenterdesktop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IInkCommitRequestHandler;
    typedef struct IInkCommitRequestHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkCommitRequestHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkCommitRequestHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkCommitRequestHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnCommitRequested )(
            __RPC__in IInkCommitRequestHandler * This);
        END_INTERFACE
    } IInkCommitRequestHandlerVtbl;
    interface IInkCommitRequestHandler
    {
        CONST_VTBL struct IInkCommitRequestHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCommitRequested(This) )
EXTERN_C const IID IID_IInkPresenterDesktop;
    typedef struct IInkPresenterDesktopVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkPresenterDesktop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkPresenterDesktop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkPresenterDesktop * This);
        HRESULT ( STDMETHODCALLTYPE *SetRootVisual )(
            __RPC__in IInkPresenterDesktop * This,
                       __RPC__in_opt IUnknown *rootVisual,
                               __RPC__in_opt IUnknown *device);
        HRESULT ( STDMETHODCALLTYPE *SetCommitRequestHandler )(
            __RPC__in IInkPresenterDesktop * This,
                       __RPC__in_opt IInkCommitRequestHandler *handler);
        HRESULT ( STDMETHODCALLTYPE *GetSize )(
            __RPC__in IInkPresenterDesktop * This,
                        __RPC__out float *width,
                        __RPC__out float *height);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IInkPresenterDesktop * This,
                       float width,
                       float height);
        HRESULT ( STDMETHODCALLTYPE *OnHighContrastChanged )(
            __RPC__in IInkPresenterDesktop * This);
        END_INTERFACE
    } IInkPresenterDesktopVtbl;
    interface IInkPresenterDesktop
    {
        CONST_VTBL struct IInkPresenterDesktopVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRootVisual(This,rootVisual,device) )
    ( (This)->lpVtbl -> SetCommitRequestHandler(This,handler) )
    ( (This)->lpVtbl -> GetSize(This,width,height) )
    ( (This)->lpVtbl -> SetSize(This,width,height) )
    ( (This)->lpVtbl -> OnHighContrastChanged(This) )
EXTERN_C const IID IID_IInkHostWorkItem;
    typedef struct IInkHostWorkItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkHostWorkItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkHostWorkItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkHostWorkItem * This);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IInkHostWorkItem * This);
        END_INTERFACE
    } IInkHostWorkItemVtbl;
    interface IInkHostWorkItem
    {
        CONST_VTBL struct IInkHostWorkItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This) )
EXTERN_C const IID IID_IInkDesktopHost;
    typedef struct IInkDesktopHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkDesktopHost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkDesktopHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkDesktopHost * This);
        HRESULT ( STDMETHODCALLTYPE *QueueWorkItem )(
            __RPC__in IInkDesktopHost * This,
                       __RPC__in_opt IInkHostWorkItem *workItem);
        HRESULT ( STDMETHODCALLTYPE *CreateInkPresenter )(
            __RPC__in IInkDesktopHost * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateAndInitializeInkPresenter )(
            __RPC__in IInkDesktopHost * This,
                       __RPC__in_opt IUnknown *rootVisual,
                       float width,
                       float height,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IInkDesktopHostVtbl;
    interface IInkDesktopHost
    {
        CONST_VTBL struct IInkDesktopHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueueWorkItem(This,workItem) )
    ( (This)->lpVtbl -> CreateInkPresenter(This,riid,ppv) )
    ( (This)->lpVtbl -> CreateAndInitializeInkPresenter(This,rootVisual,width,height,riid,ppv) )
EXTERN_C const IID LIBID_InkDesktopHostLib;
EXTERN_C const CLSID CLSID_InkDesktopHost;
class DECLSPEC_UUID("062584a6-f830-4bdc-a4d2-0a10ab062b1d")
InkDesktopHost;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_inkpresenterdesktop_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_inkpresenterdesktop_0000_0005_v0_0_s_ifspec;
}
