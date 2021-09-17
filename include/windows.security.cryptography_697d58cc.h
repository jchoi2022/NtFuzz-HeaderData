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
typedef interface __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding;
enum __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding
{
    BinaryStringEncoding_Utf8 = 0,
    BinaryStringEncoding_Utf16LE = 1,
    BinaryStringEncoding_Utf16BE = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Cryptography_ICryptographicBufferStatics[] = L"Windows.Security.Cryptography.ICryptographicBufferStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Compare )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * object1,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * object2,
                           __RPC__out boolean * isEqual
        );
    HRESULT ( STDMETHODCALLTYPE *GenerateRandom )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  UINT32 length,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *GenerateRandomNumber )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromByteArray )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  UINT32 __valueSize,
                                        __RPC__in_ecount_full(__valueSize) BYTE * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *CopyToByteArray )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                   __RPC__out UINT32 * __valueSize,
                                              __RPC__deref_out_ecount_full_opt(*(__valueSize)) BYTE * * value
        );
    HRESULT ( STDMETHODCALLTYPE *DecodeFromHexString )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *EncodeToHexString )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *DecodeFromBase64String )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __RPC__in HSTRING value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *EncodeToBase64String )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertStringToBinary )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __RPC__in HSTRING value,
                  __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding encoding,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * buffer
        );
    HRESULT ( STDMETHODCALLTYPE *ConvertBinaryToString )(
        __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics * This,
                  __x_ABI_CWindows_CSecurity_CCryptography_CBinaryStringEncoding encoding,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * buffer,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Compare(This,object1,object2,isEqual) )
    ( (This)->lpVtbl->GenerateRandom(This,length,buffer) )
    ( (This)->lpVtbl->GenerateRandomNumber(This,value) )
    ( (This)->lpVtbl->CreateFromByteArray(This,__valueSize,value,buffer) )
    ( (This)->lpVtbl->CopyToByteArray(This,buffer,__valueSize,value) )
    ( (This)->lpVtbl->DecodeFromHexString(This,value,buffer) )
    ( (This)->lpVtbl->EncodeToHexString(This,buffer,value) )
    ( (This)->lpVtbl->DecodeFromBase64String(This,value,buffer) )
    ( (This)->lpVtbl->EncodeToBase64String(This,buffer,value) )
    ( (This)->lpVtbl->ConvertStringToBinary(This,value,encoding,buffer) )
    ( (This)->lpVtbl->ConvertBinaryToString(This,encoding,buffer,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCryptography_CICryptographicBufferStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Cryptography_CryptographicBuffer[] = L"Windows.Security.Cryptography.CryptographicBuffer";
       
       
#pragma clang diagnostic pop
