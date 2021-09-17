#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMFASFContentInfo IMFASFContentInfo;
typedef interface IMFASFProfile IMFASFProfile;
typedef interface IMFASFStreamConfig IMFASFStreamConfig;
typedef interface IMFASFMutualExclusion IMFASFMutualExclusion;
typedef interface IMFASFStreamPrioritization IMFASFStreamPrioritization;
typedef interface IMFASFIndexer IMFASFIndexer;
typedef interface IMFASFSplitter IMFASFSplitter;
typedef interface IMFASFMultiplexer IMFASFMultiplexer;
typedef interface IMFASFStreamSelector IMFASFStreamSelector;
typedef interface IMFDRMNetHelper IMFDRMNetHelper;
#include "mfidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFASFContentInfo;
    typedef struct IMFASFContentInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFContentInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFContentInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFContentInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetHeaderSize )(
            IMFASFContentInfo * This,
                       IMFMediaBuffer *pIStartOfContent,
                        QWORD *cbHeaderSize);
        HRESULT ( STDMETHODCALLTYPE *ParseHeader )(
            IMFASFContentInfo * This,
                       IMFMediaBuffer *pIHeaderBuffer,
                       QWORD cbOffsetWithinHeader);
        HRESULT ( STDMETHODCALLTYPE *GenerateHeader )(
            IMFASFContentInfo * This,
                            IMFMediaBuffer *pIHeader,
                        DWORD *pcbHeader);
        HRESULT ( STDMETHODCALLTYPE *GetProfile )(
            IMFASFContentInfo * This,
                        IMFASFProfile **ppIProfile);
        HRESULT ( STDMETHODCALLTYPE *SetProfile )(
            IMFASFContentInfo * This,
                       IMFASFProfile *pIProfile);
        HRESULT ( STDMETHODCALLTYPE *GeneratePresentationDescriptor )(
            IMFASFContentInfo * This,
                        IMFPresentationDescriptor **ppIPresentationDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetEncodingConfigurationPropertyStore )(
            IMFASFContentInfo * This,
                       WORD wStreamNumber,
                        IPropertyStore **ppIStore);
        END_INTERFACE
    } IMFASFContentInfoVtbl;
    interface IMFASFContentInfo
    {
        CONST_VTBL struct IMFASFContentInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHeaderSize(This,pIStartOfContent,cbHeaderSize) )
    ( (This)->lpVtbl -> ParseHeader(This,pIHeaderBuffer,cbOffsetWithinHeader) )
    ( (This)->lpVtbl -> GenerateHeader(This,pIHeader,pcbHeader) )
    ( (This)->lpVtbl -> GetProfile(This,ppIProfile) )
    ( (This)->lpVtbl -> SetProfile(This,pIProfile) )
    ( (This)->lpVtbl -> GeneratePresentationDescriptor(This,ppIPresentationDescriptor) )
    ( (This)->lpVtbl -> GetEncodingConfigurationPropertyStore(This,wStreamNumber,ppIStore) )
STDAPI MFCreateASFContentInfo(
                      IMFASFContentInfo **ppIContentInfo);
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFASFProfile;
    typedef struct IMFASFProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFProfile * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFProfile * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFASFProfile * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFASFProfile * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFASFProfile * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFASFProfile * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFASFProfile * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFASFProfile * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFASFProfile * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFASFProfile * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFASFProfile * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFASFProfile * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFASFProfile * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFASFProfile * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFASFProfile * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFASFProfile * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFASFProfile * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFASFProfile * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFASFProfile * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFASFProfile * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFASFProfile * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFASFProfile * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFASFProfile * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFASFProfile * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFASFProfile * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFASFProfile * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFASFProfile * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFASFProfile * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFASFProfile * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFASFProfile * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFASFProfile * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFASFProfile * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMFASFProfile * This,
                        DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IMFASFProfile * This,
                       DWORD dwStreamIndex,
                        WORD *pwStreamNumber,
                        IMFASFStreamConfig **ppIStream);
        HRESULT ( STDMETHODCALLTYPE *GetStreamByNumber )(
            IMFASFProfile * This,
                       WORD wStreamNumber,
                        IMFASFStreamConfig **ppIStream);
        HRESULT ( STDMETHODCALLTYPE *SetStream )(
            IMFASFProfile * This,
                       IMFASFStreamConfig *pIStream);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IMFASFProfile * This,
                       WORD wStreamNumber);
        HRESULT ( STDMETHODCALLTYPE *CreateStream )(
            IMFASFProfile * This,
                       IMFMediaType *pIMediaType,
                        IMFASFStreamConfig **ppIStream);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusionCount )(
            IMFASFProfile * This,
                        DWORD *pcMutexs);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusion )(
            IMFASFProfile * This,
                       DWORD dwMutexIndex,
                        IMFASFMutualExclusion **ppIMutex);
        HRESULT ( STDMETHODCALLTYPE *AddMutualExclusion )(
            IMFASFProfile * This,
                       IMFASFMutualExclusion *pIMutex);
        HRESULT ( STDMETHODCALLTYPE *RemoveMutualExclusion )(
            IMFASFProfile * This,
                       DWORD dwMutexIndex);
        HRESULT ( STDMETHODCALLTYPE *CreateMutualExclusion )(
            IMFASFProfile * This,
                        IMFASFMutualExclusion **ppIMutex);
        HRESULT ( STDMETHODCALLTYPE *GetStreamPrioritization )(
            IMFASFProfile * This,
                        IMFASFStreamPrioritization **ppIStreamPrioritization);
        HRESULT ( STDMETHODCALLTYPE *AddStreamPrioritization )(
            IMFASFProfile * This,
                       IMFASFStreamPrioritization *pIStreamPrioritization);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamPrioritization )(
            IMFASFProfile * This);
        HRESULT ( STDMETHODCALLTYPE *CreateStreamPrioritization )(
            IMFASFProfile * This,
                        IMFASFStreamPrioritization **ppIStreamPrioritization);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IMFASFProfile * This,
                        IMFASFProfile **ppIProfile);
        END_INTERFACE
    } IMFASFProfileVtbl;
    interface IMFASFProfile
    {
        CONST_VTBL struct IMFASFProfileVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) )
    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,pwStreamNumber,ppIStream) )
    ( (This)->lpVtbl -> GetStreamByNumber(This,wStreamNumber,ppIStream) )
    ( (This)->lpVtbl -> SetStream(This,pIStream) )
    ( (This)->lpVtbl -> RemoveStream(This,wStreamNumber) )
    ( (This)->lpVtbl -> CreateStream(This,pIMediaType,ppIStream) )
    ( (This)->lpVtbl -> GetMutualExclusionCount(This,pcMutexs) )
    ( (This)->lpVtbl -> GetMutualExclusion(This,dwMutexIndex,ppIMutex) )
    ( (This)->lpVtbl -> AddMutualExclusion(This,pIMutex) )
    ( (This)->lpVtbl -> RemoveMutualExclusion(This,dwMutexIndex) )
    ( (This)->lpVtbl -> CreateMutualExclusion(This,ppIMutex) )
    ( (This)->lpVtbl -> GetStreamPrioritization(This,ppIStreamPrioritization) )
    ( (This)->lpVtbl -> AddStreamPrioritization(This,pIStreamPrioritization) )
    ( (This)->lpVtbl -> RemoveStreamPrioritization(This) )
    ( (This)->lpVtbl -> CreateStreamPrioritization(This,ppIStreamPrioritization) )
    ( (This)->lpVtbl -> Clone(This,ppIProfile) )
