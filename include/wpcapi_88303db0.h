#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWPCProviderState IWPCProviderState;
typedef interface IWPCProviderConfig IWPCProviderConfig;
typedef interface IWPCSettings IWPCSettings;
typedef interface IWPCGamesSettings IWPCGamesSettings;
typedef interface IWPCWebSettings IWPCWebSettings;
typedef interface IWindowsParentalControlsCore IWindowsParentalControlsCore;
typedef interface IWindowsParentalControls IWindowsParentalControls;
typedef interface IWPCProviderSupport IWPCProviderSupport;
typedef class WpcSettingsProvider WpcSettingsProvider;
typedef class WpcProviderSupport WpcProviderSupport;
typedef class WindowsParentalControls WindowsParentalControls;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWPCProviderState;
    typedef struct IWPCProviderStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWPCProviderState * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWPCProviderState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWPCProviderState * This);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            __RPC__in IWPCProviderState * This);
        HRESULT ( STDMETHODCALLTYPE *Disable )(
            __RPC__in IWPCProviderState * This);
        END_INTERFACE
    } IWPCProviderStateVtbl;
    interface IWPCProviderState
    {
        CONST_VTBL struct IWPCProviderStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Enable(This) )
    ( (This)->lpVtbl -> Disable(This) )
typedef
enum tagWPCFLAG_OVERRIDE
    {
        WPCFLAG_APPLICATION = 0x1
    } WPCFLAG_OVERRIDE;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWPCProviderConfig;
    typedef struct IWPCProviderConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWPCProviderConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWPCProviderConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWPCProviderConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetUserSummary )(
            __RPC__in IWPCProviderConfig * This,
                       __RPC__in BSTR bstrSID,
                                __RPC__deref_out_opt_string BSTR *pbstrUserSummary);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            __RPC__in IWPCProviderConfig * This,
                               __RPC__in_opt HWND hWnd,
                               __RPC__in_string BSTR bstrSID);
        HRESULT ( STDMETHODCALLTYPE *RequestOverride )(
            __RPC__in IWPCProviderConfig * This,
                               __RPC__in_opt HWND hWnd,
                               __RPC__in_string BSTR bstrPath,
                       DWORD dwFlags);
        END_INTERFACE
    } IWPCProviderConfigVtbl;
    interface IWPCProviderConfig
    {
        CONST_VTBL struct IWPCProviderConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUserSummary(This,bstrSID,pbstrUserSummary) )
    ( (This)->lpVtbl -> Configure(This,hWnd,bstrSID) )
    ( (This)->lpVtbl -> RequestOverride(This,hWnd,bstrPath,dwFlags) )
typedef
enum tagWPCFLAG_RESTRICTION
    {
        WPCFLAG_NO_RESTRICTION = 0,
        WPCFLAG_LOGGING_REQUIRED = 0x1,
        WPCFLAG_WEB_FILTERED = 0x2,
        WPCFLAG_HOURS_RESTRICTED = 0x4,
        WPCFLAG_GAMES_BLOCKED = 0x8,
        WPCFLAG_APPS_RESTRICTED = 0x10,
        WPCFLAG_TIME_ALLOWANCE_RESTRICTED = 0x20,
        WPCFLAG_GAMES_RESTRICTED = 0x40
    } WPCFLAG_RESTRICTION;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWPCSettings;
    typedef struct IWPCSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWPCSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWPCSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWPCSettings * This);
        HRESULT ( STDMETHODCALLTYPE *IsLoggingRequired )(
            __RPC__in IWPCSettings * This,
                        __RPC__out BOOL *pfRequired);
        HRESULT ( STDMETHODCALLTYPE *GetLastSettingsChangeTime )(
            __RPC__in IWPCSettings * This,
                        __RPC__out SYSTEMTIME *pTime);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictions )(
            __RPC__in IWPCSettings * This,
                        __RPC__out DWORD *pdwRestrictions);
        END_INTERFACE
    } IWPCSettingsVtbl;
    interface IWPCSettings
    {
        CONST_VTBL struct IWPCSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsLoggingRequired(This,pfRequired) )
    ( (This)->lpVtbl -> GetLastSettingsChangeTime(This,pTime) )
    ( (This)->lpVtbl -> GetRestrictions(This,pdwRestrictions) )
