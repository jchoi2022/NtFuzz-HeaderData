#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISnapinProperties ISnapinProperties;
typedef interface ISnapinPropertiesCallback ISnapinPropertiesCallback;
typedef interface _Application _Application;
typedef interface _AppEvents _AppEvents;
typedef interface AppEvents AppEvents;
typedef class Application Application;
typedef interface _EventConnector _EventConnector;
typedef class AppEventsDHTMLConnector AppEventsDHTMLConnector;
typedef interface Frame Frame;
typedef interface Node Node;
typedef interface ScopeNamespace ScopeNamespace;
typedef interface Document Document;
typedef interface SnapIn SnapIn;
typedef interface SnapIns SnapIns;
typedef interface Extension Extension;
typedef interface Extensions Extensions;
typedef interface Columns Columns;
typedef interface Column Column;
typedef interface Views Views;
typedef interface View View;
typedef interface Nodes Nodes;
typedef interface ContextMenu ContextMenu;
typedef interface MenuItem MenuItem;
typedef interface Properties Properties;
typedef interface Property Property;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef _Application *PAPPLICATION;
typedef _Application **PPAPPLICATION;
typedef Column *PCOLUMN;
typedef Column **PPCOLUMN;
typedef Columns *PCOLUMNS;
typedef Columns **PPCOLUMNS;
typedef ContextMenu *PCONTEXTMENU;
typedef ContextMenu **PPCONTEXTMENU;
typedef Document *PDOCUMENT;
typedef Document **PPDOCUMENT;
typedef Frame *PFRAME;
typedef Frame **PPFRAME;
typedef MenuItem *PMENUITEM;
typedef MenuItem **PPMENUITEM;
typedef Node *PNODE;
typedef Node **PPNODE;
typedef Nodes *PNODES;
typedef Nodes **PPNODES;
typedef Properties *PPROPERTIES;
typedef Properties **PPPROPERTIES;
typedef Property *PPROPERTY;
typedef Property **PPPROPERTY;
typedef ScopeNamespace *PSCOPENAMESPACE;
typedef ScopeNamespace **PPSCOPENAMESPACE;
typedef SnapIn *PSNAPIN;
typedef SnapIn **PPSNAPIN;
typedef SnapIns *PSNAPINS;
typedef SnapIns **PPSNAPINS;
typedef Extension *PEXTENSION;
typedef Extension **PPEXTENSION;
typedef Extensions *PEXTENSIONS;
typedef Extensions **PPEXTENSIONS;
typedef View *PVIEW;
typedef View **PPVIEW;
typedef Views *PVIEWS;
typedef Views **PPVIEWS;
typedef ISnapinProperties *LPSNAPINPROPERTIES;
typedef ISnapinPropertiesCallback *LPSNAPINPROPERTIESCALLBACK;
typedef BOOL *PBOOL;
typedef int *PINT;
typedef BSTR *PBSTR;
typedef VARIANT *PVARIANT;
typedef long *PLONG;
typedef IDispatch *PDISPATCH;
typedef IDispatch **PPDISPATCH;
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0000_0000_v0_0_s_ifspec;
typedef
enum _MMC_PROPERTY_ACTION
    {
        MMC_PROPACT_DELETING = 1,
        MMC_PROPACT_CHANGING = ( MMC_PROPACT_DELETING + 1 ) ,
        MMC_PROPACT_INITIALIZED = ( MMC_PROPACT_CHANGING + 1 )
    } MMC_PROPERTY_ACTION;
typedef struct _MMC_SNAPIN_PROPERTY
    {
    LPCOLESTR pszPropName;
    VARIANT varValue;
    MMC_PROPERTY_ACTION eAction;
    } MMC_SNAPIN_PROPERTY;
EXTERN_C const IID IID_ISnapinProperties;
    typedef struct ISnapinPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISnapinProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISnapinProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISnapinProperties * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISnapinProperties * This,
                       __RPC__in_opt Properties *pProperties);
                           HRESULT ( STDMETHODCALLTYPE *QueryPropertyNames )(
            __RPC__in ISnapinProperties * This,
                       __RPC__in_opt ISnapinPropertiesCallback *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *PropertiesChanged )(
            __RPC__in ISnapinProperties * This,
                       long cProperties,
                                __RPC__in_ecount_full(cProperties) MMC_SNAPIN_PROPERTY *pProperties);
        END_INTERFACE
    } ISnapinPropertiesVtbl;
    interface ISnapinProperties
    {
        CONST_VTBL struct ISnapinPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pProperties) )
    ( (This)->lpVtbl -> QueryPropertyNames(This,pCallback) )
    ( (This)->lpVtbl -> PropertiesChanged(This,cProperties,pProperties) )
EXTERN_C const IID IID_ISnapinPropertiesCallback;
    typedef struct ISnapinPropertiesCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISnapinPropertiesCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISnapinPropertiesCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISnapinPropertiesCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *AddPropertyName )(
            __RPC__in ISnapinPropertiesCallback * This,
                       __RPC__in LPCOLESTR pszPropName,
                       DWORD dwFlags);
        END_INTERFACE
    } ISnapinPropertiesCallbackVtbl;
    interface ISnapinPropertiesCallback
    {
        CONST_VTBL struct ISnapinPropertiesCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPropertyName(This,pszPropName,dwFlags) )
