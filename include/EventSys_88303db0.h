#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEventSystem IEventSystem;
typedef interface IEventPublisher IEventPublisher;
typedef interface IEventClass IEventClass;
typedef interface IEventClass2 IEventClass2;
typedef interface IEventSubscription IEventSubscription;
typedef interface IFiringControl IFiringControl;
typedef interface IPublisherFilter IPublisherFilter;
typedef interface IMultiInterfacePublisherFilter IMultiInterfacePublisherFilter;
typedef interface IEventObjectChange IEventObjectChange;
typedef interface IEventObjectChange2 IEventObjectChange2;
typedef interface IEnumEventObject IEnumEventObject;
typedef interface IEventObjectCollection IEventObjectCollection;
typedef interface IEventProperty IEventProperty;
typedef interface IEventControl IEventControl;
typedef interface IMultiInterfaceEventControl IMultiInterfaceEventControl;
typedef interface IDontSupportEventSubscription IDontSupportEventSubscription;
typedef class CEventSystem CEventSystem;
typedef class CEventPublisher CEventPublisher;
typedef class CEventClass CEventClass;
typedef class CEventSubscription CEventSubscription;
typedef class EventObjectChange EventObjectChange;
typedef class EventObjectChange2 EventObjectChange2;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEventSystem;
    typedef struct IEventSystemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventSystem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventSystem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventSystem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventSystem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventSystem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventSystem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventSystem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Query )(
            __RPC__in IEventSystem * This,
                       __RPC__in BSTR progID,
                       __RPC__in BSTR queryCriteria,
                        __RPC__out int *errorIndex,
                                __RPC__deref_out_opt IUnknown **ppInterface);
                               HRESULT ( STDMETHODCALLTYPE *Store )(
            __RPC__in IEventSystem * This,
                       __RPC__in BSTR ProgID,
                       __RPC__in_opt IUnknown *pInterface);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IEventSystem * This,
                       __RPC__in BSTR progID,
                       __RPC__in BSTR queryCriteria,
                        __RPC__out int *errorIndex);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventObjectChangeEventClassID )(
            __RPC__in IEventSystem * This,
                                __RPC__deref_out_opt BSTR *pbstrEventClassID);
                               HRESULT ( STDMETHODCALLTYPE *QueryS )(
            __RPC__in IEventSystem * This,
                       __RPC__in BSTR progID,
                       __RPC__in BSTR queryCriteria,
                                __RPC__deref_out_opt IUnknown **ppInterface);
                               HRESULT ( STDMETHODCALLTYPE *RemoveS )(
            __RPC__in IEventSystem * This,
                       __RPC__in BSTR progID,
                       __RPC__in BSTR queryCriteria);
        END_INTERFACE
    } IEventSystemVtbl;
    interface IEventSystem
    {
        CONST_VTBL struct IEventSystemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Query(This,progID,queryCriteria,errorIndex,ppInterface) )
    ( (This)->lpVtbl -> Store(This,ProgID,pInterface) )
    ( (This)->lpVtbl -> Remove(This,progID,queryCriteria,errorIndex) )
    ( (This)->lpVtbl -> get_EventObjectChangeEventClassID(This,pbstrEventClassID) )
    ( (This)->lpVtbl -> QueryS(This,progID,queryCriteria,ppInterface) )
    ( (This)->lpVtbl -> RemoveS(This,progID,queryCriteria) )
