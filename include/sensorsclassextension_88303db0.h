#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISensorDriver ISensorDriver;
typedef interface ISensorClassExtension ISensorClassExtension;
typedef class SensorClassExtension SensorClassExtension;
#include "propidl.h"
#include "wudfddi.h"
#include "PortableDeviceTypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_windowssensorclassextension_0000_0000_0001
    {
        SENSOR_STATE_MIN = 0,
        SENSOR_STATE_READY = SENSOR_STATE_MIN,
        SENSOR_STATE_NOT_AVAILABLE = ( SENSOR_STATE_READY + 1 ) ,
        SENSOR_STATE_NO_DATA = ( SENSOR_STATE_NOT_AVAILABLE + 1 ) ,
        SENSOR_STATE_INITIALIZING = ( SENSOR_STATE_NO_DATA + 1 ) ,
        SENSOR_STATE_ACCESS_DENIED = ( SENSOR_STATE_INITIALIZING + 1 ) ,
        SENSOR_STATE_ERROR = ( SENSOR_STATE_ACCESS_DENIED + 1 ) ,
        SENSOR_STATE_MAX = SENSOR_STATE_ERROR
    } SensorState;
typedef
enum __MIDL___MIDL_itf_windowssensorclassextension_0000_0000_0002
    {
        SENSOR_CONNECTION_TYPE_PC_INTEGRATED = 0,
        SENSOR_CONNECTION_TYPE_PC_ATTACHED = ( SENSOR_CONNECTION_TYPE_PC_INTEGRATED + 1 ) ,
        SENSOR_CONNECTION_TYPE_PC_EXTERNAL = ( SENSOR_CONNECTION_TYPE_PC_ATTACHED + 1 )
    } SensorConnectionType;
typedef
enum LOCATION_DESIRED_ACCURACY
    {
        LOCATION_DESIRED_ACCURACY_DEFAULT = 0,
        LOCATION_DESIRED_ACCURACY_HIGH = ( LOCATION_DESIRED_ACCURACY_DEFAULT + 1 )
    } LOCATION_DESIRED_ACCURACY;
typedef
enum LOCATION_POSITION_SOURCE
    {
        LOCATION_POSITION_SOURCE_CELLULAR = 0,
        LOCATION_POSITION_SOURCE_SATELLITE = ( LOCATION_POSITION_SOURCE_CELLULAR + 1 ) ,
        LOCATION_POSITION_SOURCE_WIFI = ( LOCATION_POSITION_SOURCE_SATELLITE + 1 ) ,
        LOCATION_POSITION_SOURCE_IPADDRESS = ( LOCATION_POSITION_SOURCE_WIFI + 1 ) ,
        LOCATION_POSITION_SOURCE_UNKNOWN = ( LOCATION_POSITION_SOURCE_IPADDRESS + 1 )
    } LOCATION_POSITION_SOURCE;
