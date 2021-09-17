#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITPluggableTerminalEventSink ITPluggableTerminalEventSink;
typedef interface ITPluggableTerminalEventSinkRegistration ITPluggableTerminalEventSinkRegistration;
typedef interface ITMSPAddress ITMSPAddress;
#include "tapi3if.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef long *MSP_HANDLE;
typedef
enum __MIDL___MIDL_itf_msp_0000_0000_0001
    {
        ADDRESS_TERMINAL_AVAILABLE = 0,
        ADDRESS_TERMINAL_UNAVAILABLE = ( ADDRESS_TERMINAL_AVAILABLE + 1 )
    } MSP_ADDRESS_EVENT;
typedef
enum __MIDL___MIDL_itf_msp_0000_0000_0002
    {
        CALL_NEW_STREAM = 0,
        CALL_STREAM_FAIL = ( CALL_NEW_STREAM + 1 ) ,
        CALL_TERMINAL_FAIL = ( CALL_STREAM_FAIL + 1 ) ,
        CALL_STREAM_NOT_USED = ( CALL_TERMINAL_FAIL + 1 ) ,
        CALL_STREAM_ACTIVE = ( CALL_STREAM_NOT_USED + 1 ) ,
        CALL_STREAM_INACTIVE = ( CALL_STREAM_ACTIVE + 1 )
    } MSP_CALL_EVENT;
typedef
enum __MIDL___MIDL_itf_msp_0000_0000_0003
    {
        CALL_CAUSE_UNKNOWN = 0,
        CALL_CAUSE_BAD_DEVICE = ( CALL_CAUSE_UNKNOWN + 1 ) ,
        CALL_CAUSE_CONNECT_FAIL = ( CALL_CAUSE_BAD_DEVICE + 1 ) ,
        CALL_CAUSE_LOCAL_REQUEST = ( CALL_CAUSE_CONNECT_FAIL + 1 ) ,
        CALL_CAUSE_REMOTE_REQUEST = ( CALL_CAUSE_LOCAL_REQUEST + 1 ) ,
        CALL_CAUSE_MEDIA_TIMEOUT = ( CALL_CAUSE_REMOTE_REQUEST + 1 ) ,
        CALL_CAUSE_MEDIA_RECOVERED = ( CALL_CAUSE_MEDIA_TIMEOUT + 1 ) ,
        CALL_CAUSE_QUALITY_OF_SERVICE = ( CALL_CAUSE_MEDIA_RECOVERED + 1 )
    } MSP_CALL_EVENT_CAUSE;
typedef
enum __MIDL___MIDL_itf_msp_0000_0000_0004
    {
        ME_ADDRESS_EVENT = 0,
        ME_CALL_EVENT = ( ME_ADDRESS_EVENT + 1 ) ,
        ME_TSP_DATA = ( ME_CALL_EVENT + 1 ) ,
        ME_PRIVATE_EVENT = ( ME_TSP_DATA + 1 ) ,
        ME_ASR_TERMINAL_EVENT = ( ME_PRIVATE_EVENT + 1 ) ,
        ME_TTS_TERMINAL_EVENT = ( ME_ASR_TERMINAL_EVENT + 1 ) ,
        ME_FILE_TERMINAL_EVENT = ( ME_TTS_TERMINAL_EVENT + 1 ) ,
        ME_TONE_TERMINAL_EVENT = ( ME_FILE_TERMINAL_EVENT + 1 )
    } MSP_EVENT;
