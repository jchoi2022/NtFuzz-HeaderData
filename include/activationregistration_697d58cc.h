#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#include "Inspectable.h"
#include "Windows.Foundation.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration;
typedef interface __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration;
typedef interface __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration;
typedef interface __x_ABI_CWindows_CFoundation_CIExeServerRegistration __x_ABI_CWindows_CFoundation_CIExeServerRegistration;
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
#pragma warning (push)
#pragma warning (disable:4668)
#pragma warning (disable:4001)
       
#pragma warning (pop)
typedef TrustLevel __x_ABI_CWindows_CFoundation_CRegisteredTrustLevel;
typedef
enum __x_ABI_CWindows_CFoundation_CRegistrationScope
{
    RegistrationScope_PerMachine,
    RegistrationScope_PerUser,
    RegistrationScope_InboxApp,
} __x_ABI_CWindows_CFoundation_CRegistrationScope;
typedef
enum __x_ABI_CWindows_CFoundation_CActivationType
{
    ActivationType_InProcess,
    ActivationType_OutOfProcess,
    ActivationType_RemoteProcess,
} __x_ABI_CWindows_CFoundation_CActivationType;
typedef
enum __x_ABI_CWindows_CFoundation_CThreadingType
{
    ThreadingType_BOTH,
    ThreadingType_STA,
    ThreadingType_MTA,
} __x_ABI_CWindows_CFoundation_CThreadingType;
typedef
enum __x_ABI_CWindows_CFoundation_CIdentityType
{
    IdentityType_ActivateAsActivator,
    IdentityType_RunAs,
    IdentityType_ActivateAsPackage,
    IdentityType_SessionVirtual,
    IdentityType_SessionUser,
    IdentityType_ActivateAsActivatingUser,
} __x_ABI_CWindows_CFoundation_CIdentityType;
typedef
enum __x_ABI_CWindows_CFoundation_CInstancingType
{
    InstancingType_SingleInstance,
    InstancingType_MultipleInstances,
} __x_ABI_CWindows_CFoundation_CInstancingType;
typedef
enum __x_ABI_CWindows_CFoundation_CActivateAsUser
{
    ActivateAsUser_NotSupported,
    ActivateAsUser_Supported,
} __x_ABI_CWindows_CFoundation_CActivateAsUser;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IActivatableClassRegistration[] = L"Windows.Foundation.IActivatableClassRegistration";
typedef struct __x_ABI_CWindows_CFoundation_CIActivatableClassRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )(
        __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                           __RPC__deref_out_opt HSTRING * activatableClassID
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivationType )(
        __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CActivationType * activationType
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegistrationScope )(
        __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRegistrationScope * registrationScope
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RegisteredTrustLevel )(
        __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRegisteredTrustLevel * registeredTrustLevel
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
        __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration * This,
                                                                            __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * attributes
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CIActivatableClassRegistrationVtbl;
interface __x_ABI_CWindows_CFoundation_CIActivatableClassRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIActivatableClassRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivatableClassId(This,activatableClassID) )
    ( (This)->lpVtbl->get_ActivationType(This,activationType) )
    ( (This)->lpVtbl->get_RegistrationScope(This,registrationScope) )
    ( (This)->lpVtbl->get_RegisteredTrustLevel(This,registeredTrustLevel) )
    ( (This)->lpVtbl->get_Attributes(This,attributes) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIActivatableClassRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IDllServerActivatableClassRegistration[] = L"Windows.Foundation.IDllServerActivatableClassRegistration";
typedef struct __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DllPath )(
        __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
                           __RPC__deref_out_opt HSTRING * dllPath
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThreadingType )(
        __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CThreadingType * threadingType
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistrationVtbl;
interface __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DllPath(This,dllPath) )
    ( (This)->lpVtbl->get_ThreadingType(This,threadingType) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIDllServerActivatableClassRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IExeServerActivatableClassRegistration[] = L"Windows.Foundation.IExeServerActivatableClassRegistration";
typedef struct __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerRegistration )(
        __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIExeServerRegistration * * serverRegistration
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistrationVtbl;
interface __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerRegistration(This,serverRegistration) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIExeServerActivatableClassRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_IExeServerRegistration[] = L"Windows.Foundation.IExeServerRegistration";
typedef struct __x_ABI_CWindows_CFoundation_CIExeServerRegistrationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerName )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__deref_out_opt HSTRING * serverName
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExePath )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__deref_out_opt HSTRING * exePath
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommandLine )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__deref_out_opt HSTRING * commandLine
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppUserModelId )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__deref_out_opt HSTRING * appUserModelId
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IdentityType )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CIdentityType * identityType
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Identity )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__deref_out_opt HSTRING * identity
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Instancing )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CInstancingType * instanceType
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Permissions )(
        __x_ABI_CWindows_CFoundation_CIExeServerRegistration * This,
                           __RPC__deref_out_opt HSTRING * permissions
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CIExeServerRegistrationVtbl;
interface __x_ABI_CWindows_CFoundation_CIExeServerRegistration
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CIExeServerRegistrationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerName(This,serverName) )
    ( (This)->lpVtbl->get_ExePath(This,exePath) )
    ( (This)->lpVtbl->get_CommandLine(This,commandLine) )
    ( (This)->lpVtbl->get_AppUserModelId(This,appUserModelId) )
    ( (This)->lpVtbl->get_IdentityType(This,identityType) )
    ( (This)->lpVtbl->get_Identity(This,identity) )
    ( (This)->lpVtbl->get_Instancing(This,instanceType) )
    ( (This)->lpVtbl->get_Permissions(This,permissions) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CIExeServerRegistration;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_DllServerActivatableClassRegistration[] = L"Windows.Foundation.DllServerActivatableClassRegistration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_ExeServerActivatableClassRegistration[] = L"Windows.Foundation.ExeServerActivatableClassRegistration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_ExeServerRegistration[] = L"Windows.Foundation.ExeServerRegistration";
       
