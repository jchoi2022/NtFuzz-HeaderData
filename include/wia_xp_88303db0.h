#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWiaDevMgr IWiaDevMgr;
typedef interface IEnumWIA_DEV_INFO IEnumWIA_DEV_INFO;
typedef interface IWiaEventCallback IWiaEventCallback;
typedef interface IWiaDataCallback IWiaDataCallback;
typedef interface IWiaDataTransfer IWiaDataTransfer;
typedef interface IWiaItem IWiaItem;
typedef interface IWiaPropertyStorage IWiaPropertyStorage;
typedef interface IEnumWiaItem IEnumWiaItem;
typedef interface IEnumWIA_DEV_CAPS IEnumWIA_DEV_CAPS;
typedef interface IEnumWIA_FORMAT_INFO IEnumWIA_FORMAT_INFO;
typedef interface IWiaLog IWiaLog;
typedef interface IWiaLogEx IWiaLogEx;
typedef interface IWiaNotifyDevMgr IWiaNotifyDevMgr;
typedef interface IWiaItemExtras IWiaItemExtras;
typedef class WiaDevMgr WiaDevMgr;
typedef class WiaLog WiaLog;
#include "unknwn.h"
#include "oaidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _WIA_DITHER_PATTERN_DATA
    {
    LONG lSize;
    BSTR bstrPatternName;
    LONG lPatternWidth;
    LONG lPatternLength;
    LONG cbPattern;
                    BYTE *pbPattern;
    } WIA_DITHER_PATTERN_DATA;
typedef struct _WIA_DITHER_PATTERN_DATA *PWIA_DITHER_PATTERN_DATA;
typedef struct _WIA_PROPID_TO_NAME
    {
    PROPID propid;
    LPOLESTR pszName;
    } WIA_PROPID_TO_NAME;
typedef struct _WIA_PROPID_TO_NAME *PWIA_PROPID_TO_NAME;
typedef struct _WIA_FORMAT_INFO
    {
    GUID guidFormatID;
    LONG lTymed;
    } WIA_FORMAT_INFO;
typedef struct _WIA_FORMAT_INFO *PWIA_FORMAT_INFO;
#include "wiadef.h"
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWiaDevMgr;
    typedef struct IWiaDevMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaDevMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaDevMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaDevMgr * This);
                           HRESULT ( STDMETHODCALLTYPE *EnumDeviceInfo )(
            __RPC__in IWiaDevMgr * This,
                       LONG lFlag,
                                __RPC__deref_out_opt IEnumWIA_DEV_INFO **ppIEnum);
                      HRESULT ( STDMETHODCALLTYPE *CreateDevice )(
            IWiaDevMgr * This,
                       BSTR bstrDeviceID,
                        IWiaItem **ppWiaItemRoot);
                      HRESULT ( STDMETHODCALLTYPE *SelectDeviceDlg )(
            IWiaDevMgr * This,
                       HWND hwndParent,
                       LONG lDeviceType,
                       LONG lFlags,
                            BSTR *pbstrDeviceID,
                                IWiaItem **ppItemRoot);
                      HRESULT ( STDMETHODCALLTYPE *SelectDeviceDlgID )(
            IWiaDevMgr * This,
                       HWND hwndParent,
                       LONG lDeviceType,
                       LONG lFlags,
                                BSTR *pbstrDeviceID);
                      HRESULT ( STDMETHODCALLTYPE *GetImageDlg )(
            IWiaDevMgr * This,
                       HWND hwndParent,
                       LONG lDeviceType,
                       LONG lFlags,
                       LONG lIntent,
                       IWiaItem *pItemRoot,
                       BSTR bstrFilename,
                            GUID *pguidFormat);
                      HRESULT ( STDMETHODCALLTYPE *RegisterEventCallbackProgram )(
            IWiaDevMgr * This,
                       LONG lFlags,
                       BSTR bstrDeviceID,
                       const GUID *pEventGUID,
                       BSTR bstrCommandline,
                       BSTR bstrName,
                       BSTR bstrDescription,
                       BSTR bstrIcon);
                      HRESULT ( STDMETHODCALLTYPE *RegisterEventCallbackInterface )(
            IWiaDevMgr * This,
                       LONG lFlags,
                       BSTR bstrDeviceID,
                       const GUID *pEventGUID,
                               IWiaEventCallback *pIWiaEventCallback,
                        IUnknown **pEventObject);
                      HRESULT ( STDMETHODCALLTYPE *RegisterEventCallbackCLSID )(
            IWiaDevMgr * This,
                       LONG lFlags,
                       BSTR bstrDeviceID,
                       const GUID *pEventGUID,
                               const GUID *pClsID,
                       BSTR bstrName,
                       BSTR bstrDescription,
                       BSTR bstrIcon);
                           HRESULT ( STDMETHODCALLTYPE *AddDeviceDlg )(
            __RPC__in IWiaDevMgr * This,
                       __RPC__in HWND hwndParent,
                       LONG lFlags);
        END_INTERFACE
    } IWiaDevMgrVtbl;
    interface IWiaDevMgr
    {
        CONST_VTBL struct IWiaDevMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumDeviceInfo(This,lFlag,ppIEnum) )
    ( (This)->lpVtbl -> CreateDevice(This,bstrDeviceID,ppWiaItemRoot) )
    ( (This)->lpVtbl -> SelectDeviceDlg(This,hwndParent,lDeviceType,lFlags,pbstrDeviceID,ppItemRoot) )
    ( (This)->lpVtbl -> SelectDeviceDlgID(This,hwndParent,lDeviceType,lFlags,pbstrDeviceID) )
    ( (This)->lpVtbl -> GetImageDlg(This,hwndParent,lDeviceType,lFlags,lIntent,pItemRoot,bstrFilename,pguidFormat) )
    ( (This)->lpVtbl -> RegisterEventCallbackProgram(This,lFlags,bstrDeviceID,pEventGUID,bstrCommandline,bstrName,bstrDescription,bstrIcon) )
    ( (This)->lpVtbl -> RegisterEventCallbackInterface(This,lFlags,bstrDeviceID,pEventGUID,pIWiaEventCallback,pEventObject) )
    ( (This)->lpVtbl -> RegisterEventCallbackCLSID(This,lFlags,bstrDeviceID,pEventGUID,pClsID,bstrName,bstrDescription,bstrIcon) )
    ( (This)->lpVtbl -> AddDeviceDlg(This,hwndParent,lFlags) )
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalCreateDevice_Proxy(
    __RPC__in IWiaDevMgr * This,
               __RPC__in BSTR bstrDeviceID,
                __RPC__deref_out_opt IWiaItem **ppWiaItemRoot);
