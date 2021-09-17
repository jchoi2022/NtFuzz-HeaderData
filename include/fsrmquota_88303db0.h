#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFsrmQuotaBase IFsrmQuotaBase;
typedef interface IFsrmQuotaObject IFsrmQuotaObject;
typedef interface IFsrmQuota IFsrmQuota;
typedef interface IFsrmAutoApplyQuota IFsrmAutoApplyQuota;
typedef interface IFsrmQuotaManager IFsrmQuotaManager;
typedef interface IFsrmQuotaManagerEx IFsrmQuotaManagerEx;
typedef interface IFsrmQuotaTemplate IFsrmQuotaTemplate;
typedef interface IFsrmQuotaTemplateImported IFsrmQuotaTemplateImported;
typedef interface IFsrmQuotaTemplateManager IFsrmQuotaTemplateManager;
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef long FSRM_QUOTA_THRESHOLD;
extern RPC_IF_HANDLE __MIDL_itf_fsrmquota_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmquota_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFsrmQuotaBase;
    typedef struct IFsrmQuotaBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuotaBase * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuotaBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuotaBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuotaBase * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuotaBase * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuotaBase * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuotaBase * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmQuotaBase * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmQuotaBase * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmQuotaBase * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmQuotaBase * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmQuotaBase * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaLimit )(
            __RPC__in IFsrmQuotaBase * This,
                                __RPC__out VARIANT *quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaLimit )(
            __RPC__in IFsrmQuotaBase * This,
                       VARIANT quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaFlags )(
            __RPC__in IFsrmQuotaBase * This,
                                __RPC__out long *quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaFlags )(
            __RPC__in IFsrmQuotaBase * This,
                       long quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Thresholds )(
            __RPC__in IFsrmQuotaBase * This,
                                __RPC__deref_out_opt SAFEARRAY * *thresholds);
                               HRESULT ( STDMETHODCALLTYPE *AddThreshold )(
            __RPC__in IFsrmQuotaBase * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *DeleteThreshold )(
            __RPC__in IFsrmQuotaBase * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *ModifyThreshold )(
            __RPC__in IFsrmQuotaBase * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FSRM_QUOTA_THRESHOLD newThreshold);
                               HRESULT ( STDMETHODCALLTYPE *CreateThresholdAction )(
            __RPC__in IFsrmQuotaBase * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumThresholdActions )(
            __RPC__in IFsrmQuotaBase * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                                __RPC__deref_out_opt IFsrmCollection **actions);
        END_INTERFACE
    } IFsrmQuotaBaseVtbl;
    interface IFsrmQuotaBase
    {
        CONST_VTBL struct IFsrmQuotaBaseVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
    ( (This)->lpVtbl -> AddThreshold(This,threshold) )
    ( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
    ( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
    ( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
    ( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
EXTERN_C const IID IID_IFsrmQuotaObject;
    typedef struct IFsrmQuotaObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuotaObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuotaObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuotaObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuotaObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuotaObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuotaObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuotaObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmQuotaObject * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmQuotaObject * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmQuotaObject * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaLimit )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__out VARIANT *quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaLimit )(
            __RPC__in IFsrmQuotaObject * This,
                       VARIANT quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaFlags )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__out long *quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaFlags )(
            __RPC__in IFsrmQuotaObject * This,
                       long quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Thresholds )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__deref_out_opt SAFEARRAY * *thresholds);
                               HRESULT ( STDMETHODCALLTYPE *AddThreshold )(
            __RPC__in IFsrmQuotaObject * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *DeleteThreshold )(
            __RPC__in IFsrmQuotaObject * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *ModifyThreshold )(
            __RPC__in IFsrmQuotaObject * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FSRM_QUOTA_THRESHOLD newThreshold);
                               HRESULT ( STDMETHODCALLTYPE *CreateThresholdAction )(
            __RPC__in IFsrmQuotaObject * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumThresholdActions )(
            __RPC__in IFsrmQuotaObject * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSid )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__deref_out_opt BSTR *userSid);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserAccount )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__deref_out_opt BSTR *userAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_SourceTemplateName )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__deref_out_opt BSTR *quotaTemplateName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MatchesSourceTemplate )(
            __RPC__in IFsrmQuotaObject * This,
                                __RPC__out VARIANT_BOOL *matches);
                               HRESULT ( STDMETHODCALLTYPE *ApplyTemplate )(
            __RPC__in IFsrmQuotaObject * This,
                       __RPC__in BSTR quotaTemplateName);
        END_INTERFACE
    } IFsrmQuotaObjectVtbl;
    interface IFsrmQuotaObject
    {
        CONST_VTBL struct IFsrmQuotaObjectVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
    ( (This)->lpVtbl -> AddThreshold(This,threshold) )
    ( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
    ( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
    ( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
    ( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
    ( (This)->lpVtbl -> get_Path(This,path) )
    ( (This)->lpVtbl -> get_UserSid(This,userSid) )
    ( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
    ( (This)->lpVtbl -> get_SourceTemplateName(This,quotaTemplateName) )
    ( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
    ( (This)->lpVtbl -> ApplyTemplate(This,quotaTemplateName) )
EXTERN_C const IID IID_IFsrmQuota;
    typedef struct IFsrmQuotaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuota * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuota * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuota * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuota * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuota * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuota * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuota * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmQuota * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmQuota * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmQuota * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmQuota * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmQuota * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaLimit )(
            __RPC__in IFsrmQuota * This,
                                __RPC__out VARIANT *quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaLimit )(
            __RPC__in IFsrmQuota * This,
                       VARIANT quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaFlags )(
            __RPC__in IFsrmQuota * This,
                                __RPC__out long *quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaFlags )(
            __RPC__in IFsrmQuota * This,
                       long quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Thresholds )(
            __RPC__in IFsrmQuota * This,
                                __RPC__deref_out_opt SAFEARRAY * *thresholds);
                               HRESULT ( STDMETHODCALLTYPE *AddThreshold )(
            __RPC__in IFsrmQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *DeleteThreshold )(
            __RPC__in IFsrmQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *ModifyThreshold )(
            __RPC__in IFsrmQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FSRM_QUOTA_THRESHOLD newThreshold);
                               HRESULT ( STDMETHODCALLTYPE *CreateThresholdAction )(
            __RPC__in IFsrmQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumThresholdActions )(
            __RPC__in IFsrmQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFsrmQuota * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSid )(
            __RPC__in IFsrmQuota * This,
                                __RPC__deref_out_opt BSTR *userSid);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserAccount )(
            __RPC__in IFsrmQuota * This,
                                __RPC__deref_out_opt BSTR *userAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_SourceTemplateName )(
            __RPC__in IFsrmQuota * This,
                                __RPC__deref_out_opt BSTR *quotaTemplateName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MatchesSourceTemplate )(
            __RPC__in IFsrmQuota * This,
                                __RPC__out VARIANT_BOOL *matches);
                               HRESULT ( STDMETHODCALLTYPE *ApplyTemplate )(
            __RPC__in IFsrmQuota * This,
                       __RPC__in BSTR quotaTemplateName);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaUsed )(
            __RPC__in IFsrmQuota * This,
                                __RPC__out VARIANT *used);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaPeakUsage )(
            __RPC__in IFsrmQuota * This,
                                __RPC__out VARIANT *peakUsage);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaPeakUsageTime )(
            __RPC__in IFsrmQuota * This,
                                __RPC__out DATE *peakUsageDateTime);
                               HRESULT ( STDMETHODCALLTYPE *ResetPeakUsage )(
            __RPC__in IFsrmQuota * This);
                               HRESULT ( STDMETHODCALLTYPE *RefreshUsageProperties )(
            __RPC__in IFsrmQuota * This);
        END_INTERFACE
    } IFsrmQuotaVtbl;
    interface IFsrmQuota
    {
        CONST_VTBL struct IFsrmQuotaVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
    ( (This)->lpVtbl -> AddThreshold(This,threshold) )
    ( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
    ( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
    ( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
    ( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
    ( (This)->lpVtbl -> get_Path(This,path) )
    ( (This)->lpVtbl -> get_UserSid(This,userSid) )
    ( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
    ( (This)->lpVtbl -> get_SourceTemplateName(This,quotaTemplateName) )
    ( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
    ( (This)->lpVtbl -> ApplyTemplate(This,quotaTemplateName) )
    ( (This)->lpVtbl -> get_QuotaUsed(This,used) )
    ( (This)->lpVtbl -> get_QuotaPeakUsage(This,peakUsage) )
    ( (This)->lpVtbl -> get_QuotaPeakUsageTime(This,peakUsageDateTime) )
    ( (This)->lpVtbl -> ResetPeakUsage(This) )
    ( (This)->lpVtbl -> RefreshUsageProperties(This) )
EXTERN_C const IID IID_IFsrmAutoApplyQuota;
    typedef struct IFsrmAutoApplyQuotaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmAutoApplyQuota * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmAutoApplyQuota * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmAutoApplyQuota * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmAutoApplyQuota * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmAutoApplyQuota * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmAutoApplyQuota * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaLimit )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__out VARIANT *quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaLimit )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       VARIANT quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaFlags )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__out long *quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaFlags )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       long quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Thresholds )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__deref_out_opt SAFEARRAY * *thresholds);
                               HRESULT ( STDMETHODCALLTYPE *AddThreshold )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *DeleteThreshold )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *ModifyThreshold )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FSRM_QUOTA_THRESHOLD newThreshold);
                               HRESULT ( STDMETHODCALLTYPE *CreateThresholdAction )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumThresholdActions )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserSid )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__deref_out_opt BSTR *userSid);
                                        HRESULT ( STDMETHODCALLTYPE *get_UserAccount )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__deref_out_opt BSTR *userAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_SourceTemplateName )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__deref_out_opt BSTR *quotaTemplateName);
                                        HRESULT ( STDMETHODCALLTYPE *get_MatchesSourceTemplate )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__out VARIANT_BOOL *matches);
                               HRESULT ( STDMETHODCALLTYPE *ApplyTemplate )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       __RPC__in BSTR quotaTemplateName);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExcludeFolders )(
            __RPC__in IFsrmAutoApplyQuota * This,
                                __RPC__deref_out_opt SAFEARRAY * *folders);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExcludeFolders )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       __RPC__in SAFEARRAY * folders);
                               HRESULT ( STDMETHODCALLTYPE *CommitAndUpdateDerived )(
            __RPC__in IFsrmAutoApplyQuota * This,
                       FsrmCommitOptions commitOptions,
                       FsrmTemplateApplyOptions applyOptions,
                                __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult);
        END_INTERFACE
    } IFsrmAutoApplyQuotaVtbl;
    interface IFsrmAutoApplyQuota
    {
        CONST_VTBL struct IFsrmAutoApplyQuotaVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
    ( (This)->lpVtbl -> AddThreshold(This,threshold) )
    ( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
    ( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
    ( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
    ( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
    ( (This)->lpVtbl -> get_Path(This,path) )
    ( (This)->lpVtbl -> get_UserSid(This,userSid) )
    ( (This)->lpVtbl -> get_UserAccount(This,userAccount) )
    ( (This)->lpVtbl -> get_SourceTemplateName(This,quotaTemplateName) )
    ( (This)->lpVtbl -> get_MatchesSourceTemplate(This,matches) )
    ( (This)->lpVtbl -> ApplyTemplate(This,quotaTemplateName) )
    ( (This)->lpVtbl -> get_ExcludeFolders(This,folders) )
    ( (This)->lpVtbl -> put_ExcludeFolders(This,folders) )
    ( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
EXTERN_C const IID IID_IFsrmQuotaManager;
    typedef struct IFsrmQuotaManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuotaManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuotaManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuotaManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuotaManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuotaManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariables )(
            __RPC__in IFsrmQuotaManager * This,
                                __RPC__deref_out_opt SAFEARRAY * *variables);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariableDescriptions )(
            __RPC__in IFsrmQuotaManager * This,
                                __RPC__deref_out_opt SAFEARRAY * *descriptions);
                               HRESULT ( STDMETHODCALLTYPE *CreateQuota )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *CreateAutoApplyQuota )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in BSTR quotaTemplateName,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmAutoApplyQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *GetQuota )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *GetAutoApplyQuota )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmAutoApplyQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *GetRestrictiveQuota )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *EnumQuotas )(
            __RPC__in IFsrmQuotaManager * This,
                                     __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotas);
                               HRESULT ( STDMETHODCALLTYPE *EnumAutoApplyQuotas )(
            __RPC__in IFsrmQuotaManager * This,
                                     __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotas);
                               HRESULT ( STDMETHODCALLTYPE *EnumEffectiveQuotas )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotas);
                               HRESULT ( STDMETHODCALLTYPE *Scan )(
            __RPC__in IFsrmQuotaManager * This,
                       __RPC__in BSTR strPath);
                               HRESULT ( STDMETHODCALLTYPE *CreateQuotaCollection )(
            __RPC__in IFsrmQuotaManager * This,
                                __RPC__deref_out_opt IFsrmCommittableCollection **collection);
        END_INTERFACE
    } IFsrmQuotaManagerVtbl;
    interface IFsrmQuotaManager
    {
        CONST_VTBL struct IFsrmQuotaManagerVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CreateQuota(This,path,quota) )
    ( (This)->lpVtbl -> CreateAutoApplyQuota(This,quotaTemplateName,path,quota) )
    ( (This)->lpVtbl -> GetQuota(This,path,quota) )
    ( (This)->lpVtbl -> GetAutoApplyQuota(This,path,quota) )
    ( (This)->lpVtbl -> GetRestrictiveQuota(This,path,quota) )
    ( (This)->lpVtbl -> EnumQuotas(This,path,options,quotas) )
    ( (This)->lpVtbl -> EnumAutoApplyQuotas(This,path,options,quotas) )
    ( (This)->lpVtbl -> EnumEffectiveQuotas(This,path,options,quotas) )
    ( (This)->lpVtbl -> Scan(This,strPath) )
    ( (This)->lpVtbl -> CreateQuotaCollection(This,collection) )
