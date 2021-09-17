#include <wtypes.h>
#include <winioctl.h>
#include "winsmcrd.h"
#include "SCardErr.h"
#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef const BYTE *LPCBYTE;
typedef const VOID *LPCVOID;
WINSCARDDATA extern const SCARD_IO_REQUEST
    g_rgSCardT0Pci,
    g_rgSCardT1Pci,
    g_rgSCardRawPci;
typedef ULONG_PTR SCARDCONTEXT;
typedef SCARDCONTEXT *PSCARDCONTEXT, *LPSCARDCONTEXT;
typedef ULONG_PTR SCARDHANDLE;
typedef SCARDHANDLE *PSCARDHANDLE, *LPSCARDHANDLE;
extern WINSCARDAPI LONG WINAPI
SCardEstablishContext(
    _In_ DWORD dwScope,
    _Reserved_ LPCVOID pvReserved1,
    _Reserved_ LPCVOID pvReserved2,
    _Out_ LPSCARDCONTEXT phContext);
extern WINSCARDAPI LONG WINAPI
SCardReleaseContext(
    _In_ SCARDCONTEXT hContext);
extern WINSCARDAPI LONG WINAPI
SCardIsValidContext(
    _In_ SCARDCONTEXT hContext);
extern WINSCARDAPI LONG WINAPI
SCardListReaderGroupsA(
    _In_ SCARDCONTEXT hContext,
    _Out_writes_opt_(*pcchGroups) _Post_ _NullNull_terminated_ LPSTR mszGroups,
    _Inout_ LPDWORD pcchGroups);
extern WINSCARDAPI LONG WINAPI
SCardListReaderGroupsW(
    _In_ SCARDCONTEXT hContext,
    _Out_writes_opt_(*pcchGroups) _Post_ _NullNull_terminated_ LPWSTR mszGroups,
    _Inout_ LPDWORD pcchGroups);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardListReadersA(
    _In_ SCARDCONTEXT hContext,
    _In_opt_ LPCSTR mszGroups,
    _When_(_Old_(*pcchReaders) == SCARD_AUTOALLOCATE, _At_((LPSTR *)mszReaders, _Outptr_result_buffer_maybenull_(*pcchReaders) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcchReaders) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchReaders) _Post_ _NullNull_terminated_)
             LPSTR mszReaders,
    _Inout_ LPDWORD pcchReaders);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardListReadersW(
    _In_ SCARDCONTEXT hContext,
    _In_opt_ LPCWSTR mszGroups,
    _When_(_Old_(*pcchReaders) == SCARD_AUTOALLOCATE, _At_((LPWSTR *)mszReaders, _Outptr_result_buffer_maybenull_(*pcchReaders) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcchReaders) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchReaders) _Post_ _NullNull_terminated_)
             LPWSTR mszReaders,
    _Inout_ LPDWORD pcchReaders);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardListCardsA(
    _In_ SCARDCONTEXT hContext,
    _In_opt_ LPCBYTE pbAtr,
    _In_reads_opt_(cguidInterfaceCount) LPCGUID rgquidInterfaces,
    _In_ DWORD cguidInterfaceCount,
    _When_(_Old_(*pcchCards) == SCARD_AUTOALLOCATE, _At_((LPSTR *)mszCards, _Outptr_result_buffer_maybenull_(*pcchCards) _At_(*_Curr_, _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcchCards) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchCards) _Post_ _NullNull_terminated_)
              CHAR *mszCards,
    _Inout_ LPDWORD pcchCards);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardListCardsW(
    _In_ SCARDCONTEXT hContext,
    _In_opt_ LPCBYTE pbAtr,
    _In_reads_opt_(cguidInterfaceCount) LPCGUID rgquidInterfaces,
    _In_ DWORD cguidInterfaceCount,
    _When_(_Old_(*pcchCards) == SCARD_AUTOALLOCATE, _At_((LPWSTR *)mszCards, _Outptr_result_buffer_maybenull_(*pcchCards) _At_(*_Curr_, _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcchCards) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchCards) _Post_ _NullNull_terminated_)
              WCHAR *mszCards,
    _Inout_ LPDWORD pcchCards);
extern WINSCARDAPI LONG WINAPI
SCardListInterfacesA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szCard,
    _Out_ LPGUID pguidInterfaces,
    _Inout_ LPDWORD pcguidInterfaces);
