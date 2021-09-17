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
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit;
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint
{
    TextPatternRangeEndpoint_Start = 0,
    TextPatternRangeEndpoint_End = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit
{
    TextUnit_Character = 0,
    TextUnit_Format = 1,
    TextUnit_Word = 2,
    TextUnit_Line = 3,
    TextUnit_Paragraph = 4,
    TextUnit_Page = 5,
    TextUnit_Document = 6,
};
       
       
#pragma clang diagnostic pop
