#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFsrmPropertyDefinition IFsrmPropertyDefinition;
typedef interface IFsrmPropertyDefinition2 IFsrmPropertyDefinition2;
typedef interface IFsrmPropertyDefinitionValue IFsrmPropertyDefinitionValue;
typedef interface IFsrmProperty IFsrmProperty;
typedef interface IFsrmRule IFsrmRule;
typedef interface IFsrmClassificationRule IFsrmClassificationRule;
typedef interface IFsrmPipelineModuleDefinition IFsrmPipelineModuleDefinition;
typedef interface IFsrmClassifierModuleDefinition IFsrmClassifierModuleDefinition;
typedef interface IFsrmStorageModuleDefinition IFsrmStorageModuleDefinition;
typedef interface IFsrmClassificationManager IFsrmClassificationManager;
typedef interface IFsrmClassificationManager2 IFsrmClassificationManager2;
typedef interface IFsrmPropertyBag IFsrmPropertyBag;
typedef interface IFsrmPropertyBag2 IFsrmPropertyBag2;
typedef interface IFsrmPipelineModuleImplementation IFsrmPipelineModuleImplementation;
typedef interface IFsrmClassifierModuleImplementation IFsrmClassifierModuleImplementation;
typedef interface IFsrmStorageModuleImplementation IFsrmStorageModuleImplementation;
typedef interface IFsrmPipelineModuleConnector IFsrmPipelineModuleConnector;
#include "oaidl.h"
#include "fsrm.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_fsrmpipeline_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmpipeline_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IFsrmPropertyDefinition;
    typedef struct IFsrmPropertyDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPropertyDefinition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPropertyDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPropertyDefinition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPropertyDefinition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPropertyDefinition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPropertyDefinition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPropertyDefinition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmPropertyDefinition * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmPropertyDefinition * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmPropertyDefinition * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmPropertyDefinition * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmPropertyDefinition * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmPropertyDefinition * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmPropertyDefinition * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFsrmPropertyDefinition * This,
                                __RPC__out FsrmPropertyDefinitionType *type);
                                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IFsrmPropertyDefinition * This,
                       FsrmPropertyDefinitionType type);
                                        HRESULT ( STDMETHODCALLTYPE *get_PossibleValues )(
            __RPC__in IFsrmPropertyDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *possibleValues);
                                        HRESULT ( STDMETHODCALLTYPE *put_PossibleValues )(
            __RPC__in IFsrmPropertyDefinition * This,
                       __RPC__in SAFEARRAY * possibleValues);
                                        HRESULT ( STDMETHODCALLTYPE *get_ValueDescriptions )(
            __RPC__in IFsrmPropertyDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *valueDescriptions);
                                        HRESULT ( STDMETHODCALLTYPE *put_ValueDescriptions )(
            __RPC__in IFsrmPropertyDefinition * This,
                       __RPC__in SAFEARRAY * valueDescriptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmPropertyDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmPropertyDefinition * This,
                       __RPC__in SAFEARRAY * parameters);
        END_INTERFACE
    } IFsrmPropertyDefinitionVtbl;
    interface IFsrmPropertyDefinition
    {
        CONST_VTBL struct IFsrmPropertyDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Type(This,type) )
    ( (This)->lpVtbl -> put_Type(This,type) )
    ( (This)->lpVtbl -> get_PossibleValues(This,possibleValues) )
    ( (This)->lpVtbl -> put_PossibleValues(This,possibleValues) )
    ( (This)->lpVtbl -> get_ValueDescriptions(This,valueDescriptions) )
    ( (This)->lpVtbl -> put_ValueDescriptions(This,valueDescriptions) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
EXTERN_C const IID IID_IFsrmPropertyDefinition2;
    typedef struct IFsrmPropertyDefinition2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPropertyDefinition2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPropertyDefinition2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPropertyDefinition2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmPropertyDefinition2 * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmPropertyDefinition2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__out FsrmPropertyDefinitionType *type);
                                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       FsrmPropertyDefinitionType type);
                                        HRESULT ( STDMETHODCALLTYPE *get_PossibleValues )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *possibleValues);
                                        HRESULT ( STDMETHODCALLTYPE *put_PossibleValues )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in SAFEARRAY * possibleValues);
                                        HRESULT ( STDMETHODCALLTYPE *get_ValueDescriptions )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *valueDescriptions);
                                        HRESULT ( STDMETHODCALLTYPE *put_ValueDescriptions )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in SAFEARRAY * valueDescriptions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in SAFEARRAY * parameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyDefinitionFlags )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__out long *propertyDefinitionFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_DisplayName )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_AppliesTo )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__out long *appliesTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_ValueDefinitions )(
            __RPC__in IFsrmPropertyDefinition2 * This,
                                __RPC__deref_out_opt IFsrmCollection **valueDefinitions);
        END_INTERFACE
    } IFsrmPropertyDefinition2Vtbl;
    interface IFsrmPropertyDefinition2
    {
        CONST_VTBL struct IFsrmPropertyDefinition2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Type(This,type) )
    ( (This)->lpVtbl -> put_Type(This,type) )
    ( (This)->lpVtbl -> get_PossibleValues(This,possibleValues) )
    ( (This)->lpVtbl -> put_PossibleValues(This,possibleValues) )
    ( (This)->lpVtbl -> get_ValueDescriptions(This,valueDescriptions) )
    ( (This)->lpVtbl -> put_ValueDescriptions(This,valueDescriptions) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
    ( (This)->lpVtbl -> get_PropertyDefinitionFlags(This,propertyDefinitionFlags) )
    ( (This)->lpVtbl -> get_DisplayName(This,name) )
    ( (This)->lpVtbl -> put_DisplayName(This,name) )
    ( (This)->lpVtbl -> get_AppliesTo(This,appliesTo) )
    ( (This)->lpVtbl -> get_ValueDefinitions(This,valueDefinitions) )
EXTERN_C const IID IID_IFsrmPropertyDefinitionValue;
    typedef struct IFsrmPropertyDefinitionValueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPropertyDefinitionValue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPropertyDefinitionValue * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPropertyDefinitionValue * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                                __RPC__deref_out_opt BSTR *displayName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueID )(
            __RPC__in IFsrmPropertyDefinitionValue * This,
                                __RPC__deref_out_opt BSTR *uniqueID);
        END_INTERFACE
    } IFsrmPropertyDefinitionValueVtbl;
    interface IFsrmPropertyDefinitionValue
    {
        CONST_VTBL struct IFsrmPropertyDefinitionValueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> get_DisplayName(This,displayName) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> get_UniqueID(This,uniqueID) )
