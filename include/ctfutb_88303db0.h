#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITfLangBarMgr ITfLangBarMgr;
typedef interface ITfLangBarEventSink ITfLangBarEventSink;
typedef interface ITfLangBarItemSink ITfLangBarItemSink;
typedef interface IEnumTfLangBarItems IEnumTfLangBarItems;
typedef interface ITfLangBarItemMgr ITfLangBarItemMgr;
typedef interface ITfLangBarItem ITfLangBarItem;
typedef interface ITfSystemLangBarItemSink ITfSystemLangBarItemSink;
typedef interface ITfSystemLangBarItem ITfSystemLangBarItem;
typedef interface ITfSystemLangBarItemText ITfSystemLangBarItemText;
typedef interface ITfSystemDeviceTypeLangBarItem ITfSystemDeviceTypeLangBarItem;
typedef interface ITfLangBarItemButton ITfLangBarItemButton;
typedef interface ITfLangBarItemBitmapButton ITfLangBarItemBitmapButton;
typedef interface ITfLangBarItemBitmap ITfLangBarItemBitmap;
typedef interface ITfLangBarItemBalloon ITfLangBarItemBalloon;
typedef interface ITfMenu ITfMenu;
#include "oaidl.h"
#include "msctf.h"
extern "C"{
#include <winapifamily.h>
#include <windows.h>
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
}
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfLangBarMgr;
    typedef struct ITfLangBarMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarMgr * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseEventSink )(
            __RPC__in ITfLangBarMgr * This,
                       __RPC__in_opt ITfLangBarEventSink *pSink,
                       __RPC__in HWND hwnd,
                       DWORD dwFlags,
                       __RPC__in DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *UnadviseEventSink )(
            __RPC__in ITfLangBarMgr * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetThreadMarshalInterface )(
            __RPC__in ITfLangBarMgr * This,
                       DWORD dwThreadId,
                       DWORD dwType,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *GetThreadLangBarItemMgr )(
            __RPC__in ITfLangBarMgr * This,
                       DWORD dwThreadId,
                        __RPC__deref_out_opt ITfLangBarItemMgr **pplbi,
                        __RPC__out DWORD *pdwThreadid);
        HRESULT ( STDMETHODCALLTYPE *GetInputProcessorProfiles )(
            __RPC__in ITfLangBarMgr * This,
                       DWORD dwThreadId,
                        __RPC__deref_out_opt ITfInputProcessorProfiles **ppaip,
                        __RPC__out DWORD *pdwThreadid);
        HRESULT ( STDMETHODCALLTYPE *RestoreLastFocus )(
            __RPC__in ITfLangBarMgr * This,
                        __RPC__out DWORD *pdwThreadId,
                       BOOL fPrev);
        HRESULT ( STDMETHODCALLTYPE *SetModalInput )(
            __RPC__in ITfLangBarMgr * This,
                       __RPC__in_opt ITfLangBarEventSink *pSink,
                       DWORD dwThreadId,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *ShowFloating )(
            __RPC__in ITfLangBarMgr * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetShowFloatingStatus )(
            __RPC__in ITfLangBarMgr * This,
                        __RPC__out DWORD *pdwFlags);
        END_INTERFACE
    } ITfLangBarMgrVtbl;
    interface ITfLangBarMgr
    {
        CONST_VTBL struct ITfLangBarMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseEventSink(This,pSink,hwnd,dwFlags,pdwCookie) )
    ( (This)->lpVtbl -> UnadviseEventSink(This,dwCookie) )
    ( (This)->lpVtbl -> GetThreadMarshalInterface(This,dwThreadId,dwType,riid,ppunk) )
    ( (This)->lpVtbl -> GetThreadLangBarItemMgr(This,dwThreadId,pplbi,pdwThreadid) )
    ( (This)->lpVtbl -> GetInputProcessorProfiles(This,dwThreadId,ppaip,pdwThreadid) )
    ( (This)->lpVtbl -> RestoreLastFocus(This,pdwThreadId,fPrev) )
    ( (This)->lpVtbl -> SetModalInput(This,pSink,dwThreadId,dwFlags) )
    ( (This)->lpVtbl -> ShowFloating(This,dwFlags) )
    ( (This)->lpVtbl -> GetShowFloatingStatus(This,pdwFlags) )
