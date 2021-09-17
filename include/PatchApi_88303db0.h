#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef BOOL (CALLBACK PATCH_PROGRESS_CALLBACK)(
    PVOID CallbackContext,
    ULONG CurrentPosition,
    ULONG MaximumPosition
    );
typedef PATCH_PROGRESS_CALLBACK *PPATCH_PROGRESS_CALLBACK;
typedef BOOL (CALLBACK PATCH_SYMLOAD_CALLBACK)(
    IN ULONG WhichFile,
    IN LPCSTR SymbolFileName,
    IN ULONG SymType,
    IN ULONG SymbolFileCheckSum,
    IN ULONG SymbolFileTimeDate,
    IN ULONG ImageFileCheckSum,
    IN ULONG ImageFileTimeDate,
    IN PVOID CallbackContext
    );
typedef PATCH_SYMLOAD_CALLBACK *PPATCH_SYMLOAD_CALLBACK;
typedef struct _PATCH_IGNORE_RANGE {
    ULONG OffsetInOldFile;
    ULONG LengthInBytes;
    } PATCH_IGNORE_RANGE, *PPATCH_IGNORE_RANGE;
typedef struct _PATCH_RETAIN_RANGE {
    ULONG OffsetInOldFile;
    ULONG LengthInBytes;
    ULONG OffsetInNewFile;
    } PATCH_RETAIN_RANGE, *PPATCH_RETAIN_RANGE;
typedef struct _PATCH_OLD_FILE_INFO_A {
    ULONG SizeOfThisStruct;
    LPCSTR OldFileName;
    ULONG IgnoreRangeCount;
    PPATCH_IGNORE_RANGE IgnoreRangeArray;
    ULONG RetainRangeCount;
    PPATCH_RETAIN_RANGE RetainRangeArray;
    } PATCH_OLD_FILE_INFO_A, *PPATCH_OLD_FILE_INFO_A;
typedef struct _PATCH_OLD_FILE_INFO_W {
    ULONG SizeOfThisStruct;
    LPCWSTR OldFileName;
    ULONG IgnoreRangeCount;
    PPATCH_IGNORE_RANGE IgnoreRangeArray;
    ULONG RetainRangeCount;
    PPATCH_RETAIN_RANGE RetainRangeArray;
    } PATCH_OLD_FILE_INFO_W, *PPATCH_OLD_FILE_INFO_W;
typedef struct _PATCH_OLD_FILE_INFO_H {
    ULONG SizeOfThisStruct;
    HANDLE OldFileHandle;
    ULONG IgnoreRangeCount;
    PPATCH_IGNORE_RANGE IgnoreRangeArray;
    ULONG RetainRangeCount;
    PPATCH_RETAIN_RANGE RetainRangeArray;
    } PATCH_OLD_FILE_INFO_H, *PPATCH_OLD_FILE_INFO_H;
typedef struct _PATCH_OLD_FILE_INFO {
    ULONG SizeOfThisStruct;
    union {
        LPCSTR OldFileNameA;
        LPCWSTR OldFileNameW;
        HANDLE OldFileHandle;
        };
    ULONG IgnoreRangeCount;
    PPATCH_IGNORE_RANGE IgnoreRangeArray;
    ULONG RetainRangeCount;
    PPATCH_RETAIN_RANGE RetainRangeArray;
    } PATCH_OLD_FILE_INFO, *PPATCH_OLD_FILE_INFO;
typedef struct _PATCH_INTERLEAVE_MAP {
    ULONG CountRanges;
    struct {
        ULONG OldOffset;
        ULONG OldLength;
        ULONG NewLength;
        } Range[ 1 ];
    } PATCH_INTERLEAVE_MAP, *PPATCH_INTERLEAVE_MAP;
