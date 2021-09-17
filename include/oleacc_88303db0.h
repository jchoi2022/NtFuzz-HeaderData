#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAccessible IAccessible;
typedef interface IAccessibleHandler IAccessibleHandler;
typedef interface IAccessibleWindowlessSite IAccessibleWindowlessSite;
typedef interface IAccIdentity IAccIdentity;
typedef interface IAccPropServer IAccPropServer;
typedef interface IAccPropServices IAccPropServices;
typedef class CAccPropServices CAccPropServices;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef LRESULT (STDAPICALLTYPE *LPFNLRESULTFROMOBJECT)(REFIID riid, WPARAM wParam, LPUNKNOWN punk);
typedef HRESULT (STDAPICALLTYPE *LPFNOBJECTFROMLRESULT)(LRESULT lResult, REFIID riid, WPARAM wParam, void** ppvObject);
typedef HRESULT (STDAPICALLTYPE *LPFNACCESSIBLEOBJECTFROMWINDOW)(HWND hwnd, DWORD dwId, REFIID riid, void** ppvObject);
typedef HRESULT (STDAPICALLTYPE *LPFNACCESSIBLEOBJECTFROMPOINT)(POINT ptScreen, IAccessible** ppacc, VARIANT* pvarChild);
typedef HRESULT (STDAPICALLTYPE *LPFNCREATESTDACCESSIBLEOBJECT)(HWND hwnd, LONG idObject, REFIID riid, void** ppvObject);
typedef HRESULT (STDAPICALLTYPE *LPFNACCESSIBLECHILDREN)(IAccessible* paccContainer, LONG iChildStart,LONG cChildren,VARIANT* rgvarChildren,LONG* pcObtained);
DEFINE_GUID(LIBID_Accessibility, 0x1ea4dbf0, 0x3c3b, 0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(IID_IAccessible, 0x618736e0, 0x3c3d, 0x11cf, 0x81, 0x0c, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(IID_IAccessibleHandler, 0x03022430, 0xABC4, 0x11d0, 0xBD, 0xE2, 0x00, 0xAA, 0x00, 0x1A, 0x19, 0x53);
DEFINE_GUID(IID_IAccIdentity, 0x7852b78d, 0x1cfd, 0x41c1, 0xa6, 0x15, 0x9c, 0x0c, 0x85, 0x96, 0x0b, 0x5f);
DEFINE_GUID(IID_IAccPropServer, 0x76c0dbbb, 0x15e0, 0x4e7b, 0xb6, 0x1b, 0x20, 0xee, 0xea, 0x20, 0x01, 0xe0);
DEFINE_GUID(IID_IAccPropServices, 0x6e26e776, 0x04f0, 0x495d, 0x80, 0xe4, 0x33, 0x30, 0x35, 0x2e, 0x31, 0x69);
DEFINE_GUID(IID_IAccPropMgrInternal, 0x2bd370a9, 0x3e7f, 0x4edd, 0x8a, 0x85, 0xf8, 0xfe, 0xd1, 0xf8, 0xe5, 0x1f);
DEFINE_GUID(CLSID_AccPropServices, 0xb5f8350b, 0x0548, 0x48b1, 0xa6, 0xee, 0x88, 0xbd, 0x00, 0xb4, 0xa5, 0xe7);
DEFINE_GUID(IIS_IsOleaccProxy, 0x902697fa, 0x80e4, 0x4560, 0x80, 0x2a, 0xa1, 0x3f, 0x22, 0xa6, 0x47, 0x09);
DEFINE_GUID(IIS_ControlAccessible, 0x38c682a6, 0x9731, 0x43f2, 0x9f, 0xae, 0xe9, 0x01, 0xe6, 0x41, 0xb1, 0x01);
STDAPI_(LRESULT) LresultFromObject(_In_ REFIID riid, _In_ WPARAM wParam, _In_ LPUNKNOWN punk);
STDAPI ObjectFromLresult(_In_ LRESULT lResult, _In_ REFIID riid, _In_ WPARAM wParam, _Outptr_ void** ppvObject);
STDAPI WindowFromAccessibleObject(_In_ IAccessible*, _Out_opt_ HWND* phwnd);
STDAPI AccessibleObjectFromWindow(_In_ HWND hwnd, _In_ DWORD dwId, _In_ REFIID riid, _Outptr_ void **ppvObject);
STDAPI AccessibleObjectFromEvent(_In_ HWND hwnd, _In_ DWORD dwId, _In_ DWORD dwChildId, _Outptr_ IAccessible** ppacc, _Out_ VARIANT* pvarChild);
STDAPI AccessibleObjectFromPoint(_In_ POINT ptScreen, _Outptr_ IAccessible ** ppacc, _Out_ VARIANT* pvarChild);
STDAPI AccessibleChildren (_In_ IAccessible* paccContainer, _In_ LONG iChildStart, _In_ LONG cChildren, _Out_writes_(cChildren) VARIANT* rgvarChildren, _Out_ LONG* pcObtained);
STDAPI_(UINT) GetRoleTextA(_In_ DWORD lRole, _Out_writes_opt_(cchRoleMax) LPSTR lpszRole, _In_ UINT cchRoleMax);
STDAPI_(UINT) GetRoleTextW(_In_ DWORD lRole, _Out_writes_opt_(cchRoleMax) LPWSTR lpszRole, _In_ UINT cchRoleMax);
STDAPI_(UINT) GetStateTextA(_In_ DWORD lStateBit, _Out_writes_opt_(cchState) LPSTR lpszState, _In_ UINT cchState);
STDAPI_(UINT) GetStateTextW(_In_ DWORD lStateBit, _Out_writes_opt_(cchState) LPWSTR lpszState, _In_ UINT cchState);
STDAPI_(VOID) GetOleaccVersionInfo(_Out_ DWORD* pVer, _Out_ DWORD* pBuild);
STDAPI CreateStdAccessibleObject(_In_ HWND hwnd, _In_ LONG idObject, _In_ REFIID riid, _Outptr_ void** ppvObject);
STDAPI CreateStdAccessibleProxyA(_In_ HWND hwnd, _In_ LPCSTR pClassName, _In_ LONG idObject, _In_ REFIID riid, _Outptr_ void** ppvObject);
STDAPI CreateStdAccessibleProxyW(_In_ HWND hwnd, _In_ LPCWSTR pClassName, _In_ LONG idObject, _In_ REFIID riid, _Outptr_ void** ppvObject);
STDAPI AccSetRunningUtilityState(_In_ HWND hwndApp, _In_ DWORD dwUtilityStateMask, _In_ DWORD dwUtilityState);
STDAPI AccNotifyTouchInteraction(_In_ HWND hwndApp, _In_ HWND hwndTarget, _In_ POINT ptTarget);
typedef struct tagMSAAMENUINFO {
    DWORD dwMSAASignature;
    DWORD cchWText;
    LPWSTR pszWText;
} MSAAMENUINFO, *LPMSAAMENUINFO;
DEFINE_GUID( PROPID_ACC_NAME , 0x608d3df8, 0x8128, 0x4aa7, 0xa4, 0x28, 0xf5, 0x5e, 0x49, 0x26, 0x72, 0x91);
DEFINE_GUID( PROPID_ACC_VALUE , 0x123fe443, 0x211a, 0x4615, 0x95, 0x27, 0xc4, 0x5a, 0x7e, 0x93, 0x71, 0x7a);
DEFINE_GUID( PROPID_ACC_DESCRIPTION , 0x4d48dfe4, 0xbd3f, 0x491f, 0xa6, 0x48, 0x49, 0x2d, 0x6f, 0x20, 0xc5, 0x88);
DEFINE_GUID( PROPID_ACC_ROLE , 0xcb905ff2, 0x7bd1, 0x4c05, 0xb3, 0xc8, 0xe6, 0xc2, 0x41, 0x36, 0x4d, 0x70);
DEFINE_GUID( PROPID_ACC_STATE , 0xa8d4d5b0, 0x0a21, 0x42d0, 0xa5, 0xc0, 0x51, 0x4e, 0x98, 0x4f, 0x45, 0x7b);
DEFINE_GUID( PROPID_ACC_HELP , 0xc831e11f, 0x44db, 0x4a99, 0x97, 0x68, 0xcb, 0x8f, 0x97, 0x8b, 0x72, 0x31);
DEFINE_GUID( PROPID_ACC_KEYBOARDSHORTCUT , 0x7d9bceee, 0x7d1e, 0x4979, 0x93, 0x82, 0x51, 0x80, 0xf4, 0x17, 0x2c, 0x34);
DEFINE_GUID( PROPID_ACC_DEFAULTACTION , 0x180c072b, 0xc27f, 0x43c7, 0x99, 0x22, 0xf6, 0x35, 0x62, 0xa4, 0x63, 0x2b);
DEFINE_GUID( PROPID_ACC_HELPTOPIC , 0x787d1379, 0x8ede, 0x440b, 0x8a, 0xec, 0x11, 0xf7, 0xbf, 0x90, 0x30, 0xb3);
DEFINE_GUID( PROPID_ACC_FOCUS , 0x6eb335df, 0x1c29, 0x4127, 0xb1, 0x2c, 0xde, 0xe9, 0xfd, 0x15, 0x7f, 0x2b);
DEFINE_GUID( PROPID_ACC_SELECTION , 0xb99d073c, 0xd731, 0x405b, 0x90, 0x61, 0xd9, 0x5e, 0x8f, 0x84, 0x29, 0x84);
DEFINE_GUID( PROPID_ACC_PARENT , 0x474c22b6, 0xffc2, 0x467a, 0xb1, 0xb5, 0xe9, 0x58, 0xb4, 0x65, 0x73, 0x30);
DEFINE_GUID( PROPID_ACC_NAV_UP , 0x016e1a2b, 0x1a4e, 0x4767, 0x86, 0x12, 0x33, 0x86, 0xf6, 0x69, 0x35, 0xec);
DEFINE_GUID( PROPID_ACC_NAV_DOWN , 0x031670ed, 0x3cdf, 0x48d2, 0x96, 0x13, 0x13, 0x8f, 0x2d, 0xd8, 0xa6, 0x68);
DEFINE_GUID( PROPID_ACC_NAV_LEFT , 0x228086cb, 0x82f1, 0x4a39, 0x87, 0x05, 0xdc, 0xdc, 0x0f, 0xff, 0x92, 0xf5);
DEFINE_GUID( PROPID_ACC_NAV_RIGHT , 0xcd211d9f, 0xe1cb, 0x4fe5, 0xa7, 0x7c, 0x92, 0x0b, 0x88, 0x4d, 0x09, 0x5b);
DEFINE_GUID( PROPID_ACC_NAV_PREV , 0x776d3891, 0xc73b, 0x4480, 0xb3, 0xf6, 0x07, 0x6a, 0x16, 0xa1, 0x5a, 0xf6);
DEFINE_GUID( PROPID_ACC_NAV_NEXT , 0x1cdc5455, 0x8cd9, 0x4c92, 0xa3, 0x71, 0x39, 0x39, 0xa2, 0xfe, 0x3e, 0xee);
DEFINE_GUID( PROPID_ACC_NAV_FIRSTCHILD , 0xcfd02558, 0x557b, 0x4c67, 0x84, 0xf9, 0x2a, 0x09, 0xfc, 0xe4, 0x07, 0x49);
DEFINE_GUID( PROPID_ACC_NAV_LASTCHILD , 0x302ecaa5, 0x48d5, 0x4f8d, 0xb6, 0x71, 0x1a, 0x8d, 0x20, 0xa7, 0x78, 0x32);
DEFINE_GUID( PROPID_ACC_ROLEMAP , 0xf79acda2, 0x140d, 0x4fe6, 0x89, 0x14, 0x20, 0x84, 0x76, 0x32, 0x82, 0x69);
DEFINE_GUID( PROPID_ACC_VALUEMAP , 0xda1c3d79, 0xfc5c, 0x420e, 0xb3, 0x99, 0x9d, 0x15, 0x33, 0x54, 0x9e, 0x75);
DEFINE_GUID( PROPID_ACC_STATEMAP , 0x43946c5e, 0x0ac0, 0x4042, 0xb5, 0x25, 0x07, 0xbb, 0xdb, 0xe1, 0x7f, 0xa7);
DEFINE_GUID( PROPID_ACC_DESCRIPTIONMAP , 0x1ff1435f, 0x8a14, 0x477b, 0xb2, 0x26, 0xa0, 0xab, 0xe2, 0x79, 0x97, 0x5d);
DEFINE_GUID( PROPID_ACC_DODEFAULTACTION , 0x1ba09523, 0x2e3b, 0x49a6, 0xa0, 0x59, 0x59, 0x68, 0x2a, 0x3c, 0x48, 0xfd);
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IAccessible *LPACCESSIBLE;
EXTERN_C const IID IID_IAccessible;
    typedef struct IAccessibleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessible * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessible * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessible * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAccessible * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAccessible * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAccessible * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAccessible * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_accParent )(
            __RPC__in IAccessible * This,
                                __RPC__deref_out_opt IDispatch **ppdispParent);
                                    HRESULT ( STDMETHODCALLTYPE *get_accChildCount )(
            __RPC__in IAccessible * This,
                                __RPC__out long *pcountChildren);
                                    HRESULT ( STDMETHODCALLTYPE *get_accChild )(
            __RPC__in IAccessible * This,
                       VARIANT varChild,
                                __RPC__deref_out_opt IDispatch **ppdispChild);
                                    HRESULT ( STDMETHODCALLTYPE *get_accName )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszName);
                                    HRESULT ( STDMETHODCALLTYPE *get_accValue )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_accDescription )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszDescription);
                                    HRESULT ( STDMETHODCALLTYPE *get_accRole )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__out VARIANT *pvarRole);
                                    HRESULT ( STDMETHODCALLTYPE *get_accState )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__out VARIANT *pvarState);
                                    HRESULT ( STDMETHODCALLTYPE *get_accHelp )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszHelp);
                                    HRESULT ( STDMETHODCALLTYPE *get_accHelpTopic )(
            __RPC__in IAccessible * This,
                        __RPC__deref_out_opt BSTR *pszHelpFile,
                                 VARIANT varChild,
                                __RPC__out long *pidTopic);
                                    HRESULT ( STDMETHODCALLTYPE *get_accKeyboardShortcut )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszKeyboardShortcut);
                                    HRESULT ( STDMETHODCALLTYPE *get_accFocus )(
            __RPC__in IAccessible * This,
                                __RPC__out VARIANT *pvarChild);
                                    HRESULT ( STDMETHODCALLTYPE *get_accSelection )(
            __RPC__in IAccessible * This,
                                __RPC__out VARIANT *pvarChildren);
                                    HRESULT ( STDMETHODCALLTYPE *get_accDefaultAction )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                                __RPC__deref_out_opt BSTR *pszDefaultAction);
                           HRESULT ( STDMETHODCALLTYPE *accSelect )(
            __RPC__in IAccessible * This,
                       long flagsSelect,
                                 VARIANT varChild);
                           HRESULT ( STDMETHODCALLTYPE *accLocation )(
            __RPC__in IAccessible * This,
                        __RPC__out long *pxLeft,
                        __RPC__out long *pyTop,
                        __RPC__out long *pcxWidth,
                        __RPC__out long *pcyHeight,
                                 VARIANT varChild);
                           HRESULT ( STDMETHODCALLTYPE *accNavigate )(
            __RPC__in IAccessible * This,
                       long navDir,
                                 VARIANT varStart,
                                __RPC__out VARIANT *pvarEndUpAt);
                           HRESULT ( STDMETHODCALLTYPE *accHitTest )(
            __RPC__in IAccessible * This,
                       long xLeft,
                       long yTop,
                                __RPC__out VARIANT *pvarChild);
                           HRESULT ( STDMETHODCALLTYPE *accDoDefaultAction )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild);
                                    HRESULT ( STDMETHODCALLTYPE *put_accName )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                       __RPC__in BSTR szName);
                                    HRESULT ( STDMETHODCALLTYPE *put_accValue )(
            __RPC__in IAccessible * This,
                                 VARIANT varChild,
                       __RPC__in BSTR szValue);
        END_INTERFACE
    } IAccessibleVtbl;
    interface IAccessible
    {
        CONST_VTBL struct IAccessibleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_accParent(This,ppdispParent) )
    ( (This)->lpVtbl -> get_accChildCount(This,pcountChildren) )
    ( (This)->lpVtbl -> get_accChild(This,varChild,ppdispChild) )
    ( (This)->lpVtbl -> get_accName(This,varChild,pszName) )
    ( (This)->lpVtbl -> get_accValue(This,varChild,pszValue) )
    ( (This)->lpVtbl -> get_accDescription(This,varChild,pszDescription) )
    ( (This)->lpVtbl -> get_accRole(This,varChild,pvarRole) )
    ( (This)->lpVtbl -> get_accState(This,varChild,pvarState) )
    ( (This)->lpVtbl -> get_accHelp(This,varChild,pszHelp) )
    ( (This)->lpVtbl -> get_accHelpTopic(This,pszHelpFile,varChild,pidTopic) )
    ( (This)->lpVtbl -> get_accKeyboardShortcut(This,varChild,pszKeyboardShortcut) )
    ( (This)->lpVtbl -> get_accFocus(This,pvarChild) )
    ( (This)->lpVtbl -> get_accSelection(This,pvarChildren) )
    ( (This)->lpVtbl -> get_accDefaultAction(This,varChild,pszDefaultAction) )
    ( (This)->lpVtbl -> accSelect(This,flagsSelect,varChild) )
    ( (This)->lpVtbl -> accLocation(This,pxLeft,pyTop,pcxWidth,pcyHeight,varChild) )
    ( (This)->lpVtbl -> accNavigate(This,navDir,varStart,pvarEndUpAt) )
    ( (This)->lpVtbl -> accHitTest(This,xLeft,yTop,pvarChild) )
    ( (This)->lpVtbl -> accDoDefaultAction(This,varChild) )
    ( (This)->lpVtbl -> put_accName(This,varChild,szName) )
    ( (This)->lpVtbl -> put_accValue(This,varChild,szValue) )
