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
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CBitmapCodecInformation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformation
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CBitmapPixelFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CImageStream __FIIterator_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CImageStream __FIIterable_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CImageStream **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CSoftwareBitmap **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
EXTERN_C const IID IID___FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue;
typedef struct __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This,
                   HSTRING key,
                   __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * This);
    END_INTERFACE
} __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl;
interface __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue
{
    CONST_VTBL struct __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValueVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation;
typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                       __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl;
interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformationVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat;
typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                       enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl;
interface __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapPixelFormatVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                       __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapDecoder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapEncoder **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapFrame **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrameVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CBitmapPropertySet **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * This, __RPC__out __FIMap_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySetVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CPixelDataProvider **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProviderVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CSoftwareBitmap **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * This, __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmapVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds;
typedef interface __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds;
EXTERN_C const IID IID___FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds;
typedef struct __FIReference_1_Windows__CGraphics__CImaging__CBitmapBoundsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This, __RPC__out struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds *value);
    END_INTERFACE
} __FIReference_1_Windows__CGraphics__CImaging__CBitmapBoundsVtbl;
interface __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds
{
    CONST_VTBL struct __FIReference_1_Windows__CGraphics__CImaging__CBitmapBoundsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;
typedef enum __x_ABI_CWindows_CFoundation_CPropertyType __x_ABI_CWindows_CFoundation_CPropertyType;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider __x_ABI_CWindows_CStorage_CStreams_CIContentTypeProvider;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CJpegSubsamplingMode __x_ABI_CWindows_CGraphics_CImaging_CJpegSubsamplingMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CPngFilterMode __x_ABI_CWindows_CGraphics_CImaging_CPngFilterMode;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CTiffCompressionMode __x_ABI_CWindows_CGraphics_CImaging_CTiffCompressionMode;
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds;
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription;
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize;
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode
{
    BitmapAlphaMode_Premultiplied = 0,
    BitmapAlphaMode_Straight = 1,
    BitmapAlphaMode_Ignore = 2,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode
{
    BitmapBufferAccessMode_Read = 0,
    BitmapBufferAccessMode_ReadWrite = 1,
    BitmapBufferAccessMode_Write = 2,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip
{
    BitmapFlip_None = 0,
    BitmapFlip_Horizontal = 1,
    BitmapFlip_Vertical = 2,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode
{
    BitmapInterpolationMode_NearestNeighbor = 0,
    BitmapInterpolationMode_Linear = 1,
    BitmapInterpolationMode_Cubic = 2,
    BitmapInterpolationMode_Fant = 3,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat
{
    BitmapPixelFormat_Unknown = 0,
    BitmapPixelFormat_Rgba16 = 12,
    BitmapPixelFormat_Rgba8 = 30,
    BitmapPixelFormat_Gray16 = 57,
    BitmapPixelFormat_Gray8 = 62,
    BitmapPixelFormat_Bgra8 = 87,
    BitmapPixelFormat_Nv12 = 103,
    BitmapPixelFormat_P010 = 104,
    BitmapPixelFormat_Yuy2 = 107,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation
{
    BitmapRotation_None = 0,
    BitmapRotation_Clockwise90Degrees = 1,
    BitmapRotation_Clockwise180Degrees = 2,
    BitmapRotation_Clockwise270Degrees = 3,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode
{
    ColorManagementMode_DoNotColorManage = 0,
    ColorManagementMode_ColorManageToSRgb = 1,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode
{
    ExifOrientationMode_IgnoreExifOrientation = 0,
    ExifOrientationMode_RespectExifOrientation = 1,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CJpegSubsamplingMode
{
    JpegSubsamplingMode_Default = 0,
    JpegSubsamplingMode_Y4Cb2Cr0 = 1,
    JpegSubsamplingMode_Y4Cb2Cr2 = 2,
    JpegSubsamplingMode_Y4Cb4Cr4 = 3,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CPngFilterMode
{
    PngFilterMode_Automatic = 0,
    PngFilterMode_None = 1,
    PngFilterMode_Sub = 2,
    PngFilterMode_Up = 3,
    PngFilterMode_Average = 4,
    PngFilterMode_Paeth = 5,
    PngFilterMode_Adaptive = 6,
};
enum __x_ABI_CWindows_CGraphics_CImaging_CTiffCompressionMode
{
    TiffCompressionMode_Automatic = 0,
    TiffCompressionMode_None = 1,
    TiffCompressionMode_Ccitt3 = 2,
    TiffCompressionMode_Ccitt4 = 3,
    TiffCompressionMode_Lzw = 4,
    TiffCompressionMode_Rle = 5,
    TiffCompressionMode_Zip = 6,
    TiffCompressionMode_LzwhDifferencing = 7,
};
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds
{
    UINT32 X;
    UINT32 Y;
    UINT32 Width;
    UINT32 Height;
};
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription
{
    INT32 StartIndex;
    INT32 Width;
    INT32 Height;
    INT32 Stride;
};
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapSize
{
    UINT32 Width;
    UINT32 Height;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapBuffer[] = L"Windows.Graphics.Imaging.IBitmapBuffer";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPlaneCount )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPlaneDescription )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * This,
                  INT32 index,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPlaneDescription * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBufferVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBufferVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPlaneCount(This,value) )
    ( (This)->lpVtbl->GetPlaneDescription(This,index,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapCodecInformation[] = L"Windows.Graphics.Imaging.IBitmapCodecInformation";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CodecId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FileExtensions )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MimeTypes )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * This,
                           __RPC__deref_out_opt __FIVectorView_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformationVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CodecId(This,value) )
    ( (This)->lpVtbl->get_FileExtensions(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_MimeTypes(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapDecoder[] = L"Windows.Graphics.Imaging.IBitmapDecoder";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BitmapContainerProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DecoderInformation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameCount )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPreviewAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *GetFrameAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * This,
                  UINT32 frameIndex,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapFrame * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BitmapContainerProperties(This,value) )
    ( (This)->lpVtbl->get_DecoderInformation(This,value) )
    ( (This)->lpVtbl->get_FrameCount(This,value) )
    ( (This)->lpVtbl->GetPreviewAsync(This,asyncInfo) )
    ( (This)->lpVtbl->GetFrameAsync(This,frameIndex,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapDecoderStatics[] = L"Windows.Graphics.Imaging.IBitmapDecoderStatics";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BmpDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JpegDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PngDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiffDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GifDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JpegXRDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IcoDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDecoderInformationEnumerator )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * * decoderInformationEnumerator
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWithIdAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics * This,
                  GUID decoderId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapDecoder * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BmpDecoderId(This,value) )
    ( (This)->lpVtbl->get_JpegDecoderId(This,value) )
    ( (This)->lpVtbl->get_PngDecoderId(This,value) )
    ( (This)->lpVtbl->get_TiffDecoderId(This,value) )
    ( (This)->lpVtbl->get_GifDecoderId(This,value) )
    ( (This)->lpVtbl->get_JpegXRDecoderId(This,value) )
    ( (This)->lpVtbl->get_IcoDecoderId(This,value) )
    ( (This)->lpVtbl->GetDecoderInformationEnumerator(This,decoderInformationEnumerator) )
    ( (This)->lpVtbl->CreateAsync(This,stream,asyncInfo) )
    ( (This)->lpVtbl->CreateWithIdAsync(This,decoderId,stream,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapDecoderStatics2[] = L"Windows.Graphics.Imaging.IBitmapDecoderStatics2";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeifDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WebpDecoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2Vtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeifDecoderId(This,value) )
    ( (This)->lpVtbl->get_WebpDecoderId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoder[] = L"Windows.Graphics.Imaging.IBitmapEncoder";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EncoderInformation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapCodecInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapContainerProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsThumbnailGenerated )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsThumbnailGenerated )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GeneratedThumbnailWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GeneratedThumbnailWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GeneratedThumbnailHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GeneratedThumbnailHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapTransform )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPixelData )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
                  UINT32 width,
                  UINT32 height,
                  DOUBLE dpiX,
                  DOUBLE dpiY,
                                        __RPC__in_range(0,0x7fffffff) UINT32 __pixelsSize,
                                         __RPC__in_ecount_full(__pixelsSize) BYTE * pixels
        );
                    HRESULT ( STDMETHODCALLTYPE *GoToNextFrameAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *GoToNextFrameWithEncodingOptionsAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * encodingOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *FlushAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EncoderInformation(This,value) )
    ( (This)->lpVtbl->get_BitmapProperties(This,value) )
    ( (This)->lpVtbl->get_BitmapContainerProperties(This,value) )
    ( (This)->lpVtbl->get_IsThumbnailGenerated(This,value) )
    ( (This)->lpVtbl->put_IsThumbnailGenerated(This,value) )
    ( (This)->lpVtbl->get_GeneratedThumbnailWidth(This,value) )
    ( (This)->lpVtbl->put_GeneratedThumbnailWidth(This,value) )
    ( (This)->lpVtbl->get_GeneratedThumbnailHeight(This,value) )
    ( (This)->lpVtbl->put_GeneratedThumbnailHeight(This,value) )
    ( (This)->lpVtbl->get_BitmapTransform(This,value) )
    ( (This)->lpVtbl->SetPixelData(This,pixelFormat,alphaMode,width,height,dpiX,dpiY,__pixelsSize,pixels) )
    ( (This)->lpVtbl->GoToNextFrameAsync(This,asyncInfo) )
    ( (This)->lpVtbl->GoToNextFrameWithEncodingOptionsAsync(This,encodingOptions,asyncInfo) )
    ( (This)->lpVtbl->FlushAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoder;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoderStatics[] = L"Windows.Graphics.Imaging.IBitmapEncoderStatics";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BmpEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JpegEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PngEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TiffEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GifEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JpegXREncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                           __RPC__out GUID * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetEncoderInformationEnumerator )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CImaging__CBitmapCodecInformation * * encoderInformationEnumerator
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                  GUID encoderId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateWithEncodingOptionsAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                  GUID encoderId,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * encodingOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForTranscodingAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * bitmapDecoder,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForInPlacePropertyEncodingAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapDecoder * bitmapDecoder,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapEncoder * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BmpEncoderId(This,value) )
    ( (This)->lpVtbl->get_JpegEncoderId(This,value) )
    ( (This)->lpVtbl->get_PngEncoderId(This,value) )
    ( (This)->lpVtbl->get_TiffEncoderId(This,value) )
    ( (This)->lpVtbl->get_GifEncoderId(This,value) )
    ( (This)->lpVtbl->get_JpegXREncoderId(This,value) )
    ( (This)->lpVtbl->GetEncoderInformationEnumerator(This,encoderInformationEnumerator) )
    ( (This)->lpVtbl->CreateAsync(This,encoderId,stream,asyncInfo) )
    ( (This)->lpVtbl->CreateWithEncodingOptionsAsync(This,encoderId,stream,encodingOptions,asyncInfo) )
    ( (This)->lpVtbl->CreateForTranscodingAsync(This,stream,bitmapDecoder,asyncInfo) )
    ( (This)->lpVtbl->CreateForInPlacePropertyEncodingAsync(This,bitmapDecoder,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoderStatics2[] = L"Windows.Graphics.Imaging.IBitmapEncoderStatics2";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HeifEncoderId )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2Vtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HeifEncoderId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapEncoderWithSoftwareBitmap[] = L"Windows.Graphics.Imaging.IBitmapEncoderWithSoftwareBitmap";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetSoftwareBitmap )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmapVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetSoftwareBitmap(This,bitmap) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapEncoderWithSoftwareBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapFrame[] = L"Windows.Graphics.Imaging.IBitmapFrame";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * asyncInfo
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapProperties )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapAlphaMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DpiX )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DpiY )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OrientedPixelWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OrientedPixelHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__out UINT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetPixelDataAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * * asyncInfo
        );
                    HRESULT ( STDMETHODCALLTYPE *GetPixelDataTransformedAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * transform,
                  __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode exifOrientationMode,
                  __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode colorManagementMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CPixelDataProvider * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetThumbnailAsync(This,asyncInfo) )
    ( (This)->lpVtbl->get_BitmapProperties(This,value) )
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )
    ( (This)->lpVtbl->get_BitmapAlphaMode(This,value) )
    ( (This)->lpVtbl->get_DpiX(This,value) )
    ( (This)->lpVtbl->get_DpiY(This,value) )
    ( (This)->lpVtbl->get_PixelWidth(This,value) )
    ( (This)->lpVtbl->get_PixelHeight(This,value) )
    ( (This)->lpVtbl->get_OrientedPixelWidth(This,value) )
    ( (This)->lpVtbl->get_OrientedPixelHeight(This,value) )
    ( (This)->lpVtbl->GetPixelDataAsync(This,asyncInfo) )
    ( (This)->lpVtbl->GetPixelDataTransformedAsync(This,pixelFormat,alphaMode,transform,exifOrientationMode,colorManagementMode,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapFrameWithSoftwareBitmap[] = L"Windows.Graphics.Imaging.IBitmapFrameWithSoftwareBitmap";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetSoftwareBitmapAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSoftwareBitmapConvertedAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GetSoftwareBitmapTransformedAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat pixelFormat,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alphaMode,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * transform,
                  __x_ABI_CWindows_CGraphics_CImaging_CExifOrientationMode exifOrientationMode,
                  __x_ABI_CWindows_CGraphics_CImaging_CColorManagementMode colorManagementMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmapVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSoftwareBitmapAsync(This,value) )
    ( (This)->lpVtbl->GetSoftwareBitmapConvertedAsync(This,pixelFormat,alphaMode,value) )
    ( (This)->lpVtbl->GetSoftwareBitmapTransformedAsync(This,pixelFormat,alphaMode,transform,exifOrientationMode,colorManagementMode,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapFrameWithSoftwareBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapProperties[] = L"Windows.Graphics.Imaging.IBitmapProperties";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetPropertiesAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CGraphics__CImaging__CBitmapTypedValue * propertiesToSet,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetPropertiesAsync(This,propertiesToSet,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapPropertiesView[] = L"Windows.Graphics.Imaging.IBitmapPropertiesView";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPropertiesAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * propertiesToRetrieve,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CBitmapPropertySet * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesViewVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPropertiesAsync(This,propertiesToRetrieve,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapPropertiesView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTransform[] = L"Windows.Graphics.Imaging.IBitmapTransform";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ScaledWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaledWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaledHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaledHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InterpolationMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InterpolationMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapInterpolationMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Flip )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Flip )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapFlip value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapRotation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Bounds )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransformVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ScaledWidth(This,value) )
    ( (This)->lpVtbl->put_ScaledWidth(This,value) )
    ( (This)->lpVtbl->get_ScaledHeight(This,value) )
    ( (This)->lpVtbl->put_ScaledHeight(This,value) )
    ( (This)->lpVtbl->get_InterpolationMode(This,value) )
    ( (This)->lpVtbl->put_InterpolationMode(This,value) )
    ( (This)->lpVtbl->get_Flip(This,value) )
    ( (This)->lpVtbl->put_Flip(This,value) )
    ( (This)->lpVtbl->get_Rotation(This,value) )
    ( (This)->lpVtbl->put_Rotation(This,value) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->put_Bounds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTypedValue[] = L"Windows.Graphics.Imaging.IBitmapTypedValue";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPropertyType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IBitmapTypedValueFactory[] = L"Windows.Graphics.Imaging.IBitmapTypedValueFactory";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory * This,
                  __RPC__in_opt IInspectable * value,
                  __x_ABI_CWindows_CFoundation_CPropertyType type,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValue * * bitmapTypedValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,value,type,bitmapTypedValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIBitmapTypedValueFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_IPixelDataProvider[] = L"Windows.Graphics.Imaging.IPixelDataProvider";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DetachPixelData )(
        __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider * This,
                   __RPC__out UINT32 * __pixelDataSize,
                                                          __RPC__deref_out_ecount_full_opt(*(__pixelDataSize)) BYTE * * pixelData
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProviderVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DetachPixelData(This,__pixelDataSize,pixelData) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CIPixelDataProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmap[] = L"Windows.Graphics.Imaging.ISoftwareBitmap";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BitmapPixelFormat )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitmapAlphaMode )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelWidth )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelHeight )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DpiX )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DpiX )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DpiY )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DpiY )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *LockBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapBufferAccessMode mode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CIBitmapBuffer * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyTo )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap
        );
    HRESULT ( STDMETHODCALLTYPE *CopyFromBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *CopyToBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *GetReadOnlyView )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BitmapPixelFormat(This,value) )
    ( (This)->lpVtbl->get_BitmapAlphaMode(This,value) )
    ( (This)->lpVtbl->get_PixelWidth(This,value) )
    ( (This)->lpVtbl->get_PixelHeight(This,value) )
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )
    ( (This)->lpVtbl->put_DpiX(This,value) )
    ( (This)->lpVtbl->get_DpiX(This,value) )
    ( (This)->lpVtbl->put_DpiY(This,value) )
    ( (This)->lpVtbl->get_DpiY(This,value) )
    ( (This)->lpVtbl->LockBuffer(This,mode,value) )
    ( (This)->lpVtbl->CopyTo(This,bitmap) )
    ( (This)->lpVtbl->CopyFromBuffer(This,buffer) )
    ( (This)->lpVtbl->CopyToBuffer(This,buffer) )
    ( (This)->lpVtbl->GetReadOnlyView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmapFactory[] = L"Windows.Graphics.Imaging.ISoftwareBitmapFactory";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  INT32 width,
                  INT32 height,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAlpha )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  INT32 width,
                  INT32 height,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactoryVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,format,width,height,value) )
    ( (This)->lpVtbl->CreateWithAlpha(This,format,width,height,alpha,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Graphics_Imaging_ISoftwareBitmapStatics[] = L"Windows.Graphics.Imaging.ISoftwareBitmapStatics";
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *Convert )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * source,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ConvertWithAlpha )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * source,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateCopyFromBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * source,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  INT32 width,
                  INT32 height,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateCopyWithAlphaFromBuffer )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * source,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  INT32 width,
                  INT32 height,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateCopyFromSurfaceAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateCopyWithAlphaFromSurfaceAsync )(
        __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CSoftwareBitmap * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStaticsVtbl;
interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Copy(This,source,value) )
    ( (This)->lpVtbl->Convert(This,source,format,value) )
    ( (This)->lpVtbl->ConvertWithAlpha(This,source,format,alpha,value) )
    ( (This)->lpVtbl->CreateCopyFromBuffer(This,source,format,width,height,value) )
    ( (This)->lpVtbl->CreateCopyWithAlphaFromBuffer(This,source,format,width,height,alpha,value) )
    ( (This)->lpVtbl->CreateCopyFromSurfaceAsync(This,surface,value) )
    ( (This)->lpVtbl->CreateCopyWithAlphaFromSurfaceAsync(This,surface,alpha,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmapStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapBuffer[] = L"Windows.Graphics.Imaging.BitmapBuffer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapCodecInformation[] = L"Windows.Graphics.Imaging.BitmapCodecInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapDecoder[] = L"Windows.Graphics.Imaging.BitmapDecoder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapEncoder[] = L"Windows.Graphics.Imaging.BitmapEncoder";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapFrame[] = L"Windows.Graphics.Imaging.BitmapFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapProperties[] = L"Windows.Graphics.Imaging.BitmapProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapPropertiesView[] = L"Windows.Graphics.Imaging.BitmapPropertiesView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapPropertySet[] = L"Windows.Graphics.Imaging.BitmapPropertySet";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapTransform[] = L"Windows.Graphics.Imaging.BitmapTransform";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_BitmapTypedValue[] = L"Windows.Graphics.Imaging.BitmapTypedValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_ImageStream[] = L"Windows.Graphics.Imaging.ImageStream";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_PixelDataProvider[] = L"Windows.Graphics.Imaging.PixelDataProvider";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Graphics_Imaging_SoftwareBitmap[] = L"Windows.Graphics.Imaging.SoftwareBitmap";
       
       
#pragma clang diagnostic pop