extern WINSCARDAPI LONG WINAPI
SCardListInterfacesW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szCard,
    _Out_ LPGUID pguidInterfaces,
    _Inout_ LPDWORD pcguidInterfaces);
extern WINSCARDAPI LONG WINAPI
SCardGetProviderIdA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szCard,
    _Out_ LPGUID pguidProviderId);
extern WINSCARDAPI LONG WINAPI
SCardGetProviderIdW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szCard,
    _Out_ LPGUID pguidProviderId);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetCardTypeProviderNameA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szCardName,
    _In_ DWORD dwProviderId,
    _When_(_Old_(*pcchProvider) == SCARD_AUTOALLOCATE, _At_((LPSTR *)szProvider, _Outptr_result_buffer_all_(*pcchProvider)))
    _When_(_Old_(*pcchProvider) != SCARD_AUTOALLOCATE, _Out_writes_to_(*pcchProvider, *pcchProvider) _Post_z_)
              CHAR *szProvider,
    _Inout_ LPDWORD pcchProvider);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetCardTypeProviderNameW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szCardName,
    _In_ DWORD dwProviderId,
    _When_(_Old_(*pcchProvider) == SCARD_AUTOALLOCATE, _At_((LPWSTR *)szProvider, _Outptr_result_buffer_all_(*pcchProvider)))
    _When_(_Old_(*pcchProvider) != SCARD_AUTOALLOCATE, _Out_writes_to_(*pcchProvider, *pcchProvider) _Post_z_)
              WCHAR *szProvider,
    _Inout_ LPDWORD pcchProvider);
extern WINSCARDAPI LONG WINAPI
SCardIntroduceReaderGroupA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardIntroduceReaderGroupW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardForgetReaderGroupA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardForgetReaderGroupW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardIntroduceReaderA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szReaderName,
    _In_ LPCSTR szDeviceName);
extern WINSCARDAPI LONG WINAPI
SCardIntroduceReaderW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szReaderName,
    _In_ LPCWSTR szDeviceName);
extern WINSCARDAPI LONG WINAPI
SCardForgetReaderA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szReaderName);
extern WINSCARDAPI LONG WINAPI
SCardForgetReaderW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szReaderName);
extern WINSCARDAPI LONG WINAPI
SCardAddReaderToGroupA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szReaderName,
    _In_ LPCSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardAddReaderToGroupW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szReaderName,
    _In_ LPCWSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardRemoveReaderFromGroupA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szReaderName,
    _In_ LPCSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardRemoveReaderFromGroupW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szReaderName,
    _In_ LPCWSTR szGroupName);
extern WINSCARDAPI LONG WINAPI
SCardIntroduceCardTypeA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szCardName,
    _In_opt_ LPCGUID pguidPrimaryProvider,
    _In_opt_ LPCGUID rgguidInterfaces,
    _In_ DWORD dwInterfaceCount,
    _In_ LPCBYTE pbAtr,
    _In_ LPCBYTE pbAtrMask,
    _In_ DWORD cbAtrLen);
extern WINSCARDAPI LONG WINAPI
SCardIntroduceCardTypeW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szCardName,
    _In_opt_ LPCGUID pguidPrimaryProvider,
    _In_opt_ LPCGUID rgguidInterfaces,
    _In_ DWORD dwInterfaceCount,
    _In_ LPCBYTE pbAtr,
    _In_ LPCBYTE pbAtrMask,
    _In_ DWORD cbAtrLen);
          SCardIntroduceCardType(hContext, szCardName, pguidPrimaryProvider, rgguidInterfaces, dwInterfaceCount, pbAtr, pbAtrMask, cbAtrLen)
extern WINSCARDAPI LONG WINAPI
SCardSetCardTypeProviderNameA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szCardName,
    _In_ DWORD dwProviderId,
    _In_ LPCSTR szProvider);
extern WINSCARDAPI LONG WINAPI
SCardSetCardTypeProviderNameW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szCardName,
    _In_ DWORD dwProviderId,
    _In_ LPCWSTR szProvider);