EXTERN_C const IID IID_IFsrmQuotaManagerEx;
    typedef struct IFsrmQuotaManagerExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuotaManagerEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuotaManagerEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuotaManagerEx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuotaManagerEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariables )(
            __RPC__in IFsrmQuotaManagerEx * This,
                                __RPC__deref_out_opt SAFEARRAY * *variables);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActionVariableDescriptions )(
            __RPC__in IFsrmQuotaManagerEx * This,
                                __RPC__deref_out_opt SAFEARRAY * *descriptions);
                               HRESULT ( STDMETHODCALLTYPE *CreateQuota )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *CreateAutoApplyQuota )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR quotaTemplateName,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmAutoApplyQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *GetQuota )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *GetAutoApplyQuota )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmAutoApplyQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *GetRestrictiveQuota )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR path,
                                __RPC__deref_out_opt IFsrmQuota **quota);
                               HRESULT ( STDMETHODCALLTYPE *EnumQuotas )(
            __RPC__in IFsrmQuotaManagerEx * This,
                                     __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotas);
                               HRESULT ( STDMETHODCALLTYPE *EnumAutoApplyQuotas )(
            __RPC__in IFsrmQuotaManagerEx * This,
                                     __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotas);
                               HRESULT ( STDMETHODCALLTYPE *EnumEffectiveQuotas )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotas);
                               HRESULT ( STDMETHODCALLTYPE *Scan )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR strPath);
                               HRESULT ( STDMETHODCALLTYPE *CreateQuotaCollection )(
            __RPC__in IFsrmQuotaManagerEx * This,
                                __RPC__deref_out_opt IFsrmCommittableCollection **collection);
                               HRESULT ( STDMETHODCALLTYPE *IsAffectedByQuota )(
            __RPC__in IFsrmQuotaManagerEx * This,
                       __RPC__in BSTR path,
                                     FsrmEnumOptions options,
                                __RPC__out VARIANT_BOOL *affected);
        END_INTERFACE
    } IFsrmQuotaManagerExVtbl;
    interface IFsrmQuotaManagerEx
    {
        CONST_VTBL struct IFsrmQuotaManagerExVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> CreateQuota(This,path,quota) )
    ( (This)->lpVtbl -> CreateAutoApplyQuota(This,quotaTemplateName,path,quota) )
    ( (This)->lpVtbl -> GetQuota(This,path,quota) )
    ( (This)->lpVtbl -> GetAutoApplyQuota(This,path,quota) )
    ( (This)->lpVtbl -> GetRestrictiveQuota(This,path,quota) )
    ( (This)->lpVtbl -> EnumQuotas(This,path,options,quotas) )
    ( (This)->lpVtbl -> EnumAutoApplyQuotas(This,path,options,quotas) )
    ( (This)->lpVtbl -> EnumEffectiveQuotas(This,path,options,quotas) )
    ( (This)->lpVtbl -> Scan(This,strPath) )
    ( (This)->lpVtbl -> CreateQuotaCollection(This,collection) )
    ( (This)->lpVtbl -> IsAffectedByQuota(This,path,options,affected) )
