#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IImgErrorInfo IImgErrorInfo;
typedef interface IImgCreateErrorInfo IImgCreateErrorInfo;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct __MIDL___MIDL_itf_imgerror_0000_0000_0001
    {
    BSTR description;
    GUID guid;
    DWORD helpContext;
    BSTR helpFile;
    BSTR source;
    BSTR devDescription;
    GUID errorID;
    ULONG cUserParameters;
                    BSTR *aUserParameters;
    BSTR userFallback;
    DWORD exceptionID;
    } ImgErrorInfo;
extern RPC_IF_HANDLE __MIDL_itf_imgerror_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imgerror_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IImgErrorInfo;
    typedef struct IImgErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IImgErrorInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IImgErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IImgErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            IImgErrorInfo * This,
                        GUID *pGUID);
        HRESULT ( STDMETHODCALLTYPE *GetSource )(
            IImgErrorInfo * This,
                        BSTR *pBstrSource);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IImgErrorInfo * This,
                        BSTR *pBstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetHelpFile )(
            IImgErrorInfo * This,
                        BSTR *pBstrHelpFile);
        HRESULT ( STDMETHODCALLTYPE *GetHelpContext )(
            IImgErrorInfo * This,
                        DWORD *pdwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *GetDeveloperDescription )(
            IImgErrorInfo * This,
            _Out_ BSTR *pbstrDevDescription);
        HRESULT ( STDMETHODCALLTYPE *GetUserErrorId )(
            IImgErrorInfo * This,
            _Out_ GUID *pErrorId);
        HRESULT ( STDMETHODCALLTYPE *GetUserParameterCount )(
            IImgErrorInfo * This,
            _Out_ ULONG *pcUserParams);
        HRESULT ( STDMETHODCALLTYPE *GetUserParameter )(
            IImgErrorInfo * This,
            _In_ ULONG cParam,
            _Out_ BSTR *pbstrParam);
        HRESULT ( STDMETHODCALLTYPE *GetUserFallback )(
            IImgErrorInfo * This,
            _Out_ BSTR *pbstrFallback);
        HRESULT ( STDMETHODCALLTYPE *GetExceptionId )(
            IImgErrorInfo * This,
            _Out_ DWORD *pExceptionId);
        HRESULT ( STDMETHODCALLTYPE *DetachErrorInfo )(
            IImgErrorInfo * This,
            _Out_ ImgErrorInfo *pErrorInfo);
        END_INTERFACE
    } IImgErrorInfoVtbl;
    interface IImgErrorInfo
    {
        CONST_VTBL struct IImgErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGUID(This,pGUID) )
    ( (This)->lpVtbl -> GetSource(This,pBstrSource) )
    ( (This)->lpVtbl -> GetDescription(This,pBstrDescription) )
    ( (This)->lpVtbl -> GetHelpFile(This,pBstrHelpFile) )
    ( (This)->lpVtbl -> GetHelpContext(This,pdwHelpContext) )
    ( (This)->lpVtbl -> GetDeveloperDescription(This,pbstrDevDescription) )
    ( (This)->lpVtbl -> GetUserErrorId(This,pErrorId) )
    ( (This)->lpVtbl -> GetUserParameterCount(This,pcUserParams) )
    ( (This)->lpVtbl -> GetUserParameter(This,cParam,pbstrParam) )
    ( (This)->lpVtbl -> GetUserFallback(This,pbstrFallback) )
    ( (This)->lpVtbl -> GetExceptionId(This,pExceptionId) )
    ( (This)->lpVtbl -> DetachErrorInfo(This,pErrorInfo) )
EXTERN_C const IID IID_IImgCreateErrorInfo;
    typedef struct IImgCreateErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IImgCreateErrorInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IImgCreateErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IImgCreateErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *SetGUID )(
            IImgCreateErrorInfo * This,
                       REFGUID rguid);
        HRESULT ( STDMETHODCALLTYPE *SetSource )(
            IImgCreateErrorInfo * This,
                       LPOLESTR szSource);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            IImgCreateErrorInfo * This,
                       LPOLESTR szDescription);
        HRESULT ( STDMETHODCALLTYPE *SetHelpFile )(
            IImgCreateErrorInfo * This,
                       LPOLESTR szHelpFile);
        HRESULT ( STDMETHODCALLTYPE *SetHelpContext )(
            IImgCreateErrorInfo * This,
                       DWORD dwHelpContext);
        HRESULT ( STDMETHODCALLTYPE *AttachToErrorInfo )(
            IImgCreateErrorInfo * This,
            _Inout_ ImgErrorInfo *pErrorInfo);
        END_INTERFACE
    } IImgCreateErrorInfoVtbl;
    interface IImgCreateErrorInfo
    {
        CONST_VTBL struct IImgCreateErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetGUID(This,rguid) )
    ( (This)->lpVtbl -> SetSource(This,szSource) )
    ( (This)->lpVtbl -> SetDescription(This,szDescription) )
    ( (This)->lpVtbl -> SetHelpFile(This,szHelpFile) )
    ( (This)->lpVtbl -> SetHelpContext(This,dwHelpContext) )
    ( (This)->lpVtbl -> AttachToErrorInfo(This,pErrorInfo) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_imgerror_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_imgerror_0000_0002_v0_0_s_ifspec;
}
