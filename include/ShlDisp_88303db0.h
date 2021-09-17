#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFolderViewOC IFolderViewOC;
typedef interface DShellFolderViewEvents DShellFolderViewEvents;
typedef class ShellFolderViewOC ShellFolderViewOC;
typedef interface DFConstraint DFConstraint;
typedef interface FolderItem FolderItem;
typedef interface FolderItems FolderItems;
typedef interface FolderItemVerb FolderItemVerb;
typedef interface FolderItemVerbs FolderItemVerbs;
typedef interface Folder Folder;
typedef interface Folder2 Folder2;
typedef interface Folder3 Folder3;
typedef interface FolderItem2 FolderItem2;
typedef class ShellFolderItem ShellFolderItem;
typedef interface FolderItems2 FolderItems2;
typedef interface FolderItems3 FolderItems3;
typedef interface IShellLinkDual IShellLinkDual;
typedef interface IShellLinkDual2 IShellLinkDual2;
typedef class ShellLinkObject ShellLinkObject;
typedef interface IShellFolderViewDual IShellFolderViewDual;
typedef interface IShellFolderViewDual2 IShellFolderViewDual2;
typedef interface IShellFolderViewDual3 IShellFolderViewDual3;
typedef class ShellFolderView ShellFolderView;
typedef interface IShellDispatch IShellDispatch;
typedef interface IShellDispatch2 IShellDispatch2;
typedef interface IShellDispatch3 IShellDispatch3;
typedef interface IShellDispatch4 IShellDispatch4;
typedef interface IShellDispatch5 IShellDispatch5;
typedef interface IShellDispatch6 IShellDispatch6;
typedef class Shell Shell;
typedef class ShellDispatchInproc ShellDispatchInproc;
typedef interface IFileSearchBand IFileSearchBand;
typedef class FileSearchBand FileSearchBand;
typedef interface IWebWizardHost IWebWizardHost;
typedef interface IWebWizardHost2 IWebWizardHost2;
typedef interface INewWDEvents INewWDEvents;
typedef interface IAutoComplete IAutoComplete;
typedef interface IAutoComplete2 IAutoComplete2;
typedef interface IEnumACString IEnumACString;
typedef interface IDataObjectAsyncCapability IDataObjectAsyncCapability;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("35f1a0d0-3e9a-11d2-8499-005345000000")
enum OfflineFolderStatus
    {
        OFS_INACTIVE = -1,
        OFS_ONLINE = ( OFS_INACTIVE + 1 ) ,
        OFS_OFFLINE = ( OFS_ONLINE + 1 ) ,
        OFS_SERVERBACK = ( OFS_OFFLINE + 1 ) ,
        OFS_DIRTYCACHE = ( OFS_SERVERBACK + 1 )
    } OfflineFolderStatus;
typedef DECLSPEC_UUID("742A99A0-C77E-11D0-A32C-00A0C91EEDBA")
enum ShellFolderViewOptions
    {
        SFVVO_SHOWALLOBJECTS = 0x1,
        SFVVO_SHOWEXTENSIONS = 0x2,
        SFVVO_SHOWCOMPCOLOR = 0x8,
        SFVVO_SHOWSYSFILES = 0x20,
        SFVVO_WIN95CLASSIC = 0x40,
        SFVVO_DOUBLECLICKINWEBVIEW = 0x80,
        SFVVO_DESKTOPHTML = 0x200
    } ShellFolderViewOptions;
typedef DECLSPEC_UUID("CA31EA20-48D0-11CF-8350-444553540000")
enum ShellSpecialFolderConstants
    {
        ssfDESKTOP = 0,
        ssfPROGRAMS = 0x2,
        ssfCONTROLS = 0x3,
        ssfPRINTERS = 0x4,
        ssfPERSONAL = 0x5,
        ssfFAVORITES = 0x6,
        ssfSTARTUP = 0x7,
        ssfRECENT = 0x8,
        ssfSENDTO = 0x9,
        ssfBITBUCKET = 0xa,
        ssfSTARTMENU = 0xb,
        ssfDESKTOPDIRECTORY = 0x10,
        ssfDRIVES = 0x11,
        ssfNETWORK = 0x12,
        ssfNETHOOD = 0x13,
        ssfFONTS = 0x14,
        ssfTEMPLATES = 0x15,
        ssfCOMMONSTARTMENU = 0x16,
        ssfCOMMONPROGRAMS = 0x17,
        ssfCOMMONSTARTUP = 0x18,
        ssfCOMMONDESKTOPDIR = 0x19,
        ssfAPPDATA = 0x1a,
        ssfPRINTHOOD = 0x1b,
        ssfLOCALAPPDATA = 0x1c,
        ssfALTSTARTUP = 0x1d,
        ssfCOMMONALTSTARTUP = 0x1e,
        ssfCOMMONFAVORITES = 0x1f,
        ssfINTERNETCACHE = 0x20,
        ssfCOOKIES = 0x21,
        ssfHISTORY = 0x22,
        ssfCOMMONAPPDATA = 0x23,
        ssfWINDOWS = 0x24,
        ssfSYSTEM = 0x25,
        ssfPROGRAMFILES = 0x26,
        ssfMYPICTURES = 0x27,
        ssfPROFILE = 0x28,
        ssfSYSTEMx86 = 0x29,
        ssfPROGRAMFILESx86 = 0x30
    } ShellSpecialFolderConstants;
EXTERN_C const IID LIBID_Shell32;
EXTERN_C const IID IID_IFolderViewOC;
    typedef struct IFolderViewOCVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFolderViewOC * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFolderViewOC * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFolderViewOC * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFolderViewOC * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFolderViewOC * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFolderViewOC * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFolderViewOC * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *SetFolderView )(
            __RPC__in IFolderViewOC * This,
                       __RPC__in_opt IDispatch *pdisp);
        END_INTERFACE
    } IFolderViewOCVtbl;
    interface IFolderViewOC
    {
        CONST_VTBL struct IFolderViewOCVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetFolderView(This,pdisp) )
EXTERN_C const IID DIID_DShellFolderViewEvents;
    typedef struct DShellFolderViewEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DShellFolderViewEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DShellFolderViewEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DShellFolderViewEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DShellFolderViewEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DShellFolderViewEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DShellFolderViewEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DShellFolderViewEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DShellFolderViewEventsVtbl;
    interface DShellFolderViewEvents
    {
        CONST_VTBL struct DShellFolderViewEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_ShellFolderViewOC;
class DECLSPEC_UUID("9BA05971-F6A8-11CF-A442-00A0C90A8F39")
ShellFolderViewOC;
EXTERN_C const IID IID_DFConstraint;
    typedef struct DFConstraintVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DFConstraint * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DFConstraint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DFConstraint * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DFConstraint * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DFConstraint * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DFConstraint * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DFConstraint * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in DFConstraint * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in DFConstraint * This,
                                __RPC__out VARIANT *pv);
        END_INTERFACE
    } DFConstraintVtbl;
    interface DFConstraint
    {
        CONST_VTBL struct DFConstraintVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbs) )
    ( (This)->lpVtbl -> get_Value(This,pv) )
typedef __RPC_unique_pointer FolderItem *LPFOLDERITEM;
EXTERN_C const IID IID_FolderItem;
    typedef struct FolderItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in FolderItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in FolderItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in FolderItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in FolderItem * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in FolderItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in FolderItem * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            FolderItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in FolderItem * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_GetLink )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_GetFolder )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsLink )(
            __RPC__in FolderItem * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsFolder )(
            __RPC__in FolderItem * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsFileSystem )(
            __RPC__in FolderItem * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsBrowsable )(
            __RPC__in FolderItem * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_ModifyDate )(
            __RPC__in FolderItem * This,
                                __RPC__out DATE *pdt);
                                    HRESULT ( STDMETHODCALLTYPE *put_ModifyDate )(
            __RPC__in FolderItem * This,
                       DATE dt);
                                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in FolderItem * This,
                                __RPC__out LONG *pul);
                                    HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt BSTR *pbs);
                           HRESULT ( STDMETHODCALLTYPE *Verbs )(
            __RPC__in FolderItem * This,
                                __RPC__deref_out_opt FolderItemVerbs **ppfic);
                           HRESULT ( STDMETHODCALLTYPE *InvokeVerb )(
            __RPC__in FolderItem * This,
                                 VARIANT vVerb);
        END_INTERFACE
    } FolderItemVtbl;
    interface FolderItem
    {
        CONST_VTBL struct FolderItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_Name(This,pbs) )
    ( (This)->lpVtbl -> put_Name(This,bs) )
    ( (This)->lpVtbl -> get_Path(This,pbs) )
    ( (This)->lpVtbl -> get_GetLink(This,ppid) )
    ( (This)->lpVtbl -> get_GetFolder(This,ppid) )
    ( (This)->lpVtbl -> get_IsLink(This,pb) )
    ( (This)->lpVtbl -> get_IsFolder(This,pb) )
    ( (This)->lpVtbl -> get_IsFileSystem(This,pb) )
    ( (This)->lpVtbl -> get_IsBrowsable(This,pb) )
    ( (This)->lpVtbl -> get_ModifyDate(This,pdt) )
    ( (This)->lpVtbl -> put_ModifyDate(This,dt) )
    ( (This)->lpVtbl -> get_Size(This,pul) )
    ( (This)->lpVtbl -> get_Type(This,pbs) )
    ( (This)->lpVtbl -> Verbs(This,ppfic) )
    ( (This)->lpVtbl -> InvokeVerb(This,vVerb) )
EXTERN_C const IID IID_FolderItems;
    typedef struct FolderItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in FolderItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in FolderItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in FolderItems * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in FolderItems * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in FolderItems * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in FolderItems * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            FolderItems * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in FolderItems * This,
                                __RPC__out long *plCount);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in FolderItems * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in FolderItems * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in FolderItems * This,
                                 VARIANT index,
                                __RPC__deref_out_opt FolderItem **ppid);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in FolderItems * This,
                                __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } FolderItemsVtbl;
    interface FolderItems
    {
        CONST_VTBL struct FolderItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> Item(This,index,ppid) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
EXTERN_C const IID IID_FolderItemVerb;
    typedef struct FolderItemVerbVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in FolderItemVerb * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in FolderItemVerb * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in FolderItemVerb * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in FolderItemVerb * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in FolderItemVerb * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in FolderItemVerb * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            FolderItemVerb * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in FolderItemVerb * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in FolderItemVerb * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in FolderItemVerb * This,
                                __RPC__deref_out_opt BSTR *pbs);
                           HRESULT ( STDMETHODCALLTYPE *DoIt )(
            __RPC__in FolderItemVerb * This);
        END_INTERFACE
    } FolderItemVerbVtbl;
    interface FolderItemVerb
    {
        CONST_VTBL struct FolderItemVerbVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_Name(This,pbs) )
    ( (This)->lpVtbl -> DoIt(This) )
