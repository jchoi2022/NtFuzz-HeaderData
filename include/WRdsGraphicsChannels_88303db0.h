#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWRdsGraphicsChannelEvents IWRdsGraphicsChannelEvents;
typedef interface IWRdsGraphicsChannel IWRdsGraphicsChannel;
typedef interface IWRdsGraphicsChannelManager IWRdsGraphicsChannelManager;
#include "unknwn.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C __declspec(selectany) const IID IID_IWRdsGraphicsChannelEvents = {0x67f2368c, 0xd674, 0x4fae, {0x66, 0xa5, 0xd2, 0x06, 0x28, 0xa6, 0x40, 0xd2}};
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWRdsGraphicsChannelEvents;
    typedef struct IWRdsGraphicsChannelEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsGraphicsChannelEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsGraphicsChannelEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsGraphicsChannelEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnDataReceived )(
            __RPC__in IWRdsGraphicsChannelEvents * This,
                       ULONG cbSize,
                       __RPC__in BYTE *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *OnClose )(
            __RPC__in IWRdsGraphicsChannelEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnChannelOpened )(
            __RPC__in IWRdsGraphicsChannelEvents * This,
                       HRESULT OpenResult,
                       __RPC__in_opt IUnknown *pOpenContext);
        HRESULT ( STDMETHODCALLTYPE *OnDataSent )(
            __RPC__in IWRdsGraphicsChannelEvents * This,
                       __RPC__in_opt IUnknown *pWriteContext,
                       BOOL bCancelled,
                       __RPC__in BYTE *pBuffer,
                       ULONG cbBuffer);
        HRESULT ( STDMETHODCALLTYPE *OnMetricsUpdate )(
            __RPC__in IWRdsGraphicsChannelEvents * This,
                       DWORD bandwidth,
                       DWORD RTT,
                       UINT64 lastSentByteIndex);
        END_INTERFACE
    } IWRdsGraphicsChannelEventsVtbl;
    interface IWRdsGraphicsChannelEvents
    {
        CONST_VTBL struct IWRdsGraphicsChannelEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDataReceived(This,cbSize,pBuffer) )
    ( (This)->lpVtbl -> OnClose(This) )
    ( (This)->lpVtbl -> OnChannelOpened(This,OpenResult,pOpenContext) )
    ( (This)->lpVtbl -> OnDataSent(This,pWriteContext,bCancelled,pBuffer,cbBuffer) )
    ( (This)->lpVtbl -> OnMetricsUpdate(This,bandwidth,RTT,lastSentByteIndex) )
EXTERN_C __declspec(selectany) const IID IID_IWRdsGraphicsChannel = {0x684b7a0b, 0xedff, 0x43ad, {0xd5, 0xa2, 0x4a, 0x8d, 0x53, 0x88, 0xf4, 0x01}};
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWRdsGraphicsChannel;
    typedef struct IWRdsGraphicsChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsGraphicsChannel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsGraphicsChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsGraphicsChannel * This);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IWRdsGraphicsChannel * This,
                       ULONG cbSize,
                       __RPC__in BYTE *pBuffer,
                       __RPC__in_opt IUnknown *pContext);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IWRdsGraphicsChannel * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IWRdsGraphicsChannel * This,
                       __RPC__in_opt IWRdsGraphicsChannelEvents *pChannelEvents,
                       __RPC__in_opt IUnknown *pOpenContext);
        END_INTERFACE
    } IWRdsGraphicsChannelVtbl;
    interface IWRdsGraphicsChannel
    {
        CONST_VTBL struct IWRdsGraphicsChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Write(This,cbSize,pBuffer,pContext) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Open(This,pChannelEvents,pOpenContext) )
typedef
enum __MIDL___MIDL_itf_wrdsgraphicschannels_0000_0002_0001
    {
        WRdsGraphicsChannelType_GuaranteedDelivery = 0,
        WRdsGraphicsChannelType_BestEffortDelivery = 1
    } WRdsGraphicsChannelType;
EXTERN_C __declspec(selectany) const IID IID_IWRdsGraphicsChannelManager = {0x0fd57159, 0xe83e, 0x476a, {0xa8, 0xb9, 0x4a, 0x79, 0x76, 0xe7, 0x1e, 0x18}};
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWRdsGraphicsChannelManager;
    typedef struct IWRdsGraphicsChannelManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWRdsGraphicsChannelManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWRdsGraphicsChannelManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWRdsGraphicsChannelManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateChannel )(
            __RPC__in IWRdsGraphicsChannelManager * This,
                       __RPC__in const char *pszChannelName,
                       WRdsGraphicsChannelType channelType,
                                __RPC__deref_out_opt IWRdsGraphicsChannel **ppVirtualChannel);
        END_INTERFACE
    } IWRdsGraphicsChannelManagerVtbl;
    interface IWRdsGraphicsChannelManager
    {
        CONST_VTBL struct IWRdsGraphicsChannelManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateChannel(This,pszChannelName,channelType,ppVirtualChannel) )
