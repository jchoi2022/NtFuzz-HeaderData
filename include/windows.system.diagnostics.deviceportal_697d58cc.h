#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.ApplicationModel.AppService.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Web.Http.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * sender, __RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage;
typedef interface __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CDevicePortalConnectionClosedReason __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CDevicePortalConnectionClosedReason;
enum __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CDevicePortalConnectionClosedReason
{
    DevicePortalConnectionClosedReason_Unknown = 0,
    DevicePortalConnectionClosedReason_ResourceLimitsExceeded = 1,
    DevicePortalConnectionClosedReason_ProtocolError = 2,
    DevicePortalConnectionClosedReason_NotAuthorized = 3,
    DevicePortalConnectionClosedReason_UserNotPresent = 4,
    DevicePortalConnectionClosedReason_ServiceTerminated = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnection[] = L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnection";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionClosedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RequestReceived )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnection_Windows__CSystem__CDiagnostics__CDevicePortal__CDevicePortalConnectionRequestReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RequestReceived )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Closed(This,handler,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->add_RequestReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_RequestReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionClosedEventArgs[] = L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnectionClosedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CDevicePortalConnectionClosedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionRequestReceivedEventArgs[] = L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnectionRequestReceivedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestMessage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResponseMessage )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpResponseMessage * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestMessage(This,value) )
    ( (This)->lpVtbl->get_ResponseMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionRequestReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_DevicePortal_IDevicePortalConnectionStatics[] = L"Windows.System.Diagnostics.DevicePortal.IDevicePortalConnectionStatics";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForAppServiceConnection )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * appServiceConnection,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForAppServiceConnection(This,appServiceConnection,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalConnectionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnection[] = L"Windows.System.Diagnostics.DevicePortal.IDevicePortalWebSocketConnection";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetServerMessageWebSocketForRequest )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetServerMessageWebSocketForRequest2 )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType messageType,
                  __RPC__in HSTRING protocol,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetServerMessageWebSocketForRequest3 )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType messageType,
                  __RPC__in HSTRING protocol,
                  UINT32 outboundBufferSizeInBytes,
                  UINT32 maxMessageSize,
                  __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode receiveMode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetServerStreamWebSocketForRequest )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *GetServerStreamWebSocketForRequest2 )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CHttp_CIHttpRequestMessage * request,
                  __RPC__in HSTRING protocol,
                  UINT32 outboundBufferSizeInBytes,
                  boolean noDelay,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetServerMessageWebSocketForRequest(This,request,result) )
    ( (This)->lpVtbl->GetServerMessageWebSocketForRequest2(This,request,messageType,protocol,result) )
    ( (This)->lpVtbl->GetServerMessageWebSocketForRequest3(This,request,messageType,protocol,outboundBufferSizeInBytes,maxMessageSize,receiveMode,result) )
    ( (This)->lpVtbl->GetServerStreamWebSocketForRequest(This,request,result) )
    ( (This)->lpVtbl->GetServerStreamWebSocketForRequest2(This,request,protocol,outboundBufferSizeInBytes,noDelay,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_DevicePortal_IDevicePortalWebSocketConnectionRequestReceivedEventArgs[] = L"Windows.System.Diagnostics.DevicePortal.IDevicePortalWebSocketConnectionRequestReceivedEventArgs";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsWebSocketUpgradeRequest )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WebSocketProtocolsRequested )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsWebSocketUpgradeRequest(This,value) )
    ( (This)->lpVtbl->get_WebSocketProtocolsRequested(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CDevicePortal_CIDevicePortalWebSocketConnectionRequestReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DevicePortal_DevicePortalConnection[] = L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DevicePortal_DevicePortalConnectionClosedEventArgs[] = L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_DevicePortal_DevicePortalConnectionRequestReceivedEventArgs[] = L"Windows.System.Diagnostics.DevicePortal.DevicePortalConnectionRequestReceivedEventArgs";
       
       
#pragma clang diagnostic pop
