#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITTerminalControl ITTerminalControl;
typedef interface ITPluggableTerminalInitialization ITPluggableTerminalInitialization;
typedef interface ITTerminalManager ITTerminalManager;
typedef interface ITTerminalManager2 ITTerminalManager2;
typedef interface ITPluggableTerminalClassRegistration ITPluggableTerminalClassRegistration;
typedef interface ITPluggableTerminalSuperclassRegistration ITPluggableTerminalSuperclassRegistration;
typedef class TerminalManager TerminalManager;
typedef class PluggableSuperclassRegistration PluggableSuperclassRegistration;
typedef class PluggableTerminalRegistration PluggableTerminalRegistration;
#include "Objsafe.h"
#include "tapi3if.h"
#include "tapi3ds.h"
#include "msp.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_termmgr_0000_0000_0001
    {
        TMGR_TD_CAPTURE = 1,
        TMGR_TD_RENDER = 2,
        TMGR_TD_BOTH = 3
    } TMGR_DIRECTION;
extern RPC_IF_HANDLE __MIDL_itf_termmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_termmgr_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITTerminalControl;
    typedef struct ITTerminalControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTerminalControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTerminalControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTerminalControl * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_AddressHandle )(
            __RPC__in ITTerminalControl * This,
                        __RPC__deref_out_opt MSP_HANDLE *phtAddress);
                               HRESULT ( STDMETHODCALLTYPE *ConnectTerminal )(
            __RPC__in ITTerminalControl * This,
                       __RPC__in_opt IGraphBuilder *pGraph,
                       DWORD dwTerminalDirection,
                            __RPC__inout DWORD *pdwNumPins,
                        __RPC__deref_out_opt IPin **ppPins);
                               HRESULT ( STDMETHODCALLTYPE *CompleteConnectTerminal )(
            __RPC__in ITTerminalControl * This);
                               HRESULT ( STDMETHODCALLTYPE *DisconnectTerminal )(
            __RPC__in ITTerminalControl * This,
                       __RPC__in_opt IGraphBuilder *pGraph,
                       DWORD dwReserved);
                               HRESULT ( STDMETHODCALLTYPE *RunRenderFilter )(
            __RPC__in ITTerminalControl * This);
                               HRESULT ( STDMETHODCALLTYPE *StopRenderFilter )(
            __RPC__in ITTerminalControl * This);
        END_INTERFACE
    } ITTerminalControlVtbl;
    interface ITTerminalControl
    {
        CONST_VTBL struct ITTerminalControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AddressHandle(This,phtAddress) )
    ( (This)->lpVtbl -> ConnectTerminal(This,pGraph,dwTerminalDirection,pdwNumPins,ppPins) )
    ( (This)->lpVtbl -> CompleteConnectTerminal(This) )
    ( (This)->lpVtbl -> DisconnectTerminal(This,pGraph,dwReserved) )
    ( (This)->lpVtbl -> RunRenderFilter(This) )
    ( (This)->lpVtbl -> StopRenderFilter(This) )
EXTERN_C const IID IID_ITPluggableTerminalInitialization;
    typedef struct ITPluggableTerminalInitializationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalInitialization * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalInitialization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalInitialization * This);
                               HRESULT ( STDMETHODCALLTYPE *InitializeDynamic )(
            __RPC__in ITPluggableTerminalInitialization * This,
                       IID iidTerminalClass,
                       DWORD dwMediaType,
                       TERMINAL_DIRECTION Direction,
                       __RPC__in MSP_HANDLE htAddress);
        END_INTERFACE
    } ITPluggableTerminalInitializationVtbl;
    interface ITPluggableTerminalInitialization
    {
        CONST_VTBL struct ITPluggableTerminalInitializationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeDynamic(This,iidTerminalClass,dwMediaType,Direction,htAddress) )
