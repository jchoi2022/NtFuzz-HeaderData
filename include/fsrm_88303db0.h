#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFsrmObject IFsrmObject;
typedef interface IFsrmCollection IFsrmCollection;
typedef interface IFsrmMutableCollection IFsrmMutableCollection;
typedef interface IFsrmCommittableCollection IFsrmCommittableCollection;
typedef interface IFsrmAction IFsrmAction;
typedef interface IFsrmActionEmail IFsrmActionEmail;
typedef interface IFsrmActionEmail2 IFsrmActionEmail2;
typedef interface IFsrmActionReport IFsrmActionReport;
typedef interface IFsrmActionEventLog IFsrmActionEventLog;
typedef interface IFsrmActionCommand IFsrmActionCommand;
typedef interface IFsrmSetting IFsrmSetting;
typedef interface IFsrmPathMapper IFsrmPathMapper;
typedef interface IFsrmExportImport IFsrmExportImport;
typedef interface IFsrmDerivedObjectsResult IFsrmDerivedObjectsResult;
typedef interface IFsrmAccessDeniedRemediationClient IFsrmAccessDeniedRemediationClient;
#include "oaidl.h"
#include "fsrmenums.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFsrmObject;
    typedef struct IFsrmObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmObject * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmObject * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmObject * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmObject * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmObject * This);
        END_INTERFACE
    } IFsrmObjectVtbl;
    interface IFsrmObject
    {
        CONST_VTBL struct IFsrmObjectVtbl *lpVtbl;
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
EXTERN_C const IID IID_IFsrmCollection;
    typedef struct IFsrmCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFsrmCollection * This,
                                __RPC__deref_out_opt IUnknown **unknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFsrmCollection * This,
                       long index,
                                __RPC__out VARIANT *item);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFsrmCollection * This,
                                __RPC__out long *count);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IFsrmCollection * This,
                                __RPC__out FsrmCollectionState *state);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFsrmCollection * This);
                               HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IFsrmCollection * This,
                       long waitSeconds,
                                __RPC__out VARIANT_BOOL *completed);
                               HRESULT ( STDMETHODCALLTYPE *GetById )(
            __RPC__in IFsrmCollection * This,
                       FSRM_OBJECT_ID id,
                                __RPC__out VARIANT *entry);
        END_INTERFACE
    } IFsrmCollectionVtbl;
    interface IFsrmCollection
    {
        CONST_VTBL struct IFsrmCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,unknown) )
    ( (This)->lpVtbl -> get_Item(This,index,item) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> get_State(This,state) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
    ( (This)->lpVtbl -> GetById(This,id,entry) )
EXTERN_C const IID IID_IFsrmMutableCollection;
    typedef struct IFsrmMutableCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmMutableCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmMutableCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmMutableCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmMutableCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmMutableCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmMutableCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmMutableCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFsrmMutableCollection * This,
                                __RPC__deref_out_opt IUnknown **unknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFsrmMutableCollection * This,
                       long index,
                                __RPC__out VARIANT *item);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFsrmMutableCollection * This,
                                __RPC__out long *count);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IFsrmMutableCollection * This,
                                __RPC__out FsrmCollectionState *state);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFsrmMutableCollection * This);
                               HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IFsrmMutableCollection * This,
                       long waitSeconds,
                                __RPC__out VARIANT_BOOL *completed);
                               HRESULT ( STDMETHODCALLTYPE *GetById )(
            __RPC__in IFsrmMutableCollection * This,
                       FSRM_OBJECT_ID id,
                                __RPC__out VARIANT *entry);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFsrmMutableCollection * This,
                       VARIANT item);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFsrmMutableCollection * This,
                       long index);
                               HRESULT ( STDMETHODCALLTYPE *RemoveById )(
            __RPC__in IFsrmMutableCollection * This,
                       FSRM_OBJECT_ID id);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IFsrmMutableCollection * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **collection);
        END_INTERFACE
    } IFsrmMutableCollectionVtbl;
    interface IFsrmMutableCollection
    {
        CONST_VTBL struct IFsrmMutableCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,unknown) )
    ( (This)->lpVtbl -> get_Item(This,index,item) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> get_State(This,state) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
    ( (This)->lpVtbl -> GetById(This,id,entry) )
    ( (This)->lpVtbl -> Add(This,item) )
    ( (This)->lpVtbl -> Remove(This,index) )
    ( (This)->lpVtbl -> RemoveById(This,id) )
    ( (This)->lpVtbl -> Clone(This,collection) )
EXTERN_C const IID IID_IFsrmCommittableCollection;
    typedef struct IFsrmCommittableCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmCommittableCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmCommittableCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmCommittableCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmCommittableCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmCommittableCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmCommittableCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmCommittableCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IFsrmCommittableCollection * This,
                                __RPC__deref_out_opt IUnknown **unknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IFsrmCommittableCollection * This,
                       long index,
                                __RPC__out VARIANT *item);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IFsrmCommittableCollection * This,
                                __RPC__out long *count);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IFsrmCommittableCollection * This,
                                __RPC__out FsrmCollectionState *state);
                               HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IFsrmCommittableCollection * This);
                               HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IFsrmCommittableCollection * This,
                       long waitSeconds,
                                __RPC__out VARIANT_BOOL *completed);
                               HRESULT ( STDMETHODCALLTYPE *GetById )(
            __RPC__in IFsrmCommittableCollection * This,
                       FSRM_OBJECT_ID id,
                                __RPC__out VARIANT *entry);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IFsrmCommittableCollection * This,
                       VARIANT item);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IFsrmCommittableCollection * This,
                       long index);
                               HRESULT ( STDMETHODCALLTYPE *RemoveById )(
            __RPC__in IFsrmCommittableCollection * This,
                       FSRM_OBJECT_ID id);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IFsrmCommittableCollection * This,
                                __RPC__deref_out_opt IFsrmMutableCollection **collection);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmCommittableCollection * This,
                       FsrmCommitOptions options,
                                __RPC__deref_out_opt IFsrmCollection **results);
        END_INTERFACE
    } IFsrmCommittableCollectionVtbl;
    interface IFsrmCommittableCollection
    {
        CONST_VTBL struct IFsrmCommittableCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,unknown) )
    ( (This)->lpVtbl -> get_Item(This,index,item) )
    ( (This)->lpVtbl -> get_Count(This,count) )
    ( (This)->lpVtbl -> get_State(This,state) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> WaitForCompletion(This,waitSeconds,completed) )
    ( (This)->lpVtbl -> GetById(This,id,entry) )
    ( (This)->lpVtbl -> Add(This,item) )
    ( (This)->lpVtbl -> Remove(This,index) )
    ( (This)->lpVtbl -> RemoveById(This,id) )
    ( (This)->lpVtbl -> Clone(This,collection) )
    ( (This)->lpVtbl -> Commit(This,options,results) )
