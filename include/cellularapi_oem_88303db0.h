#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IOemCellular IOemCellular;
typedef interface IOemCellularDataStore IOemCellularDataStore;
typedef interface IOemCellularModem IOemCellularModem;
typedef interface IOemCellularModemEx IOemCellularModemEx;
typedef interface IOemCan IOemCan;
typedef interface IOemCanExtForIMS IOemCanExtForIMS;
typedef interface IOemSlot IOemSlot;
typedef interface IOemUicc IOemUicc;
typedef interface IOemUiccApp IOemUiccApp;
typedef interface IOemUiccAppEx IOemUiccAppEx;
typedef interface IOemUiccAppEx2 IOemUiccAppEx2;
typedef interface IOem3GPPSupServices IOem3GPPSupServices;
typedef interface IOemCellularModemExistenceChange IOemCellularModemExistenceChange;
typedef interface IOemCellularCanAvailabilityChange IOemCellularCanAvailabilityChange;
typedef interface IOemSlotChange IOemSlotChange;
typedef interface IOemCanRegistrationStateChange IOemCanRegistrationStateChange;
typedef interface IOemSlotStateChange IOemSlotStateChange;
typedef interface IOemUiccChange IOemUiccChange;
typedef interface IOemRegistrationStatus IOemRegistrationStatus;
typedef interface IPowerStateChange IPowerStateChange;
typedef interface IModemOpaqueCommandCompletion IModemOpaqueCommandCompletion;
typedef interface IOpaqueModemNotifications IOpaqueModemNotifications;
typedef interface ISetRFStateCompletion ISetRFStateCompletion;
typedef interface IGetRFStateCompletion IGetRFStateCompletion;
typedef interface IGetRFStateExCompletion IGetRFStateExCompletion;
typedef interface ICanInfoCompletion ICanInfoCompletion;
typedef interface IPositionInfoCompletion IPositionInfoCompletion;
typedef interface IPinLockStateCompletion IPinLockStateCompletion;
typedef interface IGetRecordStatusCompletion IGetRecordStatusCompletion;
typedef interface IReadRecordCompletion IReadRecordCompletion;
typedef interface IWriteRecordCompletion IWriteRecordCompletion;
typedef interface IIMSICompletion IIMSICompletion;
typedef interface IGetSIDNIDCompletion IGetSIDNIDCompletion;
typedef interface IGetNAICompletion IGetNAICompletion;
typedef interface ISubscriberNumbersCompletion ISubscriberNumbersCompletion;
typedef interface IGetPLMNwAcT IGetPLMNwAcT;
typedef interface ISetPLMNwAcT ISetPLMNwAcT;
typedef interface IGetCallForwardingCompletion IGetCallForwardingCompletion;
typedef interface ISimpleModemCompletion ISimpleModemCompletion;
typedef interface ICallWaitingSettingsCompletion ICallWaitingSettingsCompletion;
typedef interface IOemIMSStatusChange IOemIMSStatusChange;
typedef class OemCellular OemCellular;
#include "oaidl.h"
#include "ocidl.h"
#include "RilAPITypes.h"
extern "C"{
DEFINE_GUID(SID_3GPP_SUPSVCMODEL, 0xd7d08e07, 0xd767, 0x4478, 0xb1, 0x4a, 0xee, 0xcc, 0x87, 0xea, 0x12, 0xf7);
enum MODEMPOWERSTATE
    {
        MODEM_POWER_OFF = 0x1,
        MODEM_POWER_GOING_ON = 0x2,
        MODEM_POWER_ON = 0x3,
        MODEM_POWER_GOING_OFF = 0x4,
        MODEM_POWER_SHUTING_DOWN = 0x5
    } ;
typedef struct RILSIDNID RILSIDNID;
typedef struct RILSIDNID *LPRILSIDNID;
typedef struct RILNAI NAI;
typedef struct RILNAI *LPRILNAI;
enum RILNAIPARAMMASK
    {
        RIL_PARAM_NAI_NAI = 0x1,
        RIL_PARAM_NAI_ALL = 0x1
    } ;
struct RILNAI
    {
    DWORD cbSize;
    DWORD dwParams;
    WCHAR wszNAI[ 73 ];
    } ;
enum RILSIDNIDPARAMMASK
    {
        RIL_PARAM_SIDNID_SID = 0x1,
        RIL_PARAM_SIDNID_NID = 0x2,
        RIL_PARAM_SIDNID_ALL = 0x3
    } ;
typedef enum RILSIDNIDPARAMMASK RILSIDNIDPARAMMASK;
struct RILSIDNID
    {
    DWORD cbSize;
    DWORD dwParams;
    DWORD dwSid;
    DWORD dwNid;
    } ;
enum UICCDATASTOREACCESSMODE
    {
        UICCDATASTORE_PUBLIC = 0x1,
        UICCDATASTORE_PRIVATE = 0x2
    } ;
typedef enum UICCDATASTOREACCESSMODE UICCDATASTOREACCESSMODE;
struct UICCDATASTOREENTRY
    {
    DWORD position;
    DWORD lengthIccId;
    BYTE iccId[ 10 ];
    } ;
struct UICCDATASTOREINFO
    {
    DWORD dwCount;
    struct UICCDATASTOREENTRY entries[ 10 ];
    } ;
typedef struct UICCDATASTOREINFO UICCDATASTOREINFO;
extern RPC_IF_HANDLE __MIDL_itf_cellularapi_oem_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cellularapi_oem_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IOemCellular;
    typedef struct IOemCellularVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCellular * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCellular * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCellular * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOemModemExistenceChanges )(
            __RPC__in IOemCellular * This,
                       __RPC__in_opt IOemCellularModemExistenceChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForOemModemExistenceChanges )(
            __RPC__in IOemCellular * This,
                       __RPC__in_opt IOemCellularModemExistenceChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IOemCellular * This);
                           HRESULT ( STDMETHODCALLTYPE *WaitForDestroyCompletion )(
            __RPC__in IOemCellular * This);
        END_INTERFACE
    } IOemCellularVtbl;
    interface IOemCellular
    {
        CONST_VTBL struct IOemCellularVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterForOemModemExistenceChanges(This,pCallback) )
    ( (This)->lpVtbl -> UnregisterForOemModemExistenceChanges(This,pCallback) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> WaitForDestroyCompletion(This) )