EXTERN_C const IID IID_IFsrmProperty;
    typedef struct IFsrmPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmProperty * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IFsrmProperty * This,
                                __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_Sources )(
            __RPC__in IFsrmProperty * This,
                                __RPC__deref_out_opt SAFEARRAY * *sources);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyFlags )(
            __RPC__in IFsrmProperty * This,
                                __RPC__out long *flags);
        END_INTERFACE
    } IFsrmPropertyVtbl;
    interface IFsrmProperty
    {
        CONST_VTBL struct IFsrmPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> get_Value(This,value) )
    ( (This)->lpVtbl -> get_Sources(This,sources) )
    ( (This)->lpVtbl -> get_PropertyFlags(This,flags) )
EXTERN_C const IID IID_IFsrmRule;
    typedef struct IFsrmRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmRule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmRule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmRule * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmRule * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmRule * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmRule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmRule * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmRule * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmRule * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmRule * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmRule * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmRule * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmRule * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_RuleType )(
            __RPC__in IFsrmRule * This,
                                __RPC__out FsrmRuleType *ruleType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleDefinitionName )(
            __RPC__in IFsrmRule * This,
                                __RPC__deref_out_opt BSTR *moduleDefinitionName);
                                        HRESULT ( STDMETHODCALLTYPE *put_ModuleDefinitionName )(
            __RPC__in IFsrmRule * This,
                       __RPC__in BSTR moduleDefinitionName);
                                        HRESULT ( STDMETHODCALLTYPE *get_NamespaceRoots )(
            __RPC__in IFsrmRule * This,
                                __RPC__deref_out_opt SAFEARRAY * *namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *put_NamespaceRoots )(
            __RPC__in IFsrmRule * This,
                       __RPC__in SAFEARRAY * namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *get_RuleFlags )(
            __RPC__in IFsrmRule * This,
                                __RPC__out long *ruleFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_RuleFlags )(
            __RPC__in IFsrmRule * This,
                       long ruleFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmRule * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmRule * This,
                       __RPC__in SAFEARRAY * parameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModified )(
            __RPC__in IFsrmRule * This,
                                __RPC__out VARIANT *lastModified);
        END_INTERFACE
    } IFsrmRuleVtbl;
    interface IFsrmRule
    {
        CONST_VTBL struct IFsrmRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_RuleType(This,ruleType) )
    ( (This)->lpVtbl -> get_ModuleDefinitionName(This,moduleDefinitionName) )
    ( (This)->lpVtbl -> put_ModuleDefinitionName(This,moduleDefinitionName) )
    ( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> get_RuleFlags(This,ruleFlags) )
    ( (This)->lpVtbl -> put_RuleFlags(This,ruleFlags) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
    ( (This)->lpVtbl -> get_LastModified(This,lastModified) )
EXTERN_C const IID IID_IFsrmClassificationRule;
    typedef struct IFsrmClassificationRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmClassificationRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmClassificationRule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmClassificationRule * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmClassificationRule * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmClassificationRule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmClassificationRule * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmClassificationRule * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_RuleType )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__out FsrmRuleType *ruleType);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleDefinitionName )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__deref_out_opt BSTR *moduleDefinitionName);
                                        HRESULT ( STDMETHODCALLTYPE *put_ModuleDefinitionName )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in BSTR moduleDefinitionName);
                                        HRESULT ( STDMETHODCALLTYPE *get_NamespaceRoots )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__deref_out_opt SAFEARRAY * *namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *put_NamespaceRoots )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in SAFEARRAY * namespaceRoots);
                                        HRESULT ( STDMETHODCALLTYPE *get_RuleFlags )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__out long *ruleFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_RuleFlags )(
            __RPC__in IFsrmClassificationRule * This,
                       long ruleFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in SAFEARRAY * parameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModified )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__out VARIANT *lastModified);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExecutionOption )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__out FsrmExecutionOption *executionOption);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExecutionOption )(
            __RPC__in IFsrmClassificationRule * This,
                       FsrmExecutionOption executionOption);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyAffected )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__deref_out_opt BSTR *property);
                                        HRESULT ( STDMETHODCALLTYPE *put_PropertyAffected )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in BSTR property);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IFsrmClassificationRule * This,
                                __RPC__deref_out_opt BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IFsrmClassificationRule * This,
                       __RPC__in BSTR value);
        END_INTERFACE
    } IFsrmClassificationRuleVtbl;
    interface IFsrmClassificationRule
    {
        CONST_VTBL struct IFsrmClassificationRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_RuleType(This,ruleType) )
    ( (This)->lpVtbl -> get_ModuleDefinitionName(This,moduleDefinitionName) )
    ( (This)->lpVtbl -> put_ModuleDefinitionName(This,moduleDefinitionName) )
    ( (This)->lpVtbl -> get_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> put_NamespaceRoots(This,namespaceRoots) )
    ( (This)->lpVtbl -> get_RuleFlags(This,ruleFlags) )
    ( (This)->lpVtbl -> put_RuleFlags(This,ruleFlags) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
    ( (This)->lpVtbl -> get_LastModified(This,lastModified) )
    ( (This)->lpVtbl -> get_ExecutionOption(This,executionOption) )
    ( (This)->lpVtbl -> put_ExecutionOption(This,executionOption) )
    ( (This)->lpVtbl -> get_PropertyAffected(This,property) )
    ( (This)->lpVtbl -> put_PropertyAffected(This,property) )
    ( (This)->lpVtbl -> get_Value(This,value) )
    ( (This)->lpVtbl -> put_Value(This,value) )
EXTERN_C const IID IID_IFsrmPipelineModuleDefinition;
    typedef struct IFsrmPipelineModuleDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPipelineModuleDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPipelineModuleDefinition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPipelineModuleDefinition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmPipelineModuleDefinition * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmPipelineModuleDefinition * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleClsid )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *moduleClsid);
                                        HRESULT ( STDMETHODCALLTYPE *put_ModuleClsid )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in BSTR moduleClsid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Company )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *company);
                                        HRESULT ( STDMETHODCALLTYPE *put_Company )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in BSTR company);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *version);
                                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in BSTR version);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleType )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__out FsrmPipelineModuleType *moduleType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *enabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_NeedsFileContent )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *needsFileContent);
                                        HRESULT ( STDMETHODCALLTYPE *put_NeedsFileContent )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       VARIANT_BOOL needsFileContent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Account )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__out FsrmAccountType *retrievalAccount);
                                        HRESULT ( STDMETHODCALLTYPE *put_Account )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       FsrmAccountType retrievalAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedExtensions )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *supportedExtensions);
                                        HRESULT ( STDMETHODCALLTYPE *put_SupportedExtensions )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in SAFEARRAY * supportedExtensions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmPipelineModuleDefinition * This,
                       __RPC__in SAFEARRAY * parameters);
        END_INTERFACE
    } IFsrmPipelineModuleDefinitionVtbl;
    interface IFsrmPipelineModuleDefinition
    {
        CONST_VTBL struct IFsrmPipelineModuleDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_ModuleClsid(This,moduleClsid) )
    ( (This)->lpVtbl -> put_ModuleClsid(This,moduleClsid) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Company(This,company) )
    ( (This)->lpVtbl -> put_Company(This,company) )
    ( (This)->lpVtbl -> get_Version(This,version) )
    ( (This)->lpVtbl -> put_Version(This,version) )
    ( (This)->lpVtbl -> get_ModuleType(This,moduleType) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_NeedsFileContent(This,needsFileContent) )
    ( (This)->lpVtbl -> put_NeedsFileContent(This,needsFileContent) )
    ( (This)->lpVtbl -> get_Account(This,retrievalAccount) )
    ( (This)->lpVtbl -> put_Account(This,retrievalAccount) )
    ( (This)->lpVtbl -> get_SupportedExtensions(This,supportedExtensions) )
    ( (This)->lpVtbl -> put_SupportedExtensions(This,supportedExtensions) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
EXTERN_C const IID IID_IFsrmClassifierModuleDefinition;
    typedef struct IFsrmClassifierModuleDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmClassifierModuleDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmClassifierModuleDefinition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmClassifierModuleDefinition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmClassifierModuleDefinition * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmClassifierModuleDefinition * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleClsid )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *moduleClsid);
                                        HRESULT ( STDMETHODCALLTYPE *put_ModuleClsid )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in BSTR moduleClsid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Company )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *company);
                                        HRESULT ( STDMETHODCALLTYPE *put_Company )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in BSTR company);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *version);
                                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in BSTR version);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleType )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__out FsrmPipelineModuleType *moduleType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *enabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_NeedsFileContent )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *needsFileContent);
                                        HRESULT ( STDMETHODCALLTYPE *put_NeedsFileContent )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       VARIANT_BOOL needsFileContent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Account )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__out FsrmAccountType *retrievalAccount);
                                        HRESULT ( STDMETHODCALLTYPE *put_Account )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       FsrmAccountType retrievalAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedExtensions )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *supportedExtensions);
                                        HRESULT ( STDMETHODCALLTYPE *put_SupportedExtensions )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in SAFEARRAY * supportedExtensions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in SAFEARRAY * parameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertiesAffected )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *propertiesAffected);
                                        HRESULT ( STDMETHODCALLTYPE *put_PropertiesAffected )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in SAFEARRAY * propertiesAffected);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertiesUsed )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *propertiesUsed);
                                        HRESULT ( STDMETHODCALLTYPE *put_PropertiesUsed )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       __RPC__in SAFEARRAY * propertiesUsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_NeedsExplicitValue )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *needsExplicitValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_NeedsExplicitValue )(
            __RPC__in IFsrmClassifierModuleDefinition * This,
                       VARIANT_BOOL needsExplicitValue);
        END_INTERFACE
    } IFsrmClassifierModuleDefinitionVtbl;
    interface IFsrmClassifierModuleDefinition
    {
        CONST_VTBL struct IFsrmClassifierModuleDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_ModuleClsid(This,moduleClsid) )
    ( (This)->lpVtbl -> put_ModuleClsid(This,moduleClsid) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Company(This,company) )
    ( (This)->lpVtbl -> put_Company(This,company) )
    ( (This)->lpVtbl -> get_Version(This,version) )
    ( (This)->lpVtbl -> put_Version(This,version) )
    ( (This)->lpVtbl -> get_ModuleType(This,moduleType) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_NeedsFileContent(This,needsFileContent) )
    ( (This)->lpVtbl -> put_NeedsFileContent(This,needsFileContent) )
    ( (This)->lpVtbl -> get_Account(This,retrievalAccount) )
    ( (This)->lpVtbl -> put_Account(This,retrievalAccount) )
    ( (This)->lpVtbl -> get_SupportedExtensions(This,supportedExtensions) )
    ( (This)->lpVtbl -> put_SupportedExtensions(This,supportedExtensions) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
    ( (This)->lpVtbl -> get_PropertiesAffected(This,propertiesAffected) )
    ( (This)->lpVtbl -> put_PropertiesAffected(This,propertiesAffected) )
    ( (This)->lpVtbl -> get_PropertiesUsed(This,propertiesUsed) )
    ( (This)->lpVtbl -> put_PropertiesUsed(This,propertiesUsed) )
    ( (This)->lpVtbl -> get_NeedsExplicitValue(This,needsExplicitValue) )
    ( (This)->lpVtbl -> put_NeedsExplicitValue(This,needsExplicitValue) )
EXTERN_C const IID IID_IFsrmStorageModuleDefinition;
    typedef struct IFsrmStorageModuleDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmStorageModuleDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmStorageModuleDefinition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmStorageModuleDefinition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out FSRM_OBJECT_ID *id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *description);
                                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in BSTR description);
                               HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IFsrmStorageModuleDefinition * This);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IFsrmStorageModuleDefinition * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleClsid )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *moduleClsid);
                                        HRESULT ( STDMETHODCALLTYPE *put_ModuleClsid )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in BSTR moduleClsid);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in BSTR name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Company )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *company);
                                        HRESULT ( STDMETHODCALLTYPE *put_Company )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in BSTR company);
                                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__deref_out_opt BSTR *version);
                                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in BSTR version);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleType )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out FsrmPipelineModuleType *moduleType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *enabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       VARIANT_BOOL enabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_NeedsFileContent )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *needsFileContent);
                                        HRESULT ( STDMETHODCALLTYPE *put_NeedsFileContent )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       VARIANT_BOOL needsFileContent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Account )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out FsrmAccountType *retrievalAccount);
                                        HRESULT ( STDMETHODCALLTYPE *put_Account )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       FsrmAccountType retrievalAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedExtensions )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *supportedExtensions);
                                        HRESULT ( STDMETHODCALLTYPE *put_SupportedExtensions )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in SAFEARRAY * supportedExtensions);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parameters )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__deref_out_opt SAFEARRAY * *parameters);
                                        HRESULT ( STDMETHODCALLTYPE *put_Parameters )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       __RPC__in SAFEARRAY * parameters);
                                        HRESULT ( STDMETHODCALLTYPE *get_Capabilities )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out FsrmStorageModuleCaps *capabilities);
                                        HRESULT ( STDMETHODCALLTYPE *put_Capabilities )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       FsrmStorageModuleCaps capabilities);
                                        HRESULT ( STDMETHODCALLTYPE *get_StorageType )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out FsrmStorageModuleType *storageType);
                                        HRESULT ( STDMETHODCALLTYPE *put_StorageType )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       FsrmStorageModuleType storageType);
                                        HRESULT ( STDMETHODCALLTYPE *get_UpdatesFileContent )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                                __RPC__out VARIANT_BOOL *updatesFileContent);
                                        HRESULT ( STDMETHODCALLTYPE *put_UpdatesFileContent )(
            __RPC__in IFsrmStorageModuleDefinition * This,
                       VARIANT_BOOL updatesFileContent);
        END_INTERFACE
    } IFsrmStorageModuleDefinitionVtbl;
    interface IFsrmStorageModuleDefinition
    {
        CONST_VTBL struct IFsrmStorageModuleDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,id) )
    ( (This)->lpVtbl -> get_Description(This,description) )
    ( (This)->lpVtbl -> put_Description(This,description) )
    ( (This)->lpVtbl -> Delete(This) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> get_ModuleClsid(This,moduleClsid) )
    ( (This)->lpVtbl -> put_ModuleClsid(This,moduleClsid) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> put_Name(This,name) )
    ( (This)->lpVtbl -> get_Company(This,company) )
    ( (This)->lpVtbl -> put_Company(This,company) )
    ( (This)->lpVtbl -> get_Version(This,version) )
    ( (This)->lpVtbl -> put_Version(This,version) )
    ( (This)->lpVtbl -> get_ModuleType(This,moduleType) )
    ( (This)->lpVtbl -> get_Enabled(This,enabled) )
    ( (This)->lpVtbl -> put_Enabled(This,enabled) )
    ( (This)->lpVtbl -> get_NeedsFileContent(This,needsFileContent) )
    ( (This)->lpVtbl -> put_NeedsFileContent(This,needsFileContent) )
    ( (This)->lpVtbl -> get_Account(This,retrievalAccount) )
    ( (This)->lpVtbl -> put_Account(This,retrievalAccount) )
    ( (This)->lpVtbl -> get_SupportedExtensions(This,supportedExtensions) )
    ( (This)->lpVtbl -> put_SupportedExtensions(This,supportedExtensions) )
    ( (This)->lpVtbl -> get_Parameters(This,parameters) )
    ( (This)->lpVtbl -> put_Parameters(This,parameters) )
    ( (This)->lpVtbl -> get_Capabilities(This,capabilities) )
    ( (This)->lpVtbl -> put_Capabilities(This,capabilities) )
    ( (This)->lpVtbl -> get_StorageType(This,storageType) )
    ( (This)->lpVtbl -> put_StorageType(This,storageType) )
    ( (This)->lpVtbl -> get_UpdatesFileContent(This,updatesFileContent) )
    ( (This)->lpVtbl -> put_UpdatesFileContent(This,updatesFileContent) )
