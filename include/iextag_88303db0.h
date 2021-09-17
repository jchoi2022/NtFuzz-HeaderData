#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPeerFactory IPeerFactory;
typedef interface IHomePage IHomePage;
typedef interface IIntelliForms IIntelliForms;
typedef interface Iwfolders Iwfolders;
typedef interface IAnchorClick IAnchorClick;
typedef interface HTMLPersistEvents HTMLPersistEvents;
typedef interface IHTMLUserDataOM IHTMLUserDataOM;
typedef interface IHTMLPersistDataOM IHTMLPersistDataOM;
typedef interface IHTMLPersistData IHTMLPersistData;
typedef interface IDownloadBehavior IDownloadBehavior;
typedef interface LayoutRectEvents LayoutRectEvents;
typedef interface ILayoutRect ILayoutRect;
typedef interface IDeviceRect IDeviceRect;
typedef interface IHeaderFooter IHeaderFooter;
typedef interface IHeaderFooter2 IHeaderFooter2;
typedef class PeerFactory PeerFactory;
typedef class IntelliForms IntelliForms;
typedef class HomePage HomePage;
typedef class CPersistUserData CPersistUserData;
typedef class CPersistDataPeer CPersistDataPeer;
typedef class CPersistShortcut CPersistShortcut;
typedef class CPersistHistory CPersistHistory;
typedef class CPersistSnapshot CPersistSnapshot;
typedef class CDownloadBehavior CDownloadBehavior;
typedef class wfolders wfolders;
typedef class AnchorClick AnchorClick;
typedef class CLayoutRect CLayoutRect;
typedef class CDeviceRect CDeviceRect;
typedef class CHeaderFooter CHeaderFooter;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_iextag_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iextag_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPeerFactory;
    typedef struct IPeerFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPeerFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPeerFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPeerFactory * This);
        END_INTERFACE
    } IPeerFactoryVtbl;
    interface IPeerFactory
    {
        CONST_VTBL struct IPeerFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_IHomePage;
    typedef struct IHomePageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHomePage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHomePage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHomePage * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IHomePage * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IHomePage * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IHomePage * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHomePage * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *navigateHomePage )(
            __RPC__in IHomePage * This);
                   HRESULT ( STDMETHODCALLTYPE *setHomePage )(
            __RPC__in IHomePage * This,
                       __RPC__in BSTR bstrURL);
                   HRESULT ( STDMETHODCALLTYPE *isHomePage )(
            __RPC__in IHomePage * This,
                       __RPC__in BSTR bstrURL,
                                __RPC__out VARIANT_BOOL *p);
        END_INTERFACE
    } IHomePageVtbl;
    interface IHomePage
    {
        CONST_VTBL struct IHomePageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> navigateHomePage(This) )
    ( (This)->lpVtbl -> setHomePage(This,bstrURL) )
    ( (This)->lpVtbl -> isHomePage(This,bstrURL,p) )
EXTERN_C const IID IID_IIntelliForms;
    typedef struct IIntelliFormsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIntelliForms * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIntelliForms * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIntelliForms * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IIntelliForms * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IIntelliForms * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IIntelliForms * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IIntelliForms * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_enabled )(
            __RPC__in IIntelliForms * This,
                                __RPC__out VARIANT_BOOL *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_enabled )(
            __RPC__in IIntelliForms * This,
                       VARIANT_BOOL bVal);
        END_INTERFACE
    } IIntelliFormsVtbl;
    interface IIntelliForms
    {
        CONST_VTBL struct IIntelliFormsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_enabled(This,pVal) )
    ( (This)->lpVtbl -> put_enabled(This,bVal) )
