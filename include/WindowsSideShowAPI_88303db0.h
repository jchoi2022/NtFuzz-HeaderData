#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISideShowSession ISideShowSession;
typedef interface ISideShowNotificationManager ISideShowNotificationManager;
typedef interface ISideShowNotification ISideShowNotification;
typedef interface ISideShowContentManager ISideShowContentManager;
typedef interface ISideShowContent ISideShowContent;
typedef interface ISideShowEvents ISideShowEvents;
typedef interface ISideShowCapabilities ISideShowCapabilities;
typedef interface ISideShowCapabilitiesCollection ISideShowCapabilitiesCollection;
typedef interface ISideShowBulkCapabilities ISideShowBulkCapabilities;
typedef interface ISideShowKeyCollection ISideShowKeyCollection;
typedef interface ISideShowPropVariantCollection ISideShowPropVariantCollection;
typedef class SideShowSession SideShowSession;
typedef class SideShowNotification SideShowNotification;
typedef class SideShowKeyCollection SideShowKeyCollection;
typedef class SideShowPropVariantCollection SideShowPropVariantCollection;
#include "oaidl.h"
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
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
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISideShowSession;
    typedef struct ISideShowSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowSession * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterContent )(
            __RPC__in ISideShowSession * This,
                       __RPC__in REFAPPLICATION_ID in_applicationId,
                       __RPC__in REFENDPOINT_ID in_endpointId,
                        __RPC__deref_out_opt ISideShowContentManager **out_ppIContent);
        HRESULT ( STDMETHODCALLTYPE *RegisterNotifications )(
            __RPC__in ISideShowSession * This,
                       __RPC__in REFAPPLICATION_ID in_applicationId,
                        __RPC__deref_out_opt ISideShowNotificationManager **out_ppINotification);
        END_INTERFACE
    } ISideShowSessionVtbl;
    interface ISideShowSession
    {
        CONST_VTBL struct ISideShowSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterContent(This,in_applicationId,in_endpointId,out_ppIContent) )
    ( (This)->lpVtbl -> RegisterNotifications(This,in_applicationId,out_ppINotification) )
EXTERN_C const IID IID_ISideShowNotificationManager;
    typedef struct ISideShowNotificationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowNotificationManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowNotificationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowNotificationManager * This);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ISideShowNotificationManager * This,
                       __RPC__in_opt ISideShowNotification *in_pINotification);
        HRESULT ( STDMETHODCALLTYPE *Revoke )(
            __RPC__in ISideShowNotificationManager * This,
                       const NOTIFICATION_ID in_notificationId);
        HRESULT ( STDMETHODCALLTYPE *RevokeAll )(
            __RPC__in ISideShowNotificationManager * This);
        END_INTERFACE
    } ISideShowNotificationManagerVtbl;
    interface ISideShowNotificationManager
    {
        CONST_VTBL struct ISideShowNotificationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Show(This,in_pINotification) )
    ( (This)->lpVtbl -> Revoke(This,in_notificationId) )
    ( (This)->lpVtbl -> RevokeAll(This) )
EXTERN_C const IID IID_ISideShowNotification;
    typedef struct ISideShowNotificationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowNotification * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowNotification * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowNotification * This);
                        HRESULT ( STDMETHODCALLTYPE *get_NotificationId )(
            __RPC__in ISideShowNotification * This,
                                __RPC__out PNOTIFICATION_ID out_pNotificationId);
                        HRESULT ( STDMETHODCALLTYPE *put_NotificationId )(
            __RPC__in ISideShowNotification * This,
                       NOTIFICATION_ID in_notificationId);
                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in ISideShowNotification * This,
                                        __RPC__deref_out_opt_string LPWSTR *out_ppwszTitle);
                        HRESULT ( STDMETHODCALLTYPE *put_Title )(
            __RPC__in ISideShowNotification * This,
                               __RPC__in_string LPWSTR in_pwszTitle);
                        HRESULT ( STDMETHODCALLTYPE *get_Message )(
            __RPC__in ISideShowNotification * This,
                                        __RPC__deref_out_opt_string LPWSTR *out_ppwszMessage);
                        HRESULT ( STDMETHODCALLTYPE *put_Message )(
            __RPC__in ISideShowNotification * This,
                               __RPC__in_string LPWSTR in_pwszMessage);
                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in ISideShowNotification * This,
                                __RPC__deref_out_opt HICON *out_phIcon);
                        HRESULT ( STDMETHODCALLTYPE *put_Image )(
            __RPC__in ISideShowNotification * This,
                       __RPC__in HICON in_hIcon);
                        HRESULT ( STDMETHODCALLTYPE *get_ExpirationTime )(
            __RPC__in ISideShowNotification * This,
                                __RPC__out SYSTEMTIME *out_pTime);
                        HRESULT ( STDMETHODCALLTYPE *put_ExpirationTime )(
            __RPC__in ISideShowNotification * This,
                               __RPC__in_opt SYSTEMTIME *in_pTime);
        END_INTERFACE
    } ISideShowNotificationVtbl;
    interface ISideShowNotification
    {
        CONST_VTBL struct ISideShowNotificationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_NotificationId(This,out_pNotificationId) )
    ( (This)->lpVtbl -> put_NotificationId(This,in_notificationId) )
    ( (This)->lpVtbl -> get_Title(This,out_ppwszTitle) )
    ( (This)->lpVtbl -> put_Title(This,in_pwszTitle) )
    ( (This)->lpVtbl -> get_Message(This,out_ppwszMessage) )
    ( (This)->lpVtbl -> put_Message(This,in_pwszMessage) )
    ( (This)->lpVtbl -> get_Image(This,out_phIcon) )
    ( (This)->lpVtbl -> put_Image(This,in_hIcon) )
    ( (This)->lpVtbl -> get_ExpirationTime(This,out_pTime) )
    ( (This)->lpVtbl -> put_ExpirationTime(This,in_pTime) )
