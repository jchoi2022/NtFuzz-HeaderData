#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRDPSRAPIDebug IRDPSRAPIDebug;
typedef interface IRDPSRAPIPerfCounterLogger IRDPSRAPIPerfCounterLogger;
typedef interface IRDPSRAPIPerfCounterLoggingManager IRDPSRAPIPerfCounterLoggingManager;
typedef interface IRDPSRAPIAudioStream IRDPSRAPIAudioStream;
typedef interface IRDPSRAPIClipboardUseEvents IRDPSRAPIClipboardUseEvents;
typedef interface IRDPSRAPIWindow IRDPSRAPIWindow;
typedef interface IRDPSRAPIWindowList IRDPSRAPIWindowList;
typedef interface IRDPSRAPIApplication IRDPSRAPIApplication;
typedef interface IRDPSRAPIApplicationList IRDPSRAPIApplicationList;
typedef interface IRDPSRAPIApplicationFilter IRDPSRAPIApplicationFilter;
typedef interface IRDPSRAPISessionProperties IRDPSRAPISessionProperties;
typedef interface IRDPSRAPIInvitation IRDPSRAPIInvitation;
typedef interface IRDPSRAPIInvitationManager IRDPSRAPIInvitationManager;
typedef interface IRDPSRAPITcpConnectionInfo IRDPSRAPITcpConnectionInfo;
typedef interface IRDPSRAPIAttendee IRDPSRAPIAttendee;
typedef interface IRDPSRAPIAttendeeManager IRDPSRAPIAttendeeManager;
typedef interface IRDPSRAPIAttendeeDisconnectInfo IRDPSRAPIAttendeeDisconnectInfo;
typedef interface IRDPSRAPIVirtualChannel IRDPSRAPIVirtualChannel;
typedef interface IRDPSRAPIVirtualChannelManager IRDPSRAPIVirtualChannelManager;
typedef interface IRDPSRAPIViewer IRDPSRAPIViewer;
typedef interface IRDPViewerRenderingSurface IRDPViewerRenderingSurface;
typedef interface IRDPViewerInputSink IRDPViewerInputSink;
typedef interface IRDPSRAPIFrameBuffer IRDPSRAPIFrameBuffer;
typedef interface IRDPSRAPITransportStreamBuffer IRDPSRAPITransportStreamBuffer;
typedef interface IRDPSRAPITransportStreamEvents IRDPSRAPITransportStreamEvents;
typedef interface IRDPSRAPITransportStream IRDPSRAPITransportStream;
typedef interface IRDPSRAPISharingSession IRDPSRAPISharingSession;
typedef interface IRDPSRAPISharingSession2 IRDPSRAPISharingSession2;
typedef interface _IRDPSessionEvents _IRDPSessionEvents;
typedef class RDPViewer RDPViewer;
typedef class RDPSRAPISessionProperties RDPSRAPISessionProperties;
typedef class RDPSRAPIInvitationManager RDPSRAPIInvitationManager;
typedef class RDPSRAPIInvitation RDPSRAPIInvitation;
typedef class RDPSRAPIAttendeeManager RDPSRAPIAttendeeManager;
typedef class RDPSRAPIAttendee RDPSRAPIAttendee;
typedef class RDPSRAPIAttendeeDisconnectInfo RDPSRAPIAttendeeDisconnectInfo;
typedef class RDPSRAPIApplicationFilter RDPSRAPIApplicationFilter;
typedef class RDPSRAPIApplicationList RDPSRAPIApplicationList;
typedef class RDPSRAPIApplication RDPSRAPIApplication;
typedef class RDPSRAPIWindowList RDPSRAPIWindowList;
typedef class RDPSRAPIWindow RDPSRAPIWindow;
typedef class RDPSRAPITcpConnectionInfo RDPSRAPITcpConnectionInfo;
typedef class RDPSession RDPSession;
typedef class RDPSRAPIFrameBuffer RDPSRAPIFrameBuffer;
typedef class RDPTransportStreamBuffer RDPTransportStreamBuffer;
typedef class RDPTransportStreamEvents RDPTransportStreamEvents;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0001
    {
        CTRL_LEVEL_MIN = 0,
        CTRL_LEVEL_INVALID = 0,
        CTRL_LEVEL_NONE = 1,
        CTRL_LEVEL_VIEW = 2,
        CTRL_LEVEL_INTERACTIVE = 3,
        CTRL_LEVEL_REQCTRL_VIEW = 4,
        CTRL_LEVEL_REQCTRL_INTERACTIVE = 5,
        CTRL_LEVEL_MAX = 5
    } CTRL_LEVEL;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0002
    {
        ATTENDEE_DISCONNECT_REASON_MIN = 0,
        ATTENDEE_DISCONNECT_REASON_APP = 0,
        ATTENDEE_DISCONNECT_REASON_ERR = 1,
        ATTENDEE_DISCONNECT_REASON_CLI = 2,
        ATTENDEE_DISCONNECT_REASON_MAX = 2
    } ATTENDEE_DISCONNECT_REASON;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0003
    {
        CHANNEL_PRIORITY_LO = 0,
        CHANNEL_PRIORITY_MED = ( CHANNEL_PRIORITY_LO + 1 ) ,
        CHANNEL_PRIORITY_HI = ( CHANNEL_PRIORITY_MED + 1 )
    } CHANNEL_PRIORITY;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0004
    {
        CHANNEL_FLAGS_LEGACY = 0x1,
        CHANNEL_FLAGS_UNCOMPRESSED = 0x2
    } CHANNEL_FLAGS;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0005
    {
        CHANNEL_ACCESS_ENUM_NONE = 0,
        CHANNEL_ACCESS_ENUM_SENDRECEIVE = ( CHANNEL_ACCESS_ENUM_NONE + 1 )
    } CHANNEL_ACCESS_ENUM;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0006
    {
        ATTENDEE_FLAGS_LOCAL = 1
    } RDPENCOMAPI_ATTENDEE_FLAGS;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0007
    {
        WND_FLAG_PRIVILEGED = 1
    } RDPSRAPI_WND_FLAGS;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0008
    {
        APP_FLAG_PRIVILEGED = 1
    } RDPSRAPI_APP_FLAGS;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0009
    {
        RDPSRAPI_MOUSE_BUTTON_BUTTON1 = 0,
        RDPSRAPI_MOUSE_BUTTON_BUTTON2 = 1,
        RDPSRAPI_MOUSE_BUTTON_BUTTON3 = 2,
        RDPSRAPI_MOUSE_BUTTON_XBUTTON1 = 3,
        RDPSRAPI_MOUSE_BUTTON_XBUTTON2 = 4,
        RDPSRAPI_MOUSE_BUTTON_XBUTTON3 = 5
    } RDPSRAPI_MOUSE_BUTTON_TYPE;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0010
    {
        RDPSRAPI_KBD_CODE_SCANCODE = 0,
        RDPSRAPI_KBD_CODE_UNICODE = 1
    } RDPSRAPI_KBD_CODE_TYPE;
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0000_0011
    {
        RDPSRAPI_KBD_SYNC_FLAG_SCROLL_LOCK = 1,
        RDPSRAPI_KBD_SYNC_FLAG_NUM_LOCK = 2,
        RDPSRAPI_KBD_SYNC_FLAG_CAPS_LOCK = 4,
        RDPSRAPI_KBD_SYNC_FLAG_KANA_LOCK = 8
    } RDPSRAPI_KBD_SYNC_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRDPSRAPIDebug;
    typedef struct IRDPSRAPIDebugVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIDebug * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIDebug * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIDebug * This);
                            HRESULT ( STDMETHODCALLTYPE *put_CLXCmdLine )(
            __RPC__in IRDPSRAPIDebug * This,
                       __RPC__in BSTR CLXCmdLine);
                            HRESULT ( STDMETHODCALLTYPE *get_CLXCmdLine )(
            __RPC__in IRDPSRAPIDebug * This,
                                __RPC__deref_out_opt BSTR *pCLXCmdLine);
        END_INTERFACE
    } IRDPSRAPIDebugVtbl;
    interface IRDPSRAPIDebug
    {
        CONST_VTBL struct IRDPSRAPIDebugVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_CLXCmdLine(This,CLXCmdLine) )
    ( (This)->lpVtbl -> get_CLXCmdLine(This,pCLXCmdLine) )
