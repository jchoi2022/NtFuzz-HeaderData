#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISideShowDriver ISideShowDriver;
typedef interface ISideShowClassExtension ISideShowClassExtension;
typedef interface ISideShowClassExtension2 ISideShowClassExtension2;
typedef class SideShowClassExtension SideShowClassExtension;
#include "propidl.h"
#include "wudfddi.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _SIDESHOW_TIME_ZONE_INFORMATION
    {
    LONG Bias;
    WCHAR StandardName[ 32 ];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[ 32 ];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
    } SIDESHOW_TIME_ZONE_INFORMATION;
typedef
enum tagUSER_STATE
    {
        AVAILABLE = 0,
        UNAVAILABLE = 1
    } USER_STATE;
typedef GUID APPLICATION_ID;
typedef GUID ENDPOINT_ID;
typedef LPWSTR DEVICE_ID;
typedef REFGUID REFAPPLICATION_ID;
typedef REFGUID REFENDPOINT_ID;
typedef ENDPOINT_ID *PENDPOINT_ID;
typedef APPLICATION_ID *PAPPLICATION_ID;
typedef DEVICE_ID *PDEVICE_ID;
typedef unsigned long CONTENT_ID;
typedef CONTENT_ID *PCONTENT_ID;
typedef unsigned long NOTIFICATION_ID;
typedef NOTIFICATION_ID *PNOTIFICATION_ID;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISideShowDriver;
    typedef struct ISideShowDriverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowDriver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowDriver * This);
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceName )(
            __RPC__in ISideShowDriver * This,
                                __RPC__deref_out_opt_string LPWSTR *ppwszName);
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceManufacturer )(
            __RPC__in ISideShowDriver * This,
                                __RPC__deref_out_opt_string LPWSTR *ppwszManufacturer);
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceFirmwareVersion )(
            __RPC__in ISideShowDriver * This,
                                __RPC__deref_out_opt_string LPWSTR *ppwszVersion);
        HRESULT ( STDMETHODCALLTYPE *OnSetTime )(
            __RPC__in ISideShowDriver * This,
                       const FILETIME FileTime);
        HRESULT ( STDMETHODCALLTYPE *OnSetTimeZone )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SIDESHOW_TIME_ZONE_INFORMATION *pTimeZoneInformation);
        HRESULT ( STDMETHODCALLTYPE *OnSetCurrentUser )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid);
        HRESULT ( STDMETHODCALLTYPE *OnGetCurrentUser )(
            __RPC__in ISideShowDriver * This,
                        __RPC__deref_out_opt SID **ppUserSid);
        HRESULT ( STDMETHODCALLTYPE *OnSetUserState )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       const USER_STATE state);
        HRESULT ( STDMETHODCALLTYPE *OnSetShortDateFormat )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                               __RPC__in_string LPCWSTR pwszDateFormat);
        HRESULT ( STDMETHODCALLTYPE *OnSetLongDateFormat )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                               __RPC__in_string LPCWSTR pwszDateFormat);
        HRESULT ( STDMETHODCALLTYPE *OnSetShortTimeFormat )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                               __RPC__in_string LPCWSTR pwszTimeFormat);
        HRESULT ( STDMETHODCALLTYPE *OnSetLongTimeFormat )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                               __RPC__in_string LPCWSTR pwszTimeFormat);
        HRESULT ( STDMETHODCALLTYPE *OnSetLanguage )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in LPCWSTR pwszLanguage);
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceEndpoints )(
            __RPC__in ISideShowDriver * This,
                                          __RPC__deref_out_ecount_full_opt(*pcEndpoints) ENDPOINT_ID **rgEndpoints,
                        __RPC__out DWORD *pcEndpoints);
        HRESULT ( STDMETHODCALLTYPE *OnGetDeviceCapabilities )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const PROPERTYKEY *pKey,
                        __RPC__out PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *OnGetPreEnabledApplications )(
            __RPC__in ISideShowDriver * This,
                                          __RPC__deref_out_ecount_full_opt(*pcApplications) APPLICATION_ID **ppApplicationIds,
                                          __RPC__deref_out_ecount_full_opt(*pcApplications) ENDPOINT_ID **ppEndpointIds,
                        __RPC__out DWORD *pcApplications);
        HRESULT ( STDMETHODCALLTYPE *OnSetApplicationOrder )(
            __RPC__in ISideShowDriver * This,
                                __RPC__in_ecount_full(cApplicationIds) const APPLICATION_ID *pApplicationIds,
                       const DWORD cApplicationIds);
        HRESULT ( STDMETHODCALLTYPE *OnGetApplicationOrder )(
            __RPC__in ISideShowDriver * This,
                                          __RPC__deref_out_ecount_full_opt(*pcApplicationIds) APPLICATION_ID **ppApplicationIds,
                        __RPC__out DWORD *pcApplicationIds);
        HRESULT ( STDMETHODCALLTYPE *OnAddApplication )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId,
                       __RPC__in REFENDPOINT_ID EndPointId,
                               __RPC__in_string LPCWSTR pcwszName,
                       const DWORD dwCachePolicy,
                       const DWORD dwOnlineOnly,
                                __RPC__in_ecount_full(cbLargeIcon) const unsigned char *pbLargeIcon,
                       const DWORD cbLargeIcon,
                                __RPC__in_ecount_full(cbMediumIcon) const unsigned char *pbMediumIcon,
                       const DWORD cbMediumIcon,
                                __RPC__in_ecount_full(cbSmallIcon) const unsigned char *pbSmallIcon,
                       const DWORD cbSmallIcon);
        HRESULT ( STDMETHODCALLTYPE *OnRemoveApplication )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId);
        HRESULT ( STDMETHODCALLTYPE *OnRemoveAllApplications )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid);
        HRESULT ( STDMETHODCALLTYPE *OnAddContent )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId,
                       __RPC__in REFENDPOINT_ID EndpointId,
                       const CONTENT_ID ContentId,
                                __RPC__in_ecount_full(cbData) const unsigned char *pData,
                       const DWORD cbData);
        HRESULT ( STDMETHODCALLTYPE *OnRemoveContent )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId,
                       __RPC__in REFENDPOINT_ID EndpointId,
                       const CONTENT_ID ContentId);
        HRESULT ( STDMETHODCALLTYPE *OnRemoveAllContent )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId,
                       __RPC__in REFENDPOINT_ID EndpointId);
        HRESULT ( STDMETHODCALLTYPE *OnAddNotification )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId,
                       const NOTIFICATION_ID NotificationId,
                       const FILETIME ftExpiration,
                               __RPC__in_string LPCWSTR pcwszTitle,
                               __RPC__in_string LPCWSTR pcwszMessage,
                                __RPC__in_ecount_full(cbImage) const unsigned char *pbImage,
                       const DWORD cbImage);
        HRESULT ( STDMETHODCALLTYPE *OnRemoveNotification )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId,
                       const NOTIFICATION_ID NotificationId);
        HRESULT ( STDMETHODCALLTYPE *OnRemoveAllNotifications )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       __RPC__in REFAPPLICATION_ID ApplicationId);
        HRESULT ( STDMETHODCALLTYPE *OnSetNotificationsEnabled )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in const SID *pUserSid,
                       const BOOL fIsEnabled);
        HRESULT ( STDMETHODCALLTYPE *OnProcessWpdMessage )(
            __RPC__in ISideShowDriver * This,
                       __RPC__in_opt IUnknown *pPortableDeviceValuesParams,
                       __RPC__in_opt IUnknown *pPortableDeviceValuesResults);
        END_INTERFACE
    } ISideShowDriverVtbl;
    interface ISideShowDriver
    {
        CONST_VTBL struct ISideShowDriverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetDeviceName(This,ppwszName) )
    ( (This)->lpVtbl -> OnGetDeviceManufacturer(This,ppwszManufacturer) )
    ( (This)->lpVtbl -> OnGetDeviceFirmwareVersion(This,ppwszVersion) )
    ( (This)->lpVtbl -> OnSetTime(This,FileTime) )
    ( (This)->lpVtbl -> OnSetTimeZone(This,pTimeZoneInformation) )
    ( (This)->lpVtbl -> OnSetCurrentUser(This,pUserSid) )
    ( (This)->lpVtbl -> OnGetCurrentUser(This,ppUserSid) )
    ( (This)->lpVtbl -> OnSetUserState(This,pUserSid,state) )
    ( (This)->lpVtbl -> OnSetShortDateFormat(This,pUserSid,pwszDateFormat) )
    ( (This)->lpVtbl -> OnSetLongDateFormat(This,pUserSid,pwszDateFormat) )
    ( (This)->lpVtbl -> OnSetShortTimeFormat(This,pUserSid,pwszTimeFormat) )
    ( (This)->lpVtbl -> OnSetLongTimeFormat(This,pUserSid,pwszTimeFormat) )
    ( (This)->lpVtbl -> OnSetLanguage(This,pUserSid,pwszLanguage) )
    ( (This)->lpVtbl -> OnGetDeviceEndpoints(This,rgEndpoints,pcEndpoints) )
    ( (This)->lpVtbl -> OnGetDeviceCapabilities(This,pKey,pvValue) )
    ( (This)->lpVtbl -> OnGetPreEnabledApplications(This,ppApplicationIds,ppEndpointIds,pcApplications) )
    ( (This)->lpVtbl -> OnSetApplicationOrder(This,pApplicationIds,cApplicationIds) )
    ( (This)->lpVtbl -> OnGetApplicationOrder(This,ppApplicationIds,pcApplicationIds) )
    ( (This)->lpVtbl -> OnAddApplication(This,pUserSid,ApplicationId,EndPointId,pcwszName,dwCachePolicy,dwOnlineOnly,pbLargeIcon,cbLargeIcon,pbMediumIcon,cbMediumIcon,pbSmallIcon,cbSmallIcon) )
    ( (This)->lpVtbl -> OnRemoveApplication(This,pUserSid,ApplicationId) )
    ( (This)->lpVtbl -> OnRemoveAllApplications(This,pUserSid) )
    ( (This)->lpVtbl -> OnAddContent(This,pUserSid,ApplicationId,EndpointId,ContentId,pData,cbData) )
    ( (This)->lpVtbl -> OnRemoveContent(This,pUserSid,ApplicationId,EndpointId,ContentId) )
    ( (This)->lpVtbl -> OnRemoveAllContent(This,pUserSid,ApplicationId,EndpointId) )
    ( (This)->lpVtbl -> OnAddNotification(This,pUserSid,ApplicationId,NotificationId,ftExpiration,pcwszTitle,pcwszMessage,pbImage,cbImage) )
    ( (This)->lpVtbl -> OnRemoveNotification(This,pUserSid,ApplicationId,NotificationId) )
    ( (This)->lpVtbl -> OnRemoveAllNotifications(This,pUserSid,ApplicationId) )
    ( (This)->lpVtbl -> OnSetNotificationsEnabled(This,pUserSid,fIsEnabled) )
    ( (This)->lpVtbl -> OnProcessWpdMessage(This,pPortableDeviceValuesParams,pPortableDeviceValuesResults) )
