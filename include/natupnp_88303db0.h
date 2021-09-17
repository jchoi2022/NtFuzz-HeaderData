#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUPnPNAT IUPnPNAT;
typedef interface INATEventManager INATEventManager;
typedef interface INATExternalIPAddressCallback INATExternalIPAddressCallback;
typedef interface INATNumberOfEntriesCallback INATNumberOfEntriesCallback;
typedef interface IDynamicPortMappingCollection IDynamicPortMappingCollection;
typedef interface IDynamicPortMapping IDynamicPortMapping;
typedef interface IStaticPortMappingCollection IStaticPortMappingCollection;
typedef interface IStaticPortMapping IStaticPortMapping;
typedef class UPnPNAT UPnPNAT;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUPnPNAT;
    typedef struct IUPnPNATVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUPnPNAT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUPnPNAT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUPnPNAT * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IUPnPNAT * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IUPnPNAT * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IUPnPNAT * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IUPnPNAT * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StaticPortMappingCollection )(
            __RPC__in IUPnPNAT * This,
                                __RPC__deref_out_opt IStaticPortMappingCollection **ppSPMs);
                                        HRESULT ( STDMETHODCALLTYPE *get_DynamicPortMappingCollection )(
            __RPC__in IUPnPNAT * This,
                                __RPC__deref_out_opt IDynamicPortMappingCollection **ppDPMs);
                                        HRESULT ( STDMETHODCALLTYPE *get_NATEventManager )(
            __RPC__in IUPnPNAT * This,
                                __RPC__deref_out_opt INATEventManager **ppNEM);
        END_INTERFACE
    } IUPnPNATVtbl;
    interface IUPnPNAT
    {
        CONST_VTBL struct IUPnPNATVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StaticPortMappingCollection(This,ppSPMs) )
    ( (This)->lpVtbl -> get_DynamicPortMappingCollection(This,ppDPMs) )
    ( (This)->lpVtbl -> get_NATEventManager(This,ppNEM) )
EXTERN_C const IID IID_INATEventManager;
    typedef struct INATEventManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INATEventManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INATEventManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INATEventManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INATEventManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INATEventManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INATEventManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INATEventManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExternalIPAddressCallback )(
            __RPC__in INATEventManager * This,
                       __RPC__in_opt IUnknown *pUnk);
                                        HRESULT ( STDMETHODCALLTYPE *put_NumberOfEntriesCallback )(
            __RPC__in INATEventManager * This,
                       __RPC__in_opt IUnknown *pUnk);
        END_INTERFACE
    } INATEventManagerVtbl;
    interface INATEventManager
    {
        CONST_VTBL struct INATEventManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_ExternalIPAddressCallback(This,pUnk) )
    ( (This)->lpVtbl -> put_NumberOfEntriesCallback(This,pUnk) )
EXTERN_C const IID IID_INATExternalIPAddressCallback;
    typedef struct INATExternalIPAddressCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INATExternalIPAddressCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INATExternalIPAddressCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INATExternalIPAddressCallback * This);
                               HRESULT ( STDMETHODCALLTYPE *NewExternalIPAddress )(
            __RPC__in INATExternalIPAddressCallback * This,
                       __RPC__in BSTR bstrNewExternalIPAddress);
        END_INTERFACE
    } INATExternalIPAddressCallbackVtbl;
    interface INATExternalIPAddressCallback
    {
        CONST_VTBL struct INATExternalIPAddressCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NewExternalIPAddress(This,bstrNewExternalIPAddress) )
EXTERN_C const IID IID_INATNumberOfEntriesCallback;
    typedef struct INATNumberOfEntriesCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INATNumberOfEntriesCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INATNumberOfEntriesCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INATNumberOfEntriesCallback * This);
                               HRESULT ( STDMETHODCALLTYPE *NewNumberOfEntries )(
            __RPC__in INATNumberOfEntriesCallback * This,
                       long lNewNumberOfEntries);
        END_INTERFACE
    } INATNumberOfEntriesCallbackVtbl;
    interface INATNumberOfEntriesCallback
    {
        CONST_VTBL struct INATNumberOfEntriesCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NewNumberOfEntries(This,lNewNumberOfEntries) )