extern WINSCARDAPI LONG WINAPI
SCardForgetCardTypeA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szCardName);
extern WINSCARDAPI LONG WINAPI
SCardForgetCardTypeW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szCardName);
extern WINSCARDAPI LONG WINAPI
SCardFreeMemory(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCVOID pvMem);
extern WINSCARDAPI HANDLE WINAPI
SCardAccessStartedEvent(void);
extern WINSCARDAPI void WINAPI
SCardReleaseStartedEvent(void);
typedef struct {
    LPCSTR szReader;
    LPVOID pvUserData;
    DWORD dwCurrentState;
    DWORD dwEventState;
    DWORD cbAtr;
    BYTE rgbAtr[36];
} SCARD_READERSTATEA, *PSCARD_READERSTATEA, *LPSCARD_READERSTATEA;
typedef struct {
    LPCWSTR szReader;
    LPVOID pvUserData;
    DWORD dwCurrentState;
    DWORD dwEventState;
    DWORD cbAtr;
    BYTE rgbAtr[36];
} SCARD_READERSTATEW, *PSCARD_READERSTATEW, *LPSCARD_READERSTATEW;
typedef SCARD_READERSTATEW SCARD_READERSTATE;
typedef PSCARD_READERSTATEW PSCARD_READERSTATE;
typedef LPSCARD_READERSTATEW LPSCARD_READERSTATE;
extern WINSCARDAPI LONG WINAPI
SCardLocateCardsA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR mszCards,
    _Inout_ LPSCARD_READERSTATEA rgReaderStates,
    _In_ DWORD cReaders);
extern WINSCARDAPI LONG WINAPI
SCardLocateCardsW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR mszCards,
    _Inout_ LPSCARD_READERSTATEW rgReaderStates,
    _In_ DWORD cReaders);
typedef struct _SCARD_ATRMASK {
    DWORD cbAtr;
    BYTE rgbAtr[36];
    BYTE rgbMask[36];
} SCARD_ATRMASK, *PSCARD_ATRMASK, *LPSCARD_ATRMASK;
extern WINSCARDAPI LONG WINAPI
SCardLocateCardsByATRA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPSCARD_ATRMASK rgAtrMasks,
    _In_ DWORD cAtrs,
    _Inout_ LPSCARD_READERSTATEA rgReaderStates,
    _In_ DWORD cReaders);
extern WINSCARDAPI LONG WINAPI
SCardLocateCardsByATRW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPSCARD_ATRMASK rgAtrMasks,
    _In_ DWORD cAtrs,
    _Inout_ LPSCARD_READERSTATEW rgReaderStates,
    _In_ DWORD cReaders);
extern WINSCARDAPI LONG WINAPI
SCardGetStatusChangeA(
    _In_ SCARDCONTEXT hContext,
    _In_ DWORD dwTimeout,
    _Inout_ LPSCARD_READERSTATEA rgReaderStates,
    _In_ DWORD cReaders);
extern WINSCARDAPI LONG WINAPI
SCardGetStatusChangeW(
    _In_ SCARDCONTEXT hContext,
    _In_ DWORD dwTimeout,
    _Inout_ LPSCARD_READERSTATEW rgReaderStates,
    _In_ DWORD cReaders);
extern WINSCARDAPI LONG WINAPI
SCardCancel(
    _In_ SCARDCONTEXT hContext);
extern WINSCARDAPI LONG WINAPI
SCardConnectA(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCSTR szReader,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwPreferredProtocols,
    _Out_ LPSCARDHANDLE phCard,
    _Out_ LPDWORD pdwActiveProtocol);
extern WINSCARDAPI LONG WINAPI
SCardConnectW(
    _In_ SCARDCONTEXT hContext,
    _In_ LPCWSTR szReader,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwPreferredProtocols,
    _Out_ LPSCARDHANDLE phCard,
    _Out_ LPDWORD pdwActiveProtocol);
extern WINSCARDAPI LONG WINAPI
SCardReconnect(
    _In_ SCARDHANDLE hCard,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwPreferredProtocols,
    _In_ DWORD dwInitialization,
    _Out_opt_ LPDWORD pdwActiveProtocol);
extern WINSCARDAPI LONG WINAPI
SCardDisconnect(
    _In_ SCARDHANDLE hCard,
    _In_ DWORD dwDisposition);
extern WINSCARDAPI LONG WINAPI
SCardBeginTransaction(
    _In_ SCARDHANDLE hCard);
extern WINSCARDAPI LONG WINAPI
SCardEndTransaction(
    _In_ SCARDHANDLE hCard,
    _In_ DWORD dwDisposition);
extern WINSCARDAPI LONG WINAPI
SCardCancelTransaction(
    _In_ SCARDHANDLE hCard);
