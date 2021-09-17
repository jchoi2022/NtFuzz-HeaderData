#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ILocationReport ILocationReport;
typedef interface ILatLongReport ILatLongReport;
typedef interface ICivicAddressReport ICivicAddressReport;
typedef interface ILocation ILocation;
typedef interface ILocationPower ILocationPower;
typedef interface IDefaultLocation IDefaultLocation;
typedef interface ILocationEvents ILocationEvents;
typedef interface IDispLatLongReport IDispLatLongReport;
typedef interface IDispCivicAddressReport IDispCivicAddressReport;
typedef interface ILocationReportFactory ILocationReportFactory;
typedef interface ILatLongReportFactory ILatLongReportFactory;
typedef interface ICivicAddressReportFactory ICivicAddressReportFactory;
typedef class Location Location;
typedef class DefaultLocation DefaultLocation;
typedef class LatLongReport LatLongReport;
typedef class CivicAddressReport CivicAddressReport;
typedef interface _ILatLongReportFactoryEvents _ILatLongReportFactoryEvents;
typedef interface _ICivicAddressReportFactoryEvents _ICivicAddressReportFactoryEvents;
typedef class LatLongReportFactory LatLongReportFactory;
typedef class CivicAddressReportFactory CivicAddressReportFactory;
typedef class DispLatLongReport DispLatLongReport;
typedef class DispCivicAddressReport DispCivicAddressReport;
#include "oaidl.h"
#include "ocidl.h"
#include "SensorsApi.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <SensorsApi.h>
#include <initguid.h>
#include <propkeydef.h>
typedef
enum LOCATION_REPORT_STATUS
    {
        REPORT_NOT_SUPPORTED = 0,
        REPORT_ERROR = 1,
        REPORT_ACCESS_DENIED = 2,
        REPORT_INITIALIZING = 3,
        REPORT_RUNNING = 4
    } LOCATION_REPORT_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_locationapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_locationapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ILocationReport;
    typedef struct ILocationReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILocationReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILocationReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILocationReport * This);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorID )(
            __RPC__in ILocationReport * This,
                                __RPC__out SENSOR_ID *pSensorID);
                           HRESULT ( STDMETHODCALLTYPE *GetTimestamp )(
            __RPC__in ILocationReport * This,
                                __RPC__out SYSTEMTIME *pCreationTime);
                           HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ILocationReport * This,
                       __RPC__in REFPROPERTYKEY pKey,
                                __RPC__out PROPVARIANT *pValue);
        END_INTERFACE
    } ILocationReportVtbl;
    interface ILocationReport
    {
        CONST_VTBL struct ILocationReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSensorID(This,pSensorID) )
    ( (This)->lpVtbl -> GetTimestamp(This,pCreationTime) )
    ( (This)->lpVtbl -> GetValue(This,pKey,pValue) )
EXTERN_C const IID IID_ILatLongReport;
    typedef struct ILatLongReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILatLongReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILatLongReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILatLongReport * This);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorID )(
            __RPC__in ILatLongReport * This,
                                __RPC__out SENSOR_ID *pSensorID);
                           HRESULT ( STDMETHODCALLTYPE *GetTimestamp )(
            __RPC__in ILatLongReport * This,
                                __RPC__out SYSTEMTIME *pCreationTime);
                           HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ILatLongReport * This,
                       __RPC__in REFPROPERTYKEY pKey,
                                __RPC__out PROPVARIANT *pValue);
                           HRESULT ( STDMETHODCALLTYPE *GetLatitude )(
            __RPC__in ILatLongReport * This,
                                __RPC__out DOUBLE *pLatitude);
                           HRESULT ( STDMETHODCALLTYPE *GetLongitude )(
            __RPC__in ILatLongReport * This,
                                __RPC__out DOUBLE *pLongitude);
                           HRESULT ( STDMETHODCALLTYPE *GetErrorRadius )(
            __RPC__in ILatLongReport * This,
                                __RPC__out DOUBLE *pErrorRadius);
                           HRESULT ( STDMETHODCALLTYPE *GetAltitude )(
            __RPC__in ILatLongReport * This,
                                __RPC__out DOUBLE *pAltitude);
                           HRESULT ( STDMETHODCALLTYPE *GetAltitudeError )(
            __RPC__in ILatLongReport * This,
                                __RPC__out DOUBLE *pAltitudeError);
        END_INTERFACE
    } ILatLongReportVtbl;
    interface ILatLongReport
    {
        CONST_VTBL struct ILatLongReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSensorID(This,pSensorID) )
    ( (This)->lpVtbl -> GetTimestamp(This,pCreationTime) )
    ( (This)->lpVtbl -> GetValue(This,pKey,pValue) )
    ( (This)->lpVtbl -> GetLatitude(This,pLatitude) )
    ( (This)->lpVtbl -> GetLongitude(This,pLongitude) )
    ( (This)->lpVtbl -> GetErrorRadius(This,pErrorRadius) )
    ( (This)->lpVtbl -> GetAltitude(This,pAltitude) )
    ( (This)->lpVtbl -> GetAltitudeError(This,pAltitudeError) )
