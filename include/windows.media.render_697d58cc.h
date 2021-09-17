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
typedef enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory;
enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory
{
    AudioRenderCategory_Other = 0,
    AudioRenderCategory_ForegroundOnlyMedia
    DEPRECATEDENUMERATOR("ForegroundOnlyMedia is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 1,
    AudioRenderCategory_BackgroundCapableMedia
    DEPRECATEDENUMERATOR("BackgroundCapableMedia is deprecated and might not work on all platforms. For more info, see MSDN.")
     = 2,
    AudioRenderCategory_Communications = 3,
    AudioRenderCategory_Alerts = 4,
    AudioRenderCategory_SoundEffects = 5,
    AudioRenderCategory_GameEffects = 6,
    AudioRenderCategory_GameMedia = 7,
    AudioRenderCategory_GameChat = 8,
    AudioRenderCategory_Speech = 9,
    AudioRenderCategory_Movie = 10,
    AudioRenderCategory_Media = 11,
};
       
       
#pragma clang diagnostic pop
