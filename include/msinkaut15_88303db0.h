#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IInkDivider IInkDivider;
typedef interface IInkDivisionResult IInkDivisionResult;
typedef interface IInkDivisionUnit IInkDivisionUnit;
typedef interface IInkDivisionUnits IInkDivisionUnits;
typedef class InkDivider InkDivider;
#include "oaidl.h"
#include "ocidl.h"
#include "msinkaut.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <TPCError.h>
extern RPC_IF_HANDLE __MIDL_itf_msinkaut15_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut15_0000_0000_v0_0_s_ifspec;
typedef
enum InkDivisionType
    {
        IDT_Segment = 0,
        IDT_Line = 1,
        IDT_Paragraph = 2,
        IDT_Drawing = 3
    } InkDivisionType;
typedef
enum DISPID_InkDivider
    {
        DISPID_IInkDivider_Strokes = 1,
        DISPID_IInkDivider_RecognizerContext = ( DISPID_IInkDivider_Strokes + 1 ) ,
        DISPID_IInkDivider_LineHeight = ( DISPID_IInkDivider_RecognizerContext + 1 ) ,
        DISPID_IInkDivider_Divide = ( DISPID_IInkDivider_LineHeight + 1 )
    } DISPID_InkDivider;
typedef
enum DISPID_InkDivisionResult
    {
        DISPID_IInkDivisionResult_Strokes = 1,
        DISPID_IInkDivisionResult_ResultByType = ( DISPID_IInkDivisionResult_Strokes + 1 )
    } DISPID_InkDivisionResult;
typedef
enum DISPID_InkDivisionUnit
    {
        DISPID_IInkDivisionUnit_Strokes = 1,
        DISPID_IInkDivisionUnit_DivisionType = ( DISPID_IInkDivisionUnit_Strokes + 1 ) ,
        DISPID_IInkDivisionUnit_RecognizedString = ( DISPID_IInkDivisionUnit_DivisionType + 1 ) ,
        DISPID_IInkDivisionUnit_RotationTransform = ( DISPID_IInkDivisionUnit_RecognizedString + 1 )
    } DISPID_InkDivisionUnit;
typedef
enum DISPID_InkDivisionUnits
    {
        DISPID_IInkDivisionUnits_NewEnum = DISPID_NEWENUM,
        DISPID_IInkDivisionUnits_Item = DISPID_VALUE,
        DISPID_IInkDivisionUnits_Count = 1
    } DISPID_InkDivisionUnits;
EXTERN_C const IID LIBID_MSINKDIVLib;
EXTERN_C const IID IID_IInkDivider;
    typedef struct IInkDividerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkDivider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkDivider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkDivider * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkDivider * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkDivider * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkDivider * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkDivider * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkDivider * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_Strokes )(
            __RPC__in IInkDivider * This,
                       __RPC__in_opt IInkStrokes *Strokes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RecognizerContext )(
            __RPC__in IInkDivider * This,
                                __RPC__deref_out_opt IInkRecognizerContext **RecognizerContext);
                                                        HRESULT ( STDMETHODCALLTYPE *putref_RecognizerContext )(
            __RPC__in IInkDivider * This,
                       __RPC__in_opt IInkRecognizerContext *RecognizerContext);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LineHeight )(
            __RPC__in IInkDivider * This,
                                __RPC__out LONG *LineHeight);
                                                     HRESULT ( STDMETHODCALLTYPE *put_LineHeight )(
            __RPC__in IInkDivider * This,
                       LONG LineHeight);
                                            HRESULT ( STDMETHODCALLTYPE *Divide )(
            __RPC__in IInkDivider * This,
                                __RPC__deref_out_opt IInkDivisionResult **InkDivisionResult);
        END_INTERFACE
    } IInkDividerVtbl;
    interface IInkDivider
    {
        CONST_VTBL struct IInkDividerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> putref_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> get_RecognizerContext(This,RecognizerContext) )
    ( (This)->lpVtbl -> putref_RecognizerContext(This,RecognizerContext) )
    ( (This)->lpVtbl -> get_LineHeight(This,LineHeight) )
    ( (This)->lpVtbl -> put_LineHeight(This,LineHeight) )
    ( (This)->lpVtbl -> Divide(This,InkDivisionResult) )
EXTERN_C const IID IID_IInkDivisionResult;
    typedef struct IInkDivisionResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkDivisionResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkDivisionResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkDivisionResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkDivisionResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkDivisionResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkDivisionResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkDivisionResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkDivisionResult * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                            HRESULT ( STDMETHODCALLTYPE *ResultByType )(
            __RPC__in IInkDivisionResult * This,
                       InkDivisionType divisionType,
                                __RPC__deref_out_opt IInkDivisionUnits **InkDivisionUnits);
        END_INTERFACE
    } IInkDivisionResultVtbl;
    interface IInkDivisionResult
    {
        CONST_VTBL struct IInkDivisionResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> ResultByType(This,divisionType,InkDivisionUnits) )
EXTERN_C const IID IID_IInkDivisionUnit;
    typedef struct IInkDivisionUnitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkDivisionUnit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkDivisionUnit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkDivisionUnit * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkDivisionUnit * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkDivisionUnit * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkDivisionUnit * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkDivisionUnit * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Strokes )(
            __RPC__in IInkDivisionUnit * This,
                                __RPC__deref_out_opt IInkStrokes **Strokes);
                                                     HRESULT ( STDMETHODCALLTYPE *get_DivisionType )(
            __RPC__in IInkDivisionUnit * This,
                                __RPC__out InkDivisionType *divisionType);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RecognizedString )(
            __RPC__in IInkDivisionUnit * This,
                                __RPC__deref_out_opt BSTR *RecoString);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RotationTransform )(
            __RPC__in IInkDivisionUnit * This,
                                __RPC__deref_out_opt IInkTransform **RotationTransform);
        END_INTERFACE
    } IInkDivisionUnitVtbl;
    interface IInkDivisionUnit
    {
        CONST_VTBL struct IInkDivisionUnitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Strokes(This,Strokes) )
    ( (This)->lpVtbl -> get_DivisionType(This,divisionType) )
    ( (This)->lpVtbl -> get_RecognizedString(This,RecoString) )
    ( (This)->lpVtbl -> get_RotationTransform(This,RotationTransform) )
EXTERN_C const IID IID_IInkDivisionUnits;
    typedef struct IInkDivisionUnitsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInkDivisionUnits * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInkDivisionUnits * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInkDivisionUnits * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IInkDivisionUnits * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IInkDivisionUnits * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IInkDivisionUnits * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IInkDivisionUnits * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IInkDivisionUnits * This,
                                __RPC__out long *Count);
                                                                 HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IInkDivisionUnits * This,
                                __RPC__deref_out_opt IUnknown **_NewEnum);
                                            HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IInkDivisionUnits * This,
                       long Index,
                                __RPC__deref_out_opt IInkDivisionUnit **InkDivisionUnit);
        END_INTERFACE
    } IInkDivisionUnitsVtbl;
    interface IInkDivisionUnits
    {
        CONST_VTBL struct IInkDivisionUnitsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,_NewEnum) )
    ( (This)->lpVtbl -> Item(This,Index,InkDivisionUnit) )
EXTERN_C const CLSID CLSID_InkDivider;
class DECLSPEC_UUID("8854F6A0-4683-4AE7-9191-752FE64612C3")
InkDivider;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msinkaut15_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msinkaut15_0000_0001_v0_0_s_ifspec;
}