typedef
enum DocumentMode
    {
        DocumentMode_Author = 0,
        DocumentMode_User = ( DocumentMode_Author + 1 ) ,
        DocumentMode_User_MDI = ( DocumentMode_User + 1 ) ,
        DocumentMode_User_SDI = ( DocumentMode_User_MDI + 1 )
    } _DocumentMode;
typedef enum DocumentMode DOCUMENTMODE;
typedef enum DocumentMode *PDOCUMENTMODE;
typedef enum DocumentMode **PPDOCUMENTMODE;
typedef
enum ListViewMode
    {
        ListMode_Small_Icons = 0,
        ListMode_Large_Icons = ( ListMode_Small_Icons + 1 ) ,
        ListMode_List = ( ListMode_Large_Icons + 1 ) ,
        ListMode_Detail = ( ListMode_List + 1 ) ,
        ListMode_Filtered = ( ListMode_Detail + 1 )
    } _ListViewMode;
typedef enum ListViewMode LISTVIEWMODE;
typedef enum ListViewMode *PLISTVIEWMODE;
typedef enum ListViewMode **PPLISTVIEWMODE;
typedef
enum ViewOptions
    {
        ViewOption_Default = 0,
        ViewOption_ScopeTreeHidden = 0x1,
        ViewOption_NoToolBars = 0x2,
        ViewOption_NotPersistable = 0x4,
        ViewOption_ActionPaneHidden = 0x8
    } _ViewOptions;
typedef enum ViewOptions VIEWOPTIONS;
typedef enum ViewOptions *PVIEWOPTIONS;
typedef enum ViewOptions **PPVIEWOPTIONS;
typedef
enum ExportListOptions
    {
        ExportListOptions_Default = 0,
        ExportListOptions_Unicode = 0x1,
        ExportListOptions_TabDelimited = 0x2,
        ExportListOptions_SelectedItemsOnly = 0x4
    } _ExportListOptions;
typedef enum ExportListOptions EXPORTLISTOPTIONS;
EXTERN_C const IID LIBID_MMC20;
EXTERN_C const IID IID__Application;
    typedef struct _ApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _Application * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _Application * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _Application * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _Application * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _Application * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _Application * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _Application * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               void ( STDMETHODCALLTYPE *Help )(
            __RPC__in _Application * This);
                               void ( STDMETHODCALLTYPE *Quit )(
            __RPC__in _Application * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Document )(
            __RPC__in _Application * This,
                                __RPC__deref_out_opt PPDOCUMENT Document);
                               HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in _Application * This,
                       __RPC__in BSTR Filename);
                                        HRESULT ( STDMETHODCALLTYPE *get_Frame )(
            __RPC__in _Application * This,
                                __RPC__deref_out_opt PPFRAME Frame);
                                        HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in _Application * This,
                                __RPC__out PBOOL Visible);
                               HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in _Application * This);
                               HRESULT ( STDMETHODCALLTYPE *Hide )(
            __RPC__in _Application * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserControl )(
            __RPC__in _Application * This,
                                __RPC__out PBOOL UserControl);
                                        HRESULT ( STDMETHODCALLTYPE *put_UserControl )(
            __RPC__in _Application * This,
                       BOOL UserControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_VersionMajor )(
            __RPC__in _Application * This,
                                __RPC__out PLONG VersionMajor);
                                        HRESULT ( STDMETHODCALLTYPE *get_VersionMinor )(
            __RPC__in _Application * This,
                                __RPC__out PLONG VersionMinor);
        END_INTERFACE
    } _ApplicationVtbl;
    interface _Application
    {
        CONST_VTBL struct _ApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Help(This) )
    ( (This)->lpVtbl -> Quit(This) )
    ( (This)->lpVtbl -> get_Document(This,Document) )
    ( (This)->lpVtbl -> Load(This,Filename) )
    ( (This)->lpVtbl -> get_Frame(This,Frame) )
    ( (This)->lpVtbl -> get_Visible(This,Visible) )
    ( (This)->lpVtbl -> Show(This) )
    ( (This)->lpVtbl -> Hide(This) )
    ( (This)->lpVtbl -> get_UserControl(This,UserControl) )
    ( (This)->lpVtbl -> put_UserControl(This,UserControl) )
    ( (This)->lpVtbl -> get_VersionMajor(This,VersionMajor) )
    ( (This)->lpVtbl -> get_VersionMinor(This,VersionMinor) )