EXTERN_C const IID IID_IFsrmQuotaTemplate;
    typedef struct IFsrmQuotaTemplateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuotaTemplate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuotaTemplate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuotaTemplate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuotaTemplate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuotaTemplate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuotaTemplate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuotaTemplate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmQuotaTemplate * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmQuotaTemplate * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmQuotaTemplate * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmQuotaTemplate * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmQuotaTemplate * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaLimit )(
            __RPC__in IFsrmQuotaTemplate * This,
                                __RPC__out VARIANT *quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaLimit )(
            __RPC__in IFsrmQuotaTemplate * This,
                       VARIANT quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaFlags )(
            __RPC__in IFsrmQuotaTemplate * This,
                                __RPC__out long *quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaFlags )(
            __RPC__in IFsrmQuotaTemplate * This,
                       long quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Thresholds )(
            __RPC__in IFsrmQuotaTemplate * This,
                                __RPC__deref_out_opt SAFEARRAY * *thresholds);
                               HRESULT ( STDMETHODCALLTYPE *AddThreshold )(
            __RPC__in IFsrmQuotaTemplate * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *DeleteThreshold )(
            __RPC__in IFsrmQuotaTemplate * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *ModifyThreshold )(
            __RPC__in IFsrmQuotaTemplate * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FSRM_QUOTA_THRESHOLD newThreshold);
                               HRESULT ( STDMETHODCALLTYPE *CreateThresholdAction )(
            __RPC__in IFsrmQuotaTemplate * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumThresholdActions )(
            __RPC__in IFsrmQuotaTemplate * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmQuotaTemplate * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmQuotaTemplate * This,
                       __RPC__in BSTR name);
                               HRESULT ( STDMETHODCALLTYPE *CopyTemplate )(
            __RPC__in IFsrmQuotaTemplate * This,
                       __RPC__in BSTR quotaTemplateName);
                               HRESULT ( STDMETHODCALLTYPE *CommitAndUpdateDerived )(
            __RPC__in IFsrmQuotaTemplate * This,
                       FsrmCommitOptions commitOptions,
                       FsrmTemplateApplyOptions applyOptions,
                                __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult);
        END_INTERFACE
    } IFsrmQuotaTemplateVtbl;
    interface IFsrmQuotaTemplate
    {
        CONST_VTBL struct IFsrmQuotaTemplateVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
    ( (This)->lpVtbl -> AddThreshold(This,threshold) )
    ( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
    ( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
    ( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
    ( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> CopyTemplate(This,quotaTemplateName) )
    ( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
EXTERN_C const IID IID_IFsrmQuotaTemplateImported;
    typedef struct IFsrmQuotaTemplateImportedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuotaTemplateImported * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuotaTemplateImported * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuotaTemplateImported * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmQuotaTemplateImported * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmQuotaTemplateImported * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaLimit )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                                __RPC__out VARIANT *quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaLimit )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       VARIANT quotaLimit);
                                        HRESULT ( STDMETHODCALLTYPE *get_QuotaFlags )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                                __RPC__out long *quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_QuotaFlags )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       long quotaFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Thresholds )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                                __RPC__deref_out_opt SAFEARRAY * *thresholds);
                               HRESULT ( STDMETHODCALLTYPE *AddThreshold )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *DeleteThreshold )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       FSRM_QUOTA_THRESHOLD threshold);
                               HRESULT ( STDMETHODCALLTYPE *ModifyThreshold )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FSRM_QUOTA_THRESHOLD newThreshold);
                               HRESULT ( STDMETHODCALLTYPE *CreateThresholdAction )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                       FsrmActionType actionType,
                                __RPC__deref_out_opt IFsrmAction **action);
                               HRESULT ( STDMETHODCALLTYPE *EnumThresholdActions )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       FSRM_QUOTA_THRESHOLD threshold,
                                __RPC__deref_out_opt IFsrmCollection **actions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       __RPC__in BSTR name);
                               HRESULT ( STDMETHODCALLTYPE *CopyTemplate )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       __RPC__in BSTR quotaTemplateName);
                               HRESULT ( STDMETHODCALLTYPE *CommitAndUpdateDerived )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       FsrmCommitOptions commitOptions,
                       FsrmTemplateApplyOptions applyOptions,
                                __RPC__deref_out_opt IFsrmDerivedObjectsResult **derivedObjectsResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverwriteOnCommit )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                                __RPC__out VARIANT_BOOL *overwrite);
                                        HRESULT ( STDMETHODCALLTYPE *put_OverwriteOnCommit )(
            __RPC__in IFsrmQuotaTemplateImported * This,
                       VARIANT_BOOL overwrite);
        END_INTERFACE
    } IFsrmQuotaTemplateImportedVtbl;
    interface IFsrmQuotaTemplateImported
    {
        CONST_VTBL struct IFsrmQuotaTemplateImportedVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> get_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> put_QuotaLimit(This,quotaLimit) )
    ( (This)->lpVtbl -> get_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> put_QuotaFlags(This,quotaFlags) )
    ( (This)->lpVtbl -> get_Thresholds(This,thresholds) )
    ( (This)->lpVtbl -> AddThreshold(This,threshold) )
    ( (This)->lpVtbl -> DeleteThreshold(This,threshold) )
    ( (This)->lpVtbl -> ModifyThreshold(This,threshold,newThreshold) )
    ( (This)->lpVtbl -> CreateThresholdAction(This,threshold,actionType,action) )
    ( (This)->lpVtbl -> EnumThresholdActions(This,threshold,actions) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> CopyTemplate(This,quotaTemplateName) )
    ( (This)->lpVtbl -> CommitAndUpdateDerived(This,commitOptions,applyOptions,derivedObjectsResult) )
    ( (This)->lpVtbl -> get_OverwriteOnCommit(This,overwrite) )
    ( (This)->lpVtbl -> put_OverwriteOnCommit(This,overwrite) )
