#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "vsserror.h"
const IID IID_IVssComponent =
{
    0xd2c72c96,
    0xc121,
    0x4518,
    { 0xb6, 0x27, 0xe5, 0xa9, 0x3d, 0x01, 0x0e, 0xad }
};
const IID IID_IVssComponentEx =
{
    0x156c8b5e,
    0xf131,
    0x4bd7,
    { 0x9c, 0x97, 0xd1, 0x92, 0x3b, 0xe7, 0xe1, 0xfa }
};
const IID IID_IVssComponentEx2 =
{
    0x3b5be0f2,
    0x07a9,
    0x4e4b,
    { 0xbd, 0xd3, 0xcf, 0xdc, 0x8e, 0x2c, 0x0d, 0x2d }
};
const IID IID_IVssCreateWriterMetadataEx =
{
    0x9f21981d,
    0xd469,
    0x4349,
    { 0xb8, 0x07, 0x39, 0xe6, 0x4e, 0x46, 0x74, 0xe1 }
};
const IID IID_IVssCreateExpressWriterMetadata =
{
    0x9c772e77,
    0xb26e,
    0x427f,
    { 0x92, 0xdd, 0xc9, 0x96, 0xf4, 0x1e, 0xa5, 0xe3 }
};
const IID IID_IVssExpressWriter =
{
    0xe33affdc,
    0x59c7,
    0x47b1,
    {0x97, 0xd5, 0x42, 0x66, 0x59, 0x8f, 0x62, 0x35}
};
typedef enum VSS_USAGE_TYPE
{
    VSS_UT_UNDEFINED = 0,
    VSS_UT_BOOTABLESYSTEMSTATE,
    VSS_UT_SYSTEMSERVICE,
    VSS_UT_USERDATA,
    VSS_UT_OTHER
}VSS_USAGE_TYPE;
typedef enum VSS_SOURCE_TYPE
{
    VSS_ST_UNDEFINED = 0,
    VSS_ST_TRANSACTEDDB,
    VSS_ST_NONTRANSACTEDDB,
    VSS_ST_OTHER
}VSS_SOURCE_TYPE;
typedef enum VSS_RESTOREMETHOD_ENUM
{
    VSS_RME_UNDEFINED = 0,
    VSS_RME_RESTORE_IF_NOT_THERE,
    VSS_RME_RESTORE_IF_CAN_REPLACE,
    VSS_RME_STOP_RESTORE_START,
    VSS_RME_RESTORE_TO_ALTERNATE_LOCATION,
    VSS_RME_RESTORE_AT_REBOOT,
    VSS_RME_RESTORE_AT_REBOOT_IF_CANNOT_REPLACE,
    VSS_RME_CUSTOM,
    VSS_RME_RESTORE_STOP_START
}VSS_RESTOREMETHOD_ENUM;
typedef enum VSS_WRITERRESTORE_ENUM
{
    VSS_WRE_UNDEFINED = 0,
    VSS_WRE_NEVER,
    VSS_WRE_IF_REPLACE_FAILS,
    VSS_WRE_ALWAYS
}VSS_WRITERRESTORE_ENUM;
typedef enum VSS_COMPONENT_TYPE
{
    VSS_CT_UNDEFINED = 0,
    VSS_CT_DATABASE,
    VSS_CT_FILEGROUP
}VSS_COMPONENT_TYPE;
typedef enum VSS_ALTERNATE_WRITER_STATE
{
    VSS_AWS_UNDEFINED = 0,
    VSS_AWS_NO_ALTERNATE_WRITER,
    VSS_AWS_ALTERNATE_WRITER_EXISTS,
    VSS_AWS_THIS_IS_ALTERNATE_WRITER
}VSS_ALTERNATE_WRITER_STATE;
typedef enum VSS_SUBSCRIBE_MASK
{
    VSS_SM_POST_SNAPSHOT_FLAG = 0x00000001,
    VSS_SM_BACKUP_EVENTS_FLAG = 0x00000002,
    VSS_SM_RESTORE_EVENTS_FLAG = 0x00000004,
    VSS_SM_IO_THROTTLING_FLAG = 0x00000008,
    VSS_SM_ALL_FLAGS = 0xffffffff
}VSS_SUBSCRIBE_MASK;
typedef enum VSS_RESTORE_TARGET
{
    VSS_RT_UNDEFINED = 0,
    VSS_RT_ORIGINAL,
    VSS_RT_ALTERNATE,
    VSS_RT_DIRECTED,
    VSS_RT_ORIGINAL_LOCATION
}VSS_RESTORE_TARGET;
typedef enum VSS_FILE_RESTORE_STATUS
{
    VSS_RS_UNDEFINED = 0,
    VSS_RS_NONE,
    VSS_RS_ALL,
    VSS_RS_FAILED
}VSS_FILE_RESTORE_STATUS;
typedef enum VSS_COMPONENT_FLAGS
{
    VSS_CF_BACKUP_RECOVERY = 0x00000001,
    VSS_CF_APP_ROLLBACK_RECOVERY = 0x00000002,
    VSS_CF_NOT_SYSTEM_STATE = 0x00000004
}VSS_COMPONENT_FLAGS;
class IVssExamineWriterMetadata;
class IVssWMFiledesc
    : public IUnknown
{
public:
    STDMETHOD(GetPath)(
        _Out_ BSTR *pbstrPath
        ) = 0;
    STDMETHOD(GetFilespec)(
        _Out_ BSTR *pbstrFilespec
        ) = 0;
    STDMETHOD(GetRecursive)(
        _Out_ bool *pbRecursive
        ) = 0;
    STDMETHOD(GetAlternateLocation)(
        _Out_ BSTR *pbstrAlternateLocation
        ) = 0;
    STDMETHOD(GetBackupTypeMask)(
        _Out_ DWORD *pdwTypeMask
        ) = 0;
};
class IVssWMDependency
    : public IUnknown
{
public:
    STDMETHOD(GetWriterId)(OUT VSS_ID *pWriterId) = 0;
    STDMETHOD(GetLogicalPath)(OUT BSTR *pbstrLogicalPath) = 0;
    STDMETHOD(GetComponentName)(OUT BSTR *pbstrComponentName) = 0;
};
class __declspec(uuid("d2c72c96-c121-4518-b627-e5a93d010ead")) IVssComponent
    : public IUnknown
{
public:
    STDMETHOD(GetLogicalPath)(OUT BSTR *pbstrPath) = 0;
    STDMETHOD(GetComponentType)(VSS_COMPONENT_TYPE *pct) = 0;
    STDMETHOD(GetComponentName)(OUT BSTR *pbstrName) = 0;
    STDMETHOD(GetBackupSucceeded)(OUT bool *pbSucceeded) = 0;
    STDMETHOD(GetAlternateLocationMappingCount)
        (
        OUT UINT *pcMappings
        ) = 0;
    STDMETHOD(GetAlternateLocationMapping)
        (
        IN UINT iMapping,
        OUT IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(SetBackupMetadata)
        (
        IN LPCWSTR wszData
        ) = 0;
    STDMETHOD(GetBackupMetadata)
        (
        OUT BSTR *pbstrData
        ) = 0;
    STDMETHOD(AddPartialFile)
        (
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilename,
        IN LPCWSTR wszRanges,
        IN LPCWSTR wszMetadata
        ) = 0;
    STDMETHOD(GetPartialFileCount)
        (
        OUT UINT *pcPartialFiles
        ) = 0;
    STDMETHOD(GetPartialFile)
        (
        IN UINT iPartialFile,
        OUT BSTR *pbstrPath,
        OUT BSTR *pbstrFilename,
        OUT BSTR *pbstrRange,
        OUT BSTR *pbstrMetadata
        ) = 0;
    STDMETHOD(IsSelectedForRestore)
        (
        OUT bool *pbSelectedForRestore
        ) = 0;
    STDMETHOD(GetAdditionalRestores)
        (
        OUT bool *pbAdditionalRestores
        ) = 0;
    STDMETHOD(GetNewTargetCount)
        (
        OUT UINT *pcNewTarget
        ) = 0;
    STDMETHOD(GetNewTarget)
        (
        IN UINT iNewTarget,
        OUT IVssWMFiledesc **ppFiledesc
        ) = 0;
    STDMETHOD(AddDirectedTarget)
        (
        IN LPCWSTR wszSourcePath,
        IN LPCWSTR wszSourceFilename,
        IN LPCWSTR wszSourceRangeList,
        IN LPCWSTR wszDestinationPath,
        IN LPCWSTR wszDestinationFilename,
        IN LPCWSTR wszDestinationRangeList
        ) = 0;
    STDMETHOD(GetDirectedTargetCount)
        (
        OUT UINT *pcDirectedTarget
        ) = 0;
    STDMETHOD(GetDirectedTarget)
        (
        IN UINT iDirectedTarget,
        OUT BSTR *pbstrSourcePath,
        OUT BSTR *pbstrSourceFileName,
        OUT BSTR *pbstrSourceRangeList,
        OUT BSTR *pbstrDestinationPath,
        OUT BSTR *pbstrDestinationFilename,
        OUT BSTR *pbstrDestinationRangeList
        ) = 0;
    STDMETHOD(SetRestoreMetadata)
        (
        IN LPCWSTR wszRestoreMetadata
        ) = 0;
    STDMETHOD(GetRestoreMetadata)
        (
        OUT BSTR *pbstrRestoreMetadata
        ) = 0;
     STDMETHOD(SetRestoreTarget)
           (
        IN VSS_RESTORE_TARGET target
        ) = 0;
    STDMETHOD(GetRestoreTarget)
        (
        OUT VSS_RESTORE_TARGET *pTarget
        ) = 0;
    STDMETHOD(SetPreRestoreFailureMsg)
        (
        IN LPCWSTR wszPreRestoreFailureMsg
        ) = 0;
    STDMETHOD(GetPreRestoreFailureMsg)
        (
        OUT BSTR *pbstrPreRestoreFailureMsg
        ) = 0;
    STDMETHOD(SetPostRestoreFailureMsg)
        (
        IN LPCWSTR wszPostRestoreFailureMsg
        ) = 0;
    STDMETHOD(GetPostRestoreFailureMsg)
        (
        OUT BSTR *pbstrPostRestoreFailureMsg
        ) = 0;
    STDMETHOD(SetBackupStamp)
        (
        IN LPCWSTR wszBackupStamp
        ) = 0;
    STDMETHOD(GetBackupStamp)
        (
        OUT BSTR *pbstrBackupStamp
        ) = 0;
    STDMETHOD(GetPreviousBackupStamp)
        (
        OUT BSTR *pbstrBackupStamp
        ) = 0;
    STDMETHOD(GetBackupOptions)
        (
        OUT BSTR *pbstrBackupOptions
        ) = 0;
    STDMETHOD(GetRestoreOptions)
        (
        OUT BSTR *pbstrRestoreOptions
        ) = 0;
    STDMETHOD(GetRestoreSubcomponentCount)
        (
        OUT UINT *pcRestoreSubcomponent
        ) = 0;
    STDMETHOD(GetRestoreSubcomponent)
        (
        UINT iComponent,
        OUT BSTR *pbstrLogicalPath,
        OUT BSTR *pbstrComponentName,
        OUT bool *pbRepair
        ) = 0;
    STDMETHOD(GetFileRestoreStatus)
        (
        OUT VSS_FILE_RESTORE_STATUS *pStatus
        ) = 0;
    STDMETHOD(AddDifferencedFilesByLastModifyTime)
        (
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilespec,
        IN BOOL bRecursive,
        IN FILETIME ftLastModifyTime
        ) = 0;
    STDMETHOD(AddDifferencedFilesByLastModifyLSN)
        (
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilespec,
        IN BOOL bRecursive,
        IN BSTR bstrLsnString
        ) = 0;
    STDMETHOD(GetDifferencedFilesCount)
        (
        OUT UINT *pcDifferencedFiles
        ) = 0;
    STDMETHOD(GetDifferencedFile)
        (
        IN UINT iDifferencedFile,
        OUT BSTR *pbstrPath,
        OUT BSTR *pbstrFilespec,
        OUT BOOL *pbRecursive,
        OUT BSTR *pbstrLsnString,
        OUT FILETIME *pftLastModifyTime
        ) = 0;
};
class IVssWriterComponents
{
public:
    STDMETHOD(GetComponentCount)(OUT UINT *pcComponents) = 0;
    STDMETHOD(GetWriterInfo)
        (
        OUT VSS_ID *pidInstance,
        OUT VSS_ID *pidWriter
        ) = 0;
    STDMETHOD(GetComponent)
        (
        IN UINT iComponent,
        OUT IVssComponent **ppComponent
        ) = 0;
};
class __declspec(uuid("156c8b5e-f131-4bd7-9c97-d1923be7e1fa")) IVssComponentEx
    : public IVssComponent
{
public:
    STDMETHOD(SetPrepareForBackupFailureMsg)
        (
        _In_ LPCWSTR wszFailureMsg
        ) = 0;
    STDMETHOD(SetPostSnapshotFailureMsg)
        (
        _In_ LPCWSTR wszFailureMsg
        ) = 0;
    STDMETHOD(GetPrepareForBackupFailureMsg)
        (
        _Outptr_result_maybenull_ BSTR* pbstrFailureMsg
        ) = 0;
    STDMETHOD(GetPostSnapshotFailureMsg)
        (
        _Outptr_result_maybenull_ BSTR* pbstrFailureMsg
        ) = 0;
    STDMETHOD(GetAuthoritativeRestore)
        (
        _Out_ bool* pbAuth
        ) = 0;
    STDMETHOD(GetRollForward)
        (
        _Out_ VSS_ROLLFORWARD_TYPE* pRollType,
        _Outptr_result_maybenull_ BSTR* pbstrPoint
        ) = 0;
    STDMETHOD(GetRestoreName)
        (
        _Outptr_result_maybenull_ BSTR* pbstrName
        ) = 0;
};
class __declspec(uuid("3b5be0f2-07a9-4e4b-bdd3-cfdc8e2c0d2d")) IVssComponentEx2
    : public IVssComponentEx
{
public:
    STDMETHOD(SetFailure)
        (
        _In_ HRESULT hr,
        _In_ HRESULT hrApplication,
        _In_opt_ LPCWSTR wszApplicationMessage,
        _In_ DWORD dwReserved
        ) = 0;
    STDMETHOD(GetFailure)
        (
        _Out_ HRESULT *phr,
        _Out_ HRESULT *phrApplication,
        _Out_ BSTR *pbstrApplicationMessage,
        _Out_ DWORD *pdwReserved
        ) = 0;
};
class IVssCreateWriterMetadata
{
public:
    STDMETHOD(AddIncludeFiles)
        (
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilespec,
        IN bool bRecursive,
        IN LPCWSTR wszAlternateLocation
        ) = 0;
    STDMETHOD(AddExcludeFiles)
        (
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilespec,
        IN bool bRecursive
        ) = 0;
    STDMETHOD(AddComponent)
        (
        IN VSS_COMPONENT_TYPE ct,
        IN LPCWSTR wszLogicalPath,
        IN LPCWSTR wszComponentName,
        IN LPCWSTR wszCaption,
        IN const BYTE *pbIcon,
        IN UINT cbIcon,
        IN bool bRestoreMetadata,
        IN bool bNotifyOnBackupComplete,
        IN bool bSelectable,
        IN bool bSelectableForRestore = false,
        IN DWORD dwComponentFlags = 0
        ) = 0;
    STDMETHOD(AddDatabaseFiles)
        (
        IN LPCWSTR wszLogicalPath,
        IN LPCWSTR wszDatabaseName,
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilespec,
        IN DWORD dwBackupTypeMask = (VSS_FSBT_ALL_BACKUP_REQUIRED |
                                     VSS_FSBT_ALL_SNAPSHOT_REQUIRED)
        ) = 0;
    STDMETHOD(AddDatabaseLogFiles)
        (
        IN LPCWSTR wszLogicalPath,
        IN LPCWSTR wszDatabaseName,
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilespec,
        IN DWORD dwBackupTypeMask = (VSS_FSBT_ALL_BACKUP_REQUIRED |
                                     VSS_FSBT_ALL_SNAPSHOT_REQUIRED)
        ) = 0;
    STDMETHOD(AddFilesToFileGroup)
        (
        IN LPCWSTR wszLogicalPath,
        IN LPCWSTR wszGroupName,
        IN LPCWSTR wszPath,
        IN LPCWSTR wszFilespec,
        IN bool bRecursive,
        IN LPCWSTR wszAlternateLocation,
        IN DWORD dwBackupTypeMask = (VSS_FSBT_ALL_BACKUP_REQUIRED |
                                     VSS_FSBT_ALL_SNAPSHOT_REQUIRED)
        ) = 0;
    STDMETHOD(SetRestoreMethod)
        (
        IN VSS_RESTOREMETHOD_ENUM method,
        IN LPCWSTR wszService,
        IN LPCWSTR wszUserProcedure,
        IN VSS_WRITERRESTORE_ENUM writerRestore,
        IN bool bRebootRequired
        ) = 0;
    STDMETHOD(AddAlternateLocationMapping)
        (
        IN LPCWSTR wszSourcePath,
        IN LPCWSTR wszSourceFilespec,
        IN bool bRecursive,
        IN LPCWSTR wszDestination
        ) = 0;
    STDMETHOD(AddComponentDependency)
                (
                IN LPCWSTR wszForLogicalPath,
                IN LPCWSTR wszForComponentName,
                IN VSS_ID onWriterId,
                IN LPCWSTR wszOnLogicalPath,
                IN LPCWSTR wszOnComponentName
                ) = 0;
    STDMETHOD(SetBackupSchema)
                (
                IN DWORD dwSchemaMask
                ) = 0;
    STDMETHOD(GetDocument)(IXMLDOMDocument **pDoc) = 0;
    STDMETHOD(SaveAsXML)(BSTR *pbstrXML) = 0;
};
class __declspec(uuid("9f21981d-d469-4349-b807-39e64e4674e1")) IVssCreateWriterMetadataEx : public IVssCreateWriterMetadata, public IUnknown
{
public:
    STDMETHOD(AddExcludeFilesFromSnapshot)
        (
        _In_ LPCWSTR wszPath,
        _In_ LPCWSTR wszFilespec,
        _In_ bool bRecursive
        ) = 0;
};
class IVssWriterImpl : public IUnknown
{
public:
    virtual HRESULT Initialize(
        _In_ VSS_ID writerId,
        _In_ LPCWSTR wszWriterName,
        _In_opt_ LPCWSTR wszWriterInstanceName,
        _In_ DWORD dwMajorVersion,
        _In_ DWORD dwMinorVersion,
        _In_ VSS_USAGE_TYPE ut,
        _In_ VSS_SOURCE_TYPE st,
        _In_ VSS_APPLICATION_LEVEL nLevel,
        _In_ DWORD dwTimeout,
        _In_ VSS_ALTERNATE_WRITER_STATE aws,
        _In_ bool bIOThrottlingOnly
        ) = 0;
    virtual HRESULT Subscribe(
        _In_ DWORD dwSubscribeTimeout,
        _In_ DWORD dwEventFlags
        ) = 0;
    virtual HRESULT Unsubscribe() = 0;
    virtual void Uninitialize() = 0;
    virtual LPCWSTR *GetCurrentVolumeArray() const = 0;
    virtual UINT GetCurrentVolumeCount() const = 0;
    virtual HRESULT GetSnapshotDeviceName(
        _In_ LPCWSTR wszOriginalVolume,
        _Outptr_result_maybenull_ LPCWSTR *ppwszSnapshotDevice
        ) const = 0;
    virtual VSS_ID GetCurrentSnapshotSetId() const = 0;
    virtual LONG GetContext() const = 0;
    virtual VSS_APPLICATION_LEVEL GetCurrentLevel() const = 0;
    virtual bool IsPathAffected(_In_ LPCWSTR wszPath) const = 0;
    virtual bool IsBootableSystemStateBackedUp() const = 0;
    virtual bool AreComponentsSelected() const = 0;
    virtual VSS_BACKUP_TYPE GetBackupType() const = 0;
    virtual VSS_RESTORE_TYPE GetRestoreType() const = 0;
    virtual HRESULT SetWriterFailure(
        _In_ HRESULT hr
        ) = 0;
    virtual bool IsPartialFileSupportEnabled() const = 0;
    virtual HRESULT InstallAlternateWriter(
        _In_ VSS_ID idWriter,
        _In_ CLSID clsid
        ) = 0;
    virtual IVssExamineWriterMetadata* GetIdentityInformation() const = 0;
    virtual HRESULT SetWriterFailureEx(
        _In_ HRESULT hr,
        _In_ HRESULT hrApplication,
        _In_ LPCWSTR wszApplicationMessage
        ) = 0;
    virtual HRESULT GetSessionId(
        _Out_ VSS_ID *idSession
        ) = 0;
    virtual bool IsWriterShuttingDown(
        ) = 0;
};
class __declspec(uuid("9c772e77-b26e-427f-92dd-c996f41ea5e3")) IVssCreateExpressWriterMetadata
    : public IUnknown
{
public:
    STDMETHOD(AddExcludeFiles)(
        _In_ LPCWSTR wszPath,
        _In_ LPCWSTR wszFilespec,
        _In_ bool bRecursive
        ) = 0;
    STDMETHOD(AddComponent)(
        _In_ VSS_COMPONENT_TYPE ct,
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszComponentName,
        _In_ LPCWSTR wszCaption,
        _In_ const BYTE *pbIcon,
        _In_ UINT cbIcon,
        _In_ bool bRestoreMetadata,
        _In_ bool bNotifyOnBackupComplete,
        _In_ bool bSelectable,
        _In_ bool bSelectableForRestore = false,
        _In_ DWORD dwComponentFlags = 0
        ) = 0;
    STDMETHOD(AddFilesToFileGroup)(
        _In_ LPCWSTR wszLogicalPath,
        _In_ LPCWSTR wszGroupName,
        _In_ LPCWSTR wszPath,
        _In_ LPCWSTR wszFilespec,
        _In_ bool bRecursive,
        _In_ LPCWSTR wszAlternateLocation,
        _In_ DWORD dwBackupTypeMask = (VSS_FSBT_ALL_BACKUP_REQUIRED | VSS_FSBT_ALL_SNAPSHOT_REQUIRED)
        ) = 0;
    STDMETHOD(SetRestoreMethod)(
        _In_ VSS_RESTOREMETHOD_ENUM method,
        _In_ LPCWSTR wszService,
        _In_ LPCWSTR wszUserProcedure,
        _In_ VSS_WRITERRESTORE_ENUM writerRestore,
        _In_ bool bRebootRequired
        ) = 0;
    STDMETHOD(AddComponentDependency)(
        _In_ LPCWSTR wszForLogicalPath,
        _In_ LPCWSTR wszForComponentName,
        _In_ VSS_ID onWriterId,
        _In_ LPCWSTR wszOnLogicalPath,
        _In_ LPCWSTR wszOnComponentName
        ) = 0;
    STDMETHOD(SetBackupSchema)(
        _In_ DWORD dwSchemaMask
        ) = 0;
    STDMETHOD(SaveAsXML)(
        _Out_ BSTR *pbstrXML
        ) = 0;
};
class __declspec(uuid("e33affdc-59c7-47b1-97d5-4266598f6235")) IVssExpressWriter
    : public IUnknown
{
public:
    STDMETHOD(CreateMetadata)(
        _In_ VSS_ID writerId,
        _In_ LPCWSTR writerName,
        _In_ VSS_USAGE_TYPE usageType,
        _In_ DWORD versionMajor,
        _In_ DWORD versionMinor,
        _In_ DWORD reserved,
        _Out_ IVssCreateExpressWriterMetadata **ppMetadata
        ) = 0;
    STDMETHOD(LoadMetadata)(
        _In_ LPCWSTR metadata,
        _In_ DWORD reserved
        ) = 0;
    STDMETHOD(Register)() = 0;
    STDMETHOD(Unregister)(
        _In_ VSS_ID writerId
        ) = 0;
};
class CVssWriter;
extern "C" {
    HRESULT STDAPICALLTYPE CreateWriter(_In_ CVssWriter* pWriter, _Out_ IVssWriterImpl** pWriterImpl);
}
class CVssWriter
{
public:
public:
    STDMETHODCALLTYPE CVssWriter()
        : m_pWriterImpl(NULL)
    {
    }
    virtual STDMETHODCALLTYPE ~CVssWriter()
    {
        if (m_pWriterImpl != NULL)
        {
            m_pWriterImpl->Uninitialize();
            m_pWriterImpl->Release();
            m_pWriterImpl = NULL;
        }
    }
public:
    HRESULT STDMETHODCALLTYPE Initialize(
        _In_ VSS_ID WriterId,
        _In_ LPCWSTR wszWriterName,
        _In_ VSS_USAGE_TYPE ut,
        _In_ VSS_SOURCE_TYPE st,
        _In_ VSS_APPLICATION_LEVEL nLevel = VSS_APP_FRONT_END,
        _In_ DWORD dwTimeoutFreeze = 60000,
        _In_ VSS_ALTERNATE_WRITER_STATE aws = VSS_AWS_NO_ALTERNATE_WRITER,
        _In_ bool bIOThrottlingOnly = false,
        _In_opt_ LPCWSTR wszWriterInstanceName = NULL
        )
    {
        if (m_pWriterImpl != NULL)
            return E_FAIL;
        HRESULT hr = CreateWriter(this, &m_pWriterImpl);
        if (FAILED(hr))
            return hr;
        hr = m_pWriterImpl->Initialize(WriterId, wszWriterName, wszWriterInstanceName, 0, 0, ut, st, nLevel, dwTimeoutFreeze, aws, bIOThrottlingOnly);
        if (FAILED(hr))
        {
            m_pWriterImpl->Release();
            m_pWriterImpl = NULL;
        }
        return hr;
    }
    HRESULT STDMETHODCALLTYPE Subscribe
        (
        _In_ DWORD dwEventFlags = VSS_SM_BACKUP_EVENTS_FLAG | VSS_SM_RESTORE_EVENTS_FLAG
        )
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        return m_pWriterImpl->Subscribe(0, dwEventFlags);
    }
    HRESULT STDMETHODCALLTYPE Unsubscribe()
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        m_pWriterImpl->Unsubscribe();
        return S_OK;
    }
    HRESULT STDMETHODCALLTYPE InstallAlternateWriter
        (
        _In_ VSS_ID writerId,
        _In_ CLSID persistentWriterClassId
        )
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        return m_pWriterImpl->InstallAlternateWriter(writerId, persistentWriterClassId);
    }
