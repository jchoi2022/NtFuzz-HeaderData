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
#include "Windows.ApplicationModel.Background.h"
#include "Windows.Networking.h"
#include "Windows.Networking.Connectivity.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2;
typedef interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation;
typedef struct __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl;
interface __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocketVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CSockets__CStreamSocket **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket * This, __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocket
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CSockets__CStreamSocketVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIOutputStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CNetworking_CIEndpointPair __x_ABI_CWindows_CNetworking_CIEndpointPair;
typedef interface __FIIterator_1_Windows__CNetworking__CEndpointPair __FIIterator_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CEndpointPair * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIIterator_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CEndpointPair __FIIterable_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CEndpointPair **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIIterable_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CEndpointPair __FIVectorView_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CIEndpointPair * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                       __x_ABI_CWindows_CNetworking_CIEndpointPair * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIEndpointPair * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CEndpointPair **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CEndpointPair * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPairVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FIAsyncOperationProgressHandler_2_UINT32_UINT32 __FIAsyncOperationProgressHandler_2_UINT32_UINT32;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_UINT32_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;
typedef struct __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_UINT32_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 *asyncInfo, unsigned int progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl;
interface __FIAsyncOperationProgressHandler_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_UINT32_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32;
typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_UINT32_UINT32 __FIAsyncOperationWithProgress_2_UINT32_UINT32;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_UINT32_UINT32;
typedef struct __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_UINT32_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_UINT32_UINT32 **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_UINT32_UINT32 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_UINT32_UINT32 * This, __RPC__deref_out_opt unsigned int *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl;
interface __FIAsyncOperationWithProgress_2_UINT32_UINT32
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_UINT32_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
EXTERN_C const IID IID___FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult;
typedef struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int index,
                            __RPC__deref_out_opt enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int index,
                   __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This, __RPC__in enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult *value);
    END_INTERFACE
} __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl;
interface __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult
{
    CONST_VTBL struct __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
typedef interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIIterable_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate;
typedef struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                       __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl;
interface __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificateVtbl *lpVtbl;
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTask;
typedef interface __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter;
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef enum __x_ABI_CWindows_CNetworking_CHostNameSortOptions __x_ABI_CWindows_CNetworking_CHostNameSortOptions;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CChainValidationResult;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIDataReader __x_ABI_CWindows_CStorage_CStreams_CIDataReader;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef enum __x_ABI_CWindows_CWeb_CWebErrorStatus __x_ABI_CWindows_CWeb_CWebErrorStatus;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity;
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics;
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics;
enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason
{
    ControlChannelTriggerResetReason_FastUserSwitched = 0,
    ControlChannelTriggerResetReason_LowPowerExit = 1,
    ControlChannelTriggerResetReason_QuietHoursExit = 2,
    ControlChannelTriggerResetReason_ApplicationRestart = 3,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType
{
    ControlChannelTriggerResourceType_RequestSoftwareSlot = 0,
    ControlChannelTriggerResourceType_RequestHardwareSlot = 1,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus
{
    ControlChannelTriggerStatus_HardwareSlotRequested = 0,
    ControlChannelTriggerStatus_SoftwareSlotAllocated = 1,
    ControlChannelTriggerStatus_HardwareSlotAllocated = 2,
    ControlChannelTriggerStatus_PolicyError = 3,
    ControlChannelTriggerStatus_SystemError = 4,
    ControlChannelTriggerStatus_TransportDisconnected = 5,
    ControlChannelTriggerStatus_ServiceUnavailable = 6,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode
{
    MessageWebSocketReceiveMode_FullMessage = 0,
    MessageWebSocketReceiveMode_PartialMessage = 1,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction
{
    SocketActivityConnectedStandbyAction_DoNotWake = 0,
    SocketActivityConnectedStandbyAction_Wake = 1,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind
{
    SocketActivityKind_None = 0,
    SocketActivityKind_StreamSocketListener = 1,
    SocketActivityKind_DatagramSocket = 2,
    SocketActivityKind_StreamSocket = 3,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason
{
    SocketActivityTriggerReason_None = 0,
    SocketActivityTriggerReason_SocketActivity = 1,
    SocketActivityTriggerReason_ConnectionAccepted = 2,
    SocketActivityTriggerReason_KeepAliveTimerExpired = 3,
    SocketActivityTriggerReason_SocketClosed = 4,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus
{
    SocketErrorStatus_Unknown = 0,
    SocketErrorStatus_OperationAborted = 1,
    SocketErrorStatus_HttpInvalidServerResponse = 2,
    SocketErrorStatus_ConnectionTimedOut = 3,
    SocketErrorStatus_AddressFamilyNotSupported = 4,
    SocketErrorStatus_SocketTypeNotSupported = 5,
    SocketErrorStatus_HostNotFound = 6,
    SocketErrorStatus_NoDataRecordOfRequestedType = 7,
    SocketErrorStatus_NonAuthoritativeHostNotFound = 8,
    SocketErrorStatus_ClassTypeNotFound = 9,
    SocketErrorStatus_AddressAlreadyInUse = 10,
    SocketErrorStatus_CannotAssignRequestedAddress = 11,
    SocketErrorStatus_ConnectionRefused = 12,
    SocketErrorStatus_NetworkIsUnreachable = 13,
    SocketErrorStatus_UnreachableHost = 14,
    SocketErrorStatus_NetworkIsDown = 15,
    SocketErrorStatus_NetworkDroppedConnectionOnReset = 16,
    SocketErrorStatus_SoftwareCausedConnectionAbort = 17,
    SocketErrorStatus_ConnectionResetByPeer = 18,
    SocketErrorStatus_HostIsDown = 19,
    SocketErrorStatus_NoAddressesFound = 20,
    SocketErrorStatus_TooManyOpenFiles = 21,
    SocketErrorStatus_MessageTooLong = 22,
    SocketErrorStatus_CertificateExpired = 23,
    SocketErrorStatus_CertificateUntrustedRoot = 24,
    SocketErrorStatus_CertificateCommonNameIsIncorrect = 25,
    SocketErrorStatus_CertificateWrongUsage = 26,
    SocketErrorStatus_CertificateRevoked = 27,
    SocketErrorStatus_CertificateNoRevocationCheck = 28,
    SocketErrorStatus_CertificateRevocationServerOffline = 29,
    SocketErrorStatus_CertificateIsInvalid = 30,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType
{
    SocketMessageType_Binary = 0,
    SocketMessageType_Utf8 = 1,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel
{
    SocketProtectionLevel_PlainSocket = 0,
    SocketProtectionLevel_Ssl
    DEPRECATEDENUMERATOR("Ssl may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")
     = 1,
    SocketProtectionLevel_SslAllowNullEncryption = 2,
    SocketProtectionLevel_BluetoothEncryptionAllowNullAuthentication = 3,
    SocketProtectionLevel_BluetoothEncryptionWithAuthentication = 4,
    SocketProtectionLevel_Ssl3AllowWeakEncryption
    DEPRECATEDENUMERATOR("Ssl3AllowWeakEncryption may result in insecure connections and may be altered or unavailable for releases after Windows 8.1. Instead, use one of the TLS SocketProtectionLevel values.")
     = 5,
    SocketProtectionLevel_Tls10 = 6,
    SocketProtectionLevel_Tls11 = 7,
    SocketProtectionLevel_Tls12 = 8,
    SocketProtectionLevel_Unspecified = 9,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService
{
    SocketQualityOfService_Normal = 0,
    SocketQualityOfService_LowLatency = 1,
};
enum __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity
{
    SocketSslErrorSeverity_None = 0,
    SocketSslErrorSeverity_Ignorable = 1,
    SocketSslErrorSeverity_Fatal = 2,
};
struct __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics
{
    UINT64 OutboundBitsPerSecond;
    UINT64 InboundBitsPerSecond;
    UINT64 OutboundBitsPerSecondInstability;
    UINT64 InboundBitsPerSecondInstability;
    boolean OutboundBandwidthPeaked;
    boolean InboundBandwidthPeaked;
};
struct __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics
{
    UINT32 Variance;
    UINT32 Max;
    UINT32 Min;
    UINT32 Sum;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTrigger[] = L"Windows.Networking.Sockets.IControlChannelTrigger";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ControlChannelTriggerId )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerKeepAliveIntervalInMinutes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServerKeepAliveIntervalInMinutes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentKeepAliveIntervalInMinutes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportObject )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeepAliveTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * trigger
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PushNotificationTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CBackground_CIBackgroundTrigger * * trigger
        );
    HRESULT ( STDMETHODCALLTYPE *UsingTransport )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                  __RPC__in_opt IInspectable * transport
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForPushEnabled )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus * channelTriggerStatus
        );
    HRESULT ( STDMETHODCALLTYPE *DecreaseNetworkKeepAliveInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
        );
    HRESULT ( STDMETHODCALLTYPE *FlushTransport )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ControlChannelTriggerId(This,value) )
    ( (This)->lpVtbl->get_ServerKeepAliveIntervalInMinutes(This,value) )
    ( (This)->lpVtbl->put_ServerKeepAliveIntervalInMinutes(This,value) )
    ( (This)->lpVtbl->get_CurrentKeepAliveIntervalInMinutes(This,value) )
    ( (This)->lpVtbl->get_TransportObject(This,value) )
    ( (This)->lpVtbl->get_KeepAliveTrigger(This,trigger) )
    ( (This)->lpVtbl->get_PushNotificationTrigger(This,trigger) )
    ( (This)->lpVtbl->UsingTransport(This,transport) )
    ( (This)->lpVtbl->WaitForPushEnabled(This,channelTriggerStatus) )
    ( (This)->lpVtbl->DecreaseNetworkKeepAliveInterval(This) )
    ( (This)->lpVtbl->FlushTransport(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTrigger2[] = L"Windows.Networking.Sockets.IControlChannelTrigger2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsWakeFromLowPowerSupported )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsWakeFromLowPowerSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerEventDetails[] = L"Windows.Networking.Sockets.IControlChannelTriggerEventDetails";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ControlChannelTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ControlChannelTrigger(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerEventDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerFactory[] = L"Windows.Networking.Sockets.IControlChannelTriggerFactory";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateControlChannelTrigger )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
                  __RPC__in HSTRING channelId,
                  UINT32 serverKeepAliveIntervalInMinutes,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * * notificationChannel
        );
    HRESULT ( STDMETHODCALLTYPE *CreateControlChannelTriggerEx )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory * This,
                  __RPC__in HSTRING channelId,
                  UINT32 serverKeepAliveIntervalInMinutes,
                  __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResourceType resourceRequestType,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTrigger * * notificationChannel
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateControlChannelTrigger(This,channelId,serverKeepAliveIntervalInMinutes,notificationChannel) )
    ( (This)->lpVtbl->CreateControlChannelTriggerEx(This,channelId,serverKeepAliveIntervalInMinutes,resourceRequestType,notificationChannel) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IControlChannelTriggerResetEventDetails[] = L"Windows.Networking.Sockets.IControlChannelTriggerResetEventDetails";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResetReason )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerResetReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HardwareSlotReset )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoftwareSlotReset )(
        __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResetReason(This,value) )
    ( (This)->lpVtbl->get_HardwareSlotReset(This,value) )
    ( (This)->lpVtbl->get_SoftwareSlotReset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIControlChannelTriggerResetEventDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket[] = L"Windows.Networking.Sockets.IDatagramSocket";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectWithEndpointPairAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *BindServiceNameAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in HSTRING localServiceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *BindEndpointAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * localHostName,
                  __RPC__in HSTRING localServiceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *JoinMulticastGroup )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * host
        );
                    HRESULT ( STDMETHODCALLTYPE *GetOutputStreamAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetOutputStreamWithEndpointPairAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIOutputStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CDatagramSocket_Windows__CNetworking__CSockets__CDatagramSocketMessageReceivedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Control(This,value) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
    ( (This)->lpVtbl->ConnectAsync(This,remoteHostName,remoteServiceName,operation) )
    ( (This)->lpVtbl->ConnectWithEndpointPairAsync(This,endpointPair,operation) )
    ( (This)->lpVtbl->BindServiceNameAsync(This,localServiceName,operation) )
    ( (This)->lpVtbl->BindEndpointAsync(This,localHostName,localServiceName,operation) )
    ( (This)->lpVtbl->JoinMulticastGroup(This,host) )
    ( (This)->lpVtbl->GetOutputStreamAsync(This,remoteHostName,remoteServiceName,value) )
    ( (This)->lpVtbl->GetOutputStreamWithEndpointPairAsync(This,endpointPair,value) )
    ( (This)->lpVtbl->add_MessageReceived(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_MessageReceived(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket2[] = L"Windows.Networking.Sockets.IDatagramSocket2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *BindServiceNameAndAdapterAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2 * This,
                  __RPC__in HSTRING localServiceName,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BindServiceNameAndAdapterAsync(This,localServiceName,adapter,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocket3[] = L"Windows.Networking.Sockets.IDatagramSocket3";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CancelIOAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                  GUID taskId
        );
                    HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnershipWithConnectedStandbyAction )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                  GUID taskId,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction connectedStandbyAction
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                  __RPC__in HSTRING socketId
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContext )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                  __RPC__in HSTRING socketId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContextAndKeepAliveTime )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3 * This,
                  __RPC__in HSTRING socketId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data,
                  __x_ABI_CWindows_CFoundation_CTimeSpan keepAliveTime
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CancelIOAsync(This,operation) )
    ( (This)->lpVtbl->EnableTransferOwnership(This,taskId) )
    ( (This)->lpVtbl->EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) )
    ( (This)->lpVtbl->TransferOwnership(This,socketId) )
    ( (This)->lpVtbl->TransferOwnershipWithContext(This,socketId,data) )
    ( (This)->lpVtbl->TransferOwnershipWithContextAndKeepAliveTime(This,socketId,data,keepAliveTime) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl[] = L"Windows.Networking.Sockets.IDatagramSocketControl";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl * This,
                  BYTE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControlVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_QualityOfService(This,value) )
    ( (This)->lpVtbl->put_QualityOfService(This,value) )
    ( (This)->lpVtbl->get_OutboundUnicastHopLimit(This,value) )
    ( (This)->lpVtbl->put_OutboundUnicastHopLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl2[] = L"Windows.Networking.Sockets.IDatagramSocketControl2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DontFragment )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DontFragment )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->put_InboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_DontFragment(This,value) )
    ( (This)->lpVtbl->put_DontFragment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketControl3[] = L"Windows.Networking.Sockets.IDatagramSocketControl3";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MulticastOnly )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MulticastOnly )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MulticastOnly(This,value) )
    ( (This)->lpVtbl->put_MulticastOnly(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketControl3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketInformation[] = L"Windows.Networking.Sockets.IDatagramSocketInformation";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemotePort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalAddress(This,value) )
    ( (This)->lpVtbl->get_LocalPort(This,value) )
    ( (This)->lpVtbl->get_RemoteAddress(This,value) )
    ( (This)->lpVtbl->get_RemotePort(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.IDatagramSocketMessageReceivedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemotePort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataReader )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIDataReader * * dataReader
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * inputStream
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemoteAddress(This,value) )
    ( (This)->lpVtbl->get_RemotePort(This,value) )
    ( (This)->lpVtbl->get_LocalAddress(This,value) )
    ( (This)->lpVtbl->GetDataReader(This,dataReader) )
    ( (This)->lpVtbl->GetDataStream(This,inputStream) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketMessageReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IDatagramSocketStatics[] = L"Windows.Networking.Sockets.IDatagramSocketStatics";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsWithSortOptionsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                  __x_ABI_CWindows_CNetworking_CHostNameSortOptions sortOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetEndpointPairsAsync(This,remoteHostName,remoteServiceName,operation) )
    ( (This)->lpVtbl->GetEndpointPairsWithSortOptionsAsync(This,remoteHostName,remoteServiceName,sortOptions,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocketStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocket[] = L"Windows.Networking.Sockets.IMessageWebSocket";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Control(This,value) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->add_MessageReceived(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_MessageReceived(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocket2[] = L"Windows.Networking.Sockets.IMessageWebSocket2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2 * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ServerCustomValidationRequested(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_ServerCustomValidationRequested(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocket3[] = L"Windows.Networking.Sockets.IMessageWebSocket3";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SendNonfinalFrameAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SendFinalFrameAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SendNonfinalFrameAsync(This,data,operation) )
    ( (This)->lpVtbl->SendFinalFrameAsync(This,data,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocket3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketControl[] = L"Windows.Networking.Sockets.IMessageWebSocketControl";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxMessageSize )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxMessageSize )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControlVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxMessageSize(This,value) )
    ( (This)->lpVtbl->put_MaxMessageSize(This,value) )
    ( (This)->lpVtbl->get_MessageType(This,value) )
    ( (This)->lpVtbl->put_MessageType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketControl2[] = L"Windows.Networking.Sockets.IMessageWebSocketControl2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ReceiveMode )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ReceiveMode )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CMessageWebSocketReceiveMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredUnsolicitedPongInterval(This,value) )
    ( (This)->lpVtbl->put_DesiredUnsolicitedPongInterval(This,value) )
    ( (This)->lpVtbl->get_ActualUnsolicitedPongInterval(This,value) )
    ( (This)->lpVtbl->get_ReceiveMode(This,value) )
    ( (This)->lpVtbl->put_ReceiveMode(This,value) )
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataReader )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIDataReader * * dataReader
        );
    HRESULT ( STDMETHODCALLTYPE *GetDataStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * inputStream
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MessageType(This,value) )
    ( (This)->lpVtbl->GetDataReader(This,dataReader) )
    ( (This)->lpVtbl->GetDataStream(This,inputStream) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IMessageWebSocketMessageReceivedEventArgs2[] = L"Windows.Networking.Sockets.IMessageWebSocketMessageReceivedEventArgs2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsMessageComplete )(
        __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsMessageComplete(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIMessageWebSocketMessageReceivedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IServerMessageWebSocket[] = L"Windows.Networking.Sockets.IServerMessageWebSocket";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CMessageWebSocketMessageReceivedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MessageReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerMessageWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *CloseWithStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket * This,
                  UINT16 code,
                  __RPC__in HSTRING reason
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_MessageReceived(This,value,token) )
    ( (This)->lpVtbl->remove_MessageReceived(This,token) )
    ( (This)->lpVtbl->get_Control(This,value) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
    ( (This)->lpVtbl->add_Closed(This,value,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->CloseWithStatus(This,code,reason) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IServerMessageWebSocketControl[] = L"Windows.Networking.Sockets.IServerMessageWebSocketControl";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MessageType )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketMessageType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControlVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MessageType(This,value) )
    ( (This)->lpVtbl->put_MessageType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IServerMessageWebSocketInformation[] = L"Windows.Networking.Sockets.IServerMessageWebSocketInformation";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BandwidthStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BandwidthStatistics(This,value) )
    ( (This)->lpVtbl->get_Protocol(This,value) )
    ( (This)->lpVtbl->get_LocalAddress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIServerMessageWebSocketInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IServerStreamWebSocket[] = L"Windows.Networking.Sockets.IServerStreamWebSocket";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CServerStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *CloseWithStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket * This,
                  UINT16 code,
                  __RPC__in HSTRING reason
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->get_InputStream(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
    ( (This)->lpVtbl->add_Closed(This,value,token) )
    ( (This)->lpVtbl->remove_Closed(This,token) )
    ( (This)->lpVtbl->CloseWithStatus(This,code,reason) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IServerStreamWebSocketInformation[] = L"Windows.Networking.Sockets.IServerStreamWebSocketInformation";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BandwidthStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BandwidthStatistics(This,value) )
    ( (This)->lpVtbl->get_Protocol(This,value) )
    ( (This)->lpVtbl->get_LocalAddress(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIServerStreamWebSocketInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityContext[] = L"Windows.Networking.Sockets.ISocketActivityContext";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityContextFactory[] = L"Windows.Networking.Sockets.ISocketActivityContextFactory";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * data,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * * context
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,data,context) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContextFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityInformation[] = L"Windows.Networking.Sockets.ISocketActivityInformation";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TaskId )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SocketKind )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Context )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DatagramSocket )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIDatagramSocket * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamSocket )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StreamSocketListener )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TaskId(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_SocketKind(This,value) )
    ( (This)->lpVtbl->get_Context(This,value) )
    ( (This)->lpVtbl->get_DatagramSocket(This,value) )
    ( (This)->lpVtbl->get_StreamSocket(This,value) )
    ( (This)->lpVtbl->get_StreamSocketListener(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityInformationStatics[] = L"Windows.Networking.Sockets.ISocketActivityInformationStatics";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AllSockets )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CNetworking__CSockets__CSocketActivityInformation * * sockets
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AllSockets(This,sockets) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketActivityTriggerDetails[] = L"Windows.Networking.Sockets.ISocketActivityTriggerDetails";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityTriggerReason * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SocketInformation )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityInformation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetailsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
    ( (This)->lpVtbl->get_SocketInformation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketActivityTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_ISocketErrorStatics[] = L"Windows.Networking.Sockets.ISocketErrorStatics";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics * This,
                  INT32 hresult,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketErrorStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CISocketErrorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket[] = L"Windows.Networking.Sockets.IStreamSocket";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectWithEndpointPairAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                                      HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectWithEndpointPairAndProtectionLevelAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIEndpointPair * endpointPair,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ConnectWithProtectionLevelAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpgradeToSslAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * validationHostName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Control(This,value) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->get_InputStream(This,value) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
    ( (This)->lpVtbl->ConnectWithEndpointPairAsync(This,endpointPair,operation) )
    ( (This)->lpVtbl->ConnectAsync(This,remoteHostName,remoteServiceName,operation) )
    ( (This)->lpVtbl->ConnectWithEndpointPairAndProtectionLevelAsync(This,endpointPair,protectionLevel,operation) )
    ( (This)->lpVtbl->ConnectWithProtectionLevelAsync(This,remoteHostName,remoteServiceName,protectionLevel,operation) )
    ( (This)->lpVtbl->UpgradeToSslAsync(This,protectionLevel,validationHostName,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket2[] = L"Windows.Networking.Sockets.IStreamSocket2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ConnectWithProtectionLevelAndAdapterAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConnectWithProtectionLevelAndAdapterAsync(This,remoteHostName,remoteServiceName,protectionLevel,adapter,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocket3[] = L"Windows.Networking.Sockets.IStreamSocket3";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CancelIOAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                  GUID taskId
        );
                    HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnershipWithConnectedStandbyAction )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                  GUID taskId,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction connectedStandbyAction
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                  __RPC__in HSTRING socketId
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContext )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                  __RPC__in HSTRING socketId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContextAndKeepAliveTime )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3 * This,
                  __RPC__in HSTRING socketId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data,
                  __x_ABI_CWindows_CFoundation_CTimeSpan keepAliveTime
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CancelIOAsync(This,operation) )
    ( (This)->lpVtbl->EnableTransferOwnership(This,taskId) )
    ( (This)->lpVtbl->EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) )
    ( (This)->lpVtbl->TransferOwnership(This,socketId) )
    ( (This)->lpVtbl->TransferOwnershipWithContext(This,socketId,data) )
    ( (This)->lpVtbl->TransferOwnershipWithContextAndKeepAliveTime(This,socketId,data,keepAliveTime) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl[] = L"Windows.Networking.Sockets.IStreamSocketControl";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl * This,
                  BYTE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControlVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NoDelay(This,value) )
    ( (This)->lpVtbl->put_NoDelay(This,value) )
    ( (This)->lpVtbl->get_KeepAlive(This,value) )
    ( (This)->lpVtbl->put_KeepAlive(This,value) )
    ( (This)->lpVtbl->get_OutboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->put_OutboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_QualityOfService(This,value) )
    ( (This)->lpVtbl->put_QualityOfService(This,value) )
    ( (This)->lpVtbl->get_OutboundUnicastHopLimit(This,value) )
    ( (This)->lpVtbl->put_OutboundUnicastHopLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl2[] = L"Windows.Networking.Sockets.IStreamSocketControl2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IgnorableServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IgnorableServerCertificateErrors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl3[] = L"Windows.Networking.Sockets.IStreamSocketControl3";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SerializeConnectionAttempts )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SerializeConnectionAttempts )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SerializeConnectionAttempts(This,value) )
    ( (This)->lpVtbl->put_SerializeConnectionAttempts(This,value) )
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketControl4[] = L"Windows.Networking.Sockets.IStreamSocketControl4";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MinProtectionLevel )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinProtectionLevel )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4 * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MinProtectionLevel(This,value) )
    ( (This)->lpVtbl->put_MinProtectionLevel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketControl4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketInformation[] = L"Windows.Networking.Sockets.IStreamSocketInformation";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteHostName )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteServiceName )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemotePort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoundTripTimeStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CRoundTripTimeStatistics * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BandwidthStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProtectionLevel )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SessionKey )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalAddress(This,value) )
    ( (This)->lpVtbl->get_LocalPort(This,value) )
    ( (This)->lpVtbl->get_RemoteHostName(This,value) )
    ( (This)->lpVtbl->get_RemoteAddress(This,value) )
    ( (This)->lpVtbl->get_RemoteServiceName(This,value) )
    ( (This)->lpVtbl->get_RemotePort(This,value) )
    ( (This)->lpVtbl->get_RoundTripTimeStatistics(This,value) )
    ( (This)->lpVtbl->get_BandwidthStatistics(This,value) )
    ( (This)->lpVtbl->get_ProtectionLevel(This,value) )
    ( (This)->lpVtbl->get_SessionKey(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketInformation2[] = L"Windows.Networking.Sockets.IStreamSocketInformation2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketInformation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener[] = L"Windows.Networking.Sockets.IStreamSocketListener";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *BindServiceNameAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                  __RPC__in HSTRING localServiceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *BindEndpointAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * localHostName,
                  __RPC__in HSTRING localServiceName,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ConnectionReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamSocketListener_Windows__CNetworking__CSockets__CStreamSocketListenerConnectionReceivedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ConnectionReceived )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Control(This,value) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->BindServiceNameAsync(This,localServiceName,operation) )
    ( (This)->lpVtbl->BindEndpointAsync(This,localHostName,localServiceName,operation) )
    ( (This)->lpVtbl->add_ConnectionReceived(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_ConnectionReceived(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener2[] = L"Windows.Networking.Sockets.IStreamSocketListener2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *BindServiceNameWithProtectionLevelAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
                  __RPC__in HSTRING localServiceName,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *BindServiceNameWithProtectionLevelAndAdapterAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2 * This,
                  __RPC__in HSTRING localServiceName,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketProtectionLevel protectionLevel,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CConnectivity_CINetworkAdapter * adapter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BindServiceNameWithProtectionLevelAsync(This,localServiceName,protectionLevel,operation) )
    ( (This)->lpVtbl->BindServiceNameWithProtectionLevelAndAdapterAsync(This,localServiceName,protectionLevel,adapter,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListener3[] = L"Windows.Networking.Sockets.IStreamSocketListener3";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CancelIOAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                  GUID taskId
        );
                    HRESULT ( STDMETHODCALLTYPE *EnableTransferOwnershipWithConnectedStandbyAction )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                  GUID taskId,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketActivityConnectedStandbyAction connectedStandbyAction
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnership )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                  __RPC__in HSTRING socketId
        );
                    HRESULT ( STDMETHODCALLTYPE *TransferOwnershipWithContext )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3 * This,
                  __RPC__in HSTRING socketId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CSockets_CISocketActivityContext * data
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CancelIOAsync(This,operation) )
    ( (This)->lpVtbl->EnableTransferOwnership(This,taskId) )
    ( (This)->lpVtbl->EnableTransferOwnershipWithConnectedStandbyAction(This,taskId,connectedStandbyAction) )
    ( (This)->lpVtbl->TransferOwnership(This,socketId) )
    ( (This)->lpVtbl->TransferOwnershipWithContext(This,socketId,data) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListener3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerConnectionReceivedEventArgs[] = L"Windows.Networking.Sockets.IStreamSocketListenerConnectionReceivedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Socket )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocket * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Socket(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerConnectionReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerControl[] = L"Windows.Networking.Sockets.IStreamSocketListenerControl";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_QualityOfService )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl * This,
                  __x_ABI_CWindows_CNetworking_CSockets_CSocketQualityOfService value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControlVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_QualityOfService(This,value) )
    ( (This)->lpVtbl->put_QualityOfService(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerControl2[] = L"Windows.Networking.Sockets.IStreamSocketListenerControl2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_KeepAlive )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                           __RPC__out BYTE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutboundUnicastHopLimit )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2 * This,
                  BYTE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NoDelay(This,value) )
    ( (This)->lpVtbl->put_NoDelay(This,value) )
    ( (This)->lpVtbl->get_KeepAlive(This,value) )
    ( (This)->lpVtbl->put_KeepAlive(This,value) )
    ( (This)->lpVtbl->get_OutboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->put_OutboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_OutboundUnicastHopLimit(This,value) )
    ( (This)->lpVtbl->put_OutboundUnicastHopLimit(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketListenerInformation[] = L"Windows.Networking.Sockets.IStreamSocketListenerInformation";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalPort(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketListenerInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamSocketStatics[] = L"Windows.Networking.Sockets.IStreamSocketStatics";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *GetEndpointPairsWithSortOptionsAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * remoteHostName,
                  __RPC__in HSTRING remoteServiceName,
                  __x_ABI_CWindows_CNetworking_CHostNameSortOptions sortOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CEndpointPair * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetEndpointPairsAsync(This,remoteHostName,remoteServiceName,operation) )
    ( (This)->lpVtbl->GetEndpointPairsWithSortOptionsAsync(This,remoteHostName,remoteServiceName,sortOptions,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamSocketStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocket[] = L"Windows.Networking.Sockets.IStreamWebSocket";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Control )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Information )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Control(This,value) )
    ( (This)->lpVtbl->get_Information(This,value) )
    ( (This)->lpVtbl->get_InputStream(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocket2[] = L"Windows.Networking.Sockets.IStreamWebSocket2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CStreamWebSocket_Windows__CNetworking__CSockets__CWebSocketServerCustomValidationRequestedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ServerCustomValidationRequested )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2 * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ServerCustomValidationRequested(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_ServerCustomValidationRequested(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocket2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocketControl[] = L"Windows.Networking.Sockets.IStreamWebSocketControl";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NoDelay )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControlVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NoDelay(This,value) )
    ( (This)->lpVtbl->put_NoDelay(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IStreamWebSocketControl2[] = L"Windows.Networking.Sockets.IStreamWebSocketControl2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActualUnsolicitedPongInterval )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClientCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredUnsolicitedPongInterval(This,value) )
    ( (This)->lpVtbl->put_DesiredUnsolicitedPongInterval(This,value) )
    ( (This)->lpVtbl->get_ActualUnsolicitedPongInterval(This,value) )
    ( (This)->lpVtbl->get_ClientCertificate(This,value) )
    ( (This)->lpVtbl->put_ClientCertificate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIStreamWebSocketControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocket[] = L"Windows.Networking.Sockets.IWebSocket";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OutputStream )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectAsync )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetRequestHeader )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                  __RPC__in HSTRING headerName,
                  __RPC__in HSTRING headerValue
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CSockets__CIWebSocket_Windows__CNetworking__CSockets__CWebSocketClosedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *CloseWithStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket * This,
                  UINT16 code,
                  __RPC__in HSTRING reason
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocket
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OutputStream(This,value) )
    ( (This)->lpVtbl->ConnectAsync(This,uri,operation) )
    ( (This)->lpVtbl->SetRequestHeader(This,headerName,headerValue) )
    ( (This)->lpVtbl->add_Closed(This,eventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_Closed(This,eventCookie) )
    ( (This)->lpVtbl->CloseWithStatus(This,code,reason) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocket;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketClosedEventArgs[] = L"Windows.Networking.Sockets.IWebSocketClosedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Code )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Code(This,value) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketClosedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketControl[] = L"Windows.Networking.Sockets.IWebSocketControl";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutboundBufferSizeInBytes )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedProtocols )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControlVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OutboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->put_OutboundBufferSizeInBytes(This,value) )
    ( (This)->lpVtbl->get_ServerCredential(This,value) )
    ( (This)->lpVtbl->put_ServerCredential(This,value) )
    ( (This)->lpVtbl->get_ProxyCredential(This,value) )
    ( (This)->lpVtbl->put_ProxyCredential(This,value) )
    ( (This)->lpVtbl->get_SupportedProtocols(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketControl2[] = L"Windows.Networking.Sockets.IWebSocketControl2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IgnorableServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IgnorableServerCertificateErrors(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketControl2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketErrorStatics[] = L"Windows.Networking.Sockets.IWebSocketErrorStatics";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics * This,
                  INT32 hresult,
                           __RPC__out __x_ABI_CWindows_CWeb_CWebErrorStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketErrorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketInformation[] = L"Windows.Networking.Sockets.IWebSocketInformation";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalAddress )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BandwidthStatistics )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CBandwidthStatistics * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformationVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalAddress(This,value) )
    ( (This)->lpVtbl->get_BandwidthStatistics(This,value) )
    ( (This)->lpVtbl->get_Protocol(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketInformation2[] = L"Windows.Networking.Sockets.IWebSocketInformation2";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2Vtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketInformation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Sockets_IWebSocketServerCustomValidationRequestedEventArgs[] = L"Windows.Networking.Sockets.IWebSocketServerCustomValidationRequestedEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerCertificate )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrorSeverity )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CSocketSslErrorSeverity * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerCertificateErrors )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CChainValidationResult * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerIntermediateCertificates )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSecurity__CCryptography__CCertificates__CCertificate * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Reject )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerCertificate(This,value) )
    ( (This)->lpVtbl->get_ServerCertificateErrorSeverity(This,value) )
    ( (This)->lpVtbl->get_ServerCertificateErrors(This,value) )
    ( (This)->lpVtbl->get_ServerIntermediateCertificates(This,value) )
    ( (This)->lpVtbl->Reject(This) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CSockets_CIWebSocketServerCustomValidationRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ControlChannelTrigger[] = L"Windows.Networking.Sockets.ControlChannelTrigger";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocket[] = L"Windows.Networking.Sockets.DatagramSocket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketControl[] = L"Windows.Networking.Sockets.DatagramSocketControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketInformation[] = L"Windows.Networking.Sockets.DatagramSocketInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_DatagramSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.DatagramSocketMessageReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocket[] = L"Windows.Networking.Sockets.MessageWebSocket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketControl[] = L"Windows.Networking.Sockets.MessageWebSocketControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketInformation[] = L"Windows.Networking.Sockets.MessageWebSocketInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_MessageWebSocketMessageReceivedEventArgs[] = L"Windows.Networking.Sockets.MessageWebSocketMessageReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ServerMessageWebSocket[] = L"Windows.Networking.Sockets.ServerMessageWebSocket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ServerMessageWebSocketControl[] = L"Windows.Networking.Sockets.ServerMessageWebSocketControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ServerMessageWebSocketInformation[] = L"Windows.Networking.Sockets.ServerMessageWebSocketInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ServerStreamWebSocket[] = L"Windows.Networking.Sockets.ServerStreamWebSocket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_ServerStreamWebSocketInformation[] = L"Windows.Networking.Sockets.ServerStreamWebSocketInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityContext[] = L"Windows.Networking.Sockets.SocketActivityContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityInformation[] = L"Windows.Networking.Sockets.SocketActivityInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketActivityTriggerDetails[] = L"Windows.Networking.Sockets.SocketActivityTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_SocketError[] = L"Windows.Networking.Sockets.SocketError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocket[] = L"Windows.Networking.Sockets.StreamSocket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketControl[] = L"Windows.Networking.Sockets.StreamSocketControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketInformation[] = L"Windows.Networking.Sockets.StreamSocketInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListener[] = L"Windows.Networking.Sockets.StreamSocketListener";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerConnectionReceivedEventArgs[] = L"Windows.Networking.Sockets.StreamSocketListenerConnectionReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerControl[] = L"Windows.Networking.Sockets.StreamSocketListenerControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamSocketListenerInformation[] = L"Windows.Networking.Sockets.StreamSocketListenerInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocket[] = L"Windows.Networking.Sockets.StreamWebSocket";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocketControl[] = L"Windows.Networking.Sockets.StreamWebSocketControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_StreamWebSocketInformation[] = L"Windows.Networking.Sockets.StreamWebSocketInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketClosedEventArgs[] = L"Windows.Networking.Sockets.WebSocketClosedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketError[] = L"Windows.Networking.Sockets.WebSocketError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketKeepAlive[] = L"Windows.Networking.Sockets.WebSocketKeepAlive";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Sockets_WebSocketServerCustomValidationRequestedEventArgs[] = L"Windows.Networking.Sockets.WebSocketServerCustomValidationRequestedEventArgs";
       
       
#pragma clang diagnostic pop
