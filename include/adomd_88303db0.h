#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface ICatalog ICatalog;
typedef interface ICellset ICellset;
typedef interface Cell Cell;
typedef interface Axis Axis;
typedef interface Position Position;
typedef interface Member Member;
typedef interface Level Level;
typedef interface CubeDef25 CubeDef25;
typedef interface CubeDef CubeDef;
typedef interface Dimension Dimension;
typedef interface Hierarchy Hierarchy;
typedef interface MD_Collection MD_Collection;
typedef interface Members Members;
typedef interface Levels Levels;
typedef interface Axes Axes;
typedef interface Positions Positions;
typedef interface Hierarchies Hierarchies;
typedef interface Dimensions Dimensions;
typedef interface CubeDefs CubeDefs;
typedef class Catalog Catalog;
typedef class Cellset Cellset;
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_adomd_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_adomd_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("000002AE-0000-0010-8000-00AA006D2EA4")
enum MemberTypeEnum
    {
        adMemberUnknown = 0,
        adMemberRegular = 0x1,
        adMemberAll = 0x2,
        adMemberMeasure = 0x3,
        adMemberFormula = 0x4
    } MemberTypeEnum;
typedef DECLSPEC_UUID("C23BBD43-E494-4d00-B4D1-6C9A2CE17CE3")
enum SchemaObjectTypeEnum
    {
        adObjectTypeDimension = 1,
        adObjectTypeHierarchy = 2,
        adObjectTypeLevel = 3,
        adObjectTypeMember = 4
    } SchemaObjectTypeEnum;
EXTERN_C const IID LIBID_ADOMD;
EXTERN_C const IID IID_ICatalog;
    typedef struct ICatalogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICatalog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICatalog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICatalog * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICatalog * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICatalog * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICatalog * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICatalog * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ICatalog * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                        HRESULT ( STDMETHODCALLTYPE *putref_ActiveConnection )(
            __RPC__in ICatalog * This,
                       __RPC__in_opt IDispatch *pconn);
                                     HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in ICatalog * This,
                       __RPC__in BSTR bstrConn);
                                     HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in ICatalog * This,
                                __RPC__deref_out_opt IDispatch **ppConn);
                                         HRESULT ( STDMETHODCALLTYPE *get_CubeDefs )(
            __RPC__in ICatalog * This,
                                __RPC__deref_out_opt CubeDefs **ppvObject);
        END_INTERFACE
    } ICatalogVtbl;
    interface ICatalog
    {
        CONST_VTBL struct ICatalogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pconn) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,bstrConn) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,ppConn) )
    ( (This)->lpVtbl -> get_CubeDefs(This,ppvObject) )