EXTERN_C const IID IID_IMFASFStreamConfig;
    typedef struct IMFASFStreamConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFStreamConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFStreamConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetItemType )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                        MF_ATTRIBUTE_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *CompareItem )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
            REFPROPVARIANT Value,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            IMFASFStreamConfig * This,
            IMFAttributes *pTheirs,
            MF_ATTRIBUTES_MATCH_TYPE MatchType,
                        BOOL *pbResult);
        HRESULT ( STDMETHODCALLTYPE *GetUINT32 )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                        UINT32 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetUINT64 )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                        UINT64 *punValue);
        HRESULT ( STDMETHODCALLTYPE *GetDouble )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                        double *pfValue);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                        GUID *pguidValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                                 LPWSTR pwszValue,
            UINT32 cchBufSize,
                                  UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedString )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                                          LPWSTR *ppwszValue,
                        UINT32 *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetBlobSize )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                        UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetBlob )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                                 UINT8 *pBuf,
            UINT32 cbBufSize,
                                  UINT32 *pcbBlobSize);
        HRESULT ( STDMETHODCALLTYPE *GetAllocatedBlob )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                                          UINT8 **ppBuf,
                        UINT32 *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetUnknown )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
            REFIID riid,
                                LPVOID *ppv);
        HRESULT ( STDMETHODCALLTYPE *SetItem )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
            REFPROPVARIANT Value);
        HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            IMFASFStreamConfig * This,
            REFGUID guidKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteAllItems )(
            IMFASFStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetUINT32 )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
            UINT32 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetUINT64 )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
            UINT64 unValue);
        HRESULT ( STDMETHODCALLTYPE *SetDouble )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
            double fValue);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
            REFGUID guidValue);
        HRESULT ( STDMETHODCALLTYPE *SetString )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                               LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SetBlob )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                                const UINT8 *pBuf,
            UINT32 cbBufSize);
        HRESULT ( STDMETHODCALLTYPE *SetUnknown )(
            IMFASFStreamConfig * This,
            REFGUID guidKey,
                       IUnknown *pUnknown);
        HRESULT ( STDMETHODCALLTYPE *LockStore )(
            IMFASFStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockStore )(
            IMFASFStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMFASFStreamConfig * This,
                        UINT32 *pcItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemByIndex )(
            IMFASFStreamConfig * This,
            UINT32 unIndex,
                        GUID *pguidKey,
                                  PROPVARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *CopyAllItems )(
            IMFASFStreamConfig * This,
                       IMFAttributes *pDest);
        HRESULT ( STDMETHODCALLTYPE *GetStreamType )(
            IMFASFStreamConfig * This,
                        GUID *pguidStreamType);
        WORD ( STDMETHODCALLTYPE *GetStreamNumber )(
            IMFASFStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *SetStreamNumber )(
            IMFASFStreamConfig * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IMFASFStreamConfig * This,
                        IMFMediaType **ppIMediaType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IMFASFStreamConfig * This,
                       IMFMediaType *pIMediaType);
        HRESULT ( STDMETHODCALLTYPE *GetPayloadExtensionCount )(
            IMFASFStreamConfig * This,
                        WORD *pcPayloadExtensions);
        HRESULT ( STDMETHODCALLTYPE *GetPayloadExtension )(
            IMFASFStreamConfig * This,
                       WORD wPayloadExtensionNumber,
                        GUID *pguidExtensionSystemID,
                        WORD *pcbExtensionDataSize,
                                           BYTE *pbExtensionSystemInfo,
                                      DWORD *pcbExtensionSystemInfo);
        HRESULT ( STDMETHODCALLTYPE *AddPayloadExtension )(
            IMFASFStreamConfig * This,
                       GUID guidExtensionSystemID,
                       WORD cbExtensionDataSize,
                                BYTE *pbExtensionSystemInfo,
                       DWORD cbExtensionSystemInfo);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllPayloadExtensions )(
            IMFASFStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IMFASFStreamConfig * This,
                        IMFASFStreamConfig **ppIStreamConfig);
        END_INTERFACE
    } IMFASFStreamConfigVtbl;
    interface IMFASFStreamConfig
    {
        CONST_VTBL struct IMFASFStreamConfigVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetStreamType(This,pguidStreamType) )
    ( (This)->lpVtbl -> GetStreamNumber(This) )
    ( (This)->lpVtbl -> SetStreamNumber(This,wStreamNum) )
    ( (This)->lpVtbl -> GetMediaType(This,ppIMediaType) )
    ( (This)->lpVtbl -> SetMediaType(This,pIMediaType) )
    ( (This)->lpVtbl -> GetPayloadExtensionCount(This,pcPayloadExtensions) )
    ( (This)->lpVtbl -> GetPayloadExtension(This,wPayloadExtensionNumber,pguidExtensionSystemID,pcbExtensionDataSize,pbExtensionSystemInfo,pcbExtensionSystemInfo) )
    ( (This)->lpVtbl -> AddPayloadExtension(This,guidExtensionSystemID,cbExtensionDataSize,pbExtensionSystemInfo,cbExtensionSystemInfo) )
    ( (This)->lpVtbl -> RemoveAllPayloadExtensions(This) )
    ( (This)->lpVtbl -> Clone(This,ppIStreamConfig) )
