#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
typedef enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers;
enum __x_ABI_CWindows_CApplicationModel_CDataTransfer_CDragDrop_CDragDropModifiers
{
    DragDropModifiers_None = 0,
    DragDropModifiers_Shift = 0x1,
    DragDropModifiers_Control = 0x2,
    DragDropModifiers_Alt = 0x4,
    DragDropModifiers_LeftButton = 0x8,
    DragDropModifiers_MiddleButton = 0x10,
    DragDropModifiers_RightButton = 0x20,
};
       
       
#pragma clang diagnostic pop
