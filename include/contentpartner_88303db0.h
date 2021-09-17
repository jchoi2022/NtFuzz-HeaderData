#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPContentContainer IWMPContentContainer;
typedef interface IWMPContentContainerList IWMPContentContainerList;
typedef interface IWMPContentPartnerCallback IWMPContentPartnerCallback;
typedef interface IWMPContentPartner IWMPContentPartner;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
static const WCHAR g_szContentPartnerInfo_LoginState[] = L"LoginState";
static const WCHAR g_szContentPartnerInfo_MediaPlayerAccountType[] = L"MediaPlayerAccountType";
static const WCHAR g_szContentPartnerInfo_AccountType[] = L"AccountType";
static const WCHAR g_szContentPartnerInfo_HasCachedCredentials[] = L"HasCachedCredentials";
static const WCHAR g_szContentPartnerInfo_LicenseRefreshAdvanceWarning[] = L"LicenseRefreshAdvanceWarning";
static const WCHAR g_szContentPartnerInfo_PurchasedTrackRequiresReDownload[] = L"PurchasedTrackRequiresReDownload";
static const WCHAR g_szContentPartnerInfo_MaximumTrackPurchasePerPurchase[] = L"MaximumNumberOfTracksPerPurchase";
static const WCHAR g_szContentPartnerInfo_AccountBalance[] = L"AccountBalance";
static const WCHAR g_szContentPartnerInfo_UserName[] = L"UserName";
static const WCHAR g_szMediaPlayerTask_Burn[] = L"Burn";
static const WCHAR g_szMediaPlayerTask_Browse[] = L"Browse";
static const WCHAR g_szMediaPlayerTask_Sync[] = L"Sync";
static const WCHAR g_szItemInfo_PopupURL[] = L"Popup";
static const WCHAR g_szItemInfo_AuthenticationSuccessURL[] = L"AuthenticationSuccessURL";
static const WCHAR g_szItemInfo_LoginFailureURL[] = L"LoginFailureURL";
static const WCHAR g_szItemInfo_HTMLViewURL[] = L"HTMLViewURL";
static const WCHAR g_szItemInfo_PopupCaption[] = L"PopupCaption";
static const WCHAR g_szItemInfo_ALTLoginURL[] = L"ALTLoginURL";
static const WCHAR g_szItemInfo_ALTLoginCaption[] = L"ALTLoginCaption";
static const WCHAR g_szItemInfo_ForgetPasswordURL[] = L"ForgotPassword";
static const WCHAR g_szItemInfo_CreateAccountURL[] = L"CreateAccount";
static const WCHAR g_szItemInfo_ArtistArtURL[] = L"ArtistArt";
static const WCHAR g_szItemInfo_AlbumArtURL[] = L"AlbumArt";
static const WCHAR g_szItemInfo_ListArtURL[] = L"ListArt";
static const WCHAR g_szItemInfo_GenreArtURL[] = L"GenreArt";
static const WCHAR g_szItemInfo_SubGenreArtURL[] = L"SubGenreArt";
static const WCHAR g_szItemInfo_RadioArtURL[] = L"RadioArt";
static const WCHAR g_szItemInfo_TreeListIconURL[] = L"CPListIDIcon";
static const WCHAR g_szItemInfo_ErrorDescription[] = L"CPErrorDescription";
static const WCHAR g_szItemInfo_ErrorURL[] = L"CPErrorURL";
static const WCHAR g_szItemInfo_ErrorURLLinkText[] = L"CPErrorURLLinkText";
static const WCHAR g_szUnknownLocation[] = L"UnknownLocation";
static const WCHAR g_szRootLocation[] = L"RootLocation";
static const WCHAR g_szFlyoutMenu[] = L"FlyoutMenu";
static const WCHAR g_szOnlineStore[] = L"OnlineStore";
static const WCHAR g_szVideoRecent[] = L"VideoRecent";
static const WCHAR g_szVideoRoot[] = L"VideoRoot";
static const WCHAR g_szCPListID[] = L"CPListID";
static const WCHAR g_szAllCPListIDs[] = L"AllCPListIDs";
static const WCHAR g_szCPTrackID[] = L"CPTrackID";
static const WCHAR g_szAllCPTrackIDs[] = L"AllCPTrackIDs";
static const WCHAR g_szCPArtistID[] = L"CPArtistID";
static const WCHAR g_szAllCPArtistIDs[] = L"AllCPArtistIDs";
static const WCHAR g_szCPAlbumID[] = L"CPAlbumID";
static const WCHAR g_szAllCPAlbumIDs[] = L"AllCPAlbumIDs";
static const WCHAR g_szCPGenreID[] = L"CPGenreID";
static const WCHAR g_szAllCPGenreIDs[] = L"AllCPGenreIDs";
static const WCHAR g_szCPAlbumSubGenreID[] = L"CPAlbumSubGenreID";
static const WCHAR g_szAllCPAlbumSubGenreIDs[] = L"AllCPAlbumSubGenreIDs";
static const WCHAR g_szReleaseDateYear[] = L"ReleaseDateYear";
static const WCHAR g_szAllReleaseDateYears[] = L"AllReleaseDateYears";
static const WCHAR g_szCPRadioID[] = L"CPRadioID";
static const WCHAR g_szAllCPRadioIDs[] = L"AllCPRadioIDs";
static const WCHAR g_szAuthor[] = L"Author";
static const WCHAR g_szAllAuthors[] = L"AllAuthors";
static const WCHAR g_szWMParentalRating[] = L"WMParentalRating";
static const WCHAR g_szAllWMParentalRatings[] = L"AllWMParentalRatings";
static const WCHAR g_szAllUserEffectiveRatingStarss[] = L"AllUserEffectiveRatingStarss";
static const WCHAR g_szUserEffectiveRatingStars[] = L"UserEffectiveRatingStars";
static const WCHAR g_szUserPlaylist[] = L"UserPlaylist";
static ULONG g_knReservedCPTrackID_NotFound = (DWORD)-1;
static const WCHAR g_szViewMode_Report[] = L"ViewModeReport";
static const WCHAR g_szViewMode_Details[] = L"ViewModeDetails";
static const WCHAR g_szViewMode_Icon[] = L"ViewModeIcon";
static const WCHAR g_szViewMode_Tile[] = L"ViewModeTile";
static const WCHAR g_szViewMode_OrderedList[] = L"ViewModeOrderedList";
static const WCHAR g_szContentPrice_Unknown[] = L"PriceUnknown";
static const WCHAR g_szContentPrice_CannotBuy[] = L"PriceCannotBuy";
static const WCHAR g_szContentPrice_Free[] = L"PriceFree";
static const WCHAR g_szRefreshLicensePlay[] = L"RefreshForPlay";
static const WCHAR g_szRefreshLicenseBurn[] = L"RefreshForBurn";
static const WCHAR g_szRefreshLicenseSync[] = L"RefreshForSync";
static const WCHAR g_szVerifyPermissionSync[] = L"VerifyPermissionSync";
__inline BOOL WMPNotifySubscriptionPluginAddRemove()
{
    BOOL fRet = FALSE;
    UINT msg = RegisterWindowMessageA( "WMPlayer_PluginAddRemove" );
    if( 0 != msg )
     {
        fRet = PostMessage( HWND_BROADCAST, msg, 1, 0 );
     }
     return fRet;
}
typedef
enum WMPPartnerNotification
    {
        wmpsnBackgroundProcessingBegin = 1,
        wmpsnBackgroundProcessingEnd = 2,
        wmpsnCatalogDownloadFailure = 3,
        wmpsnCatalogDownloadComplete = 4
    } WMPPartnerNotification;
