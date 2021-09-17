#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUPnPEventSink IUPnPEventSink;
typedef interface IUPnPEventSource IUPnPEventSource;
typedef interface IUPnPRegistrar IUPnPRegistrar;
typedef interface IUPnPReregistrar IUPnPReregistrar;
typedef interface IUPnPDeviceControl IUPnPDeviceControl;
typedef interface IUPnPDeviceControlHttpHeaders IUPnPDeviceControlHttpHeaders;
typedef interface IUPnPDeviceProvider IUPnPDeviceProvider;
typedef interface IUPnPRemoteEndpointInfo IUPnPRemoteEndpointInfo;
typedef class UPnPRegistrar UPnPRegistrar;
typedef class UPnPRemoteEndpointInfo UPnPRemoteEndpointInfo;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUPnPEventSink;
    typedef struct IUPnPEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPEventSink * This);
                                   HRESULT ( STDMETHODCALLTYPE *OnStateChanged )(
            __RPC__in IUPnPEventSink * This,
                       DWORD cChanges,
                                __RPC__in_ecount_full(cChanges) DISPID rgdispidChanges[ ]);
                           HRESULT ( STDMETHODCALLTYPE *OnStateChangedSafe )(
            __RPC__in IUPnPEventSink * This,
                       VARIANT varsadispidChanges);
        END_INTERFACE
    } IUPnPEventSinkVtbl;
    interface IUPnPEventSink
    {
        CONST_VTBL struct IUPnPEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStateChanged(This,cChanges,rgdispidChanges) )
    ( (This)->lpVtbl -> OnStateChangedSafe(This,varsadispidChanges) )
EXTERN_C const IID IID_IUPnPEventSource;
    typedef struct IUPnPEventSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPEventSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPEventSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPEventSource * This);
                           HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IUPnPEventSource * This,
                       __RPC__in_opt IUPnPEventSink *pesSubscriber);
                           HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IUPnPEventSource * This,
                       __RPC__in_opt IUPnPEventSink *pesSubscriber);
        END_INTERFACE
    } IUPnPEventSourceVtbl;
    interface IUPnPEventSource
    {
        CONST_VTBL struct IUPnPEventSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,pesSubscriber) )
    ( (This)->lpVtbl -> Unadvise(This,pesSubscriber) )
EXTERN_C const IID IID_IUPnPRegistrar;
    typedef struct IUPnPRegistrarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPRegistrar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPRegistrar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPRegistrar * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterDevice )(
            __RPC__in IUPnPRegistrar * This,
                       __RPC__in BSTR bstrXMLDesc,
                       __RPC__in BSTR bstrProgIDDeviceControlClass,
                       __RPC__in BSTR bstrInitString,
                       __RPC__in BSTR bstrContainerId,
                       __RPC__in BSTR bstrResourcePath,
                       long nLifeTime,
                                __RPC__deref_out_opt BSTR *pbstrDeviceIdentifier);
        HRESULT ( STDMETHODCALLTYPE *RegisterRunningDevice )(
            __RPC__in IUPnPRegistrar * This,
                       __RPC__in BSTR bstrXMLDesc,
                       __RPC__in_opt IUnknown *punkDeviceControl,
                       __RPC__in BSTR bstrInitString,
                       __RPC__in BSTR bstrResourcePath,
                       long nLifeTime,
                                __RPC__deref_out_opt BSTR *pbstrDeviceIdentifier);
        HRESULT ( STDMETHODCALLTYPE *RegisterDeviceProvider )(
            __RPC__in IUPnPRegistrar * This,
                       __RPC__in BSTR bstrProviderName,
                       __RPC__in BSTR bstrProgIDProviderClass,
                       __RPC__in BSTR bstrInitString,
                       __RPC__in BSTR bstrContainerId);
        HRESULT ( STDMETHODCALLTYPE *GetUniqueDeviceName )(
            __RPC__in IUPnPRegistrar * This,
                       __RPC__in BSTR bstrDeviceIdentifier,
                       __RPC__in BSTR bstrTemplateUDN,
                                __RPC__deref_out_opt BSTR *pbstrUDN);
        HRESULT ( STDMETHODCALLTYPE *UnregisterDevice )(
            __RPC__in IUPnPRegistrar * This,
                       __RPC__in BSTR bstrDeviceIdentifier,
                       BOOL fPermanent);
        HRESULT ( STDMETHODCALLTYPE *UnregisterDeviceProvider )(
            __RPC__in IUPnPRegistrar * This,
                       __RPC__in BSTR bstrProviderName);
        END_INTERFACE
    } IUPnPRegistrarVtbl;
    interface IUPnPRegistrar
    {
        CONST_VTBL struct IUPnPRegistrarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterDevice(This,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier) )
    ( (This)->lpVtbl -> RegisterRunningDevice(This,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime,pbstrDeviceIdentifier) )
    ( (This)->lpVtbl -> RegisterDeviceProvider(This,bstrProviderName,bstrProgIDProviderClass,bstrInitString,bstrContainerId) )
    ( (This)->lpVtbl -> GetUniqueDeviceName(This,bstrDeviceIdentifier,bstrTemplateUDN,pbstrUDN) )
    ( (This)->lpVtbl -> UnregisterDevice(This,bstrDeviceIdentifier,fPermanent) )
    ( (This)->lpVtbl -> UnregisterDeviceProvider(This,bstrProviderName) )
