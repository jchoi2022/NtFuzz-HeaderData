#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IOleAdviseHolder IOleAdviseHolder;
typedef interface IOleCache IOleCache;
typedef interface IOleCache2 IOleCache2;
typedef interface IOleCacheControl IOleCacheControl;
typedef interface IParseDisplayName IParseDisplayName;
typedef interface IOleContainer IOleContainer;
typedef interface IOleClientSite IOleClientSite;
typedef interface IOleObject IOleObject;
typedef interface IOleWindow IOleWindow;
typedef interface IOleLink IOleLink;
typedef interface IOleItemContainer IOleItemContainer;
typedef interface IOleInPlaceUIWindow IOleInPlaceUIWindow;
typedef interface IOleInPlaceActiveObject IOleInPlaceActiveObject;
typedef interface IOleInPlaceFrame IOleInPlaceFrame;
typedef interface IOleInPlaceObject IOleInPlaceObject;
typedef interface IOleInPlaceSite IOleInPlaceSite;
typedef interface IContinue IContinue;
typedef interface IViewObject IViewObject;
typedef interface IViewObject2 IViewObject2;
typedef interface IDropSource IDropSource;
typedef interface IDropTarget IDropTarget;
typedef interface IDropSourceNotify IDropSourceNotify;
typedef interface IEnterpriseDropTarget IEnterpriseDropTarget;
typedef interface IEnumOLEVERB IEnumOLEVERB;
#include "objidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0000_v0_0_s_ifspec;
typedef IOleAdviseHolder *LPOLEADVISEHOLDER;
EXTERN_C const IID IID_IOleAdviseHolder;
    typedef struct IOleAdviseHolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOleAdviseHolder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOleAdviseHolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOleAdviseHolder * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            IOleAdviseHolder * This,
            _In_ IAdviseSink *pAdvise,
            _Out_ DWORD *pdwConnection);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            IOleAdviseHolder * This,
                       DWORD dwConnection);
        HRESULT ( STDMETHODCALLTYPE *EnumAdvise )(
            IOleAdviseHolder * This,
            _Outptr_ IEnumSTATDATA **ppenumAdvise);
        HRESULT ( STDMETHODCALLTYPE *SendOnRename )(
            IOleAdviseHolder * This,
            _In_ IMoniker *pmk);
        HRESULT ( STDMETHODCALLTYPE *SendOnSave )(
            IOleAdviseHolder * This);
        HRESULT ( STDMETHODCALLTYPE *SendOnClose )(
            IOleAdviseHolder * This);
        END_INTERFACE
    } IOleAdviseHolderVtbl;
    interface IOleAdviseHolder
    {
        CONST_VTBL struct IOleAdviseHolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,pAdvise,pdwConnection) )
    ( (This)->lpVtbl -> Unadvise(This,dwConnection) )
    ( (This)->lpVtbl -> EnumAdvise(This,ppenumAdvise) )
    ( (This)->lpVtbl -> SendOnRename(This,pmk) )
    ( (This)->lpVtbl -> SendOnSave(This) )
    ( (This)->lpVtbl -> SendOnClose(This) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer IOleCache *LPOLECACHE;
EXTERN_C const IID IID_IOleCache;
    typedef struct IOleCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleCache * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleCache * This);
        HRESULT ( STDMETHODCALLTYPE *Cache )(
            __RPC__in IOleCache * This,
                               __RPC__in_opt FORMATETC *pformatetc,
                       DWORD advf,
                        __RPC__out DWORD *pdwConnection);
        HRESULT ( STDMETHODCALLTYPE *Uncache )(
            __RPC__in IOleCache * This,
                       DWORD dwConnection);
        HRESULT ( STDMETHODCALLTYPE *EnumCache )(
            __RPC__in IOleCache * This,
                        __RPC__deref_out_opt IEnumSTATDATA **ppenumSTATDATA);
        HRESULT ( STDMETHODCALLTYPE *InitCache )(
            __RPC__in IOleCache * This,
                               __RPC__in_opt IDataObject *pDataObject);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            __RPC__in IOleCache * This,
                               __RPC__in_opt FORMATETC *pformatetc,
                               __RPC__in_opt STGMEDIUM *pmedium,
                       BOOL fRelease);
        END_INTERFACE
    } IOleCacheVtbl;
    interface IOleCache
    {
        CONST_VTBL struct IOleCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cache(This,pformatetc,advf,pdwConnection) )
    ( (This)->lpVtbl -> Uncache(This,dwConnection) )
    ( (This)->lpVtbl -> EnumCache(This,ppenumSTATDATA) )
    ( (This)->lpVtbl -> InitCache(This,pDataObject) )
    ( (This)->lpVtbl -> SetData(This,pformatetc,pmedium,fRelease) )
typedef __RPC_unique_pointer IOleCache2 *LPOLECACHE2;
typedef
enum tagDISCARDCACHE
    {
        DISCARDCACHE_SAVEIFDIRTY = 0,
        DISCARDCACHE_NOSAVE = 1
    } DISCARDCACHE;
EXTERN_C const IID IID_IOleCache2;
    typedef struct IOleCache2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleCache2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleCache2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleCache2 * This);
        HRESULT ( STDMETHODCALLTYPE *Cache )(
            __RPC__in IOleCache2 * This,
                               __RPC__in_opt FORMATETC *pformatetc,
                       DWORD advf,
                        __RPC__out DWORD *pdwConnection);
        HRESULT ( STDMETHODCALLTYPE *Uncache )(
            __RPC__in IOleCache2 * This,
                       DWORD dwConnection);
        HRESULT ( STDMETHODCALLTYPE *EnumCache )(
            __RPC__in IOleCache2 * This,
                        __RPC__deref_out_opt IEnumSTATDATA **ppenumSTATDATA);
        HRESULT ( STDMETHODCALLTYPE *InitCache )(
            __RPC__in IOleCache2 * This,
                               __RPC__in_opt IDataObject *pDataObject);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            __RPC__in IOleCache2 * This,
                               __RPC__in_opt FORMATETC *pformatetc,
                               __RPC__in_opt STGMEDIUM *pmedium,
                       BOOL fRelease);
                      HRESULT ( STDMETHODCALLTYPE *UpdateCache )(
            IOleCache2 * This,
            _In_ LPDATAOBJECT pDataObject,
            _In_ DWORD grfUpdf,
            _Reserved_ LPVOID pReserved);
        HRESULT ( STDMETHODCALLTYPE *DiscardCache )(
            __RPC__in IOleCache2 * This,
                       DWORD dwDiscardOptions);
        END_INTERFACE
    } IOleCache2Vtbl;
    interface IOleCache2
    {
        CONST_VTBL struct IOleCache2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cache(This,pformatetc,advf,pdwConnection) )
    ( (This)->lpVtbl -> Uncache(This,dwConnection) )
    ( (This)->lpVtbl -> EnumCache(This,ppenumSTATDATA) )
    ( (This)->lpVtbl -> InitCache(This,pDataObject) )
    ( (This)->lpVtbl -> SetData(This,pformatetc,pmedium,fRelease) )
    ( (This)->lpVtbl -> UpdateCache(This,pDataObject,grfUpdf,pReserved) )
    ( (This)->lpVtbl -> DiscardCache(This,dwDiscardOptions) )
                HRESULT STDMETHODCALLTYPE IOleCache2_RemoteUpdateCache_Proxy(
    __RPC__in IOleCache2 * This,
               __RPC__in_opt LPDATAOBJECT pDataObject,
               DWORD grfUpdf,
               LONG_PTR pReserved);