EXTERN_C const IID IID_FolderItemVerbs;
    typedef struct FolderItemVerbsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in FolderItemVerbs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in FolderItemVerbs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in FolderItemVerbs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in FolderItemVerbs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in FolderItemVerbs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in FolderItemVerbs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            FolderItemVerbs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in FolderItemVerbs * This,
                                __RPC__out long *plCount);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in FolderItemVerbs * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in FolderItemVerbs * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in FolderItemVerbs * This,
                                 VARIANT index,
                                __RPC__deref_out_opt FolderItemVerb **ppid);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in FolderItemVerbs * This,
                                __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } FolderItemVerbsVtbl;
    interface FolderItemVerbs
    {
        CONST_VTBL struct FolderItemVerbsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> Item(This,index,ppid) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
EXTERN_C const IID IID_Folder;
    typedef struct FolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Folder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Folder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Folder * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Folder * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Folder * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Folder * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Folder * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in Folder * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in Folder * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in Folder * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )(
            __RPC__in Folder * This,
                                __RPC__deref_out_opt Folder **ppsf);
                           HRESULT ( STDMETHODCALLTYPE *Items )(
            __RPC__in Folder * This,
                                __RPC__deref_out_opt FolderItems **ppid);
                           HRESULT ( STDMETHODCALLTYPE *ParseName )(
            __RPC__in Folder * This,
                       __RPC__in BSTR bName,
                                __RPC__deref_out_opt FolderItem **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NewFolder )(
            __RPC__in Folder * This,
                       __RPC__in BSTR bName,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *MoveHere )(
            __RPC__in Folder * This,
                       VARIANT vItem,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *CopyHere )(
            __RPC__in Folder * This,
                       VARIANT vItem,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *GetDetailsOf )(
            __RPC__in Folder * This,
                       VARIANT vItem,
                       int iColumn,
                                __RPC__deref_out_opt BSTR *pbs);
        END_INTERFACE
    } FolderVtbl;
    interface Folder
    {
        CONST_VTBL struct FolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,pbs) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_ParentFolder(This,ppsf) )
    ( (This)->lpVtbl -> Items(This,ppid) )
    ( (This)->lpVtbl -> ParseName(This,bName,ppid) )
    ( (This)->lpVtbl -> NewFolder(This,bName,vOptions) )
    ( (This)->lpVtbl -> MoveHere(This,vItem,vOptions) )
    ( (This)->lpVtbl -> CopyHere(This,vItem,vOptions) )
    ( (This)->lpVtbl -> GetDetailsOf(This,vItem,iColumn,pbs) )
EXTERN_C const IID IID_Folder2;
    typedef struct Folder2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Folder2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Folder2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Folder2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Folder2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Folder2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Folder2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Folder2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in Folder2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in Folder2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in Folder2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )(
            __RPC__in Folder2 * This,
                                __RPC__deref_out_opt Folder **ppsf);
                           HRESULT ( STDMETHODCALLTYPE *Items )(
            __RPC__in Folder2 * This,
                                __RPC__deref_out_opt FolderItems **ppid);
                           HRESULT ( STDMETHODCALLTYPE *ParseName )(
            __RPC__in Folder2 * This,
                       __RPC__in BSTR bName,
                                __RPC__deref_out_opt FolderItem **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NewFolder )(
            __RPC__in Folder2 * This,
                       __RPC__in BSTR bName,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *MoveHere )(
            __RPC__in Folder2 * This,
                       VARIANT vItem,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *CopyHere )(
            __RPC__in Folder2 * This,
                       VARIANT vItem,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *GetDetailsOf )(
            __RPC__in Folder2 * This,
                       VARIANT vItem,
                       int iColumn,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Self )(
            __RPC__in Folder2 * This,
                                __RPC__deref_out_opt FolderItem **ppfi);
                                    HRESULT ( STDMETHODCALLTYPE *get_OfflineStatus )(
            __RPC__in Folder2 * This,
                                __RPC__out LONG *pul);
                           HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in Folder2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_HaveToShowWebViewBarricade )(
            __RPC__in Folder2 * This,
                                __RPC__out VARIANT_BOOL *pbHaveToShowWebViewBarricade);
                           HRESULT ( STDMETHODCALLTYPE *DismissedWebViewBarricade )(
            __RPC__in Folder2 * This);
        END_INTERFACE
    } Folder2Vtbl;
    interface Folder2
    {
        CONST_VTBL struct Folder2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,pbs) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_ParentFolder(This,ppsf) )
    ( (This)->lpVtbl -> Items(This,ppid) )
    ( (This)->lpVtbl -> ParseName(This,bName,ppid) )
    ( (This)->lpVtbl -> NewFolder(This,bName,vOptions) )
    ( (This)->lpVtbl -> MoveHere(This,vItem,vOptions) )
    ( (This)->lpVtbl -> CopyHere(This,vItem,vOptions) )
    ( (This)->lpVtbl -> GetDetailsOf(This,vItem,iColumn,pbs) )
    ( (This)->lpVtbl -> get_Self(This,ppfi) )
    ( (This)->lpVtbl -> get_OfflineStatus(This,pul) )
    ( (This)->lpVtbl -> Synchronize(This) )
    ( (This)->lpVtbl -> get_HaveToShowWebViewBarricade(This,pbHaveToShowWebViewBarricade) )
    ( (This)->lpVtbl -> DismissedWebViewBarricade(This) )
EXTERN_C const IID IID_Folder3;
    typedef struct Folder3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Folder3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Folder3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Folder3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Folder3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Folder3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Folder3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Folder3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Title )(
            __RPC__in Folder3 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in Folder3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in Folder3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_ParentFolder )(
            __RPC__in Folder3 * This,
                                __RPC__deref_out_opt Folder **ppsf);
                           HRESULT ( STDMETHODCALLTYPE *Items )(
            __RPC__in Folder3 * This,
                                __RPC__deref_out_opt FolderItems **ppid);
                           HRESULT ( STDMETHODCALLTYPE *ParseName )(
            __RPC__in Folder3 * This,
                       __RPC__in BSTR bName,
                                __RPC__deref_out_opt FolderItem **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NewFolder )(
            __RPC__in Folder3 * This,
                       __RPC__in BSTR bName,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *MoveHere )(
            __RPC__in Folder3 * This,
                       VARIANT vItem,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *CopyHere )(
            __RPC__in Folder3 * This,
                       VARIANT vItem,
                                 VARIANT vOptions);
                           HRESULT ( STDMETHODCALLTYPE *GetDetailsOf )(
            __RPC__in Folder3 * This,
                       VARIANT vItem,
                       int iColumn,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Self )(
            __RPC__in Folder3 * This,
                                __RPC__deref_out_opt FolderItem **ppfi);
                                    HRESULT ( STDMETHODCALLTYPE *get_OfflineStatus )(
            __RPC__in Folder3 * This,
                                __RPC__out LONG *pul);
                           HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in Folder3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_HaveToShowWebViewBarricade )(
            __RPC__in Folder3 * This,
                                __RPC__out VARIANT_BOOL *pbHaveToShowWebViewBarricade);
                           HRESULT ( STDMETHODCALLTYPE *DismissedWebViewBarricade )(
            __RPC__in Folder3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ShowWebViewBarricade )(
            __RPC__in Folder3 * This,
                                __RPC__out VARIANT_BOOL *pbShowWebViewBarricade);
                                        HRESULT ( STDMETHODCALLTYPE *put_ShowWebViewBarricade )(
            __RPC__in Folder3 * This,
                       VARIANT_BOOL bShowWebViewBarricade);
        END_INTERFACE
    } Folder3Vtbl;
    interface Folder3
    {
        CONST_VTBL struct Folder3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Title(This,pbs) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_ParentFolder(This,ppsf) )
    ( (This)->lpVtbl -> Items(This,ppid) )
    ( (This)->lpVtbl -> ParseName(This,bName,ppid) )
    ( (This)->lpVtbl -> NewFolder(This,bName,vOptions) )
    ( (This)->lpVtbl -> MoveHere(This,vItem,vOptions) )
    ( (This)->lpVtbl -> CopyHere(This,vItem,vOptions) )
    ( (This)->lpVtbl -> GetDetailsOf(This,vItem,iColumn,pbs) )
    ( (This)->lpVtbl -> get_Self(This,ppfi) )
    ( (This)->lpVtbl -> get_OfflineStatus(This,pul) )
    ( (This)->lpVtbl -> Synchronize(This) )
    ( (This)->lpVtbl -> get_HaveToShowWebViewBarricade(This,pbHaveToShowWebViewBarricade) )
    ( (This)->lpVtbl -> DismissedWebViewBarricade(This) )
    ( (This)->lpVtbl -> get_ShowWebViewBarricade(This,pbShowWebViewBarricade) )
    ( (This)->lpVtbl -> put_ShowWebViewBarricade(This,bShowWebViewBarricade) )