typedef __RPC_unique_pointer IAccessibleHandler *LPACCESSIBLEHANDLER;
EXTERN_C const IID IID_IAccessibleHandler;
    typedef struct IAccessibleHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibleHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibleHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibleHandler * This);
        HRESULT ( STDMETHODCALLTYPE *AccessibleObjectFromID )(
            __RPC__in IAccessibleHandler * This,
                       long hwnd,
                       long lObjectID,
                        __RPC__deref_out_opt LPACCESSIBLE *pIAccessible);
        END_INTERFACE
    } IAccessibleHandlerVtbl;
    interface IAccessibleHandler
    {
        CONST_VTBL struct IAccessibleHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AccessibleObjectFromID(This,hwnd,lObjectID,pIAccessible) )
typedef __RPC_unique_pointer IAccessibleWindowlessSite *LPACCESSIBLEWINDOWLESSSITE;
EXTERN_C const IID IID_IAccessibleWindowlessSite;
    typedef struct IAccessibleWindowlessSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibleWindowlessSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibleWindowlessSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibleWindowlessSite * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireObjectIdRange )(
            __RPC__in IAccessibleWindowlessSite * This,
                       long rangeSize,
                       __RPC__in_opt IAccessibleHandler *pRangeOwner,
                        __RPC__out long *pRangeBase);
        HRESULT ( STDMETHODCALLTYPE *ReleaseObjectIdRange )(
            __RPC__in IAccessibleWindowlessSite * This,
                       long rangeBase,
                       __RPC__in_opt IAccessibleHandler *pRangeOwner);
        HRESULT ( STDMETHODCALLTYPE *QueryObjectIdRanges )(
            __RPC__in IAccessibleWindowlessSite * This,
                       __RPC__in_opt IAccessibleHandler *pRangesOwner,
                        __RPC__deref_out_opt SAFEARRAY * *psaRanges);
        HRESULT ( STDMETHODCALLTYPE *GetParentAccessible )(
            __RPC__in IAccessibleWindowlessSite * This,
                        __RPC__deref_out_opt IAccessible **ppParent);
        END_INTERFACE
    } IAccessibleWindowlessSiteVtbl;
    interface IAccessibleWindowlessSite
    {
        CONST_VTBL struct IAccessibleWindowlessSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireObjectIdRange(This,rangeSize,pRangeOwner,pRangeBase) )
    ( (This)->lpVtbl -> ReleaseObjectIdRange(This,rangeBase,pRangeOwner) )
    ( (This)->lpVtbl -> QueryObjectIdRanges(This,pRangesOwner,psaRanges) )
    ( (This)->lpVtbl -> GetParentAccessible(This,ppParent) )
