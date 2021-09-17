#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "sql.h"
extern "C" {
typedef SQLTCHAR SQLSTATE[SQL_SQLSTATE_SIZE+1];
#pragma deprecated(SQL_CUR_USE_IF_NEEDED,SQL_CUR_USE_ODBC)
SQLRETURN SQL_API SQLDriverConnect(
    SQLHDBC hdbc,
    SQLHWND hwnd,
    _In_reads_(cchConnStrIn)
    SQLCHAR *szConnStrIn,
    SQLSMALLINT cchConnStrIn,
    _Out_writes_opt_(cchConnStrOutMax)
    SQLCHAR *szConnStrOut,
    SQLSMALLINT cchConnStrOutMax,
    _Out_opt_
    SQLSMALLINT *pcchConnStrOut,
    SQLUSMALLINT fDriverCompletion);
"ABSOLUTE,ACTION,ADA,ADD,ALL,ALLOCATE,ALTER,AND,ANY,ARE,AS,"\
"ASC,ASSERTION,AT,AUTHORIZATION,AVG,"\
"BEGIN,BETWEEN,BIT,BIT_LENGTH,BOTH,BY,CASCADE,CASCADED,CASE,CAST,CATALOG,"\
"CHAR,CHAR_LENGTH,CHARACTER,CHARACTER_LENGTH,CHECK,CLOSE,COALESCE,"\
"COLLATE,COLLATION,COLUMN,COMMIT,CONNECT,CONNECTION,CONSTRAINT,"\
"CONSTRAINTS,CONTINUE,CONVERT,CORRESPONDING,COUNT,CREATE,CROSS,CURRENT,"\
"CURRENT_DATE,CURRENT_TIME,CURRENT_TIMESTAMP,CURRENT_USER,CURSOR,"\
"DATE,DAY,DEALLOCATE,DEC,DECIMAL,DECLARE,DEFAULT,DEFERRABLE,"\
"DEFERRED,DELETE,DESC,DESCRIBE,DESCRIPTOR,DIAGNOSTICS,DISCONNECT,"\
"DISTINCT,DOMAIN,DOUBLE,DROP,"\
"ELSE,END,END-EXEC,ESCAPE,EXCEPT,EXCEPTION,EXEC,EXECUTE,"\
"EXISTS,EXTERNAL,EXTRACT,"\
"FALSE,FETCH,FIRST,FLOAT,FOR,FOREIGN,FORTRAN,FOUND,FROM,FULL,"\
"GET,GLOBAL,GO,GOTO,GRANT,GROUP,HAVING,HOUR,"\
"IDENTITY,IMMEDIATE,IN,INCLUDE,INDEX,INDICATOR,INITIALLY,INNER,"\
"INPUT,INSENSITIVE,INSERT,INT,INTEGER,INTERSECT,INTERVAL,INTO,IS,ISOLATION,"\
"JOIN,KEY,LANGUAGE,LAST,LEADING,LEFT,LEVEL,LIKE,LOCAL,LOWER,"\
"MATCH,MAX,MIN,MINUTE,MODULE,MONTH,"\
"NAMES,NATIONAL,NATURAL,NCHAR,NEXT,NO,NONE,NOT,NULL,NULLIF,NUMERIC,"\
"OCTET_LENGTH,OF,ON,ONLY,OPEN,OPTION,OR,ORDER,OUTER,OUTPUT,OVERLAPS,"\
"PAD,PARTIAL,PASCAL,PLI,POSITION,PRECISION,PREPARE,PRESERVE,"\
"PRIMARY,PRIOR,PRIVILEGES,PROCEDURE,PUBLIC,"\
"READ,REAL,REFERENCES,RELATIVE,RESTRICT,REVOKE,RIGHT,ROLLBACK,ROWS"\
"SCHEMA,SCROLL,SECOND,SECTION,SELECT,SESSION,SESSION_USER,SET,SIZE,"\
"SMALLINT,SOME,SPACE,SQL,SQLCA,SQLCODE,SQLERROR,SQLSTATE,SQLWARNING,"\
"SUBSTRING,SUM,SYSTEM_USER,"\
"TABLE,TEMPORARY,THEN,TIME,TIMESTAMP,TIMEZONE_HOUR,TIMEZONE_MINUTE,"\
"TO,TRAILING,TRANSACTION,TRANSLATE,TRANSLATION,TRIM,TRUE,"\
"UNION,UNIQUE,UNKNOWN,UPDATE,UPPER,USAGE,USER,USING,"\
"VALUE,VALUES,VARCHAR,VARYING,VIEW,WHEN,WHENEVER,WHERE,WITH,WORK,WRITE,"\
"YEAR,ZONE"
SQLRETURN SQL_API SQLBrowseConnect(
    SQLHDBC hdbc,
    _In_reads_(cchConnStrIn)
    SQLCHAR *szConnStrIn,
    SQLSMALLINT cchConnStrIn,
    _Out_writes_opt_(cchConnStrOutMax)
    SQLCHAR *szConnStrOut,
    SQLSMALLINT cchConnStrOutMax,
    _Out_opt_
    SQLSMALLINT *pcchConnStrOut);
SQLRETURN SQL_API SQLColAttributes(
    SQLHSTMT hstmt,
    SQLUSMALLINT icol,
    SQLUSMALLINT fDescType,
    SQLPOINTER rgbDesc,
    SQLSMALLINT cbDescMax,
    SQLSMALLINT *pcbDesc,
    SQLLEN * pfDesc);
SQLRETURN SQL_API SQLColumnPrivileges(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cchTableName,
    _In_reads_opt_(cchColumnName)
    SQLCHAR *szColumnName,
    SQLSMALLINT cchColumnName);
SQLRETURN SQL_API SQLDescribeParam(
    SQLHSTMT hstmt,
    SQLUSMALLINT ipar,
    _Out_opt_
    SQLSMALLINT *pfSqlType,
    _Out_opt_
    SQLULEN *pcbParamDef,
    _Out_opt_
    SQLSMALLINT *pibScale,
    _Out_opt_
    SQLSMALLINT *pfNullable);
SQLRETURN SQL_API SQLExtendedFetch(
    SQLHSTMT hstmt,
    SQLUSMALLINT fFetchType,
    SQLLEN irow,
    _Out_opt_
    SQLULEN *pcrow,
    _Out_opt_
    SQLUSMALLINT *rgfRowStatus);
SQLRETURN SQL_API SQLForeignKeys(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchPkCatalogName)
    SQLCHAR *szPkCatalogName,
    SQLSMALLINT cchPkCatalogName,
    _In_reads_opt_(cchPkSchemaName)
    SQLCHAR *szPkSchemaName,
    SQLSMALLINT cchPkSchemaName,
    _In_reads_opt_(cchPkTableName)
    SQLCHAR *szPkTableName,
    SQLSMALLINT cchPkTableName,
    _In_reads_opt_(cchFkCatalogName)
    SQLCHAR *szFkCatalogName,
    SQLSMALLINT cchFkCatalogName,
    _In_reads_opt_(cchFkSchemaName)
    SQLCHAR *szFkSchemaName,
    SQLSMALLINT cchFkSchemaName,
    _In_reads_opt_(cchFkTableName)
    SQLCHAR *szFkTableName,
    SQLSMALLINT cchFkTableName);
