    #define WDF_EXTERN_C extern "C"
    #define WDF_EXTERN_C_START extern "C" {
    #define WDF_EXTERN_C_END }
WDF_EXTERN_C_START
#error include wdf.h before netadaptercx.h
#error NETCX_ADAPTER_2 previously defined. NETCX_ macro prefix is reserved
#include <ndis.h>
#include <net/extension.h>
#include <net/fragment.h>
#include <net/packet.h>
#include <net/ring.h>
#include <net/ringcollection.h>
#include <netadaptercxtypes.h>
#include <netfuncenum.h>
#include <netdevice.h>
#include <netadapterpacket.h>
#include <nettxqueue.h>
#include <netrxqueue.h>
#include <netadapter.h>
#include <netconfiguration.h>
#include <netrequest.h>
#include <netrequestqueue.h>
#include <netpowersettings.h>
WDF_EXTERN_C_END
