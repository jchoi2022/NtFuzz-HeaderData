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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.Media.Devices.h"
#include "Windows.Media.Devices.Core.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame;
typedef interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource;
typedef struct __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl;
interface __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSource
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                       __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormatVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                       __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                       __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfoVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * This, __RPC__out enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResultVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroupVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * This, __RPC__out enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatusVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * This, __RPC__out enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIKeyValuePair_2_GUID_IInspectable __FIKeyValuePair_2_GUID_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_GUID_IInspectable;
typedef struct __FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out GUID *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_GUID_IInspectableVtbl;
interface __FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_GUID_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out __FIKeyValuePair_2_GUID_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_GUID_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_GUID_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_GUID_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_GUID_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_GUID_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_GUID_IInspectable __FIMapView_2_GUID_IInspectable;
EXTERN_C const IID IID___FIMapView_2_GUID_IInspectable;
typedef struct __FIMapView_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_GUID_IInspectable * This,
                   __RPC__in GUID key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__in GUID key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_GUID_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_GUID_IInspectableVtbl;
interface __FIMapView_2_GUID_IInspectable
{
    CONST_VTBL struct __FIMapView_2_GUID_IInspectableVtbl *lpVtbl;
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
typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;
EXTERN_C const IID IID___FIReference_1_UINT32;
typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;
interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription;
typedef interface __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
typedef struct __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl;
interface __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
typedef struct __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl;
interface __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription;
typedef struct __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                       __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCapture_CIMediaCaptureVideoProfileMediaDescription * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl;
interface __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescriptionVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrame __x_ABI_CWindows_CMedia_CIAudioFrame;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper;
typedef interface __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus;
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode
{
    MediaFrameReaderAcquisitionMode_Realtime = 0,
    MediaFrameReaderAcquisitionMode_Buffered = 1,
};
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderStartStatus
{
    MediaFrameReaderStartStatus_Success = 0,
    MediaFrameReaderStartStatus_UnknownFailure = 1,
    MediaFrameReaderStartStatus_DeviceNotAvailable = 2,
    MediaFrameReaderStartStatus_OutputFormatNotSupported = 3,
    MediaFrameReaderStartStatus_ExclusiveControlNotAvailable = 4,
};
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus
{
    MediaFrameSourceGetPropertyStatus_Success = 0,
    MediaFrameSourceGetPropertyStatus_UnknownFailure = 1,
    MediaFrameSourceGetPropertyStatus_NotSupported = 2,
    MediaFrameSourceGetPropertyStatus_DeviceNotAvailable = 3,
    MediaFrameSourceGetPropertyStatus_MaxPropertyValueSizeTooSmall = 4,
    MediaFrameSourceGetPropertyStatus_MaxPropertyValueSizeRequired = 5,
};
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind
{
    MediaFrameSourceKind_Custom = 0,
    MediaFrameSourceKind_Color = 1,
    MediaFrameSourceKind_Infrared = 2,
    MediaFrameSourceKind_Depth = 3,
    MediaFrameSourceKind_Audio = 4,
    MediaFrameSourceKind_Image = 5,
};
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceSetPropertyStatus
{
    MediaFrameSourceSetPropertyStatus_Success = 0,
    MediaFrameSourceSetPropertyStatus_UnknownFailure = 1,
    MediaFrameSourceSetPropertyStatus_NotSupported = 2,
    MediaFrameSourceSetPropertyStatus_InvalidValue = 3,
    MediaFrameSourceSetPropertyStatus_DeviceNotAvailable = 4,
    MediaFrameSourceSetPropertyStatus_NotInControl = 5,
};
enum __x_ABI_CWindows_CMedia_CCapture_CFrames_CMultiSourceMediaFrameReaderStartStatus
{
    MultiSourceMediaFrameReaderStartStatus_Success = 0,
    MultiSourceMediaFrameReaderStartStatus_NotSupported = 1,
    MultiSourceMediaFrameReaderStartStatus_InsufficientResources = 2,
    MultiSourceMediaFrameReaderStartStatus_DeviceNotAvailable = 3,
    MultiSourceMediaFrameReaderStartStatus_UnknownFailure = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IAudioMediaFrame[] = L"Windows.Media.Capture.Frames.IAudioMediaFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioEncodingProperties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameReference(This,value) )
    ( (This)->lpVtbl->get_AudioEncodingProperties(This,value) )
    ( (This)->lpVtbl->GetAudioFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IBufferMediaFrame[] = L"Windows.Media.Capture.Frames.IBufferMediaFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameReference(This,value) )
    ( (This)->lpVtbl->get_Buffer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrame[] = L"Windows.Media.Capture.Frames.IDepthMediaFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DepthFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateCoordinateMapper )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * cameraIntrinsics,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CIDepthCorrelatedCoordinateMapper * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameReference(This,value) )
    ( (This)->lpVtbl->get_VideoMediaFrame(This,value) )
    ( (This)->lpVtbl->get_DepthFormat(This,value) )
    ( (This)->lpVtbl->TryCreateCoordinateMapper(This,cameraIntrinsics,coordinateSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrame2[] = L"Windows.Media.Capture.Frames.IDepthMediaFrame2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxReliableDepth )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinReliableDepth )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2 * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxReliableDepth(This,value) )
    ( (This)->lpVtbl->get_MinReliableDepth(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IDepthMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IDepthMediaFrameFormat";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DepthScaleInMeters )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormatVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoFormat(This,value) )
    ( (This)->lpVtbl->get_DepthScaleInMeters(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IInfraredMediaFrame[] = L"Windows.Media.Capture.Frames.IInfraredMediaFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsIlluminated )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameReference(This,value) )
    ( (This)->lpVtbl->get_VideoMediaFrame(This,value) )
    ( (This)->lpVtbl->get_IsIlluminated(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.IMediaFrameArrivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameArrivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IMediaFrameFormat";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MajorType )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtype )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameRate )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormatVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MajorType(This,value) )
    ( (This)->lpVtbl->get_Subtype(This,value) )
    ( (This)->lpVtbl->get_FrameRate(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_VideoFormat(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameFormat2[] = L"Windows.Media.Capture.Frames.IMediaFrameFormat2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioEncodingProperties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioEncodingProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReader[] = L"Windows.Media.Capture.Frames.IMediaFrameReader";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMediaFrameArrivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryAcquireLatestFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameReaderStartStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReaderVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )
    ( (This)->lpVtbl->TryAcquireLatestFrame(This,value) )
    ( (This)->lpVtbl->StartAsync(This,operation) )
    ( (This)->lpVtbl->StopAsync(This,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReader2[] = L"Windows.Media.Capture.Frames.IMediaFrameReader2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AcquisitionMode(This,value) )
    ( (This)->lpVtbl->get_AcquisitionMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReference[] = L"Windows.Media.Capture.Frames.IMediaFrameReference";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceKind )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemRelativeTime )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BufferMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIBufferMediaFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReferenceVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReferenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceKind(This,value) )
    ( (This)->lpVtbl->get_Format(This,value) )
    ( (This)->lpVtbl->get_SystemRelativeTime(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_BufferMediaFrame(This,value) )
    ( (This)->lpVtbl->get_VideoMediaFrame(This,value) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameReference2[] = L"Windows.Media.Capture.Frames.IMediaFrameReference2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIAudioMediaFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioMediaFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSource[] = L"Windows.Media.Capture.Frames.IMediaFrameSource";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Info )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedFormats )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetFormatAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * format,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FormatChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMediaFrameSource_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FormatChanged )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCameraIntrinsics )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * format,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Info(This,value) )
    ( (This)->lpVtbl->get_Controller(This,value) )
    ( (This)->lpVtbl->get_SupportedFormats(This,value) )
    ( (This)->lpVtbl->get_CurrentFormat(This,value) )
    ( (This)->lpVtbl->SetFormatAsync(This,format,value) )
    ( (This)->lpVtbl->add_FormatChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_FormatChanged(This,token) )
    ( (This)->lpVtbl->TryGetCameraIntrinsics(This,format,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceController[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceController";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPropertyAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
                  __RPC__in HSTRING propertyId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
                  __RPC__in HSTRING propertyId,
                  __RPC__in_opt IInspectable * propertyValue,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoDeviceController )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIVideoDeviceController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceControllerVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPropertyAsync(This,propertyId,value) )
    ( (This)->lpVtbl->SetPropertyAsync(This,propertyId,propertyValue,value) )
    ( (This)->lpVtbl->get_VideoDeviceController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceController2[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceController2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPropertyByExtendedIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
                  UINT32 __extendedPropertyIdSize,
                                                     __RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                  __RPC__in_opt __FIReference_1_UINT32 * maxPropertyValueSize,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGetPropertyResult * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SetPropertyByExtendedIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2 * This,
                  UINT32 __extendedPropertyIdSize,
                                                     __RPC__in_ecount_full(__extendedPropertyIdSize) BYTE * extendedPropertyId,
                  UINT32 __propertyValueSize,
                                                __RPC__in_ecount_full(__propertyValueSize) BYTE * propertyValue,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceSetPropertyStatus * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPropertyByExtendedIdAsync(This,__extendedPropertyIdSize,extendedPropertyId,maxPropertyValueSize,operation) )
    ( (This)->lpVtbl->SetPropertyByExtendedIdAsync(This,__extendedPropertyIdSize,extendedPropertyId,__propertyValueSize,propertyValue,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceController3[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceController3";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioDeviceController )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CIAudioDeviceController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioDeviceController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceController3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGetPropertyResult[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGetPropertyResult";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceGetPropertyStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResultVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGetPropertyResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGroup[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroup";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceInfos )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_SourceInfos(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceGroupStatics[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceGroupStatics";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindAllAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromIdAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMediaFrameSourceGroup * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindAllAsync(This,value) )
    ( (This)->lpVtbl->FromIdAsync(This,id,value) )
    ( (This)->lpVtbl->GetDeviceSelector(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroupStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceInfo[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaStreamType )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CMediaStreamType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceKind )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameSourceKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceGroup )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceGroup * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceInformation )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfoVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_MediaStreamType(This,value) )
    ( (This)->lpVtbl->get_SourceKind(This,value) )
    ( (This)->lpVtbl->get_SourceGroup(This,value) )
    ( (This)->lpVtbl->get_DeviceInformation(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMediaFrameSourceInfo2[] = L"Windows.Media.Capture.Frames.IMediaFrameSourceInfo2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProfileId )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoProfileMediaDescription )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCapture__CMediaCaptureVideoProfileMediaDescription * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProfileId(This,value) )
    ( (This)->lpVtbl->get_VideoProfileMediaDescription(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameSourceInfo2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameArrivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameArrivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReaderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReader_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameArrivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FrameArrived )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *TryAcquireLatestFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StartAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CCapture__CFrames__CMultiSourceMediaFrameReaderStartStatus * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopAsync )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReaderVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReaderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_FrameArrived(This,handler,token) )
    ( (This)->lpVtbl->remove_FrameArrived(This,token) )
    ( (This)->lpVtbl->TryAcquireLatestFrame(This,value) )
    ( (This)->lpVtbl->StartAsync(This,operation) )
    ( (This)->lpVtbl->StopAsync(This,action) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReader2[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReader2";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
                  __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AcquisitionMode )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CCapture_CFrames_CMediaFrameReaderAcquisitionMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2Vtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AcquisitionMode(This,value) )
    ( (This)->lpVtbl->get_AcquisitionMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReader2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IMultiSourceMediaFrameReference[] = L"Windows.Media.Capture.Frames.IMultiSourceMediaFrameReference";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetFrameReferenceBySourceId )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference * This,
                  __RPC__in HSTRING sourceId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReferenceVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReferenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetFrameReferenceBySourceId(This,sourceId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIMultiSourceMediaFrameReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IVideoMediaFrame[] = L"Windows.Media.Capture.Frames.IVideoMediaFrame";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_FrameReference )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direct3DSurface )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CameraIntrinsics )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CDevices_CCore_CICameraIntrinsics * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InfraredMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIInfraredMediaFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DepthMediaFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrame * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoFrame )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_FrameReference(This,value) )
    ( (This)->lpVtbl->get_VideoFormat(This,value) )
    ( (This)->lpVtbl->get_SoftwareBitmap(This,value) )
    ( (This)->lpVtbl->get_Direct3DSurface(This,value) )
    ( (This)->lpVtbl->get_CameraIntrinsics(This,value) )
    ( (This)->lpVtbl->get_InfraredMediaFrame(This,value) )
    ( (This)->lpVtbl->get_DepthMediaFrame(This,value) )
    ( (This)->lpVtbl->GetVideoFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Capture_Frames_IVideoMediaFrameFormat[] = L"Windows.Media.Capture.Frames.IVideoMediaFrameFormat";
typedef struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MediaFrameFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIMediaFrameFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DepthFormat )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCapture_CFrames_CIDepthMediaFrameFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormatVtbl;
interface __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormatVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MediaFrameFormat(This,value) )
    ( (This)->lpVtbl->get_DepthFormat(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CCapture_CFrames_CIVideoMediaFrameFormat;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_AudioMediaFrame[] = L"Windows.Media.Capture.Frames.AudioMediaFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_BufferMediaFrame[] = L"Windows.Media.Capture.Frames.BufferMediaFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_DepthMediaFrame[] = L"Windows.Media.Capture.Frames.DepthMediaFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_DepthMediaFrameFormat[] = L"Windows.Media.Capture.Frames.DepthMediaFrameFormat";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_InfraredMediaFrame[] = L"Windows.Media.Capture.Frames.InfraredMediaFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.MediaFrameArrivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameFormat[] = L"Windows.Media.Capture.Frames.MediaFrameFormat";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameReader[] = L"Windows.Media.Capture.Frames.MediaFrameReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameReference[] = L"Windows.Media.Capture.Frames.MediaFrameReference";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSource[] = L"Windows.Media.Capture.Frames.MediaFrameSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceController[] = L"Windows.Media.Capture.Frames.MediaFrameSourceController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceGetPropertyResult[] = L"Windows.Media.Capture.Frames.MediaFrameSourceGetPropertyResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceGroup[] = L"Windows.Media.Capture.Frames.MediaFrameSourceGroup";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MediaFrameSourceInfo[] = L"Windows.Media.Capture.Frames.MediaFrameSourceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameArrivedEventArgs[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameArrivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameReader[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReader";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_MultiSourceMediaFrameReference[] = L"Windows.Media.Capture.Frames.MultiSourceMediaFrameReference";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_VideoMediaFrame[] = L"Windows.Media.Capture.Frames.VideoMediaFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Capture_Frames_VideoMediaFrameFormat[] = L"Windows.Media.Capture.Frames.VideoMediaFrameFormat";
       
       
#pragma clang diagnostic pop