SQLRETURN SQL_API SQLMoreResults(
    SQLHSTMT hstmt);
SQLRETURN SQL_API SQLNativeSql
(
    SQLHDBC hdbc,
    _In_reads_(cchSqlStrIn) SQLCHAR* szSqlStrIn,
    SQLINTEGER cchSqlStrIn,
    _Out_writes_opt_(cchSqlStrMax) SQLCHAR* szSqlStr,
    SQLINTEGER cchSqlStrMax,
    SQLINTEGER *pcbSqlStr
);
SQLRETURN SQL_API SQLNumParams(
    SQLHSTMT hstmt,
    _Out_opt_
    SQLSMALLINT *pcpar);
SQLRETURN SQL_API SQLParamOptions(
    SQLHSTMT hstmt,
    SQLULEN crow,
    SQLULEN *pirow);
SQLRETURN SQL_API SQLPrimaryKeys(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cchTableName);
SQLRETURN SQL_API SQLProcedureColumns(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchProcName)
    SQLCHAR *szProcName,
    SQLSMALLINT cchProcName,
    _In_reads_opt_(cchColumnName)
    SQLCHAR *szColumnName,
    SQLSMALLINT cchColumnName);
SQLRETURN SQL_API SQLProcedures(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchProcName)
    SQLCHAR *szProcName,
    SQLSMALLINT cchProcName);
