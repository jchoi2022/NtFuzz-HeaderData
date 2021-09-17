#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITextStoreACP ITextStoreACP;
typedef interface ITextStoreACP2 ITextStoreACP2;
typedef interface ITextStoreACPSink ITextStoreACPSink;
typedef interface IAnchor IAnchor;
typedef interface ITextStoreAnchor ITextStoreAnchor;
typedef interface ITextStoreAnchorSink ITextStoreAnchorSink;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
DEFINE_GUID (GUID_TS_SERVICE_DATAOBJECT, 0x6086fbb5, 0xe225, 0x46ce, 0xa7, 0x70, 0xc1, 0xbb, 0xd3, 0xe0, 0x5d, 0x7b);
DEFINE_GUID (GUID_TS_SERVICE_ACCESSIBLE, 0xf9786200, 0xa5bf, 0x4a0f, 0x8c, 0x24, 0xfb, 0x16, 0xf5, 0xd1, 0xaa, 0xbb);
DEFINE_GUID (GUID_TS_SERVICE_ACTIVEX, 0xea937a50, 0xc9a6, 0x4b7d, 0x89, 0x4a, 0x49, 0xd9, 0x9b, 0x78, 0x48, 0x34);
typedef DECLSPEC_UUID("fec4f516-c503-45b1-a5fd-7a3d8ab07049") struct TS_STATUS
    {
    DWORD dwDynamicFlags;
    DWORD dwStaticFlags;
    } TS_STATUS;
typedef DECLSPEC_UUID("f3181bd6-bcf0-41d3-a81c-474b17ec38fb") struct TS_TEXTCHANGE
    {
    LONG acpStart;
    LONG acpOldEnd;
    LONG acpNewEnd;
    } TS_TEXTCHANGE;
typedef DECLSPEC_UUID("05fcf85b-5e9c-4c3e-ab71-29471d4f38e7")
enum __MIDL___MIDL_itf_textstor_0000_0000_0001
    {
        TS_AE_NONE = 0,
        TS_AE_START = 1,
        TS_AE_END = 2
    } TsActiveSelEnd;
typedef DECLSPEC_UUID("7ecc3ffa-8f73-4d91-98ed-76f8ac5b1600") struct TS_SELECTIONSTYLE
    {
    TsActiveSelEnd ase;
    BOOL fInterimChar;
    } TS_SELECTIONSTYLE;
typedef DECLSPEC_UUID("c4b9c33b-8a0d-4426-bebe-d444a4701fe9") struct TS_SELECTION_ACP
    {
    LONG acpStart;
    LONG acpEnd;
    TS_SELECTIONSTYLE style;
    } TS_SELECTION_ACP;
typedef DECLSPEC_UUID("b03413d2-0723-4c4e-9e08-2e9c1ff3772b") struct TS_SELECTION_ANCHOR
    {
    IAnchor *paStart;
    IAnchor *paEnd;
    TS_SELECTIONSTYLE style;
    } TS_SELECTION_ANCHOR;
typedef DECLSPEC_UUID("ef3457d9-8446-49a7-a9e6-b50d9d5f3fd9") GUID TS_ATTRID;
typedef DECLSPEC_UUID("2cc2b33f-1174-4507-b8d9-5bc0eb37c197") struct TS_ATTRVAL
    {
    TS_ATTRID idAttr;
    DWORD dwOverlapId;
    VARIANT varValue;
    } TS_ATTRVAL;
typedef DECLSPEC_UUID("1faf509e-44c1-458e-950a-38a96705a62b") DWORD TsViewCookie;
typedef DECLSPEC_UUID("7899d7c4-5f07-493c-a89a-fac8e777f476")
enum __MIDL___MIDL_itf_textstor_0000_0000_0002
    {
        TS_LC_CREATE = 0,
        TS_LC_CHANGE = 1,
        TS_LC_DESTROY = 2
    } TsLayoutCode;
typedef DECLSPEC_UUID("033b0df0-f193-4170-b47b-141afc247878")
enum __MIDL___MIDL_itf_textstor_0000_0000_0003
    {
        TS_RT_PLAIN = 0,
        TS_RT_HIDDEN = ( TS_RT_PLAIN + 1 ) ,
        TS_RT_OPAQUE = ( TS_RT_HIDDEN + 1 )
    } TsRunType;
