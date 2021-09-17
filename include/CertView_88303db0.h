#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumCERTVIEWCOLUMN IEnumCERTVIEWCOLUMN;
typedef interface IEnumCERTVIEWATTRIBUTE IEnumCERTVIEWATTRIBUTE;
typedef interface IEnumCERTVIEWEXTENSION IEnumCERTVIEWEXTENSION;
typedef interface IEnumCERTVIEWROW IEnumCERTVIEWROW;
typedef interface ICertView ICertView;
typedef interface ICertView2 ICertView2;
#include "wtypes.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_certview_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certview_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumCERTVIEWCOLUMN;
    typedef struct IEnumCERTVIEWCOLUMNVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumCERTVIEWCOLUMN * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumCERTVIEWCOLUMN * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumCERTVIEWCOLUMN * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IEnumCERTVIEWCOLUMN * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IEnumCERTVIEWCOLUMN * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IEnumCERTVIEWCOLUMN * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEnumCERTVIEWCOLUMN * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumCERTVIEWCOLUMN * This,
                                LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IEnumCERTVIEWCOLUMN * This,
                                BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            IEnumCERTVIEWCOLUMN * This,
                                BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IEnumCERTVIEWCOLUMN * This,
                                LONG *pType);
        HRESULT ( STDMETHODCALLTYPE *IsIndexed )(
            IEnumCERTVIEWCOLUMN * This,
                                LONG *pIndexed);
        HRESULT ( STDMETHODCALLTYPE *GetMaxLength )(
            IEnumCERTVIEWCOLUMN * This,
                                LONG *pMaxLength);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IEnumCERTVIEWCOLUMN * This,
                       LONG Flags,
                                VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumCERTVIEWCOLUMN * This,
                       LONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumCERTVIEWCOLUMN * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumCERTVIEWCOLUMN * This,
                                IEnumCERTVIEWCOLUMN **ppenum);
        END_INTERFACE
    } IEnumCERTVIEWCOLUMNVtbl;
    interface IEnumCERTVIEWCOLUMN
    {
        CONST_VTBL struct IEnumCERTVIEWCOLUMNVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Next(This,pIndex) )
    ( (This)->lpVtbl -> GetName(This,pstrOut) )
    ( (This)->lpVtbl -> GetDisplayName(This,pstrOut) )
    ( (This)->lpVtbl -> GetType(This,pType) )
    ( (This)->lpVtbl -> IsIndexed(This,pIndexed) )
    ( (This)->lpVtbl -> GetMaxLength(This,pMaxLength) )
    ( (This)->lpVtbl -> GetValue(This,Flags,pvarValue) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumCERTVIEWATTRIBUTE;
    typedef struct IEnumCERTVIEWATTRIBUTEVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumCERTVIEWATTRIBUTE * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumCERTVIEWATTRIBUTE * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumCERTVIEWATTRIBUTE * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IEnumCERTVIEWATTRIBUTE * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IEnumCERTVIEWATTRIBUTE * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IEnumCERTVIEWATTRIBUTE * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEnumCERTVIEWATTRIBUTE * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumCERTVIEWATTRIBUTE * This,
                                LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IEnumCERTVIEWATTRIBUTE * This,
                                BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IEnumCERTVIEWATTRIBUTE * This,
                                BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumCERTVIEWATTRIBUTE * This,
                       LONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumCERTVIEWATTRIBUTE * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumCERTVIEWATTRIBUTE * This,
                                IEnumCERTVIEWATTRIBUTE **ppenum);
        END_INTERFACE
    } IEnumCERTVIEWATTRIBUTEVtbl;
    interface IEnumCERTVIEWATTRIBUTE
    {
        CONST_VTBL struct IEnumCERTVIEWATTRIBUTEVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Next(This,pIndex) )
    ( (This)->lpVtbl -> GetName(This,pstrOut) )
    ( (This)->lpVtbl -> GetValue(This,pstrOut) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumCERTVIEWEXTENSION;
    typedef struct IEnumCERTVIEWEXTENSIONVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumCERTVIEWEXTENSION * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumCERTVIEWEXTENSION * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumCERTVIEWEXTENSION * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IEnumCERTVIEWEXTENSION * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IEnumCERTVIEWEXTENSION * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IEnumCERTVIEWEXTENSION * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEnumCERTVIEWEXTENSION * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumCERTVIEWEXTENSION * This,
                                LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IEnumCERTVIEWEXTENSION * This,
                                BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IEnumCERTVIEWEXTENSION * This,
                                LONG *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IEnumCERTVIEWEXTENSION * This,
                       LONG Type,
                       LONG Flags,
                                VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumCERTVIEWEXTENSION * This,
                       LONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumCERTVIEWEXTENSION * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumCERTVIEWEXTENSION * This,
                                IEnumCERTVIEWEXTENSION **ppenum);
        END_INTERFACE
    } IEnumCERTVIEWEXTENSIONVtbl;
    interface IEnumCERTVIEWEXTENSION
    {
        CONST_VTBL struct IEnumCERTVIEWEXTENSIONVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Next(This,pIndex) )
    ( (This)->lpVtbl -> GetName(This,pstrOut) )
    ( (This)->lpVtbl -> GetFlags(This,pFlags) )
    ( (This)->lpVtbl -> GetValue(This,Type,Flags,pvarValue) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumCERTVIEWROW;
    typedef struct IEnumCERTVIEWROWVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumCERTVIEWROW * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumCERTVIEWROW * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumCERTVIEWROW * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IEnumCERTVIEWROW * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IEnumCERTVIEWROW * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IEnumCERTVIEWROW * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IEnumCERTVIEWROW * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumCERTVIEWROW * This,
                                LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *EnumCertViewColumn )(
            IEnumCERTVIEWROW * This,
                                IEnumCERTVIEWCOLUMN **ppenum);
        HRESULT ( STDMETHODCALLTYPE *EnumCertViewAttribute )(
            IEnumCERTVIEWROW * This,
                       LONG Flags,
                                IEnumCERTVIEWATTRIBUTE **ppenum);
        HRESULT ( STDMETHODCALLTYPE *EnumCertViewExtension )(
            IEnumCERTVIEWROW * This,
                       LONG Flags,
                                IEnumCERTVIEWEXTENSION **ppenum);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumCERTVIEWROW * This,
                       LONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumCERTVIEWROW * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumCERTVIEWROW * This,
                                IEnumCERTVIEWROW **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetMaxIndex )(
            IEnumCERTVIEWROW * This,
                                LONG *pIndex);
        END_INTERFACE
    } IEnumCERTVIEWROWVtbl;
    interface IEnumCERTVIEWROW
    {
        CONST_VTBL struct IEnumCERTVIEWROWVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Next(This,pIndex) )
    ( (This)->lpVtbl -> EnumCertViewColumn(This,ppenum) )
    ( (This)->lpVtbl -> EnumCertViewAttribute(This,Flags,ppenum) )
    ( (This)->lpVtbl -> EnumCertViewExtension(This,Flags,ppenum) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetMaxIndex(This,pIndex) )
