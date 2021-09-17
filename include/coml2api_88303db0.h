       
#include <apiset.h>
#include <apisetcconv.h>
#include <combaseapi.h>
#include <objidl.h>
#include <propidlbase.h>
#pragma region Application and Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef DWORD STGFMT;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
_Check_return_
WINOLEAPI
StgCreateDocfile(
    _In_opt_ _Null_terminated_ const WCHAR* pwcsName,
    _In_ DWORD grfMode,
    _Reserved_ DWORD reserved,
    _Outptr_ IStorage** ppstgOpen
    );
_Check_return_
WINOLEAPI
StgCreateDocfileOnILockBytes(
    _In_ ILockBytes* plkbyt,
    _In_ DWORD grfMode,
    _In_ DWORD reserved,
    _Outptr_ IStorage** ppstgOpen
    );
_Check_return_
WINOLEAPI
StgOpenStorage(
    _In_opt_ _Null_terminated_ const WCHAR* pwcsName,
    _In_opt_ IStorage* pstgPriority,
    _In_ DWORD grfMode,
    _In_opt_z_ SNB snbExclude,
    _In_ DWORD reserved,
    _Outptr_ IStorage** ppstgOpen
    );
_Check_return_
WINOLEAPI
StgOpenStorageOnILockBytes(
    _In_ ILockBytes* plkbyt,
    _In_opt_ IStorage* pstgPriority,
    _In_ DWORD grfMode,
    _In_opt_z_ SNB snbExclude,
    _Reserved_ DWORD reserved,
    _Outptr_ IStorage** ppstgOpen
    );
_Check_return_
WINOLEAPI
StgIsStorageFile(
    _In_ _Null_terminated_ const WCHAR* pwcsName
    );
_Check_return_
WINOLEAPI
StgIsStorageILockBytes(
    _In_ ILockBytes* plkbyt
    );
_Check_return_
WINOLEAPI
StgSetTimes(
    _In_ _Null_terminated_ const WCHAR* lpszName,
    _In_opt_ const FILETIME* pctime,
    _In_opt_ const FILETIME* patime,
    _In_opt_ const FILETIME* pmtime
    );
typedef struct tagSTGOPTIONS
{
    USHORT usVersion;
    USHORT reserved;
    ULONG ulSectorSize;
    const WCHAR *pwcsTemplateFile;
} STGOPTIONS;
_Check_return_
WINOLEAPI
StgCreateStorageEx(
    _In_opt_ _Null_terminated_ const WCHAR* pwcsName,
    _In_ DWORD grfMode,
    _In_ DWORD stgfmt,
    _In_ DWORD grfAttrs,
    _Inout_opt_ STGOPTIONS* pStgOptions,
    _In_opt_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_ REFIID riid,
    _Outptr_ void** ppObjectOpen
    );
_Check_return_
WINOLEAPI
StgOpenStorageEx(
    _In_ _Null_terminated_ const WCHAR* pwcsName,
    _In_ DWORD grfMode,
    _In_ DWORD stgfmt,
    _In_ DWORD grfAttrs,
    _Inout_opt_ STGOPTIONS* pStgOptions,
    _In_opt_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_ REFIID riid,
    _Outptr_ void** ppObjectOpen
    );
_Check_return_
WINOLEAPI
StgCreatePropStg(
    _In_ IUnknown* pUnk,
    _In_ REFFMTID fmtid,
    _In_ const CLSID* pclsid,
    _In_ DWORD grfFlags,
    _Reserved_ DWORD dwReserved,
    _Outptr_ IPropertyStorage** ppPropStg
    );
_Check_return_
WINOLEAPI
StgOpenPropStg(
    _In_ IUnknown* pUnk,
    _In_ REFFMTID fmtid,
    _In_ DWORD grfFlags,
    _Reserved_ DWORD dwReserved,
    _Outptr_ IPropertyStorage** ppPropStg
    );
_Check_return_
WINOLEAPI
StgCreatePropSetStg(
    _In_ IStorage* pStorage,
    _Reserved_ DWORD dwReserved,
    _Outptr_ IPropertySetStorage** ppPropSetStg
    );
_Check_return_
WINOLEAPI
FmtIdToPropStgName(
    _In_ const FMTID* pfmtid,
    _Out_writes_(CCH_MAX_PROPSTG_NAME + 1) LPOLESTR oszName
    );
_Check_return_
WINOLEAPI
PropStgNameToFmtId(
    _In_ const LPOLESTR oszName,
    _Out_ FMTID* pfmtid
    );
WINOLEAPI
ReadClassStg(
    _In_ LPSTORAGE pStg,
    _Out_ CLSID FAR * pclsid
    );
WINOLEAPI
WriteClassStg(
    _In_ LPSTORAGE pStg,
    _In_ REFCLSID rclsid
    );
WINOLEAPI
ReadClassStm(
    _In_ LPSTREAM pStm,
    _Out_ CLSID FAR * pclsid
    );
WINOLEAPI
WriteClassStm(
    _In_ LPSTREAM pStm,
    _In_ REFCLSID rclsid
    );
_Check_return_
WINOLEAPI
GetHGlobalFromILockBytes(
    _In_ LPLOCKBYTES plkbyt,
    _Out_ HGLOBAL FAR * phglobal
    );
_Check_return_
WINOLEAPI
CreateILockBytesOnHGlobal(
    _In_opt_ HGLOBAL hGlobal,
    _In_ BOOL fDeleteOnRelease,
    _Outptr_ LPLOCKBYTES FAR * pplkbyt
    );
WINOLEAPI
GetConvertStg(
    _In_ LPSTORAGE pStg
    );
#endif
#pragma endregion
