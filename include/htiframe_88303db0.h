#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITargetNotify ITargetNotify;
typedef interface ITargetNotify2 ITargetNotify2;
typedef interface ITargetFrame2 ITargetFrame2;
typedef interface ITargetContainer ITargetContainer;
#include "objidl.h"
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
EXTERN_C const IID IID_ITargetFrame2;
EXTERN_C const IID IID_ITargetContainer;
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer ITargetNotify *LPTARGETNOTIFY;
EXTERN_C const IID IID_ITargetNotify;
    typedef struct ITargetNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetNotify * This);
        HRESULT ( STDMETHODCALLTYPE *OnCreate )(
            __RPC__in ITargetNotify * This,
                       __RPC__in_opt IUnknown *pUnkDestination,
                       ULONG cbCookie);
        HRESULT ( STDMETHODCALLTYPE *OnReuse )(
            __RPC__in ITargetNotify * This,
                       __RPC__in_opt IUnknown *pUnkDestination);
        END_INTERFACE
    } ITargetNotifyVtbl;
    interface ITargetNotify
    {
        CONST_VTBL struct ITargetNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCreate(This,pUnkDestination,cbCookie) )
    ( (This)->lpVtbl -> OnReuse(This,pUnkDestination) )
typedef __RPC_unique_pointer ITargetNotify2 *LPTARGETNOTIFY2;
EXTERN_C const IID IID_ITargetNotify2;
    typedef struct ITargetNotify2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetNotify2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetNotify2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetNotify2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnCreate )(
            __RPC__in ITargetNotify2 * This,
                       __RPC__in_opt IUnknown *pUnkDestination,
                       ULONG cbCookie);
        HRESULT ( STDMETHODCALLTYPE *OnReuse )(
            __RPC__in ITargetNotify2 * This,
                       __RPC__in_opt IUnknown *pUnkDestination);
        HRESULT ( STDMETHODCALLTYPE *GetOptionString )(
            __RPC__in ITargetNotify2 * This,
                            __RPC__deref_inout_opt BSTR *pbstrOptions);
        END_INTERFACE
    } ITargetNotify2Vtbl;
    interface ITargetNotify2
    {
        CONST_VTBL struct ITargetNotify2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCreate(This,pUnkDestination,cbCookie) )
    ( (This)->lpVtbl -> OnReuse(This,pUnkDestination) )
    ( (This)->lpVtbl -> GetOptionString(This,pbstrOptions) )
typedef __RPC_unique_pointer ITargetFrame2 *LPTARGETFRAME2;
typedef
enum __MIDL_ITargetFrame2_0001
    {
        FINDFRAME_NONE = 0,
        FINDFRAME_JUSTTESTEXISTENCE = 1,
        FINDFRAME_INTERNAL = 0x80000000
    } FINDFRAME_FLAGS;
typedef
enum __MIDL_ITargetFrame2_0002
    {
        FRAMEOPTIONS_SCROLL_YES = 0x1,
        FRAMEOPTIONS_SCROLL_NO = 0x2,
        FRAMEOPTIONS_SCROLL_AUTO = 0x4,
        FRAMEOPTIONS_NORESIZE = 0x8,
        FRAMEOPTIONS_NO3DBORDER = 0x10,
        FRAMEOPTIONS_DESKTOP = 0x20,
        FRAMEOPTIONS_BROWSERBAND = 0x40
    } FRAMEOPTIONS_FLAGS;