EXTERN_C const IID IID_FolderItem2;
    typedef struct FolderItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in FolderItem2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in FolderItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in FolderItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in FolderItem2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in FolderItem2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in FolderItem2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            FolderItem2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in FolderItem2 * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *get_GetLink )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_GetFolder )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsLink )(
            __RPC__in FolderItem2 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsFolder )(
            __RPC__in FolderItem2 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsFileSystem )(
            __RPC__in FolderItem2 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_IsBrowsable )(
            __RPC__in FolderItem2 * This,
                                __RPC__out VARIANT_BOOL *pb);
                                    HRESULT ( STDMETHODCALLTYPE *get_ModifyDate )(
            __RPC__in FolderItem2 * This,
                                __RPC__out DATE *pdt);
                                    HRESULT ( STDMETHODCALLTYPE *put_ModifyDate )(
            __RPC__in FolderItem2 * This,
                       DATE dt);
                                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in FolderItem2 * This,
                                __RPC__out LONG *pul);
                                    HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                           HRESULT ( STDMETHODCALLTYPE *Verbs )(
            __RPC__in FolderItem2 * This,
                                __RPC__deref_out_opt FolderItemVerbs **ppfic);
                           HRESULT ( STDMETHODCALLTYPE *InvokeVerb )(
            __RPC__in FolderItem2 * This,
                                 VARIANT vVerb);
                           HRESULT ( STDMETHODCALLTYPE *InvokeVerbEx )(
            __RPC__in FolderItem2 * This,
                                 VARIANT vVerb,
                                 VARIANT vArgs);
                           HRESULT ( STDMETHODCALLTYPE *ExtendedProperty )(
            __RPC__in FolderItem2 * This,
                       __RPC__in BSTR bstrPropName,
                                __RPC__out VARIANT *pvRet);
        END_INTERFACE
    } FolderItem2Vtbl;
    interface FolderItem2
    {
        CONST_VTBL struct FolderItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_Name(This,pbs) )
    ( (This)->lpVtbl -> put_Name(This,bs) )
    ( (This)->lpVtbl -> get_Path(This,pbs) )
    ( (This)->lpVtbl -> get_GetLink(This,ppid) )
    ( (This)->lpVtbl -> get_GetFolder(This,ppid) )
    ( (This)->lpVtbl -> get_IsLink(This,pb) )
    ( (This)->lpVtbl -> get_IsFolder(This,pb) )
    ( (This)->lpVtbl -> get_IsFileSystem(This,pb) )
    ( (This)->lpVtbl -> get_IsBrowsable(This,pb) )
    ( (This)->lpVtbl -> get_ModifyDate(This,pdt) )
    ( (This)->lpVtbl -> put_ModifyDate(This,dt) )
    ( (This)->lpVtbl -> get_Size(This,pul) )
    ( (This)->lpVtbl -> get_Type(This,pbs) )
    ( (This)->lpVtbl -> Verbs(This,ppfic) )
    ( (This)->lpVtbl -> InvokeVerb(This,vVerb) )
    ( (This)->lpVtbl -> InvokeVerbEx(This,vVerb,vArgs) )
    ( (This)->lpVtbl -> ExtendedProperty(This,bstrPropName,pvRet) )
EXTERN_C const CLSID CLSID_ShellFolderItem;
class DECLSPEC_UUID("2fe352ea-fd1f-11d2-b1f4-00c04f8eeb3e")
ShellFolderItem;
EXTERN_C const IID IID_FolderItems2;
    typedef struct FolderItems2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in FolderItems2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in FolderItems2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in FolderItems2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in FolderItems2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in FolderItems2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in FolderItems2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            FolderItems2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in FolderItems2 * This,
                                __RPC__out long *plCount);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in FolderItems2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in FolderItems2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in FolderItems2 * This,
                                 VARIANT index,
                                __RPC__deref_out_opt FolderItem **ppid);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in FolderItems2 * This,
                                __RPC__deref_out_opt IUnknown **ppunk);
                           HRESULT ( STDMETHODCALLTYPE *InvokeVerbEx )(
            __RPC__in FolderItems2 * This,
                                 VARIANT vVerb,
                                 VARIANT vArgs);
        END_INTERFACE
    } FolderItems2Vtbl;
    interface FolderItems2
    {
        CONST_VTBL struct FolderItems2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> Item(This,index,ppid) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
    ( (This)->lpVtbl -> InvokeVerbEx(This,vVerb,vArgs) )
EXTERN_C const IID IID_FolderItems3;
    typedef struct FolderItems3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in FolderItems3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in FolderItems3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in FolderItems3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in FolderItems3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in FolderItems3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in FolderItems3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            FolderItems3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in FolderItems3 * This,
                                __RPC__out long *plCount);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in FolderItems3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in FolderItems3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in FolderItems3 * This,
                                 VARIANT index,
                                __RPC__deref_out_opt FolderItem **ppid);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in FolderItems3 * This,
                                __RPC__deref_out_opt IUnknown **ppunk);
                           HRESULT ( STDMETHODCALLTYPE *InvokeVerbEx )(
            __RPC__in FolderItems3 * This,
                                 VARIANT vVerb,
                                 VARIANT vArgs);
                           HRESULT ( STDMETHODCALLTYPE *Filter )(
            __RPC__in FolderItems3 * This,
                       long grfFlags,
                       __RPC__in BSTR bstrFileSpec);
                                        HRESULT ( STDMETHODCALLTYPE *get_Verbs )(
            __RPC__in FolderItems3 * This,
                                __RPC__deref_out_opt FolderItemVerbs **ppfic);
        END_INTERFACE
    } FolderItems3Vtbl;
    interface FolderItems3
    {
        CONST_VTBL struct FolderItems3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> Item(This,index,ppid) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
    ( (This)->lpVtbl -> InvokeVerbEx(This,vVerb,vArgs) )
    ( (This)->lpVtbl -> Filter(This,grfFlags,bstrFileSpec) )
    ( (This)->lpVtbl -> get_Verbs(This,ppfic) )
EXTERN_C const IID IID_IShellLinkDual;
    typedef struct IShellLinkDualVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellLinkDual * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellLinkDual * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellLinkDual * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellLinkDual * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellLinkDual * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellLinkDual * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellLinkDual * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IShellLinkDual * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_Path )(
            __RPC__in IShellLinkDual * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IShellLinkDual * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IShellLinkDual * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            __RPC__in IShellLinkDual * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            __RPC__in IShellLinkDual * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
            __RPC__in IShellLinkDual * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_Arguments )(
            __RPC__in IShellLinkDual * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Hotkey )(
            __RPC__in IShellLinkDual * This,
                                __RPC__out int *piHK);
                                    HRESULT ( STDMETHODCALLTYPE *put_Hotkey )(
            __RPC__in IShellLinkDual * This,
                       int iHK);
                                    HRESULT ( STDMETHODCALLTYPE *get_ShowCommand )(
            __RPC__in IShellLinkDual * This,
                                __RPC__out int *piShowCommand);
                                    HRESULT ( STDMETHODCALLTYPE *put_ShowCommand )(
            __RPC__in IShellLinkDual * This,
                       int iShowCommand);
                           HRESULT ( STDMETHODCALLTYPE *Resolve )(
            __RPC__in IShellLinkDual * This,
                       int fFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetIconLocation )(
            __RPC__in IShellLinkDual * This,
                        __RPC__deref_out_opt BSTR *pbs,
                                __RPC__out int *piIcon);
                           HRESULT ( STDMETHODCALLTYPE *SetIconLocation )(
            __RPC__in IShellLinkDual * This,
                       __RPC__in BSTR bs,
                       int iIcon);
                           HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IShellLinkDual * This,
                                 VARIANT vWhere);
        END_INTERFACE
    } IShellLinkDualVtbl;
    interface IShellLinkDual
    {
        CONST_VTBL struct IShellLinkDualVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Path(This,pbs) )
    ( (This)->lpVtbl -> put_Path(This,bs) )
    ( (This)->lpVtbl -> get_Description(This,pbs) )
    ( (This)->lpVtbl -> put_Description(This,bs) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,pbs) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,bs) )
    ( (This)->lpVtbl -> get_Arguments(This,pbs) )
    ( (This)->lpVtbl -> put_Arguments(This,bs) )
    ( (This)->lpVtbl -> get_Hotkey(This,piHK) )
    ( (This)->lpVtbl -> put_Hotkey(This,iHK) )
    ( (This)->lpVtbl -> get_ShowCommand(This,piShowCommand) )
    ( (This)->lpVtbl -> put_ShowCommand(This,iShowCommand) )
    ( (This)->lpVtbl -> Resolve(This,fFlags) )
    ( (This)->lpVtbl -> GetIconLocation(This,pbs,piIcon) )
    ( (This)->lpVtbl -> SetIconLocation(This,bs,iIcon) )
    ( (This)->lpVtbl -> Save(This,vWhere) )
EXTERN_C const IID IID_IShellLinkDual2;
    typedef struct IShellLinkDual2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellLinkDual2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellLinkDual2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellLinkDual2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellLinkDual2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellLinkDual2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellLinkDual2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellLinkDual2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IShellLinkDual2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_Path )(
            __RPC__in IShellLinkDual2 * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IShellLinkDual2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IShellLinkDual2 * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            __RPC__in IShellLinkDual2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            __RPC__in IShellLinkDual2 * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
            __RPC__in IShellLinkDual2 * This,
                                __RPC__deref_out_opt BSTR *pbs);
                                    HRESULT ( STDMETHODCALLTYPE *put_Arguments )(
            __RPC__in IShellLinkDual2 * This,
                       __RPC__in BSTR bs);
                                    HRESULT ( STDMETHODCALLTYPE *get_Hotkey )(
            __RPC__in IShellLinkDual2 * This,
                                __RPC__out int *piHK);
                                    HRESULT ( STDMETHODCALLTYPE *put_Hotkey )(
            __RPC__in IShellLinkDual2 * This,
                       int iHK);
                                    HRESULT ( STDMETHODCALLTYPE *get_ShowCommand )(
            __RPC__in IShellLinkDual2 * This,
                                __RPC__out int *piShowCommand);
                                    HRESULT ( STDMETHODCALLTYPE *put_ShowCommand )(
            __RPC__in IShellLinkDual2 * This,
                       int iShowCommand);
                           HRESULT ( STDMETHODCALLTYPE *Resolve )(
            __RPC__in IShellLinkDual2 * This,
                       int fFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetIconLocation )(
            __RPC__in IShellLinkDual2 * This,
                        __RPC__deref_out_opt BSTR *pbs,
                                __RPC__out int *piIcon);
                           HRESULT ( STDMETHODCALLTYPE *SetIconLocation )(
            __RPC__in IShellLinkDual2 * This,
                       __RPC__in BSTR bs,
                       int iIcon);
                           HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IShellLinkDual2 * This,
                                 VARIANT vWhere);
                                    HRESULT ( STDMETHODCALLTYPE *get_Target )(
            __RPC__in IShellLinkDual2 * This,
                                __RPC__deref_out_opt FolderItem **ppfi);
        END_INTERFACE
    } IShellLinkDual2Vtbl;
    interface IShellLinkDual2
    {
        CONST_VTBL struct IShellLinkDual2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Path(This,pbs) )
    ( (This)->lpVtbl -> put_Path(This,bs) )
    ( (This)->lpVtbl -> get_Description(This,pbs) )
    ( (This)->lpVtbl -> put_Description(This,bs) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,pbs) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,bs) )
    ( (This)->lpVtbl -> get_Arguments(This,pbs) )
    ( (This)->lpVtbl -> put_Arguments(This,bs) )
    ( (This)->lpVtbl -> get_Hotkey(This,piHK) )
    ( (This)->lpVtbl -> put_Hotkey(This,iHK) )
    ( (This)->lpVtbl -> get_ShowCommand(This,piShowCommand) )
    ( (This)->lpVtbl -> put_ShowCommand(This,iShowCommand) )
    ( (This)->lpVtbl -> Resolve(This,fFlags) )
    ( (This)->lpVtbl -> GetIconLocation(This,pbs,piIcon) )
    ( (This)->lpVtbl -> SetIconLocation(This,bs,iIcon) )
    ( (This)->lpVtbl -> Save(This,vWhere) )
    ( (This)->lpVtbl -> get_Target(This,ppfi) )
