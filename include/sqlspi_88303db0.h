#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef SQLHANDLE SQLHDBC_INFO_TOKEN;
typedef SQLULEN POOLID;
typedef DWORD_PTR TRANSID;
typedef DWORD SQLConnPoolRating;
SQLRETURN SQL_SPI SQLSetConnectAttrForDbcInfoW(
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    SQLINTEGER Attribute,
    _In_reads_bytes_opt_(StringLength)
    SQLPOINTER Value,
    SQLINTEGER StringLength);
SQLRETURN SQL_SPI SQLSetDriverConnectInfoW(
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    _In_reads_(cchConnStrIn)
    SQLWCHAR *szConnStrIn,
    SQLSMALLINT cchConnStrIn);
SQLRETURN SQL_SPI SQLSetConnectInfoW
(
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    _In_reads_(cchDSN)
    SQLWCHAR *szDSN,
    SQLSMALLINT cchDSN,
    _In_reads_(cchUID)
    SQLWCHAR *szUID,
    SQLSMALLINT cchUID,
    _In_reads_(cchAuthStr)
    SQLWCHAR *szAuthStr,
    SQLSMALLINT cchAuthStr
);
SQLRETURN SQL_SPI SQLGetPoolID(
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    _Out_
    POOLID* pPoolID);
SQLRETURN SQL_SPI SQLRateConnection(
    SQLHDBC_INFO_TOKEN hRequest,
    SQLHDBC hCandidateConnection,
    BOOL fRequiresTransactionEnlistment,
    TRANSID transId,
    _Out_
    SQLConnPoolRating *pRating);
SQLRETURN SQL_SPI SQLPoolConnectW(
    SQLHDBC hdbc,
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    _Out_writes_opt_(cchConnStrOutMax)
    SQLWCHAR *szConnStrOut,
    SQLSMALLINT cchConnStrOutMax,
    _Out_opt_
    SQLSMALLINT *pcchConnStrOut);
SQLRETURN SQL_SPI SQLCleanupConnectionPoolID(
    SQLHENV EnvironmentHandle,
    POOLID poolID);
SQLRETURN SQL_SPI SQLSetConnectAttrForDbcInfoA(
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    SQLINTEGER Attribute,
    _In_reads_bytes_opt_(StringLength)
    SQLPOINTER Value,
    SQLINTEGER StringLength);
SQLRETURN SQL_SPI SQLSetDriverConnectInfoA(
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    _In_reads_(cchConnStrIn)
    SQLCHAR *szConnStrIn,
    SQLSMALLINT cchConnStrIn);
SQLRETURN SQL_SPI SQLSetConnectInfoA
(
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    _In_reads_(cchDSN)
    SQLCHAR *szDSN,
    SQLSMALLINT cchDSN,
    _In_reads_(cchUID)
    SQLCHAR *szUID,
    SQLSMALLINT cchUID,
    _In_reads_(cchAuthStr)
    SQLCHAR *szAuthStr,
    SQLSMALLINT cchAuthStr
);
SQLRETURN SQL_SPI SQLPoolConnectA(
    SQLHDBC hdbc,
    SQLHDBC_INFO_TOKEN hDbcInfoToken,
    _Out_writes_opt_(cchConnStrOutMax)
    SQLCHAR *szConnStrOut,
    SQLSMALLINT cchConnStrOutMax,
    _Out_opt_
    SQLSMALLINT *pcchConnStrOut);
}
#endif
#pragma endregion
