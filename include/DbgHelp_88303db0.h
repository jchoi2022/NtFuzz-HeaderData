#include <winapifamily.h>
#pragma region Desktop Family or WER Package
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
#include <pshpack8.h>
extern "C" {
 #define IMAGEAPI __stdcall
 #define DBHLP_DEPRECIATED
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef struct _LOADED_IMAGE {
    PSTR ModuleName;
    HANDLE hFile;
    PUCHAR MappedAddress;
    PIMAGE_NT_HEADERS64 FileHeader;
    PIMAGE_SECTION_HEADER LastRvaSection;
    ULONG NumberOfSections;
    PIMAGE_SECTION_HEADER Sections;
    ULONG Characteristics;
    BOOLEAN fSystemImage;
    BOOLEAN fDOSImage;
    BOOLEAN fReadOnly;
    UCHAR Version;
    LIST_ENTRY Links;
    ULONG SizeOfImage;
} LOADED_IMAGE, *PLOADED_IMAGE;
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef BOOL
(CALLBACK *PFIND_DEBUG_FILE_CALLBACK)(
    _In_ HANDLE FileHandle,
    _In_ PCSTR FileName,
    _In_ PVOID CallerData
    );
HANDLE
IMAGEAPI
SymFindDebugInfoFile(
    _In_ HANDLE hProcess,
    _In_ PCSTR FileName,
    _Out_writes_(MAX_PATH + 1) PSTR DebugFilePath,
    _In_opt_ PFIND_DEBUG_FILE_CALLBACK Callback,
    _In_opt_ PVOID CallerData
    );
typedef BOOL
(CALLBACK *PFIND_DEBUG_FILE_CALLBACKW)(
    _In_ HANDLE FileHandle,
    _In_ PCWSTR FileName,
    _In_ PVOID CallerData
    );
HANDLE
IMAGEAPI
SymFindDebugInfoFileW(
    _In_ HANDLE hProcess,
    _In_ PCWSTR FileName,
    _Out_writes_(MAX_PATH + 1) PWSTR DebugFilePath,
    _In_opt_ PFIND_DEBUG_FILE_CALLBACKW Callback,
    _In_opt_ PVOID CallerData
    );
HANDLE
IMAGEAPI
FindDebugInfoFile (
    _In_ PCSTR FileName,
    _In_ PCSTR SymbolPath,
    _Out_writes_(MAX_PATH + 1) PSTR DebugFilePath
    );
HANDLE
IMAGEAPI
FindDebugInfoFileEx (
    _In_ PCSTR FileName,
    _In_ PCSTR SymbolPath,
    _Out_writes_(MAX_PATH + 1) PSTR DebugFilePath,
    _In_opt_ PFIND_DEBUG_FILE_CALLBACK Callback,
    _In_opt_ PVOID CallerData
    );
HANDLE
IMAGEAPI
FindDebugInfoFileExW (
    _In_ PCWSTR FileName,
    _In_ PCWSTR SymbolPath,
    _Out_writes_(MAX_PATH + 1) PWSTR DebugFilePath,
    _In_opt_ PFIND_DEBUG_FILE_CALLBACKW Callback,
    _In_opt_ PVOID CallerData
    );
typedef BOOL
(CALLBACK *PFINDFILEINPATHCALLBACK)(
    _In_ PCSTR filename,
    _In_ PVOID context
    );
BOOL
IMAGEAPI
SymFindFileInPath(
    _In_ HANDLE hprocess,
    _In_opt_ PCSTR SearchPath,
    _In_ PCSTR FileName,
    _In_opt_ PVOID id,
    _In_ DWORD two,
    _In_ DWORD three,
    _In_ DWORD flags,
    _Out_writes_(MAX_PATH + 1) PSTR FoundFile,
    _In_opt_ PFINDFILEINPATHCALLBACK callback,
    _In_opt_ PVOID context
    );
typedef BOOL
(CALLBACK *PFINDFILEINPATHCALLBACKW)(
    _In_ PCWSTR filename,
    _In_ PVOID context
    );
BOOL
IMAGEAPI
SymFindFileInPathW(
    _In_ HANDLE hprocess,
    _In_opt_ PCWSTR SearchPath,
    _In_ PCWSTR FileName,
    _In_opt_ PVOID id,
    _In_ DWORD two,
    _In_ DWORD three,
    _In_ DWORD flags,
    _Out_writes_(MAX_PATH + 1) PWSTR FoundFile,
    _In_opt_ PFINDFILEINPATHCALLBACKW callback,
    _In_opt_ PVOID context
    );
typedef BOOL
(CALLBACK *PFIND_EXE_FILE_CALLBACK)(
    _In_ HANDLE FileHandle,
    _In_ PCSTR FileName,
    _In_opt_ PVOID CallerData
    );
HANDLE
IMAGEAPI
SymFindExecutableImage(
    _In_ HANDLE hProcess,
    _In_ PCSTR FileName,
    _Out_writes_(MAX_PATH + 1) PSTR ImageFilePath,
    _In_ PFIND_EXE_FILE_CALLBACK Callback,
    _In_ PVOID CallerData
    );
typedef BOOL
(CALLBACK *PFIND_EXE_FILE_CALLBACKW)(
    _In_ HANDLE FileHandle,
    _In_ PCWSTR FileName,
    _In_opt_ PVOID CallerData
    );
HANDLE
IMAGEAPI
SymFindExecutableImageW(
    _In_ HANDLE hProcess,
    _In_ PCWSTR FileName,
    _Out_writes_(MAX_PATH + 1) PWSTR ImageFilePath,
    _In_ PFIND_EXE_FILE_CALLBACKW Callback,
    _In_ PVOID CallerData
    );
HANDLE
IMAGEAPI
FindExecutableImage(
    _In_ PCSTR FileName,
    _In_ PCSTR SymbolPath,
    _Out_writes_(MAX_PATH + 1) PSTR ImageFilePath
    );
HANDLE
IMAGEAPI
FindExecutableImageEx(
    _In_ PCSTR FileName,
    _In_ PCSTR SymbolPath,
    _Out_writes_(MAX_PATH + 1) PSTR ImageFilePath,
    _In_opt_ PFIND_EXE_FILE_CALLBACK Callback,
    _In_opt_ PVOID CallerData
    );
HANDLE
IMAGEAPI
FindExecutableImageExW(
    _In_ PCWSTR FileName,
    _In_ PCWSTR SymbolPath,
    _Out_writes_(MAX_PATH + 1) PWSTR ImageFilePath,
    _In_opt_ PFIND_EXE_FILE_CALLBACKW Callback,
    _In_ PVOID CallerData
    );
PIMAGE_NT_HEADERS
IMAGEAPI
ImageNtHeader (
    _In_ PVOID Base
    );
PVOID
IMAGEAPI
ImageDirectoryEntryToDataEx (
    _In_ PVOID Base,
    _In_ BOOLEAN MappedAsImage,
    _In_ USHORT DirectoryEntry,
    _Out_ PULONG Size,
    _Out_opt_ PIMAGE_SECTION_HEADER *FoundHeader
    );
PVOID
IMAGEAPI
ImageDirectoryEntryToData (
    _In_ PVOID Base,
    _In_ BOOLEAN MappedAsImage,
    _In_ USHORT DirectoryEntry,
    _Out_ PULONG Size
    );
PIMAGE_SECTION_HEADER
IMAGEAPI
ImageRvaToSection(
    _In_ PIMAGE_NT_HEADERS NtHeaders,
    _In_ PVOID Base,
    _In_ ULONG Rva
    );
PVOID
IMAGEAPI
ImageRvaToVa(
    _In_ PIMAGE_NT_HEADERS NtHeaders,
    _In_ PVOID Base,
    _In_ ULONG Rva,
    _In_opt_ OUT PIMAGE_SECTION_HEADER *LastRvaSection
    );
BOOL
IMAGEAPI
SearchTreeForFile(
    _In_ PCSTR RootPath,
    _In_ PCSTR InputPathName,
    _Out_writes_(MAX_PATH + 1) PSTR OutputPathBuffer
    );
BOOL
IMAGEAPI
SearchTreeForFileW(
    _In_ PCWSTR RootPath,
    _In_ PCWSTR InputPathName,
    _Out_writes_(MAX_PATH + 1) PWSTR OutputPathBuffer
    );
typedef BOOL
(CALLBACK *PENUMDIRTREE_CALLBACK)(
    _In_ PCSTR FilePath,
    _In_opt_ PVOID CallerData
    );
BOOL
IMAGEAPI
EnumDirTree(
    _In_opt_ HANDLE hProcess,
    _In_ PCSTR RootPath,
    _In_ PCSTR InputPathName,
    _Out_writes_opt_(MAX_PATH + 1) PSTR OutputPathBuffer,
    _In_opt_ PENUMDIRTREE_CALLBACK cb,
    _In_opt_ PVOID data
    );
typedef BOOL
(CALLBACK *PENUMDIRTREE_CALLBACKW)(
    _In_ PCWSTR FilePath,
    _In_opt_ PVOID CallerData
    );
BOOL
IMAGEAPI
EnumDirTreeW(
    _In_opt_ HANDLE hProcess,
    _In_ PCWSTR RootPath,
    _In_ PCWSTR InputPathName,
    _Out_writes_opt_(MAX_PATH + 1) PWSTR OutputPathBuffer,
    _In_opt_ PENUMDIRTREE_CALLBACKW cb,
    _In_opt_ PVOID data
    );
BOOL
IMAGEAPI
MakeSureDirectoryPathExists(
    _In_ PCSTR DirPath
    );
DWORD
IMAGEAPI
WINAPI
UnDecorateSymbolName(
    _In_ PCSTR name,
    _Out_writes_(maxStringLength) PSTR outputString,
    _In_ DWORD maxStringLength,
    _In_ DWORD flags
    );
DWORD
IMAGEAPI
WINAPI
UnDecorateSymbolNameW(
    _In_ PCWSTR name,
    _Out_writes_(maxStringLength) PWSTR outputString,
    _In_ DWORD maxStringLength,
    _In_ DWORD flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
typedef struct _MODLOAD_DATA {
    DWORD ssize;
    DWORD ssig;
    PVOID data;
    DWORD size;
    DWORD flags;
} MODLOAD_DATA, *PMODLOAD_DATA;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef struct _MODLOAD_CVMISC {
    DWORD oCV;
    size_t cCV;
    DWORD oMisc;
    size_t cMisc;
    DWORD dtImage;
    DWORD cImage;
} MODLOAD_CVMISC, *PMODLOAD_CVMISC;
typedef struct _MODLOAD_PDBGUID_PDBAGE {
    GUID PdbGuid;
    DWORD PdbAge;
} MODLOAD_PDBGUID_PDBAGE, *PMODLOAD_PDBGUID_PDBAGE;
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
typedef enum {
    AddrMode1616,
    AddrMode1632,
    AddrModeReal,
    AddrModeFlat
} ADDRESS_MODE;
typedef struct _tagADDRESS64 {
    DWORD64 Offset;
    WORD Segment;
    ADDRESS_MODE Mode;
} ADDRESS64, *LPADDRESS64;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
typedef struct _KDHELP64 {
    DWORD64 Thread;
    DWORD ThCallbackStack;
    DWORD ThCallbackBStore;
    DWORD NextCallback;
    DWORD FramePointer;
    DWORD64 KiCallUserMode;
    DWORD64 KeUserCallbackDispatcher;
    DWORD64 SystemRangeStart;
    DWORD64 KiUserExceptionDispatcher;
    DWORD64 StackBase;
    DWORD64 StackLimit;
    DWORD BuildVersion;
    DWORD RetpolineStubFunctionTableSize;
    DWORD64 RetpolineStubFunctionTable;
    DWORD RetpolineStubOffset;
    DWORD RetpolineStubSize;
    DWORD64 Reserved0[2];
} KDHELP64, *PKDHELP64;
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
__inline
void
KdHelp32To64(
    _In_ PKDHELP p32,
    _Out_ PKDHELP64 p64
    )
{
    p64->Thread = p32->Thread;
    p64->ThCallbackStack = p32->ThCallbackStack;
    p64->NextCallback = p32->NextCallback;
    p64->FramePointer = p32->FramePointer;
    p64->KiCallUserMode = p32->KiCallUserMode;
    p64->KeUserCallbackDispatcher = p32->KeUserCallbackDispatcher;
    p64->SystemRangeStart = p32->SystemRangeStart;
    p64->KiUserExceptionDispatcher = p32->KiUserExceptionDispatcher;
    p64->StackBase = p32->StackBase;
    p64->StackLimit = p32->StackLimit;
}
#endif
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
typedef struct _tagSTACKFRAME64 {
    ADDRESS64 AddrPC;
    ADDRESS64 AddrReturn;
    ADDRESS64 AddrFrame;
    ADDRESS64 AddrStack;
    ADDRESS64 AddrBStore;
    PVOID FuncTableEntry;
    DWORD64 Params[4];
    BOOL Far;
    BOOL Virtual;
    DWORD64 Reserved[3];
    KDHELP64 KdHelp;
} STACKFRAME64, *LPSTACKFRAME64;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef struct _tagSTACKFRAME_EX {
    ADDRESS64 AddrPC;
    ADDRESS64 AddrReturn;
    ADDRESS64 AddrFrame;
    ADDRESS64 AddrStack;
    ADDRESS64 AddrBStore;
    PVOID FuncTableEntry;
    DWORD64 Params[4];
    BOOL Far;
    BOOL Virtual;
    DWORD64 Reserved[3];
    KDHELP64 KdHelp;
    DWORD StackFrameSize;
    DWORD InlineFrameContext;
} STACKFRAME_EX, *LPSTACKFRAME_EX;
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
typedef
BOOL
(__stdcall *PREAD_PROCESS_MEMORY_ROUTINE64)(
    _In_ HANDLE hProcess,
    _In_ DWORD64 qwBaseAddress,
    _Out_writes_bytes_(nSize) PVOID lpBuffer,
    _In_ DWORD nSize,
    _Out_ LPDWORD lpNumberOfBytesRead
    );
typedef
PVOID
(__stdcall *PFUNCTION_TABLE_ACCESS_ROUTINE64)(
    _In_ HANDLE ahProcess,
    _In_ DWORD64 AddrBase
    );
typedef
DWORD64
(__stdcall *PGET_MODULE_BASE_ROUTINE64)(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address
    );
typedef
DWORD64
(__stdcall *PTRANSLATE_ADDRESS_ROUTINE64)(
    _In_ HANDLE hProcess,
    _In_ HANDLE hThread,
    _In_ LPADDRESS64 lpaddr
    );
BOOL
IMAGEAPI
StackWalk64(
    _In_ DWORD MachineType,
    _In_ HANDLE hProcess,
    _In_ HANDLE hThread,
    _Inout_ LPSTACKFRAME64 StackFrame,
    _Inout_ PVOID ContextRecord,
    _In_opt_ PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    _In_opt_ PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine,
    _In_opt_ PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine,
    _In_opt_ PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
BOOL
IMAGEAPI
StackWalkEx(
    _In_ DWORD MachineType,
    _In_ HANDLE hProcess,
    _In_ HANDLE hThread,
    _Inout_ LPSTACKFRAME_EX StackFrame,
    _Inout_ PVOID ContextRecord,
    _In_opt_ PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    _In_opt_ PFUNCTION_TABLE_ACCESS_ROUTINE64 FunctionTableAccessRoutine,
    _In_opt_ PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine,
    _In_opt_ PTRANSLATE_ADDRESS_ROUTINE64 TranslateAddress,
    _In_ DWORD Flags
    );
typedef struct API_VERSION {
    USHORT MajorVersion;
    USHORT MinorVersion;
    USHORT Revision;
    USHORT Reserved;
} API_VERSION, *LPAPI_VERSION;
LPAPI_VERSION
IMAGEAPI
ImagehlpApiVersion(
    VOID
    );
LPAPI_VERSION
IMAGEAPI
ImagehlpApiVersionEx(
    _In_ LPAPI_VERSION AppVersion
    );
DWORD
IMAGEAPI
GetTimestampForLoadedLibrary(
    _In_ HMODULE Module
    );
typedef BOOL
(CALLBACK *PSYM_ENUMMODULES_CALLBACK64)(
    _In_ PCSTR ModuleName,
    _In_ DWORD64 BaseOfDll,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PSYM_ENUMMODULES_CALLBACKW64)(
    _In_ PCWSTR ModuleName,
    _In_ DWORD64 BaseOfDll,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PENUMLOADED_MODULES_CALLBACK64)(
    _In_ PCSTR ModuleName,
    _In_ DWORD64 ModuleBase,
    _In_ ULONG ModuleSize,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PENUMLOADED_MODULES_CALLBACKW64)(
    _In_ PCWSTR ModuleName,
    _In_ DWORD64 ModuleBase,
    _In_ ULONG ModuleSize,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK64)(
    _In_ PCSTR SymbolName,
    _In_ DWORD64 SymbolAddress,
    _In_ ULONG SymbolSize,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PSYM_ENUMSYMBOLS_CALLBACK64W)(
    _In_ PCWSTR SymbolName,
    _In_ DWORD64 SymbolAddress,
    _In_ ULONG SymbolSize,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PSYMBOL_REGISTERED_CALLBACK64)(
    _In_ HANDLE hProcess,
    _In_ ULONG ActionCode,
    _In_opt_ ULONG64 CallbackData,
    _In_opt_ ULONG64 UserContext
    );
typedef
PVOID
(CALLBACK *PSYMBOL_FUNCENTRY_CALLBACK)(
    _In_ HANDLE hProcess,
    _In_ DWORD AddrBase,
    _In_opt_ PVOID UserContext
    );
typedef
PVOID
(CALLBACK *PSYMBOL_FUNCENTRY_CALLBACK64)(
    _In_ HANDLE hProcess,
    _In_ ULONG64 AddrBase,
    _In_ ULONG64 UserContext
    );
enum SymTagEnum
{
    SymTagNull,
    SymTagExe,
    SymTagCompiland,
    SymTagCompilandDetails,
    SymTagCompilandEnv,
    SymTagFunction,
    SymTagBlock,
    SymTagData,
    SymTagAnnotation,
    SymTagLabel,
    SymTagPublicSymbol,
    SymTagUDT,
    SymTagEnum,
    SymTagFunctionType,
    SymTagPointerType,
    SymTagArrayType,
    SymTagBaseType,
    SymTagTypedef,
    SymTagBaseClass,
    SymTagFriend,
    SymTagFunctionArgType,
    SymTagFuncDebugStart,
    SymTagFuncDebugEnd,
    SymTagUsingNamespace,
    SymTagVTableShape,
    SymTagVTable,
    SymTagCustom,
    SymTagThunk,
    SymTagCustomType,
    SymTagManagedType,
    SymTagDimension,
    SymTagCallSite,
    SymTagInlineSite,
    SymTagBaseInterface,
    SymTagVectorType,
    SymTagMatrixType,
    SymTagHLSLType,
    SymTagCaller,
    SymTagCallee,
    SymTagExport,
    SymTagHeapAllocationSite,
    SymTagCoffGroup,
    SymTagMax
};
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
typedef enum {
    SymNone = 0,
    SymCoff,
    SymCv,
    SymPdb,
    SymExport,
    SymDeferred,
    SymSym,
    SymDia,
    SymVirtual,
    NumSymTypes
} SYM_TYPE;
typedef struct _IMAGEHLP_SYMBOL64 {
    DWORD SizeOfStruct;
    DWORD64 Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    CHAR Name[1];
} IMAGEHLP_SYMBOL64, *PIMAGEHLP_SYMBOL64;
typedef struct _IMAGEHLP_SYMBOL64_PACKAGE {
    IMAGEHLP_SYMBOL64 sym;
    CHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOL64_PACKAGE, *PIMAGEHLP_SYMBOL64_PACKAGE;
typedef struct _IMAGEHLP_SYMBOLW64 {
    DWORD SizeOfStruct;
    DWORD64 Address;
    DWORD Size;
    DWORD Flags;
    DWORD MaxNameLength;
    WCHAR Name[1];
} IMAGEHLP_SYMBOLW64, *PIMAGEHLP_SYMBOLW64;
typedef struct _IMAGEHLP_SYMBOLW64_PACKAGE {
    IMAGEHLP_SYMBOLW64 sym;
    WCHAR name[MAX_SYM_NAME + 1];
} IMAGEHLP_SYMBOLW64_PACKAGE, *PIMAGEHLP_SYMBOLW64_PACKAGE;
 #define IMAGEHLP_SYMBOL IMAGEHLP_SYMBOL64
 #define PIMAGEHLP_SYMBOL PIMAGEHLP_SYMBOL64
 #define IMAGEHLP_SYMBOL_PACKAGE IMAGEHLP_SYMBOL64_PACKAGE
 #define PIMAGEHLP_SYMBOL_PACKAGE PIMAGEHLP_SYMBOL64_PACKAGE
 #define IMAGEHLP_SYMBOLW IMAGEHLP_SYMBOLW64
 #define PIMAGEHLP_SYMBOLW PIMAGEHLP_SYMBOLW64
 #define IMAGEHLP_SYMBOLW_PACKAGE IMAGEHLP_SYMBOLW64_PACKAGE
 #define PIMAGEHLP_SYMBOLW_PACKAGE PIMAGEHLP_SYMBOLW64_PACKAGE
typedef struct _IMAGEHLP_MODULE64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    CHAR ModuleName[32];
    CHAR ImageName[256];
    CHAR LoadedImageName[256];
    CHAR LoadedPdbName[256];
    DWORD CVSig;
    CHAR CVData[MAX_PATH * 3];
    DWORD PdbSig;
    GUID PdbSig70;
    DWORD PdbAge;
    BOOL PdbUnmatched;
    BOOL DbgUnmatched;
    BOOL LineNumbers;
    BOOL GlobalSymbols;
    BOOL TypeInfo;
    BOOL SourceIndexed;
    BOOL Publics;
    DWORD MachineType;
    DWORD Reserved;
} IMAGEHLP_MODULE64, *PIMAGEHLP_MODULE64;
typedef struct _IMAGEHLP_MODULEW64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD ImageSize;
    DWORD TimeDateStamp;
    DWORD CheckSum;
    DWORD NumSyms;
    SYM_TYPE SymType;
    WCHAR ModuleName[32];
    WCHAR ImageName[256];
    WCHAR LoadedImageName[256];
    WCHAR LoadedPdbName[256];
    DWORD CVSig;
    WCHAR CVData[MAX_PATH * 3];
    DWORD PdbSig;
    GUID PdbSig70;
    DWORD PdbAge;
    BOOL PdbUnmatched;
    BOOL DbgUnmatched;
    BOOL LineNumbers;
    BOOL GlobalSymbols;
    BOOL TypeInfo;
    BOOL SourceIndexed;
    BOOL Publics;
    DWORD MachineType;
    DWORD Reserved;
} IMAGEHLP_MODULEW64, *PIMAGEHLP_MODULEW64;
typedef struct _IMAGEHLP_LINE64 {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PCHAR FileName;
    DWORD64 Address;
} IMAGEHLP_LINE64, *PIMAGEHLP_LINE64;
typedef struct _IMAGEHLP_LINEW64 {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD LineNumber;
    PWSTR FileName;
    DWORD64 Address;
} IMAGEHLP_LINEW64, *PIMAGEHLP_LINEW64;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef struct _SOURCEFILE {
    DWORD64 ModBase;
    PCHAR FileName;
} SOURCEFILE, *PSOURCEFILE;
typedef struct _SOURCEFILEW {
    DWORD64 ModBase;
    PWSTR FileName;
} SOURCEFILEW, *PSOURCEFILEW;
typedef struct _IMAGEHLP_CBA_READ_MEMORY {
    DWORD64 addr;
    PVOID buf;
    DWORD bytes;
    DWORD *bytesread;
} IMAGEHLP_CBA_READ_MEMORY, *PIMAGEHLP_CBA_READ_MEMORY;
enum {
    sevInfo = 0,
    sevProblem,
    sevAttn,
    sevFatal,
    sevMax
};
typedef struct _IMAGEHLP_CBA_EVENT {
    DWORD severity;
    DWORD code;
    PCHAR desc;
    PVOID object;
} IMAGEHLP_CBA_EVENT, *PIMAGEHLP_CBA_EVENT;
typedef struct _IMAGEHLP_CBA_EVENTW {
    DWORD severity;
    DWORD code;
    PCWSTR desc;
    PVOID object;
} IMAGEHLP_CBA_EVENTW, *PIMAGEHLP_CBA_EVENTW;
typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOAD64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    CHAR FileName[MAX_PATH];
    BOOLEAN Reparse;
    HANDLE hFile;
    DWORD Flags;
} IMAGEHLP_DEFERRED_SYMBOL_LOAD64, *PIMAGEHLP_DEFERRED_SYMBOL_LOAD64;
typedef struct _IMAGEHLP_DEFERRED_SYMBOL_LOADW64 {
    DWORD SizeOfStruct;
    DWORD64 BaseOfImage;
    DWORD CheckSum;
    DWORD TimeDateStamp;
    WCHAR FileName[MAX_PATH + 1];
    BOOLEAN Reparse;
    HANDLE hFile;
    DWORD Flags;
} IMAGEHLP_DEFERRED_SYMBOL_LOADW64, *PIMAGEHLP_DEFERRED_SYMBOL_LOADW64;
typedef struct _IMAGEHLP_DUPLICATE_SYMBOL64 {
    DWORD SizeOfStruct;
    DWORD NumberOfDups;
    PIMAGEHLP_SYMBOL64 Symbol;
    DWORD SelectedSymbol;
} IMAGEHLP_DUPLICATE_SYMBOL64, *PIMAGEHLP_DUPLICATE_SYMBOL64;
BOOL
IMAGEAPI
SymSetParentWindow(
    _In_ HWND hwnd
    );
PCHAR
IMAGEAPI
SymSetHomeDirectory(
    _In_opt_ HANDLE hProcess,
    _In_opt_ PCSTR dir
    );
PWSTR
IMAGEAPI
SymSetHomeDirectoryW(
    _In_opt_ HANDLE hProcess,
    _In_opt_ PCWSTR dir
    );
PCHAR
IMAGEAPI
SymGetHomeDirectory(
    _In_ DWORD type,
    _Out_writes_(size) PSTR dir,
    _In_ size_t size
    );
PWSTR
IMAGEAPI
SymGetHomeDirectoryW(
    _In_ DWORD type,
    _Out_writes_(size) PWSTR dir,
    _In_ size_t size
    );
typedef enum {
    hdBase = 0,
    hdSym,
    hdSrc,
    hdMax
} IMAGEHLP_HD_TYPE;
typedef struct _OMAP {
    ULONG rva;
    ULONG rvaTo;
} OMAP, *POMAP;
BOOL
IMAGEAPI
SymGetOmaps(
    _In_ HANDLE hProcess,
    _In_ DWORD64 BaseOfDll,
    _Out_ POMAP *OmapTo,
    _Out_ PDWORD64 cOmapTo,
    _Out_ POMAP *OmapFrom,
    _Out_ PDWORD64 cOmapFrom
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
 #define SYMOPT_CASE_INSENSITIVE 0x00000001
 #define SYMOPT_UNDNAME 0x00000002
 #define SYMOPT_DEFERRED_LOADS 0x00000004
 #define SYMOPT_NO_CPP 0x00000008
 #define SYMOPT_LOAD_LINES 0x00000010
 #define SYMOPT_OMAP_FIND_NEAREST 0x00000020
 #define SYMOPT_LOAD_ANYTHING 0x00000040
 #define SYMOPT_IGNORE_CVREC 0x00000080
 #define SYMOPT_NO_UNQUALIFIED_LOADS 0x00000100
 #define SYMOPT_FAIL_CRITICAL_ERRORS 0x00000200
 #define SYMOPT_EXACT_SYMBOLS 0x00000400
 #define SYMOPT_ALLOW_ABSOLUTE_SYMBOLS 0x00000800
 #define SYMOPT_IGNORE_NT_SYMPATH 0x00001000
 #define SYMOPT_INCLUDE_32BIT_MODULES 0x00002000
 #define SYMOPT_PUBLICS_ONLY 0x00004000
 #define SYMOPT_NO_PUBLICS 0x00008000
 #define SYMOPT_AUTO_PUBLICS 0x00010000
 #define SYMOPT_NO_IMAGE_SEARCH 0x00020000
 #define SYMOPT_SECURE 0x00040000
 #define SYMOPT_NO_PROMPTS 0x00080000
 #define SYMOPT_OVERWRITE 0x00100000
 #define SYMOPT_IGNORE_IMAGEDIR 0x00200000
 #define SYMOPT_FLAT_DIRECTORY 0x00400000
 #define SYMOPT_FAVOR_COMPRESSED 0x00800000
 #define SYMOPT_ALLOW_ZERO_ADDRESS 0x01000000
 #define SYMOPT_DISABLE_SYMSRV_AUTODETECT 0x02000000
 #define SYMOPT_READONLY_CACHE 0x04000000
 #define SYMOPT_SYMPATH_LAST 0x08000000
 #define SYMOPT_DISABLE_FAST_SYMBOLS 0x10000000
 #define SYMOPT_DISABLE_SYMSRV_TIMEOUT 0x20000000
 #define SYMOPT_DISABLE_SRVSTAR_ON_STARTUP 0x40000000
 #define SYMOPT_DEBUG 0x80000000
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef enum {
    SYMOPT_EX_DISABLEACCESSTIMEUPDATE,
    SYMOPT_EX_LASTVALIDDEBUGDIRECTORY,
    SYMOPT_EX_MAX
} IMAGEHLP_EXTENDED_OPTIONS;
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
DWORD
IMAGEAPI
SymSetOptions(
    _In_ DWORD SymOptions
    );
DWORD
IMAGEAPI
SymGetOptions(
    VOID
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
BOOL
IMAGEAPI
SymCleanup(
    _In_ HANDLE hProcess
    );
BOOL
IMAGEAPI
SymGetExtendedOption(_In_ IMAGEHLP_EXTENDED_OPTIONS option);
BOOL
IMAGEAPI
SymSetExtendedOption(_In_ IMAGEHLP_EXTENDED_OPTIONS option, _In_ BOOL value);
BOOL
IMAGEAPI
SymMatchString(
    _In_ PCSTR string,
    _In_ PCSTR expression,
    _In_ BOOL fCase
    );
BOOL
IMAGEAPI
SymMatchStringA(
    _In_ PCSTR string,
    _In_ PCSTR expression,
    _In_ BOOL fCase
    );
BOOL
IMAGEAPI
SymMatchStringW(
    _In_ PCWSTR string,
    _In_ PCWSTR expression,
    _In_ BOOL fCase
    );
typedef BOOL
(CALLBACK *PSYM_ENUMSOURCEFILES_CALLBACK)(
    _In_ PSOURCEFILE pSourceFile,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSourceFiles(
    _In_ HANDLE hProcess,
    _In_ ULONG64 ModBase,
    _In_opt_ PCSTR Mask,
    _In_ PSYM_ENUMSOURCEFILES_CALLBACK cbSrcFiles,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PSYM_ENUMSOURCEFILES_CALLBACKW)(
    _In_ PSOURCEFILEW pSourceFile,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSourceFilesW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 ModBase,
    _In_opt_ PCWSTR Mask,
    _In_ PSYM_ENUMSOURCEFILES_CALLBACKW cbSrcFiles,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumerateModules64(
    _In_ HANDLE hProcess,
    _In_ PSYM_ENUMMODULES_CALLBACK64 EnumModulesCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumerateModulesW64(
    _In_ HANDLE hProcess,
    _In_ PSYM_ENUMMODULES_CALLBACKW64 EnumModulesCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
EnumerateLoadedModulesEx(
    _In_ HANDLE hProcess,
    _In_ PENUMLOADED_MODULES_CALLBACK64 EnumLoadedModulesCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
EnumerateLoadedModulesExW(
    _In_ HANDLE hProcess,
    _In_ PENUMLOADED_MODULES_CALLBACKW64 EnumLoadedModulesCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
EnumerateLoadedModules64(
    _In_ HANDLE hProcess,
    _In_ PENUMLOADED_MODULES_CALLBACK64 EnumLoadedModulesCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
EnumerateLoadedModulesW64(
    _In_ HANDLE hProcess,
    _In_ PENUMLOADED_MODULES_CALLBACKW64 EnumLoadedModulesCallback,
    _In_opt_ PVOID UserContext
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
PVOID
IMAGEAPI
SymFunctionTableAccess64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 AddrBase
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
PVOID
IMAGEAPI
SymFunctionTableAccess64AccessRoutines(
    _In_ HANDLE hProcess,
    _In_ DWORD64 AddrBase,
    _In_opt_ PREAD_PROCESS_MEMORY_ROUTINE64 ReadMemoryRoutine,
    _In_opt_ PGET_MODULE_BASE_ROUTINE64 GetModuleBaseRoutine
    );
BOOL
IMAGEAPI
SymGetUnwindInfo(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address,
    _Out_writes_bytes_opt_(*Size) PVOID Buffer,
    _Inout_ PULONG Size
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
BOOL
IMAGEAPI
SymGetModuleInfo64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 qwAddr,
    _Out_ PIMAGEHLP_MODULE64 ModuleInfo
    );
BOOL
IMAGEAPI
SymGetModuleInfoW64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 qwAddr,
    _Out_ PIMAGEHLP_MODULEW64 ModuleInfo
    );
DWORD64
IMAGEAPI
SymGetModuleBase64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 qwAddr
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef struct _SRCCODEINFO {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD64 ModBase;
    CHAR Obj[MAX_PATH + 1];
    CHAR FileName[MAX_PATH + 1];
    DWORD LineNumber;
    DWORD64 Address;
} SRCCODEINFO, *PSRCCODEINFO;
typedef struct _SRCCODEINFOW {
    DWORD SizeOfStruct;
    PVOID Key;
    DWORD64 ModBase;
    WCHAR Obj[MAX_PATH + 1];
    WCHAR FileName[MAX_PATH + 1];
    DWORD LineNumber;
    DWORD64 Address;
} SRCCODEINFOW, *PSRCCODEINFOW;
typedef BOOL
(CALLBACK *PSYM_ENUMLINES_CALLBACK)(
    _In_ PSRCCODEINFO LineInfo,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumLines(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCSTR Obj,
    _In_opt_ PCSTR File,
    _In_ PSYM_ENUMLINES_CALLBACK EnumLinesCallback,
    _In_opt_ PVOID UserContext
    );
typedef BOOL
(CALLBACK *PSYM_ENUMLINES_CALLBACKW)(
    _In_ PSRCCODEINFOW LineInfo,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumLinesW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCWSTR Obj,
    _In_opt_ PCWSTR File,
    _In_ PSYM_ENUMLINES_CALLBACKW EnumLinesCallback,
    _In_opt_ PVOID UserContext
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
BOOL
IMAGEAPI
SymGetLineFromAddr64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 qwAddr,
    _Out_ PDWORD pdwDisplacement,
    _Out_ PIMAGEHLP_LINE64 Line64
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
BOOL
IMAGEAPI
SymGetLineFromAddrW64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 dwAddr,
    _Out_ PDWORD pdwDisplacement,
    _Out_ PIMAGEHLP_LINEW64 Line
    );
BOOL
IMAGEAPI
SymGetLineFromInlineContext(
    _In_ HANDLE hProcess,
    _In_ DWORD64 qwAddr,
    _In_ ULONG InlineContext,
    _In_opt_ DWORD64 qwModuleBaseAddress,
    _Out_ PDWORD pdwDisplacement,
    _Out_ PIMAGEHLP_LINE64 Line64
    );
BOOL
IMAGEAPI
SymGetLineFromInlineContextW(
    _In_ HANDLE hProcess,
    _In_ DWORD64 dwAddr,
    _In_ ULONG InlineContext,
    _In_opt_ DWORD64 qwModuleBaseAddress,
    _Out_ PDWORD pdwDisplacement,
    _Out_ PIMAGEHLP_LINEW64 Line
    );
BOOL
IMAGEAPI
SymEnumSourceLines(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCSTR Obj,
    _In_opt_ PCSTR File,
    _In_opt_ DWORD Line,
    _In_ DWORD Flags,
    _In_ PSYM_ENUMLINES_CALLBACK EnumLinesCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSourceLinesW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCWSTR Obj,
    _In_opt_ PCWSTR File,
    _In_opt_ DWORD Line,
    _In_ DWORD Flags,
    _In_ PSYM_ENUMLINES_CALLBACKW EnumLinesCallback,
    _In_opt_ PVOID UserContext
    );
DWORD
IMAGEAPI
SymAddrIncludeInlineTrace(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address
    );
DWORD
IMAGEAPI
SymCompareInlineTrace(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address1,
    _In_ DWORD InlineContext1,
    _In_ DWORD64 RetAddress1,
    _In_ DWORD64 Address2,
    _In_ DWORD64 RetAddress2
    );
BOOL
IMAGEAPI
SymQueryInlineTrace(
    _In_ HANDLE hProcess,
    _In_ DWORD64 StartAddress,
    _In_ DWORD StartContext,
    _In_ DWORD64 StartRetAddress,
    _In_ DWORD64 CurAddress,
    _Out_ LPDWORD CurContext,
    _Out_ LPDWORD CurFrameIndex
    );
BOOL
IMAGEAPI
SymGetLineFromName64(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR ModuleName,
    _In_opt_ PCSTR FileName,
    _In_ DWORD dwLineNumber,
    _Out_ PLONG plDisplacement,
    _Inout_ PIMAGEHLP_LINE64 Line
    );
BOOL
IMAGEAPI
SymGetLineFromNameW64(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR ModuleName,
    _In_opt_ PCWSTR FileName,
    _In_ DWORD dwLineNumber,
    _Out_ PLONG plDisplacement,
    _Inout_ PIMAGEHLP_LINEW64 Line
    );
BOOL
IMAGEAPI
SymGetLineNext64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_LINE64 Line
    );
BOOL
IMAGEAPI
SymGetLineNextW64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_LINEW64 Line
    );
BOOL
IMAGEAPI
SymGetLinePrev64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_LINE64 Line
    );
BOOL
IMAGEAPI
SymGetLinePrevW64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_LINEW64 Line
    );
ULONG
IMAGEAPI
SymGetFileLineOffsets64(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR ModuleName,
    _In_ PCSTR FileName,
    _Out_writes_(BufferLines) PDWORD64 Buffer,
    _In_ ULONG BufferLines
    );
BOOL
IMAGEAPI
SymMatchFileName(
    _In_ PCSTR FileName,
    _In_ PCSTR Match,
    _Outptr_opt_ PSTR *FileNameStop,
    _Outptr_opt_ PSTR *MatchStop
    );
BOOL
IMAGEAPI
SymMatchFileNameW(
    _In_ PCWSTR FileName,
    _In_ PCWSTR Match,
    _Outptr_opt_ PWSTR *FileNameStop,
    _Outptr_opt_ PWSTR *MatchStop
    );
BOOL
IMAGEAPI
SymGetSourceFile(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCSTR Params,
    _In_ PCSTR FileSpec,
    _Out_writes_(Size) PSTR FilePath,
    _In_ DWORD Size
    );
BOOL
IMAGEAPI
SymGetSourceFileW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCWSTR Params,
    _In_ PCWSTR FileSpec,
    _Out_writes_(Size) PWSTR FilePath,
    _In_ DWORD Size
    );
BOOL
IMAGEAPI
SymGetSourceFileToken(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_ PCSTR FileSpec,
    _Outptr_ PVOID *Token,
    _Out_ DWORD *Size
    );
BOOL
IMAGEAPI
SymGetSourceFileChecksumW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_ PCWSTR FileSpec,
    _Out_ DWORD *pCheckSumType,
    _Out_writes_(checksumSize) BYTE *pChecksum,
    _In_ DWORD checksumSize,
    _Out_ DWORD *pActualBytesWritten
    );
BOOL
IMAGEAPI
SymGetSourceFileChecksum(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_ PCSTR FileSpec,
    _Out_ DWORD *pCheckSumType,
    _Out_writes_(checksumSize) BYTE *pChecksum,
    _In_ DWORD checksumSize,
    _Out_ DWORD *pActualBytesWritten
    );
BOOL
IMAGEAPI
SymGetSourceFileTokenW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_ PCWSTR FileSpec,
    _Outptr_ PVOID *Token,
    _Out_ DWORD *Size
    );
BOOL
IMAGEAPI
SymGetSourceFileFromToken(
    _In_ HANDLE hProcess,
    _In_ PVOID Token,
    _In_opt_ PCSTR Params,
    _Out_writes_(Size) PSTR FilePath,
    _In_ DWORD Size
    );
BOOL
IMAGEAPI
SymGetSourceFileFromTokenW(
    _In_ HANDLE hProcess,
    _In_ PVOID Token,
    _In_opt_ PCWSTR Params,
    _Out_writes_(Size) PWSTR FilePath,
    _In_ DWORD Size
    );
BOOL
IMAGEAPI
SymGetSourceVarFromToken(
    _In_ HANDLE hProcess,
    _In_ PVOID Token,
    _In_opt_ PCSTR Params,
    _In_ PCSTR VarName,
    _Out_writes_(Size) PSTR Value,
    _In_ DWORD Size
    );
BOOL
IMAGEAPI
SymGetSourceVarFromTokenW(
    _In_ HANDLE hProcess,
    _In_ PVOID Token,
    _In_opt_ PCWSTR Params,
    _In_ PCWSTR VarName,
    _Out_writes_(Size) PWSTR Value,
    _In_ DWORD Size
    );
typedef BOOL (CALLBACK *PENUMSOURCEFILETOKENSCALLBACK)(_In_ PVOID token, _In_ size_t size);
BOOL
IMAGEAPI
SymEnumSourceFileTokens(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_ PENUMSOURCEFILETOKENSCALLBACK Callback
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
BOOL
IMAGEAPI
SymInitialize(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR UserSearchPath,
    _In_ BOOL fInvadeProcess
    );
BOOL
IMAGEAPI
SymInitializeW(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR UserSearchPath,
    _In_ BOOL fInvadeProcess
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
BOOL
IMAGEAPI
SymGetSearchPath(
    _In_ HANDLE hProcess,
    _Out_writes_(SearchPathLength) PSTR SearchPath,
    _In_ DWORD SearchPathLength
    );
BOOL
IMAGEAPI
SymGetSearchPathW(
    _In_ HANDLE hProcess,
    _Out_writes_(SearchPathLength) PWSTR SearchPath,
    _In_ DWORD SearchPathLength
    );
BOOL
IMAGEAPI
SymSetSearchPath(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR SearchPath
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
BOOL
IMAGEAPI
SymSetSearchPathW(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR SearchPath
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
DWORD64
IMAGEAPI
SymLoadModuleEx(
    _In_ HANDLE hProcess,
    _In_opt_ HANDLE hFile,
    _In_opt_ PCSTR ImageName,
    _In_opt_ PCSTR ModuleName,
    _In_ DWORD64 BaseOfDll,
    _In_ DWORD DllSize,
    _In_opt_ PMODLOAD_DATA Data,
    _In_opt_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
DWORD64
IMAGEAPI
SymLoadModuleExW(
    _In_ HANDLE hProcess,
    _In_opt_ HANDLE hFile,
    _In_opt_ PCWSTR ImageName,
    _In_opt_ PCWSTR ModuleName,
    _In_ DWORD64 BaseOfDll,
    _In_ DWORD DllSize,
    _In_opt_ PMODLOAD_DATA Data,
    _In_opt_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
BOOL
IMAGEAPI
SymUnloadModule64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 BaseOfDll
    );
BOOL
IMAGEAPI
SymUnDName64(
    _In_ PIMAGEHLP_SYMBOL64 sym,
    _Out_writes_(UnDecNameLength) PSTR UnDecName,
    _In_ DWORD UnDecNameLength
    );
BOOL
IMAGEAPI
SymRegisterCallback64(
    _In_ HANDLE hProcess,
    _In_ PSYMBOL_REGISTERED_CALLBACK64 CallbackFunction,
    _In_ ULONG64 UserContext
    );
BOOL
IMAGEAPI
SymRegisterCallbackW64(
    _In_ HANDLE hProcess,
    _In_ PSYMBOL_REGISTERED_CALLBACK64 CallbackFunction,
    _In_ ULONG64 UserContext
    );
BOOL
IMAGEAPI
SymRegisterFunctionEntryCallback64(
    _In_ HANDLE hProcess,
    _In_ PSYMBOL_FUNCENTRY_CALLBACK64 CallbackFunction,
    _In_ ULONG64 UserContext
    );
typedef struct _IMAGEHLP_SYMBOL_SRC {
    DWORD sizeofstruct;
    DWORD type;
    char file[MAX_PATH];
} IMAGEHLP_SYMBOL_SRC, *PIMAGEHLP_SYMBOL_SRC;
typedef struct _MODULE_TYPE_INFO {
    USHORT dataLength;
    USHORT leaf;
    BYTE data[1];
} MODULE_TYPE_INFO, *PMODULE_TYPE_INFO;
typedef struct _SYMBOL_INFO {
    ULONG SizeOfStruct;
    ULONG TypeIndex;
    ULONG64 Reserved[2];
    ULONG Index;
    ULONG Size;
    ULONG64 ModBase;
    ULONG Flags;
    ULONG64 Value;
    ULONG64 Address;
    ULONG Register;
    ULONG Scope;
    ULONG Tag;
    ULONG NameLen;
    ULONG MaxNameLen;
    CHAR Name[1];
} SYMBOL_INFO, *PSYMBOL_INFO;
typedef struct _SYMBOL_INFO_PACKAGE {
    SYMBOL_INFO si;
    CHAR name[MAX_SYM_NAME + 1];
} SYMBOL_INFO_PACKAGE, *PSYMBOL_INFO_PACKAGE;
typedef struct _SYMBOL_INFOW {
    ULONG SizeOfStruct;
    ULONG TypeIndex;
    ULONG64 Reserved[2];
    ULONG Index;
    ULONG Size;
    ULONG64 ModBase;
    ULONG Flags;
    ULONG64 Value;
    ULONG64 Address;
    ULONG Register;
    ULONG Scope;
    ULONG Tag;
    ULONG NameLen;
    ULONG MaxNameLen;
    WCHAR Name[1];
} SYMBOL_INFOW, *PSYMBOL_INFOW;
typedef struct _SYMBOL_INFO_PACKAGEW {
    SYMBOL_INFOW si;
    WCHAR name[MAX_SYM_NAME + 1];
} SYMBOL_INFO_PACKAGEW, *PSYMBOL_INFO_PACKAGEW;
typedef struct _IMAGEHLP_STACK_FRAME
{
    ULONG64 InstructionOffset;
    ULONG64 ReturnOffset;
    ULONG64 FrameOffset;
    ULONG64 StackOffset;
    ULONG64 BackingStoreOffset;
    ULONG64 FuncTableEntry;
    ULONG64 Params[4];
    ULONG64 Reserved[5];
    BOOL Virtual;
    ULONG Reserved2;
} IMAGEHLP_STACK_FRAME, *PIMAGEHLP_STACK_FRAME;
typedef VOID IMAGEHLP_CONTEXT, *PIMAGEHLP_CONTEXT;
BOOL
IMAGEAPI
SymSetContext(
    _In_ HANDLE hProcess,
    _In_ PIMAGEHLP_STACK_FRAME StackFrame,
    _In_opt_ PIMAGEHLP_CONTEXT Context
    );
BOOL
IMAGEAPI
SymSetScopeFromAddr(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Address
    );
BOOL
IMAGEAPI
SymSetScopeFromInlineContext(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Address,
    _In_ ULONG InlineContext
    );
BOOL
IMAGEAPI
SymSetScopeFromIndex(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ DWORD Index
    );
typedef BOOL
(CALLBACK *PSYM_ENUMPROCESSES_CALLBACK)(
    _In_ HANDLE hProcess,
    _In_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumProcesses(
    _In_ PSYM_ENUMPROCESSES_CALLBACK EnumProcessesCallback,
    _In_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymFromAddr(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address,
    _Out_opt_ PDWORD64 Displacement,
    _Inout_ PSYMBOL_INFO Symbol
    );
BOOL
IMAGEAPI
SymFromAddrW(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address,
    _Out_opt_ PDWORD64 Displacement,
    _Inout_ PSYMBOL_INFOW Symbol
    );
BOOL
IMAGEAPI
SymFromInlineContext(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address,
    _In_ ULONG InlineContext,
    _Out_opt_ PDWORD64 Displacement,
    _Inout_ PSYMBOL_INFO Symbol
    );
BOOL
IMAGEAPI
SymFromInlineContextW(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address,
    _In_ ULONG InlineContext,
    _Out_opt_ PDWORD64 Displacement,
    _Inout_ PSYMBOL_INFOW Symbol
    );
BOOL
IMAGEAPI
SymFromToken(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Base,
    _In_ DWORD Token,
    _Inout_ PSYMBOL_INFO Symbol
    );
BOOL
IMAGEAPI
SymFromTokenW(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Base,
    _In_ DWORD Token,
    _Inout_ PSYMBOL_INFOW Symbol
    );
BOOL
IMAGEAPI
SymNext(
    _In_ HANDLE hProcess,
    _Inout_ PSYMBOL_INFO si
    );
BOOL
IMAGEAPI
SymNextW(
    _In_ HANDLE hProcess,
    _Inout_ PSYMBOL_INFOW siw
    );
BOOL
IMAGEAPI
SymPrev(
    _In_ HANDLE hProcess,
    _Inout_ PSYMBOL_INFO si
    );
BOOL
IMAGEAPI
SymPrevW(
    _In_ HANDLE hProcess,
    _Inout_ PSYMBOL_INFOW siw
    );
BOOL
IMAGEAPI
SymFromName(
    _In_ HANDLE hProcess,
    _In_ PCSTR Name,
    _Inout_ PSYMBOL_INFO Symbol
    );
BOOL
IMAGEAPI
SymFromNameW(
    _In_ HANDLE hProcess,
    _In_ PCWSTR Name,
    _Inout_ PSYMBOL_INFOW Symbol
    );
typedef BOOL
(CALLBACK *PSYM_ENUMERATESYMBOLS_CALLBACK)(
    _In_ PSYMBOL_INFO pSymInfo,
    _In_ ULONG SymbolSize,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSymbols(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCSTR Mask,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSymbolsEx(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCSTR Mask,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    _In_opt_ PVOID UserContext,
    _In_ DWORD Options
    );
typedef BOOL
(CALLBACK *PSYM_ENUMERATESYMBOLS_CALLBACKW)(
    _In_ PSYMBOL_INFOW pSymInfo,
    _In_ ULONG SymbolSize,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSymbolsW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCWSTR Mask,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSymbolsExW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCWSTR Mask,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    _In_opt_ PVOID UserContext,
    _In_ DWORD Options
    );
BOOL
IMAGEAPI
SymEnumSymbolsForAddr(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumSymbolsForAddrW(
    _In_ HANDLE hProcess,
    _In_ DWORD64 Address,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymSearch(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ DWORD Index,
    _In_opt_ DWORD SymTag,
    _In_opt_ PCSTR Mask,
    _In_opt_ DWORD64 Address,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    _In_opt_ PVOID UserContext,
    _In_ DWORD Options
    );
BOOL
IMAGEAPI
SymSearchW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ DWORD Index,
    _In_opt_ DWORD SymTag,
    _In_opt_ PCWSTR Mask,
    _In_opt_ DWORD64 Address,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    _In_opt_ PVOID UserContext,
    _In_ DWORD Options
    );
BOOL
IMAGEAPI
SymGetScope(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ DWORD Index,
    _Inout_ PSYMBOL_INFO Symbol
    );
BOOL
IMAGEAPI
SymGetScopeW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ DWORD Index,
    _Inout_ PSYMBOL_INFOW Symbol
    );
BOOL
IMAGEAPI
SymFromIndex(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ DWORD Index,
    _Inout_ PSYMBOL_INFO Symbol
    );
BOOL
IMAGEAPI
SymFromIndexW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ DWORD Index,
    _Inout_ PSYMBOL_INFOW Symbol
    );
typedef enum _IMAGEHLP_SYMBOL_TYPE_INFO {
    TI_GET_SYMTAG,
    TI_GET_SYMNAME,
    TI_GET_LENGTH,
    TI_GET_TYPE,
    TI_GET_TYPEID,
    TI_GET_BASETYPE,
    TI_GET_ARRAYINDEXTYPEID,
    TI_FINDCHILDREN,
    TI_GET_DATAKIND,
    TI_GET_ADDRESSOFFSET,
    TI_GET_OFFSET,
    TI_GET_VALUE,
    TI_GET_COUNT,
    TI_GET_CHILDRENCOUNT,
    TI_GET_BITPOSITION,
    TI_GET_VIRTUALBASECLASS,
    TI_GET_VIRTUALTABLESHAPEID,
    TI_GET_VIRTUALBASEPOINTEROFFSET,
    TI_GET_CLASSPARENTID,
    TI_GET_NESTED,
    TI_GET_SYMINDEX,
    TI_GET_LEXICALPARENT,
    TI_GET_ADDRESS,
    TI_GET_THISADJUST,
    TI_GET_UDTKIND,
    TI_IS_EQUIV_TO,
    TI_GET_CALLING_CONVENTION,
    TI_IS_CLOSE_EQUIV_TO,
    TI_GTIEX_REQS_VALID,
    TI_GET_VIRTUALBASEOFFSET,
    TI_GET_VIRTUALBASEDISPINDEX,
    TI_GET_IS_REFERENCE,
    TI_GET_INDIRECTVIRTUALBASECLASS,
    TI_GET_VIRTUALBASETABLETYPE,
    IMAGEHLP_SYMBOL_TYPE_INFO_MAX,
} IMAGEHLP_SYMBOL_TYPE_INFO;
typedef struct _TI_FINDCHILDREN_PARAMS {
    ULONG Count;
    ULONG Start;
    ULONG ChildId[1];
} TI_FINDCHILDREN_PARAMS;
BOOL
IMAGEAPI
SymGetTypeInfo(
    _In_ HANDLE hProcess,
    _In_ DWORD64 ModBase,
    _In_ ULONG TypeId,
    _In_ IMAGEHLP_SYMBOL_TYPE_INFO GetType,
    _Out_ PVOID pInfo
    );
typedef struct _IMAGEHLP_GET_TYPE_INFO_PARAMS {
    IN ULONG SizeOfStruct;
    IN ULONG Flags;
    IN ULONG NumIds;
    IN PULONG TypeIds;
    IN ULONG64 TagFilter;
    IN ULONG NumReqs;
    IN IMAGEHLP_SYMBOL_TYPE_INFO* ReqKinds;
    IN PULONG_PTR ReqOffsets;
    IN PULONG ReqSizes;
    IN ULONG_PTR ReqStride;
    IN ULONG_PTR BufferSize;
    OUT PVOID Buffer;
    OUT ULONG EntriesMatched;
    OUT ULONG EntriesFilled;
    OUT ULONG64 TagsFound;
    OUT ULONG64 AllReqsValid;
    IN ULONG NumReqsValid;
    OUT PULONG64 ReqsValid OPTIONAL;
} IMAGEHLP_GET_TYPE_INFO_PARAMS, *PIMAGEHLP_GET_TYPE_INFO_PARAMS;
BOOL
IMAGEAPI
SymGetTypeInfoEx(
    _In_ HANDLE hProcess,
    _In_ DWORD64 ModBase,
    _Inout_ PIMAGEHLP_GET_TYPE_INFO_PARAMS Params
    );
BOOL
IMAGEAPI
SymEnumTypes(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumTypesW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumTypesByName(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCSTR mask,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymEnumTypesByNameW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCWSTR mask,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACKW EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
BOOL
IMAGEAPI
SymGetTypeFromName(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PCSTR Name,
    _Inout_ PSYMBOL_INFO Symbol
    );
BOOL
IMAGEAPI
SymGetTypeFromNameW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PCWSTR Name,
    _Inout_ PSYMBOL_INFOW Symbol
    );
BOOL
IMAGEAPI
SymAddSymbol(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PCSTR Name,
    _In_ DWORD64 Address,
    _In_ DWORD Size,
    _In_ DWORD Flags
    );
BOOL
IMAGEAPI
SymAddSymbolW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PCWSTR Name,
    _In_ DWORD64 Address,
    _In_ DWORD Size,
    _In_ DWORD Flags
    );
BOOL
IMAGEAPI
SymDeleteSymbol(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCSTR Name,
    _In_ DWORD64 Address,
    _In_ DWORD Flags
    );
BOOL
IMAGEAPI
SymDeleteSymbolW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_opt_ PCWSTR Name,
    _In_ DWORD64 Address,
    _In_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
BOOL
IMAGEAPI
SymRefreshModuleList(
    _In_ HANDLE hProcess
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
BOOL
IMAGEAPI
SymAddSourceStream(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCSTR StreamFile,
    _In_reads_bytes_opt_(Size) PBYTE Buffer,
    _In_ size_t Size
    );
typedef BOOL (WINAPI *SYMADDSOURCESTREAM)(HANDLE, ULONG64, PCSTR, PBYTE, size_t);
BOOL
IMAGEAPI
SymAddSourceStreamA(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCSTR StreamFile,
    _In_reads_bytes_opt_(Size) PBYTE Buffer,
    _In_ size_t Size
    );
typedef BOOL (WINAPI *SYMADDSOURCESTREAMA)(HANDLE, ULONG64, PCSTR, PBYTE, size_t);
BOOL
IMAGEAPI
SymAddSourceStreamW(
    _In_ HANDLE hProcess,
    _In_ ULONG64 Base,
    _In_opt_ PCWSTR FileSpec,
    _In_reads_bytes_opt_(Size) PBYTE Buffer,
    _In_ size_t Size
    );
BOOL
IMAGEAPI
SymSrvIsStoreW(
    _In_opt_ HANDLE hProcess,
    _In_ PCWSTR path
    );
BOOL
IMAGEAPI
SymSrvIsStore(
    _In_opt_ HANDLE hProcess,
    _In_ PCSTR path
    );
PCSTR
IMAGEAPI
SymSrvDeltaName(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR SymPath,
    _In_ PCSTR Type,
    _In_ PCSTR File1,
    _In_ PCSTR File2
    );
PCWSTR
IMAGEAPI
SymSrvDeltaNameW(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR SymPath,
    _In_ PCWSTR Type,
    _In_ PCWSTR File1,
    _In_ PCWSTR File2
    );
PCSTR
IMAGEAPI
SymSrvGetSupplement(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR SymPath,
    _In_ PCSTR Node,
    _In_ PCSTR File
    );
PCWSTR
IMAGEAPI
SymSrvGetSupplementW(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR SymPath,
    _In_ PCWSTR Node,
    _In_ PCWSTR File
    );
BOOL
IMAGEAPI
SymSrvGetFileIndexes(
    _In_ PCSTR File,
    _Out_ GUID *Id,
    _Out_ PDWORD Val1,
    _Out_opt_ PDWORD Val2,
    _In_ DWORD Flags
    );
BOOL
IMAGEAPI
SymSrvGetFileIndexesW(
    _In_ PCWSTR File,
    _Out_ GUID *Id,
    _Out_ PDWORD Val1,
    _Out_opt_ PDWORD Val2,
    _In_ DWORD Flags
    );
BOOL
IMAGEAPI
SymSrvGetFileIndexStringW(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR SrvPath,
    _In_ PCWSTR File,
    _Out_writes_(Size) PWSTR Index,
    _In_ size_t Size,
    _In_ DWORD Flags
    );
BOOL
IMAGEAPI
SymSrvGetFileIndexString(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR SrvPath,
    _In_ PCSTR File,
    _Out_writes_(Size) PSTR Index,
    _In_ size_t Size,
    _In_ DWORD Flags
    );
typedef struct {
    DWORD sizeofstruct;
    char file[MAX_PATH +1];
    BOOL stripped;
    DWORD timestamp;
    DWORD size;
    char dbgfile[MAX_PATH +1];
    char pdbfile[MAX_PATH + 1];
    GUID guid;
    DWORD sig;
    DWORD age;
} SYMSRV_INDEX_INFO, *PSYMSRV_INDEX_INFO;
typedef struct {
    DWORD sizeofstruct;
    WCHAR file[MAX_PATH +1];
    BOOL stripped;
    DWORD timestamp;
    DWORD size;
    WCHAR dbgfile[MAX_PATH +1];
    WCHAR pdbfile[MAX_PATH + 1];
    GUID guid;
    DWORD sig;
    DWORD age;
} SYMSRV_INDEX_INFOW, *PSYMSRV_INDEX_INFOW;
BOOL
IMAGEAPI
SymSrvGetFileIndexInfo(
    _In_ PCSTR File,
    _Out_ PSYMSRV_INDEX_INFO Info,
    _In_ DWORD Flags
    );
BOOL
IMAGEAPI
SymSrvGetFileIndexInfoW(
    _In_ PCWSTR File,
    _Out_ PSYMSRV_INDEX_INFOW Info,
    _In_ DWORD Flags
    );
PCSTR
IMAGEAPI
SymSrvStoreSupplement(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR SrvPath,
    _In_ PCSTR Node,
    _In_ PCSTR File,
    _In_ DWORD Flags
    );
PCWSTR
IMAGEAPI
SymSrvStoreSupplementW(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR SymPath,
    _In_ PCWSTR Node,
    _In_ PCWSTR File,
    _In_ DWORD Flags
    );
PCSTR
IMAGEAPI
SymSrvStoreFile(
    _In_ HANDLE hProcess,
    _In_opt_ PCSTR SrvPath,
    _In_ PCSTR File,
    _In_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
PCWSTR
IMAGEAPI
SymSrvStoreFileW(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR SrvPath,
    _In_ PCWSTR File,
    _In_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
typedef enum {
    sfImage = 0,
    sfDbg,
    sfPdb,
    sfMpd,
    sfMax
} IMAGEHLP_SF_TYPE;
BOOL
IMAGEAPI
SymGetSymbolFile(
    _In_opt_ HANDLE hProcess,
    _In_opt_ PCSTR SymPath,
    _In_ PCSTR ImageFile,
    _In_ DWORD Type,
    _Out_writes_(cSymbolFile) PSTR SymbolFile,
    _In_ size_t cSymbolFile,
    _Out_writes_(cDbgFile) PSTR DbgFile,
    _In_ size_t cDbgFile
    );
BOOL
IMAGEAPI
SymGetSymbolFileW(
    _In_opt_ HANDLE hProcess,
    _In_opt_ PCWSTR SymPath,
    _In_ PCWSTR ImageFile,
    _In_ DWORD Type,
    _Out_writes_(cSymbolFile) PWSTR SymbolFile,
    _In_ size_t cSymbolFile,
    _Out_writes_(cDbgFile) PWSTR DbgFile,
    _In_ size_t cDbgFile
    );
typedef BOOL (WINAPI *PDBGHELP_CREATE_USER_DUMP_CALLBACK)(
    _In_ DWORD DataType,
    _In_ PVOID* Data,
    _Out_ LPDWORD DataLength,
    _In_opt_ PVOID UserData
    );
BOOL
WINAPI
DbgHelpCreateUserDump(
    _In_opt_ LPCSTR FileName,
    _In_ PDBGHELP_CREATE_USER_DUMP_CALLBACK Callback,
    _In_opt_ PVOID UserData
    );
BOOL
WINAPI
DbgHelpCreateUserDumpW(
    _In_opt_ LPCWSTR FileName,
    _In_ PDBGHELP_CREATE_USER_DUMP_CALLBACK Callback,
    _In_opt_ PVOID UserData
    );
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
BOOL
IMAGEAPI
SymGetSymFromAddr64(
    _In_ HANDLE hProcess,
    _In_ DWORD64 qwAddr,
    _Out_opt_ PDWORD64 pdwDisplacement,
    _Inout_ PIMAGEHLP_SYMBOL64 Symbol
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
BOOL
IMAGEAPI
SymGetSymFromName64(
    _In_ HANDLE hProcess,
    _In_ PCSTR Name,
    _Inout_ PIMAGEHLP_SYMBOL64 Symbol
    );
typedef struct
{
    DWORD sizeOfStruct;
    DWORD version;
    WCHAR filePtrMsg[MAX_PATH + 1];
} SYMSRV_EXTENDED_OUTPUT_DATA, *PSYMSRV_EXTENDED_OUTPUT_DATA;
typedef BOOL (WINAPI *PSYMBOLSERVERPROC)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPROCA)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPROCW)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROC)(PCSTR, PCSTR, PCSTR, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROCA)(PCSTR, PCSTR, PCSTR, PSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERBYINDEXPROCW)(PCWSTR, PCWSTR, PCWSTR, PWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVEROPENPROC)(VOID);
typedef BOOL (WINAPI *PSYMBOLSERVERCLOSEPROC)(VOID);
typedef BOOL (WINAPI *PSYMBOLSERVERSETOPTIONSPROC)(UINT_PTR, ULONG64);
typedef BOOL (WINAPI *PSYMBOLSERVERSETOPTIONSWPROC)(UINT_PTR, ULONG64);
typedef BOOL (CALLBACK WINAPI *PSYMBOLSERVERCALLBACKPROC)(UINT_PTR action, ULONG64 data, ULONG64 context);
typedef UINT_PTR (WINAPI *PSYMBOLSERVERGETOPTIONSPROC)();
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROC)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCA)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCW)(PCWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERGETVERSION)(LPAPI_VERSION);
typedef BOOL (WINAPI *PSYMBOLSERVERDELTANAME)(PCSTR, PVOID, DWORD, DWORD, PVOID, DWORD, DWORD, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERDELTANAMEW)(PCWSTR, PVOID, DWORD, DWORD, PVOID, DWORD, DWORD, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETSUPPLEMENT)(PCSTR, PCSTR, PCSTR, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETSUPPLEMENTW)(PCWSTR, PCWSTR, PCWSTR, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERSTORESUPPLEMENT)(PCSTR, PCSTR, PCSTR, PSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERSTORESUPPLEMENTW)(PCWSTR, PCWSTR, PCWSTR, PWSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERGETINDEXSTRING)(PVOID, DWORD, DWORD, PSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERGETINDEXSTRINGW)(PVOID, DWORD, DWORD, PWSTR, size_t);
typedef BOOL (WINAPI *PSYMBOLSERVERSTOREFILE)(PCSTR, PCSTR, PVOID, DWORD, DWORD, PSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERSTOREFILEW)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR, size_t, DWORD);
typedef BOOL (WINAPI *PSYMBOLSERVERISSTORE)(PCSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERISSTOREW)(PCWSTR);
typedef DWORD (WINAPI *PSYMBOLSERVERVERSION)();
typedef BOOL (CALLBACK WINAPI *PSYMBOLSERVERMESSAGEPROC)(UINT_PTR action, ULONG64 data, ULONG64 context);
typedef BOOL (WINAPI *PSYMBOLSERVERWEXPROC)(PCWSTR, PCWSTR, PVOID, DWORD, DWORD, PWSTR, PSYMSRV_EXTENDED_OUTPUT_DATA);
typedef BOOL (WINAPI *PSYMBOLSERVERPINGPROCWEX)(PCWSTR);
typedef BOOL (WINAPI *PSYMBOLSERVERGETOPTIONDATAPROC)(UINT_PTR, PULONG64);
typedef BOOL (WINAPI *PSYMBOLSERVERSETHTTPAUTHHEADER)(_In_ PCWSTR pszAuthHeader);
#endif WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
 #define SYMSTOREOPT_COMPRESS 0x01
 #define SYMSTOREOPT_OVERWRITE 0x02
 #define SYMSTOREOPT_RETURNINDEX 0x04
 #define SYMSTOREOPT_POINTER 0x08
 #define SYMSTOREOPT_ALT_INDEX 0x10
 #define SYMSTOREOPT_UNICODE 0x20
 #define SYMSTOREOPT_PASS_IF_EXISTS 0x40
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS)
 #define SymInitialize SymInitializeW
 #define SymAddSymbol SymAddSymbolW
 #define SymDeleteSymbol SymDeleteSymbolW
 #define SearchTreeForFile SearchTreeForFileW
 #define UnDecorateSymbolName UnDecorateSymbolNameW
 #define SymGetLineFromName64 SymGetLineFromNameW64
 #define SymGetLineFromAddr64 SymGetLineFromAddrW64
 #define SymGetLineFromInlineContext SymGetLineFromInlineContextW
 #define SymGetLineNext64 SymGetLineNextW64
 #define SymGetLinePrev64 SymGetLinePrevW64
 #define SymFromName SymFromNameW
 #define SymFindExecutableImage SymFindExecutableImageW
 #define FindExecutableImageEx FindExecutableImageExW
 #define SymSearch SymSearchW
 #define SymEnumLines SymEnumLinesW
 #define SymEnumSourceLines SymEnumSourceLinesW
 #define SymGetTypeFromName SymGetTypeFromNameW
 #define SymEnumSymbolsForAddr SymEnumSymbolsForAddrW
 #define SymFromAddr SymFromAddrW
 #define SymFromInlineContext SymFromInlineContextW
 #define SymMatchString SymMatchStringW
 #define SymEnumSourceFiles SymEnumSourceFilesW
 #define SymEnumSymbols SymEnumSymbolsW
 #define SymEnumSymbolsEx SymEnumSymbolsExW
 #define SymLoadModuleEx SymLoadModuleExW
 #define SymSetSearchPath SymSetSearchPathW
 #define SymGetSearchPath SymGetSearchPathW
 #define EnumDirTree EnumDirTreeW
 #define SymFromToken SymFromTokenW
 #define SymFromIndex SymFromIndexW
 #define SymGetScope SymGetScopeW
 #define SymNext SymNextW
 #define SymPrev SymPrevW
 #define SymEnumTypes SymEnumTypesW
 #define SymEnumTypesByName SymEnumTypesByNameW
 #define SymRegisterCallback64 SymRegisterCallbackW64
 #define SymFindDebugInfoFile SymFindDebugInfoFileW
 #define FindDebugInfoFileEx FindDebugInfoFileExW
 #define SymFindFileInPath SymFindFileInPathW
 #define SymEnumerateModules64 SymEnumerateModulesW64
 #define SymSetHomeDirectory SymSetHomeDirectoryW
 #define SymGetHomeDirectory SymGetHomeDirectoryW
 #define SymGetSourceFile SymGetSourceFileW
 #define SymGetSourceFileToken SymGetSourceFileTokenW
 #define SymGetSourceFileFromToken SymGetSourceFileFromTokenW
 #define SymGetSourceVarFromToken SymGetSourceVarFromTokenW
 #define SymGetSourceFileToken SymGetSourceFileTokenW
 #define SymGetFileLineOffsets64 SymGetFileLineOffsetsW64
 #define SymFindFileInPath SymFindFileInPathW
 #define SymMatchFileName SymMatchFileNameW
 #define SymGetSourceFileFromToken SymGetSourceFileFromTokenW
 #define SymGetSourceVarFromToken SymGetSourceVarFromTokenW
 #define SymGetModuleInfo64 SymGetModuleInfoW64
 #define SymAddSourceStream SymAddSourceStreamW
 #define SymSrvIsStore SymSrvIsStoreW
 #define SymSrvDeltaName SymSrvDeltaNameW
 #define SymSrvGetSupplement SymSrvGetSupplementW
 #define SymSrvStoreSupplement SymSrvStoreSupplementW
 #define SymSrvGetFileIndexes SymSrvGetFileIndexes
 #define SymSrvGetFileIndexString SymSrvGetFileIndexStringW
 #define SymSrvStoreFile SymSrvStoreFileW
 #define SymGetSymbolFile SymGetSymbolFileW
 #define EnumerateLoadedModules64 EnumerateLoadedModulesW64
 #define EnumerateLoadedModulesEx EnumerateLoadedModulesExW
 #define SymSrvGetFileIndexInfo SymSrvGetFileIndexInfoW
 #define IMAGEHLP_LINE64 IMAGEHLP_LINEW64
 #define PIMAGEHLP_LINE64 PIMAGEHLP_LINEW64
 #define SYMBOL_INFO SYMBOL_INFOW
 #define PSYMBOL_INFO PSYMBOL_INFOW
 #define SYMBOL_INFO_PACKAGE SYMBOL_INFO_PACKAGEW
 #define PSYMBOL_INFO_PACKAGE PSYMBOL_INFO_PACKAGEW
 #define FIND_EXE_FILE_CALLBACK FIND_EXE_FILE_CALLBACKW
 #define PFIND_EXE_FILE_CALLBACK PFIND_EXE_FILE_CALLBACKW
 #define SYM_ENUMERATESYMBOLS_CALLBACK SYM_ENUMERATESYMBOLS_CALLBACKW
 #define PSYM_ENUMERATESYMBOLS_CALLBACK PSYM_ENUMERATESYMBOLS_CALLBACKW
 #define SRCCODEINFO SRCCODEINFOW
 #define PSRCCODEINFO PSRCCODEINFOW
 #define SOURCEFILE SOURCEFILEW
 #define PSOURCEFILE PSOURCEFILEW
 #define SYM_ENUMSOURECFILES_CALLBACK SYM_ENUMSOURCEFILES_CALLBACKW
 #define PSYM_ENUMSOURCEFILES_CALLBACK PSYM_ENUMSOURECFILES_CALLBACKW
 #define IMAGEHLP_CBA_EVENT IMAGEHLP_CBA_EVENTW
 #define PIMAGEHLP_CBA_EVENT PIMAGEHLP_CBA_EVENTW
 #define PENUMDIRTREE_CALLBACK PENUMDIRTREE_CALLBACKW
 #define IMAGEHLP_DEFERRED_SYMBOL_LOAD64 IMAGEHLP_DEFERRED_SYMBOL_LOADW64
 #define PIMAGEHLP_DEFERRED_SYMBOL_LOAD64 PIMAGEHLP_DEFERRED_SYMBOL_LOADW64
 #define PFIND_DEBUG_FILE_CALLBACK PFIND_DEBUG_FILE_CALLBACKW
 #define PFINDFILEINPATHCALLBACK PFINDFILEINPATHCALLBACKW
 #define IMAGEHLP_MODULE64 IMAGEHLP_MODULEW64
 #define PIMAGEHLP_MODULE64 PIMAGEHLP_MODULEW64
 #define SYMSRV_INDEX_INFO SYMSRV_INDEX_INFOW
 #define PSYMSRV_INDEX_INFO PSYMSRV_INDEX_INFOW
 #define PSYMBOLSERVERPROC PSYMBOLSERVERPROCW
 #define PSYMBOLSERVERPINGPROC PSYMBOLSERVERPINGPROCW
#pragma endregion
DBHLP_DEPRECIATED
BOOL
IMAGEAPI
FindFileInPath(
    _In_ HANDLE hprocess,
    _In_ PCSTR SearchPath,
    _In_ PCSTR FileName,
    _In_ PVOID id,
    _In_ DWORD two,
    _In_ DWORD three,
    _In_ DWORD flags,
    _Out_writes_(MAX_PATH + 1) PSTR FilePath
    );
DBHLP_DEPRECIATED
BOOL
IMAGEAPI
FindFileInSearchPath(
    _In_ HANDLE hprocess,
    _In_ PCSTR SearchPath,
    _In_ PCSTR FileName,
    _In_ DWORD one,
    _In_ DWORD two,
    _In_ DWORD three,
    _Out_writes_(MAX_PATH + 1) PSTR FilePath
    );
DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumSym(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PSYM_ENUMERATESYMBOLS_CALLBACK EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumerateSymbols64(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PSYM_ENUMSYMBOLS_CALLBACK64 EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
DBHLP_DEPRECIATED
BOOL
IMAGEAPI
SymEnumerateSymbolsW64(
    _In_ HANDLE hProcess,
    _In_ ULONG64 BaseOfDll,
    _In_ PSYM_ENUMSYMBOLS_CALLBACK64W EnumSymbolsCallback,
    _In_opt_ PVOID UserContext
    );
DWORD64
IMAGEAPI
SymLoadModule64(
    _In_ HANDLE hProcess,
    _In_opt_ HANDLE hFile,
    _In_opt_ PCSTR ImageName,
    _In_opt_ PCSTR ModuleName,
    _In_ DWORD64 BaseOfDll,
    _In_ DWORD SizeOfDll
    );
BOOL
IMAGEAPI
SymGetSymNext64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_SYMBOL64 Symbol
    );
BOOL
IMAGEAPI
SymGetSymNextW64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_SYMBOLW64 Symbol
    );
BOOL
IMAGEAPI
SymGetSymPrev64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_SYMBOL64 Symbol
    );
BOOL
IMAGEAPI
SymGetSymPrevW64(
    _In_ HANDLE hProcess,
    _Inout_ PIMAGEHLP_SYMBOLW64 Symbol
    );
typedef ULONG (__stdcall *LPCALL_BACK_USER_INTERRUPT_ROUTINE )(VOID);
typedef struct
{
    PCWSTR pBinPathNonExist;
    PCWSTR pSymbolPathNonExist;
}DBGHELP_DATA_REPORT_STRUCT, *PDBGHELP_DATA_REPORT_STRUCT;
void
IMAGEAPI
SetCheckUserInterruptShared(
    _In_ LPCALL_BACK_USER_INTERRUPT_ROUTINE lpStartAddress
    );
LPCALL_BACK_USER_INTERRUPT_ROUTINE
IMAGEAPI
GetCheckUserInterruptShared(
    void
    );
DWORD
IMAGEAPI
GetSymLoadError(
    void
    );
void
IMAGEAPI
SetSymLoadError(
    _In_ DWORD error
    );
BOOL
IMAGEAPI
ReportSymbolLoadSummary(
    _In_ HANDLE hProcess,
    _In_opt_ PCWSTR pLoadModule,
    _In_ PDBGHELP_DATA_REPORT_STRUCT pSymbolData
    );
void
IMAGEAPI
RemoveInvalidModuleList(
    _In_ HANDLE hProcess
    );
PVOID
IMAGEAPI
RangeMapCreate(
    VOID
    );
VOID
IMAGEAPI
RangeMapFree(
    _In_opt_ PVOID RmapHandle
    );
BOOL
IMAGEAPI
RangeMapAddPeImageSections(
    _In_ PVOID RmapHandle,
    _In_opt_ PCWSTR ImageName,
    _In_reads_bytes_(MappingBytes) PVOID MappedImage,
    _In_ DWORD MappingBytes,
    _In_ DWORD64 ImageBase,
    _In_ DWORD64 UserTag,
    _In_ DWORD MappingFlags
    );
BOOL
IMAGEAPI
RangeMapRemove(
    _In_ PVOID RmapHandle,
    _In_ DWORD64 UserTag
    );
BOOL
IMAGEAPI
RangeMapRead(
    _In_ PVOID RmapHandle,
    _In_ DWORD64 Offset,
    _Out_writes_bytes_to_(RequestBytes, *DoneBytes) PVOID Buffer,
    _In_ DWORD RequestBytes,
    _In_ DWORD Flags,
    _Out_opt_ PDWORD DoneBytes
    );
BOOL
IMAGEAPI
RangeMapWrite(
    _In_ PVOID RmapHandle,
    _In_ DWORD64 Offset,
    _In_reads_bytes_(RequestBytes) PVOID Buffer,
    _In_ DWORD RequestBytes,
    _In_ DWORD Flags,
    _Out_opt_ PDWORD DoneBytes
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(NONGAMESPARTITIONS | WINAPI_PARTITION_GAMES)
#include <poppack.h>
#include <minidumpapiset.h>
#endif
#pragma endregion
