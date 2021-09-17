#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IRichChunk IRichChunk;
typedef interface ICondition ICondition;
typedef interface ICondition2 ICondition2;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
typedef
enum tagCONDITION_TYPE
    {
        CT_AND_CONDITION = 0,
        CT_OR_CONDITION = ( CT_AND_CONDITION + 1 ) ,
        CT_NOT_CONDITION = ( CT_OR_CONDITION + 1 ) ,
        CT_LEAF_CONDITION = ( CT_NOT_CONDITION + 1 )
    } CONDITION_TYPE;
typedef
enum tagCONDITION_OPERATION
    {
        COP_IMPLICIT = 0,
        COP_EQUAL = ( COP_IMPLICIT + 1 ) ,
        COP_NOTEQUAL = ( COP_EQUAL + 1 ) ,
        COP_LESSTHAN = ( COP_NOTEQUAL + 1 ) ,
        COP_GREATERTHAN = ( COP_LESSTHAN + 1 ) ,
        COP_LESSTHANOREQUAL = ( COP_GREATERTHAN + 1 ) ,
        COP_GREATERTHANOREQUAL = ( COP_LESSTHANOREQUAL + 1 ) ,
        COP_VALUE_STARTSWITH = ( COP_GREATERTHANOREQUAL + 1 ) ,
        COP_VALUE_ENDSWITH = ( COP_VALUE_STARTSWITH + 1 ) ,
        COP_VALUE_CONTAINS = ( COP_VALUE_ENDSWITH + 1 ) ,
        COP_VALUE_NOTCONTAINS = ( COP_VALUE_CONTAINS + 1 ) ,
        COP_DOSWILDCARDS = ( COP_VALUE_NOTCONTAINS + 1 ) ,
        COP_WORD_EQUAL = ( COP_DOSWILDCARDS + 1 ) ,
        COP_WORD_STARTSWITH = ( COP_WORD_EQUAL + 1 ) ,
        COP_APPLICATION_SPECIFIC = ( COP_WORD_STARTSWITH + 1 )
    } CONDITION_OPERATION;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_structuredquerycondition_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquerycondition_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IRichChunk;
    typedef struct IRichChunkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRichChunk * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRichChunk * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRichChunk * This);
                      HRESULT ( STDMETHODCALLTYPE *GetData )(
            IRichChunk * This,
            _Out_opt_ ULONG *pFirstPos,
            _Out_opt_ ULONG *pLength,
            _Outptr_opt_result_maybenull_ LPWSTR *ppsz,
            _Out_opt_ PROPVARIANT *pValue);
        END_INTERFACE
    } IRichChunkVtbl;
    interface IRichChunk
    {
        CONST_VTBL struct IRichChunkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetData(This,pFirstPos,pLength,ppsz,pValue) )
                HRESULT STDMETHODCALLTYPE IRichChunk_RemoteGetData_Proxy(
    __RPC__in IRichChunk * This,
                __RPC__out ULONG *pFirstPos,
                __RPC__out ULONG *pLength,
                __RPC__deref_out_opt LPWSTR *ppsz,
                __RPC__out PROPVARIANT *pValue);
