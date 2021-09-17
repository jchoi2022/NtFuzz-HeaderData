#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDebugProperty IDebugProperty;
typedef interface IEnumDebugPropertyInfo IEnumDebugPropertyInfo;
typedef interface IDebugExtendedProperty IDebugExtendedProperty;
typedef interface IEnumDebugExtendedPropertyInfo IEnumDebugExtendedPropertyInfo;
typedef interface IPerPropertyBrowsing2 IPerPropertyBrowsing2;
typedef interface IDebugPropertyEnumType_All IDebugPropertyEnumType_All;
typedef interface IDebugPropertyEnumType_Locals IDebugPropertyEnumType_Locals;
typedef interface IDebugPropertyEnumType_Arguments IDebugPropertyEnumType_Arguments;
typedef interface IDebugPropertyEnumType_LocalsPlusArgs IDebugPropertyEnumType_LocalsPlusArgs;
typedef interface IDebugPropertyEnumType_Registers IDebugPropertyEnumType_Registers;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern GUID guidDocument;
extern GUID guidCodeContext;
enum __MIDL___MIDL_itf_dbgprop_0000_0000_0001
    {
        DBGPROP_ATTRIB_NO_ATTRIB = 0,
        DBGPROP_ATTRIB_VALUE_IS_INVALID = 0x8,
        DBGPROP_ATTRIB_VALUE_IS_EXPANDABLE = 0x10,
        DBGPROP_ATTRIB_VALUE_IS_FAKE = 0x20,
        DBGPROP_ATTRIB_VALUE_IS_METHOD = 0x100,
        DBGPROP_ATTRIB_VALUE_IS_EVENT = 0x200,
        DBGPROP_ATTRIB_VALUE_IS_RAW_STRING = 0x400,
        DBGPROP_ATTRIB_VALUE_READONLY = 0x800,
        DBGPROP_ATTRIB_ACCESS_PUBLIC = 0x1000,
        DBGPROP_ATTRIB_ACCESS_PRIVATE = 0x2000,
        DBGPROP_ATTRIB_ACCESS_PROTECTED = 0x4000,
        DBGPROP_ATTRIB_ACCESS_FINAL = 0x8000,
        DBGPROP_ATTRIB_STORAGE_GLOBAL = 0x10000,
        DBGPROP_ATTRIB_STORAGE_STATIC = 0x20000,
        DBGPROP_ATTRIB_STORAGE_FIELD = 0x40000,
        DBGPROP_ATTRIB_STORAGE_VIRTUAL = 0x80000,
        DBGPROP_ATTRIB_TYPE_IS_CONSTANT = 0x100000,
        DBGPROP_ATTRIB_TYPE_IS_SYNCHRONIZED = 0x200000,
        DBGPROP_ATTRIB_TYPE_IS_VOLATILE = 0x400000,
        DBGPROP_ATTRIB_HAS_EXTENDED_ATTRIBS = 0x800000,
        DBGPROP_ATTRIB_FRAME_INTRYBLOCK = 0x1000000,
        DBGPROP_ATTRIB_FRAME_INCATCHBLOCK = 0x2000000,
        DBGPROP_ATTRIB_FRAME_INFINALLYBLOCK = 0x4000000,
        DBGPROP_ATTRIB_VALUE_IS_RETURN_VALUE = 0x8000000,
        DBGPROP_ATTRIB_VALUE_PENDING_MUTATION = 0x10000000
    } ;
typedef DWORD DBGPROP_ATTRIB_FLAGS;
enum __MIDL___MIDL_itf_dbgprop_0000_0000_0002
    {
        DBGPROP_INFO_NAME = 0x1,
        DBGPROP_INFO_TYPE = 0x2,
        DBGPROP_INFO_VALUE = 0x4,
        DBGPROP_INFO_FULLNAME = 0x20,
        DBGPROP_INFO_ATTRIBUTES = 0x8,
        DBGPROP_INFO_DEBUGPROP = 0x10,
        DBGPROP_INFO_BEAUTIFY = 0x2000000,
        DBGPROP_INFO_CALLTOSTRING = 0x4000000,
        DBGPROP_INFO_AUTOEXPAND = 0x8000000
    } ;
