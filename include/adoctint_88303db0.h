#include <tchar.h>
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface _ADOADOCollection _ADOCollection;
typedef interface _ADODynaADOCollection _ADODynaCollection;
typedef interface _ADOCatalog _Catalog;
typedef interface _ADOTable _Table;
typedef interface _Group25 _Group25;
typedef interface _ADOGroup _Group;
typedef interface _User25 _User25;
typedef interface _ADOUser _User;
typedef interface _ADOColumn _Column;
typedef interface _ADOIndex _Index;
typedef interface _ADOKey _Key;
typedef interface ADOView View;
typedef interface ADOProcedure Procedure;
typedef class ADOCatalog Catalog;
typedef class ADOTable Table;
typedef interface ADOProperty Property;
typedef class ADOGroup Group;
typedef class ADOUser User;
typedef class ADOColumn Column;
typedef class ADOIndex Index;
typedef class ADOKey Key;
typedef interface ADOTables Tables;
typedef interface ADOColumns Columns;
typedef interface ADOProcedures Procedures;
typedef interface ADOViews Views;
typedef interface ADOIndexes Indexes;
typedef interface ADOKeys Keys;
typedef interface ADOUsers Users;
typedef interface ADOGroups Groups;
typedef interface ADOProperties Properties;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#pragma warning(push)
#pragma warning(disable:4091)
typedef
enum RuleEnum
    {
        adRINone = 0,
        adRICascade = 1,
        adRISetNull = 2,
        adRISetDefault = 3
    } RuleEnum;
typedef
enum KeyTypeEnum
    {
        adKeyPrimary = 1,
        adKeyForeign = 2,
        adKeyUnique = 3
    } KeyTypeEnum;
typedef
enum ActionEnum
    {
        adAccessGrant = 1,
        adAccessSet = 2,
        adAccessDeny = 3,
        adAccessRevoke = 4
    } ActionEnum;
typedef
enum ColumnAttributesEnum
    {
        adColFixed = 1,
        adColNullable = 2
    } ColumnAttributesEnum;
typedef
enum SortOrderEnum
    {
        adSortAscending = 1,
        adSortDescending = 2
    } SortOrderEnum;
typedef
enum RightsEnum
    {
        adRightNone = 0L,
        adRightDrop = 0x100L,
        adRightExclusive = 0x200L,
        adRightReadDesign = 0x400L,
        adRightWriteDesign = 0x800L,
        adRightWithGrant = 0x1000L,
        adRightReference = 0x2000L,
        adRightCreate = 0x4000L,
        adRightInsert = 0x8000L,
        adRightDelete = 0x10000L,
        adRightReadPermissions = 0x20000L,
        adRightWritePermissions = 0x40000L,
        adRightWriteOwner = 0x80000L,
        adRightMaximumAllowed = 0x2000000L,
        adRightFull = 0x10000000L,
        adRightExecute = 0x20000000L,
        adRightUpdate = 0x40000000L,
        adRightRead = 0x80000000L
    } RightsEnum;
typedef
    class dummy dummy;
typedef
enum AllowNullsEnum
    {
        adIndexNullsAllow = 0,
        adIndexNullsDisallow = 1,
        adIndexNullsIgnore = 2,
        adIndexNullsIgnoreAny = 4
    } AllowNullsEnum;
typedef
enum ObjectTypeEnum
    {
        adPermObjProviderSpecific = -1,
        adPermObjTable = 1,
        adPermObjColumn = 2,
        adPermObjDatabase = 3,
        adPermObjProcedure = 4,
        adPermObjView = 5
    } ObjectTypeEnum;
typedef
enum InheritTypeEnum
    {
        adInheritNone = 0,
        adInheritObjects = 1,
        adInheritContainers = 2,
        adInheritBoth = 3,
        adInheritNoPropogate = 4
    } InheritTypeEnum;