EXTERN_C const IID IID_IUPnPReregistrar;
    typedef struct IUPnPReregistrarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPReregistrar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPReregistrar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPReregistrar * This);
        HRESULT ( STDMETHODCALLTYPE *ReregisterDevice )(
            __RPC__in IUPnPReregistrar * This,
                       __RPC__in BSTR bstrDeviceIdentifier,
                       __RPC__in BSTR bstrXMLDesc,
                       __RPC__in BSTR bstrProgIDDeviceControlClass,
                       __RPC__in BSTR bstrInitString,
                       __RPC__in BSTR bstrContainerId,
                       __RPC__in BSTR bstrResourcePath,
                       long nLifeTime);
        HRESULT ( STDMETHODCALLTYPE *ReregisterRunningDevice )(
            __RPC__in IUPnPReregistrar * This,
                       __RPC__in BSTR bstrDeviceIdentifier,
                       __RPC__in BSTR bstrXMLDesc,
                       __RPC__in_opt IUnknown *punkDeviceControl,
                       __RPC__in BSTR bstrInitString,
                       __RPC__in BSTR bstrResourcePath,
                       long nLifeTime);
        END_INTERFACE
    } IUPnPReregistrarVtbl;
    interface IUPnPReregistrar
    {
        CONST_VTBL struct IUPnPReregistrarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReregisterDevice(This,bstrDeviceIdentifier,bstrXMLDesc,bstrProgIDDeviceControlClass,bstrInitString,bstrContainerId,bstrResourcePath,nLifeTime) )
    ( (This)->lpVtbl -> ReregisterRunningDevice(This,bstrDeviceIdentifier,bstrXMLDesc,punkDeviceControl,bstrInitString,bstrResourcePath,nLifeTime) )
EXTERN_C const IID IID_IUPnPDeviceControl;
    typedef struct IUPnPDeviceControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceControl * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IUPnPDeviceControl * This,
                       __RPC__in BSTR bstrXMLDesc,
                       __RPC__in BSTR bstrDeviceIdentifier,
                       __RPC__in BSTR bstrInitString);
        HRESULT ( STDMETHODCALLTYPE *GetServiceObject )(
            __RPC__in IUPnPDeviceControl * This,
                       __RPC__in BSTR bstrUDN,
                       __RPC__in BSTR bstrServiceId,
                                __RPC__deref_out_opt IDispatch **ppdispService);
        END_INTERFACE
    } IUPnPDeviceControlVtbl;
    interface IUPnPDeviceControl
    {
        CONST_VTBL struct IUPnPDeviceControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,bstrXMLDesc,bstrDeviceIdentifier,bstrInitString) )
    ( (This)->lpVtbl -> GetServiceObject(This,bstrUDN,bstrServiceId,ppdispService) )
EXTERN_C const IID IID_IUPnPDeviceControlHttpHeaders;
    typedef struct IUPnPDeviceControlHttpHeadersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceControlHttpHeaders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceControlHttpHeaders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceControlHttpHeaders * This);
        HRESULT ( STDMETHODCALLTYPE *GetAdditionalResponseHeaders )(
            __RPC__in IUPnPDeviceControlHttpHeaders * This,
                                __RPC__deref_out_opt BSTR *bstrHttpResponseHeaders);
        END_INTERFACE
    } IUPnPDeviceControlHttpHeadersVtbl;
    interface IUPnPDeviceControlHttpHeaders
    {
        CONST_VTBL struct IUPnPDeviceControlHttpHeadersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAdditionalResponseHeaders(This,bstrHttpResponseHeaders) )
EXTERN_C const IID IID_IUPnPDeviceProvider;
    typedef struct IUPnPDeviceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IUPnPDeviceProvider * This,
                       __RPC__in BSTR bstrInitString);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IUPnPDeviceProvider * This);
        END_INTERFACE
    } IUPnPDeviceProviderVtbl;
    interface IUPnPDeviceProvider
    {
        CONST_VTBL struct IUPnPDeviceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,bstrInitString) )
    ( (This)->lpVtbl -> Stop(This) )
EXTERN_C const IID IID_IUPnPRemoteEndpointInfo;
    typedef struct IUPnPRemoteEndpointInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPRemoteEndpointInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPRemoteEndpointInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPRemoteEndpointInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetDwordValue )(
            __RPC__in IUPnPRemoteEndpointInfo * This,
                       __RPC__in BSTR bstrValueName,
                        __RPC__out DWORD *pdwValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            __RPC__in IUPnPRemoteEndpointInfo * This,
                       __RPC__in BSTR bstrValueName,
                        __RPC__deref_out_opt BSTR *pbstrValue);
        HRESULT ( STDMETHODCALLTYPE *GetGuidValue )(
            __RPC__in IUPnPRemoteEndpointInfo * This,
                       __RPC__in BSTR bstrValueName,
                        __RPC__out GUID *pguidValue);
        END_INTERFACE
    } IUPnPRemoteEndpointInfoVtbl;
    interface IUPnPRemoteEndpointInfo
    {
        CONST_VTBL struct IUPnPRemoteEndpointInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDwordValue(This,bstrValueName,pdwValue) )
    ( (This)->lpVtbl -> GetStringValue(This,bstrValueName,pbstrValue) )
    ( (This)->lpVtbl -> GetGuidValue(This,bstrValueName,pguidValue) )
EXTERN_C const IID LIBID_UPnPHostLib;
EXTERN_C const CLSID CLSID_UPnPRegistrar;
class DECLSPEC_UUID("204810b9-73b2-11d4-bf42-00b0d0118b56")
UPnPRegistrar;
EXTERN_C const CLSID CLSID_UPnPRemoteEndpointInfo;
class DECLSPEC_UUID("2e5e84e9-4049-4244-b728-2d24227157c7")
UPnPRemoteEndpointInfo;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnphost_0000_0009_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