typedef
enum AnnoScope
    {
        ANNO_THIS = 0,
        ANNO_CONTAINER = 1
    } AnnoScope;
typedef GUID MSAAPROPID;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IAccIdentity;
    typedef struct IAccIdentityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccIdentity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccIdentity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccIdentity * This);
        HRESULT ( STDMETHODCALLTYPE *GetIdentityString )(
            __RPC__in IAccIdentity * This,
                       DWORD dwIDChild,
                                          __RPC__deref_out_ecount_full_opt(*pdwIDStringLen) BYTE **ppIDString,
                        __RPC__out DWORD *pdwIDStringLen);
        END_INTERFACE
    } IAccIdentityVtbl;
    interface IAccIdentity
    {
        CONST_VTBL struct IAccIdentityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdentityString(This,dwIDChild,ppIDString,pdwIDStringLen) )
EXTERN_C const IID IID_IAccPropServer;
    typedef struct IAccPropServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccPropServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccPropServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccPropServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropValue )(
            __RPC__in IAccPropServer * This,
                                __RPC__in_ecount_full(dwIDStringLen) const BYTE *pIDString,
                       DWORD dwIDStringLen,
                       MSAAPROPID idProp,
                        __RPC__out VARIANT *pvarValue,
                        __RPC__out BOOL *pfHasProp);
        END_INTERFACE
    } IAccPropServerVtbl;
    interface IAccPropServer
    {
        CONST_VTBL struct IAccPropServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropValue(This,pIDString,dwIDStringLen,idProp,pvarValue,pfHasProp) )
