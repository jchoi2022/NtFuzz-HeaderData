#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IHomePageSetting IHomePageSetting;
typedef class HomePageSetting HomePageSetting;
#include "objidl.h"
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_homepagesetting_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_homepagesetting_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IHomePageSetting;
    typedef struct IHomePageSettingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHomePageSetting * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHomePageSetting * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IHomePageSetting * This);
        HRESULT ( STDMETHODCALLTYPE *SetHomePage )(
            IHomePageSetting * This,
                       HWND hwnd,
                       LPCWSTR homePageUri,
                       LPCWSTR brandingMessage);
        HRESULT ( STDMETHODCALLTYPE *IsHomePage )(
            IHomePageSetting * This,
                       LPCWSTR uri,
                        BOOL *isDefault);
        HRESULT ( STDMETHODCALLTYPE *SetHomePageToBrowserDefault )(
            IHomePageSetting * This);
        END_INTERFACE
    } IHomePageSettingVtbl;
    interface IHomePageSetting
    {
        CONST_VTBL struct IHomePageSettingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHomePage(This,hwnd,homePageUri,brandingMessage) )
    ( (This)->lpVtbl -> IsHomePage(This,uri,isDefault) )
    ( (This)->lpVtbl -> SetHomePageToBrowserDefault(This) )
EXTERN_C const IID LIBID_IEHomePageSettingObjects;
EXTERN_C const CLSID CLSID_HomePageSetting;
class DECLSPEC_UUID("374CEDE0-873A-4C4F-BC86-BCC8CF5116A3")
HomePageSetting;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_homepagesetting_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_homepagesetting_0000_0002_v0_0_s_ifspec;
}
