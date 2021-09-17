#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWiaMiniDrv IWiaMiniDrv;
typedef interface IWiaMiniDrvCallBack IWiaMiniDrvCallBack;
typedef interface IWiaDrvItem IWiaDrvItem;
#include "unknwn.h"
#include "oaidl.h"
#include "propidl.h"
#include "wia_xp.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _MINIDRV_TRANSFER_CONTEXT
    {
    LONG lSize;
    LONG lWidthInPixels;
    LONG lLines;
    LONG lDepth;
    LONG lXRes;
    LONG lYRes;
    LONG lCompression;
    GUID guidFormatID;
    LONG tymed;
    LONG_PTR hFile;
    LONG cbOffset;
    LONG lBufferSize;
    LONG lActiveBuffer;
    LONG lNumBuffers;
    BYTE *pBaseBuffer;
    BYTE *pTransferBuffer;
    BOOL bTransferDataCB;
    BOOL bClassDrvAllocBuf;
    LONG_PTR lClientAddress;
    IWiaMiniDrvCallBack *pIWiaMiniDrvCallBack;
    LONG lImageSize;
    LONG lHeaderSize;
    LONG lItemSize;
    LONG cbWidthInBytes;
    LONG lPage;
    LONG lCurIfdOffset;
    LONG lPrevIfdOffset;
    } MINIDRV_TRANSFER_CONTEXT;
typedef struct _MINIDRV_TRANSFER_CONTEXT *PMINIDRV_TRANSFER_CONTEXT;
typedef struct _WIA_DEV_CAP_DRV
    {
    GUID *guid;
    ULONG ulFlags;
    LPOLESTR wszName;
    LPOLESTR wszDescription;
    LPOLESTR wszIcon;
    } WIA_DEV_CAP_DRV;
