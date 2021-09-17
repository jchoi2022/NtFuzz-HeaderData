       
#include <winapifamily.h>
#pragma region Desktop Family or CoreSetup Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_CORESETUP)
#include <windows.h>
#include <wincrypt.h>
#pragma warning( disable: 4201 )
extern "C"
{
typedef struct _DELTA_INPUT
{
    union
    {
        LPCVOID lpcStart;
        LPVOID lpStart;
    };
    SIZE_T uSize;
    BOOL Editable;
} DELTA_INPUT;
typedef DELTA_INPUT *LPDELTA_INPUT;
typedef const DELTA_INPUT *LPCDELTA_INPUT;
typedef struct _DELTA_OUTPUT
{
    LPVOID lpStart;
    SIZE_T uSize;
} DELTA_OUTPUT;
typedef DELTA_OUTPUT *LPDELTA_OUTPUT;
typedef const DELTA_OUTPUT *LPCDELTA_OUTPUT;
typedef __int64 DELTA_FILE_TYPE;
                                              DELTA_FILE_TYPE_I386 | \
                                              DELTA_FILE_TYPE_IA64 | \
                                              DELTA_FILE_TYPE_AMD64 )
                                              DELTA_FILE_TYPE_CLI4_I386 | \
                                              DELTA_FILE_TYPE_IA64 | \
                                              DELTA_FILE_TYPE_CLI4_AMD64 | \
                                              DELTA_FILE_TYPE_CLI4_ARM )
                                              DELTA_FILE_TYPE_CLI4_I386 | \
                                              DELTA_FILE_TYPE_IA64 | \
                                              DELTA_FILE_TYPE_CLI4_AMD64 | \
                                              DELTA_FILE_TYPE_CLI4_ARM | \
                                              DELTA_FILE_TYPE_CLI4_ARM64 )
typedef __int64 DELTA_FLAG_TYPE;
                                              DELTA_FLAG_IMPORTS | \
                                              DELTA_FLAG_EXPORTS | \
                                              DELTA_FLAG_RESOURCES | \
                                              DELTA_FLAG_RELOCS | \
                                              DELTA_FLAG_I386_SMASHLOCK | \
                                              DELTA_FLAG_I386_JMPS | \
                                              DELTA_FLAG_I386_CALLS | \
                                              DELTA_FLAG_UNBIND | \
                                              DELTA_FLAG_CLI_DISASM | \
                                              DELTA_FLAG_CLI_METADATA )
                                              DELTA_FLAG_IMPORTS | \
                                              DELTA_FLAG_EXPORTS | \
                                              DELTA_FLAG_RESOURCES | \
                                              DELTA_FLAG_RELOCS | \
                                              DELTA_FLAG_IA64_DISASM | \
                                              DELTA_FLAG_IA64_PDATA | \
                                              DELTA_FLAG_UNBIND | \
                                              DELTA_FLAG_CLI_DISASM | \
                                              DELTA_FLAG_CLI_METADATA )
                                              DELTA_FLAG_IMPORTS | \
                                              DELTA_FLAG_EXPORTS | \
                                              DELTA_FLAG_RESOURCES | \
                                              DELTA_FLAG_RELOCS | \
                                              DELTA_FLAG_AMD64_DISASM | \
                                              DELTA_FLAG_AMD64_PDATA | \
                                              DELTA_FLAG_UNBIND | \
                                              DELTA_FLAG_CLI_DISASM | \
                                              DELTA_FLAG_CLI_METADATA )
                                              DELTA_FLAG_IMPORTS | \
                                              DELTA_FLAG_EXPORTS | \
                                              DELTA_FLAG_RESOURCES | \
                                              DELTA_FLAG_RELOCS | \
                                              DELTA_FLAG_I386_SMASHLOCK | \
                                              DELTA_FLAG_I386_JMPS | \
                                              DELTA_FLAG_I386_CALLS | \
                                              DELTA_FLAG_UNBIND | \
                                              DELTA_FLAG_CLI4_DISASM | \
                                              DELTA_FLAG_CLI4_METADATA )
                                              DELTA_FLAG_IMPORTS | \
                                              DELTA_FLAG_EXPORTS | \
                                              DELTA_FLAG_RESOURCES | \
                                              DELTA_FLAG_RELOCS | \
                                              DELTA_FLAG_AMD64_DISASM | \
                                              DELTA_FLAG_AMD64_PDATA | \
                                              DELTA_FLAG_UNBIND | \
                                              DELTA_FLAG_CLI4_DISASM | \
                                              DELTA_FLAG_CLI4_METADATA )
                                              DELTA_FLAG_IMPORTS | \
                                              DELTA_FLAG_EXPORTS | \
                                              DELTA_FLAG_RESOURCES | \
                                              DELTA_FLAG_RELOCS | \
                                              DELTA_FLAG_ARM_DISASM | \
                                              DELTA_FLAG_ARM_PDATA | \
                                              DELTA_FLAG_UNBIND | \
                                              DELTA_FLAG_CLI4_DISASM | \
                                              DELTA_FLAG_CLI4_METADATA )
                                              DELTA_FLAG_IMPORTS | \
                                              DELTA_FLAG_EXPORTS | \
                                              DELTA_FLAG_RESOURCES | \
                                              DELTA_FLAG_RELOCS | \
                                              DELTA_FLAG_ARM64_DISASM | \
                                              DELTA_FLAG_ARM64_PDATA | \
                                              DELTA_FLAG_UNBIND | \
                                              DELTA_FLAG_CLI4_DISASM | \
                                              DELTA_FLAG_CLI4_METADATA )