typedef struct _PATCH_OPTION_DATA {
    ULONG SizeOfThisStruct;
    ULONG SymbolOptionFlags;
    LPCSTR NewFileSymbolPath;
    LPCSTR *OldFileSymbolPathArray;
    ULONG ExtendedOptionFlags;
    PPATCH_SYMLOAD_CALLBACK SymLoadCallback;
    PVOID SymLoadContext;
    PPATCH_INTERLEAVE_MAP* InterleaveMapArray;
    ULONG MaxLzxWindowSize;
    } PATCH_OPTION_DATA, *PPATCH_OPTION_DATA;
BOOL
PATCHAPI
CreatePatchFileA(
    _In_opt_ LPCSTR OldFileName,
    _In_ LPCSTR NewFileName,
    _In_ LPCSTR PatchFileName,
    _In_ ULONG OptionFlags,
    _In_opt_ PPATCH_OPTION_DATA OptionData
    );
BOOL
PATCHAPI
CreatePatchFileW(
    _In_opt_ LPCWSTR OldFileName,
    _In_ LPCWSTR NewFileName,
    _In_ LPCWSTR PatchFileName,
    _In_ ULONG OptionFlags,
    _In_opt_ PPATCH_OPTION_DATA OptionData
    );
BOOL
PATCHAPI
CreatePatchFileByHandles(
    _In_opt_ HANDLE OldFileHandle,
    _In_ HANDLE NewFileHandle,
    _In_ HANDLE PatchFileHandle,
    _In_ ULONG OptionFlags,
    _In_opt_ PPATCH_OPTION_DATA OptionData
    );
BOOL
PATCHAPI
CreatePatchFileExA(
    _In_ ULONG OldFileCount,
    _In_reads_( OldFileCount ) PPATCH_OLD_FILE_INFO_A OldFileInfoArray,
    _In_ LPCSTR NewFileName,
    _In_ LPCSTR PatchFileName,
    _In_ ULONG OptionFlags,
    _In_opt_ PPATCH_OPTION_DATA OptionData,
    _In_opt_ PPATCH_PROGRESS_CALLBACK ProgressCallback,
    _In_opt_ PVOID CallbackContext
    );
BOOL
PATCHAPI
CreatePatchFileExW(
    _In_ ULONG OldFileCount,
    _In_reads_( OldFileCount ) PPATCH_OLD_FILE_INFO_W OldFileInfoArray,
    _In_ LPCWSTR NewFileName,
    _In_ LPCWSTR PatchFileName,
    _In_ ULONG OptionFlags,
    _In_opt_ PPATCH_OPTION_DATA OptionData,
    _In_opt_ PPATCH_PROGRESS_CALLBACK ProgressCallback,
    _In_opt_ PVOID CallbackContext
    );
BOOL
PATCHAPI
CreatePatchFileByHandlesEx(
    _In_ ULONG OldFileCount,
    _In_reads_( OldFileCount ) PPATCH_OLD_FILE_INFO_H OldFileInfoArray,
    _In_ HANDLE NewFileHandle,
    _In_ HANDLE PatchFileHandle,
    _In_ ULONG OptionFlags,
    _In_opt_ PPATCH_OPTION_DATA OptionData,
    _In_opt_ PPATCH_PROGRESS_CALLBACK ProgressCallback,
    _In_opt_ PVOID CallbackContext
    );
BOOL
PATCHAPI
ExtractPatchHeaderToFileA(
    _In_ LPCSTR PatchFileName,
    _In_ LPCSTR PatchHeaderFileName
    );
BOOL
PATCHAPI
ExtractPatchHeaderToFileW(
    _In_ LPCWSTR PatchFileName,
    _In_ LPCWSTR PatchHeaderFileName
    );
BOOL
PATCHAPI
ExtractPatchHeaderToFileByHandles(
    _In_ HANDLE PatchFileHandle,
    _In_ HANDLE PatchHeaderFileHandle
    );
BOOL
PATCHAPI
TestApplyPatchToFileA(
    _In_ LPCSTR PatchFileName,
    _In_ LPCSTR OldFileName,
    _In_ ULONG ApplyOptionFlags
    );
BOOL
PATCHAPI
TestApplyPatchToFileW(
    _In_ LPCWSTR PatchFileName,
    _In_ LPCWSTR OldFileName,
    _In_ ULONG ApplyOptionFlags
    );