void __RPC_STUB IOleCache2_RemoteUpdateCache_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0003_v0_0_s_ifspec;
typedef __RPC_unique_pointer IOleCacheControl *LPOLECACHECONTROL;
EXTERN_C const IID IID_IOleCacheControl;
    typedef struct IOleCacheControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleCacheControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleCacheControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleCacheControl * This);
        HRESULT ( STDMETHODCALLTYPE *OnRun )(
            __RPC__in IOleCacheControl * This,
            __RPC__in_opt LPDATAOBJECT pDataObject);
        HRESULT ( STDMETHODCALLTYPE *OnStop )(
            __RPC__in IOleCacheControl * This);
        END_INTERFACE
    } IOleCacheControlVtbl;
    interface IOleCacheControl
    {
        CONST_VTBL struct IOleCacheControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnRun(This,pDataObject) )
    ( (This)->lpVtbl -> OnStop(This) )
typedef __RPC_unique_pointer IParseDisplayName *LPPARSEDISPLAYNAME;
EXTERN_C const IID IID_IParseDisplayName;
    typedef struct IParseDisplayNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IParseDisplayName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IParseDisplayName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IParseDisplayName * This);
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )(
            __RPC__in IParseDisplayName * This,
                               __RPC__in_opt IBindCtx *pbc,
                       __RPC__in LPOLESTR pszDisplayName,
                        __RPC__out ULONG *pchEaten,
                        __RPC__deref_out_opt IMoniker **ppmkOut);
        END_INTERFACE
    } IParseDisplayNameVtbl;
    interface IParseDisplayName
    {
        CONST_VTBL struct IParseDisplayNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) )
typedef __RPC_unique_pointer IOleContainer *LPOLECONTAINER;
EXTERN_C const IID IID_IOleContainer;
    typedef struct IOleContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleContainer * This);
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )(
            __RPC__in IOleContainer * This,
                               __RPC__in_opt IBindCtx *pbc,
                       __RPC__in LPOLESTR pszDisplayName,
                        __RPC__out ULONG *pchEaten,
                        __RPC__deref_out_opt IMoniker **ppmkOut);
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )(
            __RPC__in IOleContainer * This,
                       DWORD grfFlags,
                        __RPC__deref_out_opt IEnumUnknown **ppenum);
        HRESULT ( STDMETHODCALLTYPE *LockContainer )(
            __RPC__in IOleContainer * This,
                       BOOL fLock);
        END_INTERFACE
    } IOleContainerVtbl;
    interface IOleContainer
    {
        CONST_VTBL struct IOleContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) )
    ( (This)->lpVtbl -> EnumObjects(This,grfFlags,ppenum) )
    ( (This)->lpVtbl -> LockContainer(This,fLock) )
typedef __RPC_unique_pointer IOleClientSite *LPOLECLIENTSITE;
EXTERN_C const IID IID_IOleClientSite;
    typedef struct IOleClientSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleClientSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleClientSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleClientSite * This);
        HRESULT ( STDMETHODCALLTYPE *SaveObject )(
            __RPC__in IOleClientSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetMoniker )(
            __RPC__in IOleClientSite * This,
                       DWORD dwAssign,
                       DWORD dwWhichMoniker,
                        __RPC__deref_out_opt IMoniker **ppmk);
        HRESULT ( STDMETHODCALLTYPE *GetContainer )(
            __RPC__in IOleClientSite * This,
                        __RPC__deref_out_opt IOleContainer **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *ShowObject )(
            __RPC__in IOleClientSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnShowWindow )(
            __RPC__in IOleClientSite * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *RequestNewObjectLayout )(
            __RPC__in IOleClientSite * This);
        END_INTERFACE
    } IOleClientSiteVtbl;
    interface IOleClientSite
    {
        CONST_VTBL struct IOleClientSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SaveObject(This) )
    ( (This)->lpVtbl -> GetMoniker(This,dwAssign,dwWhichMoniker,ppmk) )
    ( (This)->lpVtbl -> GetContainer(This,ppContainer) )
    ( (This)->lpVtbl -> ShowObject(This) )
    ( (This)->lpVtbl -> OnShowWindow(This,fShow) )
    ( (This)->lpVtbl -> RequestNewObjectLayout(This) )
typedef __RPC_unique_pointer IOleObject *LPOLEOBJECT;
typedef
enum tagOLEGETMONIKER
    {
        OLEGETMONIKER_ONLYIFTHERE = 1,
        OLEGETMONIKER_FORCEASSIGN = 2,
        OLEGETMONIKER_UNASSIGN = 3,
        OLEGETMONIKER_TEMPFORUSER = 4
    } OLEGETMONIKER;
typedef
enum tagOLEWHICHMK
    {
        OLEWHICHMK_CONTAINER = 1,
        OLEWHICHMK_OBJREL = 2,
        OLEWHICHMK_OBJFULL = 3
    } OLEWHICHMK;
typedef
enum tagUSERCLASSTYPE
    {
        USERCLASSTYPE_FULL = 1,
        USERCLASSTYPE_SHORT = 2,
        USERCLASSTYPE_APPNAME = 3
    } USERCLASSTYPE;
typedef
enum tagOLEMISC
    {
        OLEMISC_RECOMPOSEONRESIZE = 0x1,
        OLEMISC_ONLYICONIC = 0x2,
        OLEMISC_INSERTNOTREPLACE = 0x4,
        OLEMISC_STATIC = 0x8,
        OLEMISC_CANTLINKINSIDE = 0x10,
        OLEMISC_CANLINKBYOLE1 = 0x20,
        OLEMISC_ISLINKOBJECT = 0x40,
        OLEMISC_INSIDEOUT = 0x80,
        OLEMISC_ACTIVATEWHENVISIBLE = 0x100,
        OLEMISC_RENDERINGISDEVICEINDEPENDENT = 0x200,
        OLEMISC_INVISIBLEATRUNTIME = 0x400,
        OLEMISC_ALWAYSRUN = 0x800,
        OLEMISC_ACTSLIKEBUTTON = 0x1000,
        OLEMISC_ACTSLIKELABEL = 0x2000,
        OLEMISC_NOUIACTIVATE = 0x4000,
        OLEMISC_ALIGNABLE = 0x8000,
        OLEMISC_SIMPLEFRAME = 0x10000,
        OLEMISC_SETCLIENTSITEFIRST = 0x20000,
        OLEMISC_IMEMODE = 0x40000,
        OLEMISC_IGNOREACTIVATEWHENVISIBLE = 0x80000,
        OLEMISC_WANTSTOMENUMERGE = 0x100000,
        OLEMISC_SUPPORTSMULTILEVELUNDO = 0x200000
    } OLEMISC;
typedef
enum tagOLECLOSE
    {
        OLECLOSE_SAVEIFDIRTY = 0,
        OLECLOSE_NOSAVE = 1,
        OLECLOSE_PROMPTSAVE = 2
    } OLECLOSE;