EXTERN_C const IID IID_IDynamicPortMappingCollection;
    typedef struct IDynamicPortMappingCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDynamicPortMappingCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDynamicPortMappingCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDynamicPortMappingCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDynamicPortMappingCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDynamicPortMappingCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDynamicPortMappingCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDynamicPortMappingCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IDynamicPortMappingCollection * This,
                                __RPC__deref_out_opt IUnknown **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IDynamicPortMappingCollection * This,
                       __RPC__in BSTR bstrRemoteHost,
                       long lExternalPort,
                       __RPC__in BSTR bstrProtocol,
                                __RPC__deref_out_opt IDynamicPortMapping **ppDPM);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IDynamicPortMappingCollection * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IDynamicPortMappingCollection * This,
                       __RPC__in BSTR bstrRemoteHost,
                       long lExternalPort,
                       __RPC__in BSTR bstrProtocol);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IDynamicPortMappingCollection * This,
                       __RPC__in BSTR bstrRemoteHost,
                       long lExternalPort,
                       __RPC__in BSTR bstrProtocol,
                       long lInternalPort,
                       __RPC__in BSTR bstrInternalClient,
                       VARIANT_BOOL bEnabled,
                       __RPC__in BSTR bstrDescription,
                       long lLeaseDuration,
                                __RPC__deref_out_opt IDynamicPortMapping **ppDPM);
        END_INTERFACE
    } IDynamicPortMappingCollectionVtbl;
    interface IDynamicPortMappingCollection
    {
        CONST_VTBL struct IDynamicPortMappingCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,bstrRemoteHost,lExternalPort,bstrProtocol,ppDPM) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,bstrRemoteHost,lExternalPort,bstrProtocol) )
    ( (This)->lpVtbl -> Add(This,bstrRemoteHost,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,lLeaseDuration,ppDPM) )
EXTERN_C const IID IID_IDynamicPortMapping;
    typedef struct IDynamicPortMappingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDynamicPortMapping * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDynamicPortMapping * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDynamicPortMapping * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDynamicPortMapping * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDynamicPortMapping * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDynamicPortMapping * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDynamicPortMapping * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExternalIPAddress )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemoteHost )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExternalPort )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InternalPort )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InternalClient )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LeaseDuration )(
            __RPC__in IDynamicPortMapping * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *RenewLease )(
            __RPC__in IDynamicPortMapping * This,
                       long lLeaseDurationDesired,
                                __RPC__out long *pLeaseDurationReturned);
                               HRESULT ( STDMETHODCALLTYPE *EditInternalClient )(
            __RPC__in IDynamicPortMapping * This,
                       __RPC__in BSTR bstrInternalClient);
                               HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in IDynamicPortMapping * This,
                       VARIANT_BOOL vb);
                               HRESULT ( STDMETHODCALLTYPE *EditDescription )(
            __RPC__in IDynamicPortMapping * This,
                       __RPC__in BSTR bstrDescription);
                               HRESULT ( STDMETHODCALLTYPE *EditInternalPort )(
            __RPC__in IDynamicPortMapping * This,
                       long lInternalPort);
        END_INTERFACE
    } IDynamicPortMappingVtbl;
    interface IDynamicPortMapping
    {
        CONST_VTBL struct IDynamicPortMappingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ExternalIPAddress(This,pVal) )
    ( (This)->lpVtbl -> get_RemoteHost(This,pVal) )
    ( (This)->lpVtbl -> get_ExternalPort(This,pVal) )
    ( (This)->lpVtbl -> get_Protocol(This,pVal) )
    ( (This)->lpVtbl -> get_InternalPort(This,pVal) )
    ( (This)->lpVtbl -> get_InternalClient(This,pVal) )
    ( (This)->lpVtbl -> get_Enabled(This,pVal) )
    ( (This)->lpVtbl -> get_Description(This,pVal) )
    ( (This)->lpVtbl -> get_LeaseDuration(This,pVal) )
    ( (This)->lpVtbl -> RenewLease(This,lLeaseDurationDesired,pLeaseDurationReturned) )
    ( (This)->lpVtbl -> EditInternalClient(This,bstrInternalClient) )
    ( (This)->lpVtbl -> Enable(This,vb) )
    ( (This)->lpVtbl -> EditDescription(This,bstrDescription) )
    ( (This)->lpVtbl -> EditInternalPort(This,lInternalPort) )
