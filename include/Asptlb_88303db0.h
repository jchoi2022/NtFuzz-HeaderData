#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IStringList IStringList;
typedef interface IRequestDictionary IRequestDictionary;
typedef interface IRequest IRequest;
typedef class Request Request;
typedef interface IReadCookie IReadCookie;
typedef interface IWriteCookie IWriteCookie;
typedef interface IResponse IResponse;
typedef class Response Response;
typedef interface IVariantDictionary IVariantDictionary;
typedef interface ISessionObject ISessionObject;
typedef class Session Session;
typedef interface IApplicationObject IApplicationObject;
typedef class Application Application;
typedef interface IASPError IASPError;
typedef interface IServer IServer;
typedef class Server Server;
typedef interface IScriptingContext IScriptingContext;
typedef class ScriptingContext ScriptingContext;
extern "C"{
DEFINE_GUID(LIBID_ASPTypeLibrary,0xD97A6DA0,0xA85C,0x11cf,0x83,0xAE,0x00,0xA0,0xC9,0x0C,0x2B,0xD8);
DEFINE_GUID(IID_IStringList,0xD97A6DA0,0xA85D,0x11cf,0x83,0xAE,0x00,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IStringListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStringList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStringList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStringList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IStringList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IStringList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IStringList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IStringList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IStringList * This,
                                 VARIANT i,
                                __RPC__out VARIANT *pVariantReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IStringList * This,
                                __RPC__out int *cStrRet);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IStringList * This,
                                __RPC__deref_out_opt IUnknown **ppEnumReturn);
        END_INTERFACE
    } IStringListVtbl;
    interface IStringList
    {
        CONST_VTBL struct IStringListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,i,pVariantReturn) )
    ( (This)->lpVtbl -> get_Count(This,cStrRet) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
DEFINE_GUID(IID_IRequestDictionary,0xD97A6DA0,0xA85F,0x11df,0x83,0xAE,0x00,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IRequestDictionaryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRequestDictionary * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRequestDictionary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRequestDictionary * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRequestDictionary * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRequestDictionary * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRequestDictionary * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRequestDictionary * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRequestDictionary * This,
                                 VARIANT Var,
                                __RPC__out VARIANT *pVariantReturn);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IRequestDictionary * This,
                                __RPC__deref_out_opt IUnknown **ppEnumReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IRequestDictionary * This,
                                __RPC__out int *cStrRet);
                        HRESULT ( STDMETHODCALLTYPE *get_Key )(
            __RPC__in IRequestDictionary * This,
                       VARIANT VarKey,
                                __RPC__out VARIANT *pvar);
        END_INTERFACE
    } IRequestDictionaryVtbl;
    interface IRequestDictionary
    {
        CONST_VTBL struct IRequestDictionaryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Var,pVariantReturn) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
    ( (This)->lpVtbl -> get_Count(This,cStrRet) )
    ( (This)->lpVtbl -> get_Key(This,VarKey,pvar) )