typedef
enum WMPCallbackNotification
    {
        wmpcnLoginStateChange = 1,
        wmpcnAuthResult = 2,
        wmpcnLicenseUpdated = 3,
        wmpcnNewCatalogAvailable = 4,
        wmpcnNewPluginAvailable = 5,
        wmpcnDisableRadioSkipping = 6
    } WMPCallbackNotification;
typedef
enum WMPTaskType
    {
        wmpttBrowse = 1,
        wmpttSync = 2,
        wmpttBurn = 3,
        wmpttCurrent = 4
    } WMPTaskType;
typedef struct WMPContextMenuInfo
    {
    DWORD dwID;
    BSTR bstrMenuText;
    BSTR bstrHelpText;
    } WMPContextMenuInfo;
static const WCHAR g_szStationEvent_Started[] = L"TrackStarted";
static const WCHAR g_szStationEvent_Complete[] = L"TrackComplete";
static const WCHAR g_szStationEvent_Skipped[] = L"TrackSkipped";
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPContentContainer;
    typedef struct IWMPContentContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMPContentContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMPContentContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMPContentContainer * This);
        HRESULT ( STDMETHODCALLTYPE *GetID )(
            __RPC__in IWMPContentContainer * This,
                        __RPC__out ULONG *pContentID);
        HRESULT ( STDMETHODCALLTYPE *GetPrice )(
            __RPC__in IWMPContentContainer * This,
                        __RPC__deref_out_opt BSTR *pbstrPrice);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IWMPContentContainer * This,
                        __RPC__deref_out_opt BSTR *pbstrType);
        HRESULT ( STDMETHODCALLTYPE *GetContentCount )(
            __RPC__in IWMPContentContainer * This,
                        __RPC__out ULONG *pcContent);
        HRESULT ( STDMETHODCALLTYPE *GetContentPrice )(
            __RPC__in IWMPContentContainer * This,
                       ULONG idxContent,
                        __RPC__deref_out_opt BSTR *pbstrPrice);
        HRESULT ( STDMETHODCALLTYPE *GetContentID )(
            __RPC__in IWMPContentContainer * This,
                       ULONG idxContent,
                        __RPC__out ULONG *pContentID);
        END_INTERFACE
    } IWMPContentContainerVtbl;
    interface IWMPContentContainer
    {
        CONST_VTBL struct IWMPContentContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetID(This,pContentID) )
    ( (This)->lpVtbl -> GetPrice(This,pbstrPrice) )
    ( (This)->lpVtbl -> GetType(This,pbstrType) )
    ( (This)->lpVtbl -> GetContentCount(This,pcContent) )
    ( (This)->lpVtbl -> GetContentPrice(This,idxContent,pbstrPrice) )
    ( (This)->lpVtbl -> GetContentID(This,idxContent,pContentID) )
