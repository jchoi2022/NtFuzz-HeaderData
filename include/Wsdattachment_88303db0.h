#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWSDAttachment IWSDAttachment;
typedef interface IWSDOutboundAttachment IWSDOutboundAttachment;
typedef interface IWSDInboundAttachment IWSDInboundAttachment;
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI
WSDCreateOutboundAttachment(
    _Outptr_ IWSDOutboundAttachment** ppAttachment);
extern RPC_IF_HANDLE __MIDL_itf_wsdattachment_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdattachment_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDAttachment;
    typedef struct IWSDAttachmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWSDAttachment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWSDAttachment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWSDAttachment * This);
        END_INTERFACE
    } IWSDAttachmentVtbl;
    interface IWSDAttachment
    {
        CONST_VTBL struct IWSDAttachmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_IWSDOutboundAttachment;
    typedef struct IWSDOutboundAttachmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDOutboundAttachment * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDOutboundAttachment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDOutboundAttachment * This);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            IWSDOutboundAttachment * This,
            _In_reads_(dwBytesToWrite) const BYTE *pBuffer,
                       DWORD dwBytesToWrite,
            _Out_ LPDWORD pdwNumberOfBytesWritten);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWSDOutboundAttachment * This);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            IWSDOutboundAttachment * This);
        END_INTERFACE
    } IWSDOutboundAttachmentVtbl;
    interface IWSDOutboundAttachment
    {
        CONST_VTBL struct IWSDOutboundAttachmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Write(This,pBuffer,dwBytesToWrite,pdwNumberOfBytesWritten) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Abort(This) )
EXTERN_C const IID IID_IWSDInboundAttachment;
    typedef struct IWSDInboundAttachmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDInboundAttachment * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDInboundAttachment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDInboundAttachment * This);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IWSDInboundAttachment * This,
            _Out_writes_to_(dwBytesToRead, *pdwNumberOfBytesRead) BYTE *pBuffer,
                       DWORD dwBytesToRead,
            _Out_ LPDWORD pdwNumberOfBytesRead);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWSDInboundAttachment * This);
        END_INTERFACE
    } IWSDInboundAttachmentVtbl;
    interface IWSDInboundAttachment
    {
        CONST_VTBL struct IWSDInboundAttachmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pBuffer,dwBytesToRead,pdwNumberOfBytesRead) )
    ( (This)->lpVtbl -> Close(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsdattachment_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdattachment_0000_0003_v0_0_s_ifspec;
}
