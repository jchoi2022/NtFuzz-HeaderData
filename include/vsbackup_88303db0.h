#include <winapifamily.h>
#pragma region Desktop Family or VSS Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_VSS)
const IID IID_IVssExamineWriterMetadata =
                     {
                     0x902fcf7f,
                     0xb7fd,
                     0x42f8,
                     {0x81, 0xf1, 0xb2, 0xe4, 0x00, 0xb1, 0xe5, 0xbd }
                     };
const IID IID_IVssExamineWriterMetadataEx =
                    {
                    0x0c0e5ec0,
                    0xca44,
                    0x472b,
                    { 0xb7, 0x02, 0xe6, 0x52, 0xdb, 0x1c, 0x04, 0x51 }
                    };
const IID IID_IVssExamineWriterMetadataEx2 =
                    {
                    0xce115780,
                    0xa611,
                    0x431b,
                    { 0xb5, 0x7f, 0xc3, 0x83, 0x03, 0xab, 0x6a, 0xee }
                    };
const IID IID_IVssBackupComponents =
                    {
                    0x665c1d5f,
                    0xc218,
                    0x414d,
                    { 0xa0, 0x5d, 0x7f, 0xef, 0x5f, 0x9d, 0x5c, 0x86 }
                    };
const IID IID_IVssBackupComponentsEx =
                    {
                    0x963f03ad,
                    0x9e4c,
                    0x4a34,
                    { 0xac, 0x15, 0xe4, 0xb6, 0x17, 0x4e, 0x50, 0x36 }
                    };
const IID IID_IVssBackupComponentsEx2 =
                    {
                    0xacfe2b3a,
                    0x22c9,
                    0x4ef8,
                    { 0xbd, 0x03, 0x2f, 0x9c, 0xa2, 0x30, 0x08, 0x4e }
                    };
const IID IID_IVssBackupComponentsEx3 =
                    {
                    0xc191bfbc,
                    0xb602,
                    0x4675,
                    { 0x8b, 0xd1, 0x67, 0xd6, 0x42, 0xf5, 0x29, 0xd5 }
                    };
const IID IID_IVssBackupComponentsEx4 =
                    {
                    0xf434c2fd,
                    0xb553,
                    0x4961,
                    { 0xa9, 0xf9, 0xa8, 0xe9, 0x0b, 0x67, 0x3e, 0x53 }
                    };
typedef struct _VSS_COMPONENTINFO
    {
    VSS_COMPONENT_TYPE type;
    BSTR bstrLogicalPath;
    BSTR bstrComponentName;
    BSTR bstrCaption;
    BYTE *pbIcon;
    UINT cbIcon;
    bool bRestoreMetadata;
    bool bNotifyOnBackupComplete;
    bool bSelectable;
    bool bSelectableForRestore;
    DWORD dwComponentFlags;
    UINT cFileCount;
    UINT cDatabases;
    UINT cLogFiles;
    UINT cDependencies;
    } VSS_COMPONENTINFO;
