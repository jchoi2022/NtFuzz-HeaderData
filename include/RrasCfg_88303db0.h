#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRouterProtocolConfig IRouterProtocolConfig;
typedef interface IAuthenticationProviderConfig IAuthenticationProviderConfig;
typedef interface IAccountingProviderConfig IAccountingProviderConfig;
typedef interface IEAPProviderConfig IEAPProviderConfig;
typedef interface IEAPProviderConfig2 IEAPProviderConfig2;
typedef interface IEAPProviderConfig3 IEAPProviderConfig3;
#include "basetsd.h"
#include "wtypes.h"
#include "unknwn.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef BYTE *PBYTE;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRouterProtocolConfig;
    typedef struct IRouterProtocolConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRouterProtocolConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRouterProtocolConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRouterProtocolConfig * This);
        HRESULT ( STDMETHODCALLTYPE *AddProtocol )(
            IRouterProtocolConfig * This,
                               LPCOLESTR pszMachineName,
                       DWORD dwTransportId,
                       DWORD dwProtocolId,
                       HWND hWnd,
                       DWORD dwFlags,
                       IUnknown *pRouter,
                       ULONG_PTR uReserved1);
        HRESULT ( STDMETHODCALLTYPE *RemoveProtocol )(
            IRouterProtocolConfig * This,
                               LPCOLESTR pszMachineName,
                       DWORD dwTransportId,
                       DWORD dwProtocolId,
                       HWND hWnd,
                       DWORD dwFlags,
                       IUnknown *pRouter,
                       ULONG_PTR uReserved1);
        END_INTERFACE
    } IRouterProtocolConfigVtbl;
    interface IRouterProtocolConfig
    {
        CONST_VTBL struct IRouterProtocolConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddProtocol(This,pszMachineName,dwTransportId,dwProtocolId,hWnd,dwFlags,pRouter,uReserved1) )
    ( (This)->lpVtbl -> RemoveProtocol(This,pszMachineName,dwTransportId,dwProtocolId,hWnd,dwFlags,pRouter,uReserved1) )
 STDMETHOD(AddProtocol)(THIS_ LPCOLESTR pszMachineName,\
        DWORD dwTransportId,\
        DWORD dwProtocolId,\
        HWND hWnd,\
        DWORD dwFlags,\
        IUnknown *pRouter,\
        ULONG_PTR uReserved1) IPURE;\
 STDMETHOD(RemoveProtocol)(THIS_ LPCOLESTR pszMachineName,\
       DWORD dwTransportId,\
       DWORD dwProtocolId,\
       HWND hWnd,\
       DWORD dwFlags,\
       IUnknown *pRouter,\
       ULONG_PTR uReserved2) IPURE;\
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IAuthenticationProviderConfig;
    typedef struct IAuthenticationProviderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAuthenticationProviderConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAuthenticationProviderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAuthenticationProviderConfig * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IAuthenticationProviderConfig * This,
                               LPCOLESTR pszMachineName,
                        ULONG_PTR *puConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            IAuthenticationProviderConfig * This,
                       ULONG_PTR uConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            IAuthenticationProviderConfig * This,
                       ULONG_PTR uConnectionParam,
                       HWND hWnd,
                       DWORD dwFlags,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            IAuthenticationProviderConfig * This,
                       ULONG_PTR uConnectionParam,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            IAuthenticationProviderConfig * This,
                       ULONG_PTR uConnectionParam,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        END_INTERFACE
    } IAuthenticationProviderConfigVtbl;
    interface IAuthenticationProviderConfig
    {
        CONST_VTBL struct IAuthenticationProviderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszMachineName,puConnectionParam) )
    ( (This)->lpVtbl -> Uninitialize(This,uConnectionParam) )
    ( (This)->lpVtbl -> Configure(This,uConnectionParam,hWnd,dwFlags,uReserved1,uReserved2) )
    ( (This)->lpVtbl -> Activate(This,uConnectionParam,uReserved1,uReserved2) )
    ( (This)->lpVtbl -> Deactivate(This,uConnectionParam,uReserved1,uReserved2) )
 STDMETHOD(Initialize)(THIS_ \
       LPCOLESTR pszMachineName, \
       ULONG_PTR *puConnectionParam) IPURE; \
 STDMETHOD(Uninitialize)(THIS_ \
       ULONG_PTR uConnectionParam) IPURE; \
  \
 STDMETHOD(Configure)(THIS_ \
       ULONG_PTR uConnectionParam, \
       HWND hWnd, \
        DWORD dwFlags, \
        ULONG_PTR uReserved1, \
        ULONG_PTR uReserved2) IPURE; \
 \
 STDMETHOD(Activate)(THIS_ \
      ULONG_PTR uConnectionParam, \
       ULONG_PTR uReserved1, \
       ULONG_PTR uReserved2) IPURE; \
 \
 STDMETHOD(Deactivate)(THIS_ \
      ULONG_PTR uConnectionParam, \
         ULONG_PTR uReserved1, \
         ULONG_PTR uReserved2) IPURE; \
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IAccountingProviderConfig;
    typedef struct IAccountingProviderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAccountingProviderConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAccountingProviderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAccountingProviderConfig * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IAccountingProviderConfig * This,
                               LPCOLESTR pszMachineName,
                        ULONG_PTR *puConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            IAccountingProviderConfig * This,
                       ULONG_PTR uConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            IAccountingProviderConfig * This,
                       ULONG_PTR uConnectionParam,
                       HWND hWnd,
                       DWORD dwFlags,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            IAccountingProviderConfig * This,
                       ULONG_PTR uConnectionParam,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            IAccountingProviderConfig * This,
                       ULONG_PTR uConnectionParam,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        END_INTERFACE
    } IAccountingProviderConfigVtbl;
    interface IAccountingProviderConfig
    {
        CONST_VTBL struct IAccountingProviderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszMachineName,puConnectionParam) )
    ( (This)->lpVtbl -> Uninitialize(This,uConnectionParam) )
    ( (This)->lpVtbl -> Configure(This,uConnectionParam,hWnd,dwFlags,uReserved1,uReserved2) )
    ( (This)->lpVtbl -> Activate(This,uConnectionParam,uReserved1,uReserved2) )
    ( (This)->lpVtbl -> Deactivate(This,uConnectionParam,uReserved1,uReserved2) )
 STDMETHOD(Initialize)(THIS_ \
       LPCOLESTR pszMachineName, \
       ULONG_PTR *puConnectionParam) IPURE; \
 STDMETHOD(Uninitialize)(THIS_ \
       ULONG_PTR uConnectionParam) IPURE; \
 STDMETHOD(Configure)(THIS_ \
      ULONG_PTR uConnectionParam, \
      HWND hWnd, \
        DWORD dwFlags, \
        ULONG_PTR uReserved1, \
        ULONG_PTR uReserved2) IPURE; \
 \
 STDMETHOD(Activate)(THIS_ \
      ULONG_PTR uConnectionParam, \
       ULONG_PTR uReserved1, \
       ULONG_PTR uReserved2) IPURE; \
 \
 STDMETHOD(Deactivate)(THIS_ \
      ULONG_PTR uConnectionParam, \
         ULONG_PTR uReserved1, \
         ULONG_PTR uReserved2) IPURE; \
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IEAPProviderConfig;
    typedef struct IEAPProviderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEAPProviderConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEAPProviderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEAPProviderConfig * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IEAPProviderConfig * This,
                               LPCOLESTR pszMachineName,
                       DWORD dwEapTypeId,
                        ULONG_PTR *puConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            IEAPProviderConfig * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *ServerInvokeConfigUI )(
            IEAPProviderConfig * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hWnd,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        HRESULT ( STDMETHODCALLTYPE *RouterInvokeConfigUI )(
            IEAPProviderConfig * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hwndParent,
                       DWORD dwFlags,
                                BYTE *pConnectionDataIn,
                       DWORD dwSizeOfConnectionDataIn,
                                          BYTE **ppConnectionDataOut,
                        DWORD *pdwSizeOfConnectionDataOut);
        HRESULT ( STDMETHODCALLTYPE *RouterInvokeCredentialsUI )(
            IEAPProviderConfig * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hwndParent,
                       DWORD dwFlags,
                                BYTE *pConnectionDataIn,
                       DWORD dwSizeOfConnectionDataIn,
                                BYTE *pUserDataIn,
                       DWORD dwSizeOfUserDataIn,
                                          BYTE **ppUserDataOut,
                        DWORD *pdwSizeOfUserDataOut);
        END_INTERFACE
    } IEAPProviderConfigVtbl;
    interface IEAPProviderConfig
    {
        CONST_VTBL struct IEAPProviderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszMachineName,dwEapTypeId,puConnectionParam) )
    ( (This)->lpVtbl -> Uninitialize(This,dwEapTypeId,uConnectionParam) )
    ( (This)->lpVtbl -> ServerInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hWnd,uReserved1,uReserved2) )
    ( (This)->lpVtbl -> RouterInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,ppConnectionDataOut,pdwSizeOfConnectionDataOut) )
    ( (This)->lpVtbl -> RouterInvokeCredentialsUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,pUserDataIn,dwSizeOfUserDataIn,ppUserDataOut,pdwSizeOfUserDataOut) )
