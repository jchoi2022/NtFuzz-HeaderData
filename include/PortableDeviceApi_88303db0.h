#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPortableDeviceManager IPortableDeviceManager;
typedef interface IPortableDevice IPortableDevice;
typedef interface IPortableDeviceContent IPortableDeviceContent;
typedef interface IPortableDeviceContent2 IPortableDeviceContent2;
typedef interface IEnumPortableDeviceObjectIDs IEnumPortableDeviceObjectIDs;
typedef interface IPortableDeviceProperties IPortableDeviceProperties;
typedef interface IPortableDeviceResources IPortableDeviceResources;
typedef interface IPortableDeviceCapabilities IPortableDeviceCapabilities;
typedef interface IPortableDeviceEventCallback IPortableDeviceEventCallback;
typedef interface IPortableDeviceDataStream IPortableDeviceDataStream;
typedef interface IPortableDeviceUnitsStream IPortableDeviceUnitsStream;
typedef interface IPortableDevicePropertiesBulk IPortableDevicePropertiesBulk;
typedef interface IPortableDevicePropertiesBulkCallback IPortableDevicePropertiesBulkCallback;
typedef interface IPortableDeviceServiceManager IPortableDeviceServiceManager;
typedef interface IPortableDeviceService IPortableDeviceService;
typedef interface IPortableDeviceServiceCapabilities IPortableDeviceServiceCapabilities;
typedef interface IPortableDeviceServiceMethods IPortableDeviceServiceMethods;
typedef interface IPortableDeviceServiceMethodCallback IPortableDeviceServiceMethodCallback;
typedef interface IPortableDeviceServiceActivation IPortableDeviceServiceActivation;
typedef interface IPortableDeviceServiceOpenCallback IPortableDeviceServiceOpenCallback;
typedef interface IPortableDeviceDispatchFactory IPortableDeviceDispatchFactory;
typedef interface IPortableDeviceWebControl IPortableDeviceWebControl;
typedef class PortableDevice PortableDevice;
typedef class PortableDeviceManager PortableDeviceManager;
typedef class PortableDeviceService PortableDeviceService;
typedef class PortableDeviceDispatchFactory PortableDeviceDispatchFactory;
typedef class PortableDeviceFTM PortableDeviceFTM;
typedef class PortableDeviceServiceFTM PortableDeviceServiceFTM;
typedef class PortableDeviceWebControl PortableDeviceWebControl;
#include "propidl.h"
#include "PortableDeviceTypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPortableDeviceManager;
    typedef struct IPortableDeviceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetDevices )(
            __RPC__in IPortableDeviceManager * This,
                                    __RPC__deref_opt_inout_opt LPWSTR *pPnPDeviceIDs,
                            __RPC__inout DWORD *pcPnPDeviceIDs);
        HRESULT ( STDMETHODCALLTYPE *RefreshDeviceList )(
            __RPC__in IPortableDeviceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceFriendlyName )(
            __RPC__in IPortableDeviceManager * This,
                       __RPC__in LPCWSTR pszPnPDeviceID,
                                    __RPC__inout_opt WCHAR *pDeviceFriendlyName,
                            __RPC__inout DWORD *pcchDeviceFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceDescription )(
            __RPC__in IPortableDeviceManager * This,
                       __RPC__in LPCWSTR pszPnPDeviceID,
                                    __RPC__inout_opt WCHAR *pDeviceDescription,
                            __RPC__inout DWORD *pcchDeviceDescription);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceManufacturer )(
            __RPC__in IPortableDeviceManager * This,
                       __RPC__in LPCWSTR pszPnPDeviceID,
                                    __RPC__inout_opt WCHAR *pDeviceManufacturer,
                            __RPC__inout DWORD *pcchDeviceManufacturer);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceProperty )(
            __RPC__in IPortableDeviceManager * This,
                       __RPC__in LPCWSTR pszPnPDeviceID,
                       __RPC__in LPCWSTR pszDevicePropertyName,
                                    __RPC__inout_opt BYTE *pData,
                                    __RPC__inout_opt DWORD *pcbData,
                                    __RPC__inout_opt DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateDevices )(
            __RPC__in IPortableDeviceManager * This,
                                    __RPC__deref_opt_inout_opt LPWSTR *pPnPDeviceIDs,
                            __RPC__inout DWORD *pcPnPDeviceIDs);
        END_INTERFACE
    } IPortableDeviceManagerVtbl;
    interface IPortableDeviceManager
    {
        CONST_VTBL struct IPortableDeviceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevices(This,pPnPDeviceIDs,pcPnPDeviceIDs) )
    ( (This)->lpVtbl -> RefreshDeviceList(This) )
    ( (This)->lpVtbl -> GetDeviceFriendlyName(This,pszPnPDeviceID,pDeviceFriendlyName,pcchDeviceFriendlyName) )
    ( (This)->lpVtbl -> GetDeviceDescription(This,pszPnPDeviceID,pDeviceDescription,pcchDeviceDescription) )
    ( (This)->lpVtbl -> GetDeviceManufacturer(This,pszPnPDeviceID,pDeviceManufacturer,pcchDeviceManufacturer) )
    ( (This)->lpVtbl -> GetDeviceProperty(This,pszPnPDeviceID,pszDevicePropertyName,pData,pcbData,pdwType) )
    ( (This)->lpVtbl -> GetPrivateDevices(This,pPnPDeviceIDs,pcPnPDeviceIDs) )
