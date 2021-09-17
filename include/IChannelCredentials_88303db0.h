#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IChannelCredentials IChannelCredentials;
#include "ocidl.h"
extern "C"{
void * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void * );
EXTERN_C const IID IID_IChannelCredentials;
    typedef struct IChannelCredentialsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IChannelCredentials * This,
                       REFIID riid,
                                void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IChannelCredentials * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IChannelCredentials * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IChannelCredentials * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IChannelCredentials * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IChannelCredentials * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IChannelCredentials * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS *pDispParams,
                        VARIANT *pVarResult,
                        EXCEPINFO *pExcepInfo,
                        UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *SetWindowsCredential )(
            IChannelCredentials * This,
                       BSTR domain,
                       BSTR username,
                       BSTR password,
                       int impersonationLevel,
                       BOOL allowNtlm);
        HRESULT ( STDMETHODCALLTYPE *SetUserNameCredential )(
            IChannelCredentials * This,
                       BSTR username,
                       BSTR password);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateFromStore )(
            IChannelCredentials * This,
                       BSTR storeLocation,
                       BSTR storeName,
                       BSTR findYype,
                       VARIANT findValue);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateFromStoreByName )(
            IChannelCredentials * This,
                       BSTR subjectName,
                       BSTR storeLocation,
                       BSTR storeName);
        HRESULT ( STDMETHODCALLTYPE *SetClientCertificateFromFile )(
            IChannelCredentials * This,
                       BSTR filename,
                       BSTR password,
                       BSTR keystorageFlags);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultServiceCertificateFromStore )(
            IChannelCredentials * This,
                       BSTR storeLocation,
                       BSTR storeName,
                       BSTR findType,
                       VARIANT findValue);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultServiceCertificateFromStoreByName )(
            IChannelCredentials * This,
                       BSTR subjectName,
                       BSTR storeLocation,
                       BSTR storeName);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultServiceCertificateFromFile )(
            IChannelCredentials * This,
                       BSTR filename,
                       BSTR password,
                       BSTR keystorageFlags);
        HRESULT ( STDMETHODCALLTYPE *SetServiceCertificateAuthentication )(
            IChannelCredentials * This,
                       BSTR storeLocation,
                       BSTR revocationMode,
                       BSTR certificateValidationMode);
        HRESULT ( STDMETHODCALLTYPE *SetIssuedToken )(
            IChannelCredentials * This,
                       BSTR localIssuerAddres,
                       BSTR localIssuerBindingType,
                       BSTR localIssuerBinding);
        END_INTERFACE
    } IChannelCredentialsVtbl;
    interface IChannelCredentials
    {
        CONST_VTBL struct IChannelCredentialsVtbl *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> SetWindowsCredential(This,domain,username,password,impersonationLevel,allowNtlm)
    (This)->lpVtbl -> SetUserNameCredential(This,username,password)
    (This)->lpVtbl -> SetClientCertificateFromStore(This,storeLocation,storeName,findYype,findValue)
    (This)->lpVtbl -> SetClientCertificateFromStoreByName(This,subjectName,storeLocation,storeName)
    (This)->lpVtbl -> SetClientCertificateFromFile(This,filename,password,keystorageFlags)
    (This)->lpVtbl -> SetDefaultServiceCertificateFromStore(This,storeLocation,storeName,findType,findValue)
    (This)->lpVtbl -> SetDefaultServiceCertificateFromStoreByName(This,subjectName,storeLocation,storeName)
    (This)->lpVtbl -> SetDefaultServiceCertificateFromFile(This,filename,password,keystorageFlags)
    (This)->lpVtbl -> SetServiceCertificateAuthentication(This,storeLocation,revocationMode,certificateValidationMode)
    (This)->lpVtbl -> SetIssuedToken(This,localIssuerAddres,localIssuerBindingType,localIssuerBinding)
}