void __RPC_STUB IRichChunk_RemoteGetData_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ICondition;
    typedef struct IConditionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICondition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICondition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICondition * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in ICondition * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in ICondition * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in ICondition * This,
                               __RPC__in_opt IStream *pStm);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in ICondition * This,
                               __RPC__in_opt IStream *pStm,
                       BOOL fClearDirty);
        HRESULT ( STDMETHODCALLTYPE *GetSizeMax )(
            __RPC__in ICondition * This,
                        __RPC__out ULARGE_INTEGER *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetConditionType )(
            __RPC__in ICondition * This,
                                __RPC__out CONDITION_TYPE *pNodeType);
        HRESULT ( STDMETHODCALLTYPE *GetSubConditions )(
            __RPC__in ICondition * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *GetComparisonInfo )(
            ICondition * This,
            _Outptr_opt_result_maybenull_ LPWSTR *ppszPropertyName,
            _Out_opt_ CONDITION_OPERATION *pcop,
            _Out_opt_ PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *GetValueType )(
            __RPC__in ICondition * This,
                                __RPC__deref_out_opt LPWSTR *ppszValueTypeName);
        HRESULT ( STDMETHODCALLTYPE *GetValueNormalization )(
            __RPC__in ICondition * This,
                                __RPC__deref_out_opt LPWSTR *ppszNormalization);
                      HRESULT ( STDMETHODCALLTYPE *GetInputTerms )(
            ICondition * This,
            _Out_opt_ IRichChunk **ppPropertyTerm,
            _Out_opt_ IRichChunk **ppOperationTerm,
            _Out_opt_ IRichChunk **ppValueTerm);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ICondition * This,
                                __RPC__deref_out_opt ICondition **ppc);
        END_INTERFACE
    } IConditionVtbl;
    interface ICondition
    {
        CONST_VTBL struct IConditionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pStm) )
    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
    ( (This)->lpVtbl -> GetConditionType(This,pNodeType) )
    ( (This)->lpVtbl -> GetSubConditions(This,riid,ppv) )
    ( (This)->lpVtbl -> GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) )
    ( (This)->lpVtbl -> GetValueType(This,ppszValueTypeName) )
    ( (This)->lpVtbl -> GetValueNormalization(This,ppszNormalization) )
    ( (This)->lpVtbl -> GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) )
    ( (This)->lpVtbl -> Clone(This,ppc) )
                HRESULT STDMETHODCALLTYPE ICondition_RemoteGetComparisonInfo_Proxy(
    __RPC__in ICondition * This,
                __RPC__deref_out_opt LPWSTR *ppszPropertyName,
                __RPC__out CONDITION_OPERATION *pcop,
                __RPC__out PROPVARIANT *ppropvar);
void __RPC_STUB ICondition_RemoteGetComparisonInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE ICondition_RemoteGetInputTerms_Proxy(
    __RPC__in ICondition * This,
                __RPC__deref_out_opt IRichChunk **ppPropertyTerm,
                __RPC__deref_out_opt IRichChunk **ppOperationTerm,
                __RPC__deref_out_opt IRichChunk **ppValueTerm);
void __RPC_STUB ICondition_RemoteGetInputTerms_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_ICondition2;
    typedef struct ICondition2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICondition2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICondition2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICondition2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in ICondition2 * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *IsDirty )(
            __RPC__in ICondition2 * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in ICondition2 * This,
                               __RPC__in_opt IStream *pStm);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in ICondition2 * This,
                               __RPC__in_opt IStream *pStm,
                       BOOL fClearDirty);
        HRESULT ( STDMETHODCALLTYPE *GetSizeMax )(
            __RPC__in ICondition2 * This,
                        __RPC__out ULARGE_INTEGER *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *GetConditionType )(
            __RPC__in ICondition2 * This,
                                __RPC__out CONDITION_TYPE *pNodeType);
        HRESULT ( STDMETHODCALLTYPE *GetSubConditions )(
            __RPC__in ICondition2 * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *GetComparisonInfo )(
            ICondition2 * This,
            _Outptr_opt_result_maybenull_ LPWSTR *ppszPropertyName,
            _Out_opt_ CONDITION_OPERATION *pcop,
            _Out_opt_ PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *GetValueType )(
            __RPC__in ICondition2 * This,
                                __RPC__deref_out_opt LPWSTR *ppszValueTypeName);
        HRESULT ( STDMETHODCALLTYPE *GetValueNormalization )(
            __RPC__in ICondition2 * This,
                                __RPC__deref_out_opt LPWSTR *ppszNormalization);
                      HRESULT ( STDMETHODCALLTYPE *GetInputTerms )(
            ICondition2 * This,
            _Out_opt_ IRichChunk **ppPropertyTerm,
            _Out_opt_ IRichChunk **ppOperationTerm,
            _Out_opt_ IRichChunk **ppValueTerm);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ICondition2 * This,
                                __RPC__deref_out_opt ICondition **ppc);
        HRESULT ( STDMETHODCALLTYPE *GetLocale )(
            __RPC__in ICondition2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszLocaleName);
                      HRESULT ( STDMETHODCALLTYPE *GetLeafConditionInfo )(
            ICondition2 * This,
            _Out_opt_ PROPERTYKEY *ppropkey,
            _Out_opt_ CONDITION_OPERATION *pcop,
            _Out_opt_ PROPVARIANT *ppropvar);
        END_INTERFACE
    } ICondition2Vtbl;
    interface ICondition2
    {
        CONST_VTBL struct ICondition2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> IsDirty(This) )
    ( (This)->lpVtbl -> Load(This,pStm) )
    ( (This)->lpVtbl -> Save(This,pStm,fClearDirty) )
    ( (This)->lpVtbl -> GetSizeMax(This,pcbSize) )
    ( (This)->lpVtbl -> GetConditionType(This,pNodeType) )
    ( (This)->lpVtbl -> GetSubConditions(This,riid,ppv) )
    ( (This)->lpVtbl -> GetComparisonInfo(This,ppszPropertyName,pcop,ppropvar) )
    ( (This)->lpVtbl -> GetValueType(This,ppszValueTypeName) )
    ( (This)->lpVtbl -> GetValueNormalization(This,ppszNormalization) )
    ( (This)->lpVtbl -> GetInputTerms(This,ppPropertyTerm,ppOperationTerm,ppValueTerm) )
    ( (This)->lpVtbl -> Clone(This,ppc) )
    ( (This)->lpVtbl -> GetLocale(This,ppszLocaleName) )
    ( (This)->lpVtbl -> GetLeafConditionInfo(This,ppropkey,pcop,ppropvar) )
                HRESULT STDMETHODCALLTYPE ICondition2_RemoteGetLeafConditionInfo_Proxy(
    __RPC__in ICondition2 * This,
                __RPC__out PROPERTYKEY *ppropkey,
                __RPC__out CONDITION_OPERATION *pcop,
                __RPC__out PROPVARIANT *ppropvar);