EXTERN_C const CLSID CLSID_ShellLinkObject;
class DECLSPEC_UUID("11219420-1768-11d1-95BE-00609797EA4F")
ShellLinkObject;
EXTERN_C const IID IID_IShellFolderViewDual;
    typedef struct IShellFolderViewDualVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellFolderViewDual * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellFolderViewDual * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellFolderViewDual * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellFolderViewDual * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellFolderViewDual * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellFolderViewDual * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellFolderViewDual * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellFolderViewDual * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellFolderViewDual * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Folder )(
            __RPC__in IShellFolderViewDual * This,
                                __RPC__deref_out_opt Folder **ppid);
                           HRESULT ( STDMETHODCALLTYPE *SelectedItems )(
            __RPC__in IShellFolderViewDual * This,
                                __RPC__deref_out_opt FolderItems **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_FocusedItem )(
            __RPC__in IShellFolderViewDual * This,
                                __RPC__deref_out_opt FolderItem **ppid);
                           HRESULT ( STDMETHODCALLTYPE *SelectItem )(
            __RPC__in IShellFolderViewDual * This,
                       __RPC__in VARIANT *pvfi,
                       int dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *PopupItemMenu )(
            __RPC__in IShellFolderViewDual * This,
                       __RPC__in_opt FolderItem *pfi,
                                 VARIANT vx,
                                 VARIANT vy,
                                __RPC__deref_out_opt BSTR *pbs);
                                                 HRESULT ( STDMETHODCALLTYPE *get_Script )(
            __RPC__in IShellFolderViewDual * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                 HRESULT ( STDMETHODCALLTYPE *get_ViewOptions )(
            __RPC__in IShellFolderViewDual * This,
                                __RPC__out long *plViewOptions);
        END_INTERFACE
    } IShellFolderViewDualVtbl;
    interface IShellFolderViewDual
    {
        CONST_VTBL struct IShellFolderViewDualVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_Folder(This,ppid) )
    ( (This)->lpVtbl -> SelectedItems(This,ppid) )
    ( (This)->lpVtbl -> get_FocusedItem(This,ppid) )
    ( (This)->lpVtbl -> SelectItem(This,pvfi,dwFlags) )
    ( (This)->lpVtbl -> PopupItemMenu(This,pfi,vx,vy,pbs) )
    ( (This)->lpVtbl -> get_Script(This,ppDisp) )
    ( (This)->lpVtbl -> get_ViewOptions(This,plViewOptions) )
EXTERN_C const IID IID_IShellFolderViewDual2;
    typedef struct IShellFolderViewDual2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellFolderViewDual2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellFolderViewDual2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellFolderViewDual2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellFolderViewDual2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellFolderViewDual2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellFolderViewDual2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellFolderViewDual2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Folder )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__deref_out_opt Folder **ppid);
                           HRESULT ( STDMETHODCALLTYPE *SelectedItems )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__deref_out_opt FolderItems **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_FocusedItem )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__deref_out_opt FolderItem **ppid);
                           HRESULT ( STDMETHODCALLTYPE *SelectItem )(
            __RPC__in IShellFolderViewDual2 * This,
                       __RPC__in VARIANT *pvfi,
                       int dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *PopupItemMenu )(
            __RPC__in IShellFolderViewDual2 * This,
                       __RPC__in_opt FolderItem *pfi,
                                 VARIANT vx,
                                 VARIANT vy,
                                __RPC__deref_out_opt BSTR *pbs);
                                                 HRESULT ( STDMETHODCALLTYPE *get_Script )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                 HRESULT ( STDMETHODCALLTYPE *get_ViewOptions )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__out long *plViewOptions);
                                    HRESULT ( STDMETHODCALLTYPE *get_CurrentViewMode )(
            __RPC__in IShellFolderViewDual2 * This,
                                __RPC__out UINT *pViewMode);
                                    HRESULT ( STDMETHODCALLTYPE *put_CurrentViewMode )(
            __RPC__in IShellFolderViewDual2 * This,
                       UINT ViewMode);
                           HRESULT ( STDMETHODCALLTYPE *SelectItemRelative )(
            __RPC__in IShellFolderViewDual2 * This,
                       int iRelative);
        END_INTERFACE
    } IShellFolderViewDual2Vtbl;
    interface IShellFolderViewDual2
    {
        CONST_VTBL struct IShellFolderViewDual2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_Folder(This,ppid) )
    ( (This)->lpVtbl -> SelectedItems(This,ppid) )
    ( (This)->lpVtbl -> get_FocusedItem(This,ppid) )
    ( (This)->lpVtbl -> SelectItem(This,pvfi,dwFlags) )
    ( (This)->lpVtbl -> PopupItemMenu(This,pfi,vx,vy,pbs) )
    ( (This)->lpVtbl -> get_Script(This,ppDisp) )
    ( (This)->lpVtbl -> get_ViewOptions(This,plViewOptions) )
    ( (This)->lpVtbl -> get_CurrentViewMode(This,pViewMode) )
    ( (This)->lpVtbl -> put_CurrentViewMode(This,ViewMode) )
    ( (This)->lpVtbl -> SelectItemRelative(This,iRelative) )
EXTERN_C const IID IID_IShellFolderViewDual3;
    typedef struct IShellFolderViewDual3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellFolderViewDual3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellFolderViewDual3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellFolderViewDual3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellFolderViewDual3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellFolderViewDual3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellFolderViewDual3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellFolderViewDual3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Folder )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt Folder **ppid);
                           HRESULT ( STDMETHODCALLTYPE *SelectedItems )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt FolderItems **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_FocusedItem )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt FolderItem **ppid);
                           HRESULT ( STDMETHODCALLTYPE *SelectItem )(
            __RPC__in IShellFolderViewDual3 * This,
                       __RPC__in VARIANT *pvfi,
                       int dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *PopupItemMenu )(
            __RPC__in IShellFolderViewDual3 * This,
                       __RPC__in_opt FolderItem *pfi,
                                 VARIANT vx,
                                 VARIANT vy,
                                __RPC__deref_out_opt BSTR *pbs);
                                                 HRESULT ( STDMETHODCALLTYPE *get_Script )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                 HRESULT ( STDMETHODCALLTYPE *get_ViewOptions )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__out long *plViewOptions);
                                    HRESULT ( STDMETHODCALLTYPE *get_CurrentViewMode )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__out UINT *pViewMode);
                                    HRESULT ( STDMETHODCALLTYPE *put_CurrentViewMode )(
            __RPC__in IShellFolderViewDual3 * This,
                       UINT ViewMode);
                           HRESULT ( STDMETHODCALLTYPE *SelectItemRelative )(
            __RPC__in IShellFolderViewDual3 * This,
                       int iRelative);
                                    HRESULT ( STDMETHODCALLTYPE *get_GroupBy )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt BSTR *pbstrGroupBy);
                                    HRESULT ( STDMETHODCALLTYPE *put_GroupBy )(
            __RPC__in IShellFolderViewDual3 * This,
                       __RPC__in BSTR bstrGroupBy);
                                    HRESULT ( STDMETHODCALLTYPE *get_FolderFlags )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__out DWORD *pdwFlags);
                                    HRESULT ( STDMETHODCALLTYPE *put_FolderFlags )(
            __RPC__in IShellFolderViewDual3 * This,
                       DWORD dwFlags);
                                    HRESULT ( STDMETHODCALLTYPE *get_SortColumns )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__deref_out_opt BSTR *pbstrSortColumns);
                                    HRESULT ( STDMETHODCALLTYPE *put_SortColumns )(
            __RPC__in IShellFolderViewDual3 * This,
                       __RPC__in BSTR bstrSortColumns);
                                    HRESULT ( STDMETHODCALLTYPE *put_IconSize )(
            __RPC__in IShellFolderViewDual3 * This,
                       int iIconSize);
                                    HRESULT ( STDMETHODCALLTYPE *get_IconSize )(
            __RPC__in IShellFolderViewDual3 * This,
                                __RPC__out int *piIconSize);
                           HRESULT ( STDMETHODCALLTYPE *FilterView )(
            __RPC__in IShellFolderViewDual3 * This,
                               __RPC__in_opt BSTR bstrFilterText);
        END_INTERFACE
    } IShellFolderViewDual3Vtbl;
    interface IShellFolderViewDual3
    {
        CONST_VTBL struct IShellFolderViewDual3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> get_Folder(This,ppid) )
    ( (This)->lpVtbl -> SelectedItems(This,ppid) )
    ( (This)->lpVtbl -> get_FocusedItem(This,ppid) )
    ( (This)->lpVtbl -> SelectItem(This,pvfi,dwFlags) )
    ( (This)->lpVtbl -> PopupItemMenu(This,pfi,vx,vy,pbs) )
    ( (This)->lpVtbl -> get_Script(This,ppDisp) )
    ( (This)->lpVtbl -> get_ViewOptions(This,plViewOptions) )
    ( (This)->lpVtbl -> get_CurrentViewMode(This,pViewMode) )
    ( (This)->lpVtbl -> put_CurrentViewMode(This,ViewMode) )
    ( (This)->lpVtbl -> SelectItemRelative(This,iRelative) )
    ( (This)->lpVtbl -> get_GroupBy(This,pbstrGroupBy) )
    ( (This)->lpVtbl -> put_GroupBy(This,bstrGroupBy) )
    ( (This)->lpVtbl -> get_FolderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_FolderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_SortColumns(This,pbstrSortColumns) )
    ( (This)->lpVtbl -> put_SortColumns(This,bstrSortColumns) )
    ( (This)->lpVtbl -> put_IconSize(This,iIconSize) )
    ( (This)->lpVtbl -> get_IconSize(This,piIconSize) )
    ( (This)->lpVtbl -> FilterView(This,bstrFilterText) )
