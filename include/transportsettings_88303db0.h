#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITransportSettingsInternal ITransportSettingsInternal;
typedef interface INetworkTransportSettings INetworkTransportSettings;
typedef interface INotificationTransportSync INotificationTransportSync;
#include "oaidl.h"
#include "ocidl.h"
#include "transportsettingcommon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct TRANSPORT_SETTING
    {
    TRANSPORT_SETTING_ID SettingId;
    ULONG *Length;
                    BYTE *Value;
    } TRANSPORT_SETTING;
extern RPC_IF_HANDLE __MIDL_itf_transportsettings_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_transportsettings_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITransportSettingsInternal;
    typedef struct ITransportSettingsInternalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITransportSettingsInternal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITransportSettingsInternal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITransportSettingsInternal * This);
        HRESULT ( STDMETHODCALLTYPE *ApplySetting )(
            ITransportSettingsInternal * This,
                            TRANSPORT_SETTING *Setting);
        HRESULT ( STDMETHODCALLTYPE *QuerySetting )(
            ITransportSettingsInternal * This,
                            TRANSPORT_SETTING *Setting);
        END_INTERFACE
    } ITransportSettingsInternalVtbl;
    interface ITransportSettingsInternal
    {
        CONST_VTBL struct ITransportSettingsInternalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ApplySetting(This,Setting) )
    ( (This)->lpVtbl -> QuerySetting(This,Setting) )
EXTERN_C const IID IID_INetworkTransportSettings;
    typedef struct INetworkTransportSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INetworkTransportSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INetworkTransportSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INetworkTransportSettings * This);
        HRESULT ( STDMETHODCALLTYPE *ApplySetting )(
            __RPC__in INetworkTransportSettings * This,
                       __RPC__in const TRANSPORT_SETTING_ID *SettingId,
                       ULONG LengthIn,
                                        __RPC__in_ecount_full_opt(LengthIn) const BYTE *ValueIn,
                        __RPC__out ULONG *LengthOut,
                                          __RPC__deref_out_ecount_full_opt(*LengthOut) BYTE **ValueOut);
        HRESULT ( STDMETHODCALLTYPE *QuerySetting )(
            __RPC__in INetworkTransportSettings * This,
                       __RPC__in const TRANSPORT_SETTING_ID *SettingId,
                       ULONG LengthIn,
                                        __RPC__in_ecount_full_opt(LengthIn) const BYTE *ValueIn,
                        __RPC__out ULONG *LengthOut,
                                          __RPC__deref_out_ecount_full_opt(*LengthOut) BYTE **ValueOut);
        END_INTERFACE
    } INetworkTransportSettingsVtbl;
    interface INetworkTransportSettings
    {
        CONST_VTBL struct INetworkTransportSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ApplySetting(This,SettingId,LengthIn,ValueIn,LengthOut,ValueOut) )
    ( (This)->lpVtbl -> QuerySetting(This,SettingId,LengthIn,ValueIn,LengthOut,ValueOut) )
EXTERN_C const IID IID_INotificationTransportSync;
    typedef struct INotificationTransportSyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INotificationTransportSync * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INotificationTransportSync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INotificationTransportSync * This);
        HRESULT ( STDMETHODCALLTYPE *CompleteDelivery )(
            __RPC__in INotificationTransportSync * This);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            __RPC__in INotificationTransportSync * This);
        END_INTERFACE
    } INotificationTransportSyncVtbl;
    interface INotificationTransportSync
    {
        CONST_VTBL struct INotificationTransportSyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompleteDelivery(This) )
    ( (This)->lpVtbl -> Flush(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_transportsettings_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_transportsettings_0000_0003_v0_0_s_ifspec;
}
