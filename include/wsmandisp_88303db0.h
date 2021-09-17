#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWSMan IWSMan;
typedef interface IWSManEx IWSManEx;
typedef interface IWSManEx2 IWSManEx2;
typedef interface IWSManEx3 IWSManEx3;
typedef interface IWSManConnectionOptions IWSManConnectionOptions;
typedef interface IWSManConnectionOptionsEx IWSManConnectionOptionsEx;
typedef interface IWSManConnectionOptionsEx2 IWSManConnectionOptionsEx2;
typedef interface IWSManSession IWSManSession;
typedef interface IWSManEnumerator IWSManEnumerator;
typedef interface IWSManResourceLocator IWSManResourceLocator;
typedef interface IWSManResourceLocatorInternal IWSManResourceLocatorInternal;
typedef class WSMan WSMan;
typedef interface IWSManInternal IWSManInternal;
typedef class WSManInternal WSManInternal;
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
extern RPC_IF_HANDLE __MIDL_itf_wsmandisp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsmandisp_0000_0000_v0_0_s_ifspec;
typedef
enum _WSManSessionFlags
    {
        WSManFlagUTF8 = 0x1,
        WSManFlagCredUsernamePassword = 0x1000,
        WSManFlagSkipCACheck = 0x2000,
        WSManFlagSkipCNCheck = 0x4000,
        WSManFlagUseNoAuthentication = 0x8000,
        WSManFlagUseDigest = 0x10000,
        WSManFlagUseNegotiate = 0x20000,
        WSManFlagUseBasic = 0x40000,
        WSManFlagUseKerberos = 0x80000,
        WSManFlagNoEncryption = 0x100000,
        WSManFlagUseClientCertificate = 0x200000,
        WSManFlagEnableSPNServerPort = 0x400000,
        WSManFlagUTF16 = 0x800000,
        WSManFlagUseCredSsp = 0x1000000,
        WSManFlagSkipRevocationCheck = 0x2000000,
        WSManFlagAllowNegotiateImplicitCredentials = 0x4000000,
        WSManFlagUseSsl = 0x8000000
    } WSManSessionFlags;
typedef
enum _WSManEnumFlags
    {
        WSManFlagNonXmlText = 0x1,
        WSManFlagReturnObject = 0,
        WSManFlagReturnEPR = 0x2,
        WSManFlagReturnObjectAndEPR = 0x4,
        WSManFlagHierarchyDeep = 0,
        WSManFlagHierarchyShallow = 0x20,
        WSManFlagHierarchyDeepBasePropsOnly = 0x40,
        WSManFlagAssociatedInstance = 0,
        WSManFlagAssociationInstance = 0x80
    } WSManEnumFlags;
typedef
enum _WSManProxyAccessTypeFlags
    {
        WSManProxyIEConfig = 0x1,
        WSManProxyWinHttpConfig = 0x2,
        WSManProxyAutoDetect = 0x4,
        WSManProxyNoProxyServer = 0x8
    } WSManProxyAccessTypeFlags;
typedef
enum _WSManProxyAuthenticationFlags
    {
        WSManFlagProxyAuthenticationUseNegotiate = 0x1,
        WSManFlagProxyAuthenticationUseBasic = 0x2,
        WSManFlagProxyAuthenticationUseDigest = 0x4
    } WSManProxyAuthenticationFlags;
