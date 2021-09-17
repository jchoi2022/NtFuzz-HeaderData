#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUPnPDeviceFinder IUPnPDeviceFinder;
typedef interface IUPnPAddressFamilyControl IUPnPAddressFamilyControl;
typedef interface IUPnPHttpHeaderControl IUPnPHttpHeaderControl;
typedef interface IUPnPDeviceFinderCallback IUPnPDeviceFinderCallback;
typedef interface IUPnPServices IUPnPServices;
typedef interface IUPnPService IUPnPService;
typedef interface IUPnPAsyncResult IUPnPAsyncResult;
typedef interface IUPnPServiceAsync IUPnPServiceAsync;
typedef interface IUPnPServiceCallback IUPnPServiceCallback;
typedef interface IUPnPServiceEnumProperty IUPnPServiceEnumProperty;
typedef interface IUPnPServiceDocumentAccess IUPnPServiceDocumentAccess;
typedef interface IUPnPDevices IUPnPDevices;
typedef interface IUPnPDevice IUPnPDevice;
typedef interface IUPnPDeviceDocumentAccess IUPnPDeviceDocumentAccess;
typedef interface IUPnPDeviceDocumentAccessEx IUPnPDeviceDocumentAccessEx;
typedef interface IUPnPDescriptionDocument IUPnPDescriptionDocument;
typedef interface IUPnPDeviceFinderAddCallbackWithInterface IUPnPDeviceFinderAddCallbackWithInterface;
typedef interface IUPnPDescriptionDocumentCallback IUPnPDescriptionDocumentCallback;
typedef class UPnPDeviceFinder UPnPDeviceFinder;
typedef class UPnPDevices UPnPDevices;
typedef class UPnPDevice UPnPDevice;
typedef class UPnPServices UPnPServices;
typedef class UPnPService UPnPService;
typedef class UPnPDescriptionDocument UPnPDescriptionDocument;
typedef class UPnPDeviceFinderEx UPnPDeviceFinderEx;
typedef class UPnPDescriptionDocumentEx UPnPDescriptionDocumentEx;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUPnPDeviceFinder;
    typedef struct IUPnPDeviceFinderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceFinder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceFinder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceFinder * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUPnPDeviceFinder * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUPnPDeviceFinder * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUPnPDeviceFinder * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUPnPDeviceFinder * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *FindByType )(
            __RPC__in IUPnPDeviceFinder * This,
                       __RPC__in BSTR bstrTypeURI,
                       DWORD dwFlags,
                                __RPC__deref_out_opt IUPnPDevices **pDevices);
                               HRESULT ( STDMETHODCALLTYPE *CreateAsyncFind )(
            __RPC__in IUPnPDeviceFinder * This,
                       __RPC__in BSTR bstrTypeURI,
                       DWORD dwFlags,
                       __RPC__in_opt IUnknown *punkDeviceFinderCallback,
                                __RPC__out LONG *plFindData);
                               HRESULT ( STDMETHODCALLTYPE *StartAsyncFind )(
            __RPC__in IUPnPDeviceFinder * This,
                       LONG lFindData);
                               HRESULT ( STDMETHODCALLTYPE *CancelAsyncFind )(
            __RPC__in IUPnPDeviceFinder * This,
                       LONG lFindData);
                               HRESULT ( STDMETHODCALLTYPE *FindByUDN )(
            __RPC__in IUPnPDeviceFinder * This,
                       __RPC__in BSTR bstrUDN,
                                __RPC__deref_out_opt IUPnPDevice **pDevice);
        END_INTERFACE
    } IUPnPDeviceFinderVtbl;
    interface IUPnPDeviceFinder
    {
        CONST_VTBL struct IUPnPDeviceFinderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> FindByType(This,bstrTypeURI,dwFlags,pDevices) )
    ( (This)->lpVtbl -> CreateAsyncFind(This,bstrTypeURI,dwFlags,punkDeviceFinderCallback,plFindData) )
    ( (This)->lpVtbl -> StartAsyncFind(This,lFindData) )
    ( (This)->lpVtbl -> CancelAsyncFind(This,lFindData) )
    ( (This)->lpVtbl -> FindByUDN(This,bstrUDN,pDevice) )
