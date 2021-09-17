#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRemoteDesktopClientSettings IRemoteDesktopClientSettings;
typedef interface IRemoteDesktopClientActions IRemoteDesktopClientActions;
typedef interface IRemoteDesktopClientTouchPointer IRemoteDesktopClientTouchPointer;
typedef interface IRemoteDesktopClient IRemoteDesktopClient;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_rdpappcontainerclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdpappcontainerclient_0000_0000_v0_0_s_ifspec;
typedef
enum __MIDL_IRemoteDesktopClientSettings_0001
    {
        PasswordEncodingUTF8 = 0,
        PasswordEncodingUTF16LE = 1,
        PasswordEncodingUTF16BE = 2
    } PasswordEncodingType;
EXTERN_C const IID IID_IRemoteDesktopClientSettings;
    typedef struct IRemoteDesktopClientSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDesktopClientSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDesktopClientSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDesktopClientSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRemoteDesktopClientSettings * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRemoteDesktopClientSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRemoteDesktopClientSettings * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRemoteDesktopClientSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *ApplySettings )(
            __RPC__in IRemoteDesktopClientSettings * This,
                       __RPC__in BSTR rdpFileContents);
                   HRESULT ( STDMETHODCALLTYPE *RetrieveSettings )(
            __RPC__in IRemoteDesktopClientSettings * This,
                                __RPC__deref_out_opt BSTR *rdpFileContents);
                   HRESULT ( STDMETHODCALLTYPE *GetRdpProperty )(
            __RPC__in IRemoteDesktopClientSettings * This,
                       __RPC__in BSTR propertyName,
                                __RPC__out VARIANT *value);
                   HRESULT ( STDMETHODCALLTYPE *SetRdpProperty )(
            __RPC__in IRemoteDesktopClientSettings * This,
                       __RPC__in BSTR propertyName,
                       VARIANT value);
        END_INTERFACE
    } IRemoteDesktopClientSettingsVtbl;
    interface IRemoteDesktopClientSettings
    {
        CONST_VTBL struct IRemoteDesktopClientSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ApplySettings(This,rdpFileContents) )
    ( (This)->lpVtbl -> RetrieveSettings(This,rdpFileContents) )
    ( (This)->lpVtbl -> GetRdpProperty(This,propertyName,value) )
    ( (This)->lpVtbl -> SetRdpProperty(This,propertyName,value) )
typedef
enum __MIDL_IRemoteDesktopClientActions_0001
    {
        RemoteActionCharms = 0,
        RemoteActionAppbar = 1,
        RemoteActionSnap = 2,
        RemoteActionStartScreen = 3,
        RemoteActionAppSwitch = 4
    } RemoteActionType;
typedef
enum __MIDL_IRemoteDesktopClientActions_0002
    {
        SnapshotEncodingDataUri = 0
    } SnapshotEncodingType;
typedef
enum __MIDL_IRemoteDesktopClientActions_0003
    {
        SnapshotFormatPng = 0,
        SnapshotFormatJpeg = 1,
        SnapshotFormatBmp = 2
    } SnapshotFormatType;
EXTERN_C const IID IID_IRemoteDesktopClientActions;
    typedef struct IRemoteDesktopClientActionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDesktopClientActions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDesktopClientActions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDesktopClientActions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRemoteDesktopClientActions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRemoteDesktopClientActions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRemoteDesktopClientActions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRemoteDesktopClientActions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *SuspendScreenUpdates )(
            __RPC__in IRemoteDesktopClientActions * This);
                   HRESULT ( STDMETHODCALLTYPE *ResumeScreenUpdates )(
            __RPC__in IRemoteDesktopClientActions * This);
                   HRESULT ( STDMETHODCALLTYPE *ExecuteRemoteAction )(
            __RPC__in IRemoteDesktopClientActions * This,
                       RemoteActionType remoteAction);
                   HRESULT ( STDMETHODCALLTYPE *GetSnapshot )(
            __RPC__in IRemoteDesktopClientActions * This,
                       SnapshotEncodingType snapshotEncoding,
                       SnapshotFormatType snapshotFormat,
                       ULONG snapshotWidth,
                       ULONG snapshotHeight,
                                __RPC__deref_out_opt BSTR *snapshotData);
        END_INTERFACE
    } IRemoteDesktopClientActionsVtbl;
    interface IRemoteDesktopClientActions
    {
        CONST_VTBL struct IRemoteDesktopClientActionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SuspendScreenUpdates(This) )
    ( (This)->lpVtbl -> ResumeScreenUpdates(This) )
    ( (This)->lpVtbl -> ExecuteRemoteAction(This,remoteAction) )
    ( (This)->lpVtbl -> GetSnapshot(This,snapshotEncoding,snapshotFormat,snapshotWidth,snapshotHeight,snapshotData) )
