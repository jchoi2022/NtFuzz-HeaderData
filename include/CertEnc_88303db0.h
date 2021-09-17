#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertEncodeStringArray ICertEncodeStringArray;
typedef interface ICertEncodeStringArray2 ICertEncodeStringArray2;
typedef interface ICertEncodeLongArray ICertEncodeLongArray;
typedef interface ICertEncodeLongArray2 ICertEncodeLongArray2;
typedef interface ICertEncodeDateArray ICertEncodeDateArray;
typedef interface ICertEncodeDateArray2 ICertEncodeDateArray2;
typedef interface ICertEncodeCRLDistInfo ICertEncodeCRLDistInfo;
typedef interface ICertEncodeCRLDistInfo2 ICertEncodeCRLDistInfo2;
typedef interface ICertEncodeAltName ICertEncodeAltName;
typedef interface ICertEncodeAltName2 ICertEncodeAltName2;
typedef interface ICertEncodeBitString ICertEncodeBitString;
typedef interface ICertEncodeBitString2 ICertEncodeBitString2;
typedef class CCertEncodeStringArray CCertEncodeStringArray;
typedef class CCertEncodeLongArray CCertEncodeLongArray;
typedef class CCertEncodeDateArray CCertEncodeDateArray;
typedef class CCertEncodeCRLDistInfo CCertEncodeCRLDistInfo;
typedef class CCertEncodeAltName CCertEncodeAltName;
typedef class CCertEncodeBitString CCertEncodeBitString;
#include "wtypes.h"
#include "certenroll.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertEncodeStringArray;
    typedef struct ICertEncodeStringArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeStringArray * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeStringArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeStringArray * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeStringArray * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeStringArray * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeStringArray * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeStringArray * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeStringArray * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetStringType )(
            __RPC__in ICertEncodeStringArray * This,
                                __RPC__out LONG *pStringType);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ICertEncodeStringArray * This,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICertEncodeStringArray * This,
                       LONG Index,
                                __RPC__deref_out_opt BSTR *pstr);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeStringArray * This,
                       LONG Count,
                       LONG StringType);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ICertEncodeStringArray * This,
                       LONG Index,
                       __RPC__in const BSTR str);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeStringArray * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        END_INTERFACE
    } ICertEncodeStringArrayVtbl;
    interface ICertEncodeStringArray
    {
        CONST_VTBL struct ICertEncodeStringArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetStringType(This,pStringType) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetValue(This,Index,pstr) )
    ( (This)->lpVtbl -> Reset(This,Count,StringType) )
    ( (This)->lpVtbl -> SetValue(This,Index,str) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
EXTERN_C const IID IID_ICertEncodeStringArray2;
    typedef struct ICertEncodeStringArray2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeStringArray2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeStringArray2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeStringArray2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeStringArray2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeStringArray2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeStringArray2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeStringArray2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeStringArray2 * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetStringType )(
            __RPC__in ICertEncodeStringArray2 * This,
                                __RPC__out LONG *pStringType);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ICertEncodeStringArray2 * This,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICertEncodeStringArray2 * This,
                       LONG Index,
                                __RPC__deref_out_opt BSTR *pstr);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeStringArray2 * This,
                       LONG Count,
                       LONG StringType);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ICertEncodeStringArray2 * This,
                       LONG Index,
                       __RPC__in const BSTR str);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeStringArray2 * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        HRESULT ( STDMETHODCALLTYPE *DecodeBlob )(
            __RPC__in ICertEncodeStringArray2 * This,
                       __RPC__in const BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *EncodeBlob )(
            __RPC__in ICertEncodeStringArray2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedData);
        END_INTERFACE
    } ICertEncodeStringArray2Vtbl;
    interface ICertEncodeStringArray2
    {
        CONST_VTBL struct ICertEncodeStringArray2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetStringType(This,pStringType) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetValue(This,Index,pstr) )
    ( (This)->lpVtbl -> Reset(This,Count,StringType) )
    ( (This)->lpVtbl -> SetValue(This,Index,str) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
    ( (This)->lpVtbl -> DecodeBlob(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> EncodeBlob(This,Encoding,pstrEncodedData) )
EXTERN_C const IID IID_ICertEncodeLongArray;
    typedef struct ICertEncodeLongArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeLongArray * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeLongArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeLongArray * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeLongArray * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeLongArray * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeLongArray * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeLongArray * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeLongArray * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ICertEncodeLongArray * This,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICertEncodeLongArray * This,
                       LONG Index,
                                __RPC__out LONG *pValue);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeLongArray * This,
                       LONG Count);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ICertEncodeLongArray * This,
                       LONG Index,
                       LONG Value);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeLongArray * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        END_INTERFACE
    } ICertEncodeLongArrayVtbl;
    interface ICertEncodeLongArray
    {
        CONST_VTBL struct ICertEncodeLongArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetValue(This,Index,pValue) )
    ( (This)->lpVtbl -> Reset(This,Count) )
    ( (This)->lpVtbl -> SetValue(This,Index,Value) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
EXTERN_C const IID IID_ICertEncodeLongArray2;
    typedef struct ICertEncodeLongArray2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeLongArray2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeLongArray2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeLongArray2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeLongArray2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeLongArray2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeLongArray2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeLongArray2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeLongArray2 * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ICertEncodeLongArray2 * This,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICertEncodeLongArray2 * This,
                       LONG Index,
                                __RPC__out LONG *pValue);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeLongArray2 * This,
                       LONG Count);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ICertEncodeLongArray2 * This,
                       LONG Index,
                       LONG Value);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeLongArray2 * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        HRESULT ( STDMETHODCALLTYPE *DecodeBlob )(
            __RPC__in ICertEncodeLongArray2 * This,
                       __RPC__in const BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *EncodeBlob )(
            __RPC__in ICertEncodeLongArray2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedData);
        END_INTERFACE
    } ICertEncodeLongArray2Vtbl;
    interface ICertEncodeLongArray2
    {
        CONST_VTBL struct ICertEncodeLongArray2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetValue(This,Index,pValue) )
    ( (This)->lpVtbl -> Reset(This,Count) )
    ( (This)->lpVtbl -> SetValue(This,Index,Value) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
    ( (This)->lpVtbl -> DecodeBlob(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> EncodeBlob(This,Encoding,pstrEncodedData) )
EXTERN_C const IID IID_ICertEncodeDateArray;
    typedef struct ICertEncodeDateArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeDateArray * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeDateArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeDateArray * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeDateArray * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeDateArray * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeDateArray * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeDateArray * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeDateArray * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ICertEncodeDateArray * This,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICertEncodeDateArray * This,
                       LONG Index,
                                __RPC__out DATE *pValue);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeDateArray * This,
                       LONG Count);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ICertEncodeDateArray * This,
                       LONG Index,
                       DATE Value);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeDateArray * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        END_INTERFACE
    } ICertEncodeDateArrayVtbl;
    interface ICertEncodeDateArray
    {
        CONST_VTBL struct ICertEncodeDateArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetValue(This,Index,pValue) )
    ( (This)->lpVtbl -> Reset(This,Count) )
    ( (This)->lpVtbl -> SetValue(This,Index,Value) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
EXTERN_C const IID IID_ICertEncodeDateArray2;
    typedef struct ICertEncodeDateArray2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeDateArray2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeDateArray2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeDateArray2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeDateArray2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeDateArray2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeDateArray2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeDateArray2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeDateArray2 * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in ICertEncodeDateArray2 * This,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ICertEncodeDateArray2 * This,
                       LONG Index,
                                __RPC__out DATE *pValue);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeDateArray2 * This,
                       LONG Count);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ICertEncodeDateArray2 * This,
                       LONG Index,
                       DATE Value);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeDateArray2 * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        HRESULT ( STDMETHODCALLTYPE *DecodeBlob )(
            __RPC__in ICertEncodeDateArray2 * This,
                       __RPC__in const BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *EncodeBlob )(
            __RPC__in ICertEncodeDateArray2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedData);
        END_INTERFACE
    } ICertEncodeDateArray2Vtbl;
    interface ICertEncodeDateArray2
    {
        CONST_VTBL struct ICertEncodeDateArray2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
    ( (This)->lpVtbl -> GetValue(This,Index,pValue) )
    ( (This)->lpVtbl -> Reset(This,Count) )
    ( (This)->lpVtbl -> SetValue(This,Index,Value) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
    ( (This)->lpVtbl -> DecodeBlob(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> EncodeBlob(This,Encoding,pstrEncodedData) )
EXTERN_C const IID IID_ICertEncodeCRLDistInfo;
    typedef struct ICertEncodeCRLDistInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeCRLDistInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeCRLDistInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeCRLDistInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetDistPointCount )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                                __RPC__out LONG *pDistPointCount);
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       LONG DistPointIndex,
                                __RPC__out LONG *pNameCount);
        HRESULT ( STDMETHODCALLTYPE *GetNameChoice )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       LONG DistPointIndex,
                       LONG NameIndex,
                                __RPC__out LONG *pNameChoice);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       LONG DistPointIndex,
                       LONG NameIndex,
                                __RPC__deref_out_opt BSTR *pstrName);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       LONG DistPointCount);
        HRESULT ( STDMETHODCALLTYPE *SetNameCount )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       LONG DistPointIndex,
                       LONG NameCount);
        HRESULT ( STDMETHODCALLTYPE *SetNameEntry )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                       LONG DistPointIndex,
                       LONG NameIndex,
                       LONG NameChoice,
                       __RPC__in const BSTR strName);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeCRLDistInfo * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        END_INTERFACE
    } ICertEncodeCRLDistInfoVtbl;
    interface ICertEncodeCRLDistInfo
    {
        CONST_VTBL struct ICertEncodeCRLDistInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetDistPointCount(This,pDistPointCount) )
    ( (This)->lpVtbl -> GetNameCount(This,DistPointIndex,pNameCount) )
    ( (This)->lpVtbl -> GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice) )
    ( (This)->lpVtbl -> GetName(This,DistPointIndex,NameIndex,pstrName) )
    ( (This)->lpVtbl -> Reset(This,DistPointCount) )
    ( (This)->lpVtbl -> SetNameCount(This,DistPointIndex,NameCount) )
    ( (This)->lpVtbl -> SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
EXTERN_C const IID IID_ICertEncodeCRLDistInfo2;
    typedef struct ICertEncodeCRLDistInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeCRLDistInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeCRLDistInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeCRLDistInfo2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetDistPointCount )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                                __RPC__out LONG *pDistPointCount);
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       LONG DistPointIndex,
                                __RPC__out LONG *pNameCount);
        HRESULT ( STDMETHODCALLTYPE *GetNameChoice )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       LONG DistPointIndex,
                       LONG NameIndex,
                                __RPC__out LONG *pNameChoice);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       LONG DistPointIndex,
                       LONG NameIndex,
                                __RPC__deref_out_opt BSTR *pstrName);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       LONG DistPointCount);
        HRESULT ( STDMETHODCALLTYPE *SetNameCount )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       LONG DistPointIndex,
                       LONG NameCount);
        HRESULT ( STDMETHODCALLTYPE *SetNameEntry )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       LONG DistPointIndex,
                       LONG NameIndex,
                       LONG NameChoice,
                       __RPC__in const BSTR strName);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        HRESULT ( STDMETHODCALLTYPE *DecodeBlob )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                       __RPC__in const BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *EncodeBlob )(
            __RPC__in ICertEncodeCRLDistInfo2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedData);
        END_INTERFACE
    } ICertEncodeCRLDistInfo2Vtbl;
    interface ICertEncodeCRLDistInfo2
    {
        CONST_VTBL struct ICertEncodeCRLDistInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetDistPointCount(This,pDistPointCount) )
    ( (This)->lpVtbl -> GetNameCount(This,DistPointIndex,pNameCount) )
    ( (This)->lpVtbl -> GetNameChoice(This,DistPointIndex,NameIndex,pNameChoice) )
    ( (This)->lpVtbl -> GetName(This,DistPointIndex,NameIndex,pstrName) )
    ( (This)->lpVtbl -> Reset(This,DistPointCount) )
    ( (This)->lpVtbl -> SetNameCount(This,DistPointIndex,NameCount) )
    ( (This)->lpVtbl -> SetNameEntry(This,DistPointIndex,NameIndex,NameChoice,strName) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
    ( (This)->lpVtbl -> DecodeBlob(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> EncodeBlob(This,Encoding,pstrEncodedData) )
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertEncodeAltName;
    typedef struct ICertEncodeAltNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeAltName * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeAltName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeAltName * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeAltName * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeAltName * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeAltName * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeAltName * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeAltName * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )(
            __RPC__in ICertEncodeAltName * This,
                                __RPC__out LONG *pNameCount);
        HRESULT ( STDMETHODCALLTYPE *GetNameChoice )(
            __RPC__in ICertEncodeAltName * This,
                       LONG NameIndex,
                                __RPC__out LONG *pNameChoice);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ICertEncodeAltName * This,
                       LONG NameIndex,
                                __RPC__deref_out_opt BSTR *pstrName);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeAltName * This,
                       LONG NameCount);
        HRESULT ( STDMETHODCALLTYPE *SetNameEntry )(
            __RPC__in ICertEncodeAltName * This,
                       LONG NameIndex,
                       LONG NameChoice,
                       __RPC__in const BSTR strName);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeAltName * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        END_INTERFACE
    } ICertEncodeAltNameVtbl;
    interface ICertEncodeAltName
    {
        CONST_VTBL struct ICertEncodeAltNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetNameCount(This,pNameCount) )
    ( (This)->lpVtbl -> GetNameChoice(This,NameIndex,pNameChoice) )
    ( (This)->lpVtbl -> GetName(This,NameIndex,pstrName) )
    ( (This)->lpVtbl -> Reset(This,NameCount) )
    ( (This)->lpVtbl -> SetNameEntry(This,NameIndex,NameChoice,strName) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
EXTERN_C const IID IID_ICertEncodeAltName2;
    typedef struct ICertEncodeAltName2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeAltName2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeAltName2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeAltName2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeAltName2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeAltName2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeAltName2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeAltName2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeAltName2 * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )(
            __RPC__in ICertEncodeAltName2 * This,
                                __RPC__out LONG *pNameCount);
        HRESULT ( STDMETHODCALLTYPE *GetNameChoice )(
            __RPC__in ICertEncodeAltName2 * This,
                       LONG NameIndex,
                                __RPC__out LONG *pNameChoice);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in ICertEncodeAltName2 * This,
                       LONG NameIndex,
                                __RPC__deref_out_opt BSTR *pstrName);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertEncodeAltName2 * This,
                       LONG NameCount);
        HRESULT ( STDMETHODCALLTYPE *SetNameEntry )(
            __RPC__in ICertEncodeAltName2 * This,
                       LONG NameIndex,
                       LONG NameChoice,
                       __RPC__in const BSTR strName);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeAltName2 * This,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        HRESULT ( STDMETHODCALLTYPE *DecodeBlob )(
            __RPC__in ICertEncodeAltName2 * This,
                       __RPC__in const BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *EncodeBlob )(
            __RPC__in ICertEncodeAltName2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedData);
        HRESULT ( STDMETHODCALLTYPE *GetNameBlob )(
            __RPC__in ICertEncodeAltName2 * This,
                       LONG NameIndex,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrName);
        HRESULT ( STDMETHODCALLTYPE *SetNameEntryBlob )(
            __RPC__in ICertEncodeAltName2 * This,
                       LONG NameIndex,
                       LONG NameChoice,
                       __RPC__in const BSTR strName,
                                     EncodingType Encoding);
        END_INTERFACE
    } ICertEncodeAltName2Vtbl;
    interface ICertEncodeAltName2
    {
        CONST_VTBL struct ICertEncodeAltName2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetNameCount(This,pNameCount) )
    ( (This)->lpVtbl -> GetNameChoice(This,NameIndex,pNameChoice) )
    ( (This)->lpVtbl -> GetName(This,NameIndex,pstrName) )
    ( (This)->lpVtbl -> Reset(This,NameCount) )
    ( (This)->lpVtbl -> SetNameEntry(This,NameIndex,NameChoice,strName) )
    ( (This)->lpVtbl -> Encode(This,pstrBinary) )
    ( (This)->lpVtbl -> DecodeBlob(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> EncodeBlob(This,Encoding,pstrEncodedData) )
    ( (This)->lpVtbl -> GetNameBlob(This,NameIndex,Encoding,pstrName) )
    ( (This)->lpVtbl -> SetNameEntryBlob(This,NameIndex,NameChoice,strName,Encoding) )
EXTERN_C const IID IID_ICertEncodeBitString;
    typedef struct ICertEncodeBitStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeBitString * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeBitString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeBitString * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeBitString * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeBitString * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeBitString * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeBitString * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeBitString * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetBitCount )(
            __RPC__in ICertEncodeBitString * This,
                                __RPC__out LONG *pBitCount);
        HRESULT ( STDMETHODCALLTYPE *GetBitString )(
            __RPC__in ICertEncodeBitString * This,
                                __RPC__deref_out_opt BSTR *pstrBitString);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeBitString * This,
                       LONG BitCount,
                       __RPC__in BSTR strBitString,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        END_INTERFACE
    } ICertEncodeBitStringVtbl;
    interface ICertEncodeBitString
    {
        CONST_VTBL struct ICertEncodeBitStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetBitCount(This,pBitCount) )
    ( (This)->lpVtbl -> GetBitString(This,pstrBitString) )
    ( (This)->lpVtbl -> Encode(This,BitCount,strBitString,pstrBinary) )