EXTERN_C const IID IID_IFsrmClassificationManager;
    typedef struct IFsrmClassificationManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmClassificationManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmClassificationManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmClassificationManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmClassificationManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmClassificationManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationReportFormats )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__deref_out_opt SAFEARRAY * *formats);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClassificationReportFormats )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in SAFEARRAY * formats);
                                        HRESULT ( STDMETHODCALLTYPE *get_Logging )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__out long *logging);
                                        HRESULT ( STDMETHODCALLTYPE *put_Logging )(
            __RPC__in IFsrmClassificationManager * This,
                       long logging);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationReportMailTo )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__deref_out_opt BSTR *mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClassificationReportMailTo )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationReportEnabled )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__out VARIANT_BOOL *reportEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClassificationReportEnabled )(
            __RPC__in IFsrmClassificationManager * This,
                       VARIANT_BOOL reportEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationLastReportPathWithoutExtension )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__deref_out_opt BSTR *lastReportPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationLastError )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__deref_out_opt BSTR *lastError);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationRunningStatus )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__out FsrmReportRunningStatus *runningStatus);
                               HRESULT ( STDMETHODCALLTYPE *EnumPropertyDefinitions )(
            __RPC__in IFsrmClassificationManager * This,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **propertyDefinitions);
                               HRESULT ( STDMETHODCALLTYPE *CreatePropertyDefinition )(
            __RPC__in IFsrmClassificationManager * This,
                                __RPC__deref_out_opt IFsrmPropertyDefinition **propertyDefinition);
                               HRESULT ( STDMETHODCALLTYPE *GetPropertyDefinition )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR propertyName,
                                __RPC__deref_out_opt IFsrmPropertyDefinition **propertyDefinition);
                               HRESULT ( STDMETHODCALLTYPE *EnumRules )(
            __RPC__in IFsrmClassificationManager * This,
                       FsrmRuleType ruleType,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **Rules);
                               HRESULT ( STDMETHODCALLTYPE *CreateRule )(
            __RPC__in IFsrmClassificationManager * This,
                       FsrmRuleType ruleType,
                                __RPC__deref_out_opt IFsrmRule **Rule);
                               HRESULT ( STDMETHODCALLTYPE *GetRule )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR ruleName,
                       FsrmRuleType ruleType,
                                __RPC__deref_out_opt IFsrmRule **Rule);
                               HRESULT ( STDMETHODCALLTYPE *EnumModuleDefinitions )(
            __RPC__in IFsrmClassificationManager * This,
                       FsrmPipelineModuleType moduleType,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **moduleDefinitions);
                               HRESULT ( STDMETHODCALLTYPE *CreateModuleDefinition )(
            __RPC__in IFsrmClassificationManager * This,
                       FsrmPipelineModuleType moduleType,
                                __RPC__deref_out_opt IFsrmPipelineModuleDefinition **moduleDefinition);
                               HRESULT ( STDMETHODCALLTYPE *GetModuleDefinition )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR moduleName,
                       FsrmPipelineModuleType moduleType,
                                __RPC__deref_out_opt IFsrmPipelineModuleDefinition **moduleDefinition);
                               HRESULT ( STDMETHODCALLTYPE *RunClassification )(
            __RPC__in IFsrmClassificationManager * This,
                       FsrmReportGenerationContext context,
                       __RPC__in BSTR reserved);
                               HRESULT ( STDMETHODCALLTYPE *WaitForClassificationCompletion )(
            __RPC__in IFsrmClassificationManager * This,
                       long waitSeconds,
                                __RPC__out VARIANT_BOOL *completed);
                               HRESULT ( STDMETHODCALLTYPE *CancelClassification )(
            __RPC__in IFsrmClassificationManager * This);
                               HRESULT ( STDMETHODCALLTYPE *EnumFileProperties )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR filePath,
                                     FsrmGetFilePropertyOptions options,
                                __RPC__deref_out_opt IFsrmCollection **fileProperties);
                               HRESULT ( STDMETHODCALLTYPE *GetFileProperty )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR filePath,
                       __RPC__in BSTR propertyName,
                                     FsrmGetFilePropertyOptions options,
                                __RPC__deref_out_opt IFsrmProperty **property);
                               HRESULT ( STDMETHODCALLTYPE *SetFileProperty )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR filePath,
                       __RPC__in BSTR propertyName,
                       __RPC__in BSTR propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *ClearFileProperty )(
            __RPC__in IFsrmClassificationManager * This,
                       __RPC__in BSTR filePath,
                       __RPC__in BSTR property);
        END_INTERFACE
    } IFsrmClassificationManagerVtbl;
    interface IFsrmClassificationManager
    {
        CONST_VTBL struct IFsrmClassificationManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClassificationReportFormats(This,formats) )
    ( (This)->lpVtbl -> put_ClassificationReportFormats(This,formats) )
    ( (This)->lpVtbl -> get_Logging(This,logging) )
    ( (This)->lpVtbl -> put_Logging(This,logging) )
    ( (This)->lpVtbl -> get_ClassificationReportMailTo(This,mailTo) )
    ( (This)->lpVtbl -> put_ClassificationReportMailTo(This,mailTo) )
    ( (This)->lpVtbl -> get_ClassificationReportEnabled(This,reportEnabled) )
    ( (This)->lpVtbl -> put_ClassificationReportEnabled(This,reportEnabled) )
    ( (This)->lpVtbl -> get_ClassificationLastReportPathWithoutExtension(This,lastReportPath) )
    ( (This)->lpVtbl -> get_ClassificationLastError(This,lastError) )
    ( (This)->lpVtbl -> get_ClassificationRunningStatus(This,runningStatus) )
    ( (This)->lpVtbl -> EnumPropertyDefinitions(This,options,propertyDefinitions) )
    ( (This)->lpVtbl -> CreatePropertyDefinition(This,propertyDefinition) )
    ( (This)->lpVtbl -> GetPropertyDefinition(This,propertyName,propertyDefinition) )
    ( (This)->lpVtbl -> EnumRules(This,ruleType,options,Rules) )
    ( (This)->lpVtbl -> CreateRule(This,ruleType,Rule) )
    ( (This)->lpVtbl -> GetRule(This,ruleName,ruleType,Rule) )
    ( (This)->lpVtbl -> EnumModuleDefinitions(This,moduleType,options,moduleDefinitions) )
    ( (This)->lpVtbl -> CreateModuleDefinition(This,moduleType,moduleDefinition) )
    ( (This)->lpVtbl -> GetModuleDefinition(This,moduleName,moduleType,moduleDefinition) )
    ( (This)->lpVtbl -> RunClassification(This,context,reserved) )
    ( (This)->lpVtbl -> WaitForClassificationCompletion(This,waitSeconds,completed) )
    ( (This)->lpVtbl -> CancelClassification(This) )
    ( (This)->lpVtbl -> EnumFileProperties(This,filePath,options,fileProperties) )
    ( (This)->lpVtbl -> GetFileProperty(This,filePath,propertyName,options,property) )
    ( (This)->lpVtbl -> SetFileProperty(This,filePath,propertyName,propertyValue) )
    ( (This)->lpVtbl -> ClearFileProperty(This,filePath,property) )
