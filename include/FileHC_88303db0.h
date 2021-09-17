#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef VOID
(*PFN_IO_COMPLETION)(
  IN struct FIO_CONTEXT* pContext,
  IN struct FH_OVERLAPPED* lpo,
  IN DWORD cb,
  IN DWORD dwCompletionStatus
  );
struct FH_OVERLAPPED {
 UINT_PTR Internal ;
 UINT_PTR InternalHigh ;
 DWORD Offset ;
 DWORD OffsetHigh ;
 HANDLE hEvent ;
 PFN_IO_COMPLETION pfnCompletion ;
 UINT_PTR Reserved1 ;
 UINT_PTR Reserved2 ;
 UINT_PTR Reserved3 ;
 UINT_PTR Reserved4 ;
} ;
typedef struct FH_OVERLAPPED* PFH_OVERLAPPED ;
struct FIO_CONTEXT {
    DWORD m_dwTempHack ;
 DWORD m_dwSignature ;
 HANDLE m_hFile ;
 DWORD m_dwLinesOffset;
 DWORD m_dwHeaderLength;
} ;
typedef FIO_CONTEXT* PFIO_CONTEXT ;
FILEHC_EXPORT
BOOL __stdcall
FIOInitialize(
    IN DWORD dwFlags
    );
FILEHC_EXPORT
BOOL __stdcall
FIOTerminate(
    VOID
    );
FILEHC_EXPORT
BOOL __stdcall
FIOReadFile(
    IN PFIO_CONTEXT pContext,
    _In_reads_bytes_(BytesToRead) IN LPVOID lpBuffer,
    IN DWORD BytesToRead,
    _Inout_ IN FH_OVERLAPPED * lpo
    );
FILEHC_EXPORT
BOOL __stdcall
FIOReadFileEx(
    IN PFIO_CONTEXT pContext,
    _In_reads_bytes_(BytesToRead) IN LPVOID lpBuffer,
    IN DWORD BytesToRead,
 IN DWORD BytesAvailable,
    _Inout_ IN FH_OVERLAPPED * lpo,
 IN BOOL fFinalWrite,
 IN BOOL fIncludeTerminator
    );
FILEHC_EXPORT
BOOL __stdcall
FIOWriteFile(
    IN PFIO_CONTEXT pContext,
    _Inout_updates_bytes_(BytesToWrite) IN LPCVOID lpBuffer,
    IN DWORD BytesToWrite,
    _Inout_ IN FH_OVERLAPPED * lpo
    );
FILEHC_EXPORT
BOOL __stdcall
FIOWriteFileEx(
 IN PFIO_CONTEXT pContext,
 _Inout_updates_bytes_(BytesAvailable) IN LPVOID lpBuffer,
 IN DWORD BytesToWrite,
 IN DWORD BytesAvailable,
 _Inout_ IN FH_OVERLAPPED* lpo,
 IN BOOL fFinalWrite,
 IN BOOL fIncludeTerminator
 ) ;
typedef
HANDLE
(__stdcall *FCACHE_CREATE_CALLBACK) (
  IN LPSTR lpstrName,
  IN LPVOID lpvData,
  OUT DWORD* cbFileSize,
  OUT DWORD* cbFileSizeHigh
  ) ;
typedef
HANDLE
(__stdcall *FCACHE_RICHCREATE_CALLBACK) (
  IN LPSTR lpstrName,
  IN LPVOID lpvData,
  OUT DWORD* cbFileSize,
  OUT DWORD* cbFileSizeHigh,
        OUT BOOL* pfDidWeScanIt,
        OUT BOOL* pfIsStuffed,
  OUT BOOL* pfStoredWithDots,
  OUT BOOL* pfStoredWithTerminatingDot
  ) ;
FILEHC_EXPORT
BOOL __stdcall
InitializeCache() ;
FILEHC_EXPORT
BOOL __stdcall
TerminateCache() ;
FILEHC_EXPORT
PFIO_CONTEXT __stdcall
AssociateFile( _In_ HANDLE hFile ) ;
FILEHC_EXPORT
PFIO_CONTEXT __stdcall
AssociateFileEx( _In_ HANDLE hFile,
     BOOL fStoreWithDots,
     BOOL fStoredWithTerminatingDot
     ) ;