EXTERN_C const IID IID_ISideShowContentManager;
    typedef struct ISideShowContentManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowContentManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowContentManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowContentManager * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISideShowContentManager * This,
                       __RPC__in_opt ISideShowContent *in_pIContent);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ISideShowContentManager * This,
                       const CONTENT_ID in_contentId);
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
            __RPC__in ISideShowContentManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetEventSink )(
            __RPC__in ISideShowContentManager * This,
                               __RPC__in_opt ISideShowEvents *in_pIEvents);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCapabilities )(
            __RPC__in ISideShowContentManager * This,
                        __RPC__deref_out_opt ISideShowCapabilitiesCollection **out_ppCollection);
        END_INTERFACE
    } ISideShowContentManagerVtbl;
    interface ISideShowContentManager
    {
        CONST_VTBL struct ISideShowContentManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,in_pIContent) )
    ( (This)->lpVtbl -> Remove(This,in_contentId) )
    ( (This)->lpVtbl -> RemoveAll(This) )
    ( (This)->lpVtbl -> SetEventSink(This,in_pIEvents) )
    ( (This)->lpVtbl -> GetDeviceCapabilities(This,out_ppCollection) )
EXTERN_C const IID IID_ISideShowContent;
    typedef struct ISideShowContentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowContent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowContent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowContent * This);
        HRESULT ( STDMETHODCALLTYPE *GetContent )(
            __RPC__in ISideShowContent * This,
                               __RPC__in_opt ISideShowCapabilities *in_pICapabilities,
                        __RPC__out DWORD *out_pdwSize,
                                          __RPC__deref_out_ecount_full_opt(*out_pdwSize) BYTE **out_ppbData);
                        HRESULT ( STDMETHODCALLTYPE *get_ContentId )(
            __RPC__in ISideShowContent * This,
                        __RPC__out PCONTENT_ID out_pcontentId);
                        HRESULT ( STDMETHODCALLTYPE *get_DifferentiateContent )(
            __RPC__in ISideShowContent * This,
                        __RPC__out BOOL *out_pfDifferentiateContent);
        END_INTERFACE
    } ISideShowContentVtbl;
    interface ISideShowContent
    {
        CONST_VTBL struct ISideShowContentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetContent(This,in_pICapabilities,out_pdwSize,out_ppbData) )
    ( (This)->lpVtbl -> get_ContentId(This,out_pcontentId) )
    ( (This)->lpVtbl -> get_DifferentiateContent(This,out_pfDifferentiateContent) )
EXTERN_C const IID IID_ISideShowEvents;
    typedef struct ISideShowEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowEvents * This);
        HRESULT ( STDMETHODCALLTYPE *ContentMissing )(
            __RPC__in ISideShowEvents * This,
                       const CONTENT_ID in_contentId,
                        __RPC__deref_out_opt ISideShowContent **out_ppIContent);
        HRESULT ( STDMETHODCALLTYPE *ApplicationEvent )(
            __RPC__in ISideShowEvents * This,
                       __RPC__in_opt ISideShowCapabilities *in_pICapabilities,
                       const DWORD in_dwEventId,
                       const DWORD in_dwEventSize,
                                        __RPC__in_ecount_full_opt(in_dwEventSize) const BYTE *in_pbEventData);
        HRESULT ( STDMETHODCALLTYPE *DeviceAdded )(
            __RPC__in ISideShowEvents * This,
                       __RPC__in_opt ISideShowCapabilities *in_pIDevice);
        HRESULT ( STDMETHODCALLTYPE *DeviceRemoved )(
            __RPC__in ISideShowEvents * This,
                       __RPC__in_opt ISideShowCapabilities *in_pIDevice);
        END_INTERFACE
    } ISideShowEventsVtbl;
    interface ISideShowEvents
    {
        CONST_VTBL struct ISideShowEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ContentMissing(This,in_contentId,out_ppIContent) )
    ( (This)->lpVtbl -> ApplicationEvent(This,in_pICapabilities,in_dwEventId,in_dwEventSize,in_pbEventData) )
    ( (This)->lpVtbl -> DeviceAdded(This,in_pIDevice) )
    ( (This)->lpVtbl -> DeviceRemoved(This,in_pIDevice) )