DEFINE_GUID(IID_IRequest,0xD97A6DA0,0xA861,0x11cf,0x93,0xAE,0x00,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IRequest * This,
                       __RPC__in BSTR bstrVar,
                                __RPC__deref_out_opt IDispatch **ppObjReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_QueryString )(
            __RPC__in IRequest * This,
                                __RPC__deref_out_opt IRequestDictionary **ppDictReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_Form )(
            __RPC__in IRequest * This,
                                __RPC__deref_out_opt IRequestDictionary **ppDictReturn);
                                HRESULT ( STDMETHODCALLTYPE *get_Body )(
            __RPC__in IRequest * This,
                                __RPC__deref_out_opt IRequestDictionary **ppDictReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_ServerVariables )(
            __RPC__in IRequest * This,
                                __RPC__deref_out_opt IRequestDictionary **ppDictReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_ClientCertificate )(
            __RPC__in IRequest * This,
                                __RPC__deref_out_opt IRequestDictionary **ppDictReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_Cookies )(
            __RPC__in IRequest * This,
                                __RPC__deref_out_opt IRequestDictionary **ppDictReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_TotalBytes )(
            __RPC__in IRequest * This,
                                __RPC__out long *pcbTotal);
                           HRESULT ( STDMETHODCALLTYPE *BinaryRead )(
            __RPC__in IRequest * This,
                            __RPC__inout VARIANT *pvarCountToRead,
                                __RPC__out VARIANT *pvarReturn);
        END_INTERFACE
    } IRequestVtbl;
    interface IRequest
    {
        CONST_VTBL struct IRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,bstrVar,ppObjReturn) )
    ( (This)->lpVtbl -> get_QueryString(This,ppDictReturn) )
    ( (This)->lpVtbl -> get_Form(This,ppDictReturn) )
    ( (This)->lpVtbl -> get_Body(This,ppDictReturn) )
    ( (This)->lpVtbl -> get_ServerVariables(This,ppDictReturn) )
    ( (This)->lpVtbl -> get_ClientCertificate(This,ppDictReturn) )
    ( (This)->lpVtbl -> get_Cookies(This,ppDictReturn) )
    ( (This)->lpVtbl -> get_TotalBytes(This,pcbTotal) )
    ( (This)->lpVtbl -> BinaryRead(This,pvarCountToRead,pvarReturn) )