EXTERN_C const IID IID_ITfLangBarEventSink;
    typedef struct ITfLangBarEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )(
            __RPC__in ITfLangBarEventSink * This,
                       DWORD dwThreadId);
        HRESULT ( STDMETHODCALLTYPE *OnThreadTerminate )(
            __RPC__in ITfLangBarEventSink * This,
                       DWORD dwThreadId);
        HRESULT ( STDMETHODCALLTYPE *OnThreadItemChange )(
            __RPC__in ITfLangBarEventSink * This,
                       DWORD dwThreadId);
        HRESULT ( STDMETHODCALLTYPE *OnModalInput )(
            __RPC__in ITfLangBarEventSink * This,
                       DWORD dwThreadId,
                       UINT uMsg,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *ShowFloating )(
            __RPC__in ITfLangBarEventSink * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetItemFloatingRect )(
            __RPC__in ITfLangBarEventSink * This,
                       DWORD dwThreadId,
                       __RPC__in REFGUID rguid,
                        __RPC__out RECT *prc);
        END_INTERFACE
    } ITfLangBarEventSinkVtbl;
    interface ITfLangBarEventSink
    {
        CONST_VTBL struct ITfLangBarEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSetFocus(This,dwThreadId) )
    ( (This)->lpVtbl -> OnThreadTerminate(This,dwThreadId) )
    ( (This)->lpVtbl -> OnThreadItemChange(This,dwThreadId) )
    ( (This)->lpVtbl -> OnModalInput(This,dwThreadId,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> ShowFloating(This,dwFlags) )
    ( (This)->lpVtbl -> GetItemFloatingRect(This,dwThreadId,rguid,prc) )
EXTERN_C const IID IID_ITfLangBarItemSink;
    typedef struct ITfLangBarItemSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarItemSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarItemSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarItemSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnUpdate )(
            __RPC__in ITfLangBarItemSink * This,
                       DWORD dwFlags);
        END_INTERFACE
    } ITfLangBarItemSinkVtbl;
    interface ITfLangBarItemSink
    {
        CONST_VTBL struct ITfLangBarItemSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdate(This,dwFlags) )