EXTERN_C const IID IID_ISideShowCapabilities;
    typedef struct ISideShowCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapability )(
            __RPC__in ISideShowCapabilities * This,
                       __RPC__in REFPROPERTYKEY in_keyCapability,
                            __RPC__inout PROPVARIANT *inout_pValue);
        END_INTERFACE
    } ISideShowCapabilitiesVtbl;
    interface ISideShowCapabilities
    {
        CONST_VTBL struct ISideShowCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapability(This,in_keyCapability,inout_pValue) )
EXTERN_C const IID IID_ISideShowCapabilitiesCollection;
    typedef struct ISideShowCapabilitiesCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowCapabilitiesCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowCapabilitiesCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowCapabilitiesCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISideShowCapabilitiesCollection * This,
                        __RPC__out DWORD *out_pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in ISideShowCapabilitiesCollection * This,
                       DWORD in_dwIndex,
                        __RPC__deref_out_opt ISideShowCapabilities **out_ppCapabilities);
        END_INTERFACE
    } ISideShowCapabilitiesCollectionVtbl;
    interface ISideShowCapabilitiesCollection
    {
        CONST_VTBL struct ISideShowCapabilitiesCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,out_pdwCount) )
    ( (This)->lpVtbl -> GetAt(This,in_dwIndex,out_ppCapabilities) )
EXTERN_C const IID IID_ISideShowBulkCapabilities;
    typedef struct ISideShowBulkCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowBulkCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowBulkCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowBulkCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapability )(
            __RPC__in ISideShowBulkCapabilities * This,
                       __RPC__in REFPROPERTYKEY in_keyCapability,
                            __RPC__inout PROPVARIANT *inout_pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in ISideShowBulkCapabilities * This,
                       __RPC__in_opt ISideShowKeyCollection *in_keyCollection,
                            __RPC__deref_inout_opt ISideShowPropVariantCollection **inout_pValues);
        END_INTERFACE
    } ISideShowBulkCapabilitiesVtbl;
    interface ISideShowBulkCapabilities
    {
        CONST_VTBL struct ISideShowBulkCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapability(This,in_keyCapability,inout_pValue) )
    ( (This)->lpVtbl -> GetCapabilities(This,in_keyCollection,inout_pValues) )
EXTERN_C const IID IID_ISideShowKeyCollection;
    typedef struct ISideShowKeyCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowKeyCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowKeyCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowKeyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISideShowKeyCollection * This,
                       __RPC__in REFPROPERTYKEY Key);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ISideShowKeyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in ISideShowKeyCollection * This,
                       const DWORD dwIndex,
                            __RPC__inout PROPERTYKEY *pKey);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISideShowKeyCollection * This,
                       __RPC__in DWORD *pcElems);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in ISideShowKeyCollection * This,
                       const DWORD dwIndex);
        END_INTERFACE
    } ISideShowKeyCollectionVtbl;
    interface ISideShowKeyCollection
    {
        CONST_VTBL struct ISideShowKeyCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,Key) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetAt(This,dwIndex,pKey) )
    ( (This)->lpVtbl -> GetCount(This,pcElems) )
    ( (This)->lpVtbl -> RemoveAt(This,dwIndex) )
EXTERN_C const IID IID_ISideShowPropVariantCollection;
    typedef struct ISideShowPropVariantCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISideShowPropVariantCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISideShowPropVariantCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISideShowPropVariantCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISideShowPropVariantCollection * This,
                       __RPC__in const PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ISideShowPropVariantCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in ISideShowPropVariantCollection * This,
                       const DWORD dwIndex,
                            __RPC__inout PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISideShowPropVariantCollection * This,
                       __RPC__in DWORD *pcElems);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in ISideShowPropVariantCollection * This,
                       const DWORD dwIndex);
        END_INTERFACE
    } ISideShowPropVariantCollectionVtbl;
    interface ISideShowPropVariantCollection
    {
        CONST_VTBL struct ISideShowPropVariantCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,pValue) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetAt(This,dwIndex,pValue) )
    ( (This)->lpVtbl -> GetCount(This,pcElems) )
    ( (This)->lpVtbl -> RemoveAt(This,dwIndex) )
EXTERN_C const IID LIBID_WindowsSideShowApiLibrary;
EXTERN_C const CLSID CLSID_SideShowSession;
class DECLSPEC_UUID("e20543b9-f785-4ea2-981e-c4ffa76bbc7c")
SideShowSession;
EXTERN_C const CLSID CLSID_SideShowNotification;
class DECLSPEC_UUID("0ce3e86f-d5cd-4525-a766-1abab1a752f5")
SideShowNotification;
EXTERN_C const CLSID CLSID_SideShowKeyCollection;
class DECLSPEC_UUID("DFBBDBF8-18DE-49b8-83DC-EBC727C62D94")
SideShowKeyCollection;
EXTERN_C const CLSID CLSID_SideShowPropVariantCollection;
class DECLSPEC_UUID("E640F415-539E-4923-96CD-5F093BC250CD")
SideShowPropVariantCollection;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssideshowapi_0000_0012_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
