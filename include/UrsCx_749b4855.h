    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
typedef VOID (*URSFUNC) (VOID);
extern URSFUNC UrsFunctions[];
#include "UrsTypes.h"
#include "UrsGlobals.h"
#include "UrsFuncEnum.h"
#include "UrsDevice.h"
WDF_EXTERN_C_END
