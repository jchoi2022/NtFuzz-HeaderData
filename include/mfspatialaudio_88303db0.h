#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFSpatialAudioObjectBuffer IMFSpatialAudioObjectBuffer;
typedef interface IMFSpatialAudioSample IMFSpatialAudioSample;
#include "mfobjects.h"
#include "SpatialAudioClient.h"
#include "SpatialAudioMetadata.h"
extern "C"{
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mfspatialaudio_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfspatialaudio_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSpatialAudioObjectBuffer;
    typedef struct IMFSpatialAudioObjectBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSpatialAudioObjectBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSpatialAudioObjectBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSpatialAudioObjectBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *Lock )(
            IMFSpatialAudioObjectBuffer * This,
            _Outptr_result_bytebuffer_to_(*pcbMaxLength, *pcbCurrentLength) BYTE **ppbBuffer,
            _Out_opt_ DWORD *pcbMaxLength,
            _Out_opt_ DWORD *pcbCurrentLength);
        HRESULT ( STDMETHODCALLTYPE *Unlock )(
            IMFSpatialAudioObjectBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLength )(
            IMFSpatialAudioObjectBuffer * This,
            _Out_ DWORD *pcbCurrentLength);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentLength )(
            IMFSpatialAudioObjectBuffer * This,
                       DWORD cbCurrentLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            IMFSpatialAudioObjectBuffer * This,
            _Out_ DWORD *pcbMaxLength);
        HRESULT ( STDMETHODCALLTYPE *SetID )(
            IMFSpatialAudioObjectBuffer * This,
            _In_ UINT32 u32ID);
        HRESULT ( STDMETHODCALLTYPE *GetID )(
            IMFSpatialAudioObjectBuffer * This,
            _Out_ UINT32 *pu32ID);
        HRESULT ( STDMETHODCALLTYPE *SetType )(
            IMFSpatialAudioObjectBuffer * This,
            _In_ AudioObjectType type);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IMFSpatialAudioObjectBuffer * This,
            _Out_ AudioObjectType *pType);
        HRESULT ( STDMETHODCALLTYPE *GetMetadataItems )(
            IMFSpatialAudioObjectBuffer * This,
            _Outptr_result_nullonfailure_ ISpatialAudioMetadataItems **ppMetadataItems);
        END_INTERFACE
    } IMFSpatialAudioObjectBufferVtbl;
    interface IMFSpatialAudioObjectBuffer
    {
        CONST_VTBL struct IMFSpatialAudioObjectBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Lock(This,ppbBuffer,pcbMaxLength,pcbCurrentLength) )
    ( (This)->lpVtbl -> Unlock(This) )
    ( (This)->lpVtbl -> GetCurrentLength(This,pcbCurrentLength) )
    ( (This)->lpVtbl -> SetCurrentLength(This,cbCurrentLength) )
    ( (This)->lpVtbl -> GetMaxLength(This,pcbMaxLength) )
    ( (This)->lpVtbl -> SetID(This,u32ID) )
    ( (This)->lpVtbl -> GetID(This,pu32ID) )
    ( (This)->lpVtbl -> SetType(This,type) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> GetMetadataItems(This,ppMetadataItems) )
