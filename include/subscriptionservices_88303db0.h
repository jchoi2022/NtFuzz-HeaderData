#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMPSubscriptionService IWMPSubscriptionService;
typedef interface IWMPSubscriptionServiceCallback IWMPSubscriptionServiceCallback;
typedef interface IWMPSubscriptionService2 IWMPSubscriptionService2;
typedef interface IWMPDownloadItem IWMPDownloadItem;
typedef interface IWMPDownloadItem2 IWMPDownloadItem2;
typedef interface IWMPDownloadCollection IWMPDownloadCollection;
typedef interface IWMPDownloadManager IWMPDownloadManager;
#include "oaidl.h"
#include "ocidl.h"
#include "wmp.h"
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
enum WMPSubscriptionServiceEvent
    {
        wmpsseCurrentBegin = 1,
        wmpsseCurrentEnd = 2,
        wmpsseFullBegin = 3,
        wmpsseFullEnd = 4
    } WMPSubscriptionServiceEvent;
extern RPC_IF_HANDLE __MIDL_itf_subscriptionservicespri_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subscriptionservicespri_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPSubscriptionService;
    typedef struct IWMPSubscriptionServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSubscriptionService * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSubscriptionService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSubscriptionService * This);
        HRESULT ( STDMETHODCALLTYPE *allowPlay )(
            IWMPSubscriptionService * This,
            HWND hwnd,
            IWMPMedia *pMedia,
            BOOL *pfAllowPlay);
        HRESULT ( STDMETHODCALLTYPE *allowCDBurn )(
            IWMPSubscriptionService * This,
            HWND hwnd,
            IWMPPlaylist *pPlaylist,
            BOOL *pfAllowBurn);
        HRESULT ( STDMETHODCALLTYPE *allowPDATransfer )(
            IWMPSubscriptionService * This,
            HWND hwnd,
            IWMPPlaylist *pPlaylist,
            BOOL *pfAllowTransfer);
        HRESULT ( STDMETHODCALLTYPE *startBackgroundProcessing )(
            IWMPSubscriptionService * This,
            HWND hwnd);
        END_INTERFACE
    } IWMPSubscriptionServiceVtbl;
    interface IWMPSubscriptionService
    {
        CONST_VTBL struct IWMPSubscriptionServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> allowPlay(This,hwnd,pMedia,pfAllowPlay) )
    ( (This)->lpVtbl -> allowCDBurn(This,hwnd,pPlaylist,pfAllowBurn) )
    ( (This)->lpVtbl -> allowPDATransfer(This,hwnd,pPlaylist,pfAllowTransfer) )
    ( (This)->lpVtbl -> startBackgroundProcessing(This,hwnd) )
EXTERN_C const IID IID_IWMPSubscriptionServiceCallback;
    typedef struct IWMPSubscriptionServiceCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSubscriptionServiceCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSubscriptionServiceCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSubscriptionServiceCallback * This);
        HRESULT ( STDMETHODCALLTYPE *onComplete )(
            IWMPSubscriptionServiceCallback * This,
            HRESULT hrResult);
        END_INTERFACE
    } IWMPSubscriptionServiceCallbackVtbl;
    interface IWMPSubscriptionServiceCallback
    {
        CONST_VTBL struct IWMPSubscriptionServiceCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> onComplete(This,hrResult) )