protected:
    LPCWSTR* STDMETHODCALLTYPE GetCurrentVolumeArray() const
    {
        if (m_pWriterImpl == NULL)
            return NULL;
        return m_pWriterImpl->GetCurrentVolumeArray();
    }
    UINT STDMETHODCALLTYPE GetCurrentVolumeCount() const
    {
        if (m_pWriterImpl == NULL)
            return 0;
        return m_pWriterImpl->GetCurrentVolumeCount();
    }
    HRESULT STDMETHODCALLTYPE GetSnapshotDeviceName
    (
        _In_ LPCWSTR wszOriginalVolume,
        _Outptr_result_maybenull_ LPCWSTR* ppwszSnapshotDevice
    ) const
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        return m_pWriterImpl->GetSnapshotDeviceName(wszOriginalVolume, ppwszSnapshotDevice);
    }
    VSS_ID STDMETHODCALLTYPE GetCurrentSnapshotSetId() const
    {
        if (m_pWriterImpl == NULL)
            return GUID_NULL;
        return m_pWriterImpl->GetCurrentSnapshotSetId();
    }
    LONG STDMETHODCALLTYPE GetContext() const
    {
        if (m_pWriterImpl == NULL)
            return 0;
        return m_pWriterImpl->GetContext();
    }
    VSS_APPLICATION_LEVEL STDMETHODCALLTYPE GetCurrentLevel() const
    {
        if (m_pWriterImpl == NULL)
            return VSS_APP_AUTO;
        return m_pWriterImpl->GetCurrentLevel();
    }
    bool STDMETHODCALLTYPE IsPathAffected
        (
        _In_ LPCWSTR wszPath
        ) const
        {
        if (m_pWriterImpl == NULL)
            return false;
        return m_pWriterImpl->IsPathAffected(wszPath);
        }
    bool STDMETHODCALLTYPE IsBootableSystemStateBackedUp() const
    {
        if (m_pWriterImpl == NULL)
            return false;
        return m_pWriterImpl->IsBootableSystemStateBackedUp();
    }
    bool STDMETHODCALLTYPE AreComponentsSelected() const
    {
        if (m_pWriterImpl == NULL)
            return false;
        return m_pWriterImpl->AreComponentsSelected();
    }
    VSS_BACKUP_TYPE STDMETHODCALLTYPE GetBackupType() const
    {
        if (m_pWriterImpl == NULL)
            return VSS_BT_UNDEFINED;
        return m_pWriterImpl->GetBackupType();
    }
    VSS_RESTORE_TYPE STDMETHODCALLTYPE GetRestoreType() const
    {
        if (m_pWriterImpl == NULL)
            return VSS_RTYPE_UNDEFINED;
        return m_pWriterImpl->GetRestoreType();
    }
    bool STDMETHODCALLTYPE IsPartialFileSupportEnabled() const
    {
        if (m_pWriterImpl == NULL)
            return false;
        return m_pWriterImpl->IsPartialFileSupportEnabled();
    }
    HRESULT STDMETHODCALLTYPE SetWriterFailure(HRESULT hr)
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        return m_pWriterImpl->SetWriterFailure(hr);
    }
