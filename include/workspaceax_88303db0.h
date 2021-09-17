#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWorkspaceResTypeRegistry IWorkspaceResTypeRegistry;
#include "wtypes.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_workspaceax_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_workspaceax_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWorkspaceResTypeRegistry;
    typedef struct IWorkspaceResTypeRegistryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceResTypeRegistry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceResTypeRegistry * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWorkspaceResTypeRegistry * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *AddResourceType )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       VARIANT_BOOL fMachineWide,
                       __RPC__in BSTR bstrFileExtension,
                       __RPC__in BSTR bstrLauncher);
                               HRESULT ( STDMETHODCALLTYPE *DeleteResourceType )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       VARIANT_BOOL fMachineWide,
                       __RPC__in BSTR bstrFileExtension);
                               HRESULT ( STDMETHODCALLTYPE *GetRegisteredFileExtensions )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       VARIANT_BOOL fMachineWide,
                                __RPC__deref_out_opt SAFEARRAY * *psaFileExtensions);
                               HRESULT ( STDMETHODCALLTYPE *GetResourceTypeInfo )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       VARIANT_BOOL fMachineWide,
                       __RPC__in BSTR bstrFileExtension,
                                __RPC__deref_out_opt BSTR *pbstrLauncher);
                               HRESULT ( STDMETHODCALLTYPE *ModifyResourceType )(
            __RPC__in IWorkspaceResTypeRegistry * This,
                       VARIANT_BOOL fMachineWide,
                       __RPC__in BSTR bstrFileExtension,
                       __RPC__in BSTR bstrLauncher);
        END_INTERFACE
    } IWorkspaceResTypeRegistryVtbl;
    interface IWorkspaceResTypeRegistry
    {
        CONST_VTBL struct IWorkspaceResTypeRegistryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AddResourceType(This,fMachineWide,bstrFileExtension,bstrLauncher) )
    ( (This)->lpVtbl -> DeleteResourceType(This,fMachineWide,bstrFileExtension) )
    ( (This)->lpVtbl -> GetRegisteredFileExtensions(This,fMachineWide,psaFileExtensions) )
    ( (This)->lpVtbl -> GetResourceTypeInfo(This,fMachineWide,bstrFileExtension,pbstrLauncher) )
    ( (This)->lpVtbl -> ModifyResourceType(This,fMachineWide,bstrFileExtension,bstrLauncher) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_workspaceax_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_workspaceax_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