EXTERN_C const IID IID_IOemCellularDataStore;
    typedef struct IOemCellularDataStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCellularDataStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCellularDataStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCellularDataStore * This);
                           HRESULT ( STDMETHODCALLTYPE *SetNamedValue )(
            __RPC__in IOemCellularDataStore * This,
                       __RPC__in const BYTE *pIccId,
                       DWORD lengthIccId,
                       __RPC__in LPCWSTR pClientId,
                       __RPC__in LPCWSTR pPropertyName,
                       __RPC__in const BYTE *pPropertyValue,
                       DWORD lengthValue,
                       UICCDATASTOREACCESSMODE accessMode);
                           HRESULT ( STDMETHODCALLTYPE *GetNamedValue )(
            __RPC__in IOemCellularDataStore * This,
                       __RPC__in const BYTE *pIccId,
                       DWORD lengthIccId,
                       __RPC__in LPCWSTR pClientId,
                       __RPC__in LPCWSTR pPropertyName,
                        __RPC__out BYTE *pPropertyValue,
                            __RPC__inout DWORD *pLengthValue,
                       UICCDATASTOREACCESSMODE accessMode);
                           HRESULT ( STDMETHODCALLTYPE *GetUiccDataStoreInfo )(
            __RPC__in IOemCellularDataStore * This,
                            __RPC__inout struct UICCDATASTOREINFO *pDatastoreInfo);
        END_INTERFACE
    } IOemCellularDataStoreVtbl;
    interface IOemCellularDataStore
    {
        CONST_VTBL struct IOemCellularDataStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNamedValue(This,pIccId,lengthIccId,pClientId,pPropertyName,pPropertyValue,lengthValue,accessMode) )
    ( (This)->lpVtbl -> GetNamedValue(This,pIccId,lengthIccId,pClientId,pPropertyName,pPropertyValue,pLengthValue,accessMode) )
    ( (This)->lpVtbl -> GetUiccDataStoreInfo(This,pDatastoreInfo) )
EXTERN_C const IID IID_IOemCellularModem;
    typedef struct IOemCellularModemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCellularModem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCellularModem * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOemCanAvailabilityChanges )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IOemCellularCanAvailabilityChange *pCallBack);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForOemCanAvailabilityChanges )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IOemCellularCanAvailabilityChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOemSlotChanges )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IOemSlotChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForOemSlotChanges )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IOemSlotChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForPowerStateChanges )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IPowerStateChange *pCallback,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForPowerStateChanges )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IPowerStateChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *SendModemOpaqueCommand )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IModemOpaqueCommandCompletion *pCallback,
                                __RPC__in_ecount_full(cbSize) BYTE *pOpaquePayload,
                       DWORD cbSize,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOpaqueModemNotifications )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IOpaqueModemNotifications *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *UnRegisterForOpaqueModemNotifications )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IOpaqueModemNotifications *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *SetRFState )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt ISetRFStateCompletion *pCallback,
                       DWORD dwRFPowerState,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *GetRFState )(
            __RPC__in IOemCellularModem * This,
                       __RPC__in_opt IGetRFStateCompletion *pCallback,
                       INT_PTR context);
        END_INTERFACE
    } IOemCellularModemVtbl;
    interface IOemCellularModem
    {
        CONST_VTBL struct IOemCellularModemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterForOemCanAvailabilityChanges(This,pCallBack) )
    ( (This)->lpVtbl -> UnregisterForOemCanAvailabilityChanges(This,pCallback) )
    ( (This)->lpVtbl -> RegisterForOemSlotChanges(This,pCallback) )
    ( (This)->lpVtbl -> UnregisterForOemSlotChanges(This,pCallback) )
    ( (This)->lpVtbl -> RegisterForPowerStateChanges(This,pCallback,context) )
    ( (This)->lpVtbl -> UnregisterForPowerStateChanges(This,pCallback) )
    ( (This)->lpVtbl -> SendModemOpaqueCommand(This,pCallback,pOpaquePayload,cbSize,context) )
    ( (This)->lpVtbl -> RegisterForOpaqueModemNotifications(This,pCallback) )
    ( (This)->lpVtbl -> UnRegisterForOpaqueModemNotifications(This,pCallback) )
    ( (This)->lpVtbl -> SetRFState(This,pCallback,dwRFPowerState,context) )
    ( (This)->lpVtbl -> GetRFState(This,pCallback,context) )
EXTERN_C const IID IID_IOemCellularModemEx;
    typedef struct IOemCellularModemExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCellularModemEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCellularModemEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCellularModemEx * This);
                           HRESULT ( STDMETHODCALLTYPE *SetRFState )(
            __RPC__in IOemCellularModemEx * This,
                       __RPC__in_opt ISetRFStateCompletion *pCallback,
                       __RPC__in LPRILRFSTATE lpRFState,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *GetRFState )(
            __RPC__in IOemCellularModemEx * This,
                       __RPC__in_opt IGetRFStateExCompletion *pCallback,
                       INT_PTR context);
        END_INTERFACE
    } IOemCellularModemExVtbl;
    interface IOemCellularModemEx
    {
        CONST_VTBL struct IOemCellularModemExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetRFState(This,pCallback,lpRFState,context) )
    ( (This)->lpVtbl -> GetRFState(This,pCallback,context) )
