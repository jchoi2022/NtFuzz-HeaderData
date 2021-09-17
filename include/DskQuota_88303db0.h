#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <ole2.h>
#include <olectl.h>
#include <initguid.h>
DEFINE_GUID(CLSID_DiskQuotaControl,
0x7988b571, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaControl,
0x7988b572, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaUser,
0x7988b574, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaUserBatch,
0x7988b576, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IEnumDiskQuotaUsers,
0x7988b577, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
DEFINE_GUID(IID_IDiskQuotaEvents,
0x7988b579, 0xec89, 0x11cf, 0x9c, 0x0, 0x0, 0xaa, 0x0, 0xa1, 0x4f, 0x56);
            ((s) &= ~DISKQUOTA_STATE_MASK)
            ((s) |= (DISKQUOTA_STATE_MASK & DISKQUOTA_STATE_TRACK))
            ((s) |= (DISKQUOTA_STATE_ENFORCE & DISKQUOTA_STATE_ENFORCE))
            (DISKQUOTA_STATE_DISABLED == ((s) & DISKQUOTA_STATE_MASK))
            (DISKQUOTA_STATE_TRACK == ((s) & DISKQUOTA_STATE_MASK))
            (DISKQUOTA_STATE_ENFORCE == ((s) & DISKQUOTA_STATE_MASK))
            (0 != ((s) & DISKQUOTA_FILESTATE_INCOMPLETE))
            (0 != ((s) & DISKQUOTA_FILESTATE_REBUILDING))
            (0 != ((f) & DISKQUOTA_LOGFLAG_USER_THRESHOLD))
            (0 != ((f) & DISKQUOTA_LOGFLAG_USER_LIMIT))
              ((f &= ~DISKQUOTA_LOGFLAG_USER_THRESHOLD) |= ((yn) ? DISKQUOTA_LOGFLAG_USER_THRESHOLD : 0))
              ((f &= ~DISKQUOTA_LOGFLAG_USER_LIMIT) |= ((yn) ? DISKQUOTA_LOGFLAG_USER_LIMIT : 0))
typedef struct DiskQuotaUserInformation {
    LONGLONG QuotaUsed;
    LONGLONG QuotaThreshold;
    LONGLONG QuotaLimit;
} DISKQUOTA_USER_INFORMATION, *PDISKQUOTA_USER_INFORMATION;
DECLARE_INTERFACE_IID_(IDiskQuotaUser, IUnknown, "7988B574-EC89-11cf-9C00-00AA00A14F56")
{
    STDMETHOD(GetID)(THIS_
        ULONG *pulID) PURE;
    STDMETHOD(GetName)(THIS_
        LPWSTR pszAccountContainer,
        DWORD cchAccountContainer,
        LPWSTR pszLogonName,
        DWORD cchLogonName,
        LPWSTR pszDisplayName,
        DWORD cchDisplayName) PURE;
    STDMETHOD(GetSidLength)(THIS_
        LPDWORD pdwLength) PURE;
    STDMETHOD(GetSid)(THIS_
        LPBYTE pbSidBuffer,
        DWORD cbSidBuffer) PURE;
    STDMETHOD(GetQuotaThreshold)(THIS_
        PLONGLONG pllThreshold) PURE;
    STDMETHOD(GetQuotaThresholdText)(THIS_
        LPWSTR pszText,
        DWORD cchText) PURE;
    STDMETHOD(GetQuotaLimit)(THIS_
        PLONGLONG pllLimit) PURE;
    STDMETHOD(GetQuotaLimitText)(THIS_
        LPWSTR pszText,
        DWORD cchText) PURE;
    STDMETHOD(GetQuotaUsed)(THIS_
        PLONGLONG pllUsed) PURE;
    STDMETHOD(GetQuotaUsedText)(THIS_
        LPWSTR pszText,
        DWORD cchText) PURE;
    STDMETHOD(GetQuotaInformation)(THIS_
        LPVOID pbQuotaInfo,
        DWORD cbQuotaInfo) PURE;
    STDMETHOD(SetQuotaThreshold)(THIS_
        LONGLONG llThreshold,
        BOOL fWriteThrough) PURE;
    STDMETHOD(SetQuotaLimit)(THIS_
        LONGLONG llLimit,
        BOOL fWriteThrough) PURE;
    STDMETHOD(Invalidate)(THIS) PURE;
    STDMETHOD(GetAccountStatus)(THIS_
        LPDWORD pdwStatus) PURE;
};
typedef IDiskQuotaUser DISKQUOTA_USER, *PDISKQUOTA_USER;
DECLARE_INTERFACE_IID_(IEnumDiskQuotaUsers, IUnknown, "7988B577-EC89-11cf-9C00-00AA00A14F56")
{
    STDMETHOD(Next)(THIS_
        DWORD cUsers,
        PDISKQUOTA_USER *rgUsers,
        LPDWORD pcUsersFetched) PURE;
    STDMETHOD(Skip)(THIS_
        DWORD cUsers) PURE;
    STDMETHOD(Reset)(THIS) PURE;
    STDMETHOD(Clone)(THIS_
        IEnumDiskQuotaUsers **ppEnum) PURE;
};
typedef IEnumDiskQuotaUsers ENUM_DISKQUOTA_USERS, *PENUM_DISKQUOTA_USERS;
DECLARE_INTERFACE_IID_(IDiskQuotaUserBatch, IUnknown, "7988B576-EC89-11cf-9C00-00AA00A14F56")
{
    STDMETHOD(Add)(THIS_
        PDISKQUOTA_USER pUser) PURE;
    STDMETHOD(Remove)(THIS_
        PDISKQUOTA_USER pUser) PURE;
    STDMETHOD(RemoveAll)(THIS) PURE;
    STDMETHOD(FlushToDisk)(THIS) PURE;
};
typedef IDiskQuotaUserBatch DISKQUOTA_USER_BATCH, *PDISKQUOTA_USER_BATCH;
DECLARE_INTERFACE_IID_(IDiskQuotaControl, IConnectionPointContainer, "7988B572-EC89-11cf-9C00-00AA00A14F56")
{
    STDMETHOD(Initialize)(THIS_
        LPCWSTR pszPath,
        BOOL bReadWrite) PURE;
    STDMETHOD(SetQuotaState)(THIS_
        DWORD dwState) PURE;
    STDMETHOD(GetQuotaState)(THIS_
        LPDWORD pdwState) PURE;
    STDMETHOD(SetQuotaLogFlags)(THIS_
        DWORD dwFlags) PURE;
    STDMETHOD(GetQuotaLogFlags)(THIS_
        LPDWORD pdwFlags) PURE;
    STDMETHOD(SetDefaultQuotaThreshold)(THIS_
        LONGLONG llThreshold) PURE;
    STDMETHOD(GetDefaultQuotaThreshold)(THIS_
        PLONGLONG pllThreshold) PURE;
    STDMETHOD(GetDefaultQuotaThresholdText)(THIS_
        LPWSTR pszText,
        DWORD cchText) PURE;
    STDMETHOD(SetDefaultQuotaLimit)(THIS_
        LONGLONG llLimit) PURE;
    STDMETHOD(GetDefaultQuotaLimit)(THIS_
        PLONGLONG pllLimit) PURE;
    STDMETHOD(GetDefaultQuotaLimitText)(THIS_
        LPWSTR pszText,
        DWORD cchText) PURE;
    STDMETHOD(AddUserSid)(THIS_
        PSID pUserSid,
        DWORD fNameResolution,
        PDISKQUOTA_USER *ppUser) PURE;
    STDMETHOD(AddUserName)(THIS_
        LPCWSTR pszLogonName,
        DWORD fNameResolution,
        PDISKQUOTA_USER *ppUser) PURE;
    STDMETHOD(DeleteUser)(THIS_
        PDISKQUOTA_USER pUser) PURE;
    STDMETHOD(FindUserSid)(THIS_
        PSID pUserSid,
        DWORD fNameResolution,
        PDISKQUOTA_USER *ppUser) PURE;
    STDMETHOD(FindUserName)(THIS_
        LPCWSTR pszLogonName,
        PDISKQUOTA_USER *ppUser) PURE;
    STDMETHOD(CreateEnumUsers)(THIS_
        PSID *rgpUserSids,
        DWORD cpSids,
        DWORD fNameResolution,
        PENUM_DISKQUOTA_USERS *ppEnum) PURE;
    STDMETHOD(CreateUserBatch)(THIS_
        PDISKQUOTA_USER_BATCH *ppBatch) PURE;
    STDMETHOD(InvalidateSidNameCache)(THIS) PURE;
    STDMETHOD(GiveUserNameResolutionPriority)(THIS_
        PDISKQUOTA_USER pUser) PURE;
    STDMETHOD(ShutdownNameResolution)(THIS) PURE;
};
typedef IDiskQuotaControl DISKQUOTA_CONTROL, *PDISKQUOTA_CONTROL;
DECLARE_INTERFACE_IID_(IDiskQuotaEvents, IUnknown, "7988B579-EC89-11cf-9C00-00AA00A14F56")
{
    STDMETHOD(OnUserNameChanged)(THIS_
        PDISKQUOTA_USER pUser) PURE;
};
typedef IDiskQuotaEvents DISKQUOTA_EVENTS, *PDISKQUOTA_EVENTS;
#endif
#pragma endregion