EXTERN_C const IID IID_IFsrmClassificationManager2;
    typedef struct IFsrmClassificationManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmClassificationManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmClassificationManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmClassificationManager2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmClassificationManager2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmClassificationManager2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationReportFormats )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *formats);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClassificationReportFormats )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in SAFEARRAY * formats);
                                        HRESULT ( STDMETHODCALLTYPE *get_Logging )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__out long *logging);
                                        HRESULT ( STDMETHODCALLTYPE *put_Logging )(
            __RPC__in IFsrmClassificationManager2 * This,
                       long logging);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationReportMailTo )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__deref_out_opt BSTR *mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClassificationReportMailTo )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR mailTo);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationReportEnabled )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__out VARIANT_BOOL *reportEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *put_ClassificationReportEnabled )(
            __RPC__in IFsrmClassificationManager2 * This,
                       VARIANT_BOOL reportEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationLastReportPathWithoutExtension )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__deref_out_opt BSTR *lastReportPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationLastError )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__deref_out_opt BSTR *lastError);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClassificationRunningStatus )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__out FsrmReportRunningStatus *runningStatus);
                               HRESULT ( STDMETHODCALLTYPE *EnumPropertyDefinitions )(
            __RPC__in IFsrmClassificationManager2 * This,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **propertyDefinitions);
                               HRESULT ( STDMETHODCALLTYPE *CreatePropertyDefinition )(
            __RPC__in IFsrmClassificationManager2 * This,
                                __RPC__deref_out_opt IFsrmPropertyDefinition **propertyDefinition);
                               HRESULT ( STDMETHODCALLTYPE *GetPropertyDefinition )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR propertyName,
                                __RPC__deref_out_opt IFsrmPropertyDefinition **propertyDefinition);
                               HRESULT ( STDMETHODCALLTYPE *EnumRules )(
            __RPC__in IFsrmClassificationManager2 * This,
                       FsrmRuleType ruleType,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **Rules);
                               HRESULT ( STDMETHODCALLTYPE *CreateRule )(
            __RPC__in IFsrmClassificationManager2 * This,
                       FsrmRuleType ruleType,
                                __RPC__deref_out_opt IFsrmRule **Rule);
                               HRESULT ( STDMETHODCALLTYPE *GetRule )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR ruleName,
                       FsrmRuleType ruleType,
                                __RPC__deref_out_opt IFsrmRule **Rule);
                               HRESULT ( STDMETHODCALLTYPE *EnumModuleDefinitions )(
            __RPC__in IFsrmClassificationManager2 * This,
                       FsrmPipelineModuleType moduleType,
                                     FsrmEnumOptions options,
                                __RPC__deref_out_opt IFsrmCollection **moduleDefinitions);
                               HRESULT ( STDMETHODCALLTYPE *CreateModuleDefinition )(
            __RPC__in IFsrmClassificationManager2 * This,
                       FsrmPipelineModuleType moduleType,
                                __RPC__deref_out_opt IFsrmPipelineModuleDefinition **moduleDefinition);
                               HRESULT ( STDMETHODCALLTYPE *GetModuleDefinition )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR moduleName,
                       FsrmPipelineModuleType moduleType,
                                __RPC__deref_out_opt IFsrmPipelineModuleDefinition **moduleDefinition);
                               HRESULT ( STDMETHODCALLTYPE *RunClassification )(
            __RPC__in IFsrmClassificationManager2 * This,
                       FsrmReportGenerationContext context,
                       __RPC__in BSTR reserved);
                               HRESULT ( STDMETHODCALLTYPE *WaitForClassificationCompletion )(
            __RPC__in IFsrmClassificationManager2 * This,
                       long waitSeconds,
                                __RPC__out VARIANT_BOOL *completed);
                               HRESULT ( STDMETHODCALLTYPE *CancelClassification )(
            __RPC__in IFsrmClassificationManager2 * This);
                               HRESULT ( STDMETHODCALLTYPE *EnumFileProperties )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR filePath,
                                     FsrmGetFilePropertyOptions options,
                                __RPC__deref_out_opt IFsrmCollection **fileProperties);
                               HRESULT ( STDMETHODCALLTYPE *GetFileProperty )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR filePath,
                       __RPC__in BSTR propertyName,
                                     FsrmGetFilePropertyOptions options,
                                __RPC__deref_out_opt IFsrmProperty **property);
                               HRESULT ( STDMETHODCALLTYPE *SetFileProperty )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR filePath,
                       __RPC__in BSTR propertyName,
                       __RPC__in BSTR propertyValue);
                               HRESULT ( STDMETHODCALLTYPE *ClearFileProperty )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in BSTR filePath,
                       __RPC__in BSTR property);
                               HRESULT ( STDMETHODCALLTYPE *ClassifyFiles )(
            __RPC__in IFsrmClassificationManager2 * This,
                       __RPC__in SAFEARRAY * filePaths,
                               __RPC__in_opt SAFEARRAY * propertyNames,
                               __RPC__in_opt SAFEARRAY * propertyValues,
                                     FsrmGetFilePropertyOptions options);
        END_INTERFACE
    } IFsrmClassificationManager2Vtbl;
    interface IFsrmClassificationManager2
    {
        CONST_VTBL struct IFsrmClassificationManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ClassificationReportFormats(This,formats) )
    ( (This)->lpVtbl -> put_ClassificationReportFormats(This,formats) )
    ( (This)->lpVtbl -> get_Logging(This,logging) )
    ( (This)->lpVtbl -> put_Logging(This,logging) )
    ( (This)->lpVtbl -> get_ClassificationReportMailTo(This,mailTo) )
    ( (This)->lpVtbl -> put_ClassificationReportMailTo(This,mailTo) )
    ( (This)->lpVtbl -> get_ClassificationReportEnabled(This,reportEnabled) )
    ( (This)->lpVtbl -> put_ClassificationReportEnabled(This,reportEnabled) )
    ( (This)->lpVtbl -> get_ClassificationLastReportPathWithoutExtension(This,lastReportPath) )
    ( (This)->lpVtbl -> get_ClassificationLastError(This,lastError) )
    ( (This)->lpVtbl -> get_ClassificationRunningStatus(This,runningStatus) )
    ( (This)->lpVtbl -> EnumPropertyDefinitions(This,options,propertyDefinitions) )
    ( (This)->lpVtbl -> CreatePropertyDefinition(This,propertyDefinition) )
    ( (This)->lpVtbl -> GetPropertyDefinition(This,propertyName,propertyDefinition) )
    ( (This)->lpVtbl -> EnumRules(This,ruleType,options,Rules) )
    ( (This)->lpVtbl -> CreateRule(This,ruleType,Rule) )
    ( (This)->lpVtbl -> GetRule(This,ruleName,ruleType,Rule) )
    ( (This)->lpVtbl -> EnumModuleDefinitions(This,moduleType,options,moduleDefinitions) )
    ( (This)->lpVtbl -> CreateModuleDefinition(This,moduleType,moduleDefinition) )
    ( (This)->lpVtbl -> GetModuleDefinition(This,moduleName,moduleType,moduleDefinition) )
    ( (This)->lpVtbl -> RunClassification(This,context,reserved) )
    ( (This)->lpVtbl -> WaitForClassificationCompletion(This,waitSeconds,completed) )
    ( (This)->lpVtbl -> CancelClassification(This) )
    ( (This)->lpVtbl -> EnumFileProperties(This,filePath,options,fileProperties) )
    ( (This)->lpVtbl -> GetFileProperty(This,filePath,propertyName,options,property) )
    ( (This)->lpVtbl -> SetFileProperty(This,filePath,propertyName,propertyValue) )
    ( (This)->lpVtbl -> ClearFileProperty(This,filePath,property) )
    ( (This)->lpVtbl -> ClassifyFiles(This,filePaths,propertyNames,propertyValues,options) )