EXTERN_C const IID IID_IOemCan;
    typedef struct IOemCanVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCan * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCan * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCan * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOemCanRegistrationChanges )(
            __RPC__in IOemCan * This,
                       __RPC__in_opt IOemCanRegistrationStateChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForOemCanRegistrationChanges )(
            __RPC__in IOemCan * This,
                       __RPC__in_opt IOemCanRegistrationStateChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in IOemCan * This,
                       enum RILDEVICEINFORMATION deviceInfo,
                       __RPC__in_opt ICanInfoCompletion *pCallback,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *GetPositionInfo )(
            __RPC__in IOemCan * This,
                       __RPC__in_opt IPositionInfoCompletion *pCallback,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *QueryService )(
            __RPC__in IOemCan * This,
                       __RPC__in REFGUID guidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IOemCanVtbl;
    interface IOemCan
    {
        CONST_VTBL struct IOemCanVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterForOemCanRegistrationChanges(This,pCallback) )
    ( (This)->lpVtbl -> UnregisterForOemCanRegistrationChanges(This,pCallback) )
    ( (This)->lpVtbl -> GetInfo(This,deviceInfo,pCallback,context) )
    ( (This)->lpVtbl -> GetPositionInfo(This,pCallback,context) )
    ( (This)->lpVtbl -> QueryService(This,guidService,riid,ppv) )
EXTERN_C const IID IID_IOemCanExtForIMS;
    typedef struct IOemCanExtForIMSVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCanExtForIMS * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCanExtForIMS * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCanExtForIMS * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOemIMSStatusChanges )(
            __RPC__in IOemCanExtForIMS * This,
                       __RPC__in_opt IOemIMSStatusChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForOemIMSStatusChanges )(
            __RPC__in IOemCanExtForIMS * This,
                       __RPC__in_opt IOemIMSStatusChange *pCallback);
        END_INTERFACE
    } IOemCanExtForIMSVtbl;
    interface IOemCanExtForIMS
    {
        CONST_VTBL struct IOemCanExtForIMSVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterForOemIMSStatusChanges(This,pCallback) )
    ( (This)->lpVtbl -> UnregisterForOemIMSStatusChanges(This,pCallback) )
EXTERN_C const IID IID_IOemSlot;
    typedef struct IOemSlotVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemSlot * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemSlot * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemSlot * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOemSlotChanges )(
            __RPC__in IOemSlot * This,
                       __RPC__in_opt IOemSlotStateChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForOemSlotChanges )(
            __RPC__in IOemSlot * This,
                       __RPC__in_opt IOemSlotStateChange *pCallback);
        END_INTERFACE
    } IOemSlotVtbl;
    interface IOemSlot
    {
        CONST_VTBL struct IOemSlotVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterForOemSlotChanges(This,pCallback) )
    ( (This)->lpVtbl -> UnregisterForOemSlotChanges(This,pCallback) )
EXTERN_C const IID IID_IOemUicc;
    typedef struct IOemUiccVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemUicc * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemUicc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemUicc * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterForOemUiccChanges )(
            __RPC__in IOemUicc * This,
                       __RPC__in_opt IOemUiccChange *pCallback);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterForOemUiccChanges )(
            __RPC__in IOemUicc * This,
                       __RPC__in_opt IOemUiccChange *pCallback);
        END_INTERFACE
    } IOemUiccVtbl;
    interface IOemUicc
    {
        CONST_VTBL struct IOemUiccVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterForOemUiccChanges(This,pCallback) )
    ( (This)->lpVtbl -> UnregisterForOemUiccChanges(This,pCallback) )
EXTERN_C const IID IID_IOemUiccApp;
    typedef struct IOemUiccAppVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemUiccApp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemUiccApp * This);
                           HRESULT ( STDMETHODCALLTYPE *GetAppId )(
            __RPC__in IOemUiccApp * This,
                        __RPC__out BYTE *appId,
                            __RPC__inout DWORD *length);
                           HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IOemUiccApp * This,
                        __RPC__out RILUICCAPPTYPE *pType);
                           HRESULT ( STDMETHODCALLTYPE *GetPinLockState )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IPinLockStateCompletion *pCallback,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *ReadRecord )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IReadRecordCompletion *pCallback,
                       DWORD fileID,
                       DWORD recordIndex,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *WriteRecord )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IWriteRecordCompletion *pCallback,
                       DWORD fileID,
                       DWORD recordIndex,
                       __RPC__in const BYTE *bData,
                       DWORD cbSize,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *GetRecordStatusOnFilePath )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IGetRecordStatusCompletion *pCallback,
                                __RPC__in_ecount_full(filePathLen) const WORD *uiccFilePath,
                       DWORD filePathLen,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *ReadRecordOnFilePath )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IReadRecordCompletion *pCallback,
                                __RPC__in_ecount_full(filePathLen) const WORD *uiccFilePath,
                       DWORD filePathLen,
                       DWORD recordIndex,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *WriteRecordOnFilePath )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IWriteRecordCompletion *pCallback,
                                __RPC__in_ecount_full(filePathLen) const WORD *uiccFilePath,
                       DWORD filePathLen,
                       DWORD recordIndex,
                       __RPC__in const BYTE *bData,
                       DWORD cbSize,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *GetIMSI )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IIMSICompletion *pCallback,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *GetSIDNID )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt IGetSIDNIDCompletion *pCallback,
                       INT_PTR context);
                           HRESULT ( STDMETHODCALLTYPE *GetSubscriberNumbers )(
            __RPC__in IOemUiccApp * This,
                       __RPC__in_opt ISubscriberNumbersCompletion *pCallback,
                       INT_PTR context);
        END_INTERFACE
    } IOemUiccAppVtbl;
    interface IOemUiccApp
    {
        CONST_VTBL struct IOemUiccAppVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAppId(This,appId,length) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> GetPinLockState(This,pCallback,context) )
    ( (This)->lpVtbl -> ReadRecord(This,pCallback,fileID,recordIndex,context) )
    ( (This)->lpVtbl -> WriteRecord(This,pCallback,fileID,recordIndex,bData,cbSize,context) )
    ( (This)->lpVtbl -> GetRecordStatusOnFilePath(This,pCallback,uiccFilePath,filePathLen,context) )
    ( (This)->lpVtbl -> ReadRecordOnFilePath(This,pCallback,uiccFilePath,filePathLen,recordIndex,context) )
    ( (This)->lpVtbl -> WriteRecordOnFilePath(This,pCallback,uiccFilePath,filePathLen,recordIndex,bData,cbSize,context) )
    ( (This)->lpVtbl -> GetIMSI(This,pCallback,context) )
    ( (This)->lpVtbl -> GetSIDNID(This,pCallback,context) )
    ( (This)->lpVtbl -> GetSubscriberNumbers(This,pCallback,context) )
