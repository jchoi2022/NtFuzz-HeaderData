#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IGetClusterUIInfo IGetClusterUIInfo;
typedef interface IGetClusterDataInfo IGetClusterDataInfo;
typedef interface IGetClusterObjectInfo IGetClusterObjectInfo;
typedef interface IGetClusterNodeInfo IGetClusterNodeInfo;
typedef interface IGetClusterGroupInfo IGetClusterGroupInfo;
typedef interface IGetClusterResourceInfo IGetClusterResourceInfo;
typedef interface IGetClusterNetworkInfo IGetClusterNetworkInfo;
typedef interface IGetClusterNetInterfaceInfo IGetClusterNetInterfaceInfo;
typedef interface IWCPropertySheetCallback IWCPropertySheetCallback;
typedef interface IWEExtendPropertySheet IWEExtendPropertySheet;
typedef interface IWCWizardCallback IWCWizardCallback;
typedef interface IWEExtendWizard IWEExtendWizard;
typedef interface IWCContextMenuCallback IWCContextMenuCallback;
typedef interface IWEExtendContextMenu IWEExtendContextMenu;
typedef interface IWEInvokeCommand IWEInvokeCommand;
typedef interface IWCWizard97Callback IWCWizard97Callback;
typedef interface IWEExtendWizard97 IWEExtendWizard97;
#include "oaidl.h"
#include "clusapi.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _CLUADMEX_OBJECT_TYPE
    {
        CLUADMEX_OT_NONE = 0,
        CLUADMEX_OT_CLUSTER = ( CLUADMEX_OT_NONE + 1 ) ,
        CLUADMEX_OT_NODE = ( CLUADMEX_OT_CLUSTER + 1 ) ,
        CLUADMEX_OT_GROUP = ( CLUADMEX_OT_NODE + 1 ) ,
        CLUADMEX_OT_RESOURCE = ( CLUADMEX_OT_GROUP + 1 ) ,
        CLUADMEX_OT_RESOURCETYPE = ( CLUADMEX_OT_RESOURCE + 1 ) ,
        CLUADMEX_OT_NETWORK = ( CLUADMEX_OT_RESOURCETYPE + 1 ) ,
        CLUADMEX_OT_NETINTERFACE = ( CLUADMEX_OT_NETWORK + 1 )
    } CLUADMEX_OBJECT_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_cluadmex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cluadmex_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IGetClusterUIInfo;
    typedef struct IGetClusterUIInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterUIInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterUIInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterUIInfo * This);
                      HRESULT ( STDMETHODCALLTYPE *GetClusterName )(
            IGetClusterUIInfo * This,
                        BSTR lpszName,
                            LONG *pcchName);
                      LCID ( STDMETHODCALLTYPE *GetLocale )(
            IGetClusterUIInfo * This);
                      HFONT ( STDMETHODCALLTYPE *GetFont )(
            IGetClusterUIInfo * This);
                      HICON ( STDMETHODCALLTYPE *GetIcon )(
            IGetClusterUIInfo * This);
        END_INTERFACE
    } IGetClusterUIInfoVtbl;
    interface IGetClusterUIInfo
    {
        CONST_VTBL struct IGetClusterUIInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClusterName(This,lpszName,pcchName) )
    ( (This)->lpVtbl -> GetLocale(This) )
    ( (This)->lpVtbl -> GetFont(This) )
    ( (This)->lpVtbl -> GetIcon(This) )
EXTERN_C const IID IID_IGetClusterDataInfo;
    typedef struct IGetClusterDataInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterDataInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterDataInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterDataInfo * This);
                      HRESULT ( STDMETHODCALLTYPE *GetClusterName )(
            IGetClusterDataInfo * This,
                        BSTR lpszName,
                            LONG *pcchName);
                      HCLUSTER ( STDMETHODCALLTYPE *GetClusterHandle )(
            IGetClusterDataInfo * This);
                      LONG ( STDMETHODCALLTYPE *GetObjectCount )(
            IGetClusterDataInfo * This);
        END_INTERFACE
    } IGetClusterDataInfoVtbl;
    interface IGetClusterDataInfo
    {
        CONST_VTBL struct IGetClusterDataInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClusterName(This,lpszName,pcchName) )
    ( (This)->lpVtbl -> GetClusterHandle(This) )
    ( (This)->lpVtbl -> GetObjectCount(This) )
EXTERN_C const IID IID_IGetClusterObjectInfo;
    typedef struct IGetClusterObjectInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterObjectInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterObjectInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterObjectInfo * This);
                      HRESULT ( STDMETHODCALLTYPE *GetObjectName )(
            IGetClusterObjectInfo * This,
                       LONG lObjIndex,
                        BSTR lpszName,
                            LONG *pcchName);
                      CLUADMEX_OBJECT_TYPE ( STDMETHODCALLTYPE *GetObjectType )(
            IGetClusterObjectInfo * This,
                       LONG lObjIndex);
        END_INTERFACE
    } IGetClusterObjectInfoVtbl;
    interface IGetClusterObjectInfo
    {
        CONST_VTBL struct IGetClusterObjectInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetObjectName(This,lObjIndex,lpszName,pcchName) )
    ( (This)->lpVtbl -> GetObjectType(This,lObjIndex) )
