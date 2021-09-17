#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface INSSBuffer INSSBuffer;
typedef interface INSSBuffer2 INSSBuffer2;
typedef interface INSSBuffer3 INSSBuffer3;
typedef interface INSSBuffer4 INSSBuffer4;
typedef interface IWMSBufferAllocator IWMSBufferAllocator;
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( IID_INSSBuffer, 0xE1CD3524,0x03D7,0x11d2,0x9E,0xED,0x00,0x60,0x97,0xD2,0xD7,0xCF );
EXTERN_GUID( IID_IWMSBuffer, 0xE1CD3524,0x03D7,0x11d2,0x9E,0xED,0x00,0x60,0x97,0xD2,0xD7,0xCF );
EXTERN_GUID( IID_INSSBuffer2,0x4f528693,0x1035,0x43fe,0xb4,0x28,0x75,0x75,0x61,0xad,0x3a,0x68 );
EXTERN_GUID( IID_INSSBuffer3,0xc87ceaaf,0x75be,0x4bc4,0x84,0xeb,0xac,0x27,0x98,0x50,0x76,0x72 );
EXTERN_GUID( IID_INSSBuffer4,0xb6b8fd5a,0x32e2,0x49d4,0xa9,0x10,0xc2,0x6c,0xc8,0x54,0x65,0xed );
EXTERN_GUID( IID_IWMSBufferAllocator, 0x61103CA4,0x2033,0x11d2,0x9E,0xF1,0x00,0x60,0x97,0xD2,0xD7,0xCF );
extern RPC_IF_HANDLE __MIDL_itf_wmsbuffer_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsbuffer_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_INSSBuffer;
    typedef struct INSSBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INSSBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INSSBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INSSBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            INSSBuffer * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *SetLength )(
            INSSBuffer * This,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            INSSBuffer * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            INSSBuffer * This,
                        BYTE **ppdwBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetBufferAndLength )(
            INSSBuffer * This,
                        BYTE **ppdwBuffer,
                        DWORD *pdwLength);
        END_INTERFACE
    } INSSBufferVtbl;
    interface INSSBuffer
    {
        CONST_VTBL struct INSSBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This,pdwLength) )
    ( (This)->lpVtbl -> SetLength(This,dwLength) )
    ( (This)->lpVtbl -> GetMaxLength(This,pdwLength) )
    ( (This)->lpVtbl -> GetBuffer(This,ppdwBuffer) )
    ( (This)->lpVtbl -> GetBufferAndLength(This,ppdwBuffer,pdwLength) )
EXTERN_C const IID IID_INSSBuffer2;
    typedef struct INSSBuffer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INSSBuffer2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INSSBuffer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INSSBuffer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            INSSBuffer2 * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *SetLength )(
            INSSBuffer2 * This,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            INSSBuffer2 * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            INSSBuffer2 * This,
                        BYTE **ppdwBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetBufferAndLength )(
            INSSBuffer2 * This,
                        BYTE **ppdwBuffer,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSampleProperties )(
            INSSBuffer2 * This,
                       DWORD cbProperties,
                        BYTE *pbProperties);
        HRESULT ( STDMETHODCALLTYPE *SetSampleProperties )(
            INSSBuffer2 * This,
                       DWORD cbProperties,
                       BYTE *pbProperties);
        END_INTERFACE
    } INSSBuffer2Vtbl;
    interface INSSBuffer2
    {
        CONST_VTBL struct INSSBuffer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This,pdwLength) )
    ( (This)->lpVtbl -> SetLength(This,dwLength) )
    ( (This)->lpVtbl -> GetMaxLength(This,pdwLength) )
    ( (This)->lpVtbl -> GetBuffer(This,ppdwBuffer) )
    ( (This)->lpVtbl -> GetBufferAndLength(This,ppdwBuffer,pdwLength) )
    ( (This)->lpVtbl -> GetSampleProperties(This,cbProperties,pbProperties) )
    ( (This)->lpVtbl -> SetSampleProperties(This,cbProperties,pbProperties) )