EXTERN_C const IID IID_IEAPProviderConfig2;
    typedef struct IEAPProviderConfig2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEAPProviderConfig2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEAPProviderConfig2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEAPProviderConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IEAPProviderConfig2 * This,
                               LPCOLESTR pszMachineName,
                       DWORD dwEapTypeId,
                        ULONG_PTR *puConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            IEAPProviderConfig2 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *ServerInvokeConfigUI )(
            IEAPProviderConfig2 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hWnd,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        HRESULT ( STDMETHODCALLTYPE *RouterInvokeConfigUI )(
            IEAPProviderConfig2 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hwndParent,
                       DWORD dwFlags,
                                BYTE *pConnectionDataIn,
                       DWORD dwSizeOfConnectionDataIn,
                                          BYTE **ppConnectionDataOut,
                        DWORD *pdwSizeOfConnectionDataOut);
        HRESULT ( STDMETHODCALLTYPE *RouterInvokeCredentialsUI )(
            IEAPProviderConfig2 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hwndParent,
                       DWORD dwFlags,
                                BYTE *pConnectionDataIn,
                       DWORD dwSizeOfConnectionDataIn,
                                BYTE *pUserDataIn,
                       DWORD dwSizeOfUserDataIn,
                                          BYTE **ppUserDataOut,
                        DWORD *pdwSizeOfUserDataOut);
        HRESULT ( STDMETHODCALLTYPE *ServerInvokeConfigUI2 )(
            IEAPProviderConfig2 * This,
            DWORD dwEapTypeId,
            ULONG_PTR uConnectionParam,
            HWND hWnd,
            const BYTE *pConfigDataIn,
            DWORD dwSizeOfConfigDataIn,
            BYTE **ppConfigDataOut,
            DWORD *pdwSizeOfConfigDataOut);
        HRESULT ( STDMETHODCALLTYPE *GetGlobalConfig )(
            IEAPProviderConfig2 * This,
            DWORD dwEapTypeId,
            BYTE **ppConfigDataOut,
            DWORD *pdwSizeOfConfigDataOut);
        END_INTERFACE
    } IEAPProviderConfig2Vtbl;
    interface IEAPProviderConfig2
    {
        CONST_VTBL struct IEAPProviderConfig2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszMachineName,dwEapTypeId,puConnectionParam) )
    ( (This)->lpVtbl -> Uninitialize(This,dwEapTypeId,uConnectionParam) )
    ( (This)->lpVtbl -> ServerInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hWnd,uReserved1,uReserved2) )
    ( (This)->lpVtbl -> RouterInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,ppConnectionDataOut,pdwSizeOfConnectionDataOut) )
    ( (This)->lpVtbl -> RouterInvokeCredentialsUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,pUserDataIn,dwSizeOfUserDataIn,ppUserDataOut,pdwSizeOfUserDataOut) )
    ( (This)->lpVtbl -> ServerInvokeConfigUI2(This,dwEapTypeId,uConnectionParam,hWnd,pConfigDataIn,dwSizeOfConfigDataIn,ppConfigDataOut,pdwSizeOfConfigDataOut) )
    ( (This)->lpVtbl -> GetGlobalConfig(This,dwEapTypeId,ppConfigDataOut,pdwSizeOfConfigDataOut) )