FILEHC_EXPORT
void __stdcall
AddRefContext( PFIO_CONTEXT ) ;
FILEHC_EXPORT
void __stdcall
ReleaseContext( PFIO_CONTEXT ) ;
FILEHC_EXPORT
BOOL __stdcall
CloseNonCachedFile( PFIO_CONTEXT ) ;
FILEHC_EXPORT
FIO_CONTEXT* __stdcall
CacheCreateFile( _In_ IN LPSTR lpstrName,
     IN FCACHE_CREATE_CALLBACK pfnCallBack,
     _In_ IN LPVOID lpv,
     IN BOOL fAsyncContext
     ) ;
FILEHC_EXPORT
FIO_CONTEXT* __stdcall
CacheRichCreateFile( _In_ IN LPSTR lpstrName,
      IN FCACHE_RICHCREATE_CALLBACK pfnCallBack,
      IN LPVOID lpv,
      IN BOOL fAsyncContext
      ) ;
FILEHC_EXPORT
void __stdcall
CacheRemoveFiles( _In_ IN LPSTR lpstrName,
     IN BOOL fAllPrefixes
     ) ;
FILEHC_EXPORT
BOOL __stdcall
InsertFile( _In_ IN LPSTR lpstrName,
    IN FIO_CONTEXT* pContext,
    IN BOOL fKeepReference
    ) ;
FILEHC_EXPORT
DWORD __stdcall
GetFileSizeFromContext( IN FIO_CONTEXT* pContext,
      _Out_ OUT DWORD* pcbFileSizeHigh
      ) ;
typedef
int
(__stdcall *CACHE_KEY_COMPARE)( IN DWORD cbKey1,
         IN LPBYTE lpbKey1,
         IN DWORD cbKey2,
         IN LPBYTE lpbKey2
         ) ;
typedef
DWORD
(__stdcall *CACHE_KEY_HASH)( IN LPBYTE lpbKey,
        IN DWORD cbKey
        ) ;
typedef
BOOL
(__stdcall *CACHE_READ_CALLBACK)( IN DWORD cb,
         IN LPBYTE lpb,
         IN LPVOID lpvContext
         ) ;
typedef
void
(__stdcall *CACHE_DESTROY_CALLBACK)( IN DWORD cb,
          IN LPBYTE lpb
          ) ;
typedef
BOOL
(WINAPI *CACHE_ACCESS_CHECK)( IN PSECURITY_DESCRIPTOR pSecurityDescriptor,
        IN HANDLE hClientToken,
        IN DWORD dwDesiredAccess,
        IN PGENERIC_MAPPING GenericMapping,
        IN PRIVILEGE_SET* PrivilegeSet,
        IN LPDWORD PrivilegeSetLength,
        IN LPDWORD GrantedAccess,
        IN LPBOOL AccessStatus
        ) ;
struct NAME_CACHE_CONTEXT {
 DWORD m_dwSignature ;
} ;
typedef struct NAME_CACHE_CONTEXT* PNAME_CACHE_CONTEXT ;
FILEHC_EXPORT
PNAME_CACHE_CONTEXT __stdcall
FindOrCreateNameCache(
  _In_ LPSTR lpstrName,
  _In_ CACHE_KEY_COMPARE pfnKeyCompare,
  CACHE_KEY_HASH pfnKeyHash,
  CACHE_DESTROY_CALLBACK pfnKeyDestroy,
  CACHE_DESTROY_CALLBACK pfnDataDestroy
  ) ;
FILEHC_EXPORT
long __stdcall
ReleaseNameCache(
  _Inout_ PNAME_CACHE_CONTEXT pNameCache
  ) ;
FILEHC_EXPORT
BOOL __stdcall
SetNameCacheSecurityFunction(
  _Out_opt_ PNAME_CACHE_CONTEXT pNameCache,
  CACHE_ACCESS_CHECK pfnAccessCheck
  ) ;