EXTERN_C const IID IID_IMFASFMutualExclusion;
    typedef struct IMFASFMutualExclusionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFMutualExclusion * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFMutualExclusion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFMutualExclusion * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IMFASFMutualExclusion * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *SetType )(
            IMFASFMutualExclusion * This,
                       REFGUID guidType);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCount )(
            IMFASFMutualExclusion * This,
                        DWORD *pdwRecordCount);
        HRESULT ( STDMETHODCALLTYPE *GetStreamsForRecord )(
            IMFASFMutualExclusion * This,
                       DWORD dwRecordNumber,
                        WORD *pwStreamNumArray,
                            DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *AddStreamForRecord )(
            IMFASFMutualExclusion * This,
                       DWORD dwRecordNumber,
                       WORD wStreamNumber);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamFromRecord )(
            IMFASFMutualExclusion * This,
                       DWORD dwRecordNumber,
                       WORD wStreamNumber);
        HRESULT ( STDMETHODCALLTYPE *RemoveRecord )(
            IMFASFMutualExclusion * This,
                       DWORD dwRecordNumber);
        HRESULT ( STDMETHODCALLTYPE *AddRecord )(
            IMFASFMutualExclusion * This,
                        DWORD *pdwRecordNumber);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IMFASFMutualExclusion * This,
                        IMFASFMutualExclusion **ppIMutex);
        END_INTERFACE
    } IMFASFMutualExclusionVtbl;
    interface IMFASFMutualExclusion
    {
        CONST_VTBL struct IMFASFMutualExclusionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> SetType(This,guidType) )
    ( (This)->lpVtbl -> GetRecordCount(This,pdwRecordCount) )
    ( (This)->lpVtbl -> GetStreamsForRecord(This,dwRecordNumber,pwStreamNumArray,pcStreams) )
    ( (This)->lpVtbl -> AddStreamForRecord(This,dwRecordNumber,wStreamNumber) )
    ( (This)->lpVtbl -> RemoveStreamFromRecord(This,dwRecordNumber,wStreamNumber) )
    ( (This)->lpVtbl -> RemoveRecord(This,dwRecordNumber) )
    ( (This)->lpVtbl -> AddRecord(This,pdwRecordNumber) )
    ( (This)->lpVtbl -> Clone(This,ppIMutex) )
EXTERN_C const IID IID_IMFASFStreamPrioritization;
    typedef struct IMFASFStreamPrioritizationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFStreamPrioritization * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFStreamPrioritization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFStreamPrioritization * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMFASFStreamPrioritization * This,
                        DWORD *pdwStreamCount);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IMFASFStreamPrioritization * This,
                       DWORD dwStreamIndex,
                        WORD *pwStreamNumber,
                        WORD *pwStreamFlags);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IMFASFStreamPrioritization * This,
                       WORD wStreamNumber,
                       WORD wStreamFlags);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IMFASFStreamPrioritization * This,
                       DWORD dwStreamIndex);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IMFASFStreamPrioritization * This,
                        IMFASFStreamPrioritization **ppIStreamPrioritization);
        END_INTERFACE
    } IMFASFStreamPrioritizationVtbl;
    interface IMFASFStreamPrioritization
    {
        CONST_VTBL struct IMFASFStreamPrioritizationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamCount(This,pdwStreamCount) )
    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,pwStreamNumber,pwStreamFlags) )
    ( (This)->lpVtbl -> AddStream(This,wStreamNumber,wStreamFlags) )
    ( (This)->lpVtbl -> RemoveStream(This,dwStreamIndex) )
    ( (This)->lpVtbl -> Clone(This,ppIStreamPrioritization) )
typedef
enum MFASF_INDEXERFLAGS
    {
        MFASF_INDEXER_WRITE_NEW_INDEX = 0x1,
        MFASF_INDEXER_READ_FOR_REVERSEPLAYBACK = 0x2,
        MFASF_INDEXER_WRITE_FOR_LIVEREAD = 0x4
    } MFASF_INDEXER_FLAGS;
typedef struct _ASF_INDEX_IDENTIFIER
    {
    GUID guidIndexType;
    WORD wStreamNumber;
    } ASF_INDEX_IDENTIFIER;