typedef DECLSPEC_UUID("a6231949-37c5-4b74-a24e-2a26c327201d") struct TS_RUNINFO
    {
    ULONG uCount;
    TsRunType type;
    } TS_RUNINFO;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITextStoreACP;
    typedef struct ITextStoreACPVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreACP * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreACP * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreACP * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseSink )(
            __RPC__in ITextStoreACP * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk,
                       DWORD dwMask);
        HRESULT ( STDMETHODCALLTYPE *UnadviseSink )(
            __RPC__in ITextStoreACP * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *RequestLock )(
            __RPC__in ITextStoreACP * This,
                       DWORD dwLockFlags,
                        __RPC__out HRESULT *phrSession);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITextStoreACP * This,
                        __RPC__out TS_STATUS *pdcs);
        HRESULT ( STDMETHODCALLTYPE *QueryInsert )(
            __RPC__in ITextStoreACP * This,
                       LONG acpTestStart,
                       LONG acpTestEnd,
                       ULONG cch,
                        __RPC__out LONG *pacpResultStart,
                        __RPC__out LONG *pacpResultEnd);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextStoreACP * This,
                       ULONG ulIndex,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TS_SELECTION_ACP *pSelection,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *SetSelection )(
            __RPC__in ITextStoreACP * This,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) const TS_SELECTION_ACP *pSelection);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextStoreACP * This,
                       LONG acpStart,
                       LONG acpEnd,
                                            __RPC__out_ecount_part(cchPlainReq, *pcchPlainRet) WCHAR *pchPlain,
                       ULONG cchPlainReq,
                        __RPC__out ULONG *pcchPlainRet,
                                            __RPC__out_ecount_part(cRunInfoReq, *pcRunInfoRet) TS_RUNINFO *prgRunInfo,
                       ULONG cRunInfoReq,
                        __RPC__out ULONG *pcRunInfoRet,
                        __RPC__out LONG *pacpNext);
        HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextStoreACP * This,
                       DWORD dwFlags,
                       LONG acpStart,
                       LONG acpEnd,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       ULONG cch,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITextStoreACP * This,
                       LONG acpStart,
                       LONG acpEnd,
                        __RPC__deref_out_opt IDataObject **ppDataObject);
        HRESULT ( STDMETHODCALLTYPE *GetEmbedded )(
            __RPC__in ITextStoreACP * This,
                       LONG acpPos,
                       __RPC__in REFGUID rguidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *QueryInsertEmbedded )(
            __RPC__in ITextStoreACP * This,
                       __RPC__in const GUID *pguidService,
                       __RPC__in const FORMATETC *pFormatEtc,
                        __RPC__out BOOL *pfInsertable);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbedded )(
            __RPC__in ITextStoreACP * This,
                       DWORD dwFlags,
                       LONG acpStart,
                       LONG acpEnd,
                       __RPC__in_opt IDataObject *pDataObject,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *InsertTextAtSelection )(
            __RPC__in ITextStoreACP * This,
                       DWORD dwFlags,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       ULONG cch,
                        __RPC__out LONG *pacpStart,
                        __RPC__out LONG *pacpEnd,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbeddedAtSelection )(
            __RPC__in ITextStoreACP * This,
                       DWORD dwFlags,
                       __RPC__in_opt IDataObject *pDataObject,
                        __RPC__out LONG *pacpStart,
                        __RPC__out LONG *pacpEnd,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *RequestSupportedAttrs )(
            __RPC__in ITextStoreACP * This,
                       DWORD dwFlags,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs);
        HRESULT ( STDMETHODCALLTYPE *RequestAttrsAtPosition )(
            __RPC__in ITextStoreACP * This,
                       LONG acpPos,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *RequestAttrsTransitioningAtPosition )(
            __RPC__in ITextStoreACP * This,
                       LONG acpPos,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *FindNextAttrTransition )(
            __RPC__in ITextStoreACP * This,
                       LONG acpStart,
                       LONG acpHalt,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags,
                        __RPC__out LONG *pacpNext,
                        __RPC__out BOOL *pfFound,
                        __RPC__out LONG *plFoundOffset);
        HRESULT ( STDMETHODCALLTYPE *RetrieveRequestedAttrs )(
            __RPC__in ITextStoreACP * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TS_ATTRVAL *paAttrVals,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *GetEndACP )(
            __RPC__in ITextStoreACP * This,
                        __RPC__out LONG *pacp);
        HRESULT ( STDMETHODCALLTYPE *GetActiveView )(
            __RPC__in ITextStoreACP * This,
                        __RPC__out TsViewCookie *pvcView);
        HRESULT ( STDMETHODCALLTYPE *GetACPFromPoint )(
            __RPC__in ITextStoreACP * This,
                       TsViewCookie vcView,
                       __RPC__in const POINT *ptScreen,
                       DWORD dwFlags,
                        __RPC__out LONG *pacp);
        HRESULT ( STDMETHODCALLTYPE *GetTextExt )(
            __RPC__in ITextStoreACP * This,
                       TsViewCookie vcView,
                       LONG acpStart,
                       LONG acpEnd,
                        __RPC__out RECT *prc,
                        __RPC__out BOOL *pfClipped);
        HRESULT ( STDMETHODCALLTYPE *GetScreenExt )(
            __RPC__in ITextStoreACP * This,
                       TsViewCookie vcView,
                        __RPC__out RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *GetWnd )(
            __RPC__in ITextStoreACP * This,
                       TsViewCookie vcView,
                        __RPC__deref_out_opt HWND *phwnd);
        END_INTERFACE
    } ITextStoreACPVtbl;
    interface ITextStoreACP
    {
        CONST_VTBL struct ITextStoreACPVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseSink(This,riid,punk,dwMask) )
    ( (This)->lpVtbl -> UnadviseSink(This,punk) )
    ( (This)->lpVtbl -> RequestLock(This,dwLockFlags,phrSession) )
    ( (This)->lpVtbl -> GetStatus(This,pdcs) )
    ( (This)->lpVtbl -> QueryInsert(This,acpTestStart,acpTestEnd,cch,pacpResultStart,pacpResultEnd) )
    ( (This)->lpVtbl -> GetSelection(This,ulIndex,ulCount,pSelection,pcFetched) )
    ( (This)->lpVtbl -> SetSelection(This,ulCount,pSelection) )
    ( (This)->lpVtbl -> GetText(This,acpStart,acpEnd,pchPlain,cchPlainReq,pcchPlainRet,prgRunInfo,cRunInfoReq,pcRunInfoRet,pacpNext) )
    ( (This)->lpVtbl -> SetText(This,dwFlags,acpStart,acpEnd,pchText,cch,pChange) )
    ( (This)->lpVtbl -> GetFormattedText(This,acpStart,acpEnd,ppDataObject) )
    ( (This)->lpVtbl -> GetEmbedded(This,acpPos,rguidService,riid,ppunk) )
    ( (This)->lpVtbl -> QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) )
    ( (This)->lpVtbl -> InsertEmbedded(This,dwFlags,acpStart,acpEnd,pDataObject,pChange) )
    ( (This)->lpVtbl -> InsertTextAtSelection(This,dwFlags,pchText,cch,pacpStart,pacpEnd,pChange) )
    ( (This)->lpVtbl -> InsertEmbeddedAtSelection(This,dwFlags,pDataObject,pacpStart,pacpEnd,pChange) )
    ( (This)->lpVtbl -> RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs) )
    ( (This)->lpVtbl -> RequestAttrsAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) )
    ( (This)->lpVtbl -> RequestAttrsTransitioningAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) )
    ( (This)->lpVtbl -> FindNextAttrTransition(This,acpStart,acpHalt,cFilterAttrs,paFilterAttrs,dwFlags,pacpNext,pfFound,plFoundOffset) )
    ( (This)->lpVtbl -> RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched) )
    ( (This)->lpVtbl -> GetEndACP(This,pacp) )
    ( (This)->lpVtbl -> GetActiveView(This,pvcView) )
    ( (This)->lpVtbl -> GetACPFromPoint(This,vcView,ptScreen,dwFlags,pacp) )
    ( (This)->lpVtbl -> GetTextExt(This,vcView,acpStart,acpEnd,prc,pfClipped) )
    ( (This)->lpVtbl -> GetScreenExt(This,vcView,prc) )
    ( (This)->lpVtbl -> GetWnd(This,vcView,phwnd) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ITextStoreACP2;
    typedef struct ITextStoreACP2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreACP2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreACP2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreACP2 * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseSink )(
            __RPC__in ITextStoreACP2 * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk,
                       DWORD dwMask);
        HRESULT ( STDMETHODCALLTYPE *UnadviseSink )(
            __RPC__in ITextStoreACP2 * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *RequestLock )(
            __RPC__in ITextStoreACP2 * This,
                       DWORD dwLockFlags,
                        __RPC__out HRESULT *phrSession);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITextStoreACP2 * This,
                        __RPC__out TS_STATUS *pdcs);
        HRESULT ( STDMETHODCALLTYPE *QueryInsert )(
            __RPC__in ITextStoreACP2 * This,
                       LONG acpTestStart,
                       LONG acpTestEnd,
                       ULONG cch,
                        __RPC__out LONG *pacpResultStart,
                        __RPC__out LONG *pacpResultEnd);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextStoreACP2 * This,
                       ULONG ulIndex,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TS_SELECTION_ACP *pSelection,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *SetSelection )(
            __RPC__in ITextStoreACP2 * This,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) const TS_SELECTION_ACP *pSelection);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextStoreACP2 * This,
                       LONG acpStart,
                       LONG acpEnd,
                                            __RPC__out_ecount_part(cchPlainReq, *pcchPlainRet) WCHAR *pchPlain,
                       ULONG cchPlainReq,
                        __RPC__out ULONG *pcchPlainRet,
                                            __RPC__out_ecount_part(cRunInfoReq, *pcRunInfoRet) TS_RUNINFO *prgRunInfo,
                       ULONG cRunInfoReq,
                        __RPC__out ULONG *pcRunInfoRet,
                        __RPC__out LONG *pacpNext);
        HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextStoreACP2 * This,
                       DWORD dwFlags,
                       LONG acpStart,
                       LONG acpEnd,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       ULONG cch,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITextStoreACP2 * This,
                       LONG acpStart,
                       LONG acpEnd,
                        __RPC__deref_out_opt IDataObject **ppDataObject);
        HRESULT ( STDMETHODCALLTYPE *GetEmbedded )(
            __RPC__in ITextStoreACP2 * This,
                       LONG acpPos,
                       __RPC__in REFGUID rguidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *QueryInsertEmbedded )(
            __RPC__in ITextStoreACP2 * This,
                       __RPC__in const GUID *pguidService,
                       __RPC__in const FORMATETC *pFormatEtc,
                        __RPC__out BOOL *pfInsertable);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbedded )(
            __RPC__in ITextStoreACP2 * This,
                       DWORD dwFlags,
                       LONG acpStart,
                       LONG acpEnd,
                       __RPC__in_opt IDataObject *pDataObject,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *InsertTextAtSelection )(
            __RPC__in ITextStoreACP2 * This,
                       DWORD dwFlags,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       ULONG cch,
                        __RPC__out LONG *pacpStart,
                        __RPC__out LONG *pacpEnd,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbeddedAtSelection )(
            __RPC__in ITextStoreACP2 * This,
                       DWORD dwFlags,
                       __RPC__in_opt IDataObject *pDataObject,
                        __RPC__out LONG *pacpStart,
                        __RPC__out LONG *pacpEnd,
                        __RPC__out TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *RequestSupportedAttrs )(
            __RPC__in ITextStoreACP2 * This,
                       DWORD dwFlags,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs);
        HRESULT ( STDMETHODCALLTYPE *RequestAttrsAtPosition )(
            __RPC__in ITextStoreACP2 * This,
                       LONG acpPos,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *RequestAttrsTransitioningAtPosition )(
            __RPC__in ITextStoreACP2 * This,
                       LONG acpPos,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *FindNextAttrTransition )(
            __RPC__in ITextStoreACP2 * This,
                       LONG acpStart,
                       LONG acpHalt,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags,
                        __RPC__out LONG *pacpNext,
                        __RPC__out BOOL *pfFound,
                        __RPC__out LONG *plFoundOffset);
        HRESULT ( STDMETHODCALLTYPE *RetrieveRequestedAttrs )(
            __RPC__in ITextStoreACP2 * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TS_ATTRVAL *paAttrVals,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *GetEndACP )(
            __RPC__in ITextStoreACP2 * This,
                        __RPC__out LONG *pacp);
        HRESULT ( STDMETHODCALLTYPE *GetActiveView )(
            __RPC__in ITextStoreACP2 * This,
                        __RPC__out TsViewCookie *pvcView);
        HRESULT ( STDMETHODCALLTYPE *GetACPFromPoint )(
            __RPC__in ITextStoreACP2 * This,
                       TsViewCookie vcView,
                       __RPC__in const POINT *ptScreen,
                       DWORD dwFlags,
                        __RPC__out LONG *pacp);
        HRESULT ( STDMETHODCALLTYPE *GetTextExt )(
            __RPC__in ITextStoreACP2 * This,
                       TsViewCookie vcView,
                       LONG acpStart,
                       LONG acpEnd,
                        __RPC__out RECT *prc,
                        __RPC__out BOOL *pfClipped);
        HRESULT ( STDMETHODCALLTYPE *GetScreenExt )(
            __RPC__in ITextStoreACP2 * This,
                       TsViewCookie vcView,
                        __RPC__out RECT *prc);
        END_INTERFACE
    } ITextStoreACP2Vtbl;
    interface ITextStoreACP2
    {
        CONST_VTBL struct ITextStoreACP2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseSink(This,riid,punk,dwMask) )
    ( (This)->lpVtbl -> UnadviseSink(This,punk) )
    ( (This)->lpVtbl -> RequestLock(This,dwLockFlags,phrSession) )
    ( (This)->lpVtbl -> GetStatus(This,pdcs) )
    ( (This)->lpVtbl -> QueryInsert(This,acpTestStart,acpTestEnd,cch,pacpResultStart,pacpResultEnd) )
    ( (This)->lpVtbl -> GetSelection(This,ulIndex,ulCount,pSelection,pcFetched) )
    ( (This)->lpVtbl -> SetSelection(This,ulCount,pSelection) )
    ( (This)->lpVtbl -> GetText(This,acpStart,acpEnd,pchPlain,cchPlainReq,pcchPlainRet,prgRunInfo,cRunInfoReq,pcRunInfoRet,pacpNext) )
    ( (This)->lpVtbl -> SetText(This,dwFlags,acpStart,acpEnd,pchText,cch,pChange) )
    ( (This)->lpVtbl -> GetFormattedText(This,acpStart,acpEnd,ppDataObject) )
    ( (This)->lpVtbl -> GetEmbedded(This,acpPos,rguidService,riid,ppunk) )
    ( (This)->lpVtbl -> QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) )
    ( (This)->lpVtbl -> InsertEmbedded(This,dwFlags,acpStart,acpEnd,pDataObject,pChange) )
    ( (This)->lpVtbl -> InsertTextAtSelection(This,dwFlags,pchText,cch,pacpStart,pacpEnd,pChange) )
    ( (This)->lpVtbl -> InsertEmbeddedAtSelection(This,dwFlags,pDataObject,pacpStart,pacpEnd,pChange) )
    ( (This)->lpVtbl -> RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs) )
    ( (This)->lpVtbl -> RequestAttrsAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) )
    ( (This)->lpVtbl -> RequestAttrsTransitioningAtPosition(This,acpPos,cFilterAttrs,paFilterAttrs,dwFlags) )
    ( (This)->lpVtbl -> FindNextAttrTransition(This,acpStart,acpHalt,cFilterAttrs,paFilterAttrs,dwFlags,pacpNext,pfFound,plFoundOffset) )
    ( (This)->lpVtbl -> RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched) )
    ( (This)->lpVtbl -> GetEndACP(This,pacp) )
    ( (This)->lpVtbl -> GetActiveView(This,pvcView) )
    ( (This)->lpVtbl -> GetACPFromPoint(This,vcView,ptScreen,dwFlags,pacp) )
    ( (This)->lpVtbl -> GetTextExt(This,vcView,acpStart,acpEnd,prc,pfClipped) )
    ( (This)->lpVtbl -> GetScreenExt(This,vcView,prc) )