extern RPC_IF_HANDLE __MIDL_itf_adocat_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_adocat_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_ADOX;
EXTERN_C const IID IID__ADOCollection;
    typedef struct _ADOCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOADOCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOADOCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOADOCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOADOCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOADOCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOADOCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOADOCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in _ADOADOCollection * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in _ADOADOCollection * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in _ADOADOCollection * This);
        END_INTERFACE
    } _ADOCollectionVtbl;
    interface _ADOCollection
    {
        CONST_VTBL struct _ADOCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
EXTERN_C const IID IID__ADODynaCollection;
    typedef struct _ADODynaCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADODynaADOCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADODynaADOCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADODynaADOCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADODynaADOCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADODynaADOCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADODynaADOCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADODynaADOCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in _ADODynaADOCollection * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in _ADODynaADOCollection * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in _ADODynaADOCollection * This);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in _ADODynaADOCollection * This,
                       __RPC__in_opt IDispatch *Object);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in _ADODynaADOCollection * This,
                       VARIANT Item);
        END_INTERFACE
    } _ADODynaCollectionVtbl;
    interface _ADODynaCollection
    {
        CONST_VTBL struct _ADODynaCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Append(This,Object) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID__Catalog;
    typedef struct _CatalogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOCatalog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOCatalog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOCatalog * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOCatalog * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOCatalog * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOCatalog * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOCatalog * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Tables )(
            __RPC__in _ADOCatalog * This,
                                __RPC__deref_out_opt ADOTables **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ActiveConnection )(
            __RPC__in _ADOCatalog * This,
                                __RPC__out VARIANT *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_ActiveConnection )(
            __RPC__in _ADOCatalog * This,
                       VARIANT newVal);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ActiveConnection )(
            __RPC__in _ADOCatalog * This,
                       __RPC__in_opt IDispatch *pCon);
                                         HRESULT ( STDMETHODCALLTYPE *get_Procedures )(
            __RPC__in _ADOCatalog * This,
                                __RPC__deref_out_opt ADOProcedures **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Views )(
            __RPC__in _ADOCatalog * This,
                                __RPC__deref_out_opt ADOViews **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in _ADOCatalog * This,
                                __RPC__deref_out_opt ADOGroups **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Users )(
            __RPC__in _ADOCatalog * This,
                                __RPC__deref_out_opt ADOUsers **ppvObject);
                                HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in _ADOCatalog * This,
                       __RPC__in BSTR ConnectString,
                                __RPC__out VARIANT *Connection);
                                HRESULT ( STDMETHODCALLTYPE *GetObjectOwner )(
            __RPC__in _ADOCatalog * This,
                       __RPC__in BSTR ObjectName,
                       ObjectTypeEnum ObjectType,
                                 VARIANT ObjectTypeId,
                                __RPC__deref_out_opt BSTR *OwnerName);
                                HRESULT ( STDMETHODCALLTYPE *SetObjectOwner )(
            __RPC__in _ADOCatalog * This,
                       __RPC__in BSTR ObjectName,
                       ObjectTypeEnum ObjectType,
                       __RPC__in BSTR UserName,
                                 VARIANT ObjectTypeId);
        END_INTERFACE
    } _CatalogVtbl;
    interface _Catalog
    {
        CONST_VTBL struct _CatalogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Tables(This,ppvObject) )
    ( (This)->lpVtbl -> get_ActiveConnection(This,pVal) )
    ( (This)->lpVtbl -> put_ActiveConnection(This,newVal) )
    ( (This)->lpVtbl -> putref_ActiveConnection(This,pCon) )
    ( (This)->lpVtbl -> get_Procedures(This,ppvObject) )
    ( (This)->lpVtbl -> get_Views(This,ppvObject) )
    ( (This)->lpVtbl -> get_Groups(This,ppvObject) )
    ( (This)->lpVtbl -> get_Users(This,ppvObject) )
    ( (This)->lpVtbl -> Create(This,ConnectString,Connection) )
    ( (This)->lpVtbl -> GetObjectOwner(This,ObjectName,ObjectType,ObjectTypeId,OwnerName) )
    ( (This)->lpVtbl -> SetObjectOwner(This,ObjectName,ObjectType,UserName,ObjectTypeId) )