EXTERN_C const IID IID_IOemUiccAppEx;
    typedef struct IOemUiccAppExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemUiccAppEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemUiccAppEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemUiccAppEx * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPreferredOperatorList )(
            __RPC__in IOemUiccAppEx * This,
                       __RPC__in_opt IGetPLMNwAcT *pResponseHandler);
                           HRESULT ( STDMETHODCALLTYPE *SetPreferredOperatorList )(
            __RPC__in IOemUiccAppEx * This,
                       __RPC__in_opt ISetPLMNwAcT *pResponseHandler,
                                __RPC__in_ecount_full(dwLength) RILOPERATORNAMES *pOperatorList,
                       DWORD dwLength);
        END_INTERFACE
    } IOemUiccAppExVtbl;
    interface IOemUiccAppEx
    {
        CONST_VTBL struct IOemUiccAppExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPreferredOperatorList(This,pResponseHandler) )
    ( (This)->lpVtbl -> SetPreferredOperatorList(This,pResponseHandler,pOperatorList,dwLength) )
EXTERN_C const IID IID_IOemUiccAppEx2;
    typedef struct IOemUiccAppEx2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemUiccAppEx2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemUiccAppEx2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemUiccAppEx2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetNAI )(
            __RPC__in IOemUiccAppEx2 * This,
                       __RPC__in_opt IGetNAICompletion *pCallback,
                       INT_PTR context);
        END_INTERFACE
    } IOemUiccAppEx2Vtbl;
    interface IOemUiccAppEx2
    {
        CONST_VTBL struct IOemUiccAppEx2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNAI(This,pCallback,context) )
EXTERN_C const IID IID_IOem3GPPSupServices;
    typedef struct IOem3GPPSupServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOem3GPPSupServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOem3GPPSupServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOem3GPPSupServices * This);
                           HRESULT ( STDMETHODCALLTYPE *GetCallForwardingSettings )(
            __RPC__in IOem3GPPSupServices * This,
                       __RPC__in_opt IGetCallForwardingCompletion *pCallback,
                       INT_PTR context,
                       RILCALLFORWARDINGSETTINGSREASON reason,
                       BOOL allClasses,
                       DWORD infoClasses);
                           HRESULT ( STDMETHODCALLTYPE *SetCallForwardingStatus )(
            __RPC__in IOem3GPPSupServices * This,
                       __RPC__in_opt ISimpleModemCompletion *pCallback,
                       INT_PTR context,
                       RILCALLFORWARDINGSETTINGSREASON dwReason,
                       BOOL fAllClasses,
                       DWORD dwInfoClasses,
                       RILSERVICESETTINGSSTATUS dwStatus);
                           HRESULT ( STDMETHODCALLTYPE *AddCallForwarding )(
            __RPC__in IOem3GPPSupServices * This,
                       __RPC__in_opt ISimpleModemCompletion *pCallback,
                       INT_PTR context,
                       RILCALLFORWARDINGSETTINGSREASON dwReason,
                       __RPC__in const RILCALLFORWARDINGSETTINGS *lpSettings);
                           HRESULT ( STDMETHODCALLTYPE *RemoveCallForwarding )(
            __RPC__in IOem3GPPSupServices * This,
                       __RPC__in_opt ISimpleModemCompletion *pCallback,
                       INT_PTR context,
                       RILCALLFORWARDINGSETTINGSREASON dwReason,
                       DWORD dwInfoClasses);
                           HRESULT ( STDMETHODCALLTYPE *GetCallWaitingSettings )(
            __RPC__in IOem3GPPSupServices * This,
                       __RPC__in_opt ICallWaitingSettingsCompletion *pCallback,
                       INT_PTR context,
                       BOOL fAllClasses,
                       DWORD dwInfoClasses);
                           HRESULT ( STDMETHODCALLTYPE *SetCallWaitingSettings )(
            __RPC__in IOem3GPPSupServices * This,
                       __RPC__in_opt ISimpleModemCompletion *pCallback,
                       INT_PTR context,
                       BOOL fAllClasses,
                       DWORD dwInfoClasses,
                       RILSERVICESETTINGSSTATUS dwStatus);
        END_INTERFACE
    } IOem3GPPSupServicesVtbl;
    interface IOem3GPPSupServices
    {
        CONST_VTBL struct IOem3GPPSupServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCallForwardingSettings(This,pCallback,context,reason,allClasses,infoClasses) )
    ( (This)->lpVtbl -> SetCallForwardingStatus(This,pCallback,context,dwReason,fAllClasses,dwInfoClasses,dwStatus) )
    ( (This)->lpVtbl -> AddCallForwarding(This,pCallback,context,dwReason,lpSettings) )
    ( (This)->lpVtbl -> RemoveCallForwarding(This,pCallback,context,dwReason,dwInfoClasses) )
    ( (This)->lpVtbl -> GetCallWaitingSettings(This,pCallback,context,fAllClasses,dwInfoClasses) )
    ( (This)->lpVtbl -> SetCallWaitingSettings(This,pCallback,context,fAllClasses,dwInfoClasses,dwStatus) )
