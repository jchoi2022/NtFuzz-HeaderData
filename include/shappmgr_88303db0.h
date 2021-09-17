#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IShellApp IShellApp;
typedef interface IPublishedApp IPublishedApp;
typedef interface IPublishedApp2 IPublishedApp2;
typedef interface IEnumPublishedApps IEnumPublishedApps;
typedef interface IAppPublisher IAppPublisher;
#include "oaidl.h"
#include "ocidl.h"
#include "appmgmt.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0000_v0_0_s_ifspec;
typedef
enum _tagAppInfoFlags
    {
        AIM_DISPLAYNAME = 0x1,
        AIM_VERSION = 0x2,
        AIM_PUBLISHER = 0x4,
        AIM_PRODUCTID = 0x8,
        AIM_REGISTEREDOWNER = 0x10,
        AIM_REGISTEREDCOMPANY = 0x20,
        AIM_LANGUAGE = 0x40,
        AIM_SUPPORTURL = 0x80,
        AIM_SUPPORTTELEPHONE = 0x100,
        AIM_HELPLINK = 0x200,
        AIM_INSTALLLOCATION = 0x400,
        AIM_INSTALLSOURCE = 0x800,
        AIM_INSTALLDATE = 0x1000,
        AIM_CONTACT = 0x4000,
        AIM_COMMENTS = 0x8000,
        AIM_IMAGE = 0x20000,
        AIM_READMEURL = 0x40000,
        AIM_UPDATEINFOURL = 0x80000
    } APPINFODATAFLAGS;
typedef struct _AppInfoData
    {
    DWORD cbSize;
    DWORD dwMask;
    LPWSTR pszDisplayName;
    LPWSTR pszVersion;
    LPWSTR pszPublisher;
    LPWSTR pszProductID;
    LPWSTR pszRegisteredOwner;
    LPWSTR pszRegisteredCompany;
    LPWSTR pszLanguage;
    LPWSTR pszSupportUrl;
    LPWSTR pszSupportTelephone;
    LPWSTR pszHelpLink;
    LPWSTR pszInstallLocation;
    LPWSTR pszInstallSource;
    LPWSTR pszInstallDate;
    LPWSTR pszContact;
    LPWSTR pszComments;
    LPWSTR pszImage;
    LPWSTR pszReadmeUrl;
    LPWSTR pszUpdateInfoUrl;
    } APPINFODATA;
typedef struct _AppInfoData *PAPPINFODATA;
typedef
enum _tagAppActionFlags
    {
        APPACTION_INSTALL = 0x1,
        APPACTION_UNINSTALL = 0x2,
        APPACTION_MODIFY = 0x4,
        APPACTION_REPAIR = 0x8,
        APPACTION_UPGRADE = 0x10,
        APPACTION_CANGETSIZE = 0x20,
        APPACTION_MODIFYREMOVE = 0x80,
        APPACTION_ADDLATER = 0x100,
        APPACTION_UNSCHEDULE = 0x200
    } APPACTIONFLAGS;
typedef struct _tagSlowAppInfo
    {
    ULONGLONG ullSize;
    FILETIME ftLastUsed;
    int iTimesUsed;
    LPWSTR pszImage;
    } SLOWAPPINFO;