EXTERN_C const IID IID_IWPCGamesSettings;
    typedef struct IWPCGamesSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWPCGamesSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWPCGamesSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWPCGamesSettings * This);
        HRESULT ( STDMETHODCALLTYPE *IsLoggingRequired )(
            __RPC__in IWPCGamesSettings * This,
                        __RPC__out BOOL *pfRequired);
        HRESULT ( STDMETHODCALLTYPE *GetLastSettingsChangeTime )(
            __RPC__in IWPCGamesSettings * This,
                        __RPC__out SYSTEMTIME *pTime);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictions )(
            __RPC__in IWPCGamesSettings * This,
                        __RPC__out DWORD *pdwRestrictions);
        HRESULT ( STDMETHODCALLTYPE *IsBlocked )(
            __RPC__in IWPCGamesSettings * This,
                       GUID guidAppID,
                        __RPC__out DWORD *pdwReasons);
        END_INTERFACE
    } IWPCGamesSettingsVtbl;
    interface IWPCGamesSettings
    {
        CONST_VTBL struct IWPCGamesSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsLoggingRequired(This,pfRequired) )
    ( (This)->lpVtbl -> GetLastSettingsChangeTime(This,pTime) )
    ( (This)->lpVtbl -> GetRestrictions(This,pdwRestrictions) )
    ( (This)->lpVtbl -> IsBlocked(This,guidAppID,pdwReasons) )
typedef
enum tagWPCFLAG_WEB_SETTING
    {
        WPCFLAG_WEB_SETTING_NOTBLOCKED = 0,
        WPCFLAG_WEB_SETTING_DOWNLOADSBLOCKED = 0x1
    } WPCFLAG_WEB_SETTING;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IWPCWebSettings;
    typedef struct IWPCWebSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWPCWebSettings * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWPCWebSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWPCWebSettings * This);
        HRESULT ( STDMETHODCALLTYPE *IsLoggingRequired )(
            __RPC__in IWPCWebSettings * This,
                        __RPC__out BOOL *pfRequired);
        HRESULT ( STDMETHODCALLTYPE *GetLastSettingsChangeTime )(
            __RPC__in IWPCWebSettings * This,
                        __RPC__out SYSTEMTIME *pTime);
        HRESULT ( STDMETHODCALLTYPE *GetRestrictions )(
            __RPC__in IWPCWebSettings * This,
                        __RPC__out DWORD *pdwRestrictions);
        HRESULT ( STDMETHODCALLTYPE *GetSettings )(
            __RPC__in IWPCWebSettings * This,
                        __RPC__out DWORD *pdwSettings);
        HRESULT ( STDMETHODCALLTYPE *RequestURLOverride )(
            __RPC__in IWPCWebSettings * This,
                               __RPC__in_opt HWND hWnd,
                       __RPC__in LPCWSTR pcszURL,
                       DWORD cURLs,
                                        __RPC__in_ecount_full_opt(cURLs) LPCWSTR *ppcszSubURLs,
                        __RPC__out BOOL *pfChanged);
        END_INTERFACE
    } IWPCWebSettingsVtbl;
    interface IWPCWebSettings
    {
        CONST_VTBL struct IWPCWebSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsLoggingRequired(This,pfRequired) )
    ( (This)->lpVtbl -> GetLastSettingsChangeTime(This,pTime) )
    ( (This)->lpVtbl -> GetRestrictions(This,pdwRestrictions) )
    ( (This)->lpVtbl -> GetSettings(This,pdwSettings) )
    ( (This)->lpVtbl -> RequestURLOverride(This,hWnd,pcszURL,cURLs,ppcszSubURLs,pfChanged) )