typedef struct _ASF_INDEX_DESCRIPTOR
    {
    ASF_INDEX_IDENTIFIER Identifier;
    WORD cPerEntryBytes;
    WCHAR szDescription[ 32 ];
    DWORD dwInterval;
    } ASF_INDEX_DESCRIPTOR;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFASFIndexer;
    typedef struct IMFASFIndexerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFIndexer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFIndexer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFIndexer * This);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IMFASFIndexer * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IMFASFIndexer * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IMFASFIndexer * This,
                       IMFASFContentInfo *pIContentInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIndexPosition )(
            IMFASFIndexer * This,
                       IMFASFContentInfo *pIContentInfo,
                        QWORD *pcbIndexOffset);
        HRESULT ( STDMETHODCALLTYPE *SetIndexByteStreams )(
            IMFASFIndexer * This,
                       IMFByteStream **ppIByteStreams,
                       DWORD cByteStreams);
        HRESULT ( STDMETHODCALLTYPE *GetIndexByteStreamCount )(
            IMFASFIndexer * This,
                        DWORD *pcByteStreams);
        HRESULT ( STDMETHODCALLTYPE *GetIndexStatus )(
            IMFASFIndexer * This,
                       ASF_INDEX_IDENTIFIER *pIndexIdentifier,
                        BOOL *pfIsIndexed,
                        BYTE *pbIndexDescriptor,
                            DWORD *pcbIndexDescriptor);
        HRESULT ( STDMETHODCALLTYPE *SetIndexStatus )(
            IMFASFIndexer * This,
                       BYTE *pbIndexDescriptor,
                       DWORD cbIndexDescriptor,
                       BOOL fGenerateIndex);
        HRESULT ( STDMETHODCALLTYPE *GetSeekPositionForValue )(
            IMFASFIndexer * This,
                       const PROPVARIANT *pvarValue,
                       ASF_INDEX_IDENTIFIER *pIndexIdentifier,
                        QWORD *pcbOffsetWithinData,
                                  MFTIME *phnsApproxTime,
                                  DWORD *pdwPayloadNumberOfStreamWithinPacket);
        HRESULT ( STDMETHODCALLTYPE *GenerateIndexEntries )(
            IMFASFIndexer * This,
                       IMFSample *pIASFPacketSample);
        HRESULT ( STDMETHODCALLTYPE *CommitIndex )(
            IMFASFIndexer * This,
                       IMFASFContentInfo *pIContentInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIndexWriteSpace )(
            IMFASFIndexer * This,
                        QWORD *pcbIndexWriteSpace);
        HRESULT ( STDMETHODCALLTYPE *GetCompletedIndex )(
            IMFASFIndexer * This,
                       IMFMediaBuffer *pIIndexBuffer,
                       QWORD cbOffsetWithinIndex);
        END_INTERFACE
    } IMFASFIndexerVtbl;
    interface IMFASFIndexer
    {
        CONST_VTBL struct IMFASFIndexerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> Initialize(This,pIContentInfo) )
    ( (This)->lpVtbl -> GetIndexPosition(This,pIContentInfo,pcbIndexOffset) )
    ( (This)->lpVtbl -> SetIndexByteStreams(This,ppIByteStreams,cByteStreams) )
    ( (This)->lpVtbl -> GetIndexByteStreamCount(This,pcByteStreams) )
    ( (This)->lpVtbl -> GetIndexStatus(This,pIndexIdentifier,pfIsIndexed,pbIndexDescriptor,pcbIndexDescriptor) )
    ( (This)->lpVtbl -> SetIndexStatus(This,pbIndexDescriptor,cbIndexDescriptor,fGenerateIndex) )
    ( (This)->lpVtbl -> GetSeekPositionForValue(This,pvarValue,pIndexIdentifier,pcbOffsetWithinData,phnsApproxTime,pdwPayloadNumberOfStreamWithinPacket) )
    ( (This)->lpVtbl -> GenerateIndexEntries(This,pIASFPacketSample) )
    ( (This)->lpVtbl -> CommitIndex(This,pIContentInfo) )
    ( (This)->lpVtbl -> GetIndexWriteSpace(This,pcbIndexWriteSpace) )
    ( (This)->lpVtbl -> GetCompletedIndex(This,pIIndexBuffer,cbOffsetWithinIndex) )
STDAPI MFCreateASFIndexer(
                      IMFASFIndexer **ppIIndexer);
STDAPI MFCreateASFIndexerByteStream(
                      IMFByteStream *pIContentByteStream,
                      QWORD cbIndexStartOffset,
                      IMFByteStream **pIIndexByteStream);
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFASFSplitter;
    typedef struct IMFASFSplitterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFSplitter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFSplitter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFSplitter * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IMFASFSplitter * This,
                       IMFASFContentInfo *pIContentInfo);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IMFASFSplitter * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IMFASFSplitter * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SelectStreams )(
            IMFASFSplitter * This,
                       WORD *pwStreamNumbers,
                       WORD wNumStreams);
        HRESULT ( STDMETHODCALLTYPE *GetSelectedStreams )(
            IMFASFSplitter * This,
                        WORD *pwStreamNumbers,
                            WORD *pwNumStreams);
        HRESULT ( STDMETHODCALLTYPE *ParseData )(
            IMFASFSplitter * This,
                       IMFMediaBuffer *pIBuffer,
                       DWORD cbBufferOffset,
                       DWORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetNextSample )(
            IMFASFSplitter * This,
                        DWORD *pdwStatusFlags,
                        WORD *pwStreamNumber,
                        IMFSample **ppISample);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMFASFSplitter * This);
        HRESULT ( STDMETHODCALLTYPE *GetLastSendTime )(
            IMFASFSplitter * This,
                        DWORD *pdwLastSendTime);
        END_INTERFACE
    } IMFASFSplitterVtbl;
    interface IMFASFSplitter
    {
        CONST_VTBL struct IMFASFSplitterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIContentInfo) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> SelectStreams(This,pwStreamNumbers,wNumStreams) )
    ( (This)->lpVtbl -> GetSelectedStreams(This,pwStreamNumbers,pwNumStreams) )
    ( (This)->lpVtbl -> ParseData(This,pIBuffer,cbBufferOffset,cbLength) )
    ( (This)->lpVtbl -> GetNextSample(This,pdwStatusFlags,pwStreamNumber,ppISample) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> GetLastSendTime(This,pdwLastSendTime) )
STDAPI MFCreateASFSplitter(
                      IMFASFSplitter **ppISplitter);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_FILE_ID, 0x3de649b4, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_CREATION_TIME, 0x3de649b6, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_PACKETS, 0x3de649b7, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_PLAY_DURATION, 0x3de649b8, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_SEND_DURATION, 0x3de649b9, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_PREROLL, 0x3de649ba, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_FLAGS, 0x3de649bb, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_MIN_PACKET_SIZE, 0x3de649bc, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_MAX_PACKET_SIZE, 0x3de649bd, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID(MF_PD_ASF_FILEPROPERTIES_MAX_BITRATE, 0x3de649be, 0xd76d, 0x4e66, 0x9e, 0xc9, 0x78, 0x12, 0xf, 0xb4, 0xc7, 0xe3);