EXTERN_C const IID IID_ICellset;
    typedef struct ICellsetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICellset * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICellset * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICellset * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICellset * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICellset * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICellset * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICellset * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                 HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ICellset * This,
                       __RPC__deref_in_opt SAFEARRAY * *idx,
                                __RPC__deref_out_opt Cell **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in ICellset * This,
                                 VARIANT DataSource,
                                 VARIANT ActiveConnection);
                            HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in ICellset * This);
                                        HRESULT ( STDMETHODCALLTYPE *putref_Source )(
            __RPC__in ICellset * This,
                       __RPC__in_opt IDispatch *pcmd);
                                     HRESULT ( STDMETHODCALLTYPE *put_Source )(
            __RPC__in ICellset * This,
                       __RPC__in BSTR bstrCmd);
                                     HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in ICellset * This,
                                __RPC__out VARIANT *pvSource);
                                        HRESULT ( STDMETHODCALLTYPE *putref_ActiveConnection )(
            __RPC__in ICellset * This,
                       __RPC__in_opt IDispatch *pconn);
                                     HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in ICellset * This,
                       __RPC__in BSTR bstrConn);
                                     HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in ICellset * This,
                                __RPC__deref_out_opt IDispatch **ppConn);
                                     HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ICellset * This,
                                __RPC__out LONG *plState);
                                     HRESULT ( STDMETHODCALLTYPE *get_Axes )(
            __RPC__in ICellset * This,
                                __RPC__deref_out_opt Axes **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_FilterAxis )(
            __RPC__in ICellset * This,
                                __RPC__deref_out_opt Axis **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in ICellset * This,
                                __RPC__deref_out_opt Properties **ppvObject);
        END_INTERFACE
    } ICellsetVtbl;
    interface ICellset
    {
        CONST_VTBL struct ICellsetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,idx,ppvObject) )
    ( (This)->lpVtbl -> Open(This,DataSource,ActiveConnection) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> putref_Source(This,pcmd) )
    ( (This)->lpVtbl -> put_Source(This,bstrCmd) )
    ( (This)->lpVtbl -> get_Source(This,pvSource) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pconn) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,bstrConn) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,ppConn) )
    ( (This)->lpVtbl -> get_State(This,plState) )
    ( (This)->lpVtbl -> get_Axes(This,ppvObject) )
    ( (This)->lpVtbl -> get_FilterAxis(This,ppvObject) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
EXTERN_C const IID IID_Cell;
    typedef struct CellVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Cell * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Cell * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Cell * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Cell * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Cell * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Cell * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Cell * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in Cell * This,
                                __RPC__out VARIANT *pvar);
                                     HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in Cell * This,
                       VARIANT var);
                                     HRESULT ( STDMETHODCALLTYPE *get_Positions )(
            __RPC__in Cell * This,
                                __RPC__deref_out_opt Positions **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Cell * This,
                                __RPC__deref_out_opt Properties **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_FormattedValue )(
            __RPC__in Cell * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *put_FormattedValue )(
            __RPC__in Cell * This,
                       __RPC__in BSTR bstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Ordinal )(
            __RPC__in Cell * This,
                                __RPC__out long *pl);
        END_INTERFACE
    } CellVtbl;
    interface Cell
    {
        CONST_VTBL struct CellVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,pvar) )
    ( (This)->lpVtbl -> put_Value(This,var) )
    ( (This)->lpVtbl -> get_Positions(This,ppvObject) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_FormattedValue(This,pbstr) )
    ( (This)->lpVtbl -> put_FormattedValue(This,bstr) )
    ( (This)->lpVtbl -> get_Ordinal(This,pl) )
EXTERN_C const IID IID_Axis;
    typedef struct AxisVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Axis * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Axis * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Axis * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Axis * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Axis * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Axis * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Axis * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Axis * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_DimensionCount )(
            __RPC__in Axis * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Positions )(
            __RPC__in Axis * This,
                                __RPC__deref_out_opt Positions **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Axis * This,
                                __RPC__deref_out_opt Properties **ppvObject);
        END_INTERFACE
    } AxisVtbl;
    interface Axis
    {
        CONST_VTBL struct AxisVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_DimensionCount(This,pl) )
    ( (This)->lpVtbl -> get_Positions(This,ppvObject) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
EXTERN_C const IID IID_Position;
    typedef struct PositionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Position * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Position * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Position * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Position * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Position * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Position * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Position * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Ordinal )(
            __RPC__in Position * This,
                                __RPC__out long *pl);
                                         HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in Position * This,
                                __RPC__deref_out_opt Members **ppvObject);
        END_INTERFACE
    } PositionVtbl;
    interface Position
    {
        CONST_VTBL struct PositionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Ordinal(This,pl) )
    ( (This)->lpVtbl -> get_Members(This,ppvObject) )
