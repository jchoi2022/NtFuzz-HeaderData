#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface INetDiagHelper INetDiagHelper;
typedef interface INetDiagHelperUtilFactory INetDiagHelperUtilFactory;
typedef interface INetDiagHelperEx INetDiagHelperEx;
typedef interface INetDiagHelperInfo INetDiagHelperInfo;
typedef interface INetDiagExtensibleHelper INetDiagExtensibleHelper;
#include "oaidl.h"
#include "ndattrib.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum tagDIAGNOSIS_STATUS
    {
        DS_NOT_IMPLEMENTED = 0,
        DS_CONFIRMED = ( DS_NOT_IMPLEMENTED + 1 ) ,
        DS_REJECTED = ( DS_CONFIRMED + 1 ) ,
        DS_INDETERMINATE = ( DS_REJECTED + 1 ) ,
        DS_DEFERRED = ( DS_INDETERMINATE + 1 ) ,
        DS_PASSTHROUGH = ( DS_DEFERRED + 1 )
    } DIAGNOSIS_STATUS;
typedef
enum tagREPAIR_STATUS
    {
        RS_NOT_IMPLEMENTED = 0,
        RS_REPAIRED = ( RS_NOT_IMPLEMENTED + 1 ) ,
        RS_UNREPAIRED = ( RS_REPAIRED + 1 ) ,
        RS_DEFERRED = ( RS_UNREPAIRED + 1 ) ,
        RS_USER_ACTION = ( RS_DEFERRED + 1 )
    } REPAIR_STATUS;
typedef
enum tagPROBLEM_TYPE
    {
        PT_INVALID = 0,
        PT_LOW_HEALTH = 1,
        PT_LOWER_HEALTH = 2,
        PT_DOWN_STREAM_HEALTH = 4,
        PT_HIGH_UTILIZATION = 8,
        PT_HIGHER_UTILIZATION = 16,
        PT_UP_STREAM_UTILIZATION = 32
    } PROBLEM_TYPE;
typedef struct tagHYPOTHESIS
    {
                   LPWSTR pwszClassName;
                   LPWSTR pwszDescription;
    ULONG celt;
                    PHELPER_ATTRIBUTE rgAttributes;
    } HYPOTHESIS;
typedef struct tagHYPOTHESIS *PHYPOTHESIS;
typedef struct tagHelperAttributeInfo
    {
                   LPWSTR pwszName;
    ATTRIBUTE_TYPE type;
    } HelperAttributeInfo;
typedef struct tagHelperAttributeInfo *PHelperAttributeInfo;
typedef struct tagDiagnosticsInfo
    {
    long cost;
    ULONG flags;
    } DiagnosticsInfo;
typedef struct tagDiagnosticsInfo *PDiagnosticsInfo;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_INetDiagHelper;
    typedef struct INetDiagHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetDiagHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetDiagHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetDiagHelper * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in INetDiagHelper * This,
                       ULONG celt,
                                __RPC__in_ecount_full(celt) HELPER_ATTRIBUTE rgAttributes[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetDiagnosticsInfo )(
            __RPC__in INetDiagHelper * This,
                                __RPC__deref_out_opt DiagnosticsInfo **ppInfo);
        HRESULT ( STDMETHODCALLTYPE *GetKeyAttributes )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HELPER_ATTRIBUTE **pprgAttributes);
        HRESULT ( STDMETHODCALLTYPE *LowHealth )(
            __RPC__in INetDiagHelper * This,
                                       __RPC__in_opt_string LPCWSTR pwszInstanceDescription,
                                __RPC__deref_out_opt_string LPWSTR *ppwszDescription,
                        __RPC__out long *pDeferredTime,
                        __RPC__out DIAGNOSIS_STATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *HighUtilization )(
            __RPC__in INetDiagHelper * This,
                                       __RPC__in_opt_string LPCWSTR pwszInstanceDescription,
                                __RPC__deref_out_opt_string LPWSTR *ppwszDescription,
                        __RPC__out long *pDeferredTime,
                        __RPC__out DIAGNOSIS_STATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetLowerHypotheses )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HYPOTHESIS **pprgHypotheses);
        HRESULT ( STDMETHODCALLTYPE *GetDownStreamHypotheses )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HYPOTHESIS **pprgHypotheses);
        HRESULT ( STDMETHODCALLTYPE *GetHigherHypotheses )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HYPOTHESIS **pprgHypotheses);
        HRESULT ( STDMETHODCALLTYPE *GetUpStreamHypotheses )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HYPOTHESIS **pprgHypotheses);
        HRESULT ( STDMETHODCALLTYPE *Repair )(
            __RPC__in INetDiagHelper * This,
                       __RPC__in RepairInfo *pInfo,
                        __RPC__out long *pDeferredTime,
                        __RPC__out REPAIR_STATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *Validate )(
            __RPC__in INetDiagHelper * This,
                       PROBLEM_TYPE problem,
                        __RPC__out long *pDeferredTime,
                        __RPC__out REPAIR_STATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetRepairInfo )(
            __RPC__in INetDiagHelper * This,
                       PROBLEM_TYPE problem,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) RepairInfo **ppInfo);
        HRESULT ( STDMETHODCALLTYPE *GetLifeTime )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out LIFE_TIME *pLifeTime);
        HRESULT ( STDMETHODCALLTYPE *SetLifeTime )(
            __RPC__in INetDiagHelper * This,
                       LIFE_TIME lifeTime);
        HRESULT ( STDMETHODCALLTYPE *GetCacheTime )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out FILETIME *pCacheTime);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            __RPC__in INetDiagHelper * This,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HELPER_ATTRIBUTE **pprgAttributes);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in INetDiagHelper * This);
        HRESULT ( STDMETHODCALLTYPE *Cleanup )(
            __RPC__in INetDiagHelper * This);
        END_INTERFACE
    } INetDiagHelperVtbl;
    interface INetDiagHelper
    {
        CONST_VTBL struct INetDiagHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,celt,rgAttributes) )
    ( (This)->lpVtbl -> GetDiagnosticsInfo(This,ppInfo) )
    ( (This)->lpVtbl -> GetKeyAttributes(This,pcelt,pprgAttributes) )
    ( (This)->lpVtbl -> LowHealth(This,pwszInstanceDescription,ppwszDescription,pDeferredTime,pStatus) )
    ( (This)->lpVtbl -> HighUtilization(This,pwszInstanceDescription,ppwszDescription,pDeferredTime,pStatus) )
    ( (This)->lpVtbl -> GetLowerHypotheses(This,pcelt,pprgHypotheses) )
    ( (This)->lpVtbl -> GetDownStreamHypotheses(This,pcelt,pprgHypotheses) )
    ( (This)->lpVtbl -> GetHigherHypotheses(This,pcelt,pprgHypotheses) )
    ( (This)->lpVtbl -> GetUpStreamHypotheses(This,pcelt,pprgHypotheses) )
    ( (This)->lpVtbl -> Repair(This,pInfo,pDeferredTime,pStatus) )
    ( (This)->lpVtbl -> Validate(This,problem,pDeferredTime,pStatus) )
    ( (This)->lpVtbl -> GetRepairInfo(This,problem,pcelt,ppInfo) )
    ( (This)->lpVtbl -> GetLifeTime(This,pLifeTime) )
    ( (This)->lpVtbl -> SetLifeTime(This,lifeTime) )
    ( (This)->lpVtbl -> GetCacheTime(This,pCacheTime) )
    ( (This)->lpVtbl -> GetAttributes(This,pcelt,pprgAttributes) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Cleanup(This) )
