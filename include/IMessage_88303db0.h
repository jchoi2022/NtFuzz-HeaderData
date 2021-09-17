#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C"
{
typedef struct _MSGSESS FAR * LPMSGSESS;
typedef void (STDAPICALLTYPE MSGCALLRELEASE)(
 ULONG ulCallerData,
 LPMESSAGE lpMessage );
STDAPI_(SCODE) OpenIMsgSession(
 LPMALLOC lpMalloc,
 ULONG ulFlags,
 LPMSGSESS FAR *lppMsgSess );
STDAPI_(void) CloseIMsgSession(
 LPMSGSESS lpMsgSess );
STDAPI_(SCODE) OpenIMsgOnIStg(
 LPMSGSESS lpMsgSess,
 LPALLOCATEBUFFER lpAllocateBuffer,
 LPALLOCATEMORE lpAllocateMore,
 LPFREEBUFFER lpFreeBuffer,
 LPMALLOC lpMalloc,
 LPVOID lpMapiSup,
 LPSTORAGE lpStg,
 MSGCALLRELEASE FAR *lpfMsgCallRelease,
 ULONG ulCallerData,
 ULONG ulFlags,
 LPMESSAGE FAR *lppMsg );
typedef struct _SPropAttrArray
{
 ULONG cValues;
 ULONG aPropAttr[MAPI_DIM];
} SPropAttrArray, FAR * LPSPropAttrArray;
 (offsetof(SPropAttrArray,aPropAttr) + (_cattr)*sizeof(ULONG))
 (offsetof(SPropAttrArray,aPropAttr) + \
 (UINT)((_lparray)->cValues)*sizeof(ULONG))
struct _SPropAttrArray_ ## _name \
{ \
 ULONG cValues; \
 ULONG aPropAttr[_cattr]; \
} _name
_Check_return_
STDAPI GetAttribIMsgOnIStg(
 LPVOID lpObject,
 LPSPropTagArray lpPropTagArray,
 LPSPropAttrArray FAR *lppPropAttrArray );
_Check_return_
STDAPI SetAttribIMsgOnIStg(
 LPVOID lpObject,
 LPSPropTagArray lpPropTags,
 LPSPropAttrArray lpPropAttrs,
 LPSPropProblemArray FAR *lppPropProblems );
STDAPI_(SCODE) MapStorageSCode( SCODE StgSCode );
}
#endif
#pragma endregion