EXTERN_C const IID IID_ICivicAddressReport;
    typedef struct ICivicAddressReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICivicAddressReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICivicAddressReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICivicAddressReport * This);
                           HRESULT ( STDMETHODCALLTYPE *GetSensorID )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__out SENSOR_ID *pSensorID);
                           HRESULT ( STDMETHODCALLTYPE *GetTimestamp )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__out SYSTEMTIME *pCreationTime);
                           HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICivicAddressReport * This,
                       __RPC__in REFPROPERTYKEY pKey,
                                __RPC__out PROPVARIANT *pValue);
                           HRESULT ( STDMETHODCALLTYPE *GetAddressLine1 )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pbstrAddress1);
                           HRESULT ( STDMETHODCALLTYPE *GetAddressLine2 )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pbstrAddress2);
                           HRESULT ( STDMETHODCALLTYPE *GetCity )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pbstrCity);
                           HRESULT ( STDMETHODCALLTYPE *GetStateProvince )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pbstrStateProvince);
                           HRESULT ( STDMETHODCALLTYPE *GetPostalCode )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pbstrPostalCode);
                           HRESULT ( STDMETHODCALLTYPE *GetCountryRegion )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pbstrCountryRegion);
                           HRESULT ( STDMETHODCALLTYPE *GetDetailLevel )(
            __RPC__in ICivicAddressReport * This,
                                __RPC__out DWORD *pDetailLevel);
        END_INTERFACE
    } ICivicAddressReportVtbl;
    interface ICivicAddressReport
    {
        CONST_VTBL struct ICivicAddressReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSensorID(This,pSensorID) )
    ( (This)->lpVtbl -> GetTimestamp(This,pCreationTime) )
    ( (This)->lpVtbl -> GetValue(This,pKey,pValue) )
    ( (This)->lpVtbl -> GetAddressLine1(This,pbstrAddress1) )
    ( (This)->lpVtbl -> GetAddressLine2(This,pbstrAddress2) )
    ( (This)->lpVtbl -> GetCity(This,pbstrCity) )
    ( (This)->lpVtbl -> GetStateProvince(This,pbstrStateProvince) )
    ( (This)->lpVtbl -> GetPostalCode(This,pbstrPostalCode) )
    ( (This)->lpVtbl -> GetCountryRegion(This,pbstrCountryRegion) )
    ( (This)->lpVtbl -> GetDetailLevel(This,pDetailLevel) )
