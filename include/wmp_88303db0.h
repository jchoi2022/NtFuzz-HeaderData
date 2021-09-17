#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPErrorItem IWMPErrorItem;
typedef interface IWMPError IWMPError;
typedef interface IWMPMedia IWMPMedia;
typedef interface IWMPControls IWMPControls;
typedef interface IWMPSettings IWMPSettings;
typedef interface IWMPClosedCaption IWMPClosedCaption;
typedef interface IWMPPlaylist IWMPPlaylist;
typedef interface IWMPCdrom IWMPCdrom;
typedef interface IWMPCdromCollection IWMPCdromCollection;
typedef interface IWMPStringCollection IWMPStringCollection;
typedef interface IWMPMediaCollection IWMPMediaCollection;
typedef interface IWMPPlaylistArray IWMPPlaylistArray;
typedef interface IWMPPlaylistCollection IWMPPlaylistCollection;
typedef interface IWMPNetwork IWMPNetwork;
typedef interface IWMPCore IWMPCore;
typedef interface IWMPPlayer IWMPPlayer;
typedef interface IWMPPlayer2 IWMPPlayer2;
typedef interface IWMPMedia2 IWMPMedia2;
typedef interface IWMPControls2 IWMPControls2;
typedef interface IWMPDVD IWMPDVD;
typedef interface IWMPCore2 IWMPCore2;
typedef interface IWMPPlayer3 IWMPPlayer3;
typedef interface IWMPErrorItem2 IWMPErrorItem2;
typedef interface IWMPRemoteMediaServices IWMPRemoteMediaServices;
typedef interface IWMPSkinManager IWMPSkinManager;
typedef interface IWMPMetadataPicture IWMPMetadataPicture;
typedef interface IWMPMetadataText IWMPMetadataText;
typedef interface IWMPMedia3 IWMPMedia3;
typedef interface IWMPSettings2 IWMPSettings2;
typedef interface IWMPControls3 IWMPControls3;
typedef interface IWMPClosedCaption2 IWMPClosedCaption2;
typedef interface IWMPPlayerApplication IWMPPlayerApplication;
typedef interface IWMPCore3 IWMPCore3;
typedef interface IWMPPlayer4 IWMPPlayer4;
typedef interface IWMPPlayerServices IWMPPlayerServices;
typedef interface IWMPSyncDevice IWMPSyncDevice;
typedef interface IWMPSyncServices IWMPSyncServices;
typedef interface IWMPPlayerServices2 IWMPPlayerServices2;
typedef interface IWMPCdromRip IWMPCdromRip;
typedef interface IWMPCdromBurn IWMPCdromBurn;
typedef interface IWMPQuery IWMPQuery;
typedef interface IWMPMediaCollection2 IWMPMediaCollection2;
typedef interface IWMPStringCollection2 IWMPStringCollection2;
typedef interface IWMPLibrary IWMPLibrary;
typedef interface IWMPLibraryServices IWMPLibraryServices;
typedef interface IWMPLibrarySharingServices IWMPLibrarySharingServices;
typedef interface IWMPFolderMonitorServices IWMPFolderMonitorServices;
typedef interface IWMPSyncDevice2 IWMPSyncDevice2;
typedef interface IWMPSyncDevice3 IWMPSyncDevice3;
typedef interface IWMPLibrary2 IWMPLibrary2;
typedef interface IWMPEvents IWMPEvents;
typedef interface IWMPEvents2 IWMPEvents2;
typedef interface IWMPEvents3 IWMPEvents3;
typedef interface IWMPEvents4 IWMPEvents4;
typedef interface _WMPOCXEvents _WMPOCXEvents;
typedef class WindowsMediaPlayer WindowsMediaPlayer;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
typedef
enum WMPOpenState
    {
        wmposUndefined = 0,
        wmposPlaylistChanging = ( wmposUndefined + 1 ) ,
        wmposPlaylistLocating = ( wmposPlaylistChanging + 1 ) ,
        wmposPlaylistConnecting = ( wmposPlaylistLocating + 1 ) ,
        wmposPlaylistLoading = ( wmposPlaylistConnecting + 1 ) ,
        wmposPlaylistOpening = ( wmposPlaylistLoading + 1 ) ,
        wmposPlaylistOpenNoMedia = ( wmposPlaylistOpening + 1 ) ,
        wmposPlaylistChanged = ( wmposPlaylistOpenNoMedia + 1 ) ,
        wmposMediaChanging = ( wmposPlaylistChanged + 1 ) ,
        wmposMediaLocating = ( wmposMediaChanging + 1 ) ,
        wmposMediaConnecting = ( wmposMediaLocating + 1 ) ,
        wmposMediaLoading = ( wmposMediaConnecting + 1 ) ,
        wmposMediaOpening = ( wmposMediaLoading + 1 ) ,
        wmposMediaOpen = ( wmposMediaOpening + 1 ) ,
        wmposBeginCodecAcquisition = ( wmposMediaOpen + 1 ) ,
        wmposEndCodecAcquisition = ( wmposBeginCodecAcquisition + 1 ) ,
        wmposBeginLicenseAcquisition = ( wmposEndCodecAcquisition + 1 ) ,
        wmposEndLicenseAcquisition = ( wmposBeginLicenseAcquisition + 1 ) ,
        wmposBeginIndividualization = ( wmposEndLicenseAcquisition + 1 ) ,
        wmposEndIndividualization = ( wmposBeginIndividualization + 1 ) ,
        wmposMediaWaiting = ( wmposEndIndividualization + 1 ) ,
        wmposOpeningUnknownURL = ( wmposMediaWaiting + 1 )
    } WMPOpenState;
typedef
enum WMPPlayState
    {
        wmppsUndefined = 0,
        wmppsStopped = ( wmppsUndefined + 1 ) ,
        wmppsPaused = ( wmppsStopped + 1 ) ,
        wmppsPlaying = ( wmppsPaused + 1 ) ,
        wmppsScanForward = ( wmppsPlaying + 1 ) ,
        wmppsScanReverse = ( wmppsScanForward + 1 ) ,
        wmppsBuffering = ( wmppsScanReverse + 1 ) ,
        wmppsWaiting = ( wmppsBuffering + 1 ) ,
        wmppsMediaEnded = ( wmppsWaiting + 1 ) ,
        wmppsTransitioning = ( wmppsMediaEnded + 1 ) ,
        wmppsReady = ( wmppsTransitioning + 1 ) ,
        wmppsReconnecting = ( wmppsReady + 1 ) ,
        wmppsLast = ( wmppsReconnecting + 1 )
    } WMPPlayState;
typedef
enum WMPPlaylistChangeEventType
    {
        wmplcUnknown = 0,
        wmplcClear = ( wmplcUnknown + 1 ) ,
        wmplcInfoChange = ( wmplcClear + 1 ) ,
        wmplcMove = ( wmplcInfoChange + 1 ) ,
        wmplcDelete = ( wmplcMove + 1 ) ,
        wmplcInsert = ( wmplcDelete + 1 ) ,
        wmplcAppend = ( wmplcInsert + 1 ) ,
        wmplcPrivate = ( wmplcAppend + 1 ) ,
        wmplcNameChange = ( wmplcPrivate + 1 ) ,
        wmplcMorph = ( wmplcNameChange + 1 ) ,
        wmplcSort = ( wmplcMorph + 1 ) ,
        wmplcLast = ( wmplcSort + 1 )
    } WMPPlaylistChangeEventType;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPErrorItem;
    typedef struct IWMPErrorItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPErrorItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPErrorItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPErrorItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPErrorItem * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPErrorItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPErrorItem * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPErrorItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorCode )(
            IWMPErrorItem * This,
                                long *phr);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorDescription )(
            IWMPErrorItem * This,
                                BSTR *pbstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorContext )(
            IWMPErrorItem * This,
                                VARIANT *pvarContext);
                                        HRESULT ( STDMETHODCALLTYPE *get_remedy )(
            IWMPErrorItem * This,
                                long *plRemedy);
                                        HRESULT ( STDMETHODCALLTYPE *get_customUrl )(
            IWMPErrorItem * This,
                                BSTR *pbstrCustomUrl);
        END_INTERFACE
    } IWMPErrorItemVtbl;
    interface IWMPErrorItem
    {
        CONST_VTBL struct IWMPErrorItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_errorCode(This,phr) )
    ( (This)->lpVtbl -> get_errorDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> get_errorContext(This,pvarContext) )
    ( (This)->lpVtbl -> get_remedy(This,plRemedy) )
    ( (This)->lpVtbl -> get_customUrl(This,pbstrCustomUrl) )
EXTERN_C const IID IID_IWMPError;
    typedef struct IWMPErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPError * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPError * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPError * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPError * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPError * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPError * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *clearErrorQueue )(
            IWMPError * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorCount )(
            IWMPError * This,
                                long *plNumErrors);
                                        HRESULT ( STDMETHODCALLTYPE *get_item )(
            IWMPError * This,
                       long dwIndex,
                                IWMPErrorItem **ppErrorItem);
                               HRESULT ( STDMETHODCALLTYPE *webHelp )(
            IWMPError * This);
        END_INTERFACE
    } IWMPErrorVtbl;
    interface IWMPError
    {
        CONST_VTBL struct IWMPErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> clearErrorQueue(This) )
    ( (This)->lpVtbl -> get_errorCount(This,plNumErrors) )
    ( (This)->lpVtbl -> get_item(This,dwIndex,ppErrorItem) )
    ( (This)->lpVtbl -> webHelp(This) )
EXTERN_C const IID IID_IWMPMedia;
    typedef struct IWMPMediaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMedia * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMedia * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMedia * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPMedia * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPMedia * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPMedia * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPMedia * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isIdentical )(
            IWMPMedia * This,
                       IWMPMedia *pIWMPMedia,
                                VARIANT_BOOL *pvbool);
                                        HRESULT ( STDMETHODCALLTYPE *get_sourceURL )(
            IWMPMedia * This,
                                BSTR *pbstrSourceURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IWMPMedia * This,
                                BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_name )(
            IWMPMedia * This,
                       BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_imageSourceWidth )(
            IWMPMedia * This,
                                long *pWidth);
                                        HRESULT ( STDMETHODCALLTYPE *get_imageSourceHeight )(
            IWMPMedia * This,
                                long *pHeight);
                                        HRESULT ( STDMETHODCALLTYPE *get_markerCount )(
            IWMPMedia * This,
                                long *pMarkerCount);
                               HRESULT ( STDMETHODCALLTYPE *getMarkerTime )(
            IWMPMedia * This,
                       long MarkerNum,
                                double *pMarkerTime);
                               HRESULT ( STDMETHODCALLTYPE *getMarkerName )(
            IWMPMedia * This,
                       long MarkerNum,
                                BSTR *pbstrMarkerName);
                                        HRESULT ( STDMETHODCALLTYPE *get_duration )(
            IWMPMedia * This,
                                double *pDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_durationString )(
            IWMPMedia * This,
                                BSTR *pbstrDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributeCount )(
            IWMPMedia * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *getAttributeName )(
            IWMPMedia * This,
                       long lIndex,
                                BSTR *pbstrItemName);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPMedia * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
                               HRESULT ( STDMETHODCALLTYPE *setItemInfo )(
            IWMPMedia * This,
                       BSTR bstrItemName,
                       BSTR bstrVal);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfoByAtom )(
            IWMPMedia * This,
                       long lAtom,
                                BSTR *pbstrVal);
                               HRESULT ( STDMETHODCALLTYPE *isMemberOf )(
            IWMPMedia * This,
                       IWMPPlaylist *pPlaylist,
                                VARIANT_BOOL *pvarfIsMemberOf);
                               HRESULT ( STDMETHODCALLTYPE *isReadOnlyItem )(
            IWMPMedia * This,
                       BSTR bstrItemName,
                                VARIANT_BOOL *pvarfIsReadOnly);
        END_INTERFACE
    } IWMPMediaVtbl;
    interface IWMPMedia
    {
        CONST_VTBL struct IWMPMediaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) )
    ( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) )
    ( (This)->lpVtbl -> get_name(This,pbstrName) )
    ( (This)->lpVtbl -> put_name(This,bstrName) )
    ( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) )
    ( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) )
    ( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) )
    ( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) )
    ( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) )
    ( (This)->lpVtbl -> get_duration(This,pDuration) )
    ( (This)->lpVtbl -> get_durationString(This,pbstrDuration) )
    ( (This)->lpVtbl -> get_attributeCount(This,plCount) )
    ( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
    ( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
    ( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) )
    ( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) )
    ( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) )
EXTERN_C const IID IID_IWMPControls;
    typedef struct IWMPControlsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPControls * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPControls * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPControls * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPControls * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPControls * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPControls * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPControls * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isAvailable )(
            IWMPControls * This,
                       BSTR bstrItem,
                                VARIANT_BOOL *pIsAvailable);
                               HRESULT ( STDMETHODCALLTYPE *play )(
            IWMPControls * This);
                               HRESULT ( STDMETHODCALLTYPE *stop )(
            IWMPControls * This);
                               HRESULT ( STDMETHODCALLTYPE *pause )(
            IWMPControls * This);
                               HRESULT ( STDMETHODCALLTYPE *fastForward )(
            IWMPControls * This);
                               HRESULT ( STDMETHODCALLTYPE *fastReverse )(
            IWMPControls * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPosition )(
            IWMPControls * This,
                                double *pdCurrentPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPosition )(
            IWMPControls * This,
                       double dCurrentPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPositionString )(
            IWMPControls * This,
                                BSTR *pbstrCurrentPosition);
                               HRESULT ( STDMETHODCALLTYPE *next )(
            IWMPControls * This);
                               HRESULT ( STDMETHODCALLTYPE *previous )(
            IWMPControls * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentItem )(
            IWMPControls * This,
                                IWMPMedia **ppIWMPMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentItem )(
            IWMPControls * This,
                       IWMPMedia *pIWMPMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMarker )(
            IWMPControls * This,
                                long *plMarker);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentMarker )(
            IWMPControls * This,
                       long lMarker);
                               HRESULT ( STDMETHODCALLTYPE *playItem )(
            IWMPControls * This,
                       IWMPMedia *pIWMPMedia);
        END_INTERFACE
    } IWMPControlsVtbl;
    interface IWMPControls
    {
        CONST_VTBL struct IWMPControlsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
    ( (This)->lpVtbl -> play(This) )
    ( (This)->lpVtbl -> stop(This) )
    ( (This)->lpVtbl -> pause(This) )
    ( (This)->lpVtbl -> fastForward(This) )
    ( (This)->lpVtbl -> fastReverse(This) )
    ( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) )
    ( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) )
    ( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) )
    ( (This)->lpVtbl -> next(This) )
    ( (This)->lpVtbl -> previous(This) )
    ( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) )
    ( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) )
    ( (This)->lpVtbl -> get_currentMarker(This,plMarker) )
    ( (This)->lpVtbl -> put_currentMarker(This,lMarker) )
    ( (This)->lpVtbl -> playItem(This,pIWMPMedia) )
EXTERN_C const IID IID_IWMPSettings;
    typedef struct IWMPSettingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSettings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSettings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSettings * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPSettings * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPSettings * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPSettings * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPSettings * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isAvailable )(
            IWMPSettings * This,
                       BSTR bstrItem,
                                VARIANT_BOOL *pIsAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *get_autoStart )(
            IWMPSettings * This,
                                VARIANT_BOOL *pfAutoStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_autoStart )(
            IWMPSettings * This,
                       VARIANT_BOOL fAutoStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseURL )(
            IWMPSettings * This,
                                BSTR *pbstrBaseURL);
                                        HRESULT ( STDMETHODCALLTYPE *put_baseURL )(
            IWMPSettings * This,
                       BSTR bstrBaseURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_defaultFrame )(
            IWMPSettings * This,
                                BSTR *pbstrDefaultFrame);
                                        HRESULT ( STDMETHODCALLTYPE *put_defaultFrame )(
            IWMPSettings * This,
                       BSTR bstrDefaultFrame);
                                        HRESULT ( STDMETHODCALLTYPE *get_invokeURLs )(
            IWMPSettings * This,
                                VARIANT_BOOL *pfInvokeURLs);
                                        HRESULT ( STDMETHODCALLTYPE *put_invokeURLs )(
            IWMPSettings * This,
                       VARIANT_BOOL fInvokeURLs);
                                        HRESULT ( STDMETHODCALLTYPE *get_mute )(
            IWMPSettings * This,
                                VARIANT_BOOL *pfMute);
                                        HRESULT ( STDMETHODCALLTYPE *put_mute )(
            IWMPSettings * This,
                       VARIANT_BOOL fMute);
                                        HRESULT ( STDMETHODCALLTYPE *get_playCount )(
            IWMPSettings * This,
                                long *plCount);
                                        HRESULT ( STDMETHODCALLTYPE *put_playCount )(
            IWMPSettings * This,
                       long lCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_rate )(
            IWMPSettings * This,
                                double *pdRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_rate )(
            IWMPSettings * This,
                       double dRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_balance )(
            IWMPSettings * This,
                                long *plBalance);
                                        HRESULT ( STDMETHODCALLTYPE *put_balance )(
            IWMPSettings * This,
                       long lBalance);
                                        HRESULT ( STDMETHODCALLTYPE *get_volume )(
            IWMPSettings * This,
                                long *plVolume);
                                        HRESULT ( STDMETHODCALLTYPE *put_volume )(
            IWMPSettings * This,
                       long lVolume);
                               HRESULT ( STDMETHODCALLTYPE *getMode )(
            IWMPSettings * This,
                       BSTR bstrMode,
                                VARIANT_BOOL *pvarfMode);
                               HRESULT ( STDMETHODCALLTYPE *setMode )(
            IWMPSettings * This,
                       BSTR bstrMode,
                       VARIANT_BOOL varfMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_enableErrorDialogs )(
            IWMPSettings * This,
                                VARIANT_BOOL *pfEnableErrorDialogs);
                                        HRESULT ( STDMETHODCALLTYPE *put_enableErrorDialogs )(
            IWMPSettings * This,
                       VARIANT_BOOL fEnableErrorDialogs);
        END_INTERFACE
    } IWMPSettingsVtbl;
    interface IWMPSettings
    {
        CONST_VTBL struct IWMPSettingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
    ( (This)->lpVtbl -> get_autoStart(This,pfAutoStart) )
    ( (This)->lpVtbl -> put_autoStart(This,fAutoStart) )
    ( (This)->lpVtbl -> get_baseURL(This,pbstrBaseURL) )
    ( (This)->lpVtbl -> put_baseURL(This,bstrBaseURL) )
    ( (This)->lpVtbl -> get_defaultFrame(This,pbstrDefaultFrame) )
    ( (This)->lpVtbl -> put_defaultFrame(This,bstrDefaultFrame) )
    ( (This)->lpVtbl -> get_invokeURLs(This,pfInvokeURLs) )
    ( (This)->lpVtbl -> put_invokeURLs(This,fInvokeURLs) )
    ( (This)->lpVtbl -> get_mute(This,pfMute) )
    ( (This)->lpVtbl -> put_mute(This,fMute) )
    ( (This)->lpVtbl -> get_playCount(This,plCount) )
    ( (This)->lpVtbl -> put_playCount(This,lCount) )
    ( (This)->lpVtbl -> get_rate(This,pdRate) )
    ( (This)->lpVtbl -> put_rate(This,dRate) )
    ( (This)->lpVtbl -> get_balance(This,plBalance) )
    ( (This)->lpVtbl -> put_balance(This,lBalance) )
    ( (This)->lpVtbl -> get_volume(This,plVolume) )
    ( (This)->lpVtbl -> put_volume(This,lVolume) )
    ( (This)->lpVtbl -> getMode(This,bstrMode,pvarfMode) )
    ( (This)->lpVtbl -> setMode(This,bstrMode,varfMode) )
    ( (This)->lpVtbl -> get_enableErrorDialogs(This,pfEnableErrorDialogs) )
    ( (This)->lpVtbl -> put_enableErrorDialogs(This,fEnableErrorDialogs) )
EXTERN_C const IID IID_IWMPClosedCaption;
    typedef struct IWMPClosedCaptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPClosedCaption * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPClosedCaption * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPClosedCaption * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPClosedCaption * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPClosedCaption * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPClosedCaption * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPClosedCaption * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMIStyle )(
            IWMPClosedCaption * This,
                                BSTR *pbstrSAMIStyle);
                                        HRESULT ( STDMETHODCALLTYPE *put_SAMIStyle )(
            IWMPClosedCaption * This,
                       BSTR bstrSAMIStyle);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMILang )(
            IWMPClosedCaption * This,
                                BSTR *pbstrSAMILang);
                                        HRESULT ( STDMETHODCALLTYPE *put_SAMILang )(
            IWMPClosedCaption * This,
                       BSTR bstrSAMILang);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMIFileName )(
            IWMPClosedCaption * This,
                                BSTR *pbstrSAMIFileName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SAMIFileName )(
            IWMPClosedCaption * This,
                       BSTR bstrSAMIFileName);
                                        HRESULT ( STDMETHODCALLTYPE *get_captioningId )(
            IWMPClosedCaption * This,
                                BSTR *pbstrCaptioningID);
                                        HRESULT ( STDMETHODCALLTYPE *put_captioningId )(
            IWMPClosedCaption * This,
                       BSTR bstrCaptioningID);
        END_INTERFACE
    } IWMPClosedCaptionVtbl;
    interface IWMPClosedCaption
    {
        CONST_VTBL struct IWMPClosedCaptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SAMIStyle(This,pbstrSAMIStyle) )
    ( (This)->lpVtbl -> put_SAMIStyle(This,bstrSAMIStyle) )
    ( (This)->lpVtbl -> get_SAMILang(This,pbstrSAMILang) )
    ( (This)->lpVtbl -> put_SAMILang(This,bstrSAMILang) )
    ( (This)->lpVtbl -> get_SAMIFileName(This,pbstrSAMIFileName) )
    ( (This)->lpVtbl -> put_SAMIFileName(This,bstrSAMIFileName) )
    ( (This)->lpVtbl -> get_captioningId(This,pbstrCaptioningID) )
    ( (This)->lpVtbl -> put_captioningId(This,bstrCaptioningID) )
