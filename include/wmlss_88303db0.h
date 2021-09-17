#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IWindowsMediaLibrarySharingDeviceProperty IWindowsMediaLibrarySharingDeviceProperty;
typedef interface IWindowsMediaLibrarySharingDeviceProperties IWindowsMediaLibrarySharingDeviceProperties;
typedef interface IWindowsMediaLibrarySharingDevice IWindowsMediaLibrarySharingDevice;
typedef interface IWindowsMediaLibrarySharingDevices IWindowsMediaLibrarySharingDevices;
typedef interface IWindowsMediaLibrarySharingServices IWindowsMediaLibrarySharingServices;
typedef class WindowsMediaLibrarySharingServices WindowsMediaLibrarySharingServices;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0000_0000_v0_0_s_ifspec;
typedef
enum WindowsMediaLibrarySharingDeviceAuthorizationStatus
    {
        DEVICE_AUTHORIZATION_UNKNOWN = 0,
        DEVICE_AUTHORIZATION_ALLOWED = 1,
        DEVICE_AUTHORIZATION_DENIED = 2
    } WindowsMediaLibrarySharingDeviceAuthorizationStatus;
EXTERN_C const IID LIBID_WMLSS;
EXTERN_C const IID IID_IWindowsMediaLibrarySharingDeviceProperty;
    typedef struct IWindowsMediaLibrarySharingDevicePropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsMediaLibrarySharingDeviceProperty * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsMediaLibrarySharingDeviceProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsMediaLibrarySharingDeviceProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWindowsMediaLibrarySharingDeviceProperty * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWindowsMediaLibrarySharingDeviceProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWindowsMediaLibrarySharingDeviceProperty * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsMediaLibrarySharingDeviceProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            IWindowsMediaLibrarySharingDeviceProperty * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            IWindowsMediaLibrarySharingDeviceProperty * This,
                                VARIANT *value);
        END_INTERFACE
    } IWindowsMediaLibrarySharingDevicePropertyVtbl;
    interface IWindowsMediaLibrarySharingDeviceProperty
    {
        CONST_VTBL struct IWindowsMediaLibrarySharingDevicePropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> get_Value(This,value) )
EXTERN_C const IID IID_IWindowsMediaLibrarySharingDeviceProperties;
    typedef struct IWindowsMediaLibrarySharingDevicePropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsMediaLibrarySharingDeviceProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsMediaLibrarySharingDeviceProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
                       LONG index,
                                IWindowsMediaLibrarySharingDeviceProperty **property);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
                                LONG *count);
                               HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IWindowsMediaLibrarySharingDeviceProperties * This,
                       BSTR name,
                                IWindowsMediaLibrarySharingDeviceProperty **property);
        END_INTERFACE
    } IWindowsMediaLibrarySharingDevicePropertiesVtbl;
    interface IWindowsMediaLibrarySharingDeviceProperties
    {
        CONST_VTBL struct IWindowsMediaLibrarySharingDevicePropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,property) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> GetProperty(This,name,property) )
EXTERN_C const IID IID_IWindowsMediaLibrarySharingDevice;
    typedef struct IWindowsMediaLibrarySharingDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsMediaLibrarySharingDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsMediaLibrarySharingDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsMediaLibrarySharingDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWindowsMediaLibrarySharingDevice * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWindowsMediaLibrarySharingDevice * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWindowsMediaLibrarySharingDevice * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsMediaLibrarySharingDevice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceID )(
            IWindowsMediaLibrarySharingDevice * This,
                                BSTR *deviceID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Authorization )(
            IWindowsMediaLibrarySharingDevice * This,
                                WindowsMediaLibrarySharingDeviceAuthorizationStatus *authorization);
                                        HRESULT ( STDMETHODCALLTYPE *put_Authorization )(
            IWindowsMediaLibrarySharingDevice * This,
                       WindowsMediaLibrarySharingDeviceAuthorizationStatus authorization);
                                        HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            IWindowsMediaLibrarySharingDevice * This,
                                IWindowsMediaLibrarySharingDeviceProperties **deviceProperties);
        END_INTERFACE
    } IWindowsMediaLibrarySharingDeviceVtbl;
    interface IWindowsMediaLibrarySharingDevice
    {
        CONST_VTBL struct IWindowsMediaLibrarySharingDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DeviceID(This,deviceID) )
    ( (This)->lpVtbl -> get_Authorization(This,authorization) )
    ( (This)->lpVtbl -> put_Authorization(This,authorization) )
    ( (This)->lpVtbl -> get_Properties(This,deviceProperties) )
