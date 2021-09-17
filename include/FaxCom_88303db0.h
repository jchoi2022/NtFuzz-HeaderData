#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFaxTiff IFaxTiff;
typedef interface IFaxServer IFaxServer;
typedef interface IFaxPort IFaxPort;
typedef interface IFaxPorts IFaxPorts;
typedef interface IFaxRoutingMethod IFaxRoutingMethod;
typedef interface IFaxRoutingMethods IFaxRoutingMethods;
typedef interface IFaxStatus IFaxStatus;
typedef interface IFaxDoc IFaxDoc;
typedef interface IFaxJobs IFaxJobs;
typedef interface IFaxJob IFaxJob;
typedef class FaxTiff FaxTiff;
typedef class FaxServer FaxServer;
typedef class FaxPort FaxPort;
typedef class FaxPorts FaxPorts;
typedef class FaxRoutingMethod FaxRoutingMethod;
typedef class FaxRoutingMethods FaxRoutingMethods;
typedef class FaxStatus FaxStatus;
typedef class FaxDoc FaxDoc;
typedef class FaxJobs FaxJobs;
typedef class FaxJob FaxJob;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_faxcom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_faxcom_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFaxTiff;
    typedef struct IFaxTiffVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxTiff * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxTiff * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxTiff * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxTiff * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxTiff * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxTiff * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxTiff * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReceiveTime )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Image )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Image )(
            __RPC__in IFaxTiff * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientName )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderName )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Routing )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallerId )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Csid )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tsid )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientNumber )(
            __RPC__in IFaxTiff * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RawReceiveTime )(
            __RPC__in IFaxTiff * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TiffTagString )(
            __RPC__in IFaxTiff * This,
                       int tagID,
                                __RPC__deref_out_opt BSTR *pVal);
        END_INTERFACE
    } IFaxTiffVtbl;
    interface IFaxTiff
    {
        CONST_VTBL struct IFaxTiffVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ReceiveTime(This,pVal) )
    ( (This)->lpVtbl -> get_Image(This,pVal) )
    ( (This)->lpVtbl -> put_Image(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientName(This,pVal) )
    ( (This)->lpVtbl -> get_SenderName(This,pVal) )
    ( (This)->lpVtbl -> get_Routing(This,pVal) )
    ( (This)->lpVtbl -> get_CallerId(This,pVal) )
    ( (This)->lpVtbl -> get_Csid(This,pVal) )
    ( (This)->lpVtbl -> get_Tsid(This,pVal) )
    ( (This)->lpVtbl -> get_RecipientNumber(This,pVal) )
    ( (This)->lpVtbl -> get_RawReceiveTime(This,pVal) )
    ( (This)->lpVtbl -> get_TiffTagString(This,tagID,pVal) )
EXTERN_C const IID IID_IFaxServer;
    typedef struct IFaxServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxServer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxServer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxServer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxServer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IFaxServer * This,
            __RPC__in BSTR ServerName);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IFaxServer * This);
                               HRESULT ( STDMETHODCALLTYPE *GetPorts )(
            __RPC__in IFaxServer * This,
                                __RPC__out VARIANT *retval);
                               HRESULT ( STDMETHODCALLTYPE *CreateDocument )(
            __RPC__in IFaxServer * This,
            __RPC__in BSTR FileName,
                                __RPC__out VARIANT *retval);
                               HRESULT ( STDMETHODCALLTYPE *GetJobs )(
            __RPC__in IFaxServer * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Retries )(
            __RPC__in IFaxServer * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Retries )(
            __RPC__in IFaxServer * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetryDelay )(
            __RPC__in IFaxServer * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RetryDelay )(
            __RPC__in IFaxServer * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DirtyDays )(
            __RPC__in IFaxServer * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DirtyDays )(
            __RPC__in IFaxServer * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Branding )(
            __RPC__in IFaxServer * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Branding )(
            __RPC__in IFaxServer * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UseDeviceTsid )(
            __RPC__in IFaxServer * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_UseDeviceTsid )(
            __RPC__in IFaxServer * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerCoverpage )(
            __RPC__in IFaxServer * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServerCoverpage )(
            __RPC__in IFaxServer * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PauseServerQueue )(
            __RPC__in IFaxServer * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PauseServerQueue )(
            __RPC__in IFaxServer * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveOutboundFaxes )(
            __RPC__in IFaxServer * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ArchiveOutboundFaxes )(
            __RPC__in IFaxServer * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ArchiveDirectory )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ArchiveDirectory )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerMapiProfile )(
            __RPC__in IFaxServer * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServerMapiProfile )(
            __RPC__in IFaxServer * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateStartHour )(
            __RPC__in IFaxServer * This,
                                __RPC__out short *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateStartHour )(
            __RPC__in IFaxServer * This,
                       short newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateStartMinute )(
            __RPC__in IFaxServer * This,
                                __RPC__out short *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateStartMinute )(
            __RPC__in IFaxServer * This,
                       short newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateEndHour )(
            __RPC__in IFaxServer * This,
                                __RPC__out short *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateEndHour )(
            __RPC__in IFaxServer * This,
                       short newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountRateEndMinute )(
            __RPC__in IFaxServer * This,
                                __RPC__out short *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountRateEndMinute )(
            __RPC__in IFaxServer * This,
                       short newVal);
        END_INTERFACE
    } IFaxServerVtbl;
    interface IFaxServer
    {
        CONST_VTBL struct IFaxServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Connect(This,ServerName) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> GetPorts(This,retval) )
    ( (This)->lpVtbl -> CreateDocument(This,FileName,retval) )
    ( (This)->lpVtbl -> GetJobs(This,retval) )
    ( (This)->lpVtbl -> get_Retries(This,pVal) )
    ( (This)->lpVtbl -> put_Retries(This,newVal) )
    ( (This)->lpVtbl -> get_RetryDelay(This,pVal) )
    ( (This)->lpVtbl -> put_RetryDelay(This,newVal) )
    ( (This)->lpVtbl -> get_DirtyDays(This,pVal) )
    ( (This)->lpVtbl -> put_DirtyDays(This,newVal) )
    ( (This)->lpVtbl -> get_Branding(This,pVal) )
    ( (This)->lpVtbl -> put_Branding(This,newVal) )
    ( (This)->lpVtbl -> get_UseDeviceTsid(This,pVal) )
    ( (This)->lpVtbl -> put_UseDeviceTsid(This,newVal) )
    ( (This)->lpVtbl -> get_ServerCoverpage(This,pVal) )
    ( (This)->lpVtbl -> put_ServerCoverpage(This,newVal) )
    ( (This)->lpVtbl -> get_PauseServerQueue(This,pVal) )
    ( (This)->lpVtbl -> put_PauseServerQueue(This,newVal) )
    ( (This)->lpVtbl -> get_ArchiveOutboundFaxes(This,pVal) )
    ( (This)->lpVtbl -> put_ArchiveOutboundFaxes(This,newVal) )
    ( (This)->lpVtbl -> get_ArchiveDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_ArchiveDirectory(This,newVal) )
    ( (This)->lpVtbl -> get_ServerMapiProfile(This,pVal) )
    ( (This)->lpVtbl -> put_ServerMapiProfile(This,newVal) )
    ( (This)->lpVtbl -> get_DiscountRateStartHour(This,pVal) )
    ( (This)->lpVtbl -> put_DiscountRateStartHour(This,newVal) )
    ( (This)->lpVtbl -> get_DiscountRateStartMinute(This,pVal) )
    ( (This)->lpVtbl -> put_DiscountRateStartMinute(This,newVal) )
    ( (This)->lpVtbl -> get_DiscountRateEndHour(This,pVal) )
    ( (This)->lpVtbl -> put_DiscountRateEndHour(This,newVal) )
    ( (This)->lpVtbl -> get_DiscountRateEndMinute(This,pVal) )
    ( (This)->lpVtbl -> put_DiscountRateEndMinute(This,newVal) )
