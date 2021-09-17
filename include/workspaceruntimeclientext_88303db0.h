#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWorkspaceClientExt IWorkspaceClientExt;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntimeclientext_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntimeclientext_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWorkspaceClientExt;
    typedef struct IWorkspaceClientExtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceClientExt * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceClientExt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceClientExt * This);
                           HRESULT ( STDMETHODCALLTYPE *GetResourceId )(
            __RPC__in IWorkspaceClientExt * This,
                        __RPC__deref_out_opt BSTR *bstrWorkspaceId);
                           HRESULT ( STDMETHODCALLTYPE *GetResourceDisplayName )(
            __RPC__in IWorkspaceClientExt * This,
                        __RPC__deref_out_opt BSTR *bstrWorkspaceDisplayName);
                           HRESULT ( STDMETHODCALLTYPE *IssueDisconnect )(
            __RPC__in IWorkspaceClientExt * This);
        END_INTERFACE
    } IWorkspaceClientExtVtbl;
    interface IWorkspaceClientExt
    {
        CONST_VTBL struct IWorkspaceClientExtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetResourceId(This,bstrWorkspaceId) )
    ( (This)->lpVtbl -> GetResourceDisplayName(This,bstrWorkspaceDisplayName) )
    ( (This)->lpVtbl -> IssueDisconnect(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntimeclientext_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_workspaceruntimeclientext_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