typedef struct __MIDL___MIDL_itf_msp_0000_0000_0005
    {
    DWORD dwSize;
    MSP_EVENT Event;
    MSP_HANDLE hCall;
                                   union
        {
                       struct
            {
            MSP_ADDRESS_EVENT Type;
            ITTerminal *pTerminal;
            } MSP_ADDRESS_EVENT_INFO;
                       struct
            {
            MSP_CALL_EVENT Type;
            MSP_CALL_EVENT_CAUSE Cause;
            ITStream *pStream;
            ITTerminal *pTerminal;
            HRESULT hrError;
            } MSP_CALL_EVENT_INFO;
                       struct
            {
            DWORD dwBufferSize;
            BYTE pBuffer[ 1 ];
            } MSP_TSP_DATA;
                       struct
            {
            IDispatch *pEvent;
            long lEventCode;
            } MSP_PRIVATE_EVENT_INFO;
                       struct
            {
            ITTerminal *pParentFileTerminal;
            ITFileTrack *pFileTrack;
            TERMINAL_MEDIA_STATE TerminalMediaState;
            FT_STATE_EVENT_CAUSE ftecEventCause;
            HRESULT hrErrorCode;
            } MSP_FILE_TERMINAL_EVENT_INFO;
                       struct
            {
            ITTerminal *pASRTerminal;
            HRESULT hrErrorCode;
            } MSP_ASR_TERMINAL_EVENT_INFO;
                       struct
            {
            ITTerminal *pTTSTerminal;
            HRESULT hrErrorCode;
            } MSP_TTS_TERMINAL_EVENT_INFO;
                       struct
            {
            ITTerminal *pToneTerminal;
            HRESULT hrErrorCode;
            } MSP_TONE_TERMINAL_EVENT_INFO;
        } ;
    } MSP_EVENT_INFO;
extern RPC_IF_HANDLE __MIDL_itf_msp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITPluggableTerminalEventSink;
    typedef struct ITPluggableTerminalEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *FireEvent )(
            __RPC__in ITPluggableTerminalEventSink * This,
                       __RPC__in const MSP_EVENT_INFO *pMspEventInfo);
        END_INTERFACE
    } ITPluggableTerminalEventSinkVtbl;
    interface ITPluggableTerminalEventSink
    {
        CONST_VTBL struct ITPluggableTerminalEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FireEvent(This,pMspEventInfo) )
EXTERN_C const IID IID_ITPluggableTerminalEventSinkRegistration;
    typedef struct ITPluggableTerminalEventSinkRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterSink )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This,
                       __RPC__in_opt ITPluggableTerminalEventSink *pEventSink);
        HRESULT ( STDMETHODCALLTYPE *UnregisterSink )(
            __RPC__in ITPluggableTerminalEventSinkRegistration * This);
        END_INTERFACE
    } ITPluggableTerminalEventSinkRegistrationVtbl;
    interface ITPluggableTerminalEventSinkRegistration
    {
        CONST_VTBL struct ITPluggableTerminalEventSinkRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterSink(This,pEventSink) )
    ( (This)->lpVtbl -> UnregisterSink(This) )
EXTERN_C const IID IID_ITMSPAddress;
    typedef struct ITMSPAddressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITMSPAddress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITMSPAddress * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in MSP_HANDLE hEvent);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            __RPC__in ITMSPAddress * This);
        HRESULT ( STDMETHODCALLTYPE *CreateMSPCall )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in MSP_HANDLE hCall,
                       DWORD dwReserved,
                       DWORD dwMediaType,
                       __RPC__in_opt IUnknown *pOuterUnknown,
                        __RPC__deref_out_opt IUnknown **ppStreamControl);
        HRESULT ( STDMETHODCALLTYPE *ShutdownMSPCall )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in_opt IUnknown *pStreamControl);
        HRESULT ( STDMETHODCALLTYPE *ReceiveTSPData )(
            __RPC__in ITMSPAddress * This,
                       __RPC__in_opt IUnknown *pMSPCall,
                                __RPC__in_ecount_full(dwSize) BYTE *pBuffer,
                       DWORD dwSize);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in ITMSPAddress * This,
                            __RPC__inout DWORD *pdwSize,
                                     __RPC__inout_ecount_full(*pdwSize) byte *pEventBuffer);
        END_INTERFACE
    } ITMSPAddressVtbl;
    interface ITMSPAddress
    {
        CONST_VTBL struct ITMSPAddressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,hEvent) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> CreateMSPCall(This,hCall,dwReserved,dwMediaType,pOuterUnknown,ppStreamControl) )
    ( (This)->lpVtbl -> ShutdownMSPCall(This,pStreamControl) )
    ( (This)->lpVtbl -> ReceiveTSPData(This,pMSPCall,pBuffer,dwSize) )
    ( (This)->lpVtbl -> GetEvent(This,pdwSize,pEventBuffer) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msp_0000_0003_v0_0_s_ifspec;
}
