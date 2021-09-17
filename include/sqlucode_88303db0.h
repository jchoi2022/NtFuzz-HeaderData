#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <sqlext.h>
SQLRETURN SQL_API SQLColAttributeW
(
    SQLHSTMT hstmt,
    SQLUSMALLINT iCol,
    SQLUSMALLINT iField,
    _Out_writes_bytes_opt_(cbDescMax)
    SQLPOINTER pCharAttr,
    SQLSMALLINT cbDescMax,
    _Out_opt_
    SQLSMALLINT *pcbCharAttr,
    _Out_opt_
    SQLLEN *pNumAttr
);
SQLRETURN SQL_API SQLColAttributesW
(
    SQLHSTMT hstmt,
    SQLUSMALLINT icol,
    SQLUSMALLINT fDescType,
    _Out_writes_bytes_opt_(cbDescMax)
    SQLPOINTER rgbDesc,
    SQLSMALLINT cbDescMax,
    _Out_opt_
    SQLSMALLINT *pcbDesc,
    _Out_opt_
    SQLLEN *pfDesc
);
SQLRETURN SQL_API SQLConnectW
(
    SQLHDBC hdbc,
    _In_reads_(cchDSN) SQLWCHAR* szDSN,
    SQLSMALLINT cchDSN,
    _In_reads_(cchUID) SQLWCHAR* szUID,
    SQLSMALLINT cchUID,
    _In_reads_(cchAuthStr) SQLWCHAR* szAuthStr,
    SQLSMALLINT cchAuthStr
);
SQLRETURN SQL_API SQLDescribeColW
(
    SQLHSTMT hstmt,
    SQLUSMALLINT icol,
    _Out_writes_opt_(cchColNameMax) SQLWCHAR* szColName,
    SQLSMALLINT cchColNameMax,
    _Out_opt_
    SQLSMALLINT* pcchColName,
    _Out_opt_
    SQLSMALLINT* pfSqlType,
    _Out_opt_
    SQLULEN* pcbColDef,
    _Out_opt_
    SQLSMALLINT* pibScale,
    _Out_opt_
    SQLSMALLINT* pfNullable
);
SQLRETURN SQL_API SQLErrorW
(
    SQLHENV henv,
    SQLHDBC hdbc,
    SQLHSTMT hstmt,
    _Out_writes_(6) SQLWCHAR* wszSqlState,
    _Out_opt_ SQLINTEGER* pfNativeError,
    _Out_writes_opt_(cchErrorMsgMax) SQLWCHAR* wszErrorMsg,
    SQLSMALLINT cchErrorMsgMax,
    _Out_opt_ SQLSMALLINT* pcchErrorMsg
);
SQLRETURN SQL_API SQLExecDirectW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(TextLength) SQLWCHAR* szSqlStr,
    SQLINTEGER TextLength
);
SQLRETURN SQL_API SQLGetConnectAttrW
(
    SQLHDBC hdbc,
    SQLINTEGER fAttribute,
    _Out_writes_opt_(_Inexpressible_(cbValueMax))
    SQLPOINTER rgbValue,
    SQLINTEGER cbValueMax,
    _Out_opt_
    SQLINTEGER* pcbValue
);
SQLRETURN SQL_API SQLGetCursorNameW
(
    SQLHSTMT hstmt,
    _Out_writes_opt_(cchCursorMax) SQLWCHAR* szCursor,
    SQLSMALLINT cchCursorMax,
    _Out_opt_
    SQLSMALLINT* pcchCursor
);
SQLRETURN SQL_API SQLPrepareW
(
    SQLHSTMT hstmt,
    _In_reads_(cchSqlStr) SQLWCHAR* szSqlStr,
    SQLINTEGER cchSqlStr
);
SQLRETURN SQL_API SQLSetConnectAttrW(
    SQLHDBC hdbc,
    SQLINTEGER fAttribute,
    _In_reads_bytes_opt_(cbValue)
    SQLPOINTER rgbValue,
    SQLINTEGER cbValue);
SQLRETURN SQL_API SQLSetCursorNameW
(
    SQLHSTMT hstmt,
    _In_reads_(cchCursor) SQLWCHAR* szCursor,
    SQLSMALLINT cchCursor
);
SQLRETURN SQL_API SQLColumnsW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName) SQLWCHAR* szTableName,
    SQLSMALLINT cchTableName,
    _In_reads_opt_(cchColumnName) SQLWCHAR* szColumnName,
    SQLSMALLINT cchColumnName
);
SQLRETURN SQL_API SQLGetConnectOptionW(
    SQLHDBC hdbc,
    SQLUSMALLINT fOption,
    SQLPOINTER pvParam);