EXTERN_C const IID IID_ICertEncodeBitString2;
    typedef struct ICertEncodeBitString2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertEncodeBitString2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertEncodeBitString2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertEncodeBitString2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertEncodeBitString2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertEncodeBitString2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertEncodeBitString2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertEncodeBitString2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Decode )(
            __RPC__in ICertEncodeBitString2 * This,
                       __RPC__in const BSTR strBinary);
        HRESULT ( STDMETHODCALLTYPE *GetBitCount )(
            __RPC__in ICertEncodeBitString2 * This,
                                __RPC__out LONG *pBitCount);
        HRESULT ( STDMETHODCALLTYPE *GetBitString )(
            __RPC__in ICertEncodeBitString2 * This,
                                __RPC__deref_out_opt BSTR *pstrBitString);
        HRESULT ( STDMETHODCALLTYPE *Encode )(
            __RPC__in ICertEncodeBitString2 * This,
                       LONG BitCount,
                       __RPC__in BSTR strBitString,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        HRESULT ( STDMETHODCALLTYPE *DecodeBlob )(
            __RPC__in ICertEncodeBitString2 * This,
                       __RPC__in const BSTR strEncodedData,
                                     EncodingType Encoding);
        HRESULT ( STDMETHODCALLTYPE *EncodeBlob )(
            __RPC__in ICertEncodeBitString2 * This,
                       LONG BitCount,
                       __RPC__in const BSTR strBitString,
                                     EncodingType EncodingIn,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrEncodedData);
        HRESULT ( STDMETHODCALLTYPE *GetBitStringBlob )(
            __RPC__in ICertEncodeBitString2 * This,
                                     EncodingType Encoding,
                                __RPC__deref_out_opt BSTR *pstrBitString);
        END_INTERFACE
    } ICertEncodeBitString2Vtbl;
    interface ICertEncodeBitString2
    {
        CONST_VTBL struct ICertEncodeBitString2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Decode(This,strBinary) )
    ( (This)->lpVtbl -> GetBitCount(This,pBitCount) )
    ( (This)->lpVtbl -> GetBitString(This,pstrBitString) )
    ( (This)->lpVtbl -> Encode(This,BitCount,strBitString,pstrBinary) )
    ( (This)->lpVtbl -> DecodeBlob(This,strEncodedData,Encoding) )
    ( (This)->lpVtbl -> EncodeBlob(This,BitCount,strBitString,EncodingIn,Encoding,pstrEncodedData) )
    ( (This)->lpVtbl -> GetBitStringBlob(This,Encoding,pstrBitString) )