EXTERN_C const IID IID_IFsrmQuotaTemplateManager;
    typedef struct IFsrmQuotaTemplateManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmQuotaTemplateManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmQuotaTemplateManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmQuotaTemplateManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateTemplate )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                                __RPC__deref_out_opt IFsrmQuotaTemplate **quotaTemplate);
                               HRESULT ( STDMETHODCALLTYPE *GetTemplate )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                                     __RPC__in BSTR name,
                                __RPC__deref_out_opt IFsrmQuotaTemplate **quotaTemplate);
                               HRESULT ( STDMETHODCALLTYPE *EnumTemplates )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotaTemplates);
                               HRESULT ( STDMETHODCALLTYPE *ExportTemplates )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                                     __RPC__in VARIANT *quotaTemplateNamesArray,
                                __RPC__deref_out_opt BSTR *serializedQuotaTemplates);
                               HRESULT ( STDMETHODCALLTYPE *ImportTemplates )(
            __RPC__in IFsrmQuotaTemplateManager * This,
                       __RPC__in BSTR serializedQuotaTemplates,
                                     __RPC__in VARIANT *quotaTemplateNamesArray,
                                __RPC__deref_out_opt IFsrmCommittableCollection **quotaTemplates);
        END_INTERFACE
    } IFsrmQuotaTemplateManagerVtbl;
    interface IFsrmQuotaTemplateManager
    {
        CONST_VTBL struct IFsrmQuotaTemplateManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateTemplate(This,quotaTemplate) )
    ( (This)->lpVtbl -> GetTemplate(This,name,quotaTemplate) )
    ( (This)->lpVtbl -> EnumTemplates(This,options,quotaTemplates) )
    ( (This)->lpVtbl -> ExportTemplates(This,quotaTemplateNamesArray,serializedQuotaTemplates) )
    ( (This)->lpVtbl -> ImportTemplates(This,serializedQuotaTemplates,quotaTemplateNamesArray,quotaTemplates) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fsrmquota_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmquota_0000_0009_v0_0_s_ifspec;
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