typedef DWORD DBGPROP_INFO_FLAGS;
typedef
enum tagOBJECT_ATTRIB_FLAG
    {
        OBJECT_ATTRIB_NO_ATTRIB = 0,
        OBJECT_ATTRIB_NO_NAME = 0x1,
        OBJECT_ATTRIB_NO_TYPE = 0x2,
        OBJECT_ATTRIB_NO_VALUE = 0x4,
        OBJECT_ATTRIB_VALUE_IS_INVALID = 0x8,
        OBJECT_ATTRIB_VALUE_IS_OBJECT = 0x10,
        OBJECT_ATTRIB_VALUE_IS_ENUM = 0x20,
        OBJECT_ATTRIB_VALUE_IS_CUSTOM = 0x40,
        OBJECT_ATTRIB_OBJECT_IS_EXPANDABLE = 0x70,
        OBJECT_ATTRIB_VALUE_HAS_CODE = 0x80,
        OBJECT_ATTRIB_TYPE_IS_OBJECT = 0x100,
        OBJECT_ATTRIB_TYPE_HAS_CODE = 0x200,
        OBJECT_ATTRIB_TYPE_IS_EXPANDABLE = 0x100,
        OBJECT_ATTRIB_SLOT_IS_CATEGORY = 0x400,
        OBJECT_ATTRIB_VALUE_READONLY = 0x800,
        OBJECT_ATTRIB_ACCESS_PUBLIC = 0x1000,
        OBJECT_ATTRIB_ACCESS_PRIVATE = 0x2000,
        OBJECT_ATTRIB_ACCESS_PROTECTED = 0x4000,
        OBJECT_ATTRIB_ACCESS_FINAL = 0x8000,
        OBJECT_ATTRIB_STORAGE_GLOBAL = 0x10000,
        OBJECT_ATTRIB_STORAGE_STATIC = 0x20000,
        OBJECT_ATTRIB_STORAGE_FIELD = 0x40000,
        OBJECT_ATTRIB_STORAGE_VIRTUAL = 0x80000,
        OBJECT_ATTRIB_TYPE_IS_CONSTANT = 0x100000,
        OBJECT_ATTRIB_TYPE_IS_SYNCHRONIZED = 0x200000,
        OBJECT_ATTRIB_TYPE_IS_VOLATILE = 0x400000,
        OBJECT_ATTRIB_HAS_EXTENDED_ATTRIBS = 0x800000,
        OBJECT_ATTRIB_IS_CLASS = 0x1000000,
        OBJECT_ATTRIB_IS_FUNCTION = 0x2000000,
        OBJECT_ATTRIB_IS_VARIABLE = 0x4000000,
        OBJECT_ATTRIB_IS_PROPERTY = 0x8000000,
        OBJECT_ATTRIB_IS_MACRO = 0x10000000,
        OBJECT_ATTRIB_IS_TYPE = 0x20000000,
        OBJECT_ATTRIB_IS_INHERITED = 0x40000000,
        OBJECT_ATTRIB_IS_INTERFACE = 0x80000000
    } OBJECT_ATTRIB_FLAGS;
typedef
enum tagPROP_INFO_FLAGS
    {
        PROP_INFO_NAME = 0x1,
        PROP_INFO_TYPE = 0x2,
        PROP_INFO_VALUE = 0x4,
        PROP_INFO_FULLNAME = 0x20,
        PROP_INFO_ATTRIBUTES = 0x8,
        PROP_INFO_DEBUGPROP = 0x10,
        PROP_INFO_AUTOEXPAND = 0x8000000
    } PROP_INFO_FLAGS;
typedef struct tagDebugPropertyInfo
    {
    DWORD m_dwValidFields;
    BSTR m_bstrName;
    BSTR m_bstrType;
    BSTR m_bstrValue;
    BSTR m_bstrFullName;
    DWORD m_dwAttrib;
    IDebugProperty *m_pDebugProp;
    } DebugPropertyInfo;
typedef
enum tagEX_PROP_INFO_FLAGS
    {
        EX_PROP_INFO_ID = 0x100,
        EX_PROP_INFO_NTYPE = 0x200,
        EX_PROP_INFO_NVALUE = 0x400,
        EX_PROP_INFO_LOCKBYTES = 0x800,
        EX_PROP_INFO_DEBUGEXTPROP = 0x1000
    } EX_PROP_INFO_FLAGS;
typedef struct tagExtendedDebugPropertyInfo
    {
    DWORD dwValidFields;
    LPOLESTR pszName;
    LPOLESTR pszType;
    LPOLESTR pszValue;
    LPOLESTR pszFullName;
    DWORD dwAttrib;
    IDebugProperty *pDebugProp;
    DWORD nDISPID;
    DWORD nType;
    VARIANT varValue;
    ILockBytes *plbValue;
    IDebugExtendedProperty *pDebugExtProp;
    } ExtendedDebugPropertyInfo;
