#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPrintDocumentPackageTarget IPrintDocumentPackageTarget;
typedef interface IPrintDocumentPackageStatusEvent IPrintDocumentPackageStatusEvent;
typedef interface IPrintDocumentPackageTargetFactory IPrintDocumentPackageTargetFactory;
typedef class PrintDocumentPackageTarget PrintDocumentPackageTarget;
typedef class PrintDocumentPackageTargetFactory PrintDocumentPackageTargetFactory;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintDocumentPackageTarget;
    typedef struct IPrintDocumentPackageTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintDocumentPackageTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintDocumentPackageTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintDocumentPackageTarget * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPackageTargetTypes )(
            __RPC__in IPrintDocumentPackageTarget * This,
                        __RPC__out UINT32 *targetCount,
                                          __RPC__deref_out_ecount_full_opt(*targetCount) GUID **targetTypes);
                           HRESULT ( STDMETHODCALLTYPE *GetPackageTarget )(
            __RPC__in IPrintDocumentPackageTarget * This,
                       __RPC__in REFGUID guidTargetType,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvTarget);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IPrintDocumentPackageTarget * This);
        END_INTERFACE
    } IPrintDocumentPackageTargetVtbl;
    interface IPrintDocumentPackageTarget
    {
        CONST_VTBL struct IPrintDocumentPackageTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPackageTargetTypes(This,targetCount,targetTypes) )
    ( (This)->lpVtbl -> GetPackageTarget(This,guidTargetType,riid,ppvTarget) )
    ( (This)->lpVtbl -> Cancel(This) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum PrintDocumentPackageCompletion
    {
        PrintDocumentPackageCompletion_InProgress = 0,
        PrintDocumentPackageCompletion_Completed = ( PrintDocumentPackageCompletion_InProgress + 1 ) ,
        PrintDocumentPackageCompletion_Canceled = ( PrintDocumentPackageCompletion_Completed + 1 ) ,
        PrintDocumentPackageCompletion_Failed = ( PrintDocumentPackageCompletion_Canceled + 1 )
    } PrintDocumentPackageCompletion;
typedef struct __MIDL___MIDL_itf_documenttarget_0000_0001_0001
    {
    UINT32 JobId;
    INT32 CurrentDocument;
    INT32 CurrentPage;
    INT32 CurrentPageTotal;
    PrintDocumentPackageCompletion Completion;
    HRESULT PackageStatus;
    } PrintDocumentPackageStatus;
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IPrintDocumentPackageStatusEvent;
    typedef struct IPrintDocumentPackageStatusEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintDocumentPackageStatusEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintDocumentPackageStatusEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintDocumentPackageStatusEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPrintDocumentPackageStatusEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPrintDocumentPackageStatusEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPrintDocumentPackageStatusEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPrintDocumentPackageStatusEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *PackageStatusUpdated )(
            __RPC__in IPrintDocumentPackageStatusEvent * This,
                       __RPC__in PrintDocumentPackageStatus *packageStatus);
        END_INTERFACE
    } IPrintDocumentPackageStatusEventVtbl;
    interface IPrintDocumentPackageStatusEvent
    {
        CONST_VTBL struct IPrintDocumentPackageStatusEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> PackageStatusUpdated(This,packageStatus) )
EXTERN_C const IID IID_IPrintDocumentPackageTargetFactory;
    typedef struct IPrintDocumentPackageTargetFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrintDocumentPackageTargetFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrintDocumentPackageTargetFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrintDocumentPackageTargetFactory * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateDocumentPackageTargetForPrintJob )(
            __RPC__in IPrintDocumentPackageTargetFactory * This,
                               __RPC__in_string LPCWSTR printerName,
                               __RPC__in_string LPCWSTR jobName,
                       __RPC__in_opt IStream *jobOutputStream,
                       __RPC__in_opt IStream *jobPrintTicketStream,
                        __RPC__deref_out_opt IPrintDocumentPackageTarget **docPackageTarget);
        END_INTERFACE
    } IPrintDocumentPackageTargetFactoryVtbl;
    interface IPrintDocumentPackageTargetFactory
    {
        CONST_VTBL struct IPrintDocumentPackageTargetFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateDocumentPackageTargetForPrintJob(This,printerName,jobName,jobOutputStream,jobPrintTicketStream,docPackageTarget) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0003_v0_0_s_ifspec;
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
EXTERN_C const IID LIBID_PrintDocumentTargetLib;
EXTERN_C const CLSID CLSID_PrintDocumentPackageTarget;
class DECLSPEC_UUID("4842669e-9947-46ea-8ba2-d8cce432c2ca")
PrintDocumentPackageTarget;
EXTERN_C const CLSID CLSID_PrintDocumentPackageTargetFactory;
class DECLSPEC_UUID("348ef17d-6c81-4982-92b4-ee188a43867a")
PrintDocumentPackageTargetFactory;
DEFINE_GUID(ID_DOCUMENTPACKAGETARGET_MSXPS, 0x9cae40a8, 0xded1, 0x41c9, 0xa9, 0xfd, 0xd7, 0x35, 0xef, 0x33, 0xae, 0xda);
DEFINE_GUID(ID_DOCUMENTPACKAGETARGET_OPENXPS, 0x0056bb72, 0x8c9c, 0x4612, 0xbd, 0x0f, 0x93, 0x01, 0x2a, 0x87, 0x09, 0x9d);
DEFINE_GUID(ID_DOCUMENTPACKAGETARGET_OPENXPS_WITH_3D, 0x63dbd720, 0x8b14, 0x4577, 0xb0, 0x74, 0x7b, 0xb1, 0x1b, 0x59, 0x6d, 0x28);
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_documenttarget_0000_0004_v0_0_s_ifspec;
}
