#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFAttributes IMFAttributes;
typedef interface IMFMediaBuffer IMFMediaBuffer;
typedef interface IMFSample IMFSample;
typedef interface IMF2DBuffer IMF2DBuffer;
typedef interface IMF2DBuffer2 IMF2DBuffer2;
typedef interface IMFDXGIBuffer IMFDXGIBuffer;
typedef interface IMFMediaType IMFMediaType;
typedef interface IMFAudioMediaType IMFAudioMediaType;
typedef interface IMFVideoMediaType IMFVideoMediaType;
typedef interface IMFAsyncResult IMFAsyncResult;
typedef interface IMFAsyncCallback IMFAsyncCallback;
typedef interface IMFAsyncCallbackLogging IMFAsyncCallbackLogging;
typedef interface IMFMediaEvent IMFMediaEvent;
typedef interface IMFMediaEventGenerator IMFMediaEventGenerator;
typedef interface IMFRemoteAsyncCallback IMFRemoteAsyncCallback;
typedef interface IMFByteStream IMFByteStream;
typedef interface IMFByteStreamProxyClassFactory IMFByteStreamProxyClassFactory;
typedef interface IMFSampleOutputStream IMFSampleOutputStream;
typedef interface IMFCollection IMFCollection;
typedef interface IMFMediaEventQueue IMFMediaEventQueue;
typedef interface IMFActivate IMFActivate;
typedef interface IMFPluginControl IMFPluginControl;
typedef interface IMFPluginControl2 IMFPluginControl2;
typedef interface IMFDXGIDeviceManager IMFDXGIDeviceManager;
typedef interface IMFMuxStreamAttributesManager IMFMuxStreamAttributesManager;
typedef interface IMFMuxStreamMediaTypeManager IMFMuxStreamMediaTypeManager;
typedef interface IMFMuxStreamSampleManager IMFMuxStreamSampleManager;
#include "unknwn.h"
#include "propsys.h"
#include "mediaobj.h"
#include "mmreg.h"
extern "C"{
#include <winapifamily.h>
typedef ULONGLONG QWORD;
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum _MF_ATTRIBUTE_TYPE
    {
        MF_ATTRIBUTE_UINT32 = VT_UI4,
        MF_ATTRIBUTE_UINT64 = VT_UI8,
        MF_ATTRIBUTE_DOUBLE = VT_R8,
        MF_ATTRIBUTE_GUID = VT_CLSID,
        MF_ATTRIBUTE_STRING = VT_LPWSTR,
        MF_ATTRIBUTE_BLOB = ( VT_VECTOR | VT_UI1 ) ,
        MF_ATTRIBUTE_IUNKNOWN = VT_UNKNOWN
    } MF_ATTRIBUTE_TYPE;
typedef
enum _MF_ATTRIBUTES_MATCH_TYPE
    {
        MF_ATTRIBUTES_MATCH_OUR_ITEMS = 0,
        MF_ATTRIBUTES_MATCH_THEIR_ITEMS = 1,
        MF_ATTRIBUTES_MATCH_ALL_ITEMS = 2,
        MF_ATTRIBUTES_MATCH_INTERSECTION = 3,
        MF_ATTRIBUTES_MATCH_SMALLER = 4
    } MF_ATTRIBUTES_MATCH_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFAttributes;
    typedef struct IMFAttributesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFAttributes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFAttributes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFAttributes * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFAttributes * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFAttributes * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFAttributes * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFAttributes * This,
                       __RPC__in_opt IMFAttributes *pDest);
        END_INTERFACE
    } IMFAttributesVtbl;
    interface IMFAttributes
    {
        CONST_VTBL struct IMFAttributesVtbl *lpVtbl;
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
enum MF_ATTRIBUTE_SERIALIZE_OPTIONS
    {
        MF_ATTRIBUTE_SERIALIZE_UNKNOWN_BYREF = 0x1
    } ;
STDAPI MFSerializeAttributesToStream(
  IMFAttributes * pAttr,
  DWORD dwOptions,
  IStream * pStm);
STDAPI MFDeserializeAttributesFromStream(
  IMFAttributes * pAttr,
  DWORD dwOptions,
  IStream * pStm);
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaBuffer;
    typedef struct IMFMediaBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *Lock )(
            IMFMediaBuffer * This,
            _Outptr_result_bytebuffer_to_(*pcbMaxLength, *pcbCurrentLength) BYTE **ppbBuffer,
            _Out_opt_ DWORD *pcbMaxLength,
            _Out_opt_ DWORD *pcbCurrentLength);
        HRESULT ( STDMETHODCALLTYPE *Unlock )(
            IMFMediaBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLength )(
            IMFMediaBuffer * This,
            _Out_ DWORD *pcbCurrentLength);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentLength )(
            IMFMediaBuffer * This,
                       DWORD cbCurrentLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            IMFMediaBuffer * This,
            _Out_ DWORD *pcbMaxLength);
        END_INTERFACE
    } IMFMediaBufferVtbl;
    interface IMFMediaBuffer
    {
        CONST_VTBL struct IMFMediaBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Lock(This,ppbBuffer,pcbMaxLength,pcbCurrentLength) )
    ( (This)->lpVtbl -> Unlock(This) )
    ( (This)->lpVtbl -> GetCurrentLength(This,pcbCurrentLength) )
    ( (This)->lpVtbl -> SetCurrentLength(This,cbCurrentLength) )
    ( (This)->lpVtbl -> GetMaxLength(This,pcbMaxLength) )
EXTERN_C const IID IID_IMFSample;
    typedef struct IMFSampleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFSample * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFSample * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFSample * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFSample * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFSample * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFSample * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFSample * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFSample * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFSample * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFSample * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFSample * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFSample * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFSample * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFSample * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFSample * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFSample * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFSample * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFSample * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFSample * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFSample * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFSample * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFSample * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFSample * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFSample * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFSample * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFSample * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFSample * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFSample * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFSample * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFSample * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFSample * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetSampleFlags )(
            IMFSample * This,
            _Out_ DWORD *pdwSampleFlags);
        HRESULT ( STDMETHODCALLTYPE *SetSampleFlags )(
            IMFSample * This,
                       DWORD dwSampleFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSampleTime )(
            IMFSample * This,
            _Out_ LONGLONG *phnsSampleTime);
        HRESULT ( STDMETHODCALLTYPE *SetSampleTime )(
            IMFSample * This,
                       LONGLONG hnsSampleTime);
        HRESULT ( STDMETHODCALLTYPE *GetSampleDuration )(
            IMFSample * This,
            _Out_ LONGLONG *phnsSampleDuration);
        HRESULT ( STDMETHODCALLTYPE *SetSampleDuration )(
            IMFSample * This,
                       LONGLONG hnsSampleDuration);
        HRESULT ( STDMETHODCALLTYPE *GetBufferCount )(
            IMFSample * This,
            _Out_ DWORD *pdwBufferCount);
        HRESULT ( STDMETHODCALLTYPE *GetBufferByIndex )(
            IMFSample * This,
                       DWORD dwIndex,
            _Out_ IMFMediaBuffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *ConvertToContiguousBuffer )(
            IMFSample * This,
            _Out_ IMFMediaBuffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *AddBuffer )(
            IMFSample * This,
                       IMFMediaBuffer *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *RemoveBufferByIndex )(
            IMFSample * This,
                       DWORD dwIndex);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllBuffers )(
            IMFSample * This);
        HRESULT ( STDMETHODCALLTYPE *GetTotalLength )(
            IMFSample * This,
            _Out_ DWORD *pcbTotalLength);
        HRESULT ( STDMETHODCALLTYPE *CopyToBuffer )(
            IMFSample * This,
                       IMFMediaBuffer *pBuffer);
        END_INTERFACE
    } IMFSampleVtbl;
    interface IMFSample
    {
        CONST_VTBL struct IMFSampleVtbl *lpVtbl;
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
EXTERN_C const IID IID_IMF2DBuffer;
    typedef struct IMF2DBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMF2DBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMF2DBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMF2DBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *Lock2D )(
            IMF2DBuffer * This,
            _Outptr_result_bytebuffer_(_Inexpressible_(ComputePlaneSize(*plPitch))) BYTE **ppbScanline0,
            _Out_ LONG *plPitch);
        HRESULT ( STDMETHODCALLTYPE *Unlock2D )(
            IMF2DBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetScanline0AndPitch )(
            IMF2DBuffer * This,
            _Out_ BYTE **pbScanline0,
            _Out_ LONG *plPitch);
        HRESULT ( STDMETHODCALLTYPE *IsContiguousFormat )(
            IMF2DBuffer * This,
            _Out_ BOOL *pfIsContiguous);
        HRESULT ( STDMETHODCALLTYPE *GetContiguousLength )(
            IMF2DBuffer * This,
            _Out_ DWORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *ContiguousCopyTo )(
            IMF2DBuffer * This,
            _Out_writes_bytes_(cbDestBuffer) BYTE *pbDestBuffer,
                       DWORD cbDestBuffer);
        HRESULT ( STDMETHODCALLTYPE *ContiguousCopyFrom )(
            IMF2DBuffer * This,
            _In_reads_bytes_(cbSrcBuffer) const BYTE *pbSrcBuffer,
                       DWORD cbSrcBuffer);
        END_INTERFACE
    } IMF2DBufferVtbl;
    interface IMF2DBuffer
    {
        CONST_VTBL struct IMF2DBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Lock2D(This,ppbScanline0,plPitch) )
    ( (This)->lpVtbl -> Unlock2D(This) )
    ( (This)->lpVtbl -> GetScanline0AndPitch(This,pbScanline0,plPitch) )
    ( (This)->lpVtbl -> IsContiguousFormat(This,pfIsContiguous) )
    ( (This)->lpVtbl -> GetContiguousLength(This,pcbLength) )
    ( (This)->lpVtbl -> ContiguousCopyTo(This,pbDestBuffer,cbDestBuffer) )
    ( (This)->lpVtbl -> ContiguousCopyFrom(This,pbSrcBuffer,cbSrcBuffer) )
