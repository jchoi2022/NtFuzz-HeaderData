#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4100)
#pragma warning(disable:4201)
#pragma warning(disable:4511)
#pragma warning(disable:4512)
#pragma warning(disable:4514)
#include <windows.h>
#include <windowsx.h>
#include <olectl.h>
#include <ddraw.h>
#include <mmsystem.h>
#include <strsafe.h>
   #define NUMELMS(aa) (sizeof(aa)/sizeof((aa)[0]))
#include <strmif.h>
#include <amvideo.h>
#include <amaudio.h>
#include <control.h>
#include <evcode.h>
#include <uuids.h>
#include <errors.h>
#include <edevdefs.h>
#include <audevcod.h>
#include <dvdevcod.h>
   (PVOID)InterlockedExchange((PLONG)(Target), (LONG)(Value))
#pragma warning(default:4100)
#pragma warning(default:4201)
#pragma warning(default:4511)
#pragma warning(default:4512)
#pragma warning(default:4514)
#endif
#pragma endregion