EXTERN_C const IID IID_IWMPPlaylist;
    typedef struct IWMPPlaylistVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlaylist * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlaylist * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlaylist * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlaylist * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlaylist * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlaylist * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlaylist * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_count )(
            IWMPPlaylist * This,
                                long *plCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IWMPPlaylist * This,
                                BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_name )(
            IWMPPlaylist * This,
                       BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributeCount )(
            IWMPPlaylist * This,
                                long *plCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributeName )(
            IWMPPlaylist * This,
                       long lIndex,
                                BSTR *pbstrAttributeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_item )(
            IWMPPlaylist * This,
            long lIndex,
                                IWMPMedia **ppIWMPMedia);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPPlaylist * This,
                       BSTR bstrName,
                                BSTR *pbstrVal);
                               HRESULT ( STDMETHODCALLTYPE *setItemInfo )(
            IWMPPlaylist * This,
                       BSTR bstrName,
                       BSTR bstrValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_isIdentical )(
            IWMPPlaylist * This,
                       IWMPPlaylist *pIWMPPlaylist,
                                VARIANT_BOOL *pvbool);
                               HRESULT ( STDMETHODCALLTYPE *clear )(
            IWMPPlaylist * This);
                               HRESULT ( STDMETHODCALLTYPE *insertItem )(
            IWMPPlaylist * This,
                       long lIndex,
                       IWMPMedia *pIWMPMedia);
                               HRESULT ( STDMETHODCALLTYPE *appendItem )(
            IWMPPlaylist * This,
                       IWMPMedia *pIWMPMedia);
                               HRESULT ( STDMETHODCALLTYPE *removeItem )(
            IWMPPlaylist * This,
                       IWMPMedia *pIWMPMedia);
                               HRESULT ( STDMETHODCALLTYPE *moveItem )(
            IWMPPlaylist * This,
            long lIndexOld,
            long lIndexNew);
        END_INTERFACE
    } IWMPPlaylistVtbl;
    interface IWMPPlaylist
    {
        CONST_VTBL struct IWMPPlaylistVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_count(This,plCount) )
    ( (This)->lpVtbl -> get_name(This,pbstrName) )
    ( (This)->lpVtbl -> put_name(This,bstrName) )
    ( (This)->lpVtbl -> get_attributeCount(This,plCount) )
    ( (This)->lpVtbl -> get_attributeName(This,lIndex,pbstrAttributeName) )
    ( (This)->lpVtbl -> get_item(This,lIndex,ppIWMPMedia) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrName,pbstrVal) )
    ( (This)->lpVtbl -> setItemInfo(This,bstrName,bstrValue) )
    ( (This)->lpVtbl -> get_isIdentical(This,pIWMPPlaylist,pvbool) )
    ( (This)->lpVtbl -> clear(This) )
    ( (This)->lpVtbl -> insertItem(This,lIndex,pIWMPMedia) )
    ( (This)->lpVtbl -> appendItem(This,pIWMPMedia) )
    ( (This)->lpVtbl -> removeItem(This,pIWMPMedia) )
    ( (This)->lpVtbl -> moveItem(This,lIndexOld,lIndexNew) )
EXTERN_C const IID IID_IWMPCdrom;
    typedef struct IWMPCdromVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPCdrom * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPCdrom * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPCdrom * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPCdrom * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPCdrom * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPCdrom * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPCdrom * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_driveSpecifier )(
            IWMPCdrom * This,
                                BSTR *pbstrDrive);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlist )(
            IWMPCdrom * This,
                                IWMPPlaylist **ppPlaylist);
                               HRESULT ( STDMETHODCALLTYPE *eject )(
            IWMPCdrom * This);
        END_INTERFACE
    } IWMPCdromVtbl;
    interface IWMPCdrom
    {
        CONST_VTBL struct IWMPCdromVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_driveSpecifier(This,pbstrDrive) )
    ( (This)->lpVtbl -> get_playlist(This,ppPlaylist) )
    ( (This)->lpVtbl -> eject(This) )
EXTERN_C const IID IID_IWMPCdromCollection;
    typedef struct IWMPCdromCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPCdromCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPCdromCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPCdromCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPCdromCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPCdromCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPCdromCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPCdromCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_count )(
            IWMPCdromCollection * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *item )(
            IWMPCdromCollection * This,
                       long lIndex,
                                IWMPCdrom **ppItem);
                               HRESULT ( STDMETHODCALLTYPE *getByDriveSpecifier )(
            IWMPCdromCollection * This,
                       BSTR bstrDriveSpecifier,
                                IWMPCdrom **ppCdrom);
        END_INTERFACE
    } IWMPCdromCollectionVtbl;
    interface IWMPCdromCollection
    {
        CONST_VTBL struct IWMPCdromCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_count(This,plCount) )
    ( (This)->lpVtbl -> item(This,lIndex,ppItem) )
    ( (This)->lpVtbl -> getByDriveSpecifier(This,bstrDriveSpecifier,ppCdrom) )
EXTERN_C const IID IID_IWMPStringCollection;
    typedef struct IWMPStringCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPStringCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPStringCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPStringCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPStringCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPStringCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPStringCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPStringCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_count )(
            IWMPStringCollection * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *item )(
            IWMPStringCollection * This,
                       long lIndex,
                                BSTR *pbstrString);
        END_INTERFACE
    } IWMPStringCollectionVtbl;
    interface IWMPStringCollection
    {
        CONST_VTBL struct IWMPStringCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_count(This,plCount) )
    ( (This)->lpVtbl -> item(This,lIndex,pbstrString) )
EXTERN_C const IID IID_IWMPMediaCollection;
    typedef struct IWMPMediaCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMediaCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMediaCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMediaCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPMediaCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPMediaCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPMediaCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPMediaCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *add )(
            IWMPMediaCollection * This,
                       BSTR bstrURL,
                                IWMPMedia **ppItem);
                               HRESULT ( STDMETHODCALLTYPE *getAll )(
            IWMPMediaCollection * This,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByName )(
            IWMPMediaCollection * This,
                       BSTR bstrName,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByGenre )(
            IWMPMediaCollection * This,
                       BSTR bstrGenre,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByAuthor )(
            IWMPMediaCollection * This,
                       BSTR bstrAuthor,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByAlbum )(
            IWMPMediaCollection * This,
                       BSTR bstrAlbum,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByAttribute )(
            IWMPMediaCollection * This,
                       BSTR bstrAttribute,
                       BSTR bstrValue,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *remove )(
            IWMPMediaCollection * This,
                       IWMPMedia *pItem,
                       VARIANT_BOOL varfDeleteFile);
                               HRESULT ( STDMETHODCALLTYPE *getAttributeStringCollection )(
            IWMPMediaCollection * This,
                       BSTR bstrAttribute,
                       BSTR bstrMediaType,
                                IWMPStringCollection **ppStringCollection);
                               HRESULT ( STDMETHODCALLTYPE *getMediaAtom )(
            IWMPMediaCollection * This,
                       BSTR bstrItemName,
                                long *plAtom);
                               HRESULT ( STDMETHODCALLTYPE *setDeleted )(
            IWMPMediaCollection * This,
                       IWMPMedia *pItem,
                       VARIANT_BOOL varfIsDeleted);
                               HRESULT ( STDMETHODCALLTYPE *isDeleted )(
            IWMPMediaCollection * This,
                       IWMPMedia *pItem,
                                VARIANT_BOOL *pvarfIsDeleted);
        END_INTERFACE
    } IWMPMediaCollectionVtbl;
    interface IWMPMediaCollection
    {
        CONST_VTBL struct IWMPMediaCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> add(This,bstrURL,ppItem) )
    ( (This)->lpVtbl -> getAll(This,ppMediaItems) )
    ( (This)->lpVtbl -> getByName(This,bstrName,ppMediaItems) )
    ( (This)->lpVtbl -> getByGenre(This,bstrGenre,ppMediaItems) )
    ( (This)->lpVtbl -> getByAuthor(This,bstrAuthor,ppMediaItems) )
    ( (This)->lpVtbl -> getByAlbum(This,bstrAlbum,ppMediaItems) )
    ( (This)->lpVtbl -> getByAttribute(This,bstrAttribute,bstrValue,ppMediaItems) )
    ( (This)->lpVtbl -> remove(This,pItem,varfDeleteFile) )
    ( (This)->lpVtbl -> getAttributeStringCollection(This,bstrAttribute,bstrMediaType,ppStringCollection) )
    ( (This)->lpVtbl -> getMediaAtom(This,bstrItemName,plAtom) )
    ( (This)->lpVtbl -> setDeleted(This,pItem,varfIsDeleted) )
    ( (This)->lpVtbl -> isDeleted(This,pItem,pvarfIsDeleted) )
EXTERN_C const IID IID_IWMPPlaylistArray;
    typedef struct IWMPPlaylistArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlaylistArray * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlaylistArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlaylistArray * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlaylistArray * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlaylistArray * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlaylistArray * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlaylistArray * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_count )(
            IWMPPlaylistArray * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *item )(
            IWMPPlaylistArray * This,
                       long lIndex,
                                IWMPPlaylist **ppItem);
        END_INTERFACE
    } IWMPPlaylistArrayVtbl;
    interface IWMPPlaylistArray
    {
        CONST_VTBL struct IWMPPlaylistArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_count(This,plCount) )
    ( (This)->lpVtbl -> item(This,lIndex,ppItem) )
EXTERN_C const IID IID_IWMPPlaylistCollection;
    typedef struct IWMPPlaylistCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlaylistCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlaylistCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlaylistCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlaylistCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlaylistCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlaylistCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlaylistCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *newPlaylist )(
            IWMPPlaylistCollection * This,
                       BSTR bstrName,
                                IWMPPlaylist **ppItem);
                               HRESULT ( STDMETHODCALLTYPE *getAll )(
            IWMPPlaylistCollection * This,
                                IWMPPlaylistArray **ppPlaylistArray);
                               HRESULT ( STDMETHODCALLTYPE *getByName )(
            IWMPPlaylistCollection * This,
                       BSTR bstrName,
                                IWMPPlaylistArray **ppPlaylistArray);
                               HRESULT ( STDMETHODCALLTYPE *remove )(
            IWMPPlaylistCollection * This,
                       IWMPPlaylist *pItem);
                               HRESULT ( STDMETHODCALLTYPE *setDeleted )(
            IWMPPlaylistCollection * This,
                       IWMPPlaylist *pItem,
                       VARIANT_BOOL varfIsDeleted);
                               HRESULT ( STDMETHODCALLTYPE *isDeleted )(
            IWMPPlaylistCollection * This,
                       IWMPPlaylist *pItem,
                                VARIANT_BOOL *pvarfIsDeleted);
                               HRESULT ( STDMETHODCALLTYPE *importPlaylist )(
            IWMPPlaylistCollection * This,
                       IWMPPlaylist *pItem,
                                IWMPPlaylist **ppImportedItem);
        END_INTERFACE
    } IWMPPlaylistCollectionVtbl;
    interface IWMPPlaylistCollection
    {
        CONST_VTBL struct IWMPPlaylistCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> newPlaylist(This,bstrName,ppItem) )
    ( (This)->lpVtbl -> getAll(This,ppPlaylistArray) )
    ( (This)->lpVtbl -> getByName(This,bstrName,ppPlaylistArray) )
    ( (This)->lpVtbl -> remove(This,pItem) )
    ( (This)->lpVtbl -> setDeleted(This,pItem,varfIsDeleted) )
    ( (This)->lpVtbl -> isDeleted(This,pItem,pvarfIsDeleted) )
    ( (This)->lpVtbl -> importPlaylist(This,pItem,ppImportedItem) )
EXTERN_C const IID IID_IWMPNetwork;
    typedef struct IWMPNetworkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPNetwork * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPNetwork * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPNetwork * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPNetwork * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPNetwork * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPNetwork * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPNetwork * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_bandWidth )(
            IWMPNetwork * This,
                                long *plBandwidth);
                                        HRESULT ( STDMETHODCALLTYPE *get_recoveredPackets )(
            IWMPNetwork * This,
                                long *plRecoveredPackets);
                                        HRESULT ( STDMETHODCALLTYPE *get_sourceProtocol )(
            IWMPNetwork * This,
                                BSTR *pbstrSourceProtocol);
                                        HRESULT ( STDMETHODCALLTYPE *get_receivedPackets )(
            IWMPNetwork * This,
                                long *plReceivedPackets);
                                        HRESULT ( STDMETHODCALLTYPE *get_lostPackets )(
            IWMPNetwork * This,
                                long *plLostPackets);
                                        HRESULT ( STDMETHODCALLTYPE *get_receptionQuality )(
            IWMPNetwork * This,
                                long *plReceptionQuality);
                                        HRESULT ( STDMETHODCALLTYPE *get_bufferingCount )(
            IWMPNetwork * This,
                                long *plBufferingCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_bufferingProgress )(
            IWMPNetwork * This,
                                long *plBufferingProgress);
                                        HRESULT ( STDMETHODCALLTYPE *get_bufferingTime )(
            IWMPNetwork * This,
                                long *plBufferingTime);
                                        HRESULT ( STDMETHODCALLTYPE *put_bufferingTime )(
            IWMPNetwork * This,
                       long lBufferingTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_frameRate )(
            IWMPNetwork * This,
                                long *plFrameRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_maxBitRate )(
            IWMPNetwork * This,
                                long *plBitRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_bitRate )(
            IWMPNetwork * This,
                                long *plBitRate);
                               HRESULT ( STDMETHODCALLTYPE *getProxySettings )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                                long *plProxySetting);
                               HRESULT ( STDMETHODCALLTYPE *setProxySettings )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                       long lProxySetting);
                               HRESULT ( STDMETHODCALLTYPE *getProxyName )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                                BSTR *pbstrProxyName);
                               HRESULT ( STDMETHODCALLTYPE *setProxyName )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                       BSTR bstrProxyName);
                               HRESULT ( STDMETHODCALLTYPE *getProxyPort )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                                long *lProxyPort);
                               HRESULT ( STDMETHODCALLTYPE *setProxyPort )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                       long lProxyPort);
                               HRESULT ( STDMETHODCALLTYPE *getProxyExceptionList )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                                BSTR *pbstrExceptionList);
                               HRESULT ( STDMETHODCALLTYPE *setProxyExceptionList )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                       BSTR pbstrExceptionList);
                               HRESULT ( STDMETHODCALLTYPE *getProxyBypassForLocal )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                                VARIANT_BOOL *pfBypassForLocal);
                               HRESULT ( STDMETHODCALLTYPE *setProxyBypassForLocal )(
            IWMPNetwork * This,
                       BSTR bstrProtocol,
                       VARIANT_BOOL fBypassForLocal);
                                        HRESULT ( STDMETHODCALLTYPE *get_maxBandwidth )(
            IWMPNetwork * This,
                                long *lMaxBandwidth);
                            HRESULT ( STDMETHODCALLTYPE *put_maxBandwidth )(
            IWMPNetwork * This,
                       long lMaxBandwidth);
                                        HRESULT ( STDMETHODCALLTYPE *get_downloadProgress )(
            IWMPNetwork * This,
                                long *plDownloadProgress);
                                        HRESULT ( STDMETHODCALLTYPE *get_encodedFrameRate )(
            IWMPNetwork * This,
                                long *plFrameRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_framesSkipped )(
            IWMPNetwork * This,
                                long *plFrames);
        END_INTERFACE
    } IWMPNetworkVtbl;
    interface IWMPNetwork
    {
        CONST_VTBL struct IWMPNetworkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_bandWidth(This,plBandwidth) )
    ( (This)->lpVtbl -> get_recoveredPackets(This,plRecoveredPackets) )
    ( (This)->lpVtbl -> get_sourceProtocol(This,pbstrSourceProtocol) )
    ( (This)->lpVtbl -> get_receivedPackets(This,plReceivedPackets) )
    ( (This)->lpVtbl -> get_lostPackets(This,plLostPackets) )
    ( (This)->lpVtbl -> get_receptionQuality(This,plReceptionQuality) )
    ( (This)->lpVtbl -> get_bufferingCount(This,plBufferingCount) )
    ( (This)->lpVtbl -> get_bufferingProgress(This,plBufferingProgress) )
    ( (This)->lpVtbl -> get_bufferingTime(This,plBufferingTime) )
    ( (This)->lpVtbl -> put_bufferingTime(This,lBufferingTime) )
    ( (This)->lpVtbl -> get_frameRate(This,plFrameRate) )
    ( (This)->lpVtbl -> get_maxBitRate(This,plBitRate) )
    ( (This)->lpVtbl -> get_bitRate(This,plBitRate) )
    ( (This)->lpVtbl -> getProxySettings(This,bstrProtocol,plProxySetting) )
    ( (This)->lpVtbl -> setProxySettings(This,bstrProtocol,lProxySetting) )
    ( (This)->lpVtbl -> getProxyName(This,bstrProtocol,pbstrProxyName) )
    ( (This)->lpVtbl -> setProxyName(This,bstrProtocol,bstrProxyName) )
    ( (This)->lpVtbl -> getProxyPort(This,bstrProtocol,lProxyPort) )
    ( (This)->lpVtbl -> setProxyPort(This,bstrProtocol,lProxyPort) )
    ( (This)->lpVtbl -> getProxyExceptionList(This,bstrProtocol,pbstrExceptionList) )
    ( (This)->lpVtbl -> setProxyExceptionList(This,bstrProtocol,pbstrExceptionList) )
    ( (This)->lpVtbl -> getProxyBypassForLocal(This,bstrProtocol,pfBypassForLocal) )
    ( (This)->lpVtbl -> setProxyBypassForLocal(This,bstrProtocol,fBypassForLocal) )
    ( (This)->lpVtbl -> get_maxBandwidth(This,lMaxBandwidth) )
    ( (This)->lpVtbl -> put_maxBandwidth(This,lMaxBandwidth) )
    ( (This)->lpVtbl -> get_downloadProgress(This,plDownloadProgress) )
    ( (This)->lpVtbl -> get_encodedFrameRate(This,plFrameRate) )
    ( (This)->lpVtbl -> get_framesSkipped(This,plFrames) )
