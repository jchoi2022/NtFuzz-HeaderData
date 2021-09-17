#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBITSExtensionSetup IBITSExtensionSetup;
typedef interface IBITSExtensionSetupFactory IBITSExtensionSetupFactory;
typedef class BITSExtensionSetupFactory BITSExtensionSetupFactory;
#include "oaidl.h"
#include "ocidl.h"
#include "mstask.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bitscfg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bitscfg_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBITSExtensionSetup;
    typedef struct IBITSExtensionSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBITSExtensionSetup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBITSExtensionSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBITSExtensionSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBITSExtensionSetup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBITSExtensionSetup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBITSExtensionSetup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBITSExtensionSetup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EnableBITSUploads )(
            __RPC__in IBITSExtensionSetup * This);
                   HRESULT ( STDMETHODCALLTYPE *DisableBITSUploads )(
            __RPC__in IBITSExtensionSetup * This);
                   HRESULT ( STDMETHODCALLTYPE *GetCleanupTaskName )(
            __RPC__in IBITSExtensionSetup * This,
                                __RPC__deref_out_opt BSTR *pTaskName);
                   HRESULT ( STDMETHODCALLTYPE *GetCleanupTask )(
            __RPC__in IBITSExtensionSetup * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppUnk);
        END_INTERFACE
    } IBITSExtensionSetupVtbl;
    interface IBITSExtensionSetup
    {
        CONST_VTBL struct IBITSExtensionSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EnableBITSUploads(This) )
    ( (This)->lpVtbl -> DisableBITSUploads(This) )
    ( (This)->lpVtbl -> GetCleanupTaskName(This,pTaskName) )
    ( (This)->lpVtbl -> GetCleanupTask(This,riid,ppUnk) )
EXTERN_C const IID IID_IBITSExtensionSetupFactory;
    typedef struct IBITSExtensionSetupFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBITSExtensionSetupFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBITSExtensionSetupFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBITSExtensionSetupFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBITSExtensionSetupFactory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBITSExtensionSetupFactory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBITSExtensionSetupFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBITSExtensionSetupFactory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IBITSExtensionSetupFactory * This,
                       __RPC__in BSTR Path,
                                __RPC__deref_out_opt IBITSExtensionSetup **ppExtensionSetup);
        END_INTERFACE
    } IBITSExtensionSetupFactoryVtbl;
    interface IBITSExtensionSetupFactory
    {
        CONST_VTBL struct IBITSExtensionSetupFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetObject(This,Path,ppExtensionSetup) )
EXTERN_C const IID LIBID_BITSExtensionSetup;
EXTERN_C const CLSID CLSID_BITSExtensionSetupFactory;
class DECLSPEC_UUID("efbbab68-7286-4783-94bf-9461d8b7e7e9")
BITSExtensionSetupFactory;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bitscfg_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bitscfg_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
