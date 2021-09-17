#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "rpc.h"
#include "rpcndr.h"
#include "windows.h"
#include "ole2.h"
extern "C"{
typedef interface IEnumMsmString IEnumMsmString;
typedef interface IMsmStrings IMsmStrings;
typedef interface IMsmError IMsmError;
typedef interface IEnumMsmError IEnumMsmError;
typedef interface IMsmErrors IMsmErrors;
typedef interface IMsmDependency IMsmDependency;
typedef interface IEnumMsmDependency IEnumMsmDependency;
typedef interface IMsmDependencies IMsmDependencies;
typedef interface IMsmMerge IMsmMerge;
typedef interface IMsmGetFiles IMsmGetFiles;
typedef class MsmMerge MsmMerge;
#include "oaidl.h"
void __RPC_FAR * __RPC_USER MIDL_user_allocate(size_t);
void __RPC_USER MIDL_user_free( void __RPC_FAR * );
typedef
enum msmErrorType
    {
 msmErrorLanguageUnsupported = 1,
 msmErrorLanguageFailed = 2,
 msmErrorExclusion = 3,
 msmErrorTableMerge = 4,
 msmErrorResequenceMerge = 5,
 msmErrorFileCreate = 6,
 msmErrorDirCreate = 7,
 msmErrorFeatureRequired = 8,
 }
 msmErrorType;
extern RPC_IF_HANDLE __MIDL_itf_mergemod_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mergemod_0000_v0_0_s_ifspec;
    typedef struct IEnumMsmStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IEnumMsmString __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IEnumMsmString __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IEnumMsmString __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )(
            IEnumMsmString __RPC_FAR * This,
                       unsigned long cFetch,
                        BSTR __RPC_FAR *rgbstrStrings,
                                unsigned long __RPC_FAR *pcFetched);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )(
            IEnumMsmString __RPC_FAR * This,
                       unsigned long cSkip);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )(
            IEnumMsmString __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )(
            IEnumMsmString __RPC_FAR * This,
                                IEnumMsmString __RPC_FAR *__RPC_FAR *pemsmStrings);
        END_INTERFACE
    } IEnumMsmStringVtbl;
    interface IEnumMsmString
    {
        CONST_VTBL struct IEnumMsmStringVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> Next(This,cFetch,rgbstrStrings,pcFetched)
    (This)->lpVtbl -> Skip(This,cSkip)
    (This)->lpVtbl -> Reset(This)
    (This)->lpVtbl -> Clone(This,pemsmStrings)
HRESULT STDMETHODCALLTYPE IEnumMsmString_Next_Proxy(
    IEnumMsmString __RPC_FAR * This,
               unsigned long cFetch,
                BSTR __RPC_FAR *rgbstrStrings,
                        unsigned long __RPC_FAR *pcFetched);
void __RPC_STUB IEnumMsmString_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmString_Skip_Proxy(
    IEnumMsmString __RPC_FAR * This,
               unsigned long cSkip);
void __RPC_STUB IEnumMsmString_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmString_Reset_Proxy(
    IEnumMsmString __RPC_FAR * This);
void __RPC_STUB IEnumMsmString_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmString_Clone_Proxy(
    IEnumMsmString __RPC_FAR * This,
                        IEnumMsmString __RPC_FAR *__RPC_FAR *pemsmStrings);
void __RPC_STUB IEnumMsmString_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IMsmStringsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IMsmStrings __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IMsmStrings __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IMsmStrings __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IMsmStrings __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IMsmStrings __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IMsmStrings __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IMsmStrings __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )(
            IMsmStrings __RPC_FAR * This,
                       long Item,
                                BSTR __RPC_FAR *Return);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )(
            IMsmStrings __RPC_FAR * This,
                                long __RPC_FAR *Count);
                                    HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )(
            IMsmStrings __RPC_FAR * This,
                                IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
        END_INTERFACE
    } IMsmStringsVtbl;
    interface IMsmStrings
    {
        CONST_VTBL struct IMsmStringsVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get_Item(This,Item,Return)
    (This)->lpVtbl -> get_Count(This,Count)
    (This)->lpVtbl -> get__NewEnum(This,NewEnum)
                                HRESULT STDMETHODCALLTYPE IMsmStrings_get_Item_Proxy(
    IMsmStrings __RPC_FAR * This,
               long Item,
                        BSTR __RPC_FAR *Return);
void __RPC_STUB IMsmStrings_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmStrings_get_Count_Proxy(
    IMsmStrings __RPC_FAR * This,
                        long __RPC_FAR *Count);
void __RPC_STUB IMsmStrings_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IMsmStrings_get__NewEnum_Proxy(
    IMsmStrings __RPC_FAR * This,
                        IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
void __RPC_STUB IMsmStrings_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IMsmErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IMsmError __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IMsmError __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IMsmError __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IMsmError __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IMsmError __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IMsmError __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IMsmError __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Type )(
            IMsmError __RPC_FAR * This,
                                msmErrorType __RPC_FAR *ErrorType);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Path )(
            IMsmError __RPC_FAR * This,
                                BSTR __RPC_FAR *ErrorPath);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Language )(
            IMsmError __RPC_FAR * This,
                                short __RPC_FAR *ErrorLanguage);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DatabaseTable )(
            IMsmError __RPC_FAR * This,
                                BSTR __RPC_FAR *ErrorTable);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_DatabaseKeys )(
            IMsmError __RPC_FAR * This,
                                IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ModuleTable )(
            IMsmError __RPC_FAR * This,
                                BSTR __RPC_FAR *ErrorTable);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ModuleKeys )(
            IMsmError __RPC_FAR * This,
                                IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
        END_INTERFACE
    } IMsmErrorVtbl;
    interface IMsmError
    {
        CONST_VTBL struct IMsmErrorVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get_Type(This,ErrorType)
    (This)->lpVtbl -> get_Path(This,ErrorPath)
    (This)->lpVtbl -> get_Language(This,ErrorLanguage)
    (This)->lpVtbl -> get_DatabaseTable(This,ErrorTable)
    (This)->lpVtbl -> get_DatabaseKeys(This,ErrorKeys)
    (This)->lpVtbl -> get_ModuleTable(This,ErrorTable)
    (This)->lpVtbl -> get_ModuleKeys(This,ErrorKeys)
                                HRESULT STDMETHODCALLTYPE IMsmError_get_Type_Proxy(
    IMsmError __RPC_FAR * This,
                        msmErrorType __RPC_FAR *ErrorType);
void __RPC_STUB IMsmError_get_Type_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmError_get_Path_Proxy(
    IMsmError __RPC_FAR * This,
                        BSTR __RPC_FAR *ErrorPath);
void __RPC_STUB IMsmError_get_Path_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmError_get_Language_Proxy(
    IMsmError __RPC_FAR * This,
                        short __RPC_FAR *ErrorLanguage);
void __RPC_STUB IMsmError_get_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmError_get_DatabaseTable_Proxy(
    IMsmError __RPC_FAR * This,
                        BSTR __RPC_FAR *ErrorTable);
void __RPC_STUB IMsmError_get_DatabaseTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmError_get_DatabaseKeys_Proxy(
    IMsmError __RPC_FAR * This,
                        IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
void __RPC_STUB IMsmError_get_DatabaseKeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmError_get_ModuleTable_Proxy(
    IMsmError __RPC_FAR * This,
                        BSTR __RPC_FAR *ErrorTable);
void __RPC_STUB IMsmError_get_ModuleTable_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmError_get_ModuleKeys_Proxy(
    IMsmError __RPC_FAR * This,
                        IMsmStrings __RPC_FAR *__RPC_FAR *ErrorKeys);
void __RPC_STUB IMsmError_get_ModuleKeys_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IEnumMsmErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IEnumMsmError __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IEnumMsmError __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IEnumMsmError __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )(
            IEnumMsmError __RPC_FAR * This,
                       unsigned long cFetch,
                        IMsmError __RPC_FAR *__RPC_FAR *rgmsmErrors,
                                unsigned long __RPC_FAR *pcFetched);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )(
            IEnumMsmError __RPC_FAR * This,
                       unsigned long cSkip);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )(
            IEnumMsmError __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )(
            IEnumMsmError __RPC_FAR * This,
                                IEnumMsmError __RPC_FAR *__RPC_FAR *pemsmErrors);
        END_INTERFACE
    } IEnumMsmErrorVtbl;
    interface IEnumMsmError
    {
        CONST_VTBL struct IEnumMsmErrorVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> Next(This,cFetch,rgmsmErrors,pcFetched)
    (This)->lpVtbl -> Skip(This,cSkip)
    (This)->lpVtbl -> Reset(This)
    (This)->lpVtbl -> Clone(This,pemsmErrors)
HRESULT STDMETHODCALLTYPE IEnumMsmError_Next_Proxy(
    IEnumMsmError __RPC_FAR * This,
               unsigned long cFetch,
                IMsmError __RPC_FAR *__RPC_FAR *rgmsmErrors,
                        unsigned long __RPC_FAR *pcFetched);
void __RPC_STUB IEnumMsmError_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmError_Skip_Proxy(
    IEnumMsmError __RPC_FAR * This,
               unsigned long cSkip);
void __RPC_STUB IEnumMsmError_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmError_Reset_Proxy(
    IEnumMsmError __RPC_FAR * This);
void __RPC_STUB IEnumMsmError_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmError_Clone_Proxy(
    IEnumMsmError __RPC_FAR * This,
                        IEnumMsmError __RPC_FAR *__RPC_FAR *pemsmErrors);
void __RPC_STUB IEnumMsmError_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IMsmErrorsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IMsmErrors __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IMsmErrors __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IMsmErrors __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IMsmErrors __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IMsmErrors __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IMsmErrors __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IMsmErrors __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )(
            IMsmErrors __RPC_FAR * This,
                       long Item,
                                IMsmError __RPC_FAR *__RPC_FAR *Return);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )(
            IMsmErrors __RPC_FAR * This,
                                long __RPC_FAR *Count);
                                    HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )(
            IMsmErrors __RPC_FAR * This,
                                IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
        END_INTERFACE
    } IMsmErrorsVtbl;
    interface IMsmErrors
    {
        CONST_VTBL struct IMsmErrorsVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get_Item(This,Item,Return)
    (This)->lpVtbl -> get_Count(This,Count)
    (This)->lpVtbl -> get__NewEnum(This,NewEnum)
                                HRESULT STDMETHODCALLTYPE IMsmErrors_get_Item_Proxy(
    IMsmErrors __RPC_FAR * This,
               long Item,
                        IMsmError __RPC_FAR *__RPC_FAR *Return);
void __RPC_STUB IMsmErrors_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmErrors_get_Count_Proxy(
    IMsmErrors __RPC_FAR * This,
                        long __RPC_FAR *Count);
void __RPC_STUB IMsmErrors_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IMsmErrors_get__NewEnum_Proxy(
    IMsmErrors __RPC_FAR * This,
                        IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
void __RPC_STUB IMsmErrors_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IMsmDependencyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IMsmDependency __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IMsmDependency __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IMsmDependency __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IMsmDependency __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IMsmDependency __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IMsmDependency __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IMsmDependency __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Module )(
            IMsmDependency __RPC_FAR * This,
                                BSTR __RPC_FAR *Module);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Language )(
            IMsmDependency __RPC_FAR * This,
                                short __RPC_FAR *Language);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Version )(
            IMsmDependency __RPC_FAR * This,
                                BSTR __RPC_FAR *Version);
        END_INTERFACE
    } IMsmDependencyVtbl;
    interface IMsmDependency
    {
        CONST_VTBL struct IMsmDependencyVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get_Module(This,Module)
    (This)->lpVtbl -> get_Language(This,Language)
    (This)->lpVtbl -> get_Version(This,Version)
                                HRESULT STDMETHODCALLTYPE IMsmDependency_get_Module_Proxy(
    IMsmDependency __RPC_FAR * This,
                        BSTR __RPC_FAR *Module);
void __RPC_STUB IMsmDependency_get_Module_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmDependency_get_Language_Proxy(
    IMsmDependency __RPC_FAR * This,
                        short __RPC_FAR *Language);
void __RPC_STUB IMsmDependency_get_Language_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmDependency_get_Version_Proxy(
    IMsmDependency __RPC_FAR * This,
                        BSTR __RPC_FAR *Version);
void __RPC_STUB IMsmDependency_get_Version_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IEnumMsmDependencyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IEnumMsmDependency __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IEnumMsmDependency __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IEnumMsmDependency __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Next )(
            IEnumMsmDependency __RPC_FAR * This,
                       unsigned long cFetch,
                        IMsmDependency __RPC_FAR *__RPC_FAR *rgmsmDependencies,
                                unsigned long __RPC_FAR *pcFetched);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Skip )(
            IEnumMsmDependency __RPC_FAR * This,
                       unsigned long cSkip);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Reset )(
            IEnumMsmDependency __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Clone )(
            IEnumMsmDependency __RPC_FAR * This,
                                IEnumMsmDependency __RPC_FAR *__RPC_FAR *pemsmDependencies);
        END_INTERFACE
    } IEnumMsmDependencyVtbl;
    interface IEnumMsmDependency
    {
        CONST_VTBL struct IEnumMsmDependencyVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> Next(This,cFetch,rgmsmDependencies,pcFetched)
    (This)->lpVtbl -> Skip(This,cSkip)
    (This)->lpVtbl -> Reset(This)
    (This)->lpVtbl -> Clone(This,pemsmDependencies)
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Next_Proxy(
    IEnumMsmDependency __RPC_FAR * This,
               unsigned long cFetch,
                IMsmDependency __RPC_FAR *__RPC_FAR *rgmsmDependencies,
                        unsigned long __RPC_FAR *pcFetched);
void __RPC_STUB IEnumMsmDependency_Next_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Skip_Proxy(
    IEnumMsmDependency __RPC_FAR * This,
               unsigned long cSkip);
void __RPC_STUB IEnumMsmDependency_Skip_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Reset_Proxy(
    IEnumMsmDependency __RPC_FAR * This);
void __RPC_STUB IEnumMsmDependency_Reset_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
HRESULT STDMETHODCALLTYPE IEnumMsmDependency_Clone_Proxy(
    IEnumMsmDependency __RPC_FAR * This,
                        IEnumMsmDependency __RPC_FAR *__RPC_FAR *pemsmDependencies);
void __RPC_STUB IEnumMsmDependency_Clone_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IMsmDependenciesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IMsmDependencies __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IMsmDependencies __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IMsmDependencies __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IMsmDependencies __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IMsmDependencies __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IMsmDependencies __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IMsmDependencies __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Item )(
            IMsmDependencies __RPC_FAR * This,
                       long Item,
                                IMsmDependency __RPC_FAR *__RPC_FAR *Return);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Count )(
            IMsmDependencies __RPC_FAR * This,
                                long __RPC_FAR *Count);
                                    HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get__NewEnum )(
            IMsmDependencies __RPC_FAR * This,
                                IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
        END_INTERFACE
    } IMsmDependenciesVtbl;
    interface IMsmDependencies
    {
        CONST_VTBL struct IMsmDependenciesVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get_Item(This,Item,Return)
    (This)->lpVtbl -> get_Count(This,Count)
    (This)->lpVtbl -> get__NewEnum(This,NewEnum)
                                HRESULT STDMETHODCALLTYPE IMsmDependencies_get_Item_Proxy(
    IMsmDependencies __RPC_FAR * This,
               long Item,
                        IMsmDependency __RPC_FAR *__RPC_FAR *Return);
void __RPC_STUB IMsmDependencies_get_Item_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmDependencies_get_Count_Proxy(
    IMsmDependencies __RPC_FAR * This,
                        long __RPC_FAR *Count);
void __RPC_STUB IMsmDependencies_get_Count_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                            HRESULT STDMETHODCALLTYPE IMsmDependencies_get__NewEnum_Proxy(
    IMsmDependencies __RPC_FAR * This,
                        IUnknown __RPC_FAR *__RPC_FAR *NewEnum);
void __RPC_STUB IMsmDependencies_get__NewEnum_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IMsmMergeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IMsmMerge __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IMsmMerge __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IMsmMerge __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IMsmMerge __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IMsmMerge __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IMsmMerge __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IMsmMerge __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenDatabase )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR Path);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenModule )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR Path,
                       const short Language);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloseDatabase )(
            IMsmMerge __RPC_FAR * This,
                       const VARIANT_BOOL Commit);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloseModule )(
            IMsmMerge __RPC_FAR * This);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *OpenLog )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR Path);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *CloseLog )(
            IMsmMerge __RPC_FAR * This);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Log )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR Message);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Errors )(
            IMsmMerge __RPC_FAR * This,
                                IMsmErrors __RPC_FAR *__RPC_FAR *Errors);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_Dependencies )(
            IMsmMerge __RPC_FAR * This,
                                IMsmDependencies __RPC_FAR *__RPC_FAR *Dependencies);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Merge )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR Feature,
                       const BSTR RedirectDir);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Connect )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR Feature);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExtractCAB )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR FileName);
                               HRESULT ( STDMETHODCALLTYPE __RPC_FAR *ExtractFiles )(
            IMsmMerge __RPC_FAR * This,
                       const BSTR Path);
        END_INTERFACE
    } IMsmMergeVtbl;
    interface IMsmMerge
    {
        CONST_VTBL struct IMsmMergeVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> OpenDatabase(This,Path)
    (This)->lpVtbl -> OpenModule(This,Path,Language)
    (This)->lpVtbl -> CloseDatabase(This,Commit)
    (This)->lpVtbl -> CloseModule(This)
    (This)->lpVtbl -> OpenLog(This,Path)
    (This)->lpVtbl -> CloseLog(This)
    (This)->lpVtbl -> Log(This,Message)
    (This)->lpVtbl -> get_Errors(This,Errors)
    (This)->lpVtbl -> get_Dependencies(This,Dependencies)
    (This)->lpVtbl -> Merge(This,Feature,RedirectDir)
    (This)->lpVtbl -> Connect(This,Feature)
    (This)->lpVtbl -> ExtractCAB(This,FileName)
    (This)->lpVtbl -> ExtractFiles(This,Path)
                       HRESULT STDMETHODCALLTYPE IMsmMerge_OpenDatabase_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR Path);
