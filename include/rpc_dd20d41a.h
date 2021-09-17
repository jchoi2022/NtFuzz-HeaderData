#include <windows.h>
extern "C" {
#include <basetsd.h>
typedef void * I_RPC_HANDLE;
typedef long RPC_STATUS;
#include <setjmp.h>
#pragma warning( disable: 4005 )
#include <rpcdce.h>
#include <rpcnsi.h>
#include <rpcerr.h>
#include <rpcmac.h>
#pragma warning( default : 4005 )
typedef void (RPC_ENTRY *MACYIELDCALLBACK)( short *) ;
RPC_STATUS RPC_ENTRY
RpcMacSetYieldInfo(
 MACYIELDCALLBACK pfnCallback) ;
#include <poppack.h>
#include <rpcasync.h>
}