extern WINSCARDAPI LONG WINAPI
SCardState(
    _In_ SCARDHANDLE hCard,
    _Out_ LPDWORD pdwState,
    _Out_ LPDWORD pdwProtocol,
    _Out_writes_bytes_(*pcbAtrLen) LPBYTE pbAtr,
    _Inout_ LPDWORD pcbAtrLen);
extern WINSCARDAPI LONG WINAPI
SCardStatusA(
    _In_ SCARDHANDLE hCard,
    _When_(_Old_(*pcchReaderLen) == SCARD_AUTOALLOCATE, _At_((LPSTR *)mszReaderNames, _Outptr_result_buffer_maybenull_(*pcchReaderLen) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcchReaderLen) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchReaderLen) _Post_ _NullNull_terminated_)
                LPSTR mszReaderNames,
    _Inout_opt_ LPDWORD pcchReaderLen,
    _Out_opt_ LPDWORD pdwState,
    _Out_opt_ LPDWORD pdwProtocol,
    _When_(_Old_(*pcbAtrLen) == SCARD_AUTOALLOCATE, _At_((LPBYTE *)pbAtr, _Outptr_result_buffer_maybenull_(*pcbAtrLen) _At_(*_Curr_, _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcbAtrLen) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcbAtrLen) _Post_ _NullNull_terminated_)
                LPBYTE pbAtr,
    _Inout_opt_ LPDWORD pcbAtrLen);
extern WINSCARDAPI LONG WINAPI
SCardStatusW(
    _In_ SCARDHANDLE hCard,
    _When_(_Old_(*pcchReaderLen) == SCARD_AUTOALLOCATE, _At_((LPWSTR *)mszReaderNames, _Outptr_result_buffer_maybenull_(*pcchReaderLen) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcchReaderLen) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchReaderLen) _Post_ _NullNull_terminated_)
                LPWSTR mszReaderNames,
    _Inout_opt_ LPDWORD pcchReaderLen,
    _Out_opt_ LPDWORD pdwState,
    _Out_opt_ LPDWORD pdwProtocol,
    _When_(_Old_(*pcbAtrLen) == SCARD_AUTOALLOCATE, _At_((LPBYTE *)pbAtr, _Outptr_result_buffer_maybenull_(*pcbAtrLen) _At_(*_Curr_, _Post_ _NullNull_terminated_)))
    _When_(_Old_(*pcbAtrLen) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcbAtrLen) _Post_ _NullNull_terminated_)
                LPBYTE pbAtr,
    _Inout_opt_ LPDWORD pcbAtrLen);
extern WINSCARDAPI LONG WINAPI
SCardTransmit(
    _In_ SCARDHANDLE hCard,
    _In_ LPCSCARD_IO_REQUEST pioSendPci,
    _In_reads_bytes_(cbSendLength) LPCBYTE pbSendBuffer,
    _In_ DWORD cbSendLength,
    _Inout_opt_ LPSCARD_IO_REQUEST pioRecvPci,
    _Out_writes_bytes_(*pcbRecvLength) LPBYTE pbRecvBuffer,
    _Inout_ LPDWORD pcbRecvLength);
extern WINSCARDAPI LONG WINAPI
SCardGetTransmitCount(
    _In_ SCARDHANDLE hCard,
    _Out_ LPDWORD pcTransmitCount);
extern WINSCARDAPI LONG WINAPI
SCardControl(
    _In_ SCARDHANDLE hCard,
    _In_ DWORD dwControlCode,
    _In_reads_bytes_(cbInBufferSize) LPCVOID lpInBuffer,
    _In_ DWORD cbInBufferSize,
    _Out_writes_bytes_(cbOutBufferSize) LPVOID lpOutBuffer,
    _In_ DWORD cbOutBufferSize,
    _Out_ LPDWORD lpBytesReturned);
extern WINSCARDAPI LONG WINAPI
SCardGetAttrib(
    _In_ SCARDHANDLE hCard,
    _In_ DWORD dwAttrId,
    _Out_writes_bytes_opt_(*pcbAttrLen) LPBYTE pbAttr,
    _Inout_ LPDWORD pcbAttrLen);
extern WINSCARDAPI LONG WINAPI
SCardSetAttrib(
    _In_ SCARDHANDLE hCard,
    _In_ DWORD dwAttrId,
    _In_reads_bytes_(cbAttrLen) LPCBYTE pbAttr,
    _In_ DWORD cbAttrLen);