EXTERN_C const IID IID__Table;
    typedef struct _TableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOTable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOTable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOTable * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOTable * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOTable * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOTable * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOTable * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Columns )(
            __RPC__in _ADOTable * This,
                                __RPC__deref_out_opt ADOColumns **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOTable * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOTable * This,
                       __RPC__in BSTR newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in _ADOTable * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Indexes )(
            __RPC__in _ADOTable * This,
                                __RPC__deref_out_opt ADOIndexes **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Keys )(
            __RPC__in _ADOTable * This,
                                __RPC__deref_out_opt ADOKeys **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOTable * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_DateCreated )(
            __RPC__in _ADOTable * This,
                                __RPC__out VARIANT *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_DateModified )(
            __RPC__in _ADOTable * This,
                                __RPC__out VARIANT *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_ParentCatalog )(
            __RPC__in _ADOTable * This,
                                __RPC__deref_out_opt _ADOCatalog **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *put_ParentCatalog )(
            __RPC__in _ADOTable * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ParentADOCatalog )(
            __RPC__in _ADOTable * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
        END_INTERFACE
    } _TableVtbl;
    interface _Table
    {
        CONST_VTBL struct _TableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Columns(This,ppvObject) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> get_Indexes(This,ppvObject) )
    ( (This)->lpVtbl -> get_Keys(This,ppvObject) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_DateCreated(This,pVal) )
    ( (This)->lpVtbl -> get_DateModified(This,pVal) )
    ( (This)->lpVtbl -> get_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> put_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> putref_ParentCatalog(This,ppvObject) )
EXTERN_C const IID IID__Group25;
    typedef struct _Group25Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _Group25 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _Group25 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _Group25 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _Group25 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _Group25 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _Group25 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _Group25 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _Group25 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _Group25 * This,
                       __RPC__in BSTR newVal);
                                HRESULT ( STDMETHODCALLTYPE *GetPermissions )(
            __RPC__in _Group25 * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                                 VARIANT ObjectTypeId,
                                __RPC__out RightsEnum *Rights);
                                HRESULT ( STDMETHODCALLTYPE *SetPermissions )(
            __RPC__in _Group25 * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                       ActionEnum Action,
                       RightsEnum Rights,
                                     InheritTypeEnum Inherit,
                                 VARIANT ObjectTypeId);
                                         HRESULT ( STDMETHODCALLTYPE *get_Users )(
            __RPC__in _Group25 * This,
                                __RPC__deref_out_opt ADOUsers **ppvObject);
        END_INTERFACE
    } _Group25Vtbl;
    interface _Group25
    {
        CONST_VTBL struct _Group25Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> GetPermissions(This,Name,ObjectType,ObjectTypeId,Rights) )
    ( (This)->lpVtbl -> SetPermissions(This,Name,ObjectType,Action,Rights,Inherit,ObjectTypeId) )
    ( (This)->lpVtbl -> get_Users(This,ppvObject) )
EXTERN_C const IID IID__Group;
    typedef struct _GroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOGroup * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOGroup * This,
                       __RPC__in BSTR newVal);
                                HRESULT ( STDMETHODCALLTYPE *GetPermissions )(
            __RPC__in _ADOGroup * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                                 VARIANT ObjectTypeId,
                                __RPC__out RightsEnum *Rights);
                                HRESULT ( STDMETHODCALLTYPE *SetPermissions )(
            __RPC__in _ADOGroup * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                       ActionEnum Action,
                       RightsEnum Rights,
                                     InheritTypeEnum Inherit,
                                 VARIANT ObjectTypeId);
                                         HRESULT ( STDMETHODCALLTYPE *get_Users )(
            __RPC__in _ADOGroup * This,
                                __RPC__deref_out_opt ADOUsers **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOGroup * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ParentCatalog )(
            __RPC__in _ADOGroup * This,
                                __RPC__deref_out_opt _ADOCatalog **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *put_ParentCatalog )(
            __RPC__in _ADOGroup * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ParentADOCatalog )(
            __RPC__in _ADOGroup * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
        END_INTERFACE
    } _GroupVtbl;
    interface _Group
    {
        CONST_VTBL struct _GroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> GetPermissions(This,Name,ObjectType,ObjectTypeId,Rights) )
    ( (This)->lpVtbl -> SetPermissions(This,Name,ObjectType,Action,Rights,Inherit,ObjectTypeId) )
    ( (This)->lpVtbl -> get_Users(This,ppvObject) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> put_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> putref_ParentCatalog(This,ppvObject) )