EXTERN_C const IID IID_IPortableDevice;
    typedef struct IPortableDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IPortableDevice * This,
                       __RPC__in LPCWSTR pszPnPDeviceID,
                       __RPC__in_opt IPortableDeviceValues *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *SendCommand )(
            __RPC__in IPortableDevice * This,
                       const DWORD dwFlags,
                       __RPC__in_opt IPortableDeviceValues *pParameters,
                        __RPC__deref_out_opt IPortableDeviceValues **ppResults);
        HRESULT ( STDMETHODCALLTYPE *Content )(
            __RPC__in IPortableDevice * This,
                        __RPC__deref_out_opt IPortableDeviceContent **ppContent);
        HRESULT ( STDMETHODCALLTYPE *Capabilities )(
            __RPC__in IPortableDevice * This,
                        __RPC__deref_out_opt IPortableDeviceCapabilities **ppCapabilities);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IPortableDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IPortableDevice * This,
                       const DWORD dwFlags,
                       __RPC__in_opt IPortableDeviceEventCallback *pCallback,
                               __RPC__in_opt IPortableDeviceValues *pParameters,
                        __RPC__deref_out_opt LPWSTR *ppszCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IPortableDevice * This,
                       __RPC__in LPCWSTR pszCookie);
        HRESULT ( STDMETHODCALLTYPE *GetPnPDeviceID )(
            __RPC__in IPortableDevice * This,
                        __RPC__deref_out_opt LPWSTR *ppszPnPDeviceID);
        END_INTERFACE
    } IPortableDeviceVtbl;
    interface IPortableDevice
    {
        CONST_VTBL struct IPortableDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pszPnPDeviceID,pClientInfo) )
    ( (This)->lpVtbl -> SendCommand(This,dwFlags,pParameters,ppResults) )
    ( (This)->lpVtbl -> Content(This,ppContent) )
    ( (This)->lpVtbl -> Capabilities(This,ppCapabilities) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Advise(This,dwFlags,pCallback,pParameters,ppszCookie) )
    ( (This)->lpVtbl -> Unadvise(This,pszCookie) )
    ( (This)->lpVtbl -> GetPnPDeviceID(This,ppszPnPDeviceID) )
EXTERN_C const IID IID_IPortableDeviceContent;
    typedef struct IPortableDeviceContentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceContent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceContent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceContent * This);
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )(
            __RPC__in IPortableDeviceContent * This,
                       const DWORD dwFlags,
                       __RPC__in LPCWSTR pszParentObjectID,
                               __RPC__in_opt IPortableDeviceValues *pFilter,
                        __RPC__deref_out_opt IEnumPortableDeviceObjectIDs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Properties )(
            __RPC__in IPortableDeviceContent * This,
                        __RPC__deref_out_opt IPortableDeviceProperties **ppProperties);
        HRESULT ( STDMETHODCALLTYPE *Transfer )(
            __RPC__in IPortableDeviceContent * This,
                        __RPC__deref_out_opt IPortableDeviceResources **ppResources);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectWithPropertiesOnly )(
            __RPC__in IPortableDeviceContent * This,
                       __RPC__in_opt IPortableDeviceValues *pValues,
                                    __RPC__deref_opt_inout_opt LPWSTR *ppszObjectID);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectWithPropertiesAndData )(
            __RPC__in IPortableDeviceContent * This,
                       __RPC__in_opt IPortableDeviceValues *pValues,
                        __RPC__deref_out_opt IStream **ppData,
                                    __RPC__inout_opt DWORD *pdwOptimalWriteBufferSize,
                                    __RPC__deref_opt_inout_opt LPWSTR *ppszCookie);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPortableDeviceContent * This,
                       const DWORD dwOptions,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pObjectIDs,
                                    __RPC__deref_opt_inout_opt IPortableDevicePropVariantCollection **ppResults);
        HRESULT ( STDMETHODCALLTYPE *GetObjectIDsFromPersistentUniqueIDs )(
            __RPC__in IPortableDeviceContent * This,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pPersistentUniqueIDs,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppObjectIDs);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceContent * This);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IPortableDeviceContent * This,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pObjectIDs,
                       __RPC__in LPCWSTR pszDestinationFolderObjectID,
                                    __RPC__deref_opt_inout_opt IPortableDevicePropVariantCollection **ppResults);
        HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in IPortableDeviceContent * This,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pObjectIDs,
                       __RPC__in LPCWSTR pszDestinationFolderObjectID,
                                    __RPC__deref_opt_inout_opt IPortableDevicePropVariantCollection **ppResults);
        END_INTERFACE
    } IPortableDeviceContentVtbl;
    interface IPortableDeviceContent
    {
        CONST_VTBL struct IPortableDeviceContentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumObjects(This,dwFlags,pszParentObjectID,pFilter,ppEnum) )
    ( (This)->lpVtbl -> Properties(This,ppProperties) )
    ( (This)->lpVtbl -> Transfer(This,ppResources) )
    ( (This)->lpVtbl -> CreateObjectWithPropertiesOnly(This,pValues,ppszObjectID) )
    ( (This)->lpVtbl -> CreateObjectWithPropertiesAndData(This,pValues,ppData,pdwOptimalWriteBufferSize,ppszCookie) )
    ( (This)->lpVtbl -> Delete(This,dwOptions,pObjectIDs,ppResults) )
    ( (This)->lpVtbl -> GetObjectIDsFromPersistentUniqueIDs(This,pPersistentUniqueIDs,ppObjectIDs) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Move(This,pObjectIDs,pszDestinationFolderObjectID,ppResults) )
    ( (This)->lpVtbl -> Copy(This,pObjectIDs,pszDestinationFolderObjectID,ppResults) )