EXTERN_C const IID IID_IOemCellularModemExistenceChange;
    typedef struct IOemCellularModemExistenceChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCellularModemExistenceChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCellularModemExistenceChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCellularModemExistenceChange * This);
                           HRESULT ( STDMETHODCALLTYPE *OnOemModemAdded )(
            __RPC__in IOemCellularModemExistenceChange * This,
                       __RPC__in_opt IOemCellularModem *pModem);
                           HRESULT ( STDMETHODCALLTYPE *OnOemModemRemoved )(
            __RPC__in IOemCellularModemExistenceChange * This,
                       __RPC__in_opt IOemCellularModem *pModem);
                           HRESULT ( STDMETHODCALLTYPE *OnOemModemExistenceDone )(
            __RPC__in IOemCellularModemExistenceChange * This);
        END_INTERFACE
    } IOemCellularModemExistenceChangeVtbl;
    interface IOemCellularModemExistenceChange
    {
        CONST_VTBL struct IOemCellularModemExistenceChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnOemModemAdded(This,pModem) )
    ( (This)->lpVtbl -> OnOemModemRemoved(This,pModem) )
    ( (This)->lpVtbl -> OnOemModemExistenceDone(This) )
EXTERN_C const IID IID_IOemCellularCanAvailabilityChange;
    typedef struct IOemCellularCanAvailabilityChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCellularCanAvailabilityChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCellularCanAvailabilityChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCellularCanAvailabilityChange * This);
                           HRESULT ( STDMETHODCALLTYPE *OnOemCanAdded )(
            __RPC__in IOemCellularCanAvailabilityChange * This,
                       __RPC__in_opt IOemCan *pCan);
                           HRESULT ( STDMETHODCALLTYPE *OnOemCanRemoved )(
            __RPC__in IOemCellularCanAvailabilityChange * This,
                       __RPC__in_opt IOemCan *pCan);
                           HRESULT ( STDMETHODCALLTYPE *OnOemCanDone )(
            __RPC__in IOemCellularCanAvailabilityChange * This);
        END_INTERFACE
    } IOemCellularCanAvailabilityChangeVtbl;
    interface IOemCellularCanAvailabilityChange
    {
        CONST_VTBL struct IOemCellularCanAvailabilityChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnOemCanAdded(This,pCan) )
    ( (This)->lpVtbl -> OnOemCanRemoved(This,pCan) )
    ( (This)->lpVtbl -> OnOemCanDone(This) )
EXTERN_C const IID IID_IOemSlotChange;
    typedef struct IOemSlotChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemSlotChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemSlotChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemSlotChange * This);
                           HRESULT ( STDMETHODCALLTYPE *OnOemSlotAdded )(
            __RPC__in IOemSlotChange * This,
                       __RPC__in_opt IOemSlot *pSlot,
                       __RPC__in_opt IOemCellularModem *pCellularModem);
                           HRESULT ( STDMETHODCALLTYPE *OnOemSlotRemoved )(
            __RPC__in IOemSlotChange * This,
                       __RPC__in_opt IOemSlot *pSlot,
                       __RPC__in_opt IOemCellularModem *pCellularModem);
                           HRESULT ( STDMETHODCALLTYPE *OnOemSlotExistenceDone )(
            __RPC__in IOemSlotChange * This,
                       __RPC__in_opt IOemCellularModem *pCellularModem);
        END_INTERFACE
    } IOemSlotChangeVtbl;
    interface IOemSlotChange
    {
        CONST_VTBL struct IOemSlotChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnOemSlotAdded(This,pSlot,pCellularModem) )
    ( (This)->lpVtbl -> OnOemSlotRemoved(This,pSlot,pCellularModem) )
    ( (This)->lpVtbl -> OnOemSlotExistenceDone(This,pCellularModem) )
EXTERN_C const IID IID_IOemCanRegistrationStateChange;
    typedef struct IOemCanRegistrationStateChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemCanRegistrationStateChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemCanRegistrationStateChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemCanRegistrationStateChange * This);
                           HRESULT ( STDMETHODCALLTYPE *OnOemRegistrationStatusChanged )(
            __RPC__in IOemCanRegistrationStateChange * This,
                                __RPC__in_ecount_full(cStatus) IOemRegistrationStatus **status,
                       DWORD cStatus);
        END_INTERFACE
    } IOemCanRegistrationStateChangeVtbl;
    interface IOemCanRegistrationStateChange
    {
        CONST_VTBL struct IOemCanRegistrationStateChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnOemRegistrationStatusChanged(This,status,cStatus) )
EXTERN_C const IID IID_IOemSlotStateChange;
    typedef struct IOemSlotStateChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemSlotStateChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemSlotStateChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemSlotStateChange * This);
                           HRESULT ( STDMETHODCALLTYPE *OnOemSlotStateChanged )(
            __RPC__in IOemSlotStateChange * This,
                       RILUICCSLOTSTATE currentSlotState,
                       __RPC__in_opt IOemSlot *pSlot);
                           HRESULT ( STDMETHODCALLTYPE *OnOemUiccAdded )(
            __RPC__in IOemSlotStateChange * This,
                       __RPC__in_opt IOemUicc *pUicc,
                       __RPC__in_opt IOemSlot *pSlot);
                           HRESULT ( STDMETHODCALLTYPE *OnOemUiccRemoved )(
            __RPC__in IOemSlotStateChange * This,
                       __RPC__in_opt IOemUicc *pUicc,
                       __RPC__in_opt IOemSlot *pSlot);
                           HRESULT ( STDMETHODCALLTYPE *OnOemFirstSnapshotDone )(
            __RPC__in IOemSlotStateChange * This,
                       __RPC__in_opt IOemSlot *pSlot);
        END_INTERFACE
    } IOemSlotStateChangeVtbl;
    interface IOemSlotStateChange
    {
        CONST_VTBL struct IOemSlotStateChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnOemSlotStateChanged(This,currentSlotState,pSlot) )
    ( (This)->lpVtbl -> OnOemUiccAdded(This,pUicc,pSlot) )
    ( (This)->lpVtbl -> OnOemUiccRemoved(This,pUicc,pSlot) )
    ( (This)->lpVtbl -> OnOemFirstSnapshotDone(This,pSlot) )
