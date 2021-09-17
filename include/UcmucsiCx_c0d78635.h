    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef VOID (*UCMUCSIFUNC) (VOID);
extern UCMUCSIFUNC UcmucsiFunctions[];
#include "UcmUcsiGlobals.h"
#include "UcmUcsiFuncEnum.h"
#include "UcmUcsiDevice.h"
#include "UcmUcsiSpec.h"
#include "UcmUcsiPpm.h"
#include "UcmUcsiPpmRequests.h"
WDF_EXTERN_C_END
