#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAMPlayListItem IAMPlayListItem;
typedef interface IAMPlayList IAMPlayList;
typedef interface ISpecifyParticularPages ISpecifyParticularPages;
typedef interface IAMRebuild IAMRebuild;
typedef interface IBufferingTime IBufferingTime;
#include "unknwn.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum AMPlayListItemFlags
    {
        AMPLAYLISTITEM_CANSKIP = 0x1,
        AMPLAYLISTITEM_CANBIND = 0x2
    } ;
extern RPC_IF_HANDLE __MIDL_itf_playlist_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_playlist_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMPlayListItem;
    typedef struct IAMPlayListItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMPlayListItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMPlayListItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMPlayListItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in IAMPlayListItem * This,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSourceCount )(
            __RPC__in IAMPlayListItem * This,
                        __RPC__out DWORD *pdwSources);
        HRESULT ( STDMETHODCALLTYPE *GetSourceURL )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__deref_out_opt BSTR *pbstrURL);
        HRESULT ( STDMETHODCALLTYPE *GetSourceStart )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__out REFERENCE_TIME *prtStart);
        HRESULT ( STDMETHODCALLTYPE *GetSourceDuration )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__out REFERENCE_TIME *prtDuration);
        HRESULT ( STDMETHODCALLTYPE *GetSourceStartMarker )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__out DWORD *pdwMarker);
        HRESULT ( STDMETHODCALLTYPE *GetSourceEndMarker )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__out DWORD *pdwMarker);
        HRESULT ( STDMETHODCALLTYPE *GetSourceStartMarkerName )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__deref_out_opt BSTR *pbstrStartMarker);
        HRESULT ( STDMETHODCALLTYPE *GetSourceEndMarkerName )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__deref_out_opt BSTR *pbstrEndMarker);
        HRESULT ( STDMETHODCALLTYPE *GetLinkURL )(
            __RPC__in IAMPlayListItem * This,
                        __RPC__deref_out_opt BSTR *pbstrURL);
        HRESULT ( STDMETHODCALLTYPE *GetScanDuration )(
            __RPC__in IAMPlayListItem * This,
                       DWORD dwSourceIndex,
                        __RPC__out REFERENCE_TIME *prtScanDuration);
        END_INTERFACE
    } IAMPlayListItemVtbl;
    interface IAMPlayListItem
    {
        CONST_VTBL struct IAMPlayListItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> GetSourceCount(This,pdwSources) )
    ( (This)->lpVtbl -> GetSourceURL(This,dwSourceIndex,pbstrURL) )
    ( (This)->lpVtbl -> GetSourceStart(This,dwSourceIndex,prtStart) )
    ( (This)->lpVtbl -> GetSourceDuration(This,dwSourceIndex,prtDuration) )
    ( (This)->lpVtbl -> GetSourceStartMarker(This,dwSourceIndex,pdwMarker) )
    ( (This)->lpVtbl -> GetSourceEndMarker(This,dwSourceIndex,pdwMarker) )
    ( (This)->lpVtbl -> GetSourceStartMarkerName(This,dwSourceIndex,pbstrStartMarker) )
    ( (This)->lpVtbl -> GetSourceEndMarkerName(This,dwSourceIndex,pbstrEndMarker) )
    ( (This)->lpVtbl -> GetLinkURL(This,pbstrURL) )
    ( (This)->lpVtbl -> GetScanDuration(This,dwSourceIndex,prtScanDuration) )
enum AMPlayListFlags
    {
        AMPLAYLIST_STARTINSCANMODE = 0x1,
        AMPLAYLIST_FORCEBANNER = 0x2
    } ;
enum AMPlayListEventFlags
    {
        AMPLAYLISTEVENT_RESUME = 0,
        AMPLAYLISTEVENT_BREAK = 0x1,
        AMPLAYLISTEVENT_NEXT = 0x2,
        AMPLAYLISTEVENT_MASK = 0xf,
        AMPLAYLISTEVENT_REFRESH = 0x10
    } ;