EXTERN_C const IID IID_IFaxPort;
    typedef struct IFaxPortVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxPort * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxPort * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxPort * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxPort * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxPort * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxPort * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxPort * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFaxPort * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxPort * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rings )(
            __RPC__in IFaxPort * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rings )(
            __RPC__in IFaxPort * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Csid )(
            __RPC__in IFaxPort * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Csid )(
            __RPC__in IFaxPort * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tsid )(
            __RPC__in IFaxPort * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Tsid )(
            __RPC__in IFaxPort * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Send )(
            __RPC__in IFaxPort * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Send )(
            __RPC__in IFaxPort * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Receive )(
            __RPC__in IFaxPort * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Receive )(
            __RPC__in IFaxPort * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IFaxPort * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in IFaxPort * This,
                       long newVal);
                               HRESULT ( STDMETHODCALLTYPE *GetRoutingMethods )(
            __RPC__in IFaxPort * This,
                                __RPC__out VARIANT *retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_CanModify )(
            __RPC__in IFaxPort * This,
                                __RPC__out BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IFaxPort * This,
                                __RPC__out VARIANT *retval);
        END_INTERFACE
    } IFaxPortVtbl;
    interface IFaxPort
    {
        CONST_VTBL struct IFaxPortVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_DeviceId(This,pVal) )
    ( (This)->lpVtbl -> get_Rings(This,pVal) )
    ( (This)->lpVtbl -> put_Rings(This,newVal) )
    ( (This)->lpVtbl -> get_Csid(This,pVal) )
    ( (This)->lpVtbl -> put_Csid(This,newVal) )
    ( (This)->lpVtbl -> get_Tsid(This,pVal) )
    ( (This)->lpVtbl -> put_Tsid(This,newVal) )
    ( (This)->lpVtbl -> get_Send(This,pVal) )
    ( (This)->lpVtbl -> put_Send(This,newVal) )
    ( (This)->lpVtbl -> get_Receive(This,pVal) )
    ( (This)->lpVtbl -> put_Receive(This,newVal) )
    ( (This)->lpVtbl -> get_Priority(This,pVal) )
    ( (This)->lpVtbl -> put_Priority(This,newVal) )
    ( (This)->lpVtbl -> GetRoutingMethods(This,retval) )
    ( (This)->lpVtbl -> get_CanModify(This,pVal) )
    ( (This)->lpVtbl -> GetStatus(This,retval) )