EXTERN_C const IID IID__User25;
    typedef struct _User25Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _User25 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _User25 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _User25 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _User25 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _User25 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _User25 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _User25 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _User25 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _User25 * This,
                       __RPC__in BSTR newVal);
                                HRESULT ( STDMETHODCALLTYPE *GetPermissions )(
            __RPC__in _User25 * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                                 VARIANT ObjectTypeId,
                                __RPC__out RightsEnum *Rights);
                                HRESULT ( STDMETHODCALLTYPE *SetPermissions )(
            __RPC__in _User25 * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                       ActionEnum Action,
                       RightsEnum Rights,
                                     InheritTypeEnum Inherit,
                                 VARIANT ObjectTypeId);
                                HRESULT ( STDMETHODCALLTYPE *ChangePassword )(
            __RPC__in _User25 * This,
                       __RPC__in BSTR OldPassword,
                       __RPC__in BSTR NewPassword);
                                         HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in _User25 * This,
                                __RPC__deref_out_opt ADOGroups **ppvObject);
        END_INTERFACE
    } _User25Vtbl;
    interface _User25
    {
        CONST_VTBL struct _User25Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> GetPermissions(This,Name,ObjectType,ObjectTypeId,Rights) )
    ( (This)->lpVtbl -> SetPermissions(This,Name,ObjectType,Action,Rights,Inherit,ObjectTypeId) )
    ( (This)->lpVtbl -> ChangePassword(This,OldPassword,NewPassword) )
    ( (This)->lpVtbl -> get_Groups(This,ppvObject) )
EXTERN_C const IID IID__User;
    typedef struct _UserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOUser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOUser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOUser * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOUser * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOUser * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOUser * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOUser * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOUser * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOUser * This,
                       __RPC__in BSTR newVal);
                                HRESULT ( STDMETHODCALLTYPE *GetPermissions )(
            __RPC__in _ADOUser * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                                 VARIANT ObjectTypeId,
                                __RPC__out RightsEnum *Rights);
                                HRESULT ( STDMETHODCALLTYPE *SetPermissions )(
            __RPC__in _ADOUser * This,
                       VARIANT Name,
                       ObjectTypeEnum ObjectType,
                       ActionEnum Action,
                       RightsEnum Rights,
                                     InheritTypeEnum Inherit,
                                 VARIANT ObjectTypeId);
                                HRESULT ( STDMETHODCALLTYPE *ChangePassword )(
            __RPC__in _ADOUser * This,
                       __RPC__in BSTR OldPassword,
                       __RPC__in BSTR NewPassword);
                                         HRESULT ( STDMETHODCALLTYPE *get_Groups )(
            __RPC__in _ADOUser * This,
                                __RPC__deref_out_opt ADOGroups **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOUser * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ParentCatalog )(
            __RPC__in _ADOUser * This,
                                __RPC__deref_out_opt _ADOCatalog **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *put_ParentCatalog )(
            __RPC__in _ADOUser * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ParentADOCatalog )(
            __RPC__in _ADOUser * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
        END_INTERFACE
    } _UserVtbl;
    interface _User
    {
        CONST_VTBL struct _UserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> GetPermissions(This,Name,ObjectType,ObjectTypeId,Rights) )
    ( (This)->lpVtbl -> SetPermissions(This,Name,ObjectType,Action,Rights,Inherit,ObjectTypeId) )
    ( (This)->lpVtbl -> ChangePassword(This,OldPassword,NewPassword) )
    ( (This)->lpVtbl -> get_Groups(This,ppvObject) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> put_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> putref_ParentCatalog(This,ppvObject) )
