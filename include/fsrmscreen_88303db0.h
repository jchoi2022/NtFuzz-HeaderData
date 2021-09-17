#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFsrmFileGroup IFsrmFileGroup;
typedef interface IFsrmFileGroupImported IFsrmFileGroupImported;
typedef interface IFsrmFileGroupManager IFsrmFileGroupManager;
typedef interface IFsrmFileScreenBase IFsrmFileScreenBase;
typedef interface IFsrmFileScreen IFsrmFileScreen;
typedef interface IFsrmFileScreenException IFsrmFileScreenException;
typedef interface IFsrmFileScreenManager IFsrmFileScreenManager;
typedef interface IFsrmFileScreenTemplate IFsrmFileScreenTemplate;
typedef interface IFsrmFileScreenTemplateImported IFsrmFileScreenTemplateImported;
typedef interface IFsrmFileScreenTemplateManager IFsrmFileScreenTemplateManager;
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFsrmFileGroup;
    typedef struct IFsrmFileGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileGroup * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileGroup * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileGroup * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileGroup * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileGroup * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmFileGroup * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmFileGroup * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in IFsrmFileGroup * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **members);
                                        HRESULT ( STDMETHODCALLTYPE *put_Members )(
            __RPC__in IFsrmFileGroup * This,
                       __RPC__in_opt IFsrmMutableCollection *members);
                                        HRESULT ( STDMETHODCALLTYPE *get_NonMembers )(
            __RPC__in IFsrmFileGroup * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **nonMembers);
                                        HRESULT ( STDMETHODCALLTYPE *put_NonMembers )(
            __RPC__in IFsrmFileGroup * This,
                       __RPC__in_opt IFsrmMutableCollection *nonMembers);
        END_INTERFACE
    } IFsrmFileGroupVtbl;
    interface IFsrmFileGroup
    {
        CONST_VTBL struct IFsrmFileGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Members(This,members) )
    ( (This)->lpVtbl -> put_Members(This,members) )
    ( (This)->lpVtbl -> get_NonMembers(This,nonMembers) )
    ( (This)->lpVtbl -> put_NonMembers(This,nonMembers) )
EXTERN_C const IID IID_IFsrmFileGroupImported;
    typedef struct IFsrmFileGroupImportedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileGroupImported * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileGroupImported * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileGroupImported * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileGroupImported * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileGroupImported * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileGroupImported * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileGroupImported * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileGroupImported * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileGroupImported * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileGroupImported * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileGroupImported * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileGroupImported * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmFileGroupImported * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmFileGroupImported * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in IFsrmFileGroupImported * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **members);
                                        HRESULT ( STDMETHODCALLTYPE *put_Members )(
            __RPC__in IFsrmFileGroupImported * This,
                       __RPC__in_opt IFsrmMutableCollection *members);
                                        HRESULT ( STDMETHODCALLTYPE *get_NonMembers )(
            __RPC__in IFsrmFileGroupImported * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **nonMembers);
                                        HRESULT ( STDMETHODCALLTYPE *put_NonMembers )(
            __RPC__in IFsrmFileGroupImported * This,
                       __RPC__in_opt IFsrmMutableCollection *nonMembers);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverwriteOnCommit )(
            __RPC__in IFsrmFileGroupImported * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                                        HRESULT ( STDMETHODCALLTYPE *put_OverwriteOnCommit )(
            __RPC__in IFsrmFileGroupImported * This,
                       VARIANT_BOOL overwrite);
        END_INTERFACE
    } IFsrmFileGroupImportedVtbl;
    interface IFsrmFileGroupImported
    {
        CONST_VTBL struct IFsrmFileGroupImportedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Members(This,members) )
    ( (This)->lpVtbl -> put_Members(This,members) )
    ( (This)->lpVtbl -> get_NonMembers(This,nonMembers) )
    ( (This)->lpVtbl -> put_NonMembers(This,nonMembers) )
    ( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) )
    ( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) )
