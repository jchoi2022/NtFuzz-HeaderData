#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "wtypes.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _CERTTRANSBLOB
    {
    unsigned long cb;
                            BYTE *pb;
    } CERTTRANSBLOB;
typedef struct _CERTVIEWRESTRICTION
    {
    DWORD ColumnIndex;
    LONG SeekOperator;
    LONG SortOrder;
                            BYTE *pbValue;
    DWORD cbValue;
    } CERTVIEWRESTRICTION;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certbase_0000_0000_v0_0_s_ifspec;
}