EXTERN_C const IID IID_IRemoteDesktopClientTouchPointer;
    typedef struct IRemoteDesktopClientTouchPointerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDesktopClientTouchPointer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDesktopClientTouchPointer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRemoteDesktopClientTouchPointer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                       VARIANT_BOOL enabled);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                                __RPC__out VARIANT_BOOL *enabled);
                            HRESULT ( STDMETHODCALLTYPE *put_EventsEnabled )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                       VARIANT_BOOL eventsEnabled);
                            HRESULT ( STDMETHODCALLTYPE *get_EventsEnabled )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                                __RPC__out VARIANT_BOOL *eventsEnabled);
                            HRESULT ( STDMETHODCALLTYPE *put_PointerSpeed )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                       ULONG pointerSpeed);
                            HRESULT ( STDMETHODCALLTYPE *get_PointerSpeed )(
            __RPC__in IRemoteDesktopClientTouchPointer * This,
                                __RPC__out ULONG *pointerSpeed);
        END_INTERFACE
    } IRemoteDesktopClientTouchPointerVtbl;
    interface IRemoteDesktopClientTouchPointer
    {
        CONST_VTBL struct IRemoteDesktopClientTouchPointerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_EventsEnabled(This,eventsEnabled) )
    ( (This)->lpVtbl -> get_EventsEnabled(This,eventsEnabled) )
    ( (This)->lpVtbl -> put_PointerSpeed(This,pointerSpeed) )
    ( (This)->lpVtbl -> get_PointerSpeed(This,pointerSpeed) )
typedef
enum __MIDL_IRemoteDesktopClient_0001
    {
        KeyCombinationHome = 0,
        KeyCombinationLeft = 1,
        KeyCombinationUp = 2,
        KeyCombinationRight = 3,
        KeyCombinationDown = 4,
        KeyCombinationScroll = 5
    } KeyCombinationType;
EXTERN_C const IID IID_IRemoteDesktopClient;
    typedef struct IRemoteDesktopClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRemoteDesktopClient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRemoteDesktopClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRemoteDesktopClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRemoteDesktopClient * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRemoteDesktopClient * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRemoteDesktopClient * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRemoteDesktopClient * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IRemoteDesktopClient * This);
                   HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IRemoteDesktopClient * This);
                   HRESULT ( STDMETHODCALLTYPE *Reconnect )(
            __RPC__in IRemoteDesktopClient * This,
                       ULONG width,
                       ULONG height);
                            HRESULT ( STDMETHODCALLTYPE *get_Settings )(
            __RPC__in IRemoteDesktopClient * This,
                                __RPC__deref_out_opt IRemoteDesktopClientSettings **settings);
                            HRESULT ( STDMETHODCALLTYPE *get_Actions )(
            __RPC__in IRemoteDesktopClient * This,
                                __RPC__deref_out_opt IRemoteDesktopClientActions **actions);
                            HRESULT ( STDMETHODCALLTYPE *get_TouchPointer )(
            __RPC__in IRemoteDesktopClient * This,
                                __RPC__deref_out_opt IRemoteDesktopClientTouchPointer **touchPointer);
                   HRESULT ( STDMETHODCALLTYPE *DeleteSavedCredentials )(
            __RPC__in IRemoteDesktopClient * This,
                       __RPC__in BSTR serverName);
                   HRESULT ( STDMETHODCALLTYPE *UpdateSessionDisplaySettings )(
            __RPC__in IRemoteDesktopClient * This,
                       ULONG width,
                       ULONG height);
                   HRESULT ( STDMETHODCALLTYPE *attachEvent )(
            __RPC__in IRemoteDesktopClient * This,
                       __RPC__in BSTR eventName,
                       __RPC__in_opt IDispatch *callback);
                   HRESULT ( STDMETHODCALLTYPE *detachEvent )(
            __RPC__in IRemoteDesktopClient * This,
                       __RPC__in BSTR eventName,
                       __RPC__in_opt IDispatch *callback);
        END_INTERFACE
    } IRemoteDesktopClientVtbl;
    interface IRemoteDesktopClient
    {
        CONST_VTBL struct IRemoteDesktopClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Connect(This) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> Reconnect(This,width,height) )
    ( (This)->lpVtbl -> get_Settings(This,settings) )
    ( (This)->lpVtbl -> get_Actions(This,actions) )
    ( (This)->lpVtbl -> get_TouchPointer(This,touchPointer) )
    ( (This)->lpVtbl -> DeleteSavedCredentials(This,serverName) )
    ( (This)->lpVtbl -> UpdateSessionDisplaySettings(This,width,height) )
    ( (This)->lpVtbl -> attachEvent(This,eventName,callback) )
    ( (This)->lpVtbl -> detachEvent(This,eventName,callback) )
extern RPC_IF_HANDLE __MIDL_itf_rdpappcontainerclient_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rdpappcontainerclient_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