EXTERN_C const IID IID__Column;
    typedef struct _ColumnVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOColumn * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOColumn * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOColumn * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOColumn * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOColumn * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOColumn * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOColumn * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOColumn * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOColumn * This,
                       __RPC__in BSTR newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in _ADOColumn * This,
                                __RPC__out ColumnAttributesEnum *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in _ADOColumn * This,
                       ColumnAttributesEnum newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_DefinedSize )(
            __RPC__in _ADOColumn * This,
                                __RPC__out long *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_DefinedSize )(
            __RPC__in _ADOColumn * This,
                       long DefinedSize);
                                         HRESULT ( STDMETHODCALLTYPE *get_NumericScale )(
            __RPC__in _ADOColumn * This,
                                __RPC__out BYTE *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_NumericScale )(
            __RPC__in _ADOColumn * This,
                       BYTE newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Precision )(
            __RPC__in _ADOColumn * This,
                                __RPC__out long *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Precision )(
            __RPC__in _ADOColumn * This,
                       long newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_RelatedColumn )(
            __RPC__in _ADOColumn * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_RelatedColumn )(
            __RPC__in _ADOColumn * This,
                       __RPC__in BSTR newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_SortOrder )(
            __RPC__in _ADOColumn * This,
                                __RPC__out SortOrderEnum *pVal);
                            HRESULT ( STDMETHODCALLTYPE *put_SortOrder )(
            __RPC__in _ADOColumn * This,
                       SortOrderEnum newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in _ADOColumn * This,
                                __RPC__out DataTypeEnum *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in _ADOColumn * This,
                       DataTypeEnum newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOColumn * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_ParentCatalog )(
            __RPC__in _ADOColumn * This,
                                __RPC__deref_out_opt _ADOCatalog **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *put_ParentCatalog )(
            __RPC__in _ADOColumn * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
                                            HRESULT ( STDMETHODCALLTYPE *putref_ParentADOCatalog )(
            __RPC__in _ADOColumn * This,
                       __RPC__in_opt _ADOCatalog *ppvObject);
        END_INTERFACE
    } _ColumnVtbl;
    interface _Column
    {
        CONST_VTBL struct _ColumnVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> get_Attributes(This,pVal) )
    ( (This)->lpVtbl -> put_Attributes(This,newVal) )
    ( (This)->lpVtbl -> get_DefinedSize(This,pVal) )
    ( (This)->lpVtbl -> put_DefinedSize(This,DefinedSize) )
    ( (This)->lpVtbl -> get_NumericScale(This,pVal) )
    ( (This)->lpVtbl -> put_NumericScale(This,newVal) )
    ( (This)->lpVtbl -> get_Precision(This,pVal) )
    ( (This)->lpVtbl -> put_Precision(This,newVal) )
    ( (This)->lpVtbl -> get_RelatedColumn(This,pVal) )
    ( (This)->lpVtbl -> put_RelatedColumn(This,newVal) )
    ( (This)->lpVtbl -> get_SortOrder(This,pVal) )
    ( (This)->lpVtbl -> put_SortOrder(This,newVal) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> put_Type(This,newVal) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
    ( (This)->lpVtbl -> get_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> put_ParentCatalog(This,ppvObject) )
    ( (This)->lpVtbl -> putref_ParentCatalog(This,ppvObject) )
EXTERN_C const IID IID__Index;
    typedef struct _IndexVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOIndex * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOIndex * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOIndex * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOIndex * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOIndex * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOIndex * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOIndex * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOIndex * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOIndex * This,
                       __RPC__in BSTR newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Clustered )(
            __RPC__in _ADOIndex * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Clustered )(
            __RPC__in _ADOIndex * This,
                       VARIANT_BOOL newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_IndexNulls )(
            __RPC__in _ADOIndex * This,
                                __RPC__out AllowNullsEnum *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_IndexNulls )(
            __RPC__in _ADOIndex * This,
                       AllowNullsEnum newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_PrimaryKey )(
            __RPC__in _ADOIndex * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_PrimaryKey )(
            __RPC__in _ADOIndex * This,
                       VARIANT_BOOL newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Unique )(
            __RPC__in _ADOIndex * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Unique )(
            __RPC__in _ADOIndex * This,
                       VARIANT_BOOL newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Columns )(
            __RPC__in _ADOIndex * This,
                                __RPC__deref_out_opt ADOColumns **ppvObject);
                                         HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in _ADOIndex * This,
                                __RPC__deref_out_opt ADOProperties **ppvObject);
        END_INTERFACE
    } _IndexVtbl;
    interface _Index
    {
        CONST_VTBL struct _IndexVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> get_Clustered(This,pVal) )
    ( (This)->lpVtbl -> put_Clustered(This,newVal) )
    ( (This)->lpVtbl -> get_IndexNulls(This,pVal) )
    ( (This)->lpVtbl -> put_IndexNulls(This,newVal) )
    ( (This)->lpVtbl -> get_PrimaryKey(This,pVal) )
    ( (This)->lpVtbl -> put_PrimaryKey(This,newVal) )
    ( (This)->lpVtbl -> get_Unique(This,pVal) )
    ( (This)->lpVtbl -> put_Unique(This,newVal) )
    ( (This)->lpVtbl -> get_Columns(This,ppvObject) )
    ( (This)->lpVtbl -> get_Properties(This,ppvObject) )
