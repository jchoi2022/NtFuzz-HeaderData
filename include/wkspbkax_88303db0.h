#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWorkspaceBrokerAx IWorkspaceBrokerAx;
typedef interface IWorkspaceBrokerAx2 IWorkspaceBrokerAx2;
typedef interface _IWorkspaceBrokerAxEvents _IWorkspaceBrokerAxEvents;
typedef class WorkspaceBrokerAx WorkspaceBrokerAx;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWorkspaceBrokerAx;
    typedef struct IWorkspaceBrokerAxVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceBrokerAx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceBrokerAx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWorkspaceBrokerAx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWorkspaceBrokerAx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWorkspaceBrokerAx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *SetupWorkspace )(
            __RPC__in IWorkspaceBrokerAx * This);
                               HRESULT ( STDMETHODCALLTYPE *InitializeWorkspaceConfiguration )(
            __RPC__in IWorkspaceBrokerAx * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspacesCount )(
            __RPC__in IWorkspaceBrokerAx * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceName )(
            __RPC__in IWorkspaceBrokerAx * This,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVl);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceId )(
            __RPC__in IWorkspaceBrokerAx * This,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFoldersCount )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderName )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderContentsCount )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderImageData )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderItemName )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderItemFileExtension )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsWorkspaceFolderItemRemoteDesktop )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__out VARIANT_BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *LaunchWorkspaceItem )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       __RPC__in BSTR WkspItemName,
                       __RPC__in BSTR ActivationContext);
                               HRESULT ( STDMETHODCALLTYPE *attachEvent )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR eventName,
                       __RPC__in_opt IDispatch *callback);
                               HRESULT ( STDMETHODCALLTYPE *detachEvent )(
            __RPC__in IWorkspaceBrokerAx * This,
                       __RPC__in BSTR eventName,
                       __RPC__in_opt IDispatch *callback);
        END_INTERFACE
    } IWorkspaceBrokerAxVtbl;
    interface IWorkspaceBrokerAx
    {
        CONST_VTBL struct IWorkspaceBrokerAxVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetupWorkspace(This) )
    ( (This)->lpVtbl -> InitializeWorkspaceConfiguration(This) )
    ( (This)->lpVtbl -> get_WorkspacesCount(This,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceName(This,itr,pVl) )
    ( (This)->lpVtbl -> get_WorkspaceId(This,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFoldersCount(This,WkspId,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderName(This,WkspId,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderContentsCount(This,WkspId,WkspFolder,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderImageData(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderItemName(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderItemFileExtension(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> get_IsWorkspaceFolderItemRemoteDesktop(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> LaunchWorkspaceItem(This,WkspId,WkspFolder,WkspItemName,ActivationContext) )
    ( (This)->lpVtbl -> attachEvent(This,eventName,callback) )
    ( (This)->lpVtbl -> detachEvent(This,eventName,callback) )
EXTERN_C const IID IID_IWorkspaceBrokerAx2;
    typedef struct IWorkspaceBrokerAx2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWorkspaceBrokerAx2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWorkspaceBrokerAx2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWorkspaceBrokerAx2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *SetupWorkspace )(
            __RPC__in IWorkspaceBrokerAx2 * This);
                               HRESULT ( STDMETHODCALLTYPE *InitializeWorkspaceConfiguration )(
            __RPC__in IWorkspaceBrokerAx2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspacesCount )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceName )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVl);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceId )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFoldersCount )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderName )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderContentsCount )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderImageData )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderItemName )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceFolderItemFileExtension )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsWorkspaceFolderItemRemoteDesktop )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       LONG itr,
                                __RPC__out VARIANT_BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *LaunchWorkspaceItem )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR WkspId,
                       __RPC__in BSTR WkspFolder,
                       __RPC__in BSTR WkspItemName,
                       __RPC__in BSTR ActivationContext);
                               HRESULT ( STDMETHODCALLTYPE *attachEvent )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR eventName,
                       __RPC__in_opt IDispatch *callback);
                               HRESULT ( STDMETHODCALLTYPE *detachEvent )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR eventName,
                       __RPC__in_opt IDispatch *callback);
                               HRESULT ( STDMETHODCALLTYPE *RefreshWorkspace )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR bstrWorkspaceGUID);
                               HRESULT ( STDMETHODCALLTYPE *RemoveWorkspace )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR bstrWorkspaceGUID);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceDescription )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR bstrWorkspaceGUID,
                                __RPC__deref_out_opt BSTR *pbstrMessage);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceURL )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR bstrWorkspaceGUID,
                                __RPC__deref_out_opt BSTR *pbstrMessage);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkspaceLastUpdateDescription )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR bstrWorkspaceGUID,
                                __RPC__deref_out_opt BSTR *pbstrMessage);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsDefaultWorkspace )(
            __RPC__in IWorkspaceBrokerAx2 * This,
                       __RPC__in BSTR bstrWorkspaceGUID,
                                __RPC__out VARIANT_BOOL *pVal);
        END_INTERFACE
    } IWorkspaceBrokerAx2Vtbl;
    interface IWorkspaceBrokerAx2
    {
        CONST_VTBL struct IWorkspaceBrokerAx2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetupWorkspace(This) )
    ( (This)->lpVtbl -> InitializeWorkspaceConfiguration(This) )
    ( (This)->lpVtbl -> get_WorkspacesCount(This,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceName(This,itr,pVl) )
    ( (This)->lpVtbl -> get_WorkspaceId(This,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFoldersCount(This,WkspId,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderName(This,WkspId,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderContentsCount(This,WkspId,WkspFolder,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderImageData(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderItemName(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> get_WorkspaceFolderItemFileExtension(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> get_IsWorkspaceFolderItemRemoteDesktop(This,WkspId,WkspFolder,itr,pVal) )
    ( (This)->lpVtbl -> LaunchWorkspaceItem(This,WkspId,WkspFolder,WkspItemName,ActivationContext) )
    ( (This)->lpVtbl -> attachEvent(This,eventName,callback) )
    ( (This)->lpVtbl -> detachEvent(This,eventName,callback) )
    ( (This)->lpVtbl -> RefreshWorkspace(This,bstrWorkspaceGUID) )
    ( (This)->lpVtbl -> RemoveWorkspace(This,bstrWorkspaceGUID) )
    ( (This)->lpVtbl -> get_WorkspaceDescription(This,bstrWorkspaceGUID,pbstrMessage) )
    ( (This)->lpVtbl -> get_WorkspaceURL(This,bstrWorkspaceGUID,pbstrMessage) )
    ( (This)->lpVtbl -> get_WorkspaceLastUpdateDescription(This,bstrWorkspaceGUID,pbstrMessage) )
    ( (This)->lpVtbl -> get_IsDefaultWorkspace(This,bstrWorkspaceGUID,pVal) )
EXTERN_C const IID LIBID_wkspbkaxLib;
EXTERN_C const IID DIID__IWorkspaceBrokerAxEvents;
    typedef struct _IWorkspaceBrokerAxEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IWorkspaceBrokerAxEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IWorkspaceBrokerAxEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IWorkspaceBrokerAxEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IWorkspaceBrokerAxEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IWorkspaceBrokerAxEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IWorkspaceBrokerAxEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IWorkspaceBrokerAxEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IWorkspaceBrokerAxEventsVtbl;
    interface _IWorkspaceBrokerAxEvents
    {
        CONST_VTBL struct _IWorkspaceBrokerAxEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_WorkspaceBrokerAx;
class DECLSPEC_UUID("CD70A734-B6DB-4588-9813-FF2E37A4661F")
WorkspaceBrokerAx;
extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wkspbkax_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