EXTERN_C const IID IID_IGetClusterNodeInfo;
    typedef struct IGetClusterNodeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterNodeInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterNodeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterNodeInfo * This);
                      HNODE ( STDMETHODCALLTYPE *GetNodeHandle )(
            IGetClusterNodeInfo * This,
                       LONG lObjIndex);
        END_INTERFACE
    } IGetClusterNodeInfoVtbl;
    interface IGetClusterNodeInfo
    {
        CONST_VTBL struct IGetClusterNodeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNodeHandle(This,lObjIndex) )
EXTERN_C const IID IID_IGetClusterGroupInfo;
    typedef struct IGetClusterGroupInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterGroupInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterGroupInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterGroupInfo * This);
                      HGROUP ( STDMETHODCALLTYPE *GetGroupHandle )(
            IGetClusterGroupInfo * This,
                       LONG lObjIndex);
        END_INTERFACE
    } IGetClusterGroupInfoVtbl;
    interface IGetClusterGroupInfo
    {
        CONST_VTBL struct IGetClusterGroupInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGroupHandle(This,lObjIndex) )
EXTERN_C const IID IID_IGetClusterResourceInfo;
    typedef struct IGetClusterResourceInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterResourceInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterResourceInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterResourceInfo * This);
                      HRESOURCE ( STDMETHODCALLTYPE *GetResourceHandle )(
            IGetClusterResourceInfo * This,
                       LONG lObjIndex);
                      HRESULT ( STDMETHODCALLTYPE *GetResourceTypeName )(
            IGetClusterResourceInfo * This,
                       LONG lObjIndex,
                        BSTR lpszResTypeName,
                            LONG *pcchResTypeName);
                      BOOL ( STDMETHODCALLTYPE *GetResourceNetworkName )(
            IGetClusterResourceInfo * This,
                       LONG lObjIndex,
                        BSTR lpszNetName,
                            ULONG *pcchNetName);
        END_INTERFACE
    } IGetClusterResourceInfoVtbl;
    interface IGetClusterResourceInfo
    {
        CONST_VTBL struct IGetClusterResourceInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetResourceHandle(This,lObjIndex) )
    ( (This)->lpVtbl -> GetResourceTypeName(This,lObjIndex,lpszResTypeName,pcchResTypeName) )
    ( (This)->lpVtbl -> GetResourceNetworkName(This,lObjIndex,lpszNetName,pcchNetName) )
EXTERN_C const IID IID_IGetClusterNetworkInfo;
    typedef struct IGetClusterNetworkInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterNetworkInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterNetworkInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterNetworkInfo * This);
                      HNETWORK ( STDMETHODCALLTYPE *GetNetworkHandle )(
            IGetClusterNetworkInfo * This,
                       LONG lObjIndex);
        END_INTERFACE
    } IGetClusterNetworkInfoVtbl;
    interface IGetClusterNetworkInfo
    {
        CONST_VTBL struct IGetClusterNetworkInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNetworkHandle(This,lObjIndex) )
EXTERN_C const IID IID_IGetClusterNetInterfaceInfo;
    typedef struct IGetClusterNetInterfaceInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetClusterNetInterfaceInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetClusterNetInterfaceInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetClusterNetInterfaceInfo * This);
                      HNETINTERFACE ( STDMETHODCALLTYPE *GetNetInterfaceHandle )(
            IGetClusterNetInterfaceInfo * This,
                       LONG lObjIndex);
        END_INTERFACE
    } IGetClusterNetInterfaceInfoVtbl;
    interface IGetClusterNetInterfaceInfo
    {
        CONST_VTBL struct IGetClusterNetInterfaceInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNetInterfaceHandle(This,lObjIndex) )
EXTERN_C const IID IID_IWCPropertySheetCallback;
    typedef struct IWCPropertySheetCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWCPropertySheetCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWCPropertySheetCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWCPropertySheetCallback * This);
        HRESULT ( STDMETHODCALLTYPE *AddPropertySheetPage )(
            __RPC__in IWCPropertySheetCallback * This,
                       __RPC__in LONG *hpage);
        END_INTERFACE
    } IWCPropertySheetCallbackVtbl;
    interface IWCPropertySheetCallback
    {
        CONST_VTBL struct IWCPropertySheetCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPropertySheetPage(This,hpage) )
EXTERN_C const IID IID_IWEExtendPropertySheet;
    typedef struct IWEExtendPropertySheetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWEExtendPropertySheet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWEExtendPropertySheet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWEExtendPropertySheet * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertySheetPages )(
            __RPC__in IWEExtendPropertySheet * This,
                       __RPC__in_opt IUnknown *piData,
                       __RPC__in_opt IWCPropertySheetCallback *piCallback);
        END_INTERFACE
    } IWEExtendPropertySheetVtbl;
    interface IWEExtendPropertySheet
    {
        CONST_VTBL struct IWEExtendPropertySheetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePropertySheetPages(This,piData,piCallback) )