BOOL
PATCHAPI
TestApplyPatchToFileByHandles(
    _In_ HANDLE PatchFileHandle,
    _In_ HANDLE OldFileHandle,
    _In_ ULONG ApplyOptionFlags
    );
BOOL
PATCHAPI
TestApplyPatchToFileByBuffers(
    _In_reads_bytes_( PatchFileSize ) PBYTE PatchFileBuffer,
    _In_ ULONG PatchFileSize,
    _In_reads_bytes_opt_( OldFileSize ) PBYTE OldFileBuffer,
    _In_ ULONG OldFileSize,
    _Out_opt_ ULONG* NewFileSize,
    _In_ ULONG ApplyOptionFlags
    );
BOOL
PATCHAPI
ApplyPatchToFileA(
    _In_ LPCSTR PatchFileName,
    _In_opt_ LPCSTR OldFileName,
    _In_ LPCSTR NewFileName,
    _In_ ULONG ApplyOptionFlags
    );
BOOL
PATCHAPI
ApplyPatchToFileW(
    _In_ LPCWSTR PatchFileName,
    _In_opt_ LPCWSTR OldFileName,
    _In_ LPCWSTR NewFileName,
    _In_ ULONG ApplyOptionFlags
    );
BOOL
PATCHAPI
ApplyPatchToFileByHandles(
    _In_ HANDLE PatchFileHandle,
    _In_opt_ HANDLE OldFileHandle,
    _In_ HANDLE NewFileHandle,
    _In_ ULONG ApplyOptionFlags
    );
BOOL
PATCHAPI
ApplyPatchToFileExA(
    _In_ LPCSTR PatchFileName,
    _In_opt_ LPCSTR OldFileName,
    _In_ LPCSTR NewFileName,
    _In_ ULONG ApplyOptionFlags,
    _In_opt_ PPATCH_PROGRESS_CALLBACK ProgressCallback,
    _In_opt_ PVOID CallbackContext
    );
BOOL
PATCHAPI
ApplyPatchToFileExW(
    _In_ LPCWSTR PatchFileName,
    _In_opt_ LPCWSTR OldFileName,
    _In_ LPCWSTR NewFileName,
    _In_ ULONG ApplyOptionFlags,
    _In_opt_ PPATCH_PROGRESS_CALLBACK ProgressCallback,
    _In_opt_ PVOID CallbackContext
    );
BOOL
PATCHAPI
ApplyPatchToFileByHandlesEx(
    _In_ HANDLE PatchFileHandle,
    _In_opt_ HANDLE OldFileHandle,
    _In_ HANDLE NewFileHandle,
    _In_ ULONG ApplyOptionFlags,
    _In_opt_ PPATCH_PROGRESS_CALLBACK ProgressCallback,
    _In_opt_ PVOID CallbackContext
    );
_Success_(return != FALSE)
BOOL
PATCHAPI
ApplyPatchToFileByBuffers(
    _In_reads_bytes_( PatchFileSize ) PBYTE PatchFileMapped,
    _In_ ULONG PatchFileSize,
    _In_reads_bytes_opt_( OldFileSize ) PBYTE OldFileMapped,
    _In_ ULONG OldFileSize,
    _Inout_ _At_(*NewFileBuffer, _When_(*NewFileBuffer != NULL, _Pre_readable_byte_size_(NewFileBufferSize)) _Post_readable_byte_size_(*NewFileActualSize))
                                   PBYTE* NewFileBuffer,
    _In_ ULONG NewFileBufferSize,
    _Out_opt_ ULONG* NewFileActualSize,
    _Out_opt_ FILETIME* NewFileTime,
    _In_ ULONG ApplyOptionFlags,
    _In_opt_ PPATCH_PROGRESS_CALLBACK ProgressCallback,
    _In_opt_ PVOID CallbackContext
    );