SQLRETURN SQL_API SQLGetInfoW(
    SQLHDBC hdbc,
    SQLUSMALLINT fInfoType,
    _Out_writes_bytes_opt_(cbInfoValueMax) SQLPOINTER rgbInfoValue,
    SQLSMALLINT cbInfoValueMax,
    _Out_opt_
    SQLSMALLINT* pcbInfoValue);
SQLRETURN SQL_API SQLGetTypeInfoW(
    SQLHSTMT StatementHandle,
    SQLSMALLINT DataType);
SQLRETURN SQL_API SQLSetConnectOptionW(
    SQLHDBC hdbc,
    SQLUSMALLINT fOption,
    SQLULEN vParam);
SQLRETURN SQL_API SQLSpecialColumnsW
(
    SQLHSTMT hstmt,
    SQLUSMALLINT fColType,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName) SQLWCHAR* szTableName,
    SQLSMALLINT cchTableName,
    SQLUSMALLINT fScope,
    SQLUSMALLINT fNullable
);
SQLRETURN SQL_API SQLStatisticsW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName) SQLWCHAR* szTableName,
    SQLSMALLINT cchTableName,
    SQLUSMALLINT fUnique,
    SQLUSMALLINT fAccuracy
);
SQLRETURN SQL_API SQLTablesW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName) SQLWCHAR* szTableName,
    SQLSMALLINT cchTableName,
    _In_reads_opt_(cchTableType) SQLWCHAR* szTableType,
    SQLSMALLINT cchTableType
);
SQLRETURN SQL_API SQLDataSourcesW
(
    SQLHENV henv,
    SQLUSMALLINT fDirection,
    _Out_writes_opt_(cchDSNMax) SQLWCHAR* szDSN,
    SQLSMALLINT cchDSNMax,
    _Out_opt_
    SQLSMALLINT* pcchDSN,
    _Out_writes_opt_(cchDescriptionMax) SQLWCHAR* wszDescription,
    SQLSMALLINT cchDescriptionMax,
    _Out_opt_
    SQLSMALLINT* pcchDescription
);
SQLRETURN SQL_API SQLDriverConnectW
(
    SQLHDBC hdbc,
    SQLHWND hwnd,
    _In_reads_(cchConnStrIn) SQLWCHAR* szConnStrIn,
    SQLSMALLINT cchConnStrIn,
    _Out_writes_opt_(cchConnStrOutMax) SQLWCHAR* szConnStrOut,
    SQLSMALLINT cchConnStrOutMax,
    _Out_opt_ SQLSMALLINT* pcchConnStrOut,
    SQLUSMALLINT fDriverCompletion
);
SQLRETURN SQL_API SQLBrowseConnectW
(
    SQLHDBC hdbc,
    _In_reads_(cchConnStrIn) SQLWCHAR* szConnStrIn,
    SQLSMALLINT cchConnStrIn,
    _Out_writes_opt_(cchConnStrOutMax) SQLWCHAR* szConnStrOut,
    SQLSMALLINT cchConnStrOutMax,
    _Out_opt_
    SQLSMALLINT* pcchConnStrOut
);
SQLRETURN SQL_API SQLColumnPrivilegesW(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName) SQLWCHAR* szTableName,
    SQLSMALLINT cchTableName,
    _In_reads_opt_(cchColumnName) SQLWCHAR* szColumnName,
    SQLSMALLINT cchColumnName
);
SQLRETURN SQL_API SQLGetStmtAttrW(
    SQLHSTMT hstmt,
    SQLINTEGER fAttribute,
    SQLPOINTER rgbValue,
    SQLINTEGER cbValueMax,
    SQLINTEGER *pcbValue);
SQLRETURN SQL_API SQLSetStmtAttrW(
    SQLHSTMT hstmt,
    SQLINTEGER fAttribute,
    SQLPOINTER rgbValue,
    SQLINTEGER cbValueMax);
