#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDeviceRequestCompletionCallback IDeviceRequestCompletionCallback;
typedef interface IDeviceIoControl IDeviceIoControl;
typedef interface ICreateDeviceAccessAsync ICreateDeviceAccessAsync;
#include "wtypes.h"
#include "unknwn.h"
extern "C"{
STDAPI
CreateDeviceAccessInstance(
    _In_ PCWSTR deviceInterfacePath,
    _In_ DWORD desiredAccess,
    _COM_Outptr_ ICreateDeviceAccessAsync **createAsync
    );
EXTERN_GUID( CLSID_DeviceIoControl, 0x12d3e372, 0x874b, 0x457d, 0x9f, 0xdf, 0x73, 0x97, 0x77, 0x78, 0x68, 0x6c );
extern RPC_IF_HANDLE __MIDL_itf_deviceaccess_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_deviceaccess_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDeviceRequestCompletionCallback;
    typedef struct IDeviceRequestCompletionCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDeviceRequestCompletionCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDeviceRequestCompletionCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDeviceRequestCompletionCallback * This);
        HRESULT ( STDMETHODCALLTYPE *RequestCompletion )(
            __RPC__in IDeviceRequestCompletionCallback * This,
                       HRESULT requestResult,
                       DWORD bytesReturned);
        END_INTERFACE
    } IDeviceRequestCompletionCallbackVtbl;
    interface IDeviceRequestCompletionCallback
    {
        CONST_VTBL struct IDeviceRequestCompletionCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestCompletion(This,requestResult,bytesReturned) )
EXTERN_C const IID IID_IDeviceIoControl;
    typedef struct IDeviceIoControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDeviceIoControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDeviceIoControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDeviceIoControl * This);
        HRESULT ( STDMETHODCALLTYPE *DeviceIoControlSync )(
            IDeviceIoControl * This,
            _In_ DWORD ioControlCode,
            _In_reads_opt_(inputBufferSize) UCHAR *inputBuffer,
            _In_ DWORD inputBufferSize,
            _Out_writes_opt_(outputBufferSize) UCHAR *outputBuffer,
            _In_ DWORD outputBufferSize,
            _Out_ DWORD *bytesReturned);
        HRESULT ( STDMETHODCALLTYPE *DeviceIoControlAsync )(
            IDeviceIoControl * This,
            _In_ DWORD ioControlCode,
            _In_reads_opt_(inputBufferSize) UCHAR *inputBuffer,
            _In_ DWORD inputBufferSize,
            _Out_writes_opt_(outputBufferSize) UCHAR *outputBuffer,
            _In_ DWORD outputBufferSize,
            _In_ IDeviceRequestCompletionCallback *requestCompletionCallback,
            _Out_opt_ ULONG_PTR *cancelContext);
        HRESULT ( STDMETHODCALLTYPE *CancelOperation )(
            IDeviceIoControl * This,
            _In_ ULONG_PTR cancelContext);
        END_INTERFACE
    } IDeviceIoControlVtbl;
    interface IDeviceIoControl
    {
        CONST_VTBL struct IDeviceIoControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeviceIoControlSync(This,ioControlCode,inputBuffer,inputBufferSize,outputBuffer,outputBufferSize,bytesReturned) )
    ( (This)->lpVtbl -> DeviceIoControlAsync(This,ioControlCode,inputBuffer,inputBufferSize,outputBuffer,outputBufferSize,requestCompletionCallback,cancelContext) )
    ( (This)->lpVtbl -> CancelOperation(This,cancelContext) )
EXTERN_C const IID IID_ICreateDeviceAccessAsync;
    typedef struct ICreateDeviceAccessAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICreateDeviceAccessAsync * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICreateDeviceAccessAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICreateDeviceAccessAsync * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            ICreateDeviceAccessAsync * This);
        HRESULT ( STDMETHODCALLTYPE *Wait )(
            ICreateDeviceAccessAsync * This,
            _In_ DWORD timeout);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ICreateDeviceAccessAsync * This);
        HRESULT ( STDMETHODCALLTYPE *GetResult )(
            ICreateDeviceAccessAsync * This,
            _In_ REFIID riid,
            _COM_Outptr_ void **deviceAccess);
        END_INTERFACE
    } ICreateDeviceAccessAsyncVtbl;
    interface ICreateDeviceAccessAsync
    {
        CONST_VTBL struct ICreateDeviceAccessAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Wait(This,timeout) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> GetResult(This,riid,deviceAccess) )
}