void __RPC_STUB IWiaDevMgr_LocalCreateDevice_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                    HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalSelectDeviceDlg_Proxy(
    __RPC__in IWiaDevMgr * This,
               __RPC__in HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
                    __RPC__deref_inout_opt BSTR *pbstrDeviceID,
                        __RPC__deref_out_opt IWiaItem **ppItemRoot);
void __RPC_STUB IWiaDevMgr_LocalSelectDeviceDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                    HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalSelectDeviceDlgID_Proxy(
    __RPC__in IWiaDevMgr * This,
               __RPC__in HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
                        __RPC__deref_out_opt BSTR *pbstrDeviceID);
void __RPC_STUB IWiaDevMgr_LocalSelectDeviceDlgID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                    HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalGetImageDlg_Proxy(
    __RPC__in IWiaDevMgr * This,
               __RPC__in HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
               LONG lIntent,
               __RPC__in_opt IWiaItem *pItemRoot,
               __RPC__in BSTR bstrFilename,
                    __RPC__inout GUID *pguidFormat);
void __RPC_STUB IWiaDevMgr_LocalGetImageDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalRegisterEventCallbackProgram_Proxy(
    __RPC__in IWiaDevMgr * This,
               LONG lFlags,
               __RPC__in BSTR bstrDeviceID,
               __RPC__in const GUID *pEventGUID,
               __RPC__in BSTR bstrCommandline,
               __RPC__in BSTR bstrName,
               __RPC__in BSTR bstrDescription,
               __RPC__in BSTR bstrIcon);
void __RPC_STUB IWiaDevMgr_LocalRegisterEventCallbackProgram_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalRegisterEventCallbackInterface_Proxy(
    __RPC__in IWiaDevMgr * This,
               LONG lFlags,
               __RPC__in BSTR bstrDeviceID,
               __RPC__in const GUID *pEventGUID,
                       __RPC__in_opt IWiaEventCallback *pIWiaEventCallback,
                __RPC__deref_out_opt IUnknown **pEventObject);
void __RPC_STUB IWiaDevMgr_LocalRegisterEventCallbackInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_LocalRegisterEventCallbackCLSID_Proxy(
    __RPC__in IWiaDevMgr * This,
               LONG lFlags,
               __RPC__in BSTR bstrDeviceID,
               __RPC__in const GUID *pEventGUID,
                       __RPC__in_opt const GUID *pClsID,
               __RPC__in BSTR bstrName,
               __RPC__in BSTR bstrDescription,
               __RPC__in BSTR bstrIcon);
void __RPC_STUB IWiaDevMgr_LocalRegisterEventCallbackCLSID_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumWIA_DEV_INFO;
    typedef struct IEnumWIA_DEV_INFOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumWIA_DEV_INFO * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumWIA_DEV_INFO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumWIA_DEV_INFO * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumWIA_DEV_INFO * This,
                       ULONG celt,
                                            IWiaPropertyStorage **rgelt,
                                    ULONG *pceltFetched);
                           HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumWIA_DEV_INFO * This,
                       ULONG celt);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumWIA_DEV_INFO * This);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumWIA_DEV_INFO * This,
                        __RPC__deref_out_opt IEnumWIA_DEV_INFO **ppIEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumWIA_DEV_INFO * This,
                        __RPC__out ULONG *celt);
        END_INTERFACE
    } IEnumWIA_DEV_INFOVtbl;
    interface IEnumWIA_DEV_INFO
    {
        CONST_VTBL struct IEnumWIA_DEV_INFOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnum) )
    ( (This)->lpVtbl -> GetCount(This,celt) )
                            HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_INFO_RemoteNext_Proxy(
    __RPC__in IEnumWIA_DEV_INFO * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IWiaPropertyStorage **rgelt,
                            __RPC__inout_opt ULONG *pceltFetched);
void __RPC_STUB IEnumWIA_DEV_INFO_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IWiaEventCallback;
    typedef struct IWiaEventCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaEventCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaEventCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaEventCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ImageEventCallback )(
            __RPC__in IWiaEventCallback * This,
                       __RPC__in const GUID *pEventGUID,
                       __RPC__in BSTR bstrEventDescription,
                       __RPC__in BSTR bstrDeviceID,
                       __RPC__in BSTR bstrDeviceDescription,
                       DWORD dwDeviceType,
                       __RPC__in BSTR bstrFullItemName,
                            __RPC__inout ULONG *pulEventType,
                       ULONG ulReserved);
        END_INTERFACE
    } IWiaEventCallbackVtbl;
    interface IWiaEventCallback
    {
        CONST_VTBL struct IWiaEventCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ImageEventCallback(This,pEventGUID,bstrEventDescription,bstrDeviceID,bstrDeviceDescription,dwDeviceType,bstrFullItemName,pulEventType,ulReserved) )
typedef struct _WIA_DATA_CALLBACK_HEADER
    {
    LONG lSize;
    GUID guidFormatID;
    LONG lBufferSize;
    LONG lPageCount;
    } WIA_DATA_CALLBACK_HEADER;