EXTERN_C const IID IID_IRDPSRAPIPerfCounterLogger;
    typedef struct IRDPSRAPIPerfCounterLoggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIPerfCounterLogger * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIPerfCounterLogger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIPerfCounterLogger * This);
        HRESULT ( STDMETHODCALLTYPE *LogValue )(
            __RPC__in IRDPSRAPIPerfCounterLogger * This,
                       __int64 lValue);
        END_INTERFACE
    } IRDPSRAPIPerfCounterLoggerVtbl;
    interface IRDPSRAPIPerfCounterLogger
    {
        CONST_VTBL struct IRDPSRAPIPerfCounterLoggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LogValue(This,lValue) )
EXTERN_C const IID IID_IRDPSRAPIPerfCounterLoggingManager;
    typedef struct IRDPSRAPIPerfCounterLoggingManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIPerfCounterLoggingManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIPerfCounterLoggingManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIPerfCounterLoggingManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateLogger )(
            __RPC__in IRDPSRAPIPerfCounterLoggingManager * This,
                       __RPC__in BSTR bstrCounterName,
                        __RPC__deref_out_opt IRDPSRAPIPerfCounterLogger **ppLogger);
        END_INTERFACE
    } IRDPSRAPIPerfCounterLoggingManagerVtbl;
    interface IRDPSRAPIPerfCounterLoggingManager
    {
        CONST_VTBL struct IRDPSRAPIPerfCounterLoggingManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateLogger(This,bstrCounterName,ppLogger) )
EXTERN_C const IID IID_IRDPSRAPIAudioStream;
    typedef struct IRDPSRAPIAudioStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIAudioStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIAudioStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIAudioStream * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IRDPSRAPIAudioStream * This,
                        __RPC__out __int64 *pnPeriodInHundredNsIntervals);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IRDPSRAPIAudioStream * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IRDPSRAPIAudioStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            __RPC__in IRDPSRAPIAudioStream * This,
                                          __RPC__deref_out_ecount_full_opt(*pcbData) BYTE **ppbData,
                        __RPC__out UINT32 *pcbData,
                        __RPC__out UINT64 *pTimestamp);
        HRESULT ( STDMETHODCALLTYPE *FreeBuffer )(
            __RPC__in IRDPSRAPIAudioStream * This);
        END_INTERFACE
    } IRDPSRAPIAudioStreamVtbl;
    interface IRDPSRAPIAudioStream
    {
        CONST_VTBL struct IRDPSRAPIAudioStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pnPeriodInHundredNsIntervals) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> GetBuffer(This,ppbData,pcbData,pTimestamp) )
    ( (This)->lpVtbl -> FreeBuffer(This) )
EXTERN_C const IID IID_IRDPSRAPIClipboardUseEvents;
    typedef struct IRDPSRAPIClipboardUseEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIClipboardUseEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIClipboardUseEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIClipboardUseEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnPasteFromClipboard )(
            __RPC__in IRDPSRAPIClipboardUseEvents * This,
                       UINT clipboardFormat,
                       __RPC__in_opt IDispatch *pAttendee,
                                __RPC__out VARIANT_BOOL *pRetVal);
        END_INTERFACE
    } IRDPSRAPIClipboardUseEventsVtbl;
    interface IRDPSRAPIClipboardUseEvents
    {
        CONST_VTBL struct IRDPSRAPIClipboardUseEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPasteFromClipboard(This,clipboardFormat,pAttendee,pRetVal) )
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IRDPSRAPIWindow;
    typedef struct IRDPSRAPIWindowVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIWindow * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIWindow * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIWindow * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIWindow * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIWindow * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIWindow * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIWindow * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IRDPSRAPIWindow * This,
                                __RPC__out long *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IRDPSRAPIWindow * This,
                                __RPC__deref_out_opt IRDPSRAPIApplication **pApplication);
                            HRESULT ( STDMETHODCALLTYPE *get_Shared )(
            __RPC__in IRDPSRAPIWindow * This,
                                __RPC__out VARIANT_BOOL *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *put_Shared )(
            __RPC__in IRDPSRAPIWindow * This,
                       VARIANT_BOOL NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRDPSRAPIWindow * This,
                                __RPC__deref_out_opt BSTR *pRetVal);
                   HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IRDPSRAPIWindow * This);
                            HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IRDPSRAPIWindow * This,
                                __RPC__out unsigned long *pdwFlags);
        END_INTERFACE
    } IRDPSRAPIWindowVtbl;
    interface IRDPSRAPIWindow
    {
        CONST_VTBL struct IRDPSRAPIWindowVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pRetVal) )
    ( (This)->lpVtbl -> get_Application(This,pApplication) )
    ( (This)->lpVtbl -> get_Shared(This,pRetVal) )
    ( (This)->lpVtbl -> put_Shared(This,NewVal) )
    ( (This)->lpVtbl -> get_Name(This,pRetVal) )
    ( (This)->lpVtbl -> Show(This) )
    ( (This)->lpVtbl -> get_Flags(This,pdwFlags) )
EXTERN_C const IID IID_IRDPSRAPIWindowList;
    typedef struct IRDPSRAPIWindowListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIWindowList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIWindowList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIWindowList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIWindowList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIWindowList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIWindowList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIWindowList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRDPSRAPIWindowList * This,
                                __RPC__deref_out_opt IUnknown **retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRDPSRAPIWindowList * This,
                       long item,
                                __RPC__deref_out_opt IRDPSRAPIWindow **pWindow);
        END_INTERFACE
    } IRDPSRAPIWindowListVtbl;
    interface IRDPSRAPIWindowList
    {
        CONST_VTBL struct IRDPSRAPIWindowListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,item,pWindow) )