EXTERN_C const IID IID__AppEvents;
    typedef struct _AppEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _AppEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _AppEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _AppEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _AppEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _AppEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _AppEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _AppEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *OnQuit )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PAPPLICATION Application);
                               HRESULT ( STDMETHODCALLTYPE *OnDocumentOpen )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PDOCUMENT Document,
                       BOOL New);
                               HRESULT ( STDMETHODCALLTYPE *OnDocumentClose )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PDOCUMENT Document);
                               HRESULT ( STDMETHODCALLTYPE *OnSnapInAdded )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PDOCUMENT Document,
                       __RPC__in_opt PSNAPIN SnapIn);
                               HRESULT ( STDMETHODCALLTYPE *OnSnapInRemoved )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PDOCUMENT Document,
                       __RPC__in_opt PSNAPIN SnapIn);
                               HRESULT ( STDMETHODCALLTYPE *OnNewView )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PVIEW View);
                               HRESULT ( STDMETHODCALLTYPE *OnViewClose )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PVIEW View);
                               HRESULT ( STDMETHODCALLTYPE *OnViewChange )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PVIEW View,
                       __RPC__in_opt PNODE NewOwnerNode);
                               HRESULT ( STDMETHODCALLTYPE *OnSelectionChange )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PVIEW View,
                       __RPC__in_opt PNODES NewNodes);
                               HRESULT ( STDMETHODCALLTYPE *OnContextMenuExecuted )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PMENUITEM MenuItem);
                               HRESULT ( STDMETHODCALLTYPE *OnToolbarButtonClicked )(
            __RPC__in _AppEvents * This);
                               HRESULT ( STDMETHODCALLTYPE *OnListUpdated )(
            __RPC__in _AppEvents * This,
                       __RPC__in_opt PVIEW View);
        END_INTERFACE
    } _AppEventsVtbl;
    interface _AppEvents
    {
        CONST_VTBL struct _AppEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnQuit(This,Application) )
    ( (This)->lpVtbl -> OnDocumentOpen(This,Document,New) )
    ( (This)->lpVtbl -> OnDocumentClose(This,Document) )
    ( (This)->lpVtbl -> OnSnapInAdded(This,Document,SnapIn) )
    ( (This)->lpVtbl -> OnSnapInRemoved(This,Document,SnapIn) )
    ( (This)->lpVtbl -> OnNewView(This,View) )
    ( (This)->lpVtbl -> OnViewClose(This,View) )
    ( (This)->lpVtbl -> OnViewChange(This,View,NewOwnerNode) )
    ( (This)->lpVtbl -> OnSelectionChange(This,View,NewNodes) )
    ( (This)->lpVtbl -> OnContextMenuExecuted(This,MenuItem) )
    ( (This)->lpVtbl -> OnToolbarButtonClicked(This) )
    ( (This)->lpVtbl -> OnListUpdated(This,View) )
EXTERN_C const IID DIID_AppEvents;
    typedef struct AppEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AppEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AppEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AppEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in AppEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in AppEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in AppEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            AppEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } AppEventsVtbl;
    interface AppEvents
    {
        CONST_VTBL struct AppEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_Application;
class DECLSPEC_UUID("49B2791A-B1AE-4C90-9B8E-E860BA07F889")
Application;
EXTERN_C const IID IID__EventConnector;
    typedef struct _EventConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _EventConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _EventConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _EventConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _EventConnector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _EventConnector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _EventConnector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _EventConnector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ConnectTo )(
            __RPC__in _EventConnector * This,
                       __RPC__in_opt PAPPLICATION Application);
                               HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in _EventConnector * This);
        END_INTERFACE
    } _EventConnectorVtbl;
    interface _EventConnector
    {
        CONST_VTBL struct _EventConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ConnectTo(This,Application) )
    ( (This)->lpVtbl -> Disconnect(This) )
EXTERN_C const CLSID CLSID_AppEventsDHTMLConnector;
class DECLSPEC_UUID("ADE6444B-C91F-4e37-92A4-5BB430A33340")
AppEventsDHTMLConnector;
EXTERN_C const IID IID_Frame;
    typedef struct FrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Frame * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Frame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Frame * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Frame * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Frame * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Frame * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Frame * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Maximize )(
            __RPC__in Frame * This);
                               HRESULT ( STDMETHODCALLTYPE *Minimize )(
            __RPC__in Frame * This);
                               HRESULT ( STDMETHODCALLTYPE *Restore )(
            __RPC__in Frame * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in Frame * This,
                                __RPC__out PINT Top);
                                        HRESULT ( STDMETHODCALLTYPE *put_Top )(
            __RPC__in Frame * This,
                       int top);
                                        HRESULT ( STDMETHODCALLTYPE *get_Bottom )(
            __RPC__in Frame * This,
                                __RPC__out PINT Bottom);
                                        HRESULT ( STDMETHODCALLTYPE *put_Bottom )(
            __RPC__in Frame * This,
                       int bottom);
                                        HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in Frame * This,
                                __RPC__out PINT Left);
                                        HRESULT ( STDMETHODCALLTYPE *put_Left )(
            __RPC__in Frame * This,
                       int left);
                                        HRESULT ( STDMETHODCALLTYPE *get_Right )(
            __RPC__in Frame * This,
                                __RPC__out PINT Right);
                                        HRESULT ( STDMETHODCALLTYPE *put_Right )(
            __RPC__in Frame * This,
                       int right);
        END_INTERFACE
    } FrameVtbl;
    interface Frame
    {
        CONST_VTBL struct FrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Maximize(This) )
    ( (This)->lpVtbl -> Minimize(This) )
    ( (This)->lpVtbl -> Restore(This) )
    ( (This)->lpVtbl -> get_Top(This,Top) )
    ( (This)->lpVtbl -> put_Top(This,top) )
    ( (This)->lpVtbl -> get_Bottom(This,Bottom) )
    ( (This)->lpVtbl -> put_Bottom(This,bottom) )
    ( (This)->lpVtbl -> get_Left(This,Left) )
    ( (This)->lpVtbl -> put_Left(This,left) )
    ( (This)->lpVtbl -> get_Right(This,Right) )
    ( (This)->lpVtbl -> put_Right(This,right) )