EXTERN_C const IID IID_IEnumTfLangBarItems;
    typedef struct IEnumTfLangBarItemsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfLangBarItems * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfLangBarItems * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfLangBarItems * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfLangBarItems * This,
                        __RPC__deref_out_opt IEnumTfLangBarItems **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfLangBarItems * This,
                       ULONG ulCount,
                                 __RPC__out_ecount_full(ulCount) ITfLangBarItem **ppItem,
                                    __RPC__inout_opt ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfLangBarItems * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfLangBarItems * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfLangBarItemsVtbl;
    interface IEnumTfLangBarItems
    {
        CONST_VTBL struct IEnumTfLangBarItemsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,ppItem,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("12a1d29f-a065-440c-9746-eb2002c8bd19") struct TF_LANGBARITEMINFO
    {
    CLSID clsidService;
    GUID guidItem;
    DWORD dwStyle;
    ULONG ulSort;
    WCHAR szDescription[ 32 ];
    } TF_LANGBARITEMINFO;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfLangBarItemMgr;
    typedef struct ITfLangBarItemMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarItemMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarItemMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarItemMgr * This);
        HRESULT ( STDMETHODCALLTYPE *EnumItems )(
            __RPC__in ITfLangBarItemMgr * This,
                        __RPC__deref_out_opt IEnumTfLangBarItems **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in ITfLangBarItemMgr * This,
                       __RPC__in REFGUID rguid,
                        __RPC__deref_out_opt ITfLangBarItem **ppItem);
        HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in ITfLangBarItemMgr * This,
                       __RPC__in_opt ITfLangBarItem *punk);
        HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in ITfLangBarItemMgr * This,
                       __RPC__in_opt ITfLangBarItem *punk);
        HRESULT ( STDMETHODCALLTYPE *AdviseItemSink )(
            __RPC__in ITfLangBarItemMgr * This,
                       __RPC__in_opt ITfLangBarItemSink *punk,
                        __RPC__out DWORD *pdwCookie,
                       __RPC__in REFGUID rguidItem);
        HRESULT ( STDMETHODCALLTYPE *UnadviseItemSink )(
            __RPC__in ITfLangBarItemMgr * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *GetItemFloatingRect )(
            __RPC__in ITfLangBarItemMgr * This,
                       DWORD dwThreadId,
                       __RPC__in REFGUID rguid,
                        __RPC__out RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *GetItemsStatus )(
            __RPC__in ITfLangBarItemMgr * This,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) const GUID *prgguid,
                                 __RPC__out_ecount_full(ulCount) DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetItemNum )(
            __RPC__in ITfLangBarItemMgr * This,
                        __RPC__out ULONG *pulCount);
        HRESULT ( STDMETHODCALLTYPE *GetItems )(
            __RPC__in ITfLangBarItemMgr * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfLangBarItem **ppItem,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TF_LANGBARITEMINFO *pInfo,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) DWORD *pdwStatus,
                                    __RPC__inout_opt ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *AdviseItemsSink )(
            __RPC__in ITfLangBarItemMgr * This,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) ITfLangBarItemSink **ppunk,
                                __RPC__in_ecount_full(ulCount) const GUID *pguidItem,
                                 __RPC__out_ecount_full(ulCount) DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *UnadviseItemsSink )(
            __RPC__in ITfLangBarItemMgr * This,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) DWORD *pdwCookie);
        END_INTERFACE
    } ITfLangBarItemMgrVtbl;
    interface ITfLangBarItemMgr
    {
        CONST_VTBL struct ITfLangBarItemMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumItems(This,ppEnum) )
    ( (This)->lpVtbl -> GetItem(This,rguid,ppItem) )
    ( (This)->lpVtbl -> AddItem(This,punk) )
    ( (This)->lpVtbl -> RemoveItem(This,punk) )
    ( (This)->lpVtbl -> AdviseItemSink(This,punk,pdwCookie,rguidItem) )
    ( (This)->lpVtbl -> UnadviseItemSink(This,dwCookie) )
    ( (This)->lpVtbl -> GetItemFloatingRect(This,dwThreadId,rguid,prc) )
    ( (This)->lpVtbl -> GetItemsStatus(This,ulCount,prgguid,pdwStatus) )
    ( (This)->lpVtbl -> GetItemNum(This,pulCount) )
    ( (This)->lpVtbl -> GetItems(This,ulCount,ppItem,pInfo,pdwStatus,pcFetched) )
    ( (This)->lpVtbl -> AdviseItemsSink(This,ulCount,ppunk,pguidItem,pdwCookie) )
    ( (This)->lpVtbl -> UnadviseItemsSink(This,ulCount,pdwCookie) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfLangBarItem;
    typedef struct ITfLangBarItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in ITfLangBarItem * This,
                        __RPC__out TF_LANGBARITEMINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfLangBarItem * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfLangBarItem * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *GetTooltipString )(
            __RPC__in ITfLangBarItem * This,
                        __RPC__deref_out_opt BSTR *pbstrToolTip);
        END_INTERFACE
    } ITfLangBarItemVtbl;
    interface ITfLangBarItem
    {
        CONST_VTBL struct ITfLangBarItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Show(This,fShow) )
    ( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfSystemLangBarItemSink;
    typedef struct ITfSystemLangBarItemSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfSystemLangBarItemSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfSystemLangBarItemSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfSystemLangBarItemSink * This);
        HRESULT ( STDMETHODCALLTYPE *InitMenu )(
            __RPC__in ITfSystemLangBarItemSink * This,
                       __RPC__in_opt ITfMenu *pMenu);
        HRESULT ( STDMETHODCALLTYPE *OnMenuSelect )(
            __RPC__in ITfSystemLangBarItemSink * This,
                       UINT wID);
        END_INTERFACE
    } ITfSystemLangBarItemSinkVtbl;
    interface ITfSystemLangBarItemSink
    {
        CONST_VTBL struct ITfSystemLangBarItemSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitMenu(This,pMenu) )
    ( (This)->lpVtbl -> OnMenuSelect(This,wID) )
