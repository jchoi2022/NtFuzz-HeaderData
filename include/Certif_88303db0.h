#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertServerPolicy ICertServerPolicy;
typedef interface ICertServerExit ICertServerExit;
#include "wtypes.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertServerPolicy;
    typedef struct ICertServerPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertServerPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertServerPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertServerPolicy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertServerPolicy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertServerPolicy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *SetContext )(
            __RPC__in ICertServerPolicy * This,
                       LONG Context);
        HRESULT ( STDMETHODCALLTYPE *GetRequestProperty )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in const BSTR strPropertyName,
                       LONG PropertyType,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetRequestAttribute )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in const BSTR strAttributeName,
                                __RPC__deref_out_opt BSTR *pstrAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateProperty )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in const BSTR strPropertyName,
                       LONG PropertyType,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetCertificateProperty )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in const BSTR strPropertyName,
                       LONG PropertyType,
                       __RPC__in const VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateExtension )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in const BSTR strExtensionName,
                       LONG Type,
                                __RPC__out VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateExtensionFlags )(
            __RPC__in ICertServerPolicy * This,
                                __RPC__out LONG *pExtFlags);
        HRESULT ( STDMETHODCALLTYPE *SetCertificateExtension )(
            __RPC__in ICertServerPolicy * This,
                       __RPC__in const BSTR strExtensionName,
                       LONG Type,
                       LONG ExtFlags,
                       __RPC__in const VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExtensionsSetup )(
            __RPC__in ICertServerPolicy * This,
                       LONG Flags);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExtensions )(
            __RPC__in ICertServerPolicy * This,
                                __RPC__deref_out_opt BSTR *pstrExtensionName);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExtensionsClose )(
            __RPC__in ICertServerPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *EnumerateAttributesSetup )(
            __RPC__in ICertServerPolicy * This,
                       LONG Flags);
        HRESULT ( STDMETHODCALLTYPE *EnumerateAttributes )(
            __RPC__in ICertServerPolicy * This,
                                __RPC__deref_out_opt BSTR *pstrAttributeName);
        HRESULT ( STDMETHODCALLTYPE *EnumerateAttributesClose )(
            __RPC__in ICertServerPolicy * This);
        END_INTERFACE
    } ICertServerPolicyVtbl;
    interface ICertServerPolicy
    {
        CONST_VTBL struct ICertServerPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetContext(This,Context) )
    ( (This)->lpVtbl -> GetRequestProperty(This,strPropertyName,PropertyType,pvarPropertyValue) )
    ( (This)->lpVtbl -> GetRequestAttribute(This,strAttributeName,pstrAttributeValue) )
    ( (This)->lpVtbl -> GetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) )
    ( (This)->lpVtbl -> SetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) )
    ( (This)->lpVtbl -> GetCertificateExtension(This,strExtensionName,Type,pvarValue) )
    ( (This)->lpVtbl -> GetCertificateExtensionFlags(This,pExtFlags) )
    ( (This)->lpVtbl -> SetCertificateExtension(This,strExtensionName,Type,ExtFlags,pvarValue) )
    ( (This)->lpVtbl -> EnumerateExtensionsSetup(This,Flags) )
    ( (This)->lpVtbl -> EnumerateExtensions(This,pstrExtensionName) )
    ( (This)->lpVtbl -> EnumerateExtensionsClose(This) )
    ( (This)->lpVtbl -> EnumerateAttributesSetup(This,Flags) )
    ( (This)->lpVtbl -> EnumerateAttributes(This,pstrAttributeName) )
    ( (This)->lpVtbl -> EnumerateAttributesClose(This) )
EXTERN_C const IID IID_ICertServerExit;
    typedef struct ICertServerExitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertServerExit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertServerExit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertServerExit * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertServerExit * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertServerExit * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertServerExit * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertServerExit * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *SetContext )(
            __RPC__in ICertServerExit * This,
                       LONG Context);
        HRESULT ( STDMETHODCALLTYPE *GetRequestProperty )(
            __RPC__in ICertServerExit * This,
                       __RPC__in const BSTR strPropertyName,
                       LONG PropertyType,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetRequestAttribute )(
            __RPC__in ICertServerExit * This,
                       __RPC__in const BSTR strAttributeName,
                                __RPC__deref_out_opt BSTR *pstrAttributeValue);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateProperty )(
            __RPC__in ICertServerExit * This,
                       __RPC__in const BSTR strPropertyName,
                       LONG PropertyType,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateExtension )(
            __RPC__in ICertServerExit * This,
                       __RPC__in const BSTR strExtensionName,
                       LONG Type,
                                __RPC__out VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateExtensionFlags )(
            __RPC__in ICertServerExit * This,
                                __RPC__out LONG *pExtFlags);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExtensionsSetup )(
            __RPC__in ICertServerExit * This,
                       LONG Flags);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExtensions )(
            __RPC__in ICertServerExit * This,
                                __RPC__deref_out_opt BSTR *pstrExtensionName);
        HRESULT ( STDMETHODCALLTYPE *EnumerateExtensionsClose )(
            __RPC__in ICertServerExit * This);
        HRESULT ( STDMETHODCALLTYPE *EnumerateAttributesSetup )(
            __RPC__in ICertServerExit * This,
                       LONG Flags);
        HRESULT ( STDMETHODCALLTYPE *EnumerateAttributes )(
            __RPC__in ICertServerExit * This,
                                __RPC__deref_out_opt BSTR *pstrAttributeName);
        HRESULT ( STDMETHODCALLTYPE *EnumerateAttributesClose )(
            __RPC__in ICertServerExit * This);
        END_INTERFACE
    } ICertServerExitVtbl;
    interface ICertServerExit
    {
        CONST_VTBL struct ICertServerExitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetContext(This,Context) )
    ( (This)->lpVtbl -> GetRequestProperty(This,strPropertyName,PropertyType,pvarPropertyValue) )
    ( (This)->lpVtbl -> GetRequestAttribute(This,strAttributeName,pstrAttributeValue) )
    ( (This)->lpVtbl -> GetCertificateProperty(This,strPropertyName,PropertyType,pvarPropertyValue) )
    ( (This)->lpVtbl -> GetCertificateExtension(This,strExtensionName,Type,pvarValue) )
    ( (This)->lpVtbl -> GetCertificateExtensionFlags(This,pExtFlags) )
    ( (This)->lpVtbl -> EnumerateExtensionsSetup(This,Flags) )
    ( (This)->lpVtbl -> EnumerateExtensions(This,pstrExtensionName) )
    ( (This)->lpVtbl -> EnumerateExtensionsClose(This) )
    ( (This)->lpVtbl -> EnumerateAttributesSetup(This,Flags) )
    ( (This)->lpVtbl -> EnumerateAttributes(This,pstrAttributeName) )
    ( (This)->lpVtbl -> EnumerateAttributesClose(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certif_0000_0002_v0_0_s_ifspec;
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