EXTERN_C const IID IID__Key;
    typedef struct _KeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ADOKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ADOKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ADOKey * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ADOKey * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ADOKey * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ADOKey * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ADOKey * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in _ADOKey * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in _ADOKey * This,
                       __RPC__in BSTR newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_DeleteRule )(
            __RPC__in _ADOKey * This,
                                __RPC__out RuleEnum *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_DeleteRule )(
            __RPC__in _ADOKey * This,
                       RuleEnum newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in _ADOKey * This,
                                __RPC__out KeyTypeEnum *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in _ADOKey * This,
                       KeyTypeEnum newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_RelatedTable )(
            __RPC__in _ADOKey * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_RelatedTable )(
            __RPC__in _ADOKey * This,
                       __RPC__in BSTR newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_UpdateRule )(
            __RPC__in _ADOKey * This,
                                __RPC__out RuleEnum *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_UpdateRule )(
            __RPC__in _ADOKey * This,
                       RuleEnum newVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_Columns )(
            __RPC__in _ADOKey * This,
                                __RPC__deref_out_opt ADOColumns **ppvObject);
        END_INTERFACE
    } _KeyVtbl;
    interface _Key
    {
        CONST_VTBL struct _KeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> put_Name(This,newVal) )
    ( (This)->lpVtbl -> get_DeleteRule(This,pVal) )
    ( (This)->lpVtbl -> put_DeleteRule(This,newVal) )
    ( (This)->lpVtbl -> get_Type(This,pVal) )
    ( (This)->lpVtbl -> put_Type(This,newVal) )
    ( (This)->lpVtbl -> get_RelatedTable(This,pVal) )
    ( (This)->lpVtbl -> put_RelatedTable(This,newVal) )
    ( (This)->lpVtbl -> get_UpdateRule(This,pVal) )
    ( (This)->lpVtbl -> put_UpdateRule(This,newVal) )
    ( (This)->lpVtbl -> get_Columns(This,ppvObject) )
EXTERN_C const IID IID_View;
    typedef struct ViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOView * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOView * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOView * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOView * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOView * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOView * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Command )(
            __RPC__in ADOView * This,
                                __RPC__out VARIANT *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *put_Command )(
            __RPC__in ADOView * This,
                       VARIANT newVal);
                                            HRESULT ( STDMETHODCALLTYPE *putref_Command )(
            __RPC__in ADOView * This,
                       __RPC__in_opt IDispatch *pComm);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ADOView * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_DateCreated )(
            __RPC__in ADOView * This,
                                __RPC__out VARIANT *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_DateModified )(
            __RPC__in ADOView * This,
                                __RPC__out VARIANT *pVal);
        END_INTERFACE
    } ViewVtbl;
    interface View
    {
        CONST_VTBL struct ViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Command(This,pVal) )
    ( (This)->lpVtbl -> put_Command(This,newVal) )
    ( (This)->lpVtbl -> putref_Command(This,pComm) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_DateCreated(This,pVal) )
    ( (This)->lpVtbl -> get_DateModified(This,pVal) )