DEFINE_GUID(CLSID_Request,0x920c25d0,0x25d9,0x11d0,0xa5,0x5f,0x00,0xa0,0xc9,0x0c,0x20,0x91);
class DECLSPEC_UUID("920c25d0-25d9-11d0-a55f-00a0c90c2091")
Request;
DEFINE_GUID(IID_IReadCookie,0x71EAF260,0x0CE0,0x11D0,0xA5,0x3E,0x00,0xA0,0xC9,0x0C,0x20,0x91);
    typedef struct IReadCookieVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IReadCookie * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IReadCookie * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IReadCookie * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IReadCookie * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IReadCookie * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IReadCookie * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IReadCookie * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IReadCookie * This,
                                 VARIANT Var,
                                __RPC__out VARIANT *pVariantReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_HasKeys )(
            __RPC__in IReadCookie * This,
                                __RPC__out VARIANT_BOOL *pfHasKeys);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IReadCookie * This,
                                __RPC__deref_out_opt IUnknown **ppEnumReturn);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IReadCookie * This,
                                __RPC__out int *cStrRet);
                        HRESULT ( STDMETHODCALLTYPE *get_Key )(
            __RPC__in IReadCookie * This,
                       VARIANT VarKey,
                                __RPC__out VARIANT *pvar);
        END_INTERFACE
    } IReadCookieVtbl;
    interface IReadCookie
    {
        CONST_VTBL struct IReadCookieVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Var,pVariantReturn) )
    ( (This)->lpVtbl -> get_HasKeys(This,pfHasKeys) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
    ( (This)->lpVtbl -> get_Count(This,cStrRet) )
    ( (This)->lpVtbl -> get_Key(This,VarKey,pvar) )
DEFINE_GUID(IID_IWriteCookie,0xD97A6DA0,0xA862,0x11cf,0x84,0xAE,0x00,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IWriteCookieVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWriteCookie * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWriteCookie * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWriteCookie * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWriteCookie * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWriteCookie * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWriteCookie * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWriteCookie * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *put_Item )(
            __RPC__in IWriteCookie * This,
                                 VARIANT key,
                       __RPC__in BSTR bstrValue);
                                    HRESULT ( STDMETHODCALLTYPE *put_Expires )(
            __RPC__in IWriteCookie * This,
                       DATE dtExpires);
                                    HRESULT ( STDMETHODCALLTYPE *put_Domain )(
            __RPC__in IWriteCookie * This,
                       __RPC__in BSTR bstrDomain);
                                    HRESULT ( STDMETHODCALLTYPE *put_Path )(
            __RPC__in IWriteCookie * This,
                       __RPC__in BSTR bstrPath);
                                    HRESULT ( STDMETHODCALLTYPE *put_Secure )(
            __RPC__in IWriteCookie * This,
                       VARIANT_BOOL fSecure);
                                    HRESULT ( STDMETHODCALLTYPE *get_HasKeys )(
            __RPC__in IWriteCookie * This,
                                __RPC__out VARIANT_BOOL *pfHasKeys);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IWriteCookie * This,
                                __RPC__deref_out_opt IUnknown **ppEnumReturn);
        END_INTERFACE
    } IWriteCookieVtbl;
    interface IWriteCookie
    {
        CONST_VTBL struct IWriteCookieVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_Item(This,key,bstrValue) )
    ( (This)->lpVtbl -> put_Expires(This,dtExpires) )
    ( (This)->lpVtbl -> put_Domain(This,bstrDomain) )
    ( (This)->lpVtbl -> put_Path(This,bstrPath) )
    ( (This)->lpVtbl -> put_Secure(This,fSecure) )
    ( (This)->lpVtbl -> get_HasKeys(This,pfHasKeys) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
DEFINE_GUID(IID_IResponse,0xD97A6DA0,0xA864,0x11cf,0x83,0xBE,0x00,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IResponseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResponse * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResponse * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResponse * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IResponse * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IResponse * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IResponse * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IResponse * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Buffer )(
            __RPC__in IResponse * This,
                                __RPC__out VARIANT_BOOL *fIsBuffering);
                        HRESULT ( STDMETHODCALLTYPE *put_Buffer )(
            __RPC__in IResponse * This,
                       VARIANT_BOOL fIsBuffering);
                                    HRESULT ( STDMETHODCALLTYPE *get_ContentType )(
            __RPC__in IResponse * This,
                                __RPC__deref_out_opt BSTR *pbstrContentTypeRet);
                        HRESULT ( STDMETHODCALLTYPE *put_ContentType )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrContentType);
                                    HRESULT ( STDMETHODCALLTYPE *get_Expires )(
            __RPC__in IResponse * This,
                                __RPC__out VARIANT *pvarExpiresMinutesRet);
                        HRESULT ( STDMETHODCALLTYPE *put_Expires )(
            __RPC__in IResponse * This,
                       long lExpiresMinutes);
                                    HRESULT ( STDMETHODCALLTYPE *get_ExpiresAbsolute )(
            __RPC__in IResponse * This,
                                __RPC__out VARIANT *pvarExpiresRet);
                        HRESULT ( STDMETHODCALLTYPE *put_ExpiresAbsolute )(
            __RPC__in IResponse * This,
                       DATE dtExpires);
                                    HRESULT ( STDMETHODCALLTYPE *get_Cookies )(
            __RPC__in IResponse * This,
                                __RPC__deref_out_opt IRequestDictionary **ppCookies);
                                    HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IResponse * This,
                                __RPC__deref_out_opt BSTR *pbstrStatusRet);
                        HRESULT ( STDMETHODCALLTYPE *put_Status )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrStatus);
                       HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrHeaderValue,
                       __RPC__in BSTR bstrHeaderName);
                           HRESULT ( STDMETHODCALLTYPE *AddHeader )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrHeaderName,
                       __RPC__in BSTR bstrHeaderValue);
                           HRESULT ( STDMETHODCALLTYPE *AppendToLog )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrLogEntry);
                           HRESULT ( STDMETHODCALLTYPE *BinaryWrite )(
            __RPC__in IResponse * This,
                       VARIANT varInput);
                           HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IResponse * This);
                           HRESULT ( STDMETHODCALLTYPE *End )(
            __RPC__in IResponse * This);
                           HRESULT ( STDMETHODCALLTYPE *Flush )(
            __RPC__in IResponse * This);
                           HRESULT ( STDMETHODCALLTYPE *Redirect )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrURL);
                           HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in IResponse * This,
                       VARIANT varText);
                       HRESULT ( STDMETHODCALLTYPE *WriteBlock )(
            __RPC__in IResponse * This,
                       short iBlockNumber);
                           HRESULT ( STDMETHODCALLTYPE *IsClientConnected )(
            __RPC__in IResponse * This,
                                __RPC__out VARIANT_BOOL *pfIsClientConnected);
                                    HRESULT ( STDMETHODCALLTYPE *get_CharSet )(
            __RPC__in IResponse * This,
                                __RPC__deref_out_opt BSTR *pbstrCharSetRet);
                        HRESULT ( STDMETHODCALLTYPE *put_CharSet )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrCharSet);
                           HRESULT ( STDMETHODCALLTYPE *Pics )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrHeaderValue);
                                    HRESULT ( STDMETHODCALLTYPE *get_CacheControl )(
            __RPC__in IResponse * This,
                                __RPC__deref_out_opt BSTR *pbstrCacheControl);
                        HRESULT ( STDMETHODCALLTYPE *put_CacheControl )(
            __RPC__in IResponse * This,
                       __RPC__in BSTR bstrCacheControl);
                                    HRESULT ( STDMETHODCALLTYPE *get_CodePage )(
            __RPC__in IResponse * This,
                                __RPC__out long *plvar);
                        HRESULT ( STDMETHODCALLTYPE *put_CodePage )(
            __RPC__in IResponse * This,
                       long lvar);
                                    HRESULT ( STDMETHODCALLTYPE *get_LCID )(
            __RPC__in IResponse * This,
                                __RPC__out long *plvar);
                        HRESULT ( STDMETHODCALLTYPE *put_LCID )(
            __RPC__in IResponse * This,
                       long lvar);
        END_INTERFACE
    } IResponseVtbl;
    interface IResponse
    {
        CONST_VTBL struct IResponseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Buffer(This,fIsBuffering) )
    ( (This)->lpVtbl -> put_Buffer(This,fIsBuffering) )
    ( (This)->lpVtbl -> get_ContentType(This,pbstrContentTypeRet) )
    ( (This)->lpVtbl -> put_ContentType(This,bstrContentType) )
    ( (This)->lpVtbl -> get_Expires(This,pvarExpiresMinutesRet) )
    ( (This)->lpVtbl -> put_Expires(This,lExpiresMinutes) )
    ( (This)->lpVtbl -> get_ExpiresAbsolute(This,pvarExpiresRet) )
    ( (This)->lpVtbl -> put_ExpiresAbsolute(This,dtExpires) )
    ( (This)->lpVtbl -> get_Cookies(This,ppCookies) )
    ( (This)->lpVtbl -> get_Status(This,pbstrStatusRet) )
    ( (This)->lpVtbl -> put_Status(This,bstrStatus) )
    ( (This)->lpVtbl -> Add(This,bstrHeaderValue,bstrHeaderName) )
    ( (This)->lpVtbl -> AddHeader(This,bstrHeaderName,bstrHeaderValue) )
    ( (This)->lpVtbl -> AppendToLog(This,bstrLogEntry) )
    ( (This)->lpVtbl -> BinaryWrite(This,varInput) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> End(This) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> Redirect(This,bstrURL) )
    ( (This)->lpVtbl -> Write(This,varText) )
    ( (This)->lpVtbl -> WriteBlock(This,iBlockNumber) )
    ( (This)->lpVtbl -> IsClientConnected(This,pfIsClientConnected) )
    ( (This)->lpVtbl -> get_CharSet(This,pbstrCharSetRet) )
    ( (This)->lpVtbl -> put_CharSet(This,bstrCharSet) )
    ( (This)->lpVtbl -> Pics(This,bstrHeaderValue) )
    ( (This)->lpVtbl -> get_CacheControl(This,pbstrCacheControl) )
    ( (This)->lpVtbl -> put_CacheControl(This,bstrCacheControl) )
    ( (This)->lpVtbl -> get_CodePage(This,plvar) )
    ( (This)->lpVtbl -> put_CodePage(This,lvar) )
    ( (This)->lpVtbl -> get_LCID(This,plvar) )
    ( (This)->lpVtbl -> put_LCID(This,lvar) )