EXTERN_C const IID IID_IFsrmAction;
    typedef struct IFsrmActionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmAction * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmAction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmAction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmAction * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmAction * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmAction * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmAction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmAction * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionType )(
            __RPC__in IFsrmAction * This,
                                __RPC__out FsrmActionType *actionType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )(
            __RPC__in IFsrmAction * This,
                                __RPC__out long *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )(
            __RPC__in IFsrmAction * This,
                       long minutes);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmAction * This);
        END_INTERFACE
    } IFsrmActionVtbl;
    interface IFsrmAction
    {
        CONST_VTBL struct IFsrmActionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_ActionType(This,actionType) )
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> Delete(This) )
EXTERN_C const IID IID_IFsrmActionEmail;
    typedef struct IFsrmActionEmailVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmActionEmail * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmActionEmail * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmActionEmail * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmActionEmail * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmActionEmail * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionType )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__out FsrmActionType *actionType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__out long *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )(
            __RPC__in IFsrmActionEmail * This,
                       long minutes);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmActionEmail * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailFrom )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__deref_out_opt BSTR *mailFrom);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailFrom )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in BSTR mailFrom);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailReplyTo )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__deref_out_opt BSTR *mailReplyTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailReplyTo )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in BSTR mailReplyTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailTo )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__deref_out_opt BSTR *mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailTo )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in BSTR mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailCc )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__deref_out_opt BSTR *mailCc);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailCc )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in BSTR mailCc);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailBcc )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__deref_out_opt BSTR *mailBcc);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailBcc )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in BSTR mailBcc);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailSubject )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__deref_out_opt BSTR *mailSubject);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailSubject )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in BSTR mailSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_MessageText )(
            __RPC__in IFsrmActionEmail * This,
                                __RPC__deref_out_opt BSTR *messageText);
                                        HRESULT ( STDMETHODCALLTYPE *put_MessageText )(
            __RPC__in IFsrmActionEmail * This,
                       __RPC__in BSTR messageText);
        END_INTERFACE
    } IFsrmActionEmailVtbl;
    interface IFsrmActionEmail
    {
        CONST_VTBL struct IFsrmActionEmailVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_ActionType(This,actionType) )
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_MailFrom(This,mailFrom) )
    ( (This)->lpVtbl -> put_MailFrom(This,mailFrom) )
    ( (This)->lpVtbl -> get_MailReplyTo(This,mailReplyTo) )
    ( (This)->lpVtbl -> put_MailReplyTo(This,mailReplyTo) )
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> get_MailCc(This,mailCc) )
    ( (This)->lpVtbl -> put_MailCc(This,mailCc) )
    ( (This)->lpVtbl -> get_MailBcc(This,mailBcc) )
    ( (This)->lpVtbl -> put_MailBcc(This,mailBcc) )
    ( (This)->lpVtbl -> get_MailSubject(This,mailSubject) )
    ( (This)->lpVtbl -> put_MailSubject(This,mailSubject) )
    ( (This)->lpVtbl -> get_MessageText(This,messageText) )
    ( (This)->lpVtbl -> put_MessageText(This,messageText) )
