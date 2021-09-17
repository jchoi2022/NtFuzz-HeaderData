#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface INotificationActivationCallback INotificationActivationCallback;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct NOTIFICATION_USER_INPUT_DATA
    {
    LPCWSTR Key;
    LPCWSTR Value;
    } NOTIFICATION_USER_INPUT_DATA;
extern RPC_IF_HANDLE __MIDL_itf_notificationactivationcallback_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_notificationactivationcallback_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_INotificationActivationCallback;
    typedef struct INotificationActivationCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INotificationActivationCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INotificationActivationCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INotificationActivationCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in INotificationActivationCallback * This,
                               __RPC__in_string LPCWSTR appUserModelId,
                                       __RPC__in_opt_string LPCWSTR invokedArgs,
                                        __RPC__in_ecount_full_opt(count) const NOTIFICATION_USER_INPUT_DATA *data,
                       ULONG count);
        END_INTERFACE
    } INotificationActivationCallbackVtbl;
    interface INotificationActivationCallback
    {
        CONST_VTBL struct INotificationActivationCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,appUserModelId,invokedArgs,data,count) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_notificationactivationcallback_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_notificationactivationcallback_0000_0001_v0_0_s_ifspec;
}