typedef
enum WMPTransactionType
    {
        wmpttNoTransaction = 0,
        wmpttDownload = 1,
        wmpttBuy = 2
    } WMPTransactionType;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPContentContainerList;
    typedef struct IWMPContentContainerListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMPContentContainerList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMPContentContainerList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMPContentContainerList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTransactionType )(
            __RPC__in IWMPContentContainerList * This,
                        __RPC__out WMPTransactionType *pwmptt);
        HRESULT ( STDMETHODCALLTYPE *GetContainerCount )(
            __RPC__in IWMPContentContainerList * This,
                        __RPC__out ULONG *pcContainer);
        HRESULT ( STDMETHODCALLTYPE *GetContainer )(
            __RPC__in IWMPContentContainerList * This,
                       ULONG idxContainer,
                        __RPC__deref_out_opt IWMPContentContainer **ppContent);
        END_INTERFACE
    } IWMPContentContainerListVtbl;
    interface IWMPContentContainerList
    {
        CONST_VTBL struct IWMPContentContainerListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTransactionType(This,pwmptt) )
    ( (This)->lpVtbl -> GetContainerCount(This,pcContainer) )
    ( (This)->lpVtbl -> GetContainer(This,idxContainer,ppContent) )
typedef
enum WMPTemplateSize
    {
        wmptsSmall = 0,
        wmptsMedium = ( wmptsSmall + 1 ) ,
        wmptsLarge = ( wmptsMedium + 1 )
    } WMPTemplateSize;
typedef
enum WMPStreamingType
    {
        wmpstUnknown = 0,
        wmpstMusic = 1,
        wmpstVideo = 2,
        wmpstRadio = 3
    } WMPStreamingType;