EXTERN_C const IID IID_ITfSystemLangBarItem;
    typedef struct ITfSystemLangBarItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfSystemLangBarItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfSystemLangBarItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfSystemLangBarItem * This);
        HRESULT ( STDMETHODCALLTYPE *SetIcon )(
            __RPC__in ITfSystemLangBarItem * This,
                       __RPC__in HICON hIcon);
        HRESULT ( STDMETHODCALLTYPE *SetTooltipString )(
            __RPC__in ITfSystemLangBarItem * This,
                                __RPC__in_ecount_full(cch) WCHAR *pchToolTip,
                       ULONG cch);
        END_INTERFACE
    } ITfSystemLangBarItemVtbl;
    interface ITfSystemLangBarItem
    {
        CONST_VTBL struct ITfSystemLangBarItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIcon(This,hIcon) )
    ( (This)->lpVtbl -> SetTooltipString(This,pchToolTip,cch) )
EXTERN_C const IID IID_ITfSystemLangBarItemText;
    typedef struct ITfSystemLangBarItemTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfSystemLangBarItemText * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfSystemLangBarItemText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfSystemLangBarItemText * This);
        HRESULT ( STDMETHODCALLTYPE *SetItemText )(
            __RPC__in ITfSystemLangBarItemText * This,
                                __RPC__in_ecount_full(cch) const WCHAR *pch,
                       ULONG cch);
        HRESULT ( STDMETHODCALLTYPE *GetItemText )(
            __RPC__in ITfSystemLangBarItemText * This,
                        __RPC__deref_out_opt BSTR *pbstrText);
        END_INTERFACE
    } ITfSystemLangBarItemTextVtbl;
    interface ITfSystemLangBarItemText
    {
        CONST_VTBL struct ITfSystemLangBarItemTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetItemText(This,pch,cch) )
    ( (This)->lpVtbl -> GetItemText(This,pbstrText) )