EXTERN_C const IID IID_ITTerminalManager;
    typedef struct ITTerminalManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTerminalManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTerminalManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTerminalManager * This);
                               HRESULT ( STDMETHODCALLTYPE *GetDynamicTerminalClasses )(
            __RPC__in ITTerminalManager * This,
                       DWORD dwMediaTypes,
                            __RPC__inout DWORD *pdwNumClasses,
                        __RPC__out IID *pTerminalClasses);
                               HRESULT ( STDMETHODCALLTYPE *CreateDynamicTerminal )(
            __RPC__in ITTerminalManager * This,
                       __RPC__in_opt IUnknown *pOuterUnknown,
                       IID iidTerminalClass,
                       DWORD dwMediaType,
                       TERMINAL_DIRECTION Direction,
                       __RPC__in MSP_HANDLE htAddress,
                        __RPC__deref_out_opt ITTerminal **ppTerminal);
        END_INTERFACE
    } ITTerminalManagerVtbl;
    interface ITTerminalManager
    {
        CONST_VTBL struct ITTerminalManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDynamicTerminalClasses(This,dwMediaTypes,pdwNumClasses,pTerminalClasses) )
    ( (This)->lpVtbl -> CreateDynamicTerminal(This,pOuterUnknown,iidTerminalClass,dwMediaType,Direction,htAddress,ppTerminal) )
EXTERN_C const IID IID_ITTerminalManager2;
    typedef struct ITTerminalManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITTerminalManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITTerminalManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITTerminalManager2 * This);
                               HRESULT ( STDMETHODCALLTYPE *GetDynamicTerminalClasses )(
            __RPC__in ITTerminalManager2 * This,
                       DWORD dwMediaTypes,
                            __RPC__inout DWORD *pdwNumClasses,
                        __RPC__out IID *pTerminalClasses);
                               HRESULT ( STDMETHODCALLTYPE *CreateDynamicTerminal )(
            __RPC__in ITTerminalManager2 * This,
                       __RPC__in_opt IUnknown *pOuterUnknown,
                       IID iidTerminalClass,
                       DWORD dwMediaType,
                       TERMINAL_DIRECTION Direction,
                       __RPC__in MSP_HANDLE htAddress,
                        __RPC__deref_out_opt ITTerminal **ppTerminal);
                               HRESULT ( STDMETHODCALLTYPE *GetPluggableSuperclasses )(
            __RPC__in ITTerminalManager2 * This,
                            __RPC__inout DWORD *pdwNumSuperclasses,
                        __RPC__out IID *pSuperclasses);
                               HRESULT ( STDMETHODCALLTYPE *GetPluggableTerminalClasses )(
            __RPC__in ITTerminalManager2 * This,
                       IID iidSuperclass,
                       DWORD dwMediaTypes,
                            __RPC__inout DWORD *pdwNumClasses,
                        __RPC__out IID *pTerminalClasses);
        END_INTERFACE
    } ITTerminalManager2Vtbl;
    interface ITTerminalManager2
    {
        CONST_VTBL struct ITTerminalManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDynamicTerminalClasses(This,dwMediaTypes,pdwNumClasses,pTerminalClasses) )
    ( (This)->lpVtbl -> CreateDynamicTerminal(This,pOuterUnknown,iidTerminalClass,dwMediaType,Direction,htAddress,ppTerminal) )
    ( (This)->lpVtbl -> GetPluggableSuperclasses(This,pdwNumSuperclasses,pSuperclasses) )
    ( (This)->lpVtbl -> GetPluggableTerminalClasses(This,iidSuperclass,dwMediaTypes,pdwNumClasses,pTerminalClasses) )