SQLRETURN SQL_API SQLForeignKeysW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchPkCatalogName) SQLWCHAR* szPkCatalogName,
    SQLSMALLINT cchPkCatalogName,
    _In_reads_opt_(cchPkSchemaName) SQLWCHAR* szPkSchemaName,
    SQLSMALLINT cchPkSchemaName,
    _In_reads_opt_(cchPkTableName) SQLWCHAR* szPkTableName,
    SQLSMALLINT cchPkTableName,
    _In_reads_opt_(cchFkCatalogName) SQLWCHAR* szFkCatalogName,
    SQLSMALLINT cchFkCatalogName,
    _In_reads_opt_(cchFkSchemaName) SQLWCHAR* szFkSchemaName,
    SQLSMALLINT cchFkSchemaName,
    _In_reads_opt_(cchFkTableName) SQLWCHAR* szFkTableName,
    SQLSMALLINT cchFkTableName
);
SQLRETURN SQL_API SQLNativeSqlW
(
    SQLHDBC hdbc,
    _In_reads_(cchSqlStrIn) SQLWCHAR* szSqlStrIn,
    SQLINTEGER cchSqlStrIn,
    _Out_writes_opt_(cchSqlStrMax) SQLWCHAR* szSqlStr,
    SQLINTEGER cchSqlStrMax,
    SQLINTEGER* pcchSqlStr
);
SQLRETURN SQL_API SQLPrimaryKeysW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName) SQLWCHAR* szTableName,
    SQLSMALLINT cchTableName
);
SQLRETURN SQL_API SQLProcedureColumnsW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchProcName) SQLWCHAR* szProcName,
    SQLSMALLINT cchProcName,
    _In_reads_opt_(cchColumnName) SQLWCHAR* szColumnName,
    SQLSMALLINT cchColumnName
);
SQLRETURN SQL_API SQLProceduresW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchProcName) SQLWCHAR* szProcName,
    SQLSMALLINT cchProcName
);
SQLRETURN SQL_API SQLTablePrivilegesW
(
    SQLHSTMT hstmt,
    _In_reads_opt_(cchCatalogName) SQLWCHAR* szCatalogName,
    SQLSMALLINT cchCatalogName,
    _In_reads_opt_(cchSchemaName) SQLWCHAR* szSchemaName,
    SQLSMALLINT cchSchemaName,
    _In_reads_opt_(cchTableName) SQLWCHAR* szTableName,
    SQLSMALLINT cchTableName
);
SQLRETURN SQL_API SQLDriversW
(
    SQLHENV henv,
    SQLUSMALLINT fDirection,
    _Out_writes_opt_(cchDriverDescMax) SQLWCHAR* szDriverDesc,
    SQLSMALLINT cchDriverDescMax,
    _Out_opt_
    SQLSMALLINT* pcchDriverDesc,
    _Out_writes_opt_(cchDrvrAttrMax) SQLWCHAR* szDriverAttributes,
    SQLSMALLINT cchDrvrAttrMax,
    _Out_opt_
    SQLSMALLINT* pcchDrvrAttr
);
SQLRETURN SQL_API SQLColAttributeA(
    SQLHSTMT hstmt,
    SQLSMALLINT iCol,
    SQLSMALLINT iField,
    _Out_writes_bytes_opt_(cbCharAttrMax)
    SQLPOINTER pCharAttr,
    SQLSMALLINT cbCharAttrMax,
    _Out_opt_
    SQLSMALLINT *pcbCharAttr,
    _Out_opt_
    SQLLEN *pNumAttr);
SQLRETURN SQL_API SQLColAttributesA(
    SQLHSTMT hstmt,
    SQLUSMALLINT icol,
    SQLUSMALLINT fDescType,
    _Out_writes_bytes_opt_(cbDescMax)
    SQLPOINTER rgbDesc,
    SQLSMALLINT cbDescMax,
    _Out_opt_
    SQLSMALLINT *pcbDesc,
    _Out_opt_
    SQLLEN *pfDesc);
SQLRETURN SQL_API SQLConnectA(
    SQLHDBC hdbc,
    _In_reads_(cbDSN)
    SQLCHAR *szDSN,
    SQLSMALLINT cbDSN,
    _In_reads_(cbUID)
    SQLCHAR *szUID,
    SQLSMALLINT cbUID,
    _In_reads_(cbAuthStr)
    SQLCHAR *szAuthStr,
    SQLSMALLINT cbAuthStr);
SQLRETURN SQL_API SQLDescribeColA(
    SQLHSTMT hstmt,
    SQLUSMALLINT icol,
    _Out_writes_opt_(cbColNameMax)
    SQLCHAR *szColName,
    SQLSMALLINT cbColNameMax,
    _Out_opt_
    SQLSMALLINT *pcbColName,
    _Out_opt_
    SQLSMALLINT *pfSqlType,
    _Out_opt_
    SQLULEN *pcbColDef,
    _Out_opt_
    SQLSMALLINT *pibScale,
    _Out_opt_
    SQLSMALLINT *pfNullable);