EXTERN_C const IID IID_IUPnPAddressFamilyControl;
    typedef struct IUPnPAddressFamilyControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPAddressFamilyControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPAddressFamilyControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPAddressFamilyControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetAddressFamily )(
            __RPC__in IUPnPAddressFamilyControl * This,
                       LONG dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetAddressFamily )(
            __RPC__in IUPnPAddressFamilyControl * This,
                        __RPC__out LONG *pdwFlags);
        END_INTERFACE
    } IUPnPAddressFamilyControlVtbl;
    interface IUPnPAddressFamilyControl
    {
        CONST_VTBL struct IUPnPAddressFamilyControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAddressFamily(This,dwFlags) )
    ( (This)->lpVtbl -> GetAddressFamily(This,pdwFlags) )
EXTERN_C const IID IID_IUPnPHttpHeaderControl;
    typedef struct IUPnPHttpHeaderControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPHttpHeaderControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPHttpHeaderControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPHttpHeaderControl * This);
        HRESULT ( STDMETHODCALLTYPE *AddRequestHeaders )(
            __RPC__in IUPnPHttpHeaderControl * This,
                       __RPC__in BSTR bstrHttpHeaders);
        END_INTERFACE
    } IUPnPHttpHeaderControlVtbl;
    interface IUPnPHttpHeaderControl
    {
        CONST_VTBL struct IUPnPHttpHeaderControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRequestHeaders(This,bstrHttpHeaders) )
EXTERN_C const IID IID_IUPnPDeviceFinderCallback;
    typedef struct IUPnPDeviceFinderCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceFinderCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceFinderCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceFinderCallback * This);
        HRESULT ( STDMETHODCALLTYPE *DeviceAdded )(
            __RPC__in IUPnPDeviceFinderCallback * This,
                       LONG lFindData,
                       __RPC__in_opt IUPnPDevice *pDevice);
        HRESULT ( STDMETHODCALLTYPE *DeviceRemoved )(
            __RPC__in IUPnPDeviceFinderCallback * This,
                       LONG lFindData,
                       __RPC__in BSTR bstrUDN);
        HRESULT ( STDMETHODCALLTYPE *SearchComplete )(
            __RPC__in IUPnPDeviceFinderCallback * This,
                       LONG lFindData);
        END_INTERFACE
    } IUPnPDeviceFinderCallbackVtbl;
    interface IUPnPDeviceFinderCallback
    {
        CONST_VTBL struct IUPnPDeviceFinderCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeviceAdded(This,lFindData,pDevice) )
    ( (This)->lpVtbl -> DeviceRemoved(This,lFindData,bstrUDN) )
    ( (This)->lpVtbl -> SearchComplete(This,lFindData) )
EXTERN_C const IID IID_IUPnPServices;
    typedef struct IUPnPServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPServices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUPnPServices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUPnPServices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUPnPServices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUPnPServices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUPnPServices * This,
                                __RPC__out long *plCount);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IUPnPServices * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppunk);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IUPnPServices * This,
                       __RPC__in BSTR bstrServiceId,
                                __RPC__deref_out_opt IUPnPService **ppService);
        END_INTERFACE
    } IUPnPServicesVtbl;
    interface IUPnPServices
    {
        CONST_VTBL struct IUPnPServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) )
    ( (This)->lpVtbl -> get_Item(This,bstrServiceId,ppService) )
