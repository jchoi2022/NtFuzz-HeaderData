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
#include "Windows.Media.Core.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2;
typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;
interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
typedef struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;
interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;
interface __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
typedef struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;
interface __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;
interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
typedef struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;
interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                       __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;
interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties;
typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                       __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl;
interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CIMediaEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                       __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;
interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * This, __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfileVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CAudioStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CAudioStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIAudioStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptorVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CVideoStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CVideoStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIVideoStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptorVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor;
typedef struct __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This, __RPC__in __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CCore_CIMediaStreamDescriptor * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl;
interface __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptorVtbl *lpVtbl;
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
typedef interface __FIMap_2_GUID_IInspectable __FIMap_2_GUID_IInspectable;
EXTERN_C const IID IID___FIMap_2_GUID_IInspectable;
typedef struct __FIMap_2_GUID_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                   GUID key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_GUID_IInspectable * This, GUID key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_GUID_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_GUID_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_GUID_IInspectable * This,
                   GUID key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_GUID_IInspectable * This, GUID key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_GUID_IInspectable * This);
    END_INTERFACE
} __FIMap_2_GUID_IInspectableVtbl;
interface __FIMap_2_GUID_IInspectable
{
    CONST_VTBL struct __FIMap_2_GUID_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality;
enum __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality
{
    AudioEncodingQuality_Auto = 0,
    AudioEncodingQuality_High = 1,
    AudioEncodingQuality_Medium = 2,
    AudioEncodingQuality_Low = 3,
};
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions
{
    MediaMirroringOptions_None = 0,
    MediaMirroringOptions_Horizontal = 0x1,
    MediaMirroringOptions_Vertical = 0x2,
};
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat
{
    MediaPixelFormat_Nv12 = 0,
    MediaPixelFormat_Bgra8 = 1,
    MediaPixelFormat_P010 = 2,
};
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation
{
    MediaRotation_None = 0,
    MediaRotation_Clockwise90Degrees = 1,
    MediaRotation_Clockwise180Degrees = 2,
    MediaRotation_Clockwise270Degrees = 3,
};
enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaThumbnailFormat
{
    MediaThumbnailFormat_Bmp = 0,
    MediaThumbnailFormat_Bgra8 = 1,
};
enum __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat
{
    SphericalVideoFrameFormat_None = 0,
    SphericalVideoFrameFormat_Unsupported = 1,
    SphericalVideoFrameFormat_Equirectangular = 2,
};
enum __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode
{
    StereoscopicVideoPackingMode_None = 0,
    StereoscopicVideoPackingMode_SideBySide = 1,
    StereoscopicVideoPackingMode_TopBottom = 2,
};
enum __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality
{
    VideoEncodingQuality_Auto = 0,
    VideoEncodingQuality_HD1080p = 1,
    VideoEncodingQuality_HD720p = 2,
    VideoEncodingQuality_Wvga = 3,
    VideoEncodingQuality_Ntsc = 4,
    VideoEncodingQuality_Pal = 5,
    VideoEncodingQuality_Vga = 6,
    VideoEncodingQuality_Qvga = 7,
    VideoEncodingQuality_Uhd2160p = 8,
    VideoEncodingQuality_Uhd4320p = 9,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingProperties[] = L"Windows.Media.MediaProperties.IAudioEncodingProperties";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ChannelCount )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ChannelCount )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SampleRate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SampleRate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BitsPerSample )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BitsPerSample )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Bitrate(This,value) )
    ( (This)->lpVtbl->get_Bitrate(This,value) )
    ( (This)->lpVtbl->put_ChannelCount(This,value) )
    ( (This)->lpVtbl->get_ChannelCount(This,value) )
    ( (This)->lpVtbl->put_SampleRate(This,value) )
    ( (This)->lpVtbl->get_SampleRate(This,value) )
    ( (This)->lpVtbl->put_BitsPerSample(This,value) )
    ( (This)->lpVtbl->get_BitsPerSample(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingProperties2[] = L"Windows.Media.MediaProperties.IAudioEncodingProperties2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSpatial )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSpatial(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingProperties3[] = L"Windows.Media.MediaProperties.IAudioEncodingProperties3";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                  UINT32 sampleRate,
                  UINT32 channelCount,
                  UINT32 bitrate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAacAdts )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                  UINT32 sampleRate,
                  UINT32 channelCount,
                  UINT32 bitrate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMp3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                  UINT32 sampleRate,
                  UINT32 channelCount,
                  UINT32 bitrate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePcm )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                  UINT32 sampleRate,
                  UINT32 channelCount,
                  UINT32 bitsPerSample,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWma )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics * This,
                  UINT32 sampleRate,
                  UINT32 channelCount,
                  UINT32 bitrate,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAac(This,sampleRate,channelCount,bitrate,value) )
    ( (This)->lpVtbl->CreateAacAdts(This,sampleRate,channelCount,bitrate,value) )
    ( (This)->lpVtbl->CreateMp3(This,sampleRate,channelCount,bitrate,value) )
    ( (This)->lpVtbl->CreatePcm(This,sampleRate,channelCount,bitsPerSample,value) )
    ( (This)->lpVtbl->CreateWma(This,sampleRate,channelCount,bitrate,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesStatics2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
                  UINT32 sampleRate,
                  UINT32 channelCount,
                  UINT32 bitsPerSample,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2 * This,
                  UINT32 sampleRate,
                  UINT32 channelCount,
                  UINT32 bitsPerSample,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAlac(This,sampleRate,channelCount,bitsPerSample,value) )
    ( (This)->lpVtbl->CreateFlac(This,sampleRate,channelCount,bitsPerSample,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IAudioEncodingPropertiesWithFormatUserData[] = L"Windows.Media.MediaProperties.IAudioEncodingPropertiesWithFormatUserData";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserDataVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData * This,
                   __RPC__out UINT32 * __valueSize,
                                              __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserDataVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserDataVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetFormatUserData(This,__valueSize,value) )
    ( (This)->lpVtbl->GetFormatUserData(This,__valueSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingPropertiesWithFormatUserData;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IContainerEncodingProperties[] = L"Windows.Media.MediaProperties.IContainerEncodingProperties";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IContainerEncodingProperties2[] = L"Windows.Media.MediaProperties.IContainerEncodingProperties2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IH264ProfileIdsStatics[] = L"Windows.Media.MediaProperties.IH264ProfileIdsStatics";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ConstrainedBaseline )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Baseline )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Extended )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Main )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_High )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_High10 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_High422 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_High444 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StereoHigh )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MultiviewHigh )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ConstrainedBaseline(This,value) )
    ( (This)->lpVtbl->get_Baseline(This,value) )
    ( (This)->lpVtbl->get_Extended(This,value) )
    ( (This)->lpVtbl->get_Main(This,value) )
    ( (This)->lpVtbl->get_High(This,value) )
    ( (This)->lpVtbl->get_High10(This,value) )
    ( (This)->lpVtbl->get_High422(This,value) )
    ( (This)->lpVtbl->get_High444(This,value) )
    ( (This)->lpVtbl->get_StereoHigh(This,value) )
    ( (This)->lpVtbl->get_MultiviewHigh(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIH264ProfileIdsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingProperties[] = L"Windows.Media.MediaProperties.IImageEncodingProperties";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Width(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->put_Height(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingProperties2[] = L"Windows.Media.MediaProperties.IImageEncodingProperties2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateJpeg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreatePng )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateJpegXR )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateJpeg(This,value) )
    ( (This)->lpVtbl->CreatePng(This,value) )
    ( (This)->lpVtbl->CreateJpegXR(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateUncompressed )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CMediaPixelFormat format,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateBmp )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateUncompressed(This,format,value) )
    ( (This)->lpVtbl->CreateBmp(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IImageEncodingPropertiesStatics3[] = L"Windows.Media.MediaProperties.IImageEncodingPropertiesStatics3";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateHeif )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingProperties * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateHeif(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIImageEncodingPropertiesStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfile[] = L"Windows.Media.MediaProperties.IMediaEncodingProfile";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Audio )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Audio )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Video )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Video )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Container )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIContainerEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Audio(This,value) )
    ( (This)->lpVtbl->get_Audio(This,value) )
    ( (This)->lpVtbl->put_Video(This,value) )
    ( (This)->lpVtbl->get_Video(This,value) )
    ( (This)->lpVtbl->put_Container(This,value) )
    ( (This)->lpVtbl->get_Container(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfile2[] = L"Windows.Media.MediaProperties.IMediaEncodingProfile2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetAudioTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CMedia__CCore__CAudioStreamDescriptor * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CAudioStreamDescriptor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetVideoTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CMedia__CCore__CVideoStreamDescriptor * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CVideoStreamDescriptor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetAudioTracks(This,value) )
    ( (This)->lpVtbl->GetAudioTracks(This,value) )
    ( (This)->lpVtbl->SetVideoTracks(This,value) )
    ( (This)->lpVtbl->GetVideoTracks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfile3[] = L"Windows.Media.MediaProperties.IMediaEncodingProfile3";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetTimedMetadataTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetTimedMetadataTracks )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CCore__CTimedMetadataStreamDescriptor * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetTimedMetadataTracks(This,value) )
    ( (This)->lpVtbl->GetTimedMetadataTracks(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateM4a )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMp3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWma )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMp4 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWmv )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromFileAsync )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromStreamAsync )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CMediaProperties__CMediaEncodingProfile * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateM4a(This,quality,value) )
    ( (This)->lpVtbl->CreateMp3(This,quality,value) )
    ( (This)->lpVtbl->CreateWma(This,quality,value) )
    ( (This)->lpVtbl->CreateMp4(This,quality,value) )
    ( (This)->lpVtbl->CreateWmv(This,quality,value) )
    ( (This)->lpVtbl->CreateFromFileAsync(This,file,operation) )
    ( (This)->lpVtbl->CreateFromStreamAsync(This,stream,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics2[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWav )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateAvi )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2 * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWav(This,quality,value) )
    ( (This)->lpVtbl->CreateAvi(This,quality,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProfileStatics3[] = L"Windows.Media.MediaProperties.IMediaEncodingProfileStatics3";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateAlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFlac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CAudioEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateHevc )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3 * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CVideoEncodingQuality quality,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAlac(This,quality,value) )
    ( (This)->lpVtbl->CreateFlac(This,quality,value) )
    ( (This)->lpVtbl->CreateHevc(This,quality,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfileStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingProperties[] = L"Windows.Media.MediaProperties.IMediaEncodingProperties";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
                           __RPC__deref_out_opt __FIMap_2_GUID_IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subtype )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtype )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Subtype(This,value) )
    ( (This)->lpVtbl->get_Subtype(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Aac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AacAdts )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Ac3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AmrNb )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AmrWb )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Argb32 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Asf )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Avi )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bgra8 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bmp )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Eac3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Float )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Gif )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_H263 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_H264 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_H264Es )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Hevc )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HevcEs )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Iyuv )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Jpeg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_JpegXr )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mjpg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mpeg )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mpeg1 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mpeg2 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mp3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mpeg4 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Nv12 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pcm )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Png )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rgb24 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rgb32 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tiff )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wave )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wma8 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wma9 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wmv3 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Wvc1 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Yuy2 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Yv12 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Aac(This,value) )
    ( (This)->lpVtbl->get_AacAdts(This,value) )
    ( (This)->lpVtbl->get_Ac3(This,value) )
    ( (This)->lpVtbl->get_AmrNb(This,value) )
    ( (This)->lpVtbl->get_AmrWb(This,value) )
    ( (This)->lpVtbl->get_Argb32(This,value) )
    ( (This)->lpVtbl->get_Asf(This,value) )
    ( (This)->lpVtbl->get_Avi(This,value) )
    ( (This)->lpVtbl->get_Bgra8(This,value) )
    ( (This)->lpVtbl->get_Bmp(This,value) )
    ( (This)->lpVtbl->get_Eac3(This,value) )
    ( (This)->lpVtbl->get_Float(This,value) )
    ( (This)->lpVtbl->get_Gif(This,value) )
    ( (This)->lpVtbl->get_H263(This,value) )
    ( (This)->lpVtbl->get_H264(This,value) )
    ( (This)->lpVtbl->get_H264Es(This,value) )
    ( (This)->lpVtbl->get_Hevc(This,value) )
    ( (This)->lpVtbl->get_HevcEs(This,value) )
    ( (This)->lpVtbl->get_Iyuv(This,value) )
    ( (This)->lpVtbl->get_Jpeg(This,value) )
    ( (This)->lpVtbl->get_JpegXr(This,value) )
    ( (This)->lpVtbl->get_Mjpg(This,value) )
    ( (This)->lpVtbl->get_Mpeg(This,value) )
    ( (This)->lpVtbl->get_Mpeg1(This,value) )
    ( (This)->lpVtbl->get_Mpeg2(This,value) )
    ( (This)->lpVtbl->get_Mp3(This,value) )
    ( (This)->lpVtbl->get_Mpeg4(This,value) )
    ( (This)->lpVtbl->get_Nv12(This,value) )
    ( (This)->lpVtbl->get_Pcm(This,value) )
    ( (This)->lpVtbl->get_Png(This,value) )
    ( (This)->lpVtbl->get_Rgb24(This,value) )
    ( (This)->lpVtbl->get_Rgb32(This,value) )
    ( (This)->lpVtbl->get_Tiff(This,value) )
    ( (This)->lpVtbl->get_Wave(This,value) )
    ( (This)->lpVtbl->get_Wma8(This,value) )
    ( (This)->lpVtbl->get_Wma9(This,value) )
    ( (This)->lpVtbl->get_Wmv3(This,value) )
    ( (This)->lpVtbl->get_Wvc1(This,value) )
    ( (This)->lpVtbl->get_Yuy2(This,value) )
    ( (This)->lpVtbl->get_Yv12(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics2[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Vp9 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_L8 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_L16 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_D16 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Vp9(This,value) )
    ( (This)->lpVtbl->get_L8(This,value) )
    ( (This)->lpVtbl->get_L16(This,value) )
    ( (This)->lpVtbl->get_D16(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics3[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics3";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Alac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Flac )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Alac(This,value) )
    ( (This)->lpVtbl->get_Flac(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics4[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics4";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_P010 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_P010(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaEncodingSubtypesStatics5[] = L"Windows.Media.MediaProperties.IMediaEncodingSubtypesStatics5";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Heif )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Heif(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingSubtypesStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMediaRatio[] = L"Windows.Media.MediaProperties.IMediaRatio";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatioVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Numerator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Numerator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Denominator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Denominator )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatioVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatioVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Numerator(This,value) )
    ( (This)->lpVtbl->get_Numerator(This,value) )
    ( (This)->lpVtbl->put_Denominator(This,value) )
    ( (This)->lpVtbl->get_Denominator(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IMpeg2ProfileIdsStatics[] = L"Windows.Media.MediaProperties.IMpeg2ProfileIdsStatics";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Simple )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Main )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SignalNoiseRatioScalable )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SpatiallyScalable )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_High )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Simple(This,value) )
    ( (This)->lpVtbl->get_Main(This,value) )
    ( (This)->lpVtbl->get_SignalNoiseRatioScalable(This,value) )
    ( (This)->lpVtbl->get_SpatiallyScalable(This,value) )
    ( (This)->lpVtbl->get_High(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIMpeg2ProfileIdsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_ITimedMetadataEncodingProperties[] = L"Windows.Media.MediaProperties.ITimedMetadataEncodingProperties";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This,
                   __RPC__out UINT32 * __valueSize,
                                              __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProperties * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetFormatUserData(This,__valueSize,value) )
    ( (This)->lpVtbl->GetFormatUserData(This,__valueSize,value) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CITimedMetadataEncodingProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bitrate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Width )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Height )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameRate )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PixelAspectRatio )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaRatio * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Bitrate(This,value) )
    ( (This)->lpVtbl->get_Bitrate(This,value) )
    ( (This)->lpVtbl->put_Width(This,value) )
    ( (This)->lpVtbl->get_Width(This,value) )
    ( (This)->lpVtbl->put_Height(This,value) )
    ( (This)->lpVtbl->get_Height(This,value) )
    ( (This)->lpVtbl->get_FrameRate(This,value) )
    ( (This)->lpVtbl->get_PixelAspectRatio(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties2[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetFormatUserData )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
                   __RPC__out UINT32 * __valueSize,
                                              __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProfileId )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProfileId )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2 * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetFormatUserData(This,__valueSize,value) )
    ( (This)->lpVtbl->GetFormatUserData(This,__valueSize,value) )
    ( (This)->lpVtbl->put_ProfileId(This,value) )
    ( (This)->lpVtbl->get_ProfileId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties3[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties3";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StereoscopicVideoPackingMode )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StereoscopicVideoPackingMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties4[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties4";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SphericalVideoFrameFormat )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SphericalVideoFrameFormat(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingProperties5[] = L"Windows.Media.MediaProperties.IVideoEncodingProperties5";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Copy )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Copy(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics[] = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateH264 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateMpeg2 )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateUncompressed )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics * This,
                  __RPC__in HSTRING subtype,
                  UINT32 width,
                  UINT32 height,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateH264(This,value) )
    ( (This)->lpVtbl->CreateMpeg2(This,value) )
    ( (This)->lpVtbl->CreateUncompressed(This,subtype,width,height,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_MediaProperties_IVideoEncodingPropertiesStatics2[] = L"Windows.Media.MediaProperties.IVideoEncodingPropertiesStatics2";
typedef struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateHevc )(
        __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateHevc(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingPropertiesStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_AudioEncodingProperties[] = L"Windows.Media.MediaProperties.AudioEncodingProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_ContainerEncodingProperties[] = L"Windows.Media.MediaProperties.ContainerEncodingProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_H264ProfileIds[] = L"Windows.Media.MediaProperties.H264ProfileIds";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_ImageEncodingProperties[] = L"Windows.Media.MediaProperties.ImageEncodingProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaEncodingProfile[] = L"Windows.Media.MediaProperties.MediaEncodingProfile";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaEncodingSubtypes[] = L"Windows.Media.MediaProperties.MediaEncodingSubtypes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaPropertySet[] = L"Windows.Media.MediaProperties.MediaPropertySet";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_MediaRatio[] = L"Windows.Media.MediaProperties.MediaRatio";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_Mpeg2ProfileIds[] = L"Windows.Media.MediaProperties.Mpeg2ProfileIds";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_TimedMetadataEncodingProperties[] = L"Windows.Media.MediaProperties.TimedMetadataEncodingProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProperties_VideoEncodingProperties[] = L"Windows.Media.MediaProperties.VideoEncodingProperties";
       
       
#pragma clang diagnostic pop