EXTERN_C const IID IID_IRDPSRAPIApplication;
    typedef struct IRDPSRAPIApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIApplication * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIApplication * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIApplication * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIApplication * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Windows )(
            __RPC__in IRDPSRAPIApplication * This,
                                __RPC__deref_out_opt IRDPSRAPIWindowList **pWindowList);
                            HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IRDPSRAPIApplication * This,
                                __RPC__out long *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Shared )(
            __RPC__in IRDPSRAPIApplication * This,
                                __RPC__out VARIANT_BOOL *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *put_Shared )(
            __RPC__in IRDPSRAPIApplication * This,
                       VARIANT_BOOL NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRDPSRAPIApplication * This,
                                __RPC__deref_out_opt BSTR *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IRDPSRAPIApplication * This,
                                __RPC__out unsigned long *pdwFlags);
        END_INTERFACE
    } IRDPSRAPIApplicationVtbl;
    interface IRDPSRAPIApplication
    {
        CONST_VTBL struct IRDPSRAPIApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Windows(This,pWindowList) )
    ( (This)->lpVtbl -> get_Id(This,pRetVal) )
    ( (This)->lpVtbl -> get_Shared(This,pRetVal) )
    ( (This)->lpVtbl -> put_Shared(This,NewVal) )
    ( (This)->lpVtbl -> get_Name(This,pRetVal) )
    ( (This)->lpVtbl -> get_Flags(This,pdwFlags) )
EXTERN_C const IID IID_IRDPSRAPIApplicationList;
    typedef struct IRDPSRAPIApplicationListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIApplicationList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIApplicationList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIApplicationList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIApplicationList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIApplicationList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIApplicationList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIApplicationList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRDPSRAPIApplicationList * This,
                                __RPC__deref_out_opt IUnknown **retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRDPSRAPIApplicationList * This,
                       long item,
                                __RPC__deref_out_opt IRDPSRAPIApplication **pApplication);
        END_INTERFACE
    } IRDPSRAPIApplicationListVtbl;
    interface IRDPSRAPIApplicationList
    {
        CONST_VTBL struct IRDPSRAPIApplicationListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,item,pApplication) )
EXTERN_C const IID IID_IRDPSRAPIApplicationFilter;
    typedef struct IRDPSRAPIApplicationFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIApplicationFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIApplicationFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIApplicationFilter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Applications )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                                __RPC__deref_out_opt IRDPSRAPIApplicationList **pApplications);
                            HRESULT ( STDMETHODCALLTYPE *get_Windows )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                                __RPC__deref_out_opt IRDPSRAPIWindowList **pWindows);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                                __RPC__out VARIANT_BOOL *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IRDPSRAPIApplicationFilter * This,
                       VARIANT_BOOL NewVal);
        END_INTERFACE
    } IRDPSRAPIApplicationFilterVtbl;
    interface IRDPSRAPIApplicationFilter
    {
        CONST_VTBL struct IRDPSRAPIApplicationFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Applications(This,pApplications) )
    ( (This)->lpVtbl -> get_Windows(This,pWindows) )
    ( (This)->lpVtbl -> get_Enabled(This,pRetVal) )
    ( (This)->lpVtbl -> put_Enabled(This,NewVal) )
EXTERN_C const IID IID_IRDPSRAPISessionProperties;
    typedef struct IRDPSRAPISessionPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPISessionProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPISessionProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPISessionProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPISessionProperties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPISessionProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPISessionProperties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPISessionProperties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Property )(
            __RPC__in IRDPSRAPISessionProperties * This,
                       __RPC__in BSTR PropertyName,
                                __RPC__out VARIANT *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_Property )(
            __RPC__in IRDPSRAPISessionProperties * This,
                       __RPC__in BSTR PropertyName,
                       VARIANT newVal);
        END_INTERFACE
    } IRDPSRAPISessionPropertiesVtbl;
    interface IRDPSRAPISessionProperties
    {
        CONST_VTBL struct IRDPSRAPISessionPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Property(This,PropertyName,pVal) )
    ( (This)->lpVtbl -> put_Property(This,PropertyName,newVal) )
EXTERN_C const IID IID_IRDPSRAPIInvitation;
    typedef struct IRDPSRAPIInvitationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIInvitation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIInvitation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIInvitation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIInvitation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIInvitation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIInvitation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIInvitation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_ConnectionString )(
            __RPC__in IRDPSRAPIInvitation * This,
                                __RPC__deref_out_opt BSTR *pbstrVal);
                            HRESULT ( STDMETHODCALLTYPE *get_GroupName )(
            __RPC__in IRDPSRAPIInvitation * This,
                                __RPC__deref_out_opt BSTR *pbstrVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Password )(
            __RPC__in IRDPSRAPIInvitation * This,
                                __RPC__deref_out_opt BSTR *pbstrVal);
                            HRESULT ( STDMETHODCALLTYPE *get_AttendeeLimit )(
            __RPC__in IRDPSRAPIInvitation * This,
                                __RPC__out long *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *put_AttendeeLimit )(
            __RPC__in IRDPSRAPIInvitation * This,
                       long NewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Revoked )(
            __RPC__in IRDPSRAPIInvitation * This,
                                __RPC__out VARIANT_BOOL *pRetVal);
                            HRESULT ( STDMETHODCALLTYPE *put_Revoked )(
            __RPC__in IRDPSRAPIInvitation * This,
                       VARIANT_BOOL NewVal);
        END_INTERFACE
    } IRDPSRAPIInvitationVtbl;
    interface IRDPSRAPIInvitation
    {
        CONST_VTBL struct IRDPSRAPIInvitationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ConnectionString(This,pbstrVal) )
    ( (This)->lpVtbl -> get_GroupName(This,pbstrVal) )
    ( (This)->lpVtbl -> get_Password(This,pbstrVal) )
    ( (This)->lpVtbl -> get_AttendeeLimit(This,pRetVal) )
    ( (This)->lpVtbl -> put_AttendeeLimit(This,NewVal) )
    ( (This)->lpVtbl -> get_Revoked(This,pRetVal) )
    ( (This)->lpVtbl -> put_Revoked(This,NewVal) )
EXTERN_C const IID IID_IRDPSRAPIInvitationManager;
    typedef struct IRDPSRAPIInvitationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIInvitationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIInvitationManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIInvitationManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                                __RPC__deref_out_opt IUnknown **retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                       VARIANT item,
                                __RPC__deref_out_opt IRDPSRAPIInvitation **ppInvitation);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                                __RPC__out long *pRetVal);
                   HRESULT ( STDMETHODCALLTYPE *CreateInvitation )(
            __RPC__in IRDPSRAPIInvitationManager * This,
                       __RPC__in BSTR bstrAuthString,
                       __RPC__in BSTR bstrGroupName,
                       __RPC__in BSTR bstrPassword,
                       long AttendeeLimit,
                                __RPC__deref_out_opt IRDPSRAPIInvitation **ppInvitation);
        END_INTERFACE
    } IRDPSRAPIInvitationManagerVtbl;
    interface IRDPSRAPIInvitationManager
    {
        CONST_VTBL struct IRDPSRAPIInvitationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,item,ppInvitation) )
    ( (This)->lpVtbl -> get_Count(This,pRetVal) )
    ( (This)->lpVtbl -> CreateInvitation(This,bstrAuthString,bstrGroupName,bstrPassword,AttendeeLimit,ppInvitation) )