typedef struct _DELTA_HASH
{
    DWORD HashSize;
    UCHAR HashValue[ DELTA_MAX_HASH_SIZE ];
} DELTA_HASH;
typedef DELTA_HASH *LPDELTA_HASH;
typedef const DELTA_HASH *LPCDELTA_HASH;
typedef struct _DELTA_HEADER_INFO
{
    DELTA_FILE_TYPE FileTypeSet;
    DELTA_FILE_TYPE FileType;
    DELTA_FLAG_TYPE Flags;
    SIZE_T TargetSize;
    FILETIME TargetFileTime;
    ALG_ID TargetHashAlgId;
    DELTA_HASH TargetHash;
} DELTA_HEADER_INFO;
typedef DELTA_HEADER_INFO *LPDELTA_HEADER_INFO;
typedef const DELTA_HEADER_INFO *LPCDELTA_HEADER_INFO;
BOOL
WINAPI
GetDeltaInfoB(
    _In_ DELTA_INPUT Delta,
    _Out_ LPDELTA_HEADER_INFO lpHeaderInfo
    );
BOOL
WINAPI
GetDeltaInfoA(
    _In_ LPCSTR lpDeltaName,
    _Out_ LPDELTA_HEADER_INFO lpHeaderInfo
    );
BOOL
WINAPI
GetDeltaInfoW(
    _In_ LPCWSTR lpDeltaName,
    _Out_ LPDELTA_HEADER_INFO lpHeaderInfo
    );
BOOL
WINAPI
ApplyDeltaB(
    _In_ DELTA_FLAG_TYPE ApplyFlags,
    _In_ DELTA_INPUT Source,
    _In_ DELTA_INPUT Delta,
    _Out_ LPDELTA_OUTPUT lpTarget
    );
BOOL
WINAPI
ApplyDeltaProvidedB(
    _In_ DELTA_FLAG_TYPE ApplyFlags,
    _In_ DELTA_INPUT Source,
    _In_ DELTA_INPUT Delta,
    _Inout_updates_bytes_( uTargetSize ) LPVOID lpTarget,
    _In_ SIZE_T uTargetSize
    );
