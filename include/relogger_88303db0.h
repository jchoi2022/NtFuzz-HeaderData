#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITraceEvent ITraceEvent;
typedef interface ITraceEventCallback ITraceEventCallback;
typedef interface ITraceRelogger ITraceRelogger;
typedef class CTraceRelogger CTraceRelogger;
#include "unknwn.h"
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _EVENT_DESCRIPTOR
    {
    USHORT Id;
    UCHAR Version;
    UCHAR Channel;
    UCHAR Level;
    UCHAR Opcode;
    USHORT Task;
    ULONGLONG Keyword;
    } EVENT_DESCRIPTOR;
typedef struct _EVENT_DESCRIPTOR *PEVENT_DESCRIPTOR;
typedef const EVENT_DESCRIPTOR *PCEVENT_DESCRIPTOR;
#pragma warning(push)
#pragma warning (disable:4201)
typedef struct _EVENT_HEADER
    {
    USHORT Size;
    USHORT HeaderType;
    USHORT Flags;
    USHORT EventProperty;
    ULONG ThreadId;
    ULONG ProcessId;
    LARGE_INTEGER TimeStamp;
    GUID ProviderId;
    EVENT_DESCRIPTOR EventDescriptor;
    union
        {
        struct
            {
            ULONG KernelTime;
            ULONG UserTime;
            } DUMMYSTRUCTNAME;
        ULONG64 ProcessorTime;
        } DUMMYUNIONNAME;
    GUID ActivityId;
    } EVENT_HEADER;
typedef struct _EVENT_HEADER *PEVENT_HEADER;
typedef struct _ETW_BUFFER_CONTEXT
    {
    union
        {
        struct
            {
            UCHAR ProcessorNumber;
            UCHAR Alignment;
            } DUMMYSTRUCTNAME;
        USHORT ProcessorIndex;
        } DUMMYUNIONNAME;
    USHORT LoggerId;
    } ETW_BUFFER_CONTEXT;
typedef struct _ETW_BUFFER_CONTEXT *PETW_BUFFER_CONTEXT;
#pragma warning(pop)
typedef struct _EVENT_HEADER_EXTENDED_DATA_ITEM
    {
    USHORT Reserved1;
    USHORT ExtType;
    USHORT Linkage;
    USHORT DataSize;
    ULONGLONG DataPtr;
    } EVENT_HEADER_EXTENDED_DATA_ITEM;
typedef struct _EVENT_HEADER_EXTENDED_DATA_ITEM *PEVENT_HEADER_EXTENDED_DATA_ITEM;
typedef struct _EVENT_RECORD
    {
    EVENT_HEADER EventHeader;
    ETW_BUFFER_CONTEXT BufferContext;
    USHORT ExtendedDataCount;
    USHORT UserDataLength;
    PEVENT_HEADER_EXTENDED_DATA_ITEM ExtendedData;
    PVOID UserData;
    PVOID UserContext;
    } EVENT_RECORD;
typedef struct _EVENT_RECORD *PEVENT_RECORD;
typedef const EVENT_RECORD *PCEVENT_RECORD;
typedef ULONG64 TRACEHANDLE;
typedef ULONG64 *PTRACEHANDLE;
extern RPC_IF_HANDLE __MIDL_itf_relogger_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_relogger_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITraceEvent;
    typedef struct ITraceEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITraceEvent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITraceEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITraceEvent * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            ITraceEvent * This,
                                ITraceEvent **NewEvent);
        HRESULT ( STDMETHODCALLTYPE *GetUserContext )(
            ITraceEvent * This,
                                void **UserContext);
        HRESULT ( STDMETHODCALLTYPE *GetEventRecord )(
            ITraceEvent * This,
                                PEVENT_RECORD *EventRecord);
        HRESULT ( STDMETHODCALLTYPE *SetPayload )(
            ITraceEvent * This,
                                BYTE *Payload,
                       ULONG PayloadSize);
        HRESULT ( STDMETHODCALLTYPE *SetEventDescriptor )(
            ITraceEvent * This,
                       PCEVENT_DESCRIPTOR EventDescriptor);
        HRESULT ( STDMETHODCALLTYPE *SetProcessId )(
            ITraceEvent * This,
                       ULONG ProcessId);
        HRESULT ( STDMETHODCALLTYPE *SetProcessorIndex )(
            ITraceEvent * This,
                       ULONG ProcessorIndex);
        HRESULT ( STDMETHODCALLTYPE *SetThreadId )(
            ITraceEvent * This,
                       ULONG ThreadId);
        HRESULT ( STDMETHODCALLTYPE *SetThreadTimes )(
            ITraceEvent * This,
                       ULONG KernelTime,
                       ULONG UserTime);
        HRESULT ( STDMETHODCALLTYPE *SetActivityId )(
            ITraceEvent * This,
                       LPCGUID ActivityId);
        HRESULT ( STDMETHODCALLTYPE *SetTimeStamp )(
            ITraceEvent * This,
                       LARGE_INTEGER *TimeStamp);
        HRESULT ( STDMETHODCALLTYPE *SetProviderId )(
            ITraceEvent * This,
                       LPCGUID ProviderId);
        END_INTERFACE
    } ITraceEventVtbl;
    interface ITraceEvent
    {
        CONST_VTBL struct ITraceEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,NewEvent) )
    ( (This)->lpVtbl -> GetUserContext(This,UserContext) )
    ( (This)->lpVtbl -> GetEventRecord(This,EventRecord) )
    ( (This)->lpVtbl -> SetPayload(This,Payload,PayloadSize) )
    ( (This)->lpVtbl -> SetEventDescriptor(This,EventDescriptor) )
    ( (This)->lpVtbl -> SetProcessId(This,ProcessId) )
    ( (This)->lpVtbl -> SetProcessorIndex(This,ProcessorIndex) )
    ( (This)->lpVtbl -> SetThreadId(This,ThreadId) )
    ( (This)->lpVtbl -> SetThreadTimes(This,KernelTime,UserTime) )
    ( (This)->lpVtbl -> SetActivityId(This,ActivityId) )
    ( (This)->lpVtbl -> SetTimeStamp(This,TimeStamp) )
    ( (This)->lpVtbl -> SetProviderId(This,ProviderId) )
