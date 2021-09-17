    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#error NETCX_ADAPTER_PREVIEW previously defined. NETCX_ macro prefix is reserved
#include <netadaptercxtypes.h>
#include <preview/netfuncenum.h>
#include <netadaptercx.h>
WDF_EXTERN_C_END
