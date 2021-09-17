#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBidiRequest IBidiRequest;
typedef interface IBidiRequestContainer IBidiRequestContainer;
typedef interface IBidiSpl IBidiSpl;
typedef interface IBidiSpl2 IBidiSpl2;
typedef class BidiRequest BidiRequest;
typedef class BidiRequestContainer BidiRequestContainer;
typedef class BidiSpl BidiSpl;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bidispl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bidispl_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBidiRequest;
    typedef struct IBidiRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBidiRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBidiRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBidiRequest * This);
        HRESULT ( STDMETHODCALLTYPE *SetSchema )(
            __RPC__in IBidiRequest * This,
                       __RPC__in const LPCWSTR pszSchema);
        HRESULT ( STDMETHODCALLTYPE *SetInputData )(
            __RPC__in IBidiRequest * This,
                       const DWORD dwType,
                       __RPC__in const BYTE *pData,
                       const UINT uSize);
        HRESULT ( STDMETHODCALLTYPE *GetResult )(
            __RPC__in IBidiRequest * This,
                        __RPC__out HRESULT *phr);
        HRESULT ( STDMETHODCALLTYPE *GetOutputData )(
            __RPC__in IBidiRequest * This,
                       const DWORD dwIndex,
                        __RPC__deref_out_opt LPWSTR *ppszSchema,
                        __RPC__out DWORD *pdwType,
                        __RPC__deref_out_opt BYTE **ppData,
                        __RPC__out ULONG *uSize);
        HRESULT ( STDMETHODCALLTYPE *GetEnumCount )(
            __RPC__in IBidiRequest * This,
                        __RPC__out DWORD *pdwTotal);
        END_INTERFACE
    } IBidiRequestVtbl;
    interface IBidiRequest
    {
        CONST_VTBL struct IBidiRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSchema(This,pszSchema) )
    ( (This)->lpVtbl -> SetInputData(This,dwType,pData,uSize) )
    ( (This)->lpVtbl -> GetResult(This,phr) )
    ( (This)->lpVtbl -> GetOutputData(This,dwIndex,ppszSchema,pdwType,ppData,uSize) )
    ( (This)->lpVtbl -> GetEnumCount(This,pdwTotal) )
EXTERN_C const IID IID_IBidiRequestContainer;
    typedef struct IBidiRequestContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBidiRequestContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBidiRequestContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBidiRequestContainer * This);
        HRESULT ( STDMETHODCALLTYPE *AddRequest )(
            __RPC__in IBidiRequestContainer * This,
                       __RPC__in_opt IBidiRequest *pRequest);
        HRESULT ( STDMETHODCALLTYPE *GetEnumObject )(
            __RPC__in IBidiRequestContainer * This,
                        __RPC__deref_out_opt IEnumUnknown **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetRequestCount )(
            __RPC__in IBidiRequestContainer * This,
                        __RPC__out ULONG *puCount);
        END_INTERFACE
    } IBidiRequestContainerVtbl;
    interface IBidiRequestContainer
    {
        CONST_VTBL struct IBidiRequestContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRequest(This,pRequest) )
    ( (This)->lpVtbl -> GetEnumObject(This,ppenum) )
    ( (This)->lpVtbl -> GetRequestCount(This,puCount) )
EXTERN_C const IID IID_IBidiSpl;
    typedef struct IBidiSplVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBidiSpl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBidiSpl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBidiSpl * This);
        HRESULT ( STDMETHODCALLTYPE *BindDevice )(
            __RPC__in IBidiSpl * This,
                       __RPC__in const LPCWSTR pszDeviceName,
                       const DWORD dwAccess);
        HRESULT ( STDMETHODCALLTYPE *UnbindDevice )(
            __RPC__in IBidiSpl * This);
        HRESULT ( STDMETHODCALLTYPE *SendRecv )(
            __RPC__in IBidiSpl * This,
                       __RPC__in const LPCWSTR pszAction,
                       __RPC__in_opt IBidiRequest *pRequest);
        HRESULT ( STDMETHODCALLTYPE *MultiSendRecv )(
            __RPC__in IBidiSpl * This,
                       __RPC__in const LPCWSTR pszAction,
                       __RPC__in_opt IBidiRequestContainer *pRequestContainer);
        END_INTERFACE
    } IBidiSplVtbl;
    interface IBidiSpl
    {
        CONST_VTBL struct IBidiSplVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BindDevice(This,pszDeviceName,dwAccess) )
    ( (This)->lpVtbl -> UnbindDevice(This) )
    ( (This)->lpVtbl -> SendRecv(This,pszAction,pRequest) )
    ( (This)->lpVtbl -> MultiSendRecv(This,pszAction,pRequestContainer) )
EXTERN_C const IID IID_IBidiSpl2;
    typedef struct IBidiSpl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBidiSpl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBidiSpl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBidiSpl2 * This);
        HRESULT ( STDMETHODCALLTYPE *BindDevice )(
            __RPC__in IBidiSpl2 * This,
                       __RPC__in const LPCWSTR pszDeviceName,
                       const DWORD dwAccess);
        HRESULT ( STDMETHODCALLTYPE *UnbindDevice )(
            __RPC__in IBidiSpl2 * This);
        HRESULT ( STDMETHODCALLTYPE *SendRecvXMLString )(
            __RPC__in IBidiSpl2 * This,
                       __RPC__in BSTR bstrRequest,
                        __RPC__deref_out_opt BSTR *pbstrResponse);
        HRESULT ( STDMETHODCALLTYPE *SendRecvXMLStream )(
            __RPC__in IBidiSpl2 * This,
                       __RPC__in_opt IStream *pSRequest,
                        __RPC__deref_out_opt IStream **ppSResponse);
        END_INTERFACE
    } IBidiSpl2Vtbl;
    interface IBidiSpl2
    {
        CONST_VTBL struct IBidiSpl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BindDevice(This,pszDeviceName,dwAccess) )
    ( (This)->lpVtbl -> UnbindDevice(This) )
    ( (This)->lpVtbl -> SendRecvXMLString(This,bstrRequest,pbstrResponse) )
    ( (This)->lpVtbl -> SendRecvXMLStream(This,pSRequest,ppSResponse) )
EXTERN_C const IID LIBID_IBidiSplLib;
EXTERN_C const CLSID CLSID_BidiRequest;
class DECLSPEC_UUID("B9162A23-45F9-47cc-80F5-FE0FE9B9E1A2")
BidiRequest;
EXTERN_C const CLSID CLSID_BidiRequestContainer;
class DECLSPEC_UUID("FC5B8A24-DB05-4a01-8388-22EDF6C2BBBA")
BidiRequestContainer;
EXTERN_C const CLSID CLSID_BidiSpl;
class DECLSPEC_UUID("2A614240-A4C5-4c33-BD87-1BC709331639")
BidiSpl;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bidispl_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bidispl_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