EXTERN_C const IID IID_IWMPCore;
    typedef struct IWMPCoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPCore * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPCore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPCore * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPCore * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPCore * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPCore * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPCore * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *close )(
            IWMPCore * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPCore * This,
                                BSTR *pbstrURL);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IWMPCore * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_openState )(
            IWMPCore * This,
                                WMPOpenState *pwmpos);
                                        HRESULT ( STDMETHODCALLTYPE *get_playState )(
            IWMPCore * This,
                                WMPPlayState *pwmpps);
                                        HRESULT ( STDMETHODCALLTYPE *get_controls )(
            IWMPCore * This,
                                IWMPControls **ppControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_settings )(
            IWMPCore * This,
                                IWMPSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMedia )(
            IWMPCore * This,
                                IWMPMedia **ppMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentMedia )(
            IWMPCore * This,
                       IWMPMedia *pMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPCore * This,
                                IWMPMediaCollection **ppMediaCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )(
            IWMPCore * This,
                                IWMPPlaylistCollection **ppPlaylistCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_versionInfo )(
            IWMPCore * This,
                                BSTR *pbstrVersionInfo);
                   HRESULT ( STDMETHODCALLTYPE *launchURL )(
            IWMPCore * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_network )(
            IWMPCore * This,
                                IWMPNetwork **ppQNI);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )(
            IWMPCore * This,
                                IWMPPlaylist **ppPL);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )(
            IWMPCore * This,
                       IWMPPlaylist *pPL);
                                        HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )(
            IWMPCore * This,
                                IWMPCdromCollection **ppCdromCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_closedCaption )(
            IWMPCore * This,
                                IWMPClosedCaption **ppClosedCaption);
                                        HRESULT ( STDMETHODCALLTYPE *get_isOnline )(
            IWMPCore * This,
                                VARIANT_BOOL *pfOnline);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPCore * This,
                                IWMPError **ppError);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPCore * This,
                                BSTR *pbstrStatus);
        END_INTERFACE
    } IWMPCoreVtbl;
    interface IWMPCore
    {
        CONST_VTBL struct IWMPCoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> close(This) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
    ( (This)->lpVtbl -> put_URL(This,bstrURL) )
    ( (This)->lpVtbl -> get_openState(This,pwmpos) )
    ( (This)->lpVtbl -> get_playState(This,pwmpps) )
    ( (This)->lpVtbl -> get_controls(This,ppControl) )
    ( (This)->lpVtbl -> get_settings(This,ppSettings) )
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
    ( (This)->lpVtbl -> launchURL(This,bstrURL) )
    ( (This)->lpVtbl -> get_network(This,ppQNI) )
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
    ( (This)->lpVtbl -> get_error(This,ppError) )
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) )
EXTERN_C const IID IID_IWMPPlayer;
    typedef struct IWMPPlayerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlayer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlayer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlayer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlayer * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlayer * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlayer * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlayer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *close )(
            IWMPPlayer * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPPlayer * This,
                                BSTR *pbstrURL);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IWMPPlayer * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_openState )(
            IWMPPlayer * This,
                                WMPOpenState *pwmpos);
                                        HRESULT ( STDMETHODCALLTYPE *get_playState )(
            IWMPPlayer * This,
                                WMPPlayState *pwmpps);
                                        HRESULT ( STDMETHODCALLTYPE *get_controls )(
            IWMPPlayer * This,
                                IWMPControls **ppControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_settings )(
            IWMPPlayer * This,
                                IWMPSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMedia )(
            IWMPPlayer * This,
                                IWMPMedia **ppMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentMedia )(
            IWMPPlayer * This,
                       IWMPMedia *pMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPPlayer * This,
                                IWMPMediaCollection **ppMediaCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )(
            IWMPPlayer * This,
                                IWMPPlaylistCollection **ppPlaylistCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_versionInfo )(
            IWMPPlayer * This,
                                BSTR *pbstrVersionInfo);
                   HRESULT ( STDMETHODCALLTYPE *launchURL )(
            IWMPPlayer * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_network )(
            IWMPPlayer * This,
                                IWMPNetwork **ppQNI);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )(
            IWMPPlayer * This,
                                IWMPPlaylist **ppPL);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )(
            IWMPPlayer * This,
                       IWMPPlaylist *pPL);
                                        HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )(
            IWMPPlayer * This,
                                IWMPCdromCollection **ppCdromCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_closedCaption )(
            IWMPPlayer * This,
                                IWMPClosedCaption **ppClosedCaption);
                                        HRESULT ( STDMETHODCALLTYPE *get_isOnline )(
            IWMPPlayer * This,
                                VARIANT_BOOL *pfOnline);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPPlayer * This,
                                IWMPError **ppError);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPPlayer * This,
                                BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_enabled )(
            IWMPPlayer * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_enabled )(
            IWMPPlayer * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_fullScreen )(
            IWMPPlayer * This,
                                VARIANT_BOOL *pbFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *put_fullScreen )(
            IWMPPlayer * This,
            VARIANT_BOOL bFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )(
            IWMPPlayer * This,
                                VARIANT_BOOL *pbEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )(
            IWMPPlayer * This,
            VARIANT_BOOL bEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_uiMode )(
            IWMPPlayer * This,
                       BSTR bstrMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_uiMode )(
            IWMPPlayer * This,
                                BSTR *pbstrMode);
        END_INTERFACE
    } IWMPPlayerVtbl;
    interface IWMPPlayer
    {
        CONST_VTBL struct IWMPPlayerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> close(This) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
    ( (This)->lpVtbl -> put_URL(This,bstrURL) )
    ( (This)->lpVtbl -> get_openState(This,pwmpos) )
    ( (This)->lpVtbl -> get_playState(This,pwmpps) )
    ( (This)->lpVtbl -> get_controls(This,ppControl) )
    ( (This)->lpVtbl -> get_settings(This,ppSettings) )
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
    ( (This)->lpVtbl -> launchURL(This,bstrURL) )
    ( (This)->lpVtbl -> get_network(This,ppQNI) )
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
    ( (This)->lpVtbl -> get_error(This,ppError) )
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) )
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
EXTERN_C const IID IID_IWMPPlayer2;
    typedef struct IWMPPlayer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlayer2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlayer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlayer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlayer2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlayer2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlayer2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlayer2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *close )(
            IWMPPlayer2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPPlayer2 * This,
                                BSTR *pbstrURL);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IWMPPlayer2 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_openState )(
            IWMPPlayer2 * This,
                                WMPOpenState *pwmpos);
                                        HRESULT ( STDMETHODCALLTYPE *get_playState )(
            IWMPPlayer2 * This,
                                WMPPlayState *pwmpps);
                                        HRESULT ( STDMETHODCALLTYPE *get_controls )(
            IWMPPlayer2 * This,
                                IWMPControls **ppControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_settings )(
            IWMPPlayer2 * This,
                                IWMPSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMedia )(
            IWMPPlayer2 * This,
                                IWMPMedia **ppMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentMedia )(
            IWMPPlayer2 * This,
                       IWMPMedia *pMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPPlayer2 * This,
                                IWMPMediaCollection **ppMediaCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )(
            IWMPPlayer2 * This,
                                IWMPPlaylistCollection **ppPlaylistCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_versionInfo )(
            IWMPPlayer2 * This,
                                BSTR *pbstrVersionInfo);
                   HRESULT ( STDMETHODCALLTYPE *launchURL )(
            IWMPPlayer2 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_network )(
            IWMPPlayer2 * This,
                                IWMPNetwork **ppQNI);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )(
            IWMPPlayer2 * This,
                                IWMPPlaylist **ppPL);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )(
            IWMPPlayer2 * This,
                       IWMPPlaylist *pPL);
                                        HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )(
            IWMPPlayer2 * This,
                                IWMPCdromCollection **ppCdromCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_closedCaption )(
            IWMPPlayer2 * This,
                                IWMPClosedCaption **ppClosedCaption);
                                        HRESULT ( STDMETHODCALLTYPE *get_isOnline )(
            IWMPPlayer2 * This,
                                VARIANT_BOOL *pfOnline);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPPlayer2 * This,
                                IWMPError **ppError);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPPlayer2 * This,
                                BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_enabled )(
            IWMPPlayer2 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_enabled )(
            IWMPPlayer2 * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_fullScreen )(
            IWMPPlayer2 * This,
                                VARIANT_BOOL *pbFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *put_fullScreen )(
            IWMPPlayer2 * This,
            VARIANT_BOOL bFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )(
            IWMPPlayer2 * This,
                                VARIANT_BOOL *pbEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )(
            IWMPPlayer2 * This,
            VARIANT_BOOL bEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_uiMode )(
            IWMPPlayer2 * This,
                       BSTR bstrMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_uiMode )(
            IWMPPlayer2 * This,
                                BSTR *pbstrMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_stretchToFit )(
            IWMPPlayer2 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_stretchToFit )(
            IWMPPlayer2 * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_windowlessVideo )(
            IWMPPlayer2 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_windowlessVideo )(
            IWMPPlayer2 * This,
                       VARIANT_BOOL bEnabled);
        END_INTERFACE
    } IWMPPlayer2Vtbl;
    interface IWMPPlayer2
    {
        CONST_VTBL struct IWMPPlayer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> close(This) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
    ( (This)->lpVtbl -> put_URL(This,bstrURL) )
    ( (This)->lpVtbl -> get_openState(This,pwmpos) )
    ( (This)->lpVtbl -> get_playState(This,pwmpps) )
    ( (This)->lpVtbl -> get_controls(This,ppControl) )
    ( (This)->lpVtbl -> get_settings(This,ppSettings) )
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
    ( (This)->lpVtbl -> launchURL(This,bstrURL) )
    ( (This)->lpVtbl -> get_network(This,ppQNI) )
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
    ( (This)->lpVtbl -> get_error(This,ppError) )
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) )
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
    ( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) )
    ( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) )
    ( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) )
    ( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) )
EXTERN_C const IID IID_IWMPMedia2;
    typedef struct IWMPMedia2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMedia2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMedia2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMedia2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPMedia2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPMedia2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPMedia2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPMedia2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isIdentical )(
            IWMPMedia2 * This,
                       IWMPMedia *pIWMPMedia,
                                VARIANT_BOOL *pvbool);
                                        HRESULT ( STDMETHODCALLTYPE *get_sourceURL )(
            IWMPMedia2 * This,
                                BSTR *pbstrSourceURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IWMPMedia2 * This,
                                BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_name )(
            IWMPMedia2 * This,
                       BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_imageSourceWidth )(
            IWMPMedia2 * This,
                                long *pWidth);
                                        HRESULT ( STDMETHODCALLTYPE *get_imageSourceHeight )(
            IWMPMedia2 * This,
                                long *pHeight);
                                        HRESULT ( STDMETHODCALLTYPE *get_markerCount )(
            IWMPMedia2 * This,
                                long *pMarkerCount);
                               HRESULT ( STDMETHODCALLTYPE *getMarkerTime )(
            IWMPMedia2 * This,
                       long MarkerNum,
                                double *pMarkerTime);
                               HRESULT ( STDMETHODCALLTYPE *getMarkerName )(
            IWMPMedia2 * This,
                       long MarkerNum,
                                BSTR *pbstrMarkerName);
                                        HRESULT ( STDMETHODCALLTYPE *get_duration )(
            IWMPMedia2 * This,
                                double *pDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_durationString )(
            IWMPMedia2 * This,
                                BSTR *pbstrDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributeCount )(
            IWMPMedia2 * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *getAttributeName )(
            IWMPMedia2 * This,
                       long lIndex,
                                BSTR *pbstrItemName);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPMedia2 * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
                               HRESULT ( STDMETHODCALLTYPE *setItemInfo )(
            IWMPMedia2 * This,
                       BSTR bstrItemName,
                       BSTR bstrVal);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfoByAtom )(
            IWMPMedia2 * This,
                       long lAtom,
                                BSTR *pbstrVal);
                               HRESULT ( STDMETHODCALLTYPE *isMemberOf )(
            IWMPMedia2 * This,
                       IWMPPlaylist *pPlaylist,
                                VARIANT_BOOL *pvarfIsMemberOf);
                               HRESULT ( STDMETHODCALLTYPE *isReadOnlyItem )(
            IWMPMedia2 * This,
                       BSTR bstrItemName,
                                VARIANT_BOOL *pvarfIsReadOnly);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPMedia2 * This,
                                IWMPErrorItem **ppIWMPErrorItem);
        END_INTERFACE
    } IWMPMedia2Vtbl;
    interface IWMPMedia2
    {
        CONST_VTBL struct IWMPMedia2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) )
    ( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) )
    ( (This)->lpVtbl -> get_name(This,pbstrName) )
    ( (This)->lpVtbl -> put_name(This,bstrName) )
    ( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) )
    ( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) )
    ( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) )
    ( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) )
    ( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) )
    ( (This)->lpVtbl -> get_duration(This,pDuration) )
    ( (This)->lpVtbl -> get_durationString(This,pbstrDuration) )
    ( (This)->lpVtbl -> get_attributeCount(This,plCount) )
    ( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
    ( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
    ( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) )
    ( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) )
    ( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) )
    ( (This)->lpVtbl -> get_error(This,ppIWMPErrorItem) )
EXTERN_C const IID IID_IWMPControls2;
    typedef struct IWMPControls2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPControls2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPControls2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPControls2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPControls2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPControls2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPControls2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPControls2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isAvailable )(
            IWMPControls2 * This,
                       BSTR bstrItem,
                                VARIANT_BOOL *pIsAvailable);
                               HRESULT ( STDMETHODCALLTYPE *play )(
            IWMPControls2 * This);
                               HRESULT ( STDMETHODCALLTYPE *stop )(
            IWMPControls2 * This);
                               HRESULT ( STDMETHODCALLTYPE *pause )(
            IWMPControls2 * This);
                               HRESULT ( STDMETHODCALLTYPE *fastForward )(
            IWMPControls2 * This);
                               HRESULT ( STDMETHODCALLTYPE *fastReverse )(
            IWMPControls2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPosition )(
            IWMPControls2 * This,
                                double *pdCurrentPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPosition )(
            IWMPControls2 * This,
                       double dCurrentPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPositionString )(
            IWMPControls2 * This,
                                BSTR *pbstrCurrentPosition);
                               HRESULT ( STDMETHODCALLTYPE *next )(
            IWMPControls2 * This);
                               HRESULT ( STDMETHODCALLTYPE *previous )(
            IWMPControls2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentItem )(
            IWMPControls2 * This,
                                IWMPMedia **ppIWMPMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentItem )(
            IWMPControls2 * This,
                       IWMPMedia *pIWMPMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMarker )(
            IWMPControls2 * This,
                                long *plMarker);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentMarker )(
            IWMPControls2 * This,
                       long lMarker);
                               HRESULT ( STDMETHODCALLTYPE *playItem )(
            IWMPControls2 * This,
                       IWMPMedia *pIWMPMedia);
                               HRESULT ( STDMETHODCALLTYPE *step )(
            IWMPControls2 * This,
                       long lStep);
        END_INTERFACE
    } IWMPControls2Vtbl;
    interface IWMPControls2
    {
        CONST_VTBL struct IWMPControls2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
    ( (This)->lpVtbl -> play(This) )
    ( (This)->lpVtbl -> stop(This) )
    ( (This)->lpVtbl -> pause(This) )
    ( (This)->lpVtbl -> fastForward(This) )
    ( (This)->lpVtbl -> fastReverse(This) )
    ( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) )
    ( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) )
    ( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) )
    ( (This)->lpVtbl -> next(This) )
    ( (This)->lpVtbl -> previous(This) )
    ( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) )
    ( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) )
    ( (This)->lpVtbl -> get_currentMarker(This,plMarker) )
    ( (This)->lpVtbl -> put_currentMarker(This,lMarker) )
    ( (This)->lpVtbl -> playItem(This,pIWMPMedia) )
    ( (This)->lpVtbl -> step(This,lStep) )
EXTERN_C const IID IID_IWMPDVD;
    typedef struct IWMPDVDVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPDVD * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPDVD * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPDVD * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPDVD * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPDVD * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPDVD * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPDVD * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isAvailable )(
            IWMPDVD * This,
                       BSTR bstrItem,
                                VARIANT_BOOL *pIsAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *get_domain )(
            IWMPDVD * This,
                                BSTR *strDomain);
                               HRESULT ( STDMETHODCALLTYPE *topMenu )(
            IWMPDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *titleMenu )(
            IWMPDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *back )(
            IWMPDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *resume )(
            IWMPDVD * This);
        END_INTERFACE
    } IWMPDVDVtbl;
    interface IWMPDVD
    {
        CONST_VTBL struct IWMPDVDVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
    ( (This)->lpVtbl -> get_domain(This,strDomain) )
    ( (This)->lpVtbl -> topMenu(This) )
    ( (This)->lpVtbl -> titleMenu(This) )
    ( (This)->lpVtbl -> back(This) )
    ( (This)->lpVtbl -> resume(This) )
EXTERN_C const IID IID_IWMPCore2;
    typedef struct IWMPCore2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPCore2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPCore2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPCore2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPCore2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPCore2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPCore2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPCore2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *close )(
            IWMPCore2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPCore2 * This,
                                BSTR *pbstrURL);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IWMPCore2 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_openState )(
            IWMPCore2 * This,
                                WMPOpenState *pwmpos);
                                        HRESULT ( STDMETHODCALLTYPE *get_playState )(
            IWMPCore2 * This,
                                WMPPlayState *pwmpps);
                                        HRESULT ( STDMETHODCALLTYPE *get_controls )(
            IWMPCore2 * This,
                                IWMPControls **ppControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_settings )(
            IWMPCore2 * This,
                                IWMPSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMedia )(
            IWMPCore2 * This,
                                IWMPMedia **ppMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentMedia )(
            IWMPCore2 * This,
                       IWMPMedia *pMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPCore2 * This,
                                IWMPMediaCollection **ppMediaCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )(
            IWMPCore2 * This,
                                IWMPPlaylistCollection **ppPlaylistCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_versionInfo )(
            IWMPCore2 * This,
                                BSTR *pbstrVersionInfo);
                   HRESULT ( STDMETHODCALLTYPE *launchURL )(
            IWMPCore2 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_network )(
            IWMPCore2 * This,
                                IWMPNetwork **ppQNI);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )(
            IWMPCore2 * This,
                                IWMPPlaylist **ppPL);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )(
            IWMPCore2 * This,
                       IWMPPlaylist *pPL);
                                        HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )(
            IWMPCore2 * This,
                                IWMPCdromCollection **ppCdromCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_closedCaption )(
            IWMPCore2 * This,
                                IWMPClosedCaption **ppClosedCaption);
                                        HRESULT ( STDMETHODCALLTYPE *get_isOnline )(
            IWMPCore2 * This,
                                VARIANT_BOOL *pfOnline);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPCore2 * This,
                                IWMPError **ppError);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPCore2 * This,
                                BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_dvd )(
            IWMPCore2 * This,
                                IWMPDVD **ppDVD);
        END_INTERFACE
    } IWMPCore2Vtbl;
    interface IWMPCore2
    {
        CONST_VTBL struct IWMPCore2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> close(This) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
    ( (This)->lpVtbl -> put_URL(This,bstrURL) )
    ( (This)->lpVtbl -> get_openState(This,pwmpos) )
    ( (This)->lpVtbl -> get_playState(This,pwmpps) )
    ( (This)->lpVtbl -> get_controls(This,ppControl) )
    ( (This)->lpVtbl -> get_settings(This,ppSettings) )
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
    ( (This)->lpVtbl -> launchURL(This,bstrURL) )
    ( (This)->lpVtbl -> get_network(This,ppQNI) )
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
    ( (This)->lpVtbl -> get_error(This,ppError) )
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) )
EXTERN_C const IID IID_IWMPPlayer3;
    typedef struct IWMPPlayer3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlayer3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlayer3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlayer3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlayer3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlayer3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlayer3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlayer3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *close )(
            IWMPPlayer3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPPlayer3 * This,
                                BSTR *pbstrURL);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IWMPPlayer3 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_openState )(
            IWMPPlayer3 * This,
                                WMPOpenState *pwmpos);
                                        HRESULT ( STDMETHODCALLTYPE *get_playState )(
            IWMPPlayer3 * This,
                                WMPPlayState *pwmpps);
                                        HRESULT ( STDMETHODCALLTYPE *get_controls )(
            IWMPPlayer3 * This,
                                IWMPControls **ppControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_settings )(
            IWMPPlayer3 * This,
                                IWMPSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMedia )(
            IWMPPlayer3 * This,
                                IWMPMedia **ppMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentMedia )(
            IWMPPlayer3 * This,
                       IWMPMedia *pMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPPlayer3 * This,
                                IWMPMediaCollection **ppMediaCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )(
            IWMPPlayer3 * This,
                                IWMPPlaylistCollection **ppPlaylistCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_versionInfo )(
            IWMPPlayer3 * This,
                                BSTR *pbstrVersionInfo);
                   HRESULT ( STDMETHODCALLTYPE *launchURL )(
            IWMPPlayer3 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_network )(
            IWMPPlayer3 * This,
                                IWMPNetwork **ppQNI);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )(
            IWMPPlayer3 * This,
                                IWMPPlaylist **ppPL);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )(
            IWMPPlayer3 * This,
                       IWMPPlaylist *pPL);
                                        HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )(
            IWMPPlayer3 * This,
                                IWMPCdromCollection **ppCdromCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_closedCaption )(
            IWMPPlayer3 * This,
                                IWMPClosedCaption **ppClosedCaption);
                                        HRESULT ( STDMETHODCALLTYPE *get_isOnline )(
            IWMPPlayer3 * This,
                                VARIANT_BOOL *pfOnline);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPPlayer3 * This,
                                IWMPError **ppError);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPPlayer3 * This,
                                BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_dvd )(
            IWMPPlayer3 * This,
                                IWMPDVD **ppDVD);
                                        HRESULT ( STDMETHODCALLTYPE *get_enabled )(
            IWMPPlayer3 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_enabled )(
            IWMPPlayer3 * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_fullScreen )(
            IWMPPlayer3 * This,
                                VARIANT_BOOL *pbFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *put_fullScreen )(
            IWMPPlayer3 * This,
            VARIANT_BOOL bFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )(
            IWMPPlayer3 * This,
                                VARIANT_BOOL *pbEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )(
            IWMPPlayer3 * This,
            VARIANT_BOOL bEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_uiMode )(
            IWMPPlayer3 * This,
                       BSTR bstrMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_uiMode )(
            IWMPPlayer3 * This,
                                BSTR *pbstrMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_stretchToFit )(
            IWMPPlayer3 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_stretchToFit )(
            IWMPPlayer3 * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_windowlessVideo )(
            IWMPPlayer3 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_windowlessVideo )(
            IWMPPlayer3 * This,
                       VARIANT_BOOL bEnabled);
        END_INTERFACE
    } IWMPPlayer3Vtbl;
    interface IWMPPlayer3
    {
        CONST_VTBL struct IWMPPlayer3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> close(This) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
    ( (This)->lpVtbl -> put_URL(This,bstrURL) )
    ( (This)->lpVtbl -> get_openState(This,pwmpos) )
    ( (This)->lpVtbl -> get_playState(This,pwmpps) )
    ( (This)->lpVtbl -> get_controls(This,ppControl) )
    ( (This)->lpVtbl -> get_settings(This,ppSettings) )
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
    ( (This)->lpVtbl -> launchURL(This,bstrURL) )
    ( (This)->lpVtbl -> get_network(This,ppQNI) )
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
    ( (This)->lpVtbl -> get_error(This,ppError) )
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) )
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) )
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
    ( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) )
    ( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) )
    ( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) )
    ( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) )
EXTERN_C const IID IID_IWMPErrorItem2;
    typedef struct IWMPErrorItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPErrorItem2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPErrorItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPErrorItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPErrorItem2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPErrorItem2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPErrorItem2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPErrorItem2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorCode )(
            IWMPErrorItem2 * This,
                                long *phr);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorDescription )(
            IWMPErrorItem2 * This,
                                BSTR *pbstrDescription);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorContext )(
            IWMPErrorItem2 * This,
                                VARIANT *pvarContext);
                                        HRESULT ( STDMETHODCALLTYPE *get_remedy )(
            IWMPErrorItem2 * This,
                                long *plRemedy);
                                        HRESULT ( STDMETHODCALLTYPE *get_customUrl )(
            IWMPErrorItem2 * This,
                                BSTR *pbstrCustomUrl);
                                        HRESULT ( STDMETHODCALLTYPE *get_condition )(
            IWMPErrorItem2 * This,
                                long *plCondition);
        END_INTERFACE
    } IWMPErrorItem2Vtbl;
    interface IWMPErrorItem2
    {
        CONST_VTBL struct IWMPErrorItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_errorCode(This,phr) )
    ( (This)->lpVtbl -> get_errorDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> get_errorContext(This,pvarContext) )
    ( (This)->lpVtbl -> get_remedy(This,plRemedy) )
    ( (This)->lpVtbl -> get_customUrl(This,pbstrCustomUrl) )
    ( (This)->lpVtbl -> get_condition(This,plCondition) )
