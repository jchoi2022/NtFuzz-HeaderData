#include <stdarg.h>
#include <sdkddkver.h>
#include <winapifamily.h>
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
SQLITE_API SQLITE_EXTERN const char sqlite3_version[];
SQLITE_API const char *SQLITE_APICALL sqlite3_libversion(void);
SQLITE_API const char *SQLITE_APICALL sqlite3_sourceid(void);
SQLITE_API int SQLITE_APICALL sqlite3_libversion_number(void);
SQLITE_API int SQLITE_APICALL sqlite3_compileoption_used(const char *zOptName);
SQLITE_API const char *SQLITE_APICALL sqlite3_compileoption_get(int N);
SQLITE_API int SQLITE_APICALL sqlite3_threadsafe(void);
typedef struct sqlite3 sqlite3;
  typedef SQLITE_INT64_TYPE sqlite_int64;
    typedef SQLITE_UINT64_TYPE sqlite_uint64;
typedef sqlite_int64 sqlite3_int64;
typedef sqlite_uint64 sqlite3_uint64;
SQLITE_API int SQLITE_APICALL sqlite3_close(sqlite3*);
SQLITE_API int SQLITE_APICALL sqlite3_close_v2(sqlite3*);
typedef int (SQLITE_CALLBACK *sqlite3_callback)(void*,int,char**, char**);
SQLITE_API int SQLITE_APICALL sqlite3_exec(
  sqlite3*,
  const char *sql,
  int (SQLITE_CALLBACK *callback)(void*,int,char**,char**),
  void *,
  char **errmsg
);
typedef struct sqlite3_file sqlite3_file;
struct sqlite3_file {
  const struct sqlite3_io_methods *pMethods;
};
typedef struct sqlite3_io_methods sqlite3_io_methods;
struct sqlite3_io_methods {
  int iVersion;
  int (SQLITE_CALLBACK *xClose)(sqlite3_file*);
  int (SQLITE_CALLBACK *xRead)(sqlite3_file*, void*, int iAmt, sqlite3_int64 iOfst);
  int (SQLITE_CALLBACK *xWrite)(sqlite3_file*, const void*, int iAmt, sqlite3_int64 iOfst);
  int (SQLITE_CALLBACK *xTruncate)(sqlite3_file*, sqlite3_int64 size);
  int (SQLITE_CALLBACK *xSync)(sqlite3_file*, int flags);
  int (SQLITE_CALLBACK *xFileSize)(sqlite3_file*, sqlite3_int64 *pSize);
  int (SQLITE_CALLBACK *xLock)(sqlite3_file*, int);
  int (SQLITE_CALLBACK *xUnlock)(sqlite3_file*, int);
  int (SQLITE_CALLBACK *xCheckReservedLock)(sqlite3_file*, int *pResOut);
  int (SQLITE_CALLBACK *xFileControl)(sqlite3_file*, int op, void *pArg);
  int (SQLITE_CALLBACK *xSectorSize)(sqlite3_file*);
  int (SQLITE_CALLBACK *xDeviceCharacteristics)(sqlite3_file*);
  int (SQLITE_CALLBACK *xShmMap)(sqlite3_file*, int iPg, int pgsz, int, void volatile**);
  int (SQLITE_CALLBACK *xShmLock)(sqlite3_file*, int offset, int n, int flags);
  void (SQLITE_CALLBACK *xShmBarrier)(sqlite3_file*);
  int (SQLITE_CALLBACK *xShmUnmap)(sqlite3_file*, int deleteFlag);
  int (SQLITE_CALLBACK *xFetch)(sqlite3_file*, sqlite3_int64 iOfst, int iAmt, void **pp);
  int (SQLITE_CALLBACK *xUnfetch)(sqlite3_file*, sqlite3_int64 iOfst, void *p);
};
typedef struct sqlite3_mutex sqlite3_mutex;
typedef struct sqlite3_api_routines sqlite3_api_routines;
typedef struct sqlite3_vfs sqlite3_vfs;
typedef void (SQLITE_SYSAPI *sqlite3_syscall_ptr)(void);
struct sqlite3_vfs {
  int iVersion;
  int szOsFile;
  int mxPathname;
  sqlite3_vfs *pNext;
  const char *zName;
  void *pAppData;
  int (SQLITE_CALLBACK *xOpen)(sqlite3_vfs*, const char *zName, sqlite3_file*,
               int flags, int *pOutFlags);
  int (SQLITE_CALLBACK *xDelete)(sqlite3_vfs*, const char *zName, int syncDir);
  int (SQLITE_CALLBACK *xAccess)(sqlite3_vfs*, const char *zName, int flags, int *pResOut);
  int (SQLITE_CALLBACK *xFullPathname)(sqlite3_vfs*, const char *zName, int nOut, char *zOut);
  void *(SQLITE_CALLBACK *xDlOpen)(sqlite3_vfs*, const char *zFilename);
  void (SQLITE_CALLBACK *xDlError)(sqlite3_vfs*, int nByte, char *zErrMsg);
  void (SQLITE_CALLBACK *(*xDlSym)(sqlite3_vfs*,void*, const char *zSymbol))(void);
  void (SQLITE_CALLBACK *xDlClose)(sqlite3_vfs*, void*);
  int (SQLITE_CALLBACK *xRandomness)(sqlite3_vfs*, int nByte, char *zOut);
  int (SQLITE_CALLBACK *xSleep)(sqlite3_vfs*, int microseconds);
  int (SQLITE_CALLBACK *xCurrentTime)(sqlite3_vfs*, double*);
  int (SQLITE_CALLBACK *xGetLastError)(sqlite3_vfs*, int, char *);
  int (SQLITE_CALLBACK *xCurrentTimeInt64)(sqlite3_vfs*, sqlite3_int64*);
  int (SQLITE_CALLBACK *xSetSystemCall)(sqlite3_vfs*, const char *zName, sqlite3_syscall_ptr);
  sqlite3_syscall_ptr (SQLITE_CALLBACK *xGetSystemCall)(sqlite3_vfs*, const char *zName);
  const char *(SQLITE_CALLBACK *xNextSystemCall)(sqlite3_vfs*, const char *zName);
};
SQLITE_API int SQLITE_APICALL sqlite3_initialize(void);
SQLITE_API int SQLITE_APICALL sqlite3_shutdown(void);
SQLITE_API int SQLITE_APICALL sqlite3_os_init(void);
SQLITE_API int SQLITE_APICALL sqlite3_os_end(void);
SQLITE_API int SQLITE_CDECL sqlite3_config(int, ...);
SQLITE_API int SQLITE_CDECL sqlite3_db_config(sqlite3*, int op, ...);
typedef struct sqlite3_mem_methods sqlite3_mem_methods;
struct sqlite3_mem_methods {
  void *(SQLITE_CALLBACK *xMalloc)(int);
  void (SQLITE_CALLBACK *xFree)(void*);
  void *(SQLITE_CALLBACK *xRealloc)(void*,int);
  int (SQLITE_CALLBACK *xSize)(void*);
  int (SQLITE_CALLBACK *xRoundup)(int);
  int (SQLITE_CALLBACK *xInit)(void*);
  void (SQLITE_CALLBACK *xShutdown)(void*);
  void *pAppData;
};
SQLITE_API int SQLITE_APICALL sqlite3_extended_result_codes(sqlite3*, int onoff);
SQLITE_API sqlite3_int64 SQLITE_APICALL sqlite3_last_insert_rowid(sqlite3*);
SQLITE_API void SQLITE_APICALL sqlite3_set_last_insert_rowid(sqlite3*,sqlite3_int64);
SQLITE_API int SQLITE_APICALL sqlite3_changes(sqlite3*);
SQLITE_API int SQLITE_APICALL sqlite3_total_changes(sqlite3*);
SQLITE_API void SQLITE_APICALL sqlite3_interrupt(sqlite3*);
SQLITE_API int SQLITE_APICALL sqlite3_complete(const char *sql);
SQLITE_API int SQLITE_APICALL sqlite3_complete16(const void *sql);
SQLITE_API int SQLITE_APICALL sqlite3_busy_handler(sqlite3*,int(SQLITE_CALLBACK *)(void*,int),void*);
SQLITE_API int SQLITE_APICALL sqlite3_busy_timeout(sqlite3*, int ms);
SQLITE_API int SQLITE_APICALL sqlite3_get_table(
  sqlite3 *db,
  const char *zSql,
  char ***pazResult,
  int *pnRow,
  int *pnColumn,
  char **pzErrmsg
);
SQLITE_API void SQLITE_APICALL sqlite3_free_table(char **result);
SQLITE_API char *SQLITE_CDECL sqlite3_mprintf(const char*,...);
SQLITE_API char *SQLITE_APICALL sqlite3_vmprintf(const char*, va_list);
SQLITE_API char *SQLITE_CDECL sqlite3_snprintf(int,char*,const char*, ...);
SQLITE_API char *SQLITE_APICALL sqlite3_vsnprintf(int,char*,const char*, va_list);
SQLITE_API void *SQLITE_APICALL sqlite3_malloc(int);
SQLITE_API void *SQLITE_APICALL sqlite3_malloc64(sqlite3_uint64);
SQLITE_API void *SQLITE_APICALL sqlite3_realloc(void*, int);
SQLITE_API void *SQLITE_APICALL sqlite3_realloc64(void*, sqlite3_uint64);
SQLITE_API void SQLITE_APICALL sqlite3_free(void*);
SQLITE_API sqlite3_uint64 SQLITE_APICALL sqlite3_msize(void*);
SQLITE_API sqlite3_int64 SQLITE_APICALL sqlite3_memory_used(void);
SQLITE_API sqlite3_int64 SQLITE_APICALL sqlite3_memory_highwater(int resetFlag);
SQLITE_API void SQLITE_APICALL sqlite3_randomness(int N, void *P);
SQLITE_API int SQLITE_APICALL sqlite3_set_authorizer(
  sqlite3*,
  int (SQLITE_CALLBACK *xAuth)(void*,int,const char*,const char*,const char*,const char*),
  void *pUserData
);
SQLITE_API SQLITE_DEPRECATED void *SQLITE_APICALL sqlite3_trace(sqlite3*,
   void(SQLITE_CALLBACK *xTrace)(void*,const char*), void*);
