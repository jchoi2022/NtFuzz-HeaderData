#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <lmcons.h>
#include <lmerr.h>
#include <lmaccess.h>
#include <lmalert.h>
#include <lmshare.h>
#include <lmmsg.h>
#include <lmremutl.h>
#include <lmrepl.h>
#include <lmserver.h>
#include <lmsvc.h>
#include <lmuse.h>
#include <lmwksta.h>
#include <lmapibuf.h>
#include <lmerrlog.h>
#include <lmconfig.h>
#include <lmstats.h>
#include <lmaudit.h>
#include <lmjoin.h>
#endif
#pragma endregion