EXTERN_C const IID IID_IFaxPorts;
    typedef struct IFaxPortsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxPorts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxPorts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxPorts * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxPorts * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxPorts * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxPorts * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxPorts * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxPorts * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxPorts * This,
            long Index,
                                __RPC__out VARIANT *pVal);
        END_INTERFACE
    } IFaxPortsVtbl;
    interface IFaxPorts
    {
        CONST_VTBL struct IFaxPortsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) )
EXTERN_C const IID IID_IFaxRoutingMethod;
    typedef struct IFaxRoutingMethodVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxRoutingMethod * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxRoutingMethod * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxRoutingMethod * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxRoutingMethod * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxRoutingMethod * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxRoutingMethod * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxRoutingMethod * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enable )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enable )(
            __RPC__in IFaxRoutingMethod * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FunctionName )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ImageName )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtensionName )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RoutingData )(
            __RPC__in IFaxRoutingMethod * This,
                                __RPC__deref_out_opt BSTR *pVal);
        END_INTERFACE
    } IFaxRoutingMethodVtbl;
    interface IFaxRoutingMethod
    {
        CONST_VTBL struct IFaxRoutingMethodVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DeviceId(This,pVal) )
    ( (This)->lpVtbl -> get_Enable(This,pVal) )
    ( (This)->lpVtbl -> put_Enable(This,newVal) )
    ( (This)->lpVtbl -> get_DeviceName(This,pVal) )
    ( (This)->lpVtbl -> get_Guid(This,pVal) )
    ( (This)->lpVtbl -> get_FunctionName(This,pVal) )
    ( (This)->lpVtbl -> get_ImageName(This,pVal) )
    ( (This)->lpVtbl -> get_FriendlyName(This,pVal) )
    ( (This)->lpVtbl -> get_ExtensionName(This,pVal) )
    ( (This)->lpVtbl -> get_RoutingData(This,pVal) )
EXTERN_C const IID IID_IFaxRoutingMethods;
    typedef struct IFaxRoutingMethodsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxRoutingMethods * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxRoutingMethods * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxRoutingMethods * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxRoutingMethods * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxRoutingMethods * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxRoutingMethods * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxRoutingMethods * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxRoutingMethods * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxRoutingMethods * This,
                       long Index,
                                __RPC__out VARIANT *pVal);
        END_INTERFACE
    } IFaxRoutingMethodsVtbl;
    interface IFaxRoutingMethods
    {
        CONST_VTBL struct IFaxRoutingMethodsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) )
