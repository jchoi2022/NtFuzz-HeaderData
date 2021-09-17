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
#include "Windows.Networking.h"
#include "Windows.Networking.Sockets.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Security.Cryptography.Certificates.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment;
typedef interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory;
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CIVpnProfile **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnAppId **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnPacketBuffer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBuffer
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnPacketBufferVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnRoute **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
typedef struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;
interface __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
typedef struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CVpn__CVpnTrafficFilter **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;
interface __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElementVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
typedef struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                       __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;
interface __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnAppId;
typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnAppId **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This, __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl;
interface __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnAppIdVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo;
typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This, __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl;
interface __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo;
typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This, __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl;
interface __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfoVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnRoute;
typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnRoute **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This, __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnRouteVtbl;
interface __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnRouteVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter;
typedef struct __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CVpn__CVpnTrafficFilter **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This, __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl;
interface __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilterVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * This, __RPC__out __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfileVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnCredential **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * This, __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredentialVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus;
typedef struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * This, __RPC__out enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl;
interface __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs;
typedef struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * This, __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * sender, __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgsVtbl;
interface __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CNetworking_CIHostName __x_ABI_CWindows_CNetworking_CIHostName;
typedef interface __FIIterator_1_Windows__CNetworking__CHostName __FIIterator_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterator_1_Windows__CNetworking__CHostName;
typedef struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CNetworking__CHostName * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterator_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterator_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CNetworking__CHostName __FIIterable_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIIterable_1_Windows__CNetworking__CHostName;
typedef struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt __FIIterator_1_Windows__CNetworking__CHostName **first);
    END_INTERFACE
} __FIIterable_1_Windows__CNetworking__CHostNameVtbl;
interface __FIIterable_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIIterable_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CNetworking__CHostName __FIVectorView_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIVectorView_1_Windows__CNetworking__CHostName;
typedef struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CNetworking_CIHostName * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       __x_ABI_CWindows_CNetworking_CIHostName * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CNetworking__CHostName * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CNetworking__CHostNameVtbl;
interface __FIVectorView_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __FIIterator_1_IInspectable __FIIterator_1_IInspectable;
EXTERN_C const IID IID___FIIterator_1_IInspectable;
typedef struct __FIIterator_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_IInspectableVtbl;
interface __FIIterator_1_IInspectable
{
    CONST_VTBL struct __FIIterator_1_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1_IInspectable __FIIterable_1_IInspectable;
EXTERN_C const IID IID___FIIterable_1_IInspectable;
typedef struct __FIIterable_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_IInspectable * This, __RPC__deref_out_opt __FIIterator_1_IInspectable **first);
    END_INTERFACE
} __FIIterable_1_IInspectableVtbl;
interface __FIIterable_1_IInspectable
{
    CONST_VTBL struct __FIIterable_1_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __FIIterator_1_Windows__CFoundation__CUri __FIIterator_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CUri;
typedef struct __FIIterator_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CUri * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CUriVtbl;
interface __FIIterator_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CUri __FIIterable_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CUri;
typedef struct __FIIterable_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CUri **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CUriVtbl;
interface __FIIterable_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CUriVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CFoundation__CUri __FIVectorView_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIVectorView_1_Windows__CFoundation__CUri;
typedef struct __FIVectorView_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CFoundation__CUri * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CFoundation__CUriVtbl;
interface __FIVectorView_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVectorView_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CNetworking__CHostName __FIVector_1_Windows__CNetworking__CHostName;
EXTERN_C const IID IID___FIVector_1_Windows__CNetworking__CHostName;
typedef struct __FIVector_1_Windows__CNetworking__CHostNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                   __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This, __RPC__in __x_ABI_CWindows_CNetworking_CIHostName * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CNetworking_CIHostName * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CNetworking__CHostName * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CNetworking_CIHostName * *value);
    END_INTERFACE
} __FIVector_1_Windows__CNetworking__CHostNameVtbl;
interface __FIVector_1_Windows__CNetworking__CHostName
{
    CONST_VTBL struct __FIVector_1_Windows__CNetworking__CHostNameVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CFoundation__CUri __FIVector_1_Windows__CFoundation__CUri;
EXTERN_C const IID IID___FIVector_1_Windows__CFoundation__CUri;
typedef struct __FIVector_1_Windows__CFoundation__CUriVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This, __RPC__in __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CFoundation__CUri * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * *value);
    END_INTERFACE
} __FIVector_1_Windows__CFoundation__CUriVtbl;
interface __FIVector_1_Windows__CFoundation__CUri
{
    CONST_VTBL struct __FIVector_1_Windows__CFoundation__CUriVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef enum __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelRequestCredentialsOptions __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelRequestCredentialsOptions;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType __x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus;
typedef enum __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType;
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType
{
    VpnAppIdType_PackageFamilyName = 0,
    VpnAppIdType_FullyQualifiedBinaryName = 1,
    VpnAppIdType_FilePath = 2,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod
{
    VpnAuthenticationMethod_Mschapv2 = 0,
    VpnAuthenticationMethod_Eap = 1,
    VpnAuthenticationMethod_Certificate = 2,
    VpnAuthenticationMethod_PresharedKey = 3,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType
{
    VpnChannelActivityEventType_Idle = 0,
    VpnChannelActivityEventType_Active = 1,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelRequestCredentialsOptions
{
    VpnChannelRequestCredentialsOptions_None = 0,
    VpnChannelRequestCredentialsOptions_Retrying = 0x1,
    VpnChannelRequestCredentialsOptions_UseForSingleSignIn = 0x2,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType
{
    VpnCredentialType_UsernamePassword = 0,
    VpnCredentialType_UsernameOtpPin = 1,
    VpnCredentialType_UsernamePasswordAndPin = 2,
    VpnCredentialType_UsernamePasswordChange = 3,
    VpnCredentialType_SmartCard = 4,
    VpnCredentialType_ProtectedCertificate = 5,
    VpnCredentialType_UnProtectedCertificate = 6,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType
{
    VpnDataPathType_Send = 0,
    VpnDataPathType_Receive = 1,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType
{
    VpnDomainNameType_Suffix = 0,
    VpnDomainNameType_FullyQualified = 1,
    VpnDomainNameType_Reserved = 65535,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol
{
    VpnIPProtocol_None = 0,
    VpnIPProtocol_Tcp = 6,
    VpnIPProtocol_Udp = 17,
    VpnIPProtocol_Icmp = 1,
    VpnIPProtocol_Ipv6Icmp = 58,
    VpnIPProtocol_Igmp = 2,
    VpnIPProtocol_Pgm = 113,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus
{
    VpnManagementConnectionStatus_Disconnected = 0,
    VpnManagementConnectionStatus_Disconnecting = 1,
    VpnManagementConnectionStatus_Connected = 2,
    VpnManagementConnectionStatus_Connecting = 3,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementErrorStatus
{
    VpnManagementErrorStatus_Ok = 0,
    VpnManagementErrorStatus_Other = 1,
    VpnManagementErrorStatus_InvalidXmlSyntax = 2,
    VpnManagementErrorStatus_ProfileNameTooLong = 3,
    VpnManagementErrorStatus_ProfileInvalidAppId = 4,
    VpnManagementErrorStatus_AccessDenied = 5,
    VpnManagementErrorStatus_CannotFindProfile = 6,
    VpnManagementErrorStatus_AlreadyDisconnecting = 7,
    VpnManagementErrorStatus_AlreadyConnected = 8,
    VpnManagementErrorStatus_GeneralAuthenticationFailure = 9,
    VpnManagementErrorStatus_EapFailure = 10,
    VpnManagementErrorStatus_SmartCardFailure = 11,
    VpnManagementErrorStatus_CertificateFailure = 12,
    VpnManagementErrorStatus_ServerConfiguration = 13,
    VpnManagementErrorStatus_NoConnection = 14,
    VpnManagementErrorStatus_ServerConnection = 15,
    VpnManagementErrorStatus_UserNamePassword = 16,
    VpnManagementErrorStatus_DnsNotResolvable = 17,
    VpnManagementErrorStatus_InvalidIP = 18,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType
{
    VpnNativeProtocolType_Pptp = 0,
    VpnNativeProtocolType_L2tp = 1,
    VpnNativeProtocolType_IpsecIkev2 = 2,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus
{
    VpnPacketBufferStatus_Ok = 0,
    VpnPacketBufferStatus_InvalidBufferSize = 1,
};
enum __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType
{
    VpnRoutingPolicyType_SplitRouting = 0,
    VpnRoutingPolicyType_ForceAllTrafficOverVpn = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnAppId[] = L"Windows.Networking.Vpn.IVpnAppId";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnAppIdFactory[] = L"Windows.Networking.Vpn.IVpnAppIdFactory";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnAppIdType type,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,type,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnAppIdFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannel[] = L"Windows.Networking.Vpn.IVpnChannel";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AssociateTransport )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in_opt IInspectable * mainOuterTunnelTransport,
                  __RPC__in_opt IInspectable * optionalOuterTunnelTransport
        );
                    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * routeScope,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * namespaceScope,
                  UINT32 mtuSize,
                  UINT32 maxFrameSize,
                  boolean optimizeForLowCostNetwork,
                  __RPC__in_opt IInspectable * mainOuterTunnelTransport,
                  __RPC__in_opt IInspectable * optionalOuterTunnelTransport
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCredentials )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
                  boolean isRetry,
                  boolean isSingleSignOnCredential,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * * credential
        );
    HRESULT ( STDMETHODCALLTYPE *RequestVpnPacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnDataPathType type,
                   __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *LogDiagnosticMessage )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in HSTRING message
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Configuration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ActivityChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ActivityChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlugInContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlugInContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemHealth )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCustomPrompt )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPrompt * customPrompt
        );
    HRESULT ( STDMETHODCALLTYPE *SetErrorMessage )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in HSTRING message
        );
    HRESULT ( STDMETHODCALLTYPE *SetAllowedSslTlsVersions )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * This,
                  __RPC__in_opt IInspectable * tunnelTransport,
                  boolean useTls12
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AssociateTransport(This,mainOuterTunnelTransport,optionalOuterTunnelTransport) )
    ( (This)->lpVtbl->Start(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,routeScope,namespaceScope,mtuSize,maxFrameSize,optimizeForLowCostNetwork,mainOuterTunnelTransport,optionalOuterTunnelTransport) )
    ( (This)->lpVtbl->Stop(This) )
    ( (This)->lpVtbl->RequestCredentials(This,credType,isRetry,isSingleSignOnCredential,certificate,credential) )
    ( (This)->lpVtbl->RequestVpnPacketBuffer(This,type,vpnPacketBuffer) )
    ( (This)->lpVtbl->LogDiagnosticMessage(This,message) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Configuration(This,value) )
    ( (This)->lpVtbl->add_ActivityChange(This,handler,token) )
    ( (This)->lpVtbl->remove_ActivityChange(This,token) )
    ( (This)->lpVtbl->put_PlugInContext(This,value) )
    ( (This)->lpVtbl->get_PlugInContext(This,value) )
    ( (This)->lpVtbl->get_SystemHealth(This,value) )
    ( (This)->lpVtbl->RequestCustomPrompt(This,customPrompt) )
    ( (This)->lpVtbl->SetErrorMessage(This,message) )
    ( (This)->lpVtbl->SetAllowedSslTlsVersions(This,tunnelTransport,useTls12) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannel2[] = L"Windows.Networking.Vpn.IVpnChannel2";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *StartWithMainTransport )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * assignedRoutes,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * assignedDomainName,
                  UINT32 mtuSize,
                  UINT32 maxFrameSize,
                  boolean Reserved,
                  __RPC__in_opt IInspectable * mainOuterTunnelTransport
        );
    HRESULT ( STDMETHODCALLTYPE *StartExistingTransports )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv4list,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIPv6list,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * assignedRoutes,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * assignedDomainName,
                  UINT32 mtuSize,
                  UINT32 maxFrameSize,
                  boolean Reserved
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ActivityStateChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CNetworking__CVpn__CVpnChannel_Windows__CNetworking__CVpn__CVpnChannelActivityStateChangedArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ActivityStateChange )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetVpnSendPacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnSendPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *GetVpnReceivePacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnReceivePacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RequestCustomPromptAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CVpn__CIVpnCustomPromptElement * customPromptElement,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestCredentialsWithCertificateAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
                  UINT32 credOptions,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * certificate,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestCredentialsWithOptionsAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
                  UINT32 credOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestCredentialsSimpleAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnCredentialType credType,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnCredential * * credential
        );
    HRESULT ( STDMETHODCALLTYPE *TerminateConnection )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __RPC__in HSTRING message
        );
                    HRESULT ( STDMETHODCALLTYPE *StartWithTrafficFilter )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2 * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIpv4List,
                  __RPC__in_opt __FIVectorView_1_Windows__CNetworking__CHostName * assignedClientIpv6List,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpnInterfaceId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * assignedRoutes,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * assignedNamespace,
                  UINT32 mtuSize,
                  UINT32 maxFrameSize,
                  boolean reserved,
                  __RPC__in_opt IInspectable * mainOuterTunnelTransport,
                  __RPC__in_opt IInspectable * optionalOuterTunnelTransport,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * assignedTrafficFilters
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartWithMainTransport(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,assignedRoutes,assignedDomainName,mtuSize,maxFrameSize,Reserved,mainOuterTunnelTransport) )
    ( (This)->lpVtbl->StartExistingTransports(This,assignedClientIPv4list,assignedClientIPv6list,vpnInterfaceId,assignedRoutes,assignedDomainName,mtuSize,maxFrameSize,Reserved) )
    ( (This)->lpVtbl->add_ActivityStateChange(This,handler,token) )
    ( (This)->lpVtbl->remove_ActivityStateChange(This,token) )
    ( (This)->lpVtbl->GetVpnSendPacketBuffer(This,vpnSendPacketBuffer) )
    ( (This)->lpVtbl->GetVpnReceivePacketBuffer(This,vpnReceivePacketBuffer) )
    ( (This)->lpVtbl->RequestCustomPromptAsync(This,customPromptElement,action) )
    ( (This)->lpVtbl->RequestCredentialsWithCertificateAsync(This,credType,credOptions,certificate,credential) )
    ( (This)->lpVtbl->RequestCredentialsWithOptionsAsync(This,credType,credOptions,credential) )
    ( (This)->lpVtbl->RequestCredentialsSimpleAsync(This,credType,credential) )
    ( (This)->lpVtbl->TerminateConnection(This,message) )
    ( (This)->lpVtbl->StartWithTrafficFilter(This,assignedClientIpv4List,assignedClientIpv6List,vpnInterfaceId,assignedRoutes,assignedNamespace,mtuSize,maxFrameSize,reserved,mainOuterTunnelTransport,optionalOuterTunnelTransport,assignedTrafficFilters) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannel4[] = L"Windows.Networking.Vpn.IVpnChannel4";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAndAssociateTransport )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                  __RPC__in_opt IInspectable * transport,
                  __RPC__in_opt IInspectable * context
        );
                    HRESULT ( STDMETHODCALLTYPE *StartWithMultipleTransports )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * assignedClientIpv4Addresses,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * assignedClientIpv6Addresses,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * vpninterfaceId,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * assignedRoutes,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * assignedNamespace,
                  UINT32 mtuSize,
                  UINT32 maxFrameSize,
                  boolean reserved,
                  __RPC__in_opt __FIIterable_1_IInspectable * transports,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * assignedTrafficFilters
        );
    HRESULT ( STDMETHODCALLTYPE *ReplaceAndAssociateTransport )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                  __RPC__in_opt IInspectable * transport,
                  __RPC__in_opt IInspectable * context
        );
    HRESULT ( STDMETHODCALLTYPE *StartReconnectingTransport )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                  __RPC__in_opt IInspectable * transport,
                  __RPC__in_opt IInspectable * context
        );
    HRESULT ( STDMETHODCALLTYPE *GetSlotTypeForTransportContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                  __RPC__in_opt IInspectable * context,
                           __RPC__out __x_ABI_CWindows_CNetworking_CSockets_CControlChannelTriggerStatus * slotType
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentRequestTransportContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4 * This,
                           __RPC__deref_out_opt IInspectable * * context
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddAndAssociateTransport(This,transport,context) )
    ( (This)->lpVtbl->StartWithMultipleTransports(This,assignedClientIpv4Addresses,assignedClientIpv6Addresses,vpninterfaceId,assignedRoutes,assignedNamespace,mtuSize,maxFrameSize,reserved,transports,assignedTrafficFilters) )
    ( (This)->lpVtbl->ReplaceAndAssociateTransport(This,transport,context) )
    ( (This)->lpVtbl->StartReconnectingTransport(This,transport,context) )
    ( (This)->lpVtbl->GetSlotTypeForTransportContext(This,context,slotType) )
    ( (This)->lpVtbl->get_CurrentRequestTransportContext(This,context) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelActivityEventArgs[] = L"Windows.Networking.Vpn.IVpnChannelActivityEventArgs";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelActivityStateChangedArgs[] = L"Windows.Networking.Vpn.IVpnChannelActivityStateChangedArgs";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivityState )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnChannelActivityEventType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgsVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivityState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelActivityStateChangedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelConfiguration[] = L"Windows.Networking.Vpn.IVpnChannelConfiguration";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerServiceName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ServerHostNameList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CNetworking__CHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomField )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfigurationVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerServiceName(This,value) )
    ( (This)->lpVtbl->get_ServerHostNameList(This,value) )
    ( (This)->lpVtbl->get_CustomField(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelConfiguration2[] = L"Windows.Networking.Vpn.IVpnChannelConfiguration2";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerUris )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CFoundation__CUri * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerUris(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelConfiguration2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnChannelStatics[] = L"Windows.Networking.Vpn.IVpnChannelStatics";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ProcessEventAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics * This,
                  __RPC__in_opt IInspectable * thirdPartyPlugIn,
                  __RPC__in_opt IInspectable * event
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStaticsVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ProcessEventAsync(This,thirdPartyPlugIn,event) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnChannelStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCredential[] = L"Windows.Networking.Vpn.IVpnCredential";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PasskeyCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CertificateCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCryptography_CCertificates_CICertificate * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdditionalPin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldPasswordCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredentialVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCredentialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PasskeyCredential(This,value) )
    ( (This)->lpVtbl->get_CertificateCredential(This,value) )
    ( (This)->lpVtbl->get_AdditionalPin(This,value) )
    ( (This)->lpVtbl->get_OldPasswordCredential(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCredential;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomCheckBox[] = L"Windows.Networking.Vpn.IVpnCustomCheckBox";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_InitialCheckState )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialCheckState )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Checked )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBoxVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_InitialCheckState(This,value) )
    ( (This)->lpVtbl->get_InitialCheckState(This,value) )
    ( (This)->lpVtbl->get_Checked(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomCheckBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomComboBox[] = L"Windows.Networking.Vpn.IVpnCustomComboBox";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_OptionsText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
                  __RPC__in_opt __FIVectorView_1_HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OptionsText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Selected )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBoxVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_OptionsText(This,value) )
    ( (This)->lpVtbl->get_OptionsText(This,value) )
    ( (This)->lpVtbl->get_Selected(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomComboBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomEditBox[] = L"Windows.Networking.Vpn.IVpnCustomEditBox";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DefaultText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NoEcho )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NoEcho )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBoxVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DefaultText(This,value) )
    ( (This)->lpVtbl->get_DefaultText(This,value) )
    ( (This)->lpVtbl->put_NoEcho(This,value) )
    ( (This)->lpVtbl->get_NoEcho(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomEditBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomErrorBox[] = L"Windows.Networking.Vpn.IVpnCustomErrorBox";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBoxVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomErrorBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPrompt[] = L"Windows.Networking.Vpn.IVpnCustomPrompt";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bordered )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bordered )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_Label(This,value) )
    ( (This)->lpVtbl->put_Compulsory(This,value) )
    ( (This)->lpVtbl->get_Compulsory(This,value) )
    ( (This)->lpVtbl->put_Bordered(This,value) )
    ( (This)->lpVtbl->get_Bordered(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPrompt;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptBooleanInput[] = L"Windows.Networking.Vpn.IVpnCustomPromptBooleanInput";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_InitialValue )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialValue )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInputVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_InitialValue(This,value) )
    ( (This)->lpVtbl->get_InitialValue(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptBooleanInput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptElement[] = L"Windows.Networking.Vpn.IVpnCustomPromptElement";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Compulsory )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Emphasized )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Emphasized )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElementVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->put_Compulsory(This,value) )
    ( (This)->lpVtbl->get_Compulsory(This,value) )
    ( (This)->lpVtbl->put_Emphasized(This,value) )
    ( (This)->lpVtbl->get_Emphasized(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptElement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptOptionSelector[] = L"Windows.Networking.Vpn.IVpnCustomPromptOptionSelector";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedIndex )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelectorVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Options(This,value) )
    ( (This)->lpVtbl->get_SelectedIndex(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptOptionSelector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptText[] = L"Windows.Networking.Vpn.IVpnCustomPromptText";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptText;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomPromptTextInput[] = L"Windows.Networking.Vpn.IVpnCustomPromptTextInput";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PlaceholderText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaceholderText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsTextHidden )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTextHidden )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInputVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PlaceholderText(This,value) )
    ( (This)->lpVtbl->get_PlaceholderText(This,value) )
    ( (This)->lpVtbl->put_IsTextHidden(This,value) )
    ( (This)->lpVtbl->get_IsTextHidden(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomPromptTextInput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnCustomTextBox[] = L"Windows.Networking.Vpn.IVpnCustomTextBox";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DisplayText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBoxVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBoxVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DisplayText(This,value) )
    ( (This)->lpVtbl->get_DisplayText(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnCustomTextBox;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameAssignment[] = L"Windows.Networking.Vpn.IVpnDomainNameAssignment";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DomainNameList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProxyAutoConfigurationUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyAutoConfigurationUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignmentVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DomainNameList(This,value) )
    ( (This)->lpVtbl->put_ProxyAutoConfigurationUri(This,value) )
    ( (This)->lpVtbl->get_ProxyAutoConfigurationUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameAssignment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfo[] = L"Windows.Networking.Vpn.IVpnDomainNameInfo";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_DomainName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DomainNameType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainNameType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DnsServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WebProxyServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_DomainName(This,value) )
    ( (This)->lpVtbl->get_DomainName(This,value) )
    ( (This)->lpVtbl->put_DomainNameType(This,value) )
    ( (This)->lpVtbl->get_DomainNameType(This,value) )
    ( (This)->lpVtbl->get_DnsServers(This,value) )
    ( (This)->lpVtbl->get_WebProxyServers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfo2[] = L"Windows.Networking.Vpn.IVpnDomainNameInfo2";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WebProxyUris )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WebProxyUris(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnDomainNameInfoFactory[] = L"Windows.Networking.Vpn.IVpnDomainNameInfoFactory";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnDomainNameInfo )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory * This,
                  __RPC__in HSTRING name,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnDomainNameType nameType,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * dnsServerList,
                  __RPC__in_opt __FIIterable_1_Windows__CNetworking__CHostName * proxyServerList,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfo * * domainNameInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateVpnDomainNameInfo(This,name,nameType,dnsServerList,proxyServerList,domainNameInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnDomainNameInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnInterfaceId[] = L"Windows.Networking.Vpn.IVpnInterfaceId";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAddressInfo )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * This,
                   __RPC__out UINT32 * __idSize,
                                           __RPC__deref_out_ecount_full_opt(*(__idSize)) BYTE * * id
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAddressInfo(This,__idSize,id) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnInterfaceIdFactory[] = L"Windows.Networking.Vpn.IVpnInterfaceIdFactory";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnInterfaceId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory * This,
                               __RPC__in_range(0,0x8) UINT32 __addressSize,
                                          __RPC__in_ecount_full(__addressSize) BYTE * address,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceId * * vpnInterfaceId
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateVpnInterfaceId(This,__addressSize,address,vpnInterfaceId) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnInterfaceIdFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnManagementAgent[] = L"Windows.Networking.Vpn.IVpnManagementAgent";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddProfileFromXmlAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in HSTRING xml,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *AddProfileFromObjectAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateProfileFromXmlAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in HSTRING xml,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateProfileFromObjectAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetProfilesAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CNetworking__CVpn__CIVpnProfile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteProfileAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectProfileAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ConnectProfileWithPasswordCredentialAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * passwordCredential,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DisconnectProfileAsync )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * profile,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CNetworking__CVpn__CVpnManagementErrorStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgentVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddProfileFromXmlAsync(This,xml,operation) )
    ( (This)->lpVtbl->AddProfileFromObjectAsync(This,profile,operation) )
    ( (This)->lpVtbl->UpdateProfileFromXmlAsync(This,xml,operation) )
    ( (This)->lpVtbl->UpdateProfileFromObjectAsync(This,profile,operation) )
    ( (This)->lpVtbl->GetProfilesAsync(This,operation) )
    ( (This)->lpVtbl->DeleteProfileAsync(This,profile,operation) )
    ( (This)->lpVtbl->ConnectProfileAsync(This,profile,operation) )
    ( (This)->lpVtbl->ConnectProfileWithPasswordCredentialAsync(This,profile,passwordCredential,operation) )
    ( (This)->lpVtbl->DisconnectProfileAsync(This,profile,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnManagementAgent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceAssignment[] = L"Windows.Networking.Vpn.IVpnNamespaceAssignment";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_NamespaceList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NamespaceList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnNamespaceInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProxyAutoConfigUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyAutoConfigUri )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignmentVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_NamespaceList(This,value) )
    ( (This)->lpVtbl->get_NamespaceList(This,value) )
    ( (This)->lpVtbl->put_ProxyAutoConfigUri(This,value) )
    ( (This)->lpVtbl->get_ProxyAutoConfigUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceAssignment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceInfo[] = L"Windows.Networking.Vpn.IVpnNamespaceInfo";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Namespace )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DnsServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DnsServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_WebProxyServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WebProxyServers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CHostName * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Namespace(This,value) )
    ( (This)->lpVtbl->get_Namespace(This,value) )
    ( (This)->lpVtbl->put_DnsServers(This,value) )
    ( (This)->lpVtbl->get_DnsServers(This,value) )
    ( (This)->lpVtbl->put_WebProxyServers(This,value) )
    ( (This)->lpVtbl->get_WebProxyServers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNamespaceInfoFactory[] = L"Windows.Networking.Vpn.IVpnNamespaceInfoFactory";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnNamespaceInfo )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * dnsServerList,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CHostName * proxyServerList,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfo * * namespaceInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateVpnNamespaceInfo(This,name,dnsServerList,proxyServerList,namespaceInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNamespaceInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNativeProfile[] = L"Windows.Networking.Vpn.IVpnNativeProfile";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Servers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NativeProtocolType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NativeProtocolType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnNativeProtocolType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UserAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TunnelAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TunnelAuthenticationMethod )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnAuthenticationMethod value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EapConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                           __RPC__deref_out_opt HSTRING * Value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EapConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfileVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Servers(This,value) )
    ( (This)->lpVtbl->get_RoutingPolicyType(This,value) )
    ( (This)->lpVtbl->put_RoutingPolicyType(This,value) )
    ( (This)->lpVtbl->get_NativeProtocolType(This,value) )
    ( (This)->lpVtbl->put_NativeProtocolType(This,value) )
    ( (This)->lpVtbl->get_UserAuthenticationMethod(This,value) )
    ( (This)->lpVtbl->put_UserAuthenticationMethod(This,value) )
    ( (This)->lpVtbl->get_TunnelAuthenticationMethod(This,value) )
    ( (This)->lpVtbl->put_TunnelAuthenticationMethod(This,value) )
    ( (This)->lpVtbl->get_EapConfiguration(This,Value) )
    ( (This)->lpVtbl->put_EapConfiguration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnNativeProfile2[] = L"Windows.Networking.Vpn.IVpnNativeProfile2";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequireVpnClientAppUI(This,value) )
    ( (This)->lpVtbl->put_RequireVpnClientAppUI(This,value) )
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnNativeProfile2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBuffer[] = L"Windows.Networking.Vpn.IVpnPacketBuffer";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TransportAffinity )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportAffinity )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Buffer(This,value) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->put_TransportAffinity(This,value) )
    ( (This)->lpVtbl->get_TransportAffinity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBuffer2[] = L"Windows.Networking.Vpn.IVpnPacketBuffer2";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBuffer3[] = L"Windows.Networking.Vpn.IVpnPacketBuffer3";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_TransportContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This,
                  __RPC__in_opt IInspectable * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TransportContext )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3 * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_TransportContext(This,value) )
    ( (This)->lpVtbl->get_TransportContext(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferFactory[] = L"Windows.Networking.Vpn.IVpnPacketBufferFactory";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnPacketBuffer )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * parentBuffer,
                  UINT32 offset,
                  UINT32 length,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * vpnPacketBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateVpnPacketBuffer(This,parentBuffer,offset,length,vpnPacketBuffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferList[] = L"Windows.Networking.Vpn.IVpnPacketBufferList";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Append )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *AddAtBegin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAtBegin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnPacketBufferStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferListVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Append(This,nextVpnPacketBuffer) )
    ( (This)->lpVtbl->AddAtBegin(This,nextVpnPacketBuffer) )
    ( (This)->lpVtbl->RemoveAtEnd(This,nextVpnPacketBuffer) )
    ( (This)->lpVtbl->RemoveAtBegin(This,nextVpnPacketBuffer) )
    ( (This)->lpVtbl->Clear(This) )
    ( (This)->lpVtbl->put_Status(This,value) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPacketBufferList2[] = L"Windows.Networking.Vpn.IVpnPacketBufferList2";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddLeadingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveLeadingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *AddTrailingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * nextVpnPacketBuffer
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveTrailingPacket )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * nextVpnPacketBuffer
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddLeadingPacket(This,nextVpnPacketBuffer) )
    ( (This)->lpVtbl->RemoveLeadingPacket(This,nextVpnPacketBuffer) )
    ( (This)->lpVtbl->AddTrailingPacket(This,nextVpnPacketBuffer) )
    ( (This)->lpVtbl->RemoveTrailingPacket(This,nextVpnPacketBuffer) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPickedCredential[] = L"Windows.Networking.Vpn.IVpnPickedCredential";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredentialVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PasskeyCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdditionalPin )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldPasswordCredential )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredentialVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredentialVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PasskeyCredential(This,value) )
    ( (This)->lpVtbl->get_AdditionalPin(This,value) )
    ( (This)->lpVtbl->get_OldPasswordCredential(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPickedCredential;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugIn[] = L"Windows.Networking.Vpn.IVpnPlugIn";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Connect )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel
        );
    HRESULT ( STDMETHODCALLTYPE *Disconnect )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel
        );
    HRESULT ( STDMETHODCALLTYPE *GetKeepAlivePayload )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel,
                   __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * * keepAlivePacket
        );
    HRESULT ( STDMETHODCALLTYPE *Encapsulate )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * packets,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * encapulatedPackets
        );
    HRESULT ( STDMETHODCALLTYPE *Decapsulate )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnChannel * channel,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBuffer * encapBuffer,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * decapsulatedPackets,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnPacketBufferList * controlPacketsToSend
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Connect(This,channel) )
    ( (This)->lpVtbl->Disconnect(This,channel) )
    ( (This)->lpVtbl->GetKeepAlivePayload(This,channel,keepAlivePacket) )
    ( (This)->lpVtbl->Encapsulate(This,channel,packets,encapulatedPackets) )
    ( (This)->lpVtbl->Decapsulate(This,channel,encapBuffer,decapsulatedPackets,controlPacketsToSend) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugIn;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugInProfile[] = L"Windows.Networking.Vpn.IVpnPlugInProfile";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerUris )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CFoundation__CUri * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomConfiguration )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VpnPluginPackageFamilyName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VpnPluginPackageFamilyName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfileVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerUris(This,value) )
    ( (This)->lpVtbl->get_CustomConfiguration(This,value) )
    ( (This)->lpVtbl->put_CustomConfiguration(This,value) )
    ( (This)->lpVtbl->get_VpnPluginPackageFamilyName(This,value) )
    ( (This)->lpVtbl->put_VpnPluginPackageFamilyName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnPlugInProfile2[] = L"Windows.Networking.Vpn.IVpnPlugInProfile2";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequireVpnClientAppUI )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ConnectionStatus )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2 * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnManagementConnectionStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2Vtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequireVpnClientAppUI(This,value) )
    ( (This)->lpVtbl->put_RequireVpnClientAppUI(This,value) )
    ( (This)->lpVtbl->get_ConnectionStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnPlugInProfile2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnProfile[] = L"Windows.Networking.Vpn.IVpnProfile";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProfileName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProfileName )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppTriggers )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnAppId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Routes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DomainNameInfoList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnDomainNameInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrafficFilters )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RememberCredentials )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RememberCredentials )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysOn )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlwaysOn )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfileVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProfileName(This,value) )
    ( (This)->lpVtbl->put_ProfileName(This,value) )
    ( (This)->lpVtbl->get_AppTriggers(This,value) )
    ( (This)->lpVtbl->get_Routes(This,value) )
    ( (This)->lpVtbl->get_DomainNameInfoList(This,value) )
    ( (This)->lpVtbl->get_TrafficFilters(This,value) )
    ( (This)->lpVtbl->get_RememberCredentials(This,value) )
    ( (This)->lpVtbl->put_RememberCredentials(This,value) )
    ( (This)->lpVtbl->get_AlwaysOn(This,value) )
    ( (This)->lpVtbl->put_AlwaysOn(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRoute[] = L"Windows.Networking.Vpn.IVpnRoute";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Address )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Address )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CIHostName * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrefixSize )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
                                 __RPC__in_range(0,0x80) BYTE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrefixSize )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * This,
                           __RPC__out BYTE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Address(This,value) )
    ( (This)->lpVtbl->get_Address(This,value) )
    ( (This)->lpVtbl->put_PrefixSize(This,value) )
    ( (This)->lpVtbl->get_PrefixSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRouteAssignment[] = L"Windows.Networking.Vpn.IVpnRouteAssignment";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Ipv4InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Ipv6InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ipv4InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ipv6InclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Ipv4ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Ipv6ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                  __RPC__in_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ipv4ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ipv6ExclusionRoutes )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnRoute * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExcludeLocalSubnets )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExcludeLocalSubnets )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignmentVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Ipv4InclusionRoutes(This,value) )
    ( (This)->lpVtbl->put_Ipv6InclusionRoutes(This,value) )
    ( (This)->lpVtbl->get_Ipv4InclusionRoutes(This,value) )
    ( (This)->lpVtbl->get_Ipv6InclusionRoutes(This,value) )
    ( (This)->lpVtbl->put_Ipv4ExclusionRoutes(This,value) )
    ( (This)->lpVtbl->put_Ipv6ExclusionRoutes(This,value) )
    ( (This)->lpVtbl->get_Ipv4ExclusionRoutes(This,value) )
    ( (This)->lpVtbl->get_Ipv6ExclusionRoutes(This,value) )
    ( (This)->lpVtbl->put_ExcludeLocalSubnets(This,value) )
    ( (This)->lpVtbl->get_ExcludeLocalSubnets(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteAssignment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnRouteFactory[] = L"Windows.Networking.Vpn.IVpnRouteFactory";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateVpnRoute )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CIHostName * address,
                                 __RPC__in_range(0,0x80) BYTE prefixSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnRoute * * route
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateVpnRoute(This,address,prefixSize,route) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnRouteFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnSystemHealth[] = L"Windows.Networking.Vpn.IVpnSystemHealth";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealthVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StatementOfHealth )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealthVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealthVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StatementOfHealth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnSystemHealth;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilter[] = L"Windows.Networking.Vpn.IVpnTrafficFilter";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppId )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppClaims )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Protocol )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnIPProtocol value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalPortRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemotePortRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalAddressRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RemoteAddressRanges )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                           __RPC__out __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RoutingPolicyType )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * This,
                  __x_ABI_CWindows_CNetworking_CVpn_CVpnRoutingPolicyType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppId(This,value) )
    ( (This)->lpVtbl->put_AppId(This,value) )
    ( (This)->lpVtbl->get_AppClaims(This,value) )
    ( (This)->lpVtbl->get_Protocol(This,value) )
    ( (This)->lpVtbl->put_Protocol(This,value) )
    ( (This)->lpVtbl->get_LocalPortRanges(This,value) )
    ( (This)->lpVtbl->get_RemotePortRanges(This,value) )
    ( (This)->lpVtbl->get_LocalAddressRanges(This,value) )
    ( (This)->lpVtbl->get_RemoteAddressRanges(This,value) )
    ( (This)->lpVtbl->get_RoutingPolicyType(This,value) )
    ( (This)->lpVtbl->put_RoutingPolicyType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilterAssignment[] = L"Windows.Networking.Vpn.IVpnTrafficFilterAssignment";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TrafficFilterList )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CNetworking__CVpn__CVpnTrafficFilter * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowOutbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowOutbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AllowInbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AllowInbound )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignmentVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TrafficFilterList(This,value) )
    ( (This)->lpVtbl->get_AllowOutbound(This,value) )
    ( (This)->lpVtbl->put_AllowOutbound(This,value) )
    ( (This)->lpVtbl->get_AllowInbound(This,value) )
    ( (This)->lpVtbl->put_AllowInbound(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterAssignment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Networking_Vpn_IVpnTrafficFilterFactory[] = L"Windows.Networking.Vpn.IVpnTrafficFilterFactory";
typedef struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnAppId * appId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilter * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactoryVtbl;
interface __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,appId,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CNetworking_CVpn_CIVpnTrafficFilterFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnAppId[] = L"Windows.Networking.Vpn.VpnAppId";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannel[] = L"Windows.Networking.Vpn.VpnChannel";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelActivityEventArgs[] = L"Windows.Networking.Vpn.VpnChannelActivityEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelActivityStateChangedArgs[] = L"Windows.Networking.Vpn.VpnChannelActivityStateChangedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnChannelConfiguration[] = L"Windows.Networking.Vpn.VpnChannelConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCredential[] = L"Windows.Networking.Vpn.VpnCredential";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomCheckBox[] = L"Windows.Networking.Vpn.VpnCustomCheckBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomComboBox[] = L"Windows.Networking.Vpn.VpnCustomComboBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomEditBox[] = L"Windows.Networking.Vpn.VpnCustomEditBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomErrorBox[] = L"Windows.Networking.Vpn.VpnCustomErrorBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptBooleanInput[] = L"Windows.Networking.Vpn.VpnCustomPromptBooleanInput";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptOptionSelector[] = L"Windows.Networking.Vpn.VpnCustomPromptOptionSelector";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptText[] = L"Windows.Networking.Vpn.VpnCustomPromptText";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomPromptTextInput[] = L"Windows.Networking.Vpn.VpnCustomPromptTextInput";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnCustomTextBox[] = L"Windows.Networking.Vpn.VpnCustomTextBox";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnDomainNameAssignment[] = L"Windows.Networking.Vpn.VpnDomainNameAssignment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnDomainNameInfo[] = L"Windows.Networking.Vpn.VpnDomainNameInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnInterfaceId[] = L"Windows.Networking.Vpn.VpnInterfaceId";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnManagementAgent[] = L"Windows.Networking.Vpn.VpnManagementAgent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNamespaceAssignment[] = L"Windows.Networking.Vpn.VpnNamespaceAssignment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNamespaceInfo[] = L"Windows.Networking.Vpn.VpnNamespaceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnNativeProfile[] = L"Windows.Networking.Vpn.VpnNativeProfile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPacketBuffer[] = L"Windows.Networking.Vpn.VpnPacketBuffer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPacketBufferList[] = L"Windows.Networking.Vpn.VpnPacketBufferList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPickedCredential[] = L"Windows.Networking.Vpn.VpnPickedCredential";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnPlugInProfile[] = L"Windows.Networking.Vpn.VpnPlugInProfile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnRoute[] = L"Windows.Networking.Vpn.VpnRoute";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnRouteAssignment[] = L"Windows.Networking.Vpn.VpnRouteAssignment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnSystemHealth[] = L"Windows.Networking.Vpn.VpnSystemHealth";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnTrafficFilter[] = L"Windows.Networking.Vpn.VpnTrafficFilter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Networking_Vpn_VpnTrafficFilterAssignment[] = L"Windows.Networking.Vpn.VpnTrafficFilterAssignment";
       
       
#pragma clang diagnostic pop