void __RPC_STUB IMsmMerge_OpenDatabase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_OpenModule_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR Path,
               const short Language);
void __RPC_STUB IMsmMerge_OpenModule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_CloseDatabase_Proxy(
    IMsmMerge __RPC_FAR * This,
               const VARIANT_BOOL Commit);
void __RPC_STUB IMsmMerge_CloseDatabase_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_CloseModule_Proxy(
    IMsmMerge __RPC_FAR * This);
void __RPC_STUB IMsmMerge_CloseModule_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_OpenLog_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR Path);
void __RPC_STUB IMsmMerge_OpenLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_CloseLog_Proxy(
    IMsmMerge __RPC_FAR * This);
void __RPC_STUB IMsmMerge_CloseLog_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_Log_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR Message);
void __RPC_STUB IMsmMerge_Log_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmMerge_get_Errors_Proxy(
    IMsmMerge __RPC_FAR * This,
                        IMsmErrors __RPC_FAR *__RPC_FAR *Errors);
void __RPC_STUB IMsmMerge_get_Errors_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                                HRESULT STDMETHODCALLTYPE IMsmMerge_get_Dependencies_Proxy(
    IMsmMerge __RPC_FAR * This,
                        IMsmDependencies __RPC_FAR *__RPC_FAR *Dependencies);