DEFINE_GUID(CLSID_Response,0x46E19BA0,0x25DD,0x11D0,0xA5,0x5F,0x00,0xA0,0xC9,0x0C,0x20,0x91);
class DECLSPEC_UUID("46E19BA0-25DD-11D0-A55F-00A0C90C2091")
Response;
DEFINE_GUID(IID_IVariantDictionary,0x4a7deb90,0xb069,0x11d0,0xb3,0x73,0x00,0xa0,0xc9,0x0c,0x2b,0xd8);
    typedef struct IVariantDictionaryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVariantDictionary * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVariantDictionary * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVariantDictionary * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IVariantDictionary * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IVariantDictionary * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IVariantDictionary * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVariantDictionary * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IVariantDictionary * This,
                       VARIANT VarKey,
                                __RPC__out VARIANT *pvar);
                            HRESULT ( STDMETHODCALLTYPE *put_Item )(
            __RPC__in IVariantDictionary * This,
                       VARIANT VarKey,
                       VARIANT var);
                               HRESULT ( STDMETHODCALLTYPE *putref_Item )(
            __RPC__in IVariantDictionary * This,
                       VARIANT VarKey,
                       VARIANT var);
                        HRESULT ( STDMETHODCALLTYPE *get_Key )(
            __RPC__in IVariantDictionary * This,
                       VARIANT VarKey,
                                __RPC__out VARIANT *pvar);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IVariantDictionary * This,
                                __RPC__out int *cStrRet);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IVariantDictionary * This,
                                __RPC__deref_out_opt IUnknown **ppEnumReturn);
                           HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IVariantDictionary * This,
                       VARIANT VarKey);
                           HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
            __RPC__in IVariantDictionary * This);
        END_INTERFACE
    } IVariantDictionaryVtbl;
    interface IVariantDictionary
    {
        CONST_VTBL struct IVariantDictionaryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,VarKey,pvar) )
    ( (This)->lpVtbl -> put_Item(This,VarKey,var) )
    ( (This)->lpVtbl -> putref_Item(This,VarKey,var) )
    ( (This)->lpVtbl -> get_Key(This,VarKey,pvar) )
    ( (This)->lpVtbl -> get_Count(This,cStrRet) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumReturn) )
    ( (This)->lpVtbl -> Remove(This,VarKey) )
    ( (This)->lpVtbl -> RemoveAll(This) )