typedef struct _WIA_DATA_CALLBACK_HEADER *PWIA_DATA_CALLBACK_HEADER;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWiaDataCallback;
    typedef struct IWiaDataCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaDataCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaDataCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaDataCallback * This);
                      HRESULT ( STDMETHODCALLTYPE *BandedDataCallback )(
            IWiaDataCallback * This,
                       LONG lMessage,
                       LONG lStatus,
                       LONG lPercentComplete,
                       LONG lOffset,
                       LONG lLength,
                       LONG lReserved,
                       LONG lResLength,
                                BYTE *pbBuffer);
        END_INTERFACE
    } IWiaDataCallbackVtbl;
    interface IWiaDataCallback
    {
        CONST_VTBL struct IWiaDataCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BandedDataCallback(This,lMessage,lStatus,lPercentComplete,lOffset,lLength,lReserved,lResLength,pbBuffer) )
                            HRESULT STDMETHODCALLTYPE IWiaDataCallback_RemoteBandedDataCallback_Proxy(
    __RPC__in IWiaDataCallback * This,
               LONG lMessage,
               LONG lStatus,
               LONG lPercentComplete,
               LONG lOffset,
               LONG lLength,
               LONG lReserved,
               LONG lResLength,
                                __RPC__in_ecount_full_opt(lResLength) BYTE *pbBuffer);
void __RPC_STUB IWiaDataCallback_RemoteBandedDataCallback_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef struct _WIA_DATA_TRANSFER_INFO
    {
    ULONG ulSize;
    ULONG ulSection;
    ULONG ulBufferSize;
    BOOL bDoubleBuffer;
    ULONG ulReserved1;
    ULONG ulReserved2;
    ULONG ulReserved3;
    } WIA_DATA_TRANSFER_INFO;
typedef struct _WIA_DATA_TRANSFER_INFO *PWIA_DATA_TRANSFER_INFO;
typedef struct _WIA_EXTENDED_TRANSFER_INFO
    {
    ULONG ulSize;
    ULONG ulMinBufferSize;
    ULONG ulOptimalBufferSize;
    ULONG ulMaxBufferSize;
    ULONG ulNumBuffers;
    } WIA_EXTENDED_TRANSFER_INFO;
typedef struct _WIA_EXTENDED_TRANSFER_INFO *PWIA_EXTENDED_TRANSFER_INFO;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IWiaDataTransfer;
    typedef struct IWiaDataTransferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaDataTransfer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaDataTransfer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaDataTransfer * This);
                      HRESULT ( STDMETHODCALLTYPE *idtGetData )(
            IWiaDataTransfer * This,
                            LPSTGMEDIUM pMedium,
                               IWiaDataCallback *pIWiaDataCallback);
                      HRESULT ( STDMETHODCALLTYPE *idtGetBandedData )(
            IWiaDataTransfer * This,
                               PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo,
                               IWiaDataCallback *pIWiaDataCallback);
                           HRESULT ( STDMETHODCALLTYPE *idtQueryGetData )(
            __RPC__in IWiaDataTransfer * This,
                               __RPC__in_opt WIA_FORMAT_INFO *pfe);
                           HRESULT ( STDMETHODCALLTYPE *idtEnumWIA_FORMAT_INFO )(
            __RPC__in IWiaDataTransfer * This,
                        __RPC__deref_out_opt IEnumWIA_FORMAT_INFO **ppEnum);
                           HRESULT ( STDMETHODCALLTYPE *idtGetExtendedTransferInfo )(
            __RPC__in IWiaDataTransfer * This,
                        __RPC__out PWIA_EXTENDED_TRANSFER_INFO pExtendedTransferInfo);
        END_INTERFACE
    } IWiaDataTransferVtbl;
    interface IWiaDataTransfer
    {
        CONST_VTBL struct IWiaDataTransferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> idtGetData(This,pMedium,pIWiaDataCallback) )
    ( (This)->lpVtbl -> idtGetBandedData(This,pWiaDataTransInfo,pIWiaDataCallback) )
    ( (This)->lpVtbl -> idtQueryGetData(This,pfe) )
    ( (This)->lpVtbl -> idtEnumWIA_FORMAT_INFO(This,ppEnum) )
    ( (This)->lpVtbl -> idtGetExtendedTransferInfo(This,pExtendedTransferInfo) )
                            HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetDataEx_Proxy(
    __RPC__in IWiaDataTransfer * This,
                    __RPC__inout LPSTGMEDIUM pMedium,
                       __RPC__in_opt IWiaDataCallback *pIWiaDataCallback);
void __RPC_STUB IWiaDataTransfer_idtGetDataEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetBandedDataEx_Proxy(
    __RPC__in IWiaDataTransfer * This,
                       __RPC__in_opt PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo,
                       __RPC__in_opt IWiaDataCallback *pIWiaDataCallback);