typedef SCARDHANDLE (WINAPI *LPOCNCONNPROCA) (_In_ SCARDCONTEXT, _In_ LPSTR, _In_ LPSTR, _In_ PVOID);
typedef SCARDHANDLE (WINAPI *LPOCNCONNPROCW) (_In_ SCARDCONTEXT, _In_ LPWSTR, _In_ LPWSTR, _In_ PVOID);
typedef BOOL (WINAPI *LPOCNCHKPROC) (_In_ SCARDCONTEXT, _In_ SCARDHANDLE, _In_ PVOID);
typedef void (WINAPI *LPOCNDSCPROC) (_In_ SCARDCONTEXT, _In_ SCARDHANDLE, _In_ PVOID);
typedef struct {
    DWORD dwStructSize;
    LPSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPOCNCHKPROC lpfnCheck;
    LPOCNCONNPROCA lpfnConnect;
    LPOCNDSCPROC lpfnDisconnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
} OPENCARD_SEARCH_CRITERIAA, *POPENCARD_SEARCH_CRITERIAA, *LPOPENCARD_SEARCH_CRITERIAA;
typedef struct {
    DWORD dwStructSize;
    LPWSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPWSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPOCNCHKPROC lpfnCheck;
    LPOCNCONNPROCW lpfnConnect;
    LPOCNDSCPROC lpfnDisconnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
} OPENCARD_SEARCH_CRITERIAW, *POPENCARD_SEARCH_CRITERIAW, *LPOPENCARD_SEARCH_CRITERIAW;
typedef OPENCARD_SEARCH_CRITERIAW OPENCARD_SEARCH_CRITERIA;
typedef POPENCARD_SEARCH_CRITERIAW POPENCARD_SEARCH_CRITERIA;
typedef LPOPENCARD_SEARCH_CRITERIAW LPOPENCARD_SEARCH_CRITERIA;
typedef struct {
    DWORD dwStructSize;
    SCARDCONTEXT hSCardContext;
    HWND hwndOwner;
    DWORD dwFlags;
    LPCSTR lpstrTitle;
    LPCSTR lpstrSearchDesc;
    HICON hIcon;
    POPENCARD_SEARCH_CRITERIAA pOpenCardSearchCriteria;
    LPOCNCONNPROCA lpfnConnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    LPSTR lpstrRdr;
    DWORD nMaxRdr;
    LPSTR lpstrCard;
    DWORD nMaxCard;
    DWORD dwActiveProtocol;
    SCARDHANDLE hCardHandle;
} OPENCARDNAME_EXA, *POPENCARDNAME_EXA, *LPOPENCARDNAME_EXA;
typedef struct {
    DWORD dwStructSize;
    SCARDCONTEXT hSCardContext;
    HWND hwndOwner;
    DWORD dwFlags;
    LPCWSTR lpstrTitle;
    LPCWSTR lpstrSearchDesc;
    HICON hIcon;
    POPENCARD_SEARCH_CRITERIAW pOpenCardSearchCriteria;
    LPOCNCONNPROCW lpfnConnect;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    LPWSTR lpstrRdr;
    DWORD nMaxRdr;
    LPWSTR lpstrCard;
    DWORD nMaxCard;
    DWORD dwActiveProtocol;
    SCARDHANDLE hCardHandle;
} OPENCARDNAME_EXW, *POPENCARDNAME_EXW, *LPOPENCARDNAME_EXW;
typedef OPENCARDNAME_EXW OPENCARDNAME_EX;
typedef POPENCARDNAME_EXW POPENCARDNAME_EX;
typedef LPOPENCARDNAME_EXW LPOPENCARDNAME_EX;
typedef enum {
    RSR_MATCH_TYPE_READER_AND_CONTAINER = 1,
    RSR_MATCH_TYPE_SERIAL_NUMBER,
    RSR_MATCH_TYPE_ALL_CARDS
} READER_SEL_REQUEST_MATCH_TYPE;
typedef struct {
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    READER_SEL_REQUEST_MATCH_TYPE MatchType;
#pragma warning(push)
#pragma warning(disable:4201)
    union {
        struct {
            DWORD cbReaderNameOffset;
            DWORD cchReaderNameLength;
            DWORD cbContainerNameOffset;
            DWORD cchContainerNameLength;
            DWORD dwDesiredCardModuleVersion;
            DWORD dwCspFlags;
        } ReaderAndContainerParameter;
        struct {
            DWORD cbSerialNumberOffset;
            DWORD cbSerialNumberLength;
            DWORD dwDesiredCardModuleVersion;
        } SerialNumberParameter;
    } DUMMYUNIONNAME;
#pragma warning(pop)
} READER_SEL_REQUEST, *PREADER_SEL_REQUEST;
typedef struct {
    DWORD cbReaderNameOffset;
    DWORD cchReaderNameLength;
    DWORD cbCardNameOffset;
    DWORD cchCardNameLength;
} READER_SEL_RESPONSE, *PREADER_SEL_RESPONSE;
extern WINSCARDAPI LONG WINAPI
SCardUIDlgSelectCardA(
    LPOPENCARDNAMEA_EX);