EXTERN_C const IID IID_IWCWizardCallback;
    typedef struct IWCWizardCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWCWizardCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWCWizardCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWCWizardCallback * This);
        HRESULT ( STDMETHODCALLTYPE *AddWizardPage )(
            __RPC__in IWCWizardCallback * This,
                       __RPC__in LONG *hpage);
        HRESULT ( STDMETHODCALLTYPE *EnableNext )(
            __RPC__in IWCWizardCallback * This,
                       __RPC__in LONG *hpage,
                       BOOL bEnable);
        END_INTERFACE
    } IWCWizardCallbackVtbl;
    interface IWCWizardCallback
    {
        CONST_VTBL struct IWCWizardCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddWizardPage(This,hpage) )
    ( (This)->lpVtbl -> EnableNext(This,hpage,bEnable) )
EXTERN_C const IID IID_IWEExtendWizard;
    typedef struct IWEExtendWizardVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWEExtendWizard * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWEExtendWizard * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWEExtendWizard * This);
        HRESULT ( STDMETHODCALLTYPE *CreateWizardPages )(
            __RPC__in IWEExtendWizard * This,
                       __RPC__in_opt IUnknown *piData,
                       __RPC__in_opt IWCWizardCallback *piCallback);
        END_INTERFACE
    } IWEExtendWizardVtbl;
    interface IWEExtendWizard
    {
        CONST_VTBL struct IWEExtendWizardVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateWizardPages(This,piData,piCallback) )
EXTERN_C const IID IID_IWCContextMenuCallback;
    typedef struct IWCContextMenuCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWCContextMenuCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWCContextMenuCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWCContextMenuCallback * This);
        HRESULT ( STDMETHODCALLTYPE *AddExtensionMenuItem )(
            __RPC__in IWCContextMenuCallback * This,
                       __RPC__in BSTR lpszName,
                       __RPC__in BSTR lpszStatusBarText,
                       ULONG nCommandID,
                       ULONG nSubmenuCommandID,
                       ULONG uFlags);
        END_INTERFACE
    } IWCContextMenuCallbackVtbl;
    interface IWCContextMenuCallback
    {
        CONST_VTBL struct IWCContextMenuCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddExtensionMenuItem(This,lpszName,lpszStatusBarText,nCommandID,nSubmenuCommandID,uFlags) )
EXTERN_C const IID IID_IWEExtendContextMenu;
    typedef struct IWEExtendContextMenuVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWEExtendContextMenu * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWEExtendContextMenu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWEExtendContextMenu * This);
        HRESULT ( STDMETHODCALLTYPE *AddContextMenuItems )(
            __RPC__in IWEExtendContextMenu * This,
                       __RPC__in_opt IUnknown *piData,
                       __RPC__in_opt IWCContextMenuCallback *piCallback);
        END_INTERFACE
    } IWEExtendContextMenuVtbl;
    interface IWEExtendContextMenu
    {
        CONST_VTBL struct IWEExtendContextMenuVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddContextMenuItems(This,piData,piCallback) )
EXTERN_C const IID IID_IWEInvokeCommand;
    typedef struct IWEInvokeCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWEInvokeCommand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWEInvokeCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWEInvokeCommand * This);
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )(
            __RPC__in IWEInvokeCommand * This,
                       ULONG nCommandID,
                       __RPC__in_opt IUnknown *piData);
        END_INTERFACE
    } IWEInvokeCommandVtbl;
    interface IWEInvokeCommand
    {
        CONST_VTBL struct IWEInvokeCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InvokeCommand(This,nCommandID,piData) )
EXTERN_C const IID IID_IWCWizard97Callback;
    typedef struct IWCWizard97CallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWCWizard97Callback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWCWizard97Callback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWCWizard97Callback * This);
        HRESULT ( STDMETHODCALLTYPE *AddWizard97Page )(
            __RPC__in IWCWizard97Callback * This,
                       __RPC__in LONG *hpage);
        HRESULT ( STDMETHODCALLTYPE *EnableNext )(
            __RPC__in IWCWizard97Callback * This,
                       __RPC__in LONG *hpage,
                       BOOL bEnable);
        END_INTERFACE
    } IWCWizard97CallbackVtbl;
    interface IWCWizard97Callback
    {
        CONST_VTBL struct IWCWizard97CallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddWizard97Page(This,hpage) )
    ( (This)->lpVtbl -> EnableNext(This,hpage,bEnable) )
EXTERN_C const IID IID_IWEExtendWizard97;
    typedef struct IWEExtendWizard97Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWEExtendWizard97 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWEExtendWizard97 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWEExtendWizard97 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateWizard97Pages )(
            __RPC__in IWEExtendWizard97 * This,
                       __RPC__in_opt IUnknown *piData,
                       __RPC__in_opt IWCWizard97Callback *piCallback);
        END_INTERFACE
    } IWEExtendWizard97Vtbl;
    interface IWEExtendWizard97
    {
        CONST_VTBL struct IWEExtendWizard97Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateWizard97Pages(This,piData,piCallback) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_cluadmex_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cluadmex_0000_0017_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