SQLITE_API SQLITE_DEPRECATED void *SQLITE_APICALL sqlite3_profile(sqlite3*,
   void(SQLITE_CALLBACK *xProfile)(void*,const char*,sqlite3_uint64), void*);
SQLITE_API int SQLITE_APICALL sqlite3_trace_v2(
  sqlite3*,
  unsigned uMask,
  int(SQLITE_CALLBACK *xCallback)(unsigned,void*,void*,void*),
  void *pCtx
);
SQLITE_API void SQLITE_APICALL sqlite3_progress_handler(sqlite3*, int, int(SQLITE_CALLBACK *)(void*), void*);
SQLITE_API int SQLITE_APICALL sqlite3_open(
  const char *filename,
  sqlite3 **ppDb
);
SQLITE_API int SQLITE_APICALL sqlite3_open16(
  const void *filename,
  sqlite3 **ppDb
);
SQLITE_API int SQLITE_APICALL sqlite3_open_v2(
  const char *filename,
  sqlite3 **ppDb,
  int flags,
  const char *zVfs
);
SQLITE_API const char *SQLITE_APICALL sqlite3_uri_parameter(const char *zFilename, const char *zParam);
SQLITE_API int SQLITE_APICALL sqlite3_uri_boolean(const char *zFile, const char *zParam, int bDefault);
SQLITE_API sqlite3_int64 SQLITE_APICALL sqlite3_uri_int64(const char*, const char*, sqlite3_int64);
SQLITE_API int SQLITE_APICALL sqlite3_errcode(sqlite3 *db);
SQLITE_API int SQLITE_APICALL sqlite3_extended_errcode(sqlite3 *db);
SQLITE_API const char *SQLITE_APICALL sqlite3_errmsg(sqlite3*);
SQLITE_API const void *SQLITE_APICALL sqlite3_errmsg16(sqlite3*);
SQLITE_API const char *SQLITE_APICALL sqlite3_errstr(int);
typedef struct sqlite3_stmt sqlite3_stmt;
SQLITE_API int SQLITE_APICALL sqlite3_limit(sqlite3*, int id, int newVal);
SQLITE_API int SQLITE_APICALL sqlite3_prepare(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
SQLITE_API int SQLITE_APICALL sqlite3_prepare_v2(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
SQLITE_API int SQLITE_APICALL sqlite3_prepare_v3(
  sqlite3 *db,
  const char *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const char **pzTail
);
SQLITE_API int SQLITE_APICALL sqlite3_prepare16(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
SQLITE_API int SQLITE_APICALL sqlite3_prepare16_v2(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
SQLITE_API int SQLITE_APICALL sqlite3_prepare16_v3(
  sqlite3 *db,
  const void *zSql,
  int nByte,
  unsigned int prepFlags,
  sqlite3_stmt **ppStmt,
  const void **pzTail
);
SQLITE_API const char *SQLITE_APICALL sqlite3_sql(sqlite3_stmt *pStmt);
SQLITE_API char *SQLITE_APICALL sqlite3_expanded_sql(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_APICALL sqlite3_stmt_readonly(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_APICALL sqlite3_stmt_busy(sqlite3_stmt*);
typedef struct sqlite3_value sqlite3_value;
typedef struct sqlite3_context sqlite3_context;
SQLITE_API int SQLITE_APICALL sqlite3_bind_blob(sqlite3_stmt*, int, const void*, int n, void(SQLITE_CALLBACK *)(void*));
SQLITE_API int SQLITE_APICALL sqlite3_bind_blob64(sqlite3_stmt*, int, const void*, sqlite3_uint64,
                        void(SQLITE_CALLBACK *)(void*));
SQLITE_API int SQLITE_APICALL sqlite3_bind_double(sqlite3_stmt*, int, double);
SQLITE_API int SQLITE_APICALL sqlite3_bind_int(sqlite3_stmt*, int, int);
SQLITE_API int SQLITE_APICALL sqlite3_bind_int64(sqlite3_stmt*, int, sqlite3_int64);
SQLITE_API int SQLITE_APICALL sqlite3_bind_null(sqlite3_stmt*, int);
SQLITE_API int SQLITE_APICALL sqlite3_bind_text(sqlite3_stmt*,int,const char*,int,void(SQLITE_CALLBACK *)(void*));
SQLITE_API int SQLITE_APICALL sqlite3_bind_text16(sqlite3_stmt*, int, const void*, int, void(SQLITE_CALLBACK *)(void*));
SQLITE_API int SQLITE_APICALL sqlite3_bind_text64(sqlite3_stmt*, int, const char*, sqlite3_uint64,
                         void(SQLITE_CALLBACK *)(void*), unsigned char encoding);
SQLITE_API int SQLITE_APICALL sqlite3_bind_value(sqlite3_stmt*, int, const sqlite3_value*);
SQLITE_API int SQLITE_APICALL sqlite3_bind_pointer(sqlite3_stmt*, int, void*, const char*,void(SQLITE_CALLBACK *)(void*));
SQLITE_API int SQLITE_APICALL sqlite3_bind_zeroblob(sqlite3_stmt*, int, int n);
SQLITE_API int SQLITE_APICALL sqlite3_bind_zeroblob64(sqlite3_stmt*, int, sqlite3_uint64);
SQLITE_API int SQLITE_APICALL sqlite3_bind_parameter_count(sqlite3_stmt*);
SQLITE_API const char *SQLITE_APICALL sqlite3_bind_parameter_name(sqlite3_stmt*, int);
SQLITE_API int SQLITE_APICALL sqlite3_bind_parameter_index(sqlite3_stmt*, const char *zName);
SQLITE_API int SQLITE_APICALL sqlite3_clear_bindings(sqlite3_stmt*);
SQLITE_API int SQLITE_APICALL sqlite3_column_count(sqlite3_stmt *pStmt);
SQLITE_API const char *SQLITE_APICALL sqlite3_column_name(sqlite3_stmt*, int N);
SQLITE_API const void *SQLITE_APICALL sqlite3_column_name16(sqlite3_stmt*, int N);
SQLITE_API const char *SQLITE_APICALL sqlite3_column_database_name(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_APICALL sqlite3_column_database_name16(sqlite3_stmt*,int);
SQLITE_API const char *SQLITE_APICALL sqlite3_column_table_name(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_APICALL sqlite3_column_table_name16(sqlite3_stmt*,int);
SQLITE_API const char *SQLITE_APICALL sqlite3_column_origin_name(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_APICALL sqlite3_column_origin_name16(sqlite3_stmt*,int);
SQLITE_API const char *SQLITE_APICALL sqlite3_column_decltype(sqlite3_stmt*,int);
SQLITE_API const void *SQLITE_APICALL sqlite3_column_decltype16(sqlite3_stmt*,int);
SQLITE_API int SQLITE_APICALL sqlite3_step(sqlite3_stmt*);
SQLITE_API int SQLITE_APICALL sqlite3_data_count(sqlite3_stmt *pStmt);
SQLITE_API const void *SQLITE_APICALL sqlite3_column_blob(sqlite3_stmt*, int iCol);
SQLITE_API double SQLITE_APICALL sqlite3_column_double(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_APICALL sqlite3_column_int(sqlite3_stmt*, int iCol);
SQLITE_API sqlite3_int64 SQLITE_APICALL sqlite3_column_int64(sqlite3_stmt*, int iCol);
SQLITE_API const unsigned char *SQLITE_APICALL sqlite3_column_text(sqlite3_stmt*, int iCol);
SQLITE_API const void *SQLITE_APICALL sqlite3_column_text16(sqlite3_stmt*, int iCol);
SQLITE_API sqlite3_value *SQLITE_APICALL sqlite3_column_value(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_APICALL sqlite3_column_bytes(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_APICALL sqlite3_column_bytes16(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_APICALL sqlite3_column_type(sqlite3_stmt*, int iCol);
SQLITE_API int SQLITE_APICALL sqlite3_finalize(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_APICALL sqlite3_reset(sqlite3_stmt *pStmt);
SQLITE_API int SQLITE_APICALL sqlite3_create_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (SQLITE_CALLBACK *xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (SQLITE_CALLBACK *xStep)(sqlite3_context*,int,sqlite3_value**),
  void (SQLITE_CALLBACK *xFinal)(sqlite3_context*)
);
SQLITE_API int SQLITE_APICALL sqlite3_create_function16(
  sqlite3 *db,
  const void *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (SQLITE_CALLBACK *xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (SQLITE_CALLBACK *xStep)(sqlite3_context*,int,sqlite3_value**),
  void (SQLITE_CALLBACK *xFinal)(sqlite3_context*)
);
SQLITE_API int SQLITE_APICALL sqlite3_create_function_v2(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (SQLITE_CALLBACK *xFunc)(sqlite3_context*,int,sqlite3_value**),
  void (SQLITE_CALLBACK *xStep)(sqlite3_context*,int,sqlite3_value**),
  void (SQLITE_CALLBACK *xFinal)(sqlite3_context*),
  void(SQLITE_CALLBACK *xDestroy)(void*)
);
SQLITE_API int SQLITE_APICALL sqlite3_create_window_function(
  sqlite3 *db,
  const char *zFunctionName,
  int nArg,
  int eTextRep,
  void *pApp,
  void (SQLITE_CALLBACK *xStep)(sqlite3_context*,int,sqlite3_value**),
  void (SQLITE_CALLBACK *xFinal)(sqlite3_context*),
  void (SQLITE_CALLBACK *xValue)(sqlite3_context*),
  void (SQLITE_CALLBACK *xInverse)(sqlite3_context*,int,sqlite3_value**),
  void(SQLITE_CALLBACK *xDestroy)(void*)
);
SQLITE_API SQLITE_DEPRECATED int SQLITE_APICALL sqlite3_aggregate_count(sqlite3_context*);
SQLITE_API SQLITE_DEPRECATED int SQLITE_APICALL sqlite3_expired(sqlite3_stmt*);
SQLITE_API SQLITE_DEPRECATED int SQLITE_APICALL sqlite3_transfer_bindings(sqlite3_stmt*, sqlite3_stmt*);
SQLITE_API SQLITE_DEPRECATED int SQLITE_APICALL sqlite3_global_recover(void);
SQLITE_API SQLITE_DEPRECATED void SQLITE_APICALL sqlite3_thread_cleanup(void);
SQLITE_API SQLITE_DEPRECATED int SQLITE_APICALL sqlite3_memory_alarm(void(SQLITE_CALLBACK *)(void*,sqlite3_int64,int),
                      void*,sqlite3_int64);
SQLITE_API const void *SQLITE_APICALL sqlite3_value_blob(sqlite3_value*);
SQLITE_API double SQLITE_APICALL sqlite3_value_double(sqlite3_value*);
SQLITE_API int SQLITE_APICALL sqlite3_value_int(sqlite3_value*);
SQLITE_API sqlite3_int64 SQLITE_APICALL sqlite3_value_int64(sqlite3_value*);
SQLITE_API void *SQLITE_APICALL sqlite3_value_pointer(sqlite3_value*, const char*);
SQLITE_API const unsigned char *SQLITE_APICALL sqlite3_value_text(sqlite3_value*);
SQLITE_API const void *SQLITE_APICALL sqlite3_value_text16(sqlite3_value*);
SQLITE_API const void *SQLITE_APICALL sqlite3_value_text16le(sqlite3_value*);
SQLITE_API const void *SQLITE_APICALL sqlite3_value_text16be(sqlite3_value*);
SQLITE_API int SQLITE_APICALL sqlite3_value_bytes(sqlite3_value*);
SQLITE_API int SQLITE_APICALL sqlite3_value_bytes16(sqlite3_value*);
SQLITE_API int SQLITE_APICALL sqlite3_value_type(sqlite3_value*);
SQLITE_API int SQLITE_APICALL sqlite3_value_numeric_type(sqlite3_value*);
SQLITE_API int SQLITE_APICALL sqlite3_value_nochange(sqlite3_value*);
SQLITE_API unsigned int SQLITE_APICALL sqlite3_value_subtype(sqlite3_value*);
SQLITE_API sqlite3_value *SQLITE_APICALL sqlite3_value_dup(const sqlite3_value*);
SQLITE_API void SQLITE_APICALL sqlite3_value_free(sqlite3_value*);
SQLITE_API void *SQLITE_APICALL sqlite3_aggregate_context(sqlite3_context*, int nBytes);
SQLITE_API void *SQLITE_APICALL sqlite3_user_data(sqlite3_context*);
SQLITE_API sqlite3 *SQLITE_APICALL sqlite3_context_db_handle(sqlite3_context*);
SQLITE_API void *SQLITE_APICALL sqlite3_get_auxdata(sqlite3_context*, int N);
SQLITE_API void SQLITE_APICALL sqlite3_set_auxdata(sqlite3_context*, int N, void*, void (SQLITE_CALLBACK *)(void*));
typedef void (SQLITE_CALLBACK *sqlite3_destructor_type)(void*);
SQLITE_API void SQLITE_APICALL sqlite3_result_blob(sqlite3_context*, const void*, int, void(SQLITE_CALLBACK *)(void*));
SQLITE_API void SQLITE_APICALL sqlite3_result_blob64(sqlite3_context*,const void*,
                           sqlite3_uint64,void(SQLITE_CALLBACK *)(void*));
SQLITE_API void SQLITE_APICALL sqlite3_result_double(sqlite3_context*, double);
SQLITE_API void SQLITE_APICALL sqlite3_result_error(sqlite3_context*, const char*, int);
SQLITE_API void SQLITE_APICALL sqlite3_result_error16(sqlite3_context*, const void*, int);
SQLITE_API void SQLITE_APICALL sqlite3_result_error_toobig(sqlite3_context*);
SQLITE_API void SQLITE_APICALL sqlite3_result_error_nomem(sqlite3_context*);
SQLITE_API void SQLITE_APICALL sqlite3_result_error_code(sqlite3_context*, int);
SQLITE_API void SQLITE_APICALL sqlite3_result_int(sqlite3_context*, int);
SQLITE_API void SQLITE_APICALL sqlite3_result_int64(sqlite3_context*, sqlite3_int64);
SQLITE_API void SQLITE_APICALL sqlite3_result_null(sqlite3_context*);
SQLITE_API void SQLITE_APICALL sqlite3_result_text(sqlite3_context*, const char*, int, void(SQLITE_CALLBACK *)(void*));
SQLITE_API void SQLITE_APICALL sqlite3_result_text64(sqlite3_context*, const char*,sqlite3_uint64,
                           void(SQLITE_CALLBACK *)(void*), unsigned char encoding);
SQLITE_API void SQLITE_APICALL sqlite3_result_text16(sqlite3_context*, const void*, int, void(SQLITE_CALLBACK *)(void*));
SQLITE_API void SQLITE_APICALL sqlite3_result_text16le(sqlite3_context*, const void*, int,void(SQLITE_CALLBACK *)(void*));
SQLITE_API void SQLITE_APICALL sqlite3_result_text16be(sqlite3_context*, const void*, int,void(SQLITE_CALLBACK *)(void*));
SQLITE_API void SQLITE_APICALL sqlite3_result_value(sqlite3_context*, sqlite3_value*);
SQLITE_API void SQLITE_APICALL sqlite3_result_pointer(sqlite3_context*, void*,const char*,void(SQLITE_CALLBACK *)(void*));
SQLITE_API void SQLITE_APICALL sqlite3_result_zeroblob(sqlite3_context*, int n);
SQLITE_API int SQLITE_APICALL sqlite3_result_zeroblob64(sqlite3_context*, sqlite3_uint64 n);
SQLITE_API void SQLITE_APICALL sqlite3_result_subtype(sqlite3_context*,unsigned int);
SQLITE_API int SQLITE_APICALL sqlite3_create_collation(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(SQLITE_CALLBACK *xCompare)(void*,int,const void*,int,const void*)
);
SQLITE_API int SQLITE_APICALL sqlite3_create_collation_v2(
  sqlite3*,
  const char *zName,
  int eTextRep,
  void *pArg,
  int(SQLITE_CALLBACK *xCompare)(void*,int,const void*,int,const void*),
  void(SQLITE_CALLBACK *xDestroy)(void*)
);
SQLITE_API int SQLITE_APICALL sqlite3_create_collation16(
  sqlite3*,
  const void *zName,
  int eTextRep,
  void *pArg,
  int(SQLITE_CALLBACK *xCompare)(void*,int,const void*,int,const void*)
);
SQLITE_API int SQLITE_APICALL sqlite3_collation_needed(
  sqlite3*,
  void*,
  void(SQLITE_CALLBACK *)(void*,sqlite3*,int eTextRep,const char*)
);
SQLITE_API int SQLITE_APICALL sqlite3_collation_needed16(
  sqlite3*,
  void*,
  void(SQLITE_CALLBACK *)(void*,sqlite3*,int eTextRep,const void*)
);
SQLITE_API int SQLITE_APICALL sqlite3_key(
  sqlite3 *db,
  const void *pKey, int nKey
);
SQLITE_API int SQLITE_APICALL sqlite3_key_v2(
  sqlite3 *db,
  const char *zDbName,
  const void *pKey, int nKey
);
SQLITE_API int SQLITE_APICALL sqlite3_rekey(
  sqlite3 *db,
  const void *pKey, int nKey
);
SQLITE_API int SQLITE_APICALL sqlite3_rekey_v2(
  sqlite3 *db,
  const char *zDbName,
  const void *pKey, int nKey
);
SQLITE_API void SQLITE_APICALL sqlite3_activate_see(
  const char *zPassPhrase
);
SQLITE_API void SQLITE_APICALL sqlite3_activate_cerod(
  const char *zPassPhrase
);
SQLITE_API int SQLITE_APICALL sqlite3_sleep(int);
SQLITE_API SQLITE_EXTERN char *sqlite3_temp_directory;
SQLITE_API SQLITE_EXTERN char *sqlite3_data_directory;
SQLITE_API int SQLITE_APICALL sqlite3_win32_set_directory(
  unsigned long type,
  void *zValue
);
SQLITE_API int SQLITE_APICALL sqlite3_win32_set_directory8(unsigned long type, const char *zValue);
SQLITE_API int SQLITE_APICALL sqlite3_win32_set_directory16(unsigned long type, const void *zValue);
SQLITE_API int SQLITE_APICALL sqlite3_get_autocommit(sqlite3*);
SQLITE_API sqlite3 *SQLITE_APICALL sqlite3_db_handle(sqlite3_stmt*);
SQLITE_API const char *SQLITE_APICALL sqlite3_db_filename(sqlite3 *db, const char *zDbName);
SQLITE_API int SQLITE_APICALL sqlite3_db_readonly(sqlite3 *db, const char *zDbName);
SQLITE_API sqlite3_stmt *SQLITE_APICALL sqlite3_next_stmt(sqlite3 *pDb, sqlite3_stmt *pStmt);
SQLITE_API void *SQLITE_APICALL sqlite3_commit_hook(sqlite3*, int(SQLITE_CALLBACK *)(void*), void*);
SQLITE_API void *SQLITE_APICALL sqlite3_rollback_hook(sqlite3*, void(SQLITE_CALLBACK *)(void *), void*);
SQLITE_API void *SQLITE_APICALL sqlite3_update_hook(
  sqlite3*,
  void(SQLITE_CALLBACK *)(void *,int ,char const *,char const *,sqlite3_int64),
  void*
);
SQLITE_API int SQLITE_APICALL sqlite3_enable_shared_cache(int);
SQLITE_API int SQLITE_APICALL sqlite3_release_memory(int);
SQLITE_API int SQLITE_APICALL sqlite3_db_release_memory(sqlite3*);
SQLITE_API sqlite3_int64 SQLITE_APICALL sqlite3_soft_heap_limit64(sqlite3_int64 N);
SQLITE_API SQLITE_DEPRECATED void SQLITE_APICALL sqlite3_soft_heap_limit(int N);
SQLITE_API int SQLITE_APICALL sqlite3_table_column_metadata(
  sqlite3 *db,
  const char *zDbName,
  const char *zTableName,
  const char *zColumnName,
  char const **pzDataType,
  char const **pzCollSeq,
  int *pNotNull,
  int *pPrimaryKey,
  int *pAutoinc
);
SQLITE_API int SQLITE_APICALL sqlite3_load_extension(
  sqlite3 *db,
  const char *zFile,
  const char *zProc,
  char **pzErrMsg
);
SQLITE_API int SQLITE_APICALL sqlite3_enable_load_extension(sqlite3 *db, int onoff);
SQLITE_API int SQLITE_APICALL sqlite3_auto_extension(void(SQLITE_CALLBACK *xEntryPoint)(void));
SQLITE_API int SQLITE_APICALL sqlite3_cancel_auto_extension(void(SQLITE_CALLBACK *xEntryPoint)(void));
SQLITE_API void SQLITE_APICALL sqlite3_reset_auto_extension(void);
typedef struct sqlite3_vtab sqlite3_vtab;
typedef struct sqlite3_index_info sqlite3_index_info;
typedef struct sqlite3_vtab_cursor sqlite3_vtab_cursor;
typedef struct sqlite3_module sqlite3_module;
struct sqlite3_module {
  int iVersion;
  int (SQLITE_CALLBACK *xCreate)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (SQLITE_CALLBACK *xConnect)(sqlite3*, void *pAux,
               int argc, const char *const*argv,
               sqlite3_vtab **ppVTab, char**);
  int (SQLITE_CALLBACK *xBestIndex)(sqlite3_vtab *pVTab, sqlite3_index_info*);
  int (SQLITE_CALLBACK *xDisconnect)(sqlite3_vtab *pVTab);
  int (SQLITE_CALLBACK *xDestroy)(sqlite3_vtab *pVTab);
  int (SQLITE_CALLBACK *xOpen)(sqlite3_vtab *pVTab, sqlite3_vtab_cursor **ppCursor);
  int (SQLITE_CALLBACK *xClose)(sqlite3_vtab_cursor*);
  int (SQLITE_CALLBACK *xFilter)(sqlite3_vtab_cursor*, int idxNum, const char *idxStr,
                int argc, sqlite3_value **argv);
  int (SQLITE_CALLBACK *xNext)(sqlite3_vtab_cursor*);
  int (SQLITE_CALLBACK *xEof)(sqlite3_vtab_cursor*);
  int (SQLITE_CALLBACK *xColumn)(sqlite3_vtab_cursor*, sqlite3_context*, int);
  int (SQLITE_CALLBACK *xRowid)(sqlite3_vtab_cursor*, sqlite3_int64 *pRowid);
  int (SQLITE_CALLBACK *xUpdate)(sqlite3_vtab *, int, sqlite3_value **, sqlite3_int64 *);
  int (SQLITE_CALLBACK *xBegin)(sqlite3_vtab *pVTab);
  int (SQLITE_CALLBACK *xSync)(sqlite3_vtab *pVTab);
  int (SQLITE_CALLBACK *xCommit)(sqlite3_vtab *pVTab);
  int (SQLITE_CALLBACK *xRollback)(sqlite3_vtab *pVTab);
  int (SQLITE_CALLBACK *xFindFunction)(sqlite3_vtab *pVtab, int nArg, const char *zName,
                       void (SQLITE_CALLBACK **pxFunc)(sqlite3_context*,int,sqlite3_value**),
                       void **ppArg);
  int (SQLITE_CALLBACK *xRename)(sqlite3_vtab *pVtab, const char *zNew);
  int (SQLITE_CALLBACK *xSavepoint)(sqlite3_vtab *pVTab, int);
  int (SQLITE_CALLBACK *xRelease)(sqlite3_vtab *pVTab, int);
  int (SQLITE_CALLBACK *xRollbackTo)(sqlite3_vtab *pVTab, int);
};
struct sqlite3_index_info {
  int nConstraint;
  struct sqlite3_index_constraint {
     int iColumn;
     unsigned char op;
     unsigned char usable;
     int iTermOffset;
  } *aConstraint;
  int nOrderBy;
  struct sqlite3_index_orderby {
     int iColumn;
     unsigned char desc;
  } *aOrderBy;
  struct sqlite3_index_constraint_usage {
    int argvIndex;
    unsigned char omit;
  } *aConstraintUsage;
  int idxNum;
  char *idxStr;
  int needToFreeIdxStr;
  int orderByConsumed;
  double estimatedCost;
  sqlite3_int64 estimatedRows;
  int idxFlags;
  sqlite3_uint64 colUsed;
};
SQLITE_API int SQLITE_APICALL sqlite3_create_module(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData
);
SQLITE_API int SQLITE_APICALL sqlite3_create_module_v2(
  sqlite3 *db,
  const char *zName,
  const sqlite3_module *p,
  void *pClientData,
  void(SQLITE_CALLBACK *xDestroy)(void*)
);
struct sqlite3_vtab {
  const sqlite3_module *pModule;
  int nRef;
  char *zErrMsg;
};
struct sqlite3_vtab_cursor {
  sqlite3_vtab *pVtab;
};
SQLITE_API int SQLITE_APICALL sqlite3_declare_vtab(sqlite3*, const char *zSQL);
SQLITE_API int SQLITE_APICALL sqlite3_overload_function(sqlite3*, const char *zFuncName, int nArg);
typedef struct sqlite3_blob sqlite3_blob;
SQLITE_API int SQLITE_APICALL sqlite3_blob_open(
  sqlite3*,
  const char *zDb,
  const char *zTable,
  const char *zColumn,
  sqlite3_int64 iRow,
  int flags,
  sqlite3_blob **ppBlob
);
SQLITE_API int SQLITE_APICALL sqlite3_blob_reopen(sqlite3_blob *, sqlite3_int64);
SQLITE_API int SQLITE_APICALL sqlite3_blob_close(sqlite3_blob *);
SQLITE_API int SQLITE_APICALL sqlite3_blob_bytes(sqlite3_blob *);
SQLITE_API int SQLITE_APICALL sqlite3_blob_read(sqlite3_blob *, void *Z, int N, int iOffset);
SQLITE_API int SQLITE_APICALL sqlite3_blob_write(sqlite3_blob *, const void *z, int n, int iOffset);
SQLITE_API sqlite3_vfs *SQLITE_APICALL sqlite3_vfs_find(const char *zVfsName);
SQLITE_API int SQLITE_APICALL sqlite3_vfs_register(sqlite3_vfs*, int makeDflt);
SQLITE_API int SQLITE_APICALL sqlite3_vfs_unregister(sqlite3_vfs*);
SQLITE_API sqlite3_mutex *SQLITE_APICALL sqlite3_mutex_alloc(int);
SQLITE_API void SQLITE_APICALL sqlite3_mutex_free(sqlite3_mutex*);
SQLITE_API void SQLITE_APICALL sqlite3_mutex_enter(sqlite3_mutex*);
SQLITE_API int SQLITE_APICALL sqlite3_mutex_try(sqlite3_mutex*);
SQLITE_API void SQLITE_APICALL sqlite3_mutex_leave(sqlite3_mutex*);
typedef struct sqlite3_mutex_methods sqlite3_mutex_methods;
struct sqlite3_mutex_methods {
  int (SQLITE_CALLBACK *xMutexInit)(void);
  int (SQLITE_CALLBACK *xMutexEnd)(void);
  sqlite3_mutex *(SQLITE_CALLBACK *xMutexAlloc)(int);
  void (SQLITE_CALLBACK *xMutexFree)(sqlite3_mutex *);
  void (SQLITE_CALLBACK *xMutexEnter)(sqlite3_mutex *);
  int (SQLITE_CALLBACK *xMutexTry)(sqlite3_mutex *);
  void (SQLITE_CALLBACK *xMutexLeave)(sqlite3_mutex *);
  int (SQLITE_CALLBACK *xMutexHeld)(sqlite3_mutex *);
  int (SQLITE_CALLBACK *xMutexNotheld)(sqlite3_mutex *);
};
SQLITE_API int SQLITE_APICALL sqlite3_mutex_held(sqlite3_mutex*);
SQLITE_API int SQLITE_APICALL sqlite3_mutex_notheld(sqlite3_mutex*);
SQLITE_API sqlite3_mutex *SQLITE_APICALL sqlite3_db_mutex(sqlite3*);
SQLITE_API int SQLITE_APICALL sqlite3_file_control(sqlite3*, const char *zDbName, int op, void*);
SQLITE_API int SQLITE_CDECL sqlite3_test_control(int op, ...);
SQLITE_API int SQLITE_APICALL sqlite3_keyword_count(void);
SQLITE_API int SQLITE_APICALL sqlite3_keyword_name(int,const char**,int*);
SQLITE_API int SQLITE_APICALL sqlite3_keyword_check(const char*,int);
typedef struct sqlite3_str sqlite3_str;
SQLITE_API sqlite3_str *SQLITE_APICALL sqlite3_str_new(sqlite3*);
SQLITE_API char *SQLITE_APICALL sqlite3_str_finish(sqlite3_str*);
SQLITE_API void SQLITE_APICALL sqlite3_str_appendf(sqlite3_str*, const char *zFormat, ...);
SQLITE_API void SQLITE_APICALL sqlite3_str_vappendf(sqlite3_str*, const char *zFormat, va_list);
SQLITE_API void SQLITE_APICALL sqlite3_str_append(sqlite3_str*, const char *zIn, int N);
SQLITE_API void SQLITE_APICALL sqlite3_str_appendall(sqlite3_str*, const char *zIn);
SQLITE_API void SQLITE_APICALL sqlite3_str_appendchar(sqlite3_str*, int N, char C);
SQLITE_API void SQLITE_APICALL sqlite3_str_reset(sqlite3_str*);
SQLITE_API int SQLITE_APICALL sqlite3_str_errcode(sqlite3_str*);
SQLITE_API int SQLITE_APICALL sqlite3_str_length(sqlite3_str*);
SQLITE_API char *SQLITE_APICALL sqlite3_str_value(sqlite3_str*);
SQLITE_API int SQLITE_APICALL sqlite3_status(int op, int *pCurrent, int *pHighwater, int resetFlag);
SQLITE_API int SQLITE_APICALL sqlite3_status64(
  int op,
  sqlite3_int64 *pCurrent,
  sqlite3_int64 *pHighwater,
  int resetFlag
);
SQLITE_API int SQLITE_APICALL sqlite3_db_status(sqlite3*, int op, int *pCur, int *pHiwtr, int resetFlg);
SQLITE_API int SQLITE_APICALL sqlite3_stmt_status(sqlite3_stmt*, int op,int resetFlg);
typedef struct sqlite3_pcache sqlite3_pcache;
typedef struct sqlite3_pcache_page sqlite3_pcache_page;
struct sqlite3_pcache_page {
  void *pBuf;
  void *pExtra;
};
typedef struct sqlite3_pcache_methods2 sqlite3_pcache_methods2;
struct sqlite3_pcache_methods2 {
  int iVersion;
  void *pArg;
  int (SQLITE_CALLBACK *xInit)(void*);
  void (SQLITE_CALLBACK *xShutdown)(void*);
  sqlite3_pcache *(SQLITE_CALLBACK *xCreate)(int szPage, int szExtra, int bPurgeable);
  void (SQLITE_CALLBACK *xCachesize)(sqlite3_pcache*, int nCachesize);
  int (SQLITE_CALLBACK *xPagecount)(sqlite3_pcache*);
  sqlite3_pcache_page *(SQLITE_CALLBACK *xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (SQLITE_CALLBACK *xUnpin)(sqlite3_pcache*, sqlite3_pcache_page*, int discard);
  void (SQLITE_CALLBACK *xRekey)(sqlite3_pcache*, sqlite3_pcache_page*,
      unsigned oldKey, unsigned newKey);
  void (SQLITE_CALLBACK *xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (SQLITE_CALLBACK *xDestroy)(sqlite3_pcache*);
  void (SQLITE_CALLBACK *xShrink)(sqlite3_pcache*);
};
typedef struct sqlite3_pcache_methods sqlite3_pcache_methods;
struct sqlite3_pcache_methods {
  void *pArg;
  int (SQLITE_CALLBACK *xInit)(void*);
  void (SQLITE_CALLBACK *xShutdown)(void*);
  sqlite3_pcache *(SQLITE_CALLBACK *xCreate)(int szPage, int bPurgeable);
  void (SQLITE_CALLBACK *xCachesize)(sqlite3_pcache*, int nCachesize);
  int (SQLITE_CALLBACK *xPagecount)(sqlite3_pcache*);
  void *(SQLITE_CALLBACK *xFetch)(sqlite3_pcache*, unsigned key, int createFlag);
  void (SQLITE_CALLBACK *xUnpin)(sqlite3_pcache*, void*, int discard);
  void (SQLITE_CALLBACK *xRekey)(sqlite3_pcache*, void*, unsigned oldKey, unsigned newKey);
  void (SQLITE_CALLBACK *xTruncate)(sqlite3_pcache*, unsigned iLimit);
  void (SQLITE_CALLBACK *xDestroy)(sqlite3_pcache*);
};
typedef struct sqlite3_backup sqlite3_backup;
SQLITE_API sqlite3_backup *SQLITE_APICALL sqlite3_backup_init(
  sqlite3 *pDest,
  const char *zDestName,
  sqlite3 *pSource,
  const char *zSourceName
);
SQLITE_API int SQLITE_APICALL sqlite3_backup_step(sqlite3_backup *p, int nPage);
SQLITE_API int SQLITE_APICALL sqlite3_backup_finish(sqlite3_backup *p);
SQLITE_API int SQLITE_APICALL sqlite3_backup_remaining(sqlite3_backup *p);
SQLITE_API int SQLITE_APICALL sqlite3_backup_pagecount(sqlite3_backup *p);
SQLITE_API int SQLITE_APICALL sqlite3_unlock_notify(
  sqlite3 *pBlocked,
  void (SQLITE_CALLBACK *xNotify)(void **apArg, int nArg),
  void *pNotifyArg
);
SQLITE_API int SQLITE_APICALL sqlite3_stricmp(const char *, const char *);
SQLITE_API int SQLITE_APICALL sqlite3_strnicmp(const char *, const char *, int);
SQLITE_API int SQLITE_APICALL sqlite3_strglob(const char *zGlob, const char *zStr);
SQLITE_API int SQLITE_APICALL sqlite3_strlike(const char *zGlob, const char *zStr, unsigned int cEsc);
SQLITE_API void SQLITE_CDECL sqlite3_log(int iErrCode, const char *zFormat, ...);
SQLITE_API void *SQLITE_APICALL sqlite3_wal_hook(
  sqlite3*,
  int(SQLITE_CALLBACK *)(void *,sqlite3*,const char*,int),
  void*
);
SQLITE_API int SQLITE_APICALL sqlite3_wal_autocheckpoint(sqlite3 *db, int N);
SQLITE_API int SQLITE_APICALL sqlite3_wal_checkpoint(sqlite3 *db, const char *zDb);
SQLITE_API int SQLITE_APICALL sqlite3_wal_checkpoint_v2(
  sqlite3 *db,
  const char *zDb,
  int eMode,
  int *pnLog,
  int *pnCkpt
);
SQLITE_API int SQLITE_CDECL sqlite3_vtab_config(sqlite3*, int op, ...);
SQLITE_API int SQLITE_APICALL sqlite3_vtab_on_conflict(sqlite3 *);
SQLITE_API int SQLITE_APICALL sqlite3_vtab_nochange(sqlite3_context*);
SQLITE_API SQLITE_EXPERIMENTAL const char *SQLITE_APICALL sqlite3_vtab_collation(sqlite3_index_info*,int);
SQLITE_API int SQLITE_APICALL sqlite3_stmt_scanstatus(
  sqlite3_stmt *pStmt,
  int idx,
  int iScanStatusOp,
  void *pOut
);
SQLITE_API void SQLITE_APICALL sqlite3_stmt_scanstatus_reset(sqlite3_stmt*);
SQLITE_API int SQLITE_APICALL sqlite3_db_cacheflush(sqlite3*);
SQLITE_API int SQLITE_APICALL sqlite3_system_errno(sqlite3*);
typedef struct sqlite3_snapshot {
  unsigned char hidden[48];
} sqlite3_snapshot;
SQLITE_API SQLITE_EXPERIMENTAL int SQLITE_APICALL sqlite3_snapshot_get(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot **ppSnapshot
);
SQLITE_API SQLITE_EXPERIMENTAL int SQLITE_APICALL sqlite3_snapshot_open(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_snapshot *pSnapshot
);
SQLITE_API SQLITE_EXPERIMENTAL void SQLITE_APICALL sqlite3_snapshot_free(sqlite3_snapshot*);
SQLITE_API SQLITE_EXPERIMENTAL int SQLITE_APICALL sqlite3_snapshot_cmp(
  sqlite3_snapshot *p1,
  sqlite3_snapshot *p2
);
SQLITE_API SQLITE_EXPERIMENTAL int SQLITE_APICALL sqlite3_snapshot_recover(sqlite3 *db, const char *zDb);
SQLITE_API unsigned char *SQLITE_APICALL sqlite3_serialize(
  sqlite3 *db,
  const char *zSchema,
  sqlite3_int64 *piSize,
  unsigned int mFlags
);
SQLITE_API int SQLITE_APICALL sqlite3_deserialize(
  sqlite3 *db,
  const char *zSchema,
  unsigned char *pData,
  sqlite3_int64 szDb,
  sqlite3_int64 szBuf,
  unsigned mFlags
);
}
#endif
extern "C" {
typedef struct sqlite3_rtree_geometry sqlite3_rtree_geometry;
typedef struct sqlite3_rtree_query_info sqlite3_rtree_query_info;
  typedef sqlite3_int64 sqlite3_rtree_dbl;
SQLITE_API int SQLITE_APICALL sqlite3_rtree_geometry_callback(
  sqlite3 *db,
  const char *zGeom,
  int (SQLITE_CALLBACK *xGeom)(sqlite3_rtree_geometry*, int, sqlite3_rtree_dbl*,int*),
  void *pContext
);
struct sqlite3_rtree_geometry {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (SQLITE_CALLBACK *xDelUser)(void *);
};
SQLITE_API int SQLITE_APICALL sqlite3_rtree_query_callback(
  sqlite3 *db,
  const char *zQueryFunc,
  int (SQLITE_CALLBACK *xQueryFunc)(sqlite3_rtree_query_info*),
  void *pContext,
  void (SQLITE_CALLBACK *xDestructor)(void*)
);
struct sqlite3_rtree_query_info {
  void *pContext;
  int nParam;
  sqlite3_rtree_dbl *aParam;
  void *pUser;
  void (SQLITE_CALLBACK *xDelUser)(void*);
  sqlite3_rtree_dbl *aCoord;
  unsigned int *anQueue;
  int nCoord;
  int iLevel;
  int mxLevel;
  sqlite3_int64 iRowid;
  sqlite3_rtree_dbl rParentScore;
  int eParentWithin;
  int eWithin;
  sqlite3_rtree_dbl rScore;
  sqlite3_value **apSqlParam;
};
#pragma endregion Application Family
}
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct Fts5ExtensionApi Fts5ExtensionApi;
typedef struct Fts5Context Fts5Context;
typedef struct Fts5PhraseIter Fts5PhraseIter;
typedef void (SQLITE_CALLBACK *fts5_extension_function)(
  const Fts5ExtensionApi *pApi,
  Fts5Context *pFts,
  sqlite3_context *pCtx,
  int nVal,
  sqlite3_value **apVal
);
struct Fts5PhraseIter {
  const unsigned char *a;
  const unsigned char *b;
};
struct Fts5ExtensionApi {
  int iVersion;
  void *(SQLITE_CALLBACK *xUserData)(Fts5Context*);
  int (SQLITE_CALLBACK *xColumnCount)(Fts5Context*);
  int (SQLITE_CALLBACK *xRowCount)(Fts5Context*, sqlite3_int64 *pnRow);
  int (SQLITE_CALLBACK *xColumnTotalSize)(Fts5Context*, int iCol, sqlite3_int64 *pnToken);
  int (SQLITE_CALLBACK *xTokenize)(Fts5Context*,
    const char *pText, int nText,
    void *pCtx,
    int (SQLITE_CALLBACK *xToken)(void*, int, const char*, int, int, int)
  );
  int (SQLITE_CALLBACK *xPhraseCount)(Fts5Context*);
  int (SQLITE_CALLBACK *xPhraseSize)(Fts5Context*, int iPhrase);
  int (SQLITE_CALLBACK *xInstCount)(Fts5Context*, int *pnInst);
  int (SQLITE_CALLBACK *xInst)(Fts5Context*, int iIdx, int *piPhrase, int *piCol, int *piOff);
  sqlite3_int64 (SQLITE_CALLBACK *xRowid)(Fts5Context*);
  int (SQLITE_CALLBACK *xColumnText)(Fts5Context*, int iCol, const char **pz, int *pn);
  int (SQLITE_CALLBACK *xColumnSize)(Fts5Context*, int iCol, int *pnToken);
  int (SQLITE_CALLBACK *xQueryPhrase)(Fts5Context*, int iPhrase, void *pUserData,
    int(SQLITE_CALLBACK *)(const Fts5ExtensionApi*,Fts5Context*,void*)
  );
  int (SQLITE_CALLBACK *xSetAuxdata)(Fts5Context*, void *pAux, void(*xDelete)(void*));
  void *(SQLITE_CALLBACK *xGetAuxdata)(Fts5Context*, int bClear);
  int (SQLITE_CALLBACK *xPhraseFirst)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*, int*);
  void (SQLITE_CALLBACK *xPhraseNext)(Fts5Context*, Fts5PhraseIter*, int *piCol, int *piOff);
  int (SQLITE_CALLBACK *xPhraseFirstColumn)(Fts5Context*, int iPhrase, Fts5PhraseIter*, int*);
  void (SQLITE_CALLBACK *xPhraseNextColumn)(Fts5Context*, Fts5PhraseIter*, int *piCol);
};
typedef struct Fts5Tokenizer Fts5Tokenizer;
typedef struct fts5_tokenizer fts5_tokenizer;
struct fts5_tokenizer {
  int (SQLITE_CALLBACK *xCreate)(void*, const char **azArg, int nArg, Fts5Tokenizer **ppOut);
  void (SQLITE_CALLBACK *xDelete)(Fts5Tokenizer*);
  int (SQLITE_CALLBACK *xTokenize)(Fts5Tokenizer*,
      void *pCtx,
      int flags,
      const char *pText, int nText,
      int (SQLITE_CALLBACK *xToken)(
        void *pCtx,
        int tflags,
        const char *pToken,
        int nToken,
        int iStart,
        int iEnd
      )
  );
};
typedef struct fts5_api fts5_api;
struct fts5_api {
  int iVersion;
  int (SQLITE_CALLBACK *xCreateTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_tokenizer *pTokenizer,
    void (SQLITE_CALLBACK *xDestroy)(void*)
  );
  int (SQLITE_CALLBACK *xFindTokenizer)(
    fts5_api *pApi,
    const char *zName,
    void **ppContext,
    fts5_tokenizer *pTokenizer
  );
  int (SQLITE_CALLBACK *xCreateFunction)(
    fts5_api *pApi,
    const char *zName,
    void *pContext,
    fts5_extension_function xFunction,
    void (SQLITE_CALLBACK *xDestroy)(void*)
  );
};
#endif
#pragma endregion Application Family
}