EXTERN_C const IID IID_Procedure;
    typedef struct ProcedureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOProcedure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOProcedure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOProcedure * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOProcedure * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOProcedure * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOProcedure * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOProcedure * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Command )(
            __RPC__in ADOProcedure * This,
                                __RPC__out VARIANT *pVar);
                                         HRESULT ( STDMETHODCALLTYPE *put_Command )(
            __RPC__in ADOProcedure * This,
                       VARIANT newVal);
                                            HRESULT ( STDMETHODCALLTYPE *putref_Command )(
            __RPC__in ADOProcedure * This,
                       __RPC__in_opt IDispatch *pComm);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ADOProcedure * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_DateCreated )(
            __RPC__in ADOProcedure * This,
                                __RPC__out VARIANT *pVal);
                                         HRESULT ( STDMETHODCALLTYPE *get_DateModified )(
            __RPC__in ADOProcedure * This,
                                __RPC__out VARIANT *pVal);
        END_INTERFACE
    } ProcedureVtbl;
    interface Procedure
    {
        CONST_VTBL struct ProcedureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Command(This,pVar) )
    ( (This)->lpVtbl -> put_Command(This,newVal) )
    ( (This)->lpVtbl -> putref_Command(This,pComm) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_DateCreated(This,pVal) )
    ( (This)->lpVtbl -> get_DateModified(This,pVal) )
EXTERN_C const CLSID CLSID_Catalog;
Catalog;
EXTERN_C const CLSID CLSID_Table;
Table;
EXTERN_C const IID IID_Property;
    typedef struct PropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ADOProperty * This,
                                __RPC__out VARIANT *pval);
                                         HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in ADOProperty * This,
                       VARIANT val);
                                         HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ADOProperty * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                                         HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ADOProperty * This,
                                __RPC__out DataTypeEnum *ptype);
                                         HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in ADOProperty * This,
                                __RPC__out long *plAttributes);
                                         HRESULT ( STDMETHODCALLTYPE *put_Attributes )(
            __RPC__in ADOProperty * This,
                       long lAttributes);
        END_INTERFACE
    } PropertyVtbl;
    interface Property
    {
        CONST_VTBL struct PropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Value(This,pval) )
    ( (This)->lpVtbl -> put_Value(This,val) )
    ( (This)->lpVtbl -> get_Name(This,pbstr) )
    ( (This)->lpVtbl -> get_Type(This,ptype) )
    ( (This)->lpVtbl -> get_Attributes(This,plAttributes) )
    ( (This)->lpVtbl -> put_Attributes(This,lAttributes) )
