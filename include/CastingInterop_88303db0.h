#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICastingEventHandler ICastingEventHandler;
typedef interface ICastingController ICastingController;
typedef interface ICastingSourceInfo ICastingSourceInfo;
#include "objidl.h"
#include "propsys.h"
#include "EventToken.h"
extern "C"{
extern const __declspec(selectany) WCHAR CastingSourceInfo_Property_PreferredSourceUriScheme[] = L"PreferredSourceUriScheme";
extern const __declspec(selectany) WCHAR CastingSourceInfo_Property_CastingTypes[] = L"CastingTypes";
extern const __declspec(selectany) WCHAR CastingSourceInfo_Property_ProtectedMedia[] = L"ProtectedMedia";
typedef
enum CASTING_CONNECTION_ERROR_STATUS
    {
        CASTING_CONNECTION_ERROR_STATUS_SUCCEEDED = 0,
        CASTING_CONNECTION_ERROR_STATUS_DEVICE_DID_NOT_RESPOND = 1,
        CASTING_CONNECTION_ERROR_STATUS_DEVICE_ERROR = 2,
        CASTING_CONNECTION_ERROR_STATUS_DEVICE_LOCKED = 3,
        CASTING_CONNECTION_ERROR_STATUS_PROTECTED_PLAYBACK_FAILED = 4,
        CASTING_CONNECTION_ERROR_STATUS_INVALID_CASTING_SOURCE = 5,
        CASTING_CONNECTION_ERROR_STATUS_UNKNOWN = 6
    } CASTING_CONNECTION_ERROR_STATUS;
typedef
enum CASTING_CONNECTION_STATE
    {
        CASTING_CONNECTION_STATE_DISCONNECTED = 0,
        CASTING_CONNECTION_STATE_CONNECTED = 1,
        CASTING_CONNECTION_STATE_RENDERING = 2,
        CASTING_CONNECTION_STATE_DISCONNECTING = 3,
        CASTING_CONNECTION_STATE_CONNECTING = 4
    } CASTING_CONNECTION_STATE;
extern RPC_IF_HANDLE __MIDL_itf_castinginterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_castinginterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICastingEventHandler;
    typedef struct ICastingEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICastingEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICastingEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICastingEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnStateChanged )(
            __RPC__in ICastingEventHandler * This,
                       CASTING_CONNECTION_STATE newState);
        HRESULT ( STDMETHODCALLTYPE *OnError )(
            __RPC__in ICastingEventHandler * This,
                       CASTING_CONNECTION_ERROR_STATUS errorStatus,
                       __RPC__in LPCWSTR errorMessage);
        END_INTERFACE
    } ICastingEventHandlerVtbl;
    interface ICastingEventHandler
    {
        CONST_VTBL struct ICastingEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStateChanged(This,newState) )
    ( (This)->lpVtbl -> OnError(This,errorStatus,errorMessage) )
EXTERN_C const IID IID_ICastingController;
    typedef struct ICastingControllerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICastingController * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICastingController * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICastingController * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICastingController * This,
                       __RPC__in_opt IUnknown *castingEngine,
                       __RPC__in_opt IUnknown *castingSource);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ICastingController * This);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in ICastingController * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in ICastingController * This,
                       __RPC__in_opt ICastingEventHandler *eventHandler,
                        __RPC__out DWORD *cookie);
        HRESULT ( STDMETHODCALLTYPE *UnAdvise )(
            __RPC__in ICastingController * This,
                       DWORD cookie);
        END_INTERFACE
    } ICastingControllerVtbl;
    interface ICastingController
    {
        CONST_VTBL struct ICastingControllerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,castingEngine,castingSource) )
    ( (This)->lpVtbl -> Connect(This) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> Advise(This,eventHandler,cookie) )
    ( (This)->lpVtbl -> UnAdvise(This,cookie) )
EXTERN_C const IID IID_ICastingSourceInfo;
    typedef struct ICastingSourceInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICastingSourceInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICastingSourceInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICastingSourceInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetController )(
            __RPC__in ICastingSourceInfo * This,
                        __RPC__deref_out_opt ICastingController **controller);
        HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in ICastingSourceInfo * This,
                        __RPC__deref_out_opt INamedPropertyStore **props);
        END_INTERFACE
    } ICastingSourceInfoVtbl;
    interface ICastingSourceInfo
    {
        CONST_VTBL struct ICastingSourceInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetController(This,controller) )
    ( (This)->lpVtbl -> GetProperties(This,props) )
extern RPC_IF_HANDLE __MIDL_itf_castinginterop_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_castinginterop_0000_0003_v0_0_s_ifspec;
}