BOOL
WINAPI
ApplyDeltaA(
    _In_ DELTA_FLAG_TYPE ApplyFlags,
    _In_ LPCSTR lpSourceName,
    _In_ LPCSTR lpDeltaName,
    _In_ LPCSTR lpTargetName
    );
BOOL
WINAPI
ApplyDeltaW(
    _In_ DELTA_FLAG_TYPE ApplyFlags,
    _In_ LPCWSTR lpSourceName,
    _In_ LPCWSTR lpDeltaName,
    _In_ LPCWSTR lpTargetName
    );
BOOL
WINAPI
CreateDeltaB(
    _In_ DELTA_FILE_TYPE FileTypeSet,
    _In_ DELTA_FLAG_TYPE SetFlags,
    _In_ DELTA_FLAG_TYPE ResetFlags,
    _In_ DELTA_INPUT Source,
    _In_ DELTA_INPUT Target,
    _In_ DELTA_INPUT SourceOptions,
    _In_ DELTA_INPUT TargetOptions,
    _In_ DELTA_INPUT GlobalOptions,
    _In_opt_ const FILETIME *lpTargetFileTime,
    _In_ ALG_ID HashAlgId,
    _Out_ LPDELTA_OUTPUT lpDelta
    );
BOOL
WINAPI
CreateDeltaA(
    _In_ DELTA_FILE_TYPE FileTypeSet,
    _In_ DELTA_FLAG_TYPE SetFlags,
    _In_ DELTA_FLAG_TYPE ResetFlags,
    _In_ LPCSTR lpSourceName,
    _In_ LPCSTR lpTargetName,
    _In_opt_ LPCSTR lpSourceOptionsName,
    _In_opt_ LPCSTR lpTargetOptionsName,
    _In_ DELTA_INPUT GlobalOptions,
    _In_opt_ const FILETIME *lpTargetFileTime,
    _In_ ALG_ID HashAlgId,
    _In_ LPCSTR lpDeltaName
    );
BOOL
WINAPI
CreateDeltaW(
    _In_ DELTA_FILE_TYPE FileTypeSet,
    _In_ DELTA_FLAG_TYPE SetFlags,
    _In_ DELTA_FLAG_TYPE ResetFlags,
    _In_ LPCWSTR lpSourceName,
    _In_ LPCWSTR lpTargetName,
    _In_opt_ LPCWSTR lpSourceOptionsName,
    _In_opt_ LPCWSTR lpTargetOptionsName,
    _In_ DELTA_INPUT GlobalOptions,
    _In_opt_ const FILETIME *lpTargetFileTime,
    _In_ ALG_ID HashAlgId,
    _In_ LPCWSTR lpDeltaName
    );
BOOL
WINAPI
GetDeltaSignatureB(
    _In_ DELTA_FILE_TYPE FileTypeSet,
    _In_ ALG_ID HashAlgId,
    _In_ DELTA_INPUT Source,
    _Out_ LPDELTA_HASH lpHash
    );
BOOL
WINAPI
GetDeltaSignatureA(
    _In_ DELTA_FILE_TYPE FileTypeSet,
    _In_ ALG_ID HashAlgId,
    _In_ LPCSTR lpSourceName,
    _Out_ LPDELTA_HASH lpHash
    );
BOOL
WINAPI
GetDeltaSignatureW(
    _In_ DELTA_FILE_TYPE FileTypeSet,
    _In_ ALG_ID HashAlgId,
    _In_ LPCWSTR lpSourceName,
    _Out_ LPDELTA_HASH lpHash
    );
BOOL
WINAPI
DeltaNormalizeProvidedB(
    _In_ DELTA_FILE_TYPE FileTypeSet,
    _In_ DELTA_FLAG_TYPE NormalizeFlags,
    _In_ DELTA_INPUT NormalizeOptions,
    _Inout_updates_bytes_( uSourceSize ) LPVOID lpSource,
    _In_ SIZE_T uSourceSize
    );
BOOL
WINAPI
DeltaFree(
    _In_ LPVOID lpMemory
    );
}
#endif
#pragma endregion