EXTERN_C const IID IID_IFsrmFileGroupManager;
    typedef struct IFsrmFileGroupManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileGroupManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileGroupManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileGroupManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileGroupManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileGroupManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileGroupManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileGroupManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileGroup )(
            __RPC__in IFsrmFileGroupManager * This,
                                __RPC__deref_out_opt IFsrmFileGroup **fileGroup);
                               HRESULT ( STDMETHODCALLTYPE *GetFileGroup )(
            __RPC__in IFsrmFileGroupManager * This,
                       __RPC__in BSTR name,
                                __RPC__deref_out_opt IFsrmFileGroup **fileGroup);
                               HRESULT ( STDMETHODCALLTYPE *EnumFileGroups )(
            __RPC__in IFsrmFileGroupManager * This,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups);
                               HRESULT ( STDMETHODCALLTYPE *ExportFileGroups )(
            __RPC__in IFsrmFileGroupManager * This,
                                     __RPC__in VARIANT *fileGroupNamesArray,
                                __RPC__deref_out_opt BSTR *serializedFileGroups);
                               HRESULT ( STDMETHODCALLTYPE *ImportFileGroups )(
            __RPC__in IFsrmFileGroupManager * This,
                       __RPC__in BSTR serializedFileGroups,
                                     __RPC__in VARIANT *fileGroupNamesArray,
                                __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups);
        END_INTERFACE
    } IFsrmFileGroupManagerVtbl;
    interface IFsrmFileGroupManager
    {
        CONST_VTBL struct IFsrmFileGroupManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateFileGroup(This,fileGroup) )
    ( (This)->lpVtbl -> GetFileGroup(This,name,fileGroup) )
    ( (This)->lpVtbl -> EnumFileGroups(This,options,fileGroups) )
    ( (This)->lpVtbl -> ExportFileGroups(This,fileGroupNamesArray,serializedFileGroups) )
    ( (This)->lpVtbl -> ImportFileGroups(This,serializedFileGroups,fileGroupNamesArray,fileGroups) )
EXTERN_C const IID IID_IFsrmFileScreenBase;
    typedef struct IFsrmFileScreenBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileScreenBase * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileScreenBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileScreenBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileScreenBase * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileScreenBase * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileScreenBase * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileScreenBase * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileScreenBase * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileScreenBase * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileScreenBase * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileScreenBase * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileScreenBase * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )(
            __RPC__in IFsrmFileScreenBase * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **blockList);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )(
            __RPC__in IFsrmFileScreenBase * This,
                       __RPC__in_opt IFsrmMutableCollection *blockList);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )(
            __RPC__in IFsrmFileScreenBase * This,
                                __RPC__out long *fileScreenFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )(
            __RPC__in IFsrmFileScreenBase * This,
                       long fileScreenFlags);
                               HRESULT ( STDMETHODCALLTYPE *CreateAction )(
            __RPC__in IFsrmFileScreenBase * This,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumActions )(
            __RPC__in IFsrmFileScreenBase * This,
                                __RPC__deref_out_opt IFsrmCollection **actions);
        END_INTERFACE
    } IFsrmFileScreenBaseVtbl;
    interface IFsrmFileScreenBase
    {
        CONST_VTBL struct IFsrmFileScreenBaseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) )
    ( (This)->lpVtbl -> EnumActions(This,actions) )
EXTERN_C const IID IID_IFsrmFileScreen;
    typedef struct IFsrmFileScreenVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileScreen * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileScreen * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileScreen * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileScreen * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileScreen * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileScreen * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileScreen * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileScreen * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileScreen * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileScreen * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **blockList);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )(
            __RPC__in IFsrmFileScreen * This,
                       __RPC__in_opt IFsrmMutableCollection *blockList);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__out long *fileScreenFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )(
            __RPC__in IFsrmFileScreen * This,
                       long fileScreenFlags);
                               HRESULT ( STDMETHODCALLTYPE *CreateAction )(
            __RPC__in IFsrmFileScreen * This,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumActions )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_SourceTemplateName )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__deref_out_opt BSTR *fileScreenTemplateName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MatchesSourceTemplate )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__out VARIANT_BOOL *matches);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSid )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__deref_out_opt BSTR *userSid);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserAccount )(
            __RPC__in IFsrmFileScreen * This,
                                __RPC__deref_out_opt BSTR *userAccount);
                               HRESULT ( STDMETHODCALLTYPE *ApplyTemplate )(
            __RPC__in IFsrmFileScreen * This,
                       __RPC__in BSTR fileScreenTemplateName);
        END_INTERFACE
    } IFsrmFileScreenVtbl;
    interface IFsrmFileScreen
    {
        CONST_VTBL struct IFsrmFileScreenVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) )
    ( (This)->lpVtbl -> EnumActions(This,actions) )
    ( (This)->lpVtbl -> get_Path(This,path) )
    ( (This)->lpVtbl -> get_SourceTemplateName(This,fileScreenTemplateName) )
    ( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
    ( (This)->lpVtbl -> get_UserSid(This,userSid) )
    ( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
    ( (This)->lpVtbl -> ApplyTemplate(This,fileScreenTemplateName) )
EXTERN_C const IID IID_IFsrmFileScreenException;
    typedef struct IFsrmFileScreenExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileScreenException * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileScreenException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileScreenException * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileScreenException * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileScreenException * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileScreenException * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileScreenException * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileScreenException * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileScreenException * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileScreenException * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileScreenException * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileScreenException * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFsrmFileScreenException * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_AllowedFileGroups )(
            __RPC__in IFsrmFileScreenException * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **allowList);
                                        HRESULT ( STDMETHODCALLTYPE *put_AllowedFileGroups )(
            __RPC__in IFsrmFileScreenException * This,
                       __RPC__in_opt IFsrmMutableCollection *allowList);
        END_INTERFACE
    } IFsrmFileScreenExceptionVtbl;
    interface IFsrmFileScreenException
    {
        CONST_VTBL struct IFsrmFileScreenExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Path(This,path) )
    ( (This)->lpVtbl -> get_AllowedFileGroups(This,allowList) )
    ( (This)->lpVtbl -> put_AllowedFileGroups(This,allowList) )
