#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISensorManager ISensorManager;
typedef interface ILocationPermissions ILocationPermissions;
typedef interface ISensorCollection ISensorCollection;
typedef interface ISensor ISensor;
typedef interface ISensorDataReport ISensorDataReport;
typedef interface ISensorManagerEvents ISensorManagerEvents;
typedef interface ISensorEvents ISensorEvents;
typedef class SensorManager SensorManager;
typedef class SensorCollection SensorCollection;
typedef class Sensor Sensor;
typedef class SensorDataReport SensorDataReport;
#include "oaidl.h"
#include "ocidl.h"
#include "propsys.h"
#include "PortableDeviceTypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_sensorsapi_0000_0000_0001
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
enum __MIDL___MIDL_itf_sensorsapi_0000_0000_0002
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
typedef GUID SENSOR_CATEGORY_ID;
typedef REFGUID REFSENSOR_CATEGORY_ID;
typedef GUID SENSOR_TYPE_ID;
typedef REFGUID REFSENSOR_TYPE_ID;
typedef GUID SENSOR_ID;
typedef REFGUID REFSENSOR_ID;
extern RPC_IF_HANDLE __MIDL_itf_sensorsapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sensorsapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISensorManager;
    typedef struct ISensorManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensorManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensorManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensorManager * This);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorsByCategory )(
            __RPC__in ISensorManager * This,
                       __RPC__in REFSENSOR_CATEGORY_ID sensorCategory,
                        __RPC__deref_out_opt ISensorCollection **ppSensorsFound);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorsByType )(
            __RPC__in ISensorManager * This,
                       __RPC__in REFSENSOR_TYPE_ID sensorType,
                        __RPC__deref_out_opt ISensorCollection **ppSensorsFound);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorByID )(
            __RPC__in ISensorManager * This,
                       __RPC__in REFSENSOR_ID sensorID,
                        __RPC__deref_out_opt ISensor **ppSensor);
                           HRESULT ( STDMETHODCALLTYPE *SetEventSink )(
            __RPC__in ISensorManager * This,
                       __RPC__in_opt ISensorManagerEvents *pEvents);
                           HRESULT ( STDMETHODCALLTYPE *RequestPermissions )(
            __RPC__in ISensorManager * This,
                       __RPC__in HWND hParent,
                       __RPC__in_opt ISensorCollection *pSensors,
                       BOOL fModal);
        END_INTERFACE
    } ISensorManagerVtbl;
    interface ISensorManager
    {
        CONST_VTBL struct ISensorManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSensorsByCategory(This,sensorCategory,ppSensorsFound) )
    ( (This)->lpVtbl -> GetSensorsByType(This,sensorType,ppSensorsFound) )
    ( (This)->lpVtbl -> GetSensorByID(This,sensorID,ppSensor) )
    ( (This)->lpVtbl -> SetEventSink(This,pEvents) )
    ( (This)->lpVtbl -> RequestPermissions(This,hParent,pSensors,fModal) )
EXTERN_C const IID IID_ILocationPermissions;
    typedef struct ILocationPermissionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILocationPermissions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILocationPermissions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILocationPermissions * This);
                           HRESULT ( STDMETHODCALLTYPE *GetGlobalLocationPermission )(
            __RPC__in ILocationPermissions * This,
                        __RPC__out BOOL *pfEnabled);
                           HRESULT ( STDMETHODCALLTYPE *CheckLocationCapability )(
            __RPC__in ILocationPermissions * This,
                       DWORD dwClientThreadId);
        END_INTERFACE
    } ILocationPermissionsVtbl;
    interface ILocationPermissions
    {
        CONST_VTBL struct ILocationPermissionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGlobalLocationPermission(This,pfEnabled) )
    ( (This)->lpVtbl -> CheckLocationCapability(This,dwClientThreadId) )