EXTERN_GUID( CLSID_WMDRMSystemID, 0x8948BB22, 0x11BD, 0x4796, 0x93, 0xE3, 0x97, 0x4D, 0x1B, 0x57, 0x56, 0x78 );
EXTERN_GUID(MF_PD_ASF_CONTENTENCRYPTION_TYPE, 0x8520fe3d, 0x277e, 0x46ea, 0x99, 0xe4, 0xe3, 0xa, 0x86, 0xdb, 0x12, 0xbe);
EXTERN_GUID(MF_PD_ASF_CONTENTENCRYPTION_KEYID, 0x8520fe3e, 0x277e, 0x46ea, 0x99, 0xe4, 0xe3, 0xa, 0x86, 0xdb, 0x12, 0xbe);
EXTERN_GUID(MF_PD_ASF_CONTENTENCRYPTION_SECRET_DATA, 0x8520fe3f, 0x277e, 0x46ea, 0x99, 0xe4, 0xe3, 0xa, 0x86, 0xdb, 0x12, 0xbe);
EXTERN_GUID(MF_PD_ASF_CONTENTENCRYPTION_LICENSE_URL, 0x8520fe40, 0x277e, 0x46ea, 0x99, 0xe4, 0xe3, 0xa, 0x86, 0xdb, 0x12, 0xbe);
EXTERN_GUID( MF_PD_ASF_CONTENTENCRYPTIONEX_ENCRYPTION_DATA, 0x62508be5, 0xecdf, 0x4924, 0xa3, 0x59, 0x72, 0xba, 0xb3, 0x39, 0x7b, 0x9d);
EXTERN_GUID( MF_PD_ASF_LANGLIST, 0xf23de43c, 0x9977, 0x460d, 0xa6, 0xec, 0x32, 0x93, 0x7f, 0x16, 0xf, 0x7d);
EXTERN_GUID( MF_PD_ASF_LANGLIST_LEGACYORDER, 0xf23de43d, 0x9977, 0x460d, 0xa6, 0xec, 0x32, 0x93, 0x7f, 0x16, 0xf, 0x7d);
EXTERN_GUID(MF_PD_ASF_MARKER, 0x5134330e, 0x83a6, 0x475e, 0xa9, 0xd5, 0x4f, 0xb8, 0x75, 0xfb, 0x2e, 0x31);
EXTERN_GUID( MF_PD_ASF_SCRIPT, 0xe29cd0d7, 0xd602, 0x4923, 0xa7, 0xfe, 0x73, 0xfd, 0x97, 0xec, 0xc6, 0x50);
EXTERN_GUID(MF_PD_ASF_CODECLIST, 0xe4bb3509, 0xc18d, 0x4df1, 0xbb, 0x99, 0x7a, 0x36, 0xb3, 0xcc, 0x41, 0x19);
EXTERN_GUID( MF_PD_ASF_METADATA_IS_VBR, 0x5fc6947a, 0xef60, 0x445d, 0xb4, 0x49, 0x44, 0x2e, 0xcc, 0x78, 0xb4, 0xc1);
EXTERN_GUID( MF_PD_ASF_METADATA_V8_VBRPEAK, 0x5fc6947b, 0xef60, 0x445d, 0xb4, 0x49, 0x44, 0x2e, 0xcc, 0x78, 0xb4, 0xc1);
EXTERN_GUID( MF_PD_ASF_METADATA_V8_BUFFERAVERAGE, 0x5fc6947c, 0xef60, 0x445d, 0xb4, 0x49, 0x44, 0x2e, 0xcc, 0x78, 0xb4, 0xc1);
EXTERN_GUID( MF_PD_ASF_METADATA_LEAKY_BUCKET_PAIRS, 0x5fc6947d, 0xef60, 0x445d, 0xb4, 0x49, 0x44, 0x2e, 0xcc, 0x78, 0xb4, 0xc1);
EXTERN_GUID(MF_PD_ASF_DATA_START_OFFSET, 0xe7d5b3e7, 0x1f29, 0x45d3, 0x88, 0x22, 0x3e, 0x78, 0xfa, 0xe2, 0x72, 0xed);
EXTERN_GUID(MF_PD_ASF_DATA_LENGTH, 0xe7d5b3e8, 0x1f29, 0x45d3, 0x88, 0x22, 0x3e, 0x78, 0xfa, 0xe2, 0x72, 0xed);
EXTERN_GUID(MF_SD_ASF_EXTSTRMPROP_LANGUAGE_ID_INDEX, 0x48f8a522, 0x305d, 0x422d, 0x85, 0x24, 0x25, 0x2, 0xdd, 0xa3, 0x36, 0x80);
EXTERN_GUID(MF_SD_ASF_EXTSTRMPROP_AVG_DATA_BITRATE, 0x48f8a523, 0x305d, 0x422d, 0x85, 0x24, 0x25, 0x2, 0xdd, 0xa3, 0x36, 0x80);
EXTERN_GUID(MF_SD_ASF_EXTSTRMPROP_AVG_BUFFERSIZE, 0x48f8a524, 0x305d, 0x422d, 0x85, 0x24, 0x25, 0x2, 0xdd, 0xa3, 0x36, 0x80);
EXTERN_GUID(MF_SD_ASF_EXTSTRMPROP_MAX_DATA_BITRATE, 0x48f8a525, 0x305d, 0x422d, 0x85, 0x24, 0x25, 0x2, 0xdd, 0xa3, 0x36, 0x80);
EXTERN_GUID(MF_SD_ASF_EXTSTRMPROP_MAX_BUFFERSIZE, 0x48f8a526, 0x305d, 0x422d, 0x85, 0x24, 0x25, 0x2, 0xdd, 0xa3, 0x36, 0x80);
EXTERN_GUID(MF_SD_ASF_STREAMBITRATES_BITRATE, 0xa8e182ed, 0xafc8, 0x43d0, 0xb0, 0xd1, 0xf6, 0x5b, 0xad, 0x9d, 0xa5, 0x58);
EXTERN_GUID(MF_SD_ASF_METADATA_DEVICE_CONFORMANCE_TEMPLATE, 0x245e929d, 0xc44e, 0x4f7e, 0xbb, 0x3c, 0x77, 0xd4, 0xdf, 0xd2, 0x7f, 0x8a);
EXTERN_GUID(MF_PD_ASF_INFO_HAS_AUDIO, 0x80e62295, 0x2296, 0x4a44, 0xb3, 0x1c, 0xd1, 0x3, 0xc6, 0xfe, 0xd2, 0x3c);
EXTERN_GUID(MF_PD_ASF_INFO_HAS_VIDEO, 0x80e62296, 0x2296, 0x4a44, 0xb3, 0x1c, 0xd1, 0x3, 0xc6, 0xfe, 0xd2, 0x3c);
EXTERN_GUID(MF_PD_ASF_INFO_HAS_NON_AUDIO_VIDEO, 0x80e62297, 0x2296, 0x4a44, 0xb3, 0x1c, 0xd1, 0x3, 0xc6, 0xfe, 0xd2, 0x3c);
EXTERN_GUID(MF_ASFPROFILE_MINPACKETSIZE, 0x22587626, 0x47de, 0x4168, 0x87, 0xf5, 0xb5, 0xaa, 0x9b, 0x12, 0xa8, 0xf0);
EXTERN_GUID(MF_ASFPROFILE_MAXPACKETSIZE, 0x22587627, 0x47de, 0x4168, 0x87, 0xf5, 0xb5, 0xaa, 0x9b, 0x12, 0xa8, 0xf0);
STDAPI MFCreateASFProfile(
                      IMFASFProfile **ppIProfile);