EXTERN_C const IID IID_IStaticPortMappingCollection;
    typedef struct IStaticPortMappingCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStaticPortMappingCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStaticPortMappingCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStaticPortMappingCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IStaticPortMappingCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IStaticPortMappingCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IStaticPortMappingCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IStaticPortMappingCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IStaticPortMappingCollection * This,
                                __RPC__deref_out_opt IUnknown **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IStaticPortMappingCollection * This,
                       long lExternalPort,
                       __RPC__in BSTR bstrProtocol,
                                __RPC__deref_out_opt IStaticPortMapping **ppSPM);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IStaticPortMappingCollection * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IStaticPortMappingCollection * This,
                       long lExternalPort,
                       __RPC__in BSTR bstrProtocol);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IStaticPortMappingCollection * This,
                       long lExternalPort,
                       __RPC__in BSTR bstrProtocol,
                       long lInternalPort,
                       __RPC__in BSTR bstrInternalClient,
                       VARIANT_BOOL bEnabled,
                       __RPC__in BSTR bstrDescription,
                                __RPC__deref_out_opt IStaticPortMapping **ppSPM);
        END_INTERFACE
    } IStaticPortMappingCollectionVtbl;
    interface IStaticPortMappingCollection
    {
        CONST_VTBL struct IStaticPortMappingCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,lExternalPort,bstrProtocol,ppSPM) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> Remove(This,lExternalPort,bstrProtocol) )
    ( (This)->lpVtbl -> Add(This,lExternalPort,bstrProtocol,lInternalPort,bstrInternalClient,bEnabled,bstrDescription,ppSPM) )
EXTERN_C const IID IID_IStaticPortMapping;
    typedef struct IStaticPortMappingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStaticPortMapping * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStaticPortMapping * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStaticPortMapping * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IStaticPortMapping * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IStaticPortMapping * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IStaticPortMapping * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IStaticPortMapping * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExternalIPAddress )(
            __RPC__in IStaticPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExternalPort )(
            __RPC__in IStaticPortMapping * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InternalPort )(
            __RPC__in IStaticPortMapping * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            __RPC__in IStaticPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InternalClient )(
            __RPC__in IStaticPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IStaticPortMapping * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IStaticPortMapping * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *EditInternalClient )(
            __RPC__in IStaticPortMapping * This,
                       __RPC__in BSTR bstrInternalClient);
                               HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in IStaticPortMapping * This,
                       VARIANT_BOOL vb);
                               HRESULT ( STDMETHODCALLTYPE *EditDescription )(
            __RPC__in IStaticPortMapping * This,
                       __RPC__in BSTR bstrDescription);
                               HRESULT ( STDMETHODCALLTYPE *EditInternalPort )(
            __RPC__in IStaticPortMapping * This,
                       long lInternalPort);
        END_INTERFACE
    } IStaticPortMappingVtbl;
    interface IStaticPortMapping
    {
        CONST_VTBL struct IStaticPortMappingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ExternalIPAddress(This,pVal) )
    ( (This)->lpVtbl -> get_ExternalPort(This,pVal) )
    ( (This)->lpVtbl -> get_InternalPort(This,pVal) )
    ( (This)->lpVtbl -> get_Protocol(This,pVal) )
    ( (This)->lpVtbl -> get_InternalClient(This,pVal) )
    ( (This)->lpVtbl -> get_Enabled(This,pVal) )
    ( (This)->lpVtbl -> get_Description(This,pVal) )
    ( (This)->lpVtbl -> EditInternalClient(This,bstrInternalClient) )
    ( (This)->lpVtbl -> Enable(This,vb) )
    ( (This)->lpVtbl -> EditDescription(This,bstrDescription) )
    ( (This)->lpVtbl -> EditInternalPort(This,lInternalPort) )
EXTERN_C const IID LIBID_NATUPNPLib;
EXTERN_C const CLSID CLSID_UPnPNAT;
class DECLSPEC_UUID("AE1E00AA-3FD5-403C-8A27-2BBDC30CD0E1")
UPnPNAT;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_natupnp_0000_0009_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