EXTERN_C const IID IID_IOleObject;
    typedef struct IOleObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleObject * This);
        HRESULT ( STDMETHODCALLTYPE *SetClientSite )(
            __RPC__in IOleObject * This,
                               __RPC__in_opt IOleClientSite *pClientSite);
        HRESULT ( STDMETHODCALLTYPE *GetClientSite )(
            __RPC__in IOleObject * This,
                        __RPC__deref_out_opt IOleClientSite **ppClientSite);
        HRESULT ( STDMETHODCALLTYPE *SetHostNames )(
            __RPC__in IOleObject * This,
                       __RPC__in LPCOLESTR szContainerApp,
                               __RPC__in_opt LPCOLESTR szContainerObj);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IOleObject * This,
                       DWORD dwSaveOption);
        HRESULT ( STDMETHODCALLTYPE *SetMoniker )(
            __RPC__in IOleObject * This,
                       DWORD dwWhichMoniker,
                               __RPC__in_opt IMoniker *pmk);
        HRESULT ( STDMETHODCALLTYPE *GetMoniker )(
            __RPC__in IOleObject * This,
                       DWORD dwAssign,
                       DWORD dwWhichMoniker,
                        __RPC__deref_out_opt IMoniker **ppmk);
        HRESULT ( STDMETHODCALLTYPE *InitFromData )(
            __RPC__in IOleObject * This,
                               __RPC__in_opt IDataObject *pDataObject,
                       BOOL fCreation,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetClipboardData )(
            __RPC__in IOleObject * This,
                       DWORD dwReserved,
                        __RPC__deref_out_opt IDataObject **ppDataObject);
        HRESULT ( STDMETHODCALLTYPE *DoVerb )(
            __RPC__in IOleObject * This,
                       LONG iVerb,
                               __RPC__in_opt LPMSG lpmsg,
                               __RPC__in_opt IOleClientSite *pActiveSite,
                       LONG lindex,
                       __RPC__in HWND hwndParent,
                               __RPC__in_opt LPCRECT lprcPosRect);
        HRESULT ( STDMETHODCALLTYPE *EnumVerbs )(
            __RPC__in IOleObject * This,
                        __RPC__deref_out_opt IEnumOLEVERB **ppEnumOleVerb);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in IOleObject * This);
        HRESULT ( STDMETHODCALLTYPE *IsUpToDate )(
            __RPC__in IOleObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetUserClassID )(
            __RPC__in IOleObject * This,
                        __RPC__out CLSID *pClsid);
        HRESULT ( STDMETHODCALLTYPE *GetUserType )(
            __RPC__in IOleObject * This,
                       DWORD dwFormOfType,
                        __RPC__deref_out_opt LPOLESTR *pszUserType);
        HRESULT ( STDMETHODCALLTYPE *SetExtent )(
            __RPC__in IOleObject * This,
                       DWORD dwDrawAspect,
                       __RPC__in SIZEL *psizel);
        HRESULT ( STDMETHODCALLTYPE *GetExtent )(
            __RPC__in IOleObject * This,
                       DWORD dwDrawAspect,
                        __RPC__out SIZEL *psizel);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IOleObject * This,
                               __RPC__in_opt IAdviseSink *pAdvSink,
                        __RPC__out DWORD *pdwConnection);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IOleObject * This,
                       DWORD dwConnection);
        HRESULT ( STDMETHODCALLTYPE *EnumAdvise )(
            __RPC__in IOleObject * This,
                        __RPC__deref_out_opt IEnumSTATDATA **ppenumAdvise);
        HRESULT ( STDMETHODCALLTYPE *GetMiscStatus )(
            __RPC__in IOleObject * This,
                       DWORD dwAspect,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *SetColorScheme )(
            __RPC__in IOleObject * This,
                       __RPC__in LOGPALETTE *pLogpal);
        END_INTERFACE
    } IOleObjectVtbl;
    interface IOleObject
    {
        CONST_VTBL struct IOleObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetClientSite(This,pClientSite) )
    ( (This)->lpVtbl -> GetClientSite(This,ppClientSite) )
    ( (This)->lpVtbl -> SetHostNames(This,szContainerApp,szContainerObj) )
    ( (This)->lpVtbl -> Close(This,dwSaveOption) )
    ( (This)->lpVtbl -> SetMoniker(This,dwWhichMoniker,pmk) )
    ( (This)->lpVtbl -> GetMoniker(This,dwAssign,dwWhichMoniker,ppmk) )
    ( (This)->lpVtbl -> InitFromData(This,pDataObject,fCreation,dwReserved) )
    ( (This)->lpVtbl -> GetClipboardData(This,dwReserved,ppDataObject) )
    ( (This)->lpVtbl -> DoVerb(This,iVerb,lpmsg,pActiveSite,lindex,hwndParent,lprcPosRect) )
    ( (This)->lpVtbl -> EnumVerbs(This,ppEnumOleVerb) )
    ( (This)->lpVtbl -> Update(This) )
    ( (This)->lpVtbl -> IsUpToDate(This) )
    ( (This)->lpVtbl -> GetUserClassID(This,pClsid) )
    ( (This)->lpVtbl -> GetUserType(This,dwFormOfType,pszUserType) )
    ( (This)->lpVtbl -> SetExtent(This,dwDrawAspect,psizel) )
    ( (This)->lpVtbl -> GetExtent(This,dwDrawAspect,psizel) )
    ( (This)->lpVtbl -> Advise(This,pAdvSink,pdwConnection) )
    ( (This)->lpVtbl -> Unadvise(This,dwConnection) )
    ( (This)->lpVtbl -> EnumAdvise(This,ppenumAdvise) )
    ( (This)->lpVtbl -> GetMiscStatus(This,dwAspect,pdwStatus) )
    ( (This)->lpVtbl -> SetColorScheme(This,pLogpal) )
typedef
enum tagOLERENDER
    {
        OLERENDER_NONE = 0,
        OLERENDER_DRAW = 1,
        OLERENDER_FORMAT = 2,
        OLERENDER_ASIS = 3
    } OLERENDER;
typedef OLERENDER *LPOLERENDER;
typedef struct tagOBJECTDESCRIPTOR
    {
    ULONG cbSize;
    CLSID clsid;
    DWORD dwDrawAspect;
    SIZEL sizel;
    POINTL pointl;
    DWORD dwStatus;
    DWORD dwFullUserTypeName;
    DWORD dwSrcOfCopy;
    } OBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *POBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *LPOBJECTDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR LINKSRCDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *PLINKSRCDESCRIPTOR;