void __RPC_STUB ICondition2_RemoteGetLeafConditionInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_structuredquerycondition_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquerycondition_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
              HRESULT STDMETHODCALLTYPE IRichChunk_GetData_Proxy(
    IRichChunk * This,
    _Out_opt_ ULONG *pFirstPos,
    _Out_opt_ ULONG *pLength,
    _Outptr_opt_result_maybenull_ LPWSTR *ppsz,
    _Out_opt_ PROPVARIANT *pValue);
                HRESULT STDMETHODCALLTYPE IRichChunk_GetData_Stub(
    __RPC__in IRichChunk * This,
                __RPC__out ULONG *pFirstPos,
                __RPC__out ULONG *pLength,
                __RPC__deref_out_opt LPWSTR *ppsz,
                __RPC__out PROPVARIANT *pValue);
              HRESULT STDMETHODCALLTYPE ICondition_GetComparisonInfo_Proxy(
    ICondition * This,
    _Outptr_opt_result_maybenull_ LPWSTR *ppszPropertyName,
    _Out_opt_ CONDITION_OPERATION *pcop,
    _Out_opt_ PROPVARIANT *ppropvar);
                HRESULT STDMETHODCALLTYPE ICondition_GetComparisonInfo_Stub(
    __RPC__in ICondition * This,
                __RPC__deref_out_opt LPWSTR *ppszPropertyName,
                __RPC__out CONDITION_OPERATION *pcop,
                __RPC__out PROPVARIANT *ppropvar);
              HRESULT STDMETHODCALLTYPE ICondition_GetInputTerms_Proxy(
    ICondition * This,
    _Out_opt_ IRichChunk **ppPropertyTerm,
    _Out_opt_ IRichChunk **ppOperationTerm,
    _Out_opt_ IRichChunk **ppValueTerm);
                HRESULT STDMETHODCALLTYPE ICondition_GetInputTerms_Stub(
    __RPC__in ICondition * This,
                __RPC__deref_out_opt IRichChunk **ppPropertyTerm,
                __RPC__deref_out_opt IRichChunk **ppOperationTerm,
                __RPC__deref_out_opt IRichChunk **ppValueTerm);
              HRESULT STDMETHODCALLTYPE ICondition2_GetLeafConditionInfo_Proxy(
    ICondition2 * This,
    _Out_opt_ PROPERTYKEY *ppropkey,
    _Out_opt_ CONDITION_OPERATION *pcop,
    _Out_opt_ PROPVARIANT *ppropvar);
                HRESULT STDMETHODCALLTYPE ICondition2_GetLeafConditionInfo_Stub(
    __RPC__in ICondition2 * This,
                __RPC__out PROPERTYKEY *ppropkey,
                __RPC__out CONDITION_OPERATION *pcop,
                __RPC__out PROPVARIANT *ppropvar);
}