EXTERN_C const IID IID_IWMPSubscriptionService2;
    typedef struct IWMPSubscriptionService2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPSubscriptionService2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPSubscriptionService2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPSubscriptionService2 * This);
        HRESULT ( STDMETHODCALLTYPE *allowPlay )(
            IWMPSubscriptionService2 * This,
            HWND hwnd,
            IWMPMedia *pMedia,
            BOOL *pfAllowPlay);
        HRESULT ( STDMETHODCALLTYPE *allowCDBurn )(
            IWMPSubscriptionService2 * This,
            HWND hwnd,
            IWMPPlaylist *pPlaylist,
            BOOL *pfAllowBurn);
        HRESULT ( STDMETHODCALLTYPE *allowPDATransfer )(
            IWMPSubscriptionService2 * This,
            HWND hwnd,
            IWMPPlaylist *pPlaylist,
            BOOL *pfAllowTransfer);
        HRESULT ( STDMETHODCALLTYPE *startBackgroundProcessing )(
            IWMPSubscriptionService2 * This,
            HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *stopBackgroundProcessing )(
            IWMPSubscriptionService2 * This);
        HRESULT ( STDMETHODCALLTYPE *serviceEvent )(
            IWMPSubscriptionService2 * This,
            WMPSubscriptionServiceEvent event);
        HRESULT ( STDMETHODCALLTYPE *deviceAvailable )(
            IWMPSubscriptionService2 * This,
            BSTR bstrDeviceName,
            IWMPSubscriptionServiceCallback *pCB);
        HRESULT ( STDMETHODCALLTYPE *prepareForSync )(
            IWMPSubscriptionService2 * This,
            BSTR bstrFilename,
            BSTR bstrDeviceName,
            IWMPSubscriptionServiceCallback *pCB);
        END_INTERFACE
    } IWMPSubscriptionService2Vtbl;
    interface IWMPSubscriptionService2
    {
        CONST_VTBL struct IWMPSubscriptionService2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> allowPlay(This,hwnd,pMedia,pfAllowPlay) )
    ( (This)->lpVtbl -> allowCDBurn(This,hwnd,pPlaylist,pfAllowBurn) )
    ( (This)->lpVtbl -> allowPDATransfer(This,hwnd,pPlaylist,pfAllowTransfer) )
    ( (This)->lpVtbl -> startBackgroundProcessing(This,hwnd) )
    ( (This)->lpVtbl -> stopBackgroundProcessing(This) )
    ( (This)->lpVtbl -> serviceEvent(This,event) )
    ( (This)->lpVtbl -> deviceAvailable(This,bstrDeviceName,pCB) )
    ( (This)->lpVtbl -> prepareForSync(This,bstrFilename,bstrDeviceName,pCB) )
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
enum WMPSubscriptionDownloadState
    {
        wmpsdlsDownloading = 0,
        wmpsdlsPaused = ( wmpsdlsDownloading + 1 ) ,
        wmpsdlsProcessing = ( wmpsdlsPaused + 1 ) ,
        wmpsdlsCompleted = ( wmpsdlsProcessing + 1 ) ,
        wmpsdlsCancelled = ( wmpsdlsCompleted + 1 )
    } WMPSubscriptionDownloadState;
extern RPC_IF_HANDLE __MIDL_itf_subscriptionservicespri_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subscriptionservicespri_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMPDownloadItem;
    typedef struct IWMPDownloadItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPDownloadItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPDownloadItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPDownloadItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPDownloadItem * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPDownloadItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPDownloadItem * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPDownloadItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_sourceURL )(
            IWMPDownloadItem * This,
                                BSTR *pbstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_size )(
            IWMPDownloadItem * This,
                                long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_type )(
            IWMPDownloadItem * This,
                                BSTR *pbstrType);
                                        HRESULT ( STDMETHODCALLTYPE *get_progress )(
            IWMPDownloadItem * This,
                                long *plProgress);
                                        HRESULT ( STDMETHODCALLTYPE *get_downloadState )(
            IWMPDownloadItem * This,
                                WMPSubscriptionDownloadState *pwmpsdls);
                               HRESULT ( STDMETHODCALLTYPE *pause )(
            IWMPDownloadItem * This);
                               HRESULT ( STDMETHODCALLTYPE *resume )(
            IWMPDownloadItem * This);
                               HRESULT ( STDMETHODCALLTYPE *cancel )(
            IWMPDownloadItem * This);
        END_INTERFACE
    } IWMPDownloadItemVtbl;
    interface IWMPDownloadItem
    {
        CONST_VTBL struct IWMPDownloadItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_sourceURL(This,pbstrURL) )
    ( (This)->lpVtbl -> get_size(This,plSize) )
    ( (This)->lpVtbl -> get_type(This,pbstrType) )
    ( (This)->lpVtbl -> get_progress(This,plProgress) )
    ( (This)->lpVtbl -> get_downloadState(This,pwmpsdls) )
    ( (This)->lpVtbl -> pause(This) )
    ( (This)->lpVtbl -> resume(This) )
    ( (This)->lpVtbl -> cancel(This) )
