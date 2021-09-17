#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDCompositionAnimation IDCompositionAnimation;
#include "wtypes.h"
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_dcompanimation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dcompanimation_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDCompositionAnimation;
    typedef struct IDCompositionAnimationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDCompositionAnimation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDCompositionAnimation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDCompositionAnimation * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IDCompositionAnimation * This);
        HRESULT ( STDMETHODCALLTYPE *SetAbsoluteBeginTime )(
            IDCompositionAnimation * This,
            LARGE_INTEGER beginTime);
        HRESULT ( STDMETHODCALLTYPE *AddCubic )(
            IDCompositionAnimation * This,
            double beginOffset,
            float constantCoefficient,
            float linearCoefficient,
            float quadraticCoefficient,
            float cubicCoefficient);
        HRESULT ( STDMETHODCALLTYPE *AddSinusoidal )(
            IDCompositionAnimation * This,
            double beginOffset,
            float bias,
            float amplitude,
            float frequency,
            float phase);
        HRESULT ( STDMETHODCALLTYPE *AddRepeat )(
            IDCompositionAnimation * This,
            double beginOffset,
            double durationToRepeat);
        HRESULT ( STDMETHODCALLTYPE *End )(
            IDCompositionAnimation * This,
            double endOffset,
            float endValue);
        END_INTERFACE
    } IDCompositionAnimationVtbl;
    interface IDCompositionAnimation
    {
        CONST_VTBL struct IDCompositionAnimationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> SetAbsoluteBeginTime(This,beginTime) )
    ( (This)->lpVtbl -> AddCubic(This,beginOffset,constantCoefficient,linearCoefficient,quadraticCoefficient,cubicCoefficient) )
    ( (This)->lpVtbl -> AddSinusoidal(This,beginOffset,bias,amplitude,frequency,phase) )
    ( (This)->lpVtbl -> AddRepeat(This,beginOffset,durationToRepeat) )
    ( (This)->lpVtbl -> End(This,endOffset,endValue) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dcompanimation_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dcompanimation_0000_0001_v0_0_s_ifspec;
}
