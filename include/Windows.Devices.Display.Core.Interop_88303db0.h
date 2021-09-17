#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDisplayDeviceInterop IDisplayDeviceInterop;
typedef interface IDisplayPathInterop IDisplayPathInterop;
#include "oaidl.h"
#include "ocidl.h"
#include "Inspectable.h"
extern "C"{
typedef struct __LUID
    {
    DWORD LowPart;
    LONG HighPart;
    } LUID;
typedef struct __LUID *PLUID;
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
inline INT64 Int64FromLuid(const LUID &Luid)
{
    LARGE_INTEGER val;
    val.LowPart = Luid.LowPart;
    val.HighPart = Luid.HighPart;
    return val.QuadPart;
}
inline LUID LuidFromInt64(INT64 Int64)
{
    LARGE_INTEGER val;
    val.QuadPart= Int64;
    LUID Luid;
    Luid.LowPart = val.LowPart;
    Luid.HighPart = val.HighPart;
    return Luid;
}
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Edisplay2Ecore2Einterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Edisplay2Ecore2Einterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDisplayDeviceInterop;
    typedef struct IDisplayDeviceInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDisplayDeviceInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDisplayDeviceInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDisplayDeviceInterop * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSharedHandle )(
            IDisplayDeviceInterop * This,
                       IInspectable *pObject,
                       const SECURITY_ATTRIBUTES *pSecurityAttributes,
                       DWORD Access,
                       HSTRING Name,
                                HANDLE *pHandle);
        HRESULT ( STDMETHODCALLTYPE *OpenSharedHandle )(
            IDisplayDeviceInterop * This,
                       HANDLE NTHandle,
                       IID riid,
                                void **ppvObj);
        END_INTERFACE
    } IDisplayDeviceInteropVtbl;
    interface IDisplayDeviceInterop
    {
        CONST_VTBL struct IDisplayDeviceInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSharedHandle(This,pObject,pSecurityAttributes,Access,Name,pHandle) )
    ( (This)->lpVtbl -> OpenSharedHandle(This,NTHandle,riid,ppvObj) )
EXTERN_C const IID IID_IDisplayPathInterop;
    typedef struct IDisplayPathInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDisplayPathInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDisplayPathInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDisplayPathInterop * This);
        HRESULT ( STDMETHODCALLTYPE *CreateSourcePresentationHandle )(
            IDisplayPathInterop * This,
                                HANDLE *pValue);
        HRESULT ( STDMETHODCALLTYPE *GetSourceId )(
            IDisplayPathInterop * This,
                                UINT *pSourceId);
        END_INTERFACE
    } IDisplayPathInteropVtbl;
    interface IDisplayPathInterop
    {
        CONST_VTBL struct IDisplayPathInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateSourcePresentationHandle(This,pValue) )
    ( (This)->lpVtbl -> GetSourceId(This,pSourceId) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Edisplay2Ecore2Einterop_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Edevices2Edisplay2Ecore2Einterop_0000_0002_v0_0_s_ifspec;
}
