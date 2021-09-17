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
typedef interface __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics;
typedef enum __x_ABI_CWindows_CFoundation_CMetadata_CGCPressureAmount __x_ABI_CWindows_CFoundation_CMetadata_CGCPressureAmount;
enum __x_ABI_CWindows_CFoundation_CMetadata_CGCPressureAmount
{
    GCPressureAmount_Low = 0,
    GCPressureAmount_Medium = 1,
    GCPressureAmount_High = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Foundation_Metadata_IApiInformationStatics[] = L"Windows.Foundation.Metadata.IApiInformationStatics";
typedef struct __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsTypePresent )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING typeName,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *IsMethodPresent )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING typeName,
                  __RPC__in HSTRING methodName,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *IsMethodPresentWithArity )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING typeName,
                  __RPC__in HSTRING methodName,
                  UINT32 inputParameterCount,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsEventPresent )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING typeName,
                  __RPC__in HSTRING eventName,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsPropertyPresent )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING typeName,
                  __RPC__in HSTRING propertyName,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsReadOnlyPropertyPresent )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING typeName,
                  __RPC__in HSTRING propertyName,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsWriteablePropertyPresent )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING typeName,
                  __RPC__in HSTRING propertyName,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *IsEnumNamedValuePresent )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING enumTypeName,
                  __RPC__in HSTRING valueName,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *IsApiContractPresentByMajor )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING contractName,
                  UINT16 majorVersion,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *IsApiContractPresentByMajorAndMinor )(
        __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics * This,
                  __RPC__in HSTRING contractName,
                  UINT16 majorVersion,
                  UINT16 minorVersion,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStaticsVtbl;
interface __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsTypePresent(This,typeName,result) )
    ( (This)->lpVtbl->IsMethodPresent(This,typeName,methodName,result) )
    ( (This)->lpVtbl->IsMethodPresentWithArity(This,typeName,methodName,inputParameterCount,result) )
    ( (This)->lpVtbl->IsEventPresent(This,typeName,eventName,result) )
    ( (This)->lpVtbl->IsPropertyPresent(This,typeName,propertyName,result) )
    ( (This)->lpVtbl->IsReadOnlyPropertyPresent(This,typeName,propertyName,result) )
    ( (This)->lpVtbl->IsWriteablePropertyPresent(This,typeName,propertyName,result) )
    ( (This)->lpVtbl->IsEnumNamedValuePresent(This,enumTypeName,valueName,result) )
    ( (This)->lpVtbl->IsApiContractPresentByMajor(This,contractName,majorVersion,result) )
    ( (This)->lpVtbl->IsApiContractPresentByMajorAndMinor(This,contractName,majorVersion,minorVersion,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CFoundation_CMetadata_CIApiInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Foundation_Metadata_ApiInformation[] = L"Windows.Foundation.Metadata.ApiInformation";
       
       
#pragma clang diagnostic pop