EXTERN_C const IID IID_IEventPublisher;
    typedef struct IEventPublisherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventPublisher * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventPublisher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventPublisher * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventPublisher * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventPublisher * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventPublisher * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventPublisher * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_PublisherID )(
            __RPC__in IEventPublisher * This,
                                __RPC__deref_out_opt BSTR *pbstrPublisherID);
                                        HRESULT ( STDMETHODCALLTYPE *put_PublisherID )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrPublisherID);
                                        HRESULT ( STDMETHODCALLTYPE *get_PublisherName )(
            __RPC__in IEventPublisher * This,
                                __RPC__deref_out_opt BSTR *pbstrPublisherName);
                                        HRESULT ( STDMETHODCALLTYPE *put_PublisherName )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrPublisherName);
                                        HRESULT ( STDMETHODCALLTYPE *get_PublisherType )(
            __RPC__in IEventPublisher * This,
                                __RPC__deref_out_opt BSTR *pbstrPublisherType);
                                        HRESULT ( STDMETHODCALLTYPE *put_PublisherType )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrPublisherType);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerSID )(
            __RPC__in IEventPublisher * This,
                                __RPC__deref_out_opt BSTR *pbstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_OwnerSID )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IEventPublisher * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrDescription);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultProperty )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrPropertyName,
                                __RPC__out VARIANT *propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *PutDefaultProperty )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrPropertyName,
                       __RPC__in VARIANT *propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *RemoveDefaultProperty )(
            __RPC__in IEventPublisher * This,
                       __RPC__in BSTR bstrPropertyName);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultPropertyCollection )(
            __RPC__in IEventPublisher * This,
                                __RPC__deref_out_opt IEventObjectCollection **collection);
        END_INTERFACE
    } IEventPublisherVtbl;
    interface IEventPublisher
    {
        CONST_VTBL struct IEventPublisherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_PublisherID(This,pbstrPublisherID) )
    ( (This)->lpVtbl -> put_PublisherID(This,bstrPublisherID) )
    ( (This)->lpVtbl -> get_PublisherName(This,pbstrPublisherName) )
    ( (This)->lpVtbl -> put_PublisherName(This,bstrPublisherName) )
    ( (This)->lpVtbl -> get_PublisherType(This,pbstrPublisherType) )
    ( (This)->lpVtbl -> put_PublisherType(This,bstrPublisherType) )
    ( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
    ( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> GetDefaultProperty(This,bstrPropertyName,propertyValue) )
    ( (This)->lpVtbl -> PutDefaultProperty(This,bstrPropertyName,propertyValue) )
    ( (This)->lpVtbl -> RemoveDefaultProperty(This,bstrPropertyName) )
    ( (This)->lpVtbl -> GetDefaultPropertyCollection(This,collection) )
EXTERN_C const IID IID_IEventClass;
    typedef struct IEventClassVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventClass * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventClass * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventClass * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventClass * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventClass * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventClass * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventClass * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventClassID )(
            __RPC__in IEventClass * This,
                                __RPC__deref_out_opt BSTR *pbstrEventClassID);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventClassID )(
            __RPC__in IEventClass * This,
                       __RPC__in BSTR bstrEventClassID);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventClassName )(
            __RPC__in IEventClass * This,
                                __RPC__deref_out_opt BSTR *pbstrEventClassName);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventClassName )(
            __RPC__in IEventClass * This,
                       __RPC__in BSTR bstrEventClassName);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerSID )(
            __RPC__in IEventClass * This,
                                __RPC__deref_out_opt BSTR *pbstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_OwnerSID )(
            __RPC__in IEventClass * This,
                       __RPC__in BSTR bstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_FiringInterfaceID )(
            __RPC__in IEventClass * This,
                                __RPC__deref_out_opt BSTR *pbstrFiringInterfaceID);
                                        HRESULT ( STDMETHODCALLTYPE *put_FiringInterfaceID )(
            __RPC__in IEventClass * This,
                       __RPC__in BSTR bstrFiringInterfaceID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IEventClass * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IEventClass * This,
                       __RPC__in BSTR bstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_CustomConfigCLSID )(
            __RPC__in IEventClass * This,
                                __RPC__deref_out_opt BSTR *pbstrCustomConfigCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_CustomConfigCLSID )(
            __RPC__in IEventClass * This,
                       __RPC__in BSTR bstrCustomConfigCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TypeLib )(
            __RPC__in IEventClass * This,
                                __RPC__deref_out_opt BSTR *pbstrTypeLib);
                                        HRESULT ( STDMETHODCALLTYPE *put_TypeLib )(
            __RPC__in IEventClass * This,
                       __RPC__in BSTR bstrTypeLib);
        END_INTERFACE
    } IEventClassVtbl;
    interface IEventClass
    {
        CONST_VTBL struct IEventClassVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_EventClassID(This,pbstrEventClassID) )
    ( (This)->lpVtbl -> put_EventClassID(This,bstrEventClassID) )
    ( (This)->lpVtbl -> get_EventClassName(This,pbstrEventClassName) )
    ( (This)->lpVtbl -> put_EventClassName(This,bstrEventClassName) )
    ( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
    ( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
    ( (This)->lpVtbl -> get_FiringInterfaceID(This,pbstrFiringInterfaceID) )
    ( (This)->lpVtbl -> put_FiringInterfaceID(This,bstrFiringInterfaceID) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_CustomConfigCLSID(This,pbstrCustomConfigCLSID) )
    ( (This)->lpVtbl -> put_CustomConfigCLSID(This,bstrCustomConfigCLSID) )
    ( (This)->lpVtbl -> get_TypeLib(This,pbstrTypeLib) )
    ( (This)->lpVtbl -> put_TypeLib(This,bstrTypeLib) )
EXTERN_C const IID IID_IEventClass2;
    typedef struct IEventClass2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventClass2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventClass2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventClass2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventClass2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventClass2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventClass2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventClass2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventClassID )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrEventClassID);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventClassID )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrEventClassID);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventClassName )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrEventClassName);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventClassName )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrEventClassName);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerSID )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_OwnerSID )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_FiringInterfaceID )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrFiringInterfaceID);
                                        HRESULT ( STDMETHODCALLTYPE *put_FiringInterfaceID )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrFiringInterfaceID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_CustomConfigCLSID )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCustomConfigCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_CustomConfigCLSID )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrCustomConfigCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TypeLib )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrTypeLib);
                                        HRESULT ( STDMETHODCALLTYPE *put_TypeLib )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrTypeLib);
                                        HRESULT ( STDMETHODCALLTYPE *get_PublisherID )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPublisherID);
                                        HRESULT ( STDMETHODCALLTYPE *put_PublisherID )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrPublisherID);
                                        HRESULT ( STDMETHODCALLTYPE *get_MultiInterfacePublisherFilterCLSID )(
            __RPC__in IEventClass2 * This,
                                __RPC__deref_out_opt BSTR *pbstrPubFilCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_MultiInterfacePublisherFilterCLSID )(
            __RPC__in IEventClass2 * This,
                       __RPC__in BSTR bstrPubFilCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowInprocActivation )(
            __RPC__in IEventClass2 * This,
                                __RPC__out BOOL *pfAllowInprocActivation);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowInprocActivation )(
            __RPC__in IEventClass2 * This,
                       BOOL fAllowInprocActivation);
                                        HRESULT ( STDMETHODCALLTYPE *get_FireInParallel )(
            __RPC__in IEventClass2 * This,
                                __RPC__out BOOL *pfFireInParallel);
                                        HRESULT ( STDMETHODCALLTYPE *put_FireInParallel )(
            __RPC__in IEventClass2 * This,
                       BOOL fFireInParallel);
        END_INTERFACE
    } IEventClass2Vtbl;
    interface IEventClass2
    {
        CONST_VTBL struct IEventClass2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_EventClassID(This,pbstrEventClassID) )
    ( (This)->lpVtbl -> put_EventClassID(This,bstrEventClassID) )
    ( (This)->lpVtbl -> get_EventClassName(This,pbstrEventClassName) )
    ( (This)->lpVtbl -> put_EventClassName(This,bstrEventClassName) )
    ( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
    ( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
    ( (This)->lpVtbl -> get_FiringInterfaceID(This,pbstrFiringInterfaceID) )
    ( (This)->lpVtbl -> put_FiringInterfaceID(This,bstrFiringInterfaceID) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_CustomConfigCLSID(This,pbstrCustomConfigCLSID) )
    ( (This)->lpVtbl -> put_CustomConfigCLSID(This,bstrCustomConfigCLSID) )
    ( (This)->lpVtbl -> get_TypeLib(This,pbstrTypeLib) )
    ( (This)->lpVtbl -> put_TypeLib(This,bstrTypeLib) )
    ( (This)->lpVtbl -> get_PublisherID(This,pbstrPublisherID) )
    ( (This)->lpVtbl -> put_PublisherID(This,bstrPublisherID) )
    ( (This)->lpVtbl -> get_MultiInterfacePublisherFilterCLSID(This,pbstrPubFilCLSID) )
    ( (This)->lpVtbl -> put_MultiInterfacePublisherFilterCLSID(This,bstrPubFilCLSID) )
    ( (This)->lpVtbl -> get_AllowInprocActivation(This,pfAllowInprocActivation) )
    ( (This)->lpVtbl -> put_AllowInprocActivation(This,fAllowInprocActivation) )
    ( (This)->lpVtbl -> get_FireInParallel(This,pfFireInParallel) )
    ( (This)->lpVtbl -> put_FireInParallel(This,fFireInParallel) )
EXTERN_C const IID IID_IEventSubscription;
    typedef struct IEventSubscriptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventSubscription * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventSubscription * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventSubscription * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventSubscription * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventSubscription * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventSubscription * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventSubscription * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubscriptionID )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrSubscriptionID);
                                        HRESULT ( STDMETHODCALLTYPE *put_SubscriptionID )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrSubscriptionID);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubscriptionName )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrSubscriptionName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SubscriptionName )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrSubscriptionName);
                                        HRESULT ( STDMETHODCALLTYPE *get_PublisherID )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrPublisherID);
                                        HRESULT ( STDMETHODCALLTYPE *put_PublisherID )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrPublisherID);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventClassID )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrEventClassID);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventClassID )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrEventClassID);
                                        HRESULT ( STDMETHODCALLTYPE *get_MethodName )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrMethodName);
                                        HRESULT ( STDMETHODCALLTYPE *put_MethodName )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrMethodName);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubscriberCLSID )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrSubscriberCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_SubscriberCLSID )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrSubscriberCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubscriberInterface )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt IUnknown **ppSubscriberInterface);
                                        HRESULT ( STDMETHODCALLTYPE *put_SubscriberInterface )(
            __RPC__in IEventSubscription * This,
                       __RPC__in_opt IUnknown *pSubscriberInterface);
                                        HRESULT ( STDMETHODCALLTYPE *get_PerUser )(
            __RPC__in IEventSubscription * This,
                                __RPC__out BOOL *pfPerUser);
                                        HRESULT ( STDMETHODCALLTYPE *put_PerUser )(
            __RPC__in IEventSubscription * This,
                       BOOL fPerUser);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerSID )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_OwnerSID )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrOwnerSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IEventSubscription * This,
                                __RPC__out BOOL *pfEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IEventSubscription * This,
                       BOOL fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_MachineName )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrMachineName);
                                        HRESULT ( STDMETHODCALLTYPE *put_MachineName )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrMachineName);
                               HRESULT ( STDMETHODCALLTYPE *GetPublisherProperty )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrPropertyName,
                                __RPC__out VARIANT *propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *PutPublisherProperty )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrPropertyName,
                       __RPC__in VARIANT *propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *RemovePublisherProperty )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrPropertyName);
                               HRESULT ( STDMETHODCALLTYPE *GetPublisherPropertyCollection )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt IEventObjectCollection **collection);
                               HRESULT ( STDMETHODCALLTYPE *GetSubscriberProperty )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrPropertyName,
                                __RPC__out VARIANT *propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *PutSubscriberProperty )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrPropertyName,
                       __RPC__in VARIANT *propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *RemoveSubscriberProperty )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrPropertyName);
                               HRESULT ( STDMETHODCALLTYPE *GetSubscriberPropertyCollection )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt IEventObjectCollection **collection);
                                        HRESULT ( STDMETHODCALLTYPE *get_InterfaceID )(
            __RPC__in IEventSubscription * This,
                                __RPC__deref_out_opt BSTR *pbstrInterfaceID);
                                        HRESULT ( STDMETHODCALLTYPE *put_InterfaceID )(
            __RPC__in IEventSubscription * This,
                       __RPC__in BSTR bstrInterfaceID);
        END_INTERFACE
    } IEventSubscriptionVtbl;
    interface IEventSubscription
    {
        CONST_VTBL struct IEventSubscriptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SubscriptionID(This,pbstrSubscriptionID) )
    ( (This)->lpVtbl -> put_SubscriptionID(This,bstrSubscriptionID) )
    ( (This)->lpVtbl -> get_SubscriptionName(This,pbstrSubscriptionName) )
    ( (This)->lpVtbl -> put_SubscriptionName(This,bstrSubscriptionName) )
    ( (This)->lpVtbl -> get_PublisherID(This,pbstrPublisherID) )
    ( (This)->lpVtbl -> put_PublisherID(This,bstrPublisherID) )
    ( (This)->lpVtbl -> get_EventClassID(This,pbstrEventClassID) )
    ( (This)->lpVtbl -> put_EventClassID(This,bstrEventClassID) )
    ( (This)->lpVtbl -> get_MethodName(This,pbstrMethodName) )
    ( (This)->lpVtbl -> put_MethodName(This,bstrMethodName) )
    ( (This)->lpVtbl -> get_SubscriberCLSID(This,pbstrSubscriberCLSID) )
    ( (This)->lpVtbl -> put_SubscriberCLSID(This,bstrSubscriberCLSID) )
    ( (This)->lpVtbl -> get_SubscriberInterface(This,ppSubscriberInterface) )
    ( (This)->lpVtbl -> put_SubscriberInterface(This,pSubscriberInterface) )
    ( (This)->lpVtbl -> get_PerUser(This,pfPerUser) )
    ( (This)->lpVtbl -> put_PerUser(This,fPerUser) )
    ( (This)->lpVtbl -> get_OwnerSID(This,pbstrOwnerSID) )
    ( (This)->lpVtbl -> put_OwnerSID(This,bstrOwnerSID) )
    ( (This)->lpVtbl -> get_Enabled(This,pfEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,fEnabled) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_MachineName(This,pbstrMachineName) )
    ( (This)->lpVtbl -> put_MachineName(This,bstrMachineName) )
    ( (This)->lpVtbl -> GetPublisherProperty(This,bstrPropertyName,propertyValue) )
    ( (This)->lpVtbl -> PutPublisherProperty(This,bstrPropertyName,propertyValue) )
    ( (This)->lpVtbl -> RemovePublisherProperty(This,bstrPropertyName) )
    ( (This)->lpVtbl -> GetPublisherPropertyCollection(This,collection) )
    ( (This)->lpVtbl -> GetSubscriberProperty(This,bstrPropertyName,propertyValue) )
    ( (This)->lpVtbl -> PutSubscriberProperty(This,bstrPropertyName,propertyValue) )
    ( (This)->lpVtbl -> RemoveSubscriberProperty(This,bstrPropertyName) )
    ( (This)->lpVtbl -> GetSubscriberPropertyCollection(This,collection) )
    ( (This)->lpVtbl -> get_InterfaceID(This,pbstrInterfaceID) )
    ( (This)->lpVtbl -> put_InterfaceID(This,bstrInterfaceID) )
