#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumItemProperties IEnumItemProperties;
typedef interface ISubscriptionItem ISubscriptionItem;
typedef interface IEnumSubscription IEnumSubscription;
typedef interface ISubscriptionMgr ISubscriptionMgr;
typedef interface ISubscriptionMgr2 ISubscriptionMgr2;
typedef class SubscriptionMgr SubscriptionMgr;
#include "unknwn.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
typedef GUID SUBSCRIPTIONCOOKIE;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumItemProperties *LPENUMITEMPROPERTIES;
typedef struct _tagITEMPROP
    {
    VARIANT variantValue;
    LPWSTR pwszName;
    } ITEMPROP;
typedef struct _tagITEMPROP *LPITEMPROP;
EXTERN_C const IID IID_IEnumItemProperties;
    typedef struct IEnumItemPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumItemProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumItemProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumItemProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumItemProperties * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) ITEMPROP *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumItemProperties * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumItemProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumItemProperties * This,
                        __RPC__deref_out_opt IEnumItemProperties **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumItemProperties * This,
                        __RPC__out ULONG *pnCount);
        END_INTERFACE
    } IEnumItemPropertiesVtbl;
    interface IEnumItemProperties
    {
        CONST_VTBL struct IEnumItemPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,pnCount) )
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer ISubscriptionItem *LPSUBSCRIPTIONITEM;
typedef struct tagSUBSCRIPTIONITEMINFO
    {
    ULONG cbSize;
    DWORD dwFlags;
    DWORD dwPriority;
    SUBSCRIPTIONCOOKIE ScheduleGroup;
    CLSID clsidAgent;
    } SUBSCRIPTIONITEMINFO;
EXTERN_C const IID IID_ISubscriptionItem;
    typedef struct ISubscriptionItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISubscriptionItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISubscriptionItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISubscriptionItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetCookie )(
            __RPC__in ISubscriptionItem * This,
                        __RPC__out SUBSCRIPTIONCOOKIE *pCookie);
        HRESULT ( STDMETHODCALLTYPE *GetSubscriptionItemInfo )(
            __RPC__in ISubscriptionItem * This,
                        __RPC__out SUBSCRIPTIONITEMINFO *pSubscriptionItemInfo);
        HRESULT ( STDMETHODCALLTYPE *SetSubscriptionItemInfo )(
            __RPC__in ISubscriptionItem * This,
                       __RPC__in const SUBSCRIPTIONITEMINFO *pSubscriptionItemInfo);
        HRESULT ( STDMETHODCALLTYPE *ReadProperties )(
            __RPC__in ISubscriptionItem * This,
            ULONG nCount,
                                __RPC__in_ecount_full(nCount) const LPCWSTR rgwszName[ ],
                                 __RPC__out_ecount_full(nCount) VARIANT rgValue[ ]);
        HRESULT ( STDMETHODCALLTYPE *WriteProperties )(
            __RPC__in ISubscriptionItem * This,
            ULONG nCount,
                                __RPC__in_ecount_full(nCount) const LPCWSTR rgwszName[ ],
                                __RPC__in_ecount_full(nCount) const VARIANT rgValue[ ]);
        HRESULT ( STDMETHODCALLTYPE *EnumProperties )(
            __RPC__in ISubscriptionItem * This,
                        __RPC__deref_out_opt IEnumItemProperties **ppEnumItemProperties);
        HRESULT ( STDMETHODCALLTYPE *NotifyChanged )(
            __RPC__in ISubscriptionItem * This);
        END_INTERFACE
    } ISubscriptionItemVtbl;
    interface ISubscriptionItem
    {
        CONST_VTBL struct ISubscriptionItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCookie(This,pCookie) )
    ( (This)->lpVtbl -> GetSubscriptionItemInfo(This,pSubscriptionItemInfo) )
    ( (This)->lpVtbl -> SetSubscriptionItemInfo(This,pSubscriptionItemInfo) )
    ( (This)->lpVtbl -> ReadProperties(This,nCount,rgwszName,rgValue) )
    ( (This)->lpVtbl -> WriteProperties(This,nCount,rgwszName,rgValue) )
    ( (This)->lpVtbl -> EnumProperties(This,ppEnumItemProperties) )
    ( (This)->lpVtbl -> NotifyChanged(This) )
