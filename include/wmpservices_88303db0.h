#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPServices IWMPServices;
typedef interface IWMPMediaPluginRegistrar IWMPMediaPluginRegistrar;
typedef interface IWMPPlugin IWMPPlugin;
typedef interface IWMPPluginEnable IWMPPluginEnable;
typedef interface IWMPGraphCreation IWMPGraphCreation;
typedef interface IWMPConvert IWMPConvert;
typedef interface IWMPTranscodePolicy IWMPTranscodePolicy;
typedef interface IWMPUserEventSink IWMPUserEventSink;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum WMPServices_StreamState
    {
        WMPServices_StreamState_Stop = 0,
        WMPServices_StreamState_Pause = ( WMPServices_StreamState_Stop + 1 ) ,
        WMPServices_StreamState_Play = ( WMPServices_StreamState_Pause + 1 )
    } WMPServices_StreamState;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPServices;
    typedef struct IWMPServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPServices * This);
                           HRESULT ( STDMETHODCALLTYPE *GetStreamTime )(
            IWMPServices * This,
                                LONGLONG *prt);
                           HRESULT ( STDMETHODCALLTYPE *GetStreamState )(
            IWMPServices * This,
                                WMPServices_StreamState *pState);
        END_INTERFACE
    } IWMPServicesVtbl;
    interface IWMPServices
    {
        CONST_VTBL struct IWMPServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamTime(This,prt) )
    ( (This)->lpVtbl -> GetStreamState(This,pState) )
EXTERN_GUID( CLSID_WMPMediaPluginRegistrar, 0x5569e7f5,0x424b,0x4b93, 0x89, 0xca, 0x79, 0xd1, 0x79, 0x24, 0x68, 0x9a );
EXTERN_GUID( WMP_PLUGINTYPE_DSP, 0x6434baea, 0x4954, 0x498d, 0xab, 0xd5, 0x2b, 0x7, 0x12, 0x3e, 0x1f, 0x4 );
EXTERN_GUID( WMP_PLUGINTYPE_DSP_OUTOFPROC, 0xef29b174, 0xc347, 0x44cc, 0x9a, 0x4f, 0x23, 0x99, 0x11, 0x8f, 0xf3, 0x8c );
EXTERN_GUID( WMP_PLUGINTYPE_RENDERING, 0xa8554541, 0x115d, 0x406a, 0xa4, 0xc7, 0x51, 0x11, 0x1c, 0x33, 0x1, 0x83 );
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPMediaPluginRegistrar;
    typedef struct IWMPMediaPluginRegistrarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMediaPluginRegistrar * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMediaPluginRegistrar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMediaPluginRegistrar * This);
        HRESULT ( STDMETHODCALLTYPE *WMPRegisterPlayerPlugin )(
            IWMPMediaPluginRegistrar * This,
                       LPWSTR pwszFriendlyName,
                       LPWSTR pwszDescription,
                       LPWSTR pwszUninstallString,
            DWORD dwPriority,
            GUID guidPluginType,
            CLSID clsid,
            UINT cMediaTypes,
            LPVOID pMediaTypes);
        HRESULT ( STDMETHODCALLTYPE *WMPUnRegisterPlayerPlugin )(
            IWMPMediaPluginRegistrar * This,
            GUID guidPluginType,
            CLSID clsid);
        END_INTERFACE
    } IWMPMediaPluginRegistrarVtbl;
    interface IWMPMediaPluginRegistrar
    {
        CONST_VTBL struct IWMPMediaPluginRegistrarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> WMPRegisterPlayerPlugin(This,pwszFriendlyName,pwszDescription,pwszUninstallString,dwPriority,guidPluginType,clsid,cMediaTypes,pMediaTypes) )
    ( (This)->lpVtbl -> WMPUnRegisterPlayerPlugin(This,guidPluginType,clsid) )
