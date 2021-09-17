    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef VOID (*UCMTCPCIFUNC) (VOID);
extern UCMTCPCIFUNC UcmtcpciFunctions[];
#include "UcmTcpciGlobals.h"
#include "UcmTcpciFuncEnum.h"
#include "UcmTcpciSpec.h"
#include "UcmTcpciDevice.h"
#include "UcmTcpciPortController.h"
#include "UcmTcpciPortControllerRequests.h"
WDF_EXTERN_C_END
