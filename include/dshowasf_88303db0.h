#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAMWMBufferPass IAMWMBufferPass;
typedef interface IAMWMBufferPassCallback IAMWMBufferPassCallback;
typedef interface IConfigAsfWriter IConfigAsfWriter;
typedef interface IConfigAsfWriter2 IConfigAsfWriter2;
#include "unknwn.h"
#include "objidl.h"
#include "strmif.h"
#include "wmsdkidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_GUID( IID_IConfigAsfWriter2,0x7989ccaa, 0x53f0, 0x44f0, 0x88, 0x4a, 0xf3, 0xb0, 0x3f, 0x6a, 0xe0, 0x66 );
EXTERN_GUID( IID_IConfigAsfWriter,0x45086030,0xF7E4,0x486a,0xB5,0x04,0x82,0x6B,0xB5,0x79,0x2A,0x3B );
EXTERN_GUID( IID_IAMWMBufferPass,0x6dd816d7, 0xe740, 0x4123, 0x9e, 0x24, 0x24, 0x44, 0x41, 0x26, 0x44, 0xd8 );
EXTERN_GUID( IID_IAMWMBufferPassCallback,0xb25b8372, 0xd2d2, 0x44b2, 0x86, 0x53, 0x1b, 0x8d, 0xae, 0x33, 0x24, 0x89 );
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMWMBufferPass;
    typedef struct IAMWMBufferPassVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMWMBufferPass * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMWMBufferPass * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMWMBufferPass * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotify )(
            __RPC__in IAMWMBufferPass * This,
                       __RPC__in_opt IAMWMBufferPassCallback *pCallback);
        END_INTERFACE
    } IAMWMBufferPassVtbl;
    interface IAMWMBufferPass
    {
        CONST_VTBL struct IAMWMBufferPassVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNotify(This,pCallback) )
EXTERN_C const IID IID_IAMWMBufferPassCallback;
    typedef struct IAMWMBufferPassCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMWMBufferPassCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMWMBufferPassCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMWMBufferPassCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IAMWMBufferPassCallback * This,
                       __RPC__in_opt INSSBuffer3 *pNSSBuffer3,
                       __RPC__in_opt IPin *pPin,
                       __RPC__in REFERENCE_TIME *prtStart,
                       __RPC__in REFERENCE_TIME *prtEnd);
        END_INTERFACE
    } IAMWMBufferPassCallbackVtbl;
    interface IAMWMBufferPassCallback
    {
        CONST_VTBL struct IAMWMBufferPassCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This,pNSSBuffer3,pPin,prtStart,prtEnd) )
enum _AM_ASFWRITERCONFIG_PARAM
    {
        AM_CONFIGASFWRITER_PARAM_AUTOINDEX = 1,
        AM_CONFIGASFWRITER_PARAM_MULTIPASS = ( AM_CONFIGASFWRITER_PARAM_AUTOINDEX + 1 ) ,
        AM_CONFIGASFWRITER_PARAM_DONTCOMPRESS = ( AM_CONFIGASFWRITER_PARAM_MULTIPASS + 1 )
    } ;
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IConfigAsfWriter;
    typedef struct IConfigAsfWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConfigAsfWriter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConfigAsfWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConfigAsfWriter * This);
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileId )(
            __RPC__in IConfigAsfWriter * This,
                       DWORD dwProfileId);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileId )(
            __RPC__in IConfigAsfWriter * This,
                        __RPC__out DWORD *pdwProfileId);
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileGuid )(
            __RPC__in IConfigAsfWriter * This,
                       __RPC__in REFGUID guidProfile);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileGuid )(
            __RPC__in IConfigAsfWriter * This,
                        __RPC__out GUID *pProfileGuid);
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfile )(
            __RPC__in IConfigAsfWriter * This,
                       __RPC__in_opt IWMProfile *pProfile);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfile )(
            __RPC__in IConfigAsfWriter * This,
                        __RPC__deref_out_opt IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *SetIndexMode )(
            __RPC__in IConfigAsfWriter * This,
                       BOOL bIndexFile);
        HRESULT ( STDMETHODCALLTYPE *GetIndexMode )(
            __RPC__in IConfigAsfWriter * This,
                        __RPC__out BOOL *pbIndexFile);
        END_INTERFACE
    } IConfigAsfWriterVtbl;
    interface IConfigAsfWriter
    {
        CONST_VTBL struct IConfigAsfWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileId(This,dwProfileId) )
    ( (This)->lpVtbl -> GetCurrentProfileId(This,pdwProfileId) )
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileGuid(This,guidProfile) )
    ( (This)->lpVtbl -> GetCurrentProfileGuid(This,pProfileGuid) )
    ( (This)->lpVtbl -> ConfigureFilterUsingProfile(This,pProfile) )
    ( (This)->lpVtbl -> GetCurrentProfile(This,ppProfile) )
    ( (This)->lpVtbl -> SetIndexMode(This,bIndexFile) )
    ( (This)->lpVtbl -> GetIndexMode(This,pbIndexFile) )