DEFINE_GUID(IID_ISessionObject,0xD97A6DA0,0xA865,0x11cf,0x83,0xAF,0x00,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct ISessionObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISessionObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISessionObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISessionObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISessionObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISessionObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISessionObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISessionObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_SessionID )(
            __RPC__in ISessionObject * This,
                                __RPC__deref_out_opt BSTR *pbstrRet);
                            HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ISessionObject * This,
                       __RPC__in BSTR bstrValue,
                                __RPC__out VARIANT *pvar);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ISessionObject * This,
                       __RPC__in BSTR bstrValue,
                       VARIANT var);
                               HRESULT ( STDMETHODCALLTYPE *putref_Value )(
            __RPC__in ISessionObject * This,
                       __RPC__in BSTR bstrValue,
                       VARIANT var);
                                    HRESULT ( STDMETHODCALLTYPE *get_Timeout )(
            __RPC__in ISessionObject * This,
                                __RPC__out long *plvar);
                        HRESULT ( STDMETHODCALLTYPE *put_Timeout )(
            __RPC__in ISessionObject * This,
                       long lvar);
                           HRESULT ( STDMETHODCALLTYPE *Abandon )(
            __RPC__in ISessionObject * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_CodePage )(
            __RPC__in ISessionObject * This,
                                __RPC__out long *plvar);
                        HRESULT ( STDMETHODCALLTYPE *put_CodePage )(
            __RPC__in ISessionObject * This,
                       long lvar);
                                    HRESULT ( STDMETHODCALLTYPE *get_LCID )(
            __RPC__in ISessionObject * This,
                                __RPC__out long *plvar);
                        HRESULT ( STDMETHODCALLTYPE *put_LCID )(
            __RPC__in ISessionObject * This,
                       long lvar);
                                    HRESULT ( STDMETHODCALLTYPE *get_StaticObjects )(
            __RPC__in ISessionObject * This,
                                __RPC__deref_out_opt IVariantDictionary **ppTaggedObjects);
                                    HRESULT ( STDMETHODCALLTYPE *get_Contents )(
            __RPC__in ISessionObject * This,
                                __RPC__deref_out_opt IVariantDictionary **ppProperties);
        END_INTERFACE
    } ISessionObjectVtbl;
    interface ISessionObject
    {
        CONST_VTBL struct ISessionObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_SessionID(This,pbstrRet) )
    ( (This)->lpVtbl -> get_Value(This,bstrValue,pvar) )
    ( (This)->lpVtbl -> put_Value(This,bstrValue,var) )
    ( (This)->lpVtbl -> putref_Value(This,bstrValue,var) )
    ( (This)->lpVtbl -> get_Timeout(This,plvar) )
    ( (This)->lpVtbl -> put_Timeout(This,lvar) )
    ( (This)->lpVtbl -> Abandon(This) )
    ( (This)->lpVtbl -> get_CodePage(This,plvar) )
    ( (This)->lpVtbl -> put_CodePage(This,lvar) )
    ( (This)->lpVtbl -> get_LCID(This,plvar) )
    ( (This)->lpVtbl -> put_LCID(This,lvar) )
    ( (This)->lpVtbl -> get_StaticObjects(This,ppTaggedObjects) )
    ( (This)->lpVtbl -> get_Contents(This,ppProperties) )