EXTERN_C const IID IID_ITfSystemDeviceTypeLangBarItem;
    typedef struct ITfSystemDeviceTypeLangBarItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfSystemDeviceTypeLangBarItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfSystemDeviceTypeLangBarItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfSystemDeviceTypeLangBarItem * This);
        HRESULT ( STDMETHODCALLTYPE *SetIconMode )(
            __RPC__in ITfSystemDeviceTypeLangBarItem * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetIconMode )(
            __RPC__in ITfSystemDeviceTypeLangBarItem * This,
                        __RPC__out DWORD *pdwFlags);
        END_INTERFACE
    } ITfSystemDeviceTypeLangBarItemVtbl;
    interface ITfSystemDeviceTypeLangBarItem
    {
        CONST_VTBL struct ITfSystemDeviceTypeLangBarItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIconMode(This,dwFlags) )
    ( (This)->lpVtbl -> GetIconMode(This,pdwFlags) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("8fb5f0ce-dfdd-4f0a-85b9-8988d8dd8ff2")
enum __MIDL___MIDL_itf_ctfutb_0000_0010_0001
    {
        TF_LBI_CLK_RIGHT = 1,
        TF_LBI_CLK_LEFT = 2
    } TfLBIClick;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfLangBarItemButton;
    typedef struct ITfLangBarItemButtonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarItemButton * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarItemButton * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarItemButton * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in ITfLangBarItemButton * This,
                        __RPC__out TF_LANGBARITEMINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfLangBarItemButton * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfLangBarItemButton * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *GetTooltipString )(
            __RPC__in ITfLangBarItemButton * This,
                        __RPC__deref_out_opt BSTR *pbstrToolTip);
        HRESULT ( STDMETHODCALLTYPE *OnClick )(
            __RPC__in ITfLangBarItemButton * This,
                       TfLBIClick click,
                       POINT pt,
                       __RPC__in const RECT *prcArea);
        HRESULT ( STDMETHODCALLTYPE *InitMenu )(
            __RPC__in ITfLangBarItemButton * This,
                       __RPC__in_opt ITfMenu *pMenu);
        HRESULT ( STDMETHODCALLTYPE *OnMenuSelect )(
            __RPC__in ITfLangBarItemButton * This,
                       UINT wID);
        HRESULT ( STDMETHODCALLTYPE *GetIcon )(
            __RPC__in ITfLangBarItemButton * This,
                        __RPC__deref_out_opt HICON *phIcon);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITfLangBarItemButton * This,
                        __RPC__deref_out_opt BSTR *pbstrText);
        END_INTERFACE
    } ITfLangBarItemButtonVtbl;
    interface ITfLangBarItemButton
    {
        CONST_VTBL struct ITfLangBarItemButtonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Show(This,fShow) )
    ( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
    ( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
    ( (This)->lpVtbl -> InitMenu(This,pMenu) )
    ( (This)->lpVtbl -> OnMenuSelect(This,wID) )
    ( (This)->lpVtbl -> GetIcon(This,phIcon) )
    ( (This)->lpVtbl -> GetText(This,pbstrText) )
EXTERN_C const IID IID_ITfLangBarItemBitmapButton;
    typedef struct ITfLangBarItemBitmapButtonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarItemBitmapButton * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarItemBitmapButton * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                        __RPC__out TF_LANGBARITEMINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *GetTooltipString )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                        __RPC__deref_out_opt BSTR *pbstrToolTip);
        HRESULT ( STDMETHODCALLTYPE *OnClick )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                       TfLBIClick click,
                       POINT pt,
                       __RPC__in const RECT *prcArea);
        HRESULT ( STDMETHODCALLTYPE *InitMenu )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                       __RPC__in_opt ITfMenu *pMenu);
        HRESULT ( STDMETHODCALLTYPE *OnMenuSelect )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                       UINT wID);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredSize )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                       __RPC__in const SIZE *pszDefault,
                        __RPC__out SIZE *psz);
        HRESULT ( STDMETHODCALLTYPE *DrawBitmap )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                       LONG bmWidth,
                       LONG bmHeight,
                       DWORD dwFlags,
                        __RPC__deref_out_opt HBITMAP *phbmp,
                        __RPC__deref_out_opt HBITMAP *phbmpMask);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITfLangBarItemBitmapButton * This,
                        __RPC__deref_out_opt BSTR *pbstrText);
        END_INTERFACE
    } ITfLangBarItemBitmapButtonVtbl;
    interface ITfLangBarItemBitmapButton
    {
        CONST_VTBL struct ITfLangBarItemBitmapButtonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Show(This,fShow) )
    ( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
    ( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
    ( (This)->lpVtbl -> InitMenu(This,pMenu) )
    ( (This)->lpVtbl -> OnMenuSelect(This,wID) )
    ( (This)->lpVtbl -> GetPreferredSize(This,pszDefault,psz) )
    ( (This)->lpVtbl -> DrawBitmap(This,bmWidth,bmHeight,dwFlags,phbmp,phbmpMask) )
    ( (This)->lpVtbl -> GetText(This,pbstrText) )
EXTERN_C const IID IID_ITfLangBarItemBitmap;
    typedef struct ITfLangBarItemBitmapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarItemBitmap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarItemBitmap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarItemBitmap * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in ITfLangBarItemBitmap * This,
                        __RPC__out TF_LANGBARITEMINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfLangBarItemBitmap * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfLangBarItemBitmap * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *GetTooltipString )(
            __RPC__in ITfLangBarItemBitmap * This,
                        __RPC__deref_out_opt BSTR *pbstrToolTip);
        HRESULT ( STDMETHODCALLTYPE *OnClick )(
            __RPC__in ITfLangBarItemBitmap * This,
                       TfLBIClick click,
                       POINT pt,
                       __RPC__in const RECT *prcArea);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredSize )(
            __RPC__in ITfLangBarItemBitmap * This,
                       __RPC__in const SIZE *pszDefault,
                        __RPC__out SIZE *psz);
        HRESULT ( STDMETHODCALLTYPE *DrawBitmap )(
            __RPC__in ITfLangBarItemBitmap * This,
                       LONG bmWidth,
                       LONG bmHeight,
                       DWORD dwFlags,
                        __RPC__deref_out_opt HBITMAP *phbmp,
                        __RPC__deref_out_opt HBITMAP *phbmpMask);
        END_INTERFACE
    } ITfLangBarItemBitmapVtbl;
    interface ITfLangBarItemBitmap
    {
        CONST_VTBL struct ITfLangBarItemBitmapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Show(This,fShow) )
    ( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
    ( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
    ( (This)->lpVtbl -> GetPreferredSize(This,pszDefault,psz) )
    ( (This)->lpVtbl -> DrawBitmap(This,bmWidth,bmHeight,dwFlags,phbmp,phbmpMask) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0013_v0_0_s_ifspec;
typedef DECLSPEC_UUID("f399a969-9e97-4ddd-b974-2bfb934cfbc9")
enum __MIDL_ITfLangBarItemBalloon_0001
    {
        TF_LB_BALLOON_RECO = 0,
        TF_LB_BALLOON_SHOW = 1,
        TF_LB_BALLOON_MISS = 2
    } TfLBBalloonStyle;
typedef DECLSPEC_UUID("37574483-5c50-4092-a55c-922e3a67e5b8") struct TF_LBBALLOONINFO
    {
    TfLBBalloonStyle style;
    BSTR bstrText;
    } TF_LBBALLOONINFO;
EXTERN_C const IID IID_ITfLangBarItemBalloon;
    typedef struct ITfLangBarItemBalloonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLangBarItemBalloon * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLangBarItemBalloon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLangBarItemBalloon * This);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            __RPC__in ITfLangBarItemBalloon * This,
                        __RPC__out TF_LANGBARITEMINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfLangBarItemBalloon * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfLangBarItemBalloon * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *GetTooltipString )(
            __RPC__in ITfLangBarItemBalloon * This,
                        __RPC__deref_out_opt BSTR *pbstrToolTip);
        HRESULT ( STDMETHODCALLTYPE *OnClick )(
            __RPC__in ITfLangBarItemBalloon * This,
                       TfLBIClick click,
                       POINT pt,
                       __RPC__in const RECT *prcArea);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredSize )(
            __RPC__in ITfLangBarItemBalloon * This,
                       __RPC__in const SIZE *pszDefault,
                        __RPC__out SIZE *psz);
        HRESULT ( STDMETHODCALLTYPE *GetBalloonInfo )(
            __RPC__in ITfLangBarItemBalloon * This,
                        __RPC__out TF_LBBALLOONINFO *pInfo);
        END_INTERFACE
    } ITfLangBarItemBalloonVtbl;
    interface ITfLangBarItemBalloon
    {
        CONST_VTBL struct ITfLangBarItemBalloonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Show(This,fShow) )
    ( (This)->lpVtbl -> GetTooltipString(This,pbstrToolTip) )
    ( (This)->lpVtbl -> OnClick(This,click,pt,prcArea) )
    ( (This)->lpVtbl -> GetPreferredSize(This,pszDefault,psz) )
    ( (This)->lpVtbl -> GetBalloonInfo(This,pInfo) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfMenu;
    typedef struct ITfMenuVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfMenu * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfMenu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfMenu * This);
        HRESULT ( STDMETHODCALLTYPE *AddMenuItem )(
            __RPC__in ITfMenu * This,
                       UINT uId,
                       DWORD dwFlags,
                       __RPC__in HBITMAP hbmp,
                       __RPC__in HBITMAP hbmpMask,
                                        __RPC__in_ecount_full_opt(cch) const WCHAR *pch,
                       ULONG cch,
                                    __RPC__deref_opt_inout_opt ITfMenu **ppMenu);
        END_INTERFACE
    } ITfMenuVtbl;
    interface ITfMenu
    {
        CONST_VTBL struct ITfMenuVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddMenuItem(This,uId,dwFlags,hbmp,hbmpMask,pch,cch,ppMenu) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctfutb_0000_0015_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