EXTERN_C const IID IID_IFsrmActionEmail2;
    typedef struct IFsrmActionEmail2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmActionEmail2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmActionEmail2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmActionEmail2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmActionEmail2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmActionEmail2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionType )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__out FsrmActionType *actionType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__out long *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )(
            __RPC__in IFsrmActionEmail2 * This,
                       long minutes);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmActionEmail2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailFrom )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__deref_out_opt BSTR *mailFrom);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailFrom )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in BSTR mailFrom);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailReplyTo )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__deref_out_opt BSTR *mailReplyTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailReplyTo )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in BSTR mailReplyTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailTo )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__deref_out_opt BSTR *mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailTo )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in BSTR mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailCc )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__deref_out_opt BSTR *mailCc);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailCc )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in BSTR mailCc);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailBcc )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__deref_out_opt BSTR *mailBcc);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailBcc )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in BSTR mailBcc);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailSubject )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__deref_out_opt BSTR *mailSubject);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailSubject )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in BSTR mailSubject);
                                        HRESULT ( STDMETHODCALLTYPE *get_MessageText )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__deref_out_opt BSTR *messageText);
                                        HRESULT ( STDMETHODCALLTYPE *put_MessageText )(
            __RPC__in IFsrmActionEmail2 * This,
                       __RPC__in BSTR messageText);
                                        HRESULT ( STDMETHODCALLTYPE *get_AttachmentFileListSize )(
            __RPC__in IFsrmActionEmail2 * This,
                                __RPC__out long *attachmentFileListSize);
                                        HRESULT ( STDMETHODCALLTYPE *put_AttachmentFileListSize )(
            __RPC__in IFsrmActionEmail2 * This,
                       long attachmentFileListSize);
        END_INTERFACE
    } IFsrmActionEmail2Vtbl;
    interface IFsrmActionEmail2
    {
        CONST_VTBL struct IFsrmActionEmail2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_ActionType(This,actionType) )
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_MailFrom(This,mailFrom) )
    ( (This)->lpVtbl -> put_MailFrom(This,mailFrom) )
    ( (This)->lpVtbl -> get_MailReplyTo(This,mailReplyTo) )
    ( (This)->lpVtbl -> put_MailReplyTo(This,mailReplyTo) )
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> get_MailCc(This,mailCc) )
    ( (This)->lpVtbl -> put_MailCc(This,mailCc) )
    ( (This)->lpVtbl -> get_MailBcc(This,mailBcc) )
    ( (This)->lpVtbl -> put_MailBcc(This,mailBcc) )
    ( (This)->lpVtbl -> get_MailSubject(This,mailSubject) )
    ( (This)->lpVtbl -> put_MailSubject(This,mailSubject) )
    ( (This)->lpVtbl -> get_MessageText(This,messageText) )
    ( (This)->lpVtbl -> put_MessageText(This,messageText) )
    ( (This)->lpVtbl -> get_AttachmentFileListSize(This,attachmentFileListSize) )
    ( (This)->lpVtbl -> put_AttachmentFileListSize(This,attachmentFileListSize) )
