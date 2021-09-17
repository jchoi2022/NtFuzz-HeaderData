#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMSAdminBaseW IMSAdminBaseW;
typedef interface IMSAdminBase2W IMSAdminBase2W;
typedef interface IMSAdminBase3W IMSAdminBase3W;
typedef interface IMSImpExpHelpW IMSImpExpHelpW;
typedef interface IMSAdminBaseSinkW IMSAdminBaseSinkW;
typedef interface AsyncIMSAdminBaseSinkW AsyncIMSAdminBaseSinkW;
#include "mddefw.h"
#include "objidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <mdcommsg.h>
#include <mdmsg.h>
DEFINE_GUID(CLSID_MSAdminBase_W, 0xa9e69610, 0xb80d, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
DEFINE_GUID(IID_IMSAdminBase_W, 0x70b51430, 0xb6ca, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
DEFINE_GUID(IID_IMSAdminBase2_W, 0x8298d101, 0xf992, 0x43b7, 0x8e, 0xca, 0x50, 0x52, 0xd8, 0x85, 0xb9, 0x95);
DEFINE_GUID(IID_IMSAdminBase3_W, 0xf612954d, 0x3b0b, 0x4c56, 0x95, 0x63, 0x22, 0x7b, 0x7b, 0xe6, 0x24, 0xb4);
DEFINE_GUID(IID_IMSImpExpHelp_W, 0x29ff67ff, 0x8050, 0x480f, 0x9f, 0x30, 0xcc, 0x41, 0x63, 0x5f, 0x2f, 0x9d);
DEFINE_GUID(IID_IMSAdminBaseSink_W, 0xa9e69612, 0xb80d, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
DEFINE_GUID(IID_AsyncIMSAdminBaseSink_W, 0xa9e69613, 0xb80d, 0x11d0, 0xb9, 0xb9, 0x00, 0xa0, 0xc9, 0x22, 0xe7, 0x50);
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSAdminBaseW;
    typedef struct IMSAdminBaseWVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSAdminBaseW * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSAdminBaseW * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSAdminBaseW * This);
        HRESULT ( STDMETHODCALLTYPE *AddKey )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *DeleteChildKeys )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                                 __RPC__out_ecount_full(256) LPWSTR pszMDName,
                       DWORD dwMDEnumObjectIndex);
        HRESULT ( STDMETHODCALLTYPE *CopyKey )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDSourceHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDSourcePath,
                       METADATA_HANDLE hMDDestHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDDestPath,
                       BOOL bMDOverwriteFlag,
                       BOOL bMDCopyFlag);
        HRESULT ( STDMETHODCALLTYPE *RenameKey )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                                       __RPC__in_opt_string LPCWSTR pszMDNewName);
                      HRESULT ( STDMETHODCALLTYPE *SetData )(
            IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                       PMETADATA_RECORD pmdrMDData);
                      HRESULT ( STDMETHODCALLTYPE *GetData )(
            IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                            PMETADATA_RECORD pmdrMDData,
                        DWORD *pdwMDRequiredDataLen);
        HRESULT ( STDMETHODCALLTYPE *DeleteData )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDIdentifier,
                       DWORD dwMDDataType);
                      HRESULT ( STDMETHODCALLTYPE *EnumData )(
            IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                            PMETADATA_RECORD pmdrMDData,
                       DWORD dwMDEnumDataIndex,
                        DWORD *pdwMDRequiredDataLen);
                      HRESULT ( STDMETHODCALLTYPE *GetAllData )(
            IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                       DWORD dwMDAttributes,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType,
                        DWORD *pdwMDNumDataEntries,
                        DWORD *pdwMDDataSetNumber,
                       DWORD dwMDBufferSize,
                                 unsigned char *pbMDBuffer,
                        DWORD *pdwMDRequiredBufferSize);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllData )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType);
        HRESULT ( STDMETHODCALLTYPE *CopyData )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDSourceHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDSourcePath,
                       METADATA_HANDLE hMDDestHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDDestPath,
                       DWORD dwMDAttributes,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType,
                       BOOL bMDCopyFlag);
        HRESULT ( STDMETHODCALLTYPE *GetDataPaths )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDIdentifier,
                       DWORD dwMDDataType,
                       DWORD dwMDBufferSize,
                                 __RPC__out_ecount_full(dwMDBufferSize) WCHAR *pszBuffer,
                        __RPC__out DWORD *pdwMDRequiredBufferSize);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDAccessRequested,
                       DWORD dwMDTimeOut,
                        __RPC__out PMETADATA_HANDLE phMDNewHandle);
        HRESULT ( STDMETHODCALLTYPE *CloseKey )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle);
        HRESULT ( STDMETHODCALLTYPE *ChangePermissions )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                       DWORD dwMDTimeOut,
                       DWORD dwMDAccessRequested);
        HRESULT ( STDMETHODCALLTYPE *SaveData )(
            __RPC__in IMSAdminBaseW * This);
        HRESULT ( STDMETHODCALLTYPE *GetHandleInfo )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                        __RPC__out PMETADATA_HANDLE_INFO pmdhiInfo);
        HRESULT ( STDMETHODCALLTYPE *GetSystemChangeNumber )(
            __RPC__in IMSAdminBaseW * This,
                        __RPC__out DWORD *pdwSystemChangeNumber);
        HRESULT ( STDMETHODCALLTYPE *GetDataSetNumber )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                        __RPC__out DWORD *pdwMDDataSetNumber);
        HRESULT ( STDMETHODCALLTYPE *SetLastChangeTime )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       __RPC__in PFILETIME pftMDLastChangeTime,
                       BOOL bLocalTime);
        HRESULT ( STDMETHODCALLTYPE *GetLastChangeTime )(
            __RPC__in IMSAdminBaseW * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                        __RPC__out PFILETIME pftMDLastChangeTime,
                       BOOL bLocalTime);
                                  HRESULT ( STDMETHODCALLTYPE *KeyExchangePhase1 )(
            IMSAdminBaseW * This);
                                  HRESULT ( STDMETHODCALLTYPE *KeyExchangePhase2 )(
            IMSAdminBaseW * This);
        HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IMSAdminBaseW * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *Restore )(
            __RPC__in IMSAdminBaseW * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *EnumBackups )(
            __RPC__in IMSAdminBaseW * This,
                                     __RPC__inout_ecount_full(256) LPWSTR pszMDBackupLocation,
                        __RPC__out DWORD *pdwMDVersion,
                        __RPC__out PFILETIME pftMDBackupTime,
                       DWORD dwMDEnumIndex);
        HRESULT ( STDMETHODCALLTYPE *DeleteBackup )(
            __RPC__in IMSAdminBaseW * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion);
        HRESULT ( STDMETHODCALLTYPE *UnmarshalInterface )(
            __RPC__in IMSAdminBaseW * This,
                        __RPC__deref_out_opt IMSAdminBaseW **piadmbwInterface);
                                  HRESULT ( STDMETHODCALLTYPE *GetServerGuid )(
            IMSAdminBaseW * This);
        END_INTERFACE
    } IMSAdminBaseWVtbl;
    interface IMSAdminBaseW
    {
        CONST_VTBL struct IMSAdminBaseWVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddKey(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> DeleteKey(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> DeleteChildKeys(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex) )
    ( (This)->lpVtbl -> CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag) )
    ( (This)->lpVtbl -> RenameKey(This,hMDHandle,pszMDPath,pszMDNewName) )
    ( (This)->lpVtbl -> SetData(This,hMDHandle,pszMDPath,pmdrMDData) )
    ( (This)->lpVtbl -> GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen) )
    ( (This)->lpVtbl -> DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType) )
    ( (This)->lpVtbl -> EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen) )
    ( (This)->lpVtbl -> GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize) )
    ( (This)->lpVtbl -> DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType) )
    ( (This)->lpVtbl -> CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag) )
    ( (This)->lpVtbl -> GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
    ( (This)->lpVtbl -> OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle) )
    ( (This)->lpVtbl -> CloseKey(This,hMDHandle) )
    ( (This)->lpVtbl -> ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested) )
    ( (This)->lpVtbl -> SaveData(This) )
    ( (This)->lpVtbl -> GetHandleInfo(This,hMDHandle,pmdhiInfo) )
    ( (This)->lpVtbl -> GetSystemChangeNumber(This,pdwSystemChangeNumber) )
    ( (This)->lpVtbl -> GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber) )
    ( (This)->lpVtbl -> SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
    ( (This)->lpVtbl -> GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
    ( (This)->lpVtbl -> KeyExchangePhase1(This) )
    ( (This)->lpVtbl -> KeyExchangePhase2(This) )
    ( (This)->lpVtbl -> Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
    ( (This)->lpVtbl -> Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
    ( (This)->lpVtbl -> EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex) )
    ( (This)->lpVtbl -> DeleteBackup(This,pszMDBackupLocation,dwMDVersion) )
    ( (This)->lpVtbl -> UnmarshalInterface(This,piadmbwInterface) )
    ( (This)->lpVtbl -> GetServerGuid(This) )
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_SetData_Proxy(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
               __RPC__in PMETADATA_RECORD pmdrMDData);
void __RPC_STUB IMSAdminBaseW_R_SetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_GetData_Proxy(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
                    __RPC__inout PMETADATA_RECORD pmdrMDData,
                __RPC__out DWORD *pdwMDRequiredDataLen,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppDataBlob);
void __RPC_STUB IMSAdminBaseW_R_GetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_EnumData_Proxy(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
                    __RPC__inout PMETADATA_RECORD pmdrMDData,
               DWORD dwMDEnumDataIndex,
                __RPC__out DWORD *pdwMDRequiredDataLen,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppDataBlob);
void __RPC_STUB IMSAdminBaseW_R_EnumData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_GetAllData_Proxy(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
               DWORD dwMDAttributes,
               DWORD dwMDUserType,
               DWORD dwMDDataType,
                __RPC__out DWORD *pdwMDNumDataEntries,
                __RPC__out DWORD *pdwMDDataSetNumber,
               DWORD dwMDBufferSize,
                __RPC__out DWORD *pdwMDRequiredBufferSize,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppDataBlob);
void __RPC_STUB IMSAdminBaseW_R_GetAllData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_KeyExchangePhase1_Proxy(
    __RPC__in IMSAdminBaseW * This,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientKeyExchangeKeyBlob,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientSignatureKeyBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerKeyExchangeKeyBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerSignatureKeyBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerSessionKeyBlob);
void __RPC_STUB IMSAdminBaseW_R_KeyExchangePhase1_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_KeyExchangePhase2_Proxy(
    __RPC__in IMSAdminBaseW * This,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientSessionKeyBlob,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientHashBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerHashBlob);
void __RPC_STUB IMSAdminBaseW_R_KeyExchangePhase2_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_R_GetServerGuid_Proxy(
    __RPC__in IMSAdminBaseW * This,
                __RPC__out GUID *pServerGuid);
void __RPC_STUB IMSAdminBaseW_R_GetServerGuid_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IMSAdminBase2W;
    typedef struct IMSAdminBase2WVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSAdminBase2W * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSAdminBase2W * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSAdminBase2W * This);
        HRESULT ( STDMETHODCALLTYPE *AddKey )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *DeleteChildKeys )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                                 __RPC__out_ecount_full(256) LPWSTR pszMDName,
                       DWORD dwMDEnumObjectIndex);
        HRESULT ( STDMETHODCALLTYPE *CopyKey )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDSourceHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDSourcePath,
                       METADATA_HANDLE hMDDestHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDDestPath,
                       BOOL bMDOverwriteFlag,
                       BOOL bMDCopyFlag);
        HRESULT ( STDMETHODCALLTYPE *RenameKey )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                                       __RPC__in_opt_string LPCWSTR pszMDNewName);
                      HRESULT ( STDMETHODCALLTYPE *SetData )(
            IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                       PMETADATA_RECORD pmdrMDData);
                      HRESULT ( STDMETHODCALLTYPE *GetData )(
            IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                            PMETADATA_RECORD pmdrMDData,
                        DWORD *pdwMDRequiredDataLen);
        HRESULT ( STDMETHODCALLTYPE *DeleteData )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDIdentifier,
                       DWORD dwMDDataType);
                      HRESULT ( STDMETHODCALLTYPE *EnumData )(
            IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                            PMETADATA_RECORD pmdrMDData,
                       DWORD dwMDEnumDataIndex,
                        DWORD *pdwMDRequiredDataLen);
                      HRESULT ( STDMETHODCALLTYPE *GetAllData )(
            IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                       DWORD dwMDAttributes,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType,
                        DWORD *pdwMDNumDataEntries,
                        DWORD *pdwMDDataSetNumber,
                       DWORD dwMDBufferSize,
                                 unsigned char *pbMDBuffer,
                        DWORD *pdwMDRequiredBufferSize);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllData )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType);
        HRESULT ( STDMETHODCALLTYPE *CopyData )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDSourceHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDSourcePath,
                       METADATA_HANDLE hMDDestHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDDestPath,
                       DWORD dwMDAttributes,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType,
                       BOOL bMDCopyFlag);
        HRESULT ( STDMETHODCALLTYPE *GetDataPaths )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDIdentifier,
                       DWORD dwMDDataType,
                       DWORD dwMDBufferSize,
                                 __RPC__out_ecount_full(dwMDBufferSize) WCHAR *pszBuffer,
                        __RPC__out DWORD *pdwMDRequiredBufferSize);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDAccessRequested,
                       DWORD dwMDTimeOut,
                        __RPC__out PMETADATA_HANDLE phMDNewHandle);
        HRESULT ( STDMETHODCALLTYPE *CloseKey )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle);
        HRESULT ( STDMETHODCALLTYPE *ChangePermissions )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                       DWORD dwMDTimeOut,
                       DWORD dwMDAccessRequested);
        HRESULT ( STDMETHODCALLTYPE *SaveData )(
            __RPC__in IMSAdminBase2W * This);
        HRESULT ( STDMETHODCALLTYPE *GetHandleInfo )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                        __RPC__out PMETADATA_HANDLE_INFO pmdhiInfo);
        HRESULT ( STDMETHODCALLTYPE *GetSystemChangeNumber )(
            __RPC__in IMSAdminBase2W * This,
                        __RPC__out DWORD *pdwSystemChangeNumber);
        HRESULT ( STDMETHODCALLTYPE *GetDataSetNumber )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                        __RPC__out DWORD *pdwMDDataSetNumber);
        HRESULT ( STDMETHODCALLTYPE *SetLastChangeTime )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       __RPC__in PFILETIME pftMDLastChangeTime,
                       BOOL bLocalTime);
        HRESULT ( STDMETHODCALLTYPE *GetLastChangeTime )(
            __RPC__in IMSAdminBase2W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                        __RPC__out PFILETIME pftMDLastChangeTime,
                       BOOL bLocalTime);
                                  HRESULT ( STDMETHODCALLTYPE *KeyExchangePhase1 )(
            IMSAdminBase2W * This);
                                  HRESULT ( STDMETHODCALLTYPE *KeyExchangePhase2 )(
            IMSAdminBase2W * This);
        HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *Restore )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *EnumBackups )(
            __RPC__in IMSAdminBase2W * This,
                                     __RPC__inout_ecount_full(256) LPWSTR pszMDBackupLocation,
                        __RPC__out DWORD *pdwMDVersion,
                        __RPC__out PFILETIME pftMDBackupTime,
                       DWORD dwMDEnumIndex);
        HRESULT ( STDMETHODCALLTYPE *DeleteBackup )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion);
        HRESULT ( STDMETHODCALLTYPE *UnmarshalInterface )(
            __RPC__in IMSAdminBase2W * This,
                        __RPC__deref_out_opt IMSAdminBaseW **piadmbwInterface);
                                  HRESULT ( STDMETHODCALLTYPE *GetServerGuid )(
            IMSAdminBase2W * This);
        HRESULT ( STDMETHODCALLTYPE *BackupWithPasswd )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags,
                                       __RPC__in_opt_string LPCWSTR pszPasswd);
        HRESULT ( STDMETHODCALLTYPE *RestoreWithPasswd )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags,
                                       __RPC__in_opt_string LPCWSTR pszPasswd);
        HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszPasswd,
                                       __RPC__in_opt_string LPCWSTR pszFileName,
                                       __RPC__in_opt_string LPCWSTR pszSourcePath,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszPasswd,
                                       __RPC__in_opt_string LPCWSTR pszFileName,
                                       __RPC__in_opt_string LPCWSTR pszSourcePath,
                                       __RPC__in_opt_string LPCWSTR pszDestPath,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *RestoreHistory )(
            __RPC__in IMSAdminBase2W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDHistoryLocation,
                       DWORD dwMDMajorVersion,
                       DWORD dwMDMinorVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *EnumHistory )(
            __RPC__in IMSAdminBase2W * This,
                                     __RPC__inout_ecount_full(256) LPWSTR pszMDHistoryLocation,
                        __RPC__out DWORD *pdwMDMajorVersion,
                        __RPC__out DWORD *pdwMDMinorVersion,
                        __RPC__out PFILETIME pftMDHistoryTime,
                       DWORD dwMDEnumIndex);
        END_INTERFACE
    } IMSAdminBase2WVtbl;
    interface IMSAdminBase2W
    {
        CONST_VTBL struct IMSAdminBase2WVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddKey(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> DeleteKey(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> DeleteChildKeys(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex) )
    ( (This)->lpVtbl -> CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag) )
    ( (This)->lpVtbl -> RenameKey(This,hMDHandle,pszMDPath,pszMDNewName) )
    ( (This)->lpVtbl -> SetData(This,hMDHandle,pszMDPath,pmdrMDData) )
    ( (This)->lpVtbl -> GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen) )
    ( (This)->lpVtbl -> DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType) )
    ( (This)->lpVtbl -> EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen) )
    ( (This)->lpVtbl -> GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize) )
    ( (This)->lpVtbl -> DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType) )
    ( (This)->lpVtbl -> CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag) )
    ( (This)->lpVtbl -> GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
    ( (This)->lpVtbl -> OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle) )
    ( (This)->lpVtbl -> CloseKey(This,hMDHandle) )
    ( (This)->lpVtbl -> ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested) )
    ( (This)->lpVtbl -> SaveData(This) )
    ( (This)->lpVtbl -> GetHandleInfo(This,hMDHandle,pmdhiInfo) )
    ( (This)->lpVtbl -> GetSystemChangeNumber(This,pdwSystemChangeNumber) )
    ( (This)->lpVtbl -> GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber) )
    ( (This)->lpVtbl -> SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
    ( (This)->lpVtbl -> GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
    ( (This)->lpVtbl -> KeyExchangePhase1(This) )
    ( (This)->lpVtbl -> KeyExchangePhase2(This) )
    ( (This)->lpVtbl -> Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
    ( (This)->lpVtbl -> Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
    ( (This)->lpVtbl -> EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex) )
    ( (This)->lpVtbl -> DeleteBackup(This,pszMDBackupLocation,dwMDVersion) )
    ( (This)->lpVtbl -> UnmarshalInterface(This,piadmbwInterface) )
    ( (This)->lpVtbl -> GetServerGuid(This) )
    ( (This)->lpVtbl -> BackupWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
    ( (This)->lpVtbl -> RestoreWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
    ( (This)->lpVtbl -> Export(This,pszPasswd,pszFileName,pszSourcePath,dwMDFlags) )
    ( (This)->lpVtbl -> Import(This,pszPasswd,pszFileName,pszSourcePath,pszDestPath,dwMDFlags) )
    ( (This)->lpVtbl -> RestoreHistory(This,pszMDHistoryLocation,dwMDMajorVersion,dwMDMinorVersion,dwMDFlags) )
    ( (This)->lpVtbl -> EnumHistory(This,pszMDHistoryLocation,pdwMDMajorVersion,pdwMDMinorVersion,pftMDHistoryTime,dwMDEnumIndex) )
EXTERN_C const IID IID_IMSAdminBase3W;
    typedef struct IMSAdminBase3WVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSAdminBase3W * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSAdminBase3W * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSAdminBase3W * This);
        HRESULT ( STDMETHODCALLTYPE *AddKey )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *DeleteChildKeys )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                                 __RPC__out_ecount_full(256) LPWSTR pszMDName,
                       DWORD dwMDEnumObjectIndex);
        HRESULT ( STDMETHODCALLTYPE *CopyKey )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDSourceHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDSourcePath,
                       METADATA_HANDLE hMDDestHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDDestPath,
                       BOOL bMDOverwriteFlag,
                       BOOL bMDCopyFlag);
        HRESULT ( STDMETHODCALLTYPE *RenameKey )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                                       __RPC__in_opt_string LPCWSTR pszMDNewName);
                      HRESULT ( STDMETHODCALLTYPE *SetData )(
            IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                       PMETADATA_RECORD pmdrMDData);
                      HRESULT ( STDMETHODCALLTYPE *GetData )(
            IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                            PMETADATA_RECORD pmdrMDData,
                        DWORD *pdwMDRequiredDataLen);
        HRESULT ( STDMETHODCALLTYPE *DeleteData )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDIdentifier,
                       DWORD dwMDDataType);
                      HRESULT ( STDMETHODCALLTYPE *EnumData )(
            IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                            PMETADATA_RECORD pmdrMDData,
                       DWORD dwMDEnumDataIndex,
                        DWORD *pdwMDRequiredDataLen);
                      HRESULT ( STDMETHODCALLTYPE *GetAllData )(
            IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       LPCWSTR pszMDPath,
                       DWORD dwMDAttributes,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType,
                        DWORD *pdwMDNumDataEntries,
                        DWORD *pdwMDDataSetNumber,
                       DWORD dwMDBufferSize,
                                 unsigned char *pbMDBuffer,
                        DWORD *pdwMDRequiredBufferSize);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllData )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType);
        HRESULT ( STDMETHODCALLTYPE *CopyData )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDSourceHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDSourcePath,
                       METADATA_HANDLE hMDDestHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDDestPath,
                       DWORD dwMDAttributes,
                       DWORD dwMDUserType,
                       DWORD dwMDDataType,
                       BOOL bMDCopyFlag);
        HRESULT ( STDMETHODCALLTYPE *GetDataPaths )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDIdentifier,
                       DWORD dwMDDataType,
                       DWORD dwMDBufferSize,
                                 __RPC__out_ecount_full(dwMDBufferSize) WCHAR *pszBuffer,
                        __RPC__out DWORD *pdwMDRequiredBufferSize);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD dwMDAccessRequested,
                       DWORD dwMDTimeOut,
                        __RPC__out PMETADATA_HANDLE phMDNewHandle);
        HRESULT ( STDMETHODCALLTYPE *CloseKey )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle);
        HRESULT ( STDMETHODCALLTYPE *ChangePermissions )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                       DWORD dwMDTimeOut,
                       DWORD dwMDAccessRequested);
        HRESULT ( STDMETHODCALLTYPE *SaveData )(
            __RPC__in IMSAdminBase3W * This);
        HRESULT ( STDMETHODCALLTYPE *GetHandleInfo )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                        __RPC__out PMETADATA_HANDLE_INFO pmdhiInfo);
        HRESULT ( STDMETHODCALLTYPE *GetSystemChangeNumber )(
            __RPC__in IMSAdminBase3W * This,
                        __RPC__out DWORD *pdwSystemChangeNumber);
        HRESULT ( STDMETHODCALLTYPE *GetDataSetNumber )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                        __RPC__out DWORD *pdwMDDataSetNumber);
        HRESULT ( STDMETHODCALLTYPE *SetLastChangeTime )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       __RPC__in PFILETIME pftMDLastChangeTime,
                       BOOL bLocalTime);
        HRESULT ( STDMETHODCALLTYPE *GetLastChangeTime )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                        __RPC__out PFILETIME pftMDLastChangeTime,
                       BOOL bLocalTime);
                                  HRESULT ( STDMETHODCALLTYPE *KeyExchangePhase1 )(
            IMSAdminBase3W * This);
                                  HRESULT ( STDMETHODCALLTYPE *KeyExchangePhase2 )(
            IMSAdminBase3W * This);
        HRESULT ( STDMETHODCALLTYPE *Backup )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *Restore )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *EnumBackups )(
            __RPC__in IMSAdminBase3W * This,
                                     __RPC__inout_ecount_full(256) LPWSTR pszMDBackupLocation,
                        __RPC__out DWORD *pdwMDVersion,
                        __RPC__out PFILETIME pftMDBackupTime,
                       DWORD dwMDEnumIndex);
        HRESULT ( STDMETHODCALLTYPE *DeleteBackup )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion);
        HRESULT ( STDMETHODCALLTYPE *UnmarshalInterface )(
            __RPC__in IMSAdminBase3W * This,
                        __RPC__deref_out_opt IMSAdminBaseW **piadmbwInterface);
                                  HRESULT ( STDMETHODCALLTYPE *GetServerGuid )(
            IMSAdminBase3W * This);
        HRESULT ( STDMETHODCALLTYPE *BackupWithPasswd )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags,
                                       __RPC__in_opt_string LPCWSTR pszPasswd);
        HRESULT ( STDMETHODCALLTYPE *RestoreWithPasswd )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDBackupLocation,
                       DWORD dwMDVersion,
                       DWORD dwMDFlags,
                                       __RPC__in_opt_string LPCWSTR pszPasswd);
        HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszPasswd,
                                       __RPC__in_opt_string LPCWSTR pszFileName,
                                       __RPC__in_opt_string LPCWSTR pszSourcePath,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszPasswd,
                                       __RPC__in_opt_string LPCWSTR pszFileName,
                                       __RPC__in_opt_string LPCWSTR pszSourcePath,
                                       __RPC__in_opt_string LPCWSTR pszDestPath,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *RestoreHistory )(
            __RPC__in IMSAdminBase3W * This,
                                       __RPC__in_opt_string LPCWSTR pszMDHistoryLocation,
                       DWORD dwMDMajorVersion,
                       DWORD dwMDMinorVersion,
                       DWORD dwMDFlags);
        HRESULT ( STDMETHODCALLTYPE *EnumHistory )(
            __RPC__in IMSAdminBase3W * This,
                                     __RPC__inout_ecount_full(256) LPWSTR pszMDHistoryLocation,
                        __RPC__out DWORD *pdwMDMajorVersion,
                        __RPC__out DWORD *pdwMDMinorVersion,
                        __RPC__out PFILETIME pftMDHistoryTime,
                       DWORD dwMDEnumIndex);
        HRESULT ( STDMETHODCALLTYPE *GetChildPaths )(
            __RPC__in IMSAdminBase3W * This,
                       METADATA_HANDLE hMDHandle,
                                       __RPC__in_opt_string LPCWSTR pszMDPath,
                       DWORD cchMDBufferSize,
                                             __RPC__inout_ecount_full_opt(cchMDBufferSize) WCHAR *pszBuffer,
                                    __RPC__inout_opt DWORD *pcchMDRequiredBufferSize);
        END_INTERFACE
    } IMSAdminBase3WVtbl;
    interface IMSAdminBase3W
    {
        CONST_VTBL struct IMSAdminBase3WVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddKey(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> DeleteKey(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> DeleteChildKeys(This,hMDHandle,pszMDPath) )
    ( (This)->lpVtbl -> EnumKeys(This,hMDHandle,pszMDPath,pszMDName,dwMDEnumObjectIndex) )
    ( (This)->lpVtbl -> CopyKey(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,bMDOverwriteFlag,bMDCopyFlag) )
    ( (This)->lpVtbl -> RenameKey(This,hMDHandle,pszMDPath,pszMDNewName) )
    ( (This)->lpVtbl -> SetData(This,hMDHandle,pszMDPath,pmdrMDData) )
    ( (This)->lpVtbl -> GetData(This,hMDHandle,pszMDPath,pmdrMDData,pdwMDRequiredDataLen) )
    ( (This)->lpVtbl -> DeleteData(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType) )
    ( (This)->lpVtbl -> EnumData(This,hMDHandle,pszMDPath,pmdrMDData,dwMDEnumDataIndex,pdwMDRequiredDataLen) )
    ( (This)->lpVtbl -> GetAllData(This,hMDHandle,pszMDPath,dwMDAttributes,dwMDUserType,dwMDDataType,pdwMDNumDataEntries,pdwMDDataSetNumber,dwMDBufferSize,pbMDBuffer,pdwMDRequiredBufferSize) )
    ( (This)->lpVtbl -> DeleteAllData(This,hMDHandle,pszMDPath,dwMDUserType,dwMDDataType) )
    ( (This)->lpVtbl -> CopyData(This,hMDSourceHandle,pszMDSourcePath,hMDDestHandle,pszMDDestPath,dwMDAttributes,dwMDUserType,dwMDDataType,bMDCopyFlag) )
    ( (This)->lpVtbl -> GetDataPaths(This,hMDHandle,pszMDPath,dwMDIdentifier,dwMDDataType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
    ( (This)->lpVtbl -> OpenKey(This,hMDHandle,pszMDPath,dwMDAccessRequested,dwMDTimeOut,phMDNewHandle) )
    ( (This)->lpVtbl -> CloseKey(This,hMDHandle) )
    ( (This)->lpVtbl -> ChangePermissions(This,hMDHandle,dwMDTimeOut,dwMDAccessRequested) )
    ( (This)->lpVtbl -> SaveData(This) )
    ( (This)->lpVtbl -> GetHandleInfo(This,hMDHandle,pmdhiInfo) )
    ( (This)->lpVtbl -> GetSystemChangeNumber(This,pdwSystemChangeNumber) )
    ( (This)->lpVtbl -> GetDataSetNumber(This,hMDHandle,pszMDPath,pdwMDDataSetNumber) )
    ( (This)->lpVtbl -> SetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
    ( (This)->lpVtbl -> GetLastChangeTime(This,hMDHandle,pszMDPath,pftMDLastChangeTime,bLocalTime) )
    ( (This)->lpVtbl -> KeyExchangePhase1(This) )
    ( (This)->lpVtbl -> KeyExchangePhase2(This) )
    ( (This)->lpVtbl -> Backup(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
    ( (This)->lpVtbl -> Restore(This,pszMDBackupLocation,dwMDVersion,dwMDFlags) )
    ( (This)->lpVtbl -> EnumBackups(This,pszMDBackupLocation,pdwMDVersion,pftMDBackupTime,dwMDEnumIndex) )
    ( (This)->lpVtbl -> DeleteBackup(This,pszMDBackupLocation,dwMDVersion) )
    ( (This)->lpVtbl -> UnmarshalInterface(This,piadmbwInterface) )
    ( (This)->lpVtbl -> GetServerGuid(This) )
    ( (This)->lpVtbl -> BackupWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
    ( (This)->lpVtbl -> RestoreWithPasswd(This,pszMDBackupLocation,dwMDVersion,dwMDFlags,pszPasswd) )
    ( (This)->lpVtbl -> Export(This,pszPasswd,pszFileName,pszSourcePath,dwMDFlags) )
    ( (This)->lpVtbl -> Import(This,pszPasswd,pszFileName,pszSourcePath,pszDestPath,dwMDFlags) )
    ( (This)->lpVtbl -> RestoreHistory(This,pszMDHistoryLocation,dwMDMajorVersion,dwMDMinorVersion,dwMDFlags) )
    ( (This)->lpVtbl -> EnumHistory(This,pszMDHistoryLocation,pdwMDMajorVersion,pdwMDMinorVersion,pftMDHistoryTime,dwMDEnumIndex) )
    ( (This)->lpVtbl -> GetChildPaths(This,hMDHandle,pszMDPath,cchMDBufferSize,pszBuffer,pcchMDRequiredBufferSize) )
EXTERN_C const IID IID_IMSImpExpHelpW;
    typedef struct IMSImpExpHelpWVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSImpExpHelpW * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSImpExpHelpW * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSImpExpHelpW * This);
        HRESULT ( STDMETHODCALLTYPE *EnumeratePathsInFile )(
            __RPC__in IMSImpExpHelpW * This,
                                       __RPC__in_opt_string LPCWSTR pszFileName,
                                       __RPC__in_opt_string LPCWSTR pszKeyType,
                       DWORD dwMDBufferSize,
                                             __RPC__inout_ecount_full_opt(dwMDBufferSize) WCHAR *pszBuffer,
                        __RPC__out DWORD *pdwMDRequiredBufferSize);
        END_INTERFACE
    } IMSImpExpHelpWVtbl;
    interface IMSImpExpHelpW
    {
        CONST_VTBL struct IMSImpExpHelpWVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumeratePathsInFile(This,pszFileName,pszKeyType,dwMDBufferSize,pszBuffer,pdwMDRequiredBufferSize) )
EXTERN_C const IID IID_IMSAdminBaseSinkW;
    typedef struct IMSAdminBaseSinkWVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSAdminBaseSinkW * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSAdminBaseSinkW * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSAdminBaseSinkW * This);
        HRESULT ( STDMETHODCALLTYPE *SinkNotify )(
            __RPC__in IMSAdminBaseSinkW * This,
                       DWORD dwMDNumElements,
                                __RPC__in_ecount_full(dwMDNumElements) MD_CHANGE_OBJECT_W pcoChangeList[ ]);
        HRESULT ( STDMETHODCALLTYPE *ShutdownNotify )(
            __RPC__in IMSAdminBaseSinkW * This);
        END_INTERFACE
    } IMSAdminBaseSinkWVtbl;
    interface IMSAdminBaseSinkW
    {
        CONST_VTBL struct IMSAdminBaseSinkWVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SinkNotify(This,dwMDNumElements,pcoChangeList) )
    ( (This)->lpVtbl -> ShutdownNotify(This) )
EXTERN_C const IID IID_AsyncIMSAdminBaseSinkW;
    typedef struct AsyncIMSAdminBaseSinkWVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in AsyncIMSAdminBaseSinkW * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in AsyncIMSAdminBaseSinkW * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in AsyncIMSAdminBaseSinkW * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_SinkNotify )(
            __RPC__in AsyncIMSAdminBaseSinkW * This,
                       DWORD dwMDNumElements,
                                __RPC__in_xcount_full(dwMDNumElements) MD_CHANGE_OBJECT_W pcoChangeList[ ]);
        HRESULT ( STDMETHODCALLTYPE *Finish_SinkNotify )(
            __RPC__in AsyncIMSAdminBaseSinkW * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_ShutdownNotify )(
            __RPC__in AsyncIMSAdminBaseSinkW * This);
        HRESULT ( STDMETHODCALLTYPE *Finish_ShutdownNotify )(
            __RPC__in AsyncIMSAdminBaseSinkW * This);
        END_INTERFACE
    } AsyncIMSAdminBaseSinkWVtbl;
    interface AsyncIMSAdminBaseSinkW
    {
        CONST_VTBL struct AsyncIMSAdminBaseSinkWVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_SinkNotify(This,dwMDNumElements,pcoChangeList) )
    ( (This)->lpVtbl -> Finish_SinkNotify(This) )
    ( (This)->lpVtbl -> Begin_ShutdownNotify(This) )
    ( (This)->lpVtbl -> Finish_ShutdownNotify(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iadmw_0000_0005_v0_0_s_ifspec;
              HRESULT STDMETHODCALLTYPE IMSAdminBaseW_SetData_Proxy(
    IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               LPCWSTR pszMDPath,
               PMETADATA_RECORD pmdrMDData);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_SetData_Stub(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
               __RPC__in PMETADATA_RECORD pmdrMDData);
              HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetData_Proxy(
    IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               LPCWSTR pszMDPath,
                    PMETADATA_RECORD pmdrMDData,
                DWORD *pdwMDRequiredDataLen);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetData_Stub(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
                    __RPC__inout PMETADATA_RECORD pmdrMDData,
                __RPC__out DWORD *pdwMDRequiredDataLen,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppDataBlob);
              HRESULT STDMETHODCALLTYPE IMSAdminBaseW_EnumData_Proxy(
    IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               LPCWSTR pszMDPath,
                    PMETADATA_RECORD pmdrMDData,
               DWORD dwMDEnumDataIndex,
                DWORD *pdwMDRequiredDataLen);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_EnumData_Stub(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
                    __RPC__inout PMETADATA_RECORD pmdrMDData,
               DWORD dwMDEnumDataIndex,
                __RPC__out DWORD *pdwMDRequiredDataLen,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppDataBlob);
              HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetAllData_Proxy(
    IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               LPCWSTR pszMDPath,
               DWORD dwMDAttributes,
               DWORD dwMDUserType,
               DWORD dwMDDataType,
                DWORD *pdwMDNumDataEntries,
                DWORD *pdwMDDataSetNumber,
               DWORD dwMDBufferSize,
                         unsigned char *pbMDBuffer,
                DWORD *pdwMDRequiredBufferSize);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetAllData_Stub(
    __RPC__in IMSAdminBaseW * This,
               METADATA_HANDLE hMDHandle,
                               __RPC__in_opt_string LPCWSTR pszMDPath,
               DWORD dwMDAttributes,
               DWORD dwMDUserType,
               DWORD dwMDDataType,
                __RPC__out DWORD *pdwMDNumDataEntries,
                __RPC__out DWORD *pdwMDDataSetNumber,
               DWORD dwMDBufferSize,
                __RPC__out DWORD *pdwMDRequiredBufferSize,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppDataBlob);
                          HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase1_Proxy(
    IMSAdminBaseW * This);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase1_Stub(
    __RPC__in IMSAdminBaseW * This,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientKeyExchangeKeyBlob,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientSignatureKeyBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerKeyExchangeKeyBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerSignatureKeyBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerSessionKeyBlob);
                          HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase2_Proxy(
    IMSAdminBaseW * This);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_KeyExchangePhase2_Stub(
    __RPC__in IMSAdminBaseW * This,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientSessionKeyBlob,
                       __RPC__in_opt struct _IIS_CRYPTO_BLOB *pClientHashBlob,
                __RPC__deref_out_opt struct _IIS_CRYPTO_BLOB **ppServerHashBlob);
                          HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetServerGuid_Proxy(
    IMSAdminBaseW * This);
                HRESULT STDMETHODCALLTYPE IMSAdminBaseW_GetServerGuid_Stub(
    __RPC__in IMSAdminBaseW * This,
                __RPC__out GUID *pServerGuid);
}
