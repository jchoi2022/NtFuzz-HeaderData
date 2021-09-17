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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping;
typedef interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings;
typedef interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory;
typedef interface __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping;
EXTERN_C const IID IID___FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping;
typedef struct __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__out __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl;
interface __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping
{
    CONST_VTBL struct __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping;
EXTERN_C const IID IID___FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping;
typedef struct __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGlobalization__CCollation__CCharacterGrouping **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl;
interface __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGrouping
{
    CONST_VTBL struct __FIIterable_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping;
typedef struct __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                       __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl;
interface __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGrouping
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGlobalization__CCollation__CCharacterGroupingVtbl *lpVtbl;
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
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGrouping[] = L"Windows.Globalization.Collation.ICharacterGrouping";
typedef struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_First )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingVtbl;
interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_First(This,value) )
    ( (This)->lpVtbl->get_Label(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGrouping;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGroupings[] = L"Windows.Globalization.Collation.ICharacterGroupings";
typedef struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Lookup )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt HSTRING * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsVtbl;
interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Lookup(This,text,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Globalization_Collation_ICharacterGroupingsFactory[] = L"Windows.Globalization.Collation.ICharacterGroupingsFactory";
typedef struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory * This,
                  __RPC__in HSTRING language,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactoryVtbl;
interface __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,language,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGlobalization_CCollation_CICharacterGroupingsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Collation_CharacterGrouping[] = L"Windows.Globalization.Collation.CharacterGrouping";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Globalization_Collation_CharacterGroupings[] = L"Windows.Globalization.Collation.CharacterGroupings";
       
       
#pragma clang diagnostic pop