EXTERN_C const CLSID CLSID_ShellFolderView;
class DECLSPEC_UUID("62112AA1-EBE4-11cf-A5FB-0020AFE7292D")
ShellFolderView;
EXTERN_C const IID IID_IShellDispatch;
    typedef struct IShellDispatchVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellDispatch * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellDispatch * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellDispatch * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellDispatch * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellDispatch * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellDispatch * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellDispatch * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellDispatch * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellDispatch * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NameSpace )(
            __RPC__in IShellDispatch * This,
                       VARIANT vDir,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *BrowseForFolder )(
            __RPC__in IShellDispatch * This,
                       long Hwnd,
                       __RPC__in BSTR Title,
                       long Options,
                                 VARIANT RootFolder,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *Windows )(
            __RPC__in IShellDispatch * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IShellDispatch * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *Explore )(
            __RPC__in IShellDispatch * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *MinimizeAll )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *UndoMinimizeALL )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *FileRun )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *CascadeWindows )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *TileVertically )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *TileHorizontally )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *ShutdownWindows )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *EjectPC )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTime )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *TrayProperties )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *FindFiles )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *FindComputer )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshMenu )(
            __RPC__in IShellDispatch * This);
                           HRESULT ( STDMETHODCALLTYPE *ControlPanelItem )(
            __RPC__in IShellDispatch * This,
                       __RPC__in BSTR bstrDir);
        END_INTERFACE
    } IShellDispatchVtbl;
    interface IShellDispatch
    {
        CONST_VTBL struct IShellDispatchVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
    ( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
    ( (This)->lpVtbl -> Windows(This,ppid) )
    ( (This)->lpVtbl -> Open(This,vDir) )
    ( (This)->lpVtbl -> Explore(This,vDir) )
    ( (This)->lpVtbl -> MinimizeAll(This) )
    ( (This)->lpVtbl -> UndoMinimizeALL(This) )
    ( (This)->lpVtbl -> FileRun(This) )
    ( (This)->lpVtbl -> CascadeWindows(This) )
    ( (This)->lpVtbl -> TileVertically(This) )
    ( (This)->lpVtbl -> TileHorizontally(This) )
    ( (This)->lpVtbl -> ShutdownWindows(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> EjectPC(This) )
    ( (This)->lpVtbl -> SetTime(This) )
    ( (This)->lpVtbl -> TrayProperties(This) )
    ( (This)->lpVtbl -> Help(This) )
    ( (This)->lpVtbl -> FindFiles(This) )
    ( (This)->lpVtbl -> FindComputer(This) )
    ( (This)->lpVtbl -> RefreshMenu(This) )
    ( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
EXTERN_C const IID IID_IShellDispatch2;
    typedef struct IShellDispatch2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellDispatch2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellDispatch2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellDispatch2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellDispatch2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellDispatch2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellDispatch2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellDispatch2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NameSpace )(
            __RPC__in IShellDispatch2 * This,
                       VARIANT vDir,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *BrowseForFolder )(
            __RPC__in IShellDispatch2 * This,
                       long Hwnd,
                       __RPC__in BSTR Title,
                       long Options,
                                 VARIANT RootFolder,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *Windows )(
            __RPC__in IShellDispatch2 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IShellDispatch2 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *Explore )(
            __RPC__in IShellDispatch2 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *MinimizeAll )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *UndoMinimizeALL )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *FileRun )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *CascadeWindows )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileVertically )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileHorizontally )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *ShutdownWindows )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *EjectPC )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTime )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *TrayProperties )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindFiles )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindComputer )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshMenu )(
            __RPC__in IShellDispatch2 * This);
                           HRESULT ( STDMETHODCALLTYPE *ControlPanelItem )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR bstrDir);
                           HRESULT ( STDMETHODCALLTYPE *IsRestricted )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR Group,
                       __RPC__in BSTR Restriction,
                                __RPC__out long *plRestrictValue);
                           HRESULT ( STDMETHODCALLTYPE *ShellExecute )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR File,
                                 VARIANT vArgs,
                                 VARIANT vDir,
                                 VARIANT vOperation,
                                 VARIANT vShow);
                           HRESULT ( STDMETHODCALLTYPE *FindPrinter )(
            __RPC__in IShellDispatch2 * This,
                                 __RPC__in BSTR name,
                                 __RPC__in BSTR location,
                                 __RPC__in BSTR model);
                           HRESULT ( STDMETHODCALLTYPE *GetSystemInformation )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pv);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStart )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStop )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *IsServiceRunning )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pRunning);
                           HRESULT ( STDMETHODCALLTYPE *CanStartStopService )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pCanStartStop);
                           HRESULT ( STDMETHODCALLTYPE *ShowBrowserBar )(
            __RPC__in IShellDispatch2 * This,
                       __RPC__in BSTR bstrClsid,
                       VARIANT bShow,
                                __RPC__out VARIANT *pSuccess);
        END_INTERFACE
    } IShellDispatch2Vtbl;
    interface IShellDispatch2
    {
        CONST_VTBL struct IShellDispatch2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
    ( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
    ( (This)->lpVtbl -> Windows(This,ppid) )
    ( (This)->lpVtbl -> Open(This,vDir) )
    ( (This)->lpVtbl -> Explore(This,vDir) )
    ( (This)->lpVtbl -> MinimizeAll(This) )
    ( (This)->lpVtbl -> UndoMinimizeALL(This) )
    ( (This)->lpVtbl -> FileRun(This) )
    ( (This)->lpVtbl -> CascadeWindows(This) )
    ( (This)->lpVtbl -> TileVertically(This) )
    ( (This)->lpVtbl -> TileHorizontally(This) )
    ( (This)->lpVtbl -> ShutdownWindows(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> EjectPC(This) )
    ( (This)->lpVtbl -> SetTime(This) )
    ( (This)->lpVtbl -> TrayProperties(This) )
    ( (This)->lpVtbl -> Help(This) )
    ( (This)->lpVtbl -> FindFiles(This) )
    ( (This)->lpVtbl -> FindComputer(This) )
    ( (This)->lpVtbl -> RefreshMenu(This) )
    ( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
    ( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
    ( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
    ( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
    ( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
    ( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
    ( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
    ( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
EXTERN_C const IID IID_IShellDispatch3;
    typedef struct IShellDispatch3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellDispatch3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellDispatch3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellDispatch3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellDispatch3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellDispatch3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellDispatch3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellDispatch3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NameSpace )(
            __RPC__in IShellDispatch3 * This,
                       VARIANT vDir,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *BrowseForFolder )(
            __RPC__in IShellDispatch3 * This,
                       long Hwnd,
                       __RPC__in BSTR Title,
                       long Options,
                                 VARIANT RootFolder,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *Windows )(
            __RPC__in IShellDispatch3 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IShellDispatch3 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *Explore )(
            __RPC__in IShellDispatch3 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *MinimizeAll )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *UndoMinimizeALL )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *FileRun )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *CascadeWindows )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileVertically )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileHorizontally )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *ShutdownWindows )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *EjectPC )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTime )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *TrayProperties )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindFiles )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindComputer )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshMenu )(
            __RPC__in IShellDispatch3 * This);
                           HRESULT ( STDMETHODCALLTYPE *ControlPanelItem )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR bstrDir);
                           HRESULT ( STDMETHODCALLTYPE *IsRestricted )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR Group,
                       __RPC__in BSTR Restriction,
                                __RPC__out long *plRestrictValue);
                           HRESULT ( STDMETHODCALLTYPE *ShellExecute )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR File,
                                 VARIANT vArgs,
                                 VARIANT vDir,
                                 VARIANT vOperation,
                                 VARIANT vShow);
                           HRESULT ( STDMETHODCALLTYPE *FindPrinter )(
            __RPC__in IShellDispatch3 * This,
                                 __RPC__in BSTR name,
                                 __RPC__in BSTR location,
                                 __RPC__in BSTR model);
                           HRESULT ( STDMETHODCALLTYPE *GetSystemInformation )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pv);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStart )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStop )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *IsServiceRunning )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pRunning);
                           HRESULT ( STDMETHODCALLTYPE *CanStartStopService )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pCanStartStop);
                           HRESULT ( STDMETHODCALLTYPE *ShowBrowserBar )(
            __RPC__in IShellDispatch3 * This,
                       __RPC__in BSTR bstrClsid,
                       VARIANT bShow,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *AddToRecent )(
            __RPC__in IShellDispatch3 * This,
                       VARIANT varFile,
                                 __RPC__in BSTR bstrCategory);
        END_INTERFACE
    } IShellDispatch3Vtbl;
    interface IShellDispatch3
    {
        CONST_VTBL struct IShellDispatch3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
    ( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
    ( (This)->lpVtbl -> Windows(This,ppid) )
    ( (This)->lpVtbl -> Open(This,vDir) )
    ( (This)->lpVtbl -> Explore(This,vDir) )
    ( (This)->lpVtbl -> MinimizeAll(This) )
    ( (This)->lpVtbl -> UndoMinimizeALL(This) )
    ( (This)->lpVtbl -> FileRun(This) )
    ( (This)->lpVtbl -> CascadeWindows(This) )
    ( (This)->lpVtbl -> TileVertically(This) )
    ( (This)->lpVtbl -> TileHorizontally(This) )
    ( (This)->lpVtbl -> ShutdownWindows(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> EjectPC(This) )
    ( (This)->lpVtbl -> SetTime(This) )
    ( (This)->lpVtbl -> TrayProperties(This) )
    ( (This)->lpVtbl -> Help(This) )
    ( (This)->lpVtbl -> FindFiles(This) )
    ( (This)->lpVtbl -> FindComputer(This) )
    ( (This)->lpVtbl -> RefreshMenu(This) )
    ( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
    ( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
    ( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
    ( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
    ( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
    ( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
    ( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
    ( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
    ( (This)->lpVtbl -> AddToRecent(This,varFile,bstrCategory) )
EXTERN_C const IID IID_IShellDispatch4;
    typedef struct IShellDispatch4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellDispatch4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellDispatch4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellDispatch4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellDispatch4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellDispatch4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellDispatch4 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellDispatch4 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NameSpace )(
            __RPC__in IShellDispatch4 * This,
                       VARIANT vDir,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *BrowseForFolder )(
            __RPC__in IShellDispatch4 * This,
                       long Hwnd,
                       __RPC__in BSTR Title,
                       long Options,
                                 VARIANT RootFolder,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *Windows )(
            __RPC__in IShellDispatch4 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IShellDispatch4 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *Explore )(
            __RPC__in IShellDispatch4 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *MinimizeAll )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *UndoMinimizeALL )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *FileRun )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *CascadeWindows )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileVertically )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileHorizontally )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *ShutdownWindows )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *EjectPC )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTime )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *TrayProperties )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindFiles )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindComputer )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshMenu )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *ControlPanelItem )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR bstrDir);
                           HRESULT ( STDMETHODCALLTYPE *IsRestricted )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR Group,
                       __RPC__in BSTR Restriction,
                                __RPC__out long *plRestrictValue);
                           HRESULT ( STDMETHODCALLTYPE *ShellExecute )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR File,
                                 VARIANT vArgs,
                                 VARIANT vDir,
                                 VARIANT vOperation,
                                 VARIANT vShow);
                           HRESULT ( STDMETHODCALLTYPE *FindPrinter )(
            __RPC__in IShellDispatch4 * This,
                                 __RPC__in BSTR name,
                                 __RPC__in BSTR location,
                                 __RPC__in BSTR model);
                           HRESULT ( STDMETHODCALLTYPE *GetSystemInformation )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pv);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStart )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStop )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *IsServiceRunning )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pRunning);
                           HRESULT ( STDMETHODCALLTYPE *CanStartStopService )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pCanStartStop);
                           HRESULT ( STDMETHODCALLTYPE *ShowBrowserBar )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR bstrClsid,
                       VARIANT bShow,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *AddToRecent )(
            __RPC__in IShellDispatch4 * This,
                       VARIANT varFile,
                                 __RPC__in BSTR bstrCategory);
                           HRESULT ( STDMETHODCALLTYPE *WindowsSecurity )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *ToggleDesktop )(
            __RPC__in IShellDispatch4 * This);
                           HRESULT ( STDMETHODCALLTYPE *ExplorerPolicy )(
            __RPC__in IShellDispatch4 * This,
                       __RPC__in BSTR bstrPolicyName,
                                __RPC__out VARIANT *pValue);
                           HRESULT ( STDMETHODCALLTYPE *GetSetting )(
            __RPC__in IShellDispatch4 * This,
                       long lSetting,
                                __RPC__out VARIANT_BOOL *pResult);
        END_INTERFACE
    } IShellDispatch4Vtbl;
    interface IShellDispatch4
    {
        CONST_VTBL struct IShellDispatch4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
    ( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
    ( (This)->lpVtbl -> Windows(This,ppid) )
    ( (This)->lpVtbl -> Open(This,vDir) )
    ( (This)->lpVtbl -> Explore(This,vDir) )
    ( (This)->lpVtbl -> MinimizeAll(This) )
    ( (This)->lpVtbl -> UndoMinimizeALL(This) )
    ( (This)->lpVtbl -> FileRun(This) )
    ( (This)->lpVtbl -> CascadeWindows(This) )
    ( (This)->lpVtbl -> TileVertically(This) )
    ( (This)->lpVtbl -> TileHorizontally(This) )
    ( (This)->lpVtbl -> ShutdownWindows(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> EjectPC(This) )
    ( (This)->lpVtbl -> SetTime(This) )
    ( (This)->lpVtbl -> TrayProperties(This) )
    ( (This)->lpVtbl -> Help(This) )
    ( (This)->lpVtbl -> FindFiles(This) )
    ( (This)->lpVtbl -> FindComputer(This) )
    ( (This)->lpVtbl -> RefreshMenu(This) )
    ( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
    ( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
    ( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
    ( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
    ( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
    ( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
    ( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
    ( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
    ( (This)->lpVtbl -> AddToRecent(This,varFile,bstrCategory) )
    ( (This)->lpVtbl -> WindowsSecurity(This) )
    ( (This)->lpVtbl -> ToggleDesktop(This) )
    ( (This)->lpVtbl -> ExplorerPolicy(This,bstrPolicyName,pValue) )
    ( (This)->lpVtbl -> GetSetting(This,lSetting,pResult) )
EXTERN_C const IID IID_IShellDispatch5;
    typedef struct IShellDispatch5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellDispatch5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellDispatch5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellDispatch5 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellDispatch5 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellDispatch5 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellDispatch5 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellDispatch5 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NameSpace )(
            __RPC__in IShellDispatch5 * This,
                       VARIANT vDir,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *BrowseForFolder )(
            __RPC__in IShellDispatch5 * This,
                       long Hwnd,
                       __RPC__in BSTR Title,
                       long Options,
                                 VARIANT RootFolder,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *Windows )(
            __RPC__in IShellDispatch5 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IShellDispatch5 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *Explore )(
            __RPC__in IShellDispatch5 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *MinimizeAll )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *UndoMinimizeALL )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *FileRun )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *CascadeWindows )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileVertically )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileHorizontally )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *ShutdownWindows )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *EjectPC )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTime )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *TrayProperties )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindFiles )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindComputer )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshMenu )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *ControlPanelItem )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR bstrDir);
                           HRESULT ( STDMETHODCALLTYPE *IsRestricted )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR Group,
                       __RPC__in BSTR Restriction,
                                __RPC__out long *plRestrictValue);
                           HRESULT ( STDMETHODCALLTYPE *ShellExecute )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR File,
                                 VARIANT vArgs,
                                 VARIANT vDir,
                                 VARIANT vOperation,
                                 VARIANT vShow);
                           HRESULT ( STDMETHODCALLTYPE *FindPrinter )(
            __RPC__in IShellDispatch5 * This,
                                 __RPC__in BSTR name,
                                 __RPC__in BSTR location,
                                 __RPC__in BSTR model);
                           HRESULT ( STDMETHODCALLTYPE *GetSystemInformation )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pv);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStart )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStop )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *IsServiceRunning )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pRunning);
                           HRESULT ( STDMETHODCALLTYPE *CanStartStopService )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pCanStartStop);
                           HRESULT ( STDMETHODCALLTYPE *ShowBrowserBar )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR bstrClsid,
                       VARIANT bShow,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *AddToRecent )(
            __RPC__in IShellDispatch5 * This,
                       VARIANT varFile,
                                 __RPC__in BSTR bstrCategory);
                           HRESULT ( STDMETHODCALLTYPE *WindowsSecurity )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *ToggleDesktop )(
            __RPC__in IShellDispatch5 * This);
                           HRESULT ( STDMETHODCALLTYPE *ExplorerPolicy )(
            __RPC__in IShellDispatch5 * This,
                       __RPC__in BSTR bstrPolicyName,
                                __RPC__out VARIANT *pValue);
                           HRESULT ( STDMETHODCALLTYPE *GetSetting )(
            __RPC__in IShellDispatch5 * This,
                       long lSetting,
                                __RPC__out VARIANT_BOOL *pResult);
                           HRESULT ( STDMETHODCALLTYPE *WindowSwitcher )(
            __RPC__in IShellDispatch5 * This);
        END_INTERFACE
    } IShellDispatch5Vtbl;
    interface IShellDispatch5
    {
        CONST_VTBL struct IShellDispatch5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
    ( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
    ( (This)->lpVtbl -> Windows(This,ppid) )
    ( (This)->lpVtbl -> Open(This,vDir) )
    ( (This)->lpVtbl -> Explore(This,vDir) )
    ( (This)->lpVtbl -> MinimizeAll(This) )
    ( (This)->lpVtbl -> UndoMinimizeALL(This) )
    ( (This)->lpVtbl -> FileRun(This) )
    ( (This)->lpVtbl -> CascadeWindows(This) )
    ( (This)->lpVtbl -> TileVertically(This) )
    ( (This)->lpVtbl -> TileHorizontally(This) )
    ( (This)->lpVtbl -> ShutdownWindows(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> EjectPC(This) )
    ( (This)->lpVtbl -> SetTime(This) )
    ( (This)->lpVtbl -> TrayProperties(This) )
    ( (This)->lpVtbl -> Help(This) )
    ( (This)->lpVtbl -> FindFiles(This) )
    ( (This)->lpVtbl -> FindComputer(This) )
    ( (This)->lpVtbl -> RefreshMenu(This) )
    ( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
    ( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
    ( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
    ( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
    ( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
    ( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
    ( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
    ( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
    ( (This)->lpVtbl -> AddToRecent(This,varFile,bstrCategory) )
    ( (This)->lpVtbl -> WindowsSecurity(This) )
    ( (This)->lpVtbl -> ToggleDesktop(This) )
    ( (This)->lpVtbl -> ExplorerPolicy(This,bstrPolicyName,pValue) )
    ( (This)->lpVtbl -> GetSetting(This,lSetting,pResult) )
    ( (This)->lpVtbl -> WindowSwitcher(This) )
EXTERN_C const IID IID_IShellDispatch6;
    typedef struct IShellDispatch6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellDispatch6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellDispatch6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellDispatch6 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellDispatch6 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellDispatch6 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IShellDispatch6 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                                    HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IShellDispatch6 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *NameSpace )(
            __RPC__in IShellDispatch6 * This,
                       VARIANT vDir,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *BrowseForFolder )(
            __RPC__in IShellDispatch6 * This,
                       long Hwnd,
                       __RPC__in BSTR Title,
                       long Options,
                                 VARIANT RootFolder,
                                __RPC__deref_out_opt Folder **ppsdf);
                           HRESULT ( STDMETHODCALLTYPE *Windows )(
            __RPC__in IShellDispatch6 * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                           HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IShellDispatch6 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *Explore )(
            __RPC__in IShellDispatch6 * This,
                       VARIANT vDir);
                           HRESULT ( STDMETHODCALLTYPE *MinimizeAll )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *UndoMinimizeALL )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *FileRun )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *CascadeWindows )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileVertically )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *TileHorizontally )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *ShutdownWindows )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *EjectPC )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTime )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *TrayProperties )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *Help )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindFiles )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *FindComputer )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshMenu )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *ControlPanelItem )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR bstrDir);
                           HRESULT ( STDMETHODCALLTYPE *IsRestricted )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR Group,
                       __RPC__in BSTR Restriction,
                                __RPC__out long *plRestrictValue);
                           HRESULT ( STDMETHODCALLTYPE *ShellExecute )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR File,
                                 VARIANT vArgs,
                                 VARIANT vDir,
                                 VARIANT vOperation,
                                 VARIANT vShow);
                           HRESULT ( STDMETHODCALLTYPE *FindPrinter )(
            __RPC__in IShellDispatch6 * This,
                                 __RPC__in BSTR name,
                                 __RPC__in BSTR location,
                                 __RPC__in BSTR model);
                           HRESULT ( STDMETHODCALLTYPE *GetSystemInformation )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pv);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStart )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *ServiceStop )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR ServiceName,
                       VARIANT Persistent,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *IsServiceRunning )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pRunning);
                           HRESULT ( STDMETHODCALLTYPE *CanStartStopService )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR ServiceName,
                                __RPC__out VARIANT *pCanStartStop);
                           HRESULT ( STDMETHODCALLTYPE *ShowBrowserBar )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR bstrClsid,
                       VARIANT bShow,
                                __RPC__out VARIANT *pSuccess);
                           HRESULT ( STDMETHODCALLTYPE *AddToRecent )(
            __RPC__in IShellDispatch6 * This,
                       VARIANT varFile,
                                 __RPC__in BSTR bstrCategory);
                           HRESULT ( STDMETHODCALLTYPE *WindowsSecurity )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *ToggleDesktop )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *ExplorerPolicy )(
            __RPC__in IShellDispatch6 * This,
                       __RPC__in BSTR bstrPolicyName,
                                __RPC__out VARIANT *pValue);
                           HRESULT ( STDMETHODCALLTYPE *GetSetting )(
            __RPC__in IShellDispatch6 * This,
                       long lSetting,
                                __RPC__out VARIANT_BOOL *pResult);
                           HRESULT ( STDMETHODCALLTYPE *WindowSwitcher )(
            __RPC__in IShellDispatch6 * This);
                           HRESULT ( STDMETHODCALLTYPE *SearchCommand )(
            __RPC__in IShellDispatch6 * This);
        END_INTERFACE
    } IShellDispatch6Vtbl;
    interface IShellDispatch6
    {
        CONST_VTBL struct IShellDispatch6Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Application(This,ppid) )
    ( (This)->lpVtbl -> get_Parent(This,ppid) )
    ( (This)->lpVtbl -> NameSpace(This,vDir,ppsdf) )
    ( (This)->lpVtbl -> BrowseForFolder(This,Hwnd,Title,Options,RootFolder,ppsdf) )
    ( (This)->lpVtbl -> Windows(This,ppid) )
    ( (This)->lpVtbl -> Open(This,vDir) )
    ( (This)->lpVtbl -> Explore(This,vDir) )
    ( (This)->lpVtbl -> MinimizeAll(This) )
    ( (This)->lpVtbl -> UndoMinimizeALL(This) )
    ( (This)->lpVtbl -> FileRun(This) )
    ( (This)->lpVtbl -> CascadeWindows(This) )
    ( (This)->lpVtbl -> TileVertically(This) )
    ( (This)->lpVtbl -> TileHorizontally(This) )
    ( (This)->lpVtbl -> ShutdownWindows(This) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> EjectPC(This) )
    ( (This)->lpVtbl -> SetTime(This) )
    ( (This)->lpVtbl -> TrayProperties(This) )
    ( (This)->lpVtbl -> Help(This) )
    ( (This)->lpVtbl -> FindFiles(This) )
    ( (This)->lpVtbl -> FindComputer(This) )
    ( (This)->lpVtbl -> RefreshMenu(This) )
    ( (This)->lpVtbl -> ControlPanelItem(This,bstrDir) )
    ( (This)->lpVtbl -> IsRestricted(This,Group,Restriction,plRestrictValue) )
    ( (This)->lpVtbl -> ShellExecute(This,File,vArgs,vDir,vOperation,vShow) )
    ( (This)->lpVtbl -> FindPrinter(This,name,location,model) )
    ( (This)->lpVtbl -> GetSystemInformation(This,name,pv) )
    ( (This)->lpVtbl -> ServiceStart(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> ServiceStop(This,ServiceName,Persistent,pSuccess) )
    ( (This)->lpVtbl -> IsServiceRunning(This,ServiceName,pRunning) )
    ( (This)->lpVtbl -> CanStartStopService(This,ServiceName,pCanStartStop) )
    ( (This)->lpVtbl -> ShowBrowserBar(This,bstrClsid,bShow,pSuccess) )
    ( (This)->lpVtbl -> AddToRecent(This,varFile,bstrCategory) )
    ( (This)->lpVtbl -> WindowsSecurity(This) )
    ( (This)->lpVtbl -> ToggleDesktop(This) )
    ( (This)->lpVtbl -> ExplorerPolicy(This,bstrPolicyName,pValue) )
    ( (This)->lpVtbl -> GetSetting(This,lSetting,pResult) )
    ( (This)->lpVtbl -> WindowSwitcher(This) )
    ( (This)->lpVtbl -> SearchCommand(This) )
EXTERN_C const CLSID CLSID_Shell;
class DECLSPEC_UUID("13709620-C279-11CE-A49E-444553540000")
Shell;
EXTERN_C const CLSID CLSID_ShellDispatchInproc;
class DECLSPEC_UUID("0A89A860-D7B1-11CE-8350-444553540000")
ShellDispatchInproc;
EXTERN_C const IID IID_IFileSearchBand;
    typedef struct IFileSearchBandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileSearchBand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileSearchBand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileSearchBand * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFileSearchBand * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFileSearchBand * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFileSearchBand * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFileSearchBand * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in IFileSearchBand * This);
                               HRESULT ( STDMETHODCALLTYPE *SetSearchParameters )(
            __RPC__in IFileSearchBand * This,
                       __RPC__deref_in_opt BSTR *pbstrSearchID,
                       VARIANT_BOOL bNavToResults,
                                 __RPC__in VARIANT *pvarScope,
                                 __RPC__in VARIANT *pvarQueryFile);
                                        HRESULT ( STDMETHODCALLTYPE *get_SearchID )(
            __RPC__in IFileSearchBand * This,
                                __RPC__deref_out_opt BSTR *pbstrSearchID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Scope )(
            __RPC__in IFileSearchBand * This,
                                __RPC__out VARIANT *pvarScope);
                                        HRESULT ( STDMETHODCALLTYPE *get_QueryFile )(
            __RPC__in IFileSearchBand * This,
                                __RPC__out VARIANT *pvarFile);
        END_INTERFACE
    } IFileSearchBandVtbl;
    interface IFileSearchBand
    {
        CONST_VTBL struct IFileSearchBandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetFocus(This) )
    ( (This)->lpVtbl -> SetSearchParameters(This,pbstrSearchID,bNavToResults,pvarScope,pvarQueryFile) )
    ( (This)->lpVtbl -> get_SearchID(This,pbstrSearchID) )
    ( (This)->lpVtbl -> get_Scope(This,pvarScope) )
    ( (This)->lpVtbl -> get_QueryFile(This,pvarFile) )
