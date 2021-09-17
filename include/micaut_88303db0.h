#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMathInputControl IMathInputControl;
typedef interface _IMathInputControlEvents _IMathInputControlEvents;
typedef class MathInputControl MathInputControl;
#include "oaidl.h"
#include "ocidl.h"
#include "msinkaut.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DECLSPEC_UUID("D7803AF6-B018-4a42-AE48-B2D2319BCB05")
enum __MIDL___MIDL_itf_micaut_0000_0000_0001
    {
        MICUIELEMENT_BUTTON_WRITE = ( 1 << 0 ) ,
        MICUIELEMENT_BUTTON_ERASE = ( 1 << 1 ) ,
        MICUIELEMENT_BUTTON_CORRECT = ( 1 << 2 ) ,
        MICUIELEMENT_BUTTON_CLEAR = ( 1 << 3 ) ,
        MICUIELEMENT_BUTTON_UNDO = ( 1 << 4 ) ,
        MICUIELEMENT_BUTTON_REDO = ( 1 << 5 ) ,
        MICUIELEMENT_BUTTON_INSERT = ( 1 << 6 ) ,
        MICUIELEMENT_BUTTON_CANCEL = ( 1 << 7 ) ,
        MICUIELEMENT_INKPANEL_BACKGROUND = ( 1 << 8 ) ,
        MICUIELEMENT_RESULTPANEL_BACKGROUND = ( 1 << 9 )
    } MICUIELEMENT;
typedef DECLSPEC_UUID("117F1516-9539-4e26-9CCF-CD7511AE9BF1")
enum __MIDL___MIDL_itf_micaut_0000_0000_0002
    {
        MICUIELEMENTSTATE_NORMAL = 1,
        MICUIELEMENTSTATE_HOT = ( MICUIELEMENTSTATE_NORMAL + 1 ) ,
        MICUIELEMENTSTATE_PRESSED = ( MICUIELEMENTSTATE_HOT + 1 ) ,
        MICUIELEMENTSTATE_DISABLED = ( MICUIELEMENTSTATE_PRESSED + 1 )
    } MICUIELEMENTSTATE;
typedef
enum DISPID_MathInputControlEvents
    {
        DISPID_MICInsert = 0,
        DISPID_MICClose = ( DISPID_MICInsert + 1 ) ,
        DISPID_MICPaint = ( DISPID_MICClose + 1 ) ,
        DISPID_MICClear = ( DISPID_MICPaint + 1 )
    } DISPID_MathInputControlEvents;
extern RPC_IF_HANDLE __MIDL_itf_micaut_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_micaut_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMathInputControl;
    typedef struct IMathInputControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMathInputControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMathInputControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMathInputControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMathInputControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMathInputControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMathInputControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMathInputControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IMathInputControl * This);
                               HRESULT ( STDMETHODCALLTYPE *Hide )(
            __RPC__in IMathInputControl * This);
                               HRESULT ( STDMETHODCALLTYPE *IsVisible )(
            __RPC__in IMathInputControl * This,
                        __RPC__out VARIANT_BOOL *pvbShown);
                               HRESULT ( STDMETHODCALLTYPE *GetPosition )(
            __RPC__in IMathInputControl * This,
                        __RPC__out LONG *Left,
                        __RPC__out LONG *Top,
                        __RPC__out LONG *Right,
                        __RPC__out LONG *Bottom);
                               HRESULT ( STDMETHODCALLTYPE *SetPosition )(
            __RPC__in IMathInputControl * This,
                       LONG Left,
                       LONG Top,
                       LONG Right,
                       LONG Bottom);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IMathInputControl * This);
                               HRESULT ( STDMETHODCALLTYPE *SetCustomPaint )(
            __RPC__in IMathInputControl * This,
                       LONG Element,
                       VARIANT_BOOL Paint);
                               HRESULT ( STDMETHODCALLTYPE *SetCaptionText )(
            __RPC__in IMathInputControl * This,
                       __RPC__in BSTR CaptionText);
                               HRESULT ( STDMETHODCALLTYPE *LoadInk )(
            __RPC__in IMathInputControl * This,
                       __RPC__in_opt IInkDisp *Ink);
                               HRESULT ( STDMETHODCALLTYPE *SetOwnerWindow )(
            __RPC__in IMathInputControl * This,
                       LONG_PTR OwnerWindow);
                               HRESULT ( STDMETHODCALLTYPE *EnableExtendedButtons )(
            __RPC__in IMathInputControl * This,
                       VARIANT_BOOL Extended);
                               HRESULT ( STDMETHODCALLTYPE *GetPreviewHeight )(
            __RPC__in IMathInputControl * This,
                        __RPC__out LONG *Height);
                               HRESULT ( STDMETHODCALLTYPE *SetPreviewHeight )(
            __RPC__in IMathInputControl * This,
                       LONG Height);
                               HRESULT ( STDMETHODCALLTYPE *EnableAutoGrow )(
            __RPC__in IMathInputControl * This,
                       VARIANT_BOOL AutoGrow);
                               HRESULT ( STDMETHODCALLTYPE *AddFunctionName )(
            __RPC__in IMathInputControl * This,
                       __RPC__in BSTR FunctionName);
                               HRESULT ( STDMETHODCALLTYPE *RemoveFunctionName )(
            __RPC__in IMathInputControl * This,
                       __RPC__in BSTR FunctionName);
                               HRESULT ( STDMETHODCALLTYPE *GetHoverIcon )(
            __RPC__in IMathInputControl * This,
                        __RPC__deref_out_opt IPictureDisp **HoverImage);
        END_INTERFACE
    } IMathInputControlVtbl;
    interface IMathInputControl
    {
        CONST_VTBL struct IMathInputControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Show(This) )
    ( (This)->lpVtbl -> Hide(This) )
    ( (This)->lpVtbl -> IsVisible(This,pvbShown) )
    ( (This)->lpVtbl -> GetPosition(This,Left,Top,Right,Bottom) )
    ( (This)->lpVtbl -> SetPosition(This,Left,Top,Right,Bottom) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> SetCustomPaint(This,Element,Paint) )
    ( (This)->lpVtbl -> SetCaptionText(This,CaptionText) )
    ( (This)->lpVtbl -> LoadInk(This,Ink) )
    ( (This)->lpVtbl -> SetOwnerWindow(This,OwnerWindow) )
    ( (This)->lpVtbl -> EnableExtendedButtons(This,Extended) )
    ( (This)->lpVtbl -> GetPreviewHeight(This,Height) )
    ( (This)->lpVtbl -> SetPreviewHeight(This,Height) )
    ( (This)->lpVtbl -> EnableAutoGrow(This,AutoGrow) )
    ( (This)->lpVtbl -> AddFunctionName(This,FunctionName) )
    ( (This)->lpVtbl -> RemoveFunctionName(This,FunctionName) )
    ( (This)->lpVtbl -> GetHoverIcon(This,HoverImage) )
EXTERN_C const IID LIBID_micautLib;
EXTERN_C const IID DIID__IMathInputControlEvents;
    typedef struct _IMathInputControlEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IMathInputControlEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IMathInputControlEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IMathInputControlEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IMathInputControlEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IMathInputControlEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IMathInputControlEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IMathInputControlEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IMathInputControlEventsVtbl;
    interface _IMathInputControlEvents
    {
        CONST_VTBL struct _IMathInputControlEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_MathInputControl;
class DECLSPEC_UUID("C561816C-14D8-4090-830C-98D994B21C7B")
MathInputControl;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_micaut_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_micaut_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