typedef struct tagOBJECTDESCRIPTOR *LPLINKSRCDESCRIPTOR;
extern RPC_IF_HANDLE IOLETypes_v0_0_c_ifspec;
extern RPC_IF_HANDLE IOLETypes_v0_0_s_ifspec;
typedef __RPC_unique_pointer IOleWindow *LPOLEWINDOW;
EXTERN_C const IID IID_IOleWindow;
    typedef struct IOleWindowVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleWindow * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleWindow * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleWindow * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleWindow * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleWindow * This,
                       BOOL fEnterMode);
        END_INTERFACE
    } IOleWindowVtbl;
    interface IOleWindow
    {
        CONST_VTBL struct IOleWindowVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
typedef __RPC_unique_pointer IOleLink *LPOLELINK;
typedef
enum tagOLEUPDATE
    {
        OLEUPDATE_ALWAYS = 1,
        OLEUPDATE_ONCALL = 3
    } OLEUPDATE;
typedef OLEUPDATE *LPOLEUPDATE;
typedef OLEUPDATE *POLEUPDATE;
typedef
enum tagOLELINKBIND
    {
        OLELINKBIND_EVENIFCLASSDIFF = 1
    } OLELINKBIND;
EXTERN_C const IID IID_IOleLink;
    typedef struct IOleLinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleLink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleLink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleLink * This);
        HRESULT ( STDMETHODCALLTYPE *SetUpdateOptions )(
            __RPC__in IOleLink * This,
                       DWORD dwUpdateOpt);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateOptions )(
            __RPC__in IOleLink * This,
                        __RPC__out DWORD *pdwUpdateOpt);
        HRESULT ( STDMETHODCALLTYPE *SetSourceMoniker )(
            __RPC__in IOleLink * This,
                               __RPC__in_opt IMoniker *pmk,
                       __RPC__in REFCLSID rclsid);
        HRESULT ( STDMETHODCALLTYPE *GetSourceMoniker )(
            __RPC__in IOleLink * This,
                        __RPC__deref_out_opt IMoniker **ppmk);
        HRESULT ( STDMETHODCALLTYPE *SetSourceDisplayName )(
            __RPC__in IOleLink * This,
                       __RPC__in LPCOLESTR pszStatusText);
        HRESULT ( STDMETHODCALLTYPE *GetSourceDisplayName )(
            __RPC__in IOleLink * This,
                        __RPC__deref_out_opt LPOLESTR *ppszDisplayName);
        HRESULT ( STDMETHODCALLTYPE *BindToSource )(
            __RPC__in IOleLink * This,
                       DWORD bindflags,
                               __RPC__in_opt IBindCtx *pbc);
        HRESULT ( STDMETHODCALLTYPE *BindIfRunning )(
            __RPC__in IOleLink * This);
        HRESULT ( STDMETHODCALLTYPE *GetBoundSource )(
            __RPC__in IOleLink * This,
                        __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *UnbindSource )(
            __RPC__in IOleLink * This);
        HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in IOleLink * This,
                               __RPC__in_opt IBindCtx *pbc);
        END_INTERFACE
    } IOleLinkVtbl;
    interface IOleLink
    {
        CONST_VTBL struct IOleLinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUpdateOptions(This,dwUpdateOpt) )
    ( (This)->lpVtbl -> GetUpdateOptions(This,pdwUpdateOpt) )
    ( (This)->lpVtbl -> SetSourceMoniker(This,pmk,rclsid) )
    ( (This)->lpVtbl -> GetSourceMoniker(This,ppmk) )
    ( (This)->lpVtbl -> SetSourceDisplayName(This,pszStatusText) )
    ( (This)->lpVtbl -> GetSourceDisplayName(This,ppszDisplayName) )
    ( (This)->lpVtbl -> BindToSource(This,bindflags,pbc) )
    ( (This)->lpVtbl -> BindIfRunning(This) )
    ( (This)->lpVtbl -> GetBoundSource(This,ppunk) )
    ( (This)->lpVtbl -> UnbindSource(This) )
    ( (This)->lpVtbl -> Update(This,pbc) )
typedef __RPC_unique_pointer IOleItemContainer *LPOLEITEMCONTAINER;
typedef
enum tagBINDSPEED
    {
        BINDSPEED_INDEFINITE = 1,
        BINDSPEED_MODERATE = 2,
        BINDSPEED_IMMEDIATE = 3
    } BINDSPEED;
typedef
enum tagOLECONTF
    {
        OLECONTF_EMBEDDINGS = 1,
        OLECONTF_LINKS = 2,
        OLECONTF_OTHERS = 4,
        OLECONTF_ONLYUSER = 8,
        OLECONTF_ONLYIFRUNNING = 16
    } OLECONTF;
EXTERN_C const IID IID_IOleItemContainer;
    typedef struct IOleItemContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleItemContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleItemContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleItemContainer * This);
        HRESULT ( STDMETHODCALLTYPE *ParseDisplayName )(
            __RPC__in IOleItemContainer * This,
                               __RPC__in_opt IBindCtx *pbc,
                       __RPC__in LPOLESTR pszDisplayName,
                        __RPC__out ULONG *pchEaten,
                        __RPC__deref_out_opt IMoniker **ppmkOut);
        HRESULT ( STDMETHODCALLTYPE *EnumObjects )(
            __RPC__in IOleItemContainer * This,
                       DWORD grfFlags,
                        __RPC__deref_out_opt IEnumUnknown **ppenum);
        HRESULT ( STDMETHODCALLTYPE *LockContainer )(
            __RPC__in IOleItemContainer * This,
                       BOOL fLock);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in IOleItemContainer * This,
                       __RPC__in LPOLESTR pszItem,
                       DWORD dwSpeedNeeded,
                               __RPC__in_opt IBindCtx *pbc,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetObjectStorage )(
            __RPC__in IOleItemContainer * This,
                       __RPC__in LPOLESTR pszItem,
                               __RPC__in_opt IBindCtx *pbc,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvStorage);
        HRESULT ( STDMETHODCALLTYPE *IsRunning )(
            __RPC__in IOleItemContainer * This,
                       __RPC__in LPOLESTR pszItem);
        END_INTERFACE
    } IOleItemContainerVtbl;
    interface IOleItemContainer
    {
        CONST_VTBL struct IOleItemContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseDisplayName(This,pbc,pszDisplayName,pchEaten,ppmkOut) )
    ( (This)->lpVtbl -> EnumObjects(This,grfFlags,ppenum) )
    ( (This)->lpVtbl -> LockContainer(This,fLock) )
    ( (This)->lpVtbl -> GetObject(This,pszItem,dwSpeedNeeded,pbc,riid,ppvObject) )
    ( (This)->lpVtbl -> GetObjectStorage(This,pszItem,pbc,riid,ppvStorage) )
    ( (This)->lpVtbl -> IsRunning(This,pszItem) )
typedef __RPC_unique_pointer IOleInPlaceUIWindow *LPOLEINPLACEUIWINDOW;
typedef RECT BORDERWIDTHS;
typedef LPRECT LPBORDERWIDTHS;
typedef LPCRECT LPCBORDERWIDTHS;
EXTERN_C const IID IID_IOleInPlaceUIWindow;
    typedef struct IOleInPlaceUIWindowVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceUIWindow * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceUIWindow * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceUIWindow * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceUIWindow * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceUIWindow * This,
                       BOOL fEnterMode);
                           HRESULT ( STDMETHODCALLTYPE *GetBorder )(
            __RPC__in IOleInPlaceUIWindow * This,
                        __RPC__out LPRECT lprectBorder);
                           HRESULT ( STDMETHODCALLTYPE *RequestBorderSpace )(
            __RPC__in IOleInPlaceUIWindow * This,
                               __RPC__in_opt LPCBORDERWIDTHS pborderwidths);
                           HRESULT ( STDMETHODCALLTYPE *SetBorderSpace )(
            __RPC__in IOleInPlaceUIWindow * This,
                               __RPC__in_opt LPCBORDERWIDTHS pborderwidths);
        HRESULT ( STDMETHODCALLTYPE *SetActiveObject )(
            __RPC__in IOleInPlaceUIWindow * This,
                               __RPC__in_opt IOleInPlaceActiveObject *pActiveObject,
                                       __RPC__in_opt_string LPCOLESTR pszObjName);
        END_INTERFACE
    } IOleInPlaceUIWindowVtbl;
    interface IOleInPlaceUIWindow
    {
        CONST_VTBL struct IOleInPlaceUIWindowVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> GetBorder(This,lprectBorder) )
    ( (This)->lpVtbl -> RequestBorderSpace(This,pborderwidths) )
    ( (This)->lpVtbl -> SetBorderSpace(This,pborderwidths) )
    ( (This)->lpVtbl -> SetActiveObject(This,pActiveObject,pszObjName) )
