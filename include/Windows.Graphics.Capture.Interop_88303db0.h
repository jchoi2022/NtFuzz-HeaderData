#include <windows.ui.composition.h>
#include <windows.graphics.capture.h>
#include <sdkddkver.h>
DECLARE_INTERFACE_IID_(IGraphicsCaptureItemInterop, IUnknown, "3628E81B-3CAC-4C60-B7F4-23CE0E0C3356")
{
    IFACEMETHOD(CreateForWindow)(
        HWND window,
        REFIID riid,
        _COM_Outptr_ void ** result
        ) PURE;
    IFACEMETHOD(CreateForMonitor)(
        HMONITOR monitor,
        REFIID riid,
        _COM_Outptr_ void ** result
        ) PURE;
};