typedef struct _WIA_DEV_CAP_DRV *PWIA_DEV_CAP_DRV;
extern RPC_IF_HANDLE __MIDL_itf_wiamindr_xp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wiamindr_xp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWiaMiniDrv;
    typedef struct IWiaMiniDrvVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaMiniDrv * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaMiniDrv * This);
                           HRESULT ( STDMETHODCALLTYPE *drvInitializeWia )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0000,
                       LONG __MIDL__IWiaMiniDrv0001,
                       __RPC__in BSTR __MIDL__IWiaMiniDrv0002,
                       __RPC__in BSTR __MIDL__IWiaMiniDrv0003,
                       __RPC__in_opt IUnknown *__MIDL__IWiaMiniDrv0004,
                       __RPC__in_opt IUnknown *__MIDL__IWiaMiniDrv0005,
                        __RPC__deref_out_opt IWiaDrvItem **__MIDL__IWiaMiniDrv0006,
                        __RPC__deref_out_opt IUnknown **__MIDL__IWiaMiniDrv0007,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0008);
                           HRESULT ( STDMETHODCALLTYPE *drvAcquireItemData )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0009,
                       LONG __MIDL__IWiaMiniDrv0010,
                            __RPC__inout PMINIDRV_TRANSFER_CONTEXT __MIDL__IWiaMiniDrv0011,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0012);
                           HRESULT ( STDMETHODCALLTYPE *drvInitItemProperties )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0013,
                       LONG __MIDL__IWiaMiniDrv0014,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0015);
                           HRESULT ( STDMETHODCALLTYPE *drvValidateItemProperties )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0016,
                       LONG __MIDL__IWiaMiniDrv0017,
                       ULONG __MIDL__IWiaMiniDrv0018,
                       __RPC__in const PROPSPEC *__MIDL__IWiaMiniDrv0019,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0020);
                           HRESULT ( STDMETHODCALLTYPE *drvWriteItemProperties )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0021,
                       LONG __MIDL__IWiaMiniDrv0022,
                       __RPC__in PMINIDRV_TRANSFER_CONTEXT __MIDL__IWiaMiniDrv0023,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0024);
                           HRESULT ( STDMETHODCALLTYPE *drvReadItemProperties )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0025,
                       LONG __MIDL__IWiaMiniDrv0026,
                       ULONG __MIDL__IWiaMiniDrv0027,
                       __RPC__in const PROPSPEC *__MIDL__IWiaMiniDrv0028,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0029);
                           HRESULT ( STDMETHODCALLTYPE *drvLockWiaDevice )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0030,
                       LONG __MIDL__IWiaMiniDrv0031,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0032);
                           HRESULT ( STDMETHODCALLTYPE *drvUnLockWiaDevice )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0033,
                       LONG __MIDL__IWiaMiniDrv0034,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0035);
                           HRESULT ( STDMETHODCALLTYPE *drvAnalyzeItem )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0036,
                       LONG __MIDL__IWiaMiniDrv0037,
                       __RPC__in LONG *__MIDL__IWiaMiniDrv0038);
                           HRESULT ( STDMETHODCALLTYPE *drvGetDeviceErrorStr )(
            __RPC__in IWiaMiniDrv * This,
                       LONG __MIDL__IWiaMiniDrv0039,
                       LONG __MIDL__IWiaMiniDrv0040,
                        __RPC__deref_out_opt LPOLESTR *__MIDL__IWiaMiniDrv0041,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0042);
                           HRESULT ( STDMETHODCALLTYPE *drvDeviceCommand )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0043,
                       LONG __MIDL__IWiaMiniDrv0044,
                       __RPC__in const GUID *__MIDL__IWiaMiniDrv0045,
                        __RPC__deref_out_opt IWiaDrvItem **__MIDL__IWiaMiniDrv0046,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0047);
                           HRESULT ( STDMETHODCALLTYPE *drvGetCapabilities )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0048,
                       LONG __MIDL__IWiaMiniDrv0049,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0050,
                        __RPC__deref_out_opt WIA_DEV_CAP_DRV **__MIDL__IWiaMiniDrv0051,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0052);
                           HRESULT ( STDMETHODCALLTYPE *drvDeleteItem )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0053,
                       LONG __MIDL__IWiaMiniDrv0054,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0055);
                           HRESULT ( STDMETHODCALLTYPE *drvFreeDrvItemContext )(
            __RPC__in IWiaMiniDrv * This,
                       LONG __MIDL__IWiaMiniDrv0056,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0057,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0058);
                           HRESULT ( STDMETHODCALLTYPE *drvGetWiaFormatInfo )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0059,
                       LONG __MIDL__IWiaMiniDrv0060,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0061,
                        __RPC__deref_out_opt WIA_FORMAT_INFO **__MIDL__IWiaMiniDrv0062,
                        __RPC__out LONG *__MIDL__IWiaMiniDrv0063);
                           HRESULT ( STDMETHODCALLTYPE *drvNotifyPnpEvent )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in const GUID *pEventGUID,
                       __RPC__in BSTR bstrDeviceID,
                       ULONG ulReserved);
                           HRESULT ( STDMETHODCALLTYPE *drvUnInitializeWia )(
            __RPC__in IWiaMiniDrv * This,
                       __RPC__in BYTE *__MIDL__IWiaMiniDrv0064);
        END_INTERFACE
    } IWiaMiniDrvVtbl;
    interface IWiaMiniDrv
    {
        CONST_VTBL struct IWiaMiniDrvVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> drvInitializeWia(This,__MIDL__IWiaMiniDrv0000,__MIDL__IWiaMiniDrv0001,__MIDL__IWiaMiniDrv0002,__MIDL__IWiaMiniDrv0003,__MIDL__IWiaMiniDrv0004,__MIDL__IWiaMiniDrv0005,__MIDL__IWiaMiniDrv0006,__MIDL__IWiaMiniDrv0007,__MIDL__IWiaMiniDrv0008) )
    ( (This)->lpVtbl -> drvAcquireItemData(This,__MIDL__IWiaMiniDrv0009,__MIDL__IWiaMiniDrv0010,__MIDL__IWiaMiniDrv0011,__MIDL__IWiaMiniDrv0012) )
    ( (This)->lpVtbl -> drvInitItemProperties(This,__MIDL__IWiaMiniDrv0013,__MIDL__IWiaMiniDrv0014,__MIDL__IWiaMiniDrv0015) )
    ( (This)->lpVtbl -> drvValidateItemProperties(This,__MIDL__IWiaMiniDrv0016,__MIDL__IWiaMiniDrv0017,__MIDL__IWiaMiniDrv0018,__MIDL__IWiaMiniDrv0019,__MIDL__IWiaMiniDrv0020) )
    ( (This)->lpVtbl -> drvWriteItemProperties(This,__MIDL__IWiaMiniDrv0021,__MIDL__IWiaMiniDrv0022,__MIDL__IWiaMiniDrv0023,__MIDL__IWiaMiniDrv0024) )
    ( (This)->lpVtbl -> drvReadItemProperties(This,__MIDL__IWiaMiniDrv0025,__MIDL__IWiaMiniDrv0026,__MIDL__IWiaMiniDrv0027,__MIDL__IWiaMiniDrv0028,__MIDL__IWiaMiniDrv0029) )
    ( (This)->lpVtbl -> drvLockWiaDevice(This,__MIDL__IWiaMiniDrv0030,__MIDL__IWiaMiniDrv0031,__MIDL__IWiaMiniDrv0032) )
    ( (This)->lpVtbl -> drvUnLockWiaDevice(This,__MIDL__IWiaMiniDrv0033,__MIDL__IWiaMiniDrv0034,__MIDL__IWiaMiniDrv0035) )
    ( (This)->lpVtbl -> drvAnalyzeItem(This,__MIDL__IWiaMiniDrv0036,__MIDL__IWiaMiniDrv0037,__MIDL__IWiaMiniDrv0038) )
    ( (This)->lpVtbl -> drvGetDeviceErrorStr(This,__MIDL__IWiaMiniDrv0039,__MIDL__IWiaMiniDrv0040,__MIDL__IWiaMiniDrv0041,__MIDL__IWiaMiniDrv0042) )
    ( (This)->lpVtbl -> drvDeviceCommand(This,__MIDL__IWiaMiniDrv0043,__MIDL__IWiaMiniDrv0044,__MIDL__IWiaMiniDrv0045,__MIDL__IWiaMiniDrv0046,__MIDL__IWiaMiniDrv0047) )
    ( (This)->lpVtbl -> drvGetCapabilities(This,__MIDL__IWiaMiniDrv0048,__MIDL__IWiaMiniDrv0049,__MIDL__IWiaMiniDrv0050,__MIDL__IWiaMiniDrv0051,__MIDL__IWiaMiniDrv0052) )
    ( (This)->lpVtbl -> drvDeleteItem(This,__MIDL__IWiaMiniDrv0053,__MIDL__IWiaMiniDrv0054,__MIDL__IWiaMiniDrv0055) )
    ( (This)->lpVtbl -> drvFreeDrvItemContext(This,__MIDL__IWiaMiniDrv0056,__MIDL__IWiaMiniDrv0057,__MIDL__IWiaMiniDrv0058) )
    ( (This)->lpVtbl -> drvGetWiaFormatInfo(This,__MIDL__IWiaMiniDrv0059,__MIDL__IWiaMiniDrv0060,__MIDL__IWiaMiniDrv0061,__MIDL__IWiaMiniDrv0062,__MIDL__IWiaMiniDrv0063) )
    ( (This)->lpVtbl -> drvNotifyPnpEvent(This,pEventGUID,bstrDeviceID,ulReserved) )
    ( (This)->lpVtbl -> drvUnInitializeWia(This,__MIDL__IWiaMiniDrv0064) )