typedef __RPC_unique_pointer IOleInPlaceActiveObject *LPOLEINPLACEACTIVEOBJECT;
EXTERN_C const IID IID_IOleInPlaceActiveObject;
    typedef struct IOleInPlaceActiveObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceActiveObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceActiveObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceActiveObject * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceActiveObject * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceActiveObject * This,
                       BOOL fEnterMode);
                      HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            IOleInPlaceActiveObject * This,
            _In_opt_ LPMSG lpmsg);
                           HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivate )(
            __RPC__in IOleInPlaceActiveObject * This,
                       BOOL fActivate);
                           HRESULT ( STDMETHODCALLTYPE *OnDocWindowActivate )(
            __RPC__in IOleInPlaceActiveObject * This,
                       BOOL fActivate);
                      HRESULT ( STDMETHODCALLTYPE *ResizeBorder )(
            IOleInPlaceActiveObject * This,
            _In_ LPCRECT prcBorder,
            _In_ IOleInPlaceUIWindow *pUIWindow,
            _In_ BOOL fFrameWindow);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            __RPC__in IOleInPlaceActiveObject * This,
                       BOOL fEnable);
        END_INTERFACE
    } IOleInPlaceActiveObjectVtbl;
    interface IOleInPlaceActiveObject
    {
        CONST_VTBL struct IOleInPlaceActiveObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,lpmsg) )
    ( (This)->lpVtbl -> OnFrameWindowActivate(This,fActivate) )
    ( (This)->lpVtbl -> OnDocWindowActivate(This,fActivate) )
    ( (This)->lpVtbl -> ResizeBorder(This,prcBorder,pUIWindow,fFrameWindow) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
                HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteTranslateAccelerator_Proxy(
    __RPC__in IOleInPlaceActiveObject * This);
void __RPC_STUB IOleInPlaceActiveObject_RemoteTranslateAccelerator_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_RemoteResizeBorder_Proxy(
    __RPC__in IOleInPlaceActiveObject * This,
               __RPC__in LPCRECT prcBorder,
               __RPC__in REFIID riid,
                               __RPC__in_opt IOleInPlaceUIWindow *pUIWindow,
               BOOL fFrameWindow);
void __RPC_STUB IOleInPlaceActiveObject_RemoteResizeBorder_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IOleInPlaceFrame *LPOLEINPLACEFRAME;
typedef struct tagOIFI
    {
    UINT cb;
    BOOL fMDIApp;
    HWND hwndFrame;
    HACCEL haccel;
    UINT cAccelEntries;
    } OLEINPLACEFRAMEINFO;
typedef struct tagOIFI *LPOLEINPLACEFRAMEINFO;
typedef struct tagOleMenuGroupWidths
    {
    LONG width[ 6 ];
    } OLEMENUGROUPWIDTHS;
typedef struct tagOleMenuGroupWidths *LPOLEMENUGROUPWIDTHS;
typedef HGLOBAL HOLEMENU;
EXTERN_C const IID IID_IOleInPlaceFrame;
    typedef struct IOleInPlaceFrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceFrame * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceFrame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceFrame * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceFrame * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceFrame * This,
                       BOOL fEnterMode);
                           HRESULT ( STDMETHODCALLTYPE *GetBorder )(
            __RPC__in IOleInPlaceFrame * This,
                        __RPC__out LPRECT lprectBorder);
                           HRESULT ( STDMETHODCALLTYPE *RequestBorderSpace )(
            __RPC__in IOleInPlaceFrame * This,
                               __RPC__in_opt LPCBORDERWIDTHS pborderwidths);
                           HRESULT ( STDMETHODCALLTYPE *SetBorderSpace )(
            __RPC__in IOleInPlaceFrame * This,
                               __RPC__in_opt LPCBORDERWIDTHS pborderwidths);
        HRESULT ( STDMETHODCALLTYPE *SetActiveObject )(
            __RPC__in IOleInPlaceFrame * This,
                               __RPC__in_opt IOleInPlaceActiveObject *pActiveObject,
                                       __RPC__in_opt_string LPCOLESTR pszObjName);
        HRESULT ( STDMETHODCALLTYPE *InsertMenus )(
            __RPC__in IOleInPlaceFrame * This,
                       __RPC__in HMENU hmenuShared,
                            __RPC__inout LPOLEMENUGROUPWIDTHS lpMenuWidths);
                           HRESULT ( STDMETHODCALLTYPE *SetMenu )(
            __RPC__in IOleInPlaceFrame * This,
                       __RPC__in HMENU hmenuShared,
                       __RPC__in HOLEMENU holemenu,
                       __RPC__in HWND hwndActiveObject);
        HRESULT ( STDMETHODCALLTYPE *RemoveMenus )(
            __RPC__in IOleInPlaceFrame * This,
                       __RPC__in HMENU hmenuShared);
                           HRESULT ( STDMETHODCALLTYPE *SetStatusText )(
            __RPC__in IOleInPlaceFrame * This,
                               __RPC__in_opt LPCOLESTR pszStatusText);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            __RPC__in IOleInPlaceFrame * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            __RPC__in IOleInPlaceFrame * This,
                       __RPC__in LPMSG lpmsg,
                       WORD wID);
        END_INTERFACE
    } IOleInPlaceFrameVtbl;
    interface IOleInPlaceFrame
    {
        CONST_VTBL struct IOleInPlaceFrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> GetBorder(This,lprectBorder) )
    ( (This)->lpVtbl -> RequestBorderSpace(This,pborderwidths) )
    ( (This)->lpVtbl -> SetBorderSpace(This,pborderwidths) )
    ( (This)->lpVtbl -> SetActiveObject(This,pActiveObject,pszObjName) )
    ( (This)->lpVtbl -> InsertMenus(This,hmenuShared,lpMenuWidths) )
    ( (This)->lpVtbl -> SetMenu(This,hmenuShared,holemenu,hwndActiveObject) )
    ( (This)->lpVtbl -> RemoveMenus(This,hmenuShared) )
    ( (This)->lpVtbl -> SetStatusText(This,pszStatusText) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,lpmsg,wID) )
typedef __RPC_unique_pointer IOleInPlaceObject *LPOLEINPLACEOBJECT;
EXTERN_C const IID IID_IOleInPlaceObject;
    typedef struct IOleInPlaceObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceObject * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceObject * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceObject * This,
                       BOOL fEnterMode);
        HRESULT ( STDMETHODCALLTYPE *InPlaceDeactivate )(
            __RPC__in IOleInPlaceObject * This);
        HRESULT ( STDMETHODCALLTYPE *UIDeactivate )(
            __RPC__in IOleInPlaceObject * This);
                           HRESULT ( STDMETHODCALLTYPE *SetObjectRects )(
            __RPC__in IOleInPlaceObject * This,
                       __RPC__in LPCRECT lprcPosRect,
                       __RPC__in LPCRECT lprcClipRect);
        HRESULT ( STDMETHODCALLTYPE *ReactivateAndUndo )(
            __RPC__in IOleInPlaceObject * This);
        END_INTERFACE
    } IOleInPlaceObjectVtbl;
    interface IOleInPlaceObject
    {
        CONST_VTBL struct IOleInPlaceObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> InPlaceDeactivate(This) )
    ( (This)->lpVtbl -> UIDeactivate(This) )
    ( (This)->lpVtbl -> SetObjectRects(This,lprcPosRect,lprcClipRect) )
    ( (This)->lpVtbl -> ReactivateAndUndo(This) )