EXTERN_C const IID IID_IUPnPService;
    typedef struct IUPnPServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPService * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUPnPService * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUPnPService * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUPnPService * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUPnPService * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *QueryStateVariable )(
            __RPC__in IUPnPService * This,
                       __RPC__in BSTR bstrVariableName,
                                __RPC__out VARIANT *pValue);
                               HRESULT ( STDMETHODCALLTYPE *InvokeAction )(
            __RPC__in IUPnPService * This,
                       __RPC__in BSTR bstrActionName,
                       VARIANT vInActionArgs,
                            __RPC__inout VARIANT *pvOutActionArgs,
                                __RPC__out VARIANT *pvRetVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServiceTypeIdentifier )(
            __RPC__in IUPnPService * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *AddCallback )(
            __RPC__in IUPnPService * This,
                       __RPC__in_opt IUnknown *pUnkCallback);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IUPnPService * This,
                                __RPC__deref_out_opt BSTR *pbstrId);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastTransportStatus )(
            __RPC__in IUPnPService * This,
                                __RPC__out long *plValue);
        END_INTERFACE
    } IUPnPServiceVtbl;
    interface IUPnPService
    {
        CONST_VTBL struct IUPnPServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> QueryStateVariable(This,bstrVariableName,pValue) )
    ( (This)->lpVtbl -> InvokeAction(This,bstrActionName,vInActionArgs,pvOutActionArgs,pvRetVal) )
    ( (This)->lpVtbl -> get_ServiceTypeIdentifier(This,pVal) )
    ( (This)->lpVtbl -> AddCallback(This,pUnkCallback) )
    ( (This)->lpVtbl -> get_Id(This,pbstrId) )
    ( (This)->lpVtbl -> get_LastTransportStatus(This,plValue) )
EXTERN_C const IID IID_IUPnPAsyncResult;
    typedef struct IUPnPAsyncResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPAsyncResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPAsyncResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPAsyncResult * This);
                               HRESULT ( STDMETHODCALLTYPE *AsyncOperationComplete )(
            __RPC__in IUPnPAsyncResult * This,
                       ULONG64 ullRequestID);
        END_INTERFACE
    } IUPnPAsyncResultVtbl;
    interface IUPnPAsyncResult
    {
        CONST_VTBL struct IUPnPAsyncResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AsyncOperationComplete(This,ullRequestID) )
