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
#include "Windows.Storage.Streams.h"
#include "Windows.System.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics;
typedef interface __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;
EXTERN_C const IID IID___FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;
typedef struct __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__out __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl;
interface __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement
{
    CONST_VTBL struct __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;
EXTERN_C const IID IID___FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;
typedef struct __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This, __RPC__deref_out_opt __FIIterator_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement **first);
    END_INTERFACE
} __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl;
interface __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement
{
    CONST_VTBL struct __FIIterable_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;
EXTERN_C const IID IID___FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement;
typedef struct __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                       __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl;
interface __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement
{
    CONST_VTBL struct __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirementVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING;
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING * This, __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_HSTRING **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * This, __RPC__out __FIMapView_2_HSTRING_HSTRING * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef interface __x_ABI_CWindows_CSystem_CIUser __x_ABI_CWindows_CSystem_CIUser;
typedef enum __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel;
typedef enum __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource;
typedef enum __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState;
typedef enum __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons;
enum __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel
{
    PlatformDataCollectionLevel_Security = 0,
    PlatformDataCollectionLevel_Basic = 1,
    PlatformDataCollectionLevel_Enhanced = 2,
    PlatformDataCollectionLevel_Full = 3,
};
enum __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource
{
    SystemIdentificationSource_None = 0,
    SystemIdentificationSource_Tpm = 1,
    SystemIdentificationSource_Uefi = 2,
    SystemIdentificationSource_Registry = 3,
};
enum __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState
{
    SystemOutOfBoxExperienceState_NotStarted = 0,
    SystemOutOfBoxExperienceState_InProgress = 1,
    SystemOutOfBoxExperienceState_Completed = 2,
};
enum __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons
{
    UnsupportedAppRequirementReasons_Unknown = 0,
    UnsupportedAppRequirementReasons_DeniedBySystem = 0x1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsInfoStatics[] = L"Windows.System.Profile.IAnalyticsInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VersionInfo )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceForm )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VersionInfo(This,value) )
    ( (This)->lpVtbl->get_DeviceForm(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsInfoStatics2[] = L"Windows.System.Profile.IAnalyticsInfoStatics2";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSystemPropertiesAsync )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2 * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * attributeNames,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_HSTRING * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSystemPropertiesAsync(This,attributeNames,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsInfoStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAnalyticsVersionInfo[] = L"Windows.System.Profile.IAnalyticsVersionInfo";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceFamily )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeviceFamilyVersion )(
        __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfoVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceFamily(This,value) )
    ( (This)->lpVtbl->get_DeviceFamilyVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAnalyticsVersionInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IAppApplicabilityStatics[] = L"Windows.System.Profile.IAppApplicabilityStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUnsupportedAppRequirements )(
        __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics * This,
                  __RPC__in_opt __FIIterable_1_HSTRING * capabilities,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CSystem__CProfile__CUnsupportedAppRequirement * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetUnsupportedAppRequirements(This,capabilities,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIAppApplicabilityStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IEducationSettingsStatics[] = L"Windows.System.Profile.IEducationSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEducationEnvironment )(
        __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEducationEnvironment(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIEducationSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareIdentificationStatics[] = L"Windows.System.Profile.IHardwareIdentificationStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetPackageSpecificToken )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * nonce,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * * packageSpecificHardwareToken
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetPackageSpecificToken(This,nonce,packageSpecificHardwareToken) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareIdentificationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IHardwareToken[] = L"Windows.System.Profile.IHardwareToken";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Signature )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Certificate )(
        __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIHardwareToken
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIHardwareTokenVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Signature(This,value) )
    ( (This)->lpVtbl->get_Certificate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIHardwareToken;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IKnownRetailInfoPropertiesStatics[] = L"Windows.System.Profile.IKnownRetailInfoPropertiesStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RetailAccessCode )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManufacturerName )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayModelName )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Price )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFeatured )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FormFactor )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScreenSize )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Weight )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BatteryLifeDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProcessorDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Memory )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StorageDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GraphicsDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrontCameraDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RearCameraDescription )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasNfc )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasSdSlot )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasOpticalDrive )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOfficeInstalled )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WindowsEdition )(
        __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RetailAccessCode(This,value) )
    ( (This)->lpVtbl->get_ManufacturerName(This,value) )
    ( (This)->lpVtbl->get_ModelName(This,value) )
    ( (This)->lpVtbl->get_DisplayModelName(This,value) )
    ( (This)->lpVtbl->get_Price(This,value) )
    ( (This)->lpVtbl->get_IsFeatured(This,value) )
    ( (This)->lpVtbl->get_FormFactor(This,value) )
    ( (This)->lpVtbl->get_ScreenSize(This,value) )
    ( (This)->lpVtbl->get_Weight(This,value) )
    ( (This)->lpVtbl->get_DisplayDescription(This,value) )
    ( (This)->lpVtbl->get_BatteryLifeDescription(This,value) )
    ( (This)->lpVtbl->get_ProcessorDescription(This,value) )
    ( (This)->lpVtbl->get_Memory(This,value) )
    ( (This)->lpVtbl->get_StorageDescription(This,value) )
    ( (This)->lpVtbl->get_GraphicsDescription(This,value) )
    ( (This)->lpVtbl->get_FrontCameraDescription(This,value) )
    ( (This)->lpVtbl->get_RearCameraDescription(This,value) )
    ( (This)->lpVtbl->get_HasNfc(This,value) )
    ( (This)->lpVtbl->get_HasSdSlot(This,value) )
    ( (This)->lpVtbl->get_HasOpticalDrive(This,value) )
    ( (This)->lpVtbl->get_IsOfficeInstalled(This,value) )
    ( (This)->lpVtbl->get_WindowsEdition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIKnownRetailInfoPropertiesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IPlatformDiagnosticsAndUsageDataSettingsStatics[] = L"Windows.System.Profile.IPlatformDiagnosticsAndUsageDataSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CollectionLevel )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CollectionLevelChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CollectionLevelChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CanCollectDiagnostics )(
        __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics * This,
                  __x_ABI_CWindows_CSystem_CProfile_CPlatformDataCollectionLevel level,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CollectionLevel(This,value) )
    ( (This)->lpVtbl->add_CollectionLevelChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CollectionLevelChanged(This,token) )
    ( (This)->lpVtbl->CanCollectDiagnostics(This,level,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIPlatformDiagnosticsAndUsageDataSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IRetailInfoStatics[] = L"Windows.System.Profile.IRetailInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDemoModeEnabled )(
        __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDemoModeEnabled(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIRetailInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISharedModeSettingsStatics[] = L"Windows.System.Profile.ISharedModeSettingsStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISharedModeSettingsStatics2[] = L"Windows.System.Profile.ISharedModeSettingsStatics2";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ShouldAvoidLocalStorage )(
        __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ShouldAvoidLocalStorage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISharedModeSettingsStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemIdentificationInfo[] = L"Windows.System.Profile.ISystemIdentificationInfo";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CProfile_CSystemIdentificationSource * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfoVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemIdentificationStatics[] = L"Windows.System.Profile.ISystemIdentificationStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetSystemIdForPublisher )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetSystemIdForUser )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CIUser * user,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetSystemIdForPublisher(This,result) )
    ( (This)->lpVtbl->GetSystemIdForUser(This,user,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemIdentificationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_ISystemSetupInfoStatics[] = L"Windows.System.Profile.ISystemSetupInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OutOfBoxExperienceState )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CProfile_CSystemOutOfBoxExperienceState * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_OutOfBoxExperienceStateChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_OutOfBoxExperienceStateChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OutOfBoxExperienceState(This,value) )
    ( (This)->lpVtbl->add_OutOfBoxExperienceStateChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_OutOfBoxExperienceStateChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CISystemSetupInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IUnsupportedAppRequirement[] = L"Windows.System.Profile.IUnsupportedAppRequirement";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirementVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Requirement )(
        __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Reasons )(
        __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CProfile_CUnsupportedAppRequirementReasons * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirementVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirementVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Requirement(This,value) )
    ( (This)->lpVtbl->get_Reasons(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIUnsupportedAppRequirement;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_IWindowsIntegrityPolicyStatics[] = L"Windows.System.Profile.IWindowsIntegrityPolicyStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabledForTrial )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanDisable )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDisableSupported )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PolicyChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PolicyChanged )(
        __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsEnabledForTrial(This,value) )
    ( (This)->lpVtbl->get_CanDisable(This,value) )
    ( (This)->lpVtbl->get_IsDisableSupported(This,value) )
    ( (This)->lpVtbl->add_PolicyChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PolicyChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CIWindowsIntegrityPolicyStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AnalyticsInfo[] = L"Windows.System.Profile.AnalyticsInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AnalyticsVersionInfo[] = L"Windows.System.Profile.AnalyticsVersionInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_AppApplicability[] = L"Windows.System.Profile.AppApplicability";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_EducationSettings[] = L"Windows.System.Profile.EducationSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareIdentification[] = L"Windows.System.Profile.HardwareIdentification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_HardwareToken[] = L"Windows.System.Profile.HardwareToken";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_KnownRetailInfoProperties[] = L"Windows.System.Profile.KnownRetailInfoProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_PlatformDiagnosticsAndUsageDataSettings[] = L"Windows.System.Profile.PlatformDiagnosticsAndUsageDataSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_RetailInfo[] = L"Windows.System.Profile.RetailInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SharedModeSettings[] = L"Windows.System.Profile.SharedModeSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemIdentification[] = L"Windows.System.Profile.SystemIdentification";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemIdentificationInfo[] = L"Windows.System.Profile.SystemIdentificationInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemSetupInfo[] = L"Windows.System.Profile.SystemSetupInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_UnsupportedAppRequirement[] = L"Windows.System.Profile.UnsupportedAppRequirement";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_WindowsIntegrityPolicy[] = L"Windows.System.Profile.WindowsIntegrityPolicy";
       
       
#pragma clang diagnostic pop