EXTERN_C const IID IID_IRDPSRAPITcpConnectionInfo;
    typedef struct IRDPSRAPITcpConnectionInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPITcpConnectionInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Protocol )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                                __RPC__out long *plProtocol);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalPort )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                                __RPC__out long *plPort);
                            HRESULT ( STDMETHODCALLTYPE *get_LocalIP )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                                __RPC__deref_out_opt BSTR *pbsrLocalIP);
                            HRESULT ( STDMETHODCALLTYPE *get_PeerPort )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                                __RPC__out long *plPort);
                            HRESULT ( STDMETHODCALLTYPE *get_PeerIP )(
            __RPC__in IRDPSRAPITcpConnectionInfo * This,
                                __RPC__deref_out_opt BSTR *pbstrIP);
        END_INTERFACE
    } IRDPSRAPITcpConnectionInfoVtbl;
    interface IRDPSRAPITcpConnectionInfo
    {
        CONST_VTBL struct IRDPSRAPITcpConnectionInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Protocol(This,plProtocol) )
    ( (This)->lpVtbl -> get_LocalPort(This,plPort) )
    ( (This)->lpVtbl -> get_LocalIP(This,pbsrLocalIP) )
    ( (This)->lpVtbl -> get_PeerPort(This,plPort) )
    ( (This)->lpVtbl -> get_PeerIP(This,pbstrIP) )
EXTERN_C const IID IID_IRDPSRAPIAttendee;
    typedef struct IRDPSRAPIAttendeeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIAttendee * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIAttendee * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIAttendee * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIAttendee * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIAttendee * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIAttendee * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIAttendee * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IRDPSRAPIAttendee * This,
                                __RPC__out long *pId);
                            HRESULT ( STDMETHODCALLTYPE *get_RemoteName )(
            __RPC__in IRDPSRAPIAttendee * This,
                                __RPC__deref_out_opt BSTR *pVal);
                            HRESULT ( STDMETHODCALLTYPE *get_ControlLevel )(
            __RPC__in IRDPSRAPIAttendee * This,
                                __RPC__out CTRL_LEVEL *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_ControlLevel )(
            __RPC__in IRDPSRAPIAttendee * This,
                       CTRL_LEVEL pNewVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Invitation )(
            __RPC__in IRDPSRAPIAttendee * This,
                                __RPC__deref_out_opt IRDPSRAPIInvitation **ppVal);
                   HRESULT ( STDMETHODCALLTYPE *TerminateConnection )(
            __RPC__in IRDPSRAPIAttendee * This);
                            HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IRDPSRAPIAttendee * This,
                                __RPC__out long *plFlags);
                            HRESULT ( STDMETHODCALLTYPE *get_ConnectivityInfo )(
            __RPC__in IRDPSRAPIAttendee * This,
                                __RPC__deref_out_opt IUnknown **ppVal);
        END_INTERFACE
    } IRDPSRAPIAttendeeVtbl;
    interface IRDPSRAPIAttendee
    {
        CONST_VTBL struct IRDPSRAPIAttendeeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,pId) )
    ( (This)->lpVtbl -> get_RemoteName(This,pVal) )
    ( (This)->lpVtbl -> get_ControlLevel(This,pVal) )
    ( (This)->lpVtbl -> put_ControlLevel(This,pNewVal) )
    ( (This)->lpVtbl -> get_Invitation(This,ppVal) )
    ( (This)->lpVtbl -> TerminateConnection(This) )
    ( (This)->lpVtbl -> get_Flags(This,plFlags) )
    ( (This)->lpVtbl -> get_ConnectivityInfo(This,ppVal) )
EXTERN_C const IID IID_IRDPSRAPIAttendeeManager;
    typedef struct IRDPSRAPIAttendeeManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIAttendeeManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIAttendeeManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIAttendeeManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIAttendeeManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIAttendeeManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIAttendeeManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIAttendeeManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRDPSRAPIAttendeeManager * This,
                                __RPC__deref_out_opt IUnknown **retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRDPSRAPIAttendeeManager * This,
                       long id,
                                __RPC__deref_out_opt IRDPSRAPIAttendee **ppItem);
        END_INTERFACE
    } IRDPSRAPIAttendeeManagerVtbl;
    interface IRDPSRAPIAttendeeManager
    {
        CONST_VTBL struct IRDPSRAPIAttendeeManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,id,ppItem) )
EXTERN_C const IID IID_IRDPSRAPIAttendeeDisconnectInfo;
    typedef struct IRDPSRAPIAttendeeDisconnectInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIAttendeeDisconnectInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Attendee )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This,
                                __RPC__deref_out_opt IRDPSRAPIAttendee **retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Reason )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This,
                                __RPC__out ATTENDEE_DISCONNECT_REASON *pReason);
                            HRESULT ( STDMETHODCALLTYPE *get_Code )(
            __RPC__in IRDPSRAPIAttendeeDisconnectInfo * This,
                                __RPC__out long *pVal);
        END_INTERFACE
    } IRDPSRAPIAttendeeDisconnectInfoVtbl;
    interface IRDPSRAPIAttendeeDisconnectInfo
    {
        CONST_VTBL struct IRDPSRAPIAttendeeDisconnectInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Attendee(This,retval) )
    ( (This)->lpVtbl -> get_Reason(This,pReason) )
    ( (This)->lpVtbl -> get_Code(This,pVal) )
EXTERN_C const IID IID_IRDPSRAPIVirtualChannel;
    typedef struct IRDPSRAPIVirtualChannelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIVirtualChannel * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIVirtualChannel * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIVirtualChannel * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *SendData )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                       __RPC__in BSTR bstrData,
                       long lAttendeeId,
                       unsigned long ChannelSendFlags);
                   HRESULT ( STDMETHODCALLTYPE *SetAccess )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                       long lAttendeeId,
                       CHANNEL_ACCESS_ENUM AccessType);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                            HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                                __RPC__out long *plFlags);
                            HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in IRDPSRAPIVirtualChannel * This,
                                __RPC__out CHANNEL_PRIORITY *pPriority);
        END_INTERFACE
    } IRDPSRAPIVirtualChannelVtbl;
    interface IRDPSRAPIVirtualChannel
    {
        CONST_VTBL struct IRDPSRAPIVirtualChannelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SendData(This,bstrData,lAttendeeId,ChannelSendFlags) )
    ( (This)->lpVtbl -> SetAccess(This,lAttendeeId,AccessType) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Flags(This,plFlags) )
    ( (This)->lpVtbl -> get_Priority(This,pPriority) )