typedef
enum WMPAccountType
    {
        wmpatBuyOnly = 1,
        wmpatSubscription = 2,
        wmpatJanus = 3
    } WMPAccountType;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPContentPartnerCallback;
    typedef struct IWMPContentPartnerCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMPContentPartnerCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMPContentPartnerCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMPContentPartnerCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IWMPContentPartnerCallback * This,
                       WMPCallbackNotification type,
                       __RPC__in VARIANT *pContext);
        HRESULT ( STDMETHODCALLTYPE *BuyComplete )(
            __RPC__in IWMPContentPartnerCallback * This,
                       HRESULT hrResult,
                       DWORD dwBuyCookie);
        HRESULT ( STDMETHODCALLTYPE *DownloadTrack )(
            __RPC__in IWMPContentPartnerCallback * This,
                       DWORD cookie,
                       __RPC__in BSTR bstrTrackURL,
                       DWORD dwServiceTrackID,
                       __RPC__in BSTR bstrDownloadParams,
                       HRESULT hrDownload);
        HRESULT ( STDMETHODCALLTYPE *GetCatalogVersion )(
            __RPC__in IWMPContentPartnerCallback * This,
                        __RPC__out DWORD *pdwVersion,
                        __RPC__out DWORD *pdwSchemaVersion,
                        __RPC__out LCID *plcid);
        HRESULT ( STDMETHODCALLTYPE *UpdateDeviceComplete )(
            __RPC__in IWMPContentPartnerCallback * This,
                       __RPC__in BSTR bstrDeviceName);
        HRESULT ( STDMETHODCALLTYPE *ChangeView )(
            __RPC__in IWMPContentPartnerCallback * This,
                       __RPC__in BSTR bstrType,
                       __RPC__in BSTR bstrID,
                       __RPC__in BSTR bstrFilter);
        HRESULT ( STDMETHODCALLTYPE *AddListContents )(
            __RPC__in IWMPContentPartnerCallback * This,
                       DWORD dwListCookie,
                       DWORD cItems,
                                __RPC__in_ecount_full(cItems) DWORD *prgItems);
        HRESULT ( STDMETHODCALLTYPE *ListContentsComplete )(
            __RPC__in IWMPContentPartnerCallback * This,
                       DWORD dwListCookie,
                       HRESULT hrSuccess);
        HRESULT ( STDMETHODCALLTYPE *SendMessageComplete )(
            __RPC__in IWMPContentPartnerCallback * This,
                       __RPC__in BSTR bstrMsg,
                       __RPC__in BSTR bstrParam,
                       __RPC__in BSTR bstrResult);
        HRESULT ( STDMETHODCALLTYPE *GetContentIDsInLibrary )(
            __RPC__in IWMPContentPartnerCallback * This,
                        __RPC__out ULONG *pcContentIDs,
                                          __RPC__deref_out_ecount_full_opt(*pcContentIDs) ULONG **pprgIDs);
        HRESULT ( STDMETHODCALLTYPE *RefreshLicenseComplete )(
            __RPC__in IWMPContentPartnerCallback * This,
                       DWORD dwCookie,
                       ULONG contentID,
                       HRESULT hrRefresh);
        HRESULT ( STDMETHODCALLTYPE *ShowPopup )(
            __RPC__in IWMPContentPartnerCallback * This,
                       long lIndex,
                       __RPC__in BSTR bstrParameters);
        HRESULT ( STDMETHODCALLTYPE *VerifyPermissionComplete )(
            __RPC__in IWMPContentPartnerCallback * This,
                       __RPC__in BSTR bstrPermission,
                       __RPC__in VARIANT *pContext,
                       HRESULT hrPermission);
        END_INTERFACE
    } IWMPContentPartnerCallbackVtbl;
    interface IWMPContentPartnerCallback
    {
        CONST_VTBL struct IWMPContentPartnerCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This,type,pContext) )
    ( (This)->lpVtbl -> BuyComplete(This,hrResult,dwBuyCookie) )
    ( (This)->lpVtbl -> DownloadTrack(This,cookie,bstrTrackURL,dwServiceTrackID,bstrDownloadParams,hrDownload) )
    ( (This)->lpVtbl -> GetCatalogVersion(This,pdwVersion,pdwSchemaVersion,plcid) )
    ( (This)->lpVtbl -> UpdateDeviceComplete(This,bstrDeviceName) )
    ( (This)->lpVtbl -> ChangeView(This,bstrType,bstrID,bstrFilter) )
    ( (This)->lpVtbl -> AddListContents(This,dwListCookie,cItems,prgItems) )
    ( (This)->lpVtbl -> ListContentsComplete(This,dwListCookie,hrSuccess) )
    ( (This)->lpVtbl -> SendMessageComplete(This,bstrMsg,bstrParam,bstrResult) )
    ( (This)->lpVtbl -> GetContentIDsInLibrary(This,pcContentIDs,pprgIDs) )
    ( (This)->lpVtbl -> RefreshLicenseComplete(This,dwCookie,contentID,hrRefresh) )
    ( (This)->lpVtbl -> ShowPopup(This,lIndex,bstrParameters) )
    ( (This)->lpVtbl -> VerifyPermissionComplete(This,bstrPermission,pContext,hrPermission) )
