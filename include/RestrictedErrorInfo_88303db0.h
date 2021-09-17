#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRestrictedErrorInfo IRestrictedErrorInfo;
typedef interface ILanguageExceptionErrorInfo ILanguageExceptionErrorInfo;
typedef interface ILanguageExceptionTransform ILanguageExceptionTransform;
typedef interface ILanguageExceptionStackBackTrace ILanguageExceptionStackBackTrace;
typedef interface ILanguageExceptionErrorInfo2 ILanguageExceptionErrorInfo2;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRestrictedErrorInfo;
    typedef struct IRestrictedErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRestrictedErrorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRestrictedErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRestrictedErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetErrorDetails )(
            __RPC__in IRestrictedErrorInfo * This,
                        __RPC__deref_out_opt BSTR *description,
                        __RPC__out HRESULT *error,
                        __RPC__deref_out_opt BSTR *restrictedDescription,
                        __RPC__deref_out_opt BSTR *capabilitySid);
        HRESULT ( STDMETHODCALLTYPE *GetReference )(
            __RPC__in IRestrictedErrorInfo * This,
                        __RPC__deref_out_opt BSTR *reference);
        END_INTERFACE
    } IRestrictedErrorInfoVtbl;
    interface IRestrictedErrorInfo
    {
        CONST_VTBL struct IRestrictedErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetErrorDetails(This,description,error,restrictedDescription,capabilitySid) )
    ( (This)->lpVtbl -> GetReference(This,reference) )
EXTERN_C const IID IID_ILanguageExceptionErrorInfo;
    typedef struct ILanguageExceptionErrorInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILanguageExceptionErrorInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILanguageExceptionErrorInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILanguageExceptionErrorInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageException )(
            __RPC__in ILanguageExceptionErrorInfo * This,
                        __RPC__deref_out_opt IUnknown **languageException);
        END_INTERFACE
    } ILanguageExceptionErrorInfoVtbl;
    interface ILanguageExceptionErrorInfo
    {
        CONST_VTBL struct ILanguageExceptionErrorInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLanguageException(This,languageException) )
EXTERN_C const IID IID_ILanguageExceptionTransform;
    typedef struct ILanguageExceptionTransformVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILanguageExceptionTransform * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILanguageExceptionTransform * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILanguageExceptionTransform * This);
        HRESULT ( STDMETHODCALLTYPE *GetTransformedRestrictedErrorInfo )(
            __RPC__in ILanguageExceptionTransform * This,
                        __RPC__deref_out_opt IRestrictedErrorInfo **restrictedErrorInfo);
        END_INTERFACE
    } ILanguageExceptionTransformVtbl;
    interface ILanguageExceptionTransform
    {
        CONST_VTBL struct ILanguageExceptionTransformVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTransformedRestrictedErrorInfo(This,restrictedErrorInfo) )
EXTERN_C const IID IID_ILanguageExceptionStackBackTrace;
    typedef struct ILanguageExceptionStackBackTraceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILanguageExceptionStackBackTrace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILanguageExceptionStackBackTrace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILanguageExceptionStackBackTrace * This);
        HRESULT ( STDMETHODCALLTYPE *GetStackBackTrace )(
            __RPC__in ILanguageExceptionStackBackTrace * This,
                       ULONG maxFramesToCapture,
                                    __RPC__inout_ecount_full(( ( maxFramesToCapture - 1 ) + 1 ) ) UINT_PTR stackBackTrace[ ],
                        __RPC__out ULONG *framesCaptured);
        END_INTERFACE
    } ILanguageExceptionStackBackTraceVtbl;
    interface ILanguageExceptionStackBackTrace
    {
        CONST_VTBL struct ILanguageExceptionStackBackTraceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStackBackTrace(This,maxFramesToCapture,stackBackTrace,framesCaptured) )
EXTERN_C const IID IID_ILanguageExceptionErrorInfo2;
    typedef struct ILanguageExceptionErrorInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILanguageExceptionErrorInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILanguageExceptionErrorInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILanguageExceptionErrorInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageException )(
            __RPC__in ILanguageExceptionErrorInfo2 * This,
                        __RPC__deref_out_opt IUnknown **languageException);
        HRESULT ( STDMETHODCALLTYPE *GetPreviousLanguageExceptionErrorInfo )(
            __RPC__in ILanguageExceptionErrorInfo2 * This,
                        __RPC__deref_out_opt ILanguageExceptionErrorInfo2 **previousLanguageExceptionErrorInfo);
        HRESULT ( STDMETHODCALLTYPE *CapturePropagationContext )(
            __RPC__in ILanguageExceptionErrorInfo2 * This,
                       __RPC__in_opt IUnknown *languageException);
        HRESULT ( STDMETHODCALLTYPE *GetPropagationContextHead )(
            __RPC__in ILanguageExceptionErrorInfo2 * This,
                        __RPC__deref_out_opt ILanguageExceptionErrorInfo2 **propagatedLanguageExceptionErrorInfoHead);
        END_INTERFACE
    } ILanguageExceptionErrorInfo2Vtbl;
    interface ILanguageExceptionErrorInfo2
    {
        CONST_VTBL struct ILanguageExceptionErrorInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLanguageException(This,languageException) )
    ( (This)->lpVtbl -> GetPreviousLanguageExceptionErrorInfo(This,previousLanguageExceptionErrorInfo) )
    ( (This)->lpVtbl -> CapturePropagationContext(This,languageException) )
    ( (This)->lpVtbl -> GetPropagationContextHead(This,propagatedLanguageExceptionErrorInfoHead) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_restrictederrorinfo_0000_0005_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