EXTERN_C const IID IID_Iwfolders;
    typedef struct IwfoldersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Iwfolders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Iwfolders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Iwfolders * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Iwfolders * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Iwfolders * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Iwfolders * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Iwfolders * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *navigate )(
            __RPC__in Iwfolders * This,
                       __RPC__in BSTR bstrUrl,
                                __RPC__deref_out_opt BSTR *pbstrRetVal);
                               HRESULT ( STDMETHODCALLTYPE *navigateFrame )(
            __RPC__in Iwfolders * This,
                       __RPC__in BSTR bstrUrl,
                       __RPC__in BSTR bstrTargetFrame,
                                __RPC__deref_out_opt BSTR *pbstrRetVal);
                   HRESULT ( STDMETHODCALLTYPE *navigateNoSite )(
            __RPC__in Iwfolders * This,
                       __RPC__in BSTR bstrUrl,
                       __RPC__in BSTR bstrTargetFrame,
                       DWORD dwhwnd,
                       __RPC__in_opt IUnknown *pwb);
        END_INTERFACE
    } IwfoldersVtbl;
    interface Iwfolders
    {
        CONST_VTBL struct IwfoldersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> navigate(This,bstrUrl,pbstrRetVal) )
    ( (This)->lpVtbl -> navigateFrame(This,bstrUrl,bstrTargetFrame,pbstrRetVal) )
    ( (This)->lpVtbl -> navigateNoSite(This,bstrUrl,bstrTargetFrame,dwhwnd,pwb) )
EXTERN_C const IID IID_IAnchorClick;
    typedef struct IAnchorClickVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnchorClick * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnchorClick * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnchorClick * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAnchorClick * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAnchorClick * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAnchorClick * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAnchorClick * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ProcOnClick )(
            __RPC__in IAnchorClick * This);
        END_INTERFACE
    } IAnchorClickVtbl;
    interface IAnchorClick
    {
        CONST_VTBL struct IAnchorClickVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ProcOnClick(This) )
EXTERN_C const IID IID_IHTMLUserDataOM;
    typedef struct IHTMLUserDataOMVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHTMLUserDataOM * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHTMLUserDataOM * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IHTMLUserDataOM * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IHTMLUserDataOM * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHTMLUserDataOM * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XMLDocument )(
            __RPC__in IHTMLUserDataOM * This,
                                __RPC__deref_out_opt IDispatch **p);
                   HRESULT ( STDMETHODCALLTYPE *save )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in BSTR strName);
                   HRESULT ( STDMETHODCALLTYPE *load )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in BSTR strName);
                   HRESULT ( STDMETHODCALLTYPE *getAttribute )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pValue);
                   HRESULT ( STDMETHODCALLTYPE *setAttribute )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in BSTR name,
                       VARIANT value);
                   HRESULT ( STDMETHODCALLTYPE *removeAttribute )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *put_expires )(
            __RPC__in IHTMLUserDataOM * This,
                       __RPC__in BSTR bstr);
                            HRESULT ( STDMETHODCALLTYPE *get_expires )(
            __RPC__in IHTMLUserDataOM * This,
                                __RPC__deref_out_opt BSTR *pbstr);
        END_INTERFACE
    } IHTMLUserDataOMVtbl;
    interface IHTMLUserDataOM
    {
        CONST_VTBL struct IHTMLUserDataOMVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XMLDocument(This,p) )
    ( (This)->lpVtbl -> save(This,strName) )
    ( (This)->lpVtbl -> load(This,strName) )
    ( (This)->lpVtbl -> getAttribute(This,name,pValue) )
    ( (This)->lpVtbl -> setAttribute(This,name,value) )
    ( (This)->lpVtbl -> removeAttribute(This,name) )
    ( (This)->lpVtbl -> put_expires(This,bstr) )
    ( (This)->lpVtbl -> get_expires(This,pbstr) )