typedef __RPC_unique_pointer IEnumSubscription *LPENUMSUBSCRIPTION;
EXTERN_C const IID IID_IEnumSubscription;
    typedef struct IEnumSubscriptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSubscription * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSubscription * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSubscription * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSubscription * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) SUBSCRIPTIONCOOKIE *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSubscription * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSubscription * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSubscription * This,
                        __RPC__deref_out_opt IEnumSubscription **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumSubscription * This,
                        __RPC__out ULONG *pnCount);
        END_INTERFACE
    } IEnumSubscriptionVtbl;
    interface IEnumSubscription
    {
        CONST_VTBL struct IEnumSubscriptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,pnCount) )
EXTERN_C const IID LIBID_SubscriptionMgr;
typedef
enum SUBSCRIPTIONTYPE
    {
        SUBSTYPE_URL = 0,
        SUBSTYPE_CHANNEL = 1,
        SUBSTYPE_DESKTOPURL = 2,
        SUBSTYPE_EXTERNAL = 3,
        SUBSTYPE_DESKTOPCHANNEL = 4
    } SUBSCRIPTIONTYPE;
typedef
enum SUBSCRIPTIONINFOFLAGS
    {
        SUBSINFO_SCHEDULE = 0x1,
        SUBSINFO_RECURSE = 0x2,
        SUBSINFO_WEBCRAWL = 0x4,
        SUBSINFO_MAILNOT = 0x8,
        SUBSINFO_MAXSIZEKB = 0x10,
        SUBSINFO_USER = 0x20,
        SUBSINFO_PASSWORD = 0x40,
        SUBSINFO_TASKFLAGS = 0x100,
        SUBSINFO_GLEAM = 0x200,
        SUBSINFO_CHANGESONLY = 0x400,
        SUBSINFO_CHANNELFLAGS = 0x800,
        SUBSINFO_FRIENDLYNAME = 0x2000,
        SUBSINFO_NEEDPASSWORD = 0x4000,
        SUBSINFO_TYPE = 0x8000
    } SUBSCRIPTIONINFOFLAGS;
typedef
enum CREATESUBSCRIPTIONFLAGS
    {
        CREATESUBS_ADDTOFAVORITES = 0x1,
        CREATESUBS_FROMFAVORITES = 0x2,
        CREATESUBS_NOUI = 0x4,
        CREATESUBS_NOSAVE = 0x8,
        CREATESUBS_SOFTWAREUPDATE = 0x10
    } CREATESUBSCRIPTIONFLAGS;
typedef
enum SUBSCRIPTIONSCHEDULE
    {
        SUBSSCHED_AUTO = 0,
        SUBSSCHED_DAILY = 1,
        SUBSSCHED_WEEKLY = 2,
        SUBSSCHED_CUSTOM = 3,
        SUBSSCHED_MANUAL = 4
    } SUBSCRIPTIONSCHEDULE;
typedef struct _tagSubscriptionInfo
    {
    DWORD cbSize;
    DWORD fUpdateFlags;
    SUBSCRIPTIONSCHEDULE schedule;
    CLSID customGroupCookie;
    LPVOID pTrigger;
    DWORD dwRecurseLevels;
    DWORD fWebcrawlerFlags;
    BOOL bMailNotification;
    BOOL bGleam;
    BOOL bChangesOnly;
    BOOL bNeedPassword;
    DWORD fChannelFlags;
    BSTR bstrUserName;
    BSTR bstrPassword;
    BSTR bstrFriendlyName;
    DWORD dwMaxSizeKB;
    SUBSCRIPTIONTYPE subType;
    DWORD fTaskFlags;
    DWORD dwReserved;
    } SUBSCRIPTIONINFO;