EXTERN_C const IID IID_IUPnPServiceAsync;
    typedef struct IUPnPServiceAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPServiceAsync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPServiceAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPServiceAsync * This);
                               HRESULT ( STDMETHODCALLTYPE *BeginInvokeAction )(
            __RPC__in IUPnPServiceAsync * This,
                       __RPC__in BSTR bstrActionName,
                       VARIANT vInActionArgs,
                       __RPC__in_opt IUPnPAsyncResult *pAsyncResult,
                        __RPC__out PULONG64 pullRequestID);
                               HRESULT ( STDMETHODCALLTYPE *EndInvokeAction )(
            __RPC__in IUPnPServiceAsync * This,
                       ULONG64 ullRequestID,
                            __RPC__inout VARIANT *pvOutActionArgs,
                            __RPC__inout VARIANT *pvRetVal);
                               HRESULT ( STDMETHODCALLTYPE *BeginQueryStateVariable )(
            __RPC__in IUPnPServiceAsync * This,
                       __RPC__in BSTR bstrVariableName,
                       __RPC__in_opt IUPnPAsyncResult *pAsyncResult,
                        __RPC__out PULONG64 pullRequestID);
                               HRESULT ( STDMETHODCALLTYPE *EndQueryStateVariable )(
            __RPC__in IUPnPServiceAsync * This,
                       ULONG64 ullRequestID,
                            __RPC__inout VARIANT *pValue);
                               HRESULT ( STDMETHODCALLTYPE *BeginSubscribeToEvents )(
            __RPC__in IUPnPServiceAsync * This,
                       __RPC__in_opt IUnknown *pUnkCallback,
                       __RPC__in_opt IUPnPAsyncResult *pAsyncResult,
                        __RPC__out PULONG64 pullRequestID);
                               HRESULT ( STDMETHODCALLTYPE *EndSubscribeToEvents )(
            __RPC__in IUPnPServiceAsync * This,
                       ULONG64 ullRequestID);
                               HRESULT ( STDMETHODCALLTYPE *BeginSCPDDownload )(
            __RPC__in IUPnPServiceAsync * This,
                       __RPC__in_opt IUPnPAsyncResult *pAsyncResult,
                        __RPC__out PULONG64 pullRequestID);
                               HRESULT ( STDMETHODCALLTYPE *EndSCPDDownload )(
            __RPC__in IUPnPServiceAsync * This,
                       ULONG64 ullRequestID,
                        __RPC__deref_out_opt BSTR *pbstrSCPDDoc);
                               HRESULT ( STDMETHODCALLTYPE *CancelAsyncOperation )(
            __RPC__in IUPnPServiceAsync * This,
                       ULONG64 ullRequestID);
        END_INTERFACE
    } IUPnPServiceAsyncVtbl;
    interface IUPnPServiceAsync
    {
        CONST_VTBL struct IUPnPServiceAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginInvokeAction(This,bstrActionName,vInActionArgs,pAsyncResult,pullRequestID) )
    ( (This)->lpVtbl -> EndInvokeAction(This,ullRequestID,pvOutActionArgs,pvRetVal) )
    ( (This)->lpVtbl -> BeginQueryStateVariable(This,bstrVariableName,pAsyncResult,pullRequestID) )
    ( (This)->lpVtbl -> EndQueryStateVariable(This,ullRequestID,pValue) )
    ( (This)->lpVtbl -> BeginSubscribeToEvents(This,pUnkCallback,pAsyncResult,pullRequestID) )
    ( (This)->lpVtbl -> EndSubscribeToEvents(This,ullRequestID) )
    ( (This)->lpVtbl -> BeginSCPDDownload(This,pAsyncResult,pullRequestID) )
    ( (This)->lpVtbl -> EndSCPDDownload(This,ullRequestID,pbstrSCPDDoc) )
    ( (This)->lpVtbl -> CancelAsyncOperation(This,ullRequestID) )
EXTERN_C const IID IID_IUPnPServiceCallback;
    typedef struct IUPnPServiceCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPServiceCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPServiceCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPServiceCallback * This);
        HRESULT ( STDMETHODCALLTYPE *StateVariableChanged )(
            __RPC__in IUPnPServiceCallback * This,
                       __RPC__in_opt IUPnPService *pus,
                       __RPC__in LPCWSTR pcwszStateVarName,
                       VARIANT vaValue);
        HRESULT ( STDMETHODCALLTYPE *ServiceInstanceDied )(
            __RPC__in IUPnPServiceCallback * This,
                       __RPC__in_opt IUPnPService *pus);
        END_INTERFACE
    } IUPnPServiceCallbackVtbl;
    interface IUPnPServiceCallback
    {
        CONST_VTBL struct IUPnPServiceCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StateVariableChanged(This,pus,pcwszStateVarName,vaValue) )
    ( (This)->lpVtbl -> ServiceInstanceDied(This,pus) )
EXTERN_C const IID IID_IUPnPServiceEnumProperty;
    typedef struct IUPnPServiceEnumPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPServiceEnumProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPServiceEnumProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPServiceEnumProperty * This);
        HRESULT ( STDMETHODCALLTYPE *SetServiceEnumProperty )(
            __RPC__in IUPnPServiceEnumProperty * This,
                       DWORD dwMask);
        END_INTERFACE
    } IUPnPServiceEnumPropertyVtbl;
    interface IUPnPServiceEnumProperty
    {
        CONST_VTBL struct IUPnPServiceEnumPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetServiceEnumProperty(This,dwMask) )
