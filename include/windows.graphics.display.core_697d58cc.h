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
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode;
typedef interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2;
typedef interface __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode;
typedef struct __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl;
interface __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode;
typedef struct __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl;
interface __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode;
typedef struct __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                       __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl;
interface __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayModeVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayColorSpace __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayColorSpace;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdrOption __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdrOption;
typedef enum __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayPixelEncoding __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayPixelEncoding;
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdr2086Metadata __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdr2086Metadata;
enum __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayColorSpace
{
    HdmiDisplayColorSpace_RgbLimited = 0,
    HdmiDisplayColorSpace_RgbFull = 1,
    HdmiDisplayColorSpace_BT2020 = 2,
    HdmiDisplayColorSpace_BT709 = 3,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdrOption
{
    HdmiDisplayHdrOption_None = 0,
    HdmiDisplayHdrOption_EotfSdr = 1,
    HdmiDisplayHdrOption_Eotf2084 = 2,
    HdmiDisplayHdrOption_DolbyVisionLowLatency = 3,
};
enum __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayPixelEncoding
{
    HdmiDisplayPixelEncoding_Rgb444 = 0,
    HdmiDisplayPixelEncoding_Ycc444 = 1,
    HdmiDisplayPixelEncoding_Ycc422 = 2,
    HdmiDisplayPixelEncoding_Ycc420 = 3,
};
struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdr2086Metadata
{
    UINT16 RedPrimaryX;
    UINT16 RedPrimaryY;
    UINT16 GreenPrimaryX;
    UINT16 GreenPrimaryY;
    UINT16 BluePrimaryX;
    UINT16 BluePrimaryY;
    UINT16 WhitePointX;
    UINT16 WhitePointY;
    UINT16 MaxMasteringLuminance;
    UINT16 MinMasteringLuminance;
    UINT16 MaxContentLightLevel;
    UINT16 MaxFrameAverageLightLevel;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_Core_IHdmiDisplayInformation[] = L"Windows.Graphics.Display.Core.IHdmiDisplayInformation";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSupportedDisplayModes )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayMode * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentDisplayMode )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetDefaultDisplayModeAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestSetCurrentDisplayModeAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * mode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestSetCurrentDisplayModeWithHdrAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * mode,
                  __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdrOption hdrOption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestSetCurrentDisplayModeWithHdrAndMetadataAsync )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * mode,
                  __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdrOption hdrOption,
                  __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayHdr2086Metadata hdrMetadata,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DisplayModesChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CGraphics__CDisplay__CCore__CHdmiDisplayInformation_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DisplayModesChanged )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSupportedDisplayModes(This,result) )
    ( (This)->lpVtbl->GetCurrentDisplayMode(This,result) )
    ( (This)->lpVtbl->SetDefaultDisplayModeAsync(This,operation) )
    ( (This)->lpVtbl->RequestSetCurrentDisplayModeAsync(This,mode,operation) )
    ( (This)->lpVtbl->RequestSetCurrentDisplayModeWithHdrAsync(This,mode,hdrOption,operation) )
    ( (This)->lpVtbl->RequestSetCurrentDisplayModeWithHdrAndMetadataAsync(This,mode,hdrOption,hdrMetadata,operation) )
    ( (This)->lpVtbl->add_DisplayModesChanged(This,value,token) )
    ( (This)->lpVtbl->remove_DisplayModesChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_Core_IHdmiDisplayInformationStatics[] = L"Windows.Graphics.Display.Core.IHdmiDisplayInformationStatics";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformation * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_Core_IHdmiDisplayMode[] = L"Windows.Graphics.Display.Core.IHdmiDisplayMode";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ResolutionWidthInRawPixels )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ResolutionHeightInRawPixels )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RefreshRate )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StereoEnabled )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitsPerPixel )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out UINT16 * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsEqual )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * mode,
                           __RPC__out boolean * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColorSpace )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayColorSpace * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelEncoding )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDisplay_CCore_CHdmiDisplayPixelEncoding * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSdrLuminanceSupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSmpte2084Supported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Is2086MetadataSupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayModeVtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayModeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ResolutionWidthInRawPixels(This,value) )
    ( (This)->lpVtbl->get_ResolutionHeightInRawPixels(This,value) )
    ( (This)->lpVtbl->get_RefreshRate(This,value) )
    ( (This)->lpVtbl->get_StereoEnabled(This,value) )
    ( (This)->lpVtbl->get_BitsPerPixel(This,value) )
    ( (This)->lpVtbl->IsEqual(This,mode,result) )
    ( (This)->lpVtbl->get_ColorSpace(This,value) )
    ( (This)->lpVtbl->get_PixelEncoding(This,value) )
    ( (This)->lpVtbl->get_IsSdrLuminanceSupported(This,value) )
    ( (This)->lpVtbl->get_IsSmpte2084Supported(This,value) )
    ( (This)->lpVtbl->get_Is2086MetadataSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Display_Core_IHdmiDisplayMode2[] = L"Windows.Graphics.Display.Core.IHdmiDisplayMode2";
typedef struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDolbyVisionLowLatencySupported )(
        __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2Vtbl;
interface __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDolbyVisionLowLatencySupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CDisplay_CCore_CIHdmiDisplayMode2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_Core_HdmiDisplayInformation[] = L"Windows.Graphics.Display.Core.HdmiDisplayInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Display_Core_HdmiDisplayMode[] = L"Windows.Graphics.Display.Core.HdmiDisplayMode";
       
       
#pragma clang diagnostic pop