DEFINE_GUID(CLSID_Session,0x509F8F20,0x25DE,0x11D0,0xA5,0x5F,0x00,0xA0,0xC9,0x0C,0x20,0x91);
class DECLSPEC_UUID("509F8F20-25DE-11D0-A55F-00A0C90C2091")
Session;
DEFINE_GUID(IID_IApplicationObject,0xD97A6DA0,0xA866,0x11cf,0x83,0xAE,0x10,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IApplicationObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IApplicationObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IApplicationObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IApplicationObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IApplicationObject * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IApplicationObject * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IApplicationObject * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IApplicationObject * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IApplicationObject * This,
                       __RPC__in BSTR bstrValue,
                                __RPC__out VARIANT *pvar);
                            HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IApplicationObject * This,
                       __RPC__in BSTR bstrValue,
                       VARIANT var);
                               HRESULT ( STDMETHODCALLTYPE *putref_Value )(
            __RPC__in IApplicationObject * This,
                       __RPC__in BSTR bstrValue,
                       VARIANT var);
                           HRESULT ( STDMETHODCALLTYPE *Lock )(
            __RPC__in IApplicationObject * This);
                           HRESULT ( STDMETHODCALLTYPE *UnLock )(
            __RPC__in IApplicationObject * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_StaticObjects )(
            __RPC__in IApplicationObject * This,
                                __RPC__deref_out_opt IVariantDictionary **ppProperties);
                                    HRESULT ( STDMETHODCALLTYPE *get_Contents )(
            __RPC__in IApplicationObject * This,
                                __RPC__deref_out_opt IVariantDictionary **ppProperties);
        END_INTERFACE
    } IApplicationObjectVtbl;
    interface IApplicationObject
    {
        CONST_VTBL struct IApplicationObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,bstrValue,pvar) )
    ( (This)->lpVtbl -> put_Value(This,bstrValue,var) )
    ( (This)->lpVtbl -> putref_Value(This,bstrValue,var) )
    ( (This)->lpVtbl -> Lock(This) )
    ( (This)->lpVtbl -> UnLock(This) )
    ( (This)->lpVtbl -> get_StaticObjects(This,ppProperties) )
    ( (This)->lpVtbl -> get_Contents(This,ppProperties) )