EXTERN_C const IID IID_IRDPSRAPIVirtualChannelManager;
    typedef struct IRDPSRAPIVirtualChannelManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIVirtualChannelManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This,
                                __RPC__deref_out_opt IUnknown **retval);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This,
                       VARIANT item,
                                __RPC__deref_out_opt IRDPSRAPIVirtualChannel **pChannel);
                   HRESULT ( STDMETHODCALLTYPE *CreateVirtualChannel )(
            __RPC__in IRDPSRAPIVirtualChannelManager * This,
                       __RPC__in BSTR bstrChannelName,
                       CHANNEL_PRIORITY Priority,
                       unsigned long ChannelFlags,
                                __RPC__deref_out_opt IRDPSRAPIVirtualChannel **ppChannel);
        END_INTERFACE
    } IRDPSRAPIVirtualChannelManagerVtbl;
    interface IRDPSRAPIVirtualChannelManager
    {
        CONST_VTBL struct IRDPSRAPIVirtualChannelManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,retval) )
    ( (This)->lpVtbl -> get_Item(This,item,pChannel) )
    ( (This)->lpVtbl -> CreateVirtualChannel(This,bstrChannelName,Priority,ChannelFlags,ppChannel) )
EXTERN_C const IID IID_IRDPSRAPIViewer;
    typedef struct IRDPSRAPIViewerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIViewer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIViewer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIViewer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIViewer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIViewer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIViewer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIViewer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IRDPSRAPIViewer * This,
                       __RPC__in BSTR bstrConnectionString,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrPassword);
                   HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IRDPSRAPIViewer * This);
                            HRESULT ( STDMETHODCALLTYPE *get_Attendees )(
            __RPC__in IRDPSRAPIViewer * This,
                                __RPC__deref_out_opt IRDPSRAPIAttendeeManager **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Invitations )(
            __RPC__in IRDPSRAPIViewer * This,
                                __RPC__deref_out_opt IRDPSRAPIInvitationManager **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_ApplicationFilter )(
            __RPC__in IRDPSRAPIViewer * This,
                                __RPC__deref_out_opt IRDPSRAPIApplicationFilter **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_VirtualChannelManager )(
            __RPC__in IRDPSRAPIViewer * This,
                                __RPC__deref_out_opt IRDPSRAPIVirtualChannelManager **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *put_SmartSizing )(
            __RPC__in IRDPSRAPIViewer * This,
                       VARIANT_BOOL vbSmartSizing);
                            HRESULT ( STDMETHODCALLTYPE *get_SmartSizing )(
            __RPC__in IRDPSRAPIViewer * This,
                                __RPC__out VARIANT_BOOL *pvbSmartSizing);
                   HRESULT ( STDMETHODCALLTYPE *RequestControl )(
            __RPC__in IRDPSRAPIViewer * This,
                       CTRL_LEVEL CtrlLevel);
                            HRESULT ( STDMETHODCALLTYPE *put_DisconnectedText )(
            __RPC__in IRDPSRAPIViewer * This,
                       __RPC__in BSTR bstrDisconnectedText);
                            HRESULT ( STDMETHODCALLTYPE *get_DisconnectedText )(
            __RPC__in IRDPSRAPIViewer * This,
                                __RPC__deref_out_opt BSTR *pbstrDisconnectedText);
                   HRESULT ( STDMETHODCALLTYPE *RequestColorDepthChange )(
            __RPC__in IRDPSRAPIViewer * This,
                       long Bpp);
                            HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IRDPSRAPIViewer * This,
                                __RPC__deref_out_opt IRDPSRAPISessionProperties **ppVal);
                   HRESULT ( STDMETHODCALLTYPE *StartReverseConnectListener )(
            __RPC__in IRDPSRAPIViewer * This,
                       __RPC__in BSTR bstrConnectionString,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword,
                                __RPC__deref_out_opt BSTR *pbstrReverseConnectString);
        END_INTERFACE
    } IRDPSRAPIViewerVtbl;
    interface IRDPSRAPIViewer
    {
        CONST_VTBL struct IRDPSRAPIViewerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Connect(This,bstrConnectionString,bstrName,bstrPassword) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> get_Attendees(This,ppVal) )
    ( (This)->lpVtbl -> get_Invitations(This,ppVal) )
    ( (This)->lpVtbl -> get_ApplicationFilter(This,ppVal) )
    ( (This)->lpVtbl -> get_VirtualChannelManager(This,ppVal) )
    ( (This)->lpVtbl -> put_SmartSizing(This,vbSmartSizing) )
    ( (This)->lpVtbl -> get_SmartSizing(This,pvbSmartSizing) )
    ( (This)->lpVtbl -> RequestControl(This,CtrlLevel) )
    ( (This)->lpVtbl -> put_DisconnectedText(This,bstrDisconnectedText) )
    ( (This)->lpVtbl -> get_DisconnectedText(This,pbstrDisconnectedText) )
    ( (This)->lpVtbl -> RequestColorDepthChange(This,Bpp) )
    ( (This)->lpVtbl -> get_Properties(This,ppVal) )
    ( (This)->lpVtbl -> StartReverseConnectListener(This,bstrConnectionString,bstrUserName,bstrPassword,pbstrReverseConnectString) )
EXTERN_C const IID IID_IRDPViewerRenderingSurface;
    typedef struct IRDPViewerRenderingSurfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPViewerRenderingSurface * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPViewerRenderingSurface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPViewerRenderingSurface * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRenderingSurface )(
            __RPC__in IRDPViewerRenderingSurface * This,
                       __RPC__in_opt IUnknown *pRenderingSurface,
                       long surfaceWidth,
                       long surfaceHeight);
        END_INTERFACE
    } IRDPViewerRenderingSurfaceVtbl;
    interface IRDPViewerRenderingSurface
    {
        CONST_VTBL struct IRDPViewerRenderingSurfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRenderingSurface(This,pRenderingSurface,surfaceWidth,surfaceHeight) )