EXTERN_C const IID IID_IPortableDeviceContent2;
    typedef struct IPortableDeviceContent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceContent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceContent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceContent2 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )(
            __RPC__in IPortableDeviceContent2 * This,
                       const DWORD dwFlags,
                       __RPC__in LPCWSTR pszParentObjectID,
                               __RPC__in_opt IPortableDeviceValues *pFilter,
                        __RPC__deref_out_opt IEnumPortableDeviceObjectIDs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Properties )(
            __RPC__in IPortableDeviceContent2 * This,
                        __RPC__deref_out_opt IPortableDeviceProperties **ppProperties);
        HRESULT ( STDMETHODCALLTYPE *Transfer )(
            __RPC__in IPortableDeviceContent2 * This,
                        __RPC__deref_out_opt IPortableDeviceResources **ppResources);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectWithPropertiesOnly )(
            __RPC__in IPortableDeviceContent2 * This,
                       __RPC__in_opt IPortableDeviceValues *pValues,
                                    __RPC__deref_opt_inout_opt LPWSTR *ppszObjectID);
        HRESULT ( STDMETHODCALLTYPE *CreateObjectWithPropertiesAndData )(
            __RPC__in IPortableDeviceContent2 * This,
                       __RPC__in_opt IPortableDeviceValues *pValues,
                        __RPC__deref_out_opt IStream **ppData,
                                    __RPC__inout_opt DWORD *pdwOptimalWriteBufferSize,
                                    __RPC__deref_opt_inout_opt LPWSTR *ppszCookie);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPortableDeviceContent2 * This,
                       const DWORD dwOptions,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pObjectIDs,
                                    __RPC__deref_opt_inout_opt IPortableDevicePropVariantCollection **ppResults);
        HRESULT ( STDMETHODCALLTYPE *GetObjectIDsFromPersistentUniqueIDs )(
            __RPC__in IPortableDeviceContent2 * This,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pPersistentUniqueIDs,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppObjectIDs);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceContent2 * This);
        HRESULT ( STDMETHODCALLTYPE *Move )(
            __RPC__in IPortableDeviceContent2 * This,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pObjectIDs,
                       __RPC__in LPCWSTR pszDestinationFolderObjectID,
                                    __RPC__deref_opt_inout_opt IPortableDevicePropVariantCollection **ppResults);
        HRESULT ( STDMETHODCALLTYPE *Copy )(
            __RPC__in IPortableDeviceContent2 * This,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pObjectIDs,
                       __RPC__in LPCWSTR pszDestinationFolderObjectID,
                                    __RPC__deref_opt_inout_opt IPortableDevicePropVariantCollection **ppResults);
        HRESULT ( STDMETHODCALLTYPE *UpdateObjectWithPropertiesAndData )(
            __RPC__in IPortableDeviceContent2 * This,
                       __RPC__in LPCWSTR pszObjectID,
                       __RPC__in_opt IPortableDeviceValues *pProperties,
                        __RPC__deref_out_opt IStream **ppData,
                                    __RPC__inout_opt DWORD *pdwOptimalWriteBufferSize);
        END_INTERFACE
    } IPortableDeviceContent2Vtbl;
    interface IPortableDeviceContent2
    {
        CONST_VTBL struct IPortableDeviceContent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumObjects(This,dwFlags,pszParentObjectID,pFilter,ppEnum) )
    ( (This)->lpVtbl -> Properties(This,ppProperties) )
    ( (This)->lpVtbl -> Transfer(This,ppResources) )
    ( (This)->lpVtbl -> CreateObjectWithPropertiesOnly(This,pValues,ppszObjectID) )
    ( (This)->lpVtbl -> CreateObjectWithPropertiesAndData(This,pValues,ppData,pdwOptimalWriteBufferSize,ppszCookie) )
    ( (This)->lpVtbl -> Delete(This,dwOptions,pObjectIDs,ppResults) )
    ( (This)->lpVtbl -> GetObjectIDsFromPersistentUniqueIDs(This,pPersistentUniqueIDs,ppObjectIDs) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Move(This,pObjectIDs,pszDestinationFolderObjectID,ppResults) )
    ( (This)->lpVtbl -> Copy(This,pObjectIDs,pszDestinationFolderObjectID,ppResults) )
    ( (This)->lpVtbl -> UpdateObjectWithPropertiesAndData(This,pszObjectID,pProperties,ppData,pdwOptimalWriteBufferSize) )