extern RPC_IF_HANDLE __MIDL_itf_playlist_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_playlist_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IAMPlayList;
    typedef struct IAMPlayListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMPlayList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMPlayList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMPlayList * This);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in IAMPlayList * This,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetItemCount )(
            __RPC__in IAMPlayList * This,
                        __RPC__out DWORD *pdwItems);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IAMPlayList * This,
                       DWORD dwItemIndex,
                        __RPC__deref_out_opt IAMPlayListItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *GetNamedEvent )(
            __RPC__in IAMPlayList * This,
                       __RPC__in WCHAR *pwszEventName,
                       DWORD dwItemIndex,
                        __RPC__deref_out_opt IAMPlayListItem **ppItem,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetRepeatInfo )(
            __RPC__in IAMPlayList * This,
                        __RPC__out DWORD *pdwRepeatCount,
                        __RPC__out DWORD *pdwRepeatStart,
                        __RPC__out DWORD *pdwRepeatEnd);
        END_INTERFACE
    } IAMPlayListVtbl;
    interface IAMPlayList
    {
        CONST_VTBL struct IAMPlayListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> GetItemCount(This,pdwItems) )
    ( (This)->lpVtbl -> GetItem(This,dwItemIndex,ppItem) )
    ( (This)->lpVtbl -> GetNamedEvent(This,pwszEventName,dwItemIndex,ppItem,pdwFlags) )
    ( (This)->lpVtbl -> GetRepeatInfo(This,pdwRepeatCount,pdwRepeatStart,pdwRepeatEnd) )
EXTERN_C const IID IID_ISpecifyParticularPages;
    typedef struct ISpecifyParticularPagesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpecifyParticularPages * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpecifyParticularPages * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpecifyParticularPages * This);
        HRESULT ( STDMETHODCALLTYPE *GetPages )(
            __RPC__in ISpecifyParticularPages * This,
                       __RPC__in REFGUID guidWhatPages,
                        __RPC__out CAUUID *pPages);
        END_INTERFACE
    } ISpecifyParticularPagesVtbl;
    interface ISpecifyParticularPages
    {
        CONST_VTBL struct ISpecifyParticularPagesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPages(This,guidWhatPages,pPages) )
EXTERN_C const IID IID_IAMRebuild;
    typedef struct IAMRebuildVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAMRebuild * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAMRebuild * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAMRebuild * This);
        HRESULT ( STDMETHODCALLTYPE *RebuildNow )(
            IAMRebuild * This);
        END_INTERFACE
    } IAMRebuildVtbl;
    interface IAMRebuild
    {
        CONST_VTBL struct IAMRebuildVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RebuildNow(This) )
EXTERN_C const IID IID_IBufferingTime;
    typedef struct IBufferingTimeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBufferingTime * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBufferingTime * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBufferingTime * This);
        HRESULT ( STDMETHODCALLTYPE *GetBufferingTime )(
            IBufferingTime * This,
            DWORD *pdwMilliseconds);
        HRESULT ( STDMETHODCALLTYPE *SetBufferingTime )(
            IBufferingTime * This,
            DWORD dwMilliseconds);
        END_INTERFACE
    } IBufferingTimeVtbl;
    interface IBufferingTime
    {
        CONST_VTBL struct IBufferingTimeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBufferingTime(This,pdwMilliseconds) )
    ( (This)->lpVtbl -> SetBufferingTime(This,dwMilliseconds) )
EXTERN_GUID(IID_IAMPlayListItem,0x56a868ff,0x0ad4,0x11ce,0xb0,0xa3,0x0,0x20,0xaf,0x0b,0xa7,0x70);
EXTERN_GUID(IID_IAMRebuild,0x2ef04dd,0x7580,0x11d1,0xbe,0xce,0x0,0xc0,0x4f,0xb6,0xe9,0x37);
EXTERN_GUID(IID_IAMPlayList,0x56a868fe,0x0ad4,0x11ce,0xb0,0xa3,0x0,0x20,0xaf,0x0b,0xa7,0x70);
EXTERN_GUID(SPECIFYPAGES_STATISTICS,0x4c437b92,0x6e9e,0x11d1,0xa7,0x4,0x0,0x60,0x97,0xc4,0xe4,0x76);
EXTERN_GUID(IID_ISpecifyParticularPages,0x4c437b91,0x6e9e,0x11d1,0xa7,0x4,0x0,0x60,0x97,0xc4,0xe4,0x76);
EXTERN_GUID( IID_IBufferingTime, 0x1e00486a,0x78dd,0x11d2,0x8d,0xd3,0x0,0x60,0x97,0xc9,0xa2,0xb2 );
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_playlist_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_playlist_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