EXTERN_C const IID IID_Member;
    typedef struct MemberVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Member * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Member * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Member * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Member * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Member * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Member * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Member * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Caption )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt Member **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_LevelDepth )(
            __RPC__in Member * This,
                                __RPC__out long *pl);
                                     HRESULT ( STDMETHODCALLTYPE *get_LevelName )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt Properties **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in Member * This,
                                __RPC__out MemberTypeEnum *ptype);
                                     HRESULT ( STDMETHODCALLTYPE *get_ChildCount )(
            __RPC__in Member * This,
                                __RPC__out long *pl);
                                     HRESULT ( STDMETHODCALLTYPE *get_DrilledDown )(
            __RPC__in Member * This,
                                __RPC__out VARIANT_BOOL *pf);
                                     HRESULT ( STDMETHODCALLTYPE *get_ParentSameAsPrev )(
            __RPC__in Member * This,
                                __RPC__out VARIANT_BOOL *pf);
                                     HRESULT ( STDMETHODCALLTYPE *get_Children )(
            __RPC__in Member * This,
                                __RPC__deref_out_opt Members **ppvObject);
        END_INTERFACE
    } MemberVtbl;
    interface Member
    {
        CONST_VTBL struct MemberVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_UniqueName(This,pbstr) )
    ( (This)->lpVtbl -> get_Caption(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_Parent(This,ppvObject) )
    ( (This)->lpVtbl -> get_LevelDepth(This,pl) )
    ( (This)->lpVtbl -> get_LevelName(This,pbstr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_Type(This,ptype) )
    ( (This)->lpVtbl -> get_ChildCount(This,pl) )
    ( (This)->lpVtbl -> get_DrilledDown(This,pf) )
    ( (This)->lpVtbl -> get_ParentSameAsPrev(This,pf) )
    ( (This)->lpVtbl -> get_Children(This,ppvObject) )
EXTERN_C const IID IID_Level;
    typedef struct LevelVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Level * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Level * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Level * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Level * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Level * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Level * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Level * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Level * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in Level * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Caption )(
            __RPC__in Level * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in Level * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Depth )(
            __RPC__in Level * This,
                                __RPC__out short *pw);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Level * This,
                                __RPC__deref_out_opt Properties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in Level * This,
                                __RPC__deref_out_opt Members **ppvObject);
        END_INTERFACE
    } LevelVtbl;
    interface Level
    {
        CONST_VTBL struct LevelVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_UniqueName(This,pbstr) )
    ( (This)->lpVtbl -> get_Caption(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_Depth(This,pw) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_Members(This,ppvObject) )
EXTERN_C const IID IID_CubeDef25;
    typedef struct CubeDef25Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in CubeDef25 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in CubeDef25 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in CubeDef25 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in CubeDef25 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in CubeDef25 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in CubeDef25 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            CubeDef25 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in CubeDef25 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in CubeDef25 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in CubeDef25 * This,
                                __RPC__deref_out_opt Properties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Dimensions )(
            __RPC__in CubeDef25 * This,
                                __RPC__deref_out_opt Dimensions **ppvObject);
        END_INTERFACE
    } CubeDef25Vtbl;
    interface CubeDef25
    {
        CONST_VTBL struct CubeDef25Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_Dimensions(This,ppvObject) )
EXTERN_C const IID IID_CubeDef;
    typedef struct CubeDefVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in CubeDef * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in CubeDef * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in CubeDef * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in CubeDef * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in CubeDef * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in CubeDef * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            CubeDef * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in CubeDef * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in CubeDef * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in CubeDef * This,
                                __RPC__deref_out_opt Properties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Dimensions )(
            __RPC__in CubeDef * This,
                                __RPC__deref_out_opt Dimensions **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *GetSchemaObject )(
            __RPC__in CubeDef * This,
                       SchemaObjectTypeEnum eObjType,
                       __RPC__in BSTR bsUniqueName,
                                __RPC__deref_out_opt IDispatch **ppObj);
        END_INTERFACE
    } CubeDefVtbl;
    interface CubeDef
    {
        CONST_VTBL struct CubeDefVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_Dimensions(This,ppvObject) )
    ( (This)->lpVtbl -> GetSchemaObject(This,eObjType,bsUniqueName,ppObj) )
EXTERN_C const IID IID_Dimension;
    typedef struct DimensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Dimension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Dimension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Dimension * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Dimension * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Dimension * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Dimension * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Dimension * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Dimension * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in Dimension * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in Dimension * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Dimension * This,
                                __RPC__deref_out_opt Properties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Hierarchies )(
            __RPC__in Dimension * This,
                                __RPC__deref_out_opt Hierarchies **ppvObject);
        END_INTERFACE
    } DimensionVtbl;
    interface Dimension
    {
        CONST_VTBL struct DimensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_UniqueName(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_Hierarchies(This,ppvObject) )
EXTERN_C const IID IID_Hierarchy;
    typedef struct HierarchyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Hierarchy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Hierarchy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Hierarchy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Hierarchy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Hierarchy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Hierarchy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Hierarchy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in Hierarchy * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in Hierarchy * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in Hierarchy * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in Hierarchy * This,
                                __RPC__deref_out_opt Properties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Levels )(
            __RPC__in Hierarchy * This,
                                __RPC__deref_out_opt Levels **ppvObject);
        END_INTERFACE
    } HierarchyVtbl;
    interface Hierarchy
    {
        CONST_VTBL struct HierarchyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_UniqueName(This,pbstr) )
    ( (This)->lpVtbl -> get_Description(This,pbstr) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_Levels(This,ppvObject) )