extern WINSCARDAPI LONG WINAPI
SCardUIDlgSelectCardW(
    LPOPENCARDNAMEW_EX);
typedef struct {
    DWORD dwStructSize;
    HWND hwndOwner;
    SCARDCONTEXT hSCardContext;
    LPSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPSTR lpstrRdr;
    DWORD nMaxRdr;
    LPSTR lpstrCard;
    DWORD nMaxCard;
    LPCSTR lpstrTitle;
    DWORD dwFlags;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    DWORD dwActiveProtocol;
    LPOCNCONNPROCA lpfnConnect;
    LPOCNCHKPROC lpfnCheck;
    LPOCNDSCPROC lpfnDisconnect;
    SCARDHANDLE hCardHandle;
} OPENCARDNAMEA, *POPENCARDNAMEA, *LPOPENCARDNAMEA;
typedef struct {
    DWORD dwStructSize;
    HWND hwndOwner;
    SCARDCONTEXT hSCardContext;
    LPWSTR lpstrGroupNames;
    DWORD nMaxGroupNames;
    LPWSTR lpstrCardNames;
    DWORD nMaxCardNames;
    LPCGUID rgguidInterfaces;
    DWORD cguidInterfaces;
    LPWSTR lpstrRdr;
    DWORD nMaxRdr;
    LPWSTR lpstrCard;
    DWORD nMaxCard;
    LPCWSTR lpstrTitle;
    DWORD dwFlags;
    LPVOID pvUserData;
    DWORD dwShareMode;
    DWORD dwPreferredProtocols;
    DWORD dwActiveProtocol;
    LPOCNCONNPROCW lpfnConnect;
    LPOCNCHKPROC lpfnCheck;
    LPOCNDSCPROC lpfnDisconnect;
    SCARDHANDLE hCardHandle;
} OPENCARDNAMEW, *POPENCARDNAMEW, *LPOPENCARDNAMEW;
typedef OPENCARDNAMEW OPENCARDNAME;
typedef POPENCARDNAMEW POPENCARDNAME;
typedef LPOPENCARDNAMEW LPOPENCARDNAME;
extern WINSCARDAPI LONG WINAPI
GetOpenCardNameA(
    LPOPENCARDNAMEA);
extern WINSCARDAPI LONG WINAPI
GetOpenCardNameW(
    LPOPENCARDNAMEW);
extern WINSCARDAPI LONG WINAPI
SCardDlgExtendedError (void);
extern WINSCARDAPI LONG WINAPI
SCardReadCacheA(
    _In_ SCARDCONTEXT hContext,
    _In_ UUID *CardIdentifier,
    _In_ DWORD FreshnessCounter,
    _In_ LPSTR LookupName,
    _Out_writes_bytes_(*DataLen) PBYTE Data,
    _Out_ DWORD *DataLen);
extern WINSCARDAPI LONG WINAPI
SCardReadCacheW(
    _In_ SCARDCONTEXT hContext,
    _In_ UUID *CardIdentifier,
    _In_ DWORD FreshnessCounter,
    _In_ LPWSTR LookupName,
    _Out_writes_bytes_(*DataLen) PBYTE Data,
    _Out_ DWORD *DataLen);
extern WINSCARDAPI LONG WINAPI
SCardWriteCacheA(
    _In_ SCARDCONTEXT hContext,
    _In_ UUID *CardIdentifier,
    _In_ DWORD FreshnessCounter,
    _In_ LPSTR LookupName,
    _In_reads_bytes_(DataLen) PBYTE Data,
    _In_ DWORD DataLen);
