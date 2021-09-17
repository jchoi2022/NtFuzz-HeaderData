#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumManagerFrames IEnumManagerFrames;
typedef interface IInternetExplorerManager IInternetExplorerManager;
typedef interface IInternetExplorerManager2 IInternetExplorerManager2;
typedef class InternetExplorerManager InternetExplorerManager;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DECLSPEC_UUID("44EC9B57-DCAB-4CDE-B373-EE94962950E3")
enum INTERNETEXPLORERCONFIGURATION
    {
        INTERNETEXPLORERCONFIGURATION_HOST = 0x1,
        INTERNETEXPLORERCONFIGURATION_WEB_DRIVER = 0x2,
        INTERNETEXPLORERCONFIGURATION_WEB_DRIVER_EDGE = 0x4
    } INTERNETEXPLORERCONFIGURATION;
extern RPC_IF_HANDLE __MIDL_itf_ieautomation_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ieautomation_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumManagerFrames;
    typedef struct IEnumManagerFramesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumManagerFrames * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumManagerFrames * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumManagerFrames * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumManagerFrames * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) HWND **ppWindows,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Count )(
            __RPC__in IEnumManagerFrames * This,
                        __RPC__out ULONG *pcelt);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumManagerFrames * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumManagerFrames * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumManagerFrames * This,
                        __RPC__deref_out_opt IEnumManagerFrames **ppEnum);
        END_INTERFACE
    } IEnumManagerFramesVtbl;
    interface IEnumManagerFrames
    {
        CONST_VTBL struct IEnumManagerFramesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppWindows,pceltFetched) )
    ( (This)->lpVtbl -> Count(This,pcelt) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IInternetExplorerManager;
    typedef struct IInternetExplorerManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInternetExplorerManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInternetExplorerManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInternetExplorerManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateObject )(
            __RPC__in IInternetExplorerManager * This,
                       DWORD dwConfig,
                                       __RPC__in_opt_string LPCWSTR pszURL,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IInternetExplorerManagerVtbl;
    interface IInternetExplorerManager
    {
        CONST_VTBL struct IInternetExplorerManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateObject(This,dwConfig,pszURL,riid,ppv) )
EXTERN_C const IID IID_IInternetExplorerManager2;
    typedef struct IInternetExplorerManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInternetExplorerManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInternetExplorerManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInternetExplorerManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *EnumFrameWindows )(
            __RPC__in IInternetExplorerManager2 * This,
                        __RPC__deref_out_opt IEnumManagerFrames **ppEnum);
        END_INTERFACE
    } IInternetExplorerManager2Vtbl;
    interface IInternetExplorerManager2
    {
        CONST_VTBL struct IInternetExplorerManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumFrameWindows(This,ppEnum) )
EXTERN_C const IID LIBID_InternetExplorerAutomationLib;
EXTERN_C const CLSID CLSID_InternetExplorerManager;
class DECLSPEC_UUID("DF4FCC34-067A-4E0A-8352-4A1A5095346E")
InternetExplorerManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ieautomation_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ieautomation_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
