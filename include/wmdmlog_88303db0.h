#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMDMLogger IWMDMLogger;
typedef class WMDMLogger WMDMLogger;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMDMLogger;
    typedef struct IWMDMLoggerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMDMLogger * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMDMLogger * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMDMLogger * This);
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
            __RPC__in IWMDMLogger * This,
                        __RPC__out BOOL *pfEnabled);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in IWMDMLogger * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *GetLogFileName )(
            __RPC__in IWMDMLogger * This,
                                        __RPC__out_ecount_full_string(( 256 + 1 ) ) LPSTR pszFilename,
                              __RPC__in_range(0,256) UINT nMaxChars);
        HRESULT ( STDMETHODCALLTYPE *SetLogFileName )(
            __RPC__in IWMDMLogger * This,
                               __RPC__in_string LPSTR pszFilename);
        HRESULT ( STDMETHODCALLTYPE *LogString )(
            __RPC__in IWMDMLogger * This,
                       DWORD dwFlags,
                               __RPC__in_string LPSTR pszSrcName,
                               __RPC__in_string LPSTR pszLog);
        HRESULT ( STDMETHODCALLTYPE *LogDword )(
            __RPC__in IWMDMLogger * This,
                       DWORD dwFlags,
                               __RPC__in_string LPSTR pszSrcName,
                               __RPC__in_string LPSTR pszLogFormat,
                       DWORD dwLog);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IWMDMLogger * This);
        HRESULT ( STDMETHODCALLTYPE *GetSizeParams )(
            __RPC__in IWMDMLogger * This,
                        __RPC__out LPDWORD pdwMaxSize,
                        __RPC__out LPDWORD pdwShrinkToSize);
        HRESULT ( STDMETHODCALLTYPE *SetSizeParams )(
            __RPC__in IWMDMLogger * This,
                       DWORD dwMaxSize,
                       DWORD dwShrinkToSize);
        END_INTERFACE
    } IWMDMLoggerVtbl;
    interface IWMDMLogger
    {
        CONST_VTBL struct IWMDMLoggerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> Enable(This,fEnable) )
    ( (This)->lpVtbl -> GetLogFileName(This,pszFilename,nMaxChars) )
    ( (This)->lpVtbl -> SetLogFileName(This,pszFilename) )
    ( (This)->lpVtbl -> LogString(This,dwFlags,pszSrcName,pszLog) )
    ( (This)->lpVtbl -> LogDword(This,dwFlags,pszSrcName,pszLogFormat,dwLog) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> GetSizeParams(This,pdwMaxSize,pdwShrinkToSize) )
    ( (This)->lpVtbl -> SetSizeParams(This,dwMaxSize,dwShrinkToSize) )
EXTERN_C const IID LIBID_WMDMLogLib;
EXTERN_C const CLSID CLSID_WMDMLogger;
class DECLSPEC_UUID("110A3202-5A79-11d3-8D78-444553540000")
WMDMLogger;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmdmlog_0000_0002_v0_0_s_ifspec;
}