EXTERN_C const IID IID_ISideShowClassExtension;
    typedef struct ISideShowClassExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowClassExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowClassExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowClassExtension * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISideShowClassExtension * This,
                       __RPC__in_opt IUnknown *pWdfDeviceUnknown,
                       __RPC__in_opt IUnknown *pSideShowDriverUnknown);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            __RPC__in ISideShowClassExtension * This,
                       __RPC__in_opt IUnknown *pWdfDeviceUnknown);
        HRESULT ( STDMETHODCALLTYPE *OnProcessIoControl )(
            __RPC__in ISideShowClassExtension * This,
                       __RPC__in_opt IWDFIoQueue *pWdfQueue,
                       __RPC__in_opt IWDFIoRequest *pWdfRequest,
                       ULONG ControlCode,
                       SIZE_T InputBufferSizeInBytes,
                       SIZE_T OutputBufferSizeInBytes,
                        __RPC__out DWORD *pcbWritten);
        END_INTERFACE
    } ISideShowClassExtensionVtbl;
    interface ISideShowClassExtension
    {
        CONST_VTBL struct ISideShowClassExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pSideShowDriverUnknown) )
    ( (This)->lpVtbl -> Uninitialize(This,pWdfDeviceUnknown) )
    ( (This)->lpVtbl -> OnProcessIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes,pcbWritten) )