EXTERN_C const IID IID_INSSBuffer3;
    typedef struct INSSBuffer3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INSSBuffer3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INSSBuffer3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INSSBuffer3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            INSSBuffer3 * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *SetLength )(
            INSSBuffer3 * This,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            INSSBuffer3 * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            INSSBuffer3 * This,
                        BYTE **ppdwBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetBufferAndLength )(
            INSSBuffer3 * This,
                        BYTE **ppdwBuffer,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSampleProperties )(
            INSSBuffer3 * This,
                       DWORD cbProperties,
                        BYTE *pbProperties);
        HRESULT ( STDMETHODCALLTYPE *SetSampleProperties )(
            INSSBuffer3 * This,
                       DWORD cbProperties,
                       BYTE *pbProperties);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            INSSBuffer3 * This,
                       GUID guidBufferProperty,
                       void *pvBufferProperty,
                       DWORD dwBufferPropertySize);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            INSSBuffer3 * This,
                       GUID guidBufferProperty,
                        void *pvBufferProperty,
                            DWORD *pdwBufferPropertySize);
        END_INTERFACE
    } INSSBuffer3Vtbl;
    interface INSSBuffer3
    {
        CONST_VTBL struct INSSBuffer3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This,pdwLength) )
    ( (This)->lpVtbl -> SetLength(This,dwLength) )
    ( (This)->lpVtbl -> GetMaxLength(This,pdwLength) )
    ( (This)->lpVtbl -> GetBuffer(This,ppdwBuffer) )
    ( (This)->lpVtbl -> GetBufferAndLength(This,ppdwBuffer,pdwLength) )
    ( (This)->lpVtbl -> GetSampleProperties(This,cbProperties,pbProperties) )
    ( (This)->lpVtbl -> SetSampleProperties(This,cbProperties,pbProperties) )
    ( (This)->lpVtbl -> SetProperty(This,guidBufferProperty,pvBufferProperty,dwBufferPropertySize) )
    ( (This)->lpVtbl -> GetProperty(This,guidBufferProperty,pvBufferProperty,pdwBufferPropertySize) )
EXTERN_C const IID IID_INSSBuffer4;
    typedef struct INSSBuffer4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INSSBuffer4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INSSBuffer4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INSSBuffer4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            INSSBuffer4 * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *SetLength )(
            INSSBuffer4 * This,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            INSSBuffer4 * This,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            INSSBuffer4 * This,
                        BYTE **ppdwBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetBufferAndLength )(
            INSSBuffer4 * This,
                        BYTE **ppdwBuffer,
                        DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSampleProperties )(
            INSSBuffer4 * This,
                       DWORD cbProperties,
                        BYTE *pbProperties);
        HRESULT ( STDMETHODCALLTYPE *SetSampleProperties )(
            INSSBuffer4 * This,
                       DWORD cbProperties,
                       BYTE *pbProperties);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            INSSBuffer4 * This,
                       GUID guidBufferProperty,
                       void *pvBufferProperty,
                       DWORD dwBufferPropertySize);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            INSSBuffer4 * This,
                       GUID guidBufferProperty,
                        void *pvBufferProperty,
                            DWORD *pdwBufferPropertySize);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyCount )(
            INSSBuffer4 * This,
                        DWORD *pcBufferProperties);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyByIndex )(
            INSSBuffer4 * This,
                       DWORD dwBufferPropertyIndex,
                        GUID *pguidBufferProperty,
                        void *pvBufferProperty,
                            DWORD *pdwBufferPropertySize);
        END_INTERFACE
    } INSSBuffer4Vtbl;
    interface INSSBuffer4
    {
        CONST_VTBL struct INSSBuffer4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This,pdwLength) )
    ( (This)->lpVtbl -> SetLength(This,dwLength) )
    ( (This)->lpVtbl -> GetMaxLength(This,pdwLength) )
    ( (This)->lpVtbl -> GetBuffer(This,ppdwBuffer) )
    ( (This)->lpVtbl -> GetBufferAndLength(This,ppdwBuffer,pdwLength) )
    ( (This)->lpVtbl -> GetSampleProperties(This,cbProperties,pbProperties) )
    ( (This)->lpVtbl -> SetSampleProperties(This,cbProperties,pbProperties) )
    ( (This)->lpVtbl -> SetProperty(This,guidBufferProperty,pvBufferProperty,dwBufferPropertySize) )
    ( (This)->lpVtbl -> GetProperty(This,guidBufferProperty,pvBufferProperty,pdwBufferPropertySize) )
    ( (This)->lpVtbl -> GetPropertyCount(This,pcBufferProperties) )
    ( (This)->lpVtbl -> GetPropertyByIndex(This,dwBufferPropertyIndex,pguidBufferProperty,pvBufferProperty,pdwBufferPropertySize) )
EXTERN_C const IID IID_IWMSBufferAllocator;
    typedef struct IWMSBufferAllocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMSBufferAllocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMSBufferAllocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMSBufferAllocator * This);
        HRESULT ( STDMETHODCALLTYPE *AllocateBuffer )(
            IWMSBufferAllocator * This,
                       DWORD dwMaxBufferSize,
                        INSSBuffer **ppBuffer);
        HRESULT ( STDMETHODCALLTYPE *AllocatePageSizeBuffer )(
            IWMSBufferAllocator * This,
                       DWORD dwMaxBufferSize,
                        INSSBuffer **ppBuffer);
        END_INTERFACE
    } IWMSBufferAllocatorVtbl;
    interface IWMSBufferAllocator
    {
        CONST_VTBL struct IWMSBufferAllocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllocateBuffer(This,dwMaxBufferSize,ppBuffer) )
    ( (This)->lpVtbl -> AllocatePageSizeBuffer(This,dwMaxBufferSize,ppBuffer) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmsbuffer_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsbuffer_0000_0005_v0_0_s_ifspec;
}