SQLRETURN SQL_API SQLErrorA(
    SQLHENV henv,
    SQLHDBC hdbc,
    SQLHSTMT hstmt,
    _Out_writes_(SQL_SQLSTATE_SIZE + 1)
    SQLCHAR *szSqlState,
    _Out_opt_
    SQLINTEGER *pfNativeError,
    _Out_writes_opt_(cbErrorMsgMax)
    SQLCHAR *szErrorMsg,
    SQLSMALLINT cbErrorMsgMax,
    _Out_opt_
    SQLSMALLINT *pcbErrorMsg);
SQLRETURN SQL_API SQLExecDirectA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbSqlStr)
    SQLCHAR *szSqlStr,
    SQLINTEGER cbSqlStr);
SQLRETURN SQL_API SQLGetConnectAttrA(
    SQLHDBC hdbc,
    SQLINTEGER fAttribute,
    _Out_writes_opt_(_Inexpressible_(cbValueMax))
    SQLPOINTER rgbValue,
    SQLINTEGER cbValueMax,
    _Out_opt_
    SQLINTEGER *pcbValue);
SQLRETURN SQL_API SQLGetCursorNameA(
    SQLHSTMT hstmt,
    _Out_writes_opt_(cbCursorMax)
    SQLCHAR *szCursor,
    SQLSMALLINT cbCursorMax,
    _Out_opt_
    SQLSMALLINT *pcbCursor);
SQLRETURN SQL_API SQLGetTypeInfoA(
    SQLHSTMT StatementHandle,
    SQLSMALLINT DataType);
SQLRETURN SQL_API SQLPrepareA(
    SQLHSTMT hstmt,
    _In_reads_(cbSqlStr)
    SQLCHAR *szSqlStr,
    SQLINTEGER cbSqlStr);
SQLRETURN SQL_API SQLSetConnectAttrA(
    SQLHDBC hdbc,
    SQLINTEGER fAttribute,
    _In_reads_bytes_opt_(cbValue)
    SQLPOINTER rgbValue,
    SQLINTEGER cbValue);
SQLRETURN SQL_API SQLSetCursorNameA(
    SQLHSTMT hstmt,
    _In_reads_(cbCursor)
    SQLCHAR *szCursor,
    SQLSMALLINT cbCursor);
SQLRETURN SQL_API SQLColumnsA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cbTableName,
    _In_reads_opt_(cbColumnName)
    SQLCHAR *szColumnName,
    SQLSMALLINT cbColumnName);
SQLRETURN SQL_API SQLGetConnectOptionA(
    SQLHDBC hdbc,
    SQLUSMALLINT fOption,
    SQLPOINTER pvParam);
SQLRETURN SQL_API SQLGetInfoA(
    SQLHDBC hdbc,
    SQLUSMALLINT fInfoType,
    _Out_writes_bytes_opt_(cbInfoValueMax)
    SQLPOINTER rgbInfoValue,
    SQLSMALLINT cbInfoValueMax,
    _Out_opt_
    SQLSMALLINT* pcbInfoValue);
SQLRETURN SQL_API SQLGetStmtOptionA(
    SQLHSTMT hstmt,
    SQLUSMALLINT fOption,
    SQLPOINTER pvParam);
SQLRETURN SQL_API SQLSetConnectOptionA(
    SQLHDBC hdbc,
    SQLUSMALLINT fOption,
    SQLULEN vParam);
SQLRETURN SQL_API SQLSetStmtOptionA(
    SQLHSTMT hstmt,
    SQLUSMALLINT fOption,
    SQLULEN vParam);
SQLRETURN SQL_API SQLSpecialColumnsA(
    SQLHSTMT hstmt,
    SQLUSMALLINT fColType,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cbTableName,
    SQLUSMALLINT fScope,
    SQLUSMALLINT fNullable);
SQLRETURN SQL_API SQLStatisticsA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cbTableName,
    SQLUSMALLINT fUnique,
    SQLUSMALLINT fAccuracy);
SQLRETURN SQL_API SQLTablesA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cbTableName,
    _In_reads_opt_(cbTableType)
    SQLCHAR *szTableType,
    SQLSMALLINT cbTableType);
SQLRETURN SQL_API SQLDataSourcesA(
    SQLHENV henv,
    SQLUSMALLINT fDirection,
    _Out_writes_opt_(cbDSNMax)
    SQLCHAR *szDSN,
    SQLSMALLINT cbDSNMax,
    SQLSMALLINT *pcbDSN,
    _Out_writes_opt_(cbDescriptionMax)
    SQLCHAR *szDescription,
    SQLSMALLINT cbDescriptionMax,
    SQLSMALLINT *pcbDescription);