EXTERN_C const IID IID_IFsrmFileScreenManager;
    typedef struct IFsrmFileScreenManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileScreenManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileScreenManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileScreenManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileScreenManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileScreenManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileScreenManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileScreenManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariables )(
            __RPC__in IFsrmFileScreenManager * This,
                                __RPC__deref_out_opt SAFEARRAY * *variables);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariableDescriptions )(
            __RPC__in IFsrmFileScreenManager * This,
                                __RPC__deref_out_opt SAFEARRAY * *descriptions);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileScreen )(
            __RPC__in IFsrmFileScreenManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmFileScreen **fileScreen);
                               HRESULT ( STDMETHODCALLTYPE *GetFileScreen )(
            __RPC__in IFsrmFileScreenManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmFileScreen **fileScreen);
                               HRESULT ( STDMETHODCALLTYPE *EnumFileScreens )(
            __RPC__in IFsrmFileScreenManager * This,
                                     __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **fileScreens);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileScreenException )(
            __RPC__in IFsrmFileScreenManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmFileScreenException **fileScreenException);
                               HRESULT ( STDMETHODCALLTYPE *GetFileScreenException )(
            __RPC__in IFsrmFileScreenManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmFileScreenException **fileScreenException);
                               HRESULT ( STDMETHODCALLTYPE *EnumFileScreenExceptions )(
            __RPC__in IFsrmFileScreenManager * This,
                                     __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenExceptions);
                               HRESULT ( STDMETHODCALLTYPE *CreateFileScreenCollection )(
            __RPC__in IFsrmFileScreenManager * This,
                                __RPC__deref_out_opt IFsrmCommittableCollection **collection);
        END_INTERFACE
    } IFsrmFileScreenManagerVtbl;
    interface IFsrmFileScreenManager
    {
        CONST_VTBL struct IFsrmFileScreenManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ActionVariables(This,variables) )
    ( (This)->lpVtbl -> get_ActionVariableDescriptions(This,descriptions) )
    ( (This)->lpVtbl -> CreateFileScreen(This,path,fileScreen) )
    ( (This)->lpVtbl -> GetFileScreen(This,path,fileScreen) )
    ( (This)->lpVtbl -> EnumFileScreens(This,path,options,fileScreens) )
    ( (This)->lpVtbl -> CreateFileScreenException(This,path,fileScreenException) )
    ( (This)->lpVtbl -> GetFileScreenException(This,path,fileScreenException) )
    ( (This)->lpVtbl -> EnumFileScreenExceptions(This,path,options,fileScreenExceptions) )
    ( (This)->lpVtbl -> CreateFileScreenCollection(This,collection) )
