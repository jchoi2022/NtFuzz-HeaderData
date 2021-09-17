#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef wchar_t DBCHAR;
typedef unsigned char DBBINARY;
typedef unsigned char DBTINYINT;
typedef short DBSMALLINT;
typedef unsigned short DBUSMALLINT;
typedef double DBFLT8;
typedef unsigned char DBBIT;
typedef unsigned char DBBOOL;
typedef float DBFLT4;
typedef DBFLT4 DBREAL;
typedef UINT DBUBOOL;
typedef struct dbvarychar
{
 DBSMALLINT len;
 DBCHAR str[DBMAXCHAR];
} DBVARYCHAR;
typedef struct dbvarybin
{
 DBSMALLINT len;
 BYTE array[DBMAXCHAR];
} DBVARYBIN;
typedef struct dbmoney
{
 LONG mnyhigh;
 ULONG mnylow;
} DBMONEY;
typedef struct dbdatetime
{
 LONG dtdays;
 ULONG dttime;
} DBDATETIME;
typedef struct dbdatetime4
{
 USHORT numdays;
 USHORT nummins;
} DBDATETIM4;
typedef LONG DBMONEY4;
typedef struct dbnumeric
{
 DBNUM_PREC_TYPE precision;
 DBNUM_SCALE_TYPE scale;
 BYTE sign;
 DBNUM_VAL_TYPE val[MAXNUMERICLEN];
} DBNUMERIC;
typedef DBNUMERIC DBDECIMAL;
typedef int INT;
typedef long DBINT;
typedef const LPBYTE LPCBYTE;
typedef DBINT * LPDBINT;
typedef struct sqlperf
{
 DWORD TimerResolution;
 DWORD SQLidu;
 DWORD SQLiduRows;
 DWORD SQLSelects;
 DWORD SQLSelectRows;
 DWORD Transactions;
 DWORD SQLPrepares;
 DWORD ExecDirects;
 DWORD SQLExecutes;
 DWORD CursorOpens;
 DWORD CursorSize;
 DWORD CursorUsed;
 LDOUBLE PercentCursorUsed;
 LDOUBLE AvgFetchTime;
 LDOUBLE AvgCursorSize;
 LDOUBLE AvgCursorUsed;
 DWORD SQLFetchTime;
 DWORD SQLFetchCount;
 DWORD CurrentStmtCount;
 DWORD MaxOpenStmt;
 DWORD SumOpenStmt;
 DWORD CurrentConnectionCount;
 DWORD MaxConnectionsOpened;
 DWORD SumConnectionsOpened;
 DWORD SumConnectiontime;
 LDOUBLE AvgTimeOpened;
 DWORD ServerRndTrips;
 DWORD BuffersSent;
 DWORD BuffersRec;
 DWORD BytesSent;
 DWORD BytesRec;
 DWORD msExecutionTime;
 DWORD msNetWorkServerTime;
} SQLPERF;
DBINT SQL_API bcp_batch (HDBC);
RETCODE SQL_API bcp_bind (HDBC, LPCBYTE, INT, DBINT, LPCBYTE, INT, INT, INT);
RETCODE SQL_API bcp_colfmt (HDBC, INT, BYTE, INT, DBINT, LPCBYTE, INT, INT);
RETCODE SQL_API bcp_collen (HDBC, DBINT, INT);
RETCODE SQL_API bcp_colptr (HDBC, LPCBYTE, INT);
RETCODE SQL_API bcp_columns (HDBC, INT);
RETCODE SQL_API bcp_control (HDBC, INT, void *);
DBINT SQL_API bcp_done (HDBC);
RETCODE SQL_API bcp_exec (HDBC, LPDBINT);
RETCODE SQL_API bcp_getcolfmt (HDBC, INT, INT, void *, INT, INT *);
RETCODE SQL_API bcp_initA (HDBC, LPCSTR, LPCSTR, LPCSTR, INT);
RETCODE SQL_API bcp_initW (HDBC, LPCWSTR, LPCWSTR, LPCWSTR, INT);
RETCODE SQL_API bcp_moretext (HDBC, DBINT, LPCBYTE);
RETCODE SQL_API bcp_readfmtA (HDBC, LPCSTR);
RETCODE SQL_API bcp_readfmtW (HDBC, LPCWSTR);
RETCODE SQL_API bcp_sendrow (HDBC);
RETCODE SQL_API bcp_setcolfmt (HDBC, INT, INT, void *, INT);
RETCODE SQL_API bcp_writefmtA (HDBC, LPCSTR);
RETCODE SQL_API bcp_writefmtW (HDBC, LPCWSTR);
CHAR * SQL_API dbprtypeA (INT);
WCHAR * SQL_API dbprtypeW (INT);
SQLRETURN SQL_API SQLLinkedServers (SQLHSTMT);
SQLRETURN SQL_API SQLLinkedCatalogsA (SQLHSTMT, LPCSTR, SWORD);
SQLRETURN SQL_API SQLLinkedCatalogsW (SQLHSTMT, LPCWSTR, SWORD);
HANDLE SQL_API SQLInitEnumServers(_In_ LPWSTR pwchServerName, _In_ LPWSTR pwchInstanceName);
RETCODE SQL_API SQLGetNextEnumeration (HANDLE hEnumHandle,BYTE * prgEnumData,INT * piEnumLength);
RETCODE SQL_API SQLCloseEnumServers (HANDLE hEnumHandle);
}
#endif
#pragma endregion
