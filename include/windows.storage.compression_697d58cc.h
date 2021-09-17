#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CStorage_CCompression_CICompressor __x_ABI_CWindows_CStorage_CCompression_CICompressor;
typedef interface __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory;
typedef interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressor __x_ABI_CWindows_CStorage_CCompression_CIDecompressor;
typedef interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory;
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef enum __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm;
enum __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm
{
    CompressAlgorithm_InvalidAlgorithm = 0,
    CompressAlgorithm_NullAlgorithm = 1,
    CompressAlgorithm_Mszip = 2,
    CompressAlgorithm_Xpress = 3,
    CompressAlgorithm_XpressHuff = 4,
    CompressAlgorithm_Lzms = 5,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressor[] = L"Windows.Storage.Compression.ICompressor";
typedef struct __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FinishAsync )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *DetachStream )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * * stream
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl;
interface __x_ABI_CWindows_CStorage_CCompression_CICompressor
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CICompressorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FinishAsync(This,operation) )
    ( (This)->lpVtbl->DetachStream(This,stream) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_ICompressorFactory[] = L"Windows.Storage.Compression.ICompressorFactory";
typedef struct __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCompressor )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * underlyingStream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CICompressor * * createdCompressor
        );
    HRESULT ( STDMETHODCALLTYPE *CreateCompressorEx )(
        __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * underlyingStream,
                  __x_ABI_CWindows_CStorage_CCompression_CCompressAlgorithm algorithm,
                  UINT32 blockSize,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CICompressor * * createdCompressor
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl;
interface __x_ABI_CWindows_CStorage_CCompression_CICompressorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CICompressorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCompressor(This,underlyingStream,createdCompressor) )
    ( (This)->lpVtbl->CreateCompressorEx(This,underlyingStream,algorithm,blockSize,createdCompressor) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CICompressorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressor[] = L"Windows.Storage.Compression.IDecompressor";
typedef struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DetachStream )(
        __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * * stream
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl;
interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressor
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DetachStream(This,stream) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Storage_Compression_IDecompressorFactory[] = L"Windows.Storage.Compression.IDecompressorFactory";
typedef struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDecompressor )(
        __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * underlyingStream,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CCompression_CIDecompressor * * createdDecompressor
        );
    END_INTERFACE
} __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl;
interface __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateDecompressor(This,underlyingStream,createdDecompressor) )
EXTERN_C const IID IID___x_ABI_CWindows_CStorage_CCompression_CIDecompressorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Compressor[] = L"Windows.Storage.Compression.Compressor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Storage_Compression_Decompressor[] = L"Windows.Storage.Compression.Decompressor";
       
       
#pragma clang diagnostic pop