typedef
enum tagWPCFLAG_VISIBILITY
    {
        WPCFLAG_WPC_VISIBLE = 0,
        WPCFLAG_WPC_HIDDEN = 0x1
    } WPCFLAG_VISIBILITY;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IWindowsParentalControlsCore;
    typedef struct IWindowsParentalControlsCoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsParentalControlsCore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsParentalControlsCore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsParentalControlsCore * This);
        HRESULT ( STDMETHODCALLTYPE *GetVisibility )(
            __RPC__in IWindowsParentalControlsCore * This,
                        __RPC__out WPCFLAG_VISIBILITY *peVisibility);
        HRESULT ( STDMETHODCALLTYPE *GetUserSettings )(
            __RPC__in IWindowsParentalControlsCore * This,
                                       __RPC__in_opt_string LPCWSTR pcszSID,
                        __RPC__deref_out_opt IWPCSettings **ppSettings);
        HRESULT ( STDMETHODCALLTYPE *GetWebSettings )(
            __RPC__in IWindowsParentalControlsCore * This,
                                       __RPC__in_opt_string LPCWSTR pcszSID,
                        __RPC__deref_out_opt IWPCWebSettings **ppSettings);
        HRESULT ( STDMETHODCALLTYPE *GetWebFilterInfo )(
            __RPC__in IWindowsParentalControlsCore * This,
                        __RPC__out GUID *pguidID,
                                    __RPC__deref_opt_inout_opt LPWSTR *ppszName);
        END_INTERFACE
    } IWindowsParentalControlsCoreVtbl;
    interface IWindowsParentalControlsCore
    {
        CONST_VTBL struct IWindowsParentalControlsCoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVisibility(This,peVisibility) )
    ( (This)->lpVtbl -> GetUserSettings(This,pcszSID,ppSettings) )
    ( (This)->lpVtbl -> GetWebSettings(This,pcszSID,ppSettings) )
    ( (This)->lpVtbl -> GetWebFilterInfo(This,pguidID,ppszName) )
EXTERN_C const IID IID_IWindowsParentalControls;
    typedef struct IWindowsParentalControlsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWindowsParentalControls * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWindowsParentalControls * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWindowsParentalControls * This);
        HRESULT ( STDMETHODCALLTYPE *GetVisibility )(
            __RPC__in IWindowsParentalControls * This,
                        __RPC__out WPCFLAG_VISIBILITY *peVisibility);
        HRESULT ( STDMETHODCALLTYPE *GetUserSettings )(
            __RPC__in IWindowsParentalControls * This,
                                       __RPC__in_opt_string LPCWSTR pcszSID,
                        __RPC__deref_out_opt IWPCSettings **ppSettings);
        HRESULT ( STDMETHODCALLTYPE *GetWebSettings )(
            __RPC__in IWindowsParentalControls * This,
                                       __RPC__in_opt_string LPCWSTR pcszSID,
                        __RPC__deref_out_opt IWPCWebSettings **ppSettings);
        HRESULT ( STDMETHODCALLTYPE *GetWebFilterInfo )(
            __RPC__in IWindowsParentalControls * This,
                        __RPC__out GUID *pguidID,
                                    __RPC__deref_opt_inout_opt LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetGamesSettings )(
            __RPC__in IWindowsParentalControls * This,
                                       __RPC__in_opt_string LPCWSTR pcszSID,
                        __RPC__deref_out_opt IWPCGamesSettings **ppSettings);
        END_INTERFACE
    } IWindowsParentalControlsVtbl;
    interface IWindowsParentalControls
    {
        CONST_VTBL struct IWindowsParentalControlsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVisibility(This,peVisibility) )
    ( (This)->lpVtbl -> GetUserSettings(This,pcszSID,ppSettings) )
    ( (This)->lpVtbl -> GetWebSettings(This,pcszSID,ppSettings) )
    ( (This)->lpVtbl -> GetWebFilterInfo(This,pguidID,ppszName) )
    ( (This)->lpVtbl -> GetGamesSettings(This,pcszSID,ppSettings) )
EXTERN_C const IID IID_IWPCProviderSupport;
    typedef struct IWPCProviderSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWPCProviderSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWPCProviderSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWPCProviderSupport * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IWPCProviderSupport * This,
                        __RPC__out GUID *pguidProvider);
        END_INTERFACE
    } IWPCProviderSupportVtbl;
    interface IWPCProviderSupport
    {
        CONST_VTBL struct IWPCProviderSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrent(This,pguidProvider) )
EXTERN_C const IID LIBID_WPCAPILib;
EXTERN_C const CLSID CLSID_WpcSettingsProvider;
class DECLSPEC_UUID("355DFFAA-3B9F-435c-B428-5D44290BC5F2")
WpcSettingsProvider;
EXTERN_C const CLSID CLSID_WpcProviderSupport;
class DECLSPEC_UUID("BB18C7A0-2186-4be0-97D8-04847B628E02")
WpcProviderSupport;
EXTERN_C const CLSID CLSID_WindowsParentalControls;
class DECLSPEC_UUID("E77CC89B-7401-4c04-8CED-149DB35ADD04")
WindowsParentalControls;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wpcapi_0000_0009_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