EXTERN_C const IID IID_IFiringControl;
    typedef struct IFiringControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFiringControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFiringControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFiringControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFiringControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFiringControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFiringControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFiringControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *FireSubscription )(
            __RPC__in IFiringControl * This,
                       __RPC__in_opt IEventSubscription *subscription);
        END_INTERFACE
    } IFiringControlVtbl;
    interface IFiringControl
    {
        CONST_VTBL struct IFiringControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> FireSubscription(This,subscription) )
EXTERN_C const IID IID_IPublisherFilter;
    typedef struct IPublisherFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPublisherFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPublisherFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPublisherFilter * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IPublisherFilter * This,
                       __RPC__in BSTR methodName,
                               __RPC__in_opt IDispatch *dispUserDefined);
                           HRESULT ( STDMETHODCALLTYPE *PrepareToFire )(
            __RPC__in IPublisherFilter * This,
                       __RPC__in BSTR methodName,
                       __RPC__in_opt IFiringControl *firingControl);
        END_INTERFACE
    } IPublisherFilterVtbl;
    interface IPublisherFilter
    {
        CONST_VTBL struct IPublisherFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,methodName,dispUserDefined) )
    ( (This)->lpVtbl -> PrepareToFire(This,methodName,firingControl) )