EXTERN_C const IID IID_IFsrmActionReport;
    typedef struct IFsrmActionReportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmActionReport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmActionReport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmActionReport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmActionReport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmActionReport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmActionReport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmActionReport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmActionReport * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionType )(
            __RPC__in IFsrmActionReport * This,
                                __RPC__out FsrmActionType *actionType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )(
            __RPC__in IFsrmActionReport * This,
                                __RPC__out long *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )(
            __RPC__in IFsrmActionReport * This,
                       long minutes);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmActionReport * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReportTypes )(
            __RPC__in IFsrmActionReport * This,
                                __RPC__deref_out_opt SAFEARRAY * *reportTypes);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReportTypes )(
            __RPC__in IFsrmActionReport * This,
                       __RPC__in SAFEARRAY * reportTypes);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailTo )(
            __RPC__in IFsrmActionReport * This,
                                __RPC__deref_out_opt BSTR *mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailTo )(
            __RPC__in IFsrmActionReport * This,
                       __RPC__in BSTR mailTo);
        END_INTERFACE
    } IFsrmActionReportVtbl;
    interface IFsrmActionReport
    {
        CONST_VTBL struct IFsrmActionReportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_ActionType(This,actionType) )
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_ReportTypes(This,reportTypes) )
    ( (This)->lpVtbl -> put_ReportTypes(This,reportTypes) )
    ( (This)->lpVtbl -> get_MailTo(This,mailTo) )
    ( (This)->lpVtbl -> put_MailTo(This,mailTo) )
EXTERN_C const IID IID_IFsrmActionEventLog;
    typedef struct IFsrmActionEventLogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmActionEventLog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmActionEventLog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmActionEventLog * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmActionEventLog * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmActionEventLog * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmActionEventLog * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmActionEventLog * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmActionEventLog * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionType )(
            __RPC__in IFsrmActionEventLog * This,
                                __RPC__out FsrmActionType *actionType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )(
            __RPC__in IFsrmActionEventLog * This,
                                __RPC__out long *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )(
            __RPC__in IFsrmActionEventLog * This,
                       long minutes);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmActionEventLog * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventType )(
            __RPC__in IFsrmActionEventLog * This,
                                __RPC__out FsrmEventType *eventType);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventType )(
            __RPC__in IFsrmActionEventLog * This,
                       FsrmEventType eventType);
                                        HRESULT ( STDMETHODCALLTYPE *get_MessageText )(
            __RPC__in IFsrmActionEventLog * This,
                                __RPC__deref_out_opt BSTR *messageText);
                                        HRESULT ( STDMETHODCALLTYPE *put_MessageText )(
            __RPC__in IFsrmActionEventLog * This,
                       __RPC__in BSTR messageText);
        END_INTERFACE
    } IFsrmActionEventLogVtbl;
    interface IFsrmActionEventLog
    {
        CONST_VTBL struct IFsrmActionEventLogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_ActionType(This,actionType) )
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_EventType(This,eventType) )
    ( (This)->lpVtbl -> put_EventType(This,eventType) )
    ( (This)->lpVtbl -> get_MessageText(This,messageText) )
    ( (This)->lpVtbl -> put_MessageText(This,messageText) )