EXTERN_C const IID IID_IWindowsMediaLibrarySharingDevices;
    typedef struct IWindowsMediaLibrarySharingDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsMediaLibrarySharingDevices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsMediaLibrarySharingDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsMediaLibrarySharingDevices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWindowsMediaLibrarySharingDevices * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWindowsMediaLibrarySharingDevices * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWindowsMediaLibrarySharingDevices * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsMediaLibrarySharingDevices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            IWindowsMediaLibrarySharingDevices * This,
                       LONG index,
                                IWindowsMediaLibrarySharingDevice **device);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            IWindowsMediaLibrarySharingDevices * This,
                                LONG *count);
                               HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IWindowsMediaLibrarySharingDevices * This,
                       BSTR deviceID,
                                IWindowsMediaLibrarySharingDevice **device);
        END_INTERFACE
    } IWindowsMediaLibrarySharingDevicesVtbl;
    interface IWindowsMediaLibrarySharingDevices
    {
        CONST_VTBL struct IWindowsMediaLibrarySharingDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,index,device) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> GetDevice(This,deviceID,device) )
EXTERN_C const IID IID_IWindowsMediaLibrarySharingServices;
    typedef struct IWindowsMediaLibrarySharingServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWindowsMediaLibrarySharingServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWindowsMediaLibrarySharingServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWindowsMediaLibrarySharingServices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWindowsMediaLibrarySharingServices * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWindowsMediaLibrarySharingServices * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWindowsMediaLibrarySharingServices * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWindowsMediaLibrarySharingServices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *showShareMediaCPL )(
            IWindowsMediaLibrarySharingServices * This,
                       BSTR device);
                        HRESULT ( STDMETHODCALLTYPE *get_userHomeMediaSharingState )(
            IWindowsMediaLibrarySharingServices * This,
                                VARIANT_BOOL *sharingEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_userHomeMediaSharingState )(
            IWindowsMediaLibrarySharingServices * This,
                       VARIANT_BOOL sharingEnabled);
                        HRESULT ( STDMETHODCALLTYPE *get_userHomeMediaSharingLibraryName )(
            IWindowsMediaLibrarySharingServices * This,
                                BSTR *libraryName);
                        HRESULT ( STDMETHODCALLTYPE *put_userHomeMediaSharingLibraryName )(
            IWindowsMediaLibrarySharingServices * This,
                       BSTR libraryName);
                        HRESULT ( STDMETHODCALLTYPE *get_computerHomeMediaSharingAllowedState )(
            IWindowsMediaLibrarySharingServices * This,
                                VARIANT_BOOL *sharingAllowed);
                        HRESULT ( STDMETHODCALLTYPE *put_computerHomeMediaSharingAllowedState )(
            IWindowsMediaLibrarySharingServices * This,
                       VARIANT_BOOL sharingAllowed);
                        HRESULT ( STDMETHODCALLTYPE *get_userInternetMediaSharingState )(
            IWindowsMediaLibrarySharingServices * This,
                                VARIANT_BOOL *sharingEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_userInternetMediaSharingState )(
            IWindowsMediaLibrarySharingServices * This,
                       VARIANT_BOOL sharingEnabled);
                        HRESULT ( STDMETHODCALLTYPE *get_computerInternetMediaSharingAllowedState )(
            IWindowsMediaLibrarySharingServices * This,
                                VARIANT_BOOL *sharingAllowed);
                        HRESULT ( STDMETHODCALLTYPE *put_computerInternetMediaSharingAllowedState )(
            IWindowsMediaLibrarySharingServices * This,
                       VARIANT_BOOL sharingAllowed);
                        HRESULT ( STDMETHODCALLTYPE *get_internetMediaSharingSecurityGroup )(
            IWindowsMediaLibrarySharingServices * This,
                                BSTR *securityGroup);
                        HRESULT ( STDMETHODCALLTYPE *put_internetMediaSharingSecurityGroup )(
            IWindowsMediaLibrarySharingServices * This,
                       BSTR securityGroup);
                        HRESULT ( STDMETHODCALLTYPE *get_allowSharingToAllDevices )(
            IWindowsMediaLibrarySharingServices * This,
                                VARIANT_BOOL *sharingEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_allowSharingToAllDevices )(
            IWindowsMediaLibrarySharingServices * This,
                       VARIANT_BOOL sharingEnabled);
        HRESULT ( STDMETHODCALLTYPE *setDefaultAuthorization )(
            IWindowsMediaLibrarySharingServices * This,
                       BSTR MACAddresses,
                       BSTR friendlyName,
                       VARIANT_BOOL authorization);
        HRESULT ( STDMETHODCALLTYPE *setAuthorizationState )(
            IWindowsMediaLibrarySharingServices * This,
                       BSTR MACAddress,
                       VARIANT_BOOL authorizationState);
        HRESULT ( STDMETHODCALLTYPE *getAllDevices )(
            IWindowsMediaLibrarySharingServices * This,
                                IWindowsMediaLibrarySharingDevices **devices);
                        HRESULT ( STDMETHODCALLTYPE *get_customSettingsApplied )(
            IWindowsMediaLibrarySharingServices * This,
                                VARIANT_BOOL *customSettingsApplied);
        END_INTERFACE
    } IWindowsMediaLibrarySharingServicesVtbl;
    interface IWindowsMediaLibrarySharingServices
    {
        CONST_VTBL struct IWindowsMediaLibrarySharingServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> showShareMediaCPL(This,device) )
    ( (This)->lpVtbl -> get_userHomeMediaSharingState(This,sharingEnabled) )
    ( (This)->lpVtbl -> put_userHomeMediaSharingState(This,sharingEnabled) )
    ( (This)->lpVtbl -> get_userHomeMediaSharingLibraryName(This,libraryName) )
    ( (This)->lpVtbl -> put_userHomeMediaSharingLibraryName(This,libraryName) )
    ( (This)->lpVtbl -> get_computerHomeMediaSharingAllowedState(This,sharingAllowed) )
    ( (This)->lpVtbl -> put_computerHomeMediaSharingAllowedState(This,sharingAllowed) )
    ( (This)->lpVtbl -> get_userInternetMediaSharingState(This,sharingEnabled) )
    ( (This)->lpVtbl -> put_userInternetMediaSharingState(This,sharingEnabled) )
    ( (This)->lpVtbl -> get_computerInternetMediaSharingAllowedState(This,sharingAllowed) )
    ( (This)->lpVtbl -> put_computerInternetMediaSharingAllowedState(This,sharingAllowed) )
    ( (This)->lpVtbl -> get_internetMediaSharingSecurityGroup(This,securityGroup) )
    ( (This)->lpVtbl -> put_internetMediaSharingSecurityGroup(This,securityGroup) )
    ( (This)->lpVtbl -> get_allowSharingToAllDevices(This,sharingEnabled) )
    ( (This)->lpVtbl -> put_allowSharingToAllDevices(This,sharingEnabled) )
    ( (This)->lpVtbl -> setDefaultAuthorization(This,MACAddresses,friendlyName,authorization) )
    ( (This)->lpVtbl -> setAuthorizationState(This,MACAddress,authorizationState) )
    ( (This)->lpVtbl -> getAllDevices(This,devices) )
    ( (This)->lpVtbl -> get_customSettingsApplied(This,customSettingsApplied) )
EXTERN_C const CLSID CLSID_WindowsMediaLibrarySharingServices;
class DECLSPEC_UUID("AD581B00-7B64-4E59-A38D-D2C5BF51DDB3")
WindowsMediaLibrarySharingServices;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmlss_0000_0001_v0_0_s_ifspec;
}