EXTERN_C const IID IID_IFsrmPropertyBag;
    typedef struct IFsrmPropertyBagVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPropertyBag * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPropertyBag * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPropertyBag * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPropertyBag * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPropertyBag * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPropertyBag * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPropertyBag * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_RelativePath )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeName )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__deref_out_opt BSTR *volumeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_RelativeNamespaceRoot )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__deref_out_opt BSTR *relativeNamespaceRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeIndex )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out unsigned long *volumeId);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileId )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out VARIANT *fileId);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentDirectoryId )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out VARIANT *parentDirectoryId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out VARIANT *size);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeAllocated )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out VARIANT *sizeAllocated);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out VARIANT *creationTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastAccessTime )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out VARIANT *lastAccessTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModificationTime )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out VARIANT *lastModificationTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out unsigned long *attributes);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerSid )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__deref_out_opt BSTR *ownerSid);
                                        HRESULT ( STDMETHODCALLTYPE *get_FilePropertyNames )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__deref_out_opt SAFEARRAY * *filePropertyNames);
                                        HRESULT ( STDMETHODCALLTYPE *get_Messages )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__deref_out_opt SAFEARRAY * *messages);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyBagFlags )(
            __RPC__in IFsrmPropertyBag * This,
                                __RPC__out unsigned long *flags);
                               HRESULT ( STDMETHODCALLTYPE *GetFileProperty )(
            __RPC__in IFsrmPropertyBag * This,
                       __RPC__in BSTR name,
                                __RPC__deref_out_opt IFsrmProperty **fileProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetFileProperty )(
            __RPC__in IFsrmPropertyBag * This,
                       __RPC__in BSTR name,
                       __RPC__in BSTR value);
                               HRESULT ( STDMETHODCALLTYPE *AddMessage )(
            __RPC__in IFsrmPropertyBag * This,
                       __RPC__in BSTR message);
                               HRESULT ( STDMETHODCALLTYPE *GetFileStreamInterface )(
            __RPC__in IFsrmPropertyBag * This,
                       FsrmFileStreamingMode accessMode,
                       FsrmFileStreamingInterfaceType interfaceType,
                                __RPC__out VARIANT *pStreamInterface);
        END_INTERFACE
    } IFsrmPropertyBagVtbl;
    interface IFsrmPropertyBag
    {
        CONST_VTBL struct IFsrmPropertyBagVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> get_RelativePath(This,path) )
    ( (This)->lpVtbl -> get_VolumeName(This,volumeName) )
    ( (This)->lpVtbl -> get_RelativeNamespaceRoot(This,relativeNamespaceRoot) )
    ( (This)->lpVtbl -> get_VolumeIndex(This,volumeId) )
    ( (This)->lpVtbl -> get_FileId(This,fileId) )
    ( (This)->lpVtbl -> get_ParentDirectoryId(This,parentDirectoryId) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> get_SizeAllocated(This,sizeAllocated) )
    ( (This)->lpVtbl -> get_CreationTime(This,creationTime) )
    ( (This)->lpVtbl -> get_LastAccessTime(This,lastAccessTime) )
    ( (This)->lpVtbl -> get_LastModificationTime(This,lastModificationTime) )
    ( (This)->lpVtbl -> get_Attributes(This,attributes) )
    ( (This)->lpVtbl -> get_OwnerSid(This,ownerSid) )
    ( (This)->lpVtbl -> get_FilePropertyNames(This,filePropertyNames) )
    ( (This)->lpVtbl -> get_Messages(This,messages) )
    ( (This)->lpVtbl -> get_PropertyBagFlags(This,flags) )
    ( (This)->lpVtbl -> GetFileProperty(This,name,fileProperty) )
    ( (This)->lpVtbl -> SetFileProperty(This,name,value) )
    ( (This)->lpVtbl -> AddMessage(This,message) )
    ( (This)->lpVtbl -> GetFileStreamInterface(This,accessMode,interfaceType,pStreamInterface) )