typedef
enum _MF2DBuffer_LockFlags
    {
        MF2DBuffer_LockFlags_LockTypeMask = ( ( 0x1 | 0x2 ) | 0x3 ) ,
        MF2DBuffer_LockFlags_Read = 0x1,
        MF2DBuffer_LockFlags_Write = 0x2,
        MF2DBuffer_LockFlags_ReadWrite = 0x3,
        MF2DBuffer_LockFlags_ForceDWORD = 0x7fffffff
    } MF2DBuffer_LockFlags;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IMF2DBuffer2;
    typedef struct IMF2DBuffer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMF2DBuffer2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMF2DBuffer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMF2DBuffer2 * This);
        HRESULT ( STDMETHODCALLTYPE *Lock2D )(
            IMF2DBuffer2 * This,
            _Outptr_result_bytebuffer_(_Inexpressible_(ComputePlaneSize(*plPitch))) BYTE **ppbScanline0,
            _Out_ LONG *plPitch);
        HRESULT ( STDMETHODCALLTYPE *Unlock2D )(
            IMF2DBuffer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetScanline0AndPitch )(
            IMF2DBuffer2 * This,
            _Out_ BYTE **pbScanline0,
            _Out_ LONG *plPitch);
        HRESULT ( STDMETHODCALLTYPE *IsContiguousFormat )(
            IMF2DBuffer2 * This,
            _Out_ BOOL *pfIsContiguous);
        HRESULT ( STDMETHODCALLTYPE *GetContiguousLength )(
            IMF2DBuffer2 * This,
            _Out_ DWORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *ContiguousCopyTo )(
            IMF2DBuffer2 * This,
            _Out_writes_bytes_(cbDestBuffer) BYTE *pbDestBuffer,
                       DWORD cbDestBuffer);
        HRESULT ( STDMETHODCALLTYPE *ContiguousCopyFrom )(
            IMF2DBuffer2 * This,
            _In_reads_bytes_(cbSrcBuffer) const BYTE *pbSrcBuffer,
                       DWORD cbSrcBuffer);
        HRESULT ( STDMETHODCALLTYPE *Lock2DSize )(
            IMF2DBuffer2 * This,
            _In_ MF2DBuffer_LockFlags lockFlags,
            _Outptr_result_bytebuffer_(_Inexpressible_(ComputePlaneSize(*plPitch))) BYTE **ppbScanline0,
            _Out_ LONG *plPitch,
            _Outptr_result_bytebuffer_(*pcbBufferLength) BYTE **ppbBufferStart,
            _Out_ DWORD *pcbBufferLength);
        HRESULT ( STDMETHODCALLTYPE *Copy2DTo )(
            IMF2DBuffer2 * This,
            _In_ IMF2DBuffer2 *pDestBuffer);
        END_INTERFACE
    } IMF2DBuffer2Vtbl;
    interface IMF2DBuffer2
    {
        CONST_VTBL struct IMF2DBuffer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Lock2D(This,ppbScanline0,plPitch) )
    ( (This)->lpVtbl -> Unlock2D(This) )
    ( (This)->lpVtbl -> GetScanline0AndPitch(This,pbScanline0,plPitch) )
    ( (This)->lpVtbl -> IsContiguousFormat(This,pfIsContiguous) )
    ( (This)->lpVtbl -> GetContiguousLength(This,pcbLength) )
    ( (This)->lpVtbl -> ContiguousCopyTo(This,pbDestBuffer,cbDestBuffer) )
    ( (This)->lpVtbl -> ContiguousCopyFrom(This,pbSrcBuffer,cbSrcBuffer) )
    ( (This)->lpVtbl -> Lock2DSize(This,lockFlags,ppbScanline0,plPitch,ppbBufferStart,pcbBufferLength) )
    ( (This)->lpVtbl -> Copy2DTo(This,pDestBuffer) )
EXTERN_C const IID IID_IMFDXGIBuffer;
    typedef struct IMFDXGIBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFDXGIBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFDXGIBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFDXGIBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetResource )(
            IMFDXGIBuffer * This,
            _In_ REFIID riid,
            _Outptr_ LPVOID *ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetSubresourceIndex )(
            IMFDXGIBuffer * This,
            _Out_ UINT *puSubresource);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFDXGIBuffer * This,
            _In_ REFIID guid,
            _In_ REFIID riid,
            _Outptr_ LPVOID *ppvObject);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFDXGIBuffer * This,
            _In_ REFIID guid,
            _In_opt_ IUnknown *pUnkData);
        END_INTERFACE
    } IMFDXGIBufferVtbl;
    interface IMFDXGIBuffer
    {
        CONST_VTBL struct IMFDXGIBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetResource(This,riid,ppvObject) )
    ( (This)->lpVtbl -> GetSubresourceIndex(This,puSubresource) )
    ( (This)->lpVtbl -> GetUnknown(This,guid,riid,ppvObject) )
    ( (This)->lpVtbl -> SetUnknown(This,guid,pUnkData) )
EXTERN_C const IID IID_IMFMediaType;
    typedef struct IMFMediaTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFMediaType * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFMediaType * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFMediaType * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFMediaType * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFMediaType * This,
                       __RPC__in_opt IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetMajorType )(
            __RPC__in IMFMediaType * This,
                        __RPC__out GUID *pguidMajorType);
        HRESULT ( STDMETHODCALLTYPE *IsCompressedFormat )(
            __RPC__in IMFMediaType * This,
                        __RPC__out BOOL *pfCompressed);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in IMFMediaType * This,
                       __RPC__in_opt IMFMediaType *pIMediaType,
                        __RPC__out DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *GetRepresentation )(
            IMFMediaType * This,
                       GUID guidRepresentation,
            _Out_ LPVOID *ppvRepresentation);
                      HRESULT ( STDMETHODCALLTYPE *FreeRepresentation )(
            IMFMediaType * This,
                       GUID guidRepresentation,
                       LPVOID pvRepresentation);
        END_INTERFACE
    } IMFMediaTypeVtbl;
    interface IMFMediaType
    {
        CONST_VTBL struct IMFMediaTypeVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetMajorType(This,pguidMajorType) )
    ( (This)->lpVtbl -> IsCompressedFormat(This,pfCompressed) )
    ( (This)->lpVtbl -> IsEqual(This,pIMediaType,pdwFlags) )
    ( (This)->lpVtbl -> GetRepresentation(This,guidRepresentation,ppvRepresentation) )
    ( (This)->lpVtbl -> FreeRepresentation(This,guidRepresentation,pvRepresentation) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFAudioMediaType;
    typedef struct IMFAudioMediaTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFAudioMediaType * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFAudioMediaType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFAudioMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFAudioMediaType * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFAudioMediaType * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFAudioMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFAudioMediaType * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFAudioMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFAudioMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFAudioMediaType * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFAudioMediaType * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFAudioMediaType * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetMajorType )(
            IMFAudioMediaType * This,
                        GUID *pguidMajorType);
        HRESULT ( STDMETHODCALLTYPE *IsCompressedFormat )(
            IMFAudioMediaType * This,
                        BOOL *pfCompressed);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            IMFAudioMediaType * This,
                       IMFMediaType *pIMediaType,
                        DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *GetRepresentation )(
            IMFAudioMediaType * This,
                       GUID guidRepresentation,
            _Out_ LPVOID *ppvRepresentation);
                      HRESULT ( STDMETHODCALLTYPE *FreeRepresentation )(
            IMFAudioMediaType * This,
                       GUID guidRepresentation,
                       LPVOID pvRepresentation);
        const WAVEFORMATEX *( STDMETHODCALLTYPE *GetAudioFormat )(
            IMFAudioMediaType * This);
        END_INTERFACE
    } IMFAudioMediaTypeVtbl;
    interface IMFAudioMediaType
    {
        CONST_VTBL struct IMFAudioMediaTypeVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetMajorType(This,pguidMajorType) )
    ( (This)->lpVtbl -> IsCompressedFormat(This,pfCompressed) )
    ( (This)->lpVtbl -> IsEqual(This,pIMediaType,pdwFlags) )
    ( (This)->lpVtbl -> GetRepresentation(This,guidRepresentation,ppvRepresentation) )
    ( (This)->lpVtbl -> FreeRepresentation(This,guidRepresentation,pvRepresentation) )
    ( (This)->lpVtbl -> GetAudioFormat(This) )