EXTERN_C const IID IID_IMultiInterfacePublisherFilter;
    typedef struct IMultiInterfacePublisherFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMultiInterfacePublisherFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMultiInterfacePublisherFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMultiInterfacePublisherFilter * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IMultiInterfacePublisherFilter * This,
                       __RPC__in_opt IMultiInterfaceEventControl *pEIC);
                           HRESULT ( STDMETHODCALLTYPE *PrepareToFire )(
            __RPC__in IMultiInterfacePublisherFilter * This,
                       __RPC__in REFIID iid,
                       __RPC__in BSTR methodName,
                       __RPC__in_opt IFiringControl *firingControl);
        END_INTERFACE
    } IMultiInterfacePublisherFilterVtbl;
    interface IMultiInterfacePublisherFilter
    {
        CONST_VTBL struct IMultiInterfacePublisherFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pEIC) )
    ( (This)->lpVtbl -> PrepareToFire(This,iid,methodName,firingControl) )
typedef
enum __MIDL_IEventObjectChange_0001
    {
        EOC_NewObject = 0,
        EOC_ModifiedObject = ( EOC_NewObject + 1 ) ,
        EOC_DeletedObject = ( EOC_ModifiedObject + 1 )
    } EOC_ChangeType;
EXTERN_C const IID IID_IEventObjectChange;
    typedef struct IEventObjectChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventObjectChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventObjectChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventObjectChange * This);
                           HRESULT ( STDMETHODCALLTYPE *ChangedSubscription )(
            __RPC__in IEventObjectChange * This,
                       EOC_ChangeType changeType,
                       __RPC__in BSTR bstrSubscriptionID);
                           HRESULT ( STDMETHODCALLTYPE *ChangedEventClass )(
            __RPC__in IEventObjectChange * This,
                       EOC_ChangeType changeType,
                       __RPC__in BSTR bstrEventClassID);
                           HRESULT ( STDMETHODCALLTYPE *ChangedPublisher )(
            __RPC__in IEventObjectChange * This,
                       EOC_ChangeType changeType,
                       __RPC__in BSTR bstrPublisherID);
        END_INTERFACE
    } IEventObjectChangeVtbl;
    interface IEventObjectChange
    {
        CONST_VTBL struct IEventObjectChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ChangedSubscription(This,changeType,bstrSubscriptionID) )
    ( (This)->lpVtbl -> ChangedEventClass(This,changeType,bstrEventClassID) )
    ( (This)->lpVtbl -> ChangedPublisher(This,changeType,bstrPublisherID) )