STDAPI MFCreateASFProfileFromPresentationDescriptor(
                      IMFPresentationDescriptor *pIPD,
                      IMFASFProfile **ppIProfile);
STDAPI MFCreatePresentationDescriptorFromASFProfile(
                      IMFASFProfile *pIProfile,
                      IMFPresentationDescriptor **ppIPD);
EXTERN_GUID(MF_ASFSTREAMCONFIG_LEAKYBUCKET1, 0xc69b5901, 0xea1a, 0x4c9b, 0xb6, 0x92, 0xe2, 0xa0, 0xd2, 0x9a, 0x8a, 0xdd);
EXTERN_GUID(MF_ASFSTREAMCONFIG_LEAKYBUCKET2, 0xc69b5902, 0xea1a, 0x4c9b, 0xb6, 0x92, 0xe2, 0xa0, 0xd2, 0x9a, 0x8a, 0xdd);
EXTERN_GUID(MFASFSampleExtension_SampleDuration, 0xc6bd9450, 0x867f, 0x4907, 0x83, 0xa3, 0xc7, 0x79, 0x21, 0xb7, 0x33, 0xad);
EXTERN_GUID(MFASFSampleExtension_OutputCleanPoint, 0xf72a3c6f, 0x6eb4, 0x4ebc, 0xb1, 0x92, 0x9, 0xad, 0x97, 0x59, 0xe8, 0x28);
EXTERN_GUID(MFASFSampleExtension_SMPTE, 0x399595ec, 0x8667, 0x4e2d, 0x8f, 0xdb, 0x98, 0x81, 0x4c, 0xe7, 0x6c, 0x1e);
EXTERN_GUID(MFASFSampleExtension_FileName, 0xe165ec0e, 0x19ed, 0x45d7, 0xb4, 0xa7, 0x25, 0xcb, 0xd1, 0xe2, 0x8e, 0x9b);
EXTERN_GUID(MFASFSampleExtension_ContentType, 0xd590dc20, 0x07bc, 0x436c, 0x9c, 0xf7, 0xf3, 0xbb, 0xfb, 0xf1, 0xa4, 0xdc);
EXTERN_GUID(MFASFSampleExtension_PixelAspectRatio, 0x1b1ee554, 0xf9ea, 0x4bc8, 0x82, 0x1a, 0x37, 0x6b, 0x74, 0xe4, 0xc4, 0xb8);
EXTERN_GUID(MFASFSampleExtension_Encryption_SampleID, 0x6698B84E, 0x0AFA, 0x4330, 0xAE, 0xB2, 0x1C, 0x0A, 0x98, 0xD7, 0xA4, 0x4D);
EXTERN_GUID(MFASFSampleExtension_Encryption_KeyID, 0x76376591, 0x795f, 0x4da1, 0x86, 0xed, 0x9d, 0x46, 0xec, 0xa1, 0x09, 0xa9);
EXTERN_GUID(MFASFMutexType_Language, 0x72178C2B, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
EXTERN_GUID(MFASFMutexType_Bitrate, 0x72178C2C, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
EXTERN_GUID(MFASFMutexType_Presentation, 0x72178C2D, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
EXTERN_GUID(MFASFMutexType_Unknown, 0x72178C2E, 0xE45B, 0x11D5, 0xBC, 0x2A, 0x00, 0xB0, 0xD0, 0xF3, 0xF4, 0xAB);
typedef
enum MFASF_SPLITTERFLAGS
    {
        MFASF_SPLITTER_REVERSE = 0x1,
        MFASF_SPLITTER_WMDRM = 0x2
    } MFASF_SPLITTERFLAGS;
typedef
enum ASF_STATUSFLAGS
    {
        ASF_STATUSFLAGS_INCOMPLETE = 0x1,
        ASF_STATUSFLAGS_NONFATAL_ERROR = 0x2
    } ASF_STATUSFLAGS;
EXTERN_GUID(MFASFSPLITTER_PACKET_BOUNDARY, 0xfe584a05, 0xe8d6, 0x42e3, 0xb1, 0x76, 0xf1, 0x21, 0x17, 0x5, 0xfb, 0x6f);
typedef
enum MFASF_MULTIPLEXERFLAGS
    {
        MFASF_MULTIPLEXER_AUTOADJUST_BITRATE = 0x1
    } MFASF_MULTIPLEXERFLAGS;
typedef struct ASF_MUX_STATISTICS
    {
    DWORD cFramesWritten;
    DWORD cFramesDropped;
    } ASF_MUX_STATISTICS;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFASFMultiplexer;
    typedef struct IMFASFMultiplexerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFMultiplexer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFMultiplexer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFMultiplexer * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IMFASFMultiplexer * This,
                       IMFASFContentInfo *pIContentInfo);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IMFASFMultiplexer * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IMFASFMultiplexer * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *ProcessSample )(
            IMFASFMultiplexer * This,
                       WORD wStreamNumber,
                       IMFSample *pISample,
                       LONGLONG hnsTimestampAdjust);
        HRESULT ( STDMETHODCALLTYPE *GetNextPacket )(
            IMFASFMultiplexer * This,
                        DWORD *pdwStatusFlags,
                        IMFSample **ppIPacket);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IMFASFMultiplexer * This);
        HRESULT ( STDMETHODCALLTYPE *End )(
            IMFASFMultiplexer * This,
                            IMFASFContentInfo *pIContentInfo);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IMFASFMultiplexer * This,
                       WORD wStreamNumber,
                        ASF_MUX_STATISTICS *pMuxStats);
        HRESULT ( STDMETHODCALLTYPE *SetSyncTolerance )(
            IMFASFMultiplexer * This,
                       DWORD msSyncTolerance);
        END_INTERFACE
    } IMFASFMultiplexerVtbl;
    interface IMFASFMultiplexer
    {
        CONST_VTBL struct IMFASFMultiplexerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pIContentInfo) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> ProcessSample(This,wStreamNumber,pISample,hnsTimestampAdjust) )
    ( (This)->lpVtbl -> GetNextPacket(This,pdwStatusFlags,ppIPacket) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> End(This,pIContentInfo) )
    ( (This)->lpVtbl -> GetStatistics(This,wStreamNumber,pMuxStats) )
    ( (This)->lpVtbl -> SetSyncTolerance(This,msSyncTolerance) )