EXTERN_C const CLSID CLSID_FileSearchBand;
class DECLSPEC_UUID("C4EE31F3-4768-11D2-BE5C-00A0C9A83DA1")
FileSearchBand;
EXTERN_C const IID IID_IWebWizardHost;
    typedef struct IWebWizardHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebWizardHost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebWizardHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebWizardHost * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWebWizardHost * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWebWizardHost * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWebWizardHost * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWebWizardHost * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *FinalBack )(
            __RPC__in IWebWizardHost * This);
                   HRESULT ( STDMETHODCALLTYPE *FinalNext )(
            __RPC__in IWebWizardHost * This);
                   HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IWebWizardHost * This);
                            HRESULT ( STDMETHODCALLTYPE *put_Caption )(
            __RPC__in IWebWizardHost * This,
                       __RPC__in BSTR bstrCaption);
                            HRESULT ( STDMETHODCALLTYPE *get_Caption )(
            __RPC__in IWebWizardHost * This,
                                __RPC__deref_out_opt BSTR *pbstrCaption);
                            HRESULT ( STDMETHODCALLTYPE *put_Property )(
            __RPC__in IWebWizardHost * This,
                       __RPC__in BSTR bstrPropertyName,
                       __RPC__in VARIANT *pvProperty);
                            HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in IWebWizardHost * This,
                       __RPC__in BSTR bstrPropertyName,
                                __RPC__out VARIANT *pvProperty);
                   HRESULT ( STDMETHODCALLTYPE *SetWizardButtons )(
            __RPC__in IWebWizardHost * This,
                       VARIANT_BOOL vfEnableBack,
                       VARIANT_BOOL vfEnableNext,
                       VARIANT_BOOL vfLastPage);
                   HRESULT ( STDMETHODCALLTYPE *SetHeaderText )(
            __RPC__in IWebWizardHost * This,
                       __RPC__in BSTR bstrHeaderTitle,
                       __RPC__in BSTR bstrHeaderSubtitle);
        END_INTERFACE
    } IWebWizardHostVtbl;
    interface IWebWizardHost
    {
        CONST_VTBL struct IWebWizardHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> FinalBack(This) )
    ( (This)->lpVtbl -> FinalNext(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> put_Caption(This,bstrCaption) )
    ( (This)->lpVtbl -> get_Caption(This,pbstrCaption) )
    ( (This)->lpVtbl -> put_Property(This,bstrPropertyName,pvProperty) )
    ( (This)->lpVtbl -> get_Property(This,bstrPropertyName,pvProperty) )
    ( (This)->lpVtbl -> SetWizardButtons(This,vfEnableBack,vfEnableNext,vfLastPage) )
    ( (This)->lpVtbl -> SetHeaderText(This,bstrHeaderTitle,bstrHeaderSubtitle) )
EXTERN_C const IID IID_IWebWizardHost2;
    typedef struct IWebWizardHost2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebWizardHost2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebWizardHost2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebWizardHost2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWebWizardHost2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWebWizardHost2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWebWizardHost2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWebWizardHost2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *FinalBack )(
            __RPC__in IWebWizardHost2 * This);
                   HRESULT ( STDMETHODCALLTYPE *FinalNext )(
            __RPC__in IWebWizardHost2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IWebWizardHost2 * This);
                            HRESULT ( STDMETHODCALLTYPE *put_Caption )(
            __RPC__in IWebWizardHost2 * This,
                       __RPC__in BSTR bstrCaption);
                            HRESULT ( STDMETHODCALLTYPE *get_Caption )(
            __RPC__in IWebWizardHost2 * This,
                                __RPC__deref_out_opt BSTR *pbstrCaption);
                            HRESULT ( STDMETHODCALLTYPE *put_Property )(
            __RPC__in IWebWizardHost2 * This,
                       __RPC__in BSTR bstrPropertyName,
                       __RPC__in VARIANT *pvProperty);
                            HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in IWebWizardHost2 * This,
                       __RPC__in BSTR bstrPropertyName,
                                __RPC__out VARIANT *pvProperty);
                   HRESULT ( STDMETHODCALLTYPE *SetWizardButtons )(
            __RPC__in IWebWizardHost2 * This,
                       VARIANT_BOOL vfEnableBack,
                       VARIANT_BOOL vfEnableNext,
                       VARIANT_BOOL vfLastPage);
                   HRESULT ( STDMETHODCALLTYPE *SetHeaderText )(
            __RPC__in IWebWizardHost2 * This,
                       __RPC__in BSTR bstrHeaderTitle,
                       __RPC__in BSTR bstrHeaderSubtitle);
                   HRESULT ( STDMETHODCALLTYPE *SignString )(
            __RPC__in IWebWizardHost2 * This,
                       __RPC__in BSTR value,
                                __RPC__deref_out_opt BSTR *signedValue);
        END_INTERFACE
    } IWebWizardHost2Vtbl;
    interface IWebWizardHost2
    {
        CONST_VTBL struct IWebWizardHost2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> FinalBack(This) )
    ( (This)->lpVtbl -> FinalNext(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> put_Caption(This,bstrCaption) )
    ( (This)->lpVtbl -> get_Caption(This,pbstrCaption) )
    ( (This)->lpVtbl -> put_Property(This,bstrPropertyName,pvProperty) )
    ( (This)->lpVtbl -> get_Property(This,bstrPropertyName,pvProperty) )
    ( (This)->lpVtbl -> SetWizardButtons(This,vfEnableBack,vfEnableNext,vfLastPage) )
    ( (This)->lpVtbl -> SetHeaderText(This,bstrHeaderTitle,bstrHeaderSubtitle) )
    ( (This)->lpVtbl -> SignString(This,value,signedValue) )
EXTERN_C const IID IID_INewWDEvents;
    typedef struct INewWDEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INewWDEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INewWDEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INewWDEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in INewWDEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in INewWDEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in INewWDEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            INewWDEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *FinalBack )(
            __RPC__in INewWDEvents * This);
                   HRESULT ( STDMETHODCALLTYPE *FinalNext )(
            __RPC__in INewWDEvents * This);
                   HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in INewWDEvents * This);
                            HRESULT ( STDMETHODCALLTYPE *put_Caption )(
            __RPC__in INewWDEvents * This,
                       __RPC__in BSTR bstrCaption);
                            HRESULT ( STDMETHODCALLTYPE *get_Caption )(
            __RPC__in INewWDEvents * This,
                                __RPC__deref_out_opt BSTR *pbstrCaption);
                            HRESULT ( STDMETHODCALLTYPE *put_Property )(
            __RPC__in INewWDEvents * This,
                       __RPC__in BSTR bstrPropertyName,
                       __RPC__in VARIANT *pvProperty);
                            HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in INewWDEvents * This,
                       __RPC__in BSTR bstrPropertyName,
                                __RPC__out VARIANT *pvProperty);
                   HRESULT ( STDMETHODCALLTYPE *SetWizardButtons )(
            __RPC__in INewWDEvents * This,
                       VARIANT_BOOL vfEnableBack,
                       VARIANT_BOOL vfEnableNext,
                       VARIANT_BOOL vfLastPage);
                   HRESULT ( STDMETHODCALLTYPE *SetHeaderText )(
            __RPC__in INewWDEvents * This,
                       __RPC__in BSTR bstrHeaderTitle,
                       __RPC__in BSTR bstrHeaderSubtitle);
                   HRESULT ( STDMETHODCALLTYPE *PassportAuthenticate )(
            __RPC__in INewWDEvents * This,
                       __RPC__in BSTR bstrSignInUrl,
                                __RPC__out VARIANT_BOOL *pvfAuthenitcated);
        END_INTERFACE
    } INewWDEventsVtbl;
    interface INewWDEvents
    {
        CONST_VTBL struct INewWDEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> FinalBack(This) )
    ( (This)->lpVtbl -> FinalNext(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> put_Caption(This,bstrCaption) )
    ( (This)->lpVtbl -> get_Caption(This,pbstrCaption) )
    ( (This)->lpVtbl -> put_Property(This,bstrPropertyName,pvProperty) )
    ( (This)->lpVtbl -> get_Property(This,bstrPropertyName,pvProperty) )
    ( (This)->lpVtbl -> SetWizardButtons(This,vfEnableBack,vfEnableNext,vfLastPage) )
    ( (This)->lpVtbl -> SetHeaderText(This,bstrHeaderTitle,bstrHeaderSubtitle) )
    ( (This)->lpVtbl -> PassportAuthenticate(This,bstrSignInUrl,pvfAuthenitcated) )
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0001_v0_0_s_ifspec;
typedef IAutoComplete *LPAUTOCOMPLETE;
EXTERN_C const IID IID_IAutoComplete;
    typedef struct IAutoCompleteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAutoComplete * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAutoComplete * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAutoComplete * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            IAutoComplete * This,
            _In_ HWND hwndEdit,
            _In_ IUnknown *punkACL,
            _In_opt_ LPCWSTR pwszRegKeyPath,
            _In_opt_ LPCWSTR pwszQuickComplete);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            IAutoComplete * This,
                       BOOL fEnable);
        END_INTERFACE
    } IAutoCompleteVtbl;
    interface IAutoComplete
    {
        CONST_VTBL struct IAutoCompleteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete) )
    ( (This)->lpVtbl -> Enable(This,fEnable) )
