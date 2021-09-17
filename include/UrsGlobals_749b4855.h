    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef struct _URS_DRIVER_GLOBALS {
    ULONG Reserved;
} URS_DRIVER_GLOBALS, *PURS_DRIVER_GLOBALS;
WDF_EXTERN_C_END