EXTERN_C const IID IID_ILocation;
    typedef struct ILocationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILocation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILocation * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForReport )(
            __RPC__in ILocation * This,
                       __RPC__in_opt ILocationEvents *pEvents,
                       __RPC__in REFIID reportType,
                       DWORD dwRequestedReportInterval);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForReport )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID reportType);
                           HRESULT ( STDMETHODCALLTYPE *GetReport )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID reportType,
                                __RPC__deref_out_opt ILocationReport **ppLocationReport);
                           HRESULT ( STDMETHODCALLTYPE *GetReportStatus )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID reportType,
                                __RPC__out enum LOCATION_REPORT_STATUS *pStatus);
                           HRESULT ( STDMETHODCALLTYPE *GetReportInterval )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID reportType,
                                __RPC__out DWORD *pMilliseconds);
                           HRESULT ( STDMETHODCALLTYPE *SetReportInterval )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID reportType,
                       DWORD millisecondsRequested);
                           HRESULT ( STDMETHODCALLTYPE *GetDesiredAccuracy )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID reportType,
                                __RPC__out enum LOCATION_DESIRED_ACCURACY *pDesiredAccuracy);
                           HRESULT ( STDMETHODCALLTYPE *SetDesiredAccuracy )(
            __RPC__in ILocation * This,
                       __RPC__in REFIID reportType,
                       enum LOCATION_DESIRED_ACCURACY desiredAccuracy);
                           HRESULT ( STDMETHODCALLTYPE *RequestPermissions )(
            __RPC__in ILocation * This,
                               __RPC__in_opt HWND hParent,
                                __RPC__in_ecount_full(count) IID *pReportTypes,
                       ULONG count,
                       BOOL fModal);
        END_INTERFACE
    } ILocationVtbl;
    interface ILocation
    {
        CONST_VTBL struct ILocationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterForReport(This,pEvents,reportType,dwRequestedReportInterval) )
    ( (This)->lpVtbl -> UnregisterForReport(This,reportType) )
    ( (This)->lpVtbl -> GetReport(This,reportType,ppLocationReport) )
    ( (This)->lpVtbl -> GetReportStatus(This,reportType,pStatus) )
    ( (This)->lpVtbl -> GetReportInterval(This,reportType,pMilliseconds) )
    ( (This)->lpVtbl -> SetReportInterval(This,reportType,millisecondsRequested) )
    ( (This)->lpVtbl -> GetDesiredAccuracy(This,reportType,pDesiredAccuracy) )
    ( (This)->lpVtbl -> SetDesiredAccuracy(This,reportType,desiredAccuracy) )
    ( (This)->lpVtbl -> RequestPermissions(This,hParent,pReportTypes,count,fModal) )
EXTERN_C const IID IID_ILocationPower;
    typedef struct ILocationPowerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILocationPower * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILocationPower * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILocationPower * This);
                           HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in ILocationPower * This);
                           HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in ILocationPower * This);
        END_INTERFACE
    } ILocationPowerVtbl;
    interface ILocationPower
    {
        CONST_VTBL struct ILocationPowerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Connect(This) )
    ( (This)->lpVtbl -> Disconnect(This) )
EXTERN_C const IID IID_IDefaultLocation;
    typedef struct IDefaultLocationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDefaultLocation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDefaultLocation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDefaultLocation * This);
                           HRESULT ( STDMETHODCALLTYPE *SetReport )(
            __RPC__in IDefaultLocation * This,
                       __RPC__in REFIID reportType,
                       __RPC__in_opt ILocationReport *pLocationReport);
                           HRESULT ( STDMETHODCALLTYPE *GetReport )(
            __RPC__in IDefaultLocation * This,
                       __RPC__in REFIID reportType,
                                __RPC__deref_out_opt ILocationReport **ppLocationReport);
        END_INTERFACE
    } IDefaultLocationVtbl;
    interface IDefaultLocation
    {
        CONST_VTBL struct IDefaultLocationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetReport(This,reportType,pLocationReport) )
    ( (This)->lpVtbl -> GetReport(This,reportType,ppLocationReport) )
EXTERN_C const IID IID_ILocationEvents;
    typedef struct ILocationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILocationEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILocationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILocationEvents * This);
                           HRESULT ( STDMETHODCALLTYPE *OnLocationChanged )(
            __RPC__in ILocationEvents * This,
                       __RPC__in REFIID reportType,
                       __RPC__in_opt ILocationReport *pLocationReport);
                           HRESULT ( STDMETHODCALLTYPE *OnStatusChanged )(
            __RPC__in ILocationEvents * This,
                       __RPC__in REFIID reportType,
                       LOCATION_REPORT_STATUS newStatus);
        END_INTERFACE
    } ILocationEventsVtbl;
    interface ILocationEvents
    {
        CONST_VTBL struct ILocationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnLocationChanged(This,reportType,pLocationReport) )
    ( (This)->lpVtbl -> OnStatusChanged(This,reportType,newStatus) )