STDAPI MFCreateASFMultiplexer(
                      IMFASFMultiplexer **ppIMultiplexer);
EXTERN_GUID( MFASFINDEXER_TYPE_TIMECODE, 0x49815231, 0x6bad, 0x44fd, 0x81, 0xa, 0x3f, 0x60, 0x98, 0x4e, 0xc7, 0xfd );
typedef
enum MFASF_STREAMSELECTORFLAGS
    {
        MFASF_STREAMSELECTOR_DISABLE_THINNING = 0x1,
        MFASF_STREAMSELECTOR_USE_AVERAGE_BITRATE = 0x2
    } MFASF_STREAMSELECTOR_FLAGS;
typedef
enum ASF_SELECTION_STATUS
    {
        ASF_STATUS_NOTSELECTED = 0,
        ASF_STATUS_CLEANPOINTSONLY = 1,
        ASF_STATUS_ALLDATAUNITS = 2
    } ASF_SELECTION_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFASFStreamSelector;
    typedef struct IMFASFStreamSelectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMFASFStreamSelector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMFASFStreamSelector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMFASFStreamSelector * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IMFASFStreamSelector * This,
                        DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCount )(
            IMFASFStreamSelector * This,
                        DWORD *pcOutputs);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamCount )(
            IMFASFStreamSelector * This,
                       DWORD dwOutputNum,
                        DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStreamNumbers )(
            IMFASFStreamSelector * This,
                       DWORD dwOutputNum,
                        WORD *rgwStreamNumbers);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFromStream )(
            IMFASFStreamSelector * This,
                       WORD wStreamNum,
                        DWORD *pdwOutput);
        HRESULT ( STDMETHODCALLTYPE *GetOutputOverride )(
            IMFASFStreamSelector * This,
                       DWORD dwOutputNum,
                        ASF_SELECTION_STATUS *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetOutputOverride )(
            IMFASFStreamSelector * This,
                       DWORD dwOutputNum,
                       ASF_SELECTION_STATUS Selection);
        HRESULT ( STDMETHODCALLTYPE *GetOutputMutexCount )(
            IMFASFStreamSelector * This,
                       DWORD dwOutputNum,
                        DWORD *pcMutexes);
        HRESULT ( STDMETHODCALLTYPE *GetOutputMutex )(
            IMFASFStreamSelector * This,
                       DWORD dwOutputNum,
                       DWORD dwMutexNum,
                        IUnknown **ppMutex);
        HRESULT ( STDMETHODCALLTYPE *SetOutputMutexSelection )(
            IMFASFStreamSelector * This,
                       DWORD dwOutputNum,
                       DWORD dwMutexNum,
                       WORD wSelectedRecord);
        HRESULT ( STDMETHODCALLTYPE *GetBandwidthStepCount )(
            IMFASFStreamSelector * This,
                        DWORD *pcStepCount);
        HRESULT ( STDMETHODCALLTYPE *GetBandwidthStep )(
            IMFASFStreamSelector * This,
                       DWORD dwStepNum,
                        DWORD *pdwBitrate,
                        WORD *rgwStreamNumbers,
                        ASF_SELECTION_STATUS *rgSelections);
        HRESULT ( STDMETHODCALLTYPE *BitrateToStepNumber )(
            IMFASFStreamSelector * This,
                       DWORD dwBitrate,
                        DWORD *pdwStepNum);
        HRESULT ( STDMETHODCALLTYPE *SetStreamSelectorFlags )(
            IMFASFStreamSelector * This,
                       DWORD dwStreamSelectorFlags);
        END_INTERFACE
    } IMFASFStreamSelectorVtbl;
    interface IMFASFStreamSelector
    {
        CONST_VTBL struct IMFASFStreamSelectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) )
    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) )
    ( (This)->lpVtbl -> GetOutputStreamCount(This,dwOutputNum,pcStreams) )
    ( (This)->lpVtbl -> GetOutputStreamNumbers(This,dwOutputNum,rgwStreamNumbers) )
    ( (This)->lpVtbl -> GetOutputFromStream(This,wStreamNum,pdwOutput) )
    ( (This)->lpVtbl -> GetOutputOverride(This,dwOutputNum,pSelection) )
    ( (This)->lpVtbl -> SetOutputOverride(This,dwOutputNum,Selection) )
    ( (This)->lpVtbl -> GetOutputMutexCount(This,dwOutputNum,pcMutexes) )
    ( (This)->lpVtbl -> GetOutputMutex(This,dwOutputNum,dwMutexNum,ppMutex) )
    ( (This)->lpVtbl -> SetOutputMutexSelection(This,dwOutputNum,dwMutexNum,wSelectedRecord) )
    ( (This)->lpVtbl -> GetBandwidthStepCount(This,pcStepCount) )
    ( (This)->lpVtbl -> GetBandwidthStep(This,dwStepNum,pdwBitrate,rgwStreamNumbers,rgSelections) )
    ( (This)->lpVtbl -> BitrateToStepNumber(This,dwBitrate,pdwStepNum) )
    ( (This)->lpVtbl -> SetStreamSelectorFlags(This,dwStreamSelectorFlags) )