DEFINE_GUID(CLSID_Application,0x7C3BAF00,0x25DE,0x11D0,0xA5,0x5F,0x00,0xA0,0xC9,0x0C,0x20,0x91);
class DECLSPEC_UUID("7C3BAF00-25DE-11D0-A55F-00A0C90C2091")
Application;
DEFINE_GUID(IID_IASPError,0xF5A6893E,0xA0F5,0x11d1,0x8C,0x4B,0x00,0xC0,0x4F,0xC3,0x24,0xA4);
    typedef struct IASPErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IASPError * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IASPError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IASPError * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IASPError * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IASPError * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IASPError * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IASPError * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_ASPCode )(
            __RPC__in IASPError * This,
                                __RPC__deref_out_opt BSTR *pbstrASPCode);
                                    HRESULT ( STDMETHODCALLTYPE *get_Number )(
            __RPC__in IASPError * This,
                                __RPC__out long *plNumber);
                                    HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IASPError * This,
                                __RPC__deref_out_opt BSTR *pbstrSource);
                                    HRESULT ( STDMETHODCALLTYPE *get_File )(
            __RPC__in IASPError * This,
                                __RPC__deref_out_opt BSTR *pbstrFileName);
                                    HRESULT ( STDMETHODCALLTYPE *get_Line )(
            __RPC__in IASPError * This,
                                __RPC__out long *plLineNumber);
                                    HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IASPError * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                                    HRESULT ( STDMETHODCALLTYPE *get_ASPDescription )(
            __RPC__in IASPError * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                                    HRESULT ( STDMETHODCALLTYPE *get_Column )(
            __RPC__in IASPError * This,
                                __RPC__out long *plColumn);
                                    HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in IASPError * This,
                                __RPC__deref_out_opt BSTR *pbstrLineText);
        END_INTERFACE
    } IASPErrorVtbl;
    interface IASPError
    {
        CONST_VTBL struct IASPErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ASPCode(This,pbstrASPCode) )
    ( (This)->lpVtbl -> get_Number(This,plNumber) )
    ( (This)->lpVtbl -> get_Category(This,pbstrSource) )
    ( (This)->lpVtbl -> get_File(This,pbstrFileName) )
    ( (This)->lpVtbl -> get_Line(This,plLineNumber) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> get_ASPDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> get_Column(This,plColumn) )
    ( (This)->lpVtbl -> get_Source(This,pbstrLineText) )
