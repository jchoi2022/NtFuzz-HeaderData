    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#error Include WDF.H first
#include <ntintsafe.h>
#include <ntstrsafe.h>
#include <usbspec.h>
#include <usb.h>
#include <usbioctl.h>
#include <usbdlib.h>
typedef void (*PFN_UCXFUNC)(void);
extern PFN_UCXFUNC UcxFunctions[];
#include "UcxGlobals.h"
#include "UcxFuncEnum.h"
#include "UcxObjects.h"
#include "UcxController.h"
#include "UcxRootHub.h"
#include "UcxUsbDevice.h"
#include "UcxEndpoint.h"
#include "UcxSStreams.h"
typedef
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
WDFAPI
NTSTATUS
(*PFN_UCXINITIALIZEDEVICEINIT)(
    _In_
    PUCX_DRIVER_GLOBALS DriverGlobals,
    __inout
    PWDFDEVICE_INIT DeviceInit
    );
__drv_requiresIRQL(PASSIVE_LEVEL)
_Must_inspect_result_
NTSTATUS
FORCEINLINE
UcxInitializeDeviceInit(
    __inout
    PWDFDEVICE_INIT DeviceInit
    )
{
    return ((PFN_UCXINITIALIZEDEVICEINIT) UcxFunctions[UcxInitializeDeviceInitTableIndex])(UcxDriverGlobals, DeviceInit);
}
WDF_EXTERN_C_END