EXTERN_C const IID IID_IHTMLPersistDataOM;
    typedef struct IHTMLPersistDataOMVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHTMLPersistDataOM * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHTMLPersistDataOM * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHTMLPersistDataOM * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IHTMLPersistDataOM * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IHTMLPersistDataOM * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IHTMLPersistDataOM * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHTMLPersistDataOM * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XMLDocument )(
            __RPC__in IHTMLPersistDataOM * This,
                                __RPC__deref_out_opt IDispatch **p);
                   HRESULT ( STDMETHODCALLTYPE *getAttribute )(
            __RPC__in IHTMLPersistDataOM * This,
                       __RPC__in BSTR name,
                                __RPC__out VARIANT *pValue);
                   HRESULT ( STDMETHODCALLTYPE *setAttribute )(
            __RPC__in IHTMLPersistDataOM * This,
                       __RPC__in BSTR name,
                       VARIANT value);
                   HRESULT ( STDMETHODCALLTYPE *removeAttribute )(
            __RPC__in IHTMLPersistDataOM * This,
                       __RPC__in BSTR name);
        END_INTERFACE
    } IHTMLPersistDataOMVtbl;
    interface IHTMLPersistDataOM
    {
        CONST_VTBL struct IHTMLPersistDataOMVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XMLDocument(This,p) )
    ( (This)->lpVtbl -> getAttribute(This,name,pValue) )
    ( (This)->lpVtbl -> setAttribute(This,name,value) )
    ( (This)->lpVtbl -> removeAttribute(This,name) )
EXTERN_C const IID IID_IHTMLPersistData;
    typedef struct IHTMLPersistDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHTMLPersistData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHTMLPersistData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHTMLPersistData * This);
                   HRESULT ( STDMETHODCALLTYPE *save )(
            __RPC__in IHTMLPersistData * This,
                       __RPC__in_opt IUnknown *pUnk,
                       long lType,
                                __RPC__out VARIANT_BOOL *fContinueBroacast);
                   HRESULT ( STDMETHODCALLTYPE *load )(
            __RPC__in IHTMLPersistData * This,
                       __RPC__in_opt IUnknown *pUnk,
                       long lType,
                                __RPC__out VARIANT_BOOL *fDoDefault);
                   HRESULT ( STDMETHODCALLTYPE *queryType )(
            __RPC__in IHTMLPersistData * This,
                       long lType,
                                __RPC__out VARIANT_BOOL *pfSupportsType);
        END_INTERFACE
    } IHTMLPersistDataVtbl;
    interface IHTMLPersistData
    {
        CONST_VTBL struct IHTMLPersistDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> save(This,pUnk,lType,fContinueBroacast) )
    ( (This)->lpVtbl -> load(This,pUnk,lType,fDoDefault) )
    ( (This)->lpVtbl -> queryType(This,lType,pfSupportsType) )
EXTERN_C const IID IID_IDownloadBehavior;
    typedef struct IDownloadBehaviorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDownloadBehavior * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDownloadBehavior * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDownloadBehavior * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDownloadBehavior * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDownloadBehavior * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDownloadBehavior * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDownloadBehavior * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *startDownload )(
            __RPC__in IDownloadBehavior * This,
                       __RPC__in BSTR bstrUrl,
                       __RPC__in_opt IDispatch *pdispCallback);
        END_INTERFACE
    } IDownloadBehaviorVtbl;
    interface IDownloadBehavior
    {
        CONST_VTBL struct IDownloadBehaviorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> startDownload(This,bstrUrl,pdispCallback) )
