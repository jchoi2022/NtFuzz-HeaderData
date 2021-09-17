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
#include "Windows.Data.Xml.Dom.h"
#include "Windows.Security.Credentials.h"
#include "Windows.Storage.Streams.h"
#include "Windows.Web.AtomPub.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText;
typedef interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory;
typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode;
typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;
interface __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode;
typedef struct __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CISyndicationNode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;
interface __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;
interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
typedef struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationAttribute **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;
interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory;
typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;
interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory;
typedef struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationCategory **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;
interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem;
typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;
interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem;
typedef struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;
interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink;
typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;
interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink;
typedef struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationLink **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;
interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson;
EXTERN_C const IID IID___FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson;
typedef struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;
interface __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson;
EXTERN_C const IID IID___FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson;
typedef struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__deref_out_opt __FIIterator_1_Windows__CWeb__CSyndication__CSyndicationPerson **first);
    END_INTERFACE
} __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;
interface __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIIterable_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode;
typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                       __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;
interface __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                       __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;
interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory;
typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                       __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;
interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem;
typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                       __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;
interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink;
typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                       __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;
interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson;
EXTERN_C const IID IID___FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson;
typedef struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                       __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;
interface __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode;
typedef struct __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CISyndicationNode **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This, __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl;
interface __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNodeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute;
typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationAttribute **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This, __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl;
interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttributeVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory;
typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationCategory **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This, __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl;
interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategoryVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem;
typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This, __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl;
interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink;
typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationLink **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This, __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl;
interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLinkVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson;
EXTERN_C const IID IID___FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson;
typedef struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CWeb__CSyndication__CSyndicationPerson **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This, __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * *value);
    END_INTERFACE
} __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl;
interface __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson
{
    CONST_VTBL struct __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPersonVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress;
typedef interface __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress;
EXTERN_C const IID IID___FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress;
typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;
typedef struct __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;
interface __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress;
EXTERN_C const IID IID___FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress;
typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;
typedef struct __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;
interface __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;
EXTERN_C const IID IID___FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress;
typedef struct __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__deref_out_opt __FIAsyncActionProgressHandler_1_Windows__CWeb__CSyndication__CTransferProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__deref_out_opt __FIAsyncActionWithProgressCompletedHandler_1_Windows__CWeb__CSyndication__CTransferProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress * This);
    END_INTERFACE
} __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl;
interface __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncActionWithProgress_1_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetResults(This) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CStorage__CStreams__CIInputStream_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CAtomPub_CIServiceDocument * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CAtomPub__CServiceDocument_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CRetrievalProgressVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress * This, __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgress
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationItem_Windows__CWeb__CSyndication__CTransferProgressVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument;
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential;
typedef enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus;
typedef enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat;
typedef enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType;
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress;
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress;
enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus
{
    SyndicationErrorStatus_Unknown = 0,
    SyndicationErrorStatus_MissingRequiredElement = 1,
    SyndicationErrorStatus_MissingRequiredAttribute = 2,
    SyndicationErrorStatus_InvalidXml = 3,
    SyndicationErrorStatus_UnexpectedContent = 4,
    SyndicationErrorStatus_UnsupportedFormat = 5,
};
enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat
{
    SyndicationFormat_Atom10 = 0,
    SyndicationFormat_Rss20 = 1,
    SyndicationFormat_Rss10 = 2,
    SyndicationFormat_Rss092 = 3,
    SyndicationFormat_Rss091 = 4,
    SyndicationFormat_Atom03 = 5,
};
enum __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType
{
    SyndicationTextType_Text = 0,
    SyndicationTextType_Html = 1,
    SyndicationTextType_Xhtml = 2,
};
struct __x_ABI_CWindows_CWeb_CSyndication_CRetrievalProgress
{
    UINT32 BytesRetrieved;
    UINT32 TotalBytesToRetrieve;
};
struct __x_ABI_CWindows_CWeb_CSyndication_CTransferProgress
{
    UINT32 BytesSent;
    UINT32 TotalBytesToSend;
    UINT32 BytesRetrieved;
    UINT32 TotalBytesToRetrieve;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationAttribute[] = L"Windows.Web.Syndication.ISyndicationAttribute";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Namespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Namespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Namespace(This,value) )
    ( (This)->lpVtbl->put_Namespace(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationAttributeFactory[] = L"Windows.Web.Syndication.ISyndicationAttributeFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationAttribute )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory * This,
                  __RPC__in HSTRING attributeName,
                  __RPC__in HSTRING attributeNamespace,
                  __RPC__in HSTRING attributeValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttribute * * syndicationAttribute
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationAttribute(This,attributeName,attributeNamespace,attributeValue,syndicationAttribute) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationAttributeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationCategory[] = L"Windows.Web.Syndication.ISyndicationCategory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scheme )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Scheme )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Term )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Term )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Label(This,value) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_Scheme(This,value) )
    ( (This)->lpVtbl->put_Scheme(This,value) )
    ( (This)->lpVtbl->get_Term(This,value) )
    ( (This)->lpVtbl->put_Term(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationCategoryFactory[] = L"Windows.Web.Syndication.ISyndicationCategoryFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationCategory )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
                  __RPC__in HSTRING term,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * * category
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationCategoryEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory * This,
                  __RPC__in HSTRING term,
                  __RPC__in HSTRING scheme,
                  __RPC__in HSTRING label,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategory * * category
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationCategory(This,term,category) )
    ( (This)->lpVtbl->CreateSyndicationCategoryEx(This,term,scheme,label,category) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationCategoryFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationClient[] = L"Windows.Web.Syndication.ISyndicationClient";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ServerCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ServerCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProxyCredential )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxResponseBufferSize )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxResponseBufferSize )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timeout )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Timeout )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BypassCacheOnRetrieve )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BypassCacheOnRetrieve )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *SetRequestHeader )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING value
        );
    HRESULT ( STDMETHODCALLTYPE *RetrieveFeedAsync )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CWeb__CSyndication__CSyndicationFeed_Windows__CWeb__CSyndication__CRetrievalProgress * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ServerCredential(This,value) )
    ( (This)->lpVtbl->put_ServerCredential(This,value) )
    ( (This)->lpVtbl->get_ProxyCredential(This,value) )
    ( (This)->lpVtbl->put_ProxyCredential(This,value) )
    ( (This)->lpVtbl->get_MaxResponseBufferSize(This,value) )
    ( (This)->lpVtbl->put_MaxResponseBufferSize(This,value) )
    ( (This)->lpVtbl->get_Timeout(This,value) )
    ( (This)->lpVtbl->put_Timeout(This,value) )
    ( (This)->lpVtbl->get_BypassCacheOnRetrieve(This,value) )
    ( (This)->lpVtbl->put_BypassCacheOnRetrieve(This,value) )
    ( (This)->lpVtbl->SetRequestHeader(This,name,value) )
    ( (This)->lpVtbl->RetrieveFeedAsync(This,uri,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationClientFactory[] = L"Windows.Web.Syndication.ISyndicationClientFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationClient )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CIPasswordCredential * serverCredential,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClient * * syndicationClient
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationClient(This,serverCredential,syndicationClient) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationClientFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationContent[] = L"Windows.Web.Syndication.ISyndicationContent";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SourceUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceUri(This,value) )
    ( (This)->lpVtbl->put_SourceUri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationContentFactory[] = L"Windows.Web.Syndication.ISyndicationContentFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationContent )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
                  __RPC__in HSTRING text,
                  __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * * content
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationContentWithSourceUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * sourceUri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * * content
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationContent(This,text,type,content) )
    ( (This)->lpVtbl->CreateSyndicationContentWithSourceUri(This,sourceUri,content) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationContentFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationErrorStatics[] = L"Windows.Web.Syndication.ISyndicationErrorStatics";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetStatus )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics * This,
                  INT32 hresult,
                           __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CSyndicationErrorStatus * status
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStaticsVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetStatus(This,hresult,status) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationErrorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationFeed[] = L"Windows.Web.Syndication.ISyndicationFeed";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Authors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Categories )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contributors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Generator )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Generator )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IconUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IconUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Links )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ImageUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FirstUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviousUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceFormat )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                           __RPC__out __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat * value
        );
    HRESULT ( STDMETHODCALLTYPE *Load )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in HSTRING feed
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromXml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * feedDocument
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Authors(This,value) )
    ( (This)->lpVtbl->get_Categories(This,value) )
    ( (This)->lpVtbl->get_Contributors(This,value) )
    ( (This)->lpVtbl->get_Generator(This,value) )
    ( (This)->lpVtbl->put_Generator(This,value) )
    ( (This)->lpVtbl->get_IconUri(This,value) )
    ( (This)->lpVtbl->put_IconUri(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_Items(This,value) )
    ( (This)->lpVtbl->get_LastUpdatedTime(This,value) )
    ( (This)->lpVtbl->put_LastUpdatedTime(This,value) )
    ( (This)->lpVtbl->get_Links(This,value) )
    ( (This)->lpVtbl->get_ImageUri(This,value) )
    ( (This)->lpVtbl->put_ImageUri(This,value) )
    ( (This)->lpVtbl->get_Rights(This,value) )
    ( (This)->lpVtbl->put_Rights(This,value) )
    ( (This)->lpVtbl->get_Subtitle(This,value) )
    ( (This)->lpVtbl->put_Subtitle(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_FirstUri(This,value) )
    ( (This)->lpVtbl->get_LastUri(This,value) )
    ( (This)->lpVtbl->get_NextUri(This,value) )
    ( (This)->lpVtbl->get_PreviousUri(This,value) )
    ( (This)->lpVtbl->get_SourceFormat(This,value) )
    ( (This)->lpVtbl->Load(This,feed) )
    ( (This)->lpVtbl->LoadFromXml(This,feedDocument) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationFeedFactory[] = L"Windows.Web.Syndication.ISyndicationFeedFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationFeed )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory * This,
                  __RPC__in HSTRING title,
                  __RPC__in HSTRING subtitle,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * * feed
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationFeed(This,title,subtitle,uri,feed) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeedFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationGenerator[] = L"Windows.Web.Syndication.ISyndicationGenerator";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Version )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
    ( (This)->lpVtbl->put_Version(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationGeneratorFactory[] = L"Windows.Web.Syndication.ISyndicationGeneratorFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationGenerator )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGenerator * * generator
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationGenerator(This,text,generator) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationGeneratorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationItem[] = L"Windows.Web.Syndication.ISyndicationItem";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Authors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Categories )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationCategory * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contributors )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationPerson * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Content )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Content )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Id )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LastUpdatedTime )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Links )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationLink * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PublishedDate )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PublishedDate )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __x_ABI_CWindows_CFoundation_CDateTime value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rights )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationFeed * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Summary )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Summary )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommentsUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CommentsUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EditUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EditMediaUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ETag )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Load )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in HSTRING item
        );
    HRESULT ( STDMETHODCALLTYPE *LoadFromXml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * itemDocument
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Authors(This,value) )
    ( (This)->lpVtbl->get_Categories(This,value) )
    ( (This)->lpVtbl->get_Contributors(This,value) )
    ( (This)->lpVtbl->get_Content(This,value) )
    ( (This)->lpVtbl->put_Content(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->put_Id(This,value) )
    ( (This)->lpVtbl->get_LastUpdatedTime(This,value) )
    ( (This)->lpVtbl->put_LastUpdatedTime(This,value) )
    ( (This)->lpVtbl->get_Links(This,value) )
    ( (This)->lpVtbl->get_PublishedDate(This,value) )
    ( (This)->lpVtbl->put_PublishedDate(This,value) )
    ( (This)->lpVtbl->get_Rights(This,value) )
    ( (This)->lpVtbl->put_Rights(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
    ( (This)->lpVtbl->get_Summary(This,value) )
    ( (This)->lpVtbl->put_Summary(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_CommentsUri(This,value) )
    ( (This)->lpVtbl->put_CommentsUri(This,value) )
    ( (This)->lpVtbl->get_EditUri(This,value) )
    ( (This)->lpVtbl->get_EditMediaUri(This,value) )
    ( (This)->lpVtbl->get_ETag(This,value) )
    ( (This)->lpVtbl->get_ItemUri(This,value) )
    ( (This)->lpVtbl->Load(This,item) )
    ( (This)->lpVtbl->LoadFromXml(This,itemDocument) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationItemFactory[] = L"Windows.Web.Syndication.ISyndicationItemFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationItem )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory * This,
                  __RPC__in HSTRING title,
                  __RPC__in_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationContent * content,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItem * * item
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationItem(This,title,content,uri,item) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationItemFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationLink[] = L"Windows.Web.Syndication.ISyndicationLink";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Relationship )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Relationship )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResourceLanguage )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ResourceLanguage )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->put_Length(This,value) )
    ( (This)->lpVtbl->get_MediaType(This,value) )
    ( (This)->lpVtbl->put_MediaType(This,value) )
    ( (This)->lpVtbl->get_Relationship(This,value) )
    ( (This)->lpVtbl->put_Relationship(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
    ( (This)->lpVtbl->get_ResourceLanguage(This,value) )
    ( (This)->lpVtbl->put_ResourceLanguage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationLinkFactory[] = L"Windows.Web.Syndication.ISyndicationLinkFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationLink )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * * link
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationLinkEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                  __RPC__in HSTRING relationship,
                  __RPC__in HSTRING title,
                  __RPC__in HSTRING mediaType,
                  UINT32 length,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLink * * link
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationLink(This,uri,link) )
    ( (This)->lpVtbl->CreateSyndicationLinkEx(This,uri,relationship,title,mediaType,length,link) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationLinkFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationNode[] = L"Windows.Web.Syndication.ISyndicationNode";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NodeName )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NodeName )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NodeNamespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NodeNamespace )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NodeValue )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NodeValue )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Language )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Language )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BaseUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BaseUri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AttributeExtensions )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CSyndicationAttribute * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementExtensions )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CWeb__CSyndication__CISyndicationNode * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetXmlDocument )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * This,
                  __x_ABI_CWindows_CWeb_CSyndication_CSyndicationFormat format,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * xmlDocument
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NodeName(This,value) )
    ( (This)->lpVtbl->put_NodeName(This,value) )
    ( (This)->lpVtbl->get_NodeNamespace(This,value) )
    ( (This)->lpVtbl->put_NodeNamespace(This,value) )
    ( (This)->lpVtbl->get_NodeValue(This,value) )
    ( (This)->lpVtbl->put_NodeValue(This,value) )
    ( (This)->lpVtbl->get_Language(This,value) )
    ( (This)->lpVtbl->put_Language(This,value) )
    ( (This)->lpVtbl->get_BaseUri(This,value) )
    ( (This)->lpVtbl->put_BaseUri(This,value) )
    ( (This)->lpVtbl->get_AttributeExtensions(This,value) )
    ( (This)->lpVtbl->get_ElementExtensions(This,value) )
    ( (This)->lpVtbl->GetXmlDocument(This,format,xmlDocument) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationNodeFactory[] = L"Windows.Web.Syndication.ISyndicationNodeFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationNode )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory * This,
                  __RPC__in HSTRING nodeName,
                  __RPC__in HSTRING nodeNamespace,
                  __RPC__in HSTRING nodeValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNode * * node
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationNode(This,nodeName,nodeNamespace,nodeValue,node) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationNodeFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationPerson[] = L"Windows.Web.Syndication.ISyndicationPerson";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Email )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Email )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Name )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Uri )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Email(This,value) )
    ( (This)->lpVtbl->put_Email(This,value) )
    ( (This)->lpVtbl->get_Name(This,value) )
    ( (This)->lpVtbl->put_Name(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
    ( (This)->lpVtbl->put_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationPersonFactory[] = L"Windows.Web.Syndication.ISyndicationPersonFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationPerson )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * * person
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationPersonEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory * This,
                  __RPC__in HSTRING name,
                  __RPC__in HSTRING email,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPerson * * person
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationPerson(This,name,person) )
    ( (This)->lpVtbl->CreateSyndicationPersonEx(This,name,email,uri,person) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationPersonFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationText[] = L"Windows.Web.Syndication.ISyndicationText";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Xml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Xml )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * This,
                  __RPC__in_opt __x_ABI_CWindows_CData_CXml_CDom_CIXmlDocument * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_Xml(This,value) )
    ( (This)->lpVtbl->put_Xml(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationText;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Web_Syndication_ISyndicationTextFactory[] = L"Windows.Web.Syndication.ISyndicationTextFactory";
typedef struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateSyndicationText )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * syndicationText
        );
    HRESULT ( STDMETHODCALLTYPE *CreateSyndicationTextEx )(
        __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory * This,
                  __RPC__in HSTRING text,
                  __x_ABI_CWindows_CWeb_CSyndication_CSyndicationTextType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CWeb_CSyndication_CISyndicationText * * syndicationText
        );
    END_INTERFACE
} __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactoryVtbl;
interface __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateSyndicationText(This,text,syndicationText) )
    ( (This)->lpVtbl->CreateSyndicationTextEx(This,text,type,syndicationText) )
EXTERN_C const IID IID___x_ABI_CWindows_CWeb_CSyndication_CISyndicationTextFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationAttribute[] = L"Windows.Web.Syndication.SyndicationAttribute";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationCategory[] = L"Windows.Web.Syndication.SyndicationCategory";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationClient[] = L"Windows.Web.Syndication.SyndicationClient";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationContent[] = L"Windows.Web.Syndication.SyndicationContent";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationError[] = L"Windows.Web.Syndication.SyndicationError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationFeed[] = L"Windows.Web.Syndication.SyndicationFeed";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationGenerator[] = L"Windows.Web.Syndication.SyndicationGenerator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationItem[] = L"Windows.Web.Syndication.SyndicationItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationLink[] = L"Windows.Web.Syndication.SyndicationLink";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationNode[] = L"Windows.Web.Syndication.SyndicationNode";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationPerson[] = L"Windows.Web.Syndication.SyndicationPerson";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Web_Syndication_SyndicationText[] = L"Windows.Web.Syndication.SyndicationText";
       
       
#pragma clang diagnostic pop