EXTERN_C const IID LIBID_WSManAutomation;
EXTERN_C const IID IID_IWSMan;
    typedef struct IWSManVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSMan * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSMan * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSMan * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSMan * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSMan * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSMan * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSMan * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            IWSMan * This,
                                     BSTR connection,
                                     long flags,
                                     IDispatch *connectionOptions,
                                IDispatch **session);
                   HRESULT ( STDMETHODCALLTYPE *CreateConnectionOptions )(
            IWSMan * This,
                                IDispatch **connectionOptions);
                            HRESULT ( STDMETHODCALLTYPE *get_CommandLine )(
            IWSMan * This,
                                BSTR *value);
                            HRESULT ( STDMETHODCALLTYPE *get_Error )(
            IWSMan * This,
                                BSTR *value);
        END_INTERFACE
    } IWSManVtbl;
    interface IWSMan
    {
        CONST_VTBL struct IWSManVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
    ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
    ( (This)->lpVtbl -> get_CommandLine(This,value) )
    ( (This)->lpVtbl -> get_Error(This,value) )
EXTERN_C const IID IID_IWSManEx;
    typedef struct IWSManExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManEx * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManEx * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            IWSManEx * This,
                                     BSTR connection,
                                     long flags,
                                     IDispatch *connectionOptions,
                                IDispatch **session);
                   HRESULT ( STDMETHODCALLTYPE *CreateConnectionOptions )(
            IWSManEx * This,
                                IDispatch **connectionOptions);
                            HRESULT ( STDMETHODCALLTYPE *get_CommandLine )(
            IWSManEx * This,
                                BSTR *value);
                            HRESULT ( STDMETHODCALLTYPE *get_Error )(
            IWSManEx * This,
                                BSTR *value);
                   HRESULT ( STDMETHODCALLTYPE *CreateResourceLocator )(
            IWSManEx * This,
                                     BSTR strResourceLocator,
                                IDispatch **newResourceLocator);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUTF8 )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagCredUsernamePassword )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagSkipCACheck )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagSkipCNCheck )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseDigest )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseNegotiate )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseBasic )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseKerberos )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagNoEncryption )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagEnableSPNServerPort )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseNoAuthentication )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagNonXmlText )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnEPR )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnObjectAndEPR )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )(
            IWSManEx * This,
                       DWORD errorNumber,
                                BSTR *errorMessage);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyDeep )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyShallow )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyDeepBasePropsOnly )(
            IWSManEx * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnObject )(
            IWSManEx * This,
                                long *flags);
        END_INTERFACE
    } IWSManExVtbl;
    interface IWSManEx
    {
        CONST_VTBL struct IWSManExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
    ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
    ( (This)->lpVtbl -> get_CommandLine(This,value) )
    ( (This)->lpVtbl -> get_Error(This,value) )
    ( (This)->lpVtbl -> CreateResourceLocator(This,strResourceLocator,newResourceLocator) )
    ( (This)->lpVtbl -> SessionFlagUTF8(This,flags) )
    ( (This)->lpVtbl -> SessionFlagCredUsernamePassword(This,flags) )
    ( (This)->lpVtbl -> SessionFlagSkipCACheck(This,flags) )
    ( (This)->lpVtbl -> SessionFlagSkipCNCheck(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseDigest(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseNegotiate(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseBasic(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseKerberos(This,flags) )
    ( (This)->lpVtbl -> SessionFlagNoEncryption(This,flags) )
    ( (This)->lpVtbl -> SessionFlagEnableSPNServerPort(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseNoAuthentication(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagNonXmlText(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnEPR(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnObjectAndEPR(This,flags) )
    ( (This)->lpVtbl -> GetErrorMessage(This,errorNumber,errorMessage) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyDeep(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyShallow(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnObject(This,flags) )
EXTERN_C const IID IID_IWSManEx2;
    typedef struct IWSManEx2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManEx2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManEx2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManEx2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManEx2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManEx2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManEx2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManEx2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            IWSManEx2 * This,
                                     BSTR connection,
                                     long flags,
                                     IDispatch *connectionOptions,
                                IDispatch **session);
                   HRESULT ( STDMETHODCALLTYPE *CreateConnectionOptions )(
            IWSManEx2 * This,
                                IDispatch **connectionOptions);
                            HRESULT ( STDMETHODCALLTYPE *get_CommandLine )(
            IWSManEx2 * This,
                                BSTR *value);
                            HRESULT ( STDMETHODCALLTYPE *get_Error )(
            IWSManEx2 * This,
                                BSTR *value);
                   HRESULT ( STDMETHODCALLTYPE *CreateResourceLocator )(
            IWSManEx2 * This,
                                     BSTR strResourceLocator,
                                IDispatch **newResourceLocator);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUTF8 )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagCredUsernamePassword )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagSkipCACheck )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagSkipCNCheck )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseDigest )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseNegotiate )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseBasic )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseKerberos )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagNoEncryption )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagEnableSPNServerPort )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseNoAuthentication )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagNonXmlText )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnEPR )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnObjectAndEPR )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )(
            IWSManEx2 * This,
                       DWORD errorNumber,
                                BSTR *errorMessage);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyDeep )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyShallow )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyDeepBasePropsOnly )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnObject )(
            IWSManEx2 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseClientCertificate )(
            IWSManEx2 * This,
                                long *flags);
        END_INTERFACE
    } IWSManEx2Vtbl;
    interface IWSManEx2
    {
        CONST_VTBL struct IWSManEx2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
    ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
    ( (This)->lpVtbl -> get_CommandLine(This,value) )
    ( (This)->lpVtbl -> get_Error(This,value) )
    ( (This)->lpVtbl -> CreateResourceLocator(This,strResourceLocator,newResourceLocator) )
    ( (This)->lpVtbl -> SessionFlagUTF8(This,flags) )
    ( (This)->lpVtbl -> SessionFlagCredUsernamePassword(This,flags) )
    ( (This)->lpVtbl -> SessionFlagSkipCACheck(This,flags) )
    ( (This)->lpVtbl -> SessionFlagSkipCNCheck(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseDigest(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseNegotiate(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseBasic(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseKerberos(This,flags) )
    ( (This)->lpVtbl -> SessionFlagNoEncryption(This,flags) )
    ( (This)->lpVtbl -> SessionFlagEnableSPNServerPort(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseNoAuthentication(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagNonXmlText(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnEPR(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnObjectAndEPR(This,flags) )
    ( (This)->lpVtbl -> GetErrorMessage(This,errorNumber,errorMessage) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyDeep(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyShallow(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnObject(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseClientCertificate(This,flags) )
EXTERN_C const IID IID_IWSManEx3;
    typedef struct IWSManEx3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManEx3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManEx3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManEx3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManEx3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManEx3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManEx3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManEx3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *CreateSession )(
            IWSManEx3 * This,
                                     BSTR connection,
                                     long flags,
                                     IDispatch *connectionOptions,
                                IDispatch **session);
                   HRESULT ( STDMETHODCALLTYPE *CreateConnectionOptions )(
            IWSManEx3 * This,
                                IDispatch **connectionOptions);
                            HRESULT ( STDMETHODCALLTYPE *get_CommandLine )(
            IWSManEx3 * This,
                                BSTR *value);
                            HRESULT ( STDMETHODCALLTYPE *get_Error )(
            IWSManEx3 * This,
                                BSTR *value);
                   HRESULT ( STDMETHODCALLTYPE *CreateResourceLocator )(
            IWSManEx3 * This,
                                     BSTR strResourceLocator,
                                IDispatch **newResourceLocator);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUTF8 )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagCredUsernamePassword )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagSkipCACheck )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagSkipCNCheck )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseDigest )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseNegotiate )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseBasic )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseKerberos )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagNoEncryption )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagEnableSPNServerPort )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseNoAuthentication )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagNonXmlText )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnEPR )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnObjectAndEPR )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *GetErrorMessage )(
            IWSManEx3 * This,
                       DWORD errorNumber,
                                BSTR *errorMessage);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyDeep )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyShallow )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagHierarchyDeepBasePropsOnly )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagReturnObject )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseClientCertificate )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUTF16 )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseCredSsp )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagAssociationInstance )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *EnumerationFlagAssociatedInstance )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagSkipRevocationCheck )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagAllowNegotiateImplicitCredentials )(
            IWSManEx3 * This,
                                long *flags);
                   HRESULT ( STDMETHODCALLTYPE *SessionFlagUseSsl )(
            IWSManEx3 * This,
                                long *flags);
        END_INTERFACE
    } IWSManEx3Vtbl;
    interface IWSManEx3
    {
        CONST_VTBL struct IWSManEx3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateSession(This,connection,flags,connectionOptions,session) )
    ( (This)->lpVtbl -> CreateConnectionOptions(This,connectionOptions) )
    ( (This)->lpVtbl -> get_CommandLine(This,value) )
    ( (This)->lpVtbl -> get_Error(This,value) )
    ( (This)->lpVtbl -> CreateResourceLocator(This,strResourceLocator,newResourceLocator) )
    ( (This)->lpVtbl -> SessionFlagUTF8(This,flags) )
    ( (This)->lpVtbl -> SessionFlagCredUsernamePassword(This,flags) )
    ( (This)->lpVtbl -> SessionFlagSkipCACheck(This,flags) )
    ( (This)->lpVtbl -> SessionFlagSkipCNCheck(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseDigest(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseNegotiate(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseBasic(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseKerberos(This,flags) )
    ( (This)->lpVtbl -> SessionFlagNoEncryption(This,flags) )
    ( (This)->lpVtbl -> SessionFlagEnableSPNServerPort(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseNoAuthentication(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagNonXmlText(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnEPR(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnObjectAndEPR(This,flags) )
    ( (This)->lpVtbl -> GetErrorMessage(This,errorNumber,errorMessage) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyDeep(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyShallow(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagHierarchyDeepBasePropsOnly(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagReturnObject(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseClientCertificate(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUTF16(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseCredSsp(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagAssociationInstance(This,flags) )
    ( (This)->lpVtbl -> EnumerationFlagAssociatedInstance(This,flags) )
    ( (This)->lpVtbl -> SessionFlagSkipRevocationCheck(This,flags) )
    ( (This)->lpVtbl -> SessionFlagAllowNegotiateImplicitCredentials(This,flags) )
    ( (This)->lpVtbl -> SessionFlagUseSsl(This,flags) )
EXTERN_C const IID IID_IWSManConnectionOptions;
    typedef struct IWSManConnectionOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManConnectionOptions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManConnectionOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManConnectionOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManConnectionOptions * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManConnectionOptions * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManConnectionOptions * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManConnectionOptions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            IWSManConnectionOptions * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_UserName )(
            IWSManConnectionOptions * This,
                       BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *put_Password )(
            IWSManConnectionOptions * This,
                       BSTR password);
        END_INTERFACE
    } IWSManConnectionOptionsVtbl;
    interface IWSManConnectionOptions
    {
        CONST_VTBL struct IWSManConnectionOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UserName(This,name) )
    ( (This)->lpVtbl -> put_UserName(This,name) )
    ( (This)->lpVtbl -> put_Password(This,password) )
EXTERN_C const IID IID_IWSManConnectionOptionsEx;
    typedef struct IWSManConnectionOptionsExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManConnectionOptionsEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManConnectionOptionsEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManConnectionOptionsEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManConnectionOptionsEx * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManConnectionOptionsEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManConnectionOptionsEx * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManConnectionOptionsEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            IWSManConnectionOptionsEx * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_UserName )(
            IWSManConnectionOptionsEx * This,
                       BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *put_Password )(
            IWSManConnectionOptionsEx * This,
                       BSTR password);
                            HRESULT ( STDMETHODCALLTYPE *get_CertificateThumbprint )(
            IWSManConnectionOptionsEx * This,
                                BSTR *thumbprint);
                            HRESULT ( STDMETHODCALLTYPE *put_CertificateThumbprint )(
            IWSManConnectionOptionsEx * This,
                       BSTR thumbprint);
        END_INTERFACE
    } IWSManConnectionOptionsExVtbl;
    interface IWSManConnectionOptionsEx
    {
        CONST_VTBL struct IWSManConnectionOptionsExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UserName(This,name) )
    ( (This)->lpVtbl -> put_UserName(This,name) )
    ( (This)->lpVtbl -> put_Password(This,password) )
    ( (This)->lpVtbl -> get_CertificateThumbprint(This,thumbprint) )
    ( (This)->lpVtbl -> put_CertificateThumbprint(This,thumbprint) )
EXTERN_C const IID IID_IWSManConnectionOptionsEx2;
    typedef struct IWSManConnectionOptionsEx2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManConnectionOptionsEx2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManConnectionOptionsEx2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManConnectionOptionsEx2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManConnectionOptionsEx2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManConnectionOptionsEx2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManConnectionOptionsEx2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManConnectionOptionsEx2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_UserName )(
            IWSManConnectionOptionsEx2 * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *put_UserName )(
            IWSManConnectionOptionsEx2 * This,
                       BSTR name);
                            HRESULT ( STDMETHODCALLTYPE *put_Password )(
            IWSManConnectionOptionsEx2 * This,
                       BSTR password);
                            HRESULT ( STDMETHODCALLTYPE *get_CertificateThumbprint )(
            IWSManConnectionOptionsEx2 * This,
                                BSTR *thumbprint);
                            HRESULT ( STDMETHODCALLTYPE *put_CertificateThumbprint )(
            IWSManConnectionOptionsEx2 * This,
                       BSTR thumbprint);
                   HRESULT ( STDMETHODCALLTYPE *SetProxy )(
            IWSManConnectionOptionsEx2 * This,
                                     long accessType,
                                     long authenticationMechanism,
                                     BSTR userName,
                                     BSTR password);
                   HRESULT ( STDMETHODCALLTYPE *ProxyIEConfig )(
            IWSManConnectionOptionsEx2 * This,
                                long *value);
                   HRESULT ( STDMETHODCALLTYPE *ProxyWinHttpConfig )(
            IWSManConnectionOptionsEx2 * This,
                                long *value);
                   HRESULT ( STDMETHODCALLTYPE *ProxyAutoDetect )(
            IWSManConnectionOptionsEx2 * This,
                                long *value);
                   HRESULT ( STDMETHODCALLTYPE *ProxyNoProxyServer )(
            IWSManConnectionOptionsEx2 * This,
                                long *value);
                   HRESULT ( STDMETHODCALLTYPE *ProxyAuthenticationUseNegotiate )(
            IWSManConnectionOptionsEx2 * This,
                                long *value);
                   HRESULT ( STDMETHODCALLTYPE *ProxyAuthenticationUseBasic )(
            IWSManConnectionOptionsEx2 * This,
                                long *value);
                   HRESULT ( STDMETHODCALLTYPE *ProxyAuthenticationUseDigest )(
            IWSManConnectionOptionsEx2 * This,
                                long *value);
        END_INTERFACE
    } IWSManConnectionOptionsEx2Vtbl;
    interface IWSManConnectionOptionsEx2
    {
        CONST_VTBL struct IWSManConnectionOptionsEx2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UserName(This,name) )
    ( (This)->lpVtbl -> put_UserName(This,name) )
    ( (This)->lpVtbl -> put_Password(This,password) )
    ( (This)->lpVtbl -> get_CertificateThumbprint(This,thumbprint) )
    ( (This)->lpVtbl -> put_CertificateThumbprint(This,thumbprint) )
    ( (This)->lpVtbl -> SetProxy(This,accessType,authenticationMechanism,userName,password) )
    ( (This)->lpVtbl -> ProxyIEConfig(This,value) )
    ( (This)->lpVtbl -> ProxyWinHttpConfig(This,value) )
    ( (This)->lpVtbl -> ProxyAutoDetect(This,value) )
    ( (This)->lpVtbl -> ProxyNoProxyServer(This,value) )
    ( (This)->lpVtbl -> ProxyAuthenticationUseNegotiate(This,value) )
    ( (This)->lpVtbl -> ProxyAuthenticationUseBasic(This,value) )
    ( (This)->lpVtbl -> ProxyAuthenticationUseDigest(This,value) )
EXTERN_C const IID IID_IWSManSession;
    typedef struct IWSManSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManSession * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManSession * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManSession * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManSession * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManSession * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManSession * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *Get )(
            IWSManSession * This,
                       VARIANT resourceUri,
                                     long flags,
                                BSTR *resource);
                   HRESULT ( STDMETHODCALLTYPE *Put )(
            IWSManSession * This,
                       VARIANT resourceUri,
                       BSTR resource,
                                     long flags,
                                BSTR *resultResource);
                   HRESULT ( STDMETHODCALLTYPE *Create )(
            IWSManSession * This,
                       VARIANT resourceUri,
                       BSTR resource,
                                     long flags,
                                BSTR *newUri);
                   HRESULT ( STDMETHODCALLTYPE *Delete )(
            IWSManSession * This,
                       VARIANT resourceUri,
                                     long flags);
                   HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManSession * This,
                       BSTR actionUri,
                       VARIANT resourceUri,
                       BSTR parameters,
                                     long flags,
                                BSTR *result);
                   HRESULT ( STDMETHODCALLTYPE *Enumerate )(
            IWSManSession * This,
                       VARIANT resourceUri,
                                     BSTR filter,
                                     BSTR dialect,
                                     long flags,
                                IDispatch **resultSet);
                   HRESULT ( STDMETHODCALLTYPE *Identify )(
            IWSManSession * This,
                                     long flags,
                                BSTR *result);
                            HRESULT ( STDMETHODCALLTYPE *get_Error )(
            IWSManSession * This,
                                BSTR *value);
                            HRESULT ( STDMETHODCALLTYPE *get_BatchItems )(
            IWSManSession * This,
                                long *value);
                            HRESULT ( STDMETHODCALLTYPE *put_BatchItems )(
            IWSManSession * This,
                       long value);
                            HRESULT ( STDMETHODCALLTYPE *get_Timeout )(
            IWSManSession * This,
                                long *value);
                            HRESULT ( STDMETHODCALLTYPE *put_Timeout )(
            IWSManSession * This,
                       long value);
        END_INTERFACE
    } IWSManSessionVtbl;
    interface IWSManSession
    {
        CONST_VTBL struct IWSManSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Get(This,resourceUri,flags,resource) )
    ( (This)->lpVtbl -> Put(This,resourceUri,resource,flags,resultResource) )
    ( (This)->lpVtbl -> Create(This,resourceUri,resource,flags,newUri) )
    ( (This)->lpVtbl -> Delete(This,resourceUri,flags) )
    ( (This)->lpVtbl -> Invoke(This,actionUri,resourceUri,parameters,flags,result) )
    ( (This)->lpVtbl -> Enumerate(This,resourceUri,filter,dialect,flags,resultSet) )
    ( (This)->lpVtbl -> Identify(This,flags,result) )
    ( (This)->lpVtbl -> get_Error(This,value) )
    ( (This)->lpVtbl -> get_BatchItems(This,value) )
    ( (This)->lpVtbl -> put_BatchItems(This,value) )
    ( (This)->lpVtbl -> get_Timeout(This,value) )
    ( (This)->lpVtbl -> put_Timeout(This,value) )
EXTERN_C const IID IID_IWSManEnumerator;
    typedef struct IWSManEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManEnumerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManEnumerator * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManEnumerator * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManEnumerator * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManEnumerator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *ReadItem )(
            IWSManEnumerator * This,
                                BSTR *resource);
                            HRESULT ( STDMETHODCALLTYPE *get_AtEndOfStream )(
            IWSManEnumerator * This,
                                VARIANT_BOOL *eos);
                            HRESULT ( STDMETHODCALLTYPE *get_Error )(
            IWSManEnumerator * This,
                                BSTR *value);
        END_INTERFACE
    } IWSManEnumeratorVtbl;
    interface IWSManEnumerator
    {
        CONST_VTBL struct IWSManEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ReadItem(This,resource) )
    ( (This)->lpVtbl -> get_AtEndOfStream(This,eos) )
    ( (This)->lpVtbl -> get_Error(This,value) )
EXTERN_C const IID IID_IWSManResourceLocator;
    typedef struct IWSManResourceLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManResourceLocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManResourceLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManResourceLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManResourceLocator * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManResourceLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManResourceLocator * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManResourceLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_ResourceURI )(
            IWSManResourceLocator * This,
                       BSTR uri);
                                        HRESULT ( STDMETHODCALLTYPE *get_ResourceURI )(
            IWSManResourceLocator * This,
                                BSTR *uri);
                               HRESULT ( STDMETHODCALLTYPE *AddSelector )(
            IWSManResourceLocator * This,
                       BSTR resourceSelName,
                       VARIANT selValue);
                               HRESULT ( STDMETHODCALLTYPE *ClearSelectors )(
            IWSManResourceLocator * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_FragmentPath )(
            IWSManResourceLocator * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_FragmentPath )(
            IWSManResourceLocator * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_FragmentDialect )(
            IWSManResourceLocator * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_FragmentDialect )(
            IWSManResourceLocator * This,
                       BSTR text);
                               HRESULT ( STDMETHODCALLTYPE *AddOption )(
            IWSManResourceLocator * This,
                       BSTR OptionName,
                       VARIANT OptionValue,
                                     BOOL mustComply);
                                        HRESULT ( STDMETHODCALLTYPE *put_MustUnderstandOptions )(
            IWSManResourceLocator * This,
                       BOOL mustUnderstand);
                                        HRESULT ( STDMETHODCALLTYPE *get_MustUnderstandOptions )(
            IWSManResourceLocator * This,
                                BOOL *mustUnderstand);
                               HRESULT ( STDMETHODCALLTYPE *ClearOptions )(
            IWSManResourceLocator * This);
                            HRESULT ( STDMETHODCALLTYPE *get_Error )(
            IWSManResourceLocator * This,
                                BSTR *value);
        END_INTERFACE
    } IWSManResourceLocatorVtbl;
    interface IWSManResourceLocator
    {
        CONST_VTBL struct IWSManResourceLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_ResourceURI(This,uri) )
    ( (This)->lpVtbl -> get_ResourceURI(This,uri) )
    ( (This)->lpVtbl -> AddSelector(This,resourceSelName,selValue) )
    ( (This)->lpVtbl -> ClearSelectors(This) )
    ( (This)->lpVtbl -> get_FragmentPath(This,text) )
    ( (This)->lpVtbl -> put_FragmentPath(This,text) )
    ( (This)->lpVtbl -> get_FragmentDialect(This,text) )
    ( (This)->lpVtbl -> put_FragmentDialect(This,text) )
    ( (This)->lpVtbl -> AddOption(This,OptionName,OptionValue,mustComply) )
    ( (This)->lpVtbl -> put_MustUnderstandOptions(This,mustUnderstand) )
    ( (This)->lpVtbl -> get_MustUnderstandOptions(This,mustUnderstand) )
    ( (This)->lpVtbl -> ClearOptions(This) )
    ( (This)->lpVtbl -> get_Error(This,value) )
EXTERN_C const IID IID_IWSManResourceLocatorInternal;
    typedef struct IWSManResourceLocatorInternalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManResourceLocatorInternal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManResourceLocatorInternal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManResourceLocatorInternal * This);
        END_INTERFACE
    } IWSManResourceLocatorInternalVtbl;
    interface IWSManResourceLocatorInternal
    {
        CONST_VTBL struct IWSManResourceLocatorInternalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const CLSID CLSID_WSMan;
class DECLSPEC_UUID("BCED617B-EC03-420b-8508-977DC7A686BD")
WSMan;
EXTERN_C const IID IID_IWSManInternal;
    typedef struct IWSManInternalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSManInternal * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSManInternal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSManInternal * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IWSManInternal * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IWSManInternal * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IWSManInternal * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSManInternal * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *ConfigSDDL )(
            IWSManInternal * This,
                       IDispatch *session,
                       VARIANT resourceUri,
                                     long flags,
                                BSTR *resource);
        END_INTERFACE
    } IWSManInternalVtbl;
    interface IWSManInternal
    {
        CONST_VTBL struct IWSManInternalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ConfigSDDL(This,session,resourceUri,flags,resource) )
EXTERN_C const CLSID CLSID_WSManInternal;
class DECLSPEC_UUID("7DE087A5-5DCB-4df7-BB12-0924AD8FBD9A")
WSManInternal;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsmandisp_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsmandisp_0000_0013_v0_0_s_ifspec;
}