void __RPC_STUB IWiaDataTransfer_idtGetBandedDataEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IWiaItem;
    typedef struct IWiaItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaItem * This);
                           HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IWiaItem * This,
                        __RPC__out LONG *pItemType);
                           HRESULT ( STDMETHODCALLTYPE *AnalyzeItem )(
            __RPC__in IWiaItem * This,
                       LONG lFlags);
                           HRESULT ( STDMETHODCALLTYPE *EnumChildItems )(
            __RPC__in IWiaItem * This,
                        __RPC__deref_out_opt IEnumWiaItem **ppIEnumWiaItem);
                           HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IWiaItem * This,
                       LONG lFlags);
                           HRESULT ( STDMETHODCALLTYPE *CreateChildItem )(
            __RPC__in IWiaItem * This,
                       LONG lFlags,
                       __RPC__in BSTR bstrItemName,
                       __RPC__in BSTR bstrFullItemName,
                        __RPC__deref_out_opt IWiaItem **ppIWiaItem);
                           HRESULT ( STDMETHODCALLTYPE *EnumRegisterEventInfo )(
            __RPC__in IWiaItem * This,
                       LONG lFlags,
                       __RPC__in const GUID *pEventGUID,
                        __RPC__deref_out_opt IEnumWIA_DEV_CAPS **ppIEnum);
                           HRESULT ( STDMETHODCALLTYPE *FindItemByName )(
            __RPC__in IWiaItem * This,
                       LONG lFlags,
                       __RPC__in BSTR bstrFullItemName,
                        __RPC__deref_out_opt IWiaItem **ppIWiaItem);
                      HRESULT ( STDMETHODCALLTYPE *DeviceDlg )(
            IWiaItem * This,
                       HWND hwndParent,
                       LONG lFlags,
                       LONG lIntent,
                        LONG *plItemCount,
                        IWiaItem ***ppIWiaItem);
                           HRESULT ( STDMETHODCALLTYPE *DeviceCommand )(
            __RPC__in IWiaItem * This,
                       LONG lFlags,
                       __RPC__in const GUID *pCmdGUID,
                            __RPC__deref_inout_opt IWiaItem **pIWiaItem);
                           HRESULT ( STDMETHODCALLTYPE *GetRootItem )(
            __RPC__in IWiaItem * This,
                        __RPC__deref_out_opt IWiaItem **ppIWiaItem);
                           HRESULT ( STDMETHODCALLTYPE *EnumDeviceCapabilities )(
            __RPC__in IWiaItem * This,
                       LONG lFlags,
                        __RPC__deref_out_opt IEnumWIA_DEV_CAPS **ppIEnumWIA_DEV_CAPS);
                           HRESULT ( STDMETHODCALLTYPE *DumpItemData )(
            __RPC__in IWiaItem * This,
                        __RPC__deref_out_opt BSTR *bstrData);
                           HRESULT ( STDMETHODCALLTYPE *DumpDrvItemData )(
            __RPC__in IWiaItem * This,
                        __RPC__deref_out_opt BSTR *bstrData);
                           HRESULT ( STDMETHODCALLTYPE *DumpTreeItemData )(
            __RPC__in IWiaItem * This,
                        __RPC__deref_out_opt BSTR *bstrData);
                           HRESULT ( STDMETHODCALLTYPE *Diagnostic )(
            __RPC__in IWiaItem * This,
                       ULONG ulSize,
                                __RPC__in_ecount_full(ulSize) BYTE *pBuffer);
        END_INTERFACE
    } IWiaItemVtbl;
    interface IWiaItem
    {
        CONST_VTBL struct IWiaItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemType(This,pItemType) )
    ( (This)->lpVtbl -> AnalyzeItem(This,lFlags) )
    ( (This)->lpVtbl -> EnumChildItems(This,ppIEnumWiaItem) )
    ( (This)->lpVtbl -> DeleteItem(This,lFlags) )
    ( (This)->lpVtbl -> CreateChildItem(This,lFlags,bstrItemName,bstrFullItemName,ppIWiaItem) )
    ( (This)->lpVtbl -> EnumRegisterEventInfo(This,lFlags,pEventGUID,ppIEnum) )
    ( (This)->lpVtbl -> FindItemByName(This,lFlags,bstrFullItemName,ppIWiaItem) )
    ( (This)->lpVtbl -> DeviceDlg(This,hwndParent,lFlags,lIntent,plItemCount,ppIWiaItem) )
    ( (This)->lpVtbl -> DeviceCommand(This,lFlags,pCmdGUID,pIWiaItem) )
    ( (This)->lpVtbl -> GetRootItem(This,ppIWiaItem) )
    ( (This)->lpVtbl -> EnumDeviceCapabilities(This,lFlags,ppIEnumWIA_DEV_CAPS) )
    ( (This)->lpVtbl -> DumpItemData(This,bstrData) )
    ( (This)->lpVtbl -> DumpDrvItemData(This,bstrData) )
    ( (This)->lpVtbl -> DumpTreeItemData(This,bstrData) )
    ( (This)->lpVtbl -> Diagnostic(This,ulSize,pBuffer) )
                                    HRESULT STDMETHODCALLTYPE IWiaItem_LocalDeviceDlg_Proxy(
    __RPC__in IWiaItem * This,
               __RPC__in HWND hwndParent,
               LONG lFlags,
               LONG lIntent,
                __RPC__out LONG *plItemCount,
                __RPC__deref_out_opt IWiaItem ***pIWiaItem);