EXTERN_C const IID IID_ITextStoreACPSink;
    typedef struct ITextStoreACPSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreACPSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreACPSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreACPSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnTextChange )(
            __RPC__in ITextStoreACPSink * This,
                       DWORD dwFlags,
                       __RPC__in const TS_TEXTCHANGE *pChange);
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChange )(
            __RPC__in ITextStoreACPSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnLayoutChange )(
            __RPC__in ITextStoreACPSink * This,
                       TsLayoutCode lcode,
                       TsViewCookie vcView);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in ITextStoreACPSink * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnAttrsChange )(
            __RPC__in ITextStoreACPSink * This,
                       LONG acpStart,
                       LONG acpEnd,
                       ULONG cAttrs,
                                __RPC__in_ecount_full(cAttrs) const TS_ATTRID *paAttrs);
        HRESULT ( STDMETHODCALLTYPE *OnLockGranted )(
            __RPC__in ITextStoreACPSink * This,
                       DWORD dwLockFlags);
        HRESULT ( STDMETHODCALLTYPE *OnStartEditTransaction )(
            __RPC__in ITextStoreACPSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnEndEditTransaction )(
            __RPC__in ITextStoreACPSink * This);
        END_INTERFACE
    } ITextStoreACPSinkVtbl;
    interface ITextStoreACPSink
    {
        CONST_VTBL struct ITextStoreACPSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTextChange(This,dwFlags,pChange) )
    ( (This)->lpVtbl -> OnSelectionChange(This) )
    ( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
    ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
    ( (This)->lpVtbl -> OnAttrsChange(This,acpStart,acpEnd,cAttrs,paAttrs) )
    ( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
    ( (This)->lpVtbl -> OnStartEditTransaction(This) )
    ( (This)->lpVtbl -> OnEndEditTransaction(This) )
typedef DECLSPEC_UUID("daa8601e-7695-426f-9bb7-498a6aa64b68")
enum __MIDL_IAnchor_0001
    {
        TS_GR_BACKWARD = 0,
        TS_GR_FORWARD = 1
    } TsGravity;
typedef DECLSPEC_UUID("898e19df-4fb4-4af3-8daf-9b3c1145c79d")
enum __MIDL_IAnchor_0002
    {
        TS_SD_BACKWARD = 0,
        TS_SD_FORWARD = 1
    } TsShiftDir;
EXTERN_C const IID IID_IAnchor;
    typedef struct IAnchorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnchor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnchor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnchor * This);
        HRESULT ( STDMETHODCALLTYPE *SetGravity )(
            __RPC__in IAnchor * This,
                       TsGravity gravity);
        HRESULT ( STDMETHODCALLTYPE *GetGravity )(
            __RPC__in IAnchor * This,
                        __RPC__out TsGravity *pgravity);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in IAnchor * This,
                       __RPC__in_opt IAnchor *paWith,
                        __RPC__out BOOL *pfEqual);
        HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IAnchor * This,
                       __RPC__in_opt IAnchor *paWith,
                        __RPC__out LONG *plResult);
        HRESULT ( STDMETHODCALLTYPE *Shift )(
            __RPC__in IAnchor * This,
                       DWORD dwFlags,
                       LONG cchReq,
                        __RPC__out LONG *pcch,
                       __RPC__in_opt IAnchor *paHaltAnchor);
        HRESULT ( STDMETHODCALLTYPE *ShiftTo )(
            __RPC__in IAnchor * This,
                       __RPC__in_opt IAnchor *paSite);
        HRESULT ( STDMETHODCALLTYPE *ShiftRegion )(
            __RPC__in IAnchor * This,
                       DWORD dwFlags,
                       TsShiftDir dir,
                        __RPC__out BOOL *pfNoRegion);
        HRESULT ( STDMETHODCALLTYPE *SetChangeHistoryMask )(
            __RPC__in IAnchor * This,
                       DWORD dwMask);
        HRESULT ( STDMETHODCALLTYPE *GetChangeHistory )(
            __RPC__in IAnchor * This,
                        __RPC__out DWORD *pdwHistory);
        HRESULT ( STDMETHODCALLTYPE *ClearChangeHistory )(
            __RPC__in IAnchor * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAnchor * This,
                        __RPC__deref_out_opt IAnchor **ppaClone);
        END_INTERFACE
    } IAnchorVtbl;
    interface IAnchor
    {
        CONST_VTBL struct IAnchorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetGravity(This,gravity) )
    ( (This)->lpVtbl -> GetGravity(This,pgravity) )
    ( (This)->lpVtbl -> IsEqual(This,paWith,pfEqual) )
    ( (This)->lpVtbl -> Compare(This,paWith,plResult) )
    ( (This)->lpVtbl -> Shift(This,dwFlags,cchReq,pcch,paHaltAnchor) )
    ( (This)->lpVtbl -> ShiftTo(This,paSite) )
    ( (This)->lpVtbl -> ShiftRegion(This,dwFlags,dir,pfNoRegion) )
    ( (This)->lpVtbl -> SetChangeHistoryMask(This,dwMask) )
    ( (This)->lpVtbl -> GetChangeHistory(This,pdwHistory) )
    ( (This)->lpVtbl -> ClearChangeHistory(This) )
    ( (This)->lpVtbl -> Clone(This,ppaClone) )