EXTERN_C const IID LIBID_CERTENCODELib;
EXTERN_C const CLSID CLSID_CCertEncodeStringArray;
class DECLSPEC_UUID("19a76fe0-7494-11d0-8816-00a0c903b83c")
CCertEncodeStringArray;
EXTERN_C const CLSID CLSID_CCertEncodeLongArray;
class DECLSPEC_UUID("4e0680a0-a0a2-11d0-8821-00a0c903b83c")
CCertEncodeLongArray;
EXTERN_C const CLSID CLSID_CCertEncodeDateArray;
class DECLSPEC_UUID("301f77b0-a470-11d0-8821-00a0c903b83c")
CCertEncodeDateArray;
EXTERN_C const CLSID CLSID_CCertEncodeCRLDistInfo;
class DECLSPEC_UUID("01fa60a0-bbff-11d0-8825-00a0c903b83c")
CCertEncodeCRLDistInfo;
EXTERN_C const CLSID CLSID_CCertEncodeAltName;
class DECLSPEC_UUID("1cfc4cda-1271-11d1-9bd4-00c04fb683fa")
CCertEncodeAltName;
EXTERN_C const CLSID CLSID_CCertEncodeBitString;
class DECLSPEC_UUID("6d6b3cd8-1278-11d1-9bd4-00c04fb683fa")
CCertEncodeBitString;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certenc_0000_0013_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