typedef DWORD RGBQUAD;
typedef struct __MIDL___MIDL_itf_mfobjects_0000_0008_0001
    {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
    } BITMAPINFOHEADER;
typedef struct __MIDL___MIDL_itf_mfobjects_0000_0008_0002
    {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[ 1 ];
    } BITMAPINFO;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef struct __MIDL___MIDL_itf_mfobjects_0000_0008_0003
    {
    GUID guidMajorType;
    GUID guidSubtype;
    } MFT_REGISTER_TYPE_INFO;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum _MFVideoInterlaceMode
    {
        MFVideoInterlace_Unknown = 0,
        MFVideoInterlace_Progressive = 2,
        MFVideoInterlace_FieldInterleavedUpperFirst = 3,
        MFVideoInterlace_FieldInterleavedLowerFirst = 4,
        MFVideoInterlace_FieldSingleUpper = 5,
        MFVideoInterlace_FieldSingleLower = 6,
        MFVideoInterlace_MixedInterlaceOrProgressive = 7,
        MFVideoInterlace_Last = ( MFVideoInterlace_MixedInterlaceOrProgressive + 1 ) ,
        MFVideoInterlace_ForceDWORD = 0x7fffffff
    } MFVideoInterlaceMode;
typedef
enum _MFVideoTransferFunction
    {
        MFVideoTransFunc_Unknown = 0,
        MFVideoTransFunc_10 = 1,
        MFVideoTransFunc_18 = 2,
        MFVideoTransFunc_20 = 3,
        MFVideoTransFunc_22 = 4,
        MFVideoTransFunc_709 = 5,
        MFVideoTransFunc_240M = 6,
        MFVideoTransFunc_sRGB = 7,
        MFVideoTransFunc_28 = 8,
        MFVideoTransFunc_Log_100 = 9,
        MFVideoTransFunc_Log_316 = 10,
        MFVideoTransFunc_709_sym = 11,
        MFVideoTransFunc_2020_const = 12,
        MFVideoTransFunc_2020 = 13,
        MFVideoTransFunc_26 = 14,
        MFVideoTransFunc_2084 = 15,
        MFVideoTransFunc_HLG = 16,
        MFVideoTransFunc_10_rel = 17,
        MFVideoTransFunc_Last = ( MFVideoTransFunc_10_rel + 1 ) ,
        MFVideoTransFunc_ForceDWORD = 0x7fffffff
    } MFVideoTransferFunction;
typedef
enum _MFVideoPrimaries
    {
        MFVideoPrimaries_Unknown = 0,
        MFVideoPrimaries_reserved = 1,
        MFVideoPrimaries_BT709 = 2,
        MFVideoPrimaries_BT470_2_SysM = 3,
        MFVideoPrimaries_BT470_2_SysBG = 4,
        MFVideoPrimaries_SMPTE170M = 5,
        MFVideoPrimaries_SMPTE240M = 6,
        MFVideoPrimaries_EBU3213 = 7,
        MFVideoPrimaries_SMPTE_C = 8,
        MFVideoPrimaries_BT2020 = 9,
        MFVideoPrimaries_XYZ = 10,
        MFVideoPrimaries_DCI_P3 = 11,
        MFVideoPrimaries_ACES = 12,
        MFVideoPrimaries_Last = ( MFVideoPrimaries_ACES + 1 ) ,
        MFVideoPrimaries_ForceDWORD = 0x7fffffff
    } MFVideoPrimaries;
typedef
enum _MFVideoLighting
    {
        MFVideoLighting_Unknown = 0,
        MFVideoLighting_bright = 1,
        MFVideoLighting_office = 2,
        MFVideoLighting_dim = 3,
        MFVideoLighting_dark = 4,
        MFVideoLighting_Last = ( MFVideoLighting_dark + 1 ) ,
        MFVideoLighting_ForceDWORD = 0x7fffffff
    } MFVideoLighting;
typedef
enum _MFVideoTransferMatrix
    {
        MFVideoTransferMatrix_Unknown = 0,
        MFVideoTransferMatrix_BT709 = 1,
        MFVideoTransferMatrix_BT601 = 2,
        MFVideoTransferMatrix_SMPTE240M = 3,
        MFVideoTransferMatrix_BT2020_10 = 4,
        MFVideoTransferMatrix_BT2020_12 = 5,
        MFVideoTransferMatrix_Last = ( MFVideoTransferMatrix_BT2020_12 + 1 ) ,
        MFVideoTransferMatrix_ForceDWORD = 0x7fffffff
    } MFVideoTransferMatrix;
typedef
enum _MFVideoChromaSubsampling
    {
        MFVideoChromaSubsampling_Unknown = 0,
        MFVideoChromaSubsampling_ProgressiveChroma = 0x8,
        MFVideoChromaSubsampling_Horizontally_Cosited = 0x4,
        MFVideoChromaSubsampling_Vertically_Cosited = 0x2,
        MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes = 0x1,
        MFVideoChromaSubsampling_MPEG2 = ( MFVideoChromaSubsampling_Horizontally_Cosited | MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes ) ,
        MFVideoChromaSubsampling_MPEG1 = MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes,
        MFVideoChromaSubsampling_DV_PAL = ( MFVideoChromaSubsampling_Horizontally_Cosited | MFVideoChromaSubsampling_Vertically_Cosited ) ,
        MFVideoChromaSubsampling_Cosited = ( ( MFVideoChromaSubsampling_Horizontally_Cosited | MFVideoChromaSubsampling_Vertically_Cosited ) | MFVideoChromaSubsampling_Vertically_AlignedChromaPlanes ) ,
        MFVideoChromaSubsampling_Last = ( MFVideoChromaSubsampling_Cosited + 1 ) ,
        MFVideoChromaSubsampling_ForceDWORD = 0x7fffffff
    } MFVideoChromaSubsampling;
typedef
enum _MFNominalRange
    {
        MFNominalRange_Unknown = 0,
        MFNominalRange_Normal = 1,
        MFNominalRange_Wide = 2,
        MFNominalRange_0_255 = 1,
        MFNominalRange_16_235 = 2,
        MFNominalRange_48_208 = 3,
        MFNominalRange_64_127 = 4,
        MFNominalRange_Last = ( MFNominalRange_64_127 + 1 ) ,
        MFNominalRange_ForceDWORD = 0x7fffffff
    } MFNominalRange;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef
enum _MFVideoFlags
    {
        MFVideoFlag_PAD_TO_Mask = ( 0x1 | 0x2 ) ,
        MFVideoFlag_PAD_TO_None = ( 0 * 0x1 ) ,
        MFVideoFlag_PAD_TO_4x3 = ( 1 * 0x1 ) ,
        MFVideoFlag_PAD_TO_16x9 = ( 2 * 0x1 ) ,
        MFVideoFlag_SrcContentHintMask = ( ( 0x4 | 0x8 ) | 0x10 ) ,
        MFVideoFlag_SrcContentHintNone = ( 0 * 0x4 ) ,
        MFVideoFlag_SrcContentHint16x9 = ( 1 * 0x4 ) ,
        MFVideoFlag_SrcContentHint235_1 = ( 2 * 0x4 ) ,
        MFVideoFlag_AnalogProtected = 0x20,
        MFVideoFlag_DigitallyProtected = 0x40,
        MFVideoFlag_ProgressiveContent = 0x80,
        MFVideoFlag_FieldRepeatCountMask = ( ( 0x100 | 0x200 ) | 0x400 ) ,
        MFVideoFlag_FieldRepeatCountShift = 8,
        MFVideoFlag_ProgressiveSeqReset = 0x800,
        MFVideoFlag_PanScanEnabled = 0x20000,
        MFVideoFlag_LowerFieldFirst = 0x40000,
        MFVideoFlag_BottomUpLinearRep = 0x80000,
        MFVideoFlags_DXVASurface = 0x100000,
        MFVideoFlags_RenderTargetSurface = 0x400000,
        MFVideoFlags_ForceQWORD = 0x7fffffff
    } MFVideoFlags;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef struct _MFRatio
    {
    DWORD Numerator;
    DWORD Denominator;
    } MFRatio;
typedef struct _MFOffset
    {
    WORD fract;
    short value;
    } MFOffset;