EXTERN_C const IID IID_ILayoutRect;
    typedef struct ILayoutRectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILayoutRect * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILayoutRect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILayoutRect * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ILayoutRect * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ILayoutRect * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ILayoutRect * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ILayoutRect * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *put_nextRect )(
            __RPC__in ILayoutRect * This,
                       __RPC__in BSTR bstrElementId);
                            HRESULT ( STDMETHODCALLTYPE *get_nextRect )(
            __RPC__in ILayoutRect * This,
                                __RPC__deref_out_opt BSTR *pbstrElementId);
                            HRESULT ( STDMETHODCALLTYPE *put_contentSrc )(
            __RPC__in ILayoutRect * This,
                       VARIANT varContentSrc);
                            HRESULT ( STDMETHODCALLTYPE *get_contentSrc )(
            __RPC__in ILayoutRect * This,
                                __RPC__out VARIANT *pvarContentSrc);
                            HRESULT ( STDMETHODCALLTYPE *put_honorPageBreaks )(
            __RPC__in ILayoutRect * This,
                       VARIANT_BOOL v);
                            HRESULT ( STDMETHODCALLTYPE *get_honorPageBreaks )(
            __RPC__in ILayoutRect * This,
                                __RPC__out VARIANT_BOOL *p);
                            HRESULT ( STDMETHODCALLTYPE *put_honorPageRules )(
            __RPC__in ILayoutRect * This,
                       VARIANT_BOOL v);
                            HRESULT ( STDMETHODCALLTYPE *get_honorPageRules )(
            __RPC__in ILayoutRect * This,
                                __RPC__out VARIANT_BOOL *p);
                            HRESULT ( STDMETHODCALLTYPE *put_nextRectElement )(
            __RPC__in ILayoutRect * This,
                       __RPC__in_opt IDispatch *pElem);
                            HRESULT ( STDMETHODCALLTYPE *get_nextRectElement )(
            __RPC__in ILayoutRect * This,
                                __RPC__deref_out_opt IDispatch **ppElem);
                            HRESULT ( STDMETHODCALLTYPE *get_contentDocument )(
            __RPC__in ILayoutRect * This,
                                __RPC__deref_out_opt IDispatch **pDoc);
        END_INTERFACE
    } ILayoutRectVtbl;
    interface ILayoutRect
    {
        CONST_VTBL struct ILayoutRectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_nextRect(This,bstrElementId) )
    ( (This)->lpVtbl -> get_nextRect(This,pbstrElementId) )
    ( (This)->lpVtbl -> put_contentSrc(This,varContentSrc) )
    ( (This)->lpVtbl -> get_contentSrc(This,pvarContentSrc) )
    ( (This)->lpVtbl -> put_honorPageBreaks(This,v) )
    ( (This)->lpVtbl -> get_honorPageBreaks(This,p) )
    ( (This)->lpVtbl -> put_honorPageRules(This,v) )
    ( (This)->lpVtbl -> get_honorPageRules(This,p) )
    ( (This)->lpVtbl -> put_nextRectElement(This,pElem) )
    ( (This)->lpVtbl -> get_nextRectElement(This,ppElem) )
    ( (This)->lpVtbl -> get_contentDocument(This,pDoc) )