EXTERN_C const IID IID_ITextStoreAnchor;
    typedef struct ITextStoreAnchorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreAnchor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreAnchor * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseSink )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk,
                       DWORD dwMask);
        HRESULT ( STDMETHODCALLTYPE *UnadviseSink )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *RequestLock )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwLockFlags,
                        __RPC__out HRESULT *phrSession);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITextStoreAnchor * This,
                        __RPC__out TS_STATUS *pdcs);
        HRESULT ( STDMETHODCALLTYPE *QueryInsert )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in_opt IAnchor *paTestStart,
                       __RPC__in_opt IAnchor *paTestEnd,
                       ULONG cch,
                        __RPC__deref_out_opt IAnchor **ppaResultStart,
                        __RPC__deref_out_opt IAnchor **ppaResultEnd);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITextStoreAnchor * This,
                       ULONG ulIndex,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TS_SELECTION_ANCHOR *pSelection,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *SetSelection )(
            __RPC__in ITextStoreAnchor * This,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) const TS_SELECTION_ANCHOR *pSelection);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwFlags,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd,
                                            __RPC__out_ecount_part(cchReq, *pcch) WCHAR *pchText,
                       ULONG cchReq,
                        __RPC__out ULONG *pcch,
                       BOOL fUpdateAnchor);
        HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwFlags,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       ULONG cch);
        HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd,
                        __RPC__deref_out_opt IDataObject **ppDataObject);
        HRESULT ( STDMETHODCALLTYPE *GetEmbedded )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwFlags,
                       __RPC__in_opt IAnchor *paPos,
                       __RPC__in REFGUID rguidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbedded )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwFlags,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd,
                       __RPC__in_opt IDataObject *pDataObject);
        HRESULT ( STDMETHODCALLTYPE *RequestSupportedAttrs )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwFlags,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs);
        HRESULT ( STDMETHODCALLTYPE *RequestAttrsAtPosition )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in_opt IAnchor *paPos,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *RequestAttrsTransitioningAtPosition )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in_opt IAnchor *paPos,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *FindNextAttrTransition )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paHalt,
                       ULONG cFilterAttrs,
                                        __RPC__in_ecount_full_opt(cFilterAttrs) const TS_ATTRID *paFilterAttrs,
                       DWORD dwFlags,
                        __RPC__out BOOL *pfFound,
                        __RPC__out LONG *plFoundOffset);
        HRESULT ( STDMETHODCALLTYPE *RetrieveRequestedAttrs )(
            __RPC__in ITextStoreAnchor * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TS_ATTRVAL *paAttrVals,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *GetStart )(
            __RPC__in ITextStoreAnchor * This,
                        __RPC__deref_out_opt IAnchor **ppaStart);
        HRESULT ( STDMETHODCALLTYPE *GetEnd )(
            __RPC__in ITextStoreAnchor * This,
                        __RPC__deref_out_opt IAnchor **ppaEnd);
        HRESULT ( STDMETHODCALLTYPE *GetActiveView )(
            __RPC__in ITextStoreAnchor * This,
                        __RPC__out TsViewCookie *pvcView);
        HRESULT ( STDMETHODCALLTYPE *GetAnchorFromPoint )(
            __RPC__in ITextStoreAnchor * This,
                       TsViewCookie vcView,
                       __RPC__in const POINT *ptScreen,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IAnchor **ppaSite);
        HRESULT ( STDMETHODCALLTYPE *GetTextExt )(
            __RPC__in ITextStoreAnchor * This,
                       TsViewCookie vcView,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd,
                        __RPC__out RECT *prc,
                        __RPC__out BOOL *pfClipped);
        HRESULT ( STDMETHODCALLTYPE *GetScreenExt )(
            __RPC__in ITextStoreAnchor * This,
                       TsViewCookie vcView,
                        __RPC__out RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *GetWnd )(
            __RPC__in ITextStoreAnchor * This,
                       TsViewCookie vcView,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *QueryInsertEmbedded )(
            __RPC__in ITextStoreAnchor * This,
                       __RPC__in const GUID *pguidService,
                       __RPC__in const FORMATETC *pFormatEtc,
                        __RPC__out BOOL *pfInsertable);
        HRESULT ( STDMETHODCALLTYPE *InsertTextAtSelection )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwFlags,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       ULONG cch,
                        __RPC__deref_out_opt IAnchor **ppaStart,
                        __RPC__deref_out_opt IAnchor **ppaEnd);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbeddedAtSelection )(
            __RPC__in ITextStoreAnchor * This,
                       DWORD dwFlags,
                       __RPC__in_opt IDataObject *pDataObject,
                        __RPC__deref_out_opt IAnchor **ppaStart,
                        __RPC__deref_out_opt IAnchor **ppaEnd);
        END_INTERFACE
    } ITextStoreAnchorVtbl;
    interface ITextStoreAnchor
    {
        CONST_VTBL struct ITextStoreAnchorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseSink(This,riid,punk,dwMask) )
    ( (This)->lpVtbl -> UnadviseSink(This,punk) )
    ( (This)->lpVtbl -> RequestLock(This,dwLockFlags,phrSession) )
    ( (This)->lpVtbl -> GetStatus(This,pdcs) )
    ( (This)->lpVtbl -> QueryInsert(This,paTestStart,paTestEnd,cch,ppaResultStart,ppaResultEnd) )
    ( (This)->lpVtbl -> GetSelection(This,ulIndex,ulCount,pSelection,pcFetched) )
    ( (This)->lpVtbl -> SetSelection(This,ulCount,pSelection) )
    ( (This)->lpVtbl -> GetText(This,dwFlags,paStart,paEnd,pchText,cchReq,pcch,fUpdateAnchor) )
    ( (This)->lpVtbl -> SetText(This,dwFlags,paStart,paEnd,pchText,cch) )
    ( (This)->lpVtbl -> GetFormattedText(This,paStart,paEnd,ppDataObject) )
    ( (This)->lpVtbl -> GetEmbedded(This,dwFlags,paPos,rguidService,riid,ppunk) )
    ( (This)->lpVtbl -> InsertEmbedded(This,dwFlags,paStart,paEnd,pDataObject) )
    ( (This)->lpVtbl -> RequestSupportedAttrs(This,dwFlags,cFilterAttrs,paFilterAttrs) )
    ( (This)->lpVtbl -> RequestAttrsAtPosition(This,paPos,cFilterAttrs,paFilterAttrs,dwFlags) )
    ( (This)->lpVtbl -> RequestAttrsTransitioningAtPosition(This,paPos,cFilterAttrs,paFilterAttrs,dwFlags) )
    ( (This)->lpVtbl -> FindNextAttrTransition(This,paStart,paHalt,cFilterAttrs,paFilterAttrs,dwFlags,pfFound,plFoundOffset) )
    ( (This)->lpVtbl -> RetrieveRequestedAttrs(This,ulCount,paAttrVals,pcFetched) )
    ( (This)->lpVtbl -> GetStart(This,ppaStart) )
    ( (This)->lpVtbl -> GetEnd(This,ppaEnd) )
    ( (This)->lpVtbl -> GetActiveView(This,pvcView) )
    ( (This)->lpVtbl -> GetAnchorFromPoint(This,vcView,ptScreen,dwFlags,ppaSite) )
    ( (This)->lpVtbl -> GetTextExt(This,vcView,paStart,paEnd,prc,pfClipped) )
    ( (This)->lpVtbl -> GetScreenExt(This,vcView,prc) )
    ( (This)->lpVtbl -> GetWnd(This,vcView,phwnd) )
    ( (This)->lpVtbl -> QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) )
    ( (This)->lpVtbl -> InsertTextAtSelection(This,dwFlags,pchText,cch,ppaStart,ppaEnd) )
    ( (This)->lpVtbl -> InsertEmbeddedAtSelection(This,dwFlags,pDataObject,ppaStart,ppaEnd) )