typedef struct _tagSlowAppInfo *PSLOWAPPINFO;
EXTERN_C const IID IID_IShellApp;
    typedef struct IShellAppVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellApp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellApp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellApp * This);
        HRESULT ( STDMETHODCALLTYPE *GetAppInfo )(
            __RPC__in IShellApp * This,
                            __RPC__inout PAPPINFODATA pai);
        HRESULT ( STDMETHODCALLTYPE *GetPossibleActions )(
            __RPC__in IShellApp * This,
                        __RPC__out DWORD *pdwActions);
        HRESULT ( STDMETHODCALLTYPE *GetSlowAppInfo )(
            __RPC__in IShellApp * This,
                        __RPC__out PSLOWAPPINFO psaid);
        HRESULT ( STDMETHODCALLTYPE *GetCachedSlowAppInfo )(
            __RPC__in IShellApp * This,
                        __RPC__out PSLOWAPPINFO psaid);
        HRESULT ( STDMETHODCALLTYPE *IsInstalled )(
            __RPC__in IShellApp * This);
        END_INTERFACE
    } IShellAppVtbl;
    interface IShellApp
    {
        CONST_VTBL struct IShellAppVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAppInfo(This,pai) )
    ( (This)->lpVtbl -> GetPossibleActions(This,pdwActions) )
    ( (This)->lpVtbl -> GetSlowAppInfo(This,psaid) )
    ( (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid) )
    ( (This)->lpVtbl -> IsInstalled(This) )
typedef
enum _tagPublishedAppInfoFlags
    {
        PAI_SOURCE = 0x1,
        PAI_ASSIGNEDTIME = 0x2,
        PAI_PUBLISHEDTIME = 0x4,
        PAI_SCHEDULEDTIME = 0x8,
        PAI_EXPIRETIME = 0x10
    } PUBAPPINFOFLAGS;
typedef struct _PubAppInfo
    {
    DWORD cbSize;
    DWORD dwMask;
    LPWSTR pszSource;
    SYSTEMTIME stAssigned;
    SYSTEMTIME stPublished;
    SYSTEMTIME stScheduled;
    SYSTEMTIME stExpire;
    } PUBAPPINFO;
typedef struct _PubAppInfo *PPUBAPPINFO;
EXTERN_C const IID IID_IPublishedApp;
    typedef struct IPublishedAppVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPublishedApp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPublishedApp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPublishedApp * This);
        HRESULT ( STDMETHODCALLTYPE *GetAppInfo )(
            __RPC__in IPublishedApp * This,
                            __RPC__inout PAPPINFODATA pai);
        HRESULT ( STDMETHODCALLTYPE *GetPossibleActions )(
            __RPC__in IPublishedApp * This,
                        __RPC__out DWORD *pdwActions);
        HRESULT ( STDMETHODCALLTYPE *GetSlowAppInfo )(
            __RPC__in IPublishedApp * This,
                        __RPC__out PSLOWAPPINFO psaid);
        HRESULT ( STDMETHODCALLTYPE *GetCachedSlowAppInfo )(
            __RPC__in IPublishedApp * This,
                        __RPC__out PSLOWAPPINFO psaid);
        HRESULT ( STDMETHODCALLTYPE *IsInstalled )(
            __RPC__in IPublishedApp * This);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in IPublishedApp * This,
                               __RPC__in_opt LPSYSTEMTIME pstInstall);
        HRESULT ( STDMETHODCALLTYPE *GetPublishedAppInfo )(
            __RPC__in IPublishedApp * This,
                            __RPC__inout PPUBAPPINFO ppai);
        HRESULT ( STDMETHODCALLTYPE *Unschedule )(
            __RPC__in IPublishedApp * This);
        END_INTERFACE
    } IPublishedAppVtbl;
    interface IPublishedApp
    {
        CONST_VTBL struct IPublishedAppVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAppInfo(This,pai) )
    ( (This)->lpVtbl -> GetPossibleActions(This,pdwActions) )
    ( (This)->lpVtbl -> GetSlowAppInfo(This,psaid) )
    ( (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid) )
    ( (This)->lpVtbl -> IsInstalled(This) )
    ( (This)->lpVtbl -> Install(This,pstInstall) )
    ( (This)->lpVtbl -> GetPublishedAppInfo(This,ppai) )
    ( (This)->lpVtbl -> Unschedule(This) )