EXTERN_C const IID IID_ICertView;
    typedef struct ICertViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICertView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICertView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICertView * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ICertView * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ICertView * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ICertView * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertView * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *OpenConnection )(
            ICertView * This,
                       const BSTR strConfig);
        HRESULT ( STDMETHODCALLTYPE *EnumCertViewColumn )(
            ICertView * This,
                       LONG fResultColumn,
                                IEnumCERTVIEWCOLUMN **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetColumnCount )(
            ICertView * This,
                       LONG fResultColumn,
                                LONG *pcColumn);
        HRESULT ( STDMETHODCALLTYPE *GetColumnIndex )(
            ICertView * This,
                       LONG fResultColumn,
                       const BSTR strColumnName,
                                LONG *pColumnIndex);
        HRESULT ( STDMETHODCALLTYPE *SetResultColumnCount )(
            ICertView * This,
                       LONG cResultColumn);
        HRESULT ( STDMETHODCALLTYPE *SetResultColumn )(
            ICertView * This,
                       LONG ColumnIndex);
        HRESULT ( STDMETHODCALLTYPE *SetRestriction )(
            ICertView * This,
                       LONG ColumnIndex,
                       LONG SeekOperator,
                       LONG SortOrder,
                       const VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *OpenView )(
            ICertView * This,
                                IEnumCERTVIEWROW **ppenum);
        END_INTERFACE
    } ICertViewVtbl;
    interface ICertView
    {
        CONST_VTBL struct ICertViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OpenConnection(This,strConfig) )
    ( (This)->lpVtbl -> EnumCertViewColumn(This,fResultColumn,ppenum) )
    ( (This)->lpVtbl -> GetColumnCount(This,fResultColumn,pcColumn) )
    ( (This)->lpVtbl -> GetColumnIndex(This,fResultColumn,strColumnName,pColumnIndex) )
    ( (This)->lpVtbl -> SetResultColumnCount(This,cResultColumn) )
    ( (This)->lpVtbl -> SetResultColumn(This,ColumnIndex) )
    ( (This)->lpVtbl -> SetRestriction(This,ColumnIndex,SeekOperator,SortOrder,pvarValue) )
    ( (This)->lpVtbl -> OpenView(This,ppenum) )