EXTERN_C const IID IID_IWiaMiniDrvCallBack;
    typedef struct IWiaMiniDrvCallBackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaMiniDrvCallBack * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaMiniDrvCallBack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaMiniDrvCallBack * This);
                               HRESULT ( STDMETHODCALLTYPE *MiniDrvCallback )(
            __RPC__in IWiaMiniDrvCallBack * This,
                       LONG lReason,
                       LONG lStatus,
                       LONG lPercentComplete,
                       LONG lOffset,
                       LONG lLength,
                       __RPC__in PMINIDRV_TRANSFER_CONTEXT pTranCtx,
                       LONG lReserved);
        END_INTERFACE
    } IWiaMiniDrvCallBackVtbl;
    interface IWiaMiniDrvCallBack
    {
        CONST_VTBL struct IWiaMiniDrvCallBackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MiniDrvCallback(This,lReason,lStatus,lPercentComplete,lOffset,lLength,pTranCtx,lReserved) )
EXTERN_C const IID IID_IWiaDrvItem;
    typedef struct IWiaDrvItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWiaDrvItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWiaDrvItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWiaDrvItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemFlags )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__out LONG *__MIDL__IWiaDrvItem0000);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSpecContext )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__deref_out_opt BYTE **__MIDL__IWiaDrvItem0001);
        HRESULT ( STDMETHODCALLTYPE *GetFullItemName )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IWiaDrvItem0002);
        HRESULT ( STDMETHODCALLTYPE *GetItemName )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IWiaDrvItem0003);
        HRESULT ( STDMETHODCALLTYPE *AddItemToFolder )(
            __RPC__in IWiaDrvItem * This,
                       __RPC__in_opt IWiaDrvItem *__MIDL__IWiaDrvItem0004);
        HRESULT ( STDMETHODCALLTYPE *UnlinkItemTree )(
            __RPC__in IWiaDrvItem * This,
                       LONG __MIDL__IWiaDrvItem0005);
        HRESULT ( STDMETHODCALLTYPE *RemoveItemFromFolder )(
            __RPC__in IWiaDrvItem * This,
                       LONG __MIDL__IWiaDrvItem0006);
        HRESULT ( STDMETHODCALLTYPE *FindItemByName )(
            __RPC__in IWiaDrvItem * This,
                       LONG __MIDL__IWiaDrvItem0007,
                       __RPC__in BSTR __MIDL__IWiaDrvItem0008,
                        __RPC__deref_out_opt IWiaDrvItem **__MIDL__IWiaDrvItem0009);
        HRESULT ( STDMETHODCALLTYPE *FindChildItemByName )(
            __RPC__in IWiaDrvItem * This,
                       __RPC__in BSTR __MIDL__IWiaDrvItem0010,
                        __RPC__deref_out_opt IWiaDrvItem **__MIDL__IWiaDrvItem0011);
        HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__deref_out_opt IWiaDrvItem **__MIDL__IWiaDrvItem0012);
        HRESULT ( STDMETHODCALLTYPE *GetFirstChildItem )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__deref_out_opt IWiaDrvItem **__MIDL__IWiaDrvItem0013);
        HRESULT ( STDMETHODCALLTYPE *GetNextSiblingItem )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__deref_out_opt IWiaDrvItem **__MIDL__IWiaDrvItem0014);
        HRESULT ( STDMETHODCALLTYPE *DumpItemData )(
            __RPC__in IWiaDrvItem * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IWiaDrvItem0015);
        END_INTERFACE
    } IWiaDrvItemVtbl;
    interface IWiaDrvItem
    {
        CONST_VTBL struct IWiaDrvItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemFlags(This,__MIDL__IWiaDrvItem0000) )
    ( (This)->lpVtbl -> GetDeviceSpecContext(This,__MIDL__IWiaDrvItem0001) )
    ( (This)->lpVtbl -> GetFullItemName(This,__MIDL__IWiaDrvItem0002) )
    ( (This)->lpVtbl -> GetItemName(This,__MIDL__IWiaDrvItem0003) )
    ( (This)->lpVtbl -> AddItemToFolder(This,__MIDL__IWiaDrvItem0004) )
    ( (This)->lpVtbl -> UnlinkItemTree(This,__MIDL__IWiaDrvItem0005) )
    ( (This)->lpVtbl -> RemoveItemFromFolder(This,__MIDL__IWiaDrvItem0006) )
    ( (This)->lpVtbl -> FindItemByName(This,__MIDL__IWiaDrvItem0007,__MIDL__IWiaDrvItem0008,__MIDL__IWiaDrvItem0009) )
    ( (This)->lpVtbl -> FindChildItemByName(This,__MIDL__IWiaDrvItem0010,__MIDL__IWiaDrvItem0011) )
    ( (This)->lpVtbl -> GetParentItem(This,__MIDL__IWiaDrvItem0012) )
    ( (This)->lpVtbl -> GetFirstChildItem(This,__MIDL__IWiaDrvItem0013) )
    ( (This)->lpVtbl -> GetNextSiblingItem(This,__MIDL__IWiaDrvItem0014) )
    ( (This)->lpVtbl -> DumpItemData(This,__MIDL__IWiaDrvItem0015) )
