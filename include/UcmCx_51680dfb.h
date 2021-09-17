       
    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef VOID (*UCMFUNC) (VOID);
extern UCMFUNC UcmFunctions[];
#include "UcmTypes.h"
#include "UcmGlobals.h"
#include "UcmFuncEnum.h"
#include "UcmManager.h"
WDF_EXTERN_C_END