typedef struct _MFVideoArea
    {
    MFOffset OffsetX;
    MFOffset OffsetY;
    SIZE Area;
    } MFVideoArea;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef struct _MFVideoInfo
    {
    DWORD dwWidth;
    DWORD dwHeight;
    MFRatio PixelAspectRatio;
    MFVideoChromaSubsampling SourceChromaSubsampling;
    MFVideoInterlaceMode InterlaceMode;
    MFVideoTransferFunction TransferFunction;
    MFVideoPrimaries ColorPrimaries;
    MFVideoTransferMatrix TransferMatrix;
    MFVideoLighting SourceLighting;
    MFRatio FramesPerSecond;
    MFNominalRange NominalRange;
    MFVideoArea GeometricAperture;
    MFVideoArea MinimumDisplayAperture;
    MFVideoArea PanScanAperture;
    unsigned __int64 VideoFlags;
    } MFVideoInfo;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef struct __MFAYUVSample
    {
    BYTE bCrValue;
    BYTE bCbValue;
    BYTE bYValue;
    BYTE bSampleAlpha8;
    } MFAYUVSample;
typedef struct _MFARGB
    {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbAlpha;
    } MFARGB;
typedef union _MFPaletteEntry
    {
    MFARGB ARGB;
    MFAYUVSample AYCbCr;
    } MFPaletteEntry;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef struct _MFVideoSurfaceInfo
    {
    DWORD Format;
    DWORD PaletteEntries;
                    MFPaletteEntry Palette[ 1 ];
    } MFVideoSurfaceInfo;
typedef struct _MFVideoCompressedInfo
    {
    LONGLONG AvgBitrate;
    LONGLONG AvgBitErrorRate;
    DWORD MaxKeyFrameSpacing;
    } MFVideoCompressedInfo;
typedef struct _MFVIDEOFORMAT
    {
    DWORD dwSize;
    MFVideoInfo videoInfo;
    GUID guidFormat;
    MFVideoCompressedInfo compressedInfo;
    MFVideoSurfaceInfo surfaceInfo;
    } MFVIDEOFORMAT;
typedef
enum _MFStandardVideoFormat
    {
        MFStdVideoFormat_reserved = 0,
        MFStdVideoFormat_NTSC = ( MFStdVideoFormat_reserved + 1 ) ,
        MFStdVideoFormat_PAL = ( MFStdVideoFormat_NTSC + 1 ) ,
        MFStdVideoFormat_DVD_NTSC = ( MFStdVideoFormat_PAL + 1 ) ,
        MFStdVideoFormat_DVD_PAL = ( MFStdVideoFormat_DVD_NTSC + 1 ) ,
        MFStdVideoFormat_DV_PAL = ( MFStdVideoFormat_DVD_PAL + 1 ) ,
        MFStdVideoFormat_DV_NTSC = ( MFStdVideoFormat_DV_PAL + 1 ) ,
        MFStdVideoFormat_ATSC_SD480i = ( MFStdVideoFormat_DV_NTSC + 1 ) ,
        MFStdVideoFormat_ATSC_HD1080i = ( MFStdVideoFormat_ATSC_SD480i + 1 ) ,
        MFStdVideoFormat_ATSC_HD720p = ( MFStdVideoFormat_ATSC_HD1080i + 1 )
    } MFStandardVideoFormat;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFVideoMediaType;
    typedef struct IMFVideoMediaTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFVideoMediaType * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFVideoMediaType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFVideoMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFVideoMediaType * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFVideoMediaType * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFVideoMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFVideoMediaType * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFVideoMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFVideoMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFVideoMediaType * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFVideoMediaType * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFVideoMediaType * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetMajorType )(
            IMFVideoMediaType * This,
                        GUID *pguidMajorType);
        HRESULT ( STDMETHODCALLTYPE *IsCompressedFormat )(
            IMFVideoMediaType * This,
                        BOOL *pfCompressed);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            IMFVideoMediaType * This,
                       IMFMediaType *pIMediaType,
                        DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *GetRepresentation )(
            IMFVideoMediaType * This,
                       GUID guidRepresentation,
            _Out_ LPVOID *ppvRepresentation);
                      HRESULT ( STDMETHODCALLTYPE *FreeRepresentation )(
            IMFVideoMediaType * This,
                       GUID guidRepresentation,
                       LPVOID pvRepresentation);
        const MFVIDEOFORMAT *( STDMETHODCALLTYPE *GetVideoFormat )(
            IMFVideoMediaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetVideoRepresentation )(
            IMFVideoMediaType * This,
                       GUID guidRepresentation,
            _Out_ LPVOID *ppvRepresentation,
                       LONG lStride);
        END_INTERFACE
    } IMFVideoMediaTypeVtbl;
    interface IMFVideoMediaType
    {
        CONST_VTBL struct IMFVideoMediaTypeVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetMajorType(This,pguidMajorType) )
    ( (This)->lpVtbl -> IsCompressedFormat(This,pfCompressed) )
    ( (This)->lpVtbl -> IsEqual(This,pIMediaType,pdwFlags) )
    ( (This)->lpVtbl -> GetRepresentation(This,guidRepresentation,ppvRepresentation) )
    ( (This)->lpVtbl -> FreeRepresentation(This,guidRepresentation,pvRepresentation) )
    ( (This)->lpVtbl -> GetVideoFormat(This) )
    ( (This)->lpVtbl -> GetVideoRepresentation(This,guidRepresentation,ppvRepresentation,lStride) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFAsyncResult;
    typedef struct IMFAsyncResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFAsyncResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFAsyncResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFAsyncResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IMFAsyncResult * This,
                        __RPC__deref_out_opt IUnknown **ppunkState);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IMFAsyncResult * This);
        HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in IMFAsyncResult * This,
                       HRESULT hrStatus);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IMFAsyncResult * This,
                        __RPC__deref_out_opt IUnknown **ppObject);
                      IUnknown *( STDMETHODCALLTYPE *GetStateNoAddRef )(
            IMFAsyncResult * This);
        END_INTERFACE
    } IMFAsyncResultVtbl;
    interface IMFAsyncResult
    {
        CONST_VTBL struct IMFAsyncResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetState(This,ppunkState) )
    ( (This)->lpVtbl -> GetStatus(This) )
    ( (This)->lpVtbl -> SetStatus(This,hrStatus) )
    ( (This)->lpVtbl -> GetObject(This,ppObject) )
    ( (This)->lpVtbl -> GetStateNoAddRef(This) )