typedef struct _WIA_PROPERTY_INFO
    {
    ULONG lAccessFlags;
    VARTYPE vt;
    union
        {
        struct
            {
            LONG Min;
            LONG Nom;
            LONG Max;
            LONG Inc;
            } Range;
        struct
            {
            DOUBLE Min;
            DOUBLE Nom;
            DOUBLE Max;
            DOUBLE Inc;
            } RangeFloat;
        struct
            {
            LONG cNumList;
            LONG Nom;
                            BYTE *pList;
            } List;
        struct
            {
            LONG cNumList;
            DOUBLE Nom;
                            BYTE *pList;
            } ListFloat;
        struct
            {
            LONG cNumList;
            GUID Nom;
                            GUID *pList;
            } ListGuid;
        struct
            {
            LONG cNumList;
            BSTR Nom;
                            BSTR *pList;
            } ListBStr;
        struct
            {
            LONG Nom;
            LONG ValidBits;
            } Flag;
        struct
            {
            LONG Dummy;
            } None;
        } ValidVal;
    } WIA_PROPERTY_INFO;
typedef struct _WIA_PROPERTY_INFO *PWIA_PROPERTY_INFO;
typedef struct _WIA_PROPERTY_CONTEXT
    {
    ULONG cProps;
                    PROPID *pProps;
                    BOOL *pChanged;
    } WIA_PROPERTY_CONTEXT;