public:
    virtual bool STDMETHODCALLTYPE OnIdentify(IN IVssCreateWriterMetadata *pMetadata)
    {
        UNREFERENCED_PARAMETER(pMetadata);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnPrepareBackup(
        _In_ IVssWriterComponents *pComponent
        )
    {
        UNREFERENCED_PARAMETER(pComponent);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnPrepareSnapshot() = 0;
    virtual bool STDMETHODCALLTYPE OnFreeze() = 0;
    virtual bool STDMETHODCALLTYPE OnThaw() = 0;
    virtual bool STDMETHODCALLTYPE OnAbort() = 0;
    virtual bool STDMETHODCALLTYPE OnBackupComplete
        (
        _In_ IVssWriterComponents *pComponent
        )
    {
        UNREFERENCED_PARAMETER(pComponent);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnBackupShutdown
        (
        _In_ VSS_ID SnapshotSetId
        )
    {
        UNREFERENCED_PARAMETER(SnapshotSetId);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnPreRestore
        (
        _In_ IVssWriterComponents *pComponent
        )
    {
        UNREFERENCED_PARAMETER(pComponent);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnPostRestore
        (
        _In_ IVssWriterComponents *pComponent
        )
    {
        UNREFERENCED_PARAMETER(pComponent);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnPostSnapshot
        (
        _In_ IVssWriterComponents *pComponent
        )
    {
        UNREFERENCED_PARAMETER(pComponent);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnBackOffIOOnVolume
        (
        _In_ VSS_PWSZ wszVolumeName,
        _In_ VSS_ID snapshotId,
        _In_ VSS_ID providerId
        )
    {
        UNREFERENCED_PARAMETER(wszVolumeName);
        UNREFERENCED_PARAMETER(snapshotId);
        UNREFERENCED_PARAMETER(providerId);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnContinueIOOnVolume
        (
        _In_ VSS_PWSZ wszVolumeName,
        _In_ VSS_ID snapshotId,
        _In_ VSS_ID providerId
        )
    {
        UNREFERENCED_PARAMETER(wszVolumeName);
        UNREFERENCED_PARAMETER(snapshotId);
        UNREFERENCED_PARAMETER(providerId);
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnVSSShutdown()
    {
        return true;
    }
    virtual bool STDMETHODCALLTYPE OnVSSApplicationStartup()
    {
        return true;
    }
protected:
    IVssWriterImpl *m_pWriterImpl;
};
class CVssWriterEx;
extern "C" {
    HRESULT STDMETHODCALLTYPE CreateWriterEx(
        _In_ CVssWriterEx *pWriter,
        _Out_ IVssWriterImpl **pWriterImpl
        );
}
class CVssWriterEx : public CVssWriter
{
public:
    HRESULT STDMETHODCALLTYPE Initialize(
        _In_ VSS_ID WriterId,
        _In_ LPCWSTR wszWriterName,
        _In_ VSS_USAGE_TYPE ut,
        _In_ VSS_SOURCE_TYPE st,
        _In_ VSS_APPLICATION_LEVEL nLevel = VSS_APP_FRONT_END,
        _In_ DWORD dwTimeoutFreeze = 60000,
        _In_ VSS_ALTERNATE_WRITER_STATE aws = VSS_AWS_NO_ALTERNATE_WRITER,
        _In_ bool bIOThrottlingOnly = false,
        _In_opt_ LPCWSTR wszWriterInstanceName = NULL
        )
    {
        if (m_pWriterImpl != NULL)
            return E_FAIL;
        HRESULT hr = CreateWriterEx(this, &m_pWriterImpl);
        if (FAILED(hr))
            return hr;
        hr = m_pWriterImpl->Initialize(WriterId, wszWriterName, wszWriterInstanceName, 0, 0, ut, st, nLevel, dwTimeoutFreeze, aws, bIOThrottlingOnly);
        if (FAILED(hr))
        {
            m_pWriterImpl->Release();
            m_pWriterImpl = NULL;
        }
        return hr;
    }
    HRESULT STDMETHODCALLTYPE InitializeEx
        (
        _In_ VSS_ID WriterId,
        _In_ LPCWSTR wszWriterName,
        _In_ DWORD dwMajorVersion,
        _In_ DWORD dwMinorVersion,
        _In_ VSS_USAGE_TYPE ut,
        _In_ VSS_SOURCE_TYPE st,
        _In_ VSS_APPLICATION_LEVEL nLevel = VSS_APP_FRONT_END,
        _In_ DWORD dwTimeoutFreeze = 60000,
        _In_ VSS_ALTERNATE_WRITER_STATE aws = VSS_AWS_NO_ALTERNATE_WRITER,
        _In_ bool bIOThrottlingOnly = false,
        _In_opt_ LPCWSTR wszWriterInstanceName = NULL
        )
    {
        if (m_pWriterImpl != NULL)
            return E_FAIL;
        HRESULT hr = CreateWriterEx(this, &m_pWriterImpl);
        if (FAILED(hr))
            return hr;
        hr = m_pWriterImpl->Initialize(WriterId, wszWriterName, wszWriterInstanceName, dwMajorVersion, dwMinorVersion, ut, st, nLevel, dwTimeoutFreeze, aws, bIOThrottlingOnly);
        if (FAILED(hr))
        {
            m_pWriterImpl->Release();
            m_pWriterImpl = NULL;
        }
        return hr;
    }
    virtual bool STDMETHODCALLTYPE OnIdentify(IN IVssCreateWriterMetadata *pMetadata)
    {
        UNREFERENCED_PARAMETER(pMetadata);
        return false;
    }
    virtual bool STDMETHODCALLTYPE OnIdentifyEx(_In_ IVssCreateWriterMetadataEx *pMetadata)
    {
        UNREFERENCED_PARAMETER(pMetadata);
        return false;
    }
protected:
    HRESULT GetIdentifyInformation
    (
        _Out_ IVssExamineWriterMetadata** ppMetadata
    )
    {
    UNREFERENCED_PARAMETER(ppMetadata);
    if (m_pWriterImpl == NULL)
        return E_FAIL;
    *ppMetadata = m_pWriterImpl->GetIdentityInformation();
    return S_OK;
    }
    HRESULT STDMETHODCALLTYPE SubscribeEx
        (
        _In_ DWORD dwUnsubscribeTimeout,
        _In_ DWORD dwEventFlags = VSS_SM_BACKUP_EVENTS_FLAG | VSS_SM_RESTORE_EVENTS_FLAG
        )
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        return m_pWriterImpl->Subscribe(dwUnsubscribeTimeout, dwEventFlags);
    }
};
class CVssWriterEx2 : public CVssWriterEx
{
public:
    HRESULT STDMETHODCALLTYPE SetWriterFailureEx(
        _In_ HRESULT hrWriter,
        _In_ HRESULT hrApplication = S_FALSE,
        _In_ LPCWSTR wszApplicationMessage = NULL
        )
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        return m_pWriterImpl->SetWriterFailureEx(hrWriter, hrApplication, wszApplicationMessage);
    }
    HRESULT STDMETHODCALLTYPE GetSessionId(
        _Out_ VSS_ID *idSession
        )
    {
        if (m_pWriterImpl == NULL)
            return E_FAIL;
        return m_pWriterImpl->GetSessionId(idSession);
    }
    bool STDMETHODCALLTYPE IsWriterShuttingDown()
    {
        return m_pWriterImpl->IsWriterShuttingDown();
    }
};
extern "C" {
    HRESULT STDAPICALLTYPE CreateVssExpressWriterInternal
        (
        _Out_ IVssExpressWriter **ppWriter
        );
}
inline HRESULT CreateVssExpressWriter
    (
    _Out_ IVssExpressWriter **ppWriter
    )
{
    return CreateVssExpressWriterInternal(ppWriter);
}
#endif
#pragma endregion