EXTERN_C const IID IID_MD_Collection;
    typedef struct MD_CollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in MD_Collection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in MD_Collection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in MD_Collection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in MD_Collection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in MD_Collection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in MD_Collection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            MD_Collection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in MD_Collection * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in MD_Collection * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in MD_Collection * This,
                                __RPC__out long *c);
        END_INTERFACE
    } MD_CollectionVtbl;
    interface MD_Collection
    {
        CONST_VTBL struct MD_CollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
EXTERN_C const IID IID_Members;
    typedef struct MembersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Members * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Members * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Members * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Members * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Members * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Members * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Members * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Members * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Members * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Members * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Members * This,
                       VARIANT Index,
                                __RPC__deref_out_opt Member **ppvObject);
        END_INTERFACE
    } MembersVtbl;
    interface Members
    {
        CONST_VTBL struct MembersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_Levels;
    typedef struct LevelsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Levels * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Levels * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Levels * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Levels * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Levels * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Levels * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Levels * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Levels * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Levels * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Levels * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Levels * This,
                       VARIANT Index,
                                __RPC__deref_out_opt Level **ppvObject);
        END_INTERFACE
    } LevelsVtbl;
    interface Levels
    {
        CONST_VTBL struct LevelsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_Axes;
    typedef struct AxesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Axes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Axes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Axes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Axes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Axes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Axes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Axes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Axes * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Axes * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Axes * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Axes * This,
                       VARIANT Index,
                                __RPC__deref_out_opt Axis **ppvObject);
        END_INTERFACE
    } AxesVtbl;
    interface Axes
    {
        CONST_VTBL struct AxesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_Positions;
    typedef struct PositionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Positions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Positions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Positions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Positions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Positions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Positions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Positions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Positions * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Positions * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Positions * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Positions * This,
                       VARIANT Index,
                                __RPC__deref_out_opt Position **ppvObject);
        END_INTERFACE
    } PositionsVtbl;
    interface Positions
    {
        CONST_VTBL struct PositionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_Hierarchies;
    typedef struct HierarchiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Hierarchies * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Hierarchies * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Hierarchies * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Hierarchies * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Hierarchies * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Hierarchies * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Hierarchies * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Hierarchies * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Hierarchies * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Hierarchies * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Hierarchies * This,
                       VARIANT Index,
                                __RPC__deref_out_opt Hierarchy **ppvObject);
        END_INTERFACE
    } HierarchiesVtbl;
    interface Hierarchies
    {
        CONST_VTBL struct HierarchiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_Dimensions;
    typedef struct DimensionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in Dimensions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in Dimensions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in Dimensions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in Dimensions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in Dimensions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in Dimensions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            Dimensions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in Dimensions * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in Dimensions * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in Dimensions * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in Dimensions * This,
                       VARIANT Index,
                                __RPC__deref_out_opt Dimension **ppvObject);
        END_INTERFACE
    } DimensionsVtbl;
    interface Dimensions
    {
        CONST_VTBL struct DimensionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const IID IID_CubeDefs;
    typedef struct CubeDefsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in CubeDefs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in CubeDefs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in CubeDefs * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in CubeDefs * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in CubeDefs * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in CubeDefs * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            CubeDefs * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in CubeDefs * This);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in CubeDefs * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in CubeDefs * This,
                                __RPC__out long *c);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in CubeDefs * This,
                       VARIANT Index,
                                __RPC__deref_out_opt CubeDef **ppvObject);
        END_INTERFACE
    } CubeDefsVtbl;
    interface CubeDefs
    {
        CONST_VTBL struct CubeDefsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppvObject) )
EXTERN_C const CLSID CLSID_Catalog;
class DECLSPEC_UUID("228136B0-8BD3-11D0-B4EF-00A0C9138CA4")
Catalog;
EXTERN_C const CLSID CLSID_Cellset;
class DECLSPEC_UUID("228136B8-8BD3-11D0-B4EF-00A0C9138CA4")
Cellset;
}