EXTERN_C const IID IID_IMFSpatialAudioSample;
    typedef struct IMFSpatialAudioSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSpatialAudioSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSpatialAudioSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSpatialAudioSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFSpatialAudioSample * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFSpatialAudioSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFSpatialAudioSample * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFSpatialAudioSample * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFSpatialAudioSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFSpatialAudioSample * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFSpatialAudioSample * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFSpatialAudioSample * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetSampleFlags )(
            IMFSpatialAudioSample * This,
            _Out_ DWORD *pdwSampleFlags);
        HRESULT ( STDMETHODCALLTYPE *SetSampleFlags )(
            IMFSpatialAudioSample * This,
                       DWORD dwSampleFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSampleTime )(
            IMFSpatialAudioSample * This,
            _Out_ LONGLONG *phnsSampleTime);
        HRESULT ( STDMETHODCALLTYPE *SetSampleTime )(
            IMFSpatialAudioSample * This,
                       LONGLONG hnsSampleTime);
        HRESULT ( STDMETHODCALLTYPE *GetSampleDuration )(
            IMFSpatialAudioSample * This,
            _Out_ LONGLONG *phnsSampleDuration);
        HRESULT ( STDMETHODCALLTYPE *SetSampleDuration )(
            IMFSpatialAudioSample * This,
                       LONGLONG hnsSampleDuration);
        HRESULT ( STDMETHODCALLTYPE *GetBufferCount )(
            IMFSpatialAudioSample * This,
            _Out_ DWORD *pdwBufferCount);
        HRESULT ( STDMETHODCALLTYPE *GetBufferByIndex )(
            IMFSpatialAudioSample * This,
                       DWORD dwIndex,
            _Out_ IMFMediaBuffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *ConvertToContiguousBuffer )(
            IMFSpatialAudioSample * This,
            _Out_ IMFMediaBuffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *AddBuffer )(
            IMFSpatialAudioSample * This,
                       IMFMediaBuffer *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *RemoveBufferByIndex )(
            IMFSpatialAudioSample * This,
                       DWORD dwIndex);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllBuffers )(
            IMFSpatialAudioSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetTotalLength )(
            IMFSpatialAudioSample * This,
            _Out_ DWORD *pcbTotalLength);
        HRESULT ( STDMETHODCALLTYPE *CopyToBuffer )(
            IMFSpatialAudioSample * This,
                       IMFMediaBuffer *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetObjectCount )(
            IMFSpatialAudioSample * This,
            _Out_ DWORD *pdwObjectCount);
        HRESULT ( STDMETHODCALLTYPE *AddSpatialAudioObject )(
            IMFSpatialAudioSample * This,
            _In_ IMFSpatialAudioObjectBuffer *pAudioObjBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetSpatialAudioObjectByIndex )(
            IMFSpatialAudioSample * This,
            _In_ DWORD dwIndex,
            _COM_Outptr_ IMFSpatialAudioObjectBuffer **ppAudioObjBuffer);
        END_INTERFACE
    } IMFSpatialAudioSampleVtbl;
    interface IMFSpatialAudioSample
    {
        CONST_VTBL struct IMFSpatialAudioSampleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItem(This,guidKey,pValue) )
    ( (This)->lpVtbl -> GetItemType(This,guidKey,pType) )
    ( (This)->lpVtbl -> CompareItem(This,guidKey,Value,pbResult) )
    ( (This)->lpVtbl -> Compare(This,pTheirs,MatchType,pbResult) )
    ( (This)->lpVtbl -> GetUINT32(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetUINT64(This,guidKey,punValue) )
    ( (This)->lpVtbl -> GetDouble(This,guidKey,pfValue) )
    ( (This)->lpVtbl -> GetGUID(This,guidKey,pguidValue) )
    ( (This)->lpVtbl -> GetStringLength(This,guidKey,pcchLength) )
    ( (This)->lpVtbl -> GetString(This,guidKey,pwszValue,cchBufSize,pcchLength) )
    ( (This)->lpVtbl -> GetAllocatedString(This,guidKey,ppwszValue,pcchLength) )
    ( (This)->lpVtbl -> GetBlobSize(This,guidKey,pcbBlobSize) )
    ( (This)->lpVtbl -> GetBlob(This,guidKey,pBuf,cbBufSize,pcbBlobSize) )
    ( (This)->lpVtbl -> GetAllocatedBlob(This,guidKey,ppBuf,pcbSize) )
    ( (This)->lpVtbl -> GetUnknown(This,guidKey,riid,ppv) )
    ( (This)->lpVtbl -> SetItem(This,guidKey,Value) )
    ( (This)->lpVtbl -> DeleteItem(This,guidKey) )
    ( (This)->lpVtbl -> DeleteAllItems(This) )
    ( (This)->lpVtbl -> SetUINT32(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetUINT64(This,guidKey,unValue) )
    ( (This)->lpVtbl -> SetDouble(This,guidKey,fValue) )
    ( (This)->lpVtbl -> SetGUID(This,guidKey,guidValue) )
    ( (This)->lpVtbl -> SetString(This,guidKey,wszValue) )
    ( (This)->lpVtbl -> SetBlob(This,guidKey,pBuf,cbBufSize) )
    ( (This)->lpVtbl -> SetUnknown(This,guidKey,pUnknown) )
    ( (This)->lpVtbl -> LockStore(This) )
    ( (This)->lpVtbl -> UnlockStore(This) )
    ( (This)->lpVtbl -> GetCount(This,pcItems) )
    ( (This)->lpVtbl -> GetItemByIndex(This,unIndex,pguidKey,pValue) )
    ( (This)->lpVtbl -> CopyAllItems(This,pDest) )
    ( (This)->lpVtbl -> GetSampleFlags(This,pdwSampleFlags) )
    ( (This)->lpVtbl -> SetSampleFlags(This,dwSampleFlags) )
    ( (This)->lpVtbl -> GetSampleTime(This,phnsSampleTime) )
    ( (This)->lpVtbl -> SetSampleTime(This,hnsSampleTime) )
    ( (This)->lpVtbl -> GetSampleDuration(This,phnsSampleDuration) )
    ( (This)->lpVtbl -> SetSampleDuration(This,hnsSampleDuration) )
    ( (This)->lpVtbl -> GetBufferCount(This,pdwBufferCount) )
    ( (This)->lpVtbl -> GetBufferByIndex(This,dwIndex,ppBuffer) )
    ( (This)->lpVtbl -> ConvertToContiguousBuffer(This,ppBuffer) )
    ( (This)->lpVtbl -> AddBuffer(This,pBuffer) )
    ( (This)->lpVtbl -> RemoveBufferByIndex(This,dwIndex) )
    ( (This)->lpVtbl -> RemoveAllBuffers(This) )
    ( (This)->lpVtbl -> GetTotalLength(This,pcbTotalLength) )
    ( (This)->lpVtbl -> CopyToBuffer(This,pBuffer) )
    ( (This)->lpVtbl -> GetObjectCount(This,pdwObjectCount) )
    ( (This)->lpVtbl -> AddSpatialAudioObject(This,pAudioObjBuffer) )
    ( (This)->lpVtbl -> GetSpatialAudioObjectByIndex(This,dwIndex,ppAudioObjBuffer) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_mfspatialaudio_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfspatialaudio_0000_0002_v0_0_s_ifspec;
}