EXTERN_C const IID IID_ITargetFrame2;
    typedef struct ITargetFrame2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetFrame2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetFrame2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetFrame2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFrameName )(
            __RPC__in ITargetFrame2 * This,
                       __RPC__in LPCWSTR pszFrameName);
        HRESULT ( STDMETHODCALLTYPE *GetFrameName )(
            __RPC__in ITargetFrame2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszFrameName);
        HRESULT ( STDMETHODCALLTYPE *GetParentFrame )(
            __RPC__in ITargetFrame2 * This,
                        __RPC__deref_out_opt IUnknown **ppunkParent);
        HRESULT ( STDMETHODCALLTYPE *SetFrameSrc )(
            __RPC__in ITargetFrame2 * This,
                       __RPC__in LPCWSTR pszFrameSrc);
        HRESULT ( STDMETHODCALLTYPE *GetFrameSrc )(
            __RPC__in ITargetFrame2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszFrameSrc);
        HRESULT ( STDMETHODCALLTYPE *GetFramesContainer )(
            __RPC__in ITargetFrame2 * This,
                        __RPC__deref_out_opt IOleContainer **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *SetFrameOptions )(
            __RPC__in ITargetFrame2 * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFrameOptions )(
            __RPC__in ITargetFrame2 * This,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetFrameMargins )(
            __RPC__in ITargetFrame2 * This,
                       DWORD dwWidth,
                       DWORD dwHeight);
        HRESULT ( STDMETHODCALLTYPE *GetFrameMargins )(
            __RPC__in ITargetFrame2 * This,
                        __RPC__out DWORD *pdwWidth,
                        __RPC__out DWORD *pdwHeight);
        HRESULT ( STDMETHODCALLTYPE *FindFrame )(
            __RPC__in ITargetFrame2 * This,
                               __RPC__in_opt LPCWSTR pszTargetName,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IUnknown **ppunkTargetFrame);
        HRESULT ( STDMETHODCALLTYPE *GetTargetAlias )(
            __RPC__in ITargetFrame2 * This,
                               __RPC__in_opt LPCWSTR pszTargetName,
                        __RPC__deref_out_opt LPWSTR *ppszTargetAlias);
        END_INTERFACE
    } ITargetFrame2Vtbl;
    interface ITargetFrame2
    {
        CONST_VTBL struct ITargetFrame2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFrameName(This,pszFrameName) )
    ( (This)->lpVtbl -> GetFrameName(This,ppszFrameName) )
    ( (This)->lpVtbl -> GetParentFrame(This,ppunkParent) )
    ( (This)->lpVtbl -> SetFrameSrc(This,pszFrameSrc) )
    ( (This)->lpVtbl -> GetFrameSrc(This,ppszFrameSrc) )
    ( (This)->lpVtbl -> GetFramesContainer(This,ppContainer) )
    ( (This)->lpVtbl -> SetFrameOptions(This,dwFlags) )
    ( (This)->lpVtbl -> GetFrameOptions(This,pdwFlags) )
    ( (This)->lpVtbl -> SetFrameMargins(This,dwWidth,dwHeight) )
    ( (This)->lpVtbl -> GetFrameMargins(This,pdwWidth,pdwHeight) )
    ( (This)->lpVtbl -> FindFrame(This,pszTargetName,dwFlags,ppunkTargetFrame) )
    ( (This)->lpVtbl -> GetTargetAlias(This,pszTargetName,ppszTargetAlias) )
typedef __RPC_unique_pointer ITargetContainer *LPTARGETCONTAINER;
EXTERN_C const IID IID_ITargetContainer;
    typedef struct ITargetContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetContainer * This);
        HRESULT ( STDMETHODCALLTYPE *GetFrameUrl )(
            __RPC__in ITargetContainer * This,
                        __RPC__deref_out_opt LPWSTR *ppszFrameSrc);
        HRESULT ( STDMETHODCALLTYPE *GetFramesContainer )(
            __RPC__in ITargetContainer * This,
                        __RPC__deref_out_opt IOleContainer **ppContainer);
        END_INTERFACE
    } ITargetContainerVtbl;
    interface ITargetContainer
    {
        CONST_VTBL struct ITargetContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFrameUrl(This,ppszFrameSrc) )
    ( (This)->lpVtbl -> GetFramesContainer(This,ppContainer) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiframe_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