EXTERN_C const IID IID_IOemUiccChange;
    typedef struct IOemUiccChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemUiccChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemUiccChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemUiccChange * This);
                           HRESULT ( STDMETHODCALLTYPE *UiccIccId )(
            __RPC__in IOemUiccChange * This,
                       __RPC__in BYTE *iccID,
                       DWORD length,
                       __RPC__in_opt IOemUicc *pUicc);
                           HRESULT ( STDMETHODCALLTYPE *OnOemUiccAppAdded )(
            __RPC__in IOemUiccChange * This,
                       __RPC__in_opt IOemUiccApp *uiccApp,
                       __RPC__in_opt IOemUicc *pUicc);
                           HRESULT ( STDMETHODCALLTYPE *OnOemUiccAppRemoved )(
            __RPC__in IOemUiccChange * This,
                       __RPC__in_opt IOemUiccApp *uiccApp,
                       __RPC__in_opt IOemUicc *pUicc);
                           HRESULT ( STDMETHODCALLTYPE *OnOemUiccAppFetchDone )(
            __RPC__in IOemUiccChange * This,
                       __RPC__in_opt IOemUicc *pUicc);
        END_INTERFACE
    } IOemUiccChangeVtbl;
    interface IOemUiccChange
    {
        CONST_VTBL struct IOemUiccChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UiccIccId(This,iccID,length,pUicc) )
    ( (This)->lpVtbl -> OnOemUiccAppAdded(This,uiccApp,pUicc) )
    ( (This)->lpVtbl -> OnOemUiccAppRemoved(This,uiccApp,pUicc) )
    ( (This)->lpVtbl -> OnOemUiccAppFetchDone(This,pUicc) )
EXTERN_C const IID IID_IOemRegistrationStatus;
    typedef struct IOemRegistrationStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemRegistrationStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemRegistrationStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemRegistrationStatus * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Subscription )(
            __RPC__in IOemRegistrationStatus * This,
                                __RPC__deref_out_opt IOemUiccApp **ret);
                                    HRESULT ( STDMETHODCALLTYPE *get_SystemType )(
            __RPC__in IOemRegistrationStatus * This,
                                __RPC__out enum RILSYSTEMTYPE *systemType);
                                    HRESULT ( STDMETHODCALLTYPE *get_RejectReason )(
            __RPC__in IOemRegistrationStatus * This,
                                __RPC__out DWORD *reason);
                                    HRESULT ( STDMETHODCALLTYPE *get_OperatorName )(
            __RPC__in IOemRegistrationStatus * This,
                                __RPC__out struct RILOPERATORNAMES *name);
                                    HRESULT ( STDMETHODCALLTYPE *get_RegistrationStatus )(
            __RPC__in IOemRegistrationStatus * This,
                                __RPC__out enum RILREGSTAT *status);
                                    HRESULT ( STDMETHODCALLTYPE *get_NetworkCode )(
            __RPC__in IOemRegistrationStatus * This,
                                __RPC__out struct RILNETWORKCODE *pNetworkCode);
        END_INTERFACE
    } IOemRegistrationStatusVtbl;
    interface IOemRegistrationStatus
    {
        CONST_VTBL struct IOemRegistrationStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Subscription(This,ret) )
    ( (This)->lpVtbl -> get_SystemType(This,systemType) )
    ( (This)->lpVtbl -> get_RejectReason(This,reason) )
    ( (This)->lpVtbl -> get_OperatorName(This,name) )
    ( (This)->lpVtbl -> get_RegistrationStatus(This,status) )
    ( (This)->lpVtbl -> get_NetworkCode(This,pNetworkCode) )
EXTERN_C const IID IID_IPowerStateChange;
    typedef struct IPowerStateChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPowerStateChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPowerStateChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPowerStateChange * This);
        HRESULT ( STDMETHODCALLTYPE *OnPowerStateChange )(
            __RPC__in IPowerStateChange * This,
                       enum MODEMPOWERSTATE state,
                       INT_PTR context);
        END_INTERFACE
    } IPowerStateChangeVtbl;
    interface IPowerStateChange
    {
        CONST_VTBL struct IPowerStateChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPowerStateChange(This,state,context) )
EXTERN_C const IID IID_IModemOpaqueCommandCompletion;
    typedef struct IModemOpaqueCommandCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IModemOpaqueCommandCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IModemOpaqueCommandCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IModemOpaqueCommandCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnModemOpaqueCommandCompletion )(
            __RPC__in IModemOpaqueCommandCompletion * This,
                       HRESULT result,
                                __RPC__in_ecount_full(cbSize) BYTE *pOpaqueResponse,
                       DWORD cbSize,
                       INT_PTR context);
        END_INTERFACE
    } IModemOpaqueCommandCompletionVtbl;
    interface IModemOpaqueCommandCompletion
    {
        CONST_VTBL struct IModemOpaqueCommandCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnModemOpaqueCommandCompletion(This,result,pOpaqueResponse,cbSize,context) )
EXTERN_C const IID IID_IOpaqueModemNotifications;
    typedef struct IOpaqueModemNotificationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpaqueModemNotifications * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpaqueModemNotifications * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpaqueModemNotifications * This);
                           HRESULT ( STDMETHODCALLTYPE *OnOpaqueModemNotifications )(
            __RPC__in IOpaqueModemNotifications * This,
                       DWORD dwCode,
                       __RPC__in BYTE *pOpaqueNotification,
                       DWORD cbSize);
        END_INTERFACE
    } IOpaqueModemNotificationsVtbl;
    interface IOpaqueModemNotifications
    {
        CONST_VTBL struct IOpaqueModemNotificationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnOpaqueModemNotifications(This,dwCode,pOpaqueNotification,cbSize) )
EXTERN_C const IID IID_ISetRFStateCompletion;
    typedef struct ISetRFStateCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISetRFStateCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISetRFStateCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISetRFStateCompletion * This);
        HRESULT ( STDMETHODCALLTYPE *OnSetRFStateCompletion )(
            __RPC__in ISetRFStateCompletion * This,
                       HRESULT result,
                       INT_PTR context);
        END_INTERFACE
    } ISetRFStateCompletionVtbl;
    interface ISetRFStateCompletion
    {
        CONST_VTBL struct ISetRFStateCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSetRFStateCompletion(This,result,context) )
