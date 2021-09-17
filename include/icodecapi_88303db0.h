#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICodecAPI ICodecAPI;
#include "unknwn.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
struct CodecAPIEventData
    {
    GUID guid;
    DWORD dataLength;
    DWORD reserved[ 3 ];
    } ;
extern RPC_IF_HANDLE __MIDL_itf_icodecapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icodecapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICodecAPI;
    typedef struct ICodecAPIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICodecAPI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICodecAPI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICodecAPI * This);
        HRESULT ( STDMETHODCALLTYPE *IsSupported )(
            ICodecAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *IsModifiable )(
            ICodecAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *GetParameterRange )(
            ICodecAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *ValueMin,
            _Out_ VARIANT *ValueMax,
            _Out_ VARIANT *SteppingDelta);
        HRESULT ( STDMETHODCALLTYPE *GetParameterValues )(
            ICodecAPI * This,
                       const GUID *Api,
            _Outptr_result_buffer_all_(*ValuesCount) VARIANT **Values,
            _Out_ ULONG *ValuesCount);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultValue )(
            ICodecAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            ICodecAPI * This,
                       const GUID *Api,
            _Out_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            ICodecAPI * This,
                       const GUID *Api,
            _In_ VARIANT *Value);
        HRESULT ( STDMETHODCALLTYPE *RegisterForEvent )(
            ICodecAPI * This,
                       const GUID *Api,
                       LONG_PTR userData);
        HRESULT ( STDMETHODCALLTYPE *UnregisterForEvent )(
            ICodecAPI * This,
                       const GUID *Api);
        HRESULT ( STDMETHODCALLTYPE *SetAllDefaults )(
            ICodecAPI * This);
        HRESULT ( STDMETHODCALLTYPE *SetValueWithNotify )(
            ICodecAPI * This,
                       const GUID *Api,
                       VARIANT *Value,
            _Outptr_result_buffer_all_(*ChangedParamCount) GUID **ChangedParam,
            _Out_ ULONG *ChangedParamCount);
        HRESULT ( STDMETHODCALLTYPE *SetAllDefaultsWithNotify )(
            ICodecAPI * This,
            _Outptr_result_buffer_all_(*ChangedParamCount) GUID **ChangedParam,
            _Out_ ULONG *ChangedParamCount);
        HRESULT ( STDMETHODCALLTYPE *GetAllSettings )(
            ICodecAPI * This,
                       IStream *__MIDL__ICodecAPI0000);
        HRESULT ( STDMETHODCALLTYPE *SetAllSettings )(
            ICodecAPI * This,
                       IStream *__MIDL__ICodecAPI0001);
        HRESULT ( STDMETHODCALLTYPE *SetAllSettingsWithNotify )(
            ICodecAPI * This,
            IStream *__MIDL__ICodecAPI0002,
            _Outptr_result_buffer_all_(*ChangedParamCount) GUID **ChangedParam,
            _Out_ ULONG *ChangedParamCount);
        END_INTERFACE
    } ICodecAPIVtbl;
    interface ICodecAPI
    {
        CONST_VTBL struct ICodecAPIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSupported(This,Api) )
    ( (This)->lpVtbl -> IsModifiable(This,Api) )
    ( (This)->lpVtbl -> GetParameterRange(This,Api,ValueMin,ValueMax,SteppingDelta) )
    ( (This)->lpVtbl -> GetParameterValues(This,Api,Values,ValuesCount) )
    ( (This)->lpVtbl -> GetDefaultValue(This,Api,Value) )
    ( (This)->lpVtbl -> GetValue(This,Api,Value) )
    ( (This)->lpVtbl -> SetValue(This,Api,Value) )
    ( (This)->lpVtbl -> RegisterForEvent(This,Api,userData) )
    ( (This)->lpVtbl -> UnregisterForEvent(This,Api) )
    ( (This)->lpVtbl -> SetAllDefaults(This) )
    ( (This)->lpVtbl -> SetValueWithNotify(This,Api,Value,ChangedParam,ChangedParamCount) )
    ( (This)->lpVtbl -> SetAllDefaultsWithNotify(This,ChangedParam,ChangedParamCount) )
    ( (This)->lpVtbl -> GetAllSettings(This,__MIDL__ICodecAPI0000) )
    ( (This)->lpVtbl -> SetAllSettings(This,__MIDL__ICodecAPI0001) )
    ( (This)->lpVtbl -> SetAllSettingsWithNotify(This,__MIDL__ICodecAPI0002,ChangedParam,ChangedParamCount) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_icodecapi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_icodecapi_0000_0001_v0_0_s_ifspec;
}