EXTERN_C const IID IID_IFsrmActionCommand;
    typedef struct IFsrmActionCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmActionCommand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmActionCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmActionCommand * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmActionCommand * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmActionCommand * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmActionCommand * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmActionCommand * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionType )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__out FsrmActionType *actionType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunLimitInterval )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__out long *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_RunLimitInterval )(
            __RPC__in IFsrmActionCommand * This,
                       long minutes);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmActionCommand * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutablePath )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__deref_out_opt BSTR *executablePath);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutablePath )(
            __RPC__in IFsrmActionCommand * This,
                       __RPC__in BSTR executablePath);
                                        HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__deref_out_opt BSTR *arguments);
                                        HRESULT ( STDMETHODCALLTYPE *put_Arguments )(
            __RPC__in IFsrmActionCommand * This,
                       __RPC__in BSTR arguments);
                                        HRESULT ( STDMETHODCALLTYPE *get_Account )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__out FsrmAccountType *account);
                                        HRESULT ( STDMETHODCALLTYPE *put_Account )(
            __RPC__in IFsrmActionCommand * This,
                       FsrmAccountType account);
                                        HRESULT ( STDMETHODCALLTYPE *get_WorkingDirectory )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__deref_out_opt BSTR *workingDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *put_WorkingDirectory )(
            __RPC__in IFsrmActionCommand * This,
                       __RPC__in BSTR workingDirectory);
                                        HRESULT ( STDMETHODCALLTYPE *get_MonitorCommand )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__out VARIANT_BOOL *monitorCommand);
                                        HRESULT ( STDMETHODCALLTYPE *put_MonitorCommand )(
            __RPC__in IFsrmActionCommand * This,
                       VARIANT_BOOL monitorCommand);
                                        HRESULT ( STDMETHODCALLTYPE *get_KillTimeOut )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__out long *minutes);
                                        HRESULT ( STDMETHODCALLTYPE *put_KillTimeOut )(
            __RPC__in IFsrmActionCommand * This,
                       long minutes);
                                        HRESULT ( STDMETHODCALLTYPE *get_LogResult )(
            __RPC__in IFsrmActionCommand * This,
                                __RPC__out VARIANT_BOOL *logResults);
                                        HRESULT ( STDMETHODCALLTYPE *put_LogResult )(
            __RPC__in IFsrmActionCommand * This,
                       VARIANT_BOOL logResults);
        END_INTERFACE
    } IFsrmActionCommandVtbl;
    interface IFsrmActionCommand
    {
        CONST_VTBL struct IFsrmActionCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_ActionType(This,actionType) )
    ( (This)->lpVtbl -> get_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> put_RunLimitInterval(This,minutes) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> get_ExecutablePath(This,executablePath) )
    ( (This)->lpVtbl -> put_ExecutablePath(This,executablePath) )
    ( (This)->lpVtbl -> get_Arguments(This,arguments) )
    ( (This)->lpVtbl -> put_Arguments(This,arguments) )
    ( (This)->lpVtbl -> get_Account(This,account) )
    ( (This)->lpVtbl -> put_Account(This,account) )
    ( (This)->lpVtbl -> get_WorkingDirectory(This,workingDirectory) )
    ( (This)->lpVtbl -> put_WorkingDirectory(This,workingDirectory) )
    ( (This)->lpVtbl -> get_MonitorCommand(This,monitorCommand) )
    ( (This)->lpVtbl -> put_MonitorCommand(This,monitorCommand) )
    ( (This)->lpVtbl -> get_KillTimeOut(This,minutes) )
    ( (This)->lpVtbl -> put_KillTimeOut(This,minutes) )
    ( (This)->lpVtbl -> get_LogResult(This,logResults) )
    ( (This)->lpVtbl -> put_LogResult(This,logResults) )