typedef IAutoComplete2 *LPAUTOCOMPLETE2;
typedef
enum _tagAUTOCOMPLETEOPTIONS
    {
        ACO_NONE = 0,
        ACO_AUTOSUGGEST = 0x1,
        ACO_AUTOAPPEND = 0x2,
        ACO_SEARCH = 0x4,
        ACO_FILTERPREFIXES = 0x8,
        ACO_USETAB = 0x10,
        ACO_UPDOWNKEYDROPSLIST = 0x20,
        ACO_RTLREADING = 0x40,
        ACO_WORD_FILTER = 0x80,
        ACO_NOPREFIXFILTERING = 0x100
    } AUTOCOMPLETEOPTIONS;
EXTERN_C const IID IID_IAutoComplete2;
    typedef struct IAutoComplete2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAutoComplete2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAutoComplete2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAutoComplete2 * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            IAutoComplete2 * This,
            _In_ HWND hwndEdit,
            _In_ IUnknown *punkACL,
            _In_opt_ LPCWSTR pwszRegKeyPath,
            _In_opt_ LPCWSTR pwszQuickComplete);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            IAutoComplete2 * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *SetOptions )(
            IAutoComplete2 * This,
                       DWORD dwFlag);
        HRESULT ( STDMETHODCALLTYPE *GetOptions )(
            IAutoComplete2 * This,
            _Out_ DWORD *pdwFlag);
        END_INTERFACE
    } IAutoComplete2Vtbl;
    interface IAutoComplete2
    {
        CONST_VTBL struct IAutoComplete2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,hwndEdit,punkACL,pwszRegKeyPath,pwszQuickComplete) )
    ( (This)->lpVtbl -> Enable(This,fEnable) )
    ( (This)->lpVtbl -> SetOptions(This,dwFlag) )
    ( (This)->lpVtbl -> GetOptions(This,pdwFlag) )
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0003_v0_0_s_ifspec;
typedef IEnumACString *PENUMACSTRING;
typedef IEnumACString *LPENUMACSTRING;
typedef
enum _tagACENUMOPTION
    {
        ACEO_NONE = 0,
        ACEO_MOSTRECENTFIRST = 0x1,
        ACEO_FIRSTUNUSED = 0x10000
    } ACENUMOPTION;