typedef __RPC_unique_pointer IOleInPlaceSite *LPOLEINPLACESITE;
EXTERN_C const IID IID_IOleInPlaceSite;
    typedef struct IOleInPlaceSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleInPlaceSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleInPlaceSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleInPlaceSite * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IOleInPlaceSite * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IOleInPlaceSite * This,
                       BOOL fEnterMode);
        HRESULT ( STDMETHODCALLTYPE *CanInPlaceActivate )(
            __RPC__in IOleInPlaceSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceActivate )(
            __RPC__in IOleInPlaceSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnUIActivate )(
            __RPC__in IOleInPlaceSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetWindowContext )(
            __RPC__in IOleInPlaceSite * This,
                        __RPC__deref_out_opt IOleInPlaceFrame **ppFrame,
                        __RPC__deref_out_opt IOleInPlaceUIWindow **ppDoc,
                        __RPC__out LPRECT lprcPosRect,
                        __RPC__out LPRECT lprcClipRect,
                            __RPC__inout LPOLEINPLACEFRAMEINFO lpFrameInfo);
        HRESULT ( STDMETHODCALLTYPE *Scroll )(
            __RPC__in IOleInPlaceSite * This,
                       SIZE scrollExtant);
        HRESULT ( STDMETHODCALLTYPE *OnUIDeactivate )(
            __RPC__in IOleInPlaceSite * This,
                       BOOL fUndoable);
        HRESULT ( STDMETHODCALLTYPE *OnInPlaceDeactivate )(
            __RPC__in IOleInPlaceSite * This);
        HRESULT ( STDMETHODCALLTYPE *DiscardUndoState )(
            __RPC__in IOleInPlaceSite * This);
        HRESULT ( STDMETHODCALLTYPE *DeactivateAndUndo )(
            __RPC__in IOleInPlaceSite * This);
        HRESULT ( STDMETHODCALLTYPE *OnPosRectChange )(
            __RPC__in IOleInPlaceSite * This,
                       __RPC__in LPCRECT lprcPosRect);
        END_INTERFACE
    } IOleInPlaceSiteVtbl;
    interface IOleInPlaceSite
    {
        CONST_VTBL struct IOleInPlaceSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> CanInPlaceActivate(This) )
    ( (This)->lpVtbl -> OnInPlaceActivate(This) )
    ( (This)->lpVtbl -> OnUIActivate(This) )
    ( (This)->lpVtbl -> GetWindowContext(This,ppFrame,ppDoc,lprcPosRect,lprcClipRect,lpFrameInfo) )
    ( (This)->lpVtbl -> Scroll(This,scrollExtant) )
    ( (This)->lpVtbl -> OnUIDeactivate(This,fUndoable) )
    ( (This)->lpVtbl -> OnInPlaceDeactivate(This) )
    ( (This)->lpVtbl -> DiscardUndoState(This) )
    ( (This)->lpVtbl -> DeactivateAndUndo(This) )
    ( (This)->lpVtbl -> OnPosRectChange(This,lprcPosRect) )
EXTERN_C const IID IID_IContinue;
    typedef struct IContinueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContinue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContinue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContinue * This);
        HRESULT ( STDMETHODCALLTYPE *FContinue )(
            __RPC__in IContinue * This);
        END_INTERFACE
    } IContinueVtbl;
    interface IContinue
    {
        CONST_VTBL struct IContinueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FContinue(This) )
typedef __RPC_unique_pointer IViewObject *LPVIEWOBJECT;
EXTERN_C const IID IID_IViewObject;
    typedef struct IViewObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewObject * This);
                      HRESULT ( STDMETHODCALLTYPE *Draw )(
            IViewObject * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _In_opt_ DVTARGETDEVICE *ptd,
            _In_opt_ HDC hdcTargetDev,
            _In_ HDC hdcDraw,
            _In_opt_ LPCRECTL lprcBounds,
            _In_opt_ LPCRECTL lprcWBounds,
            _In_opt_ BOOL ( STDMETHODCALLTYPE *pfnContinue )(
                ULONG_PTR dwContinue),
            _In_ ULONG_PTR dwContinue);
                      HRESULT ( STDMETHODCALLTYPE *GetColorSet )(
            IViewObject * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _In_opt_ DVTARGETDEVICE *ptd,
            _In_opt_ HDC hicTargetDev,
            _Outptr_ LOGPALETTE **ppColorSet);
                      HRESULT ( STDMETHODCALLTYPE *Freeze )(
            IViewObject * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _Out_ DWORD *pdwFreeze);
        HRESULT ( STDMETHODCALLTYPE *Unfreeze )(
            __RPC__in IViewObject * This,
                       DWORD dwFreeze);
        HRESULT ( STDMETHODCALLTYPE *SetAdvise )(
            __RPC__in IViewObject * This,
                       DWORD aspects,
                       DWORD advf,
                               __RPC__in_opt IAdviseSink *pAdvSink);
                      HRESULT ( STDMETHODCALLTYPE *GetAdvise )(
            IViewObject * This,
            _Out_opt_ DWORD *pAspects,
            _Out_opt_ DWORD *pAdvf,
            _Outptr_ IAdviseSink **ppAdvSink);
        END_INTERFACE
    } IViewObjectVtbl;
    interface IViewObject
    {
        CONST_VTBL struct IViewObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue) )
    ( (This)->lpVtbl -> GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet) )
    ( (This)->lpVtbl -> Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze) )
    ( (This)->lpVtbl -> Unfreeze(This,dwFreeze) )
    ( (This)->lpVtbl -> SetAdvise(This,aspects,advf,pAdvSink) )
    ( (This)->lpVtbl -> GetAdvise(This,pAspects,pAdvf,ppAdvSink) )
                HRESULT STDMETHODCALLTYPE IViewObject_RemoteDraw_Proxy(
    __RPC__in IViewObject * This,
               DWORD dwDrawAspect,
               LONG lindex,
               ULONG_PTR pvAspect,
                       __RPC__in_opt DVTARGETDEVICE *ptd,
               __RPC__in HDC hdcTargetDev,
               __RPC__in HDC hdcDraw,
                       __RPC__in_opt LPCRECTL lprcBounds,
                       __RPC__in_opt LPCRECTL lprcWBounds,
               __RPC__in_opt IContinue *pContinue);
void __RPC_STUB IViewObject_RemoteDraw_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IViewObject_RemoteGetColorSet_Proxy(
    __RPC__in IViewObject * This,
               DWORD dwDrawAspect,
               LONG lindex,
               ULONG_PTR pvAspect,
                       __RPC__in_opt DVTARGETDEVICE *ptd,
               ULONG_PTR hicTargetDev,
                __RPC__deref_out_opt LOGPALETTE **ppColorSet);
void __RPC_STUB IViewObject_RemoteGetColorSet_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IViewObject_RemoteFreeze_Proxy(
    __RPC__in IViewObject * This,
               DWORD dwDrawAspect,
               LONG lindex,
               ULONG_PTR pvAspect,
                __RPC__out DWORD *pdwFreeze);
void __RPC_STUB IViewObject_RemoteFreeze_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IViewObject_RemoteGetAdvise_Proxy(
    __RPC__in IViewObject * This,
                __RPC__out DWORD *pAspects,
                __RPC__out DWORD *pAdvf,
                __RPC__deref_out_opt IAdviseSink **ppAdvSink);
