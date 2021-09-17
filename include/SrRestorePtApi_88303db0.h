#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma pack(push, srrestoreptapi_include)
#pragma pack(1)
typedef struct _RESTOREPTINFOA {
    DWORD dwEventType;
    DWORD dwRestorePtType;
    INT64 llSequenceNumber;
    CHAR szDescription[MAX_DESC];
} RESTOREPOINTINFOA, *PRESTOREPOINTINFOA;
typedef struct _RESTOREPTINFOW {
    DWORD dwEventType;
    DWORD dwRestorePtType;
    INT64 llSequenceNumber;
    WCHAR szDescription[MAX_DESC_W];
} RESTOREPOINTINFOW, *PRESTOREPOINTINFOW;
typedef struct _RESTOREPTINFOEX {
    FILETIME ftCreation;
    DWORD dwEventType;
    DWORD dwRestorePtType;
    DWORD dwRPNum;
    WCHAR szDescription[MAX_DESC_W];
} RESTOREPOINTINFOEX, *PRESTOREPOINTINFOEX;
typedef struct _SMGRSTATUS {
    DWORD nStatus;
    INT64 llSequenceNumber;
} STATEMGRSTATUS, *PSTATEMGRSTATUS;
#pragma pack(pop, srrestoreptapi_include)
extern "C" {
BOOL __stdcall
SRSetRestorePointA(
                  _In_ PRESTOREPOINTINFOA pRestorePtSpec,
                  _Out_ PSTATEMGRSTATUS pSMgrStatus
                  );
BOOL __stdcall
SRSetRestorePointW(
                  _In_ PRESTOREPOINTINFOW pRestorePtSpec,
                  _Out_ PSTATEMGRSTATUS pSMgrStatus
                  );
BOOL __stdcall
SRSetRestorePointInternal(
                  _In_ PRESTOREPOINTINFOW pRestorePtSpec,
                  _Out_ PSTATEMGRSTATUS pSMgrStatus,
                  _In_ BOOL fForceSurrogate
                  );
DWORD __stdcall
SRRemoveRestorePoint(DWORD dwRPNum);
}
#endif
#pragma endregion