EXTERN_C const IID IID_IFsrmPropertyBag2;
    typedef struct IFsrmPropertyBag2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPropertyBag2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPropertyBag2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPropertyBag2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPropertyBag2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPropertyBag2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPropertyBag2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPropertyBag2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_RelativePath )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt BSTR *path);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeName )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt BSTR *volumeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_RelativeNamespaceRoot )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt BSTR *relativeNamespaceRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumeIndex )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out unsigned long *volumeId);
                                        HRESULT ( STDMETHODCALLTYPE *get_FileId )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out VARIANT *fileId);
                                        HRESULT ( STDMETHODCALLTYPE *get_ParentDirectoryId )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out VARIANT *parentDirectoryId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out VARIANT *size);
                                        HRESULT ( STDMETHODCALLTYPE *get_SizeAllocated )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out VARIANT *sizeAllocated);
                                        HRESULT ( STDMETHODCALLTYPE *get_CreationTime )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out VARIANT *creationTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastAccessTime )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out VARIANT *lastAccessTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModificationTime )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out VARIANT *lastModificationTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out unsigned long *attributes);
                                        HRESULT ( STDMETHODCALLTYPE *get_OwnerSid )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt BSTR *ownerSid);
                                        HRESULT ( STDMETHODCALLTYPE *get_FilePropertyNames )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *filePropertyNames);
                                        HRESULT ( STDMETHODCALLTYPE *get_Messages )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt SAFEARRAY * *messages);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyBagFlags )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__out unsigned long *flags);
                               HRESULT ( STDMETHODCALLTYPE *GetFileProperty )(
            __RPC__in IFsrmPropertyBag2 * This,
                       __RPC__in BSTR name,
                                __RPC__deref_out_opt IFsrmProperty **fileProperty);
                               HRESULT ( STDMETHODCALLTYPE *SetFileProperty )(
            __RPC__in IFsrmPropertyBag2 * This,
                       __RPC__in BSTR name,
                       __RPC__in BSTR value);
                               HRESULT ( STDMETHODCALLTYPE *AddMessage )(
            __RPC__in IFsrmPropertyBag2 * This,
                       __RPC__in BSTR message);
                               HRESULT ( STDMETHODCALLTYPE *GetFileStreamInterface )(
            __RPC__in IFsrmPropertyBag2 * This,
                       FsrmFileStreamingMode accessMode,
                       FsrmFileStreamingInterfaceType interfaceType,
                                __RPC__out VARIANT *pStreamInterface);
                               HRESULT ( STDMETHODCALLTYPE *GetFieldValue )(
            __RPC__in IFsrmPropertyBag2 * This,
                       FsrmPropertyBagField field,
                                __RPC__out VARIANT *value);
                               HRESULT ( STDMETHODCALLTYPE *GetUntrustedInFileProperties )(
            __RPC__in IFsrmPropertyBag2 * This,
                                __RPC__deref_out_opt IFsrmCollection **props);
        END_INTERFACE
    } IFsrmPropertyBag2Vtbl;
    interface IFsrmPropertyBag2
    {
        CONST_VTBL struct IFsrmPropertyBag2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,name) )
    ( (This)->lpVtbl -> get_RelativePath(This,path) )
    ( (This)->lpVtbl -> get_VolumeName(This,volumeName) )
    ( (This)->lpVtbl -> get_RelativeNamespaceRoot(This,relativeNamespaceRoot) )
    ( (This)->lpVtbl -> get_VolumeIndex(This,volumeId) )
    ( (This)->lpVtbl -> get_FileId(This,fileId) )
    ( (This)->lpVtbl -> get_ParentDirectoryId(This,parentDirectoryId) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> get_SizeAllocated(This,sizeAllocated) )
    ( (This)->lpVtbl -> get_CreationTime(This,creationTime) )
    ( (This)->lpVtbl -> get_LastAccessTime(This,lastAccessTime) )
    ( (This)->lpVtbl -> get_LastModificationTime(This,lastModificationTime) )
    ( (This)->lpVtbl -> get_Attributes(This,attributes) )
    ( (This)->lpVtbl -> get_OwnerSid(This,ownerSid) )
    ( (This)->lpVtbl -> get_FilePropertyNames(This,filePropertyNames) )
    ( (This)->lpVtbl -> get_Messages(This,messages) )
    ( (This)->lpVtbl -> get_PropertyBagFlags(This,flags) )
    ( (This)->lpVtbl -> GetFileProperty(This,name,fileProperty) )
    ( (This)->lpVtbl -> SetFileProperty(This,name,value) )
    ( (This)->lpVtbl -> AddMessage(This,message) )
    ( (This)->lpVtbl -> GetFileStreamInterface(This,accessMode,interfaceType,pStreamInterface) )
    ( (This)->lpVtbl -> GetFieldValue(This,field,value) )
    ( (This)->lpVtbl -> GetUntrustedInFileProperties(This,props) )
