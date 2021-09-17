#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWamAdmin IWamAdmin;
typedef interface IWamAdmin2 IWamAdmin2;
typedef interface IIISApplicationAdmin IIISApplicationAdmin;
typedef class WamAdmin WamAdmin;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(IID_IWamAdmin, 0x29822AB7, 0xF302, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
DEFINE_GUID(IID_IWamAdmin2, 0x29822AB8, 0xF302, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
DEFINE_GUID(IID_IIISApplicationAdmin, 0x7C4E1804, 0xE342, 0x483D, 0xA4, 0x3E, 0xA8, 0x50, 0xCF, 0xCC, 0x8D, 0x18);
DEFINE_GUID(IID_IIISApplicationAdmin2, 0xd643717a, 0xfc87, 0x4260, 0x88, 0xac, 0x6c, 0xe3, 0x5f, 0x0e, 0xc1, 0x4e);
DEFINE_GUID(LIBID_WAMREGLib, 0x29822AA8, 0xF302, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
DEFINE_GUID(CLSID_WamAdmin, 0x61738644, 0xF196, 0x11D0, 0x99, 0x53, 0x00, 0xC0, 0x4F, 0xD9, 0x19, 0xC1);
typedef
enum __MIDL___MIDL_itf_wamreg_0000_0000_0001
    {
        eAppRunInProc = 0,
        eAppRunOutProcIsolated = ( eAppRunInProc + 1 ) ,
        eAppRunOutProcInDefaultPool = ( eAppRunOutProcIsolated + 1 )
    } EAppMode;
extern RPC_IF_HANDLE __MIDL_itf_wamreg_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wamreg_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWamAdmin;
    typedef struct IWamAdminVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWamAdmin * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWamAdmin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWamAdmin * This);
                           HRESULT ( STDMETHODCALLTYPE *AppCreate )(
            IWamAdmin * This,
                                       LPCWSTR szMDPath,
                       BOOL fInProc);
                           HRESULT ( STDMETHODCALLTYPE *AppDelete )(
            IWamAdmin * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *AppUnLoad )(
            IWamAdmin * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *AppGetStatus )(
            IWamAdmin * This,
                                       LPCWSTR szMDPath,
                        DWORD *pdwAppStatus);
                           HRESULT ( STDMETHODCALLTYPE *AppDeleteRecoverable )(
            IWamAdmin * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *AppRecover )(
            IWamAdmin * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
        END_INTERFACE
    } IWamAdminVtbl;
    interface IWamAdmin
    {
        CONST_VTBL struct IWamAdminVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AppCreate(This,szMDPath,fInProc) )
    ( (This)->lpVtbl -> AppDelete(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> AppUnLoad(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> AppGetStatus(This,szMDPath,pdwAppStatus) )
    ( (This)->lpVtbl -> AppDeleteRecoverable(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> AppRecover(This,szMDPath,fRecursive) )
EXTERN_C const IID IID_IWamAdmin2;
    typedef struct IWamAdmin2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWamAdmin2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWamAdmin2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWamAdmin2 * This);
                           HRESULT ( STDMETHODCALLTYPE *AppCreate )(
            IWamAdmin2 * This,
                                       LPCWSTR szMDPath,
                       BOOL fInProc);
                           HRESULT ( STDMETHODCALLTYPE *AppDelete )(
            IWamAdmin2 * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *AppUnLoad )(
            IWamAdmin2 * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *AppGetStatus )(
            IWamAdmin2 * This,
                                       LPCWSTR szMDPath,
                        DWORD *pdwAppStatus);
                           HRESULT ( STDMETHODCALLTYPE *AppDeleteRecoverable )(
            IWamAdmin2 * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *AppRecover )(
            IWamAdmin2 * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *AppCreate2 )(
            IWamAdmin2 * This,
                                       LPCWSTR szMDPath,
                       DWORD dwAppMode);
        END_INTERFACE
    } IWamAdmin2Vtbl;
    interface IWamAdmin2
    {
        CONST_VTBL struct IWamAdmin2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AppCreate(This,szMDPath,fInProc) )
    ( (This)->lpVtbl -> AppDelete(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> AppUnLoad(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> AppGetStatus(This,szMDPath,pdwAppStatus) )
    ( (This)->lpVtbl -> AppDeleteRecoverable(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> AppRecover(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> AppCreate2(This,szMDPath,dwAppMode) )
EXTERN_C const IID IID_IIISApplicationAdmin;
    typedef struct IIISApplicationAdminVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIISApplicationAdmin * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIISApplicationAdmin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIISApplicationAdmin * This);
                           HRESULT ( STDMETHODCALLTYPE *CreateApplication )(
            IIISApplicationAdmin * This,
                                       LPCWSTR szMDPath,
                       DWORD dwAppMode,
                                       LPCWSTR szAppPoolId,
                       BOOL fCreatePool);
                           HRESULT ( STDMETHODCALLTYPE *DeleteApplication )(
            IIISApplicationAdmin * This,
                                       LPCWSTR szMDPath,
                       BOOL fRecursive);
                           HRESULT ( STDMETHODCALLTYPE *CreateApplicationPool )(
            IIISApplicationAdmin * This,
                                       LPCWSTR szPool);
                           HRESULT ( STDMETHODCALLTYPE *DeleteApplicationPool )(
            IIISApplicationAdmin * This,
                                       LPCWSTR szPool);
                           HRESULT ( STDMETHODCALLTYPE *EnumerateApplicationsInPool )(
            IIISApplicationAdmin * This,
                                       LPCWSTR szPool,
                        BSTR *bstrBuffer);
                           HRESULT ( STDMETHODCALLTYPE *RecycleApplicationPool )(
            IIISApplicationAdmin * This,
                                       LPCWSTR szPool);
                           HRESULT ( STDMETHODCALLTYPE *GetProcessMode )(
            IIISApplicationAdmin * This,
                        DWORD *pdwMode);
        END_INTERFACE
    } IIISApplicationAdminVtbl;
    interface IIISApplicationAdmin
    {
        CONST_VTBL struct IIISApplicationAdminVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateApplication(This,szMDPath,dwAppMode,szAppPoolId,fCreatePool) )
    ( (This)->lpVtbl -> DeleteApplication(This,szMDPath,fRecursive) )
    ( (This)->lpVtbl -> CreateApplicationPool(This,szPool) )
    ( (This)->lpVtbl -> DeleteApplicationPool(This,szPool) )
    ( (This)->lpVtbl -> EnumerateApplicationsInPool(This,szPool,bstrBuffer) )
    ( (This)->lpVtbl -> RecycleApplicationPool(This,szPool) )
    ( (This)->lpVtbl -> GetProcessMode(This,pdwMode) )
EXTERN_C const IID LIBID_WAMREGLib;
EXTERN_C const CLSID CLSID_WamAdmin;
class DECLSPEC_UUID("61738644-F196-11D0-9953-00C04FD919C1")
WamAdmin;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wamreg_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wamreg_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long , BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( unsigned long *, unsigned long , BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree64( unsigned long *, BSTR * );
}