EXTERN_C const IID IID_IDeviceRect;
    typedef struct IDeviceRectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDeviceRect * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDeviceRect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDeviceRect * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDeviceRect * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDeviceRect * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDeviceRect * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDeviceRect * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IDeviceRectVtbl;
    interface IDeviceRect
    {
        CONST_VTBL struct IDeviceRectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IHeaderFooter;
    typedef struct IHeaderFooterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHeaderFooter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHeaderFooter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IHeaderFooter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IHeaderFooter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHeaderFooter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_htmlHead )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *get_htmlFoot )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_textHead )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_textHead )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_textFoot )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_textFoot )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_page )(
            __RPC__in IHeaderFooter * This,
                       DWORD v);
                            HRESULT ( STDMETHODCALLTYPE *get_page )(
            __RPC__in IHeaderFooter * This,
                                __RPC__out DWORD *p);
                            HRESULT ( STDMETHODCALLTYPE *put_pageTotal )(
            __RPC__in IHeaderFooter * This,
                       DWORD v);
                            HRESULT ( STDMETHODCALLTYPE *get_pageTotal )(
            __RPC__in IHeaderFooter * This,
                                __RPC__out DWORD *p);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_URL )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_title )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_title )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_dateShort )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_dateShort )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_dateLong )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_dateLong )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_timeShort )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_timeShort )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_timeLong )(
            __RPC__in IHeaderFooter * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_timeLong )(
            __RPC__in IHeaderFooter * This,
                                __RPC__deref_out_opt BSTR *p);
        END_INTERFACE
    } IHeaderFooterVtbl;
    interface IHeaderFooter
    {
        CONST_VTBL struct IHeaderFooterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_htmlHead(This,p) )
    ( (This)->lpVtbl -> get_htmlFoot(This,p) )
    ( (This)->lpVtbl -> put_textHead(This,v) )
    ( (This)->lpVtbl -> get_textHead(This,p) )
    ( (This)->lpVtbl -> put_textFoot(This,v) )
    ( (This)->lpVtbl -> get_textFoot(This,p) )
    ( (This)->lpVtbl -> put_page(This,v) )
    ( (This)->lpVtbl -> get_page(This,p) )
    ( (This)->lpVtbl -> put_pageTotal(This,v) )
    ( (This)->lpVtbl -> get_pageTotal(This,p) )
    ( (This)->lpVtbl -> put_URL(This,v) )
    ( (This)->lpVtbl -> get_URL(This,p) )
    ( (This)->lpVtbl -> put_title(This,v) )
    ( (This)->lpVtbl -> get_title(This,p) )
    ( (This)->lpVtbl -> put_dateShort(This,v) )
    ( (This)->lpVtbl -> get_dateShort(This,p) )
    ( (This)->lpVtbl -> put_dateLong(This,v) )
    ( (This)->lpVtbl -> get_dateLong(This,p) )
    ( (This)->lpVtbl -> put_timeShort(This,v) )
    ( (This)->lpVtbl -> get_timeShort(This,p) )
    ( (This)->lpVtbl -> put_timeLong(This,v) )
    ( (This)->lpVtbl -> get_timeLong(This,p) )
EXTERN_C const IID IID_IHeaderFooter2;
    typedef struct IHeaderFooter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHeaderFooter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHeaderFooter2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IHeaderFooter2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IHeaderFooter2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IHeaderFooter2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_htmlHead )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *get_htmlFoot )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_textHead )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_textHead )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_textFoot )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_textFoot )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_page )(
            __RPC__in IHeaderFooter2 * This,
                       DWORD v);
                            HRESULT ( STDMETHODCALLTYPE *get_page )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__out DWORD *p);
                            HRESULT ( STDMETHODCALLTYPE *put_pageTotal )(
            __RPC__in IHeaderFooter2 * This,
                       DWORD v);
                            HRESULT ( STDMETHODCALLTYPE *get_pageTotal )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__out DWORD *p);
                            HRESULT ( STDMETHODCALLTYPE *put_URL )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_URL )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_title )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_title )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_dateShort )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_dateShort )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_dateLong )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_dateLong )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_timeShort )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_timeShort )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_timeLong )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_timeLong )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
                            HRESULT ( STDMETHODCALLTYPE *put_font )(
            __RPC__in IHeaderFooter2 * This,
                       __RPC__in BSTR v);
                            HRESULT ( STDMETHODCALLTYPE *get_font )(
            __RPC__in IHeaderFooter2 * This,
                                __RPC__deref_out_opt BSTR *p);
        END_INTERFACE
    } IHeaderFooter2Vtbl;
    interface IHeaderFooter2
    {
        CONST_VTBL struct IHeaderFooter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_htmlHead(This,p) )
    ( (This)->lpVtbl -> get_htmlFoot(This,p) )
    ( (This)->lpVtbl -> put_textHead(This,v) )
    ( (This)->lpVtbl -> get_textHead(This,p) )
    ( (This)->lpVtbl -> put_textFoot(This,v) )
    ( (This)->lpVtbl -> get_textFoot(This,p) )
    ( (This)->lpVtbl -> put_page(This,v) )
    ( (This)->lpVtbl -> get_page(This,p) )
    ( (This)->lpVtbl -> put_pageTotal(This,v) )
    ( (This)->lpVtbl -> get_pageTotal(This,p) )
    ( (This)->lpVtbl -> put_URL(This,v) )
    ( (This)->lpVtbl -> get_URL(This,p) )
    ( (This)->lpVtbl -> put_title(This,v) )
    ( (This)->lpVtbl -> get_title(This,p) )
    ( (This)->lpVtbl -> put_dateShort(This,v) )
    ( (This)->lpVtbl -> get_dateShort(This,p) )
    ( (This)->lpVtbl -> put_dateLong(This,v) )
    ( (This)->lpVtbl -> get_dateLong(This,p) )
    ( (This)->lpVtbl -> put_timeShort(This,v) )
    ( (This)->lpVtbl -> get_timeShort(This,p) )
    ( (This)->lpVtbl -> put_timeLong(This,v) )
    ( (This)->lpVtbl -> get_timeLong(This,p) )
    ( (This)->lpVtbl -> put_font(This,v) )
    ( (This)->lpVtbl -> get_font(This,p) )