extern RPC_IF_HANDLE __MIDL_itf_dbgprop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dbgprop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDebugProperty;
    typedef struct IDebugPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugProperty * This);
                      HRESULT ( STDMETHODCALLTYPE *GetPropertyInfo )(
            IDebugProperty * This,
                       DWORD dwFieldSpec,
                       UINT nRadix,
                        DebugPropertyInfo *pPropertyInfo);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedInfo )(
            __RPC__in IDebugProperty * This,
                       ULONG cInfos,
                                __RPC__in_ecount_full(cInfos) GUID *rgguidExtendedInfo,
                                 __RPC__out_ecount_full(cInfos) VARIANT *rgvar);
        HRESULT ( STDMETHODCALLTYPE *SetValueAsString )(
            __RPC__in IDebugProperty * This,
                       __RPC__in LPCOLESTR pszValue,
                       UINT nRadix);
        HRESULT ( STDMETHODCALLTYPE *EnumMembers )(
            __RPC__in IDebugProperty * This,
                       DWORD dwFieldSpec,
                       UINT nRadix,
                       __RPC__in REFIID refiid,
                        __RPC__deref_out_opt IEnumDebugPropertyInfo **ppepi);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IDebugProperty * This,
                        __RPC__deref_out_opt IDebugProperty **ppDebugProp);
        END_INTERFACE
    } IDebugPropertyVtbl;
    interface IDebugProperty
    {
        CONST_VTBL struct IDebugPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyInfo(This,dwFieldSpec,nRadix,pPropertyInfo) )
    ( (This)->lpVtbl -> GetExtendedInfo(This,cInfos,rgguidExtendedInfo,rgvar) )
    ( (This)->lpVtbl -> SetValueAsString(This,pszValue,nRadix) )
    ( (This)->lpVtbl -> EnumMembers(This,dwFieldSpec,nRadix,refiid,ppepi) )
    ( (This)->lpVtbl -> GetParent(This,ppDebugProp) )
                HRESULT STDMETHODCALLTYPE IDebugProperty_RemoteGetPropertyInfo_Proxy(
    __RPC__in IDebugProperty * This,
               DWORD dwFieldSpec,
               UINT nRadix,
                __RPC__out DWORD *dwValidFields,
                __RPC__deref_out_opt BSTR *pbstrName,
                __RPC__deref_out_opt BSTR *pbstrType,
                __RPC__deref_out_opt BSTR *pbstrValue,
                __RPC__deref_out_opt BSTR *pbstrFullName,
                __RPC__out DWORD *pdwAttrib,
                            __RPC__deref_opt_inout_opt IDebugProperty **ppDebugProperty);
void __RPC_STUB IDebugProperty_RemoteGetPropertyInfo_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumDebugPropertyInfo;
    typedef struct IEnumDebugPropertyInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDebugPropertyInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDebugPropertyInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDebugPropertyInfo * This);
                      HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumDebugPropertyInfo * This,
                       ULONG celt,
                        DebugPropertyInfo *pi,
                        ULONG *pcEltsfetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDebugPropertyInfo * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDebugPropertyInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDebugPropertyInfo * This,
                        __RPC__deref_out_opt IEnumDebugPropertyInfo **ppepi);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumDebugPropertyInfo * This,
                        __RPC__out ULONG *pcelt);
        END_INTERFACE
    } IEnumDebugPropertyInfoVtbl;
    interface IEnumDebugPropertyInfo
    {
        CONST_VTBL struct IEnumDebugPropertyInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pi,pcEltsfetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppepi) )
    ( (This)->lpVtbl -> GetCount(This,pcelt) )
                HRESULT __stdcall IEnumDebugPropertyInfo_RemoteNext_Proxy(
    __RPC__in IEnumDebugPropertyInfo * This,
               ULONG celt,
                                                __RPC__inout_ecount_part_opt(celt, *pcEltsfetched) DebugPropertyInfo *pinfo,
                __RPC__out ULONG *pcEltsfetched);