EXTERN_C const IID IID_IFsrmSetting;
    typedef struct IFsrmSettingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmSetting * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmSetting * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmSetting * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmSetting * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmSetting * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmSetting * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmSetting * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SmtpServer )(
            __RPC__in IFsrmSetting * This,
                                __RPC__deref_out_opt BSTR *smtpServer);
                                        HRESULT ( STDMETHODCALLTYPE *put_SmtpServer )(
            __RPC__in IFsrmSetting * This,
                       __RPC__in BSTR smtpServer);
                                        HRESULT ( STDMETHODCALLTYPE *get_MailFrom )(
            __RPC__in IFsrmSetting * This,
                                __RPC__deref_out_opt BSTR *mailFrom);
                                        HRESULT ( STDMETHODCALLTYPE *put_MailFrom )(
            __RPC__in IFsrmSetting * This,
                       __RPC__in BSTR mailFrom);
                                        HRESULT ( STDMETHODCALLTYPE *get_AdminEmail )(
            __RPC__in IFsrmSetting * This,
                                __RPC__deref_out_opt BSTR *adminEmail);
                                        HRESULT ( STDMETHODCALLTYPE *put_AdminEmail )(
            __RPC__in IFsrmSetting * This,
                       __RPC__in BSTR adminEmail);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisableCommandLine )(
            __RPC__in IFsrmSetting * This,
                                __RPC__out VARIANT_BOOL *disableCommandLine);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisableCommandLine )(
            __RPC__in IFsrmSetting * This,
                       VARIANT_BOOL disableCommandLine);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableScreeningAudit )(
            __RPC__in IFsrmSetting * This,
                                __RPC__out VARIANT_BOOL *enableScreeningAudit);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableScreeningAudit )(
            __RPC__in IFsrmSetting * This,
                       VARIANT_BOOL enableScreeningAudit);
                               HRESULT ( STDMETHODCALLTYPE *EmailTest )(
            __RPC__in IFsrmSetting * This,
                       __RPC__in BSTR mailTo);
                               HRESULT ( STDMETHODCALLTYPE *SetActionRunLimitInterval )(
            __RPC__in IFsrmSetting * This,
                       FsrmActionType actionType,
                       long delayTimeMinutes);
                               HRESULT ( STDMETHODCALLTYPE *GetActionRunLimitInterval )(
            __RPC__in IFsrmSetting * This,
                       FsrmActionType actionType,
                                __RPC__out long *delayTimeMinutes);
        END_INTERFACE
    } IFsrmSettingVtbl;
    interface IFsrmSetting
    {
        CONST_VTBL struct IFsrmSettingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SmtpServer(This,smtpServer) )
    ( (This)->lpVtbl -> put_SmtpServer(This,smtpServer) )
    ( (This)->lpVtbl -> get_MailFrom(This,mailFrom) )
    ( (This)->lpVtbl -> put_MailFrom(This,mailFrom) )
    ( (This)->lpVtbl -> get_AdminEmail(This,adminEmail) )
    ( (This)->lpVtbl -> put_AdminEmail(This,adminEmail) )
    ( (This)->lpVtbl -> get_DisableCommandLine(This,disableCommandLine) )
    ( (This)->lpVtbl -> put_DisableCommandLine(This,disableCommandLine) )
    ( (This)->lpVtbl -> get_EnableScreeningAudit(This,enableScreeningAudit) )
    ( (This)->lpVtbl -> put_EnableScreeningAudit(This,enableScreeningAudit) )
    ( (This)->lpVtbl -> EmailTest(This,mailTo) )
    ( (This)->lpVtbl -> SetActionRunLimitInterval(This,actionType,delayTimeMinutes) )
    ( (This)->lpVtbl -> GetActionRunLimitInterval(This,actionType,delayTimeMinutes) )
EXTERN_C const IID IID_IFsrmPathMapper;
    typedef struct IFsrmPathMapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPathMapper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPathMapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPathMapper * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPathMapper * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPathMapper * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPathMapper * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPathMapper * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *GetSharePathsForLocalPath )(
            __RPC__in IFsrmPathMapper * This,
                       __RPC__in BSTR localPath,
                                __RPC__deref_out_opt SAFEARRAY * *sharePaths);
        END_INTERFACE
    } IFsrmPathMapperVtbl;
    interface IFsrmPathMapper
    {
        CONST_VTBL struct IFsrmPathMapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetSharePathsForLocalPath(This,localPath,sharePaths) )