EXTERN_C const IID LIBID_IEXTagLib;
EXTERN_C const CLSID CLSID_PeerFactory;
class DECLSPEC_UUID("3050F4CF-98B5-11CF-BB82-00AA00BDCE0B")
PeerFactory;
EXTERN_C const CLSID CLSID_IntelliForms;
class DECLSPEC_UUID("613AB92E-16BF-11d2-BCA5-00C04FD929DB")
IntelliForms;
EXTERN_C const CLSID CLSID_HomePage;
class DECLSPEC_UUID("766BF2AE-D650-11d1-9811-00C04FC31D2E")
HomePage;
EXTERN_C const CLSID CLSID_CPersistUserData;
class DECLSPEC_UUID("3050f48e-98b5-11cf-bb82-00aa00bdce0b")
CPersistUserData;
EXTERN_C const CLSID CLSID_CPersistDataPeer;
class DECLSPEC_UUID("3050f487-98b5-11cf-bb82-00aa00bdce0b")
CPersistDataPeer;
EXTERN_C const CLSID CLSID_CPersistShortcut;
class DECLSPEC_UUID("3050f4c6-98b5-11cf-bb82-00aa00bdce0b")
CPersistShortcut;
EXTERN_C const CLSID CLSID_CPersistHistory;
class DECLSPEC_UUID("3050f4c8-98b5-11cf-bb82-00aa00bdce0b")
CPersistHistory;
EXTERN_C const CLSID CLSID_CPersistSnapshot;
class DECLSPEC_UUID("3050f4c9-98b5-11cf-bb82-00aa00bdce0b")
CPersistSnapshot;
EXTERN_C const CLSID CLSID_CDownloadBehavior;
class DECLSPEC_UUID("3050f5be-98b5-11cf-bb82-00aa00bdce0b")
CDownloadBehavior;
EXTERN_C const CLSID CLSID_wfolders;
class DECLSPEC_UUID("BAE31F9A-1B81-11D2-A97A-00C04F8ECB02")
wfolders;
EXTERN_C const CLSID CLSID_AnchorClick;
class DECLSPEC_UUID("13D5413C-33B9-11D2-95A7-00C04F8ECB02")
AnchorClick;
EXTERN_C const CLSID CLSID_CLayoutRect;
class DECLSPEC_UUID("3050f664-98b5-11cf-bb82-00aa00bdce0b")
CLayoutRect;
EXTERN_C const CLSID CLSID_CDeviceRect;
class DECLSPEC_UUID("3050f6d4-98b5-11cf-bb82-00aa00bdce0b")
CDeviceRect;
EXTERN_C const CLSID CLSID_CHeaderFooter;
class DECLSPEC_UUID("3050f6cd-98b5-11cf-bb82-00aa00bdce0b")
CHeaderFooter;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_iextag_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iextag_0000_0016_v0_0_s_ifspec;
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