typedef struct __MIDL___MIDL_itf_eventsys_0000_0009_0001
    {
    DWORD cbSize;
    EOC_ChangeType changeType;
    BSTR objectId;
    BSTR partitionId;
    BSTR applicationId;
    GUID reserved[ 10 ];
    } COMEVENTSYSCHANGEINFO;
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IEventObjectChange2;
    typedef struct IEventObjectChange2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventObjectChange2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventObjectChange2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventObjectChange2 * This);
                           HRESULT ( STDMETHODCALLTYPE *ChangedSubscription )(
            __RPC__in IEventObjectChange2 * This,
                       __RPC__in COMEVENTSYSCHANGEINFO *pInfo);
                           HRESULT ( STDMETHODCALLTYPE *ChangedEventClass )(
            __RPC__in IEventObjectChange2 * This,
                       __RPC__in COMEVENTSYSCHANGEINFO *pInfo);
        END_INTERFACE
    } IEventObjectChange2Vtbl;
    interface IEventObjectChange2
    {
        CONST_VTBL struct IEventObjectChange2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ChangedSubscription(This,pInfo) )
    ( (This)->lpVtbl -> ChangedEventClass(This,pInfo) )
EXTERN_C const IID IID_IEnumEventObject;
    typedef struct IEnumEventObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumEventObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumEventObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumEventObject * This);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumEventObject * This,
                        __RPC__deref_out_opt IEnumEventObject **ppInterface);
                               HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumEventObject * This,
                       ULONG cReqElem,
                                            __RPC__out_ecount_part(cReqElem, *cRetElem) IUnknown **ppInterface,
                        __RPC__out ULONG *cRetElem);
                               HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumEventObject * This);
                               HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumEventObject * This,
                       ULONG cSkipElem);
        END_INTERFACE
    } IEnumEventObjectVtbl;
    interface IEnumEventObject
    {
        CONST_VTBL struct IEnumEventObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppInterface) )
    ( (This)->lpVtbl -> Next(This,cReqElem,ppInterface,cRetElem) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,cSkipElem) )
