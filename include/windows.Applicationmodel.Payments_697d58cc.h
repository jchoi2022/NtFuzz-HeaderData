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
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken;
typedef interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory;
typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;
typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;
typedef struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem;
typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem;
typedef struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;
typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;
typedef struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentMethodData **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;
EXTERN_C const IID IID___FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;
typedef struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl;
interface __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption
{
    CONST_VTBL struct __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;
EXTERN_C const IID IID___FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;
typedef struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This, __RPC__deref_out_opt __FIIterator_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption **first);
    END_INTERFACE
} __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl;
interface __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption
{
    CONST_VTBL struct __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                       __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifierVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                       __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItemVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                       __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodDataVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;
EXTERN_C const IID IID___FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption;
typedef struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                       __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl;
interface __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption
{
    CONST_VTBL struct __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOptionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestChangedResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult;
typedef struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * This, __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl;
interface __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResultVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING;
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_HSTRING __FIAsyncOperation_1___FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_HSTRING;
typedef struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_HSTRING * This, __RPC__out __FIVectorView_1_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence;
typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind;
typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus;
typedef enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType;
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus
{
    PaymentCanMakePaymentResultStatus_Unknown = 0,
    PaymentCanMakePaymentResultStatus_Yes = 1,
    PaymentCanMakePaymentResultStatus_No = 2,
    PaymentCanMakePaymentResultStatus_NotAllowed = 3,
    PaymentCanMakePaymentResultStatus_UserNotSignedIn = 4,
    PaymentCanMakePaymentResultStatus_SpecifiedPaymentMethodIdsNotSupported = 5,
    PaymentCanMakePaymentResultStatus_NoQualifyingCardOnFile = 6,
};
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence
{
    PaymentOptionPresence_None = 0,
    PaymentOptionPresence_Optional = 1,
    PaymentOptionPresence_Required = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind
{
    PaymentRequestChangeKind_ShippingOption = 0,
    PaymentRequestChangeKind_ShippingAddress = 1,
};
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus
{
    PaymentRequestCompletionStatus_Succeeded = 0,
    PaymentRequestCompletionStatus_Failed = 1,
    PaymentRequestCompletionStatus_Unknown = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus
{
    PaymentRequestStatus_Succeeded = 0,
    PaymentRequestStatus_Failed = 1,
    PaymentRequestStatus_Canceled = 2,
};
enum __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType
{
    PaymentShippingType_Shipping = 0,
    PaymentShippingType_Delivery = 1,
    PaymentShippingType_Pickup = 2,
};
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandlerVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,paymentRequest,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentAddress[] = L"Windows.ApplicationModel.Payments.IPaymentAddress";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddressVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Country )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Country )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AddressLines )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AddressLines )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in_opt __FIVectorView_1_HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Region )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Region )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_City )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_City )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DependentLocality )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DependentLocality )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PostalCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SortingCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SortingCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LanguageCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_LanguageCode )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Organization )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Organization )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recipient )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Recipient )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddressVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddressVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Country(This,value) )
    ( (This)->lpVtbl->put_Country(This,value) )
    ( (This)->lpVtbl->get_AddressLines(This,value) )
    ( (This)->lpVtbl->put_AddressLines(This,value) )
    ( (This)->lpVtbl->get_Region(This,value) )
    ( (This)->lpVtbl->put_Region(This,value) )
    ( (This)->lpVtbl->get_City(This,value) )
    ( (This)->lpVtbl->put_City(This,value) )
    ( (This)->lpVtbl->get_DependentLocality(This,value) )
    ( (This)->lpVtbl->put_DependentLocality(This,value) )
    ( (This)->lpVtbl->get_PostalCode(This,value) )
    ( (This)->lpVtbl->put_PostalCode(This,value) )
    ( (This)->lpVtbl->get_SortingCode(This,value) )
    ( (This)->lpVtbl->put_SortingCode(This,value) )
    ( (This)->lpVtbl->get_LanguageCode(This,value) )
    ( (This)->lpVtbl->put_LanguageCode(This,value) )
    ( (This)->lpVtbl->get_Organization(This,value) )
    ( (This)->lpVtbl->put_Organization(This,value) )
    ( (This)->lpVtbl->get_Recipient(This,value) )
    ( (This)->lpVtbl->put_Recipient(This,value) )
    ( (This)->lpVtbl->get_PhoneNumber(This,value) )
    ( (This)->lpVtbl->put_PhoneNumber(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResult[] = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCanMakePaymentResultFactory[] = L"Windows.ApplicationModel.Payments.IPaymentCanMakePaymentResultFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory * This,
                  __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentCanMakePaymentResultStatus value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCanMakePaymentResultFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCurrencyAmount[] = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmount";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Currency )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Currency )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrencySystem )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CurrencySystem )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Currency(This,value) )
    ( (This)->lpVtbl->put_Currency(This,value) )
    ( (This)->lpVtbl->get_CurrencySystem(This,value) )
    ( (This)->lpVtbl->put_CurrencySystem(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentCurrencyAmountFactory[] = L"Windows.ApplicationModel.Payments.IPaymentCurrencyAmountFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
                  __RPC__in HSTRING value,
                  __RPC__in HSTRING currency,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithCurrencySystem )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory * This,
                  __RPC__in HSTRING value,
                  __RPC__in HSTRING currency,
                  __RPC__in HSTRING currencySystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,value,currency,result) )
    ( (This)->lpVtbl->CreateWithCurrencySystem(This,value,currency,currencySystem,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmountFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetails[] = L"Windows.ApplicationModel.Payments.IPaymentDetails";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Total )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Total )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShippingOptions )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShippingOptions )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentShippingOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Modifiers )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentDetailsModifier * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Total(This,value) )
    ( (This)->lpVtbl->put_Total(This,value) )
    ( (This)->lpVtbl->get_DisplayItems(This,value) )
    ( (This)->lpVtbl->put_DisplayItems(This,value) )
    ( (This)->lpVtbl->get_ShippingOptions(This,value) )
    ( (This)->lpVtbl->put_ShippingOptions(This,value) )
    ( (This)->lpVtbl->get_Modifiers(This,value) )
    ( (This)->lpVtbl->put_Modifiers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsFactory[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithDisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * displayItems,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,total,result) )
    ( (This)->lpVtbl->CreateWithDisplayItems(This,total,displayItems,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsModifier[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifier";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_JsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedMethodIds )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Total )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdditionalDisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_JsonData(This,value) )
    ( (This)->lpVtbl->get_SupportedMethodIds(This,value) )
    ( (This)->lpVtbl->get_Total(This,value) )
    ( (This)->lpVtbl->get_AdditionalDisplayItems(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentDetailsModifierFactory[] = L"Windows.ApplicationModel.Payments.IPaymentDetailsModifierFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAdditionalDisplayItems )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * additionalDisplayItems,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAdditionalDisplayItemsAndJsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * total,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentItem * additionalDisplayItems,
                  __RPC__in HSTRING jsonData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifier * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,supportedMethodIds,total,result) )
    ( (This)->lpVtbl->CreateWithAdditionalDisplayItems(This,supportedMethodIds,total,additionalDisplayItems,result) )
    ( (This)->lpVtbl->CreateWithAdditionalDisplayItemsAndJsonData(This,supportedMethodIds,total,additionalDisplayItems,jsonData,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetailsModifierFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentItem[] = L"Windows.ApplicationModel.Payments.IPaymentItem";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pending )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Pending )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Label(This,value) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_Amount(This,value) )
    ( (This)->lpVtbl->put_Amount(This,value) )
    ( (This)->lpVtbl->get_Pending(This,value) )
    ( (This)->lpVtbl->put_Pending(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentItemFactory[] = L"Windows.ApplicationModel.Payments.IPaymentItemFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory * This,
                  __RPC__in HSTRING label,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItem * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,label,amount,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentItemFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMediator[] = L"Windows.ApplicationModel.Payments.IPaymentMediator";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSupportedMethodIdsAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_HSTRING * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *SubmitPaymentRequestAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *SubmitPaymentRequestWithChangeHandlerAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedHandler * changeHandler,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentRequestSubmitResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediatorVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSupportedMethodIdsAsync(This,result) )
    ( (This)->lpVtbl->SubmitPaymentRequestAsync(This,paymentRequest,result) )
    ( (This)->lpVtbl->SubmitPaymentRequestWithChangeHandlerAsync(This,paymentRequest,changeHandler,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMediator2[] = L"Windows.ApplicationModel.Payments.IPaymentMediator2";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CanMakePaymentAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * paymentRequest,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CApplicationModel__CPayments__CPaymentCanMakePaymentResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CanMakePaymentAsync(This,paymentRequest,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMediator2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMerchantInfo[] = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfo";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PackageFullName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Uri )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PackageFullName(This,value) )
    ( (This)->lpVtbl->get_Uri(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMerchantInfoFactory[] = L"Windows.ApplicationModel.Payments.IPaymentMerchantInfoFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * uri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,uri,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfoFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMethodData[] = L"Windows.ApplicationModel.Payments.IPaymentMethodData";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedMethodIds )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedMethodIds(This,value) )
    ( (This)->lpVtbl->get_JsonData(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentMethodDataFactory[] = L"Windows.ApplicationModel.Payments.IPaymentMethodDataFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithJsonData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * supportedMethodIds,
                  __RPC__in HSTRING jsonData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodData * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,supportedMethodIds,result) )
    ( (This)->lpVtbl->CreateWithJsonData(This,supportedMethodIds,jsonData,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMethodDataFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentOptions[] = L"Windows.ApplicationModel.Payments.IPaymentOptions";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestPayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestPayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestPayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestPayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestPayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestPayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentOptionPresence value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestShipping )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RequestShipping )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShippingType )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShippingType )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * This,
                  __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentShippingType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptionsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestPayerEmail(This,value) )
    ( (This)->lpVtbl->put_RequestPayerEmail(This,value) )
    ( (This)->lpVtbl->get_RequestPayerName(This,value) )
    ( (This)->lpVtbl->put_RequestPayerName(This,value) )
    ( (This)->lpVtbl->get_RequestPayerPhoneNumber(This,value) )
    ( (This)->lpVtbl->put_RequestPayerPhoneNumber(This,value) )
    ( (This)->lpVtbl->get_RequestShipping(This,value) )
    ( (This)->lpVtbl->put_RequestShipping(This,value) )
    ( (This)->lpVtbl->get_ShippingType(This,value) )
    ( (This)->lpVtbl->put_ShippingType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequest[] = L"Windows.ApplicationModel.Payments.IPaymentRequest";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MerchantInfo )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Details )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MethodData )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Options )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MerchantInfo(This,value) )
    ( (This)->lpVtbl->get_Details(This,value) )
    ( (This)->lpVtbl->get_MethodData(This,value) )
    ( (This)->lpVtbl->get_Options(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequest2[] = L"Windows.ApplicationModel.Payments.IPaymentRequest2";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedArgs[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedArgs";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeKind )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestChangeKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShippingAddress )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedShippingOption )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Acknowledge )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * changeResult
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgsVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeKind(This,value) )
    ( (This)->lpVtbl->get_ShippingAddress(This,value) )
    ( (This)->lpVtbl->get_SelectedShippingOption(This,value) )
    ( (This)->lpVtbl->Acknowledge(This,changeResult) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedResult[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ChangeAcceptedByMerchant )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChangeAcceptedByMerchant )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdatedPaymentDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UpdatedPaymentDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ChangeAcceptedByMerchant(This,value) )
    ( (This)->lpVtbl->put_ChangeAcceptedByMerchant(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->put_Message(This,value) )
    ( (This)->lpVtbl->get_UpdatedPaymentDetails(This,value) )
    ( (This)->lpVtbl->put_UpdatedPaymentDetails(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestChangedResultFactory[] = L"Windows.ApplicationModel.Payments.IPaymentRequestChangedResultFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
                  boolean changeAcceptedByMerchant,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPaymentDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory * This,
                  boolean changeAcceptedByMerchant,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * updatedPaymentDetails,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,changeAcceptedByMerchant,result) )
    ( (This)->lpVtbl->CreateWithPaymentDetails(This,changeAcceptedByMerchant,updatedPaymentDetails,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestChangedResultFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestFactory[] = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMerchantInfo )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * merchantInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithMerchantInfoAndOptions )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * merchantInfo,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,details,methodData,result) )
    ( (This)->lpVtbl->CreateWithMerchantInfo(This,details,methodData,merchantInfo,result) )
    ( (This)->lpVtbl->CreateWithMerchantInfoAndOptions(This,details,methodData,merchantInfo,options,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestFactory2[] = L"Windows.ApplicationModel.Payments.IPaymentRequestFactory2";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithMerchantInfoOptionsAndId )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentDetails * details,
                  __RPC__in_opt __FIIterable_1_Windows__CApplicationModel__CPayments__CPaymentMethodData * methodData,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentMerchantInfo * merchantInfo,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentOptions * options,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequest * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2Vtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithMerchantInfoOptionsAndId(This,details,methodData,merchantInfo,options,id,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentRequestSubmitResult[] = L"Windows.ApplicationModel.Payments.IPaymentRequestSubmitResult";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
                           __RPC__out __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Response )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResultVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Response(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentRequestSubmitResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentResponse[] = L"Windows.ApplicationModel.Payments.IPaymentResponse";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PaymentToken )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShippingOption )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShippingAddress )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentAddress * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PayerEmail )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PayerName )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PayerPhoneNumber )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *CompleteAsync )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse * This,
                  __x_ABI_CWindows_CApplicationModel_CPayments_CPaymentRequestCompletionStatus status,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponseVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PaymentToken(This,value) )
    ( (This)->lpVtbl->get_ShippingOption(This,value) )
    ( (This)->lpVtbl->get_ShippingAddress(This,value) )
    ( (This)->lpVtbl->get_PayerEmail(This,value) )
    ( (This)->lpVtbl->get_PayerName(This,value) )
    ( (This)->lpVtbl->get_PayerPhoneNumber(This,value) )
    ( (This)->lpVtbl->CompleteAsync(This,status,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentResponse;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentShippingOption[] = L"Windows.ApplicationModel.Payments.IPaymentShippingOption";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Amount )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsSelected )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Label(This,value) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_Amount(This,value) )
    ( (This)->lpVtbl->put_Amount(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->get_IsSelected(This,value) )
    ( (This)->lpVtbl->put_IsSelected(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentShippingOptionFactory[] = L"Windows.ApplicationModel.Payments.IPaymentShippingOptionFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
                  __RPC__in HSTRING label,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSelected )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
                  __RPC__in HSTRING label,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
                  boolean selected,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSelectedAndTag )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory * This,
                  __RPC__in HSTRING label,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentCurrencyAmount * amount,
                  boolean selected,
                  __RPC__in HSTRING tag,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOption * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,label,amount,result) )
    ( (This)->lpVtbl->CreateWithSelected(This,label,amount,selected,result) )
    ( (This)->lpVtbl->CreateWithSelectedAndTag(This,label,amount,selected,tag,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentShippingOptionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentToken[] = L"Windows.ApplicationModel.Payments.IPaymentToken";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PaymentMethodId )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JsonDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PaymentMethodId(This,value) )
    ( (This)->lpVtbl->get_JsonDetails(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Payments_IPaymentTokenFactory[] = L"Windows.ApplicationModel.Payments.IPaymentTokenFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
                  __RPC__in HSTRING paymentMethodId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithJsonDetails )(
        __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory * This,
                  __RPC__in HSTRING paymentMethodId,
                  __RPC__in HSTRING jsonDetails,
                           __RPC__deref_out_opt __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentToken * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,paymentMethodId,result) )
    ( (This)->lpVtbl->CreateWithJsonDetails(This,paymentMethodId,jsonDetails,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CPayments_CIPaymentTokenFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentAddress[] = L"Windows.ApplicationModel.Payments.PaymentAddress";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentCanMakePaymentResult[] = L"Windows.ApplicationModel.Payments.PaymentCanMakePaymentResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentCurrencyAmount[] = L"Windows.ApplicationModel.Payments.PaymentCurrencyAmount";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentDetails[] = L"Windows.ApplicationModel.Payments.PaymentDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentDetailsModifier[] = L"Windows.ApplicationModel.Payments.PaymentDetailsModifier";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentItem[] = L"Windows.ApplicationModel.Payments.PaymentItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMediator[] = L"Windows.ApplicationModel.Payments.PaymentMediator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMerchantInfo[] = L"Windows.ApplicationModel.Payments.PaymentMerchantInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentMethodData[] = L"Windows.ApplicationModel.Payments.PaymentMethodData";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentOptions[] = L"Windows.ApplicationModel.Payments.PaymentOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequest[] = L"Windows.ApplicationModel.Payments.PaymentRequest";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestChangedArgs[] = L"Windows.ApplicationModel.Payments.PaymentRequestChangedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestChangedResult[] = L"Windows.ApplicationModel.Payments.PaymentRequestChangedResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentRequestSubmitResult[] = L"Windows.ApplicationModel.Payments.PaymentRequestSubmitResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentResponse[] = L"Windows.ApplicationModel.Payments.PaymentResponse";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentShippingOption[] = L"Windows.ApplicationModel.Payments.PaymentShippingOption";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_ApplicationModel_Payments_PaymentToken[] = L"Windows.ApplicationModel.Payments.PaymentToken";
       
       
#pragma clang diagnostic pop