void __RPC_STUB IEnumDebugPropertyInfo_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IDebugExtendedProperty;
    typedef struct IDebugExtendedPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugExtendedProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugExtendedProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugExtendedProperty * This);
                      HRESULT ( STDMETHODCALLTYPE *GetPropertyInfo )(
            IDebugExtendedProperty * This,
                       DWORD dwFieldSpec,
                       UINT nRadix,
                        DebugPropertyInfo *pPropertyInfo);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedInfo )(
            __RPC__in IDebugExtendedProperty * This,
                       ULONG cInfos,
                                __RPC__in_ecount_full(cInfos) GUID *rgguidExtendedInfo,
                                 __RPC__out_ecount_full(cInfos) VARIANT *rgvar);
        HRESULT ( STDMETHODCALLTYPE *SetValueAsString )(
            __RPC__in IDebugExtendedProperty * This,
                       __RPC__in LPCOLESTR pszValue,
                       UINT nRadix);
        HRESULT ( STDMETHODCALLTYPE *EnumMembers )(
            __RPC__in IDebugExtendedProperty * This,
                       DWORD dwFieldSpec,
                       UINT nRadix,
                       __RPC__in REFIID refiid,
                        __RPC__deref_out_opt IEnumDebugPropertyInfo **ppepi);
        HRESULT ( STDMETHODCALLTYPE *GetParent )(
            __RPC__in IDebugExtendedProperty * This,
                        __RPC__deref_out_opt IDebugProperty **ppDebugProp);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedPropertyInfo )(
            __RPC__in IDebugExtendedProperty * This,
                       DWORD dwFieldSpec,
                       UINT nRadix,
                        __RPC__out ExtendedDebugPropertyInfo *pExtendedPropertyInfo);
        HRESULT ( STDMETHODCALLTYPE *EnumExtendedMembers )(
            __RPC__in IDebugExtendedProperty * This,
                       DWORD dwFieldSpec,
                       UINT nRadix,
                        __RPC__deref_out_opt IEnumDebugExtendedPropertyInfo **ppeepi);
        END_INTERFACE
    } IDebugExtendedPropertyVtbl;
    interface IDebugExtendedProperty
    {
        CONST_VTBL struct IDebugExtendedPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyInfo(This,dwFieldSpec,nRadix,pPropertyInfo) )
    ( (This)->lpVtbl -> GetExtendedInfo(This,cInfos,rgguidExtendedInfo,rgvar) )
    ( (This)->lpVtbl -> SetValueAsString(This,pszValue,nRadix) )
    ( (This)->lpVtbl -> EnumMembers(This,dwFieldSpec,nRadix,refiid,ppepi) )
    ( (This)->lpVtbl -> GetParent(This,ppDebugProp) )
    ( (This)->lpVtbl -> GetExtendedPropertyInfo(This,dwFieldSpec,nRadix,pExtendedPropertyInfo) )
    ( (This)->lpVtbl -> EnumExtendedMembers(This,dwFieldSpec,nRadix,ppeepi) )
EXTERN_C const IID IID_IEnumDebugExtendedPropertyInfo;
    typedef struct IEnumDebugExtendedPropertyInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) ExtendedDebugPropertyInfo *rgExtendedPropertyInfo,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This,
                        __RPC__deref_out_opt IEnumDebugExtendedPropertyInfo **pedpe);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumDebugExtendedPropertyInfo * This,
                        __RPC__out ULONG *pcelt);
        END_INTERFACE
    } IEnumDebugExtendedPropertyInfoVtbl;
    interface IEnumDebugExtendedPropertyInfo
    {
        CONST_VTBL struct IEnumDebugExtendedPropertyInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgExtendedPropertyInfo,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,pedpe) )
    ( (This)->lpVtbl -> GetCount(This,pcelt) )
EXTERN_C const IID IID_IPerPropertyBrowsing2;
    typedef struct IPerPropertyBrowsing2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPerPropertyBrowsing2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPerPropertyBrowsing2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPerPropertyBrowsing2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayString )(
            __RPC__in IPerPropertyBrowsing2 * This,
                       DISPID dispid,
                        __RPC__deref_out_opt BSTR *pBstr);
        HRESULT ( STDMETHODCALLTYPE *MapPropertyToPage )(
            __RPC__in IPerPropertyBrowsing2 * This,
                       DISPID dispid,
                        __RPC__out CLSID *pClsidPropPage);
        HRESULT ( STDMETHODCALLTYPE *GetPredefinedStrings )(
            __RPC__in IPerPropertyBrowsing2 * This,
                       DISPID dispid,
                        __RPC__out CALPOLESTR *pCaStrings,
                        __RPC__out CADWORD *pCaCookies);
        HRESULT ( STDMETHODCALLTYPE *SetPredefinedValue )(
            __RPC__in IPerPropertyBrowsing2 * This,
                       DISPID dispid,
                       DWORD dwCookie);
        END_INTERFACE
    } IPerPropertyBrowsing2Vtbl;
    interface IPerPropertyBrowsing2
    {
        CONST_VTBL struct IPerPropertyBrowsing2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayString(This,dispid,pBstr) )
    ( (This)->lpVtbl -> MapPropertyToPage(This,dispid,pClsidPropPage) )
    ( (This)->lpVtbl -> GetPredefinedStrings(This,dispid,pCaStrings,pCaCookies) )
    ( (This)->lpVtbl -> SetPredefinedValue(This,dispid,dwCookie) )