EXTERN_C const IID IID_Node;
    typedef struct NodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Node * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Node * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Node * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Node * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Node * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Node * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Node * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Node * This,
                                __RPC__deref_out_opt PBSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in Node * This,
                       __RPC__in BSTR PropertyName,
                                __RPC__deref_out_opt PBSTR PropertyValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
            __RPC__in Node * This,
                                __RPC__deref_out_opt PBSTR Bookmark);
                               HRESULT ( STDMETHODCALLTYPE *IsScopeNode )(
            __RPC__in Node * This,
                                __RPC__out PBOOL IsScopeNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Nodetype )(
            __RPC__in Node * This,
                                __RPC__deref_out_opt PBSTR Nodetype);
        END_INTERFACE
    } NodeVtbl;
    interface Node
    {
        CONST_VTBL struct NodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Property(This,PropertyName,PropertyValue) )
    ( (This)->lpVtbl -> get_Bookmark(This,Bookmark) )
    ( (This)->lpVtbl -> IsScopeNode(This,IsScopeNode) )
    ( (This)->lpVtbl -> get_Nodetype(This,Nodetype) )
EXTERN_C const IID IID_ScopeNamespace;
    typedef struct ScopeNamespaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ScopeNamespace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ScopeNamespace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ScopeNamespace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ScopeNamespace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ScopeNamespace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ScopeNamespace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ScopeNamespace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in ScopeNamespace * This,
                       __RPC__in_opt PNODE Node,
                                __RPC__deref_out_opt PPNODE Parent);
                               HRESULT ( STDMETHODCALLTYPE *GetChild )(
            __RPC__in ScopeNamespace * This,
                       __RPC__in_opt PNODE Node,
                                __RPC__deref_out_opt PPNODE Child);
                               HRESULT ( STDMETHODCALLTYPE *GetNext )(
            __RPC__in ScopeNamespace * This,
                       __RPC__in_opt PNODE Node,
                                __RPC__deref_out_opt PPNODE Next);
                               HRESULT ( STDMETHODCALLTYPE *GetRoot )(
            __RPC__in ScopeNamespace * This,
                                __RPC__deref_out_opt PPNODE Root);
                               HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in ScopeNamespace * This,
                       __RPC__in_opt PNODE Node);
        END_INTERFACE
    } ScopeNamespaceVtbl;
    interface ScopeNamespace
    {
        CONST_VTBL struct ScopeNamespaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetParent(This,Node,Parent) )
    ( (This)->lpVtbl -> GetChild(This,Node,Child) )
    ( (This)->lpVtbl -> GetNext(This,Node,Next) )
    ( (This)->lpVtbl -> GetRoot(This,Root) )
    ( (This)->lpVtbl -> Expand(This,Node) )
EXTERN_C const IID IID_Document;
    typedef struct DocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Document * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Document * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Document * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Document * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Document * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Document * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Document * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in Document * This);
                               HRESULT ( STDMETHODCALLTYPE *SaveAs )(
            __RPC__in Document * This,
                       __RPC__in BSTR Filename);
                               HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in Document * This,
                       BOOL SaveChanges);
                                        HRESULT ( STDMETHODCALLTYPE *get_Views )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PPVIEWS Views);
                                        HRESULT ( STDMETHODCALLTYPE *get_SnapIns )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PPSNAPINS SnapIns);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActiveView )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PPVIEW View);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PBSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in Document * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Location )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PBSTR Location);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsSaved )(
            __RPC__in Document * This,
                                __RPC__out PBOOL IsSaved);
                                        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in Document * This,
                                __RPC__out PDOCUMENTMODE Mode);
                                        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in Document * This,
                       DOCUMENTMODE Mode);
                                        HRESULT ( STDMETHODCALLTYPE *get_RootNode )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PPNODE Node);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScopeNamespace )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PPSCOPENAMESPACE ScopeNamespace);
                               HRESULT ( STDMETHODCALLTYPE *CreateProperties )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PPPROPERTIES Properties);
                                        HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in Document * This,
                                __RPC__deref_out_opt PPAPPLICATION Application);
        END_INTERFACE
    } DocumentVtbl;
    interface Document
    {
        CONST_VTBL struct DocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Save(This) )
    ( (This)->lpVtbl -> SaveAs(This,Filename) )
    ( (This)->lpVtbl -> Close(This,SaveChanges) )
    ( (This)->lpVtbl -> get_Views(This,Views) )
    ( (This)->lpVtbl -> get_SnapIns(This,SnapIns) )
    ( (This)->lpVtbl -> get_ActiveView(This,View) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> put_Name(This,Name) )
    ( (This)->lpVtbl -> get_Location(This,Location) )
    ( (This)->lpVtbl -> get_IsSaved(This,IsSaved) )
    ( (This)->lpVtbl -> get_Mode(This,Mode) )
    ( (This)->lpVtbl -> put_Mode(This,Mode) )
    ( (This)->lpVtbl -> get_RootNode(This,Node) )
    ( (This)->lpVtbl -> get_ScopeNamespace(This,ScopeNamespace) )
    ( (This)->lpVtbl -> CreateProperties(This,Properties) )
    ( (This)->lpVtbl -> get_Application(This,Application) )