typedef struct _tagSubscriptionInfo *LPSUBSCRIPTIONINFO;
typedef struct _tagSubscriptionInfo *PSUBSCRIPTIONINFO;
EXTERN_C const IID IID_ISubscriptionMgr;
    typedef struct ISubscriptionMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISubscriptionMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISubscriptionMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISubscriptionMgr * This);
        HRESULT ( STDMETHODCALLTYPE *DeleteSubscription )(
            __RPC__in ISubscriptionMgr * This,
                       __RPC__in LPCWSTR pwszURL,
                               __RPC__in_opt HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *UpdateSubscription )(
            __RPC__in ISubscriptionMgr * This,
                       __RPC__in LPCWSTR pwszURL);
        HRESULT ( STDMETHODCALLTYPE *UpdateAll )(
            __RPC__in ISubscriptionMgr * This);
        HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in ISubscriptionMgr * This,
                       __RPC__in LPCWSTR pwszURL,
                        __RPC__out BOOL *pfSubscribed);
        HRESULT ( STDMETHODCALLTYPE *GetSubscriptionInfo )(
            __RPC__in ISubscriptionMgr * This,
                       __RPC__in LPCWSTR pwszURL,
                        __RPC__out SUBSCRIPTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultInfo )(
            __RPC__in ISubscriptionMgr * This,
                       SUBSCRIPTIONTYPE subType,
                        __RPC__out SUBSCRIPTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *ShowSubscriptionProperties )(
            __RPC__in ISubscriptionMgr * This,
                       __RPC__in LPCWSTR pwszURL,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *CreateSubscription )(
            __RPC__in ISubscriptionMgr * This,
                       __RPC__in HWND hwnd,
                       __RPC__in LPCWSTR pwszURL,
                       __RPC__in LPCWSTR pwszFriendlyName,
                       DWORD dwFlags,
                       SUBSCRIPTIONTYPE subsType,
                            __RPC__inout SUBSCRIPTIONINFO *pInfo);
        END_INTERFACE
    } ISubscriptionMgrVtbl;
    interface ISubscriptionMgr
    {
        CONST_VTBL struct ISubscriptionMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeleteSubscription(This,pwszURL,hwnd) )
    ( (This)->lpVtbl -> UpdateSubscription(This,pwszURL) )
    ( (This)->lpVtbl -> UpdateAll(This) )
    ( (This)->lpVtbl -> IsSubscribed(This,pwszURL,pfSubscribed) )
    ( (This)->lpVtbl -> GetSubscriptionInfo(This,pwszURL,pInfo) )
    ( (This)->lpVtbl -> GetDefaultInfo(This,subType,pInfo) )
    ( (This)->lpVtbl -> ShowSubscriptionProperties(This,pwszURL,hwnd) )
    ( (This)->lpVtbl -> CreateSubscription(This,hwnd,pwszURL,pwszFriendlyName,dwFlags,subsType,pInfo) )