EXTERN_C const IID IID_IFsrmPipelineModuleImplementation;
    typedef struct IFsrmPipelineModuleImplementationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPipelineModuleImplementation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPipelineModuleImplementation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPipelineModuleImplementation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPipelineModuleImplementation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPipelineModuleImplementation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPipelineModuleImplementation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPipelineModuleImplementation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *OnLoad )(
            __RPC__in IFsrmPipelineModuleImplementation * This,
                       __RPC__in_opt IFsrmPipelineModuleDefinition *moduleDefinition,
                        __RPC__deref_out_opt IFsrmPipelineModuleConnector **moduleConnector);
                               HRESULT ( STDMETHODCALLTYPE *OnUnload )(
            __RPC__in IFsrmPipelineModuleImplementation * This);
        END_INTERFACE
    } IFsrmPipelineModuleImplementationVtbl;
    interface IFsrmPipelineModuleImplementation
    {
        CONST_VTBL struct IFsrmPipelineModuleImplementationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnLoad(This,moduleDefinition,moduleConnector) )
    ( (This)->lpVtbl -> OnUnload(This) )
EXTERN_C const IID IID_IFsrmClassifierModuleImplementation;
    typedef struct IFsrmClassifierModuleImplementationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmClassifierModuleImplementation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmClassifierModuleImplementation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmClassifierModuleImplementation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *OnLoad )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       __RPC__in_opt IFsrmPipelineModuleDefinition *moduleDefinition,
                        __RPC__deref_out_opt IFsrmPipelineModuleConnector **moduleConnector);
                               HRESULT ( STDMETHODCALLTYPE *OnUnload )(
            __RPC__in IFsrmClassifierModuleImplementation * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastModified )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                                __RPC__out VARIANT *lastModified);
                               HRESULT ( STDMETHODCALLTYPE *UseRulesAndDefinitions )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       __RPC__in_opt IFsrmCollection *rules,
                       __RPC__in_opt IFsrmCollection *propertyDefinitions);
                               HRESULT ( STDMETHODCALLTYPE *OnBeginFile )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       __RPC__in_opt IFsrmPropertyBag *propertyBag,
                       __RPC__in SAFEARRAY * arrayRuleIds);
                               HRESULT ( STDMETHODCALLTYPE *DoesPropertyValueApply )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       __RPC__in BSTR property,
                       __RPC__in BSTR value,
                        __RPC__out VARIANT_BOOL *applyValue,
                       FSRM_OBJECT_ID idRule,
                       FSRM_OBJECT_ID idPropDef);
                               HRESULT ( STDMETHODCALLTYPE *GetPropertyValueToApply )(
            __RPC__in IFsrmClassifierModuleImplementation * This,
                       __RPC__in BSTR property,
                        __RPC__deref_out_opt BSTR *value,
                       FSRM_OBJECT_ID idRule,
                       FSRM_OBJECT_ID idPropDef);
                               HRESULT ( STDMETHODCALLTYPE *OnEndFile )(
            __RPC__in IFsrmClassifierModuleImplementation * This);
        END_INTERFACE
    } IFsrmClassifierModuleImplementationVtbl;
    interface IFsrmClassifierModuleImplementation
    {
        CONST_VTBL struct IFsrmClassifierModuleImplementationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnLoad(This,moduleDefinition,moduleConnector) )
    ( (This)->lpVtbl -> OnUnload(This) )
    ( (This)->lpVtbl -> get_LastModified(This,lastModified) )
    ( (This)->lpVtbl -> UseRulesAndDefinitions(This,rules,propertyDefinitions) )
    ( (This)->lpVtbl -> OnBeginFile(This,propertyBag,arrayRuleIds) )
    ( (This)->lpVtbl -> DoesPropertyValueApply(This,property,value,applyValue,idRule,idPropDef) )
    ( (This)->lpVtbl -> GetPropertyValueToApply(This,property,value,idRule,idPropDef) )
    ( (This)->lpVtbl -> OnEndFile(This) )
