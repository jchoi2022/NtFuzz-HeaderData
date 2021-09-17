#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(cNodetypeSceTemplateServices, 0x24a7f717, 0x1f0c, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(cNodetypeSceAnalysisServices, 0x678050c7, 0x1ff8, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(cNodetypeSceEventLog, 0x2ce06698, 0x4bf3, 0x11d1, 0x8c, 0x30, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(IID_ISceSvcAttachmentPersistInfo, 0x6d90e0d0, 0x200d, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
DEFINE_GUID(IID_ISceSvcAttachmentData, 0x17c35fde, 0x200d, 0x11d1, 0xaf, 0xfb, 0x0, 0xc0, 0x4f, 0xb9, 0x84, 0xf9);
extern "C" {
typedef _Return_type_success_(return == SCESTATUS_SUCCESS) DWORD SCESTATUS;
typedef struct _SCESVC_CONFIGURATION_LINE_ {
    LPTSTR Key;
    LPTSTR Value;
    DWORD ValueLen;
} SCESVC_CONFIGURATION_LINE, *PSCESVC_CONFIGURATION_LINE;
typedef struct _SCESVC_CONFIGURATION_INFO_ {
    DWORD Count;
    PSCESVC_CONFIGURATION_LINE Lines;
} SCESVC_CONFIGURATION_INFO, *PSCESVC_CONFIGURATION_INFO;
typedef PVOID SCE_HANDLE;
typedef ULONG SCE_ENUMERATION_CONTEXT, *PSCE_ENUMERATION_CONTEXT;
typedef enum _SCESVC_INFO_TYPE {
    SceSvcConfigurationInfo,
    SceSvcMergedPolicyInfo,
    SceSvcAnalysisInfo,
    SceSvcInternalUse
} SCESVC_INFO_TYPE;
            SCE_ROOT_PATH TEXT("\\SvcEngs")
typedef PVOID SCESVC_HANDLE;
typedef struct _SCESVC_ANALYSIS_LINE_ {
    LPTSTR Key;
    PBYTE Value;
    DWORD ValueLen;
} SCESVC_ANALYSIS_LINE, *PSCESVC_ANALYSIS_LINE;
typedef struct _SCESVC_ANALYSIS_INFO_ {
    DWORD Count;
    PSCESVC_ANALYSIS_LINE Lines;
} SCESVC_ANALYSIS_INFO, *PSCESVC_ANALYSIS_INFO;
typedef
SCESTATUS
(CALLBACK *PFSCE_QUERY_INFO)(
    IN SCE_HANDLE sceHandle,
    IN SCESVC_INFO_TYPE sceType,
    IN LPTSTR lpPrefix OPTIONAL,
    IN BOOL bExact,
    OUT PVOID *ppvInfo,
    OUT PSCE_ENUMERATION_CONTEXT psceEnumHandle
);
typedef
SCESTATUS
(CALLBACK *PFSCE_SET_INFO)(
    IN SCE_HANDLE sceHandle,
    IN SCESVC_INFO_TYPE sceType,
    IN LPTSTR lpPrefix OPTIONAL,
    IN BOOL bExact,
    IN PVOID pvInfo
);
typedef
SCESTATUS
(CALLBACK *PFSCE_FREE_INFO)(
    IN PVOID pvServiceInfo
);
typedef
SCESTATUS
(CALLBACK *PFSCE_LOG_INFO)(
    IN INT ErrLevel,
    IN DWORD Win32rc,
    IN LPTSTR pErrFmt,
    ...
);
typedef struct _SCESVC_CALLBACK_INFO_ {
    SCE_HANDLE sceHandle;
    PFSCE_QUERY_INFO pfQueryInfo;
    PFSCE_SET_INFO pfSetInfo;
    PFSCE_FREE_INFO pfFreeInfo;
    PFSCE_LOG_INFO pfLogInfo;
} SCESVC_CALLBACK_INFO, *PSCESVC_CALLBACK_INFO;
typedef
SCESTATUS
(*PF_ConfigAnalyzeService)(
    IN PSCESVC_CALLBACK_INFO pSceCbInfo
);
typedef
SCESTATUS
(*PF_UpdateService)(
    IN PSCESVC_CALLBACK_INFO pSceCbInfo,
    IN PSCESVC_CONFIGURATION_INFO ServiceInfo
);
}
#include "rpc.h"
#include "rpcndr.h"
#include "windows.h"
#include "ole2.h"
extern "C" {
typedef PSCESVC_CONFIGURATION_INFO __RPC_FAR *LPSCESVC_CONFIGURATION_INFO;
typedef PSCESVC_ANALYSIS_INFO __RPC_FAR *LPSCESVC_ANALYSIS_INFO;
typedef interface ISceSvcAttachmentPersistInfo ISceSvcAttachmentPersistInfo;
typedef ISceSvcAttachmentPersistInfo __RPC_FAR *LPSCESVCATTACHMENTPERSISTINFO;
    typedef struct ISceSvcAttachmentPersistInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ISceSvcAttachmentPersistInfo __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ISceSvcAttachmentPersistInfo __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ISceSvcAttachmentPersistInfo __RPC_FAR * This);
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Save )(
                       ISceSvcAttachmentPersistInfo __RPC_FAR * This,
                       LPTSTR lpTemplateName,
                       SCESVC_HANDLE scesvcHandle,
                        PVOID *ppvData,
                           PBOOL pbOverwriteAll );
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FreeBuffer )(
                       ISceSvcAttachmentPersistInfo __RPC_FAR * This,
                       PVOID pvData);
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *IsDirty )(
                       ISceSvcAttachmentPersistInfo __RPC_FAR * This,
                       LPTSTR lpTemplateName );
        END_INTERFACE
    } ISceSvcAttachmentPersistInfoVtbl;
    interface ISceSvcAttachmentPersistInfo
    {
        CONST_VTBL struct ISceSvcAttachmentPersistInfoVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> Save(lpTemplateName, scesvcHandle, ppvData, pbOverwriteAll)
    (This)->lpVtbl -> FreeBuffer(pvData)
    (This)->lpVtbl -> IsDirty(lpTemplateName)
typedef interface ISceSvcAttachmentData ISceSvcAttachmentData;
typedef ISceSvcAttachmentData __RPC_FAR *LPSCESVCATTACHMENTDATA;
    typedef struct ISceSvcAttachmentDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            ISceSvcAttachmentData __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            ISceSvcAttachmentData __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            ISceSvcAttachmentData __RPC_FAR * This);
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Initialize )(
                       ISceSvcAttachmentData __RPC_FAR * This,
                       LPCTSTR lpServiceName,
                       LPCTSTR lpTemplateName,
                       LPSCESVCATTACHMENTPERSISTINFO lpSceSvcPersistInfo,
                        SCESVC_HANDLE *pscesvcHandle);
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetData )(
                       ISceSvcAttachmentData __RPC_FAR * This,
                       SCESVC_HANDLE scesvcHandle,
                       SCESVC_INFO_TYPE sceType,
                        PVOID *ppvData,
                           PSCE_ENUMERATION_CONTEXT psceEnumHandle );
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *FreeBuffer )(
                       ISceSvcAttachmentData __RPC_FAR * This,
                       PVOID pvData);
                           HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloseHandle )(
                       ISceSvcAttachmentData __RPC_FAR * This,
                       SCESVC_HANDLE scesvcHandle);
        END_INTERFACE
    } ISceSvcAttachmentDataVtbl;
    interface ISceSvcAttachmentData
    {
        CONST_VTBL struct ISceSvcAttachmentDataVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> Initialize(lpServiceName, lpTemplateName, lpSceSvcPersistInfo, pscesvcHandle)
    (This)->lpVtbl -> GetData(scesvcHandle, sceType, ppvData, psceEnumHandle)
    (This)->lpVtbl -> FreeBuffer(pvData)
    (This)->lpVtbl -> CloseHandle(scesvcHandle)
}
#endif
#pragma endregion