EXTERN_C const IID IID_IUPnPServiceDocumentAccess;
    typedef struct IUPnPServiceDocumentAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPServiceDocumentAccess * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPServiceDocumentAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPServiceDocumentAccess * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentURL )(
            __RPC__in IUPnPServiceDocumentAccess * This,
                        __RPC__deref_out_opt BSTR *pbstrDocUrl);
        HRESULT ( STDMETHODCALLTYPE *GetDocument )(
            __RPC__in IUPnPServiceDocumentAccess * This,
                        __RPC__deref_out_opt BSTR *pbstrDoc);
        END_INTERFACE
    } IUPnPServiceDocumentAccessVtbl;
    interface IUPnPServiceDocumentAccess
    {
        CONST_VTBL struct IUPnPServiceDocumentAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocumentURL(This,pbstrDocUrl) )
    ( (This)->lpVtbl -> GetDocument(This,pbstrDoc) )
EXTERN_C const IID IID_IUPnPDevices;
    typedef struct IUPnPDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDevices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDevices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUPnPDevices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUPnPDevices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUPnPDevices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUPnPDevices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IUPnPDevices * This,
                                __RPC__out long *plCount);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IUPnPDevices * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppunk);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IUPnPDevices * This,
                       __RPC__in BSTR bstrUDN,
                                __RPC__deref_out_opt IUPnPDevice **ppDevice);
        END_INTERFACE
    } IUPnPDevicesVtbl;
    interface IUPnPDevices
    {
        CONST_VTBL struct IUPnPDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppunk) )
    ( (This)->lpVtbl -> get_Item(This,bstrUDN,ppDevice) )
EXTERN_C const IID IID_IUPnPDevice;
    typedef struct IUPnPDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUPnPDevice * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUPnPDevice * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUPnPDevice * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUPnPDevice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsRootDevice )(
            __RPC__in IUPnPDevice * This,
                                __RPC__out VARIANT_BOOL *pvarb);
                                        HRESULT ( STDMETHODCALLTYPE *get_RootDevice )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt IUPnPDevice **ppudRootDevice);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentDevice )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt IUPnPDevice **ppudDeviceParent);
                                        HRESULT ( STDMETHODCALLTYPE *get_HasChildren )(
            __RPC__in IUPnPDevice * This,
                                __RPC__out VARIANT_BOOL *pvarb);
                                        HRESULT ( STDMETHODCALLTYPE *get_Children )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt IUPnPDevices **ppudChildren);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueDeviceName )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PresentationURL )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ManufacturerName )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ManufacturerURL )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModelName )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModelNumber )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModelURL )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UPC )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SerialNumber )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                               HRESULT ( STDMETHODCALLTYPE *IconURL )(
            __RPC__in IUPnPDevice * This,
                       __RPC__in BSTR bstrEncodingFormat,
                       LONG lSizeX,
                       LONG lSizeY,
                       LONG lBitDepth,
                                __RPC__deref_out_opt BSTR *pbstrIconURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_Services )(
            __RPC__in IUPnPDevice * This,
                                __RPC__deref_out_opt IUPnPServices **ppusServices);
        END_INTERFACE
    } IUPnPDeviceVtbl;
    interface IUPnPDevice
    {
        CONST_VTBL struct IUPnPDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_IsRootDevice(This,pvarb) )
    ( (This)->lpVtbl -> get_RootDevice(This,ppudRootDevice) )
    ( (This)->lpVtbl -> get_ParentDevice(This,ppudDeviceParent) )
    ( (This)->lpVtbl -> get_HasChildren(This,pvarb) )
    ( (This)->lpVtbl -> get_Children(This,ppudChildren) )
    ( (This)->lpVtbl -> get_UniqueDeviceName(This,pbstr) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pbstr) )
    ( (This)->lpVtbl -> get_Type(This,pbstr) )
    ( (This)->lpVtbl -> get_PresentationURL(This,pbstr) )
    ( (This)->lpVtbl -> get_ManufacturerName(This,pbstr) )
    ( (This)->lpVtbl -> get_ManufacturerURL(This,pbstr) )
    ( (This)->lpVtbl -> get_ModelName(This,pbstr) )
    ( (This)->lpVtbl -> get_ModelNumber(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_ModelURL(This,pbstr) )
    ( (This)->lpVtbl -> get_UPC(This,pbstr) )
    ( (This)->lpVtbl -> get_SerialNumber(This,pbstr) )
    ( (This)->lpVtbl -> IconURL(This,bstrEncodingFormat,lSizeX,lSizeY,lBitDepth,pbstrIconURL) )
    ( (This)->lpVtbl -> get_Services(This,ppusServices) )
EXTERN_C const IID IID_IUPnPDeviceDocumentAccess;
    typedef struct IUPnPDeviceDocumentAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceDocumentAccess * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceDocumentAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceDocumentAccess * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentURL )(
            __RPC__in IUPnPDeviceDocumentAccess * This,
                                __RPC__deref_out_opt BSTR *pbstrDocument);
        END_INTERFACE
    } IUPnPDeviceDocumentAccessVtbl;
    interface IUPnPDeviceDocumentAccess
    {
        CONST_VTBL struct IUPnPDeviceDocumentAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocumentURL(This,pbstrDocument) )