EXTERN_C const IID IID_IWMPRemoteMediaServices;
    typedef struct IWMPRemoteMediaServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPRemoteMediaServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPRemoteMediaServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPRemoteMediaServices * This);
        HRESULT ( STDMETHODCALLTYPE *GetServiceType )(
            IWMPRemoteMediaServices * This,
                        BSTR *pbstrType);
        HRESULT ( STDMETHODCALLTYPE *GetApplicationName )(
            IWMPRemoteMediaServices * This,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetScriptableObject )(
            IWMPRemoteMediaServices * This,
                        BSTR *pbstrName,
                        IDispatch **ppDispatch);
        HRESULT ( STDMETHODCALLTYPE *GetCustomUIMode )(
            IWMPRemoteMediaServices * This,
                        BSTR *pbstrFile);
        END_INTERFACE
    } IWMPRemoteMediaServicesVtbl;
    interface IWMPRemoteMediaServices
    {
        CONST_VTBL struct IWMPRemoteMediaServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetServiceType(This,pbstrType) )
    ( (This)->lpVtbl -> GetApplicationName(This,pbstrName) )
    ( (This)->lpVtbl -> GetScriptableObject(This,pbstrName,ppDispatch) )
    ( (This)->lpVtbl -> GetCustomUIMode(This,pbstrFile) )
EXTERN_GUID( CLSID_WMPSkinManager, 0xB2A7FD52,0x301F,0x4348, 0xB9, 0x3A, 0x63, 0x8C, 0x6D, 0xE4, 0x92, 0x29 );
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPSkinManager;
    typedef struct IWMPSkinManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSkinManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSkinManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSkinManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetVisualStyle )(
            IWMPSkinManager * This,
                       BSTR bstrPath);
        END_INTERFACE
    } IWMPSkinManagerVtbl;
    interface IWMPSkinManager
    {
        CONST_VTBL struct IWMPSkinManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetVisualStyle(This,bstrPath) )
EXTERN_C const IID IID_IWMPMetadataPicture;
    typedef struct IWMPMetadataPictureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMetadataPicture * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMetadataPicture * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMetadataPicture * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPMetadataPicture * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPMetadataPicture * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPMetadataPicture * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPMetadataPicture * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_mimeType )(
            IWMPMetadataPicture * This,
                                BSTR *pbstrMimeType);
                            HRESULT ( STDMETHODCALLTYPE *get_pictureType )(
            IWMPMetadataPicture * This,
                                BSTR *pbstrPictureType);
                            HRESULT ( STDMETHODCALLTYPE *get_description )(
            IWMPMetadataPicture * This,
                                BSTR *pbstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPMetadataPicture * This,
                                BSTR *pbstrURL);
        END_INTERFACE
    } IWMPMetadataPictureVtbl;
    interface IWMPMetadataPicture
    {
        CONST_VTBL struct IWMPMetadataPictureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_mimeType(This,pbstrMimeType) )
    ( (This)->lpVtbl -> get_pictureType(This,pbstrPictureType) )
    ( (This)->lpVtbl -> get_description(This,pbstrDescription) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
EXTERN_C const IID IID_IWMPMetadataText;
    typedef struct IWMPMetadataTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMetadataText * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMetadataText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMetadataText * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPMetadataText * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPMetadataText * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPMetadataText * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPMetadataText * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_description )(
            IWMPMetadataText * This,
                                BSTR *pbstrDescription);
                            HRESULT ( STDMETHODCALLTYPE *get_text )(
            IWMPMetadataText * This,
                                BSTR *pbstrText);
        END_INTERFACE
    } IWMPMetadataTextVtbl;
    interface IWMPMetadataText
    {
        CONST_VTBL struct IWMPMetadataTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_description(This,pbstrDescription) )
    ( (This)->lpVtbl -> get_text(This,pbstrText) )
EXTERN_C const IID IID_IWMPMedia3;
    typedef struct IWMPMedia3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMedia3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMedia3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMedia3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPMedia3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPMedia3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPMedia3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPMedia3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isIdentical )(
            IWMPMedia3 * This,
                       IWMPMedia *pIWMPMedia,
                                VARIANT_BOOL *pvbool);
                                        HRESULT ( STDMETHODCALLTYPE *get_sourceURL )(
            IWMPMedia3 * This,
                                BSTR *pbstrSourceURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IWMPMedia3 * This,
                                BSTR *pbstrName);
                                        HRESULT ( STDMETHODCALLTYPE *put_name )(
            IWMPMedia3 * This,
                       BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_imageSourceWidth )(
            IWMPMedia3 * This,
                                long *pWidth);
                                        HRESULT ( STDMETHODCALLTYPE *get_imageSourceHeight )(
            IWMPMedia3 * This,
                                long *pHeight);
                                        HRESULT ( STDMETHODCALLTYPE *get_markerCount )(
            IWMPMedia3 * This,
                                long *pMarkerCount);
                               HRESULT ( STDMETHODCALLTYPE *getMarkerTime )(
            IWMPMedia3 * This,
                       long MarkerNum,
                                double *pMarkerTime);
                               HRESULT ( STDMETHODCALLTYPE *getMarkerName )(
            IWMPMedia3 * This,
                       long MarkerNum,
                                BSTR *pbstrMarkerName);
                                        HRESULT ( STDMETHODCALLTYPE *get_duration )(
            IWMPMedia3 * This,
                                double *pDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_durationString )(
            IWMPMedia3 * This,
                                BSTR *pbstrDuration);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributeCount )(
            IWMPMedia3 * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *getAttributeName )(
            IWMPMedia3 * This,
                       long lIndex,
                                BSTR *pbstrItemName);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPMedia3 * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
                               HRESULT ( STDMETHODCALLTYPE *setItemInfo )(
            IWMPMedia3 * This,
                       BSTR bstrItemName,
                       BSTR bstrVal);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfoByAtom )(
            IWMPMedia3 * This,
                       long lAtom,
                                BSTR *pbstrVal);
                               HRESULT ( STDMETHODCALLTYPE *isMemberOf )(
            IWMPMedia3 * This,
                       IWMPPlaylist *pPlaylist,
                                VARIANT_BOOL *pvarfIsMemberOf);
                               HRESULT ( STDMETHODCALLTYPE *isReadOnlyItem )(
            IWMPMedia3 * This,
                       BSTR bstrItemName,
                                VARIANT_BOOL *pvarfIsReadOnly);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPMedia3 * This,
                                IWMPErrorItem **ppIWMPErrorItem);
                   HRESULT ( STDMETHODCALLTYPE *getAttributeCountByType )(
            IWMPMedia3 * This,
                       BSTR bstrType,
                       BSTR bstrLanguage,
                                long *plCount);
                   HRESULT ( STDMETHODCALLTYPE *getItemInfoByType )(
            IWMPMedia3 * This,
                       BSTR bstrType,
                       BSTR bstrLanguage,
                       long lIndex,
                                VARIANT *pvarValue);
        END_INTERFACE
    } IWMPMedia3Vtbl;
    interface IWMPMedia3
    {
        CONST_VTBL struct IWMPMedia3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isIdentical(This,pIWMPMedia,pvbool) )
    ( (This)->lpVtbl -> get_sourceURL(This,pbstrSourceURL) )
    ( (This)->lpVtbl -> get_name(This,pbstrName) )
    ( (This)->lpVtbl -> put_name(This,bstrName) )
    ( (This)->lpVtbl -> get_imageSourceWidth(This,pWidth) )
    ( (This)->lpVtbl -> get_imageSourceHeight(This,pHeight) )
    ( (This)->lpVtbl -> get_markerCount(This,pMarkerCount) )
    ( (This)->lpVtbl -> getMarkerTime(This,MarkerNum,pMarkerTime) )
    ( (This)->lpVtbl -> getMarkerName(This,MarkerNum,pbstrMarkerName) )
    ( (This)->lpVtbl -> get_duration(This,pDuration) )
    ( (This)->lpVtbl -> get_durationString(This,pbstrDuration) )
    ( (This)->lpVtbl -> get_attributeCount(This,plCount) )
    ( (This)->lpVtbl -> getAttributeName(This,lIndex,pbstrItemName) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
    ( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
    ( (This)->lpVtbl -> getItemInfoByAtom(This,lAtom,pbstrVal) )
    ( (This)->lpVtbl -> isMemberOf(This,pPlaylist,pvarfIsMemberOf) )
    ( (This)->lpVtbl -> isReadOnlyItem(This,bstrItemName,pvarfIsReadOnly) )
    ( (This)->lpVtbl -> get_error(This,ppIWMPErrorItem) )
    ( (This)->lpVtbl -> getAttributeCountByType(This,bstrType,bstrLanguage,plCount) )
    ( (This)->lpVtbl -> getItemInfoByType(This,bstrType,bstrLanguage,lIndex,pvarValue) )
EXTERN_C const IID IID_IWMPSettings2;
    typedef struct IWMPSettings2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSettings2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSettings2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSettings2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPSettings2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPSettings2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPSettings2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPSettings2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isAvailable )(
            IWMPSettings2 * This,
                       BSTR bstrItem,
                                VARIANT_BOOL *pIsAvailable);
                                        HRESULT ( STDMETHODCALLTYPE *get_autoStart )(
            IWMPSettings2 * This,
                                VARIANT_BOOL *pfAutoStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_autoStart )(
            IWMPSettings2 * This,
                       VARIANT_BOOL fAutoStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseURL )(
            IWMPSettings2 * This,
                                BSTR *pbstrBaseURL);
                                        HRESULT ( STDMETHODCALLTYPE *put_baseURL )(
            IWMPSettings2 * This,
                       BSTR bstrBaseURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_defaultFrame )(
            IWMPSettings2 * This,
                                BSTR *pbstrDefaultFrame);
                                        HRESULT ( STDMETHODCALLTYPE *put_defaultFrame )(
            IWMPSettings2 * This,
                       BSTR bstrDefaultFrame);
                                        HRESULT ( STDMETHODCALLTYPE *get_invokeURLs )(
            IWMPSettings2 * This,
                                VARIANT_BOOL *pfInvokeURLs);
                                        HRESULT ( STDMETHODCALLTYPE *put_invokeURLs )(
            IWMPSettings2 * This,
                       VARIANT_BOOL fInvokeURLs);
                                        HRESULT ( STDMETHODCALLTYPE *get_mute )(
            IWMPSettings2 * This,
                                VARIANT_BOOL *pfMute);
                                        HRESULT ( STDMETHODCALLTYPE *put_mute )(
            IWMPSettings2 * This,
                       VARIANT_BOOL fMute);
                                        HRESULT ( STDMETHODCALLTYPE *get_playCount )(
            IWMPSettings2 * This,
                                long *plCount);
                                        HRESULT ( STDMETHODCALLTYPE *put_playCount )(
            IWMPSettings2 * This,
                       long lCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_rate )(
            IWMPSettings2 * This,
                                double *pdRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_rate )(
            IWMPSettings2 * This,
                       double dRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_balance )(
            IWMPSettings2 * This,
                                long *plBalance);
                                        HRESULT ( STDMETHODCALLTYPE *put_balance )(
            IWMPSettings2 * This,
                       long lBalance);
                                        HRESULT ( STDMETHODCALLTYPE *get_volume )(
            IWMPSettings2 * This,
                                long *plVolume);
                                        HRESULT ( STDMETHODCALLTYPE *put_volume )(
            IWMPSettings2 * This,
                       long lVolume);
                               HRESULT ( STDMETHODCALLTYPE *getMode )(
            IWMPSettings2 * This,
                       BSTR bstrMode,
                                VARIANT_BOOL *pvarfMode);
                               HRESULT ( STDMETHODCALLTYPE *setMode )(
            IWMPSettings2 * This,
                       BSTR bstrMode,
                       VARIANT_BOOL varfMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_enableErrorDialogs )(
            IWMPSettings2 * This,
                                VARIANT_BOOL *pfEnableErrorDialogs);
                                        HRESULT ( STDMETHODCALLTYPE *put_enableErrorDialogs )(
            IWMPSettings2 * This,
                       VARIANT_BOOL fEnableErrorDialogs);
                                        HRESULT ( STDMETHODCALLTYPE *get_defaultAudioLanguage )(
            IWMPSettings2 * This,
                                long *plLangID);
                            HRESULT ( STDMETHODCALLTYPE *get_mediaAccessRights )(
            IWMPSettings2 * This,
                                BSTR *pbstrRights);
                   HRESULT ( STDMETHODCALLTYPE *requestMediaAccessRights )(
            IWMPSettings2 * This,
                       BSTR bstrDesiredAccess,
                                VARIANT_BOOL *pvbAccepted);
        END_INTERFACE
    } IWMPSettings2Vtbl;
    interface IWMPSettings2
    {
        CONST_VTBL struct IWMPSettings2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
    ( (This)->lpVtbl -> get_autoStart(This,pfAutoStart) )
    ( (This)->lpVtbl -> put_autoStart(This,fAutoStart) )
    ( (This)->lpVtbl -> get_baseURL(This,pbstrBaseURL) )
    ( (This)->lpVtbl -> put_baseURL(This,bstrBaseURL) )
    ( (This)->lpVtbl -> get_defaultFrame(This,pbstrDefaultFrame) )
    ( (This)->lpVtbl -> put_defaultFrame(This,bstrDefaultFrame) )
    ( (This)->lpVtbl -> get_invokeURLs(This,pfInvokeURLs) )
    ( (This)->lpVtbl -> put_invokeURLs(This,fInvokeURLs) )
    ( (This)->lpVtbl -> get_mute(This,pfMute) )
    ( (This)->lpVtbl -> put_mute(This,fMute) )
    ( (This)->lpVtbl -> get_playCount(This,plCount) )
    ( (This)->lpVtbl -> put_playCount(This,lCount) )
    ( (This)->lpVtbl -> get_rate(This,pdRate) )
    ( (This)->lpVtbl -> put_rate(This,dRate) )
    ( (This)->lpVtbl -> get_balance(This,plBalance) )
    ( (This)->lpVtbl -> put_balance(This,lBalance) )
    ( (This)->lpVtbl -> get_volume(This,plVolume) )
    ( (This)->lpVtbl -> put_volume(This,lVolume) )
    ( (This)->lpVtbl -> getMode(This,bstrMode,pvarfMode) )
    ( (This)->lpVtbl -> setMode(This,bstrMode,varfMode) )
    ( (This)->lpVtbl -> get_enableErrorDialogs(This,pfEnableErrorDialogs) )
    ( (This)->lpVtbl -> put_enableErrorDialogs(This,fEnableErrorDialogs) )
    ( (This)->lpVtbl -> get_defaultAudioLanguage(This,plLangID) )
    ( (This)->lpVtbl -> get_mediaAccessRights(This,pbstrRights) )
    ( (This)->lpVtbl -> requestMediaAccessRights(This,bstrDesiredAccess,pvbAccepted) )
EXTERN_C const IID IID_IWMPControls3;
    typedef struct IWMPControls3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPControls3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPControls3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPControls3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPControls3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPControls3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPControls3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPControls3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_isAvailable )(
            IWMPControls3 * This,
                       BSTR bstrItem,
                                VARIANT_BOOL *pIsAvailable);
                               HRESULT ( STDMETHODCALLTYPE *play )(
            IWMPControls3 * This);
                               HRESULT ( STDMETHODCALLTYPE *stop )(
            IWMPControls3 * This);
                               HRESULT ( STDMETHODCALLTYPE *pause )(
            IWMPControls3 * This);
                               HRESULT ( STDMETHODCALLTYPE *fastForward )(
            IWMPControls3 * This);
                               HRESULT ( STDMETHODCALLTYPE *fastReverse )(
            IWMPControls3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPosition )(
            IWMPControls3 * This,
                                double *pdCurrentPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPosition )(
            IWMPControls3 * This,
                       double dCurrentPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPositionString )(
            IWMPControls3 * This,
                                BSTR *pbstrCurrentPosition);
                               HRESULT ( STDMETHODCALLTYPE *next )(
            IWMPControls3 * This);
                               HRESULT ( STDMETHODCALLTYPE *previous )(
            IWMPControls3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentItem )(
            IWMPControls3 * This,
                                IWMPMedia **ppIWMPMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentItem )(
            IWMPControls3 * This,
                       IWMPMedia *pIWMPMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMarker )(
            IWMPControls3 * This,
                                long *plMarker);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentMarker )(
            IWMPControls3 * This,
                       long lMarker);
                               HRESULT ( STDMETHODCALLTYPE *playItem )(
            IWMPControls3 * This,
                       IWMPMedia *pIWMPMedia);
                               HRESULT ( STDMETHODCALLTYPE *step )(
            IWMPControls3 * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *get_audioLanguageCount )(
            IWMPControls3 * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *getAudioLanguageID )(
            IWMPControls3 * This,
                       long lIndex,
                                long *plLangID);
                               HRESULT ( STDMETHODCALLTYPE *getAudioLanguageDescription )(
            IWMPControls3 * This,
                       long lIndex,
                                BSTR *pbstrLangDesc);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentAudioLanguage )(
            IWMPControls3 * This,
                                long *plLangID);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentAudioLanguage )(
            IWMPControls3 * This,
                       long lLangID);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentAudioLanguageIndex )(
            IWMPControls3 * This,
                                long *plIndex);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentAudioLanguageIndex )(
            IWMPControls3 * This,
                       long lIndex);
                               HRESULT ( STDMETHODCALLTYPE *getLanguageName )(
            IWMPControls3 * This,
                       long lLangID,
                                BSTR *pbstrLangName);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPositionTimecode )(
            IWMPControls3 * This,
                                BSTR *bstrTimecode);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPositionTimecode )(
            IWMPControls3 * This,
                       BSTR bstrTimecode);
        END_INTERFACE
    } IWMPControls3Vtbl;
    interface IWMPControls3
    {
        CONST_VTBL struct IWMPControls3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_isAvailable(This,bstrItem,pIsAvailable) )
    ( (This)->lpVtbl -> play(This) )
    ( (This)->lpVtbl -> stop(This) )
    ( (This)->lpVtbl -> pause(This) )
    ( (This)->lpVtbl -> fastForward(This) )
    ( (This)->lpVtbl -> fastReverse(This) )
    ( (This)->lpVtbl -> get_currentPosition(This,pdCurrentPosition) )
    ( (This)->lpVtbl -> put_currentPosition(This,dCurrentPosition) )
    ( (This)->lpVtbl -> get_currentPositionString(This,pbstrCurrentPosition) )
    ( (This)->lpVtbl -> next(This) )
    ( (This)->lpVtbl -> previous(This) )
    ( (This)->lpVtbl -> get_currentItem(This,ppIWMPMedia) )
    ( (This)->lpVtbl -> put_currentItem(This,pIWMPMedia) )
    ( (This)->lpVtbl -> get_currentMarker(This,plMarker) )
    ( (This)->lpVtbl -> put_currentMarker(This,lMarker) )
    ( (This)->lpVtbl -> playItem(This,pIWMPMedia) )
    ( (This)->lpVtbl -> step(This,lStep) )
    ( (This)->lpVtbl -> get_audioLanguageCount(This,plCount) )
    ( (This)->lpVtbl -> getAudioLanguageID(This,lIndex,plLangID) )
    ( (This)->lpVtbl -> getAudioLanguageDescription(This,lIndex,pbstrLangDesc) )
    ( (This)->lpVtbl -> get_currentAudioLanguage(This,plLangID) )
    ( (This)->lpVtbl -> put_currentAudioLanguage(This,lLangID) )
    ( (This)->lpVtbl -> get_currentAudioLanguageIndex(This,plIndex) )
    ( (This)->lpVtbl -> put_currentAudioLanguageIndex(This,lIndex) )
    ( (This)->lpVtbl -> getLanguageName(This,lLangID,pbstrLangName) )
    ( (This)->lpVtbl -> get_currentPositionTimecode(This,bstrTimecode) )
    ( (This)->lpVtbl -> put_currentPositionTimecode(This,bstrTimecode) )
