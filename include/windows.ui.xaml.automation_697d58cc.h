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
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Automation.Peers.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                       __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation;
typedef struct __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotationVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CUIElement __FIIterator_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIUIElement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CUIElement __FIIterable_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CUIElement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CUIElement __FIVectorView_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIUIElement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                       __x_ABI_CWindows_CUI_CXaml_CIUIElement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CUIElement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CUIElement __FIVector_1_Windows__CUI__CXaml__CUIElement;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CUIElement;
typedef struct __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CUIElement **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIUIElement * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CUIElement * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIUIElement * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CUIElement
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CUIElementVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CDependencyObject __FIIterator_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CDependencyObject __FIIterable_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CDependencyObject **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                       __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CDependencyObject __FIVector_1_Windows__CUI__CXaml__CDependencyObject;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CDependencyObject;
typedef struct __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CDependencyObject **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CDependencyObject * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CDependencyObject
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CDependencyObjectVtbl *lpVtbl;
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
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationActiveEnd __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationActiveEnd;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationAnimationStyle __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationAnimationStyle;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationBulletStyle __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationBulletStyle;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretBidiMode __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretBidiMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretPosition __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretPosition;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationFlowDirections __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationFlowDirections;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationOutlineStyles __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationOutlineStyles;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationStyleId __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationStyleId;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextEditChangeType __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextEditChangeType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit;
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType
{
    AnnotationType_Unknown = 60000,
    AnnotationType_SpellingError = 60001,
    AnnotationType_GrammarError = 60002,
    AnnotationType_Comment = 60003,
    AnnotationType_FormulaError = 60004,
    AnnotationType_TrackChanges = 60005,
    AnnotationType_Header = 60006,
    AnnotationType_Footer = 60007,
    AnnotationType_Highlighted = 60008,
    AnnotationType_Endnote = 60009,
    AnnotationType_Footnote = 60010,
    AnnotationType_InsertionChange = 60011,
    AnnotationType_DeletionChange = 60012,
    AnnotationType_MoveChange = 60013,
    AnnotationType_FormatChange = 60014,
    AnnotationType_UnsyncedChange = 60015,
    AnnotationType_EditingLockedChange = 60016,
    AnnotationType_ExternalChange = 60017,
    AnnotationType_ConflictingChange = 60018,
    AnnotationType_Author = 60019,
    AnnotationType_AdvancedProofingIssue = 60020,
    AnnotationType_DataValidationError = 60021,
    AnnotationType_CircularReferenceError = 60022,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationActiveEnd
{
    AutomationActiveEnd_None = 0,
    AutomationActiveEnd_Start = 1,
    AutomationActiveEnd_End = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationAnimationStyle
{
    AutomationAnimationStyle_None = 0,
    AutomationAnimationStyle_LasVegasLights = 1,
    AutomationAnimationStyle_BlinkingBackground = 2,
    AutomationAnimationStyle_SparkleText = 3,
    AutomationAnimationStyle_MarchingBlackAnts = 4,
    AutomationAnimationStyle_MarchingRedAnts = 5,
    AutomationAnimationStyle_Shimmer = 6,
    AutomationAnimationStyle_Other = 7,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationBulletStyle
{
    AutomationBulletStyle_None = 0,
    AutomationBulletStyle_HollowRoundBullet = 1,
    AutomationBulletStyle_FilledRoundBullet = 2,
    AutomationBulletStyle_HollowSquareBullet = 3,
    AutomationBulletStyle_FilledSquareBullet = 4,
    AutomationBulletStyle_DashBullet = 5,
    AutomationBulletStyle_Other = 6,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretBidiMode
{
    AutomationCaretBidiMode_LTR = 0,
    AutomationCaretBidiMode_RTL = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationCaretPosition
{
    AutomationCaretPosition_Unknown = 0,
    AutomationCaretPosition_EndOfLine = 1,
    AutomationCaretPosition_BeginningOfLine = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationFlowDirections
{
    AutomationFlowDirections_Default = 0,
    AutomationFlowDirections_RightToLeft = 1,
    AutomationFlowDirections_BottomToTop = 2,
    AutomationFlowDirections_Vertical = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationOutlineStyles
{
    AutomationOutlineStyles_None = 0,
    AutomationOutlineStyles_Outline = 1,
    AutomationOutlineStyles_Shadow = 2,
    AutomationOutlineStyles_Engraved = 3,
    AutomationOutlineStyles_Embossed = 4,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationStyleId
{
    AutomationStyleId_Heading1 = 70001,
    AutomationStyleId_Heading2 = 70002,
    AutomationStyleId_Heading3 = 70003,
    AutomationStyleId_Heading4 = 70004,
    AutomationStyleId_Heading5 = 70005,
    AutomationStyleId_Heading6 = 70006,
    AutomationStyleId_Heading7 = 70007,
    AutomationStyleId_Heading8 = 70008,
    AutomationStyleId_Heading9 = 70009,
    AutomationStyleId_Title = 70010,
    AutomationStyleId_Subtitle = 70011,
    AutomationStyleId_Normal = 70012,
    AutomationStyleId_Emphasis = 70013,
    AutomationStyleId_Quote = 70014,
    AutomationStyleId_BulletedList = 70015,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextDecorationLineStyle
{
    AutomationTextDecorationLineStyle_None = 0,
    AutomationTextDecorationLineStyle_Single = 1,
    AutomationTextDecorationLineStyle_WordsOnly = 2,
    AutomationTextDecorationLineStyle_Double = 3,
    AutomationTextDecorationLineStyle_Dot = 4,
    AutomationTextDecorationLineStyle_Dash = 5,
    AutomationTextDecorationLineStyle_DashDot = 6,
    AutomationTextDecorationLineStyle_DashDotDot = 7,
    AutomationTextDecorationLineStyle_Wavy = 8,
    AutomationTextDecorationLineStyle_ThickSingle = 9,
    AutomationTextDecorationLineStyle_DoubleWavy = 10,
    AutomationTextDecorationLineStyle_ThickWavy = 11,
    AutomationTextDecorationLineStyle_LongDash = 12,
    AutomationTextDecorationLineStyle_ThickDash = 13,
    AutomationTextDecorationLineStyle_ThickDashDot = 14,
    AutomationTextDecorationLineStyle_ThickDashDotDot = 15,
    AutomationTextDecorationLineStyle_ThickDot = 16,
    AutomationTextDecorationLineStyle_ThickLongDash = 17,
    AutomationTextDecorationLineStyle_Other = 18,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAutomationTextEditChangeType
{
    AutomationTextEditChangeType_None = 0,
    AutomationTextEditChangeType_AutoCorrect = 1,
    AutomationTextEditChangeType_Composition = 2,
    AutomationTextEditChangeType_CompositionFinalized = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition
{
    DockPosition_Top = 0,
    DockPosition_Left = 1,
    DockPosition_Bottom = 2,
    DockPosition_Right = 3,
    DockPosition_Fill = 4,
    DockPosition_None = 5,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState
{
    ExpandCollapseState_Collapsed = 0,
    ExpandCollapseState_Expanded = 1,
    ExpandCollapseState_PartiallyExpanded = 2,
    ExpandCollapseState_LeafNode = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor
{
    RowOrColumnMajor_RowMajor = 0,
    RowOrColumnMajor_ColumnMajor = 1,
    RowOrColumnMajor_Indeterminate = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount
{
    ScrollAmount_LargeDecrement = 0,
    ScrollAmount_SmallDecrement = 1,
    ScrollAmount_NoAmount = 2,
    ScrollAmount_LargeIncrement = 3,
    ScrollAmount_SmallIncrement = 4,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection
{
    SupportedTextSelection_None = 0,
    SupportedTextSelection_Single = 1,
    SupportedTextSelection_Multiple = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType
{
    SynchronizedInputType_KeyUp = 1,
    SynchronizedInputType_KeyDown = 2,
    SynchronizedInputType_LeftMouseUp = 4,
    SynchronizedInputType_LeftMouseDown = 8,
    SynchronizedInputType_RightMouseUp = 16,
    SynchronizedInputType_RightMouseDown = 32,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState
{
    ToggleState_Off = 0,
    ToggleState_On = 1,
    ToggleState_Indeterminate = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState
{
    WindowInteractionState_Running = 0,
    WindowInteractionState_Closing = 1,
    WindowInteractionState_ReadyForUserInteraction = 2,
    WindowInteractionState_BlockedByModalWindow = 3,
    WindowInteractionState_NotResponding = 4,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState
{
    WindowVisualState_Normal = 0,
    WindowVisualState_Maximized = 1,
    WindowVisualState_Minimized = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit
{
    ZoomUnit_NoAmount = 0,
    ZoomUnit_LargeDecrement = 1,
    ZoomUnit_SmallDecrement = 2,
    ZoomUnit_LargeIncrement = 3,
    ZoomUnit_SmallIncrement = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAnnotationPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IAnnotationPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeNameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateTimeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnnotationTypeIdProperty(This,value) )
    ( (This)->lpVtbl->get_AnnotationTypeNameProperty(This,value) )
    ( (This)->lpVtbl->get_AuthorProperty(This,value) )
    ( (This)->lpVtbl->get_DateTimeProperty(This,value) )
    ( (This)->lpVtbl->get_TargetProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAnnotationPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotation[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotation";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Element )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Element )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_Element(This,value) )
    ( (This)->lpVtbl->put_Element(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotationFactory[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotationFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithElementParameter )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType type,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,type,value) )
    ( (This)->lpVtbl->CreateWithElementParameter(This,type,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationAnnotationStatics[] = L"Windows.UI.Xaml.Automation.IAutomationAnnotationStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TypeProperty(This,value) )
    ( (This)->lpVtbl->get_ElementProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationAnnotationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiers[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AcceleratorKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutomationIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingRectangleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClassNameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClickablePointProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasKeyboardFocusProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HelpTextProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsContentElementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsControlElementProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsKeyboardFocusableProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOffscreenProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPasswordProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRequiredForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemStatusProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LabeledByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalizedControlTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OrientationProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LiveSettingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AcceleratorKeyProperty(This,value) )
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )
    ( (This)->lpVtbl->get_AutomationIdProperty(This,value) )
    ( (This)->lpVtbl->get_BoundingRectangleProperty(This,value) )
    ( (This)->lpVtbl->get_ClassNameProperty(This,value) )
    ( (This)->lpVtbl->get_ClickablePointProperty(This,value) )
    ( (This)->lpVtbl->get_ControlTypeProperty(This,value) )
    ( (This)->lpVtbl->get_HasKeyboardFocusProperty(This,value) )
    ( (This)->lpVtbl->get_HelpTextProperty(This,value) )
    ( (This)->lpVtbl->get_IsContentElementProperty(This,value) )
    ( (This)->lpVtbl->get_IsControlElementProperty(This,value) )
    ( (This)->lpVtbl->get_IsEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_IsKeyboardFocusableProperty(This,value) )
    ( (This)->lpVtbl->get_IsOffscreenProperty(This,value) )
    ( (This)->lpVtbl->get_IsPasswordProperty(This,value) )
    ( (This)->lpVtbl->get_IsRequiredForFormProperty(This,value) )
    ( (This)->lpVtbl->get_ItemStatusProperty(This,value) )
    ( (This)->lpVtbl->get_ItemTypeProperty(This,value) )
    ( (This)->lpVtbl->get_LabeledByProperty(This,value) )
    ( (This)->lpVtbl->get_LocalizedControlTypeProperty(This,value) )
    ( (This)->lpVtbl->get_NameProperty(This,value) )
    ( (This)->lpVtbl->get_OrientationProperty(This,value) )
    ( (This)->lpVtbl->get_LiveSettingProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics2[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ControlledPeersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ControlledPeersProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics3[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PositionInSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SizeOfSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnnotationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PositionInSetProperty(This,value) )
    ( (This)->lpVtbl->get_SizeOfSetProperty(This,value) )
    ( (This)->lpVtbl->get_LevelProperty(This,value) )
    ( (This)->lpVtbl->get_AnnotationsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics4[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalizedLandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LandmarkTypeProperty(This,value) )
    ( (This)->lpVtbl->get_LocalizedLandmarkTypeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics5[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDataValidForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullDescriptionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DescribedByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowsToProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowsFromProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPeripheralProperty(This,value) )
    ( (This)->lpVtbl->get_IsDataValidForFormProperty(This,value) )
    ( (This)->lpVtbl->get_FullDescriptionProperty(This,value) )
    ( (This)->lpVtbl->get_DescribedByProperty(This,value) )
    ( (This)->lpVtbl->get_FlowsToProperty(This,value) )
    ( (This)->lpVtbl->get_FlowsFromProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics6[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CultureProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CultureProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics7[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeadingLevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeadingLevelProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationElementIdentifiersStatics8[] = L"Windows.UI.Xaml.Automation.IAutomationElementIdentifiersStatics8";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDialogProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDialogProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationElementIdentifiersStatics8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationProperties[] = L"Windows.UI.Xaml.Automation.IAutomationProperties";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AcceleratorKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAcceleratorKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAcceleratorKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutomationIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAutomationId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAutomationId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HelpTextProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHelpText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetHelpText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRequiredForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsRequiredForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsRequiredForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemStatusProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemStatus )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetItemStatus )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ItemTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItemType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetItemType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LabeledByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLabeledBy )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLabeledBy )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LiveSettingProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLiveSetting )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLiveSetting )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLiveSetting value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AcceleratorKeyProperty(This,value) )
    ( (This)->lpVtbl->GetAcceleratorKey(This,element,result) )
    ( (This)->lpVtbl->SetAcceleratorKey(This,element,value) )
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )
    ( (This)->lpVtbl->GetAccessKey(This,element,result) )
    ( (This)->lpVtbl->SetAccessKey(This,element,value) )
    ( (This)->lpVtbl->get_AutomationIdProperty(This,value) )
    ( (This)->lpVtbl->GetAutomationId(This,element,result) )
    ( (This)->lpVtbl->SetAutomationId(This,element,value) )
    ( (This)->lpVtbl->get_HelpTextProperty(This,value) )
    ( (This)->lpVtbl->GetHelpText(This,element,result) )
    ( (This)->lpVtbl->SetHelpText(This,element,value) )
    ( (This)->lpVtbl->get_IsRequiredForFormProperty(This,value) )
    ( (This)->lpVtbl->GetIsRequiredForForm(This,element,result) )
    ( (This)->lpVtbl->SetIsRequiredForForm(This,element,value) )
    ( (This)->lpVtbl->get_ItemStatusProperty(This,value) )
    ( (This)->lpVtbl->GetItemStatus(This,element,result) )
    ( (This)->lpVtbl->SetItemStatus(This,element,value) )
    ( (This)->lpVtbl->get_ItemTypeProperty(This,value) )
    ( (This)->lpVtbl->GetItemType(This,element,result) )
    ( (This)->lpVtbl->SetItemType(This,element,value) )
    ( (This)->lpVtbl->get_LabeledByProperty(This,value) )
    ( (This)->lpVtbl->GetLabeledBy(This,element,result) )
    ( (This)->lpVtbl->SetLabeledBy(This,element,value) )
    ( (This)->lpVtbl->get_NameProperty(This,value) )
    ( (This)->lpVtbl->GetName(This,element,result) )
    ( (This)->lpVtbl->SetName(This,element,value) )
    ( (This)->lpVtbl->get_LiveSettingProperty(This,value) )
    ( (This)->lpVtbl->GetLiveSetting(This,element,result) )
    ( (This)->lpVtbl->SetLiveSetting(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics2[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AccessibilityViewProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAccessibilityView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetAccessibilityView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAccessibilityView value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControlledPeersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetControlledPeers )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CUIElement * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AccessibilityViewProperty(This,value) )
    ( (This)->lpVtbl->GetAccessibilityView(This,element,result) )
    ( (This)->lpVtbl->SetAccessibilityView(This,element,value) )
    ( (This)->lpVtbl->get_ControlledPeersProperty(This,value) )
    ( (This)->lpVtbl->GetControlledPeers(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics3[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PositionInSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPositionInSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetPositionInSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SizeOfSetProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSizeOfSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetSizeOfSet )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnnotationsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotations )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CAutomation__CAutomationAnnotation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PositionInSetProperty(This,value) )
    ( (This)->lpVtbl->GetPositionInSet(This,element,result) )
    ( (This)->lpVtbl->SetPositionInSet(This,element,value) )
    ( (This)->lpVtbl->get_SizeOfSetProperty(This,value) )
    ( (This)->lpVtbl->GetSizeOfSet(This,element,result) )
    ( (This)->lpVtbl->SetSizeOfSet(This,element,value) )
    ( (This)->lpVtbl->get_LevelProperty(This,value) )
    ( (This)->lpVtbl->GetLevel(This,element,result) )
    ( (This)->lpVtbl->SetLevel(This,element,value) )
    ( (This)->lpVtbl->get_AnnotationsProperty(This,value) )
    ( (This)->lpVtbl->GetAnnotations(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics4[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationLandmarkType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalizedLandmarkTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocalizedLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLocalizedLandmarkType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LandmarkTypeProperty(This,value) )
    ( (This)->lpVtbl->GetLandmarkType(This,element,result) )
    ( (This)->lpVtbl->SetLandmarkType(This,element,value) )
    ( (This)->lpVtbl->get_LocalizedLandmarkTypeProperty(This,value) )
    ( (This)->lpVtbl->GetLocalizedLandmarkType(This,element,result) )
    ( (This)->lpVtbl->SetLocalizedLandmarkType(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics5[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPeripheralProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsPeripheral )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsPeripheral )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDataValidForFormProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsDataValidForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsDataValidForForm )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullDescriptionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFullDescription )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetFullDescription )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LocalizedControlTypeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetLocalizedControlType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetLocalizedControlType )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DescribedByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDescribedBy )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowsToProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlowsTo )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowsFromProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFlowsFrom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CDependencyObject * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPeripheralProperty(This,value) )
    ( (This)->lpVtbl->GetIsPeripheral(This,element,result) )
    ( (This)->lpVtbl->SetIsPeripheral(This,element,value) )
    ( (This)->lpVtbl->get_IsDataValidForFormProperty(This,value) )
    ( (This)->lpVtbl->GetIsDataValidForForm(This,element,result) )
    ( (This)->lpVtbl->SetIsDataValidForForm(This,element,value) )
    ( (This)->lpVtbl->get_FullDescriptionProperty(This,value) )
    ( (This)->lpVtbl->GetFullDescription(This,element,result) )
    ( (This)->lpVtbl->SetFullDescription(This,element,value) )
    ( (This)->lpVtbl->get_LocalizedControlTypeProperty(This,value) )
    ( (This)->lpVtbl->GetLocalizedControlType(This,element,result) )
    ( (This)->lpVtbl->SetLocalizedControlType(This,element,value) )
    ( (This)->lpVtbl->get_DescribedByProperty(This,value) )
    ( (This)->lpVtbl->GetDescribedBy(This,element,result) )
    ( (This)->lpVtbl->get_FlowsToProperty(This,value) )
    ( (This)->lpVtbl->GetFlowsTo(This,element,result) )
    ( (This)->lpVtbl->get_FlowsFromProperty(This,value) )
    ( (This)->lpVtbl->GetFlowsFrom(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics6[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CultureProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCulture )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetCulture )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CultureProperty(This,value) )
    ( (This)->lpVtbl->GetCulture(This,element,result) )
    ( (This)->lpVtbl->SetCulture(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics7[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeadingLevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetHeadingLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetHeadingLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationHeadingLevel value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeadingLevelProperty(This,value) )
    ( (This)->lpVtbl->GetHeadingLevel(This,element,result) )
    ( (This)->lpVtbl->SetHeadingLevel(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationPropertiesStatics8[] = L"Windows.UI.Xaml.Automation.IAutomationPropertiesStatics8";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDialogProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIsDialog )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetIsDialog )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDialogProperty(This,value) )
    ( (This)->lpVtbl->GetIsDialog(This,element,result) )
    ( (This)->lpVtbl->SetIsDialog(This,element,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertiesStatics8;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IAutomationProperty[] = L"Windows.UI.Xaml.Automation.IAutomationProperty";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationPropertyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDockPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDockPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDockPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDockPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DockPositionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DockPositionProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDockPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDragPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDragPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDragPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDragPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DropEffectProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropEffectsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GrabbedItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGrabbedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DropEffectProperty(This,value) )
    ( (This)->lpVtbl->get_DropEffectsProperty(This,value) )
    ( (This)->lpVtbl->get_GrabbedItemsProperty(This,value) )
    ( (This)->lpVtbl->get_IsGrabbedProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDragPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IDropTargetPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IDropTargetPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffectProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropTargetEffectsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DropTargetEffectProperty(This,value) )
    ( (This)->lpVtbl->get_DropTargetEffectsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIDropTargetPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IExpandCollapsePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IExpandCollapsePatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExpandCollapseStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExpandCollapseStateProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIExpandCollapsePatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IGridItemPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColumnProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColumnSpanProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainingGridProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowSpanProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColumnProperty(This,value) )
    ( (This)->lpVtbl->get_ColumnSpanProperty(This,value) )
    ( (This)->lpVtbl->get_ContainingGridProperty(This,value) )
    ( (This)->lpVtbl->get_RowProperty(This,value) )
    ( (This)->lpVtbl->get_RowSpanProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridItemPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IGridPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IGridPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IGridPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColumnCountProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowCountProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColumnCountProperty(This,value) )
    ( (This)->lpVtbl->get_RowCountProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIGridPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IMultipleViewPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IMultipleViewPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentViewProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedViewsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentViewProperty(This,value) )
    ( (This)->lpVtbl->get_SupportedViewsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIMultipleViewPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IRangeValuePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IRangeValuePatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReadOnlyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LargeChangeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaximumProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinimumProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmallChangeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReadOnlyProperty(This,value) )
    ( (This)->lpVtbl->get_LargeChangeProperty(This,value) )
    ( (This)->lpVtbl->get_MaximumProperty(This,value) )
    ( (This)->lpVtbl->get_MinimumProperty(This,value) )
    ( (This)->lpVtbl->get_SmallChangeProperty(This,value) )
    ( (This)->lpVtbl->get_ValueProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIRangeValuePatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IScrollPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IScrollPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IScrollPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontallyScrollableProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollPercentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalViewSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NoScroll )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticallyScrollableProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollPercentProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalViewSizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontallyScrollableProperty(This,value) )
    ( (This)->lpVtbl->get_HorizontalScrollPercentProperty(This,value) )
    ( (This)->lpVtbl->get_HorizontalViewSizeProperty(This,value) )
    ( (This)->lpVtbl->get_NoScroll(This,value) )
    ( (This)->lpVtbl->get_VerticallyScrollableProperty(This,value) )
    ( (This)->lpVtbl->get_VerticalScrollPercentProperty(This,value) )
    ( (This)->lpVtbl->get_VerticalViewSizeProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIScrollPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISelectionItemPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSelectedProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionContainerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSelectedProperty(This,value) )
    ( (This)->lpVtbl->get_SelectionContainerProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionItemPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISelectionPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISelectionPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanSelectMultipleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSelectionRequiredProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanSelectMultipleProperty(This,value) )
    ( (This)->lpVtbl->get_IsSelectionRequiredProperty(This,value) )
    ( (This)->lpVtbl->get_SelectionProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISelectionPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ISpreadsheetItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ISpreadsheetItemPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FormulaProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FormulaProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CISpreadsheetItemPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IStylesPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IStylesPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IStylesPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedPropertiesProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillPatternColorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillPatternStyleProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShapeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleIdProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleNameProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedPropertiesProperty(This,value) )
    ( (This)->lpVtbl->get_FillColorProperty(This,value) )
    ( (This)->lpVtbl->get_FillPatternColorProperty(This,value) )
    ( (This)->lpVtbl->get_FillPatternStyleProperty(This,value) )
    ( (This)->lpVtbl->get_ShapeProperty(This,value) )
    ( (This)->lpVtbl->get_StyleIdProperty(This,value) )
    ( (This)->lpVtbl->get_StyleNameProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIStylesPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITableItemPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITableItemPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColumnHeaderItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowHeaderItemsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColumnHeaderItemsProperty(This,value) )
    ( (This)->lpVtbl->get_RowHeaderItemsProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITableItemPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITablePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITablePatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITablePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITablePatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColumnHeadersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowHeadersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowOrColumnMajorProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColumnHeadersProperty(This,value) )
    ( (This)->lpVtbl->get_RowHeadersProperty(This,value) )
    ( (This)->lpVtbl->get_RowOrColumnMajorProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITablePatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITogglePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITogglePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITogglePatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ToggleStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ToggleStateProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITogglePatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPattern2Identifiers[] = L"Windows.UI.Xaml.Automation.ITransformPattern2Identifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2Identifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPattern2IdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITransformPattern2IdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanZoomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxZoomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinZoomProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanZoomProperty(This,value) )
    ( (This)->lpVtbl->get_ZoomLevelProperty(This,value) )
    ( (This)->lpVtbl->get_MaxZoomProperty(This,value) )
    ( (This)->lpVtbl->get_MinZoomProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPattern2IdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_ITransformPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.ITransformPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanMoveProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanResizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanRotateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanMoveProperty(This,value) )
    ( (This)->lpVtbl->get_CanResizeProperty(This,value) )
    ( (This)->lpVtbl->get_CanRotateProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CITransformPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IValuePatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IValuePatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IValuePatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReadOnlyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ValueProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReadOnlyProperty(This,value) )
    ( (This)->lpVtbl->get_ValueProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIValuePatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IWindowPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiers";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_IWindowPatternIdentifiersStatics[] = L"Windows.UI.Xaml.Automation.IWindowPatternIdentifiersStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanMaximizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanMinimizeProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsModalProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTopmostProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WindowInteractionStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WindowVisualStateProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanMaximizeProperty(This,value) )
    ( (This)->lpVtbl->get_CanMinimizeProperty(This,value) )
    ( (This)->lpVtbl->get_IsModalProperty(This,value) )
    ( (This)->lpVtbl->get_IsTopmostProperty(This,value) )
    ( (This)->lpVtbl->get_WindowInteractionStateProperty(This,value) )
    ( (This)->lpVtbl->get_WindowVisualStateProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CIWindowPatternIdentifiersStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AnnotationPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.AnnotationPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationAnnotation[] = L"Windows.UI.Xaml.Automation.AutomationAnnotation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationElementIdentifiers[] = L"Windows.UI.Xaml.Automation.AutomationElementIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationProperties[] = L"Windows.UI.Xaml.Automation.AutomationProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_AutomationProperty[] = L"Windows.UI.Xaml.Automation.AutomationProperty";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DockPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DockPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DragPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DragPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_DropTargetPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.DropTargetPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ExpandCollapsePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ExpandCollapsePatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_GridItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.GridItemPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_GridPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.GridPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_MultipleViewPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.MultipleViewPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_RangeValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.RangeValuePatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ScrollPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ScrollPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SelectionItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SelectionItemPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SelectionPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SelectionPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_SpreadsheetItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.SpreadsheetItemPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_StylesPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.StylesPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TableItemPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TableItemPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TablePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TablePatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TogglePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TogglePatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TransformPattern2Identifiers[] = L"Windows.UI.Xaml.Automation.TransformPattern2Identifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_TransformPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.TransformPatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_ValuePatternIdentifiers[] = L"Windows.UI.Xaml.Automation.ValuePatternIdentifiers";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_WindowPatternIdentifiers[] = L"Windows.UI.Xaml.Automation.WindowPatternIdentifiers";
       
       
#pragma clang diagnostic pop