EXTERN_C const IID IID_SnapIn;
    typedef struct SnapInVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in SnapIn * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in SnapIn * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in SnapIn * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in SnapIn * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in SnapIn * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in SnapIn * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            SnapIn * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in SnapIn * This,
                                __RPC__deref_out_opt PBSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Vendor )(
            __RPC__in SnapIn * This,
                                __RPC__deref_out_opt PBSTR Vendor);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in SnapIn * This,
                                __RPC__deref_out_opt PBSTR Version);
                                        HRESULT ( STDMETHODCALLTYPE *get_Extensions )(
            __RPC__in SnapIn * This,
                                __RPC__deref_out_opt PPEXTENSIONS Extensions);
                                        HRESULT ( STDMETHODCALLTYPE *get_SnapinCLSID )(
            __RPC__in SnapIn * This,
                                __RPC__deref_out_opt PBSTR SnapinCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in SnapIn * This,
                                __RPC__deref_out_opt PPPROPERTIES Properties);
                               HRESULT ( STDMETHODCALLTYPE *EnableAllExtensions )(
            __RPC__in SnapIn * This,
                       BOOL Enable);
        END_INTERFACE
    } SnapInVtbl;
    interface SnapIn
    {
        CONST_VTBL struct SnapInVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Vendor(This,Vendor) )
    ( (This)->lpVtbl -> get_Version(This,Version) )
    ( (This)->lpVtbl -> get_Extensions(This,Extensions) )
    ( (This)->lpVtbl -> get_SnapinCLSID(This,SnapinCLSID) )
    ( (This)->lpVtbl -> get_Properties(This,Properties) )
    ( (This)->lpVtbl -> EnableAllExtensions(This,Enable) )
EXTERN_C const IID IID_SnapIns;
    typedef struct SnapInsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in SnapIns * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in SnapIns * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in SnapIns * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in SnapIns * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in SnapIns * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in SnapIns * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            SnapIns * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in SnapIns * This,
                                __RPC__deref_out_opt IUnknown **retval);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in SnapIns * This,
                       long Index,
                                __RPC__deref_out_opt PPSNAPIN SnapIn);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in SnapIns * This,
                                __RPC__out PLONG Count);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in SnapIns * This,
                       __RPC__in BSTR SnapinNameOrCLSID,
                                 VARIANT ParentSnapin,
                                 VARIANT Properties,
                                __RPC__deref_out_opt PPSNAPIN SnapIn);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in SnapIns * This,
                       __RPC__in_opt PSNAPIN SnapIn);
        END_INTERFACE
    } SnapInsVtbl;
    interface SnapIns
    {
        CONST_VTBL struct SnapInsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Item(This,Index,SnapIn) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Add(This,SnapinNameOrCLSID,ParentSnapin,Properties,SnapIn) )
    ( (This)->lpVtbl -> Remove(This,SnapIn) )
EXTERN_C const IID IID_Extension;
    typedef struct ExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Extension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Extension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Extension * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Extension * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Extension * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Extension * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Extension * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Extension * This,
                                __RPC__deref_out_opt PBSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Vendor )(
            __RPC__in Extension * This,
                                __RPC__deref_out_opt PBSTR Vendor);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in Extension * This,
                                __RPC__deref_out_opt PBSTR Version);
                                        HRESULT ( STDMETHODCALLTYPE *get_Extensions )(
            __RPC__in Extension * This,
                                __RPC__deref_out_opt PPEXTENSIONS Extensions);
                                        HRESULT ( STDMETHODCALLTYPE *get_SnapinCLSID )(
            __RPC__in Extension * This,
                                __RPC__deref_out_opt PBSTR SnapinCLSID);
                               HRESULT ( STDMETHODCALLTYPE *EnableAllExtensions )(
            __RPC__in Extension * This,
                       BOOL Enable);
                               HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in Extension * This,
                       BOOL Enable);
        END_INTERFACE
    } ExtensionVtbl;
    interface Extension
    {
        CONST_VTBL struct ExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Vendor(This,Vendor) )
    ( (This)->lpVtbl -> get_Version(This,Version) )
    ( (This)->lpVtbl -> get_Extensions(This,Extensions) )
    ( (This)->lpVtbl -> get_SnapinCLSID(This,SnapinCLSID) )
    ( (This)->lpVtbl -> EnableAllExtensions(This,Enable) )
    ( (This)->lpVtbl -> Enable(This,Enable) )