#pragma pack(push, rfx_gfx_msg, 1)
typedef struct tagRFX_GFX_RECT
    {
    INT32 left;
    INT32 top;
    INT32 right;
    INT32 bottom;
    } RFX_GFX_RECT;
typedef RFX_GFX_RECT RFX_GFX_UNALIGNED *PRFX_GFX_RECT;
typedef struct tagRFX_GFX_MSG_HEADER
    {
    UINT16 uMSGType;
    UINT16 cbSize;
    } RFX_GFX_MSG_HEADER;
typedef RFX_GFX_MSG_HEADER RFX_GFX_UNALIGNED *PRFX_GFX_MSG_HEADER;
typedef struct tagRFX_GFX_MONITOR_INFO
    {
    INT32 left;
    INT32 top;
    INT32 right;
    INT32 bottom;
    UINT32 physicalWidth;
    UINT32 physicalHeight;
    UINT32 orientation;
    BOOL primary;
    } RFX_GFX_MONITOR_INFO;
typedef RFX_GFX_MONITOR_INFO RFX_GFX_UNALIGNED *PRFX_GFX_MONITOR_INFO;
typedef struct tagRFX_GFX_MSG_CLIENT_DESKTOP_INFO_REQUEST
    {
    RFX_GFX_MSG_HEADER channelHdr;
    } RFX_GFX_MSG_CLIENT_DESKTOP_INFO_REQUEST;
typedef RFX_GFX_MSG_CLIENT_DESKTOP_INFO_REQUEST RFX_GFX_UNALIGNED *PRFX_GFX_MSG_CLIENT_DESKTOP_INFO_REQUEST;
typedef struct tagRFX_GFX_MSG_CLIENT_DESKTOP_INFO_RESPONSE
    {
    RFX_GFX_MSG_HEADER channelHdr;
    UINT32 reserved;
    UINT32 monitorCount;
    RFX_GFX_MONITOR_INFO MonitorData[ 16 ];
    WCHAR clientUniqueId[ 32 ];
    } RFX_GFX_MSG_CLIENT_DESKTOP_INFO_RESPONSE;
typedef RFX_GFX_MSG_CLIENT_DESKTOP_INFO_RESPONSE RFX_GFX_UNALIGNED *PRFX_GFX_MSG_CLIENT_DESKTOP_INFO_RESPONSE;
typedef struct tagRFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_NOTIFY
    {
    RFX_GFX_MSG_HEADER channelHdr;
    ULONG ulWidth;
    ULONG ulHeight;
    ULONG ulBpp;
    ULONG Reserved;
    } RFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_NOTIFY;
typedef RFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_NOTIFY RFX_GFX_UNALIGNED *PRFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_NOTIFY;
typedef struct tagRFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_CONFIRM
    {
    RFX_GFX_MSG_HEADER channelHdr;
    } RFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_CONFIRM;
typedef RFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_CONFIRM RFX_GFX_UNALIGNED *PRFX_GFX_MSG_DESKTOP_CONFIG_CHANGE_CONFIRM;
typedef struct tagRFX_GFX_MSG_DESKTOP_INPUT_RESET
    {
    RFX_GFX_MSG_HEADER channelHdr;
    UINT32 ulWidth;
    UINT32 ulHeight;
    } RFX_GFX_MSG_DESKTOP_INPUT_RESET;
typedef RFX_GFX_MSG_DESKTOP_INPUT_RESET RFX_GFX_UNALIGNED *PRFX_GFX_MSG_DESKTOP_INPUT_RESET;
typedef struct tagRFX_GFX_MSG_DISCONNECT_NOTIFY
    {
    RFX_GFX_MSG_HEADER channelHdr;
    ULONG DisconnectReason;
    } RFX_GFX_MSG_DISCONNECT_NOTIFY;
typedef RFX_GFX_MSG_DISCONNECT_NOTIFY RFX_GFX_UNALIGNED *PRFX_GFX_MSG_DISCONNECT_NOTIFY;
typedef struct tagRFX_GFX_MSG_DESKTOP_RESEND_REQUEST
    {
    RFX_GFX_MSG_HEADER channelHdr;
    RFX_GFX_RECT RedrawRect;
    } RFX_GFX_MSG_DESKTOP_RESEND_REQUEST;
typedef RFX_GFX_MSG_DESKTOP_RESEND_REQUEST RFX_GFX_UNALIGNED *PRFX_GFX_MSG_DESKTOP_RESEND_REQUEST;
typedef struct tagRFX_GFX_MSG_RDP_DATA
    {
    RFX_GFX_MSG_HEADER channelHdr;
    UINT8 rdpData[ 1 ];
    } RFX_GFX_MSG_RDP_DATA;
typedef RFX_GFX_MSG_RDP_DATA RFX_GFX_UNALIGNED *PRFX_GFX_MSG_RDP_DATA;
#pragma pack(pop, rfx_gfx_msg)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wrdsgraphicschannels_0000_0003_v0_0_s_ifspec;
}