EXTERN_C const IID IID_IDispLatLongReport;
    typedef struct IDispLatLongReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDispLatLongReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDispLatLongReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDispLatLongReport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDispLatLongReport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDispLatLongReport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDispLatLongReport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDispLatLongReport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Latitude )(
            __RPC__in IDispLatLongReport * This,
                                __RPC__out DOUBLE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Longitude )(
            __RPC__in IDispLatLongReport * This,
                                __RPC__out DOUBLE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ErrorRadius )(
            __RPC__in IDispLatLongReport * This,
                                __RPC__out DOUBLE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Altitude )(
            __RPC__in IDispLatLongReport * This,
                                __RPC__out DOUBLE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AltitudeError )(
            __RPC__in IDispLatLongReport * This,
                                __RPC__out DOUBLE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
            __RPC__in IDispLatLongReport * This,
                                __RPC__out DATE *pVal);
        END_INTERFACE
    } IDispLatLongReportVtbl;
    interface IDispLatLongReport
    {
        CONST_VTBL struct IDispLatLongReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Latitude(This,pVal) )
    ( (This)->lpVtbl -> get_Longitude(This,pVal) )
    ( (This)->lpVtbl -> get_ErrorRadius(This,pVal) )
    ( (This)->lpVtbl -> get_Altitude(This,pVal) )
    ( (This)->lpVtbl -> get_AltitudeError(This,pVal) )
    ( (This)->lpVtbl -> get_Timestamp(This,pVal) )
EXTERN_C const IID IID_IDispCivicAddressReport;
    typedef struct IDispCivicAddressReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDispCivicAddressReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDispCivicAddressReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDispCivicAddressReport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDispCivicAddressReport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDispCivicAddressReport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDispCivicAddressReport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDispCivicAddressReport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressLine1 )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pAddress1);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressLine2 )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pAddress2);
                                        HRESULT ( STDMETHODCALLTYPE *get_City )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pCity);
                                        HRESULT ( STDMETHODCALLTYPE *get_StateProvince )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pStateProvince);
                                        HRESULT ( STDMETHODCALLTYPE *get_PostalCode )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pPostalCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryRegion )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__deref_out_opt BSTR *pCountryRegion);
                                        HRESULT ( STDMETHODCALLTYPE *get_DetailLevel )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__out ULONG *pDetailLevel);
                                        HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
            __RPC__in IDispCivicAddressReport * This,
                                __RPC__out DATE *pVal);
        END_INTERFACE
    } IDispCivicAddressReportVtbl;
    interface IDispCivicAddressReport
    {
        CONST_VTBL struct IDispCivicAddressReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AddressLine1(This,pAddress1) )
    ( (This)->lpVtbl -> get_AddressLine2(This,pAddress2) )
    ( (This)->lpVtbl -> get_City(This,pCity) )
    ( (This)->lpVtbl -> get_StateProvince(This,pStateProvince) )
    ( (This)->lpVtbl -> get_PostalCode(This,pPostalCode) )
    ( (This)->lpVtbl -> get_CountryRegion(This,pCountryRegion) )
    ( (This)->lpVtbl -> get_DetailLevel(This,pDetailLevel) )
    ( (This)->lpVtbl -> get_Timestamp(This,pVal) )
EXTERN_C const IID IID_ILocationReportFactory;
    typedef struct ILocationReportFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILocationReportFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILocationReportFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILocationReportFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ILocationReportFactory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ILocationReportFactory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ILocationReportFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ILocationReportFactory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ListenForReports )(
            __RPC__in ILocationReportFactory * This,
                                     ULONG requestedReportInterval);
                               HRESULT ( STDMETHODCALLTYPE *StopListeningForReports )(
            __RPC__in ILocationReportFactory * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ILocationReportFactory * This,
                                __RPC__out ULONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
            __RPC__in ILocationReportFactory * This,
                                __RPC__out ULONG *pMilliseconds);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
            __RPC__in ILocationReportFactory * This,
                       ULONG millisecondsRequested);
                                        HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracy )(
            __RPC__in ILocationReportFactory * This,
                                __RPC__out ULONG *pDesiredAccuracy);
                                        HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracy )(
            __RPC__in ILocationReportFactory * This,
                       ULONG desiredAccuracy);
                               HRESULT ( STDMETHODCALLTYPE *RequestPermissions )(
            __RPC__in ILocationReportFactory * This,
                       __RPC__in ULONG *hWnd);
        END_INTERFACE
    } ILocationReportFactoryVtbl;
    interface ILocationReportFactory
    {
        CONST_VTBL struct ILocationReportFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ListenForReports(This,requestedReportInterval) )
    ( (This)->lpVtbl -> StopListeningForReports(This) )
    ( (This)->lpVtbl -> get_Status(This,pVal) )
    ( (This)->lpVtbl -> get_ReportInterval(This,pMilliseconds) )
    ( (This)->lpVtbl -> put_ReportInterval(This,millisecondsRequested) )
    ( (This)->lpVtbl -> get_DesiredAccuracy(This,pDesiredAccuracy) )
    ( (This)->lpVtbl -> put_DesiredAccuracy(This,desiredAccuracy) )
    ( (This)->lpVtbl -> RequestPermissions(This,hWnd) )