EXTERN_C const IID IID_IWMPContentPartner;
    typedef struct IWMPContentPartnerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMPContentPartner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMPContentPartner * This);
        HRESULT ( STDMETHODCALLTYPE *SetCallback )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in_opt IWMPContentPartnerCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IWMPContentPartner * This,
                       WMPPartnerNotification type,
                       __RPC__in VARIANT *pContext);
        HRESULT ( STDMETHODCALLTYPE *GetItemInfo )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR bstrInfoName,
                       __RPC__in VARIANT *pContext,
                        __RPC__out VARIANT *pData);
        HRESULT ( STDMETHODCALLTYPE *GetContentPartnerInfo )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR bstrInfoName,
                        __RPC__out VARIANT *pData);
        HRESULT ( STDMETHODCALLTYPE *GetCommands )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR location,
                       __RPC__in VARIANT *pLocationContext,
                       __RPC__in BSTR itemLocation,
                       ULONG cItemIDs,
                                __RPC__in_ecount_full(cItemIDs) ULONG *prgItemIDs,
                        __RPC__out ULONG *pcItemIDs,
                                          __RPC__deref_out_ecount_full_opt(*pcItemIDs) WMPContextMenuInfo **pprgItems);
        HRESULT ( STDMETHODCALLTYPE *InvokeCommand )(
            __RPC__in IWMPContentPartner * This,
                       DWORD dwCommandID,
                       __RPC__in BSTR location,
                       __RPC__in VARIANT *pLocationContext,
                       __RPC__in BSTR itemLocation,
                       ULONG cItemIDs,
                                __RPC__in_ecount_full(cItemIDs) ULONG *rgItemIDs);
        HRESULT ( STDMETHODCALLTYPE *CanBuySilent )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in_opt IWMPContentContainerList *pInfo,
                        __RPC__deref_out_opt BSTR *pbstrTotalPrice,
                        __RPC__out VARIANT_BOOL *pSilentOK);
        HRESULT ( STDMETHODCALLTYPE *Buy )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in_opt IWMPContentContainerList *pInfo,
                       DWORD cookie);
        HRESULT ( STDMETHODCALLTYPE *GetStreamingURL )(
            __RPC__in IWMPContentPartner * This,
                       WMPStreamingType st,
                       __RPC__in VARIANT *pStreamContext,
                        __RPC__deref_out_opt BSTR *pbstrURL);
        HRESULT ( STDMETHODCALLTYPE *Download )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in_opt IWMPContentContainerList *pInfo,
                       DWORD cookie);
        HRESULT ( STDMETHODCALLTYPE *DownloadTrackComplete )(
            __RPC__in IWMPContentPartner * This,
                       HRESULT hrResult,
                       ULONG contentID,
                       __RPC__in BSTR downloadTrackParam);
        HRESULT ( STDMETHODCALLTYPE *RefreshLicense )(
            __RPC__in IWMPContentPartner * This,
                       DWORD dwCookie,
                       VARIANT_BOOL fLocal,
                               __RPC__in_opt BSTR bstrURL,
                       WMPStreamingType type,
                       ULONG contentID,
                       __RPC__in BSTR bstrRefreshReason,
                       __RPC__in VARIANT *pReasonContext);
        HRESULT ( STDMETHODCALLTYPE *GetCatalogURL )(
            __RPC__in IWMPContentPartner * This,
                       DWORD dwCatalogVersion,
                       DWORD dwCatalogSchemaVersion,
                       LCID catalogLCID,
                        __RPC__out DWORD *pdwNewCatalogVersion,
                        __RPC__deref_out_opt BSTR *pbstrCatalogURL,
                        __RPC__out VARIANT *pExpirationDate);
        HRESULT ( STDMETHODCALLTYPE *GetTemplate )(
            __RPC__in IWMPContentPartner * This,
                       WMPTaskType task,
                       __RPC__in BSTR location,
                       __RPC__in VARIANT *pContext,
                       __RPC__in BSTR clickLocation,
                       __RPC__in VARIANT *pClickContext,
                       __RPC__in BSTR bstrFilter,
                       __RPC__in BSTR bstrViewParams,
                        __RPC__deref_out_opt BSTR *pbstrTemplateURL,
                        __RPC__out WMPTemplateSize *pTemplateSize);
        HRESULT ( STDMETHODCALLTYPE *UpdateDevice )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR bstrDeviceName);
        HRESULT ( STDMETHODCALLTYPE *GetListContents )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR location,
                       __RPC__in VARIANT *pContext,
                       __RPC__in BSTR bstrListType,
                       __RPC__in BSTR bstrParams,
                       DWORD dwListCookie);
        HRESULT ( STDMETHODCALLTYPE *Login )(
            __RPC__in IWMPContentPartner * This,
                       BLOB userInfo,
                       BLOB pwdInfo,
                       VARIANT_BOOL fUsedCachedCreds,
                       VARIANT_BOOL fOkToCache);
        HRESULT ( STDMETHODCALLTYPE *Authenticate )(
            __RPC__in IWMPContentPartner * This,
                       BLOB userInfo,
                       BLOB pwdInfo);
        HRESULT ( STDMETHODCALLTYPE *Logout )(
            __RPC__in IWMPContentPartner * This);
        HRESULT ( STDMETHODCALLTYPE *SendMessage )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR bstrMsg,
                       __RPC__in BSTR bstrParam);
        HRESULT ( STDMETHODCALLTYPE *StationEvent )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR bstrStationEventType,
                       ULONG StationId,
                       ULONG PlaylistIndex,
                       ULONG TrackID,
                       __RPC__in BSTR TrackData,
                       DWORD dwSecondsPlayed);
        HRESULT ( STDMETHODCALLTYPE *CompareContainerListPrices )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in_opt IWMPContentContainerList *pListBase,
                       __RPC__in_opt IWMPContentContainerList *pListCompare,
                        __RPC__out long *pResult);
        HRESULT ( STDMETHODCALLTYPE *VerifyPermission )(
            __RPC__in IWMPContentPartner * This,
                       __RPC__in BSTR bstrPermission,
                       __RPC__in VARIANT *pContext);
        END_INTERFACE
    } IWMPContentPartnerVtbl;
    interface IWMPContentPartner
    {
        CONST_VTBL struct IWMPContentPartnerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCallback(This,pCallback) )
    ( (This)->lpVtbl -> Notify(This,type,pContext) )
    ( (This)->lpVtbl -> GetItemInfo(This,bstrInfoName,pContext,pData) )
    ( (This)->lpVtbl -> GetContentPartnerInfo(This,bstrInfoName,pData) )
    ( (This)->lpVtbl -> GetCommands(This,location,pLocationContext,itemLocation,cItemIDs,prgItemIDs,pcItemIDs,pprgItems) )
    ( (This)->lpVtbl -> InvokeCommand(This,dwCommandID,location,pLocationContext,itemLocation,cItemIDs,rgItemIDs) )
    ( (This)->lpVtbl -> CanBuySilent(This,pInfo,pbstrTotalPrice,pSilentOK) )
    ( (This)->lpVtbl -> Buy(This,pInfo,cookie) )
    ( (This)->lpVtbl -> GetStreamingURL(This,st,pStreamContext,pbstrURL) )
    ( (This)->lpVtbl -> Download(This,pInfo,cookie) )
    ( (This)->lpVtbl -> DownloadTrackComplete(This,hrResult,contentID,downloadTrackParam) )
    ( (This)->lpVtbl -> RefreshLicense(This,dwCookie,fLocal,bstrURL,type,contentID,bstrRefreshReason,pReasonContext) )
    ( (This)->lpVtbl -> GetCatalogURL(This,dwCatalogVersion,dwCatalogSchemaVersion,catalogLCID,pdwNewCatalogVersion,pbstrCatalogURL,pExpirationDate) )
    ( (This)->lpVtbl -> GetTemplate(This,task,location,pContext,clickLocation,pClickContext,bstrFilter,bstrViewParams,pbstrTemplateURL,pTemplateSize) )
    ( (This)->lpVtbl -> UpdateDevice(This,bstrDeviceName) )
    ( (This)->lpVtbl -> GetListContents(This,location,pContext,bstrListType,bstrParams,dwListCookie) )
    ( (This)->lpVtbl -> Login(This,userInfo,pwdInfo,fUsedCachedCreds,fOkToCache) )
    ( (This)->lpVtbl -> Authenticate(This,userInfo,pwdInfo) )
    ( (This)->lpVtbl -> Logout(This) )
    ( (This)->lpVtbl -> SendMessage(This,bstrMsg,bstrParam) )
    ( (This)->lpVtbl -> StationEvent(This,bstrStationEventType,StationId,PlaylistIndex,TrackID,TrackData,dwSecondsPlayed) )
    ( (This)->lpVtbl -> CompareContainerListPrices(This,pListBase,pListCompare,pResult) )
    ( (This)->lpVtbl -> VerifyPermission(This,bstrPermission,pContext) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_contentpartner_0000_0004_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