EXTERN_C const IID IID_IUPnPDeviceDocumentAccessEx;
    typedef struct IUPnPDeviceDocumentAccessExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceDocumentAccessEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceDocumentAccessEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceDocumentAccessEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetDocument )(
            __RPC__in IUPnPDeviceDocumentAccessEx * This,
                                __RPC__deref_out_opt BSTR *pbstrDocument);
        END_INTERFACE
    } IUPnPDeviceDocumentAccessExVtbl;
    interface IUPnPDeviceDocumentAccessEx
    {
        CONST_VTBL struct IUPnPDeviceDocumentAccessExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDocument(This,pbstrDocument) )
EXTERN_C const IID IID_IUPnPDescriptionDocument;
    typedef struct IUPnPDescriptionDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDescriptionDocument * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDescriptionDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDescriptionDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUPnPDescriptionDocument * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUPnPDescriptionDocument * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUPnPDescriptionDocument * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUPnPDescriptionDocument * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReadyState )(
            __RPC__in IUPnPDescriptionDocument * This,
                                __RPC__out LONG *plReadyState);
                               HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IUPnPDescriptionDocument * This,
                       __RPC__in BSTR bstrUrl);
                               HRESULT ( STDMETHODCALLTYPE *LoadAsync )(
            __RPC__in IUPnPDescriptionDocument * This,
                       __RPC__in BSTR bstrUrl,
                       __RPC__in_opt IUnknown *punkCallback);
                                        HRESULT ( STDMETHODCALLTYPE *get_LoadResult )(
            __RPC__in IUPnPDescriptionDocument * This,
                                __RPC__out long *phrError);
                               HRESULT ( STDMETHODCALLTYPE *Abort )(
            __RPC__in IUPnPDescriptionDocument * This);
                               HRESULT ( STDMETHODCALLTYPE *RootDevice )(
            __RPC__in IUPnPDescriptionDocument * This,
                                __RPC__deref_out_opt IUPnPDevice **ppudRootDevice);
                               HRESULT ( STDMETHODCALLTYPE *DeviceByUDN )(
            __RPC__in IUPnPDescriptionDocument * This,
                       __RPC__in BSTR bstrUDN,
                                __RPC__deref_out_opt IUPnPDevice **ppudDevice);
        END_INTERFACE
    } IUPnPDescriptionDocumentVtbl;
    interface IUPnPDescriptionDocument
    {
        CONST_VTBL struct IUPnPDescriptionDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ReadyState(This,plReadyState) )
    ( (This)->lpVtbl -> Load(This,bstrUrl) )
    ( (This)->lpVtbl -> LoadAsync(This,bstrUrl,punkCallback) )
    ( (This)->lpVtbl -> get_LoadResult(This,phrError) )
    ( (This)->lpVtbl -> Abort(This) )
    ( (This)->lpVtbl -> RootDevice(This,ppudRootDevice) )
    ( (This)->lpVtbl -> DeviceByUDN(This,bstrUDN,ppudDevice) )