typedef struct _WIA_PROPERTY_CONTEXT *PWIA_PROPERTY_CONTEXT;
typedef struct _WIAS_CHANGED_VALUE_INFO
    {
    BOOL bChanged;
    LONG vt;
    union
        {
        LONG lVal;
        FLOAT fltVal;
        BSTR bstrVal;
        GUID guidVal;
        } Old;
    union
        {
        LONG lVal;
        FLOAT fltVal;
        BSTR bstrVal;
        GUID guidVal;
        } Current;
    } WIAS_CHANGED_VALUE_INFO;
typedef struct _WIAS_CHANGED_VALUE_INFO *PWIAS_CHANGED_VALUE_INFO;
typedef struct _WIAS_DOWN_SAMPLE_INFO
    {
    ULONG ulOriginalWidth;
    ULONG ulOriginalHeight;
    ULONG ulBitsPerPixel;
    ULONG ulXRes;
    ULONG ulYRes;
    ULONG ulDownSampledWidth;
    ULONG ulDownSampledHeight;
    ULONG ulActualSize;
    ULONG ulDestBufSize;
    ULONG ulSrcBufSize;
                    BYTE *pSrcBuffer;
                    BYTE *pDestBuffer;
    } WIAS_DOWN_SAMPLE_INFO;
typedef struct _WIAS_DOWN_SAMPLE_INFO *PWIAS_DOWN_SAMPLE_INFO;
typedef struct _WIAS_ENDORSER_VALUE
    {
    LPWSTR wszTokenName;
    LPWSTR wszValue;
    } WIAS_ENDORSER_VALUE;
typedef struct _WIAS_ENDORSER_VALUE *PWIAS_ENDORSER_VALUE;
typedef struct _WIAS_ENDORSER_INFO
    {
    ULONG ulPageCount;
    ULONG ulNumEndorserValues;
                    WIAS_ENDORSER_VALUE *pEndorserValues;
    } WIAS_ENDORSER_INFO;
typedef struct _WIAS_ENDORSER_INFO *PWIAS_ENDORSER_INFO;
#include "wiamdef.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wiamindr_xp_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wiamindr_xp_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