extern WINSCARDAPI LONG WINAPI
SCardWriteCacheW(
    _In_ SCARDCONTEXT hContext,
    _In_ UUID *CardIdentifier,
    _In_ DWORD FreshnessCounter,
    _In_ LPWSTR LookupName,
    _In_reads_bytes_(DataLen) PBYTE Data,
    _In_ DWORD DataLen);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetReaderIconA(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCSTR szReaderName,
  _When_(_Old_(*pcbIcon) == SCARD_AUTOALLOCATE, _At_((LPBYTE *)pbIcon, _Outptr_result_bytebuffer_all_maybenull_(*pcbIcon)))
  _When_(_Old_(*pcbIcon) != SCARD_AUTOALLOCATE, _Out_writes_bytes_to_(*pcbIcon, *pcbIcon) _Post_z_)
           LPBYTE pbIcon,
  _Inout_ LPDWORD pcbIcon);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetReaderIconW(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCWSTR szReaderName,
  _When_(_Old_(*pcbIcon) == SCARD_AUTOALLOCATE, _At_((LPBYTE *)pbIcon, _Outptr_result_bytebuffer_all_maybenull_(*pcbIcon)))
  _When_(_Old_(*pcbIcon) != SCARD_AUTOALLOCATE, _Out_writes_bytes_to_(*pcbIcon, *pcbIcon) _Post_z_)
           LPBYTE pbIcon,
  _Inout_ LPDWORD pcbIcon);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetDeviceTypeIdA(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCSTR szReaderName,
  _Inout_ LPDWORD pdwDeviceTypeId);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetDeviceTypeIdW(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCWSTR szReaderName,
  _Inout_ LPDWORD pdwDeviceTypeId);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetReaderDeviceInstanceIdA(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCSTR szReaderName,
  _When_(_Old_(*pcchDeviceInstanceId) == SCARD_AUTOALLOCATE, _At_((LPSTR *)szDeviceInstanceId, _Outptr_result_buffer_maybenull_(*pcchDeviceInstanceId) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
  _When_(_Old_(*pcchDeviceInstanceId) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchDeviceInstanceId) _Post_ _NullNull_terminated_)
          LPSTR szDeviceInstanceId,
  _Inout_ LPDWORD pcchDeviceInstanceId);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardGetReaderDeviceInstanceIdW(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCWSTR szReaderName,
  _When_(_Old_(*pcchDeviceInstanceId) == SCARD_AUTOALLOCATE, _At_((LPWSTR *)szDeviceInstanceId, _Outptr_result_buffer_maybenull_(*pcchDeviceInstanceId) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
  _When_(_Old_(*pcchDeviceInstanceId) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchDeviceInstanceId) _Post_ _NullNull_terminated_)
          LPWSTR szDeviceInstanceId,
  _Inout_ LPDWORD pcchDeviceInstanceId);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardListReadersWithDeviceInstanceIdA(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCSTR szDeviceInstanceId,
  _When_(_Old_(*pcchReaders) == SCARD_AUTOALLOCATE, _At_((LPSTR *)mszReaders, _Outptr_result_buffer_maybenull_(*pcchReaders) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
  _When_(_Old_(*pcchReaders) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchReaders) _Post_ _NullNull_terminated_)
          LPSTR mszReaders,
  _Inout_ LPDWORD pcchReaders);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardListReadersWithDeviceInstanceIdW(
  _In_ SCARDCONTEXT hContext,
  _In_ LPCWSTR szDeviceInstanceId,
  _When_(_Old_(*pcchReaders) == SCARD_AUTOALLOCATE, _At_((LPWSTR *)mszReaders, _Outptr_result_buffer_maybenull_(*pcchReaders) _At_(*_Curr_, _Post_z_ _Post_ _NullNull_terminated_)))
  _When_(_Old_(*pcchReaders) != SCARD_AUTOALLOCATE, _Out_writes_opt_(*pcchReaders) _Post_ _NullNull_terminated_)
          LPWSTR mszReaders,
  _Inout_ LPDWORD pcchReaders);
_Success_(return == SCARD_S_SUCCESS)
extern WINSCARDAPI LONG WINAPI
SCardAudit(
  _In_ SCARDCONTEXT hContext,
  _In_ DWORD dwEvent);
#endif
#pragma endregion
}