EXTERN_C const CLSID CLSID_Group;
Group;
EXTERN_C const CLSID CLSID_User;
User;
EXTERN_C const CLSID CLSID_Column;
Column;
EXTERN_C const CLSID CLSID_Index;
Index;
EXTERN_C const CLSID CLSID_Key;
Key;
EXTERN_C const IID IID_Tables;
    typedef struct TablesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOTables * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOTables * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOTables * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOTables * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOTables * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOTables * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOTables * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOTables * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOTables * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOTables * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOTables * This,
                       VARIANT Item,
                                __RPC__deref_out_opt Table **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOTables * This,
                       VARIANT Item);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOTables * This,
                       VARIANT Item);
        END_INTERFACE
    } TablesVtbl;
    interface Tables
    {
        CONST_VTBL struct TablesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Item) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Columns;
    typedef struct ColumnsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOColumns * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOColumns * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOColumns * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOColumns * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOColumns * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOColumns * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOColumns * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOColumns * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOColumns * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOColumns * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOColumns * This,
                       VARIANT Item,
                                __RPC__deref_out_opt Column **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOColumns * This,
                       VARIANT Item,
                                     DataTypeEnum Type,
                                     long DefinedSize);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOColumns * This,
                       VARIANT Item);
        END_INTERFACE
    } ColumnsVtbl;
    interface Columns
    {
        CONST_VTBL struct ColumnsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Item,Type,DefinedSize) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Procedures;
    typedef struct ProceduresVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOProcedures * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOProcedures * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOProcedures * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOProcedures * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOProcedures * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOProcedures * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOProcedures * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOProcedures * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOProcedures * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOProcedures * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOProcedures * This,
                       VARIANT Item,
                                __RPC__deref_out_opt ADOProcedure **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOProcedures * This,
                       __RPC__in BSTR Name,
                       __RPC__in_opt IDispatch *Command);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOProcedures * This,
                       VARIANT Item);
        END_INTERFACE
    } ProceduresVtbl;
    interface Procedures
    {
        CONST_VTBL struct ProceduresVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Name,Command) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Views;
    typedef struct ViewsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOViews * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOViews * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOViews * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOViews * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOViews * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOViews * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOViews * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOViews * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOViews * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOViews * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOViews * This,
                       VARIANT Item,
                                __RPC__deref_out_opt ADOView **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOViews * This,
                       __RPC__in BSTR Name,
                       __RPC__in_opt IDispatch *Command);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOViews * This,
                       VARIANT Item);
        END_INTERFACE
    } ViewsVtbl;
    interface Views
    {
        CONST_VTBL struct ViewsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Name,Command) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Indexes;
    typedef struct IndexesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOIndexes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOIndexes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOIndexes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOIndexes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOIndexes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOIndexes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOIndexes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOIndexes * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOIndexes * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOIndexes * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOIndexes * This,
                       VARIANT Item,
                                __RPC__deref_out_opt Index **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOIndexes * This,
                       VARIANT Item,
                                 VARIANT columns);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOIndexes * This,
                       VARIANT Item);
        END_INTERFACE
    } IndexesVtbl;
    interface Indexes
    {
        CONST_VTBL struct IndexesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Item,columns) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Keys;
    typedef struct KeysVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOKeys * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOKeys * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOKeys * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOKeys * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOKeys * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOKeys * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOKeys * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOKeys * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOKeys * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOKeys * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOKeys * This,
                       VARIANT Item,
                                __RPC__deref_out_opt Key **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOKeys * This,
                       VARIANT Item,
                                     KeyTypeEnum Type,
                                 VARIANT Column,
                                     __RPC__in BSTR RelatedTable,
                                     __RPC__in BSTR RelatedColumn);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOKeys * This,
                       VARIANT Item);
        END_INTERFACE
    } KeysVtbl;
    interface Keys
    {
        CONST_VTBL struct KeysVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Item,Type,Column,RelatedTable,RelatedColumn) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Users;
    typedef struct UsersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOUsers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOUsers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOUsers * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOUsers * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOUsers * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOUsers * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOUsers * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOUsers * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOUsers * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOUsers * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOUsers * This,
                       VARIANT Item,
                                __RPC__deref_out_opt User **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOUsers * This,
                       VARIANT Item,
                                     __RPC__in BSTR Password);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOUsers * This,
                       VARIANT Item);
        END_INTERFACE
    } UsersVtbl;
    interface Users
    {
        CONST_VTBL struct UsersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Item,Password) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Groups;
    typedef struct GroupsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOGroups * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOGroups * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOGroups * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOGroups * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOGroups * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOGroups * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOGroups * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOGroups * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOGroups * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOGroups * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOGroups * This,
                       VARIANT Item,
                                __RPC__deref_out_opt Group **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in ADOGroups * This,
                       VARIANT Item);
                            HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in ADOGroups * This,
                       VARIANT Item);
        END_INTERFACE
    } GroupsVtbl;
    interface Groups
    {
        CONST_VTBL struct GroupsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
    ( (This)->lpVtbl -> Append(This,Item) )
    ( (This)->lpVtbl -> Delete(This,Item) )
EXTERN_C const IID IID_Properties;
    typedef struct PropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ADOProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ADOProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ADOProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ADOProperties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ADOProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ADOProperties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ADOProperties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                     HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ADOProperties * This,
                                __RPC__out long *c);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in ADOProperties * This,
                                __RPC__deref_out_opt IUnknown **ppvObject);
                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in ADOProperties * This);
                                         HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ADOProperties * This,
                       VARIANT Item,
                                __RPC__deref_out_opt ADOProperty **ppvObject);
        END_INTERFACE
    } PropertiesVtbl;
    interface Properties
    {
        CONST_VTBL struct PropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,c) )
    ( (This)->lpVtbl -> _NewEnum(This,ppvObject) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_Item(This,Item,ppvObject) )
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_adocat_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_adocat_0000_0001_v0_0_s_ifspec;
}