FILEHC_EXPORT
BOOL __stdcall
FindContextFromName(
     PNAME_CACHE_CONTEXT pNameCache,
     _In_reads_bytes_(cbName) IN LPBYTE lpbName,
     _In_ IN DWORD cbName,
     IN CACHE_READ_CALLBACK pfnCallback,
     IN LPVOID lpvClientContext,
     IN HANDLE hToken,
     IN ACCESS_MASK accessMask,
     OUT FIO_CONTEXT** ppContext
     ) ;
FILEHC_EXPORT
BOOL __stdcall
FindSyncContextFromName(
     PNAME_CACHE_CONTEXT pNameCache,
     _In_reads_bytes_(cbName) IN LPBYTE lpbName,
     IN DWORD cbName,
     IN CACHE_READ_CALLBACK pfnCallback,
     IN LPVOID lpvClientContext,
     IN HANDLE hToken,
     IN ACCESS_MASK accessMask,
     OUT FIO_CONTEXT** ppContext
     ) ;
FILEHC_EXPORT
BOOL __stdcall
AssociateContextWithName(
     _In_ PNAME_CACHE_CONTEXT pNameCache,
     _In_reads_bytes_(cbName) IN LPBYTE lpbName,
     IN DWORD cbName,
     _In_ IN LPBYTE lpbData,
     IN DWORD cbData,
     IN PGENERIC_MAPPING pGenericMapping,
     _In_opt_ IN PSECURITY_DESCRIPTOR pSecurityDescriptor,
     _In_opt_ FIO_CONTEXT* pContext,
     BOOL fKeepReference
     ) ;
FILEHC_EXPORT
BOOL
__stdcall
InvalidateName(
     PNAME_CACHE_CONTEXT pNameCache,
     _In_reads_bytes_(cbName) IN LPBYTE lpbName,
     IN DWORD cbName
     ) ;
FILEHC_EXPORT
FIO_CONTEXT* __stdcall
ProduceDotStuffedContext( IN FIO_CONTEXT* pContext,
                                                 _In_ IN LPSTR lpstrName,
       IN BOOL fWantItDotStuffed
       ) ;
FILEHC_EXPORT
BOOL __stdcall
ProduceDotStuffedContextInContext(
       IN FIO_CONTEXT* pContextSource,
       IN FIO_CONTEXT* pContextDestination,
       IN BOOL fWantItDotStuffed,
       _Out_opt_ OUT BOOL* pfModified
       ) ;
FILEHC_EXPORT
BOOL __stdcall
GetIsFileDotTerminated( IN FIO_CONTEXT* pContext ) ;
FILEHC_EXPORT
void __stdcall
SetIsFileDotTerminated( IN FIO_CONTEXT* pContext,
      IN BOOL fIsDotTerminated
      ) ;
FILEHC_EXPORT
BOOL __stdcall
SetDotStuffingOnWrites( IN FIO_CONTEXT* pContext,
      IN BOOL fEnable,
      IN BOOL fStripDots
      ) ;
#if 0
FILEHC_EXPORT
BOOL __stdcall
SetDotStuffingOnReads( IN FIO_CONTEXT* pContext,
      IN BOOL fEnable,
      IN BOOL fStripDots
      ) ;
#endif
FILEHC_EXPORT
BOOL __stdcall
SetDotScanningOnWrites( IN FIO_CONTEXT* pContext,
      IN BOOL fEnable
      ) ;
FILEHC_EXPORT
void __stdcall
CompleteDotStuffingOnWrites( IN FIO_CONTEXT* pContext,
        IN BOOL fStripDots
        ) ;
FILEHC_EXPORT
BOOL __stdcall
SetDotScanningOnReads( IN FIO_CONTEXT* pContext,
      IN BOOL fEnable
      ) ;
FILEHC_EXPORT
BOOL __stdcall
GetDotStuffState( IN FIO_CONTEXT* pContext,
      IN BOOL fReads,
      _Inout_ OUT BOOL* pfStuffed,
      _Out_ OUT BOOL* pfStoredWithDots
      ) ;
FILEHC_EXPORT
void __stdcall
SetDotStuffState( IN FIO_CONTEXT* pContext,
      IN BOOL fKnown,
      IN BOOL fRequiresStuffing
      ) ;
}
#endif
#pragma endregion