EXTERN_C const IID IID_IConfigAsfWriter2;
    typedef struct IConfigAsfWriter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConfigAsfWriter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConfigAsfWriter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConfigAsfWriter2 * This);
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileId )(
            __RPC__in IConfigAsfWriter2 * This,
                       DWORD dwProfileId);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileId )(
            __RPC__in IConfigAsfWriter2 * This,
                        __RPC__out DWORD *pdwProfileId);
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfileGuid )(
            __RPC__in IConfigAsfWriter2 * This,
                       __RPC__in REFGUID guidProfile);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfileGuid )(
            __RPC__in IConfigAsfWriter2 * This,
                        __RPC__out GUID *pProfileGuid);
        HRESULT ( STDMETHODCALLTYPE *ConfigureFilterUsingProfile )(
            __RPC__in IConfigAsfWriter2 * This,
                       __RPC__in_opt IWMProfile *pProfile);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentProfile )(
            __RPC__in IConfigAsfWriter2 * This,
                        __RPC__deref_out_opt IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *SetIndexMode )(
            __RPC__in IConfigAsfWriter2 * This,
                       BOOL bIndexFile);
        HRESULT ( STDMETHODCALLTYPE *GetIndexMode )(
            __RPC__in IConfigAsfWriter2 * This,
                        __RPC__out BOOL *pbIndexFile);
        HRESULT ( STDMETHODCALLTYPE *StreamNumFromPin )(
            __RPC__in IConfigAsfWriter2 * This,
                       __RPC__in_opt IPin *pPin,
                        __RPC__out WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *SetParam )(
            __RPC__in IConfigAsfWriter2 * This,
                       DWORD dwParam,
                       DWORD dwParam1,
                       DWORD dwParam2);
        HRESULT ( STDMETHODCALLTYPE *GetParam )(
            __RPC__in IConfigAsfWriter2 * This,
                       DWORD dwParam,
                        __RPC__out DWORD *pdwParam1,
                        __RPC__out DWORD *pdwParam2);
        HRESULT ( STDMETHODCALLTYPE *ResetMultiPassState )(
            __RPC__in IConfigAsfWriter2 * This);
        END_INTERFACE
    } IConfigAsfWriter2Vtbl;
    interface IConfigAsfWriter2
    {
        CONST_VTBL struct IConfigAsfWriter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileId(This,dwProfileId) )
    ( (This)->lpVtbl -> GetCurrentProfileId(This,pdwProfileId) )
    ( (This)->lpVtbl -> ConfigureFilterUsingProfileGuid(This,guidProfile) )
    ( (This)->lpVtbl -> GetCurrentProfileGuid(This,pProfileGuid) )
    ( (This)->lpVtbl -> ConfigureFilterUsingProfile(This,pProfile) )
    ( (This)->lpVtbl -> GetCurrentProfile(This,ppProfile) )
    ( (This)->lpVtbl -> SetIndexMode(This,bIndexFile) )
    ( (This)->lpVtbl -> GetIndexMode(This,pbIndexFile) )
    ( (This)->lpVtbl -> StreamNumFromPin(This,pPin,pwStreamNum) )
    ( (This)->lpVtbl -> SetParam(This,dwParam,dwParam1,dwParam2) )
    ( (This)->lpVtbl -> GetParam(This,dwParam,pdwParam1,pdwParam2) )
    ( (This)->lpVtbl -> ResetMultiPassState(This) )
static DWORD EXCLUDE_SCRIPT_STREAM_DELIVERY_SYNCHRONIZATION = 0x00000001;
static const WCHAR* g_wszExcludeScriptStreamDeliverySynchronization = L"ExcludeScriptStreamDeliverySynchronization";
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dshowasf_0000_0004_v0_0_s_ifspec;
}