STDAPI MFCreateASFStreamSelector(
             IMFASFProfile *pIASFProfile,
              IMFASFStreamSelector **ppSelector );
STDAPI
MFCreateASFMediaSink(
    IMFByteStream *pIByteStream,
    IMFMediaSink** ppIMediaSink
    );
STDAPI MFCreateASFMediaSinkActivate(
    LPCWSTR pwszFileName,
    IMFASFContentInfo *pContentInfo,
    IMFActivate** ppIActivate
    );
HRESULT STDMETHODCALLTYPE
MFCreateWMVEncoderActivate(
    IMFMediaType * pMediaType,
    IPropertyStore * pEncodingConfigurationProperties,
    IMFActivate ** ppActivate
    );
HRESULT STDMETHODCALLTYPE
MFCreateWMAEncoderActivate(
    IMFMediaType * pMediaType,
    IPropertyStore * pEncodingConfigurationProperties,
    IMFActivate ** ppActivate
    );
STDAPI
MFCreateASFStreamingMediaSink(
    IMFByteStream *pIByteStream,
    IMFMediaSink** ppIMediaSink
    );
STDAPI MFCreateASFStreamingMediaSinkActivate(
    IMFActivate *pByteStreamActivate,
    IMFASFContentInfo *pContentInfo,
    IMFActivate** ppIActivate
    );
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMEDIASINK_BASE_SENDTIME = { { 0xcddcbc82, 0x3411, 0x4119, 0x91, 0x35, 0x84, 0x23, 0xc4, 0x1b, 0x39, 0x57}, 3 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMEDIASINK_AUTOADJUST_BITRATE = { { 0xcddcbc82, 0x3411, 0x4119, 0x91, 0x35, 0x84, 0x23, 0xc4, 0x1b, 0x39, 0x57}, 4 };
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFMEDIASINK_DRMACTION = { { 0xa1db6f6c, 0x1d0a, 0x4cb6, 0x82, 0x54, 0xcb, 0x36, 0xbe, 0xed, 0xbc, 0x48}, 5 };
typedef
enum _MFSINK_WMDRMACTION
    {
        MFSINK_WMDRMACTION_UNDEFINED = 0,
        MFSINK_WMDRMACTION_ENCODE = 1,
        MFSINK_WMDRMACTION_TRANSCODE = 2,
        MFSINK_WMDRMACTION_TRANSCRYPT = 3,
        MFSINK_WMDRMACTION_LAST = 3
    } MFSINK_WMDRMACTION;
EXTERN_C const DECLSPEC_SELECTANY PROPERTYKEY MFPKEY_ASFSTREAMSINK_CORRECTED_LEAKYBUCKET = { { 0xa2f152fb, 0x8ad9, 0x4a11, 0xb3, 0x45, 0x2c, 0xe2, 0xfa, 0xd8, 0x72, 0x3d}, 1 };
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IMFDRMNetHelper;
    typedef struct IMFDRMNetHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMFDRMNetHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMFDRMNetHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMFDRMNetHelper * This);
        HRESULT ( STDMETHODCALLTYPE *ProcessLicenseRequest )(
            __RPC__in IMFDRMNetHelper * This,
                                __RPC__in_ecount_full(cbLicenseRequest) BYTE *pLicenseRequest,
                       DWORD cbLicenseRequest,
                                          __RPC__deref_out_ecount_full_opt(*pcbLicenseResponse) BYTE **ppLicenseResponse,
                        __RPC__out DWORD *pcbLicenseResponse,
                        __RPC__deref_out_opt BSTR *pbstrKID);
        HRESULT ( STDMETHODCALLTYPE *GetChainedLicenseResponse )(
            __RPC__in IMFDRMNetHelper * This,
                                          __RPC__deref_out_ecount_full_opt(*pcbLicenseResponse) BYTE **ppLicenseResponse,
                        __RPC__out DWORD *pcbLicenseResponse);
        END_INTERFACE
    } IMFDRMNetHelperVtbl;
    interface IMFDRMNetHelper
    {
        CONST_VTBL struct IMFDRMNetHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProcessLicenseRequest(This,pLicenseRequest,cbLicenseRequest,ppLicenseResponse,pcbLicenseResponse,pbstrKID) )
    ( (This)->lpVtbl -> GetChainedLicenseResponse(This,ppLicenseResponse,pcbLicenseResponse) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcontainer_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