EXTERN_C const IID IID_IWMPDownloadItem2;
    typedef struct IWMPDownloadItem2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPDownloadItem2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPDownloadItem2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPDownloadItem2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPDownloadItem2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPDownloadItem2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPDownloadItem2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPDownloadItem2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_sourceURL )(
            IWMPDownloadItem2 * This,
                                BSTR *pbstrURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_size )(
            IWMPDownloadItem2 * This,
                                long *plSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_type )(
            IWMPDownloadItem2 * This,
                                BSTR *pbstrType);
                                        HRESULT ( STDMETHODCALLTYPE *get_progress )(
            IWMPDownloadItem2 * This,
                                long *plProgress);
                                        HRESULT ( STDMETHODCALLTYPE *get_downloadState )(
            IWMPDownloadItem2 * This,
                                WMPSubscriptionDownloadState *pwmpsdls);
                               HRESULT ( STDMETHODCALLTYPE *pause )(
            IWMPDownloadItem2 * This);
                               HRESULT ( STDMETHODCALLTYPE *resume )(
            IWMPDownloadItem2 * This);
                               HRESULT ( STDMETHODCALLTYPE *cancel )(
            IWMPDownloadItem2 * This);
                               HRESULT ( STDMETHODCALLTYPE *getItemInfo )(
            IWMPDownloadItem2 * This,
                       BSTR bstrItemName,
                                BSTR *pbstrVal);
        END_INTERFACE
    } IWMPDownloadItem2Vtbl;
    interface IWMPDownloadItem2
    {
        CONST_VTBL struct IWMPDownloadItem2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_sourceURL(This,pbstrURL) )
    ( (This)->lpVtbl -> get_size(This,plSize) )
    ( (This)->lpVtbl -> get_type(This,pbstrType) )
    ( (This)->lpVtbl -> get_progress(This,plProgress) )
    ( (This)->lpVtbl -> get_downloadState(This,pwmpsdls) )
    ( (This)->lpVtbl -> pause(This) )
    ( (This)->lpVtbl -> resume(This) )
    ( (This)->lpVtbl -> cancel(This) )
    ( (This)->lpVtbl -> getItemInfo(This,bstrItemName,pbstrVal) )
EXTERN_C const IID IID_IWMPDownloadCollection;
    typedef struct IWMPDownloadCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPDownloadCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPDownloadCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPDownloadCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPDownloadCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPDownloadCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPDownloadCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPDownloadCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_id )(
            IWMPDownloadCollection * This,
                                long *plId);
                                        HRESULT ( STDMETHODCALLTYPE *get_count )(
            IWMPDownloadCollection * This,
                                long *plCount);
                               HRESULT ( STDMETHODCALLTYPE *item )(
            IWMPDownloadCollection * This,
                       long lItem,
                                IWMPDownloadItem2 **ppDownload);
                               HRESULT ( STDMETHODCALLTYPE *startDownload )(
            IWMPDownloadCollection * This,
                       BSTR bstrSourceURL,
                       BSTR bstrType,
                                IWMPDownloadItem2 **ppDownload);
                               HRESULT ( STDMETHODCALLTYPE *removeItem )(
            IWMPDownloadCollection * This,
                       long lItem);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            IWMPDownloadCollection * This);
        END_INTERFACE
    } IWMPDownloadCollectionVtbl;
    interface IWMPDownloadCollection
    {
        CONST_VTBL struct IWMPDownloadCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_id(This,plId) )
    ( (This)->lpVtbl -> get_count(This,plCount) )
    ( (This)->lpVtbl -> item(This,lItem,ppDownload) )
    ( (This)->lpVtbl -> startDownload(This,bstrSourceURL,bstrType,ppDownload) )
    ( (This)->lpVtbl -> removeItem(This,lItem) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IWMPDownloadManager;
    typedef struct IWMPDownloadManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPDownloadManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPDownloadManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPDownloadManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWMPDownloadManager * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWMPDownloadManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWMPDownloadManager * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMPDownloadManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *getDownloadCollection )(
            IWMPDownloadManager * This,
                       long lCollectionId,
                                IWMPDownloadCollection **ppCollection);
                               HRESULT ( STDMETHODCALLTYPE *createDownloadCollection )(
            IWMPDownloadManager * This,
                                IWMPDownloadCollection **ppCollection);
        END_INTERFACE
    } IWMPDownloadManagerVtbl;
    interface IWMPDownloadManager
    {
        CONST_VTBL struct IWMPDownloadManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> getDownloadCollection(This,lCollectionId,ppCollection) )
    ( (This)->lpVtbl -> createDownloadCollection(This,ppCollection) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_subscriptionservicespri_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_subscriptionservicespri_0000_0007_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( unsigned long *, unsigned long , BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( unsigned long *, unsigned char *, BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(unsigned long *, unsigned char *, BSTR * );
void __RPC_USER BSTR_UserFree( unsigned long *, BSTR * );
unsigned long __RPC_USER HWND_UserSize( unsigned long *, unsigned long , HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( unsigned long *, unsigned char *, HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(unsigned long *, unsigned char *, HWND * );
void __RPC_USER HWND_UserFree( unsigned long *, HWND * );
}