EXTERN_C const IID IID_ITextStoreAnchorSink;
    typedef struct ITextStoreAnchorSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreAnchorSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreAnchorSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreAnchorSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnTextChange )(
            __RPC__in ITextStoreAnchorSink * This,
                       DWORD dwFlags,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd);
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChange )(
            __RPC__in ITextStoreAnchorSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnLayoutChange )(
            __RPC__in ITextStoreAnchorSink * This,
                       TsLayoutCode lcode,
                       TsViewCookie vcView);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in ITextStoreAnchorSink * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnAttrsChange )(
            __RPC__in ITextStoreAnchorSink * This,
                       __RPC__in_opt IAnchor *paStart,
                       __RPC__in_opt IAnchor *paEnd,
                       ULONG cAttrs,
                                __RPC__in_ecount_full(cAttrs) const TS_ATTRID *paAttrs);
        HRESULT ( STDMETHODCALLTYPE *OnLockGranted )(
            __RPC__in ITextStoreAnchorSink * This,
                       DWORD dwLockFlags);
        HRESULT ( STDMETHODCALLTYPE *OnStartEditTransaction )(
            __RPC__in ITextStoreAnchorSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnEndEditTransaction )(
            __RPC__in ITextStoreAnchorSink * This);
        END_INTERFACE
    } ITextStoreAnchorSinkVtbl;
    interface ITextStoreAnchorSink
    {
        CONST_VTBL struct ITextStoreAnchorSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTextChange(This,dwFlags,paStart,paEnd) )
    ( (This)->lpVtbl -> OnSelectionChange(This) )
    ( (This)->lpVtbl -> OnLayoutChange(This,lcode,vcView) )
    ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
    ( (This)->lpVtbl -> OnAttrsChange(This,paStart,paEnd,cAttrs,paAttrs) )
    ( (This)->lpVtbl -> OnLockGranted(This,dwLockFlags) )
    ( (This)->lpVtbl -> OnStartEditTransaction(This) )
    ( (This)->lpVtbl -> OnEndEditTransaction(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_textstor_0000_0006_v0_0_s_ifspec;
unsigned long __RPC_USER CLIPFORMAT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER CLIPFORMAT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree64( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