EXTERN_C const IID IID_IAccPropServices;
    typedef struct IAccPropServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccPropServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccPropServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccPropServices * This);
        HRESULT ( STDMETHODCALLTYPE *SetPropValue )(
            __RPC__in IAccPropServices * This,
                                __RPC__in_ecount_full(dwIDStringLen) const BYTE *pIDString,
                       DWORD dwIDStringLen,
                       MSAAPROPID idProp,
                       VARIANT var);
        HRESULT ( STDMETHODCALLTYPE *SetPropServer )(
            __RPC__in IAccPropServices * This,
                                __RPC__in_ecount_full(dwIDStringLen) const BYTE *pIDString,
                       DWORD dwIDStringLen,
                                __RPC__in_ecount_full(cProps) const MSAAPROPID *paProps,
                       int cProps,
                       __RPC__in_opt IAccPropServer *pServer,
                       AnnoScope annoScope);
        HRESULT ( STDMETHODCALLTYPE *ClearProps )(
            __RPC__in IAccPropServices * This,
                                __RPC__in_ecount_full(dwIDStringLen) const BYTE *pIDString,
                       DWORD dwIDStringLen,
                                __RPC__in_ecount_full(cProps) const MSAAPROPID *paProps,
                       int cProps);
        HRESULT ( STDMETHODCALLTYPE *SetHwndProp )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HWND hwnd,
                       DWORD idObject,
                       DWORD idChild,
                       MSAAPROPID idProp,
                       VARIANT var);
        HRESULT ( STDMETHODCALLTYPE *SetHwndPropStr )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HWND hwnd,
                       DWORD idObject,
                       DWORD idChild,
                       MSAAPROPID idProp,
                               __RPC__in_string LPCWSTR str);
        HRESULT ( STDMETHODCALLTYPE *SetHwndPropServer )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HWND hwnd,
                       DWORD idObject,
                       DWORD idChild,
                                __RPC__in_ecount_full(cProps) const MSAAPROPID *paProps,
                       int cProps,
                       __RPC__in_opt IAccPropServer *pServer,
                       AnnoScope annoScope);
        HRESULT ( STDMETHODCALLTYPE *ClearHwndProps )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HWND hwnd,
                       DWORD idObject,
                       DWORD idChild,
                                __RPC__in_ecount_full(cProps) const MSAAPROPID *paProps,
                       int cProps);
        HRESULT ( STDMETHODCALLTYPE *ComposeHwndIdentityString )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HWND hwnd,
                       DWORD idObject,
                       DWORD idChild,
                                          __RPC__deref_out_ecount_full_opt(*pdwIDStringLen) BYTE **ppIDString,
                        __RPC__out DWORD *pdwIDStringLen);
        HRESULT ( STDMETHODCALLTYPE *DecomposeHwndIdentityString )(
            __RPC__in IAccPropServices * This,
                                __RPC__in_ecount_full(dwIDStringLen) const BYTE *pIDString,
                       DWORD dwIDStringLen,
                        __RPC__deref_out_opt HWND *phwnd,
                        __RPC__out DWORD *pidObject,
                        __RPC__out DWORD *pidChild);
        HRESULT ( STDMETHODCALLTYPE *SetHmenuProp )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HMENU hmenu,
                       DWORD idChild,
                       MSAAPROPID idProp,
                       VARIANT var);
        HRESULT ( STDMETHODCALLTYPE *SetHmenuPropStr )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HMENU hmenu,
                       DWORD idChild,
                       MSAAPROPID idProp,
                               __RPC__in_string LPCWSTR str);
        HRESULT ( STDMETHODCALLTYPE *SetHmenuPropServer )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HMENU hmenu,
                       DWORD idChild,
                                __RPC__in_ecount_full(cProps) const MSAAPROPID *paProps,
                       int cProps,
                       __RPC__in_opt IAccPropServer *pServer,
                       AnnoScope annoScope);
        HRESULT ( STDMETHODCALLTYPE *ClearHmenuProps )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HMENU hmenu,
                       DWORD idChild,
                                __RPC__in_ecount_full(cProps) const MSAAPROPID *paProps,
                       int cProps);
        HRESULT ( STDMETHODCALLTYPE *ComposeHmenuIdentityString )(
            __RPC__in IAccPropServices * This,
                       __RPC__in HMENU hmenu,
                       DWORD idChild,
                                          __RPC__deref_out_ecount_full_opt(*pdwIDStringLen) BYTE **ppIDString,
                        __RPC__out DWORD *pdwIDStringLen);
        HRESULT ( STDMETHODCALLTYPE *DecomposeHmenuIdentityString )(
            __RPC__in IAccPropServices * This,
                                __RPC__in_ecount_full(dwIDStringLen) const BYTE *pIDString,
                       DWORD dwIDStringLen,
                        __RPC__deref_out_opt HMENU *phmenu,
                        __RPC__out DWORD *pidChild);
        END_INTERFACE
    } IAccPropServicesVtbl;
    interface IAccPropServices
    {
        CONST_VTBL struct IAccPropServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPropValue(This,pIDString,dwIDStringLen,idProp,var) )
    ( (This)->lpVtbl -> SetPropServer(This,pIDString,dwIDStringLen,paProps,cProps,pServer,annoScope) )
    ( (This)->lpVtbl -> ClearProps(This,pIDString,dwIDStringLen,paProps,cProps) )
    ( (This)->lpVtbl -> SetHwndProp(This,hwnd,idObject,idChild,idProp,var) )
    ( (This)->lpVtbl -> SetHwndPropStr(This,hwnd,idObject,idChild,idProp,str) )
    ( (This)->lpVtbl -> SetHwndPropServer(This,hwnd,idObject,idChild,paProps,cProps,pServer,annoScope) )
    ( (This)->lpVtbl -> ClearHwndProps(This,hwnd,idObject,idChild,paProps,cProps) )
    ( (This)->lpVtbl -> ComposeHwndIdentityString(This,hwnd,idObject,idChild,ppIDString,pdwIDStringLen) )
    ( (This)->lpVtbl -> DecomposeHwndIdentityString(This,pIDString,dwIDStringLen,phwnd,pidObject,pidChild) )
    ( (This)->lpVtbl -> SetHmenuProp(This,hmenu,idChild,idProp,var) )
    ( (This)->lpVtbl -> SetHmenuPropStr(This,hmenu,idChild,idProp,str) )
    ( (This)->lpVtbl -> SetHmenuPropServer(This,hmenu,idChild,paProps,cProps,pServer,annoScope) )
    ( (This)->lpVtbl -> ClearHmenuProps(This,hmenu,idChild,paProps,cProps) )
    ( (This)->lpVtbl -> ComposeHmenuIdentityString(This,hmenu,idChild,ppIDString,pdwIDStringLen) )
    ( (This)->lpVtbl -> DecomposeHmenuIdentityString(This,pIDString,dwIDStringLen,phmenu,pidChild) )
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID LIBID_Accessibility;
EXTERN_C const CLSID CLSID_CAccPropServices;
class DECLSPEC_UUID("b5f8350b-0548-48b1-a6ee-88bd00b4a5e7")
CAccPropServices;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_oleacc_0000_0007_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HMENU_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * );
void __RPC_USER HMENU_UserFree( __RPC__in unsigned long *, __RPC__in HMENU * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