typedef
enum SimpleDeviceOrientation
    {
        SIMPLE_DEVICE_ORIENTATION_NOT_ROTATED = 0,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_90 = ( SIMPLE_DEVICE_ORIENTATION_NOT_ROTATED + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_180 = ( SIMPLE_DEVICE_ORIENTATION_ROTATED_90 + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_270 = ( SIMPLE_DEVICE_ORIENTATION_ROTATED_180 + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_UP = ( SIMPLE_DEVICE_ORIENTATION_ROTATED_270 + 1 ) ,
        SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_DOWN = ( SIMPLE_DEVICE_ORIENTATION_ROTATED_FACE_UP + 1 )
    } SimpleDeviceOrientation;
typedef
enum MagnetometerAccuracy
    {
        MAGNETOMETER_ACCURACY_UNKNOWN = 0,
        MAGNETOMETER_ACCURACY_UNRELIABLE = ( MAGNETOMETER_ACCURACY_UNKNOWN + 1 ) ,
        MAGNETOMETER_ACCURACY_APPROXIMATE = ( MAGNETOMETER_ACCURACY_UNRELIABLE + 1 ) ,
        MAGNETOMETER_ACCURACY_HIGH = ( MAGNETOMETER_ACCURACY_APPROXIMATE + 1 )
    } MagnetometerAccuracy;
extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISensorDriver;
    typedef struct ISensorDriverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensorDriver * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensorDriver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensorDriver * This);
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedSensorObjects )(
            __RPC__in ISensorDriver * This,
                        __RPC__deref_out_opt IPortableDeviceValuesCollection **ppSensorObjectCollection);
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedProperties )(
            __RPC__in ISensorDriver * This,
                               __RPC__in_string LPWSTR pwszSensorID,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppSupportedProperties);
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedDataFields )(
            __RPC__in ISensorDriver * This,
                               __RPC__in_string LPWSTR pwszSensorID,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppSupportedDataFields);
        HRESULT ( STDMETHODCALLTYPE *OnGetSupportedEvents )(
            __RPC__in ISensorDriver * This,
                               __RPC__in_string LPWSTR pwszSensorID,
                                          __RPC__deref_out_ecount_full_opt(*pulEventCount) GUID **ppSupportedEvents,
                        __RPC__out ULONG *pulEventCount);
        HRESULT ( STDMETHODCALLTYPE *OnGetProperties )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IWDFFile *pClientFile,
                               __RPC__in_string LPWSTR pwszSensorID,
                       __RPC__in_opt IPortableDeviceKeyCollection *pProperties,
                        __RPC__deref_out_opt IPortableDeviceValues **ppPropertyValues);
        HRESULT ( STDMETHODCALLTYPE *OnGetDataFields )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IWDFFile *pClientFile,
                               __RPC__in_string LPWSTR pwszSensorID,
                       __RPC__in_opt IPortableDeviceKeyCollection *pDataFields,
                        __RPC__deref_out_opt IPortableDeviceValues **ppDataValues);
        HRESULT ( STDMETHODCALLTYPE *OnSetProperties )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IWDFFile *pClientFile,
                               __RPC__in_string LPWSTR pwszSensorID,
                       __RPC__in_opt IPortableDeviceValues *pPropertiesToSet,
                        __RPC__deref_out_opt IPortableDeviceValues **ppResults);
        HRESULT ( STDMETHODCALLTYPE *OnClientConnect )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IWDFFile *pClientFile,
                               __RPC__in_string LPWSTR pwszSensorID);
        HRESULT ( STDMETHODCALLTYPE *OnClientDisconnect )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IWDFFile *pClientFile,
                               __RPC__in_string LPWSTR pwszSensorID);
        HRESULT ( STDMETHODCALLTYPE *OnClientSubscribeToEvents )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IWDFFile *pClientFile,
                               __RPC__in_string LPWSTR pwszSensorID);
        HRESULT ( STDMETHODCALLTYPE *OnClientUnsubscribeFromEvents )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IWDFFile *pClientFile,
                               __RPC__in_string LPWSTR pwszSensorID);
        HRESULT ( STDMETHODCALLTYPE *OnProcessWpdMessage )(
            __RPC__in ISensorDriver * This,
                       __RPC__in_opt IUnknown *pUnkPortableDeviceValuesParams,
                       __RPC__in_opt IUnknown *pUnkPortableDeviceValuesResults);
        END_INTERFACE
    } ISensorDriverVtbl;
    interface ISensorDriver
    {
        CONST_VTBL struct ISensorDriverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetSupportedSensorObjects(This,ppSensorObjectCollection) )
    ( (This)->lpVtbl -> OnGetSupportedProperties(This,pwszSensorID,ppSupportedProperties) )
    ( (This)->lpVtbl -> OnGetSupportedDataFields(This,pwszSensorID,ppSupportedDataFields) )
    ( (This)->lpVtbl -> OnGetSupportedEvents(This,pwszSensorID,ppSupportedEvents,pulEventCount) )
    ( (This)->lpVtbl -> OnGetProperties(This,pClientFile,pwszSensorID,pProperties,ppPropertyValues) )
    ( (This)->lpVtbl -> OnGetDataFields(This,pClientFile,pwszSensorID,pDataFields,ppDataValues) )
    ( (This)->lpVtbl -> OnSetProperties(This,pClientFile,pwszSensorID,pPropertiesToSet,ppResults) )
    ( (This)->lpVtbl -> OnClientConnect(This,pClientFile,pwszSensorID) )
    ( (This)->lpVtbl -> OnClientDisconnect(This,pClientFile,pwszSensorID) )
    ( (This)->lpVtbl -> OnClientSubscribeToEvents(This,pClientFile,pwszSensorID) )
    ( (This)->lpVtbl -> OnClientUnsubscribeFromEvents(This,pClientFile,pwszSensorID) )
    ( (This)->lpVtbl -> OnProcessWpdMessage(This,pUnkPortableDeviceValuesParams,pUnkPortableDeviceValuesResults) )
EXTERN_C const IID IID_ISensorClassExtension;
    typedef struct ISensorClassExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensorClassExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensorClassExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensorClassExtension * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISensorClassExtension * This,
                       __RPC__in_opt IUnknown *pWdfDeviceUnknown,
                       __RPC__in_opt IUnknown *pSensorDriverUnknown);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            __RPC__in ISensorClassExtension * This);
        HRESULT ( STDMETHODCALLTYPE *ProcessIoControl )(
            __RPC__in ISensorClassExtension * This,
                       __RPC__in_opt IWDFIoRequest *pRequest);
        HRESULT ( STDMETHODCALLTYPE *PostEvent )(
            __RPC__in ISensorClassExtension * This,
                               __RPC__in_string LPWSTR pwszSensorID,
                       __RPC__in_opt IPortableDeviceValuesCollection *pEventCollection);
        HRESULT ( STDMETHODCALLTYPE *PostStateChange )(
            __RPC__in ISensorClassExtension * This,
                               __RPC__in_string LPWSTR pwszSensorID,
                       SensorState state);
        HRESULT ( STDMETHODCALLTYPE *CleanupFile )(
            __RPC__in ISensorClassExtension * This,
                       __RPC__in_opt IWDFFile *pWdfFile);
        END_INTERFACE
    } ISensorClassExtensionVtbl;
    interface ISensorClassExtension
    {
        CONST_VTBL struct ISensorClassExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pWdfDeviceUnknown,pSensorDriverUnknown) )
    ( (This)->lpVtbl -> Uninitialize(This) )
    ( (This)->lpVtbl -> ProcessIoControl(This,pRequest) )
    ( (This)->lpVtbl -> PostEvent(This,pwszSensorID,pEventCollection) )
    ( (This)->lpVtbl -> PostStateChange(This,pwszSensorID,state) )
    ( (This)->lpVtbl -> CleanupFile(This,pWdfFile) )
EXTERN_C const IID LIBID_WindowsSensorClassExtensionLibrary;
EXTERN_C const CLSID CLSID_SensorClassExtension;
class DECLSPEC_UUID("6101F767-998E-452B-B54A-E836DD486BAD")
SensorClassExtension;
#pragma deprecated(ISensorClassExtension)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windowssensorclassextension_0000_0003_v0_0_s_ifspec;
}