EXTERN_C const IID IID_IEnumACString;
    typedef struct IEnumACStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumACString * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumACString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumACString * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumACString * This,
                       ULONG celt,
            _Out_writes_to_(celt,*pceltFetched) LPOLESTR *rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumACString * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumACString * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumACString * This,
                        IEnumString **ppenum);
        HRESULT ( STDMETHODCALLTYPE *NextItem )(
            IEnumACString * This,
            _Out_writes_opt_(cchMax) LPWSTR pszUrl,
                       ULONG cchMax,
            _Out_ ULONG *pulSortIndex);
        HRESULT ( STDMETHODCALLTYPE *SetEnumOptions )(
            IEnumACString * This,
                       DWORD dwOptions);
        HRESULT ( STDMETHODCALLTYPE *GetEnumOptions )(
            IEnumACString * This,
            _Out_ DWORD *pdwOptions);
        END_INTERFACE
    } IEnumACStringVtbl;
    interface IEnumACString
    {
        CONST_VTBL struct IEnumACStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> NextItem(This,pszUrl,cchMax,pulSortIndex) )
    ( (This)->lpVtbl -> SetEnumOptions(This,dwOptions) )
    ( (This)->lpVtbl -> GetEnumOptions(This,pdwOptions) )
EXTERN_C const IID IID_IDataObjectAsyncCapability;
    typedef struct IDataObjectAsyncCapabilityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDataObjectAsyncCapability * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDataObjectAsyncCapability * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDataObjectAsyncCapability * This);
        HRESULT ( STDMETHODCALLTYPE *SetAsyncMode )(
            __RPC__in IDataObjectAsyncCapability * This,
                       BOOL fDoOpAsync);
        HRESULT ( STDMETHODCALLTYPE *GetAsyncMode )(
            __RPC__in IDataObjectAsyncCapability * This,
                        __RPC__out BOOL *pfIsOpAsync);
        HRESULT ( STDMETHODCALLTYPE *StartOperation )(
            __RPC__in IDataObjectAsyncCapability * This,
                                         __RPC__in_opt IBindCtx *pbcReserved);
        HRESULT ( STDMETHODCALLTYPE *InOperation )(
            __RPC__in IDataObjectAsyncCapability * This,
                        __RPC__out BOOL *pfInAsyncOp);
        HRESULT ( STDMETHODCALLTYPE *EndOperation )(
            __RPC__in IDataObjectAsyncCapability * This,
                       HRESULT hResult,
                               __RPC__in_opt IBindCtx *pbcReserved,
                       DWORD dwEffects);
        END_INTERFACE
    } IDataObjectAsyncCapabilityVtbl;
    interface IDataObjectAsyncCapability
    {
        CONST_VTBL struct IDataObjectAsyncCapabilityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAsyncMode(This,fDoOpAsync) )
    ( (This)->lpVtbl -> GetAsyncMode(This,pfIsOpAsync) )
    ( (This)->lpVtbl -> StartOperation(This,pbcReserved) )
    ( (This)->lpVtbl -> InOperation(This,pfInAsyncOp) )
    ( (This)->lpVtbl -> EndOperation(This,hResult,pbcReserved,dwEffects) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shldisp_0000_0005_v0_0_s_ifspec;
}