EXTERN_C const IID IID_IMFAsyncCallback;
    typedef struct IMFAsyncCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFAsyncCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFAsyncCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFAsyncCallback * This);
        HRESULT ( STDMETHODCALLTYPE *GetParameters )(
            __RPC__in IMFAsyncCallback * This,
                        __RPC__out DWORD *pdwFlags,
                        __RPC__out DWORD *pdwQueue);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IMFAsyncCallback * This,
                       __RPC__in_opt IMFAsyncResult *pAsyncResult);
        END_INTERFACE
    } IMFAsyncCallbackVtbl;
    interface IMFAsyncCallback
    {
        CONST_VTBL struct IMFAsyncCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParameters(This,pdwFlags,pdwQueue) )
    ( (This)->lpVtbl -> Invoke(This,pAsyncResult) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFAsyncCallbackLogging;
    typedef struct IMFAsyncCallbackLoggingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFAsyncCallbackLogging * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFAsyncCallbackLogging * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFAsyncCallbackLogging * This);
        HRESULT ( STDMETHODCALLTYPE *GetParameters )(
            IMFAsyncCallbackLogging * This,
                        DWORD *pdwFlags,
                        DWORD *pdwQueue);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMFAsyncCallbackLogging * This,
                       IMFAsyncResult *pAsyncResult);
        void *( STDMETHODCALLTYPE *GetObjectPointer )(
            IMFAsyncCallbackLogging * This);
        DWORD ( STDMETHODCALLTYPE *GetObjectTag )(
            IMFAsyncCallbackLogging * This);
        END_INTERFACE
    } IMFAsyncCallbackLoggingVtbl;
    interface IMFAsyncCallbackLogging
    {
        CONST_VTBL struct IMFAsyncCallbackLoggingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParameters(This,pdwFlags,pdwQueue) )
    ( (This)->lpVtbl -> Invoke(This,pAsyncResult) )
    ( (This)->lpVtbl -> GetObjectPointer(This) )
    ( (This)->lpVtbl -> GetObjectTag(This) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
enum __MIDL___MIDL_itf_mfobjects_0000_0012_0001
    {
        MEUnknown = 0,
        MEError = 1,
        MEExtendedType = 2,
        MENonFatalError = 3,
        MEGenericV1Anchor = MENonFatalError,
        MESessionUnknown = 100,
        MESessionTopologySet = 101,
        MESessionTopologiesCleared = 102,
        MESessionStarted = 103,
        MESessionPaused = 104,
        MESessionStopped = 105,
        MESessionClosed = 106,
        MESessionEnded = 107,
        MESessionRateChanged = 108,
        MESessionScrubSampleComplete = 109,
        MESessionCapabilitiesChanged = 110,
        MESessionTopologyStatus = 111,
        MESessionNotifyPresentationTime = 112,
        MENewPresentation = 113,
        MELicenseAcquisitionStart = 114,
        MELicenseAcquisitionCompleted = 115,
        MEIndividualizationStart = 116,
        MEIndividualizationCompleted = 117,
        MEEnablerProgress = 118,
        MEEnablerCompleted = 119,
        MEPolicyError = 120,
        MEPolicyReport = 121,
        MEBufferingStarted = 122,
        MEBufferingStopped = 123,
        MEConnectStart = 124,
        MEConnectEnd = 125,
        MEReconnectStart = 126,
        MEReconnectEnd = 127,
        MERendererEvent = 128,
        MESessionStreamSinkFormatChanged = 129,
        MESessionV1Anchor = MESessionStreamSinkFormatChanged,
        MESourceUnknown = 200,
        MESourceStarted = 201,
        MEStreamStarted = 202,
        MESourceSeeked = 203,
        MEStreamSeeked = 204,
        MENewStream = 205,
        MEUpdatedStream = 206,
        MESourceStopped = 207,
        MEStreamStopped = 208,
        MESourcePaused = 209,
        MEStreamPaused = 210,
        MEEndOfPresentation = 211,
        MEEndOfStream = 212,
        MEMediaSample = 213,
        MEStreamTick = 214,
        MEStreamThinMode = 215,
        MEStreamFormatChanged = 216,
        MESourceRateChanged = 217,
        MEEndOfPresentationSegment = 218,
        MESourceCharacteristicsChanged = 219,
        MESourceRateChangeRequested = 220,
        MESourceMetadataChanged = 221,
        MESequencerSourceTopologyUpdated = 222,
        MESourceV1Anchor = MESequencerSourceTopologyUpdated,
        MESinkUnknown = 300,
        MEStreamSinkStarted = 301,
        MEStreamSinkStopped = 302,
        MEStreamSinkPaused = 303,
        MEStreamSinkRateChanged = 304,
        MEStreamSinkRequestSample = 305,
        MEStreamSinkMarker = 306,
        MEStreamSinkPrerolled = 307,
        MEStreamSinkScrubSampleComplete = 308,
        MEStreamSinkFormatChanged = 309,
        MEStreamSinkDeviceChanged = 310,
        MEQualityNotify = 311,
        MESinkInvalidated = 312,
        MEAudioSessionNameChanged = 313,
        MEAudioSessionVolumeChanged = 314,
        MEAudioSessionDeviceRemoved = 315,
        MEAudioSessionServerShutdown = 316,
        MEAudioSessionGroupingParamChanged = 317,
        MEAudioSessionIconChanged = 318,
        MEAudioSessionFormatChanged = 319,
        MEAudioSessionDisconnected = 320,
        MEAudioSessionExclusiveModeOverride = 321,
        MESinkV1Anchor = MEAudioSessionExclusiveModeOverride,
        MECaptureAudioSessionVolumeChanged = 322,
        MECaptureAudioSessionDeviceRemoved = 323,
        MECaptureAudioSessionFormatChanged = 324,
        MECaptureAudioSessionDisconnected = 325,
        MECaptureAudioSessionExclusiveModeOverride = 326,
        MECaptureAudioSessionServerShutdown = 327,
        MESinkV2Anchor = MECaptureAudioSessionServerShutdown,
        METrustUnknown = 400,
        MEPolicyChanged = 401,
        MEContentProtectionMessage = 402,
        MEPolicySet = 403,
        METrustV1Anchor = MEPolicySet,
        MEWMDRMLicenseBackupCompleted = 500,
        MEWMDRMLicenseBackupProgress = 501,
        MEWMDRMLicenseRestoreCompleted = 502,
        MEWMDRMLicenseRestoreProgress = 503,
        MEWMDRMLicenseAcquisitionCompleted = 506,
        MEWMDRMIndividualizationCompleted = 508,
        MEWMDRMIndividualizationProgress = 513,
        MEWMDRMProximityCompleted = 514,
        MEWMDRMLicenseStoreCleaned = 515,
        MEWMDRMRevocationDownloadCompleted = 516,
        MEWMDRMV1Anchor = MEWMDRMRevocationDownloadCompleted,
        METransformUnknown = 600,
        METransformNeedInput = ( METransformUnknown + 1 ) ,
        METransformHaveOutput = ( METransformNeedInput + 1 ) ,
        METransformDrainComplete = ( METransformHaveOutput + 1 ) ,
        METransformMarker = ( METransformDrainComplete + 1 ) ,
        METransformInputStreamStateChanged = ( METransformMarker + 1 ) ,
        MEByteStreamCharacteristicsChanged = 700,
        MEVideoCaptureDeviceRemoved = 800,
        MEVideoCaptureDevicePreempted = 801,
        MEStreamSinkFormatInvalidated = 802,
        MEEncodingParameters = 803,
        MEContentProtectionMetadata = 900,
        MEDeviceThermalStateChanged = 950,
        MEReservedMax = 10000
    } ;
typedef DWORD MediaEventType;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEvent;
    typedef struct IMFMediaEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFMediaEvent * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFMediaEvent * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFMediaEvent * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFMediaEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFMediaEvent * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFMediaEvent * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFMediaEvent * This,
                       __RPC__in_opt IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IMFMediaEvent * This,
                        __RPC__out MediaEventType *pmet);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedType )(
            __RPC__in IMFMediaEvent * This,
                        __RPC__out GUID *pguidExtendedType);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IMFMediaEvent * This,
                        __RPC__out HRESULT *phrStatus);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IMFMediaEvent * This,
                        __RPC__out PROPVARIANT *pvValue);
        END_INTERFACE
    } IMFMediaEventVtbl;
    interface IMFMediaEvent
    {
        CONST_VTBL struct IMFMediaEventVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetType(This,pmet) )
    ( (This)->lpVtbl -> GetExtendedType(This,pguidExtendedType) )
    ( (This)->lpVtbl -> GetStatus(This,phrStatus) )
    ( (This)->lpVtbl -> GetValue(This,pvValue) )
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMediaEventGenerator;
    typedef struct IMFMediaEventGeneratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFMediaEventGenerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFMediaEventGenerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFMediaEventGenerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMFMediaEventGenerator * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IMFMediaEvent **ppEvent);
                      HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaEventGenerator * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaEventGenerator * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            __RPC__in IMFMediaEventGenerator * This,
                       MediaEventType met,
                       __RPC__in REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               __RPC__in_opt const PROPVARIANT *pvValue);
        END_INTERFACE
    } IMFMediaEventGeneratorVtbl;
    interface IMFMediaEventGenerator
    {
        CONST_VTBL struct IMFMediaEventGeneratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,met,guidExtendedType,hrStatus,pvValue) )
                HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_RemoteBeginGetEvent_Proxy(
    __RPC__in IMFMediaEventGenerator * This,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFMediaEventGenerator_RemoteBeginGetEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_RemoteEndGetEvent_Proxy(
    __RPC__in IMFMediaEventGenerator * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out DWORD *pcbEvent,
                                  __RPC__deref_out_ecount_full_opt(*pcbEvent) BYTE **ppbEvent);
void __RPC_STUB IMFMediaEventGenerator_RemoteEndGetEvent_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFRemoteAsyncCallback;
    typedef struct IMFRemoteAsyncCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFRemoteAsyncCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFRemoteAsyncCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFRemoteAsyncCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in IMFRemoteAsyncCallback * This,
                       HRESULT hr,
                       __RPC__in_opt IUnknown *pRemoteResult);
        END_INTERFACE
    } IMFRemoteAsyncCallbackVtbl;
    interface IMFRemoteAsyncCallback
    {
        CONST_VTBL struct IMFRemoteAsyncCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,hr,pRemoteResult) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