EXTERN_C const IID IID_ISideShowClassExtension2;
    typedef struct ISideShowClassExtension2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowClassExtension2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowClassExtension2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowClassExtension2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISideShowClassExtension2 * This,
                       __RPC__in_opt IUnknown *pWdfDeviceUnknown,
                       __RPC__in_opt IUnknown *pSideShowDriverUnknown);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            __RPC__in ISideShowClassExtension2 * This,
                       __RPC__in_opt IUnknown *pWdfDeviceUnknown);
        HRESULT ( STDMETHODCALLTYPE *OnProcessIoControl )(
            __RPC__in ISideShowClassExtension2 * This,
                       __RPC__in_opt IWDFIoQueue *pWdfQueue,
                       __RPC__in_opt IWDFIoRequest *pWdfRequest,
                       ULONG ControlCode,
                       SIZE_T InputBufferSizeInBytes,
                       SIZE_T OutputBufferSizeInBytes,
                        __RPC__out DWORD *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *InitializeAsync )(
            __RPC__in ISideShowClassExtension2 * This,
                       __RPC__in_opt IUnknown *pWdfDeviceUnknown,
                       __RPC__in_opt IUnknown *pSideShowDriverUnknown);
        HRESULT ( STDMETHODCALLTYPE *PostEvent )(
            __RPC__in ISideShowClassExtension2 * This,
                       __RPC__in REFGUID in_EventGuid,
                             __RPC__in_opt SID *const in_pSid,
                             __RPC__in_opt BYTE *const in_pbEventData,
                       const DWORD in_cbEventData);
        HRESULT ( STDMETHODCALLTYPE *CleanupFile )(
            __RPC__in ISideShowClassExtension2 * This,
                       __RPC__in_opt IWDFFile *pWdfFile);
        END_INTERFACE
    } ISideShowClassExtension2Vtbl;
    interface ISideShowClassExtension2
    {
        CONST_VTBL struct ISideShowClassExtension2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pSideShowDriverUnknown) )
    ( (This)->lpVtbl -> Uninitialize(This,pWdfDeviceUnknown) )
    ( (This)->lpVtbl -> OnProcessIoControl(This,pWdfQueue,pWdfRequest,ControlCode,InputBufferSizeInBytes,OutputBufferSizeInBytes,pcbWritten) )
    ( (This)->lpVtbl -> InitializeAsync(This,pWdfDeviceUnknown,pSideShowDriverUnknown) )
    ( (This)->lpVtbl -> PostEvent(This,in_EventGuid,in_pSid,in_pbEventData,in_cbEventData) )
    ( (This)->lpVtbl -> CleanupFile(This,pWdfFile) )
EXTERN_C const IID LIBID_WindowsSideShowDriverLibrary;
EXTERN_C const CLSID CLSID_SideShowClassExtension;
class DECLSPEC_UUID("76EFD608-E0CE-4887-98E2-F931363C4BC5")
SideShowClassExtension;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowclassextension_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