EXTERN_C const IID IID_ISensorCollection;
    typedef struct ISensorCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensorCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensorCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensorCollection * This);
                           HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in ISensorCollection * This,
                       ULONG ulIndex,
                        __RPC__deref_out_opt ISensor **ppSensor);
                           HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ISensorCollection * This,
                        __RPC__out ULONG *pCount);
                           HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISensorCollection * This,
                       __RPC__in_opt ISensor *pSensor);
                           HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ISensorCollection * This,
                       __RPC__in_opt ISensor *pSensor);
                           HRESULT ( STDMETHODCALLTYPE *RemoveByID )(
            __RPC__in ISensorCollection * This,
                       __RPC__in REFSENSOR_ID sensorID);
                           HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ISensorCollection * This);
        END_INTERFACE
    } ISensorCollectionVtbl;
    interface ISensorCollection
    {
        CONST_VTBL struct ISensorCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAt(This,ulIndex,ppSensor) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> Add(This,pSensor) )
    ( (This)->lpVtbl -> Remove(This,pSensor) )
    ( (This)->lpVtbl -> RemoveByID(This,sensorID) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_ISensor;
    typedef struct ISensorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensor * This);
                           HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in ISensor * This,
                        __RPC__out SENSOR_ID *pID);
                           HRESULT ( STDMETHODCALLTYPE *GetCategory )(
            __RPC__in ISensor * This,
                        __RPC__out SENSOR_CATEGORY_ID *pSensorCategory);
                           HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ISensor * This,
                        __RPC__out SENSOR_TYPE_ID *pSensorType);
                           HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in ISensor * This,
                        __RPC__deref_out_opt BSTR *pFriendlyName);
                           HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ISensor * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *pProperty);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in ISensor * This,
                       __RPC__in_opt IPortableDeviceKeyCollection *pKeys,
                        __RPC__deref_out_opt IPortableDeviceValues **ppProperties);
                           HRESULT ( STDMETHODCALLTYPE *GetSupportedDataFields )(
            __RPC__in ISensor * This,
                        __RPC__deref_out_opt IPortableDeviceKeyCollection **ppDataFields);
                           HRESULT ( STDMETHODCALLTYPE *SetProperties )(
            __RPC__in ISensor * This,
                       __RPC__in_opt IPortableDeviceValues *pProperties,
                        __RPC__deref_out_opt IPortableDeviceValues **ppResults);
                           HRESULT ( STDMETHODCALLTYPE *SupportsDataField )(
            __RPC__in ISensor * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out VARIANT_BOOL *pIsSupported);
                           HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in ISensor * This,
                        __RPC__out SensorState *pState);
                           HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in ISensor * This,
                        __RPC__deref_out_opt ISensorDataReport **ppDataReport);
                           HRESULT ( STDMETHODCALLTYPE *SupportsEvent )(
            __RPC__in ISensor * This,
                       __RPC__in REFGUID eventGuid,
                        __RPC__out VARIANT_BOOL *pIsSupported);
                           HRESULT ( STDMETHODCALLTYPE *GetEventInterest )(
            __RPC__in ISensor * This,
                                          __RPC__deref_out_ecount_full_opt(*pCount) GUID **ppValues,
                        __RPC__out ULONG *pCount);
                           HRESULT ( STDMETHODCALLTYPE *SetEventInterest )(
            __RPC__in ISensor * This,
                                        __RPC__in_ecount_full_opt(count) GUID *pValues,
                       ULONG count);
                           HRESULT ( STDMETHODCALLTYPE *SetEventSink )(
            __RPC__in ISensor * This,
                       __RPC__in_opt ISensorEvents *pEvents);
        END_INTERFACE
    } ISensorVtbl;
    interface ISensor
    {
        CONST_VTBL struct ISensorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetID(This,pID) )
    ( (This)->lpVtbl -> GetCategory(This,pSensorCategory) )
    ( (This)->lpVtbl -> GetType(This,pSensorType) )
    ( (This)->lpVtbl -> GetFriendlyName(This,pFriendlyName) )
    ( (This)->lpVtbl -> GetProperty(This,key,pProperty) )
    ( (This)->lpVtbl -> GetProperties(This,pKeys,ppProperties) )
    ( (This)->lpVtbl -> GetSupportedDataFields(This,ppDataFields) )
    ( (This)->lpVtbl -> SetProperties(This,pProperties,ppResults) )
    ( (This)->lpVtbl -> SupportsDataField(This,key,pIsSupported) )
    ( (This)->lpVtbl -> GetState(This,pState) )
    ( (This)->lpVtbl -> GetData(This,ppDataReport) )
    ( (This)->lpVtbl -> SupportsEvent(This,eventGuid,pIsSupported) )
    ( (This)->lpVtbl -> GetEventInterest(This,ppValues,pCount) )
    ( (This)->lpVtbl -> SetEventInterest(This,pValues,count) )
    ( (This)->lpVtbl -> SetEventSink(This,pEvents) )