EXTERN_C const IID IID_ISubscriptionMgr2;
    typedef struct ISubscriptionMgr2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISubscriptionMgr2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISubscriptionMgr2 * This);
        HRESULT ( STDMETHODCALLTYPE *DeleteSubscription )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in LPCWSTR pwszURL,
                               __RPC__in_opt HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *UpdateSubscription )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in LPCWSTR pwszURL);
        HRESULT ( STDMETHODCALLTYPE *UpdateAll )(
            __RPC__in ISubscriptionMgr2 * This);
        HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in LPCWSTR pwszURL,
                        __RPC__out BOOL *pfSubscribed);
        HRESULT ( STDMETHODCALLTYPE *GetSubscriptionInfo )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in LPCWSTR pwszURL,
                        __RPC__out SUBSCRIPTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultInfo )(
            __RPC__in ISubscriptionMgr2 * This,
                       SUBSCRIPTIONTYPE subType,
                        __RPC__out SUBSCRIPTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *ShowSubscriptionProperties )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in LPCWSTR pwszURL,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *CreateSubscription )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in HWND hwnd,
                       __RPC__in LPCWSTR pwszURL,
                       __RPC__in LPCWSTR pwszFriendlyName,
                       DWORD dwFlags,
                       SUBSCRIPTIONTYPE subsType,
                            __RPC__inout SUBSCRIPTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetItemFromURL )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in LPCWSTR pwszURL,
                        __RPC__deref_out_opt ISubscriptionItem **ppSubscriptionItem);
        HRESULT ( STDMETHODCALLTYPE *GetItemFromCookie )(
            __RPC__in ISubscriptionMgr2 * This,
                       __RPC__in const SUBSCRIPTIONCOOKIE *pSubscriptionCookie,
                        __RPC__deref_out_opt ISubscriptionItem **ppSubscriptionItem);
        HRESULT ( STDMETHODCALLTYPE *GetSubscriptionRunState )(
            __RPC__in ISubscriptionMgr2 * This,
                       DWORD dwNumCookies,
                                __RPC__in_ecount_full(dwNumCookies) const SUBSCRIPTIONCOOKIE *pCookies,
                                 __RPC__out_ecount_full(dwNumCookies) DWORD *pdwRunState);
        HRESULT ( STDMETHODCALLTYPE *EnumSubscriptions )(
            __RPC__in ISubscriptionMgr2 * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IEnumSubscription **ppEnumSubscriptions);
        HRESULT ( STDMETHODCALLTYPE *UpdateItems )(
            __RPC__in ISubscriptionMgr2 * This,
                       DWORD dwFlags,
                       DWORD dwNumCookies,
                                __RPC__in_ecount_full(dwNumCookies) const SUBSCRIPTIONCOOKIE *pCookies);
        HRESULT ( STDMETHODCALLTYPE *AbortItems )(
            __RPC__in ISubscriptionMgr2 * This,
                       DWORD dwNumCookies,
                                __RPC__in_ecount_full(dwNumCookies) const SUBSCRIPTIONCOOKIE *pCookies);
        HRESULT ( STDMETHODCALLTYPE *AbortAll )(
            __RPC__in ISubscriptionMgr2 * This);
        END_INTERFACE
    } ISubscriptionMgr2Vtbl;
    interface ISubscriptionMgr2
    {
        CONST_VTBL struct ISubscriptionMgr2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DeleteSubscription(This,pwszURL,hwnd) )
    ( (This)->lpVtbl -> UpdateSubscription(This,pwszURL) )
    ( (This)->lpVtbl -> UpdateAll(This) )
    ( (This)->lpVtbl -> IsSubscribed(This,pwszURL,pfSubscribed) )
    ( (This)->lpVtbl -> GetSubscriptionInfo(This,pwszURL,pInfo) )
    ( (This)->lpVtbl -> GetDefaultInfo(This,subType,pInfo) )
    ( (This)->lpVtbl -> ShowSubscriptionProperties(This,pwszURL,hwnd) )
    ( (This)->lpVtbl -> CreateSubscription(This,hwnd,pwszURL,pwszFriendlyName,dwFlags,subsType,pInfo) )
    ( (This)->lpVtbl -> GetItemFromURL(This,pwszURL,ppSubscriptionItem) )
    ( (This)->lpVtbl -> GetItemFromCookie(This,pSubscriptionCookie,ppSubscriptionItem) )
    ( (This)->lpVtbl -> GetSubscriptionRunState(This,dwNumCookies,pCookies,pdwRunState) )
    ( (This)->lpVtbl -> EnumSubscriptions(This,dwFlags,ppEnumSubscriptions) )
    ( (This)->lpVtbl -> UpdateItems(This,dwFlags,dwNumCookies,pCookies) )
    ( (This)->lpVtbl -> AbortItems(This,dwNumCookies,pCookies) )
    ( (This)->lpVtbl -> AbortAll(This) )
EXTERN_C const CLSID CLSID_SubscriptionMgr;
class DECLSPEC_UUID("abbe31d0-6dae-11d0-beca-00c04fd940be")
SubscriptionMgr;
EXTERN_C const CLSID CLSID_WebCrawlerAgent;
EXTERN_C const CLSID CLSID_DialAgent;
EXTERN_C const CLSID CLSID_CDLAgent;
typedef
enum DELIVERY_AGENT_FLAGS
    {
        DELIVERY_AGENT_FLAG_NO_BROADCAST = 0x4,
        DELIVERY_AGENT_FLAG_NO_RESTRICTIONS = 0x8,
        DELIVERY_AGENT_FLAG_SILENT_DIAL = 0x10
    } DELIVERY_AGENT_FLAGS;
typedef
enum WEBCRAWL_RECURSEFLAGS
    {
        WEBCRAWL_DONT_MAKE_STICKY = 0x1,
        WEBCRAWL_GET_IMAGES = 0x2,
        WEBCRAWL_GET_VIDEOS = 0x4,
        WEBCRAWL_GET_BGSOUNDS = 0x8,
        WEBCRAWL_GET_CONTROLS = 0x10,
        WEBCRAWL_LINKS_ELSEWHERE = 0x20,
        WEBCRAWL_IGNORE_ROBOTSTXT = 0x80,
        WEBCRAWL_ONLY_LINKS_TO_HTML = 0x100
    } WEBCRAWL_RECURSEFLAGS;
typedef
enum CHANNEL_AGENT_FLAGS
    {
        CHANNEL_AGENT_DYNAMIC_SCHEDULE = 0x1,
        CHANNEL_AGENT_PRECACHE_SOME = 0x2,
        CHANNEL_AGENT_PRECACHE_ALL = 0x4,
        CHANNEL_AGENT_PRECACHE_SCRNSAVER = 0x8
    } CHANNEL_AGENT_FLAGS;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subsmgr_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