typedef const VSS_COMPONENTINFO *PVSSCOMPONENTINFO;
class IVssWMComponent : public IUnknown
{
public:
    STDMETHOD(GetComponentInfo)
        (
        _Out_ PVSSCOMPONENTINFO *ppInfo
        ) = 0;
    STDMETHOD(FreeComponentInfo)
        (
        _In_ PVSSCOMPONENTINFO pInfo
        ) = 0;
    STDMETHOD(GetFile)
        (
        _In_ UINT iFile,
        _Out_ IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(GetDatabaseFile)
        (
        _In_ UINT iDBFile,
        _Out_ IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(GetDatabaseLogFile)
        (
        _In_ UINT iDbLogFile,
        _Out_ IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(GetDependency)
        (
        _In_ UINT iDependency,
        _Out_ IVssWMDependency **ppDependency
        ) = 0;
};
class __declspec(uuid("902fcf7f-b7fd-42f8-81f1-b2e400b1e5bd")) IVssExamineWriterMetadata : public IUnknown
    {
public:
    STDMETHOD(GetIdentity)
        (
        _Out_ VSS_ID *pidInstance,
        _Out_ VSS_ID *pidWriter,
        _Out_ BSTR *pbstrWriterName,
        _Out_ VSS_USAGE_TYPE *pUsage,
        _Out_ VSS_SOURCE_TYPE *pSource
        ) = 0;
    STDMETHOD(GetFileCounts)
        (
        _Out_ UINT *pcIncludeFiles,
        _Out_ UINT *pcExcludeFiles,
        _Out_ UINT *pcComponents
        ) = 0;
    STDMETHOD(GetIncludeFile)
        (
        _In_ UINT iFile,
        _Out_ IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(GetExcludeFile)
        (
        _In_ UINT iFile,
        _Out_ IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(GetComponent)
        (
        _In_ UINT iComponent,
        _Out_ IVssWMComponent **ppComponent
        ) = 0;
    STDMETHOD(GetRestoreMethod)
        (
        _Out_ VSS_RESTOREMETHOD_ENUM *pMethod,
        _Out_ BSTR *pbstrService,
        _Out_ BSTR *pbstrUserProcedure,
        _Out_ VSS_WRITERRESTORE_ENUM *pwriterRestore,
        _Out_ bool *pbRebootRequired,
        _Out_ UINT *pcMappings
        ) = 0;
    STDMETHOD(GetAlternateLocationMapping)
        (
        _In_ UINT iMapping,
        _Out_ IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(GetBackupSchema)
        (
        _Out_ DWORD *pdwSchemaMask
        ) = 0;
    STDMETHOD(GetDocument)
        (
        _Out_ IXMLDOMDocument **pDoc
        ) = 0;
    STDMETHOD(SaveAsXML)
        (
        _In_ BSTR *pbstrXML
        ) = 0;
    STDMETHOD(LoadFromXML)
        (
        _In_ BSTR bstrXML
        ) = 0;
};
class __declspec(uuid("0c0e5ec0-ca44-472b-b702-e652db1c0451")) IVssExamineWriterMetadataEx : public IVssExamineWriterMetadata
{
public:
    STDMETHOD(GetIdentityEx)
        (
        _Out_ VSS_ID *pidInstance,
        _Out_ VSS_ID *pidWriter,
        _Out_ BSTR *pbstrWriterName,
        _Out_ BSTR* pbstrInstanceName,
        _Out_ VSS_USAGE_TYPE *pUsage,
        _Out_ VSS_SOURCE_TYPE *pSource
        ) = 0;
};
class __declspec(uuid("ce115780-a611-431b-b57f-c38303ab6aee")) IVssExamineWriterMetadataEx2 : public IVssExamineWriterMetadataEx
{
public:
    STDMETHOD(GetVersion)
        (
        _Out_ DWORD* pdwMajorVersion,
        _Out_ DWORD* pdwMinorVersion
        ) = 0;
    STDMETHOD(GetExcludeFromSnapshotCount)
        (
        _Out_ UINT* pcExcludedFromSnapshot
        ) = 0;
    STDMETHOD(GetExcludeFromSnapshotFile)
        (
        _In_ UINT iFile,
        _Out_ IVssWMFiledesc **ppFiledesc
        ) = 0;
};
class IVssWriterComponentsExt :
    public IVssWriterComponents,
    public IUnknown
{
};
class __declspec(uuid("665c1d5f-c218-414d-a05d-7fef5f9d5c86")) IVssBackupComponents : public IUnknown
{
public:
    STDMETHOD(GetWriterComponentsCount)
        (
        _Out_ UINT *pcComponents
        ) = 0;
    STDMETHOD(GetWriterComponents)
        (
        _In_ UINT iWriter,
        _Out_ IVssWriterComponentsExt **ppWriter
        ) = 0;
    STDMETHOD(InitializeForBackup)
        (
        _In_opt_ BSTR bstrXML = NULL
        ) = 0;
    STDMETHOD(SetBackupState)
        (
        _In_ bool bSelectComponents,
        _In_ bool bBackupBootableSystemState,
        _In_ VSS_BACKUP_TYPE backupType,
        _In_ bool bPartialFileSupport = false
        ) = 0;
    STDMETHOD(InitializeForRestore)
        (
        _In_ BSTR bstrXML
        ) = 0;
    STDMETHOD(SetRestoreState)
        (
        _In_ VSS_RESTORE_TYPE restoreType
        ) = 0;
    STDMETHOD(GatherWriterMetadata)
        (
        _Out_ IVssAsync **pAsync
        ) = 0;
    STDMETHOD(GetWriterMetadataCount)
        (
        _Out_ UINT *pcWriters
        ) = 0;
    STDMETHOD(GetWriterMetadata)
        (
        _In_ UINT iWriter,
        _Out_ VSS_ID *pidInstance,
        _Out_ IVssExamineWriterMetadata **ppMetadata
        ) = 0;
    STDMETHOD(FreeWriterMetadata)() = 0;
    STDMETHOD(AddComponent)
        (
        _In_ VSS_ID instanceId,
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName
        ) = 0;
    STDMETHOD(PrepareForBackup)
        (
        _Out_ IVssAsync **ppAsync
        ) = 0;
    STDMETHOD(AbortBackup)() = 0;
    STDMETHOD(GatherWriterStatus)
        (
        _Out_ IVssAsync **pAsync
        ) = 0;
    STDMETHOD(GetWriterStatusCount)
        (
        _Out_ UINT *pcWriters
        ) = 0;
    STDMETHOD(FreeWriterStatus)() = 0;
    STDMETHOD(GetWriterStatus)
        (
        _In_ UINT iWriter,
        _Out_ VSS_ID *pidInstance,
        _Out_ VSS_ID *pidWriter,
        _Out_ BSTR *pbstrWriter,
        _Out_ VSS_WRITER_STATE *pnStatus,
        _Out_ HRESULT *phResultFailure
        ) = 0;
    STDMETHOD(SetBackupSucceeded)
        (
        _In_ VSS_ID instanceId,
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ bool bSucceded
        ) = 0;
    STDMETHOD(SetBackupOptions)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszBackupOptions
        ) = 0;
    STDMETHOD(SetSelectedForRestore)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ bool bSelectedForRestore
        ) = 0;
    STDMETHOD(SetRestoreOptions)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszRestoreOptions
        ) = 0;
    STDMETHOD(SetAdditionalRestores)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ bool bAdditionalRestores
        ) = 0;
    STDMETHOD(SetPreviousBackupStamp)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszPreviousBackupStamp
        ) = 0;
    STDMETHOD(SaveAsXML)
        (
        _In_ BSTR *pbstrXML
        ) = 0;
    STDMETHOD(BackupComplete)
        (
        _Out_ IVssAsync **ppAsync
        ) = 0;
    STDMETHOD(AddAlternativeLocationMapping)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE componentType,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszPath,
        _In_ LPCWSTR wszFilespec,
        _In_ bool bRecursive,
        _In_ LPCWSTR wszDestination
        ) = 0;
    STDMETHOD(AddRestoreSubcomponent)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE componentType,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszSubComponentLogicalPath,
        _In_ LPCWSTR wszSubComponentName,
        _In_ bool bRepair
        ) = 0;
    STDMETHOD(SetFileRestoreStatus)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ VSS_FILE_RESTORE_STATUS status
        ) = 0;
    STDMETHOD(AddNewTarget)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszPath,
        _In_ LPCWSTR wszFileName,
        _In_ bool bRecursive,
        _In_ LPCWSTR wszAlternatePath
        ) = 0;
    STDMETHOD(SetRangesFilePath)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ UINT iPartialFile,
        _In_ LPCWSTR wszRangesFile
        ) = 0;
    STDMETHOD(PreRestore)
        (
        _Out_ IVssAsync **ppAsync
        ) = 0;
    STDMETHOD(PostRestore)
        (
        _Out_ IVssAsync **ppAsync
        ) = 0;
    STDMETHOD(SetContext)
        (
        _In_ LONG lContext
        ) = 0;
    STDMETHOD(StartSnapshotSet)
        (
        _Out_ VSS_ID *pSnapshotSetId
        ) = 0;
    STDMETHOD(AddToSnapshotSet)
    (
        _In_z_ VSS_PWSZ pwszVolumeName,
        _In_ VSS_ID ProviderId,
        _Out_ VSS_ID *pidSnapshot
        ) = 0;
    STDMETHOD(DoSnapshotSet)
    (
        _Out_ IVssAsync** ppAsync
        ) = 0;
    STDMETHOD(DeleteSnapshots)
        (
        _In_ VSS_ID SourceObjectId,
        _In_ VSS_OBJECT_TYPE eSourceObjectType,
        _In_ BOOL bForceDelete,
        _In_ LONG* plDeletedSnapshots,
        _In_ VSS_ID* pNondeletedSnapshotID
        ) = 0;
    STDMETHOD(ImportSnapshots)
        (
        _Out_ IVssAsync** ppAsync
        ) = 0;
    STDMETHOD(BreakSnapshotSet)
        (
        _In_ VSS_ID SnapshotSetId
        ) = 0;
    STDMETHOD(GetSnapshotProperties)
        (
        _In_ VSS_ID SnapshotId,
        _Out_ VSS_SNAPSHOT_PROP *pProp
        ) = 0;
    STDMETHOD(Query)
        (
        _In_ VSS_ID QueriedObjectId,
        _In_ VSS_OBJECT_TYPE eQueriedObjectType,
        _In_ VSS_OBJECT_TYPE eReturnedObjectsType,
        _In_ IVssEnumObject **ppEnum
        ) = 0;
    STDMETHOD(IsVolumeSupported)
        (
        _In_ VSS_ID ProviderId,
        _In_z_ VSS_PWSZ pwszVolumeName,
        _In_ BOOL * pbSupportedByThisProvider
        ) = 0;
    STDMETHOD(DisableWriterClasses)
        (
        _In_ const VSS_ID *rgWriterClassId,
        _In_ UINT cClassId
        ) = 0;
    STDMETHOD(EnableWriterClasses)
        (
        _In_ const VSS_ID *rgWriterClassId,
        _In_ UINT cClassId
        ) = 0;
    STDMETHOD(DisableWriterInstances)
        (
        _In_ const VSS_ID *rgWriterInstanceId,
        _In_ UINT cInstanceId
        ) = 0;
    STDMETHOD(ExposeSnapshot)
        (
        _In_ VSS_ID SnapshotId,
        _In_z_ VSS_PWSZ wszPathFromRoot,
        _In_ LONG lAttributes,
        _In_z_ VSS_PWSZ wszExpose,
        _Outptr_result_z_ VSS_PWSZ *pwszExposed
        ) = 0;
    STDMETHOD(RevertToSnapshot)
        (
        _In_ VSS_ID SnapshotId,
        _In_ BOOL bForceDismount
        ) = 0;
    STDMETHOD(QueryRevertStatus)
        (
        _In_z_ VSS_PWSZ pwszVolume,
        _Out_ IVssAsync **ppAsync
        ) = 0;
};
class __declspec(uuid("963f03ad-9e4c-4a34-ac15-e4b6174e5036")) IVssBackupComponentsEx : public IVssBackupComponents
{
public:
    STDMETHOD(GetWriterMetadataEx)
    (
        _In_ UINT iWriter,
        _Out_ VSS_ID *pidInstance,
        _Out_ IVssExamineWriterMetadataEx **ppMetadata
        ) = 0;
    STDMETHOD(SetSelectedForRestoreEx)
    (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ bool bSelectedForRestore,
        _In_ VSS_ID instanceId = GUID_NULL
        ) = 0;
};
class __declspec(uuid("acfe2b3a-22c9-4ef8-bd03-2f9ca230084e")) IVssBackupComponentsEx2 : public IVssBackupComponentsEx
{
public:
    STDMETHOD(UnexposeSnapshot)
        (
        _In_ VSS_ID snapshotId
        ) = 0;
    STDMETHOD(SetAuthoritativeRestore)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ bool bAuth
        )= 0;
    STDMETHOD(SetRollForward)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ VSS_ROLLFORWARD_TYPE rollType,
        _In_ LPCWSTR wszRollForwardPoint
        )= 0;
    STDMETHOD(SetRestoreName)
        (
        _In_ VSS_ID writerId,
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszRestoreName
        ) = 0;
    STDMETHOD(BreakSnapshotSetEx)
        (
        _In_ VSS_ID SnapshotSetID,
        _In_ DWORD dwBreakFlags,
        _Out_ IVssAsync** ppAsync
        ) = 0;
    STDMETHOD(PreFastRecovery)
        (
        _In_ VSS_ID SnapshotSetID,
        _In_ DWORD dwPreFastRecoveryFlags,
        _Out_ IVssAsync** ppAsync
        ) = 0;
    STDMETHOD(FastRecovery)
        (
        _In_ VSS_ID SnapshotSetID,
        _In_ DWORD dwFastRecoveryFlags,
        _Out_ IVssAsync** ppAsync
        ) = 0;
};
class __declspec(uuid("c191bfbc-b602-4675-8bd1-67d642f529d5")) IVssBackupComponentsEx3 : public IVssBackupComponentsEx2
{
public:
    STDMETHOD(GetWriterStatusEx)
        (
        _In_ UINT iWriter,
        _Out_ VSS_ID *pidInstance,
        _Out_ VSS_ID *pidWriter,
        _Out_ BSTR *pbstrWriter,
        _Out_ VSS_WRITER_STATE *pnStatus,
        _Out_ HRESULT *phrFailureWriter,
        _Out_opt_ HRESULT *phrApplication = NULL,
        _Out_opt_ BSTR *pbstrApplicationMessage = NULL
        ) = 0;
    STDMETHOD(AddSnapshotToRecoverySet)
        (
        _In_ VSS_ID snapshotId,
        _In_ DWORD dwFlags,
        _In_opt_ VSS_PWSZ pwszDestinationVolume = NULL
        ) = 0;
    STDMETHOD(RecoverSet)
        (
        _In_ DWORD dwFlags,
        _Outptr_ IVssAsync** ppAsync
        ) = 0;
    STDMETHOD(GetSessionId)
        (
        _Out_ VSS_ID *idSession
        ) = 0;
};
class __declspec(uuid("f434c2fd-b553-4961-a9f9-a8e90b673e53")) IVssBackupComponentsEx4 : public IVssBackupComponentsEx3
{
public:
    STDMETHOD(GetRootAndLogicalPrefixPaths)
        (
        _In_ VSS_PWSZ pwszFilePath,
        _Outptr_ VSS_PWSZ* ppwszRootPath,
        _Outptr_ VSS_PWSZ* ppwszLogicalPrefix,
        _In_opt_ BOOL bNormalizeFQDNforRootPath = FALSE
        ) = 0;
};
extern "C" {
    HRESULT STDAPICALLTYPE CreateVssBackupComponentsInternal
        (
        _Out_ IVssBackupComponents **ppBackup
        );
    HRESULT STDAPICALLTYPE CreateVssExamineWriterMetadataInternal
        (
        _In_ BSTR bstrXML,
        _Out_ IVssExamineWriterMetadata **ppMetadata
        );
    HRESULT APIENTRY IsVolumeSnapshottedInternal
        (
        _In_z_ VSS_PWSZ pwszVolumeName,
        _Out_ BOOL *pbSnapshotsPresent,
        _Out_ LONG *plSnapshotCapability
        );
    void APIENTRY VssFreeSnapshotPropertiesInternal(
        _In_ VSS_SNAPSHOT_PROP* pProp
        );
    HRESULT APIENTRY GetProviderMgmtInterfaceInternal(
        _In_ VSS_ID ProviderId,
        _In_ IID InterfaceId,
        _Out_ IUnknown** ppItf
        );
    HRESULT APIENTRY ShouldBlockRevertInternal
        (
        _In_ LPCWSTR wszVolumeName,
        _Out_ bool* pbBlock
        );
}
inline HRESULT CreateVssBackupComponents
    (
    _Out_ IVssBackupComponents **ppBackup
    )
{
    return CreateVssBackupComponentsInternal(ppBackup);
}
inline HRESULT CreateVssExamineWriterMetadata
    (
    _In_ BSTR bstrXML,
    _Out_ IVssExamineWriterMetadata **ppMetadata
    )
{
    return CreateVssExamineWriterMetadataInternal(bstrXML, ppMetadata);
}
inline HRESULT IsVolumeSnapshotted
    (
    _In_z_ VSS_PWSZ pwszVolumeName,
    _Out_ BOOL *pbSnapshotsPresent,
    _Out_ LONG *plSnapshotCapability
    )
{
    return IsVolumeSnapshottedInternal(pwszVolumeName, pbSnapshotsPresent, plSnapshotCapability);
}
inline void VssFreeSnapshotProperties
    (
    _In_ VSS_SNAPSHOT_PROP* pProp
    )
{
    return VssFreeSnapshotPropertiesInternal(pProp);
}
inline HRESULT GetProviderMgmtInterface
    (
    _In_ VSS_ID ProviderId,
    _In_ IID InterfaceId,
    _Out_ IUnknown** ppItf
    )
{
    return GetProviderMgmtInterfaceInternal(ProviderId, InterfaceId, ppItf);
}
inline HRESULT ShouldBlockRevert
    (
    _In_ LPCWSTR wszVolumeName,
    _Out_ bool* pbBlock
    )
{
    return ShouldBlockRevertInternal(wszVolumeName, pbBlock);
}
#endif
#pragma endregion