EXTERN_C const IID IID_IDebugPropertyEnumType_All;
    typedef struct IDebugPropertyEnumType_AllVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugPropertyEnumType_All * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugPropertyEnumType_All * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugPropertyEnumType_All * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugPropertyEnumType_All * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IDebugPropertyEnumType_All0000);
        END_INTERFACE
    } IDebugPropertyEnumType_AllVtbl;
    interface IDebugPropertyEnumType_All
    {
        CONST_VTBL struct IDebugPropertyEnumType_AllVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
EXTERN_C const IID IID_IDebugPropertyEnumType_Locals;
    typedef struct IDebugPropertyEnumType_LocalsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugPropertyEnumType_Locals * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugPropertyEnumType_Locals * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugPropertyEnumType_Locals * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugPropertyEnumType_Locals * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IDebugPropertyEnumType_All0000);
        END_INTERFACE
    } IDebugPropertyEnumType_LocalsVtbl;
    interface IDebugPropertyEnumType_Locals
    {
        CONST_VTBL struct IDebugPropertyEnumType_LocalsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
EXTERN_C const IID IID_IDebugPropertyEnumType_Arguments;
    typedef struct IDebugPropertyEnumType_ArgumentsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugPropertyEnumType_Arguments * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugPropertyEnumType_Arguments * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugPropertyEnumType_Arguments * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugPropertyEnumType_Arguments * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IDebugPropertyEnumType_All0000);
        END_INTERFACE
    } IDebugPropertyEnumType_ArgumentsVtbl;
    interface IDebugPropertyEnumType_Arguments
    {
        CONST_VTBL struct IDebugPropertyEnumType_ArgumentsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
EXTERN_C const IID IID_IDebugPropertyEnumType_LocalsPlusArgs;
    typedef struct IDebugPropertyEnumType_LocalsPlusArgsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugPropertyEnumType_LocalsPlusArgs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugPropertyEnumType_LocalsPlusArgs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugPropertyEnumType_LocalsPlusArgs * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugPropertyEnumType_LocalsPlusArgs * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IDebugPropertyEnumType_All0000);
        END_INTERFACE
    } IDebugPropertyEnumType_LocalsPlusArgsVtbl;
    interface IDebugPropertyEnumType_LocalsPlusArgs
    {
        CONST_VTBL struct IDebugPropertyEnumType_LocalsPlusArgsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
EXTERN_C const IID IID_IDebugPropertyEnumType_Registers;
    typedef struct IDebugPropertyEnumType_RegistersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDebugPropertyEnumType_Registers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDebugPropertyEnumType_Registers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDebugPropertyEnumType_Registers * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IDebugPropertyEnumType_Registers * This,
                        __RPC__deref_out_opt BSTR *__MIDL__IDebugPropertyEnumType_All0000);
        END_INTERFACE
    } IDebugPropertyEnumType_RegistersVtbl;
    interface IDebugPropertyEnumType_Registers
    {
        CONST_VTBL struct IDebugPropertyEnumType_RegistersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,__MIDL__IDebugPropertyEnumType_All0000) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dbgprop_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dbgprop_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
              HRESULT STDMETHODCALLTYPE IDebugProperty_GetPropertyInfo_Proxy(
    IDebugProperty * This,
               DWORD dwFieldSpec,
               UINT nRadix,
                DebugPropertyInfo *pPropertyInfo);
                HRESULT STDMETHODCALLTYPE IDebugProperty_GetPropertyInfo_Stub(
    __RPC__in IDebugProperty * This,
               DWORD dwFieldSpec,
               UINT nRadix,
                __RPC__out DWORD *dwValidFields,
                __RPC__deref_out_opt BSTR *pbstrName,
                __RPC__deref_out_opt BSTR *pbstrType,
                __RPC__deref_out_opt BSTR *pbstrValue,
                __RPC__deref_out_opt BSTR *pbstrFullName,
                __RPC__out DWORD *pdwAttrib,
                            __RPC__deref_opt_inout_opt IDebugProperty **ppDebugProperty);
              HRESULT STDMETHODCALLTYPE IEnumDebugPropertyInfo_Next_Proxy(
    IEnumDebugPropertyInfo * This,
               ULONG celt,
                DebugPropertyInfo *pi,
                ULONG *pcEltsfetched);
                HRESULT __stdcall IEnumDebugPropertyInfo_Next_Stub(
    __RPC__in IEnumDebugPropertyInfo * This,
               ULONG celt,
                                                __RPC__inout_ecount_part_opt(celt, *pcEltsfetched) DebugPropertyInfo *pinfo,
                __RPC__out ULONG *pcEltsfetched);
}