void __RPC_STUB IMsmMerge_get_Dependencies_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_Merge_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR Feature,
               const BSTR RedirectDir);
void __RPC_STUB IMsmMerge_Merge_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_Connect_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR Feature);
void __RPC_STUB IMsmMerge_Connect_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_ExtractCAB_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR FileName);
void __RPC_STUB IMsmMerge_ExtractCAB_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                       HRESULT STDMETHODCALLTYPE IMsmMerge_ExtractFiles_Proxy(
    IMsmMerge __RPC_FAR * This,
               const BSTR Path);
void __RPC_STUB IMsmMerge_ExtractFiles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
    typedef struct IMsmGetFilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *QueryInterface )(
            IMsmGetFiles __RPC_FAR * This,
                       REFIID riid,
                                void __RPC_FAR *__RPC_FAR *ppvObject);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *AddRef )(
            IMsmGetFiles __RPC_FAR * This);
        ULONG ( STDMETHODCALLTYPE __RPC_FAR *Release )(
            IMsmGetFiles __RPC_FAR * This);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfoCount )(
            IMsmGetFiles __RPC_FAR * This,
                        UINT __RPC_FAR *pctinfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetTypeInfo )(
            IMsmGetFiles __RPC_FAR * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo __RPC_FAR *__RPC_FAR *ppTInfo);
        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *GetIDsOfNames )(
            IMsmGetFiles __RPC_FAR * This,
                       REFIID riid,
                                LPOLESTR __RPC_FAR *rgszNames,
                       UINT cNames,
                       LCID lcid,
                                 DISPID __RPC_FAR *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE __RPC_FAR *Invoke )(
            IMsmGetFiles __RPC_FAR * This,
                       DISPID dispIdMember,
                       REFIID riid,
                       LCID lcid,
                       WORD wFlags,
                            DISPPARAMS __RPC_FAR *pDispParams,
                        VARIANT __RPC_FAR *pVarResult,
                        EXCEPINFO __RPC_FAR *pExcepInfo,
                        UINT __RPC_FAR *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE __RPC_FAR *get_ModuleFiles )(
            IMsmGetFiles __RPC_FAR * This,
                                IMsmStrings __RPC_FAR *__RPC_FAR *Files);
        END_INTERFACE
    } IMsmGetFilesVtbl;
    interface IMsmGetFiles
    {
        CONST_VTBL struct IMsmGetFilesVtbl __RPC_FAR *lpVtbl;
    };
    (This)->lpVtbl -> QueryInterface(This,riid,ppvObject)
    (This)->lpVtbl -> AddRef(This)
    (This)->lpVtbl -> Release(This)
    (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo)
    (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo)
    (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
    (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
    (This)->lpVtbl -> get_ModuleFiles(This,Files)
                                HRESULT STDMETHODCALLTYPE IMsmGetFiles_get_ModuleFiles_Proxy(
    IMsmGetFiles __RPC_FAR * This,
                        IMsmStrings __RPC_FAR *__RPC_FAR *Files);
void __RPC_STUB IMsmGetFiles_get_ModuleFiles_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
class DECLSPEC_UUID("0ADDA830-2C26-11D2-AD65-00A0C9AF11A6")
MsmMerge;
unsigned long __RPC_USER BSTR_UserSize( unsigned long __RPC_FAR *, unsigned long , BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER BSTR_UserMarshal( unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
unsigned char __RPC_FAR * __RPC_USER BSTR_UserUnmarshal(unsigned long __RPC_FAR *, unsigned char __RPC_FAR *, BSTR __RPC_FAR * );
void __RPC_USER BSTR_UserFree( unsigned long __RPC_FAR *, BSTR __RPC_FAR * );
}
DEFINE_GUID(IID_IEnumMsmString, 0x0ADDA826,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IMsmStrings, 0x0ADDA827,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IMsmError, 0x0ADDA828,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IEnumMsmError, 0x0ADDA829,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IMsmErrors, 0x0ADDA82A,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IMsmDependency, 0x0ADDA82B,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IEnumMsmDependency, 0x0ADDA82C,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IMsmDependencies, 0x0ADDA82D,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IMsmMerge, 0x0ADDA82E,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(IID_IMsmGetFiles, 0x7041ae26, 0x2d78, 0x11d2, 0x88, 0x8a, 0x0, 0xa0, 0xc9, 0x81, 0xb0, 0x15);
DEFINE_GUID(LIBID_MsmMergeTypeLib, 0x0ADDA82F,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
DEFINE_GUID(CLSID_MsmMerge, 0x0ADDA830,0x2C26,0x11D2, 0xAD,0x65,0x00,0xA0,0xC9,0xAF,0x11,0xA6);
#endif
#pragma endregion