EXTERN_C const IID IID_IEnumPortableDeviceObjectIDs;
    typedef struct IEnumPortableDeviceObjectIDsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumPortableDeviceObjectIDs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumPortableDeviceObjectIDs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumPortableDeviceObjectIDs * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumPortableDeviceObjectIDs * This,
                       ULONG cObjects,
                                            __RPC__out_ecount_part(cObjects, *pcFetched) LPWSTR *pObjIDs,
                                    __RPC__inout_opt ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumPortableDeviceObjectIDs * This,
                       ULONG cObjects);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumPortableDeviceObjectIDs * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumPortableDeviceObjectIDs * This,
                        __RPC__deref_out_opt IEnumPortableDeviceObjectIDs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IEnumPortableDeviceObjectIDs * This);
        END_INTERFACE
    } IEnumPortableDeviceObjectIDsVtbl;
    interface IEnumPortableDeviceObjectIDs
    {
        CONST_VTBL struct IEnumPortableDeviceObjectIDsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cObjects,pObjIDs,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cObjects) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IPortableDeviceProperties;
    typedef struct IPortableDevicePropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedProperties )(
            __RPC__in IPortableDeviceProperties * This,
                       __RPC__in LPCWSTR pszObjectID,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppKeys);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyAttributes )(
            __RPC__in IPortableDeviceProperties * This,
                       __RPC__in LPCWSTR pszObjectID,
                       __RPC__in REFPROPERTYKEY Key,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetValues )(
            __RPC__in IPortableDeviceProperties * This,
                       __RPC__in LPCWSTR pszObjectID,
                               __RPC__in_opt IPortableDeviceKeyCollection *pKeys,
                        __RPC__deref_out_opt IPortableDeviceValues **ppValues);
        HRESULT ( STDMETHODCALLTYPE *SetValues )(
            __RPC__in IPortableDeviceProperties * This,
                       __RPC__in LPCWSTR pszObjectID,
                       __RPC__in_opt IPortableDeviceValues *pValues,
                        __RPC__deref_out_opt IPortableDeviceValues **ppResults);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPortableDeviceProperties * This,
                       __RPC__in LPCWSTR pszObjectID,
                       __RPC__in_opt IPortableDeviceKeyCollection *pKeys);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceProperties * This);
        END_INTERFACE
    } IPortableDevicePropertiesVtbl;
    interface IPortableDeviceProperties
    {
        CONST_VTBL struct IPortableDevicePropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSupportedProperties(This,pszObjectID,ppKeys) )
    ( (This)->lpVtbl -> GetPropertyAttributes(This,pszObjectID,Key,ppAttributes) )
    ( (This)->lpVtbl -> GetValues(This,pszObjectID,pKeys,ppValues) )
    ( (This)->lpVtbl -> SetValues(This,pszObjectID,pValues,ppResults) )
    ( (This)->lpVtbl -> Delete(This,pszObjectID,pKeys) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IPortableDeviceResources;
    typedef struct IPortableDeviceResourcesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceResources * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceResources * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceResources * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedResources )(
            __RPC__in IPortableDeviceResources * This,
                       __RPC__in LPCWSTR pszObjectID,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppKeys);
        HRESULT ( STDMETHODCALLTYPE *GetResourceAttributes )(
            __RPC__in IPortableDeviceResources * This,
                       __RPC__in LPCWSTR pszObjectID,
                       __RPC__in REFPROPERTYKEY Key,
                        __RPC__deref_out_opt IPortableDeviceValues **ppResourceAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in IPortableDeviceResources * This,
                       __RPC__in LPCWSTR pszObjectID,
                       __RPC__in REFPROPERTYKEY Key,
                       const DWORD dwMode,
                                    __RPC__inout_opt DWORD *pdwOptimalBufferSize,
                        __RPC__deref_out_opt IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IPortableDeviceResources * This,
                       __RPC__in LPCWSTR pszObjectID,
                       __RPC__in_opt IPortableDeviceKeyCollection *pKeys);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceResources * This);
        HRESULT ( STDMETHODCALLTYPE *CreateResource )(
            __RPC__in IPortableDeviceResources * This,
                       __RPC__in_opt IPortableDeviceValues *pResourceAttributes,
                        __RPC__deref_out_opt IStream **ppData,
                                    __RPC__inout_opt DWORD *pdwOptimalWriteBufferSize,
                                    __RPC__deref_opt_inout_opt LPWSTR *ppszCookie);
        END_INTERFACE
    } IPortableDeviceResourcesVtbl;
    interface IPortableDeviceResources
    {
        CONST_VTBL struct IPortableDeviceResourcesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSupportedResources(This,pszObjectID,ppKeys) )
    ( (This)->lpVtbl -> GetResourceAttributes(This,pszObjectID,Key,ppResourceAttributes) )
    ( (This)->lpVtbl -> GetStream(This,pszObjectID,Key,dwMode,pdwOptimalBufferSize,ppStream) )
    ( (This)->lpVtbl -> Delete(This,pszObjectID,pKeys) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> CreateResource(This,pResourceAttributes,ppData,pdwOptimalWriteBufferSize,ppszCookie) )
EXTERN_C const IID IID_IPortableDeviceCapabilities;
    typedef struct IPortableDeviceCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedCommands )(
            __RPC__in IPortableDeviceCapabilities * This,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppCommands);
        HRESULT ( STDMETHODCALLTYPE *GetCommandOptions )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFPROPERTYKEY Command,
                        __RPC__deref_out_opt IPortableDeviceValues **ppOptions);
        HRESULT ( STDMETHODCALLTYPE *GetFunctionalCategories )(
            __RPC__in IPortableDeviceCapabilities * This,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppCategories);
        HRESULT ( STDMETHODCALLTYPE *GetFunctionalObjects )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFGUID Category,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppObjectIDs);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedContentTypes )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFGUID Category,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppContentTypes);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedFormats )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFGUID ContentType,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppFormats);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedFormatProperties )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFGUID Format,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppKeys);
        HRESULT ( STDMETHODCALLTYPE *GetFixedPropertyAttributes )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFGUID Format,
                       __RPC__in REFPROPERTYKEY Key,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedEvents )(
            __RPC__in IPortableDeviceCapabilities * This,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppEvents);
        HRESULT ( STDMETHODCALLTYPE *GetEventOptions )(
            __RPC__in IPortableDeviceCapabilities * This,
                       __RPC__in REFGUID Event,
                        __RPC__deref_out_opt IPortableDeviceValues **ppOptions);
        END_INTERFACE
    } IPortableDeviceCapabilitiesVtbl;
    interface IPortableDeviceCapabilities
    {
        CONST_VTBL struct IPortableDeviceCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSupportedCommands(This,ppCommands) )
    ( (This)->lpVtbl -> GetCommandOptions(This,Command,ppOptions) )
    ( (This)->lpVtbl -> GetFunctionalCategories(This,ppCategories) )
    ( (This)->lpVtbl -> GetFunctionalObjects(This,Category,ppObjectIDs) )
    ( (This)->lpVtbl -> GetSupportedContentTypes(This,Category,ppContentTypes) )
    ( (This)->lpVtbl -> GetSupportedFormats(This,ContentType,ppFormats) )
    ( (This)->lpVtbl -> GetSupportedFormatProperties(This,Format,ppKeys) )
    ( (This)->lpVtbl -> GetFixedPropertyAttributes(This,Format,Key,ppAttributes) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> GetSupportedEvents(This,ppEvents) )
    ( (This)->lpVtbl -> GetEventOptions(This,Event,ppOptions) )