EXTERN_C const IID IID_ITraceEventCallback;
    typedef struct ITraceEventCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITraceEventCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITraceEventCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITraceEventCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnBeginProcessTrace )(
            __RPC__in ITraceEventCallback * This,
                       __RPC__in_opt ITraceEvent *HeaderEvent,
                       __RPC__in_opt ITraceRelogger *Relogger);
        HRESULT ( STDMETHODCALLTYPE *OnFinalizeProcessTrace )(
            __RPC__in ITraceEventCallback * This,
                       __RPC__in_opt ITraceRelogger *Relogger);
        HRESULT ( STDMETHODCALLTYPE *OnEvent )(
            __RPC__in ITraceEventCallback * This,
                       __RPC__in_opt ITraceEvent *Event,
                       __RPC__in_opt ITraceRelogger *Relogger);
        END_INTERFACE
    } ITraceEventCallbackVtbl;
    interface ITraceEventCallback
    {
        CONST_VTBL struct ITraceEventCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnBeginProcessTrace(This,HeaderEvent,Relogger) )
    ( (This)->lpVtbl -> OnFinalizeProcessTrace(This,Relogger) )
    ( (This)->lpVtbl -> OnEvent(This,Event,Relogger) )
EXTERN_C const IID IID_ITraceRelogger;
    typedef struct ITraceReloggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITraceRelogger * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITraceRelogger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITraceRelogger * This);
        HRESULT ( STDMETHODCALLTYPE *AddLogfileTraceStream )(
            ITraceRelogger * This,
                       BSTR LogfileName,
                       void *UserContext,
                                TRACEHANDLE *TraceHandle);
        HRESULT ( STDMETHODCALLTYPE *AddRealtimeTraceStream )(
            ITraceRelogger * This,
                       BSTR LoggerName,
                       void *UserContext,
                                TRACEHANDLE *TraceHandle);
        HRESULT ( STDMETHODCALLTYPE *RegisterCallback )(
            ITraceRelogger * This,
                       ITraceEventCallback *Callback);
        HRESULT ( STDMETHODCALLTYPE *Inject )(
            ITraceRelogger * This,
                       ITraceEvent *Event);
        HRESULT ( STDMETHODCALLTYPE *CreateEventInstance )(
            ITraceRelogger * This,
                       TRACEHANDLE TraceHandle,
                       ULONG Flags,
                                ITraceEvent **Event);
        HRESULT ( STDMETHODCALLTYPE *ProcessTrace )(
            ITraceRelogger * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFilename )(
            ITraceRelogger * This,
                       BSTR LogfileName);
        HRESULT ( STDMETHODCALLTYPE *SetCompressionMode )(
            ITraceRelogger * This,
                       BOOLEAN CompressionMode);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            ITraceRelogger * This);
        END_INTERFACE
    } ITraceReloggerVtbl;
    interface ITraceRelogger
    {
        CONST_VTBL struct ITraceReloggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddLogfileTraceStream(This,LogfileName,UserContext,TraceHandle) )
    ( (This)->lpVtbl -> AddRealtimeTraceStream(This,LoggerName,UserContext,TraceHandle) )
    ( (This)->lpVtbl -> RegisterCallback(This,Callback) )
    ( (This)->lpVtbl -> Inject(This,Event) )
    ( (This)->lpVtbl -> CreateEventInstance(This,TraceHandle,Flags,Event) )
    ( (This)->lpVtbl -> ProcessTrace(This) )
    ( (This)->lpVtbl -> SetOutputFilename(This,LogfileName) )
    ( (This)->lpVtbl -> SetCompressionMode(This,CompressionMode) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID LIBID_TraceReloggerLib;
EXTERN_C const CLSID CLSID_CTraceRelogger;
class DECLSPEC_UUID("7b40792d-05ff-44c4-9058-f440c71f17d4")
CTraceRelogger;
EXTERN_GUID(CLSID_TraceRelogger, 0x7b40792d, 0x05ff, 0x44c4, 0x90, 0x58, 0xf4, 0x40, 0xc7, 0x1f, 0x17, 0xd4);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_relogger_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_relogger_0000_0004_v0_0_s_ifspec;
}