EXTERN_C const IID IID_IUPnPDeviceFinderAddCallbackWithInterface;
    typedef struct IUPnPDeviceFinderAddCallbackWithInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDeviceFinderAddCallbackWithInterface * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDeviceFinderAddCallbackWithInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDeviceFinderAddCallbackWithInterface * This);
        HRESULT ( STDMETHODCALLTYPE *DeviceAddedWithInterface )(
            __RPC__in IUPnPDeviceFinderAddCallbackWithInterface * This,
                       LONG lFindData,
                       __RPC__in_opt IUPnPDevice *pDevice,
                       __RPC__in GUID *pguidInterface);
        END_INTERFACE
    } IUPnPDeviceFinderAddCallbackWithInterfaceVtbl;
    interface IUPnPDeviceFinderAddCallbackWithInterface
    {
        CONST_VTBL struct IUPnPDeviceFinderAddCallbackWithInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeviceAddedWithInterface(This,lFindData,pDevice,pguidInterface) )
EXTERN_C const IID IID_IUPnPDescriptionDocumentCallback;
    typedef struct IUPnPDescriptionDocumentCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPDescriptionDocumentCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPDescriptionDocumentCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPDescriptionDocumentCallback * This);
        HRESULT ( STDMETHODCALLTYPE *LoadComplete )(
            __RPC__in IUPnPDescriptionDocumentCallback * This,
                       HRESULT hrLoadResult);
        END_INTERFACE
    } IUPnPDescriptionDocumentCallbackVtbl;
    interface IUPnPDescriptionDocumentCallback
    {
        CONST_VTBL struct IUPnPDescriptionDocumentCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadComplete(This,hrLoadResult) )
EXTERN_C const IID LIBID_UPNPLib;
EXTERN_C const CLSID CLSID_UPnPDeviceFinder;
class DECLSPEC_UUID("E2085F28-FEB7-404A-B8E7-E659BDEAAA02")
UPnPDeviceFinder;
EXTERN_C const CLSID CLSID_UPnPDevices;
class DECLSPEC_UUID("B9E84FFD-AD3C-40A4-B835-0882EBCBAAA8")
UPnPDevices;
EXTERN_C const CLSID CLSID_UPnPDevice;
class DECLSPEC_UUID("A32552C5-BA61-457A-B59A-A2561E125E33")
UPnPDevice;
EXTERN_C const CLSID CLSID_UPnPServices;
class DECLSPEC_UUID("C0BC4B4A-A406-4EFC-932F-B8546B8100CC")
UPnPServices;
EXTERN_C const CLSID CLSID_UPnPService;
class DECLSPEC_UUID("C624BA95-FBCB-4409-8C03-8CCEEC533EF1")
UPnPService;
EXTERN_C const CLSID CLSID_UPnPDescriptionDocument;
class DECLSPEC_UUID("1d8a9b47-3a28-4ce2-8a4b-bd34e45bceeb")
UPnPDescriptionDocument;
EXTERN_C const CLSID CLSID_UPnPDeviceFinderEx;
class DECLSPEC_UUID("181b54fc-380b-4a75-b3f1-4ac45e9605b0")
UPnPDeviceFinderEx;
EXTERN_C const CLSID CLSID_UPnPDescriptionDocumentEx;
class DECLSPEC_UUID("33fd0563-d81a-4393-83cc-0195b1da2f91")
UPnPDescriptionDocumentEx;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_upnp_0000_0019_v0_0_s_ifspec;
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