EXTERN_C const IID IID_IWMPClosedCaption2;
    typedef struct IWMPClosedCaption2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPClosedCaption2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPClosedCaption2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPClosedCaption2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPClosedCaption2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPClosedCaption2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPClosedCaption2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPClosedCaption2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMIStyle )(
            IWMPClosedCaption2 * This,
                                BSTR *pbstrSAMIStyle);
                                        HRESULT ( STDMETHODCALLTYPE *put_SAMIStyle )(
            IWMPClosedCaption2 * This,
                       BSTR bstrSAMIStyle);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMILang )(
            IWMPClosedCaption2 * This,
                                BSTR *pbstrSAMILang);
                                        HRESULT ( STDMETHODCALLTYPE *put_SAMILang )(
            IWMPClosedCaption2 * This,
                       BSTR bstrSAMILang);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMIFileName )(
            IWMPClosedCaption2 * This,
                                BSTR *pbstrSAMIFileName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SAMIFileName )(
            IWMPClosedCaption2 * This,
                       BSTR bstrSAMIFileName);
                                        HRESULT ( STDMETHODCALLTYPE *get_captioningId )(
            IWMPClosedCaption2 * This,
                                BSTR *pbstrCaptioningID);
                                        HRESULT ( STDMETHODCALLTYPE *put_captioningId )(
            IWMPClosedCaption2 * This,
                       BSTR bstrCaptioningID);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMILangCount )(
            IWMPClosedCaption2 * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *getSAMILangName )(
            IWMPClosedCaption2 * This,
                       long nIndex,
                                BSTR *pbstrName);
                               HRESULT ( STDMETHODCALLTYPE *getSAMILangID )(
            IWMPClosedCaption2 * This,
                       long nIndex,
                                long *plLangID);
                                        HRESULT ( STDMETHODCALLTYPE *get_SAMIStyleCount )(
            IWMPClosedCaption2 * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *getSAMIStyleName )(
            IWMPClosedCaption2 * This,
                       long nIndex,
                                BSTR *pbstrName);
        END_INTERFACE
    } IWMPClosedCaption2Vtbl;
    interface IWMPClosedCaption2
    {
        CONST_VTBL struct IWMPClosedCaption2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SAMIStyle(This,pbstrSAMIStyle) )
    ( (This)->lpVtbl -> put_SAMIStyle(This,bstrSAMIStyle) )
    ( (This)->lpVtbl -> get_SAMILang(This,pbstrSAMILang) )
    ( (This)->lpVtbl -> put_SAMILang(This,bstrSAMILang) )
    ( (This)->lpVtbl -> get_SAMIFileName(This,pbstrSAMIFileName) )
    ( (This)->lpVtbl -> put_SAMIFileName(This,bstrSAMIFileName) )
    ( (This)->lpVtbl -> get_captioningId(This,pbstrCaptioningID) )
    ( (This)->lpVtbl -> put_captioningId(This,bstrCaptioningID) )
    ( (This)->lpVtbl -> get_SAMILangCount(This,plCount) )
    ( (This)->lpVtbl -> getSAMILangName(This,nIndex,pbstrName) )
    ( (This)->lpVtbl -> getSAMILangID(This,nIndex,plLangID) )
    ( (This)->lpVtbl -> get_SAMIStyleCount(This,plCount) )
    ( (This)->lpVtbl -> getSAMIStyleName(This,nIndex,pbstrName) )
EXTERN_C const IID IID_IWMPPlayerApplication;
    typedef struct IWMPPlayerApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlayerApplication * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlayerApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlayerApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlayerApplication * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlayerApplication * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlayerApplication * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlayerApplication * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *switchToPlayerApplication )(
            IWMPPlayerApplication * This);
                               HRESULT ( STDMETHODCALLTYPE *switchToControl )(
            IWMPPlayerApplication * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_playerDocked )(
            IWMPPlayerApplication * This,
                                VARIANT_BOOL *pbPlayerDocked);
                                        HRESULT ( STDMETHODCALLTYPE *get_hasDisplay )(
            IWMPPlayerApplication * This,
                                VARIANT_BOOL *pbHasDisplay);
        END_INTERFACE
    } IWMPPlayerApplicationVtbl;
    interface IWMPPlayerApplication
    {
        CONST_VTBL struct IWMPPlayerApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> switchToPlayerApplication(This) )
    ( (This)->lpVtbl -> switchToControl(This) )
    ( (This)->lpVtbl -> get_playerDocked(This,pbPlayerDocked) )
    ( (This)->lpVtbl -> get_hasDisplay(This,pbHasDisplay) )
EXTERN_C const IID IID_IWMPCore3;
    typedef struct IWMPCore3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPCore3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPCore3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPCore3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPCore3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPCore3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPCore3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPCore3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *close )(
            IWMPCore3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPCore3 * This,
                                BSTR *pbstrURL);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IWMPCore3 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_openState )(
            IWMPCore3 * This,
                                WMPOpenState *pwmpos);
                                        HRESULT ( STDMETHODCALLTYPE *get_playState )(
            IWMPCore3 * This,
                                WMPPlayState *pwmpps);
                                        HRESULT ( STDMETHODCALLTYPE *get_controls )(
            IWMPCore3 * This,
                                IWMPControls **ppControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_settings )(
            IWMPCore3 * This,
                                IWMPSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMedia )(
            IWMPCore3 * This,
                                IWMPMedia **ppMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentMedia )(
            IWMPCore3 * This,
                       IWMPMedia *pMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPCore3 * This,
                                IWMPMediaCollection **ppMediaCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )(
            IWMPCore3 * This,
                                IWMPPlaylistCollection **ppPlaylistCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_versionInfo )(
            IWMPCore3 * This,
                                BSTR *pbstrVersionInfo);
                   HRESULT ( STDMETHODCALLTYPE *launchURL )(
            IWMPCore3 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_network )(
            IWMPCore3 * This,
                                IWMPNetwork **ppQNI);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )(
            IWMPCore3 * This,
                                IWMPPlaylist **ppPL);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )(
            IWMPCore3 * This,
                       IWMPPlaylist *pPL);
                                        HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )(
            IWMPCore3 * This,
                                IWMPCdromCollection **ppCdromCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_closedCaption )(
            IWMPCore3 * This,
                                IWMPClosedCaption **ppClosedCaption);
                                        HRESULT ( STDMETHODCALLTYPE *get_isOnline )(
            IWMPCore3 * This,
                                VARIANT_BOOL *pfOnline);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPCore3 * This,
                                IWMPError **ppError);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPCore3 * This,
                                BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_dvd )(
            IWMPCore3 * This,
                                IWMPDVD **ppDVD);
                               HRESULT ( STDMETHODCALLTYPE *newPlaylist )(
            IWMPCore3 * This,
                       BSTR bstrName,
                       BSTR bstrURL,
                                IWMPPlaylist **ppPlaylist);
                               HRESULT ( STDMETHODCALLTYPE *newMedia )(
            IWMPCore3 * This,
                       BSTR bstrURL,
                                IWMPMedia **ppMedia);
        END_INTERFACE
    } IWMPCore3Vtbl;
    interface IWMPCore3
    {
        CONST_VTBL struct IWMPCore3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> close(This) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
    ( (This)->lpVtbl -> put_URL(This,bstrURL) )
    ( (This)->lpVtbl -> get_openState(This,pwmpos) )
    ( (This)->lpVtbl -> get_playState(This,pwmpps) )
    ( (This)->lpVtbl -> get_controls(This,ppControl) )
    ( (This)->lpVtbl -> get_settings(This,ppSettings) )
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
    ( (This)->lpVtbl -> launchURL(This,bstrURL) )
    ( (This)->lpVtbl -> get_network(This,ppQNI) )
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
    ( (This)->lpVtbl -> get_error(This,ppError) )
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) )
    ( (This)->lpVtbl -> newPlaylist(This,bstrName,bstrURL,ppPlaylist) )
    ( (This)->lpVtbl -> newMedia(This,bstrURL,ppMedia) )
EXTERN_C const IID IID_IWMPPlayer4;
    typedef struct IWMPPlayer4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlayer4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlayer4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlayer4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPPlayer4 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPPlayer4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPPlayer4 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPPlayer4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *close )(
            IWMPPlayer4 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IWMPPlayer4 * This,
                                BSTR *pbstrURL);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IWMPPlayer4 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_openState )(
            IWMPPlayer4 * This,
                                WMPOpenState *pwmpos);
                                        HRESULT ( STDMETHODCALLTYPE *get_playState )(
            IWMPPlayer4 * This,
                                WMPPlayState *pwmpps);
                                        HRESULT ( STDMETHODCALLTYPE *get_controls )(
            IWMPPlayer4 * This,
                                IWMPControls **ppControl);
                                        HRESULT ( STDMETHODCALLTYPE *get_settings )(
            IWMPPlayer4 * This,
                                IWMPSettings **ppSettings);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentMedia )(
            IWMPPlayer4 * This,
                                IWMPMedia **ppMedia);
                            HRESULT ( STDMETHODCALLTYPE *put_currentMedia )(
            IWMPPlayer4 * This,
                       IWMPMedia *pMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPPlayer4 * This,
                                IWMPMediaCollection **ppMediaCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_playlistCollection )(
            IWMPPlayer4 * This,
                                IWMPPlaylistCollection **ppPlaylistCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_versionInfo )(
            IWMPPlayer4 * This,
                                BSTR *pbstrVersionInfo);
                   HRESULT ( STDMETHODCALLTYPE *launchURL )(
            IWMPPlayer4 * This,
                       BSTR bstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_network )(
            IWMPPlayer4 * This,
                                IWMPNetwork **ppQNI);
                                        HRESULT ( STDMETHODCALLTYPE *get_currentPlaylist )(
            IWMPPlayer4 * This,
                                IWMPPlaylist **ppPL);
                                        HRESULT ( STDMETHODCALLTYPE *put_currentPlaylist )(
            IWMPPlayer4 * This,
                       IWMPPlaylist *pPL);
                                        HRESULT ( STDMETHODCALLTYPE *get_cdromCollection )(
            IWMPPlayer4 * This,
                                IWMPCdromCollection **ppCdromCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_closedCaption )(
            IWMPPlayer4 * This,
                                IWMPClosedCaption **ppClosedCaption);
                                        HRESULT ( STDMETHODCALLTYPE *get_isOnline )(
            IWMPPlayer4 * This,
                                VARIANT_BOOL *pfOnline);
                                        HRESULT ( STDMETHODCALLTYPE *get_error )(
            IWMPPlayer4 * This,
                                IWMPError **ppError);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPPlayer4 * This,
                                BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_dvd )(
            IWMPPlayer4 * This,
                                IWMPDVD **ppDVD);
                               HRESULT ( STDMETHODCALLTYPE *newPlaylist )(
            IWMPPlayer4 * This,
                       BSTR bstrName,
                       BSTR bstrURL,
                                IWMPPlaylist **ppPlaylist);
                               HRESULT ( STDMETHODCALLTYPE *newMedia )(
            IWMPPlayer4 * This,
                       BSTR bstrURL,
                                IWMPMedia **ppMedia);
                                        HRESULT ( STDMETHODCALLTYPE *get_enabled )(
            IWMPPlayer4 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_enabled )(
            IWMPPlayer4 * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_fullScreen )(
            IWMPPlayer4 * This,
                                VARIANT_BOOL *pbFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *put_fullScreen )(
            IWMPPlayer4 * This,
            VARIANT_BOOL bFullScreen);
                                        HRESULT ( STDMETHODCALLTYPE *get_enableContextMenu )(
            IWMPPlayer4 * This,
                                VARIANT_BOOL *pbEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_enableContextMenu )(
            IWMPPlayer4 * This,
            VARIANT_BOOL bEnableContextMenu);
                                        HRESULT ( STDMETHODCALLTYPE *put_uiMode )(
            IWMPPlayer4 * This,
                       BSTR bstrMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_uiMode )(
            IWMPPlayer4 * This,
                                BSTR *pbstrMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_stretchToFit )(
            IWMPPlayer4 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_stretchToFit )(
            IWMPPlayer4 * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_windowlessVideo )(
            IWMPPlayer4 * This,
                                VARIANT_BOOL *pbEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_windowlessVideo )(
            IWMPPlayer4 * This,
                       VARIANT_BOOL bEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_isRemote )(
            IWMPPlayer4 * This,
                                VARIANT_BOOL *pvarfIsRemote);
                                        HRESULT ( STDMETHODCALLTYPE *get_playerApplication )(
            IWMPPlayer4 * This,
                                IWMPPlayerApplication **ppIWMPPlayerApplication);
                               HRESULT ( STDMETHODCALLTYPE *openPlayer )(
            IWMPPlayer4 * This,
                       BSTR bstrURL);
        END_INTERFACE
    } IWMPPlayer4Vtbl;
    interface IWMPPlayer4
    {
        CONST_VTBL struct IWMPPlayer4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> close(This) )
    ( (This)->lpVtbl -> get_URL(This,pbstrURL) )
    ( (This)->lpVtbl -> put_URL(This,bstrURL) )
    ( (This)->lpVtbl -> get_openState(This,pwmpos) )
    ( (This)->lpVtbl -> get_playState(This,pwmpps) )
    ( (This)->lpVtbl -> get_controls(This,ppControl) )
    ( (This)->lpVtbl -> get_settings(This,ppSettings) )
    ( (This)->lpVtbl -> get_currentMedia(This,ppMedia) )
    ( (This)->lpVtbl -> put_currentMedia(This,pMedia) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppMediaCollection) )
    ( (This)->lpVtbl -> get_playlistCollection(This,ppPlaylistCollection) )
    ( (This)->lpVtbl -> get_versionInfo(This,pbstrVersionInfo) )
    ( (This)->lpVtbl -> launchURL(This,bstrURL) )
    ( (This)->lpVtbl -> get_network(This,ppQNI) )
    ( (This)->lpVtbl -> get_currentPlaylist(This,ppPL) )
    ( (This)->lpVtbl -> put_currentPlaylist(This,pPL) )
    ( (This)->lpVtbl -> get_cdromCollection(This,ppCdromCollection) )
    ( (This)->lpVtbl -> get_closedCaption(This,ppClosedCaption) )
    ( (This)->lpVtbl -> get_isOnline(This,pfOnline) )
    ( (This)->lpVtbl -> get_error(This,ppError) )
    ( (This)->lpVtbl -> get_status(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_dvd(This,ppDVD) )
    ( (This)->lpVtbl -> newPlaylist(This,bstrName,bstrURL,ppPlaylist) )
    ( (This)->lpVtbl -> newMedia(This,bstrURL,ppMedia) )
    ( (This)->lpVtbl -> get_enabled(This,pbEnabled) )
    ( (This)->lpVtbl -> put_enabled(This,bEnabled) )
    ( (This)->lpVtbl -> get_fullScreen(This,pbFullScreen) )
    ( (This)->lpVtbl -> put_fullScreen(This,bFullScreen) )
    ( (This)->lpVtbl -> get_enableContextMenu(This,pbEnableContextMenu) )
    ( (This)->lpVtbl -> put_enableContextMenu(This,bEnableContextMenu) )
    ( (This)->lpVtbl -> put_uiMode(This,bstrMode) )
    ( (This)->lpVtbl -> get_uiMode(This,pbstrMode) )
    ( (This)->lpVtbl -> get_stretchToFit(This,pbEnabled) )
    ( (This)->lpVtbl -> put_stretchToFit(This,bEnabled) )
    ( (This)->lpVtbl -> get_windowlessVideo(This,pbEnabled) )
    ( (This)->lpVtbl -> put_windowlessVideo(This,bEnabled) )
    ( (This)->lpVtbl -> get_isRemote(This,pvarfIsRemote) )
    ( (This)->lpVtbl -> get_playerApplication(This,ppIWMPPlayerApplication) )
    ( (This)->lpVtbl -> openPlayer(This,bstrURL) )
EXTERN_C const IID IID_IWMPPlayerServices;
    typedef struct IWMPPlayerServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlayerServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlayerServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlayerServices * This);
        HRESULT ( STDMETHODCALLTYPE *activateUIPlugin )(
            IWMPPlayerServices * This,
                       BSTR bstrPlugin);
        HRESULT ( STDMETHODCALLTYPE *setTaskPane )(
            IWMPPlayerServices * This,
                       BSTR bstrTaskPane);
        HRESULT ( STDMETHODCALLTYPE *setTaskPaneURL )(
            IWMPPlayerServices * This,
                       BSTR bstrTaskPane,
                       BSTR bstrURL,
                       BSTR bstrFriendlyName);
        END_INTERFACE
    } IWMPPlayerServicesVtbl;
    interface IWMPPlayerServices
    {
        CONST_VTBL struct IWMPPlayerServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> activateUIPlugin(This,bstrPlugin) )
    ( (This)->lpVtbl -> setTaskPane(This,bstrTaskPane) )
    ( (This)->lpVtbl -> setTaskPaneURL(This,bstrTaskPane,bstrURL,bstrFriendlyName) )
typedef
enum WMPSyncState
    {
        wmpssUnknown = 0,
        wmpssSynchronizing = ( wmpssUnknown + 1 ) ,
        wmpssStopped = ( wmpssSynchronizing + 1 ) ,
        wmpssEstimating = ( wmpssStopped + 1 ) ,
        wmpssLast = ( wmpssEstimating + 1 )
    } WMPSyncState;
typedef
enum WMPDeviceStatus
    {
        wmpdsUnknown = 0,
        wmpdsPartnershipExists = ( wmpdsUnknown + 1 ) ,
        wmpdsPartnershipDeclined = ( wmpdsPartnershipExists + 1 ) ,
        wmpdsPartnershipAnother = ( wmpdsPartnershipDeclined + 1 ) ,
        wmpdsManualDevice = ( wmpdsPartnershipAnother + 1 ) ,
        wmpdsNewDevice = ( wmpdsManualDevice + 1 ) ,
        wmpdsLast = ( wmpdsNewDevice + 1 )
    } WMPDeviceStatus;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPSyncDevice;
    typedef struct IWMPSyncDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSyncDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSyncDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSyncDevice * This);
                        HRESULT ( STDMETHODCALLTYPE *get_friendlyName )(
            IWMPSyncDevice * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_friendlyName )(
            IWMPSyncDevice * This,
                       BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_deviceName )(
            IWMPSyncDevice * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_deviceId )(
            IWMPSyncDevice * This,
                                BSTR *pbstrDeviceId);
                        HRESULT ( STDMETHODCALLTYPE *get_partnershipIndex )(
            IWMPSyncDevice * This,
                                long *plIndex);
                        HRESULT ( STDMETHODCALLTYPE *get_connected )(
            IWMPSyncDevice * This,
                                VARIANT_BOOL *pvbConnected);
                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPSyncDevice * This,
                                WMPDeviceStatus *pwmpds);
                        HRESULT ( STDMETHODCALLTYPE *get_syncState )(
            IWMPSyncDevice * This,
                                WMPSyncState *pwmpss);
                        HRESULT ( STDMETHODCALLTYPE *get_progress )(
            IWMPSyncDevice * This,
                                long *plProgress);
        HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPSyncDevice * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
        HRESULT ( STDMETHODCALLTYPE *createPartnership )(
            IWMPSyncDevice * This,
                       VARIANT_BOOL vbShowUI);
        HRESULT ( STDMETHODCALLTYPE *deletePartnership )(
            IWMPSyncDevice * This);
        HRESULT ( STDMETHODCALLTYPE *start )(
            IWMPSyncDevice * This);
        HRESULT ( STDMETHODCALLTYPE *stop )(
            IWMPSyncDevice * This);
        HRESULT ( STDMETHODCALLTYPE *showSettings )(
            IWMPSyncDevice * This);
        HRESULT ( STDMETHODCALLTYPE *isIdentical )(
            IWMPSyncDevice * This,
                       IWMPSyncDevice *pDevice,
                                VARIANT_BOOL *pvbool);
        END_INTERFACE
    } IWMPSyncDeviceVtbl;
    interface IWMPSyncDevice
    {
        CONST_VTBL struct IWMPSyncDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_friendlyName(This,pbstrName) )
    ( (This)->lpVtbl -> put_friendlyName(This,bstrName) )
    ( (This)->lpVtbl -> get_deviceName(This,pbstrName) )
    ( (This)->lpVtbl -> get_deviceId(This,pbstrDeviceId) )
    ( (This)->lpVtbl -> get_partnershipIndex(This,plIndex) )
    ( (This)->lpVtbl -> get_connected(This,pvbConnected) )
    ( (This)->lpVtbl -> get_status(This,pwmpds) )
    ( (This)->lpVtbl -> get_syncState(This,pwmpss) )
    ( (This)->lpVtbl -> get_progress(This,plProgress) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
    ( (This)->lpVtbl -> createPartnership(This,vbShowUI) )
    ( (This)->lpVtbl -> deletePartnership(This) )
    ( (This)->lpVtbl -> start(This) )
    ( (This)->lpVtbl -> stop(This) )
    ( (This)->lpVtbl -> showSettings(This) )
    ( (This)->lpVtbl -> isIdentical(This,pDevice,pvbool) )
EXTERN_C const IID IID_IWMPSyncServices;
    typedef struct IWMPSyncServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSyncServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSyncServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSyncServices * This);
                        HRESULT ( STDMETHODCALLTYPE *get_deviceCount )(
            IWMPSyncServices * This,
                                long *plCount);
        HRESULT ( STDMETHODCALLTYPE *getDevice )(
            IWMPSyncServices * This,
                       long lIndex,
                                IWMPSyncDevice **ppDevice);
        END_INTERFACE
    } IWMPSyncServicesVtbl;
    interface IWMPSyncServices
    {
        CONST_VTBL struct IWMPSyncServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_deviceCount(This,plCount) )
    ( (This)->lpVtbl -> getDevice(This,lIndex,ppDevice) )
EXTERN_C const IID IID_IWMPPlayerServices2;
    typedef struct IWMPPlayerServices2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPPlayerServices2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPPlayerServices2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPPlayerServices2 * This);
        HRESULT ( STDMETHODCALLTYPE *activateUIPlugin )(
            IWMPPlayerServices2 * This,
                       BSTR bstrPlugin);
        HRESULT ( STDMETHODCALLTYPE *setTaskPane )(
            IWMPPlayerServices2 * This,
                       BSTR bstrTaskPane);
        HRESULT ( STDMETHODCALLTYPE *setTaskPaneURL )(
            IWMPPlayerServices2 * This,
                       BSTR bstrTaskPane,
                       BSTR bstrURL,
                       BSTR bstrFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *setBackgroundProcessingPriority )(
            IWMPPlayerServices2 * This,
                       BSTR bstrPriority);
        END_INTERFACE
    } IWMPPlayerServices2Vtbl;
    interface IWMPPlayerServices2
    {
        CONST_VTBL struct IWMPPlayerServices2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> activateUIPlugin(This,bstrPlugin) )
    ( (This)->lpVtbl -> setTaskPane(This,bstrTaskPane) )
    ( (This)->lpVtbl -> setTaskPaneURL(This,bstrTaskPane,bstrURL,bstrFriendlyName) )
    ( (This)->lpVtbl -> setBackgroundProcessingPriority(This,bstrPriority) )