EXTERN_C const IID IID_IGetRFStateCompletion;
    typedef struct IGetRFStateCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetRFStateCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetRFStateCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetRFStateCompletion * This);
        HRESULT ( STDMETHODCALLTYPE *OnGetRFStateCompletion )(
            __RPC__in IGetRFStateCompletion * This,
                       HRESULT result,
                       __RPC__in DWORD *pRFState,
                       INT_PTR context);
        END_INTERFACE
    } IGetRFStateCompletionVtbl;
    interface IGetRFStateCompletion
    {
        CONST_VTBL struct IGetRFStateCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetRFStateCompletion(This,result,pRFState,context) )
EXTERN_C const IID IID_IGetRFStateExCompletion;
    typedef struct IGetRFStateExCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetRFStateExCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetRFStateExCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetRFStateExCompletion * This);
        HRESULT ( STDMETHODCALLTYPE *OnGetRFStateCompletion )(
            __RPC__in IGetRFStateExCompletion * This,
                       HRESULT result,
                       __RPC__in LPRILRFSTATE lpRFState,
                       INT_PTR context);
        END_INTERFACE
    } IGetRFStateExCompletionVtbl;
    interface IGetRFStateExCompletion
    {
        CONST_VTBL struct IGetRFStateExCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetRFStateCompletion(This,result,lpRFState,context) )
EXTERN_C const IID IID_ICanInfoCompletion;
    typedef struct ICanInfoCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICanInfoCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICanInfoCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICanInfoCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetInfoCompletion )(
            __RPC__in ICanInfoCompletion * This,
                       HRESULT result,
                       __RPC__in const WCHAR *value,
                       INT_PTR context);
        END_INTERFACE
    } ICanInfoCompletionVtbl;
    interface ICanInfoCompletion
    {
        CONST_VTBL struct ICanInfoCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetInfoCompletion(This,result,value,context) )
EXTERN_C const IID IID_IPositionInfoCompletion;
    typedef struct IPositionInfoCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPositionInfoCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPositionInfoCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPositionInfoCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetPositionInfoCompletion )(
            __RPC__in IPositionInfoCompletion * This,
                       HRESULT result,
                       __RPC__in LPRILPOSITIONINFO lpPositionInfo,
                       INT_PTR context);
        END_INTERFACE
    } IPositionInfoCompletionVtbl;
    interface IPositionInfoCompletion
    {
        CONST_VTBL struct IPositionInfoCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetPositionInfoCompletion(This,result,lpPositionInfo,context) )
EXTERN_C const IID IID_IPinLockStateCompletion;
    typedef struct IPinLockStateCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPinLockStateCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPinLockStateCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPinLockStateCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetPinLockStateCompletion )(
            __RPC__in IPinLockStateCompletion * This,
                       HRESULT result,
                       __RPC__in LPRILUICCLOCKSTATE pUICCLockState,
                       DWORD length,
                       INT_PTR context);
        END_INTERFACE
    } IPinLockStateCompletionVtbl;
    interface IPinLockStateCompletion
    {
        CONST_VTBL struct IPinLockStateCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetPinLockStateCompletion(This,result,pUICCLockState,length,context) )
EXTERN_C const IID IID_IGetRecordStatusCompletion;
    typedef struct IGetRecordStatusCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetRecordStatusCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetRecordStatusCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetRecordStatusCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetRecordStatusCompletion )(
            __RPC__in IGetRecordStatusCompletion * This,
                       HRESULT result,
                       __RPC__in LPRILUICCRECORDSTATUS recordStatus,
                       DWORD length,
                       INT_PTR context);
        END_INTERFACE
    } IGetRecordStatusCompletionVtbl;
    interface IGetRecordStatusCompletion
    {
        CONST_VTBL struct IGetRecordStatusCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetRecordStatusCompletion(This,result,recordStatus,length,context) )
EXTERN_C const IID IID_IReadRecordCompletion;
    typedef struct IReadRecordCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IReadRecordCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IReadRecordCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IReadRecordCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnReadRecordCompletion )(
            __RPC__in IReadRecordCompletion * This,
                       HRESULT result,
                       __RPC__in BYTE *record,
                       DWORD cbSize,
                       INT_PTR context);
        END_INTERFACE
    } IReadRecordCompletionVtbl;
    interface IReadRecordCompletion
    {
        CONST_VTBL struct IReadRecordCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnReadRecordCompletion(This,result,record,cbSize,context) )
EXTERN_C const IID IID_IWriteRecordCompletion;
    typedef struct IWriteRecordCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWriteRecordCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWriteRecordCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWriteRecordCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnWriteRecordCompletion )(
            __RPC__in IWriteRecordCompletion * This,
                       HRESULT result,
                       INT_PTR context);
        END_INTERFACE
    } IWriteRecordCompletionVtbl;
    interface IWriteRecordCompletion
    {
        CONST_VTBL struct IWriteRecordCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnWriteRecordCompletion(This,result,context) )
EXTERN_C const IID IID_IIMSICompletion;
    typedef struct IIMSICompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIMSICompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIMSICompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIMSICompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetIMSICompletion )(
            __RPC__in IIMSICompletion * This,
                       HRESULT result,
                       __RPC__in const LPRILIMSI rilImsi,
                       INT_PTR context);
        END_INTERFACE
    } IIMSICompletionVtbl;
    interface IIMSICompletion
    {
        CONST_VTBL struct IIMSICompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetIMSICompletion(This,result,rilImsi,context) )
EXTERN_C const IID IID_IGetSIDNIDCompletion;
    typedef struct IGetSIDNIDCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetSIDNIDCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetSIDNIDCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetSIDNIDCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetSIDNIDCompletion )(
            __RPC__in IGetSIDNIDCompletion * This,
                       HRESULT result,
                       __RPC__in const LPRILSIDNID rilSidNid,
                       INT_PTR context);
        END_INTERFACE
    } IGetSIDNIDCompletionVtbl;
    interface IGetSIDNIDCompletion
    {
        CONST_VTBL struct IGetSIDNIDCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetSIDNIDCompletion(This,result,rilSidNid,context) )
