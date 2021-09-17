       
    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef struct _UCM_DRIVER_GLOBALS {
    ULONG Reserved;
} UCM_DRIVER_GLOBALS, *PUCM_DRIVER_GLOBALS;
WDF_EXTERN_C_END