typedef struct tagHypothesisResult
    {
    HYPOTHESIS hypothesis;
    DIAGNOSIS_STATUS pathStatus;
    } HypothesisResult;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_INetDiagHelperUtilFactory;
    typedef struct INetDiagHelperUtilFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetDiagHelperUtilFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetDiagHelperUtilFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetDiagHelperUtilFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateUtilityInstance )(
            __RPC__in INetDiagHelperUtilFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvObject);
        END_INTERFACE
    } INetDiagHelperUtilFactoryVtbl;
    interface INetDiagHelperUtilFactory
    {
        CONST_VTBL struct INetDiagHelperUtilFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateUtilityInstance(This,riid,ppvObject) )
EXTERN_C const IID IID_INetDiagHelperEx;
    typedef struct INetDiagHelperExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetDiagHelperEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetDiagHelperEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetDiagHelperEx * This);
        HRESULT ( STDMETHODCALLTYPE *ReconfirmLowHealth )(
            __RPC__in INetDiagHelperEx * This,
                       ULONG celt,
                                __RPC__in_ecount_full(celt) HypothesisResult *pResults,
                                __RPC__deref_out_opt_string LPWSTR *ppwszUpdatedDescription,
                        __RPC__out DIAGNOSIS_STATUS *pUpdatedStatus);
        HRESULT ( STDMETHODCALLTYPE *SetUtilities )(
            __RPC__in INetDiagHelperEx * This,
                       __RPC__in_opt INetDiagHelperUtilFactory *pUtilities);
        HRESULT ( STDMETHODCALLTYPE *ReproduceFailure )(
            __RPC__in INetDiagHelperEx * This);
        END_INTERFACE
    } INetDiagHelperExVtbl;
    interface INetDiagHelperEx
    {
        CONST_VTBL struct INetDiagHelperExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReconfirmLowHealth(This,celt,pResults,ppwszUpdatedDescription,pUpdatedStatus) )
    ( (This)->lpVtbl -> SetUtilities(This,pUtilities) )
    ( (This)->lpVtbl -> ReproduceFailure(This) )
EXTERN_C const IID IID_INetDiagHelperInfo;
    typedef struct INetDiagHelperInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetDiagHelperInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetDiagHelperInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetDiagHelperInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeInfo )(
            __RPC__in INetDiagHelperInfo * This,
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HelperAttributeInfo **pprgAttributeInfos);
        END_INTERFACE
    } INetDiagHelperInfoVtbl;
    interface INetDiagHelperInfo
    {
        CONST_VTBL struct INetDiagHelperInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAttributeInfo(This,pcelt,pprgAttributeInfos) )
EXTERN_C const IID IID_INetDiagExtensibleHelper;
    typedef struct INetDiagExtensibleHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetDiagExtensibleHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetDiagExtensibleHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetDiagExtensibleHelper * This);
        HRESULT ( STDMETHODCALLTYPE *ResolveAttributes )(
            __RPC__in INetDiagExtensibleHelper * This,
                       ULONG celt,
                                __RPC__in_ecount_full(celt) HELPER_ATTRIBUTE rgKeyAttributes[ ],
                        __RPC__out ULONG *pcelt,
                                          __RPC__deref_out_ecount_full_opt(*pcelt) HELPER_ATTRIBUTE **prgMatchValues);
        END_INTERFACE
    } INetDiagExtensibleHelperVtbl;
    interface INetDiagExtensibleHelper
    {
        CONST_VTBL struct INetDiagExtensibleHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResolveAttributes(This,celt,rgKeyAttributes,pcelt,prgMatchValues) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ndhelper_0000_0005_v0_0_s_ifspec;
}
