#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMediaRadioManager IMediaRadioManager;
typedef interface IRadioInstanceCollection IRadioInstanceCollection;
typedef interface IRadioInstance IRadioInstance;
typedef interface IMediaRadioManagerNotifySink IMediaRadioManagerNotifySink;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _DEVICE_RADIO_STATE
    {
        DRS_RADIO_ON = 0,
        DRS_SW_RADIO_OFF = 1,
        DRS_HW_RADIO_OFF = 2,
        DRS_SW_HW_RADIO_OFF = 3,
        DRS_HW_RADIO_ON_UNCONTROLLABLE = 4,
        DRS_RADIO_INVALID = 5,
        DRS_HW_RADIO_OFF_UNCONTROLLABLE = 6,
        DRS_RADIO_MAX = DRS_HW_RADIO_OFF_UNCONTROLLABLE
    } DEVICE_RADIO_STATE;
typedef
enum _SYSTEM_RADIO_STATE
    {
        SRS_RADIO_ENABLED = 0,
        SRS_RADIO_DISABLED = 1
    } SYSTEM_RADIO_STATE;
extern RPC_IF_HANDLE __MIDL_itf_radiomgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_radiomgr_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMediaRadioManager;
    typedef struct IMediaRadioManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaRadioManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaRadioManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaRadioManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetRadioInstances )(
            IMediaRadioManager * This,
                        IRadioInstanceCollection **ppCollection);
        HRESULT ( STDMETHODCALLTYPE *OnSystemRadioStateChange )(
            IMediaRadioManager * This,
                       SYSTEM_RADIO_STATE sysRadioState,
                       UINT32 uTimeoutSec);
        END_INTERFACE
    } IMediaRadioManagerVtbl;
    interface IMediaRadioManager
    {
        CONST_VTBL struct IMediaRadioManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRadioInstances(This,ppCollection) )
    ( (This)->lpVtbl -> OnSystemRadioStateChange(This,sysRadioState,uTimeoutSec) )
EXTERN_C const IID IID_IRadioInstanceCollection;
    typedef struct IRadioInstanceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRadioInstanceCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRadioInstanceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRadioInstanceCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IRadioInstanceCollection * This,
                        UINT32 *pcInstance);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            IRadioInstanceCollection * This,
                       UINT32 uIndex,
                        IRadioInstance **ppRadioInstance);
        END_INTERFACE
    } IRadioInstanceCollectionVtbl;
    interface IRadioInstanceCollection
    {
        CONST_VTBL struct IRadioInstanceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcInstance) )
    ( (This)->lpVtbl -> GetAt(This,uIndex,ppRadioInstance) )
EXTERN_C const IID IID_IRadioInstance;
    typedef struct IRadioInstanceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRadioInstance * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRadioInstance * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRadioInstance * This);
        HRESULT ( STDMETHODCALLTYPE *GetRadioManagerSignature )(
            IRadioInstance * This,
                        GUID *pguidSignature);
        HRESULT ( STDMETHODCALLTYPE *GetInstanceSignature )(
            IRadioInstance * This,
                                BSTR *pbstrId);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            IRadioInstance * This,
                       LCID lcid,
                                BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetRadioState )(
            IRadioInstance * This,
                        DEVICE_RADIO_STATE *pRadioState);
        HRESULT ( STDMETHODCALLTYPE *SetRadioState )(
            IRadioInstance * This,
                       DEVICE_RADIO_STATE radioState,
                       UINT32 uTimeoutSec);
        BOOL ( STDMETHODCALLTYPE *IsMultiComm )(
            IRadioInstance * This);
        BOOL ( STDMETHODCALLTYPE *IsAssociatingDevice )(
            IRadioInstance * This);
        END_INTERFACE
    } IRadioInstanceVtbl;
    interface IRadioInstance
    {
        CONST_VTBL struct IRadioInstanceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRadioManagerSignature(This,pguidSignature) )
    ( (This)->lpVtbl -> GetInstanceSignature(This,pbstrId) )
    ( (This)->lpVtbl -> GetFriendlyName(This,lcid,pbstrName) )
    ( (This)->lpVtbl -> GetRadioState(This,pRadioState) )
    ( (This)->lpVtbl -> SetRadioState(This,radioState,uTimeoutSec) )
    ( (This)->lpVtbl -> IsMultiComm(This) )
    ( (This)->lpVtbl -> IsAssociatingDevice(This) )
EXTERN_C const IID IID_IMediaRadioManagerNotifySink;
    typedef struct IMediaRadioManagerNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMediaRadioManagerNotifySink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMediaRadioManagerNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMediaRadioManagerNotifySink * This);
        HRESULT ( STDMETHODCALLTYPE *OnInstanceAdd )(
            IMediaRadioManagerNotifySink * This,
                       IRadioInstance *pRadioInstance);
        HRESULT ( STDMETHODCALLTYPE *OnInstanceRemove )(
            IMediaRadioManagerNotifySink * This,
                               BSTR bstrRadioInstanceId);
        HRESULT ( STDMETHODCALLTYPE *OnInstanceRadioChange )(
            IMediaRadioManagerNotifySink * This,
                               BSTR bstrRadioInstanceId,
                       DEVICE_RADIO_STATE radioState);
        END_INTERFACE
    } IMediaRadioManagerNotifySinkVtbl;
    interface IMediaRadioManagerNotifySink
    {
        CONST_VTBL struct IMediaRadioManagerNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnInstanceAdd(This,pRadioInstance) )
    ( (This)->lpVtbl -> OnInstanceRemove(This,bstrRadioInstanceId) )
    ( (This)->lpVtbl -> OnInstanceRadioChange(This,bstrRadioInstanceId,radioState) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_radiomgr_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_radiomgr_0000_0004_v0_0_s_ifspec;
}