EXTERN_C const IID IID_ISensorDataReport;
    typedef struct ISensorDataReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensorDataReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensorDataReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensorDataReport * This);
                           HRESULT ( STDMETHODCALLTYPE *GetTimestamp )(
            __RPC__in ISensorDataReport * This,
                        __RPC__out SYSTEMTIME *pTimeStamp);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorValue )(
            __RPC__in ISensorDataReport * This,
                       __RPC__in REFPROPERTYKEY pKey,
                        __RPC__out PROPVARIANT *pValue);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorValues )(
            __RPC__in ISensorDataReport * This,
                       __RPC__in_opt IPortableDeviceKeyCollection *pKeys,
                        __RPC__deref_out_opt IPortableDeviceValues **ppValues);
        END_INTERFACE
    } ISensorDataReportVtbl;
    interface ISensorDataReport
    {
        CONST_VTBL struct ISensorDataReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTimestamp(This,pTimeStamp) )
    ( (This)->lpVtbl -> GetSensorValue(This,pKey,pValue) )
    ( (This)->lpVtbl -> GetSensorValues(This,pKeys,ppValues) )
EXTERN_C const IID IID_ISensorManagerEvents;
    typedef struct ISensorManagerEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensorManagerEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensorManagerEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensorManagerEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *OnSensorEnter )(
            __RPC__in ISensorManagerEvents * This,
                       __RPC__in_opt ISensor *pSensor,
                       SensorState state);
        END_INTERFACE
    } ISensorManagerEventsVtbl;
    interface ISensorManagerEvents
    {
        CONST_VTBL struct ISensorManagerEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSensorEnter(This,pSensor,state) )
EXTERN_C const IID IID_ISensorEvents;
    typedef struct ISensorEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISensorEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISensorEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISensorEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *OnStateChanged )(
            __RPC__in ISensorEvents * This,
                       __RPC__in_opt ISensor *pSensor,
                       SensorState state);
                           HRESULT ( STDMETHODCALLTYPE *OnDataUpdated )(
            __RPC__in ISensorEvents * This,
                       __RPC__in_opt ISensor *pSensor,
                       __RPC__in_opt ISensorDataReport *pNewData);
                           HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            __RPC__in ISensorEvents * This,
                       __RPC__in_opt ISensor *pSensor,
                       __RPC__in REFGUID eventID,
                       __RPC__in_opt IPortableDeviceValues *pEventData);
                           HRESULT ( STDMETHODCALLTYPE *OnLeave )(
            __RPC__in ISensorEvents * This,
                       __RPC__in REFSENSOR_ID ID);
        END_INTERFACE
    } ISensorEventsVtbl;
    interface ISensorEvents
    {
        CONST_VTBL struct ISensorEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStateChanged(This,pSensor,state) )
    ( (This)->lpVtbl -> OnDataUpdated(This,pSensor,pNewData) )
    ( (This)->lpVtbl -> OnEvent(This,pSensor,eventID,pEventData) )
    ( (This)->lpVtbl -> OnLeave(This,ID) )
EXTERN_C const IID LIBID_SensorsApiLib;
EXTERN_C const CLSID CLSID_SensorManager;
class DECLSPEC_UUID("77A1C827-FCD2-4689-8915-9D613CC5FA3E")
SensorManager;
EXTERN_C const CLSID CLSID_SensorCollection;
class DECLSPEC_UUID("79C43ADB-A429-469F-AA39-2F2B74B75937")
SensorCollection;
EXTERN_C const CLSID CLSID_Sensor;
class DECLSPEC_UUID("E97CED00-523A-4133-BF6F-D3A2DAE7F6BA")
Sensor;
EXTERN_C const CLSID CLSID_SensorDataReport;
class DECLSPEC_UUID("4EA9D6EF-694B-4218-8816-CCDA8DA74BBA")
SensorDataReport;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_sensorsapi_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sensorsapi_0000_0008_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