void __RPC_STUB IWiaItem_LocalDeviceDlg_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IWiaPropertyStorage;
    typedef struct IWiaPropertyStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaPropertyStorage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaPropertyStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaPropertyStorage * This);
        HRESULT ( STDMETHODCALLTYPE *ReadMultiple )(
            __RPC__in IWiaPropertyStorage * This,
                       ULONG cpspec,
                                __RPC__in_ecount_full(cpspec) const PROPSPEC rgpspec[ ],
                                 __RPC__out_ecount_full(cpspec) PROPVARIANT rgpropvar[ ]);
                      HRESULT ( STDMETHODCALLTYPE *WriteMultiple )(
            IWiaPropertyStorage * This,
                       ULONG cpspec,
                                const PROPSPEC rgpspec[ ],
                                const PROPVARIANT rgpropvar[ ],
                       PROPID propidNameFirst);
        HRESULT ( STDMETHODCALLTYPE *DeleteMultiple )(
            __RPC__in IWiaPropertyStorage * This,
                       ULONG cpspec,
                                __RPC__in_ecount_full(cpspec) const PROPSPEC rgpspec[ ]);
        HRESULT ( STDMETHODCALLTYPE *ReadPropertyNames )(
            __RPC__in IWiaPropertyStorage * This,
                       ULONG cpropid,
                                __RPC__in_ecount_full(cpropid) const PROPID rgpropid[ ],
                                 __RPC__out_ecount_full(cpropid) LPOLESTR rglpwstrName[ ]);
        HRESULT ( STDMETHODCALLTYPE *WritePropertyNames )(
            __RPC__in IWiaPropertyStorage * This,
                       ULONG cpropid,
                                __RPC__in_ecount_full(cpropid) const PROPID rgpropid[ ],
                                __RPC__in_ecount_full(cpropid) const LPOLESTR rglpwstrName[ ]);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyNames )(
            __RPC__in IWiaPropertyStorage * This,
                       ULONG cpropid,
                                __RPC__in_ecount_full(cpropid) const PROPID rgpropid[ ]);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IWiaPropertyStorage * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in IWiaPropertyStorage * This);
        HRESULT ( STDMETHODCALLTYPE *Enum )(
            __RPC__in IWiaPropertyStorage * This,
                        __RPC__deref_out_opt IEnumSTATPROPSTG **ppenum);
        HRESULT ( STDMETHODCALLTYPE *SetTimes )(
            __RPC__in IWiaPropertyStorage * This,
                       __RPC__in const FILETIME *pctime,
                       __RPC__in const FILETIME *patime,
                       __RPC__in const FILETIME *pmtime);
        HRESULT ( STDMETHODCALLTYPE *SetClass )(
            __RPC__in IWiaPropertyStorage * This,
                       __RPC__in REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in IWiaPropertyStorage * This,
                        __RPC__out STATPROPSETSTG *pstatpsstg);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyAttributes )(
            __RPC__in IWiaPropertyStorage * This,
                       ULONG cpspec,
                                __RPC__in_ecount_full(cpspec) PROPSPEC rgpspec[ ],
                                 __RPC__out_ecount_full(cpspec) ULONG rgflags[ ],
                                 __RPC__out_ecount_full(cpspec) PROPVARIANT rgpropvar[ ]);
                           HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IWiaPropertyStorage * This,
                        __RPC__out ULONG *pulNumProps);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyStream )(
            __RPC__in IWiaPropertyStorage * This,
                        __RPC__out GUID *pCompatibilityId,
                        __RPC__deref_out_opt IStream **ppIStream);
                      HRESULT ( STDMETHODCALLTYPE *SetPropertyStream )(
            IWiaPropertyStorage * This,
                       GUID *pCompatibilityId,
                               IStream *pIStream);
        END_INTERFACE
    } IWiaPropertyStorageVtbl;
    interface IWiaPropertyStorage
    {
        CONST_VTBL struct IWiaPropertyStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReadMultiple(This,cpspec,rgpspec,rgpropvar) )
    ( (This)->lpVtbl -> WriteMultiple(This,cpspec,rgpspec,rgpropvar,propidNameFirst) )
    ( (This)->lpVtbl -> DeleteMultiple(This,cpspec,rgpspec) )
    ( (This)->lpVtbl -> ReadPropertyNames(This,cpropid,rgpropid,rglpwstrName) )
    ( (This)->lpVtbl -> WritePropertyNames(This,cpropid,rgpropid,rglpwstrName) )
    ( (This)->lpVtbl -> DeletePropertyNames(This,cpropid,rgpropid) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> Enum(This,ppenum) )
    ( (This)->lpVtbl -> SetTimes(This,pctime,patime,pmtime) )
    ( (This)->lpVtbl -> SetClass(This,clsid) )
    ( (This)->lpVtbl -> Stat(This,pstatpsstg) )
    ( (This)->lpVtbl -> GetPropertyAttributes(This,cpspec,rgpspec,rgflags,rgpropvar) )
    ( (This)->lpVtbl -> GetCount(This,pulNumProps) )
    ( (This)->lpVtbl -> GetPropertyStream(This,pCompatibilityId,ppIStream) )
    ( (This)->lpVtbl -> SetPropertyStream(This,pCompatibilityId,pIStream) )
                HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_RemoteWriteMultiple_Proxy(
    __RPC__in IWiaPropertyStorage * This,
               ULONG cpspec,
                        __RPC__in_ecount_full(cpspec) const PROPSPEC *rgpspec,
                        __RPC__in_ecount_full(cpspec) const PROPVARIANT *rgpropvar,
               PROPID propidNameFirst);
void __RPC_STUB IWiaPropertyStorage_RemoteWriteMultiple_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_RemoteSetPropertyStream_Proxy(
    __RPC__in IWiaPropertyStorage * This,
               __RPC__in GUID *pCompatibilityId,
                       __RPC__in_opt IStream *pIStream);
void __RPC_STUB IWiaPropertyStorage_RemoteSetPropertyStream_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumWiaItem;
    typedef struct IEnumWiaItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumWiaItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumWiaItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumWiaItem * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumWiaItem * This,
                       ULONG celt,
                                            IWiaItem **ppIWiaItem,
                                    ULONG *pceltFetched);
                           HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumWiaItem * This,
                       ULONG celt);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumWiaItem * This);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumWiaItem * This,
                        __RPC__deref_out_opt IEnumWiaItem **ppIEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumWiaItem * This,
                        __RPC__out ULONG *celt);
        END_INTERFACE
    } IEnumWiaItemVtbl;
    interface IEnumWiaItem
    {
        CONST_VTBL struct IEnumWiaItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppIWiaItem,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnum) )
    ( (This)->lpVtbl -> GetCount(This,celt) )
                            HRESULT STDMETHODCALLTYPE IEnumWiaItem_RemoteNext_Proxy(
    __RPC__in IEnumWiaItem * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IWiaItem **ppIWiaItem,
                            __RPC__inout_opt ULONG *pceltFetched);
void __RPC_STUB IEnumWiaItem_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef struct _WIA_DEV_CAP
    {
    GUID guid;
    ULONG ulFlags;
    BSTR bstrName;
    BSTR bstrDescription;
    BSTR bstrIcon;
    BSTR bstrCommandline;
    } WIA_DEV_CAP;