EXTERN_C const IID IID_Extensions;
    typedef struct ExtensionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Extensions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Extensions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Extensions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Extensions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Extensions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Extensions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Extensions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in Extensions * This,
                                __RPC__deref_out_opt IUnknown **retval);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in Extensions * This,
                       long Index,
                                __RPC__deref_out_opt PPEXTENSION Extension);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Extensions * This,
                                __RPC__out PLONG Count);
        END_INTERFACE
    } ExtensionsVtbl;
    interface Extensions
    {
        CONST_VTBL struct ExtensionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Item(This,Index,Extension) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
EXTERN_C const IID IID_Columns;
    typedef struct ColumnsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Columns * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Columns * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Columns * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Columns * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Columns * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Columns * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Columns * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in Columns * This,
                       long Index,
                                __RPC__deref_out_opt PPCOLUMN Column);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Columns * This,
                                __RPC__out PLONG Count);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in Columns * This,
                                __RPC__deref_out_opt IUnknown **retval);
        END_INTERFACE
    } ColumnsVtbl;
    interface Columns
    {
        CONST_VTBL struct ColumnsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Item(This,Index,Column) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
typedef
enum ColumnSortOrder
    {
        SortOrder_Ascending = 0,
        SortOrder_Descending = ( SortOrder_Ascending + 1 )
    } _ColumnSortOrder;
typedef enum ColumnSortOrder COLUMNSORTORDER;
EXTERN_C const IID IID_Column;
    typedef struct ColumnVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Column * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Column * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Column * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Column * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Column * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Column * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Column * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Name )(
            __RPC__in Column * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in Column * This,
                                __RPC__out PLONG Width);
                                        HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in Column * This,
                       long Width);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayPosition )(
            __RPC__in Column * This,
                                __RPC__out PLONG DisplayPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayPosition )(
            __RPC__in Column * This,
                       long Index);
                                        HRESULT ( STDMETHODCALLTYPE *get_Hidden )(
            __RPC__in Column * This,
                                __RPC__out PBOOL Hidden);
                                        HRESULT ( STDMETHODCALLTYPE *put_Hidden )(
            __RPC__in Column * This,
                       BOOL Hidden);
                               HRESULT ( STDMETHODCALLTYPE *SetAsSortColumn )(
            __RPC__in Column * This,
                       COLUMNSORTORDER SortOrder);
                               HRESULT ( STDMETHODCALLTYPE *IsSortColumn )(
            __RPC__in Column * This,
                                __RPC__out PBOOL IsSortColumn);
        END_INTERFACE
    } ColumnVtbl;
    interface Column
    {
        CONST_VTBL struct ColumnVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Name(This,Name) )
    ( (This)->lpVtbl -> get_Width(This,Width) )
    ( (This)->lpVtbl -> put_Width(This,Width) )
    ( (This)->lpVtbl -> get_DisplayPosition(This,DisplayPosition) )
    ( (This)->lpVtbl -> put_DisplayPosition(This,Index) )
    ( (This)->lpVtbl -> get_Hidden(This,Hidden) )
    ( (This)->lpVtbl -> put_Hidden(This,Hidden) )
    ( (This)->lpVtbl -> SetAsSortColumn(This,SortOrder) )
    ( (This)->lpVtbl -> IsSortColumn(This,IsSortColumn) )