EXTERN_C const IID IID_IPortableDeviceEventCallback;
    typedef struct IPortableDeviceEventCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceEventCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceEventCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceEventCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            __RPC__in IPortableDeviceEventCallback * This,
                       __RPC__in_opt IPortableDeviceValues *pEventParameters);
        END_INTERFACE
    } IPortableDeviceEventCallbackVtbl;
    interface IPortableDeviceEventCallback
    {
        CONST_VTBL struct IPortableDeviceEventCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEvent(This,pEventParameters) )
EXTERN_C const IID IID_IPortableDeviceDataStream;
    typedef struct IPortableDeviceDataStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceDataStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceDataStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceDataStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IPortableDeviceDataStream * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IPortableDeviceDataStream * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IPortableDeviceDataStream * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in IPortableDeviceDataStream * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IPortableDeviceDataStream * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IPortableDeviceDataStream * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IPortableDeviceDataStream * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in IPortableDeviceDataStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in IPortableDeviceDataStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IPortableDeviceDataStream * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IPortableDeviceDataStream * This,
                        __RPC__deref_out_opt IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *GetObjectID )(
            __RPC__in IPortableDeviceDataStream * This,
                        __RPC__deref_out_opt LPWSTR *ppszObjectID);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceDataStream * This);
        END_INTERFACE
    } IPortableDeviceDataStreamVtbl;
    interface IPortableDeviceDataStream
    {
        CONST_VTBL struct IPortableDeviceDataStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> GetObjectID(This,ppszObjectID) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IPortableDeviceUnitsStream;
    typedef struct IPortableDeviceUnitsStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceUnitsStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceUnitsStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceUnitsStream * This);
                      HRESULT ( STDMETHODCALLTYPE *SeekInUnits )(
            IPortableDeviceUnitsStream * This,
                       LARGE_INTEGER dlibMove,
                       WPD_STREAM_UNITS units,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceUnitsStream * This);
        END_INTERFACE
    } IPortableDeviceUnitsStreamVtbl;
    interface IPortableDeviceUnitsStream
    {
        CONST_VTBL struct IPortableDeviceUnitsStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SeekInUnits(This,dlibMove,units,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> Cancel(This) )
                HRESULT STDMETHODCALLTYPE IPortableDeviceUnitsStream_RemoteSeekInUnits_Proxy(
    __RPC__in IPortableDeviceUnitsStream * This,
               LARGE_INTEGER dlibMove,
               WPD_STREAM_UNITS units,
               DWORD dwOrigin,
                __RPC__out ULARGE_INTEGER *plibNewPosition);
void __RPC_STUB IPortableDeviceUnitsStream_RemoteSeekInUnits_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IPortableDevicePropertiesBulk;
    typedef struct IPortableDevicePropertiesBulkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDevicePropertiesBulk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDevicePropertiesBulk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDevicePropertiesBulk * This);
        HRESULT ( STDMETHODCALLTYPE *QueueGetValuesByObjectList )(
            __RPC__in IPortableDevicePropertiesBulk * This,
                       __RPC__in_opt IPortableDevicePropVariantCollection *pObjectIDs,
                       __RPC__in_opt IPortableDeviceKeyCollection *pKeys,
                       __RPC__in_opt IPortableDevicePropertiesBulkCallback *pCallback,
                        __RPC__out GUID *pContext);
        HRESULT ( STDMETHODCALLTYPE *QueueGetValuesByObjectFormat )(
            __RPC__in IPortableDevicePropertiesBulk * This,
                       __RPC__in REFGUID pguidObjectFormat,
                       __RPC__in LPCWSTR pszParentObjectID,
                       const DWORD dwDepth,
                       __RPC__in_opt IPortableDeviceKeyCollection *pKeys,
                       __RPC__in_opt IPortableDevicePropertiesBulkCallback *pCallback,
                        __RPC__out GUID *pContext);
        HRESULT ( STDMETHODCALLTYPE *QueueSetValuesByObjectList )(
            __RPC__in IPortableDevicePropertiesBulk * This,
                       __RPC__in_opt IPortableDeviceValuesCollection *pObjectValues,
                       __RPC__in_opt IPortableDevicePropertiesBulkCallback *pCallback,
                        __RPC__out GUID *pContext);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IPortableDevicePropertiesBulk * This,
                       __RPC__in REFGUID pContext);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDevicePropertiesBulk * This,
                       __RPC__in REFGUID pContext);
        END_INTERFACE
    } IPortableDevicePropertiesBulkVtbl;
    interface IPortableDevicePropertiesBulk
    {
        CONST_VTBL struct IPortableDevicePropertiesBulkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueueGetValuesByObjectList(This,pObjectIDs,pKeys,pCallback,pContext) )
    ( (This)->lpVtbl -> QueueGetValuesByObjectFormat(This,pguidObjectFormat,pszParentObjectID,dwDepth,pKeys,pCallback,pContext) )
    ( (This)->lpVtbl -> QueueSetValuesByObjectList(This,pObjectValues,pCallback,pContext) )
    ( (This)->lpVtbl -> Start(This,pContext) )
    ( (This)->lpVtbl -> Cancel(This,pContext) )