EXTERN_C const IID IID_ITPluggableTerminalClassRegistration;
    typedef struct ITPluggableTerminalClassRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalClassRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalClassRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPluggableTerminalClassRegistration * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Company )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                                __RPC__deref_out_opt BSTR *pCompany);
                                        HRESULT ( STDMETHODCALLTYPE *put_Company )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrCompany);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                                __RPC__deref_out_opt BSTR *pVersion);
                                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_TerminalClass )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                                __RPC__deref_out_opt BSTR *pTerminalClass);
                                        HRESULT ( STDMETHODCALLTYPE *put_TerminalClass )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrTerminalClass);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                                __RPC__deref_out_opt BSTR *pCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_CLSID )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                                __RPC__out TMGR_DIRECTION *pDirection);
                                        HRESULT ( STDMETHODCALLTYPE *put_Direction )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       TMGR_DIRECTION nDirection);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaTypes )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                                __RPC__out long *pMediaTypes);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaTypes )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       long nMediaTypes);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrSuperclass);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrSuperclass);
                               HRESULT ( STDMETHODCALLTYPE *GetTerminalClassInfo )(
            __RPC__in ITPluggableTerminalClassRegistration * This,
                       __RPC__in BSTR bstrSuperclass);
        END_INTERFACE
    } ITPluggableTerminalClassRegistrationVtbl;
    interface ITPluggableTerminalClassRegistration
    {
        CONST_VTBL struct ITPluggableTerminalClassRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Company(This,pCompany) )
    ( (This)->lpVtbl -> put_Company(This,bstrCompany) )
    ( (This)->lpVtbl -> get_Version(This,pVersion) )
    ( (This)->lpVtbl -> put_Version(This,bstrVersion) )
    ( (This)->lpVtbl -> get_TerminalClass(This,pTerminalClass) )
    ( (This)->lpVtbl -> put_TerminalClass(This,bstrTerminalClass) )
    ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
    ( (This)->lpVtbl -> put_CLSID(This,bstrCLSID) )
    ( (This)->lpVtbl -> get_Direction(This,pDirection) )
    ( (This)->lpVtbl -> put_Direction(This,nDirection) )
    ( (This)->lpVtbl -> get_MediaTypes(This,pMediaTypes) )
    ( (This)->lpVtbl -> put_MediaTypes(This,nMediaTypes) )
    ( (This)->lpVtbl -> Add(This,bstrSuperclass) )
    ( (This)->lpVtbl -> Delete(This,bstrSuperclass) )
    ( (This)->lpVtbl -> GetTerminalClassInfo(This,bstrSuperclass) )
EXTERN_C const IID IID_ITPluggableTerminalSuperclassRegistration;
    typedef struct ITPluggableTerminalSuperclassRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITPluggableTerminalSuperclassRegistration * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                       __RPC__in BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                                __RPC__deref_out_opt BSTR *pCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_CLSID )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                       __RPC__in BSTR bstrCLSID);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This);
                               HRESULT ( STDMETHODCALLTYPE *GetTerminalSuperclassInfo )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_TerminalClasses )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                                __RPC__out VARIANT *pTerminals);
                                       HRESULT ( STDMETHODCALLTYPE *EnumerateTerminalClasses )(
            __RPC__in ITPluggableTerminalSuperclassRegistration * This,
                                __RPC__deref_out_opt IEnumTerminalClass **ppTerminals);
        END_INTERFACE
    } ITPluggableTerminalSuperclassRegistrationVtbl;
    interface ITPluggableTerminalSuperclassRegistration
    {
        CONST_VTBL struct ITPluggableTerminalSuperclassRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_CLSID(This,pCLSID) )
    ( (This)->lpVtbl -> put_CLSID(This,bstrCLSID) )
    ( (This)->lpVtbl -> Add(This) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> GetTerminalSuperclassInfo(This) )
    ( (This)->lpVtbl -> get_TerminalClasses(This,pTerminals) )
    ( (This)->lpVtbl -> EnumerateTerminalClasses(This,ppTerminals) )
EXTERN_C const IID LIBID_TERMMGRLib;
EXTERN_C const CLSID CLSID_TerminalManager;
class DECLSPEC_UUID("7170F2E0-9BE3-11D0-A009-00AA00B605A4")
TerminalManager;
EXTERN_C const CLSID CLSID_PluggableSuperclassRegistration;
class DECLSPEC_UUID("BB918E32-2A5C-4986-AB40-1686A034390A")
PluggableSuperclassRegistration;
EXTERN_C const CLSID CLSID_PluggableTerminalRegistration;
class DECLSPEC_UUID("45234E3E-61CC-4311-A3AB-248082554482")
PluggableTerminalRegistration;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_termmgr_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_termmgr_0000_0007_v0_0_s_ifspec;
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