EXTERN_C const IID IID_Views;
    typedef struct ViewsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Views * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Views * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Views * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Views * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Views * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Views * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Views * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in Views * This,
                       long Index,
                                __RPC__deref_out_opt PPVIEW View);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Views * This,
                                __RPC__out PLONG Count);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in Views * This,
                       __RPC__in_opt PNODE Node,
                                     VIEWOPTIONS viewOptions);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in Views * This,
                                __RPC__deref_out_opt IUnknown **retval);
        END_INTERFACE
    } ViewsVtbl;
    interface Views
    {
        CONST_VTBL struct ViewsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Item(This,Index,View) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Add(This,Node,viewOptions) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
EXTERN_C const IID IID_View;
    typedef struct ViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in View * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in View * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in View * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in View * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in View * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in View * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            View * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActiveScopeNode )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPNODE Node);
                                        HRESULT ( STDMETHODCALLTYPE *put_ActiveScopeNode )(
            __RPC__in View * This,
                       __RPC__in_opt PNODE Node);
                                        HRESULT ( STDMETHODCALLTYPE *get_Selection )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPNODES Nodes);
                                        HRESULT ( STDMETHODCALLTYPE *get_ListItems )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPNODES Nodes);
                               HRESULT ( STDMETHODCALLTYPE *SnapinScopeObject )(
            __RPC__in View * This,
                                 VARIANT ScopeNode,
                                __RPC__deref_out_opt PPDISPATCH ScopeNodeObject);
                               HRESULT ( STDMETHODCALLTYPE *SnapinSelectionObject )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPDISPATCH SelectionObject);
                               HRESULT ( STDMETHODCALLTYPE *Is )(
            __RPC__in View * This,
                       __RPC__in_opt PVIEW View,
                                __RPC__out VARIANT_BOOL *TheSame);
                                        HRESULT ( STDMETHODCALLTYPE *get_Document )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPDOCUMENT Document);
                               HRESULT ( STDMETHODCALLTYPE *SelectAll )(
            __RPC__in View * This);
                               HRESULT ( STDMETHODCALLTYPE *Select )(
            __RPC__in View * This,
                       __RPC__in_opt PNODE Node);
                               HRESULT ( STDMETHODCALLTYPE *Deselect )(
            __RPC__in View * This,
                       __RPC__in_opt PNODE Node);
                               HRESULT ( STDMETHODCALLTYPE *IsSelected )(
            __RPC__in View * This,
                       __RPC__in_opt PNODE Node,
                                __RPC__out PBOOL IsSelected);
                               HRESULT ( STDMETHODCALLTYPE *DisplayScopeNodePropertySheet )(
            __RPC__in View * This,
                                 VARIANT ScopeNode);
                               HRESULT ( STDMETHODCALLTYPE *DisplaySelectionPropertySheet )(
            __RPC__in View * This);
                               HRESULT ( STDMETHODCALLTYPE *CopyScopeNode )(
            __RPC__in View * This,
                                 VARIANT ScopeNode);
                               HRESULT ( STDMETHODCALLTYPE *CopySelection )(
            __RPC__in View * This);
                               HRESULT ( STDMETHODCALLTYPE *DeleteScopeNode )(
            __RPC__in View * This,
                                 VARIANT ScopeNode);
                               HRESULT ( STDMETHODCALLTYPE *DeleteSelection )(
            __RPC__in View * This);
                               HRESULT ( STDMETHODCALLTYPE *RenameScopeNode )(
            __RPC__in View * This,
                       __RPC__in BSTR NewName,
                                 VARIANT ScopeNode);
                               HRESULT ( STDMETHODCALLTYPE *RenameSelectedItem )(
            __RPC__in View * This,
                       __RPC__in BSTR NewName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScopeNodeContextMenu )(
            __RPC__in View * This,
                                 VARIANT ScopeNode,
                                __RPC__deref_out_opt PPCONTEXTMENU ContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *get_SelectionContextMenu )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPCONTEXTMENU ContextMenu);
                               HRESULT ( STDMETHODCALLTYPE *RefreshScopeNode )(
            __RPC__in View * This,
                                 VARIANT ScopeNode);
                               HRESULT ( STDMETHODCALLTYPE *RefreshSelection )(
            __RPC__in View * This);
                               HRESULT ( STDMETHODCALLTYPE *ExecuteSelectionMenuItem )(
            __RPC__in View * This,
                       __RPC__in BSTR MenuItemPath);
                               HRESULT ( STDMETHODCALLTYPE *ExecuteScopeNodeMenuItem )(
            __RPC__in View * This,
                       __RPC__in BSTR MenuItemPath,
                                 VARIANT ScopeNode);
                               HRESULT ( STDMETHODCALLTYPE *ExecuteShellCommand )(
            __RPC__in View * This,
                       __RPC__in BSTR Command,
                       __RPC__in BSTR Directory,
                       __RPC__in BSTR Parameters,
                       __RPC__in BSTR WindowState);
                                        HRESULT ( STDMETHODCALLTYPE *get_Frame )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPFRAME Frame);
                               HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in View * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ScopeTreeVisible )(
            __RPC__in View * This,
                                __RPC__out PBOOL Visible);
                                        HRESULT ( STDMETHODCALLTYPE *put_ScopeTreeVisible )(
            __RPC__in View * This,
                       BOOL Visible);
                               HRESULT ( STDMETHODCALLTYPE *Back )(
            __RPC__in View * This);
                               HRESULT ( STDMETHODCALLTYPE *Forward )(
            __RPC__in View * This);
                                        HRESULT ( STDMETHODCALLTYPE *put_StatusBarText )(
            __RPC__in View * This,
                       __RPC__in BSTR StatusBarText);
                                        HRESULT ( STDMETHODCALLTYPE *get_Memento )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PBSTR Memento);
                               HRESULT ( STDMETHODCALLTYPE *ViewMemento )(
            __RPC__in View * This,
                       __RPC__in BSTR Memento);
                                        HRESULT ( STDMETHODCALLTYPE *get_Columns )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPCOLUMNS Columns);
                                        HRESULT ( STDMETHODCALLTYPE *get_CellContents )(
            __RPC__in View * This,
                       __RPC__in_opt PNODE Node,
                       long Column,
                                __RPC__deref_out_opt PBSTR CellContents);
                               HRESULT ( STDMETHODCALLTYPE *ExportList )(
            __RPC__in View * This,
                       __RPC__in BSTR File,
                                     EXPORTLISTOPTIONS exportoptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_ListViewMode )(
            __RPC__in View * This,
                                __RPC__out PLISTVIEWMODE Mode);
                                        HRESULT ( STDMETHODCALLTYPE *put_ListViewMode )(
            __RPC__in View * This,
                       LISTVIEWMODE mode);
                                        HRESULT ( STDMETHODCALLTYPE *get_ControlObject )(
            __RPC__in View * This,
                                __RPC__deref_out_opt PPDISPATCH Control);
        END_INTERFACE
    } ViewVtbl;
    interface View
    {
        CONST_VTBL struct ViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ActiveScopeNode(This,Node) )
    ( (This)->lpVtbl -> put_ActiveScopeNode(This,Node) )
    ( (This)->lpVtbl -> get_Selection(This,Nodes) )
    ( (This)->lpVtbl -> get_ListItems(This,Nodes) )
    ( (This)->lpVtbl -> SnapinScopeObject(This,ScopeNode,ScopeNodeObject) )
    ( (This)->lpVtbl -> SnapinSelectionObject(This,SelectionObject) )
    ( (This)->lpVtbl -> Is(This,View,TheSame) )
    ( (This)->lpVtbl -> get_Document(This,Document) )
    ( (This)->lpVtbl -> SelectAll(This) )
    ( (This)->lpVtbl -> Select(This,Node) )
    ( (This)->lpVtbl -> Deselect(This,Node) )
    ( (This)->lpVtbl -> IsSelected(This,Node,IsSelected) )
    ( (This)->lpVtbl -> DisplayScopeNodePropertySheet(This,ScopeNode) )
    ( (This)->lpVtbl -> DisplaySelectionPropertySheet(This) )
    ( (This)->lpVtbl -> CopyScopeNode(This,ScopeNode) )
    ( (This)->lpVtbl -> CopySelection(This) )
    ( (This)->lpVtbl -> DeleteScopeNode(This,ScopeNode) )
    ( (This)->lpVtbl -> DeleteSelection(This) )
    ( (This)->lpVtbl -> RenameScopeNode(This,NewName,ScopeNode) )
    ( (This)->lpVtbl -> RenameSelectedItem(This,NewName) )
    ( (This)->lpVtbl -> get_ScopeNodeContextMenu(This,ScopeNode,ContextMenu) )
    ( (This)->lpVtbl -> get_SelectionContextMenu(This,ContextMenu) )
    ( (This)->lpVtbl -> RefreshScopeNode(This,ScopeNode) )
    ( (This)->lpVtbl -> RefreshSelection(This) )
    ( (This)->lpVtbl -> ExecuteSelectionMenuItem(This,MenuItemPath) )
    ( (This)->lpVtbl -> ExecuteScopeNodeMenuItem(This,MenuItemPath,ScopeNode) )
    ( (This)->lpVtbl -> ExecuteShellCommand(This,Command,Directory,Parameters,WindowState) )
    ( (This)->lpVtbl -> get_Frame(This,Frame) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> get_ScopeTreeVisible(This,Visible) )
    ( (This)->lpVtbl -> put_ScopeTreeVisible(This,Visible) )
    ( (This)->lpVtbl -> Back(This) )
    ( (This)->lpVtbl -> Forward(This) )
    ( (This)->lpVtbl -> put_StatusBarText(This,StatusBarText) )
    ( (This)->lpVtbl -> get_Memento(This,Memento) )
    ( (This)->lpVtbl -> ViewMemento(This,Memento) )
    ( (This)->lpVtbl -> get_Columns(This,Columns) )
    ( (This)->lpVtbl -> get_CellContents(This,Node,Column,CellContents) )
    ( (This)->lpVtbl -> ExportList(This,File,exportoptions) )
    ( (This)->lpVtbl -> get_ListViewMode(This,Mode) )
    ( (This)->lpVtbl -> put_ListViewMode(This,mode) )
    ( (This)->lpVtbl -> get_ControlObject(This,Control) )