EXTERN_C const IID IID_IFsrmExportImport;
    typedef struct IFsrmExportImportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmExportImport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmExportImport * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmExportImport * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmExportImport * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmExportImport * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ExportFileGroups )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in BSTR filePath,
                                     __RPC__in VARIANT *fileGroupNamesSafeArray,
                                     __RPC__in BSTR remoteHost);
                               HRESULT ( STDMETHODCALLTYPE *ImportFileGroups )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in BSTR filePath,
                                     __RPC__in VARIANT *fileGroupNamesSafeArray,
                                     __RPC__in BSTR remoteHost,
                                __RPC__deref_out_opt IFsrmCommittableCollection **fileGroups);
                               HRESULT ( STDMETHODCALLTYPE *ExportFileScreenTemplates )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in BSTR filePath,
                                     __RPC__in VARIANT *templateNamesSafeArray,
                                     __RPC__in BSTR remoteHost);
                               HRESULT ( STDMETHODCALLTYPE *ImportFileScreenTemplates )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in BSTR filePath,
                                     __RPC__in VARIANT *templateNamesSafeArray,
                                     __RPC__in BSTR remoteHost,
                                __RPC__deref_out_opt IFsrmCommittableCollection **templates);
                               HRESULT ( STDMETHODCALLTYPE *ExportQuotaTemplates )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in BSTR filePath,
                                     __RPC__in VARIANT *templateNamesSafeArray,
                                     __RPC__in BSTR remoteHost);
                               HRESULT ( STDMETHODCALLTYPE *ImportQuotaTemplates )(
            __RPC__in IFsrmExportImport * This,
                       __RPC__in BSTR filePath,
                                     __RPC__in VARIANT *templateNamesSafeArray,
                                     __RPC__in BSTR remoteHost,
                                __RPC__deref_out_opt IFsrmCommittableCollection **templates);
        END_INTERFACE
    } IFsrmExportImportVtbl;
    interface IFsrmExportImport
    {
        CONST_VTBL struct IFsrmExportImportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ExportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost) )
    ( (This)->lpVtbl -> ImportFileGroups(This,filePath,fileGroupNamesSafeArray,remoteHost,fileGroups) )
    ( (This)->lpVtbl -> ExportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost) )
    ( (This)->lpVtbl -> ImportFileScreenTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates) )
    ( (This)->lpVtbl -> ExportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost) )
    ( (This)->lpVtbl -> ImportQuotaTemplates(This,filePath,templateNamesSafeArray,remoteHost,templates) )
EXTERN_C const IID IID_IFsrmDerivedObjectsResult;
    typedef struct IFsrmDerivedObjectsResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmDerivedObjectsResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmDerivedObjectsResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmDerivedObjectsResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmDerivedObjectsResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmDerivedObjectsResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmDerivedObjectsResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmDerivedObjectsResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DerivedObjects )(
            __RPC__in IFsrmDerivedObjectsResult * This,
                                __RPC__deref_out_opt IFsrmCollection **derivedObjects);
                                        HRESULT ( STDMETHODCALLTYPE *get_Results )(
            __RPC__in IFsrmDerivedObjectsResult * This,
                                __RPC__deref_out_opt IFsrmCollection **results);
        END_INTERFACE
    } IFsrmDerivedObjectsResultVtbl;
    interface IFsrmDerivedObjectsResult
    {
        CONST_VTBL struct IFsrmDerivedObjectsResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DerivedObjects(This,derivedObjects) )
    ( (This)->lpVtbl -> get_Results(This,results) )
EXTERN_C const IID IID_IFsrmAccessDeniedRemediationClient;
    typedef struct IFsrmAccessDeniedRemediationClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmAccessDeniedRemediationClient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmAccessDeniedRemediationClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmAccessDeniedRemediationClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmAccessDeniedRemediationClient * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmAccessDeniedRemediationClient * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmAccessDeniedRemediationClient * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmAccessDeniedRemediationClient * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IFsrmAccessDeniedRemediationClient * This,
                       ULONG_PTR parentWnd,
                       __RPC__in BSTR accessPath,
                       AdrClientErrorType errorType,
                       long flags,
                                     __RPC__in BSTR windowTitle,
                                     __RPC__in BSTR windowMessage,
                                __RPC__out long *result);
        END_INTERFACE
    } IFsrmAccessDeniedRemediationClientVtbl;
    interface IFsrmAccessDeniedRemediationClient
    {
        CONST_VTBL struct IFsrmAccessDeniedRemediationClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Show(This,parentWnd,accessPath,errorType,flags,windowTitle,windowMessage,result) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrm_0000_0015_v0_0_s_ifspec;
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
