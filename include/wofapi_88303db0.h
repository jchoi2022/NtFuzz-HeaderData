#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
BOOL
_Success_(return)
WINAPI
WofShouldCompressBinaries (
    __in LPCWSTR Volume,
    __out PULONG Algorithm
    );
HRESULT
WINAPI
WofGetDriverVersion (
    __in HANDLE FileOrVolumeHandle,
    __in ULONG Provider,
    __out PULONG WofVersion
    );
HRESULT
WINAPI
WofSetFileDataLocation (
    __in HANDLE FileHandle,
    __in ULONG Provider,
    __in PVOID ExternalFileInfo,
    __in ULONG Length
    );
HRESULT
WINAPI
WofIsExternalFile (
    __in LPCWSTR FilePath,
    __out_opt PBOOL IsExternalFile,
    __out_opt PULONG Provider,
    __out_opt PVOID ExternalFileInfo,
    __inout_opt PULONG BufferLength
    );
typedef
BOOL (CALLBACK * WofEnumEntryProc) (
    __in const PVOID EntryInfo,
    __in_opt PVOID UserData
    );
typedef
BOOL (CALLBACK * WofEnumFilesProc) (
    __in PCWSTR FilePath,
    __in PVOID ExternalFileInfo,
    __in_opt PVOID UserData
    );
HRESULT
WINAPI
WofEnumEntries (
    __in PCWSTR VolumeName,
    __in ULONG Provider,
    __in WofEnumEntryProc EnumProc,
    __in_opt PVOID UserData
    );
typedef struct _WIM_ENTRY_INFO {
    DWORD WimEntryInfoSize;
    DWORD WimType;
    LARGE_INTEGER DataSourceId;
    GUID WimGuid;
    PCWSTR WimPath;
    DWORD WimIndex;
    DWORD Flags;
} WIM_ENTRY_INFO, *PWIM_ENTRY_INFO;
typedef struct _WIM_EXTERNAL_FILE_INFO {
    LARGE_INTEGER DataSourceId;
    UCHAR ResourceHash[WIM_PROVIDER_HASH_SIZE];
    ULONG Flags;
} WIM_EXTERNAL_FILE_INFO, *PWIM_EXTERNAL_FILE_INFO;
HRESULT
WINAPI
WofWimAddEntry (
    __in PCWSTR VolumeName,
    __in PCWSTR WimPath,
    __in DWORD WimType,
    __in DWORD WimIndex,
    __out PLARGE_INTEGER DataSourceId
    );
HRESULT
WINAPI
WofWimEnumFiles (
    __in PCWSTR VolumeName,
    __in LARGE_INTEGER DataSourceId,
    __in WofEnumFilesProc EnumProc,
    __in_opt PVOID UserData
    );
HRESULT
WINAPI
WofWimSuspendEntry (
    __in PCWSTR VolumeName,
    __in LARGE_INTEGER DataSourceId
    );
HRESULT
WINAPI
WofWimRemoveEntry (
    __in PCWSTR VolumeName,
    __in LARGE_INTEGER DataSourceId
    );
HRESULT
WINAPI
WofWimUpdateEntry (
    __in PCWSTR VolumeName,
    __in LARGE_INTEGER DataSourceId,
    __in PCWSTR NewWimPath
    );
typedef struct _WOF_FILE_COMPRESSION_INFO_V0 {
    ULONG Algorithm;
} WOF_FILE_COMPRESSION_INFO_V0, *PWOF_FILE_COMPRESSION_INFO_V0;
typedef struct _WOF_FILE_COMPRESSION_INFO_V1 {
    ULONG Algorithm;
    ULONG Flags;
} WOF_FILE_COMPRESSION_INFO_V1, *PWOF_FILE_COMPRESSION_INFO_V1;
typedef WOF_FILE_COMPRESSION_INFO_V1 WOF_FILE_COMPRESSION_INFO;
typedef PWOF_FILE_COMPRESSION_INFO_V1 PWOF_FILE_COMPRESSION_INFO;
HRESULT
WINAPI
WofFileEnumFiles (
    __in PCWSTR VolumeName,
    __in ULONG Algorithm,
    __in WofEnumFilesProc EnumProc,
    __in_opt PVOID UserData
    );
}
#endif