EXTERN_C const IID IID_IFaxStatus;
    typedef struct IFaxStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxStatus * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxStatus * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxStatus * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxStatus * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallerId )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Csid )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPage )(
            __RPC__in IFaxStatus * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in IFaxStatus * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceName )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentName )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Send )(
            __RPC__in IFaxStatus * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Receive )(
            __RPC__in IFaxStatus * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Address )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RoutingString )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderName )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientName )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DocumentSize )(
            __RPC__in IFaxStatus * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
            __RPC__in IFaxStatus * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tsid )(
            __RPC__in IFaxStatus * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in IFaxStatus * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubmittedTime )(
            __RPC__in IFaxStatus * This,
                                __RPC__out DATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ElapsedTime )(
            __RPC__in IFaxStatus * This,
                                __RPC__out DATE *pVal);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxStatus * This);
        END_INTERFACE
    } IFaxStatusVtbl;
    interface IFaxStatus
    {
        CONST_VTBL struct IFaxStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CallerId(This,pVal) )
    ( (This)->lpVtbl -> get_Csid(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentPage(This,pVal) )
    ( (This)->lpVtbl -> get_DeviceId(This,pVal) )
    ( (This)->lpVtbl -> get_DeviceName(This,pVal) )
    ( (This)->lpVtbl -> get_DocumentName(This,pVal) )
    ( (This)->lpVtbl -> get_Send(This,pVal) )
    ( (This)->lpVtbl -> get_Receive(This,pVal) )
    ( (This)->lpVtbl -> get_Address(This,pVal) )
    ( (This)->lpVtbl -> get_RoutingString(This,pVal) )
    ( (This)->lpVtbl -> get_SenderName(This,pVal) )
    ( (This)->lpVtbl -> get_RecipientName(This,pVal) )
    ( (This)->lpVtbl -> get_DocumentSize(This,pVal) )
    ( (This)->lpVtbl -> get_Description(This,pVal) )
    ( (This)->lpVtbl -> get_PageCount(This,pVal) )
    ( (This)->lpVtbl -> get_Tsid(This,pVal) )
    ( (This)->lpVtbl -> get_StartTime(This,pVal) )
    ( (This)->lpVtbl -> get_SubmittedTime(This,pVal) )
    ( (This)->lpVtbl -> get_ElapsedTime(This,pVal) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID IID_IFaxDoc;
    typedef struct IFaxDocVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxDoc * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxDoc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxDoc * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxDoc * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxDoc * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxDoc * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxDoc * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoverpageName )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CoverpageName )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SendCoverpage )(
            __RPC__in IFaxDoc * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SendCoverpage )(
            __RPC__in IFaxDoc * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ServerCoverpage )(
            __RPC__in IFaxDoc * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ServerCoverpage )(
            __RPC__in IFaxDoc * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountSend )(
            __RPC__in IFaxDoc * This,
                                __RPC__out BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiscountSend )(
            __RPC__in IFaxDoc * This,
                       BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientName )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientName )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientCompany )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientCompany )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientAddress )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientAddress )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientCity )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientCity )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientState )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientState )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientZip )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientZip )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientCountry )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientCountry )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientTitle )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientTitle )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientDepartment )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientDepartment )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientOffice )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientOffice )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientHomePhone )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientHomePhone )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientOfficePhone )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RecipientOfficePhone )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderName )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderName )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderCompany )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderCompany )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderAddress )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderAddress )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderTitle )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderTitle )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderDepartment )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderDepartment )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderOffice )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderOffice )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderHomePhone )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderHomePhone )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderOfficePhone )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderOfficePhone )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoverpageNote )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CoverpageNote )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CoverpageSubject )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CoverpageSubject )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tsid )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Tsid )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BillingCode )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BillingCode )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_EmailAddress )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EmailAddress )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                               HRESULT ( STDMETHODCALLTYPE *Send )(
            __RPC__in IFaxDoc * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FaxNumber )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FaxNumber )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
                                           HRESULT ( STDMETHODCALLTYPE *putref_ConnectionObject )(
            __RPC__in IFaxDoc * This,
                       __RPC__in_opt IDispatch *newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CallHandle )(
            __RPC__in IFaxDoc * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CallHandle )(
            __RPC__in IFaxDoc * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderFax )(
            __RPC__in IFaxDoc * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SenderFax )(
            __RPC__in IFaxDoc * This,
                       __RPC__in BSTR newVal);
        END_INTERFACE
    } IFaxDocVtbl;
    interface IFaxDoc
    {
        CONST_VTBL struct IFaxDocVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_FileName(This,pVal) )
    ( (This)->lpVtbl -> put_FileName(This,newVal) )
    ( (This)->lpVtbl -> get_CoverpageName(This,pVal) )
    ( (This)->lpVtbl -> put_CoverpageName(This,newVal) )
    ( (This)->lpVtbl -> get_SendCoverpage(This,pVal) )
    ( (This)->lpVtbl -> put_SendCoverpage(This,newVal) )
    ( (This)->lpVtbl -> get_ServerCoverpage(This,pVal) )
    ( (This)->lpVtbl -> put_ServerCoverpage(This,newVal) )
    ( (This)->lpVtbl -> get_DiscountSend(This,pVal) )
    ( (This)->lpVtbl -> put_DiscountSend(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientName(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientName(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientCompany(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientCompany(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientAddress(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientAddress(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientCity(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientCity(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientState(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientState(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientZip(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientZip(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientCountry(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientCountry(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientTitle(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientTitle(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientDepartment(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientDepartment(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientOffice(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientOffice(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientHomePhone(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientHomePhone(This,newVal) )
    ( (This)->lpVtbl -> get_RecipientOfficePhone(This,pVal) )
    ( (This)->lpVtbl -> put_RecipientOfficePhone(This,newVal) )
    ( (This)->lpVtbl -> get_SenderName(This,pVal) )
    ( (This)->lpVtbl -> put_SenderName(This,newVal) )
    ( (This)->lpVtbl -> get_SenderCompany(This,pVal) )
    ( (This)->lpVtbl -> put_SenderCompany(This,newVal) )
    ( (This)->lpVtbl -> get_SenderAddress(This,pVal) )
    ( (This)->lpVtbl -> put_SenderAddress(This,newVal) )
    ( (This)->lpVtbl -> get_SenderTitle(This,pVal) )
    ( (This)->lpVtbl -> put_SenderTitle(This,newVal) )
    ( (This)->lpVtbl -> get_SenderDepartment(This,pVal) )
    ( (This)->lpVtbl -> put_SenderDepartment(This,newVal) )
    ( (This)->lpVtbl -> get_SenderOffice(This,pVal) )
    ( (This)->lpVtbl -> put_SenderOffice(This,newVal) )
    ( (This)->lpVtbl -> get_SenderHomePhone(This,pVal) )
    ( (This)->lpVtbl -> put_SenderHomePhone(This,newVal) )
    ( (This)->lpVtbl -> get_SenderOfficePhone(This,pVal) )
    ( (This)->lpVtbl -> put_SenderOfficePhone(This,newVal) )
    ( (This)->lpVtbl -> get_CoverpageNote(This,pVal) )
    ( (This)->lpVtbl -> put_CoverpageNote(This,newVal) )
    ( (This)->lpVtbl -> get_CoverpageSubject(This,pVal) )
    ( (This)->lpVtbl -> put_CoverpageSubject(This,newVal) )
    ( (This)->lpVtbl -> get_Tsid(This,pVal) )
    ( (This)->lpVtbl -> put_Tsid(This,newVal) )
    ( (This)->lpVtbl -> get_BillingCode(This,pVal) )
    ( (This)->lpVtbl -> put_BillingCode(This,newVal) )
    ( (This)->lpVtbl -> get_EmailAddress(This,pVal) )
    ( (This)->lpVtbl -> put_EmailAddress(This,newVal) )
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) )
    ( (This)->lpVtbl -> put_DisplayName(This,newVal) )
    ( (This)->lpVtbl -> Send(This,pVal) )
    ( (This)->lpVtbl -> get_FaxNumber(This,pVal) )
    ( (This)->lpVtbl -> put_FaxNumber(This,newVal) )
    ( (This)->lpVtbl -> putref_ConnectionObject(This,newVal) )
    ( (This)->lpVtbl -> get_CallHandle(This,pVal) )
    ( (This)->lpVtbl -> put_CallHandle(This,newVal) )
    ( (This)->lpVtbl -> get_SenderFax(This,pVal) )
    ( (This)->lpVtbl -> put_SenderFax(This,newVal) )
EXTERN_C const IID IID_IFaxJobs;
    typedef struct IFaxJobsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxJobs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxJobs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxJobs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxJobs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxJobs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxJobs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxJobs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFaxJobs * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFaxJobs * This,
            long Index,
                                __RPC__out VARIANT *pVal);
        END_INTERFACE
    } IFaxJobsVtbl;
    interface IFaxJobs
    {
        CONST_VTBL struct IFaxJobsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) )
EXTERN_C const IID IID_IFaxJob;
    typedef struct IFaxJobVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFaxJob * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFaxJob * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFaxJob * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFaxJob * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFaxJob * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFaxJob * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFaxJob * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_JobId )(
            __RPC__in IFaxJob * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFaxJob * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_QueueStatus )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceStatus )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PageCount )(
            __RPC__in IFaxJob * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FaxNumber )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecipientName )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Tsid )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderName )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderCompany )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SenderDept )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BillingCode )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IFaxJob * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiscountSend )(
            __RPC__in IFaxJob * This,
                                __RPC__out BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IFaxJob * This,
            long Command);
                               HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IFaxJob * This);
        END_INTERFACE
    } IFaxJobVtbl;
    interface IFaxJob
    {
        CONST_VTBL struct IFaxJobVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_JobId(This,pVal) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> get_UserName(This,pVal) )
    ( (This)->lpVtbl -> get_QueueStatus(This,pVal) )
    ( (This)->lpVtbl -> get_DeviceStatus(This,pVal) )
    ( (This)->lpVtbl -> get_PageCount(This,pVal) )
    ( (This)->lpVtbl -> get_FaxNumber(This,pVal) )
    ( (This)->lpVtbl -> get_RecipientName(This,pVal) )
    ( (This)->lpVtbl -> get_Tsid(This,pVal) )
    ( (This)->lpVtbl -> get_SenderName(This,pVal) )
    ( (This)->lpVtbl -> get_SenderCompany(This,pVal) )
    ( (This)->lpVtbl -> get_SenderDept(This,pVal) )
    ( (This)->lpVtbl -> get_BillingCode(This,pVal) )
    ( (This)->lpVtbl -> get_DisplayName(This,pVal) )
    ( (This)->lpVtbl -> get_DiscountSend(This,pVal) )
    ( (This)->lpVtbl -> SetStatus(This,Command) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID LIBID_FAXCOMLib;
EXTERN_C const CLSID CLSID_FaxTiff;
class DECLSPEC_UUID("87099231-C7AF-11D0-B225-00C04FB6C2F5")
FaxTiff;
EXTERN_C const CLSID CLSID_FaxServer;
class DECLSPEC_UUID("D73733C8-CC80-11D0-B225-00C04FB6C2F5")
FaxServer;
EXTERN_C const CLSID CLSID_FaxPort;
class DECLSPEC_UUID("D73733CD-CC80-11D0-B225-00C04FB6C2F5")
FaxPort;
EXTERN_C const CLSID CLSID_FaxPorts;
class DECLSPEC_UUID("D73733D6-CC80-11D0-B225-00C04FB6C2F5")
FaxPorts;
EXTERN_C const CLSID CLSID_FaxRoutingMethod;
class DECLSPEC_UUID("2199F5F4-CEFC-11D0-A341-0000F800E68D")
FaxRoutingMethod;
EXTERN_C const CLSID CLSID_FaxRoutingMethods;
class DECLSPEC_UUID("2199F5F6-CEFC-11D0-A341-0000F800E68D")
FaxRoutingMethods;
EXTERN_C const CLSID CLSID_FaxStatus;
class DECLSPEC_UUID("8B97E606-D054-11D0-B226-00C04FB6C2F5")
FaxStatus;
EXTERN_C const CLSID CLSID_FaxDoc;
class DECLSPEC_UUID("FA21F4C6-5C4C-11D1-83CF-00C04FB6E984")
FaxDoc;
EXTERN_C const CLSID CLSID_FaxJobs;
class DECLSPEC_UUID("55DABFD4-5C9E-11D1-B791-000000000000")
FaxJobs;
EXTERN_C const CLSID CLSID_FaxJob;
class DECLSPEC_UUID("55DABFD6-5C9E-11D1-B791-000000000000")
FaxJob;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_faxcom_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_faxcom_0000_0011_v0_0_s_ifspec;
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
