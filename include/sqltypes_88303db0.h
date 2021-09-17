#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef unsigned char SQLCHAR;
typedef signed char SQLSCHAR;
typedef unsigned char SQLDATE;
typedef unsigned char SQLDECIMAL;
typedef double SQLDOUBLE;
typedef double SQLFLOAT;
typedef long SQLINTEGER;
typedef unsigned long SQLUINTEGER;
typedef INT64 SQLLEN;
typedef UINT64 SQLULEN;
typedef UINT64 SQLSETPOSIROW;
typedef SQLULEN SQLROWCOUNT;
typedef SQLULEN SQLROWSETSIZE;
typedef SQLULEN SQLTRANSID;
typedef SQLLEN SQLROWOFFSET;
typedef unsigned char SQLNUMERIC;
typedef void * SQLPOINTER;
typedef float SQLREAL;
typedef short SQLSMALLINT;
typedef unsigned short SQLUSMALLINT;
typedef unsigned char SQLTIME;
typedef unsigned char SQLTIMESTAMP;
typedef unsigned char SQLVARCHAR;
typedef SQLSMALLINT SQLRETURN;
typedef void* SQLHANDLE;
typedef SQLHANDLE SQLHENV;
typedef SQLHANDLE SQLHDBC;
typedef SQLHANDLE SQLHSTMT;
typedef SQLHANDLE SQLHDESC;
typedef unsigned char UCHAR;
typedef signed char SCHAR;
typedef SCHAR SQLSCHAR;
typedef long int SDWORD;
typedef short int SWORD;
typedef unsigned long int UDWORD;
typedef unsigned short int UWORD;
typedef signed long SLONG;
typedef signed short SSHORT;
typedef unsigned long ULONG;
typedef unsigned short USHORT;
typedef double SDOUBLE;
typedef double LDOUBLE;
typedef float SFLOAT;
typedef void* PTR;
typedef void* HENV;
typedef void* HDBC;
typedef void* HSTMT;
typedef signed short RETCODE;
typedef SQLPOINTER SQLHWND;
typedef struct tagDATE_STRUCT
{
        SQLSMALLINT year;
        SQLUSMALLINT month;
        SQLUSMALLINT day;
} DATE_STRUCT;
typedef DATE_STRUCT SQL_DATE_STRUCT;
typedef struct tagTIME_STRUCT
{
        SQLUSMALLINT hour;
        SQLUSMALLINT minute;
        SQLUSMALLINT second;
} TIME_STRUCT;
typedef TIME_STRUCT SQL_TIME_STRUCT;
typedef struct tagTIMESTAMP_STRUCT
{
        SQLSMALLINT year;
        SQLUSMALLINT month;
        SQLUSMALLINT day;
        SQLUSMALLINT hour;
        SQLUSMALLINT minute;
        SQLUSMALLINT second;
        SQLUINTEGER fraction;
} TIMESTAMP_STRUCT;
typedef TIMESTAMP_STRUCT SQL_TIMESTAMP_STRUCT;
typedef enum
{
 SQL_IS_YEAR = 1,
 SQL_IS_MONTH = 2,
 SQL_IS_DAY = 3,
 SQL_IS_HOUR = 4,
 SQL_IS_MINUTE = 5,
 SQL_IS_SECOND = 6,
 SQL_IS_YEAR_TO_MONTH = 7,
 SQL_IS_DAY_TO_HOUR = 8,
 SQL_IS_DAY_TO_MINUTE = 9,
 SQL_IS_DAY_TO_SECOND = 10,
 SQL_IS_HOUR_TO_MINUTE = 11,
 SQL_IS_HOUR_TO_SECOND = 12,
 SQL_IS_MINUTE_TO_SECOND = 13
} SQLINTERVAL;
typedef struct tagSQL_YEAR_MONTH
{
  SQLUINTEGER year;
  SQLUINTEGER month;
} SQL_YEAR_MONTH_STRUCT;
typedef struct tagSQL_DAY_SECOND
{
  SQLUINTEGER day;
  SQLUINTEGER hour;
  SQLUINTEGER minute;
  SQLUINTEGER second;
  SQLUINTEGER fraction;
} SQL_DAY_SECOND_STRUCT;
typedef struct tagSQL_INTERVAL_STRUCT
{
 SQLINTERVAL interval_type;
 SQLSMALLINT interval_sign;
 union {
  SQL_YEAR_MONTH_STRUCT year_month;
  SQL_DAY_SECOND_STRUCT day_second;
 } intval;
} SQL_INTERVAL_STRUCT;
typedef ODBCINT64 SQLBIGINT;
typedef unsigned ODBCINT64 SQLUBIGINT;
typedef struct tagSQL_NUMERIC_STRUCT
{
 SQLCHAR precision;
 SQLSCHAR scale;
 SQLCHAR sign;
 SQLCHAR val[SQL_MAX_NUMERIC_LEN];
} SQL_NUMERIC_STRUCT;
typedef GUID SQLGUID;
typedef SQLULEN BOOKMARK;
typedef wchar_t SQLWCHAR;
typedef SQLWCHAR SQLTCHAR;
}
#endif
#pragma endregion