typedef
enum WMPRipState
    {
        wmprsUnknown = 0,
        wmprsRipping = ( wmprsUnknown + 1 ) ,
        wmprsStopped = ( wmprsRipping + 1 )
    } WMPRipState;
typedef
enum WMPBurnFormat
    {
        wmpbfAudioCD = 0,
        wmpbfDataCD = ( wmpbfAudioCD + 1 )
    } WMPBurnFormat;
typedef
enum WMPBurnState
    {
        wmpbsUnknown = 0,
        wmpbsBusy = ( wmpbsUnknown + 1 ) ,
        wmpbsReady = ( wmpbsBusy + 1 ) ,
        wmpbsWaitingForDisc = ( wmpbsReady + 1 ) ,
        wmpbsRefreshStatusPending = ( wmpbsWaitingForDisc + 1 ) ,
        wmpbsPreparingToBurn = ( wmpbsRefreshStatusPending + 1 ) ,
        wmpbsBurning = ( wmpbsPreparingToBurn + 1 ) ,
        wmpbsStopped = ( wmpbsBurning + 1 ) ,
        wmpbsErasing = ( wmpbsStopped + 1 ) ,
        wmpbsDownloading = ( wmpbsErasing + 1 )
    } WMPBurnState;
typedef
enum WMPStringCollectionChangeEventType
    {
        wmpsccetUnknown = 0,
        wmpsccetInsert = ( wmpsccetUnknown + 1 ) ,
        wmpsccetChange = ( wmpsccetInsert + 1 ) ,
        wmpsccetDelete = ( wmpsccetChange + 1 ) ,
        wmpsccetClear = ( wmpsccetDelete + 1 ) ,
        wmpsccetBeginUpdates = ( wmpsccetClear + 1 ) ,
        wmpsccetEndUpdates = ( wmpsccetBeginUpdates + 1 )
    } WMPStringCollectionChangeEventType;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0038_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPCdromRip;
    typedef struct IWMPCdromRipVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPCdromRip * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPCdromRip * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPCdromRip * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ripState )(
            IWMPCdromRip * This,
                                WMPRipState *pwmprs);
                        HRESULT ( STDMETHODCALLTYPE *get_ripProgress )(
            IWMPCdromRip * This,
                                long *plProgress);
        HRESULT ( STDMETHODCALLTYPE *startRip )(
            IWMPCdromRip * This);
        HRESULT ( STDMETHODCALLTYPE *stopRip )(
            IWMPCdromRip * This);
        END_INTERFACE
    } IWMPCdromRipVtbl;
    interface IWMPCdromRip
    {
        CONST_VTBL struct IWMPCdromRipVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ripState(This,pwmprs) )
    ( (This)->lpVtbl -> get_ripProgress(This,plProgress) )
    ( (This)->lpVtbl -> startRip(This) )
    ( (This)->lpVtbl -> stopRip(This) )
EXTERN_C const IID IID_IWMPCdromBurn;
    typedef struct IWMPCdromBurnVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPCdromBurn * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPCdromBurn * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPCdromBurn * This);
        HRESULT ( STDMETHODCALLTYPE *isAvailable )(
            IWMPCdromBurn * This,
                       BSTR bstrItem,
                                VARIANT_BOOL *pIsAvailable);
        HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPCdromBurn * This,
                       BSTR bstrItem,
                                BSTR *pbstrVal);
                        HRESULT ( STDMETHODCALLTYPE *get_label )(
            IWMPCdromBurn * This,
                                BSTR *pbstrLabel);
                        HRESULT ( STDMETHODCALLTYPE *put_label )(
            IWMPCdromBurn * This,
                       BSTR bstrLabel);
                        HRESULT ( STDMETHODCALLTYPE *get_burnFormat )(
            IWMPCdromBurn * This,
                                WMPBurnFormat *pwmpbf);
                        HRESULT ( STDMETHODCALLTYPE *put_burnFormat )(
            IWMPCdromBurn * This,
                       WMPBurnFormat wmpbf);
                        HRESULT ( STDMETHODCALLTYPE *get_burnPlaylist )(
            IWMPCdromBurn * This,
                                IWMPPlaylist **ppPlaylist);
                        HRESULT ( STDMETHODCALLTYPE *put_burnPlaylist )(
            IWMPCdromBurn * This,
                       IWMPPlaylist *pPlaylist);
        HRESULT ( STDMETHODCALLTYPE *refreshStatus )(
            IWMPCdromBurn * This);
                        HRESULT ( STDMETHODCALLTYPE *get_burnState )(
            IWMPCdromBurn * This,
                                WMPBurnState *pwmpbs);
                        HRESULT ( STDMETHODCALLTYPE *get_burnProgress )(
            IWMPCdromBurn * This,
                                long *plProgress);
        HRESULT ( STDMETHODCALLTYPE *startBurn )(
            IWMPCdromBurn * This);
        HRESULT ( STDMETHODCALLTYPE *stopBurn )(
            IWMPCdromBurn * This);
        HRESULT ( STDMETHODCALLTYPE *erase )(
            IWMPCdromBurn * This);
        END_INTERFACE
    } IWMPCdromBurnVtbl;
    interface IWMPCdromBurn
    {
        CONST_VTBL struct IWMPCdromBurnVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> isAvailable(This,bstrItem,pIsAvailable) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItem,pbstrVal) )
    ( (This)->lpVtbl -> get_label(This,pbstrLabel) )
    ( (This)->lpVtbl -> put_label(This,bstrLabel) )
    ( (This)->lpVtbl -> get_burnFormat(This,pwmpbf) )
    ( (This)->lpVtbl -> put_burnFormat(This,wmpbf) )
    ( (This)->lpVtbl -> get_burnPlaylist(This,ppPlaylist) )
    ( (This)->lpVtbl -> put_burnPlaylist(This,pPlaylist) )
    ( (This)->lpVtbl -> refreshStatus(This) )
    ( (This)->lpVtbl -> get_burnState(This,pwmpbs) )
    ( (This)->lpVtbl -> get_burnProgress(This,plProgress) )
    ( (This)->lpVtbl -> startBurn(This) )
    ( (This)->lpVtbl -> stopBurn(This) )
    ( (This)->lpVtbl -> erase(This) )
EXTERN_C const IID IID_IWMPQuery;
    typedef struct IWMPQueryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPQuery * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPQuery * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPQuery * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPQuery * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPQuery * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPQuery * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPQuery * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *addCondition )(
            IWMPQuery * This,
                       BSTR bstrAttribute,
                       BSTR bstrOperator,
                       BSTR bstrValue);
                               HRESULT ( STDMETHODCALLTYPE *beginNextGroup )(
            IWMPQuery * This);
        END_INTERFACE
    } IWMPQueryVtbl;
    interface IWMPQuery
    {
        CONST_VTBL struct IWMPQueryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> addCondition(This,bstrAttribute,bstrOperator,bstrValue) )
    ( (This)->lpVtbl -> beginNextGroup(This) )
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0041_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPMediaCollection2;
    typedef struct IWMPMediaCollection2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPMediaCollection2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPMediaCollection2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPMediaCollection2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPMediaCollection2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPMediaCollection2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPMediaCollection2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPMediaCollection2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *add )(
            IWMPMediaCollection2 * This,
                       BSTR bstrURL,
                                IWMPMedia **ppItem);
                               HRESULT ( STDMETHODCALLTYPE *getAll )(
            IWMPMediaCollection2 * This,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByName )(
            IWMPMediaCollection2 * This,
                       BSTR bstrName,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByGenre )(
            IWMPMediaCollection2 * This,
                       BSTR bstrGenre,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByAuthor )(
            IWMPMediaCollection2 * This,
                       BSTR bstrAuthor,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByAlbum )(
            IWMPMediaCollection2 * This,
                       BSTR bstrAlbum,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *getByAttribute )(
            IWMPMediaCollection2 * This,
                       BSTR bstrAttribute,
                       BSTR bstrValue,
                                IWMPPlaylist **ppMediaItems);
                               HRESULT ( STDMETHODCALLTYPE *remove )(
            IWMPMediaCollection2 * This,
                       IWMPMedia *pItem,
                       VARIANT_BOOL varfDeleteFile);
                               HRESULT ( STDMETHODCALLTYPE *getAttributeStringCollection )(
            IWMPMediaCollection2 * This,
                       BSTR bstrAttribute,
                       BSTR bstrMediaType,
                                IWMPStringCollection **ppStringCollection);
                               HRESULT ( STDMETHODCALLTYPE *getMediaAtom )(
            IWMPMediaCollection2 * This,
                       BSTR bstrItemName,
                                long *plAtom);
                               HRESULT ( STDMETHODCALLTYPE *setDeleted )(
            IWMPMediaCollection2 * This,
                       IWMPMedia *pItem,
                       VARIANT_BOOL varfIsDeleted);
                               HRESULT ( STDMETHODCALLTYPE *isDeleted )(
            IWMPMediaCollection2 * This,
                       IWMPMedia *pItem,
                                VARIANT_BOOL *pvarfIsDeleted);
                               HRESULT ( STDMETHODCALLTYPE *createQuery )(
            IWMPMediaCollection2 * This,
                                IWMPQuery **ppQuery);
                               HRESULT ( STDMETHODCALLTYPE *getPlaylistByQuery )(
            IWMPMediaCollection2 * This,
                       IWMPQuery *pQuery,
                       BSTR bstrMediaType,
                       BSTR bstrSortAttribute,
                       VARIANT_BOOL fSortAscending,
                                IWMPPlaylist **ppPlaylist);
                               HRESULT ( STDMETHODCALLTYPE *getStringCollectionByQuery )(
            IWMPMediaCollection2 * This,
                       BSTR bstrAttribute,
                       IWMPQuery *pQuery,
                       BSTR bstrMediaType,
                       BSTR bstrSortAttribute,
                       VARIANT_BOOL fSortAscending,
                                IWMPStringCollection **ppStringCollection);
                               HRESULT ( STDMETHODCALLTYPE *getByAttributeAndMediaType )(
            IWMPMediaCollection2 * This,
                       BSTR bstrAttribute,
                       BSTR bstrValue,
                       BSTR bstrMediaType,
                                IWMPPlaylist **ppMediaItems);
        END_INTERFACE
    } IWMPMediaCollection2Vtbl;
    interface IWMPMediaCollection2
    {
        CONST_VTBL struct IWMPMediaCollection2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> add(This,bstrURL,ppItem) )
    ( (This)->lpVtbl -> getAll(This,ppMediaItems) )
    ( (This)->lpVtbl -> getByName(This,bstrName,ppMediaItems) )
    ( (This)->lpVtbl -> getByGenre(This,bstrGenre,ppMediaItems) )
    ( (This)->lpVtbl -> getByAuthor(This,bstrAuthor,ppMediaItems) )
    ( (This)->lpVtbl -> getByAlbum(This,bstrAlbum,ppMediaItems) )
    ( (This)->lpVtbl -> getByAttribute(This,bstrAttribute,bstrValue,ppMediaItems) )
    ( (This)->lpVtbl -> remove(This,pItem,varfDeleteFile) )
    ( (This)->lpVtbl -> getAttributeStringCollection(This,bstrAttribute,bstrMediaType,ppStringCollection) )
    ( (This)->lpVtbl -> getMediaAtom(This,bstrItemName,plAtom) )
    ( (This)->lpVtbl -> setDeleted(This,pItem,varfIsDeleted) )
    ( (This)->lpVtbl -> isDeleted(This,pItem,pvarfIsDeleted) )
    ( (This)->lpVtbl -> createQuery(This,ppQuery) )
    ( (This)->lpVtbl -> getPlaylistByQuery(This,pQuery,bstrMediaType,bstrSortAttribute,fSortAscending,ppPlaylist) )
    ( (This)->lpVtbl -> getStringCollectionByQuery(This,bstrAttribute,pQuery,bstrMediaType,bstrSortAttribute,fSortAscending,ppStringCollection) )
    ( (This)->lpVtbl -> getByAttributeAndMediaType(This,bstrAttribute,bstrValue,bstrMediaType,ppMediaItems) )
EXTERN_C const IID IID_IWMPStringCollection2;
    typedef struct IWMPStringCollection2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPStringCollection2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPStringCollection2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPStringCollection2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPStringCollection2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPStringCollection2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPStringCollection2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPStringCollection2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_count )(
            IWMPStringCollection2 * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *item )(
            IWMPStringCollection2 * This,
                       long lIndex,
                                BSTR *pbstrString);
                               HRESULT ( STDMETHODCALLTYPE *isIdentical )(
            IWMPStringCollection2 * This,
                       IWMPStringCollection2 *pIWMPStringCollection2,
                                VARIANT_BOOL *pvbool);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPStringCollection2 * This,
                       long lCollectionIndex,
                       BSTR bstrItemName,
                                BSTR *pbstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getAttributeCountByType )(
            IWMPStringCollection2 * This,
                       long lCollectionIndex,
                       BSTR bstrType,
                       BSTR bstrLanguage,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfoByType )(
            IWMPStringCollection2 * This,
                       long lCollectionIndex,
                       BSTR bstrType,
                       BSTR bstrLanguage,
                       long lAttributeIndex,
                                VARIANT *pvarValue);
        END_INTERFACE
    } IWMPStringCollection2Vtbl;
    interface IWMPStringCollection2
    {
        CONST_VTBL struct IWMPStringCollection2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_count(This,plCount) )
    ( (This)->lpVtbl -> item(This,lIndex,pbstrString) )
    ( (This)->lpVtbl -> isIdentical(This,pIWMPStringCollection2,pvbool) )
    ( (This)->lpVtbl -> getItemInfo(This,lCollectionIndex,bstrItemName,pbstrValue) )
    ( (This)->lpVtbl -> getAttributeCountByType(This,lCollectionIndex,bstrType,bstrLanguage,plCount) )
    ( (This)->lpVtbl -> getItemInfoByType(This,lCollectionIndex,bstrType,bstrLanguage,lAttributeIndex,pvarValue) )
typedef
enum WMPLibraryType
    {
        wmpltUnknown = 0,
        wmpltAll = ( wmpltUnknown + 1 ) ,
        wmpltLocal = ( wmpltAll + 1 ) ,
        wmpltRemote = ( wmpltLocal + 1 ) ,
        wmpltDisc = ( wmpltRemote + 1 ) ,
        wmpltPortableDevice = ( wmpltDisc + 1 )
    } WMPLibraryType;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0043_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPLibrary;
    typedef struct IWMPLibraryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPLibrary * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPLibrary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPLibrary * This);
                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IWMPLibrary * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_type )(
            IWMPLibrary * This,
                                WMPLibraryType *pwmplt);
                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPLibrary * This,
                                IWMPMediaCollection **ppIWMPMediaCollection);
        HRESULT ( STDMETHODCALLTYPE *isIdentical )(
            IWMPLibrary * This,
                       IWMPLibrary *pIWMPLibrary,
                                VARIANT_BOOL *pvbool);
        END_INTERFACE
    } IWMPLibraryVtbl;
    interface IWMPLibrary
    {
        CONST_VTBL struct IWMPLibraryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_name(This,pbstrName) )
    ( (This)->lpVtbl -> get_type(This,pwmplt) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppIWMPMediaCollection) )
    ( (This)->lpVtbl -> isIdentical(This,pIWMPLibrary,pvbool) )
EXTERN_C const IID IID_IWMPLibraryServices;
    typedef struct IWMPLibraryServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPLibraryServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPLibraryServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPLibraryServices * This);
        HRESULT ( STDMETHODCALLTYPE *getCountByType )(
            IWMPLibraryServices * This,
                       WMPLibraryType wmplt,
                                long *plCount);
        HRESULT ( STDMETHODCALLTYPE *getLibraryByType )(
            IWMPLibraryServices * This,
                       WMPLibraryType wmplt,
                       long lIndex,
                                IWMPLibrary **ppIWMPLibrary);
        END_INTERFACE
    } IWMPLibraryServicesVtbl;
    interface IWMPLibraryServices
    {
        CONST_VTBL struct IWMPLibraryServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> getCountByType(This,wmplt,plCount) )
    ( (This)->lpVtbl -> getLibraryByType(This,wmplt,lIndex,ppIWMPLibrary) )
EXTERN_C const IID IID_IWMPLibrarySharingServices;
    typedef struct IWMPLibrarySharingServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPLibrarySharingServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPLibrarySharingServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPLibrarySharingServices * This);
        HRESULT ( STDMETHODCALLTYPE *isLibraryShared )(
            IWMPLibrarySharingServices * This,
                                VARIANT_BOOL *pvbShared);
        HRESULT ( STDMETHODCALLTYPE *isLibrarySharingEnabled )(
            IWMPLibrarySharingServices * This,
                                VARIANT_BOOL *pvbEnabled);
        HRESULT ( STDMETHODCALLTYPE *showLibrarySharing )(
            IWMPLibrarySharingServices * This);
        END_INTERFACE
    } IWMPLibrarySharingServicesVtbl;
    interface IWMPLibrarySharingServices
    {
        CONST_VTBL struct IWMPLibrarySharingServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> isLibraryShared(This,pvbShared) )
    ( (This)->lpVtbl -> isLibrarySharingEnabled(This,pvbEnabled) )
    ( (This)->lpVtbl -> showLibrarySharing(This) )
typedef
enum WMPFolderScanState
    {
        wmpfssUnknown = 0,
        wmpfssScanning = ( wmpfssUnknown + 1 ) ,
        wmpfssUpdating = ( wmpfssScanning + 1 ) ,
        wmpfssStopped = ( wmpfssUpdating + 1 )
    } WMPFolderScanState;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0046_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0046_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPFolderMonitorServices;
    typedef struct IWMPFolderMonitorServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPFolderMonitorServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPFolderMonitorServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPFolderMonitorServices * This);
                        HRESULT ( STDMETHODCALLTYPE *get_count )(
            IWMPFolderMonitorServices * This,
                                long *plCount);
        HRESULT ( STDMETHODCALLTYPE *item )(
            IWMPFolderMonitorServices * This,
                       long lIndex,
                                BSTR *pbstrFolder);
        HRESULT ( STDMETHODCALLTYPE *add )(
            IWMPFolderMonitorServices * This,
                       BSTR bstrFolder);
        HRESULT ( STDMETHODCALLTYPE *remove )(
            IWMPFolderMonitorServices * This,
                       long lIndex);
                        HRESULT ( STDMETHODCALLTYPE *get_scanState )(
            IWMPFolderMonitorServices * This,
                                WMPFolderScanState *pwmpfss);
                        HRESULT ( STDMETHODCALLTYPE *get_currentFolder )(
            IWMPFolderMonitorServices * This,
                                BSTR *pbstrFolder);
                        HRESULT ( STDMETHODCALLTYPE *get_scannedFilesCount )(
            IWMPFolderMonitorServices * This,
                                long *plCount);
                        HRESULT ( STDMETHODCALLTYPE *get_addedFilesCount )(
            IWMPFolderMonitorServices * This,
                                long *plCount);
                        HRESULT ( STDMETHODCALLTYPE *get_updateProgress )(
            IWMPFolderMonitorServices * This,
                                long *plProgress);
        HRESULT ( STDMETHODCALLTYPE *startScan )(
            IWMPFolderMonitorServices * This);
        HRESULT ( STDMETHODCALLTYPE *stopScan )(
            IWMPFolderMonitorServices * This);
        END_INTERFACE
    } IWMPFolderMonitorServicesVtbl;
    interface IWMPFolderMonitorServices
    {
        CONST_VTBL struct IWMPFolderMonitorServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_count(This,plCount) )
    ( (This)->lpVtbl -> item(This,lIndex,pbstrFolder) )
    ( (This)->lpVtbl -> add(This,bstrFolder) )
    ( (This)->lpVtbl -> remove(This,lIndex) )
    ( (This)->lpVtbl -> get_scanState(This,pwmpfss) )
    ( (This)->lpVtbl -> get_currentFolder(This,pbstrFolder) )
    ( (This)->lpVtbl -> get_scannedFilesCount(This,plCount) )
    ( (This)->lpVtbl -> get_addedFilesCount(This,plCount) )
    ( (This)->lpVtbl -> get_updateProgress(This,plProgress) )
    ( (This)->lpVtbl -> startScan(This) )
    ( (This)->lpVtbl -> stopScan(This) )