EXTERN_C const IID IID_ILatLongReportFactory;
    typedef struct ILatLongReportFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILatLongReportFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILatLongReportFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILatLongReportFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ILatLongReportFactory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ILatLongReportFactory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ILatLongReportFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ILatLongReportFactory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ListenForReports )(
            __RPC__in ILatLongReportFactory * This,
                                     ULONG requestedReportInterval);
                               HRESULT ( STDMETHODCALLTYPE *StopListeningForReports )(
            __RPC__in ILatLongReportFactory * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ILatLongReportFactory * This,
                                __RPC__out ULONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
            __RPC__in ILatLongReportFactory * This,
                                __RPC__out ULONG *pMilliseconds);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
            __RPC__in ILatLongReportFactory * This,
                       ULONG millisecondsRequested);
                                        HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracy )(
            __RPC__in ILatLongReportFactory * This,
                                __RPC__out ULONG *pDesiredAccuracy);
                                        HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracy )(
            __RPC__in ILatLongReportFactory * This,
                       ULONG desiredAccuracy);
                               HRESULT ( STDMETHODCALLTYPE *RequestPermissions )(
            __RPC__in ILatLongReportFactory * This,
                       __RPC__in ULONG *hWnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_LatLongReport )(
            __RPC__in ILatLongReportFactory * This,
                                __RPC__deref_out_opt IDispLatLongReport **pVal);
        END_INTERFACE
    } ILatLongReportFactoryVtbl;
    interface ILatLongReportFactory
    {
        CONST_VTBL struct ILatLongReportFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ListenForReports(This,requestedReportInterval) )
    ( (This)->lpVtbl -> StopListeningForReports(This) )
    ( (This)->lpVtbl -> get_Status(This,pVal) )
    ( (This)->lpVtbl -> get_ReportInterval(This,pMilliseconds) )
    ( (This)->lpVtbl -> put_ReportInterval(This,millisecondsRequested) )
    ( (This)->lpVtbl -> get_DesiredAccuracy(This,pDesiredAccuracy) )
    ( (This)->lpVtbl -> put_DesiredAccuracy(This,desiredAccuracy) )
    ( (This)->lpVtbl -> RequestPermissions(This,hWnd) )
    ( (This)->lpVtbl -> get_LatLongReport(This,pVal) )
EXTERN_C const IID IID_ICivicAddressReportFactory;
    typedef struct ICivicAddressReportFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICivicAddressReportFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICivicAddressReportFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICivicAddressReportFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICivicAddressReportFactory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICivicAddressReportFactory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICivicAddressReportFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICivicAddressReportFactory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ListenForReports )(
            __RPC__in ICivicAddressReportFactory * This,
                                     ULONG requestedReportInterval);
                               HRESULT ( STDMETHODCALLTYPE *StopListeningForReports )(
            __RPC__in ICivicAddressReportFactory * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ICivicAddressReportFactory * This,
                                __RPC__out ULONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportInterval )(
            __RPC__in ICivicAddressReportFactory * This,
                                __RPC__out ULONG *pMilliseconds);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportInterval )(
            __RPC__in ICivicAddressReportFactory * This,
                       ULONG millisecondsRequested);
                                        HRESULT ( STDMETHODCALLTYPE *get_DesiredAccuracy )(
            __RPC__in ICivicAddressReportFactory * This,
                                __RPC__out ULONG *pDesiredAccuracy);
                                        HRESULT ( STDMETHODCALLTYPE *put_DesiredAccuracy )(
            __RPC__in ICivicAddressReportFactory * This,
                       ULONG desiredAccuracy);
                               HRESULT ( STDMETHODCALLTYPE *RequestPermissions )(
            __RPC__in ICivicAddressReportFactory * This,
                       __RPC__in ULONG *hWnd);
                                        HRESULT ( STDMETHODCALLTYPE *get_CivicAddressReport )(
            __RPC__in ICivicAddressReportFactory * This,
                                __RPC__deref_out_opt IDispCivicAddressReport **pVal);
        END_INTERFACE
    } ICivicAddressReportFactoryVtbl;
    interface ICivicAddressReportFactory
    {
        CONST_VTBL struct ICivicAddressReportFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ListenForReports(This,requestedReportInterval) )
    ( (This)->lpVtbl -> StopListeningForReports(This) )
    ( (This)->lpVtbl -> get_Status(This,pVal) )
    ( (This)->lpVtbl -> get_ReportInterval(This,pMilliseconds) )
    ( (This)->lpVtbl -> put_ReportInterval(This,millisecondsRequested) )
    ( (This)->lpVtbl -> get_DesiredAccuracy(This,pDesiredAccuracy) )
    ( (This)->lpVtbl -> put_DesiredAccuracy(This,desiredAccuracy) )
    ( (This)->lpVtbl -> RequestPermissions(This,hWnd) )
    ( (This)->lpVtbl -> get_CivicAddressReport(This,pVal) )