SQLRETURN SQL_API SQLSetPos(
    SQLHSTMT hstmt,
    SQLSETPOSIROW irow,
    SQLUSMALLINT fOption,
    SQLUSMALLINT fLock);
SQLRETURN SQL_API SQLTablePrivileges(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cchTableName);
SQLRETURN SQL_API SQLDrivers(
    SQLHENV henv,
    SQLUSMALLINT fDirection,
    _Out_writes_opt_(cchDriverDescMax)
    SQLCHAR *szDriverDesc,
    SQLSMALLINT cchDriverDescMax,
    _Out_opt_
    SQLSMALLINT *pcchDriverDesc,
    _Out_writes_opt_(cchDrvrAttrMax)
    SQLCHAR *szDriverAttributes,
    SQLSMALLINT cchDrvrAttrMax,
    _Out_opt_
    SQLSMALLINT *pcchDrvrAttr);
SQLRETURN SQL_API SQLBindParameter(
    SQLHSTMT hstmt,
    SQLUSMALLINT ipar,
    SQLSMALLINT fParamType,
    SQLSMALLINT fCType,
    SQLSMALLINT fSqlType,
    SQLULEN cbColDef,
    SQLSMALLINT ibScale,
    SQLPOINTER rgbValue,
    SQLLEN cbValueMax,
    SQLLEN *pcbValue);
SQLRETURN SQL_API SQLSetScrollOptions(
    SQLHSTMT hstmt,
    SQLUSMALLINT fConcurrency,
    SQLLEN crowKeyset,
    SQLUSMALLINT crowRowset);
RETCODE SQL_API TraceOpenLogFile
(
    _In_opt_ LPWSTR szFileName,
    _Out_writes_bytes_opt_(cbOutputMsg) LPWSTR lpwszOutputMsg,
    _In_ DWORD cbOutputMsg
);
RETCODE SQL_API TraceCloseLogFile();
VOID SQL_API TraceReturn(RETCODE,RETCODE);
DWORD SQL_API TraceVersion();
#pragma deprecated(TRACE_VS_EVENT_ON)
RETCODE SQL_API TraceVSControl(DWORD);
BOOL SQL_API ODBCSetTryWaitValue(DWORD dwValue);
DWORD SQL_API ODBCGetTryWaitValue();
#pragma deprecated(ODBC_VS_FLAG_UNICODE_ARG, ODBC_VS_FLAG_UNICODE_COR, ODBC_VS_FLAG_RETCODE, ODBC_VS_FLAG_STOP, tagODBC_VS_ARGS, ODBC_VS_ARGS, PODBC_VS_ARGS)
#pragma warning( push )
#pragma warning(disable:4995)
typedef struct tagODBC_VS_ARGS {
    const GUID *pguidEvent;
    DWORD dwFlags;
    union {
        WCHAR *wszArg;
        CHAR *szArg;
    };
    union {
        WCHAR *wszCorrelation;
        CHAR *szCorrelation;
    };
    RETCODE RetCode;
} ODBC_VS_ARGS, *PODBC_VS_ARGS;
VOID SQL_API FireVSDebugEvent(PODBC_VS_ARGS);
#pragma warning( pop )
}
#include "sqlucode.h"
#endif
#pragma endregion