typedef
enum _MFBYTESTREAM_SEEK_ORIGIN
    {
        msoBegin = 0,
        msoCurrent = ( msoBegin + 1 )
    } MFBYTESTREAM_SEEK_ORIGIN;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFByteStream;
    typedef struct IMFByteStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFByteStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFByteStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFByteStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IMFByteStream * This,
                        __RPC__out DWORD *pdwCapabilities);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            __RPC__in IMFByteStream * This,
                        __RPC__out QWORD *pqwLength);
        HRESULT ( STDMETHODCALLTYPE *SetLength )(
            __RPC__in IMFByteStream * This,
                       QWORD qwLength);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPosition )(
            __RPC__in IMFByteStream * This,
                        __RPC__out QWORD *pqwPosition);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentPosition )(
            __RPC__in IMFByteStream * This,
                       QWORD qwPosition);
        HRESULT ( STDMETHODCALLTYPE *IsEndOfStream )(
            __RPC__in IMFByteStream * This,
                        __RPC__out BOOL *pfEndOfStream);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in IMFByteStream * This,
                                 __RPC__out_ecount_full(cb) BYTE *pb,
                       ULONG cb,
                        __RPC__out ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *BeginRead )(
            IMFByteStream * This,
            _Out_writes_bytes_(cb) BYTE *pb,
                       ULONG cb,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndRead )(
            IMFByteStream * This,
                       IMFAsyncResult *pResult,
            _Out_ ULONG *pcbRead);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IMFByteStream * This,
                                __RPC__in_ecount_full(cb) const BYTE *pb,
                       ULONG cb,
                        __RPC__out ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *BeginWrite )(
            IMFByteStream * This,
            _In_reads_bytes_(cb) const BYTE *pb,
                       ULONG cb,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
                      HRESULT ( STDMETHODCALLTYPE *EndWrite )(
            IMFByteStream * This,
                       IMFAsyncResult *pResult,
            _Out_ ULONG *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in IMFByteStream * This,
                       MFBYTESTREAM_SEEK_ORIGIN SeekOrigin,
                       LONGLONG llSeekOffset,
                       DWORD dwSeekFlags,
                        __RPC__out QWORD *pqwCurrentPosition);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            __RPC__in IMFByteStream * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMFByteStream * This);
        END_INTERFACE
    } IMFByteStreamVtbl;
    interface IMFByteStream
    {
        CONST_VTBL struct IMFByteStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,pdwCapabilities) )
    ( (This)->lpVtbl -> GetLength(This,pqwLength) )
    ( (This)->lpVtbl -> SetLength(This,qwLength) )
    ( (This)->lpVtbl -> GetCurrentPosition(This,pqwPosition) )
    ( (This)->lpVtbl -> SetCurrentPosition(This,qwPosition) )
    ( (This)->lpVtbl -> IsEndOfStream(This,pfEndOfStream) )
    ( (This)->lpVtbl -> Read(This,pb,cb,pcbRead) )
    ( (This)->lpVtbl -> BeginRead(This,pb,cb,pCallback,punkState) )
    ( (This)->lpVtbl -> EndRead(This,pResult,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pb,cb,pcbWritten) )
    ( (This)->lpVtbl -> BeginWrite(This,pb,cb,pCallback,punkState) )
    ( (This)->lpVtbl -> EndWrite(This,pResult,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,SeekOrigin,llSeekOffset,dwSeekFlags,pqwCurrentPosition) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> Close(This) )
                HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteBeginRead_Proxy(
    __RPC__in IMFByteStream * This,
               ULONG cb,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFByteStream_RemoteBeginRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteEndRead_Proxy(
    __RPC__in IMFByteStream * This,
               __RPC__in_opt IUnknown *punkResult,
                                        __RPC__inout_ecount_part(cb, *pcbRead) BYTE *pb,
               ULONG cb,
                    __RPC__inout ULONG *pcbRead);
void __RPC_STUB IMFByteStream_RemoteEndRead_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteBeginWrite_Proxy(
    __RPC__in IMFByteStream * This,
                        __RPC__in_ecount_full(cb) const BYTE *pb,
               ULONG cb,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
void __RPC_STUB IMFByteStream_RemoteBeginWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IMFByteStream_RemoteEndWrite_Proxy(
    __RPC__in IMFByteStream * This,
               __RPC__in_opt IUnknown *punkResult,
                __RPC__out ULONG *pcbWritten);
void __RPC_STUB IMFByteStream_RemoteEndWrite_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_GUID( MF_BYTESTREAM_ORIGIN_NAME, 0xfc358288, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);
EXTERN_GUID( MF_BYTESTREAM_CONTENT_TYPE, 0xfc358289, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);
EXTERN_GUID( MF_BYTESTREAM_DURATION, 0xfc35828a, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);
EXTERN_GUID( MF_BYTESTREAM_LAST_MODIFIED_TIME, 0xfc35828b, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);
EXTERN_GUID( MF_BYTESTREAM_IFO_FILE_URI, 0xfc35828c, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);
EXTERN_GUID( MF_BYTESTREAM_DLNA_PROFILE_ID, 0xfc35828d, 0x3cb6, 0x460c, 0xa4, 0x24, 0xb6, 0x68, 0x12, 0x60, 0x37, 0x5a);
EXTERN_GUID( MF_BYTESTREAM_EFFECTIVE_URL, 0x9afa0209, 0x89d1, 0x42af, 0x84, 0x56, 0x1d, 0xe6, 0xb5, 0x62, 0xd6, 0x91);
EXTERN_GUID( MF_BYTESTREAM_TRANSCODED, 0xb6c5c282, 0x4dc9, 0x4db9, 0xab, 0x48, 0xcf, 0x3b, 0x6d, 0x8b, 0xc5, 0xe0 );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
EXTERN_GUID(CLSID_MFByteStreamProxyClassFactory, 0x770e8e77, 0x4916, 0x441c, 0xa9, 0xa7, 0xb3, 0x42, 0xd0, 0xee, 0xbc, 0x71 );
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFByteStreamProxyClassFactory;
    typedef struct IMFByteStreamProxyClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFByteStreamProxyClassFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFByteStreamProxyClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFByteStreamProxyClassFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateByteStreamProxy )(
            __RPC__in IMFByteStreamProxyClassFactory * This,
                       __RPC__in_opt IMFByteStream *pByteStream,
                               __RPC__in_opt IMFAttributes *pAttributes,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppvObject);
        END_INTERFACE
    } IMFByteStreamProxyClassFactoryVtbl;
    interface IMFByteStreamProxyClassFactory
    {
        CONST_VTBL struct IMFByteStreamProxyClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateByteStreamProxy(This,pByteStream,pAttributes,riid,ppvObject) )
typedef
enum __MIDL___MIDL_itf_mfobjects_0000_0017_0001
    {
        MF_ACCESSMODE_READ = 1,
        MF_ACCESSMODE_WRITE = 2,
        MF_ACCESSMODE_READWRITE = 3
    } MF_FILE_ACCESSMODE;
typedef
enum __MIDL___MIDL_itf_mfobjects_0000_0017_0002
    {
        MF_OPENMODE_FAIL_IF_NOT_EXIST = 0,
        MF_OPENMODE_FAIL_IF_EXIST = 1,
        MF_OPENMODE_RESET_IF_EXIST = 2,
        MF_OPENMODE_APPEND_IF_EXIST = 3,
        MF_OPENMODE_DELETE_IF_EXIST = 4
    } MF_FILE_OPENMODE;
typedef
enum __MIDL___MIDL_itf_mfobjects_0000_0017_0003
    {
        MF_FILEFLAGS_NONE = 0,
        MF_FILEFLAGS_NOBUFFERING = 0x1,
        MF_FILEFLAGS_ALLOW_WRITE_SHARING = 0x2
    } MF_FILE_FLAGS;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFSampleOutputStream;
    typedef struct IMFSampleOutputStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFSampleOutputStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFSampleOutputStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFSampleOutputStream * This);
        HRESULT ( STDMETHODCALLTYPE *BeginWriteSample )(
            __RPC__in IMFSampleOutputStream * This,
                       __RPC__in_opt IMFSample *pSample,
                       __RPC__in_opt IMFAsyncCallback *pCallback,
                       __RPC__in_opt IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndWriteSample )(
            __RPC__in IMFSampleOutputStream * This,
                       __RPC__in_opt IMFAsyncResult *pResult);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IMFSampleOutputStream * This);
        END_INTERFACE
    } IMFSampleOutputStreamVtbl;
    interface IMFSampleOutputStream
    {
        CONST_VTBL struct IMFSampleOutputStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginWriteSample(This,pSample,pCallback,punkState) )
    ( (This)->lpVtbl -> EndWriteSample(This,pResult) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IMFCollection;
    typedef struct IMFCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetElementCount )(
            __RPC__in IMFCollection * This,
                        __RPC__out DWORD *pcElements);
        HRESULT ( STDMETHODCALLTYPE *GetElement )(
            __RPC__in IMFCollection * This,
                       DWORD dwElementIndex,
                        __RPC__deref_out_opt IUnknown **ppUnkElement);
        HRESULT ( STDMETHODCALLTYPE *AddElement )(
            __RPC__in IMFCollection * This,
                       __RPC__in_opt IUnknown *pUnkElement);
        HRESULT ( STDMETHODCALLTYPE *RemoveElement )(
            __RPC__in IMFCollection * This,
                       DWORD dwElementIndex,
                        __RPC__deref_out_opt IUnknown **ppUnkElement);
        HRESULT ( STDMETHODCALLTYPE *InsertElementAt )(
            __RPC__in IMFCollection * This,
                       DWORD dwIndex,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllElements )(
            __RPC__in IMFCollection * This);
        END_INTERFACE
    } IMFCollectionVtbl;
    interface IMFCollection
    {
        CONST_VTBL struct IMFCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetElementCount(This,pcElements) )
    ( (This)->lpVtbl -> GetElement(This,dwElementIndex,ppUnkElement) )
    ( (This)->lpVtbl -> AddElement(This,pUnkElement) )
    ( (This)->lpVtbl -> RemoveElement(This,dwElementIndex,ppUnkElement) )
    ( (This)->lpVtbl -> InsertElementAt(This,dwIndex,pUnknown) )
    ( (This)->lpVtbl -> RemoveAllElements(This) )