typedef struct _WIA_DEV_CAP *PWIA_DEV_CAP;
typedef struct _WIA_DEV_CAP WIA_EVENT_HANDLER;
typedef struct _WIA_DEV_CAP *PWIA_EVENT_HANDLER;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumWIA_DEV_CAPS;
    typedef struct IEnumWIA_DEV_CAPSVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumWIA_DEV_CAPS * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumWIA_DEV_CAPS * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumWIA_DEV_CAPS * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumWIA_DEV_CAPS * This,
                       ULONG celt,
                                            WIA_DEV_CAP *rgelt,
                                    ULONG *pceltFetched);
                           HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumWIA_DEV_CAPS * This,
                       ULONG celt);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumWIA_DEV_CAPS * This);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumWIA_DEV_CAPS * This,
                        __RPC__deref_out_opt IEnumWIA_DEV_CAPS **ppIEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumWIA_DEV_CAPS * This,
                        __RPC__out ULONG *pcelt);
        END_INTERFACE
    } IEnumWIA_DEV_CAPSVtbl;
    interface IEnumWIA_DEV_CAPS
    {
        CONST_VTBL struct IEnumWIA_DEV_CAPSVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnum) )
    ( (This)->lpVtbl -> GetCount(This,pcelt) )
                            HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_CAPS_RemoteNext_Proxy(
    __RPC__in IEnumWIA_DEV_CAPS * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) WIA_DEV_CAP *rgelt,
                            __RPC__inout_opt ULONG *pceltFetched);
void __RPC_STUB IEnumWIA_DEV_CAPS_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumWIA_FORMAT_INFO;
    typedef struct IEnumWIA_FORMAT_INFOVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumWIA_FORMAT_INFO * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumWIA_FORMAT_INFO * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumWIA_FORMAT_INFO * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumWIA_FORMAT_INFO * This,
                       ULONG celt,
                                            WIA_FORMAT_INFO *rgelt,
                                    ULONG *pceltFetched);
                           HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumWIA_FORMAT_INFO * This,
                       ULONG celt);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumWIA_FORMAT_INFO * This);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumWIA_FORMAT_INFO * This,
                        __RPC__deref_out_opt IEnumWIA_FORMAT_INFO **ppIEnum);
                           HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumWIA_FORMAT_INFO * This,
                        __RPC__out ULONG *pcelt);
        END_INTERFACE
    } IEnumWIA_FORMAT_INFOVtbl;
    interface IEnumWIA_FORMAT_INFO
    {
        CONST_VTBL struct IEnumWIA_FORMAT_INFOVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnum) )
    ( (This)->lpVtbl -> GetCount(This,pcelt) )
                            HRESULT STDMETHODCALLTYPE IEnumWIA_FORMAT_INFO_RemoteNext_Proxy(
    __RPC__in IEnumWIA_FORMAT_INFO * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) WIA_FORMAT_INFO *rgelt,
                            __RPC__inout_opt ULONG *pceltFetched);
void __RPC_STUB IEnumWIA_FORMAT_INFO_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IWiaLog;
    typedef struct IWiaLogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaLog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaLog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaLog * This);
                           HRESULT ( STDMETHODCALLTYPE *InitializeLog )(
            __RPC__in IWiaLog * This,
                       LONG hInstance);
                           HRESULT ( STDMETHODCALLTYPE *hResult )(
            __RPC__in IWiaLog * This,
                       HRESULT hResult);
                           HRESULT ( STDMETHODCALLTYPE *Log )(
            __RPC__in IWiaLog * This,
                       LONG lFlags,
                       LONG lResID,
                       LONG lDetail,
                       __RPC__in BSTR bstrText);
        END_INTERFACE
    } IWiaLogVtbl;
    interface IWiaLog
    {
        CONST_VTBL struct IWiaLogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeLog(This,hInstance) )
    ( (This)->lpVtbl -> hResult(This,hResult) )
    ( (This)->lpVtbl -> Log(This,lFlags,lResID,lDetail,bstrText) )
EXTERN_C const IID IID_IWiaLogEx;
    typedef struct IWiaLogExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaLogEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaLogEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaLogEx * This);
                           HRESULT ( STDMETHODCALLTYPE *InitializeLogEx )(
            __RPC__in IWiaLogEx * This,
                       __RPC__in BYTE *hInstance);
                           HRESULT ( STDMETHODCALLTYPE *hResult )(
            __RPC__in IWiaLogEx * This,
                       HRESULT hResult);
                           HRESULT ( STDMETHODCALLTYPE *Log )(
            __RPC__in IWiaLogEx * This,
                       LONG lFlags,
                       LONG lResID,
                       LONG lDetail,
                       __RPC__in BSTR bstrText);
                           HRESULT ( STDMETHODCALLTYPE *hResultEx )(
            __RPC__in IWiaLogEx * This,
                       LONG lMethodId,
                       HRESULT hResult);
                           HRESULT ( STDMETHODCALLTYPE *LogEx )(
            __RPC__in IWiaLogEx * This,
                       LONG lMethodId,
                       LONG lFlags,
                       LONG lResID,
                       LONG lDetail,
                       __RPC__in BSTR bstrText);
        END_INTERFACE
    } IWiaLogExVtbl;
    interface IWiaLogEx
    {
        CONST_VTBL struct IWiaLogExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeLogEx(This,hInstance) )
    ( (This)->lpVtbl -> hResult(This,hResult) )
    ( (This)->lpVtbl -> Log(This,lFlags,lResID,lDetail,bstrText) )
    ( (This)->lpVtbl -> hResultEx(This,lMethodId,hResult) )
    ( (This)->lpVtbl -> LogEx(This,lMethodId,lFlags,lResID,lDetail,bstrText) )
EXTERN_C const IID IID_IWiaNotifyDevMgr;
    typedef struct IWiaNotifyDevMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaNotifyDevMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaNotifyDevMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaNotifyDevMgr * This);
                           HRESULT ( STDMETHODCALLTYPE *NewDeviceArrival )(
            __RPC__in IWiaNotifyDevMgr * This);
        END_INTERFACE
    } IWiaNotifyDevMgrVtbl;
    interface IWiaNotifyDevMgr
    {
        CONST_VTBL struct IWiaNotifyDevMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NewDeviceArrival(This) )