EXTERN_C const IID IID_Nodes;
    typedef struct NodesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Nodes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Nodes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Nodes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Nodes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Nodes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Nodes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Nodes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in Nodes * This,
                                __RPC__deref_out_opt IUnknown **retval);
                   HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in Nodes * This,
                       long Index,
                                __RPC__deref_out_opt PPNODE Node);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Nodes * This,
                                __RPC__out PLONG Count);
        END_INTERFACE
    } NodesVtbl;
    interface Nodes
    {
        CONST_VTBL struct NodesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Item(This,Index,Node) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
EXTERN_C const IID IID_ContextMenu;
    typedef struct ContextMenuVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ContextMenu * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ContextMenu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ContextMenu * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ContextMenu * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ContextMenu * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ContextMenu * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ContextMenu * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ContextMenu * This,
                                __RPC__deref_out_opt IUnknown **retval);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ContextMenu * This,
                       VARIANT IndexOrPath,
                                __RPC__deref_out_opt PPMENUITEM MenuItem);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ContextMenu * This,
                                __RPC__out PLONG Count);
        END_INTERFACE
    } ContextMenuVtbl;
    interface ContextMenu
    {
        CONST_VTBL struct ContextMenuVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,IndexOrPath,MenuItem) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
EXTERN_C const IID IID_MenuItem;
    typedef struct MenuItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in MenuItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in MenuItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in MenuItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in MenuItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in MenuItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in MenuItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            MenuItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in MenuItem * This,
                                __RPC__deref_out_opt PBSTR DisplayName);
                                        HRESULT ( STDMETHODCALLTYPE *get_LanguageIndependentName )(
            __RPC__in MenuItem * This,
                                __RPC__deref_out_opt PBSTR LanguageIndependentName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in MenuItem * This,
                                __RPC__deref_out_opt PBSTR Path);
                                        HRESULT ( STDMETHODCALLTYPE *get_LanguageIndependentPath )(
            __RPC__in MenuItem * This,
                                __RPC__deref_out_opt PBSTR LanguageIndependentPath);
                               HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in MenuItem * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in MenuItem * This,
                                __RPC__out PBOOL Enabled);
        END_INTERFACE
    } MenuItemVtbl;
    interface MenuItem
    {
        CONST_VTBL struct MenuItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisplayName(This,DisplayName) )
    ( (This)->lpVtbl -> get_LanguageIndependentName(This,LanguageIndependentName) )
    ( (This)->lpVtbl -> get_Path(This,Path) )
    ( (This)->lpVtbl -> get_LanguageIndependentPath(This,LanguageIndependentPath) )
    ( (This)->lpVtbl -> Execute(This) )
    ( (This)->lpVtbl -> get_Enabled(This,Enabled) )
EXTERN_C const IID IID_Properties;
    typedef struct PropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Properties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Properties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Properties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Properties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Properties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Properties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Properties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in Properties * This,
                                __RPC__deref_out_opt IUnknown **retval);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in Properties * This,
                       __RPC__in BSTR Name,
                                __RPC__deref_out_opt PPPROPERTY Property);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Properties * This,
                                __RPC__out PLONG Count);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in Properties * This,
                       __RPC__in BSTR Name);
        END_INTERFACE
    } PropertiesVtbl;
    interface Properties
    {
        CONST_VTBL struct PropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> Item(This,Name,Property) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Remove(This,Name) )
EXTERN_C const IID IID_Property;
    typedef struct PropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Property * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Property * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Property * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Property * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Property * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Property * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Property * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in Property * This,
                                __RPC__out PVARIANT Value);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in Property * This,
                       VARIANT Value);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Property * This,
                                __RPC__deref_out_opt PBSTR Name);
        END_INTERFACE
    } PropertyVtbl;
    interface Property
    {
        CONST_VTBL struct PropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,Value) )
    ( (This)->lpVtbl -> put_Value(This,Value) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmcobj_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