typedef
enum WMPPlugin_Caps
    {
        WMPPlugin_Caps_CannotConvertFormats = 1
    } WMPPlugin_Caps;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPPlugin;
    typedef struct IWMPPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlugin * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlugin * This);
                           HRESULT ( STDMETHODCALLTYPE *Init )(
            IWMPPlugin * This,
            DWORD_PTR dwPlaybackContext);
                           HRESULT ( STDMETHODCALLTYPE *Shutdown )(
            IWMPPlugin * This);
                           HRESULT ( STDMETHODCALLTYPE *GetID )(
            IWMPPlugin * This,
                                GUID *pGUID);
                           HRESULT ( STDMETHODCALLTYPE *GetCaps )(
            IWMPPlugin * This,
                                DWORD *pdwFlags);
                           HRESULT ( STDMETHODCALLTYPE *AdviseWMPServices )(
            IWMPPlugin * This,
                       IWMPServices *pWMPServices);
                           HRESULT ( STDMETHODCALLTYPE *UnAdviseWMPServices )(
            IWMPPlugin * This);
        END_INTERFACE
    } IWMPPluginVtbl;
    interface IWMPPlugin
    {
        CONST_VTBL struct IWMPPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,dwPlaybackContext) )
    ( (This)->lpVtbl -> Shutdown(This) )
    ( (This)->lpVtbl -> GetID(This,pGUID) )
    ( (This)->lpVtbl -> GetCaps(This,pdwFlags) )
    ( (This)->lpVtbl -> AdviseWMPServices(This,pWMPServices) )
    ( (This)->lpVtbl -> UnAdviseWMPServices(This) )
EXTERN_C const IID IID_IWMPPluginEnable;
    typedef struct IWMPPluginEnableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPluginEnable * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPluginEnable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPluginEnable * This);
                           HRESULT ( STDMETHODCALLTYPE *SetEnable )(
            IWMPPluginEnable * This,
                       BOOL fEnable);
                           HRESULT ( STDMETHODCALLTYPE *GetEnable )(
            IWMPPluginEnable * This,
                        BOOL *pfEnable);
        END_INTERFACE
    } IWMPPluginEnableVtbl;
    interface IWMPPluginEnable
    {
        CONST_VTBL struct IWMPPluginEnableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetEnable(This,fEnable) )
    ( (This)->lpVtbl -> GetEnable(This,pfEnable) )
EXTERN_C const IID IID_IWMPGraphCreation;
    typedef struct IWMPGraphCreationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPGraphCreation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPGraphCreation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPGraphCreation * This);
        HRESULT ( STDMETHODCALLTYPE *GraphCreationPreRender )(
            IWMPGraphCreation * This,
                       IUnknown *pFilterGraph,
                       IUnknown *pReserved);
        HRESULT ( STDMETHODCALLTYPE *GraphCreationPostRender )(
            IWMPGraphCreation * This,
                       IUnknown *pFilterGraph);
        HRESULT ( STDMETHODCALLTYPE *GetGraphCreationFlags )(
            IWMPGraphCreation * This,
                        DWORD *pdwFlags);
        END_INTERFACE
    } IWMPGraphCreationVtbl;
    interface IWMPGraphCreation
    {
        CONST_VTBL struct IWMPGraphCreationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GraphCreationPreRender(This,pFilterGraph,pReserved) )
    ( (This)->lpVtbl -> GraphCreationPostRender(This,pFilterGraph) )
    ( (This)->lpVtbl -> GetGraphCreationFlags(This,pdwFlags) )
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPConvert;
    typedef struct IWMPConvertVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPConvert * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPConvert * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPConvert * This);
        HRESULT ( STDMETHODCALLTYPE *ConvertFile )(
            IWMPConvert * This,
                       BSTR bstrInputFile,
                       BSTR bstrDestinationFolder,
                        BSTR *pbstrOutputFile);
        HRESULT ( STDMETHODCALLTYPE *GetErrorURL )(
            IWMPConvert * This,
                        BSTR *pbstrURL);
        END_INTERFACE
    } IWMPConvertVtbl;
    interface IWMPConvert
    {
        CONST_VTBL struct IWMPConvertVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConvertFile(This,bstrInputFile,bstrDestinationFolder,pbstrOutputFile) )
    ( (This)->lpVtbl -> GetErrorURL(This,pbstrURL) )
EXTERN_C const IID IID_IWMPTranscodePolicy;
    typedef struct IWMPTranscodePolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPTranscodePolicy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPTranscodePolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPTranscodePolicy * This);
        HRESULT ( STDMETHODCALLTYPE *allowTranscode )(
            IWMPTranscodePolicy * This,
                        VARIANT_BOOL *pvbAllow);
        END_INTERFACE
    } IWMPTranscodePolicyVtbl;
    interface IWMPTranscodePolicy
    {
        CONST_VTBL struct IWMPTranscodePolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> allowTranscode(This,pvbAllow) )
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPUserEventSink;
    typedef struct IWMPUserEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPUserEventSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPUserEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPUserEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyUserEvent )(
            IWMPUserEventSink * This,
                       long EventCode);
        END_INTERFACE
    } IWMPUserEventSinkVtbl;
    interface IWMPUserEventSink
    {
        CONST_VTBL struct IWMPUserEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NotifyUserEvent(This,EventCode) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmpservices_0000_0008_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long , BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );
}