EXTERN_C const IID LIBID_LocationApiLib;
EXTERN_C const CLSID CLSID_Location;
class DECLSPEC_UUID("E5B8E079-EE6D-4E33-A438-C87F2E959254")
Location;
EXTERN_C const CLSID CLSID_DefaultLocation;
class DECLSPEC_UUID("8B7FBFE0-5CD7-494a-AF8C-283A65707506")
DefaultLocation;
EXTERN_C const CLSID CLSID_LatLongReport;
class DECLSPEC_UUID("ED81C073-1F84-4ca8-A161-183C776BC651")
LatLongReport;
EXTERN_C const CLSID CLSID_CivicAddressReport;
class DECLSPEC_UUID("D39E7BDD-7D05-46b8-8721-80CF035F57D7")
CivicAddressReport;
EXTERN_C const IID DIID__ILatLongReportFactoryEvents;
    typedef struct _ILatLongReportFactoryEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ILatLongReportFactoryEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ILatLongReportFactoryEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ILatLongReportFactoryEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ILatLongReportFactoryEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ILatLongReportFactoryEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ILatLongReportFactoryEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ILatLongReportFactoryEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _ILatLongReportFactoryEventsVtbl;
    interface _ILatLongReportFactoryEvents
    {
        CONST_VTBL struct _ILatLongReportFactoryEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID DIID__ICivicAddressReportFactoryEvents;
    typedef struct _ICivicAddressReportFactoryEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ICivicAddressReportFactoryEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ICivicAddressReportFactoryEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ICivicAddressReportFactoryEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ICivicAddressReportFactoryEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ICivicAddressReportFactoryEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ICivicAddressReportFactoryEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ICivicAddressReportFactoryEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _ICivicAddressReportFactoryEventsVtbl;
    interface _ICivicAddressReportFactoryEvents
    {
        CONST_VTBL struct _ICivicAddressReportFactoryEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_LatLongReportFactory;
class DECLSPEC_UUID("9DCC3CC8-8609-4863-BAD4-03601F4C65E8")
LatLongReportFactory;
EXTERN_C const CLSID CLSID_CivicAddressReportFactory;
class DECLSPEC_UUID("2A11F42C-3E81-4ad4-9CBE-45579D89671A")
CivicAddressReportFactory;
EXTERN_C const CLSID CLSID_DispLatLongReport;
class DECLSPEC_UUID("7A7C3277-8F84-4636-95B2-EBB5507FF77E")
DispLatLongReport;
EXTERN_C const CLSID CLSID_DispCivicAddressReport;
class DECLSPEC_UUID("4C596AEC-8544-4082-BA9F-EB0A7D8E65C6")
DispCivicAddressReport;
#pragma deprecated(ICivicAddressReport)
#pragma deprecated(IDefaultLocation)
#pragma deprecated(IDispLatLongReport)
#pragma deprecated(IDispCivicAddressReport)
#pragma deprecated(ILatLongReport)
#pragma deprecated(ILocation)
#pragma deprecated(ILocationEvents)
#pragma deprecated(ILocationPower)
#pragma deprecated(ILocationReport)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_locationapi_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_locationapi_0000_0013_v0_0_s_ifspec;
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