EXTERN_C const IID IID_IEventObjectCollection;
    typedef struct IEventObjectCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventObjectCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventObjectCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventObjectCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventObjectCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventObjectCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventObjectCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventObjectCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IEventObjectCollection * This,
                                __RPC__deref_out_opt IUnknown **ppUnkEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IEventObjectCollection * This,
                       __RPC__in BSTR objectID,
                                __RPC__out VARIANT *pItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_NewEnum )(
            __RPC__in IEventObjectCollection * This,
                                __RPC__deref_out_opt IEnumEventObject **ppEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IEventObjectCollection * This,
                                __RPC__out long *pCount);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IEventObjectCollection * This,
                       __RPC__in VARIANT *item,
                       __RPC__in BSTR objectID);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IEventObjectCollection * This,
                       __RPC__in BSTR objectID);
        END_INTERFACE
    } IEventObjectCollectionVtbl;
    interface IEventObjectCollection
    {
        CONST_VTBL struct IEventObjectCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnkEnum) )
    ( (This)->lpVtbl -> get_Item(This,objectID,pItem) )
    ( (This)->lpVtbl -> get_NewEnum(This,ppEnum) )
    ( (This)->lpVtbl -> get_Count(This,pCount) )
    ( (This)->lpVtbl -> Add(This,item,objectID) )
    ( (This)->lpVtbl -> Remove(This,objectID) )