#pragma deprecated(IRDPViewerRenderingSurface)
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IRDPViewerInputSink;
    typedef struct IRDPViewerInputSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPViewerInputSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPViewerInputSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPViewerInputSink * This);
                   HRESULT ( STDMETHODCALLTYPE *SendMouseButtonEvent )(
            __RPC__in IRDPViewerInputSink * This,
                       RDPSRAPI_MOUSE_BUTTON_TYPE buttonType,
                       VARIANT_BOOL vbButtonDown,
                       ULONG xPos,
                       ULONG yPos);
                   HRESULT ( STDMETHODCALLTYPE *SendMouseMoveEvent )(
            __RPC__in IRDPViewerInputSink * This,
                       ULONG xPos,
                       ULONG yPos);
                   HRESULT ( STDMETHODCALLTYPE *SendMouseWheelEvent )(
            __RPC__in IRDPViewerInputSink * This,
                       UINT16 wheelRotation);
                   HRESULT ( STDMETHODCALLTYPE *SendKeyboardEvent )(
            __RPC__in IRDPViewerInputSink * This,
                       RDPSRAPI_KBD_CODE_TYPE codeType,
                       UINT16 keycode,
                       VARIANT_BOOL vbKeyUp,
                       VARIANT_BOOL vbRepeat,
                       VARIANT_BOOL vbExtended);
                   HRESULT ( STDMETHODCALLTYPE *SendSyncEvent )(
            __RPC__in IRDPViewerInputSink * This,
                       ULONG syncFlags);
                   HRESULT ( STDMETHODCALLTYPE *BeginTouchFrame )(
            __RPC__in IRDPViewerInputSink * This);
                   HRESULT ( STDMETHODCALLTYPE *AddTouchInput )(
            __RPC__in IRDPViewerInputSink * This,
                       UINT32 contactId,
                       UINT32 event,
                       INT32 x,
                       INT32 y);
                   HRESULT ( STDMETHODCALLTYPE *EndTouchFrame )(
            __RPC__in IRDPViewerInputSink * This);
        END_INTERFACE
    } IRDPViewerInputSinkVtbl;
    interface IRDPViewerInputSink
    {
        CONST_VTBL struct IRDPViewerInputSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SendMouseButtonEvent(This,buttonType,vbButtonDown,xPos,yPos) )
    ( (This)->lpVtbl -> SendMouseMoveEvent(This,xPos,yPos) )
    ( (This)->lpVtbl -> SendMouseWheelEvent(This,wheelRotation) )
    ( (This)->lpVtbl -> SendKeyboardEvent(This,codeType,keycode,vbKeyUp,vbRepeat,vbExtended) )
    ( (This)->lpVtbl -> SendSyncEvent(This,syncFlags) )
    ( (This)->lpVtbl -> BeginTouchFrame(This) )
    ( (This)->lpVtbl -> AddTouchInput(This,contactId,event,x,y) )
    ( (This)->lpVtbl -> EndTouchFrame(This) )
EXTERN_C const IID IID_IRDPSRAPIFrameBuffer;
    typedef struct IRDPSRAPIFrameBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPIFrameBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPIFrameBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPIFrameBuffer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                                __RPC__out long *plWidth);
                            HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                                __RPC__out long *plHeight);
                            HRESULT ( STDMETHODCALLTYPE *get_Bpp )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                                __RPC__out long *plBpp);
                   HRESULT ( STDMETHODCALLTYPE *GetFrameBufferBits )(
            __RPC__in IRDPSRAPIFrameBuffer * This,
                       long x,
                       long y,
                       long Width,
                       long Heigth,
                                __RPC__deref_out_opt SAFEARRAY * *ppBits);
        END_INTERFACE
    } IRDPSRAPIFrameBufferVtbl;
    interface IRDPSRAPIFrameBuffer
    {
        CONST_VTBL struct IRDPSRAPIFrameBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Width(This,plWidth) )
    ( (This)->lpVtbl -> get_Height(This,plHeight) )
    ( (This)->lpVtbl -> get_Bpp(This,plBpp) )
    ( (This)->lpVtbl -> GetFrameBufferBits(This,x,y,Width,Heigth,ppBits) )
EXTERN_C const IID IID_IRDPSRAPITransportStreamBuffer;
    typedef struct IRDPSRAPITransportStreamBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This);
                            HRESULT ( STDMETHODCALLTYPE *get_Storage )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                                __RPC__deref_out_opt BYTE **ppbStorage);
                            HRESULT ( STDMETHODCALLTYPE *get_StorageSize )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                                __RPC__out long *plMaxStore);
                            HRESULT ( STDMETHODCALLTYPE *get_PayloadSize )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                                __RPC__out long *plRetVal);
                            HRESULT ( STDMETHODCALLTYPE *put_PayloadSize )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                       long lVal);
                            HRESULT ( STDMETHODCALLTYPE *get_PayloadOffset )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                                __RPC__out long *plRetVal);
                            HRESULT ( STDMETHODCALLTYPE *put_PayloadOffset )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                       long lRetVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                                __RPC__out long *plFlags);
                            HRESULT ( STDMETHODCALLTYPE *put_Flags )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                       long lFlags);
                            HRESULT ( STDMETHODCALLTYPE *get_Context )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                                __RPC__deref_out_opt IUnknown **ppContext);
                            HRESULT ( STDMETHODCALLTYPE *put_Context )(
            __RPC__in IRDPSRAPITransportStreamBuffer * This,
                       __RPC__in_opt IUnknown *pContext);
        END_INTERFACE
    } IRDPSRAPITransportStreamBufferVtbl;
    interface IRDPSRAPITransportStreamBuffer
    {
        CONST_VTBL struct IRDPSRAPITransportStreamBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Storage(This,ppbStorage) )
    ( (This)->lpVtbl -> get_StorageSize(This,plMaxStore) )
    ( (This)->lpVtbl -> get_PayloadSize(This,plRetVal) )
    ( (This)->lpVtbl -> put_PayloadSize(This,lVal) )
    ( (This)->lpVtbl -> get_PayloadOffset(This,plRetVal) )
    ( (This)->lpVtbl -> put_PayloadOffset(This,lRetVal) )
    ( (This)->lpVtbl -> get_Flags(This,plFlags) )
    ( (This)->lpVtbl -> put_Flags(This,lFlags) )
    ( (This)->lpVtbl -> get_Context(This,ppContext) )
    ( (This)->lpVtbl -> put_Context(This,pContext) )
EXTERN_C const IID IID_IRDPSRAPITransportStreamEvents;
    typedef struct IRDPSRAPITransportStreamEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRDPSRAPITransportStreamEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRDPSRAPITransportStreamEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRDPSRAPITransportStreamEvents * This);
                   void ( STDMETHODCALLTYPE *OnWriteCompleted )(
            IRDPSRAPITransportStreamEvents * This,
                       IRDPSRAPITransportStreamBuffer *pBuffer);
                   void ( STDMETHODCALLTYPE *OnReadCompleted )(
            IRDPSRAPITransportStreamEvents * This,
                       IRDPSRAPITransportStreamBuffer *pBuffer);
                   void ( STDMETHODCALLTYPE *OnStreamClosed )(
            IRDPSRAPITransportStreamEvents * This,
                       HRESULT hrReason);
        END_INTERFACE
    } IRDPSRAPITransportStreamEventsVtbl;
    interface IRDPSRAPITransportStreamEvents
    {
        CONST_VTBL struct IRDPSRAPITransportStreamEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnWriteCompleted(This,pBuffer) )
    ( (This)->lpVtbl -> OnReadCompleted(This,pBuffer) )
    ( (This)->lpVtbl -> OnStreamClosed(This,hrReason) )