void __RPC_STUB IViewObject_RemoteGetAdvise_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
typedef __RPC_unique_pointer IViewObject2 *LPVIEWOBJECT2;
EXTERN_C const IID IID_IViewObject2;
    typedef struct IViewObject2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewObject2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewObject2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewObject2 * This);
                      HRESULT ( STDMETHODCALLTYPE *Draw )(
            IViewObject2 * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _In_opt_ DVTARGETDEVICE *ptd,
            _In_opt_ HDC hdcTargetDev,
            _In_ HDC hdcDraw,
            _In_opt_ LPCRECTL lprcBounds,
            _In_opt_ LPCRECTL lprcWBounds,
            _In_opt_ BOOL ( STDMETHODCALLTYPE *pfnContinue )(
                ULONG_PTR dwContinue),
            _In_ ULONG_PTR dwContinue);
                      HRESULT ( STDMETHODCALLTYPE *GetColorSet )(
            IViewObject2 * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _In_opt_ DVTARGETDEVICE *ptd,
            _In_opt_ HDC hicTargetDev,
            _Outptr_ LOGPALETTE **ppColorSet);
                      HRESULT ( STDMETHODCALLTYPE *Freeze )(
            IViewObject2 * This,
            _In_ DWORD dwDrawAspect,
            _In_ LONG lindex,
            _Null_ void *pvAspect,
            _Out_ DWORD *pdwFreeze);
        HRESULT ( STDMETHODCALLTYPE *Unfreeze )(
            __RPC__in IViewObject2 * This,
                       DWORD dwFreeze);
        HRESULT ( STDMETHODCALLTYPE *SetAdvise )(
            __RPC__in IViewObject2 * This,
                       DWORD aspects,
                       DWORD advf,
                               __RPC__in_opt IAdviseSink *pAdvSink);
                      HRESULT ( STDMETHODCALLTYPE *GetAdvise )(
            IViewObject2 * This,
            _Out_opt_ DWORD *pAspects,
            _Out_opt_ DWORD *pAdvf,
            _Outptr_ IAdviseSink **ppAdvSink);
        HRESULT ( STDMETHODCALLTYPE *GetExtent )(
            __RPC__in IViewObject2 * This,
                       DWORD dwDrawAspect,
                       LONG lindex,
                               __RPC__in_opt DVTARGETDEVICE *ptd,
                        __RPC__out LPSIZEL lpsizel);
        END_INTERFACE
    } IViewObject2Vtbl;
    interface IViewObject2
    {
        CONST_VTBL struct IViewObject2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Draw(This,dwDrawAspect,lindex,pvAspect,ptd,hdcTargetDev,hdcDraw,lprcBounds,lprcWBounds,pfnContinue,dwContinue) )
    ( (This)->lpVtbl -> GetColorSet(This,dwDrawAspect,lindex,pvAspect,ptd,hicTargetDev,ppColorSet) )
    ( (This)->lpVtbl -> Freeze(This,dwDrawAspect,lindex,pvAspect,pdwFreeze) )
    ( (This)->lpVtbl -> Unfreeze(This,dwFreeze) )
    ( (This)->lpVtbl -> SetAdvise(This,aspects,advf,pAdvSink) )
    ( (This)->lpVtbl -> GetAdvise(This,pAspects,pAdvf,ppAdvSink) )
    ( (This)->lpVtbl -> GetExtent(This,dwDrawAspect,lindex,ptd,lpsizel) )
typedef IDropSource *LPDROPSOURCE;
EXTERN_C const IID IID_IDropSource;
    typedef struct IDropSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDropSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDropSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDropSource * This);
        HRESULT ( STDMETHODCALLTYPE *QueryContinueDrag )(
            IDropSource * This,
            _In_ BOOL fEscapePressed,
            _In_ DWORD grfKeyState);
        HRESULT ( STDMETHODCALLTYPE *GiveFeedback )(
            IDropSource * This,
            _In_ DWORD dwEffect);
        END_INTERFACE
    } IDropSourceVtbl;
    interface IDropSource
    {
        CONST_VTBL struct IDropSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryContinueDrag(This,fEscapePressed,grfKeyState) )
    ( (This)->lpVtbl -> GiveFeedback(This,dwEffect) )
typedef __RPC_unique_pointer IDropTarget *LPDROPTARGET;
EXTERN_C const IID IID_IDropTarget;
    typedef struct IDropTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDropTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDropTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDropTarget * This);
        HRESULT ( STDMETHODCALLTYPE *DragEnter )(
            __RPC__in IDropTarget * This,
                               __RPC__in_opt IDataObject *pDataObj,
                       DWORD grfKeyState,
                       POINTL pt,
                            __RPC__inout DWORD *pdwEffect);
        HRESULT ( STDMETHODCALLTYPE *DragOver )(
            __RPC__in IDropTarget * This,
                       DWORD grfKeyState,
                       POINTL pt,
                            __RPC__inout DWORD *pdwEffect);
        HRESULT ( STDMETHODCALLTYPE *DragLeave )(
            __RPC__in IDropTarget * This);
        HRESULT ( STDMETHODCALLTYPE *Drop )(
            __RPC__in IDropTarget * This,
                               __RPC__in_opt IDataObject *pDataObj,
                       DWORD grfKeyState,
                       POINTL pt,
                            __RPC__inout DWORD *pdwEffect);
        END_INTERFACE
    } IDropTargetVtbl;
    interface IDropTarget
    {
        CONST_VTBL struct IDropTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DragEnter(This,pDataObj,grfKeyState,pt,pdwEffect) )
    ( (This)->lpVtbl -> DragOver(This,grfKeyState,pt,pdwEffect) )
    ( (This)->lpVtbl -> DragLeave(This) )
    ( (This)->lpVtbl -> Drop(This,pDataObj,grfKeyState,pt,pdwEffect) )
EXTERN_C const IID IID_IDropSourceNotify;
    typedef struct IDropSourceNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDropSourceNotify * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDropSourceNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDropSourceNotify * This);
        HRESULT ( STDMETHODCALLTYPE *DragEnterTarget )(
            IDropSourceNotify * This,
            _In_ HWND hwndTarget);
        HRESULT ( STDMETHODCALLTYPE *DragLeaveTarget )(
            IDropSourceNotify * This);
        END_INTERFACE
    } IDropSourceNotifyVtbl;
    interface IDropSourceNotify
    {
        CONST_VTBL struct IDropSourceNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DragEnterTarget(This,hwndTarget) )
    ( (This)->lpVtbl -> DragLeaveTarget(This) )
EXTERN_C const IID IID_IEnterpriseDropTarget;
    typedef struct IEnterpriseDropTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnterpriseDropTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnterpriseDropTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnterpriseDropTarget * This);
        HRESULT ( STDMETHODCALLTYPE *SetDropSourceEnterpriseId )(
            __RPC__in IEnterpriseDropTarget * This,
                       __RPC__in LPCWSTR identity);
        HRESULT ( STDMETHODCALLTYPE *IsEvaluatingEdpPolicy )(
            __RPC__in IEnterpriseDropTarget * This,
                                __RPC__out BOOL *value);
        END_INTERFACE
    } IEnterpriseDropTargetVtbl;
    interface IEnterpriseDropTarget
    {
        CONST_VTBL struct IEnterpriseDropTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDropSourceEnterpriseId(This,identity) )
    ( (This)->lpVtbl -> IsEvaluatingEdpPolicy(This,value) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0024_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumOLEVERB *LPENUMOLEVERB;
typedef struct tagOLEVERB
    {
    LONG lVerb;
    LPOLESTR lpszVerbName;
    DWORD fuFlags;
    DWORD grfAttribs;
    } OLEVERB;
typedef struct tagOLEVERB *LPOLEVERB;
typedef
enum tagOLEVERBATTRIB
    {
        OLEVERBATTRIB_NEVERDIRTIES = 1,
        OLEVERBATTRIB_ONCONTAINERMENU = 2
    } OLEVERBATTRIB;
EXTERN_C const IID IID_IEnumOLEVERB;
    typedef struct IEnumOLEVERBVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumOLEVERB * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumOLEVERB * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumOLEVERB * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumOLEVERB * This,
            _In_ ULONG celt,
            _Out_writes_to_(celt, *pceltFetched) LPOLEVERB rgelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumOLEVERB * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumOLEVERB * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumOLEVERB * This,
                        __RPC__deref_out_opt IEnumOLEVERB **ppenum);
        END_INTERFACE
    } IEnumOLEVERBVtbl;
    interface IEnumOLEVERB
    {
        CONST_VTBL struct IEnumOLEVERBVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
                HRESULT STDMETHODCALLTYPE IEnumOLEVERB_RemoteNext_Proxy(
    __RPC__in IEnumOLEVERB * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) LPOLEVERB rgelt,
                __RPC__out ULONG *pceltFetched);
