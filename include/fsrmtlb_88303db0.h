#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface DIFsrmClassificationEvents DIFsrmClassificationEvents;
typedef class FsrmSetting FsrmSetting;
typedef class FsrmPathMapper FsrmPathMapper;
typedef class FsrmExportImport FsrmExportImport;
typedef class FsrmQuotaManager FsrmQuotaManager;
typedef class FsrmQuotaTemplateManager FsrmQuotaTemplateManager;
typedef class FsrmFileGroupManager FsrmFileGroupManager;
typedef class FsrmFileScreenManager FsrmFileScreenManager;
typedef class FsrmFileScreenTemplateManager FsrmFileScreenTemplateManager;
typedef class FsrmReportManager FsrmReportManager;
typedef class FsrmReportScheduler FsrmReportScheduler;
typedef class FsrmFileManagementJobManager FsrmFileManagementJobManager;
typedef class FsrmClassificationManager FsrmClassificationManager;
typedef class FsrmPipelineModuleConnector FsrmPipelineModuleConnector;
typedef class AdSyncTask AdSyncTask;
typedef class FsrmAccessDeniedRemediationClient FsrmAccessDeniedRemediationClient;
#include "oaidl.h"
#include "fsrmenums.h"
#include "fsrm.h"
#include "fsrmquota.h"
#include "fsrmscreen.h"
#include "fsrmreports.h"
#include "fsrmpipeline.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_fsrmtlb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmtlb_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_FsrmLib;
EXTERN_C const IID DIID_DIFsrmClassificationEvents;
    typedef struct DIFsrmClassificationEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DIFsrmClassificationEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DIFsrmClassificationEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DIFsrmClassificationEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DIFsrmClassificationEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DIFsrmClassificationEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DIFsrmClassificationEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DIFsrmClassificationEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DIFsrmClassificationEventsVtbl;
    interface DIFsrmClassificationEvents
    {
        CONST_VTBL struct DIFsrmClassificationEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_FsrmSetting;
class DECLSPEC_UUID("f556d708-6d4d-4594-9c61-7dbb0dae2a46")
FsrmSetting;
EXTERN_C const CLSID CLSID_FsrmPathMapper;
class DECLSPEC_UUID("f3be42bd-8ac2-409e-bbd8-faf9b6b41feb")
FsrmPathMapper;
EXTERN_C const CLSID CLSID_FsrmExportImport;
class DECLSPEC_UUID("1482dc37-fae9-4787-9025-8ce4e024ab56")
FsrmExportImport;
EXTERN_C const CLSID CLSID_FsrmQuotaManager;
class DECLSPEC_UUID("90dcab7f-347c-4bfc-b543-540326305fbe")
FsrmQuotaManager;
EXTERN_C const CLSID CLSID_FsrmQuotaTemplateManager;
class DECLSPEC_UUID("97d3d443-251c-4337-81e7-b32e8f4ee65e")
FsrmQuotaTemplateManager;
EXTERN_C const CLSID CLSID_FsrmFileGroupManager;
class DECLSPEC_UUID("8f1363f6-656f-4496-9226-13aecbd7718f")
FsrmFileGroupManager;
EXTERN_C const CLSID CLSID_FsrmFileScreenManager;
class DECLSPEC_UUID("95941183-db53-4c5f-b37b-7d0921cf9dc7")
FsrmFileScreenManager;
EXTERN_C const CLSID CLSID_FsrmFileScreenTemplateManager;
class DECLSPEC_UUID("243111df-e474-46aa-a054-eaa33edc292a")
FsrmFileScreenTemplateManager;
EXTERN_C const CLSID CLSID_FsrmReportManager;
class DECLSPEC_UUID("0058ef37-aa66-4c48-bd5b-2fce432ab0c8")
FsrmReportManager;
EXTERN_C const CLSID CLSID_FsrmReportScheduler;
class DECLSPEC_UUID("ea25f1b8-1b8d-4290-8ee8-e17c12c2fe20")
FsrmReportScheduler;
EXTERN_C const CLSID CLSID_FsrmFileManagementJobManager;
class DECLSPEC_UUID("eb18f9b2-4c3a-4321-b203-205120cff614")
FsrmFileManagementJobManager;
EXTERN_C const CLSID CLSID_FsrmClassificationManager;
class DECLSPEC_UUID("b15c0e47-c391-45b9-95c8-eb596c853f3a")
FsrmClassificationManager;
EXTERN_C const CLSID CLSID_FsrmPipelineModuleConnector;
class DECLSPEC_UUID("c7643375-1eb5-44de-a062-623547d933bc")
FsrmPipelineModuleConnector;
EXTERN_C const CLSID CLSID_AdSyncTask;
class DECLSPEC_UUID("2ae64751-b728-4d6b-97a0-b2da2e7d2a3b")
AdSyncTask;
EXTERN_C const CLSID CLSID_FsrmAccessDeniedRemediationClient;
class DECLSPEC_UUID("100B4FC8-74C1-470F-B1B7-DD7B6BAE79BD")
FsrmAccessDeniedRemediationClient;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fsrmtlb_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmtlb_0000_0002_v0_0_s_ifspec;
}