DEFINE_GUID(IID_IServer,0xD97A6DA0,0xA867,0x11cf,0x83,0xAE,0x01,0xA0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IServerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IServer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IServer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IServer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IServer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_ScriptTimeout )(
            __RPC__in IServer * This,
                                __RPC__out long *plTimeoutSeconds);
                        HRESULT ( STDMETHODCALLTYPE *put_ScriptTimeout )(
            __RPC__in IServer * This,
                       long lTimeoutSeconds);
                           HRESULT ( STDMETHODCALLTYPE *CreateObject )(
            __RPC__in IServer * This,
                       __RPC__in BSTR bstrProgID,
                                __RPC__deref_out_opt IDispatch **ppDispObject);
                           HRESULT ( STDMETHODCALLTYPE *HTMLEncode )(
            __RPC__in IServer * This,
                       __RPC__in BSTR bstrIn,
                                __RPC__deref_out_opt BSTR *pbstrEncoded);
                           HRESULT ( STDMETHODCALLTYPE *MapPath )(
            __RPC__in IServer * This,
                       __RPC__in BSTR bstrLogicalPath,
                                __RPC__deref_out_opt BSTR *pbstrPhysicalPath);
                           HRESULT ( STDMETHODCALLTYPE *URLEncode )(
            __RPC__in IServer * This,
                       __RPC__in BSTR bstrIn,
                                __RPC__deref_out_opt BSTR *pbstrEncoded);
                       HRESULT ( STDMETHODCALLTYPE *URLPathEncode )(
            __RPC__in IServer * This,
                       __RPC__in BSTR bstrIn,
                                __RPC__deref_out_opt BSTR *pbstrEncoded);
                           HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in IServer * This,
                       __RPC__in BSTR bstrLogicalPath);
                           HRESULT ( STDMETHODCALLTYPE *Transfer )(
            __RPC__in IServer * This,
                       __RPC__in BSTR bstrLogicalPath);
                           HRESULT ( STDMETHODCALLTYPE *GetLastError )(
            __RPC__in IServer * This,
                                __RPC__deref_out_opt IASPError **ppASPErrorObject);
        END_INTERFACE
    } IServerVtbl;
    interface IServer
    {
        CONST_VTBL struct IServerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ScriptTimeout(This,plTimeoutSeconds) )
    ( (This)->lpVtbl -> put_ScriptTimeout(This,lTimeoutSeconds) )
    ( (This)->lpVtbl -> CreateObject(This,bstrProgID,ppDispObject) )
    ( (This)->lpVtbl -> HTMLEncode(This,bstrIn,pbstrEncoded) )
    ( (This)->lpVtbl -> MapPath(This,bstrLogicalPath,pbstrPhysicalPath) )
    ( (This)->lpVtbl -> URLEncode(This,bstrIn,pbstrEncoded) )
    ( (This)->lpVtbl -> URLPathEncode(This,bstrIn,pbstrEncoded) )
    ( (This)->lpVtbl -> Execute(This,bstrLogicalPath) )
    ( (This)->lpVtbl -> Transfer(This,bstrLogicalPath) )
    ( (This)->lpVtbl -> GetLastError(This,ppASPErrorObject) )
DEFINE_GUID(CLSID_Server,0xA506D160,0x25E0,0x11D0,0xA5,0x5F,0x00,0xA0,0xC9,0x0C,0x20,0x91);
class DECLSPEC_UUID("A506D160-25E0-11D0-A55F-00A0C90C2091")
Server;
DEFINE_GUID(IID_IScriptingContext,0xD97A6DA0,0xA868,0x11cf,0x83,0xAE,0x00,0xB0,0xC9,0x0C,0x2B,0xD8);
    typedef struct IScriptingContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScriptingContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScriptingContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScriptingContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IScriptingContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IScriptingContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IScriptingContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IScriptingContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Request )(
            __RPC__in IScriptingContext * This,
                                __RPC__deref_out_opt IRequest **ppRequest);
                                    HRESULT ( STDMETHODCALLTYPE *get_Response )(
            __RPC__in IScriptingContext * This,
                                __RPC__deref_out_opt IResponse **ppResponse);
                                    HRESULT ( STDMETHODCALLTYPE *get_Server )(
            __RPC__in IScriptingContext * This,
                                __RPC__deref_out_opt IServer **ppServer);
                                    HRESULT ( STDMETHODCALLTYPE *get_Session )(
            __RPC__in IScriptingContext * This,
                                __RPC__deref_out_opt ISessionObject **ppSession);
                                    HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IScriptingContext * This,
                                __RPC__deref_out_opt IApplicationObject **ppApplication);
        END_INTERFACE
    } IScriptingContextVtbl;
    interface IScriptingContext
    {
        CONST_VTBL struct IScriptingContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Request(This,ppRequest) )
    ( (This)->lpVtbl -> get_Response(This,ppResponse) )
    ( (This)->lpVtbl -> get_Server(This,ppServer) )
    ( (This)->lpVtbl -> get_Session(This,ppSession) )
    ( (This)->lpVtbl -> get_Application(This,ppApplication) )
DEFINE_GUID(CLSID_ScriptingContext,0xD97A6DA0,0xA868,0x11cf,0x83,0xAE,0x11,0xB0,0xC9,0x0C,0x2B,0xD8);
class DECLSPEC_UUID("D97A6DA0-A868-11cf-83AE-11B0C90C2BD8")
ScriptingContext;
}