EXTERN_C const IID IID_IFsrmStorageModuleImplementation;
    typedef struct IFsrmStorageModuleImplementationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmStorageModuleImplementation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmStorageModuleImplementation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmStorageModuleImplementation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *OnLoad )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                       __RPC__in_opt IFsrmPipelineModuleDefinition *moduleDefinition,
                        __RPC__deref_out_opt IFsrmPipelineModuleConnector **moduleConnector);
                               HRESULT ( STDMETHODCALLTYPE *OnUnload )(
            __RPC__in IFsrmStorageModuleImplementation * This);
                               HRESULT ( STDMETHODCALLTYPE *UseDefinitions )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                       __RPC__in_opt IFsrmCollection *propertyDefinitions);
                               HRESULT ( STDMETHODCALLTYPE *LoadProperties )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                       __RPC__in_opt IFsrmPropertyBag *propertyBag);
                               HRESULT ( STDMETHODCALLTYPE *SaveProperties )(
            __RPC__in IFsrmStorageModuleImplementation * This,
                       __RPC__in_opt IFsrmPropertyBag *propertyBag);
        END_INTERFACE
    } IFsrmStorageModuleImplementationVtbl;
    interface IFsrmStorageModuleImplementation
    {
        CONST_VTBL struct IFsrmStorageModuleImplementationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> OnLoad(This,moduleDefinition,moduleConnector) )
    ( (This)->lpVtbl -> OnUnload(This) )
    ( (This)->lpVtbl -> UseDefinitions(This,propertyDefinitions) )
    ( (This)->lpVtbl -> LoadProperties(This,propertyBag) )
    ( (This)->lpVtbl -> SaveProperties(This,propertyBag) )
EXTERN_C const IID IID_IFsrmPipelineModuleConnector;
    typedef struct IFsrmPipelineModuleConnectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFsrmPipelineModuleConnector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFsrmPipelineModuleConnector * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFsrmPipelineModuleConnector * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleImplementation )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                                __RPC__deref_out_opt IFsrmPipelineModuleImplementation **pipelineModuleImplementation);
                                        HRESULT ( STDMETHODCALLTYPE *get_ModuleName )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                                __RPC__deref_out_opt BSTR *userName);
                                        HRESULT ( STDMETHODCALLTYPE *get_HostingUserAccount )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                                __RPC__deref_out_opt BSTR *userAccount);
                                        HRESULT ( STDMETHODCALLTYPE *get_HostingProcessPid )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                                __RPC__out long *pid);
                               HRESULT ( STDMETHODCALLTYPE *Bind )(
            __RPC__in IFsrmPipelineModuleConnector * This,
                       __RPC__in_opt IFsrmPipelineModuleDefinition *moduleDefinition,
                       __RPC__in_opt IFsrmPipelineModuleImplementation *moduleImplementation);
        END_INTERFACE
    } IFsrmPipelineModuleConnectorVtbl;
    interface IFsrmPipelineModuleConnector
    {
        CONST_VTBL struct IFsrmPipelineModuleConnectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ModuleImplementation(This,pipelineModuleImplementation) )
    ( (This)->lpVtbl -> get_ModuleName(This,userName) )
    ( (This)->lpVtbl -> get_HostingUserAccount(This,userAccount) )
    ( (This)->lpVtbl -> get_HostingProcessPid(This,pid) )
    ( (This)->lpVtbl -> Bind(This,moduleDefinition,moduleImplementation) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_fsrmpipeline_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_fsrmpipeline_0000_0017_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
