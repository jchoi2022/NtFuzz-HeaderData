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
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics;
typedef interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_SystemManufacturers_IOemSupportInfo[] = L"Windows.System.Profile.SystemManufacturers.IOemSupportInfo";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportLink )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportAppLink )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportProvider )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfoVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportLink(This,value) )
    ( (This)->lpVtbl->get_SupportAppLink(This,value) )
    ( (This)->lpVtbl->get_SupportProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_SystemManufacturers_ISmbiosInformationStatics[] = L"Windows.System.Profile.SystemManufacturers.ISmbiosInformationStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SerialNumber(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISmbiosInformationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_SystemManufacturers_ISystemSupportDeviceInfo[] = L"Windows.System.Profile.SystemManufacturers.ISystemSupportDeviceInfo";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OperatingSystem )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemManufacturer )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemProductName )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemSku )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemHardwareVersion )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemFirmwareVersion )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfoVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OperatingSystem(This,value) )
    ( (This)->lpVtbl->get_FriendlyName(This,value) )
    ( (This)->lpVtbl->get_SystemManufacturer(This,value) )
    ( (This)->lpVtbl->get_SystemProductName(This,value) )
    ( (This)->lpVtbl->get_SystemSku(This,value) )
    ( (This)->lpVtbl->get_SystemHardwareVersion(This,value) )
    ( (This)->lpVtbl->get_SystemFirmwareVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics[] = L"Windows.System.Profile.SystemManufacturers.ISystemSupportInfoStatics";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalSystemEdition )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OemSupportInfo )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CIOemSupportInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalSystemEdition(This,value) )
    ( (This)->lpVtbl->get_OemSupportInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Profile_SystemManufacturers_ISystemSupportInfoStatics2[] = L"Windows.System.Profile.SystemManufacturers.ISystemSupportInfoStatics2";
typedef struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LocalDeviceInfo )(
        __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportDeviceInfo * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2Vtbl;
interface __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LocalDeviceInfo(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CProfile_CSystemManufacturers_CISystemSupportInfoStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_OemSupportInfo[] = L"Windows.System.Profile.SystemManufacturers.OemSupportInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_SmbiosInformation[] = L"Windows.System.Profile.SystemManufacturers.SmbiosInformation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_SystemSupportDeviceInfo[] = L"Windows.System.Profile.SystemManufacturers.SystemSupportDeviceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Profile_SystemManufacturers_SystemSupportInfo[] = L"Windows.System.Profile.SystemManufacturers.SystemSupportInfo";
       
       
#pragma clang diagnostic pop