EXTERN_C const IID IID_IPublishedApp2;
    typedef struct IPublishedApp2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPublishedApp2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPublishedApp2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPublishedApp2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAppInfo )(
            __RPC__in IPublishedApp2 * This,
                            __RPC__inout PAPPINFODATA pai);
        HRESULT ( STDMETHODCALLTYPE *GetPossibleActions )(
            __RPC__in IPublishedApp2 * This,
                        __RPC__out DWORD *pdwActions);
        HRESULT ( STDMETHODCALLTYPE *GetSlowAppInfo )(
            __RPC__in IPublishedApp2 * This,
                        __RPC__out PSLOWAPPINFO psaid);
        HRESULT ( STDMETHODCALLTYPE *GetCachedSlowAppInfo )(
            __RPC__in IPublishedApp2 * This,
                        __RPC__out PSLOWAPPINFO psaid);
        HRESULT ( STDMETHODCALLTYPE *IsInstalled )(
            __RPC__in IPublishedApp2 * This);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in IPublishedApp2 * This,
                               __RPC__in_opt LPSYSTEMTIME pstInstall);
        HRESULT ( STDMETHODCALLTYPE *GetPublishedAppInfo )(
            __RPC__in IPublishedApp2 * This,
                            __RPC__inout PPUBAPPINFO ppai);
        HRESULT ( STDMETHODCALLTYPE *Unschedule )(
            __RPC__in IPublishedApp2 * This);
        HRESULT ( STDMETHODCALLTYPE *Install2 )(
            __RPC__in IPublishedApp2 * This,
                               __RPC__in_opt LPSYSTEMTIME pstInstall,
                               __RPC__in_opt HWND hwndParent);
        END_INTERFACE
    } IPublishedApp2Vtbl;
    interface IPublishedApp2
    {
        CONST_VTBL struct IPublishedApp2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAppInfo(This,pai) )
    ( (This)->lpVtbl -> GetPossibleActions(This,pdwActions) )
    ( (This)->lpVtbl -> GetSlowAppInfo(This,psaid) )
    ( (This)->lpVtbl -> GetCachedSlowAppInfo(This,psaid) )
    ( (This)->lpVtbl -> IsInstalled(This) )
    ( (This)->lpVtbl -> Install(This,pstInstall) )
    ( (This)->lpVtbl -> GetPublishedAppInfo(This,ppai) )
    ( (This)->lpVtbl -> Unschedule(This) )
    ( (This)->lpVtbl -> Install2(This,pstInstall,hwndParent) )
EXTERN_C const IID IID_IEnumPublishedApps;
    typedef struct IEnumPublishedAppsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumPublishedApps * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumPublishedApps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumPublishedApps * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumPublishedApps * This,
                        __RPC__deref_out_opt IPublishedApp **pia);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumPublishedApps * This);
        END_INTERFACE
    } IEnumPublishedAppsVtbl;
    interface IEnumPublishedApps
    {
        CONST_VTBL struct IEnumPublishedAppsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,pia) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_IAppPublisher;
    typedef struct IAppPublisherVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppPublisher * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppPublisher * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppPublisher * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfCategories )(
            __RPC__in IAppPublisher * This,
                        __RPC__out DWORD *pdwCat);
        HRESULT ( STDMETHODCALLTYPE *GetCategories )(
            __RPC__in IAppPublisher * This,
                        __RPC__out APPCATEGORYINFOLIST *pAppCategoryList);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfApps )(
            __RPC__in IAppPublisher * This,
                        __RPC__out DWORD *pdwApps);
        HRESULT ( STDMETHODCALLTYPE *EnumApps )(
            __RPC__in IAppPublisher * This,
                               __RPC__in_opt GUID *pAppCategoryId,
                        __RPC__deref_out_opt IEnumPublishedApps **ppepa);
        END_INTERFACE
    } IAppPublisherVtbl;
    interface IAppPublisher
    {
        CONST_VTBL struct IAppPublisherVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfCategories(This,pdwCat) )
    ( (This)->lpVtbl -> GetCategories(This,pAppCategoryList) )
    ( (This)->lpVtbl -> GetNumberOfApps(This,pdwApps) )
    ( (This)->lpVtbl -> EnumApps(This,pAppCategoryId,ppepa) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shappmgr_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