void __RPC_STUB IEnumOLEVERB_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleidl_0000_0025_v0_0_s_ifspec;
unsigned long __RPC_USER CLIPFORMAT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER HACCEL_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HACCEL * );
void __RPC_USER HACCEL_UserFree( __RPC__in unsigned long *, __RPC__in HACCEL * );
unsigned long __RPC_USER HDC_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HGLOBAL_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HGLOBAL * );
unsigned char * __RPC_USER HGLOBAL_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HGLOBAL * );
unsigned char * __RPC_USER HGLOBAL_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HGLOBAL * );
void __RPC_USER HGLOBAL_UserFree( __RPC__in unsigned long *, __RPC__in HGLOBAL * );
unsigned long __RPC_USER HMENU_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * );
void __RPC_USER HMENU_UserFree( __RPC__in unsigned long *, __RPC__in HMENU * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER STGMEDIUM_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * );
void __RPC_USER STGMEDIUM_UserFree( __RPC__in unsigned long *, __RPC__in STGMEDIUM * );
unsigned long __RPC_USER CLIPFORMAT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree64( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER HACCEL_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HACCEL * );
unsigned char * __RPC_USER HACCEL_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HACCEL * );
void __RPC_USER HACCEL_UserFree64( __RPC__in unsigned long *, __RPC__in HACCEL * );
unsigned long __RPC_USER HDC_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree64( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HGLOBAL_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HGLOBAL * );
unsigned char * __RPC_USER HGLOBAL_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HGLOBAL * );
unsigned char * __RPC_USER HGLOBAL_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HGLOBAL * );
void __RPC_USER HGLOBAL_UserFree64( __RPC__in unsigned long *, __RPC__in HGLOBAL * );
unsigned long __RPC_USER HMENU_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * );
void __RPC_USER HMENU_UserFree64( __RPC__in unsigned long *, __RPC__in HMENU * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER STGMEDIUM_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in STGMEDIUM * );
unsigned char * __RPC_USER STGMEDIUM_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out STGMEDIUM * );
void __RPC_USER STGMEDIUM_UserFree64( __RPC__in unsigned long *, __RPC__in STGMEDIUM * );
              HRESULT STDMETHODCALLTYPE IOleCache2_UpdateCache_Proxy(
    IOleCache2 * This,
    _In_ LPDATAOBJECT pDataObject,
    _In_ DWORD grfUpdf,
    _Reserved_ LPVOID pReserved);
                HRESULT STDMETHODCALLTYPE IOleCache2_UpdateCache_Stub(
    __RPC__in IOleCache2 * This,
               __RPC__in_opt LPDATAOBJECT pDataObject,
               DWORD grfUpdf,
               LONG_PTR pReserved);
              HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_TranslateAccelerator_Proxy(
    IOleInPlaceActiveObject * This,
    _In_opt_ LPMSG lpmsg);
                HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_TranslateAccelerator_Stub(
    __RPC__in IOleInPlaceActiveObject * This);
              HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_ResizeBorder_Proxy(
    IOleInPlaceActiveObject * This,
    _In_ LPCRECT prcBorder,
    _In_ IOleInPlaceUIWindow *pUIWindow,
    _In_ BOOL fFrameWindow);
                            HRESULT STDMETHODCALLTYPE IOleInPlaceActiveObject_ResizeBorder_Stub(
    __RPC__in IOleInPlaceActiveObject * This,
               __RPC__in LPCRECT prcBorder,
               __RPC__in REFIID riid,
                               __RPC__in_opt IOleInPlaceUIWindow *pUIWindow,
               BOOL fFrameWindow);
              HRESULT STDMETHODCALLTYPE IViewObject_Draw_Proxy(
    IViewObject * This,
    _In_ DWORD dwDrawAspect,
    _In_ LONG lindex,
    _Null_ void *pvAspect,
    _In_opt_ DVTARGETDEVICE *ptd,
    _In_opt_ HDC hdcTargetDev,
    _In_ HDC hdcDraw,
    _In_opt_ LPCRECTL lprcBounds,
    _In_opt_ LPCRECTL lprcWBounds,
    _In_opt_ BOOL ( STDMETHODCALLTYPE *pfnContinue )(
        ULONG_PTR dwContinue),
    _In_ ULONG_PTR dwContinue);
                HRESULT STDMETHODCALLTYPE IViewObject_Draw_Stub(
    __RPC__in IViewObject * This,
               DWORD dwDrawAspect,
               LONG lindex,
               ULONG_PTR pvAspect,
                       __RPC__in_opt DVTARGETDEVICE *ptd,
               __RPC__in HDC hdcTargetDev,
               __RPC__in HDC hdcDraw,
                       __RPC__in_opt LPCRECTL lprcBounds,
                       __RPC__in_opt LPCRECTL lprcWBounds,
               __RPC__in_opt IContinue *pContinue);
              HRESULT STDMETHODCALLTYPE IViewObject_GetColorSet_Proxy(
    IViewObject * This,
    _In_ DWORD dwDrawAspect,
    _In_ LONG lindex,
    _Null_ void *pvAspect,
    _In_opt_ DVTARGETDEVICE *ptd,
    _In_opt_ HDC hicTargetDev,
    _Outptr_ LOGPALETTE **ppColorSet);
                HRESULT STDMETHODCALLTYPE IViewObject_GetColorSet_Stub(
    __RPC__in IViewObject * This,
               DWORD dwDrawAspect,
               LONG lindex,
               ULONG_PTR pvAspect,
                       __RPC__in_opt DVTARGETDEVICE *ptd,
               ULONG_PTR hicTargetDev,
                __RPC__deref_out_opt LOGPALETTE **ppColorSet);
              HRESULT STDMETHODCALLTYPE IViewObject_Freeze_Proxy(
    IViewObject * This,
    _In_ DWORD dwDrawAspect,
    _In_ LONG lindex,
    _Null_ void *pvAspect,
    _Out_ DWORD *pdwFreeze);
                HRESULT STDMETHODCALLTYPE IViewObject_Freeze_Stub(
    __RPC__in IViewObject * This,
               DWORD dwDrawAspect,
               LONG lindex,
               ULONG_PTR pvAspect,
                __RPC__out DWORD *pdwFreeze);
              HRESULT STDMETHODCALLTYPE IViewObject_GetAdvise_Proxy(
    IViewObject * This,
    _Out_opt_ DWORD *pAspects,
    _Out_opt_ DWORD *pAdvf,
    _Outptr_ IAdviseSink **ppAdvSink);
                HRESULT STDMETHODCALLTYPE IViewObject_GetAdvise_Stub(
    __RPC__in IViewObject * This,
                __RPC__out DWORD *pAspects,
                __RPC__out DWORD *pAdvf,
                __RPC__deref_out_opt IAdviseSink **ppAdvSink);
              HRESULT STDMETHODCALLTYPE IEnumOLEVERB_Next_Proxy(
    IEnumOLEVERB * This,
    _In_ ULONG celt,
    _Out_writes_to_(celt, *pceltFetched) LPOLEVERB rgelt,
    _Out_opt_ ULONG *pceltFetched);
                HRESULT STDMETHODCALLTYPE IEnumOLEVERB_Next_Stub(
    __RPC__in IEnumOLEVERB * This,
               ULONG celt,
                                    __RPC__out_ecount_part(celt, *pceltFetched) LPOLEVERB rgelt,
                __RPC__out ULONG *pceltFetched);
}