EXTERN_C const IID IID_IEventProperty;
    typedef struct IEventPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IEventProperty * This,
                                __RPC__deref_out_opt BSTR *propertyName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IEventProperty * This,
                       __RPC__in BSTR propertyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IEventProperty * This,
                                __RPC__out VARIANT *propertyValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IEventProperty * This,
                       __RPC__in VARIANT *propertyValue);
        END_INTERFACE
    } IEventPropertyVtbl;
    interface IEventProperty
    {
        CONST_VTBL struct IEventPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,propertyName) )
    ( (This)->lpVtbl -> put_Name(This,propertyName) )
    ( (This)->lpVtbl -> get_Value(This,propertyValue) )
    ( (This)->lpVtbl -> put_Value(This,propertyValue) )
EXTERN_C const IID IID_IEventControl;
    typedef struct IEventControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEventControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEventControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEventControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IEventControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IEventControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IEventControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEventControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *SetPublisherFilter )(
            __RPC__in IEventControl * This,
                       __RPC__in BSTR methodName,
                               __RPC__in_opt IPublisherFilter *pPublisherFilter);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowInprocActivation )(
            __RPC__in IEventControl * This,
                                __RPC__out BOOL *pfAllowInprocActivation);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowInprocActivation )(
            __RPC__in IEventControl * This,
                       BOOL fAllowInprocActivation);
                               HRESULT ( STDMETHODCALLTYPE *GetSubscriptions )(
            __RPC__in IEventControl * This,
                               __RPC__in_opt BSTR methodName,
                               __RPC__in_opt BSTR optionalCriteria,
                               __RPC__in_opt int *optionalErrorIndex,
                                __RPC__deref_out_opt IEventObjectCollection **ppCollection);
                               HRESULT ( STDMETHODCALLTYPE *SetDefaultQuery )(
            __RPC__in IEventControl * This,
                       __RPC__in BSTR methodName,
                       __RPC__in BSTR criteria,
                                __RPC__out int *errorIndex);
        END_INTERFACE
    } IEventControlVtbl;
    interface IEventControl
    {
        CONST_VTBL struct IEventControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetPublisherFilter(This,methodName,pPublisherFilter) )
    ( (This)->lpVtbl -> get_AllowInprocActivation(This,pfAllowInprocActivation) )
    ( (This)->lpVtbl -> put_AllowInprocActivation(This,fAllowInprocActivation) )
    ( (This)->lpVtbl -> GetSubscriptions(This,methodName,optionalCriteria,optionalErrorIndex,ppCollection) )
    ( (This)->lpVtbl -> SetDefaultQuery(This,methodName,criteria,errorIndex) )