EXTERN_C const IID IID_IPortableDevicePropertiesBulkCallback;
    typedef struct IPortableDevicePropertiesBulkCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDevicePropertiesBulkCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDevicePropertiesBulkCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDevicePropertiesBulkCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnStart )(
            __RPC__in IPortableDevicePropertiesBulkCallback * This,
                       __RPC__in REFGUID pContext);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            __RPC__in IPortableDevicePropertiesBulkCallback * This,
                       __RPC__in REFGUID pContext,
                       __RPC__in_opt IPortableDeviceValuesCollection *pResults);
        HRESULT ( STDMETHODCALLTYPE *OnEnd )(
            __RPC__in IPortableDevicePropertiesBulkCallback * This,
                       __RPC__in REFGUID pContext,
                       HRESULT hrStatus);
        END_INTERFACE
    } IPortableDevicePropertiesBulkCallbackVtbl;
    interface IPortableDevicePropertiesBulkCallback
    {
        CONST_VTBL struct IPortableDevicePropertiesBulkCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStart(This,pContext) )
    ( (This)->lpVtbl -> OnProgress(This,pContext,pResults) )
    ( (This)->lpVtbl -> OnEnd(This,pContext,hrStatus) )
EXTERN_C const IID IID_IPortableDeviceServiceManager;
    typedef struct IPortableDeviceServiceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceServiceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceServiceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceServiceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceServices )(
            __RPC__in IPortableDeviceServiceManager * This,
                       __RPC__in LPCWSTR pszPnPDeviceID,
                       __RPC__in REFGUID guidServiceCategory,
                                    __RPC__deref_opt_inout_opt LPWSTR *pServices,
                            __RPC__inout DWORD *pcServices);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceForService )(
            __RPC__in IPortableDeviceServiceManager * This,
                       __RPC__in LPCWSTR pszPnPServiceID,
                        __RPC__deref_out_opt LPWSTR *ppszPnPDeviceID);
        END_INTERFACE
    } IPortableDeviceServiceManagerVtbl;
    interface IPortableDeviceServiceManager
    {
        CONST_VTBL struct IPortableDeviceServiceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceServices(This,pszPnPDeviceID,guidServiceCategory,pServices,pcServices) )
    ( (This)->lpVtbl -> GetDeviceForService(This,pszPnPServiceID,ppszPnPDeviceID) )
EXTERN_C const IID IID_IPortableDeviceService;
    typedef struct IPortableDeviceServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceService * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IPortableDeviceService * This,
                       __RPC__in LPCWSTR pszPnPServiceID,
                       __RPC__in_opt IPortableDeviceValues *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *Capabilities )(
            __RPC__in IPortableDeviceService * This,
                        __RPC__deref_out_opt IPortableDeviceServiceCapabilities **ppCapabilities);
        HRESULT ( STDMETHODCALLTYPE *Content )(
            __RPC__in IPortableDeviceService * This,
                        __RPC__deref_out_opt IPortableDeviceContent2 **ppContent);
        HRESULT ( STDMETHODCALLTYPE *Methods )(
            __RPC__in IPortableDeviceService * This,
                        __RPC__deref_out_opt IPortableDeviceServiceMethods **ppMethods);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceService * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IPortableDeviceService * This);
        HRESULT ( STDMETHODCALLTYPE *GetServiceObjectID )(
            __RPC__in IPortableDeviceService * This,
                        __RPC__deref_out_opt LPWSTR *ppszServiceObjectID);
        HRESULT ( STDMETHODCALLTYPE *GetPnPServiceID )(
            __RPC__in IPortableDeviceService * This,
                        __RPC__deref_out_opt LPWSTR *ppszPnPServiceID);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IPortableDeviceService * This,
                       const DWORD dwFlags,
                       __RPC__in_opt IPortableDeviceEventCallback *pCallback,
                               __RPC__in_opt IPortableDeviceValues *pParameters,
                        __RPC__deref_out_opt LPWSTR *ppszCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IPortableDeviceService * This,
                       __RPC__in LPCWSTR pszCookie);
        HRESULT ( STDMETHODCALLTYPE *SendCommand )(
            __RPC__in IPortableDeviceService * This,
                       const DWORD dwFlags,
                       __RPC__in_opt IPortableDeviceValues *pParameters,
                        __RPC__deref_out_opt IPortableDeviceValues **ppResults);
        END_INTERFACE
    } IPortableDeviceServiceVtbl;
    interface IPortableDeviceService
    {
        CONST_VTBL struct IPortableDeviceServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pszPnPServiceID,pClientInfo) )
    ( (This)->lpVtbl -> Capabilities(This,ppCapabilities) )
    ( (This)->lpVtbl -> Content(This,ppContent) )
    ( (This)->lpVtbl -> Methods(This,ppMethods) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> GetServiceObjectID(This,ppszServiceObjectID) )
    ( (This)->lpVtbl -> GetPnPServiceID(This,ppszPnPServiceID) )
    ( (This)->lpVtbl -> Advise(This,dwFlags,pCallback,pParameters,ppszCookie) )
    ( (This)->lpVtbl -> Unadvise(This,pszCookie) )
    ( (This)->lpVtbl -> SendCommand(This,dwFlags,pParameters,ppResults) )