EXTERN_C const IID IID_IEAPProviderConfig3;
    typedef struct IEAPProviderConfig3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEAPProviderConfig3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEAPProviderConfig3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEAPProviderConfig3 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IEAPProviderConfig3 * This,
                               LPCOLESTR pszMachineName,
                       DWORD dwEapTypeId,
                        ULONG_PTR *puConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            IEAPProviderConfig3 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam);
        HRESULT ( STDMETHODCALLTYPE *ServerInvokeConfigUI )(
            IEAPProviderConfig3 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hWnd,
                       ULONG_PTR uReserved1,
                       ULONG_PTR uReserved2);
        HRESULT ( STDMETHODCALLTYPE *RouterInvokeConfigUI )(
            IEAPProviderConfig3 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hwndParent,
                       DWORD dwFlags,
                                BYTE *pConnectionDataIn,
                       DWORD dwSizeOfConnectionDataIn,
                                          BYTE **ppConnectionDataOut,
                        DWORD *pdwSizeOfConnectionDataOut);
        HRESULT ( STDMETHODCALLTYPE *RouterInvokeCredentialsUI )(
            IEAPProviderConfig3 * This,
                       DWORD dwEapTypeId,
                       ULONG_PTR uConnectionParam,
                       HWND hwndParent,
                       DWORD dwFlags,
                                BYTE *pConnectionDataIn,
                       DWORD dwSizeOfConnectionDataIn,
                                BYTE *pUserDataIn,
                       DWORD dwSizeOfUserDataIn,
                                          BYTE **ppUserDataOut,
                        DWORD *pdwSizeOfUserDataOut);
        HRESULT ( STDMETHODCALLTYPE *ServerInvokeConfigUI2 )(
            IEAPProviderConfig3 * This,
            DWORD dwEapTypeId,
            ULONG_PTR uConnectionParam,
            HWND hWnd,
            const BYTE *pConfigDataIn,
            DWORD dwSizeOfConfigDataIn,
            BYTE **ppConfigDataOut,
            DWORD *pdwSizeOfConfigDataOut);
        HRESULT ( STDMETHODCALLTYPE *GetGlobalConfig )(
            IEAPProviderConfig3 * This,
            DWORD dwEapTypeId,
            BYTE **ppConfigDataOut,
            DWORD *pdwSizeOfConfigDataOut);
        HRESULT ( STDMETHODCALLTYPE *ServerInvokeCertificateConfigUI )(
            IEAPProviderConfig3 * This,
            DWORD dwEapTypeId,
            ULONG_PTR uConnectionParam,
            HWND hWnd,
            const BYTE *pConfigDataIn,
            DWORD dwSizeOfConfigDataIn,
            BYTE **ppConfigDataOut,
            DWORD *pdwSizeOfConfigDataOut,
            ULONG_PTR uReserved);
        END_INTERFACE
    } IEAPProviderConfig3Vtbl;
    interface IEAPProviderConfig3
    {
        CONST_VTBL struct IEAPProviderConfig3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszMachineName,dwEapTypeId,puConnectionParam) )
    ( (This)->lpVtbl -> Uninitialize(This,dwEapTypeId,uConnectionParam) )
    ( (This)->lpVtbl -> ServerInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hWnd,uReserved1,uReserved2) )
    ( (This)->lpVtbl -> RouterInvokeConfigUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,ppConnectionDataOut,pdwSizeOfConnectionDataOut) )
    ( (This)->lpVtbl -> RouterInvokeCredentialsUI(This,dwEapTypeId,uConnectionParam,hwndParent,dwFlags,pConnectionDataIn,dwSizeOfConnectionDataIn,pUserDataIn,dwSizeOfUserDataIn,ppUserDataOut,pdwSizeOfUserDataOut) )
    ( (This)->lpVtbl -> ServerInvokeConfigUI2(This,dwEapTypeId,uConnectionParam,hWnd,pConfigDataIn,dwSizeOfConfigDataIn,ppConfigDataOut,pdwSizeOfConfigDataOut) )
    ( (This)->lpVtbl -> GetGlobalConfig(This,dwEapTypeId,ppConfigDataOut,pdwSizeOfConfigDataOut) )
    ( (This)->lpVtbl -> ServerInvokeCertificateConfigUI(This,dwEapTypeId,uConnectionParam,hWnd,pConfigDataIn,dwSizeOfConfigDataIn,ppConfigDataOut,pdwSizeOfConfigDataOut,uReserved) )
 STDMETHOD(Initialize)(THIS_ \
  LPCOLESTR pszMachineName, \
  DWORD dwEapTypeId, \
  ULONG_PTR* puConnectionParam) IPURE; \
 STDMETHOD(Uninitialize)(THIS_ \
  DWORD dwEapTypeId, \
  ULONG_PTR uConnectionParam) IPURE; \
 STDMETHOD(ServerInvokeConfigUI)(THIS_ \
  DWORD dwEapTypeId, \
  ULONG_PTR uConnectionParam, \
  HWND hWnd, \
  ULONG_PTR dwRes1, \
  ULONG_PTR dwRes2) IPURE; \
 STDMETHOD(RouterInvokeConfigUI)(THIS_ \
  DWORD dwEapTypeId, \
  ULONG_PTR uConnectionParam, \
  HWND hwndParent, \
  DWORD dwFlags, \
  BYTE* pConnectionDataIn, \
  DWORD dwSizeOfConnectionDataIn, \
  BYTE** ppConnectionDataOut, \
  DWORD* pdwSizeOfConnectionDataOut) IPURE; \
 STDMETHOD(RouterInvokeCredentialsUI)(THIS_ \
  DWORD dwEapTypeId, \
  ULONG_PTR uConnectionParam, \
  HWND hwndParent, \
  DWORD dwFlags, \
  BYTE* pConnectionDataIn, \
  DWORD dwSizeOfConnectionDataIn, \
  BYTE* pUserDataIn, \
  DWORD dwSizeOfUserDataIn, \
  BYTE** ppUserDataOut, \
  DWORD* pdwSizeOfUserDataOut) IPURE; \
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rrascfg_0000_0006_v0_0_s_ifspec;
}
