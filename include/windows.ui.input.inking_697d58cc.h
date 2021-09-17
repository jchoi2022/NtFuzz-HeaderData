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
#include "Windows.Foundation.Numerics.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics;
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkPoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognitionResult **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkRecognizer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizer
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkStroke **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;
typedef struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;
typedef struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                       __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                       __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                       __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizerVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                       __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                       __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegmentVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CInput__CInking__CInkPoint;
typedef struct __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This, __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl;
interface __FIVector_1_Windows__CUI__CInput__CInking__CInkPoint
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CInput__CInking__CInkPointVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * This, __RPC__out __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResultVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgsVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CDateTime;
typedef interface __FIReference_1_Windows__CFoundation__CDateTime __FIReference_1_Windows__CFoundation__CDateTime;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CDateTime;
typedef struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CDateTime * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CDateTime *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CDateTimeVtbl;
interface __FIReference_1_Windows__CFoundation__CDateTime
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CDateTimeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CFoundation_CPoint;
typedef interface __FIIterator_1_Windows__CFoundation__CPoint __FIIterator_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CPoint;
typedef struct __FIIterator_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CPoint *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CPoint *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CPointVtbl;
interface __FIIterator_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CPoint __FIIterable_1_Windows__CFoundation__CPoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CPoint;
typedef struct __FIIterable_1_Windows__CFoundation__CPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CPoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CPoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CPointVtbl;
interface __FIIterable_1_Windows__CFoundation__CPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIAsyncActionProgressHandler_1_UINT64 __FIAsyncActionProgressHandler_1_UINT64;
EXTERN_C const IID IID___FIAsyncActionProgressHandler_1_UINT64;
typedef interface __FIAsyncActionWithProgress_1_UINT64 __FIAsyncActionWithProgress_1_UINT64;
typedef struct __FIAsyncActionProgressHandler_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionProgressHandler_1_UINT64 * This, __RPC__in_opt __FIAsyncActionWithProgress_1_UINT64 *asyncInfo, UINT64 progressInfo);
    END_INTERFACE
} __FIAsyncActionProgressHandler_1_UINT64Vtbl;
interface __FIAsyncActionProgressHandler_1_UINT64
{
    CONST_VTBL struct __FIAsyncActionProgressHandler_1_UINT64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncActionWithProgressCompletedHandler_1_UINT64 __FIAsyncActionWithProgressCompletedHandler_1_UINT64;
EXTERN_C const IID IID___FIAsyncActionWithProgressCompletedHandler_1_UINT64;
typedef interface __FIAsyncActionWithProgress_1_UINT64 __FIAsyncActionWithProgress_1_UINT64;
typedef struct __FIAsyncActionWithProgressCompletedHandler_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncActionWithProgressCompletedHandler_1_UINT64 * This, __RPC__in_opt __FIAsyncActionWithProgress_1_UINT64 *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncActionWithProgressCompletedHandler_1_UINT64Vtbl;
interface __FIAsyncActionWithProgressCompletedHandler_1_UINT64
{
    CONST_VTBL struct __FIAsyncActionWithProgressCompletedHandler_1_UINT64Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncActionWithProgress_1_UINT64 __FIAsyncActionWithProgress_1_UINT64;
EXTERN_C const IID IID___FIAsyncActionWithProgress_1_UINT64;
typedef struct __FIAsyncActionWithProgress_1_UINT64Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, __RPC__in_opt __FIAsyncActionProgressHandler_1_UINT64 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, __RPC__deref_out_opt __FIAsyncActionProgressHandler_1_UINT64 **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, __RPC__in_opt __FIAsyncActionWithProgressCompletedHandler_1_UINT64 *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This, __RPC__deref_out_opt __FIAsyncActionWithProgressCompletedHandler_1_UINT64 **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncActionWithProgress_1_UINT64 * This);
    END_INTERFACE
} __FIAsyncActionWithProgress_1_UINT64Vtbl;
interface __FIAsyncActionWithProgress_1_UINT64
{
    CONST_VTBL struct __FIAsyncActionWithProgress_1_UINT64Vtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CHandwritingLineHeight __x_ABI_CWindows_CUI_CInput_CInking_CHandwritingLineHeight;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat __x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CPenHandedness __x_ABI_CWindows_CUI_CInput_CInking_CPenHandedness;
typedef enum __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape;
enum __x_ABI_CWindows_CUI_CInput_CInking_CHandwritingLineHeight
{
    HandwritingLineHeight_Small = 0,
    HandwritingLineHeight_Medium = 1,
    HandwritingLineHeight_Large = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind
{
    InkDrawingAttributesKind_Default = 0,
    InkDrawingAttributesKind_Pencil = 1,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment
{
    InkHighContrastAdjustment_UseSystemColorsWhenNecessary = 0,
    InkHighContrastAdjustment_UseSystemColors = 1,
    InkHighContrastAdjustment_UseOriginalColors = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode
{
    InkInputProcessingMode_None = 0,
    InkInputProcessingMode_Inking = 1,
    InkInputProcessingMode_Erasing = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction
{
    InkInputRightDragAction_LeaveUnprocessed = 0,
    InkInputRightDragAction_AllowProcessing = 1,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode
{
    InkManipulationMode_Inking = 0,
    InkManipulationMode_Erasing = 1,
    InkManipulationMode_Selecting = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat
{
    InkPersistenceFormat_GifWithEmbeddedIsf = 0,
    InkPersistenceFormat_Isf = 1,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration
{
    InkPresenterPredefinedConfiguration_SimpleSinglePointer = 0,
    InkPresenterPredefinedConfiguration_SimpleMultiplePointer = 1,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind
{
    InkPresenterStencilKind_Other = 0,
    InkPresenterStencilKind_Ruler = 1,
    InkPresenterStencilKind_Protractor = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget
{
    InkRecognitionTarget_All = 0,
    InkRecognitionTarget_Selected = 1,
    InkRecognitionTarget_Recent = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CPenHandedness
{
    PenHandedness_Right = 0,
    PenHandedness_Left = 1,
};
enum __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape
{
    PenTipShape_Circle = 0,
    PenTipShape_Rectangle = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Color )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Color )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PenTip )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PenTip )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CPenTipShape value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Size )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IgnorePressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IgnorePressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FitToCurve )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FitToCurve )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Color(This,value) )
    ( (This)->lpVtbl->put_Color(This,value) )
    ( (This)->lpVtbl->get_PenTip(This,value) )
    ( (This)->lpVtbl->put_PenTip(This,value) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->put_Size(This,value) )
    ( (This)->lpVtbl->get_IgnorePressure(This,value) )
    ( (This)->lpVtbl->put_IgnorePressure(This,value) )
    ( (This)->lpVtbl->get_FitToCurve(This,value) )
    ( (This)->lpVtbl->put_FitToCurve(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes2[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PenTipTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PenTipTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DrawAsHighlighter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DrawAsHighlighter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PenTipTransform(This,value) )
    ( (This)->lpVtbl->put_PenTipTransform(This,value) )
    ( (This)->lpVtbl->get_DrawAsHighlighter(This,value) )
    ( (This)->lpVtbl->put_DrawAsHighlighter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes3[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes3";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkDrawingAttributesKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PencilProperties )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_PencilProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes4[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes4";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IgnoreTilt )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IgnoreTilt )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IgnoreTilt(This,value) )
    ( (This)->lpVtbl->put_IgnoreTilt(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributes5[] = L"Windows.UI.Input.Inking.IInkDrawingAttributes5";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ModelerAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ModelerAttributes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributesPencilProperties[] = L"Windows.UI.Input.Inking.IInkDrawingAttributesPencilProperties";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilPropertiesVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Opacity(This,value) )
    ( (This)->lpVtbl->put_Opacity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesPencilProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkDrawingAttributesStatics[] = L"Windows.UI.Input.Inking.IInkDrawingAttributesStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForPencil )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForPencil(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkInputConfiguration[] = L"Windows.UI.Input.Inking.IInkInputConfiguration";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPrimaryBarrelButtonInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPrimaryBarrelButtonInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEraserInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEraserInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPrimaryBarrelButtonInputEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPrimaryBarrelButtonInputEnabled(This,value) )
    ( (This)->lpVtbl->get_IsEraserInputEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEraserInputEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkInputProcessingConfiguration[] = L"Windows.UI.Input.Inking.IInkInputProcessingConfiguration";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkInputProcessingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RightDragAction )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RightDragAction )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkInputRightDragAction value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_RightDragAction(This,value) )
    ( (This)->lpVtbl->put_RightDragAction(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkManager[] = L"Windows.UI.Input.Inking.IInkManager";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkManipulationMode value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessPointerDown )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessPointerUpdate )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
                           __RPC__deref_out_opt IInspectable * * updateInformation
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessPointerUp )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * updateRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * drawingAttributes
        );
                    HRESULT ( STDMETHODCALLTYPE *RecognizeAsync2 )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget recognitionTarget,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkManagerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->ProcessPointerDown(This,pointerPoint) )
    ( (This)->lpVtbl->ProcessPointerUpdate(This,pointerPoint,updateInformation) )
    ( (This)->lpVtbl->ProcessPointerUp(This,pointerPoint,updateRectangle) )
    ( (This)->lpVtbl->SetDefaultDrawingAttributes(This,drawingAttributes) )
    ( (This)->lpVtbl->RecognizeAsync2(This,recognitionTarget,recognitionResults) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkModelerAttributes[] = L"Windows.UI.Input.Inking.IInkModelerAttributes";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PredictionTime )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PredictionTime )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScalingFactor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScalingFactor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes * This,
                  FLOAT value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributesVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PredictionTime(This,value) )
    ( (This)->lpVtbl->put_PredictionTime(This,value) )
    ( (This)->lpVtbl->get_ScalingFactor(This,value) )
    ( (This)->lpVtbl->put_ScalingFactor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkModelerAttributes;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPoint[] = L"Windows.UI.Input.Inking.IInkPoint";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Pressure(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPoint2[] = L"Windows.UI.Input.Inking.IInkPoint2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2 * This,
                           __RPC__out UINT64 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TiltX(This,value) )
    ( (This)->lpVtbl->get_TiltY(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPointFactory[] = L"Windows.UI.Input.Inking.IInkPointFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInkPoint )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory * This,
                  __x_ABI_CWindows_CFoundation_CPoint position,
                  FLOAT pressure,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInkPoint(This,position,pressure,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPointFactory2[] = L"Windows.UI.Input.Inking.IInkPointFactory2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInkPointWithTiltAndTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2 * This,
                  __x_ABI_CWindows_CFoundation_CPoint position,
                  FLOAT pressure,
                  FLOAT tiltX,
                  FLOAT tiltY,
                  UINT64 timestamp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPoint * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInkPointWithTiltAndTimestamp(This,position,pressure,tiltX,tiltY,timestamp,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPointFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenter[] = L"Windows.UI.Input.Inking.IInkPresenter";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputDeviceTypes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InputDeviceTypes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UnprocessedInput )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeInput )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputProcessingConfiguration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputProcessingConfiguration * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeContainer )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeContainer )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * value
        );
    HRESULT ( STDMETHODCALLTYPE *ActivateCustomDrying )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * * inkSynchronizer
        );
    HRESULT ( STDMETHODCALLTYPE *SetPredefinedConfiguration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterPredefinedConfiguration value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StrokesCollected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesCollectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StrokesCollected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StrokesErased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkPresenter_Windows__CUI__CInput__CInking__CInkStrokesErasedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StrokesErased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsInputEnabled(This,value) )
    ( (This)->lpVtbl->put_IsInputEnabled(This,value) )
    ( (This)->lpVtbl->get_InputDeviceTypes(This,value) )
    ( (This)->lpVtbl->put_InputDeviceTypes(This,value) )
    ( (This)->lpVtbl->get_UnprocessedInput(This,value) )
    ( (This)->lpVtbl->get_StrokeInput(This,value) )
    ( (This)->lpVtbl->get_InputProcessingConfiguration(This,value) )
    ( (This)->lpVtbl->get_StrokeContainer(This,value) )
    ( (This)->lpVtbl->put_StrokeContainer(This,value) )
    ( (This)->lpVtbl->CopyDefaultDrawingAttributes(This,value) )
    ( (This)->lpVtbl->UpdateDefaultDrawingAttributes(This,value) )
    ( (This)->lpVtbl->ActivateCustomDrying(This,inkSynchronizer) )
    ( (This)->lpVtbl->SetPredefinedConfiguration(This,value) )
    ( (This)->lpVtbl->add_StrokesCollected(This,handler,cookie) )
    ( (This)->lpVtbl->remove_StrokesCollected(This,cookie) )
    ( (This)->lpVtbl->add_StrokesErased(This,handler,cookie) )
    ( (This)->lpVtbl->remove_StrokesErased(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenter2[] = L"Windows.UI.Input.Inking.IInkPresenter2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HighContrastAdjustment )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2 * This,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkHighContrastAdjustment value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HighContrastAdjustment(This,value) )
    ( (This)->lpVtbl->put_HighContrastAdjustment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenter3[] = L"Windows.UI.Input.Inking.IInkPresenter3";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputConfiguration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkInputConfiguration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputConfiguration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterProtractor[] = L"Windows.UI.Input.Inking.IInkPresenterProtractor";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AreRaysVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AreRaysVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCenterMarkerVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCenterMarkerVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAngleReadoutVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAngleReadoutVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsResizable )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsResizable )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Radius )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Radius )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccentColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccentColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AreTickMarksVisible(This,value) )
    ( (This)->lpVtbl->put_AreTickMarksVisible(This,value) )
    ( (This)->lpVtbl->get_AreRaysVisible(This,value) )
    ( (This)->lpVtbl->put_AreRaysVisible(This,value) )
    ( (This)->lpVtbl->get_IsCenterMarkerVisible(This,value) )
    ( (This)->lpVtbl->put_IsCenterMarkerVisible(This,value) )
    ( (This)->lpVtbl->get_IsAngleReadoutVisible(This,value) )
    ( (This)->lpVtbl->put_IsAngleReadoutVisible(This,value) )
    ( (This)->lpVtbl->get_IsResizable(This,value) )
    ( (This)->lpVtbl->put_IsResizable(This,value) )
    ( (This)->lpVtbl->get_Radius(This,value) )
    ( (This)->lpVtbl->put_Radius(This,value) )
    ( (This)->lpVtbl->get_AccentColor(This,value) )
    ( (This)->lpVtbl->put_AccentColor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterProtractorFactory[] = L"Windows.UI.Input.Inking.IInkPresenterProtractorFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractor * * inkPresenterProtractor
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,inkPresenter,inkPresenterProtractor) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterProtractorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRuler[] = L"Windows.UI.Input.Inking.IInkPresenterRuler";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Width )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->put_Length(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->put_Width(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRuler2[] = L"Windows.UI.Input.Inking.IInkPresenterRuler2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AreTickMarksVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCompassVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsCompassVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AreTickMarksVisible(This,value) )
    ( (This)->lpVtbl->put_AreTickMarksVisible(This,value) )
    ( (This)->lpVtbl->get_IsCompassVisible(This,value) )
    ( (This)->lpVtbl->put_IsCompassVisible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterRulerFactory[] = L"Windows.UI.Input.Inking.IInkPresenterRulerFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * inkPresenter,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRuler * * inkPresenterRuler
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,inkPresenter,inkPresenterRuler) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterRulerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkPresenterStencil[] = L"Windows.UI.Input.Inking.IInkPresenterStencil";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencilVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CInkPresenterStencilKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsVisible )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Transform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Transform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencilVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencilVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
    ( (This)->lpVtbl->get_IsVisible(This,value) )
    ( (This)->lpVtbl->put_IsVisible(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )
    ( (This)->lpVtbl->get_Transform(This,value) )
    ( (This)->lpVtbl->put_Transform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenterStencil;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognitionResult[] = L"Windows.UI.Input.Inking.IInkRecognitionResult";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * boundingRect
        );
    HRESULT ( STDMETHODCALLTYPE *GetTextCandidates )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * textCandidates
        );
    HRESULT ( STDMETHODCALLTYPE *GetStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * strokes
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResultVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BoundingRect(This,boundingRect) )
    ( (This)->lpVtbl->GetTextCandidates(This,textCandidates) )
    ( (This)->lpVtbl->GetStrokes(This,strokes) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognitionResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognizer[] = L"Windows.UI.Input.Inking.IInkRecognizer";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Name )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Name(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkRecognizerContainer[] = L"Windows.UI.Input.Inking.IInkRecognizerContainer";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDefaultRecognizer )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizer * recognizer
        );
    HRESULT ( STDMETHODCALLTYPE *RecognizeAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * strokeCollection,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkRecognitionTarget recognitionTarget,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
        );
    HRESULT ( STDMETHODCALLTYPE *GetRecognizers )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognizer * * recognizerView
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetDefaultRecognizer(This,recognizer) )
    ( (This)->lpVtbl->RecognizeAsync(This,strokeCollection,recognitionTarget,recognitionResults) )
    ( (This)->lpVtbl->GetRecognizers(This,recognizerView) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkRecognizerContainer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke[] = L"Windows.UI.Input.Inking.IInkStroke";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Selected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Selected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Recognized )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetRenderingSegments )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStrokeRenderingSegment * * renderingSegments
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * clonedStroke
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DrawingAttributes(This,value) )
    ( (This)->lpVtbl->put_DrawingAttributes(This,value) )
    ( (This)->lpVtbl->get_BoundingRect(This,value) )
    ( (This)->lpVtbl->get_Selected(This,value) )
    ( (This)->lpVtbl->put_Selected(This,value) )
    ( (This)->lpVtbl->get_Recognized(This,value) )
    ( (This)->lpVtbl->GetRenderingSegments(This,renderingSegments) )
    ( (This)->lpVtbl->Clone(This,clonedStroke) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke2[] = L"Windows.UI.Input.Inking.IInkStroke2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointTransform )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 value
        );
    HRESULT ( STDMETHODCALLTYPE *GetInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkPoint * * inkPoints
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointTransform(This,value) )
    ( (This)->lpVtbl->put_PointTransform(This,value) )
    ( (This)->lpVtbl->GetInkPoints(This,inkPoints) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStroke3[] = L"Windows.UI.Input.Inking.IInkStroke3";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeStartedTime )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CDateTime * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeStartedTime )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StrokeDuration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StrokeDuration )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_StrokeStartedTime(This,value) )
    ( (This)->lpVtbl->put_StrokeStartedTime(This,value) )
    ( (This)->lpVtbl->get_StrokeDuration(This,value) )
    ( (This)->lpVtbl->put_StrokeDuration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BeginStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint
        );
    HRESULT ( STDMETHODCALLTYPE *AppendToStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * previousPointerPoint
        );
    HRESULT ( STDMETHODCALLTYPE *EndStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *CreateStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CPoint * points,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultDrawingAttributes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkDrawingAttributes * drawingAttributes
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilderVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BeginStroke(This,pointerPoint) )
    ( (This)->lpVtbl->AppendToStroke(This,pointerPoint,previousPointerPoint) )
    ( (This)->lpVtbl->EndStroke(This,pointerPoint,stroke) )
    ( (This)->lpVtbl->CreateStroke(This,points,stroke) )
    ( (This)->lpVtbl->SetDefaultDrawingAttributes(This,drawingAttributes) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder2[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateStrokeFromInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateStrokeFromInkPoints(This,inkPoints,transform,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeBuilder3[] = L"Windows.UI.Input.Inking.IInkStrokeBuilder3";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateStrokeFromInkPoints )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkPoint * inkPoints,
                  __x_ABI_CWindows_CFoundation_CNumerics_CMatrix3x2 transform,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CDateTime * strokeStartedTime,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * strokeDuration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateStrokeFromInkPoints(This,inkPoints,transform,strokeStartedTime,strokeDuration,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeBuilder3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer[] = L"Windows.UI.Input.Inking.IInkStrokeContainer";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BoundingRect )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddStroke )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * stroke
        );
    HRESULT ( STDMETHODCALLTYPE *DeleteSelected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRect
        );
    HRESULT ( STDMETHODCALLTYPE *MoveSelected )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __x_ABI_CWindows_CFoundation_CPoint translation,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *SelectWithPolyLine )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CPoint * polyline,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *SelectWithLine )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __x_ABI_CWindows_CFoundation_CPoint from,
                  __x_ABI_CWindows_CFoundation_CPoint to,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *CopySelectedToClipboard )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This
        );
    HRESULT ( STDMETHODCALLTYPE *PasteFromClipboard )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __x_ABI_CWindows_CFoundation_CPoint position,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * invalidatedRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *CanPasteFromClipboard )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                           __RPC__out boolean * canPaste
        );
    HRESULT ( STDMETHODCALLTYPE *LoadAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * inputStream,
                           __RPC__deref_out_opt __FIAsyncActionWithProgress_1_UINT64 * * loadAction
        );
                    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * outputStream,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * outputStreamOperation
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateRecognitionResults )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                  __RPC__in_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * recognitionResults
        );
    HRESULT ( STDMETHODCALLTYPE *GetStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * strokeView
        );
    HRESULT ( STDMETHODCALLTYPE *GetRecognitionResults )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkRecognitionResult * * recognitionResults
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BoundingRect(This,value) )
    ( (This)->lpVtbl->AddStroke(This,stroke) )
    ( (This)->lpVtbl->DeleteSelected(This,invalidatedRect) )
    ( (This)->lpVtbl->MoveSelected(This,translation,invalidatedRectangle) )
    ( (This)->lpVtbl->SelectWithPolyLine(This,polyline,invalidatedRectangle) )
    ( (This)->lpVtbl->SelectWithLine(This,from,to,invalidatedRectangle) )
    ( (This)->lpVtbl->CopySelectedToClipboard(This) )
    ( (This)->lpVtbl->PasteFromClipboard(This,position,invalidatedRectangle) )
    ( (This)->lpVtbl->CanPasteFromClipboard(This,canPaste) )
    ( (This)->lpVtbl->LoadAsync(This,inputStream,loadAction) )
    ( (This)->lpVtbl->SaveAsync(This,outputStream,outputStreamOperation) )
    ( (This)->lpVtbl->UpdateRecognitionResults(This,recognitionResults) )
    ( (This)->lpVtbl->GetStrokes(This,strokeView) )
    ( (This)->lpVtbl->GetRecognitionResults(This,recognitionResults) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer2[] = L"Windows.UI.Input.Inking.IInkStrokeContainer2";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddStrokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CInking__CInkStroke * strokes
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddStrokes(This,strokes) )
    ( (This)->lpVtbl->Clear(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeContainer3[] = L"Windows.UI.Input.Inking.IInkStrokeContainer3";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *SaveWithFormatAsync )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * outputStream,
                  __x_ABI_CWindows_CUI_CInput_CInking_CInkPersistenceFormat inkPersistenceFormat,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_UINT32_UINT32 * * outputStreamOperation
        );
    HRESULT ( STDMETHODCALLTYPE *GetStrokeById )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3 * This,
                  UINT32 id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStroke * * stroke
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SaveWithFormatAsync(This,outputStream,inkPersistenceFormat,outputStreamOperation) )
    ( (This)->lpVtbl->GetStrokeById(This,id,stroke) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeContainer3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeInput[] = L"Windows.UI.Input.Inking.IInkStrokeInput";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_StrokeStarted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StrokeStarted )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StrokeContinued )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StrokeContinued )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StrokeEnded )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StrokeEnded )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StrokeCanceled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInputVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_StrokeStarted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_StrokeStarted(This,cookie) )
    ( (This)->lpVtbl->add_StrokeContinued(This,handler,cookie) )
    ( (This)->lpVtbl->remove_StrokeContinued(This,cookie) )
    ( (This)->lpVtbl->add_StrokeEnded(This,handler,cookie) )
    ( (This)->lpVtbl->remove_StrokeEnded(This,cookie) )
    ( (This)->lpVtbl->add_StrokeCanceled(This,handler,cookie) )
    ( (This)->lpVtbl->remove_StrokeCanceled(This,cookie) )
    ( (This)->lpVtbl->get_InkPresenter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokeRenderingSegment[] = L"Windows.UI.Input.Inking.IInkStrokeRenderingSegment";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegmentVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BezierControlPoint1 )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BezierControlPoint2 )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiltX )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiltY )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Twist )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegmentVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegmentVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_BezierControlPoint1(This,value) )
    ( (This)->lpVtbl->get_BezierControlPoint2(This,value) )
    ( (This)->lpVtbl->get_Pressure(This,value) )
    ( (This)->lpVtbl->get_TiltX(This,value) )
    ( (This)->lpVtbl->get_TiltY(This,value) )
    ( (This)->lpVtbl->get_Twist(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeRenderingSegment;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokesCollectedEventArgs[] = L"Windows.UI.Input.Inking.IInkStrokesCollectedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Strokes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesCollectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkStrokesErasedEventArgs[] = L"Windows.UI.Input.Inking.IInkStrokesErasedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Strokes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokesErasedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkSynchronizer[] = L"Windows.UI.Input.Inking.IInkSynchronizer";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *BeginDry )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CInking__CInkStroke * * inkStrokes
        );
    HRESULT ( STDMETHODCALLTYPE *EndDry )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->BeginDry(This,inkStrokes) )
    ( (This)->lpVtbl->EndDry(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkSynchronizer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IInkUnprocessedInput[] = L"Windows.UI.Input.Inking.IInkUnprocessedInput";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInputVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerHovered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerHovered )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerLost )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InkPresenter )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkPresenter * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInputVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInputVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PointerEntered(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerEntered(This,cookie) )
    ( (This)->lpVtbl->add_PointerHovered(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerHovered(This,cookie) )
    ( (This)->lpVtbl->add_PointerExited(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerExited(This,cookie) )
    ( (This)->lpVtbl->add_PointerPressed(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerPressed(This,cookie) )
    ( (This)->lpVtbl->add_PointerMoved(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerMoved(This,cookie) )
    ( (This)->lpVtbl->add_PointerReleased(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerReleased(This,cookie) )
    ( (This)->lpVtbl->add_PointerLost(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerLost(This,cookie) )
    ( (This)->lpVtbl->get_InkPresenter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IPenAndInkSettings[] = L"Windows.UI.Input.Inking.IPenAndInkSettings";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsHandwritingDirectlyIntoTextFieldEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PenHandedness )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CPenHandedness * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HandwritingLineHeight )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInking_CHandwritingLineHeight * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FontFamilyName )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserConsentsToHandwritingTelemetryCollection )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTouchHandwritingEnabled )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsHandwritingDirectlyIntoTextFieldEnabled(This,value) )
    ( (This)->lpVtbl->get_PenHandedness(This,value) )
    ( (This)->lpVtbl->get_HandwritingLineHeight(This,value) )
    ( (This)->lpVtbl->get_FontFamilyName(This,value) )
    ( (This)->lpVtbl->get_UserConsentsToHandwritingTelemetryCollection(This,value) )
    ( (This)->lpVtbl->get_IsTouchHandwritingEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_IPenAndInkSettingsStatics[] = L"Windows.UI.Input.Inking.IPenAndInkSettingsStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettings * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CIPenAndInkSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkDrawingAttributes[] = L"Windows.UI.Input.Inking.InkDrawingAttributes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkDrawingAttributesPencilProperties[] = L"Windows.UI.Input.Inking.InkDrawingAttributesPencilProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkInputConfiguration[] = L"Windows.UI.Input.Inking.InkInputConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkInputProcessingConfiguration[] = L"Windows.UI.Input.Inking.InkInputProcessingConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkManager[] = L"Windows.UI.Input.Inking.InkManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkModelerAttributes[] = L"Windows.UI.Input.Inking.InkModelerAttributes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPoint[] = L"Windows.UI.Input.Inking.InkPoint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenter[] = L"Windows.UI.Input.Inking.InkPresenter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenterProtractor[] = L"Windows.UI.Input.Inking.InkPresenterProtractor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkPresenterRuler[] = L"Windows.UI.Input.Inking.InkPresenterRuler";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognitionResult[] = L"Windows.UI.Input.Inking.InkRecognitionResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognizer[] = L"Windows.UI.Input.Inking.InkRecognizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkRecognizerContainer[] = L"Windows.UI.Input.Inking.InkRecognizerContainer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStroke[] = L"Windows.UI.Input.Inking.InkStroke";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeBuilder[] = L"Windows.UI.Input.Inking.InkStrokeBuilder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeContainer[] = L"Windows.UI.Input.Inking.InkStrokeContainer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeInput[] = L"Windows.UI.Input.Inking.InkStrokeInput";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokeRenderingSegment[] = L"Windows.UI.Input.Inking.InkStrokeRenderingSegment";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokesCollectedEventArgs[] = L"Windows.UI.Input.Inking.InkStrokesCollectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkStrokesErasedEventArgs[] = L"Windows.UI.Input.Inking.InkStrokesErasedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkSynchronizer[] = L"Windows.UI.Input.Inking.InkSynchronizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_InkUnprocessedInput[] = L"Windows.UI.Input.Inking.InkUnprocessedInput";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_PenAndInkSettings[] = L"Windows.UI.Input.Inking.PenAndInkSettings";
       
       
#pragma clang diagnostic pop