EXTERN_C const IID IID_ICertView2;
    typedef struct ICertView2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertView2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertView2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertView2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertView2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertView2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertView2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertView2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *OpenConnection )(
            __RPC__in ICertView2 * This,
                       __RPC__in const BSTR strConfig);
        HRESULT ( STDMETHODCALLTYPE *EnumCertViewColumn )(
            __RPC__in ICertView2 * This,
                       LONG fResultColumn,
                                __RPC__deref_out_opt IEnumCERTVIEWCOLUMN **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetColumnCount )(
            __RPC__in ICertView2 * This,
                       LONG fResultColumn,
                                __RPC__out LONG *pcColumn);
        HRESULT ( STDMETHODCALLTYPE *GetColumnIndex )(
            __RPC__in ICertView2 * This,
                       LONG fResultColumn,
                       __RPC__in const BSTR strColumnName,
                                __RPC__out LONG *pColumnIndex);
        HRESULT ( STDMETHODCALLTYPE *SetResultColumnCount )(
            __RPC__in ICertView2 * This,
                       LONG cResultColumn);
        HRESULT ( STDMETHODCALLTYPE *SetResultColumn )(
            __RPC__in ICertView2 * This,
                       LONG ColumnIndex);
        HRESULT ( STDMETHODCALLTYPE *SetRestriction )(
            __RPC__in ICertView2 * This,
                       LONG ColumnIndex,
                       LONG SeekOperator,
                       LONG SortOrder,
                       __RPC__in const VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *OpenView )(
            __RPC__in ICertView2 * This,
                                __RPC__deref_out_opt IEnumCERTVIEWROW **ppenum);
        HRESULT ( STDMETHODCALLTYPE *SetTable )(
            __RPC__in ICertView2 * This,
                       LONG Table);
        END_INTERFACE
    } ICertView2Vtbl;
    interface ICertView2
    {
        CONST_VTBL struct ICertView2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OpenConnection(This,strConfig) )
    ( (This)->lpVtbl -> EnumCertViewColumn(This,fResultColumn,ppenum) )
    ( (This)->lpVtbl -> GetColumnCount(This,fResultColumn,pcColumn) )
    ( (This)->lpVtbl -> GetColumnIndex(This,fResultColumn,strColumnName,pColumnIndex) )
    ( (This)->lpVtbl -> SetResultColumnCount(This,cResultColumn) )
    ( (This)->lpVtbl -> SetResultColumn(This,ColumnIndex) )
    ( (This)->lpVtbl -> SetRestriction(This,ColumnIndex,SeekOperator,SortOrder,pvarValue) )
    ( (This)->lpVtbl -> OpenView(This,ppenum) )
    ( (This)->lpVtbl -> SetTable(This,Table) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certview_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certview_0000_0006_v0_0_s_ifspec;
}