EXTERN_C const IID IID_IMFMediaEventQueue;
    typedef struct IMFMediaEventQueueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMediaEventQueue * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMediaEventQueue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMediaEventQueue * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            IMFMediaEventQueue * This,
                       DWORD dwFlags,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *BeginGetEvent )(
            IMFMediaEventQueue * This,
                       IMFAsyncCallback *pCallback,
                       IUnknown *punkState);
        HRESULT ( STDMETHODCALLTYPE *EndGetEvent )(
            IMFMediaEventQueue * This,
                       IMFAsyncResult *pResult,
            _Out_ IMFMediaEvent **ppEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEvent )(
            IMFMediaEventQueue * This,
                       IMFMediaEvent *pEvent);
        HRESULT ( STDMETHODCALLTYPE *QueueEventParamVar )(
            IMFMediaEventQueue * This,
                       MediaEventType met,
                       REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               const PROPVARIANT *pvValue);
        HRESULT ( STDMETHODCALLTYPE *QueueEventParamUnk )(
            IMFMediaEventQueue * This,
                       MediaEventType met,
                       REFGUID guidExtendedType,
                       HRESULT hrStatus,
                               IUnknown *pUnk);
        HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IMFMediaEventQueue * This);
        END_INTERFACE
    } IMFMediaEventQueueVtbl;
    interface IMFMediaEventQueue
    {
        CONST_VTBL struct IMFMediaEventQueueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,dwFlags,ppEvent) )
    ( (This)->lpVtbl -> BeginGetEvent(This,pCallback,punkState) )
    ( (This)->lpVtbl -> EndGetEvent(This,pResult,ppEvent) )
    ( (This)->lpVtbl -> QueueEvent(This,pEvent) )
    ( (This)->lpVtbl -> QueueEventParamVar(This,met,guidExtendedType,hrStatus,pvValue) )
    ( (This)->lpVtbl -> QueueEventParamUnk(This,met,guidExtendedType,hrStatus,pUnk) )
    ( (This)->lpVtbl -> Shutdown(This) )
EXTERN_C const IID IID_IMFActivate;
    typedef struct IMFActivateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFActivate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFActivate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFActivate * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IMFActivate * This,
            __RPC__in_opt IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        __RPC__out BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cchBufSize) LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  __RPC__inout_opt UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(( *pcchLength + 1 ) ) LPWSTR *ppwszValue,
                        __RPC__out UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                        __RPC__out UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                                 __RPC__out_ecount_full(cbBufSize) UINT8 *pBuf,
            UINT32 cbBufSize,
                                  __RPC__inout_opt UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                                          __RPC__deref_out_ecount_full_opt(*pcbSize) UINT8 **ppBuf,
                        __RPC__out UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFIID riid,
                                __RPC__deref_out_opt LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            __RPC__in IMFActivate * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
            __RPC__in REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                               __RPC__in_string LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                                __RPC__in_ecount_full(cbBufSize) const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            __RPC__in IMFActivate * This,
            __RPC__in REFGUID guidKey,
                       __RPC__in_opt IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            __RPC__in IMFActivate * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            __RPC__in IMFActivate * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IMFActivate * This,
                        __RPC__out UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            __RPC__in IMFActivate * This,
            UINT32 unIndex,
                        __RPC__out GUID *pguidKey,
                                  __RPC__inout_opt PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            __RPC__in IMFActivate * This,
                       __RPC__in_opt IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *ActivateObject )(
            __RPC__in IMFActivate * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ShutdownObject )(
            __RPC__in IMFActivate * This);
        HRESULT ( STDMETHODCALLTYPE *DetachObject )(
            __RPC__in IMFActivate * This);
        END_INTERFACE
    } IMFActivateVtbl;
    interface IMFActivate
    {
        CONST_VTBL struct IMFActivateVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> ActivateObject(This,riid,ppv) )
    ( (This)->lpVtbl -> ShutdownObject(This) )
    ( (This)->lpVtbl -> DetachObject(This) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef
enum _MF_Plugin_Type
    {
        MF_Plugin_Type_MFT = 0,
        MF_Plugin_Type_MediaSource = 1,
        MF_Plugin_Type_MFT_MatchOutputType = 2,
        MF_Plugin_Type_Other = ( DWORD )-1
    } MF_Plugin_Type;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPluginControl;
    typedef struct IMFPluginControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFPluginControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFPluginControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFPluginControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredClsid )(
            IMFPluginControl * This,
            DWORD pluginType,
            _In_ LPCWSTR selector,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredClsidByIndex )(
            IMFPluginControl * This,
            DWORD pluginType,
            DWORD index,
            _Out_ LPWSTR *selector,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *SetPreferredClsid )(
            IMFPluginControl * This,
            DWORD pluginType,
            _In_ LPCWSTR selector,
            _In_opt_ const CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *IsDisabled )(
            IMFPluginControl * This,
            DWORD pluginType,
            REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *GetDisabledByIndex )(
            IMFPluginControl * This,
            DWORD pluginType,
            DWORD index,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *SetDisabled )(
            IMFPluginControl * This,
            DWORD pluginType,
            REFCLSID clsid,
            BOOL disabled);
        END_INTERFACE
    } IMFPluginControlVtbl;
    interface IMFPluginControl
    {
        CONST_VTBL struct IMFPluginControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPreferredClsid(This,pluginType,selector,clsid) )
    ( (This)->lpVtbl -> GetPreferredClsidByIndex(This,pluginType,index,selector,clsid) )
    ( (This)->lpVtbl -> SetPreferredClsid(This,pluginType,selector,clsid) )
    ( (This)->lpVtbl -> IsDisabled(This,pluginType,clsid) )
    ( (This)->lpVtbl -> GetDisabledByIndex(This,pluginType,index,clsid) )
    ( (This)->lpVtbl -> SetDisabled(This,pluginType,clsid,disabled) )
typedef
enum MF_PLUGIN_CONTROL_POLICY
    {
        MF_PLUGIN_CONTROL_POLICY_USE_ALL_PLUGINS = 0,
        MF_PLUGIN_CONTROL_POLICY_USE_APPROVED_PLUGINS = 1,
        MF_PLUGIN_CONTROL_POLICY_USE_WEB_PLUGINS = 2,
        MF_PLUGIN_CONTROL_POLICY_USE_WEB_PLUGINS_EDGEMODE = 3
    } MF_PLUGIN_CONTROL_POLICY;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFPluginControl2;
    typedef struct IMFPluginControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFPluginControl2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFPluginControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFPluginControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredClsid )(
            IMFPluginControl2 * This,
            DWORD pluginType,
            _In_ LPCWSTR selector,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredClsidByIndex )(
            IMFPluginControl2 * This,
            DWORD pluginType,
            DWORD index,
            _Out_ LPWSTR *selector,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *SetPreferredClsid )(
            IMFPluginControl2 * This,
            DWORD pluginType,
            _In_ LPCWSTR selector,
            _In_opt_ const CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *IsDisabled )(
            IMFPluginControl2 * This,
            DWORD pluginType,
            REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *GetDisabledByIndex )(
            IMFPluginControl2 * This,
            DWORD pluginType,
            DWORD index,
            _Out_ CLSID *clsid);
        HRESULT ( STDMETHODCALLTYPE *SetDisabled )(
            IMFPluginControl2 * This,
            DWORD pluginType,
            REFCLSID clsid,
            BOOL disabled);
        HRESULT ( STDMETHODCALLTYPE *SetPolicy )(
            IMFPluginControl2 * This,
                       MF_PLUGIN_CONTROL_POLICY policy);
        END_INTERFACE
    } IMFPluginControl2Vtbl;
    interface IMFPluginControl2
    {
        CONST_VTBL struct IMFPluginControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPreferredClsid(This,pluginType,selector,clsid) )
    ( (This)->lpVtbl -> GetPreferredClsidByIndex(This,pluginType,index,selector,clsid) )
    ( (This)->lpVtbl -> SetPreferredClsid(This,pluginType,selector,clsid) )
    ( (This)->lpVtbl -> IsDisabled(This,pluginType,clsid) )
    ( (This)->lpVtbl -> GetDisabledByIndex(This,pluginType,index,clsid) )
    ( (This)->lpVtbl -> SetDisabled(This,pluginType,clsid,disabled) )
    ( (This)->lpVtbl -> SetPolicy(This,policy) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFDXGIDeviceManager;
    typedef struct IMFDXGIDeviceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFDXGIDeviceManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFDXGIDeviceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFDXGIDeviceManager * This);
        HRESULT ( STDMETHODCALLTYPE *CloseDeviceHandle )(
            IMFDXGIDeviceManager * This,
            _In_ HANDLE hDevice);
        HRESULT ( STDMETHODCALLTYPE *GetVideoService )(
            IMFDXGIDeviceManager * This,
            _In_ HANDLE hDevice,
            _In_ REFIID riid,
            _Outptr_ void **ppService);
        HRESULT ( STDMETHODCALLTYPE *LockDevice )(
            IMFDXGIDeviceManager * This,
            _In_ HANDLE hDevice,
            _In_ REFIID riid,
            _Outptr_ void **ppUnkDevice,
            _In_ BOOL fBlock);
        HRESULT ( STDMETHODCALLTYPE *OpenDeviceHandle )(
            IMFDXGIDeviceManager * This,
            _Out_ HANDLE *phDevice);
        HRESULT ( STDMETHODCALLTYPE *ResetDevice )(
            IMFDXGIDeviceManager * This,
            _In_ IUnknown *pUnkDevice,
            _In_ UINT resetToken);
        HRESULT ( STDMETHODCALLTYPE *TestDevice )(
            IMFDXGIDeviceManager * This,
            _In_ HANDLE hDevice);
        HRESULT ( STDMETHODCALLTYPE *UnlockDevice )(
            IMFDXGIDeviceManager * This,
            _In_ HANDLE hDevice,
            _In_ BOOL fSaveState);
        END_INTERFACE
    } IMFDXGIDeviceManagerVtbl;
    interface IMFDXGIDeviceManager
    {
        CONST_VTBL struct IMFDXGIDeviceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CloseDeviceHandle(This,hDevice) )
    ( (This)->lpVtbl -> GetVideoService(This,hDevice,riid,ppService) )
    ( (This)->lpVtbl -> LockDevice(This,hDevice,riid,ppUnkDevice,fBlock) )
    ( (This)->lpVtbl -> OpenDeviceHandle(This,phDevice) )
    ( (This)->lpVtbl -> ResetDevice(This,pUnkDevice,resetToken) )
    ( (This)->lpVtbl -> TestDevice(This,hDevice) )
    ( (This)->lpVtbl -> UnlockDevice(This,hDevice,fSaveState) )