EXTERN_C const IID IID_IPortableDeviceServiceCapabilities;
    typedef struct IPortableDeviceServiceCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceServiceCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceServiceCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedMethods )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppMethods);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedMethodsByFormat )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Format,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppMethods);
        HRESULT ( STDMETHODCALLTYPE *GetMethodAttributes )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Method,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetMethodParameterAttributes )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Method,
                       __RPC__in REFPROPERTYKEY Parameter,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedFormats )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppFormats);
        HRESULT ( STDMETHODCALLTYPE *GetFormatAttributes )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Format,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedFormatProperties )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Format,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppKeys);
        HRESULT ( STDMETHODCALLTYPE *GetFormatPropertyAttributes )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Format,
                       __RPC__in REFPROPERTYKEY Property,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedEvents )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppEvents);
        HRESULT ( STDMETHODCALLTYPE *GetEventAttributes )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Event,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetEventParameterAttributes )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Event,
                       __RPC__in REFPROPERTYKEY Parameter,
                        __RPC__deref_out_opt IPortableDeviceValues **ppAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetInheritedServices )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       const DWORD dwInheritanceType,
                        __RPC__deref_out_opt IPortableDevicePropVariantCollection **ppServices);
        HRESULT ( STDMETHODCALLTYPE *GetFormatRenderingProfiles )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFGUID Format,
                        __RPC__deref_out_opt IPortableDeviceValuesCollection **ppRenderingProfiles);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedCommands )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppCommands);
        HRESULT ( STDMETHODCALLTYPE *GetCommandOptions )(
            __RPC__in IPortableDeviceServiceCapabilities * This,
                       __RPC__in REFPROPERTYKEY Command,
                        __RPC__deref_out_opt IPortableDeviceValues **ppOptions);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceServiceCapabilities * This);
        END_INTERFACE
    } IPortableDeviceServiceCapabilitiesVtbl;
    interface IPortableDeviceServiceCapabilities
    {
        CONST_VTBL struct IPortableDeviceServiceCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSupportedMethods(This,ppMethods) )
    ( (This)->lpVtbl -> GetSupportedMethodsByFormat(This,Format,ppMethods) )
    ( (This)->lpVtbl -> GetMethodAttributes(This,Method,ppAttributes) )
    ( (This)->lpVtbl -> GetMethodParameterAttributes(This,Method,Parameter,ppAttributes) )
    ( (This)->lpVtbl -> GetSupportedFormats(This,ppFormats) )
    ( (This)->lpVtbl -> GetFormatAttributes(This,Format,ppAttributes) )
    ( (This)->lpVtbl -> GetSupportedFormatProperties(This,Format,ppKeys) )
    ( (This)->lpVtbl -> GetFormatPropertyAttributes(This,Format,Property,ppAttributes) )
    ( (This)->lpVtbl -> GetSupportedEvents(This,ppEvents) )
    ( (This)->lpVtbl -> GetEventAttributes(This,Event,ppAttributes) )
    ( (This)->lpVtbl -> GetEventParameterAttributes(This,Event,Parameter,ppAttributes) )
    ( (This)->lpVtbl -> GetInheritedServices(This,dwInheritanceType,ppServices) )
    ( (This)->lpVtbl -> GetFormatRenderingProfiles(This,Format,ppRenderingProfiles) )
    ( (This)->lpVtbl -> GetSupportedCommands(This,ppCommands) )
    ( (This)->lpVtbl -> GetCommandOptions(This,Command,ppOptions) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IPortableDeviceServiceMethods;
    typedef struct IPortableDeviceServiceMethodsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceServiceMethods * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceServiceMethods * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceServiceMethods * This);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IPortableDeviceServiceMethods * This,
                       __RPC__in REFGUID Method,
                               __RPC__in_opt IPortableDeviceValues *pParameters,
                                    __RPC__deref_opt_inout_opt IPortableDeviceValues **ppResults);
        HRESULT ( STDMETHODCALLTYPE *InvokeAsync )(
            __RPC__in IPortableDeviceServiceMethods * This,
                       __RPC__in REFGUID Method,
                               __RPC__in_opt IPortableDeviceValues *pParameters,
                               __RPC__in_opt IPortableDeviceServiceMethodCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPortableDeviceServiceMethods * This,
                               __RPC__in_opt IPortableDeviceServiceMethodCallback *pCallback);
        END_INTERFACE
    } IPortableDeviceServiceMethodsVtbl;
    interface IPortableDeviceServiceMethods
    {
        CONST_VTBL struct IPortableDeviceServiceMethodsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,Method,pParameters,ppResults) )
    ( (This)->lpVtbl -> InvokeAsync(This,Method,pParameters,pCallback) )
    ( (This)->lpVtbl -> Cancel(This,pCallback) )
EXTERN_C const IID IID_IPortableDeviceServiceMethodCallback;
    typedef struct IPortableDeviceServiceMethodCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceServiceMethodCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceServiceMethodCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceServiceMethodCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnComplete )(
            __RPC__in IPortableDeviceServiceMethodCallback * This,
                       HRESULT hrStatus,
                       __RPC__in_opt IPortableDeviceValues *pResults);
        END_INTERFACE
    } IPortableDeviceServiceMethodCallbackVtbl;
    interface IPortableDeviceServiceMethodCallback
    {
        CONST_VTBL struct IPortableDeviceServiceMethodCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnComplete(This,hrStatus,pResults) )
