#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ProvExce.h>
#include <GenLex.h>
#include <ObjPath.h>
#include <OPathLex.h>
#include <CHString.h>
#include <CHStrArr.h>
#include <CHPtrArr.h>
#include <Polarity.h>
#include <WbemTime.h>
    #define _DBG_ASSERT(X) { if (!(X)) { DebugBreak(); } }
#endif
#pragma endregion