EXTERN_C const IID IID_IWMPSyncDevice2;
    typedef struct IWMPSyncDevice2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSyncDevice2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSyncDevice2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSyncDevice2 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_friendlyName )(
            IWMPSyncDevice2 * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_friendlyName )(
            IWMPSyncDevice2 * This,
                       BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_deviceName )(
            IWMPSyncDevice2 * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_deviceId )(
            IWMPSyncDevice2 * This,
                                BSTR *pbstrDeviceId);
                        HRESULT ( STDMETHODCALLTYPE *get_partnershipIndex )(
            IWMPSyncDevice2 * This,
                                long *plIndex);
                        HRESULT ( STDMETHODCALLTYPE *get_connected )(
            IWMPSyncDevice2 * This,
                                VARIANT_BOOL *pvbConnected);
                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPSyncDevice2 * This,
                                WMPDeviceStatus *pwmpds);
                        HRESULT ( STDMETHODCALLTYPE *get_syncState )(
            IWMPSyncDevice2 * This,
                                WMPSyncState *pwmpss);
                        HRESULT ( STDMETHODCALLTYPE *get_progress )(
            IWMPSyncDevice2 * This,
                                long *plProgress);
        HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPSyncDevice2 * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
        HRESULT ( STDMETHODCALLTYPE *createPartnership )(
            IWMPSyncDevice2 * This,
                       VARIANT_BOOL vbShowUI);
        HRESULT ( STDMETHODCALLTYPE *deletePartnership )(
            IWMPSyncDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *start )(
            IWMPSyncDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *stop )(
            IWMPSyncDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *showSettings )(
            IWMPSyncDevice2 * This);
        HRESULT ( STDMETHODCALLTYPE *isIdentical )(
            IWMPSyncDevice2 * This,
                       IWMPSyncDevice *pDevice,
                                VARIANT_BOOL *pvbool);
        HRESULT ( STDMETHODCALLTYPE *setItemInfo )(
            IWMPSyncDevice2 * This,
                       BSTR bstrItemName,
                       BSTR bstrVal);
        END_INTERFACE
    } IWMPSyncDevice2Vtbl;
    interface IWMPSyncDevice2
    {
        CONST_VTBL struct IWMPSyncDevice2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_friendlyName(This,pbstrName) )
    ( (This)->lpVtbl -> put_friendlyName(This,bstrName) )
    ( (This)->lpVtbl -> get_deviceName(This,pbstrName) )
    ( (This)->lpVtbl -> get_deviceId(This,pbstrDeviceId) )
    ( (This)->lpVtbl -> get_partnershipIndex(This,plIndex) )
    ( (This)->lpVtbl -> get_connected(This,pvbConnected) )
    ( (This)->lpVtbl -> get_status(This,pwmpds) )
    ( (This)->lpVtbl -> get_syncState(This,pwmpss) )
    ( (This)->lpVtbl -> get_progress(This,plProgress) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
    ( (This)->lpVtbl -> createPartnership(This,vbShowUI) )
    ( (This)->lpVtbl -> deletePartnership(This) )
    ( (This)->lpVtbl -> start(This) )
    ( (This)->lpVtbl -> stop(This) )
    ( (This)->lpVtbl -> showSettings(This) )
    ( (This)->lpVtbl -> isIdentical(This,pDevice,pvbool) )
    ( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
EXTERN_C const IID IID_IWMPSyncDevice3;
    typedef struct IWMPSyncDevice3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSyncDevice3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSyncDevice3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSyncDevice3 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_friendlyName )(
            IWMPSyncDevice3 * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_friendlyName )(
            IWMPSyncDevice3 * This,
                       BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_deviceName )(
            IWMPSyncDevice3 * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_deviceId )(
            IWMPSyncDevice3 * This,
                                BSTR *pbstrDeviceId);
                        HRESULT ( STDMETHODCALLTYPE *get_partnershipIndex )(
            IWMPSyncDevice3 * This,
                                long *plIndex);
                        HRESULT ( STDMETHODCALLTYPE *get_connected )(
            IWMPSyncDevice3 * This,
                                VARIANT_BOOL *pvbConnected);
                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            IWMPSyncDevice3 * This,
                                WMPDeviceStatus *pwmpds);
                        HRESULT ( STDMETHODCALLTYPE *get_syncState )(
            IWMPSyncDevice3 * This,
                                WMPSyncState *pwmpss);
                        HRESULT ( STDMETHODCALLTYPE *get_progress )(
            IWMPSyncDevice3 * This,
                                long *plProgress);
        HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPSyncDevice3 * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
        HRESULT ( STDMETHODCALLTYPE *createPartnership )(
            IWMPSyncDevice3 * This,
                       VARIANT_BOOL vbShowUI);
        HRESULT ( STDMETHODCALLTYPE *deletePartnership )(
            IWMPSyncDevice3 * This);
        HRESULT ( STDMETHODCALLTYPE *start )(
            IWMPSyncDevice3 * This);
        HRESULT ( STDMETHODCALLTYPE *stop )(
            IWMPSyncDevice3 * This);
        HRESULT ( STDMETHODCALLTYPE *showSettings )(
            IWMPSyncDevice3 * This);
        HRESULT ( STDMETHODCALLTYPE *isIdentical )(
            IWMPSyncDevice3 * This,
                       IWMPSyncDevice *pDevice,
                                VARIANT_BOOL *pvbool);
        HRESULT ( STDMETHODCALLTYPE *setItemInfo )(
            IWMPSyncDevice3 * This,
                       BSTR bstrItemName,
                       BSTR bstrVal);
        HRESULT ( STDMETHODCALLTYPE *estimateSyncSize )(
            IWMPSyncDevice3 * This,
                               IWMPPlaylist *pNonRulePlaylist,
                               IWMPPlaylist *pRulesPlaylist);
        HRESULT ( STDMETHODCALLTYPE *cancelEstimation )(
            IWMPSyncDevice3 * This);
        END_INTERFACE
    } IWMPSyncDevice3Vtbl;
    interface IWMPSyncDevice3
    {
        CONST_VTBL struct IWMPSyncDevice3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_friendlyName(This,pbstrName) )
    ( (This)->lpVtbl -> put_friendlyName(This,bstrName) )
    ( (This)->lpVtbl -> get_deviceName(This,pbstrName) )
    ( (This)->lpVtbl -> get_deviceId(This,pbstrDeviceId) )
    ( (This)->lpVtbl -> get_partnershipIndex(This,plIndex) )
    ( (This)->lpVtbl -> get_connected(This,pvbConnected) )
    ( (This)->lpVtbl -> get_status(This,pwmpds) )
    ( (This)->lpVtbl -> get_syncState(This,pwmpss) )
    ( (This)->lpVtbl -> get_progress(This,plProgress) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
    ( (This)->lpVtbl -> createPartnership(This,vbShowUI) )
    ( (This)->lpVtbl -> deletePartnership(This) )
    ( (This)->lpVtbl -> start(This) )
    ( (This)->lpVtbl -> stop(This) )
    ( (This)->lpVtbl -> showSettings(This) )
    ( (This)->lpVtbl -> isIdentical(This,pDevice,pvbool) )
    ( (This)->lpVtbl -> setItemInfo(This,bstrItemName,bstrVal) )
    ( (This)->lpVtbl -> estimateSyncSize(This,pNonRulePlaylist,pRulesPlaylist) )
    ( (This)->lpVtbl -> cancelEstimation(This) )
EXTERN_C const IID IID_IWMPLibrary2;
    typedef struct IWMPLibrary2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPLibrary2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPLibrary2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPLibrary2 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IWMPLibrary2 * This,
                                BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_type )(
            IWMPLibrary2 * This,
                                WMPLibraryType *pwmplt);
                        HRESULT ( STDMETHODCALLTYPE *get_mediaCollection )(
            IWMPLibrary2 * This,
                                IWMPMediaCollection **ppIWMPMediaCollection);
        HRESULT ( STDMETHODCALLTYPE *isIdentical )(
            IWMPLibrary2 * This,
                       IWMPLibrary *pIWMPLibrary,
                                VARIANT_BOOL *pvbool);
        HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPLibrary2 * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
        END_INTERFACE
    } IWMPLibrary2Vtbl;
    interface IWMPLibrary2
    {
        CONST_VTBL struct IWMPLibrary2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_name(This,pbstrName) )
    ( (This)->lpVtbl -> get_type(This,pwmplt) )
    ( (This)->lpVtbl -> get_mediaCollection(This,ppIWMPMediaCollection) )
    ( (This)->lpVtbl -> isIdentical(This,pIWMPLibrary,pvbool) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
struct DECLSPEC_UUID("6BF52A50-394A-11d3-B153-00C04F79FAA6") WMPLib;
struct DECLSPEC_UUID("DF333473-2CF7-4be2-907F-9AAD5661364F") WMPRemoteMediaServices;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0050_v0_0_s_ifspec;
EXTERN_C const IID LIBID_WMPLib;
EXTERN_C const IID IID_IWMPEvents;
    typedef struct IWMPEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *OpenStateChange )(
            IWMPEvents * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *PlayStateChange )(
            IWMPEvents * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *AudioLanguageChange )(
            IWMPEvents * This,
                       long LangID);
                               void ( STDMETHODCALLTYPE *StatusChange )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *ScriptCommand )(
            IWMPEvents * This,
                       BSTR scType,
                       BSTR Param);
                               void ( STDMETHODCALLTYPE *NewStream )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *Disconnect )(
            IWMPEvents * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *Buffering )(
            IWMPEvents * This,
                       VARIANT_BOOL Start);
                               void ( STDMETHODCALLTYPE *Error )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *Warning )(
            IWMPEvents * This,
                       long WarningType,
                       long Param,
                       BSTR Description);
                               void ( STDMETHODCALLTYPE *EndOfStream )(
            IWMPEvents * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *PositionChange )(
            IWMPEvents * This,
                       double oldPosition,
                       double newPosition);
                               void ( STDMETHODCALLTYPE *MarkerHit )(
            IWMPEvents * This,
                       long MarkerNum);
                               void ( STDMETHODCALLTYPE *DurationUnitChange )(
            IWMPEvents * This,
                       long NewDurationUnit);
                               void ( STDMETHODCALLTYPE *CdromMediaChange )(
            IWMPEvents * This,
                       long CdromNum);
                               void ( STDMETHODCALLTYPE *PlaylistChange )(
            IWMPEvents * This,
                       IDispatch *Playlist,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistChange )(
            IWMPEvents * This,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistItemAvailable )(
            IWMPEvents * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *MediaChange )(
            IWMPEvents * This,
                       IDispatch *Item);
                               void ( STDMETHODCALLTYPE *CurrentMediaItemAvailable )(
            IWMPEvents * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *CurrentItemChange )(
            IWMPEvents * This,
                       IDispatch *pdispMedia);
                               void ( STDMETHODCALLTYPE *MediaCollectionChange )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringAdded )(
            IWMPEvents * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringRemoved )(
            IWMPEvents * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringChanged )(
            IWMPEvents * This,
                       BSTR bstrAttribName,
                       BSTR bstrOldAttribVal,
                       BSTR bstrNewAttribVal);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionChange )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistAdded )(
            IWMPEvents * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistRemoved )(
            IWMPEvents * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistSetAsDeleted )(
            IWMPEvents * This,
                       BSTR bstrPlaylistName,
                       VARIANT_BOOL varfIsDeleted);
                               void ( STDMETHODCALLTYPE *ModeChange )(
            IWMPEvents * This,
                       BSTR ModeName,
                       VARIANT_BOOL NewValue);
                               void ( STDMETHODCALLTYPE *MediaError )(
            IWMPEvents * This,
                       IDispatch *pMediaObject);
                               void ( STDMETHODCALLTYPE *OpenPlaylistSwitch )(
            IWMPEvents * This,
                       IDispatch *pItem);
                               void ( STDMETHODCALLTYPE *DomainChange )(
            IWMPEvents * This,
                       BSTR strDomain);
                               void ( STDMETHODCALLTYPE *SwitchedToPlayerApplication )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *SwitchedToControl )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *PlayerDockedStateChange )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *PlayerReconnect )(
            IWMPEvents * This);
                               void ( STDMETHODCALLTYPE *Click )(
            IWMPEvents * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *DoubleClick )(
            IWMPEvents * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *KeyDown )(
            IWMPEvents * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *KeyPress )(
            IWMPEvents * This,
                       short nKeyAscii);
                               void ( STDMETHODCALLTYPE *KeyUp )(
            IWMPEvents * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *MouseDown )(
            IWMPEvents * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseMove )(
            IWMPEvents * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseUp )(
            IWMPEvents * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
        END_INTERFACE
    } IWMPEventsVtbl;
    interface IWMPEvents
    {
        CONST_VTBL struct IWMPEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenStateChange(This,NewState) )
    ( (This)->lpVtbl -> PlayStateChange(This,NewState) )
    ( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
    ( (This)->lpVtbl -> StatusChange(This) )
    ( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
    ( (This)->lpVtbl -> NewStream(This) )
    ( (This)->lpVtbl -> Disconnect(This,Result) )
    ( (This)->lpVtbl -> Buffering(This,Start) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
    ( (This)->lpVtbl -> EndOfStream(This,Result) )
    ( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
    ( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
    ( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
    ( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
    ( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
    ( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
    ( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> MediaChange(This,Item) )
    ( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
    ( (This)->lpVtbl -> MediaCollectionChange(This) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
    ( (This)->lpVtbl -> PlaylistCollectionChange(This) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
    ( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
    ( (This)->lpVtbl -> MediaError(This,pMediaObject) )
    ( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
    ( (This)->lpVtbl -> DomainChange(This,strDomain) )
    ( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
    ( (This)->lpVtbl -> SwitchedToControl(This) )
    ( (This)->lpVtbl -> PlayerDockedStateChange(This) )
    ( (This)->lpVtbl -> PlayerReconnect(This) )
    ( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
    ( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
EXTERN_C const IID IID_IWMPEvents2;
    typedef struct IWMPEvents2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPEvents2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPEvents2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *OpenStateChange )(
            IWMPEvents2 * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *PlayStateChange )(
            IWMPEvents2 * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *AudioLanguageChange )(
            IWMPEvents2 * This,
                       long LangID);
                               void ( STDMETHODCALLTYPE *StatusChange )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *ScriptCommand )(
            IWMPEvents2 * This,
                       BSTR scType,
                       BSTR Param);
                               void ( STDMETHODCALLTYPE *NewStream )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *Disconnect )(
            IWMPEvents2 * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *Buffering )(
            IWMPEvents2 * This,
                       VARIANT_BOOL Start);
                               void ( STDMETHODCALLTYPE *Error )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *Warning )(
            IWMPEvents2 * This,
                       long WarningType,
                       long Param,
                       BSTR Description);
                               void ( STDMETHODCALLTYPE *EndOfStream )(
            IWMPEvents2 * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *PositionChange )(
            IWMPEvents2 * This,
                       double oldPosition,
                       double newPosition);
                               void ( STDMETHODCALLTYPE *MarkerHit )(
            IWMPEvents2 * This,
                       long MarkerNum);
                               void ( STDMETHODCALLTYPE *DurationUnitChange )(
            IWMPEvents2 * This,
                       long NewDurationUnit);
                               void ( STDMETHODCALLTYPE *CdromMediaChange )(
            IWMPEvents2 * This,
                       long CdromNum);
                               void ( STDMETHODCALLTYPE *PlaylistChange )(
            IWMPEvents2 * This,
                       IDispatch *Playlist,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistChange )(
            IWMPEvents2 * This,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistItemAvailable )(
            IWMPEvents2 * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *MediaChange )(
            IWMPEvents2 * This,
                       IDispatch *Item);
                               void ( STDMETHODCALLTYPE *CurrentMediaItemAvailable )(
            IWMPEvents2 * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *CurrentItemChange )(
            IWMPEvents2 * This,
                       IDispatch *pdispMedia);
                               void ( STDMETHODCALLTYPE *MediaCollectionChange )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringAdded )(
            IWMPEvents2 * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringRemoved )(
            IWMPEvents2 * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringChanged )(
            IWMPEvents2 * This,
                       BSTR bstrAttribName,
                       BSTR bstrOldAttribVal,
                       BSTR bstrNewAttribVal);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionChange )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistAdded )(
            IWMPEvents2 * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistRemoved )(
            IWMPEvents2 * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistSetAsDeleted )(
            IWMPEvents2 * This,
                       BSTR bstrPlaylistName,
                       VARIANT_BOOL varfIsDeleted);
                               void ( STDMETHODCALLTYPE *ModeChange )(
            IWMPEvents2 * This,
                       BSTR ModeName,
                       VARIANT_BOOL NewValue);
                               void ( STDMETHODCALLTYPE *MediaError )(
            IWMPEvents2 * This,
                       IDispatch *pMediaObject);
                               void ( STDMETHODCALLTYPE *OpenPlaylistSwitch )(
            IWMPEvents2 * This,
                       IDispatch *pItem);
                               void ( STDMETHODCALLTYPE *DomainChange )(
            IWMPEvents2 * This,
                       BSTR strDomain);
                               void ( STDMETHODCALLTYPE *SwitchedToPlayerApplication )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *SwitchedToControl )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *PlayerDockedStateChange )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *PlayerReconnect )(
            IWMPEvents2 * This);
                               void ( STDMETHODCALLTYPE *Click )(
            IWMPEvents2 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *DoubleClick )(
            IWMPEvents2 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *KeyDown )(
            IWMPEvents2 * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *KeyPress )(
            IWMPEvents2 * This,
                       short nKeyAscii);
                               void ( STDMETHODCALLTYPE *KeyUp )(
            IWMPEvents2 * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *MouseDown )(
            IWMPEvents2 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseMove )(
            IWMPEvents2 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseUp )(
            IWMPEvents2 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *DeviceConnect )(
            IWMPEvents2 * This,
                       IWMPSyncDevice *pDevice);
                               void ( STDMETHODCALLTYPE *DeviceDisconnect )(
            IWMPEvents2 * This,
                       IWMPSyncDevice *pDevice);
                               void ( STDMETHODCALLTYPE *DeviceStatusChange )(
            IWMPEvents2 * This,
                       IWMPSyncDevice *pDevice,
                       WMPDeviceStatus NewStatus);
                               void ( STDMETHODCALLTYPE *DeviceSyncStateChange )(
            IWMPEvents2 * This,
                       IWMPSyncDevice *pDevice,
                       WMPSyncState NewState);
                               void ( STDMETHODCALLTYPE *DeviceSyncError )(
            IWMPEvents2 * This,
                       IWMPSyncDevice *pDevice,
                       IDispatch *pMedia);
                               void ( STDMETHODCALLTYPE *CreatePartnershipComplete )(
            IWMPEvents2 * This,
                       IWMPSyncDevice *pDevice,
                       HRESULT hrResult);
        END_INTERFACE
    } IWMPEvents2Vtbl;
    interface IWMPEvents2
    {
        CONST_VTBL struct IWMPEvents2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenStateChange(This,NewState) )
    ( (This)->lpVtbl -> PlayStateChange(This,NewState) )
    ( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
    ( (This)->lpVtbl -> StatusChange(This) )
    ( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
    ( (This)->lpVtbl -> NewStream(This) )
    ( (This)->lpVtbl -> Disconnect(This,Result) )
    ( (This)->lpVtbl -> Buffering(This,Start) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
    ( (This)->lpVtbl -> EndOfStream(This,Result) )
    ( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
    ( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
    ( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
    ( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
    ( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
    ( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
    ( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> MediaChange(This,Item) )
    ( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
    ( (This)->lpVtbl -> MediaCollectionChange(This) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
    ( (This)->lpVtbl -> PlaylistCollectionChange(This) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
    ( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
    ( (This)->lpVtbl -> MediaError(This,pMediaObject) )
    ( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
    ( (This)->lpVtbl -> DomainChange(This,strDomain) )
    ( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
    ( (This)->lpVtbl -> SwitchedToControl(This) )
    ( (This)->lpVtbl -> PlayerDockedStateChange(This) )
    ( (This)->lpVtbl -> PlayerReconnect(This) )
    ( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
    ( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> DeviceConnect(This,pDevice) )
    ( (This)->lpVtbl -> DeviceDisconnect(This,pDevice) )
    ( (This)->lpVtbl -> DeviceStatusChange(This,pDevice,NewStatus) )
    ( (This)->lpVtbl -> DeviceSyncStateChange(This,pDevice,NewState) )
    ( (This)->lpVtbl -> DeviceSyncError(This,pDevice,pMedia) )
    ( (This)->lpVtbl -> CreatePartnershipComplete(This,pDevice,hrResult) )
EXTERN_C const IID IID_IWMPEvents3;
    typedef struct IWMPEvents3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPEvents3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPEvents3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *OpenStateChange )(
            IWMPEvents3 * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *PlayStateChange )(
            IWMPEvents3 * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *AudioLanguageChange )(
            IWMPEvents3 * This,
                       long LangID);
                               void ( STDMETHODCALLTYPE *StatusChange )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *ScriptCommand )(
            IWMPEvents3 * This,
                       BSTR scType,
                       BSTR Param);
                               void ( STDMETHODCALLTYPE *NewStream )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *Disconnect )(
            IWMPEvents3 * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *Buffering )(
            IWMPEvents3 * This,
                       VARIANT_BOOL Start);
                               void ( STDMETHODCALLTYPE *Error )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *Warning )(
            IWMPEvents3 * This,
                       long WarningType,
                       long Param,
                       BSTR Description);
                               void ( STDMETHODCALLTYPE *EndOfStream )(
            IWMPEvents3 * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *PositionChange )(
            IWMPEvents3 * This,
                       double oldPosition,
                       double newPosition);
                               void ( STDMETHODCALLTYPE *MarkerHit )(
            IWMPEvents3 * This,
                       long MarkerNum);
                               void ( STDMETHODCALLTYPE *DurationUnitChange )(
            IWMPEvents3 * This,
                       long NewDurationUnit);
                               void ( STDMETHODCALLTYPE *CdromMediaChange )(
            IWMPEvents3 * This,
                       long CdromNum);
                               void ( STDMETHODCALLTYPE *PlaylistChange )(
            IWMPEvents3 * This,
                       IDispatch *Playlist,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistChange )(
            IWMPEvents3 * This,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistItemAvailable )(
            IWMPEvents3 * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *MediaChange )(
            IWMPEvents3 * This,
                       IDispatch *Item);
                               void ( STDMETHODCALLTYPE *CurrentMediaItemAvailable )(
            IWMPEvents3 * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *CurrentItemChange )(
            IWMPEvents3 * This,
                       IDispatch *pdispMedia);
                               void ( STDMETHODCALLTYPE *MediaCollectionChange )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringAdded )(
            IWMPEvents3 * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringRemoved )(
            IWMPEvents3 * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringChanged )(
            IWMPEvents3 * This,
                       BSTR bstrAttribName,
                       BSTR bstrOldAttribVal,
                       BSTR bstrNewAttribVal);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionChange )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistAdded )(
            IWMPEvents3 * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistRemoved )(
            IWMPEvents3 * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistSetAsDeleted )(
            IWMPEvents3 * This,
                       BSTR bstrPlaylistName,
                       VARIANT_BOOL varfIsDeleted);
                               void ( STDMETHODCALLTYPE *ModeChange )(
            IWMPEvents3 * This,
                       BSTR ModeName,
                       VARIANT_BOOL NewValue);
                               void ( STDMETHODCALLTYPE *MediaError )(
            IWMPEvents3 * This,
                       IDispatch *pMediaObject);
                               void ( STDMETHODCALLTYPE *OpenPlaylistSwitch )(
            IWMPEvents3 * This,
                       IDispatch *pItem);
                               void ( STDMETHODCALLTYPE *DomainChange )(
            IWMPEvents3 * This,
                       BSTR strDomain);
                               void ( STDMETHODCALLTYPE *SwitchedToPlayerApplication )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *SwitchedToControl )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *PlayerDockedStateChange )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *PlayerReconnect )(
            IWMPEvents3 * This);
                               void ( STDMETHODCALLTYPE *Click )(
            IWMPEvents3 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *DoubleClick )(
            IWMPEvents3 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *KeyDown )(
            IWMPEvents3 * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *KeyPress )(
            IWMPEvents3 * This,
                       short nKeyAscii);
                               void ( STDMETHODCALLTYPE *KeyUp )(
            IWMPEvents3 * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *MouseDown )(
            IWMPEvents3 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseMove )(
            IWMPEvents3 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseUp )(
            IWMPEvents3 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *DeviceConnect )(
            IWMPEvents3 * This,
                       IWMPSyncDevice *pDevice);
                               void ( STDMETHODCALLTYPE *DeviceDisconnect )(
            IWMPEvents3 * This,
                       IWMPSyncDevice *pDevice);
                               void ( STDMETHODCALLTYPE *DeviceStatusChange )(
            IWMPEvents3 * This,
                       IWMPSyncDevice *pDevice,
                       WMPDeviceStatus NewStatus);
                               void ( STDMETHODCALLTYPE *DeviceSyncStateChange )(
            IWMPEvents3 * This,
                       IWMPSyncDevice *pDevice,
                       WMPSyncState NewState);
                               void ( STDMETHODCALLTYPE *DeviceSyncError )(
            IWMPEvents3 * This,
                       IWMPSyncDevice *pDevice,
                       IDispatch *pMedia);
                               void ( STDMETHODCALLTYPE *CreatePartnershipComplete )(
            IWMPEvents3 * This,
                       IWMPSyncDevice *pDevice,
                       HRESULT hrResult);
                               void ( STDMETHODCALLTYPE *CdromRipStateChange )(
            IWMPEvents3 * This,
                       IWMPCdromRip *pCdromRip,
                       WMPRipState wmprs);
                               void ( STDMETHODCALLTYPE *CdromRipMediaError )(
            IWMPEvents3 * This,
                       IWMPCdromRip *pCdromRip,
                       IDispatch *pMedia);
                               void ( STDMETHODCALLTYPE *CdromBurnStateChange )(
            IWMPEvents3 * This,
                       IWMPCdromBurn *pCdromBurn,
                       WMPBurnState wmpbs);
                               void ( STDMETHODCALLTYPE *CdromBurnMediaError )(
            IWMPEvents3 * This,
                       IWMPCdromBurn *pCdromBurn,
                       IDispatch *pMedia);
                               void ( STDMETHODCALLTYPE *CdromBurnError )(
            IWMPEvents3 * This,
                       IWMPCdromBurn *pCdromBurn,
                       HRESULT hrError);
                               void ( STDMETHODCALLTYPE *LibraryConnect )(
            IWMPEvents3 * This,
                       IWMPLibrary *pLibrary);
                               void ( STDMETHODCALLTYPE *LibraryDisconnect )(
            IWMPEvents3 * This,
                       IWMPLibrary *pLibrary);
                               void ( STDMETHODCALLTYPE *FolderScanStateChange )(
            IWMPEvents3 * This,
                       WMPFolderScanState wmpfss);
                               void ( STDMETHODCALLTYPE *StringCollectionChange )(
            IWMPEvents3 * This,
                       IDispatch *pdispStringCollection,
                       WMPStringCollectionChangeEventType change,
                       long lCollectionIndex);
                               void ( STDMETHODCALLTYPE *MediaCollectionMediaAdded )(
            IWMPEvents3 * This,
                       IDispatch *pdispMedia);
                               void ( STDMETHODCALLTYPE *MediaCollectionMediaRemoved )(
            IWMPEvents3 * This,
                       IDispatch *pdispMedia);
        END_INTERFACE
    } IWMPEvents3Vtbl;
    interface IWMPEvents3
    {
        CONST_VTBL struct IWMPEvents3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenStateChange(This,NewState) )
    ( (This)->lpVtbl -> PlayStateChange(This,NewState) )
    ( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
    ( (This)->lpVtbl -> StatusChange(This) )
    ( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
    ( (This)->lpVtbl -> NewStream(This) )
    ( (This)->lpVtbl -> Disconnect(This,Result) )
    ( (This)->lpVtbl -> Buffering(This,Start) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
    ( (This)->lpVtbl -> EndOfStream(This,Result) )
    ( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
    ( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
    ( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
    ( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
    ( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
    ( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
    ( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> MediaChange(This,Item) )
    ( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
    ( (This)->lpVtbl -> MediaCollectionChange(This) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
    ( (This)->lpVtbl -> PlaylistCollectionChange(This) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
    ( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
    ( (This)->lpVtbl -> MediaError(This,pMediaObject) )
    ( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
    ( (This)->lpVtbl -> DomainChange(This,strDomain) )
    ( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
    ( (This)->lpVtbl -> SwitchedToControl(This) )
    ( (This)->lpVtbl -> PlayerDockedStateChange(This) )
    ( (This)->lpVtbl -> PlayerReconnect(This) )
    ( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
    ( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> DeviceConnect(This,pDevice) )
    ( (This)->lpVtbl -> DeviceDisconnect(This,pDevice) )
    ( (This)->lpVtbl -> DeviceStatusChange(This,pDevice,NewStatus) )
    ( (This)->lpVtbl -> DeviceSyncStateChange(This,pDevice,NewState) )
    ( (This)->lpVtbl -> DeviceSyncError(This,pDevice,pMedia) )
    ( (This)->lpVtbl -> CreatePartnershipComplete(This,pDevice,hrResult) )
    ( (This)->lpVtbl -> CdromRipStateChange(This,pCdromRip,wmprs) )
    ( (This)->lpVtbl -> CdromRipMediaError(This,pCdromRip,pMedia) )
    ( (This)->lpVtbl -> CdromBurnStateChange(This,pCdromBurn,wmpbs) )
    ( (This)->lpVtbl -> CdromBurnMediaError(This,pCdromBurn,pMedia) )
    ( (This)->lpVtbl -> CdromBurnError(This,pCdromBurn,hrError) )
    ( (This)->lpVtbl -> LibraryConnect(This,pLibrary) )
    ( (This)->lpVtbl -> LibraryDisconnect(This,pLibrary) )
    ( (This)->lpVtbl -> FolderScanStateChange(This,wmpfss) )
    ( (This)->lpVtbl -> StringCollectionChange(This,pdispStringCollection,change,lCollectionIndex) )
    ( (This)->lpVtbl -> MediaCollectionMediaAdded(This,pdispMedia) )
    ( (This)->lpVtbl -> MediaCollectionMediaRemoved(This,pdispMedia) )
EXTERN_C const IID IID_IWMPEvents4;
    typedef struct IWMPEvents4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPEvents4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPEvents4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *OpenStateChange )(
            IWMPEvents4 * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *PlayStateChange )(
            IWMPEvents4 * This,
                       long NewState);
                               void ( STDMETHODCALLTYPE *AudioLanguageChange )(
            IWMPEvents4 * This,
                       long LangID);
                               void ( STDMETHODCALLTYPE *StatusChange )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *ScriptCommand )(
            IWMPEvents4 * This,
                       BSTR scType,
                       BSTR Param);
                               void ( STDMETHODCALLTYPE *NewStream )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *Disconnect )(
            IWMPEvents4 * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *Buffering )(
            IWMPEvents4 * This,
                       VARIANT_BOOL Start);
                               void ( STDMETHODCALLTYPE *Error )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *Warning )(
            IWMPEvents4 * This,
                       long WarningType,
                       long Param,
                       BSTR Description);
                               void ( STDMETHODCALLTYPE *EndOfStream )(
            IWMPEvents4 * This,
                       long Result);
                               void ( STDMETHODCALLTYPE *PositionChange )(
            IWMPEvents4 * This,
                       double oldPosition,
                       double newPosition);
                               void ( STDMETHODCALLTYPE *MarkerHit )(
            IWMPEvents4 * This,
                       long MarkerNum);
                               void ( STDMETHODCALLTYPE *DurationUnitChange )(
            IWMPEvents4 * This,
                       long NewDurationUnit);
                               void ( STDMETHODCALLTYPE *CdromMediaChange )(
            IWMPEvents4 * This,
                       long CdromNum);
                               void ( STDMETHODCALLTYPE *PlaylistChange )(
            IWMPEvents4 * This,
                       IDispatch *Playlist,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistChange )(
            IWMPEvents4 * This,
                       WMPPlaylistChangeEventType change);
                               void ( STDMETHODCALLTYPE *CurrentPlaylistItemAvailable )(
            IWMPEvents4 * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *MediaChange )(
            IWMPEvents4 * This,
                       IDispatch *Item);
                               void ( STDMETHODCALLTYPE *CurrentMediaItemAvailable )(
            IWMPEvents4 * This,
                       BSTR bstrItemName);
                               void ( STDMETHODCALLTYPE *CurrentItemChange )(
            IWMPEvents4 * This,
                       IDispatch *pdispMedia);
                               void ( STDMETHODCALLTYPE *MediaCollectionChange )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringAdded )(
            IWMPEvents4 * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringRemoved )(
            IWMPEvents4 * This,
                       BSTR bstrAttribName,
                       BSTR bstrAttribVal);
                               void ( STDMETHODCALLTYPE *MediaCollectionAttributeStringChanged )(
            IWMPEvents4 * This,
                       BSTR bstrAttribName,
                       BSTR bstrOldAttribVal,
                       BSTR bstrNewAttribVal);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionChange )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistAdded )(
            IWMPEvents4 * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistRemoved )(
            IWMPEvents4 * This,
                       BSTR bstrPlaylistName);
                               void ( STDMETHODCALLTYPE *PlaylistCollectionPlaylistSetAsDeleted )(
            IWMPEvents4 * This,
                       BSTR bstrPlaylistName,
                       VARIANT_BOOL varfIsDeleted);
                               void ( STDMETHODCALLTYPE *ModeChange )(
            IWMPEvents4 * This,
                       BSTR ModeName,
                       VARIANT_BOOL NewValue);
                               void ( STDMETHODCALLTYPE *MediaError )(
            IWMPEvents4 * This,
                       IDispatch *pMediaObject);
                               void ( STDMETHODCALLTYPE *OpenPlaylistSwitch )(
            IWMPEvents4 * This,
                       IDispatch *pItem);
                               void ( STDMETHODCALLTYPE *DomainChange )(
            IWMPEvents4 * This,
                       BSTR strDomain);
                               void ( STDMETHODCALLTYPE *SwitchedToPlayerApplication )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *SwitchedToControl )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *PlayerDockedStateChange )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *PlayerReconnect )(
            IWMPEvents4 * This);
                               void ( STDMETHODCALLTYPE *Click )(
            IWMPEvents4 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *DoubleClick )(
            IWMPEvents4 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *KeyDown )(
            IWMPEvents4 * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *KeyPress )(
            IWMPEvents4 * This,
                       short nKeyAscii);
                               void ( STDMETHODCALLTYPE *KeyUp )(
            IWMPEvents4 * This,
                       short nKeyCode,
                       short nShiftState);
                               void ( STDMETHODCALLTYPE *MouseDown )(
            IWMPEvents4 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseMove )(
            IWMPEvents4 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *MouseUp )(
            IWMPEvents4 * This,
                       short nButton,
                       short nShiftState,
                       long fX,
                       long fY);
                               void ( STDMETHODCALLTYPE *DeviceConnect )(
            IWMPEvents4 * This,
                       IWMPSyncDevice *pDevice);
                               void ( STDMETHODCALLTYPE *DeviceDisconnect )(
            IWMPEvents4 * This,
                       IWMPSyncDevice *pDevice);
                               void ( STDMETHODCALLTYPE *DeviceStatusChange )(
            IWMPEvents4 * This,
                       IWMPSyncDevice *pDevice,
                       WMPDeviceStatus NewStatus);
                               void ( STDMETHODCALLTYPE *DeviceSyncStateChange )(
            IWMPEvents4 * This,
                       IWMPSyncDevice *pDevice,
                       WMPSyncState NewState);
                               void ( STDMETHODCALLTYPE *DeviceSyncError )(
            IWMPEvents4 * This,
                       IWMPSyncDevice *pDevice,
                       IDispatch *pMedia);
                               void ( STDMETHODCALLTYPE *CreatePartnershipComplete )(
            IWMPEvents4 * This,
                       IWMPSyncDevice *pDevice,
                       HRESULT hrResult);
                               void ( STDMETHODCALLTYPE *CdromRipStateChange )(
            IWMPEvents4 * This,
                       IWMPCdromRip *pCdromRip,
                       WMPRipState wmprs);
                               void ( STDMETHODCALLTYPE *CdromRipMediaError )(
            IWMPEvents4 * This,
                       IWMPCdromRip *pCdromRip,
                       IDispatch *pMedia);
                               void ( STDMETHODCALLTYPE *CdromBurnStateChange )(
            IWMPEvents4 * This,
                       IWMPCdromBurn *pCdromBurn,
                       WMPBurnState wmpbs);
                               void ( STDMETHODCALLTYPE *CdromBurnMediaError )(
            IWMPEvents4 * This,
                       IWMPCdromBurn *pCdromBurn,
                       IDispatch *pMedia);
                               void ( STDMETHODCALLTYPE *CdromBurnError )(
            IWMPEvents4 * This,
                       IWMPCdromBurn *pCdromBurn,
                       HRESULT hrError);
                               void ( STDMETHODCALLTYPE *LibraryConnect )(
            IWMPEvents4 * This,
                       IWMPLibrary *pLibrary);
                               void ( STDMETHODCALLTYPE *LibraryDisconnect )(
            IWMPEvents4 * This,
                       IWMPLibrary *pLibrary);
                               void ( STDMETHODCALLTYPE *FolderScanStateChange )(
            IWMPEvents4 * This,
                       WMPFolderScanState wmpfss);
                               void ( STDMETHODCALLTYPE *StringCollectionChange )(
            IWMPEvents4 * This,
                       IDispatch *pdispStringCollection,
                       WMPStringCollectionChangeEventType change,
                       long lCollectionIndex);
                               void ( STDMETHODCALLTYPE *MediaCollectionMediaAdded )(
            IWMPEvents4 * This,
                       IDispatch *pdispMedia);
                               void ( STDMETHODCALLTYPE *MediaCollectionMediaRemoved )(
            IWMPEvents4 * This,
                       IDispatch *pdispMedia);
                               void ( STDMETHODCALLTYPE *DeviceEstimation )(
            IWMPEvents4 * This,
                       IWMPSyncDevice *pDevice,
                       HRESULT hrResult,
                       __int64 qwEstimatedUsedSpace,
                       __int64 qwEstimatedSpace);
        END_INTERFACE
    } IWMPEvents4Vtbl;
    interface IWMPEvents4
    {
        CONST_VTBL struct IWMPEvents4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OpenStateChange(This,NewState) )
    ( (This)->lpVtbl -> PlayStateChange(This,NewState) )
    ( (This)->lpVtbl -> AudioLanguageChange(This,LangID) )
    ( (This)->lpVtbl -> StatusChange(This) )
    ( (This)->lpVtbl -> ScriptCommand(This,scType,Param) )
    ( (This)->lpVtbl -> NewStream(This) )
    ( (This)->lpVtbl -> Disconnect(This,Result) )
    ( (This)->lpVtbl -> Buffering(This,Start) )
    ( (This)->lpVtbl -> Error(This) )
    ( (This)->lpVtbl -> Warning(This,WarningType,Param,Description) )
    ( (This)->lpVtbl -> EndOfStream(This,Result) )
    ( (This)->lpVtbl -> PositionChange(This,oldPosition,newPosition) )
    ( (This)->lpVtbl -> MarkerHit(This,MarkerNum) )
    ( (This)->lpVtbl -> DurationUnitChange(This,NewDurationUnit) )
    ( (This)->lpVtbl -> CdromMediaChange(This,CdromNum) )
    ( (This)->lpVtbl -> PlaylistChange(This,Playlist,change) )
    ( (This)->lpVtbl -> CurrentPlaylistChange(This,change) )
    ( (This)->lpVtbl -> CurrentPlaylistItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> MediaChange(This,Item) )
    ( (This)->lpVtbl -> CurrentMediaItemAvailable(This,bstrItemName) )
    ( (This)->lpVtbl -> CurrentItemChange(This,pdispMedia) )
    ( (This)->lpVtbl -> MediaCollectionChange(This) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringAdded(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringRemoved(This,bstrAttribName,bstrAttribVal) )
    ( (This)->lpVtbl -> MediaCollectionAttributeStringChanged(This,bstrAttribName,bstrOldAttribVal,bstrNewAttribVal) )
    ( (This)->lpVtbl -> PlaylistCollectionChange(This) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistAdded(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistRemoved(This,bstrPlaylistName) )
    ( (This)->lpVtbl -> PlaylistCollectionPlaylistSetAsDeleted(This,bstrPlaylistName,varfIsDeleted) )
    ( (This)->lpVtbl -> ModeChange(This,ModeName,NewValue) )
    ( (This)->lpVtbl -> MediaError(This,pMediaObject) )
    ( (This)->lpVtbl -> OpenPlaylistSwitch(This,pItem) )
    ( (This)->lpVtbl -> DomainChange(This,strDomain) )
    ( (This)->lpVtbl -> SwitchedToPlayerApplication(This) )
    ( (This)->lpVtbl -> SwitchedToControl(This) )
    ( (This)->lpVtbl -> PlayerDockedStateChange(This) )
    ( (This)->lpVtbl -> PlayerReconnect(This) )
    ( (This)->lpVtbl -> Click(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> DoubleClick(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> KeyDown(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> KeyPress(This,nKeyAscii) )
    ( (This)->lpVtbl -> KeyUp(This,nKeyCode,nShiftState) )
    ( (This)->lpVtbl -> MouseDown(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseMove(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> MouseUp(This,nButton,nShiftState,fX,fY) )
    ( (This)->lpVtbl -> DeviceConnect(This,pDevice) )
    ( (This)->lpVtbl -> DeviceDisconnect(This,pDevice) )
    ( (This)->lpVtbl -> DeviceStatusChange(This,pDevice,NewStatus) )
    ( (This)->lpVtbl -> DeviceSyncStateChange(This,pDevice,NewState) )
    ( (This)->lpVtbl -> DeviceSyncError(This,pDevice,pMedia) )
    ( (This)->lpVtbl -> CreatePartnershipComplete(This,pDevice,hrResult) )
    ( (This)->lpVtbl -> CdromRipStateChange(This,pCdromRip,wmprs) )
    ( (This)->lpVtbl -> CdromRipMediaError(This,pCdromRip,pMedia) )
    ( (This)->lpVtbl -> CdromBurnStateChange(This,pCdromBurn,wmpbs) )
    ( (This)->lpVtbl -> CdromBurnMediaError(This,pCdromBurn,pMedia) )
    ( (This)->lpVtbl -> CdromBurnError(This,pCdromBurn,hrError) )
    ( (This)->lpVtbl -> LibraryConnect(This,pLibrary) )
    ( (This)->lpVtbl -> LibraryDisconnect(This,pLibrary) )
    ( (This)->lpVtbl -> FolderScanStateChange(This,wmpfss) )
    ( (This)->lpVtbl -> StringCollectionChange(This,pdispStringCollection,change,lCollectionIndex) )
    ( (This)->lpVtbl -> MediaCollectionMediaAdded(This,pdispMedia) )
    ( (This)->lpVtbl -> MediaCollectionMediaRemoved(This,pdispMedia) )
    ( (This)->lpVtbl -> DeviceEstimation(This,pDevice,hrResult,qwEstimatedUsedSpace,qwEstimatedSpace) )
EXTERN_C const IID DIID__WMPOCXEvents;
    typedef struct _WMPOCXEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            _WMPOCXEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            _WMPOCXEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            _WMPOCXEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            _WMPOCXEvents * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            _WMPOCXEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            _WMPOCXEvents * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _WMPOCXEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _WMPOCXEventsVtbl;
    interface _WMPOCXEvents
    {
        CONST_VTBL struct _WMPOCXEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_WindowsMediaPlayer;
class DECLSPEC_UUID("6BF52A52-394A-11d3-B153-00C04F79FAA6")
WindowsMediaPlayer;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmp_0000_0051_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long , BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( unsigned long *, unsigned long , VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( unsigned long *, unsigned char *, VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(unsigned long *, unsigned char *, VARIANT * );
void __RPC_USER VARIANT_UserFree( unsigned long *, VARIANT * );
}