EXTERN_C const IID IID_IPortableDeviceServiceActivation;
    typedef struct IPortableDeviceServiceActivationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceServiceActivation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceServiceActivation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceServiceActivation * This);
        HRESULT ( STDMETHODCALLTYPE *OpenAsync )(
            __RPC__in IPortableDeviceServiceActivation * This,
                       __RPC__in LPCWSTR pszPnPServiceID,
                       __RPC__in_opt IPortableDeviceValues *pClientInfo,
                       __RPC__in_opt IPortableDeviceServiceOpenCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *CancelOpenAsync )(
            __RPC__in IPortableDeviceServiceActivation * This);
        END_INTERFACE
    } IPortableDeviceServiceActivationVtbl;
    interface IPortableDeviceServiceActivation
    {
        CONST_VTBL struct IPortableDeviceServiceActivationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenAsync(This,pszPnPServiceID,pClientInfo,pCallback) )
    ( (This)->lpVtbl -> CancelOpenAsync(This) )
EXTERN_C const IID IID_IPortableDeviceServiceOpenCallback;
    typedef struct IPortableDeviceServiceOpenCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPortableDeviceServiceOpenCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPortableDeviceServiceOpenCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPortableDeviceServiceOpenCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnComplete )(
            __RPC__in IPortableDeviceServiceOpenCallback * This,
                       HRESULT hrStatus);
        END_INTERFACE
    } IPortableDeviceServiceOpenCallbackVtbl;
    interface IPortableDeviceServiceOpenCallback
    {
        CONST_VTBL struct IPortableDeviceServiceOpenCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnComplete(This,hrStatus) )
EXTERN_C const IID IID_IPortableDeviceDispatchFactory;
    typedef struct IPortableDeviceDispatchFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPortableDeviceDispatchFactory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPortableDeviceDispatchFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPortableDeviceDispatchFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceDispatch )(
            IPortableDeviceDispatchFactory * This,
                       LPCWSTR pszPnPDeviceID,
                        IDispatch **ppDeviceDispatch);
        END_INTERFACE
    } IPortableDeviceDispatchFactoryVtbl;
    interface IPortableDeviceDispatchFactory
    {
        CONST_VTBL struct IPortableDeviceDispatchFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceDispatch(This,pszPnPDeviceID,ppDeviceDispatch) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IPortableDeviceWebControl;
    typedef struct IPortableDeviceWebControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPortableDeviceWebControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPortableDeviceWebControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPortableDeviceWebControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IPortableDeviceWebControl * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IPortableDeviceWebControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IPortableDeviceWebControl * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPortableDeviceWebControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceFromId )(
            IPortableDeviceWebControl * This,
            _In_ BSTR deviceId,
            _COM_Outptr_ IDispatch **ppDevice);
                               HRESULT ( STDMETHODCALLTYPE *GetDeviceFromIdAsync )(
            IPortableDeviceWebControl * This,
            _In_ BSTR deviceId,
            _In_ IDispatch *pCompletionHandler,
            _In_opt_ IDispatch *pErrorHandler);
        END_INTERFACE
    } IPortableDeviceWebControlVtbl;
    interface IPortableDeviceWebControl
    {
        CONST_VTBL struct IPortableDeviceWebControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDeviceFromId(This,deviceId,ppDevice) )
    ( (This)->lpVtbl -> GetDeviceFromIdAsync(This,deviceId,pCompletionHandler,pErrorHandler) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0022_v0_0_s_ifspec;
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
EXTERN_C const IID LIBID_PortableDeviceApiLib;
EXTERN_C const CLSID CLSID_PortableDevice;
class DECLSPEC_UUID("728a21c5-3d9e-48d7-9810-864848f0f404")
PortableDevice;
EXTERN_C const CLSID CLSID_PortableDeviceManager;
class DECLSPEC_UUID("0af10cec-2ecd-4b92-9581-34f6ae0637f3")
PortableDeviceManager;
EXTERN_C const CLSID CLSID_PortableDeviceService;
class DECLSPEC_UUID("ef5db4c2-9312-422c-9152-411cd9c4dd84")
PortableDeviceService;
EXTERN_C const CLSID CLSID_PortableDeviceDispatchFactory;
class DECLSPEC_UUID("43232233-8338-4658-ae01-0b4ae830b6b0")
PortableDeviceDispatchFactory;
EXTERN_C const CLSID CLSID_PortableDeviceFTM;
class DECLSPEC_UUID("f7c0039a-4762-488a-b4b3-760ef9a1ba9b")
PortableDeviceFTM;
EXTERN_C const CLSID CLSID_PortableDeviceServiceFTM;
class DECLSPEC_UUID("1649b154-c794-497a-9b03-f3f0121302f3")
PortableDeviceServiceFTM;
EXTERN_C const CLSID CLSID_PortableDeviceWebControl;
class DECLSPEC_UUID("186dd02c-2dec-41b5-a7d4-b59056fade51")
PortableDeviceWebControl;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_PortableDeviceApi_0000_0023_v0_0_s_ifspec;
              HRESULT STDMETHODCALLTYPE IPortableDeviceUnitsStream_SeekInUnits_Proxy(
    IPortableDeviceUnitsStream * This,
               LARGE_INTEGER dlibMove,
               WPD_STREAM_UNITS units,
               DWORD dwOrigin,
    _Out_opt_ ULARGE_INTEGER *plibNewPosition);
                HRESULT STDMETHODCALLTYPE IPortableDeviceUnitsStream_SeekInUnits_Stub(
    __RPC__in IPortableDeviceUnitsStream * This,
               LARGE_INTEGER dlibMove,
               WPD_STREAM_UNITS units,
               DWORD dwOrigin,
                __RPC__out ULARGE_INTEGER *plibNewPosition);
}