EXTERN_C const IID IID_IRDPSRAPITransportStream;
    typedef struct IRDPSRAPITransportStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPITransportStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPITransportStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPITransportStream * This);
                   HRESULT ( STDMETHODCALLTYPE *AllocBuffer )(
            __RPC__in IRDPSRAPITransportStream * This,
                       long maxPayload,
                                __RPC__deref_out_opt IRDPSRAPITransportStreamBuffer **ppBuffer);
                   HRESULT ( STDMETHODCALLTYPE *FreeBuffer )(
            __RPC__in IRDPSRAPITransportStream * This,
                       __RPC__in_opt IRDPSRAPITransportStreamBuffer *pBuffer);
                   HRESULT ( STDMETHODCALLTYPE *WriteBuffer )(
            __RPC__in IRDPSRAPITransportStream * This,
                       __RPC__in_opt IRDPSRAPITransportStreamBuffer *pBuffer);
                   HRESULT ( STDMETHODCALLTYPE *ReadBuffer )(
            __RPC__in IRDPSRAPITransportStream * This,
                       __RPC__in_opt IRDPSRAPITransportStreamBuffer *pBuffer);
                   HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IRDPSRAPITransportStream * This,
                       __RPC__in_opt IRDPSRAPITransportStreamEvents *pCallbacks);
                   HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IRDPSRAPITransportStream * This);
        END_INTERFACE
    } IRDPSRAPITransportStreamVtbl;
    interface IRDPSRAPITransportStream
    {
        CONST_VTBL struct IRDPSRAPITransportStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllocBuffer(This,maxPayload,ppBuffer) )
    ( (This)->lpVtbl -> FreeBuffer(This,pBuffer) )
    ( (This)->lpVtbl -> WriteBuffer(This,pBuffer) )
    ( (This)->lpVtbl -> ReadBuffer(This,pBuffer) )
    ( (This)->lpVtbl -> Open(This,pCallbacks) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IRDPSRAPISharingSession;
    typedef struct IRDPSRAPISharingSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPISharingSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPISharingSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPISharingSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPISharingSession * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPISharingSession * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPISharingSession * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPISharingSession * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IRDPSRAPISharingSession * This);
                   HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IRDPSRAPISharingSession * This);
                            HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )(
            __RPC__in IRDPSRAPISharingSession * This,
                       long colorDepth);
                            HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )(
            __RPC__in IRDPSRAPISharingSession * This,
                                __RPC__out long *pColorDepth);
                            HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IRDPSRAPISharingSession * This,
                                __RPC__deref_out_opt IRDPSRAPISessionProperties **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Attendees )(
            __RPC__in IRDPSRAPISharingSession * This,
                                __RPC__deref_out_opt IRDPSRAPIAttendeeManager **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Invitations )(
            __RPC__in IRDPSRAPISharingSession * This,
                                __RPC__deref_out_opt IRDPSRAPIInvitationManager **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_ApplicationFilter )(
            __RPC__in IRDPSRAPISharingSession * This,
                                __RPC__deref_out_opt IRDPSRAPIApplicationFilter **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_VirtualChannelManager )(
            __RPC__in IRDPSRAPISharingSession * This,
                                __RPC__deref_out_opt IRDPSRAPIVirtualChannelManager **ppVal);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IRDPSRAPISharingSession * This);
                   HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IRDPSRAPISharingSession * This);
                   HRESULT ( STDMETHODCALLTYPE *ConnectToClient )(
            __RPC__in IRDPSRAPISharingSession * This,
                       __RPC__in BSTR bstrConnectionString);
                   HRESULT ( STDMETHODCALLTYPE *SetDesktopSharedRect )(
            __RPC__in IRDPSRAPISharingSession * This,
                       long left,
                       long top,
                       long right,
                       long bottom);
                   HRESULT ( STDMETHODCALLTYPE *GetDesktopSharedRect )(
            __RPC__in IRDPSRAPISharingSession * This,
                        __RPC__out long *pleft,
                        __RPC__out long *ptop,
                        __RPC__out long *pright,
                        __RPC__out long *pbottom);
        END_INTERFACE
    } IRDPSRAPISharingSessionVtbl;
    interface IRDPSRAPISharingSession
    {
        CONST_VTBL struct IRDPSRAPISharingSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) )
    ( (This)->lpVtbl -> get_ColorDepth(This,pColorDepth) )
    ( (This)->lpVtbl -> get_Properties(This,ppVal) )
    ( (This)->lpVtbl -> get_Attendees(This,ppVal) )
    ( (This)->lpVtbl -> get_Invitations(This,ppVal) )
    ( (This)->lpVtbl -> get_ApplicationFilter(This,ppVal) )
    ( (This)->lpVtbl -> get_VirtualChannelManager(This,ppVal) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> ConnectToClient(This,bstrConnectionString) )
    ( (This)->lpVtbl -> SetDesktopSharedRect(This,left,top,right,bottom) )
    ( (This)->lpVtbl -> GetDesktopSharedRect(This,pleft,ptop,pright,pbottom) )
EXTERN_C const IID IID_IRDPSRAPISharingSession2;
    typedef struct IRDPSRAPISharingSession2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRDPSRAPISharingSession2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRDPSRAPISharingSession2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRDPSRAPISharingSession2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IRDPSRAPISharingSession2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IRDPSRAPISharingSession2 * This);
                            HRESULT ( STDMETHODCALLTYPE *put_ColorDepth )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       long colorDepth);
                            HRESULT ( STDMETHODCALLTYPE *get_ColorDepth )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                                __RPC__out long *pColorDepth);
                            HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                                __RPC__deref_out_opt IRDPSRAPISessionProperties **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Attendees )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                                __RPC__deref_out_opt IRDPSRAPIAttendeeManager **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_Invitations )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                                __RPC__deref_out_opt IRDPSRAPIInvitationManager **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_ApplicationFilter )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                                __RPC__deref_out_opt IRDPSRAPIApplicationFilter **ppVal);
                            HRESULT ( STDMETHODCALLTYPE *get_VirtualChannelManager )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                                __RPC__deref_out_opt IRDPSRAPIVirtualChannelManager **ppVal);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IRDPSRAPISharingSession2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IRDPSRAPISharingSession2 * This);
                   HRESULT ( STDMETHODCALLTYPE *ConnectToClient )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       __RPC__in BSTR bstrConnectionString);
                   HRESULT ( STDMETHODCALLTYPE *SetDesktopSharedRect )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       long left,
                       long top,
                       long right,
                       long bottom);
                   HRESULT ( STDMETHODCALLTYPE *GetDesktopSharedRect )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                        __RPC__out long *pleft,
                        __RPC__out long *ptop,
                        __RPC__out long *pright,
                        __RPC__out long *pbottom);
                   HRESULT ( STDMETHODCALLTYPE *ConnectUsingTransportStream )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       __RPC__in_opt IRDPSRAPITransportStream *pStream,
                       __RPC__in BSTR bstrGroup,
                       __RPC__in BSTR bstrAuthenticatedAttendeeName);
                            HRESULT ( STDMETHODCALLTYPE *get_FrameBuffer )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                                __RPC__deref_out_opt IRDPSRAPIFrameBuffer **ppVal);
                   HRESULT ( STDMETHODCALLTYPE *SendControlLevelChangeResponse )(
            __RPC__in IRDPSRAPISharingSession2 * This,
                       __RPC__in_opt IRDPSRAPIAttendee *pAttendee,
                       CTRL_LEVEL RequestedLevel,
                       long ReasonCode);
        END_INTERFACE
    } IRDPSRAPISharingSession2Vtbl;
    interface IRDPSRAPISharingSession2
    {
        CONST_VTBL struct IRDPSRAPISharingSession2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> put_ColorDepth(This,colorDepth) )
    ( (This)->lpVtbl -> get_ColorDepth(This,pColorDepth) )
    ( (This)->lpVtbl -> get_Properties(This,ppVal) )
    ( (This)->lpVtbl -> get_Attendees(This,ppVal) )
    ( (This)->lpVtbl -> get_Invitations(This,ppVal) )
    ( (This)->lpVtbl -> get_ApplicationFilter(This,ppVal) )
    ( (This)->lpVtbl -> get_VirtualChannelManager(This,ppVal) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> ConnectToClient(This,bstrConnectionString) )
    ( (This)->lpVtbl -> SetDesktopSharedRect(This,left,top,right,bottom) )
    ( (This)->lpVtbl -> GetDesktopSharedRect(This,pleft,ptop,pright,pbottom) )
    ( (This)->lpVtbl -> ConnectUsingTransportStream(This,pStream,bstrGroup,bstrAuthenticatedAttendeeName) )
    ( (This)->lpVtbl -> get_FrameBuffer(This,ppVal) )
    ( (This)->lpVtbl -> SendControlLevelChangeResponse(This,pAttendee,RequestedLevel,ReasonCode) )