typedef
enum _MF_STREAM_STATE
    {
        MF_STREAM_STATE_STOPPED = 0,
        MF_STREAM_STATE_PAUSED = ( MF_STREAM_STATE_STOPPED + 1 ) ,
        MF_STREAM_STATE_RUNNING = ( MF_STREAM_STATE_PAUSED + 1 )
    } MF_STREAM_STATE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFMuxStreamAttributesManager;
    typedef struct IMFMuxStreamAttributesManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMuxStreamAttributesManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMuxStreamAttributesManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMuxStreamAttributesManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMFMuxStreamAttributesManager * This,
            _Out_ DWORD *pdwMuxStreamCount);
        HRESULT ( STDMETHODCALLTYPE *GetAttributes )(
            IMFMuxStreamAttributesManager * This,
            _In_ DWORD dwMuxStreamIndex,
            _COM_Outptr_ IMFAttributes **ppStreamAttributes);
        END_INTERFACE
    } IMFMuxStreamAttributesManagerVtbl;
    interface IMFMuxStreamAttributesManager
    {
        CONST_VTBL struct IMFMuxStreamAttributesManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamCount(This,pdwMuxStreamCount) )
    ( (This)->lpVtbl -> GetAttributes(This,dwMuxStreamIndex,ppStreamAttributes) )
EXTERN_C const IID IID_IMFMuxStreamMediaTypeManager;
    typedef struct IMFMuxStreamMediaTypeManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMuxStreamMediaTypeManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMuxStreamMediaTypeManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMuxStreamMediaTypeManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMFMuxStreamMediaTypeManager * This,
            _Out_ DWORD *pdwMuxStreamCount);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IMFMuxStreamMediaTypeManager * This,
            _In_ DWORD dwMuxStreamIndex,
            _COM_Outptr_ IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetStreamConfigurationCount )(
            IMFMuxStreamMediaTypeManager * This,
            _Out_ DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *AddStreamConfiguration )(
            IMFMuxStreamMediaTypeManager * This,
            _In_ ULONGLONG ullStreamMask);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamConfiguration )(
            IMFMuxStreamMediaTypeManager * This,
            _In_ ULONGLONG ullStreamMask);
        HRESULT ( STDMETHODCALLTYPE *GetStreamConfiguration )(
            IMFMuxStreamMediaTypeManager * This,
            _In_ DWORD ulIndex,
            _Out_ ULONGLONG *pullStreamMask);
        END_INTERFACE
    } IMFMuxStreamMediaTypeManagerVtbl;
    interface IMFMuxStreamMediaTypeManager
    {
        CONST_VTBL struct IMFMuxStreamMediaTypeManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamCount(This,pdwMuxStreamCount) )
    ( (This)->lpVtbl -> GetMediaType(This,dwMuxStreamIndex,ppMediaType) )
    ( (This)->lpVtbl -> GetStreamConfigurationCount(This,pdwCount) )
    ( (This)->lpVtbl -> AddStreamConfiguration(This,ullStreamMask) )
    ( (This)->lpVtbl -> RemoveStreamConfiguration(This,ullStreamMask) )
    ( (This)->lpVtbl -> GetStreamConfiguration(This,ulIndex,pullStreamMask) )
EXTERN_C const IID IID_IMFMuxStreamSampleManager;
    typedef struct IMFMuxStreamSampleManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFMuxStreamSampleManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFMuxStreamSampleManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFMuxStreamSampleManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMFMuxStreamSampleManager * This,
            _Out_ DWORD *pdwMuxStreamCount);
        HRESULT ( STDMETHODCALLTYPE *GetSample )(
            IMFMuxStreamSampleManager * This,
            _In_ DWORD dwMuxStreamIndex,
            _COM_Outptr_ IMFSample **ppSample);
        ULONGLONG ( STDMETHODCALLTYPE *GetStreamConfiguration )(
            IMFMuxStreamSampleManager * This);
        END_INTERFACE
    } IMFMuxStreamSampleManagerVtbl;
    interface IMFMuxStreamSampleManager
    {
        CONST_VTBL struct IMFMuxStreamSampleManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamCount(This,pdwMuxStreamCount) )
    ( (This)->lpVtbl -> GetSample(This,dwMuxStreamIndex,ppSample) )
    ( (This)->lpVtbl -> GetStreamConfiguration(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mfobjects_0000_0027_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
              HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_BeginGetEvent_Proxy(
    IMFMediaEventGenerator * This,
               IMFAsyncCallback *pCallback,
               IUnknown *punkState);
                HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_BeginGetEvent_Stub(
    __RPC__in IMFMediaEventGenerator * This,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_EndGetEvent_Proxy(
    IMFMediaEventGenerator * This,
               IMFAsyncResult *pResult,
    _Out_ IMFMediaEvent **ppEvent);
                HRESULT STDMETHODCALLTYPE IMFMediaEventGenerator_EndGetEvent_Stub(
    __RPC__in IMFMediaEventGenerator * This,
               __RPC__in_opt IUnknown *pResult,
                __RPC__out DWORD *pcbEvent,
                                  __RPC__deref_out_ecount_full_opt(*pcbEvent) BYTE **ppbEvent);
              HRESULT STDMETHODCALLTYPE IMFByteStream_BeginRead_Proxy(
    IMFByteStream * This,
    _Out_writes_bytes_(cb) BYTE *pb,
               ULONG cb,
               IMFAsyncCallback *pCallback,
               IUnknown *punkState);
                HRESULT STDMETHODCALLTYPE IMFByteStream_BeginRead_Stub(
    __RPC__in IMFByteStream * This,
               ULONG cb,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFByteStream_EndRead_Proxy(
    IMFByteStream * This,
               IMFAsyncResult *pResult,
    _Out_ ULONG *pcbRead);
                HRESULT STDMETHODCALLTYPE IMFByteStream_EndRead_Stub(
    __RPC__in IMFByteStream * This,
               __RPC__in_opt IUnknown *punkResult,
                                        __RPC__inout_ecount_part(cb, *pcbRead) BYTE *pb,
               ULONG cb,
                    __RPC__inout ULONG *pcbRead);
              HRESULT STDMETHODCALLTYPE IMFByteStream_BeginWrite_Proxy(
    IMFByteStream * This,
    _In_reads_bytes_(cb) const BYTE *pb,
               ULONG cb,
               IMFAsyncCallback *pCallback,
               IUnknown *punkState);
                HRESULT STDMETHODCALLTYPE IMFByteStream_BeginWrite_Stub(
    __RPC__in IMFByteStream * This,
                        __RPC__in_ecount_full(cb) const BYTE *pb,
               ULONG cb,
               __RPC__in_opt IMFRemoteAsyncCallback *pCallback);
              HRESULT STDMETHODCALLTYPE IMFByteStream_EndWrite_Proxy(
    IMFByteStream * This,
               IMFAsyncResult *pResult,
    _Out_ ULONG *pcbWritten);
                HRESULT STDMETHODCALLTYPE IMFByteStream_EndWrite_Stub(
    __RPC__in IMFByteStream * This,
               __RPC__in_opt IUnknown *punkResult,
                __RPC__out ULONG *pcbWritten);
}