EXTERN_C const IID IID_IMultiInterfaceEventControl;
    typedef struct IMultiInterfaceEventControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMultiInterfaceEventControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMultiInterfaceEventControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMultiInterfaceEventControl * This);
                           HRESULT ( STDMETHODCALLTYPE *SetMultiInterfacePublisherFilter )(
            __RPC__in IMultiInterfaceEventControl * This,
                               __RPC__in_opt IMultiInterfacePublisherFilter *classFilter);
                           HRESULT ( STDMETHODCALLTYPE *GetSubscriptions )(
            __RPC__in IMultiInterfaceEventControl * This,
                       __RPC__in REFIID eventIID,
                               __RPC__in_opt BSTR bstrMethodName,
                               __RPC__in_opt BSTR optionalCriteria,
                               __RPC__in_opt int *optionalErrorIndex,
                                __RPC__deref_out_opt IEventObjectCollection **ppCollection);
                           HRESULT ( STDMETHODCALLTYPE *SetDefaultQuery )(
            __RPC__in IMultiInterfaceEventControl * This,
                       __RPC__in REFIID eventIID,
                       __RPC__in BSTR bstrMethodName,
                       __RPC__in BSTR bstrCriteria,
                                __RPC__out int *errorIndex);
                                    HRESULT ( STDMETHODCALLTYPE *get_AllowInprocActivation )(
            __RPC__in IMultiInterfaceEventControl * This,
                                __RPC__out BOOL *pfAllowInprocActivation);
                                    HRESULT ( STDMETHODCALLTYPE *put_AllowInprocActivation )(
            __RPC__in IMultiInterfaceEventControl * This,
                       BOOL fAllowInprocActivation);
                                    HRESULT ( STDMETHODCALLTYPE *get_FireInParallel )(
            __RPC__in IMultiInterfaceEventControl * This,
                                __RPC__out BOOL *pfFireInParallel);
                                    HRESULT ( STDMETHODCALLTYPE *put_FireInParallel )(
            __RPC__in IMultiInterfaceEventControl * This,
                       BOOL fFireInParallel);
        END_INTERFACE
    } IMultiInterfaceEventControlVtbl;
    interface IMultiInterfaceEventControl
    {
        CONST_VTBL struct IMultiInterfaceEventControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMultiInterfacePublisherFilter(This,classFilter) )
    ( (This)->lpVtbl -> GetSubscriptions(This,eventIID,bstrMethodName,optionalCriteria,optionalErrorIndex,ppCollection) )
    ( (This)->lpVtbl -> SetDefaultQuery(This,eventIID,bstrMethodName,bstrCriteria,errorIndex) )
    ( (This)->lpVtbl -> get_AllowInprocActivation(This,pfAllowInprocActivation) )
    ( (This)->lpVtbl -> put_AllowInprocActivation(This,fAllowInprocActivation) )
    ( (This)->lpVtbl -> get_FireInParallel(This,pfFireInParallel) )
    ( (This)->lpVtbl -> put_FireInParallel(This,fFireInParallel) )
EXTERN_C const IID IID_IDontSupportEventSubscription;
    typedef struct IDontSupportEventSubscriptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDontSupportEventSubscription * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDontSupportEventSubscription * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDontSupportEventSubscription * This);
        END_INTERFACE
    } IDontSupportEventSubscriptionVtbl;
    interface IDontSupportEventSubscription
    {
        CONST_VTBL struct IDontSupportEventSubscriptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID LIBID_DummyEventSystemLib;
EXTERN_C const CLSID CLSID_CEventSystem;
class DECLSPEC_UUID("4E14FBA2-2E22-11D1-9964-00C04FBBB345")
CEventSystem;
EXTERN_C const CLSID CLSID_CEventPublisher;
class DECLSPEC_UUID("ab944620-79c6-11d1-88f9-0080c7d771bf")
CEventPublisher;
EXTERN_C const CLSID CLSID_CEventClass;
class DECLSPEC_UUID("cdbec9c0-7a68-11d1-88f9-0080c7d771bf")
CEventClass;
EXTERN_C const CLSID CLSID_CEventSubscription;
class DECLSPEC_UUID("7542e960-79c7-11d1-88f9-0080c7d771bf")
CEventSubscription;
EXTERN_C const CLSID CLSID_EventObjectChange;
class DECLSPEC_UUID("d0565000-9df4-11d1-a281-00c04fca0aa7")
EventObjectChange;
EXTERN_C const CLSID CLSID_EventObjectChange2;
class DECLSPEC_UUID("BB07BACD-CD56-4e63-A8FF-CBF0355FB9F4")
EventObjectChange2;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_eventsys_0000_0017_v0_0_s_ifspec;
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
