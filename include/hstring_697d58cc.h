#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "wtypes.h"
extern "C"{
#if 0
typedef struct HSTRING__
    {
    int unused;
    } HSTRING__;
typedef __RPC_unique_pointer HSTRING__ *HSTRING;
#endif
typedef struct HSTRING__{
    int unused;
} HSTRING__;
typedef __RPC_unique_pointer HSTRING__* HSTRING;
typedef struct HSTRING_HEADER
{
    union{
        PVOID Reserved1;
        char Reserved2[24];
    } Reserved;
} HSTRING_HEADER;
DECLARE_HANDLE(HSTRING_BUFFER);
extern RPC_IF_HANDLE __MIDL_itf_hstring_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hstring_0000_0000_v0_0_s_ifspec;
}
