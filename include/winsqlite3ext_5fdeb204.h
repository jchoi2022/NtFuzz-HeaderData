#include "winsqlite3.h"
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
struct sqlite3_api_routines {
  void * (SQLITE_APICALL *aggregate_context)(sqlite3_context*,int nBytes);
  int (SQLITE_APICALL *aggregate_count)(sqlite3_context*);
  int (SQLITE_APICALL *bind_blob)(sqlite3_stmt*,int,const void*,int n,void(SQLITE_CALLBACK *)(void*));
  int (SQLITE_APICALL *bind_double)(sqlite3_stmt*,int,double);
  int (SQLITE_APICALL *bind_int)(sqlite3_stmt*,int,int);
  int (SQLITE_APICALL *bind_int64)(sqlite3_stmt*,int,sqlite_int64);
  int (SQLITE_APICALL *bind_null)(sqlite3_stmt*,int);
  int (SQLITE_APICALL *bind_parameter_count)(sqlite3_stmt*);
  int (SQLITE_APICALL *bind_parameter_index)(sqlite3_stmt*,const char*zName);
  const char * (SQLITE_APICALL *bind_parameter_name)(sqlite3_stmt*,int);
  int (SQLITE_APICALL *bind_text)(sqlite3_stmt*,int,const char*,int n,void(SQLITE_CALLBACK *)(void*));
  int (SQLITE_APICALL *bind_text16)(sqlite3_stmt*,int,const void*,int,void(SQLITE_CALLBACK *)(void*));
  int (SQLITE_APICALL *bind_value)(sqlite3_stmt*,int,const sqlite3_value*);
  int (SQLITE_APICALL *busy_handler)(sqlite3*,int(SQLITE_CALLBACK *)(void*,int),void*);
  int (SQLITE_APICALL *busy_timeout)(sqlite3*,int ms);
  int (SQLITE_APICALL *changes)(sqlite3*);
  int (SQLITE_APICALL *close)(sqlite3*);
  int (SQLITE_APICALL *collation_needed)(sqlite3*,void*,void(SQLITE_CALLBACK *)(void*,sqlite3*,
                           int eTextRep,const char*));
  int (SQLITE_APICALL *collation_needed16)(sqlite3*,void*,void(SQLITE_CALLBACK *)(void*,sqlite3*,
                             int eTextRep,const void*));
  const void * (SQLITE_APICALL *column_blob)(sqlite3_stmt*,int iCol);
  int (SQLITE_APICALL *column_bytes)(sqlite3_stmt*,int iCol);
  int (SQLITE_APICALL *column_bytes16)(sqlite3_stmt*,int iCol);
  int (SQLITE_APICALL *column_count)(sqlite3_stmt*pStmt);
  const char * (SQLITE_APICALL *column_database_name)(sqlite3_stmt*,int);
  const void * (SQLITE_APICALL *column_database_name16)(sqlite3_stmt*,int);
  const char * (SQLITE_APICALL *column_decltype)(sqlite3_stmt*,int i);
  const void * (SQLITE_APICALL *column_decltype16)(sqlite3_stmt*,int);
  double (SQLITE_APICALL *column_double)(sqlite3_stmt*,int iCol);
  int (SQLITE_APICALL *column_int)(sqlite3_stmt*,int iCol);
  sqlite_int64 (SQLITE_APICALL *column_int64)(sqlite3_stmt*,int iCol);
  const char * (SQLITE_APICALL *column_name)(sqlite3_stmt*,int);
  const void * (SQLITE_APICALL *column_name16)(sqlite3_stmt*,int);
  const char * (SQLITE_APICALL *column_origin_name)(sqlite3_stmt*,int);
  const void * (SQLITE_APICALL *column_origin_name16)(sqlite3_stmt*,int);
  const char * (SQLITE_APICALL *column_table_name)(sqlite3_stmt*,int);
  const void * (SQLITE_APICALL *column_table_name16)(sqlite3_stmt*,int);
  const unsigned char * (SQLITE_APICALL *column_text)(sqlite3_stmt*,int iCol);
  const void * (SQLITE_APICALL *column_text16)(sqlite3_stmt*,int iCol);
  int (SQLITE_APICALL *column_type)(sqlite3_stmt*,int iCol);
  sqlite3_value* (SQLITE_APICALL *column_value)(sqlite3_stmt*,int iCol);
  void * (SQLITE_APICALL *commit_hook)(sqlite3*,int(SQLITE_CALLBACK *)(void*),void*);
  int (SQLITE_APICALL *complete)(const char*sql);
  int (SQLITE_APICALL *complete16)(const void*sql);
  int (SQLITE_APICALL *create_collation)(sqlite3*,const char*,int,void*,
                           int(SQLITE_CALLBACK *)(void*,int,const void*,int,const void*));
  int (SQLITE_APICALL *create_collation16)(sqlite3*,const void*,int,void*,
                             int(SQLITE_CALLBACK *)(void*,int,const void*,int,const void*));
  int (SQLITE_APICALL *create_function)(sqlite3*,const char*,int,int,void*,
                          void (SQLITE_APICALL *xFunc)(sqlite3_context*,int,sqlite3_value**),
                          void (SQLITE_APICALL *xStep)(sqlite3_context*,int,sqlite3_value**),
                          void (SQLITE_APICALL *xFinal)(sqlite3_context*));
  int (SQLITE_APICALL *create_function16)(sqlite3*,const void*,int,int,void*,
                            void (SQLITE_APICALL *xFunc)(sqlite3_context*,int,sqlite3_value**),
                            void (SQLITE_APICALL *xStep)(sqlite3_context*,int,sqlite3_value**),
                            void (SQLITE_APICALL *xFinal)(sqlite3_context*));
  int (SQLITE_APICALL *create_module)(sqlite3*,const char*,const sqlite3_module*,void*);
  int (SQLITE_APICALL *data_count)(sqlite3_stmt*pStmt);
  sqlite3 * (SQLITE_APICALL *db_handle)(sqlite3_stmt*);
  int (SQLITE_APICALL *declare_vtab)(sqlite3*,const char*);
  int (SQLITE_APICALL *enable_shared_cache)(int);
  int (SQLITE_APICALL *errcode)(sqlite3*db);
  const char * (SQLITE_APICALL *errmsg)(sqlite3*);
  const void * (SQLITE_APICALL *errmsg16)(sqlite3*);
  int (SQLITE_APICALL *exec)(sqlite3*,const char*,sqlite3_callback,void*,char**);
  int (SQLITE_APICALL *expired)(sqlite3_stmt*);
  int (SQLITE_APICALL *finalize)(sqlite3_stmt*pStmt);
  void (SQLITE_APICALL *free)(void*);
  void (SQLITE_APICALL *free_table)(char**result);
  int (SQLITE_APICALL *get_autocommit)(sqlite3*);
  void * (SQLITE_APICALL *get_auxdata)(sqlite3_context*,int);
  int (SQLITE_APICALL *get_table)(sqlite3*,const char*,char***,int*,int*,char**);
  int (SQLITE_APICALL *global_recover)(void);
  void (SQLITE_APICALL *interruptx)(sqlite3*);
  sqlite_int64 (SQLITE_APICALL *last_insert_rowid)(sqlite3*);
  const char * (SQLITE_APICALL *libversion)(void);
  int (SQLITE_APICALL *libversion_number)(void);
  void *(SQLITE_APICALL *malloc)(int);
  char * (SQLITE_APICALL *mprintf)(const char*,...);
  int (SQLITE_APICALL *open)(const char*,sqlite3**);
  int (SQLITE_APICALL *open16)(const void*,sqlite3**);
  int (SQLITE_APICALL *prepare)(sqlite3*,const char*,int,sqlite3_stmt**,const char**);
  int (SQLITE_APICALL *prepare16)(sqlite3*,const void*,int,sqlite3_stmt**,const void**);
  void * (SQLITE_APICALL *profile)(sqlite3*,void(SQLITE_CALLBACK *)(void*,const char*,sqlite_uint64),void*);
  void (SQLITE_APICALL *progress_handler)(sqlite3*,int,int(SQLITE_CALLBACK *)(void*),void*);
  void *(SQLITE_APICALL *realloc)(void*,int);
  int (SQLITE_APICALL *reset)(sqlite3_stmt*pStmt);
  void (SQLITE_APICALL *result_blob)(sqlite3_context*,const void*,int,void(SQLITE_CALLBACK *)(void*));
  void (SQLITE_APICALL *result_double)(sqlite3_context*,double);
  void (SQLITE_APICALL *result_error)(sqlite3_context*,const char*,int);
  void (SQLITE_APICALL *result_error16)(sqlite3_context*,const void*,int);
  void (SQLITE_APICALL *result_int)(sqlite3_context*,int);
  void (SQLITE_APICALL *result_int64)(sqlite3_context*,sqlite_int64);
  void (SQLITE_APICALL *result_null)(sqlite3_context*);
  void (SQLITE_APICALL *result_text)(sqlite3_context*,const char*,int,void(SQLITE_CALLBACK *)(void*));
  void (SQLITE_APICALL *result_text16)(sqlite3_context*,const void*,int,void(SQLITE_CALLBACK *)(void*));
  void (SQLITE_APICALL *result_text16be)(sqlite3_context*,const void*,int,void(SQLITE_CALLBACK *)(void*));
  void (SQLITE_APICALL *result_text16le)(sqlite3_context*,const void*,int,void(SQLITE_CALLBACK *)(void*));
  void (SQLITE_APICALL *result_value)(sqlite3_context*,sqlite3_value*);
  void * (SQLITE_APICALL *rollback_hook)(sqlite3*,void(SQLITE_CALLBACK *)(void*),void*);
  int (SQLITE_APICALL *set_authorizer)(sqlite3*,int(SQLITE_CALLBACK *)(void*,int,const char*,const char*,
                         const char*,const char*),void*);
  void (SQLITE_APICALL *set_auxdata)(sqlite3_context*,int,void*,void (SQLITE_CALLBACK *)(void*));
  char * (SQLITE_APICALL *xsnprintf)(int,char*,const char*,...);
  int (SQLITE_APICALL *step)(sqlite3_stmt*);
  int (SQLITE_APICALL *table_column_metadata)(sqlite3*,const char*,const char*,const char*,
                                char const**,char const**,int*,int*,int*);
  void (SQLITE_APICALL *thread_cleanup)(void);
  int (SQLITE_APICALL *total_changes)(sqlite3*);
  void * (SQLITE_APICALL *trace)(sqlite3*,void(SQLITE_APICALL *xTrace)(void*,const char*),void*);
  int (SQLITE_APICALL *transfer_bindings)(sqlite3_stmt*,sqlite3_stmt*);
  void * (SQLITE_APICALL *update_hook)(sqlite3*,void(SQLITE_CALLBACK *)(void*,int ,char const*,char const*,
                                         sqlite_int64),void*);
  void * (SQLITE_APICALL *user_data)(sqlite3_context*);
  const void * (SQLITE_APICALL *value_blob)(sqlite3_value*);
  int (SQLITE_APICALL *value_bytes)(sqlite3_value*);
  int (SQLITE_APICALL *value_bytes16)(sqlite3_value*);
  double (SQLITE_APICALL *value_double)(sqlite3_value*);
  int (SQLITE_APICALL *value_int)(sqlite3_value*);
  sqlite_int64 (SQLITE_APICALL *value_int64)(sqlite3_value*);
  int (SQLITE_APICALL *value_numeric_type)(sqlite3_value*);
  const unsigned char * (SQLITE_APICALL *value_text)(sqlite3_value*);
  const void * (SQLITE_APICALL *value_text16)(sqlite3_value*);
  const void * (SQLITE_APICALL *value_text16be)(sqlite3_value*);
  const void * (SQLITE_APICALL *value_text16le)(sqlite3_value*);
  int (SQLITE_APICALL *value_type)(sqlite3_value*);
  char *(SQLITE_APICALL *vmprintf)(const char*,va_list);
  int (SQLITE_APICALL *overload_function)(sqlite3*, const char *zFuncName, int nArg);
  int (SQLITE_APICALL *prepare_v2)(sqlite3*,const char*,int,sqlite3_stmt**,const char**);
  int (SQLITE_APICALL *prepare16_v2)(sqlite3*,const void*,int,sqlite3_stmt**,const void**);
  int (SQLITE_APICALL *clear_bindings)(sqlite3_stmt*);
  int (SQLITE_APICALL *create_module_v2)(sqlite3*,const char*,const sqlite3_module*,void*,
                          void (SQLITE_APICALL *xDestroy)(void *));
  int (SQLITE_APICALL *bind_zeroblob)(sqlite3_stmt*,int,int);
  int (SQLITE_APICALL *blob_bytes)(sqlite3_blob*);
  int (SQLITE_APICALL *blob_close)(sqlite3_blob*);
  int (SQLITE_APICALL *blob_open)(sqlite3*,const char*,const char*,const char*,sqlite3_int64,
                   int,sqlite3_blob**);
  int (SQLITE_APICALL *blob_read)(sqlite3_blob*,void*,int,int);
  int (SQLITE_APICALL *blob_write)(sqlite3_blob*,const void*,int,int);
  int (SQLITE_APICALL *create_collation_v2)(sqlite3*,const char*,int,void*,
                             int(SQLITE_CALLBACK *)(void*,int,const void*,int,const void*),
                             void(SQLITE_CALLBACK *)(void*));
  int (SQLITE_APICALL *file_control)(sqlite3*,const char*,int,void*);
  sqlite3_int64 (SQLITE_APICALL *memory_highwater)(int);
  sqlite3_int64 (SQLITE_APICALL *memory_used)(void);
  sqlite3_mutex *(SQLITE_APICALL *mutex_alloc)(int);
  void (SQLITE_APICALL *mutex_enter)(sqlite3_mutex*);
  void (SQLITE_APICALL *mutex_free)(sqlite3_mutex*);
  void (SQLITE_APICALL *mutex_leave)(sqlite3_mutex*);
  int (SQLITE_APICALL *mutex_try)(sqlite3_mutex*);
  int (SQLITE_APICALL *open_v2)(const char*,sqlite3**,int,const char*);
  int (SQLITE_APICALL *release_memory)(int);
  void (SQLITE_APICALL *result_error_nomem)(sqlite3_context*);
  void (SQLITE_APICALL *result_error_toobig)(sqlite3_context*);
  int (SQLITE_APICALL *sleep)(int);
  void (SQLITE_APICALL *soft_heap_limit)(int);
  sqlite3_vfs *(SQLITE_APICALL *vfs_find)(const char*);
  int (SQLITE_APICALL *vfs_register)(sqlite3_vfs*,int);
  int (SQLITE_APICALL *vfs_unregister)(sqlite3_vfs*);
  int (SQLITE_APICALL *xthreadsafe)(void);
  void (SQLITE_APICALL *result_zeroblob)(sqlite3_context*,int);
  void (SQLITE_APICALL *result_error_code)(sqlite3_context*,int);
  int (SQLITE_APICALL *test_control)(int, ...);
  void (SQLITE_APICALL *randomness)(int,void*);
  sqlite3 *(SQLITE_APICALL *context_db_handle)(sqlite3_context*);
  int (SQLITE_APICALL *extended_result_codes)(sqlite3*,int);
  int (SQLITE_APICALL *limit)(sqlite3*,int,int);
  sqlite3_stmt *(SQLITE_APICALL *next_stmt)(sqlite3*,sqlite3_stmt*);
  const char *(SQLITE_APICALL *sql)(sqlite3_stmt*);
  int (SQLITE_APICALL *status)(int,int*,int*,int);
  int (SQLITE_APICALL *backup_finish)(sqlite3_backup*);
  sqlite3_backup *(SQLITE_APICALL *backup_init)(sqlite3*,const char*,sqlite3*,const char*);
  int (SQLITE_APICALL *backup_pagecount)(sqlite3_backup*);
  int (SQLITE_APICALL *backup_remaining)(sqlite3_backup*);
  int (SQLITE_APICALL *backup_step)(sqlite3_backup*,int);
  const char *(SQLITE_APICALL *compileoption_get)(int);
  int (SQLITE_APICALL *compileoption_used)(const char*);
  int (SQLITE_APICALL *create_function_v2)(sqlite3*,const char*,int,int,void*,
                            void (SQLITE_APICALL *xFunc)(sqlite3_context*,int,sqlite3_value**),
                            void (SQLITE_APICALL *xStep)(sqlite3_context*,int,sqlite3_value**),
                            void (SQLITE_APICALL *xFinal)(sqlite3_context*),
                            void(SQLITE_APICALL *xDestroy)(void*));
  int (SQLITE_APICALL *db_config)(sqlite3*,int,...);
  sqlite3_mutex *(SQLITE_APICALL *db_mutex)(sqlite3*);
  int (SQLITE_APICALL *db_status)(sqlite3*,int,int*,int*,int);
  int (SQLITE_APICALL *extended_errcode)(sqlite3*);
  void (SQLITE_APICALL *log)(int,const char*,...);
  sqlite3_int64 (SQLITE_APICALL *soft_heap_limit64)(sqlite3_int64);
  const char *(SQLITE_APICALL *sourceid)(void);
  int (SQLITE_APICALL *stmt_status)(sqlite3_stmt*,int,int);
  int (SQLITE_APICALL *strnicmp)(const char*,const char*,int);
  int (SQLITE_APICALL *unlock_notify)(sqlite3*,void(SQLITE_CALLBACK *)(void**,int),void*);
  int (SQLITE_APICALL *wal_autocheckpoint)(sqlite3*,int);
  int (SQLITE_APICALL *wal_checkpoint)(sqlite3*,const char*);
  void *(SQLITE_APICALL *wal_hook)(sqlite3*,int(SQLITE_CALLBACK *)(void*,sqlite3*,const char*,int),void*);
  int (SQLITE_APICALL *blob_reopen)(sqlite3_blob*,sqlite3_int64);
  int (SQLITE_APICALL *vtab_config)(sqlite3*,int op,...);
  int (SQLITE_APICALL *vtab_on_conflict)(sqlite3*);
  int (SQLITE_APICALL *close_v2)(sqlite3*);
  const char *(SQLITE_APICALL *db_filename)(sqlite3*,const char*);
  int (SQLITE_APICALL *db_readonly)(sqlite3*,const char*);
  int (SQLITE_APICALL *db_release_memory)(sqlite3*);
  const char *(SQLITE_APICALL *errstr)(int);
  int (SQLITE_APICALL *stmt_busy)(sqlite3_stmt*);
  int (SQLITE_APICALL *stmt_readonly)(sqlite3_stmt*);
  int (SQLITE_APICALL *stricmp)(const char*,const char*);
  int (SQLITE_APICALL *uri_boolean)(const char*,const char*,int);
  sqlite3_int64 (SQLITE_APICALL *uri_int64)(const char*,const char*,sqlite3_int64);
  const char *(SQLITE_APICALL *uri_parameter)(const char*,const char*);
  char *(SQLITE_APICALL *xvsnprintf)(int,char*,const char*,va_list);
  int (SQLITE_APICALL *wal_checkpoint_v2)(sqlite3*,const char*,int,int*,int*);
  int (SQLITE_APICALL *auto_extension)(void(SQLITE_CALLBACK *)(void));
  int (SQLITE_APICALL *bind_blob64)(sqlite3_stmt*,int,const void*,sqlite3_uint64,
                     void(SQLITE_CALLBACK *)(void*));
  int (SQLITE_APICALL *bind_text64)(sqlite3_stmt*,int,const char*,sqlite3_uint64,
                      void(SQLITE_CALLBACK *)(void*),unsigned char);
  int (SQLITE_APICALL *cancel_auto_extension)(void(SQLITE_CALLBACK *)(void));
  int (SQLITE_APICALL *load_extension)(sqlite3*,const char*,const char*,char**);
  void *(SQLITE_APICALL *malloc64)(sqlite3_uint64);
  sqlite3_uint64 (SQLITE_APICALL *msize)(void*);
  void *(SQLITE_APICALL *realloc64)(void*,sqlite3_uint64);
  void (SQLITE_APICALL *reset_auto_extension)(void);
  void (SQLITE_APICALL *result_blob64)(sqlite3_context*,const void*,sqlite3_uint64,
                        void(SQLITE_CALLBACK *)(void*));
  void (SQLITE_APICALL *result_text64)(sqlite3_context*,const char*,sqlite3_uint64,
                         void(SQLITE_CALLBACK *)(void*), unsigned char);
  int (SQLITE_APICALL *strglob)(const char*,const char*);
  sqlite3_value *(SQLITE_APICALL *value_dup)(const sqlite3_value*);
  void (SQLITE_APICALL *value_free)(sqlite3_value*);
  int (SQLITE_APICALL *result_zeroblob64)(sqlite3_context*,sqlite3_uint64);
  int (SQLITE_APICALL *bind_zeroblob64)(sqlite3_stmt*, int, sqlite3_uint64);
  unsigned int (SQLITE_APICALL *value_subtype)(sqlite3_value*);
  void (SQLITE_APICALL *result_subtype)(sqlite3_context*,unsigned int);
  int (SQLITE_APICALL *status64)(int,sqlite3_int64*,sqlite3_int64*,int);
  int (SQLITE_APICALL *strlike)(const char*,const char*,unsigned int);
  int (SQLITE_APICALL *db_cacheflush)(sqlite3*);
  int (SQLITE_APICALL *system_errno)(sqlite3*);
  int (SQLITE_APICALL *trace_v2)(sqlite3*,unsigned,int(SQLITE_CALLBACK *)(unsigned,void*,void*,void*),void*);
  char *(SQLITE_APICALL *expanded_sql)(sqlite3_stmt*);
  void (SQLITE_APICALL *set_last_insert_rowid)(sqlite3*,sqlite3_int64);
  int (SQLITE_APICALL *prepare_v3)(sqlite3*,const char*,int,unsigned int,
                    sqlite3_stmt**,const char**);
  int (SQLITE_APICALL *prepare16_v3)(sqlite3*,const void*,int,unsigned int,
                      sqlite3_stmt**,const void**);
  int (SQLITE_APICALL *bind_pointer)(sqlite3_stmt*,int,void*,const char*,void(SQLITE_CALLBACK *)(void*));
  void (SQLITE_APICALL *result_pointer)(sqlite3_context*,void*,const char*,void(SQLITE_CALLBACK *)(void*));
  void *(SQLITE_APICALL *value_pointer)(sqlite3_value*,const char*);
  int (SQLITE_APICALL *vtab_nochange)(sqlite3_context*);
  int (SQLITE_APICALL *value_nochange)(sqlite3_value*);
  const char *(SQLITE_APICALL *vtab_collation)(sqlite3_index_info*,int);
  int (SQLITE_APICALL *keyword_count)(void);
  int (SQLITE_APICALL *keyword_name)(int,const char**,int*);
  int (SQLITE_APICALL *keyword_check)(const char*,int);
  sqlite3_str *(SQLITE_APICALL *str_new)(sqlite3*);
  char *(SQLITE_APICALL *str_finish)(sqlite3_str*);
  void (SQLITE_APICALL *str_appendf)(sqlite3_str*, const char *zFormat, ...);
  void (SQLITE_APICALL *str_vappendf)(sqlite3_str*, const char *zFormat, va_list);
  void (SQLITE_APICALL *str_append)(sqlite3_str*, const char *zIn, int N);
  void (SQLITE_APICALL *str_appendall)(sqlite3_str*, const char *zIn);
  void (SQLITE_APICALL *str_appendchar)(sqlite3_str*, int N, char C);
  void (SQLITE_APICALL *str_reset)(sqlite3_str*);
  int (SQLITE_APICALL *str_errcode)(sqlite3_str*);
  int (SQLITE_APICALL *str_length)(sqlite3_str*);
  char *(SQLITE_APICALL *str_value)(sqlite3_str*);
  int (SQLITE_APICALL *create_window_function)(sqlite3*,const char*,int,int,void*,
                            void (SQLITE_APICALL *xStep)(sqlite3_context*,int,sqlite3_value**),
                            void (SQLITE_APICALL *xFinal)(sqlite3_context*),
                            void (SQLITE_APICALL *xValue)(sqlite3_context*),
                            void (SQLITE_APICALL *xInv)(sqlite3_context*,int,sqlite3_value**),
                            void(SQLITE_APICALL *xDestroy)(void*));
};
typedef int (SQLITE_APICALL *sqlite3_loadext_entry)(
  sqlite3 *db,
  char **pzErrMsg,
  const sqlite3_api_routines *pThunk
);
    extern const sqlite3_api_routines *sqlite3_api;
#endif
#pragma endregion Application Family