typedef
enum __MIDL___MIDL_itf_rdpencomapi_0000_0028_0001
    {
        CONST_MAX_CHANNEL_MESSAGE_SIZE = 1024,
        CONST_MAX_CHANNEL_NAME_LEN = 8,
        CONST_MAX_LEGACY_CHANNEL_MESSAGE_SIZE = 409600,
        CONST_ATTENDEE_ID_EVERYONE = -1,
        CONST_ATTENDEE_ID_HOST = 0,
        CONST_CONN_INTERVAL = 50,
        CONST_ATTENDEE_ID_DEFAULT = 0xffffffff
    } RDPENCOMAPI_CONSTANTS;
typedef struct __ReferenceRemainingTypes__
    {
    CTRL_LEVEL __ctrlLevel__;
    ATTENDEE_DISCONNECT_REASON __attendeeDisconnectReason__;
    CHANNEL_PRIORITY __channelPriority__;
    CHANNEL_FLAGS __channelFlags__;
    CHANNEL_ACCESS_ENUM __channelAccessEnum__;
    RDPENCOMAPI_ATTENDEE_FLAGS __rdpencomapiAttendeeFlags__;
    RDPSRAPI_WND_FLAGS __rdpsrapiWndFlags__;
    RDPSRAPI_APP_FLAGS __rdpsrapiAppFlags__;
    } __ReferenceRemainingTypes__;
EXTERN_C const IID LIBID_RDPCOMAPILib;
EXTERN_C const IID DIID__IRDPSessionEvents;
    typedef struct _IRDPSessionEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IRDPSessionEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IRDPSessionEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IRDPSessionEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IRDPSessionEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IRDPSessionEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IRDPSessionEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IRDPSessionEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IRDPSessionEventsVtbl;
    interface _IRDPSessionEvents
    {
        CONST_VTBL struct _IRDPSessionEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_RDPViewer;
class DECLSPEC_UUID("32be5ed2-5c86-480f-a914-0ff8885a1b3f")
RDPViewer;
EXTERN_C const CLSID CLSID_RDPSRAPISessionProperties;
class DECLSPEC_UUID("dd7594ff-ea2a-4c06-8fdf-132de48b6510")
RDPSRAPISessionProperties;
EXTERN_C const CLSID CLSID_RDPSRAPIInvitationManager;
class DECLSPEC_UUID("53d9c9db-75ab-4271-948a-4c4eb36a8f2b")
RDPSRAPIInvitationManager;
EXTERN_C const CLSID CLSID_RDPSRAPIInvitation;
class DECLSPEC_UUID("49174dc6-0731-4b5e-8ee1-83a63d3868fa")
RDPSRAPIInvitation;
EXTERN_C const CLSID CLSID_RDPSRAPIAttendeeManager;
class DECLSPEC_UUID("d7b13a01-f7d4-42a6-8595-12fc8c24e851")
RDPSRAPIAttendeeManager;
EXTERN_C const CLSID CLSID_RDPSRAPIAttendee;
class DECLSPEC_UUID("74f93bb5-755f-488e-8a29-2390108aef55")
RDPSRAPIAttendee;
EXTERN_C const CLSID CLSID_RDPSRAPIAttendeeDisconnectInfo;
class DECLSPEC_UUID("b47d7250-5bdb-405d-b487-caad9c56f4f8")
RDPSRAPIAttendeeDisconnectInfo;
EXTERN_C const CLSID CLSID_RDPSRAPIApplicationFilter;
class DECLSPEC_UUID("e35ace89-c7e8-427e-a4f9-b9da072826bd")
RDPSRAPIApplicationFilter;
EXTERN_C const CLSID CLSID_RDPSRAPIApplicationList;
class DECLSPEC_UUID("9e31c815-7433-4876-97fb-ed59fe2baa22")
RDPSRAPIApplicationList;
EXTERN_C const CLSID CLSID_RDPSRAPIApplication;
class DECLSPEC_UUID("c116a484-4b25-4b9f-8a54-b934b06e57fa")
RDPSRAPIApplication;
EXTERN_C const CLSID CLSID_RDPSRAPIWindowList;
class DECLSPEC_UUID("9c21e2b8-5dd4-42cc-81ba-1c099852e6fa")
RDPSRAPIWindowList;
EXTERN_C const CLSID CLSID_RDPSRAPIWindow;
class DECLSPEC_UUID("03cf46db-ce45-4d36-86ed-ed28b74398bf")
RDPSRAPIWindow;
EXTERN_C const CLSID CLSID_RDPSRAPITcpConnectionInfo;
class DECLSPEC_UUID("be49db3f-ebb6-4278-8ce0-d5455833eaee")
RDPSRAPITcpConnectionInfo;
EXTERN_C const CLSID CLSID_RDPSession;
class DECLSPEC_UUID("9B78F0E6-3E05-4A5B-B2E8-E743A8956B65")
RDPSession;
EXTERN_C const CLSID CLSID_RDPSRAPIFrameBuffer;
class DECLSPEC_UUID("a4f66bcc-538e-4101-951d-30847adb5101")
RDPSRAPIFrameBuffer;
EXTERN_C const CLSID CLSID_RDPTransportStreamBuffer;
class DECLSPEC_UUID("8D4A1C69-F17F-4549-A699-761C6E6B5C0A")
RDPTransportStreamBuffer;
EXTERN_C const CLSID CLSID_RDPTransportStreamEvents;
class DECLSPEC_UUID("31E3AB20-5350-483f-9DC6-6748665EFDEB")
RDPTransportStreamEvents;
#if !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma deprecated(RDPViewer)
#pragma deprecated(IRDPSRAPIViewer)
#pragma deprecated(IRDPViewerInputSink)
#endif
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdpencomapi_0000_0029_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
