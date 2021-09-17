#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITensorNative ITensorNative;
typedef interface ITensorStaticsNative ITensorStaticsNative;
typedef interface ILearningModelDeviceFactoryNative ILearningModelDeviceFactoryNative;
#include "oaidl.h"
#include "ocidl.h"
#include "d3d12.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
struct IMLOperatorRegistry;
struct __declspec(uuid("1adaa23a-eb67-41f3-aad8-5d984e9bacd4")) __declspec(novtable) ILearningModelOperatorProviderNative : IUnknown
{
    STDMETHOD(GetRegistry)(IMLOperatorRegistry** ppOperatorRegistry) PURE;
};
extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITensorNative;
    typedef struct ITensorNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITensorNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITensorNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITensorNative * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            ITensorNative * This,
                                          BYTE **value,
                        UINT32 *capacity);
        HRESULT ( STDMETHODCALLTYPE *GetD3D12Resource )(
            ITensorNative * This,
                        ID3D12Resource **result);
        END_INTERFACE
    } ITensorNativeVtbl;
    interface ITensorNative
    {
        CONST_VTBL struct ITensorNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,value,capacity) )
    ( (This)->lpVtbl -> GetD3D12Resource(This,result) )
EXTERN_C const IID IID_ITensorStaticsNative;
    typedef struct ITensorStaticsNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITensorStaticsNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITensorStaticsNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITensorStaticsNative * This);
        HRESULT ( STDMETHODCALLTYPE *CreateFromD3D12Resource )(
            ITensorStaticsNative * This,
            ID3D12Resource *value,
                            __int64 *shape,
            int shapeCount,
                        IUnknown **result);
        END_INTERFACE
    } ITensorStaticsNativeVtbl;
    interface ITensorStaticsNative
    {
        CONST_VTBL struct ITensorStaticsNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateFromD3D12Resource(This,value,shape,shapeCount,result) )
EXTERN_C const IID IID_ILearningModelDeviceFactoryNative;
    typedef struct ILearningModelDeviceFactoryNativeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ILearningModelDeviceFactoryNative * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ILearningModelDeviceFactoryNative * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ILearningModelDeviceFactoryNative * This);
        HRESULT ( STDMETHODCALLTYPE *CreateFromD3D12CommandQueue )(
            ILearningModelDeviceFactoryNative * This,
            ID3D12CommandQueue *value,
                        IUnknown **result);
        END_INTERFACE
    } ILearningModelDeviceFactoryNativeVtbl;
    interface ILearningModelDeviceFactoryNative
    {
        CONST_VTBL struct ILearningModelDeviceFactoryNativeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateFromD3D12CommandQueue(This,value,result) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eai2Emachinelearning2Enative_0000_0003_v0_0_s_ifspec;
}