EXTERN_C const IID IID_IWiaItemExtras;
    typedef struct IWiaItemExtrasVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaItemExtras * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaItemExtras * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaItemExtras * This);
                           HRESULT ( STDMETHODCALLTYPE *GetExtendedErrorInfo )(
            __RPC__in IWiaItemExtras * This,
                        __RPC__deref_out_opt BSTR *bstrErrorText);
                           HRESULT ( STDMETHODCALLTYPE *Escape )(
            __RPC__in IWiaItemExtras * This,
                       DWORD dwEscapeCode,
                                __RPC__in_ecount_full(cbInDataSize) BYTE *lpInData,
                       DWORD cbInDataSize,
                                            __RPC__out_ecount_part(dwOutDataSize, pdwActualDataSize ? *pdwActualDataSize : dwOutDataSize) BYTE *pOutData,
                       DWORD dwOutDataSize,
                        __RPC__out DWORD *pdwActualDataSize);
                           HRESULT ( STDMETHODCALLTYPE *CancelPendingIO )(
            __RPC__in IWiaItemExtras * This);
        END_INTERFACE
    } IWiaItemExtrasVtbl;
    interface IWiaItemExtras
    {
        CONST_VTBL struct IWiaItemExtrasVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetExtendedErrorInfo(This,bstrErrorText) )
    ( (This)->lpVtbl -> Escape(This,dwEscapeCode,lpInData,cbInDataSize,pOutData,dwOutDataSize,pdwActualDataSize) )
    ( (This)->lpVtbl -> CancelPendingIO(This) )