BOOL
PATCHAPI
GetFilePatchSignatureA(
    _In_ LPCSTR FileName,
    _In_ ULONG OptionFlags,
    _In_opt_ PVOID OptionData,
    _In_ ULONG IgnoreRangeCount,
    _In_reads_opt_( IgnoreRangeCount ) PPATCH_IGNORE_RANGE IgnoreRangeArray,
    _In_ ULONG RetainRangeCount,
    _In_reads_opt_( RetainRangeCount ) PPATCH_RETAIN_RANGE RetainRangeArray,
    _In_ ULONG SignatureBufferSize,
    _Out_writes_bytes_( SignatureBufferSize ) LPSTR SignatureBuffer
    );
BOOL
PATCHAPI
GetFilePatchSignatureW(
    _In_ LPCWSTR FileName,
    _In_ ULONG OptionFlags,
    _In_opt_ PVOID OptionData,
    _In_ ULONG IgnoreRangeCount,
    _In_reads_opt_( IgnoreRangeCount ) PPATCH_IGNORE_RANGE IgnoreRangeArray,
    _In_ ULONG RetainRangeCount,
    _In_reads_opt_( RetainRangeCount ) PPATCH_RETAIN_RANGE RetainRangeArray,
    _In_ ULONG SignatureBufferSize,
    _Out_writes_bytes_( SignatureBufferSize ) LPWSTR SignatureBuffer
    );
BOOL
PATCHAPI
GetFilePatchSignatureByHandle(
    _In_ HANDLE FileHandle,
    _In_ ULONG OptionFlags,
    _In_opt_ PVOID OptionData,
    _In_ ULONG IgnoreRangeCount,
    _In_reads_opt_( IgnoreRangeCount ) PPATCH_IGNORE_RANGE IgnoreRangeArray,
    _In_ ULONG RetainRangeCount,
    _In_reads_opt_( RetainRangeCount ) PPATCH_RETAIN_RANGE RetainRangeArray,
    _In_ ULONG SignatureBufferSize,
    _Out_writes_bytes_( SignatureBufferSize ) LPSTR SignatureBuffer
    );
BOOL
PATCHAPI
GetFilePatchSignatureByBuffer(
    _Inout_updates_bytes_( FileSize ) PBYTE FileBufferWritable,
    _In_ ULONG FileSize,
    _In_ ULONG OptionFlags,
    _In_opt_ PVOID OptionData,
    _In_ ULONG IgnoreRangeCount,
    _In_reads_opt_( IgnoreRangeCount ) PPATCH_IGNORE_RANGE IgnoreRangeArray,
    _In_ ULONG RetainRangeCount,
    _In_reads_opt_( RetainRangeCount ) PPATCH_RETAIN_RANGE RetainRangeArray,
    _In_ ULONG SignatureBufferSize,
    _Out_writes_bytes_( SignatureBufferSize ) LPSTR SignatureBuffer
    );
INT
WINAPI
NormalizeFileForPatchSignature(
    _Inout_updates_bytes_( FileSize ) PVOID FileBuffer,
    _In_ ULONG FileSize,
    _In_ ULONG OptionFlags,
    _In_opt_ PATCH_OPTION_DATA* OptionData,
    _In_ ULONG NewFileCoffBase,
    _In_ ULONG NewFileCoffTime,
    _In_ ULONG IgnoreRangeCount,
    _In_reads_opt_( IgnoreRangeCount ) PPATCH_IGNORE_RANGE IgnoreRangeArray,
    _In_ ULONG RetainRangeCount,
    _In_reads_opt_( RetainRangeCount ) PPATCH_RETAIN_RANGE RetainRangeArray
    );
    #define CreatePatchFile CreatePatchFileW
    #define CreatePatchFileEx CreatePatchFileExW
    #define TestApplyPatchToFile TestApplyPatchToFileW
    #define ApplyPatchToFile ApplyPatchToFileW
    #define ApplyPatchToFileEx ApplyPatchToFileExW
    #define ExtractPatchHeaderToFile ExtractPatchHeaderToFileW
    #define GetFilePatchSignature GetFilePatchSignatureW
}
#endif
#pragma endregion