EXTERN_C const IID IID_IFsrmFileScreenTemplate;
    typedef struct IFsrmFileScreenTemplateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileScreenTemplate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileScreenTemplate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileScreenTemplate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileScreenTemplate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileScreenTemplate * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileScreenTemplate * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileScreenTemplate * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileScreenTemplate * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )(
            __RPC__in IFsrmFileScreenTemplate * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **blockList);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       __RPC__in_opt IFsrmMutableCollection *blockList);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )(
            __RPC__in IFsrmFileScreenTemplate * This,
                                __RPC__out long *fileScreenFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       long fileScreenFlags);
                               HRESULT ( STDMETHODCALLTYPE *CreateAction )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumActions )(
            __RPC__in IFsrmFileScreenTemplate * This,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmFileScreenTemplate * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       __RPC__in BSTR name);
                               HRESULT ( STDMETHODCALLTYPE *CopyTemplate )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       __RPC__in BSTR fileScreenTemplateName);
                               HRESULT ( STDMETHODCALLTYPE *CommitAndUpdateDerived )(
            __RPC__in IFsrmFileScreenTemplate * This,
                       FsrmCommitOptions commitOptions,
                       FsrmTemplateApplyOptions applyOptions,
                                __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult);
        END_INTERFACE
    } IFsrmFileScreenTemplateVtbl;
    interface IFsrmFileScreenTemplate
    {
        CONST_VTBL struct IFsrmFileScreenTemplateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) )
    ( (This)->lpVtbl -> EnumActions(This,actions) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> CopyTemplate(This,fileScreenTemplateName) )
    ( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
EXTERN_C const IID IID_IFsrmFileScreenTemplateImported;
    typedef struct IFsrmFileScreenTemplateImportedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileScreenTemplateImported * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileScreenTemplateImported * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileScreenTemplateImported * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmFileScreenTemplateImported * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmFileScreenTemplateImported * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedFileGroups )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **blockList);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedFileGroups )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       __RPC__in_opt IFsrmMutableCollection *blockList);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileScreenFlags )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                                __RPC__out long *fileScreenFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_FileScreenFlags )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       long fileScreenFlags);
                               HRESULT ( STDMETHODCALLTYPE *CreateAction )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumActions )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       __RPC__in BSTR name);
                               HRESULT ( STDMETHODCALLTYPE *CopyTemplate )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       __RPC__in BSTR fileScreenTemplateName);
                               HRESULT ( STDMETHODCALLTYPE *CommitAndUpdateDerived )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       FsrmCommitOptions commitOptions,
                       FsrmTemplateApplyOptions applyOptions,
                                __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverwriteOnCommit )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                                        HRESULT ( STDMETHODCALLTYPE *put_OverwriteOnCommit )(
            __RPC__in IFsrmFileScreenTemplateImported * This,
                       VARIANT_BOOL overwrite);
        END_INTERFACE
    } IFsrmFileScreenTemplateImportedVtbl;
    interface IFsrmFileScreenTemplateImported
    {
        CONST_VTBL struct IFsrmFileScreenTemplateImportedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> put_BlockedFileGroups(This,blockList) )
    ( (This)->lpVtbl -> get_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> put_FileScreenFlags(This,fileScreenFlags) )
    ( (This)->lpVtbl -> CreateAction(This,actionType,action) )
    ( (This)->lpVtbl -> EnumActions(This,actions) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> CopyTemplate(This,fileScreenTemplateName) )
    ( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
    ( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) )
    ( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) )
EXTERN_C const IID IID_IFsrmFileScreenTemplateManager;
    typedef struct IFsrmFileScreenTemplateManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmFileScreenTemplateManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmFileScreenTemplateManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmFileScreenTemplateManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateTemplate )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                                __RPC__deref_out_opt IFsrmFileScreenTemplate **fileScreenTemplate);
                               HRESULT ( STDMETHODCALLTYPE *GetTemplate )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                       __RPC__in BSTR name,
                                __RPC__deref_out_opt IFsrmFileScreenTemplate **fileScreenTemplate);
                               HRESULT ( STDMETHODCALLTYPE *EnumTemplates )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenTemplates);
                               HRESULT ( STDMETHODCALLTYPE *ExportTemplates )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                                     __RPC__in VARIANT *fileScreenTemplateNamesArray,
                                __RPC__deref_out_opt BSTR *serializedFileScreenTemplates);
                               HRESULT ( STDMETHODCALLTYPE *ImportTemplates )(
            __RPC__in IFsrmFileScreenTemplateManager * This,
                       __RPC__in BSTR serializedFileScreenTemplates,
                                     __RPC__in VARIANT *fileScreenTemplateNamesArray,
                                __RPC__deref_out_opt IFsrmCommittableCollection **fileScreenTemplates);
        END_INTERFACE
    } IFsrmFileScreenTemplateManagerVtbl;
    interface IFsrmFileScreenTemplateManager
    {
        CONST_VTBL struct IFsrmFileScreenTemplateManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateTemplate(This,fileScreenTemplate) )
    ( (This)->lpVtbl -> GetTemplate(This,name,fileScreenTemplate) )
    ( (This)->lpVtbl -> EnumTemplates(This,options,fileScreenTemplates) )
    ( (This)->lpVtbl -> ExportTemplates(This,fileScreenTemplateNamesArray,serializedFileScreenTemplates) )
    ( (This)->lpVtbl -> ImportTemplates(This,serializedFileScreenTemplates,fileScreenTemplateNamesArray,fileScreenTemplates) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmscreen_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