EXTERN_C const IID LIBID_WiaDevMgr;
EXTERN_C const CLSID CLSID_WiaDevMgr;
class DECLSPEC_UUID("a1f4e726-8cf1-11d1-bf92-0060081ed811")
WiaDevMgr;
EXTERN_C const CLSID CLSID_WiaLog;
class DECLSPEC_UUID("A1E75357-881A-419e-83E2-BB16DB197C68")
WiaLog;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wia_xp_0000_0015_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER STGMEDIUM_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * );
void __RPC_USER STGMEDIUM_UserFree( __RPC__in unsigned long *, __RPC__in STGMEDIUM * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER STGMEDIUM_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * );
void __RPC_USER STGMEDIUM_UserFree64( __RPC__in unsigned long *, __RPC__in STGMEDIUM * );
              HRESULT STDMETHODCALLTYPE IWiaDevMgr_CreateDevice_Proxy(
    IWiaDevMgr * This,
               BSTR bstrDeviceID,
                IWiaItem **ppWiaItemRoot);
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_CreateDevice_Stub(
    __RPC__in IWiaDevMgr * This,
               __RPC__in BSTR bstrDeviceID,
                __RPC__deref_out_opt IWiaItem **ppWiaItemRoot);
              HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlg_Proxy(
    IWiaDevMgr * This,
               HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
                    BSTR *pbstrDeviceID,
                        IWiaItem **ppItemRoot);
                                    HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlg_Stub(
    __RPC__in IWiaDevMgr * This,
               __RPC__in HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
                    __RPC__deref_inout_opt BSTR *pbstrDeviceID,
                        __RPC__deref_out_opt IWiaItem **ppItemRoot);
              HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlgID_Proxy(
    IWiaDevMgr * This,
               HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
                        BSTR *pbstrDeviceID);
                                    HRESULT STDMETHODCALLTYPE IWiaDevMgr_SelectDeviceDlgID_Stub(
    __RPC__in IWiaDevMgr * This,
               __RPC__in HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
                        __RPC__deref_out_opt BSTR *pbstrDeviceID);
              HRESULT STDMETHODCALLTYPE IWiaDevMgr_GetImageDlg_Proxy(
    IWiaDevMgr * This,
               HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
               LONG lIntent,
               IWiaItem *pItemRoot,
               BSTR bstrFilename,
                    GUID *pguidFormat);
                                    HRESULT STDMETHODCALLTYPE IWiaDevMgr_GetImageDlg_Stub(
    __RPC__in IWiaDevMgr * This,
               __RPC__in HWND hwndParent,
               LONG lDeviceType,
               LONG lFlags,
               LONG lIntent,
               __RPC__in_opt IWiaItem *pItemRoot,
               __RPC__in BSTR bstrFilename,
                    __RPC__inout GUID *pguidFormat);
              HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackProgram_Proxy(
    IWiaDevMgr * This,
               LONG lFlags,
               BSTR bstrDeviceID,
               const GUID *pEventGUID,
               BSTR bstrCommandline,
               BSTR bstrName,
               BSTR bstrDescription,
               BSTR bstrIcon);
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackProgram_Stub(
    __RPC__in IWiaDevMgr * This,
               LONG lFlags,
               __RPC__in BSTR bstrDeviceID,
               __RPC__in const GUID *pEventGUID,
               __RPC__in BSTR bstrCommandline,
               __RPC__in BSTR bstrName,
               __RPC__in BSTR bstrDescription,
               __RPC__in BSTR bstrIcon);
              HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackInterface_Proxy(
    IWiaDevMgr * This,
               LONG lFlags,
               BSTR bstrDeviceID,
               const GUID *pEventGUID,
                       IWiaEventCallback *pIWiaEventCallback,
                IUnknown **pEventObject);
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackInterface_Stub(
    __RPC__in IWiaDevMgr * This,
               LONG lFlags,
               __RPC__in BSTR bstrDeviceID,
               __RPC__in const GUID *pEventGUID,
                       __RPC__in_opt IWiaEventCallback *pIWiaEventCallback,
                __RPC__deref_out_opt IUnknown **pEventObject);
              HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackCLSID_Proxy(
    IWiaDevMgr * This,
               LONG lFlags,
               BSTR bstrDeviceID,
               const GUID *pEventGUID,
                       const GUID *pClsID,
               BSTR bstrName,
               BSTR bstrDescription,
               BSTR bstrIcon);
                            HRESULT STDMETHODCALLTYPE IWiaDevMgr_RegisterEventCallbackCLSID_Stub(
    __RPC__in IWiaDevMgr * This,
               LONG lFlags,
               __RPC__in BSTR bstrDeviceID,
               __RPC__in const GUID *pEventGUID,
                       __RPC__in_opt const GUID *pClsID,
               __RPC__in BSTR bstrName,
               __RPC__in BSTR bstrDescription,
               __RPC__in BSTR bstrIcon);
              HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_INFO_Next_Proxy(
    IEnumWIA_DEV_INFO * This,
               ULONG celt,
                                    IWiaPropertyStorage **rgelt,
                            ULONG *pceltFetched);
                            HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_INFO_Next_Stub(
    __RPC__in IEnumWIA_DEV_INFO * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IWiaPropertyStorage **rgelt,
                            __RPC__inout_opt ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE IWiaDataCallback_BandedDataCallback_Proxy(
    IWiaDataCallback * This,
               LONG lMessage,
               LONG lStatus,
               LONG lPercentComplete,
               LONG lOffset,
               LONG lLength,
               LONG lReserved,
               LONG lResLength,
                        BYTE *pbBuffer);
                            HRESULT STDMETHODCALLTYPE IWiaDataCallback_BandedDataCallback_Stub(
    __RPC__in IWiaDataCallback * This,
               LONG lMessage,
               LONG lStatus,
               LONG lPercentComplete,
               LONG lOffset,
               LONG lLength,
               LONG lReserved,
               LONG lResLength,
                                __RPC__in_ecount_full_opt(lResLength) BYTE *pbBuffer);
              HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetData_Proxy(
    IWiaDataTransfer * This,
                    LPSTGMEDIUM pMedium,
                       IWiaDataCallback *pIWiaDataCallback);
                            HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetData_Stub(
    __RPC__in IWiaDataTransfer * This,
                    __RPC__inout LPSTGMEDIUM pMedium,
                       __RPC__in_opt IWiaDataCallback *pIWiaDataCallback);
              HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetBandedData_Proxy(
    IWiaDataTransfer * This,
                       PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo,
                       IWiaDataCallback *pIWiaDataCallback);
                            HRESULT STDMETHODCALLTYPE IWiaDataTransfer_idtGetBandedData_Stub(
    __RPC__in IWiaDataTransfer * This,
                       __RPC__in_opt PWIA_DATA_TRANSFER_INFO pWiaDataTransInfo,
                       __RPC__in_opt IWiaDataCallback *pIWiaDataCallback);
              HRESULT STDMETHODCALLTYPE IWiaItem_DeviceDlg_Proxy(
    IWiaItem * This,
               HWND hwndParent,
               LONG lFlags,
               LONG lIntent,
                LONG *plItemCount,
                IWiaItem ***ppIWiaItem);
                                    HRESULT STDMETHODCALLTYPE IWiaItem_DeviceDlg_Stub(
    __RPC__in IWiaItem * This,
               __RPC__in HWND hwndParent,
               LONG lFlags,
               LONG lIntent,
                __RPC__out LONG *plItemCount,
                __RPC__deref_out_opt IWiaItem ***pIWiaItem);
              HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_WriteMultiple_Proxy(
    IWiaPropertyStorage * This,
               ULONG cpspec,
                        const PROPSPEC rgpspec[ ],
                        const PROPVARIANT rgpropvar[ ],
               PROPID propidNameFirst);
                HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_WriteMultiple_Stub(
    __RPC__in IWiaPropertyStorage * This,
               ULONG cpspec,
                        __RPC__in_ecount_full(cpspec) const PROPSPEC *rgpspec,
                        __RPC__in_ecount_full(cpspec) const PROPVARIANT *rgpropvar,
               PROPID propidNameFirst);
              HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_SetPropertyStream_Proxy(
    IWiaPropertyStorage * This,
               GUID *pCompatibilityId,
                       IStream *pIStream);
                            HRESULT STDMETHODCALLTYPE IWiaPropertyStorage_SetPropertyStream_Stub(
    __RPC__in IWiaPropertyStorage * This,
               __RPC__in GUID *pCompatibilityId,
                       __RPC__in_opt IStream *pIStream);
              HRESULT STDMETHODCALLTYPE IEnumWiaItem_Next_Proxy(
    IEnumWiaItem * This,
               ULONG celt,
                                    IWiaItem **ppIWiaItem,
                            ULONG *pceltFetched);
                            HRESULT STDMETHODCALLTYPE IEnumWiaItem_Next_Stub(
    __RPC__in IEnumWiaItem * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) IWiaItem **ppIWiaItem,
                            __RPC__inout_opt ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_CAPS_Next_Proxy(
    IEnumWIA_DEV_CAPS * This,
               ULONG celt,
                                    WIA_DEV_CAP *rgelt,
                            ULONG *pceltFetched);
                            HRESULT STDMETHODCALLTYPE IEnumWIA_DEV_CAPS_Next_Stub(
    __RPC__in IEnumWIA_DEV_CAPS * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) WIA_DEV_CAP *rgelt,
                            __RPC__inout_opt ULONG *pceltFetched);
              HRESULT STDMETHODCALLTYPE IEnumWIA_FORMAT_INFO_Next_Proxy(
    IEnumWIA_FORMAT_INFO * This,
               ULONG celt,
                                    WIA_FORMAT_INFO *rgelt,
                            ULONG *pceltFetched);
                            HRESULT STDMETHODCALLTYPE IEnumWIA_FORMAT_INFO_Next_Stub(
    __RPC__in IEnumWIA_FORMAT_INFO * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) WIA_FORMAT_INFO *rgelt,
                            __RPC__inout_opt ULONG *pceltFetched);
}