SQLRETURN SQL_API SQLDriverConnectA(
    SQLHDBC hdbc,
    SQLHWND hwnd,
    _In_reads_(cbConnStrIn)
    SQLCHAR *szConnStrIn,
    SQLSMALLINT cbConnStrIn,
    _Out_writes_opt_(cbConnStrOutMax)
    SQLCHAR *szConnStrOut,
    SQLSMALLINT cbConnStrOutMax,
    _Out_opt_
    SQLSMALLINT *pcbConnStrOut,
    SQLUSMALLINT fDriverCompletion);
SQLRETURN SQL_API SQLBrowseConnectA(
    SQLHDBC hdbc,
    _In_reads_(cbConnStrIn)
    SQLCHAR *szConnStrIn,
    SQLSMALLINT cbConnStrIn,
    _Out_writes_opt_(cbConnStrOutMax)
    SQLCHAR *szConnStrOut,
    SQLSMALLINT cbConnStrOutMax,
    _Out_opt_
    SQLSMALLINT *pcbConnStrOut);
SQLRETURN SQL_API SQLColumnPrivilegesA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cbTableName,
    _In_reads_opt_(cbColumnName)
    SQLCHAR *szColumnName,
    SQLSMALLINT cbColumnName);
SQLRETURN SQL_API SQLDescribeParamA(
    SQLHSTMT hstmt,
    SQLUSMALLINT ipar,
    _Out_opt_
    SQLSMALLINT *pfSqlType,
    _Out_opt_
    SQLUINTEGER *pcbParamDef,
    _Out_opt_
    SQLSMALLINT *pibScale,
    _Out_opt_
    SQLSMALLINT *pfNullable);
SQLRETURN SQL_API SQLForeignKeysA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbPkCatalogName)
    SQLCHAR *szPkCatalogName,
    SQLSMALLINT cbPkCatalogName,
    _In_reads_opt_(cbPkSchemaName)
    SQLCHAR *szPkSchemaName,
    SQLSMALLINT cbPkSchemaName,
    _In_reads_opt_(cbPkTableName)
    SQLCHAR *szPkTableName,
    SQLSMALLINT cbPkTableName,
    _In_reads_opt_(cbFkCatalogName)
    SQLCHAR *szFkCatalogName,
    SQLSMALLINT cbFkCatalogName,
    _In_reads_opt_(cbFkSchemaName)
    SQLCHAR *szFkSchemaName,
    SQLSMALLINT cbFkSchemaName,
    _In_reads_opt_(cbFkTableName)
    SQLCHAR *szFkTableName,
    SQLSMALLINT cbFkTableName);
SQLRETURN SQL_API SQLNativeSqlA(
    SQLHDBC hdbc,
    _In_reads_(cbSqlStrIn)
    SQLCHAR *szSqlStrIn,
    SQLINTEGER cbSqlStrIn,
    _Out_writes_opt_(cbSqlStrMax)
    SQLCHAR *szSqlStr,
    SQLINTEGER cbSqlStrMax,
    SQLINTEGER *pcbSqlStr);
SQLRETURN SQL_API SQLPrimaryKeysA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cbTableName);
SQLRETURN SQL_API SQLProcedureColumnsA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbProcName)
    SQLCHAR *szProcName,
    SQLSMALLINT cbProcName,
    _In_reads_opt_(cbColumnName)
    SQLCHAR *szColumnName,
    SQLSMALLINT cbColumnName);
SQLRETURN SQL_API SQLProceduresA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbProcName)
    SQLCHAR *szProcName,
    SQLSMALLINT cbProcName);
SQLRETURN SQL_API SQLTablePrivilegesA(
    SQLHSTMT hstmt,
    _In_reads_opt_(cbCatalogName)
    SQLCHAR *szCatalogName,
    SQLSMALLINT cbCatalogName,
    _In_reads_opt_(cbSchemaName)
    SQLCHAR *szSchemaName,
    SQLSMALLINT cbSchemaName,
    _In_reads_opt_(cbTableName)
    SQLCHAR *szTableName,
    SQLSMALLINT cbTableName);
SQLRETURN SQL_API SQLDriversA(
    SQLHENV henv,
    SQLUSMALLINT fDirection,
    _Out_writes_opt_(cbDriverDescMax)
    SQLCHAR *szDriverDesc,
    SQLSMALLINT cbDriverDescMax,
    _Out_opt_
    SQLSMALLINT *pcbDriverDesc,
    _Out_writes_opt_(cbDrvrAttrMax)
    SQLCHAR *szDriverAttributes,
    SQLSMALLINT cbDrvrAttrMax,
    _Out_opt_
    SQLSMALLINT *pcbDrvrAttr);
}
#endif
#pragma endregion