EXTERN_C const IID IID_IGetNAICompletion;
    typedef struct IGetNAICompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetNAICompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetNAICompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetNAICompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetNAICompletion )(
            __RPC__in IGetNAICompletion * This,
                       HRESULT result,
                       __RPC__in const LPRILNAI rilNai,
                       INT_PTR context);
        END_INTERFACE
    } IGetNAICompletionVtbl;
    interface IGetNAICompletion
    {
        CONST_VTBL struct IGetNAICompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetNAICompletion(This,result,rilNai,context) )
EXTERN_C const IID IID_ISubscriberNumbersCompletion;
    typedef struct ISubscriberNumbersCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISubscriberNumbersCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISubscriberNumbersCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISubscriberNumbersCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetSubscriberNumbersCompletion )(
            __RPC__in ISubscriberNumbersCompletion * This,
                       HRESULT result,
                       __RPC__in LPRILUICCSUBSCRIBERNUMBERS pSubscriberNumbers,
                       DWORD length,
                       INT_PTR context);
        END_INTERFACE
    } ISubscriberNumbersCompletionVtbl;
    interface ISubscriberNumbersCompletion
    {
        CONST_VTBL struct ISubscriberNumbersCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetSubscriberNumbersCompletion(This,result,pSubscriberNumbers,length,context) )
EXTERN_C const IID IID_IGetPLMNwAcT;
    typedef struct IGetPLMNwAcTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetPLMNwAcT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetPLMNwAcT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetPLMNwAcT * This);
                           HRESULT ( STDMETHODCALLTYPE *OnGetPreferredOperatorListCompletion )(
            __RPC__in IGetPLMNwAcT * This,
                       HRESULT result,
                                __RPC__in_ecount_full(dwLength) RILOPERATORNAMES *pOperatorList,
                       DWORD dwLength);
        END_INTERFACE
    } IGetPLMNwAcTVtbl;
    interface IGetPLMNwAcT
    {
        CONST_VTBL struct IGetPLMNwAcTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetPreferredOperatorListCompletion(This,result,pOperatorList,dwLength) )
EXTERN_C const IID IID_ISetPLMNwAcT;
    typedef struct ISetPLMNwAcTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISetPLMNwAcT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISetPLMNwAcT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISetPLMNwAcT * This);
                           HRESULT ( STDMETHODCALLTYPE *OnSetPreferredOperatorListCompletion )(
            __RPC__in ISetPLMNwAcT * This,
                       HRESULT result);
        END_INTERFACE
    } ISetPLMNwAcTVtbl;
    interface ISetPLMNwAcT
    {
        CONST_VTBL struct ISetPLMNwAcTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSetPreferredOperatorListCompletion(This,result) )
EXTERN_C const IID IID_IGetCallForwardingCompletion;
    typedef struct IGetCallForwardingCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGetCallForwardingCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGetCallForwardingCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGetCallForwardingCompletion * This);
        HRESULT ( STDMETHODCALLTYPE *OnGetCallForwardingSettingsCompletion )(
            __RPC__in IGetCallForwardingCompletion * This,
                       HRESULT result,
                       INT_PTR context,
                       __RPC__in RILCALLFORWARDINGSETTINGS *settings,
                       DWORD cSettings);
        END_INTERFACE
    } IGetCallForwardingCompletionVtbl;
    interface IGetCallForwardingCompletion
    {
        CONST_VTBL struct IGetCallForwardingCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetCallForwardingSettingsCompletion(This,result,context,settings,cSettings) )
EXTERN_C const IID IID_ISimpleModemCompletion;
    typedef struct ISimpleModemCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISimpleModemCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISimpleModemCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISimpleModemCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnFinished )(
            __RPC__in ISimpleModemCompletion * This,
            HRESULT result,
                       INT_PTR context);
        END_INTERFACE
    } ISimpleModemCompletionVtbl;
    interface ISimpleModemCompletion
    {
        CONST_VTBL struct ISimpleModemCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnFinished(This,result,context) )
EXTERN_C const IID IID_ICallWaitingSettingsCompletion;
    typedef struct ICallWaitingSettingsCompletionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICallWaitingSettingsCompletion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICallWaitingSettingsCompletion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICallWaitingSettingsCompletion * This);
                           HRESULT ( STDMETHODCALLTYPE *OnCallWaitingSettingsCompletion )(
            __RPC__in ICallWaitingSettingsCompletion * This,
                       HRESULT hr,
                       DWORD dwInfoClasses,
                       INT_PTR context);
        END_INTERFACE
    } ICallWaitingSettingsCompletionVtbl;
    interface ICallWaitingSettingsCompletion
    {
        CONST_VTBL struct ICallWaitingSettingsCompletionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCallWaitingSettingsCompletion(This,hr,dwInfoClasses,context) )
EXTERN_C const IID IID_IOemIMSStatusChange;
    typedef struct IOemIMSStatusChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOemIMSStatusChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOemIMSStatusChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOemIMSStatusChange * This);
                           HRESULT ( STDMETHODCALLTYPE *OnOemIMSStatusChanged )(
            __RPC__in IOemIMSStatusChange * This,
                       __RPC__in LPRILIMSSTATUS rilIMSStatus,
                       __RPC__in_opt IOemCanExtForIMS *pCan);
        END_INTERFACE
    } IOemIMSStatusChangeVtbl;
    interface IOemIMSStatusChange
    {
        CONST_VTBL struct IOemIMSStatusChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnOemIMSStatusChanged(This,rilIMSStatus,pCan) )
EXTERN_C const IID LIBID_OemCellularIF;
EXTERN_C const CLSID CLSID_OemCellular;
class DECLSPEC_UUID("9D27B916-4F17-4EE8-A71C-D84222993D64")
OemCellular;
}
