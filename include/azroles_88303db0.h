#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAzAuthorizationStore IAzAuthorizationStore;
typedef interface IAzAuthorizationStore2 IAzAuthorizationStore2;
typedef interface IAzAuthorizationStore3 IAzAuthorizationStore3;
typedef interface IAzApplication IAzApplication;
typedef interface IAzApplication2 IAzApplication2;
typedef interface IAzApplications IAzApplications;
typedef interface IAzOperation IAzOperation;
typedef interface IAzOperations IAzOperations;
typedef interface IAzTask IAzTask;
typedef interface IAzTasks IAzTasks;
typedef interface IAzScope IAzScope;
typedef interface IAzScopes IAzScopes;
typedef interface IAzApplicationGroup IAzApplicationGroup;
typedef interface IAzApplicationGroups IAzApplicationGroups;
typedef interface IAzRole IAzRole;
typedef interface IAzRoles IAzRoles;
typedef interface IAzClientContext IAzClientContext;
typedef interface IAzClientContext2 IAzClientContext2;
typedef interface IAzBizRuleContext IAzBizRuleContext;
typedef interface IAzBizRuleParameters IAzBizRuleParameters;
typedef interface IAzBizRuleInterfaces IAzBizRuleInterfaces;
typedef interface IAzClientContext3 IAzClientContext3;
typedef interface IAzScope2 IAzScope2;
typedef interface IAzApplication3 IAzApplication3;
typedef interface IAzOperation2 IAzOperation2;
typedef interface IAzRoleDefinitions IAzRoleDefinitions;
typedef interface IAzRoleDefinition IAzRoleDefinition;
typedef interface IAzRoleAssignment IAzRoleAssignment;
typedef interface IAzRoleAssignments IAzRoleAssignments;
typedef interface IAzPrincipalLocator IAzPrincipalLocator;
typedef interface IAzNameResolver IAzNameResolver;
typedef interface IAzObjectPicker IAzObjectPicker;
typedef interface IAzApplicationGroup2 IAzApplicationGroup2;
typedef interface IAzTask2 IAzTask2;
typedef class AzAuthorizationStore AzAuthorizationStore;
typedef class AzBizRuleContext AzBizRuleContext;
typedef class AzPrincipalLocator AzPrincipalLocator;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(IID_IAzAuthorizationStore, 0xedbd9ca9, 0x9b82, 0x4f6a, 0x9e, 0x8b, 0x98, 0x30, 0x1e, 0x45, 0x0f, 0x14);
DEFINE_GUID(IID_IAzAuthorizationStore2,0xb11e5584, 0xd577, 0x4273, 0xb6, 0xc5, 0x9, 0x73, 0xe0, 0xf8, 0xe8, 0xd);
DEFINE_GUID(IID_IAzAuthorizationStore3,0xabc08425, 0x0c86, 0x4fa0, 0x9b, 0xe3, 0x71, 0x89, 0x95, 0x6c, 0x92, 0x6e);
DEFINE_GUID(CLSID_AzAuthorizationStore, 0xb2bcff59, 0xa757, 0x4b0b, 0xa1, 0xbc, 0xea, 0x69, 0x98, 0x1d, 0xa6, 0x9e);
DEFINE_GUID(IID_IAzBizRuleContext, 0xe192f17d, 0xd59f, 0x455e, 0xa1, 0x52, 0x94, 0x03, 0x16, 0xcd, 0x77, 0xb2);
DEFINE_GUID(CLSID_AzBizRuleContext, 0x5c2dc96f, 0x8d51, 0x434b, 0xb3, 0x3c, 0x37, 0x9b, 0xcc, 0xae, 0x77, 0xc3);
DEFINE_GUID(CLSID_AzPrincipalLocator, 0x483afb5d, 0x70df, 0x4e16, 0xab, 0xdc, 0xa1, 0xde, 0x4d, 0x01, 0x5a, 0x3e);
DEFINE_GUID(IID_IAzPrincipalLocator, 0xe5c3507d, 0xad6a, 0x4992, 0x9c, 0x7f, 0x74, 0xab, 0x48, 0x0b, 0x44, 0xcc);
DEFINE_GUID(IID_IAzNameResolver, 0x504d0f15, 0x73e2, 0x43df, 0xa8, 0x70, 0xa6, 0x4f, 0x40, 0x71, 0x4f, 0x53);
DEFINE_GUID(IID_IAzObjectPicker, 0x63130a48, 0x699a, 0x42d8, 0xbf, 0x01, 0xc6, 0x2a, 0xc3, 0xfb, 0x79, 0xf9);
DEFINE_GUID(IID_IAzApplication3, 0x181c845e, 0x7196, 0x4a7d, 0xac, 0x2e, 0x02, 0x0c, 0x0b, 0xb7, 0xa3, 0x03);
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAzAuthorizationStore;
    typedef struct IAzAuthorizationStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzAuthorizationStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzAuthorizationStore * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzAuthorizationStore * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzAuthorizationStore * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzAuthorizationStore * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_DomainTimeout )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_DomainTimeout )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_ScriptEngineTimeout )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_ScriptEngineTimeout )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxScriptEngines )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_MaxScriptEngines )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_GenerateAudits )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_GenerateAudits )(
            __RPC__in IAzAuthorizationStore * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IAzAuthorizationStore * This,
                       LONG lFlags,
                       __RPC__in BSTR bstrPolicyURL,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *UpdateCache )(
            __RPC__in IAzAuthorizationStore * This,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IAzAuthorizationStore * This,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Applications )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__deref_out_opt IAzApplications **ppAppCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplication )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *CreateApplication )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplication )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzAuthorizationStore * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsers )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUser )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUser )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_TargetMachine )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__deref_out_opt BSTR *pbstrTargetMachine);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplyStoreSacl )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out BOOL *pbApplyStoreSacl);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplyStoreSacl )(
            __RPC__in IAzAuthorizationStore * This,
                       BOOL bApplyStoreSacl);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsersName )(
            __RPC__in IAzAuthorizationStore * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUserName )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUserName )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *CloseApplication )(
            __RPC__in IAzAuthorizationStore * This,
                       __RPC__in BSTR bstrApplicationName,
                       LONG lFlag);
        END_INTERFACE
    } IAzAuthorizationStoreVtbl;
    interface IAzAuthorizationStore
    {
        CONST_VTBL struct IAzAuthorizationStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_DomainTimeout(This,plProp) )
    ( (This)->lpVtbl -> put_DomainTimeout(This,lProp) )
    ( (This)->lpVtbl -> get_ScriptEngineTimeout(This,plProp) )
    ( (This)->lpVtbl -> put_ScriptEngineTimeout(This,lProp) )
    ( (This)->lpVtbl -> get_MaxScriptEngines(This,plProp) )
    ( (This)->lpVtbl -> put_MaxScriptEngines(This,lProp) )
    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> Initialize(This,lFlags,bstrPolicyURL,varReserved) )
    ( (This)->lpVtbl -> UpdateCache(This,varReserved) )
    ( (This)->lpVtbl -> Delete(This,varReserved) )
    ( (This)->lpVtbl -> get_Applications(This,ppAppCollection) )
    ( (This)->lpVtbl -> OpenApplication(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> CreateApplication(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> DeleteApplication(This,bstrApplicationName,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> get_TargetMachine(This,pbstrTargetMachine) )
    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbApplyStoreSacl) )
    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bApplyStoreSacl) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> CloseApplication(This,bstrApplicationName,lFlag) )
EXTERN_C const IID IID_IAzAuthorizationStore2;
    typedef struct IAzAuthorizationStore2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzAuthorizationStore2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzAuthorizationStore2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzAuthorizationStore2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzAuthorizationStore2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzAuthorizationStore2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_DomainTimeout )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_DomainTimeout )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_ScriptEngineTimeout )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_ScriptEngineTimeout )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxScriptEngines )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_MaxScriptEngines )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_GenerateAudits )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_GenerateAudits )(
            __RPC__in IAzAuthorizationStore2 * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IAzAuthorizationStore2 * This,
                       LONG lFlags,
                       __RPC__in BSTR bstrPolicyURL,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *UpdateCache )(
            __RPC__in IAzAuthorizationStore2 * This,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IAzAuthorizationStore2 * This,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Applications )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__deref_out_opt IAzApplications **ppAppCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplication )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *CreateApplication )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplication )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzAuthorizationStore2 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsers )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUser )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUser )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_TargetMachine )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__deref_out_opt BSTR *pbstrTargetMachine);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplyStoreSacl )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out BOOL *pbApplyStoreSacl);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplyStoreSacl )(
            __RPC__in IAzAuthorizationStore2 * This,
                       BOOL bApplyStoreSacl);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsersName )(
            __RPC__in IAzAuthorizationStore2 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUserName )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUserName )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *CloseApplication )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrApplicationName,
                       LONG lFlag);
        HRESULT ( STDMETHODCALLTYPE *OpenApplication2 )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication2 **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *CreateApplication2 )(
            __RPC__in IAzAuthorizationStore2 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication2 **ppApplication);
        END_INTERFACE
    } IAzAuthorizationStore2Vtbl;
    interface IAzAuthorizationStore2
    {
        CONST_VTBL struct IAzAuthorizationStore2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_DomainTimeout(This,plProp) )
    ( (This)->lpVtbl -> put_DomainTimeout(This,lProp) )
    ( (This)->lpVtbl -> get_ScriptEngineTimeout(This,plProp) )
    ( (This)->lpVtbl -> put_ScriptEngineTimeout(This,lProp) )
    ( (This)->lpVtbl -> get_MaxScriptEngines(This,plProp) )
    ( (This)->lpVtbl -> put_MaxScriptEngines(This,lProp) )
    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> Initialize(This,lFlags,bstrPolicyURL,varReserved) )
    ( (This)->lpVtbl -> UpdateCache(This,varReserved) )
    ( (This)->lpVtbl -> Delete(This,varReserved) )
    ( (This)->lpVtbl -> get_Applications(This,ppAppCollection) )
    ( (This)->lpVtbl -> OpenApplication(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> CreateApplication(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> DeleteApplication(This,bstrApplicationName,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> get_TargetMachine(This,pbstrTargetMachine) )
    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbApplyStoreSacl) )
    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bApplyStoreSacl) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> CloseApplication(This,bstrApplicationName,lFlag) )
    ( (This)->lpVtbl -> OpenApplication2(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> CreateApplication2(This,bstrApplicationName,varReserved,ppApplication) )
EXTERN_C const IID IID_IAzAuthorizationStore3;
    typedef struct IAzAuthorizationStore3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzAuthorizationStore3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzAuthorizationStore3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzAuthorizationStore3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzAuthorizationStore3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzAuthorizationStore3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_DomainTimeout )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_DomainTimeout )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_ScriptEngineTimeout )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_ScriptEngineTimeout )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxScriptEngines )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_MaxScriptEngines )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_GenerateAudits )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_GenerateAudits )(
            __RPC__in IAzAuthorizationStore3 * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lFlags,
                       __RPC__in BSTR bstrPolicyURL,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *UpdateCache )(
            __RPC__in IAzAuthorizationStore3 * This,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IAzAuthorizationStore3 * This,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Applications )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__deref_out_opt IAzApplications **ppAppCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplication )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *CreateApplication )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplication )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzAuthorizationStore3 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsers )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUser )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUser )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_TargetMachine )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__deref_out_opt BSTR *pbstrTargetMachine);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplyStoreSacl )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out BOOL *pbApplyStoreSacl);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplyStoreSacl )(
            __RPC__in IAzAuthorizationStore3 * This,
                       BOOL bApplyStoreSacl);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsersName )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUserName )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUserName )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *CloseApplication )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrApplicationName,
                       LONG lFlag);
        HRESULT ( STDMETHODCALLTYPE *OpenApplication2 )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication2 **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *CreateApplication2 )(
            __RPC__in IAzAuthorizationStore3 * This,
                       __RPC__in BSTR bstrApplicationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplication2 **ppApplication);
        HRESULT ( STDMETHODCALLTYPE *IsUpdateNeeded )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT_BOOL *pbIsUpdateNeeded);
        HRESULT ( STDMETHODCALLTYPE *BizruleGroupSupported )(
            __RPC__in IAzAuthorizationStore3 * This,
                                __RPC__out VARIANT_BOOL *pbSupported);
        HRESULT ( STDMETHODCALLTYPE *UpgradeStoresFunctionalLevel )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lFunctionalLevel);
        HRESULT ( STDMETHODCALLTYPE *IsFunctionalLevelUpgradeSupported )(
            __RPC__in IAzAuthorizationStore3 * This,
                       LONG lFunctionalLevel,
                                __RPC__out VARIANT_BOOL *pbSupported);
        HRESULT ( STDMETHODCALLTYPE *GetSchemaVersion )(
            __RPC__in IAzAuthorizationStore3 * This,
                        __RPC__out LONG *plMajorVersion,
                        __RPC__out LONG *plMinorVersion);
        END_INTERFACE
    } IAzAuthorizationStore3Vtbl;
    interface IAzAuthorizationStore3
    {
        CONST_VTBL struct IAzAuthorizationStore3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_DomainTimeout(This,plProp) )
    ( (This)->lpVtbl -> put_DomainTimeout(This,lProp) )
    ( (This)->lpVtbl -> get_ScriptEngineTimeout(This,plProp) )
    ( (This)->lpVtbl -> put_ScriptEngineTimeout(This,lProp) )
    ( (This)->lpVtbl -> get_MaxScriptEngines(This,plProp) )
    ( (This)->lpVtbl -> put_MaxScriptEngines(This,lProp) )
    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> Initialize(This,lFlags,bstrPolicyURL,varReserved) )
    ( (This)->lpVtbl -> UpdateCache(This,varReserved) )
    ( (This)->lpVtbl -> Delete(This,varReserved) )
    ( (This)->lpVtbl -> get_Applications(This,ppAppCollection) )
    ( (This)->lpVtbl -> OpenApplication(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> CreateApplication(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> DeleteApplication(This,bstrApplicationName,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> get_TargetMachine(This,pbstrTargetMachine) )
    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbApplyStoreSacl) )
    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bApplyStoreSacl) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> CloseApplication(This,bstrApplicationName,lFlag) )
    ( (This)->lpVtbl -> OpenApplication2(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> CreateApplication2(This,bstrApplicationName,varReserved,ppApplication) )
    ( (This)->lpVtbl -> IsUpdateNeeded(This,pbIsUpdateNeeded) )
    ( (This)->lpVtbl -> BizruleGroupSupported(This,pbSupported) )
    ( (This)->lpVtbl -> UpgradeStoresFunctionalLevel(This,lFunctionalLevel) )
    ( (This)->lpVtbl -> IsFunctionalLevelUpgradeSupported(This,lFunctionalLevel,pbSupported) )
    ( (This)->lpVtbl -> GetSchemaVersion(This,plMajorVersion,plMinorVersion) )
EXTERN_C const IID IID_IAzApplication;
    typedef struct IAzApplicationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzApplication * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzApplication * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzApplication * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzApplication * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzApplication * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzApplication * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzApplication * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_AuthzInterfaceClsid )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_AuthzInterfaceClsid )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_GenerateAudits )(
            __RPC__in IAzApplication * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_GenerateAudits )(
            __RPC__in IAzApplication * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplyStoreSacl )(
            __RPC__in IAzApplication * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplyStoreSacl )(
            __RPC__in IAzApplication * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzApplication * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzApplication * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzApplication * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzApplication * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzApplication * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Scopes )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt IAzScopes **ppScopeCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenScope )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzScope **ppScope);
        HRESULT ( STDMETHODCALLTYPE *CreateScope )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzScope **ppScope);
        HRESULT ( STDMETHODCALLTYPE *DeleteScope )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt IAzOperations **ppOperationCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenOperation )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzOperation **ppOperation);
        HRESULT ( STDMETHODCALLTYPE *CreateOperation )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzOperation **ppOperation);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt IAzTasks **ppTaskCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenTask )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *CreateTask )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Roles )(
            __RPC__in IAzApplication * This,
                                __RPC__deref_out_opt IAzRoles **ppRoleCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenRole )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *CreateRole )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *DeleteRole )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromToken )(
            __RPC__in IAzApplication * This,
                       ULONGLONG ullTokenHandle,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzApplication * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzApplication * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzApplication * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromName )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR ClientName,
                                     __RPC__in BSTR DomainName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsers )(
            __RPC__in IAzApplication * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUser )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUser )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromStringSid )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR SidString,
                       LONG lOptions,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzApplication * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzApplication * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsersName )(
            __RPC__in IAzApplication * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUserName )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUserName )(
            __RPC__in IAzApplication * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        END_INTERFACE
    } IAzApplicationVtbl;
    interface IAzApplication
    {
        CONST_VTBL struct IAzApplicationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_AuthzInterfaceClsid(This,pbstrProp) )
    ( (This)->lpVtbl -> put_AuthzInterfaceClsid(This,bstrProp) )
    ( (This)->lpVtbl -> get_Version(This,pbstrProp) )
    ( (This)->lpVtbl -> put_Version(This,bstrProp) )
    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbProp) )
    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_Scopes(This,ppScopeCollection) )
    ( (This)->lpVtbl -> OpenScope(This,bstrScopeName,varReserved,ppScope) )
    ( (This)->lpVtbl -> CreateScope(This,bstrScopeName,varReserved,ppScope) )
    ( (This)->lpVtbl -> DeleteScope(This,bstrScopeName,varReserved) )
    ( (This)->lpVtbl -> get_Operations(This,ppOperationCollection) )
    ( (This)->lpVtbl -> OpenOperation(This,bstrOperationName,varReserved,ppOperation) )
    ( (This)->lpVtbl -> CreateOperation(This,bstrOperationName,varReserved,ppOperation) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrOperationName,varReserved) )
    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
EXTERN_C const IID IID_IAzApplication2;
    typedef struct IAzApplication2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzApplication2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzApplication2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzApplication2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzApplication2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzApplication2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_AuthzInterfaceClsid )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_AuthzInterfaceClsid )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_GenerateAudits )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_GenerateAudits )(
            __RPC__in IAzApplication2 * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplyStoreSacl )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplyStoreSacl )(
            __RPC__in IAzApplication2 * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzApplication2 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzApplication2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Scopes )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt IAzScopes **ppScopeCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenScope )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzScope **ppScope);
        HRESULT ( STDMETHODCALLTYPE *CreateScope )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzScope **ppScope);
        HRESULT ( STDMETHODCALLTYPE *DeleteScope )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt IAzOperations **ppOperationCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenOperation )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzOperation **ppOperation);
        HRESULT ( STDMETHODCALLTYPE *CreateOperation )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzOperation **ppOperation);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt IAzTasks **ppTaskCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenTask )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *CreateTask )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Roles )(
            __RPC__in IAzApplication2 * This,
                                __RPC__deref_out_opt IAzRoles **ppRoleCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenRole )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *CreateRole )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *DeleteRole )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromToken )(
            __RPC__in IAzApplication2 * This,
                       ULONGLONG ullTokenHandle,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzApplication2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzApplication2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzApplication2 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromName )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR ClientName,
                                     __RPC__in BSTR DomainName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsers )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUser )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUser )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromStringSid )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR SidString,
                       LONG lOptions,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsersName )(
            __RPC__in IAzApplication2 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUserName )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUserName )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromToken2 )(
            __RPC__in IAzApplication2 * This,
                       ULONG ulTokenHandleLowPart,
                       ULONG ulTokenHandleHighPart,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext2 **ppClientContext);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContext2 )(
            __RPC__in IAzApplication2 * This,
                       __RPC__in BSTR IdentifyingString,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext2 **ppClientContext);
        END_INTERFACE
    } IAzApplication2Vtbl;
    interface IAzApplication2
    {
        CONST_VTBL struct IAzApplication2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_AuthzInterfaceClsid(This,pbstrProp) )
    ( (This)->lpVtbl -> put_AuthzInterfaceClsid(This,bstrProp) )
    ( (This)->lpVtbl -> get_Version(This,pbstrProp) )
    ( (This)->lpVtbl -> put_Version(This,bstrProp) )
    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbProp) )
    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_Scopes(This,ppScopeCollection) )
    ( (This)->lpVtbl -> OpenScope(This,bstrScopeName,varReserved,ppScope) )
    ( (This)->lpVtbl -> CreateScope(This,bstrScopeName,varReserved,ppScope) )
    ( (This)->lpVtbl -> DeleteScope(This,bstrScopeName,varReserved) )
    ( (This)->lpVtbl -> get_Operations(This,ppOperationCollection) )
    ( (This)->lpVtbl -> OpenOperation(This,bstrOperationName,varReserved,ppOperation) )
    ( (This)->lpVtbl -> CreateOperation(This,bstrOperationName,varReserved,ppOperation) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrOperationName,varReserved) )
    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromToken2(This,ulTokenHandleLowPart,ulTokenHandleHighPart,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> InitializeClientContext2(This,IdentifyingString,varReserved,ppClientContext) )
EXTERN_C const IID IID_IAzApplications;
    typedef struct IAzApplicationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzApplications * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzApplications * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzApplications * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzApplications * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzApplications * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzApplications * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzApplications * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzApplications * This,
                       long Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzApplications * This,
                                __RPC__out long *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzApplications * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzApplicationsVtbl;
    interface IAzApplications
    {
        CONST_VTBL struct IAzApplicationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzOperation;
    typedef struct IAzOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzOperation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzOperation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzOperation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzOperation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzOperation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzOperation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzOperation * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzOperation * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzOperation * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzOperation * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzOperation * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzOperation * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_OperationID )(
            __RPC__in IAzOperation * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_OperationID )(
            __RPC__in IAzOperation * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzOperation * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzOperation * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzOperation * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzOperation * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        END_INTERFACE
    } IAzOperationVtbl;
    interface IAzOperation
    {
        CONST_VTBL struct IAzOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_OperationID(This,plProp) )
    ( (This)->lpVtbl -> put_OperationID(This,lProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
EXTERN_C const IID IID_IAzOperations;
    typedef struct IAzOperationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzOperations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzOperations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzOperations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzOperations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzOperations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzOperations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzOperations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzOperations * This,
                       LONG Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzOperations * This,
                                __RPC__out LONG *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzOperations * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzOperationsVtbl;
    interface IAzOperations
    {
        CONST_VTBL struct IAzOperationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzTask;
    typedef struct IAzTaskVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzTask * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzTask * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzTask * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzTask * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzTask * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzTask * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzTask * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzTask * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzTask * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzTask * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRule )(
            __RPC__in IAzTask * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRule )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleLanguage )(
            __RPC__in IAzTask * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleLanguage )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleImportedPath )(
            __RPC__in IAzTask * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleImportedPath )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_IsRoleDefinition )(
            __RPC__in IAzTask * This,
                                __RPC__out BOOL *pfProp);
                        HRESULT ( STDMETHODCALLTYPE *put_IsRoleDefinition )(
            __RPC__in IAzTask * This,
                       BOOL fProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzTask * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzTask * This,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *AddOperation )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrOp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrOp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddTask )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrTask,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzTask * This,
                       __RPC__in BSTR bstrTask,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzTask * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzTask * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzTask * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzTask * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzTask * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzTask * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        END_INTERFACE
    } IAzTaskVtbl;
    interface IAzTask
    {
        CONST_VTBL struct IAzTaskVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
    ( (This)->lpVtbl -> get_IsRoleDefinition(This,pfProp) )
    ( (This)->lpVtbl -> put_IsRoleDefinition(This,fProp) )
    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
    ( (This)->lpVtbl -> AddOperation(This,bstrOp,varReserved) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrOp,varReserved) )
    ( (This)->lpVtbl -> AddTask(This,bstrTask,varReserved) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTask,varReserved) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
EXTERN_C const IID IID_IAzTasks;
    typedef struct IAzTasksVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzTasks * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzTasks * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzTasks * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzTasks * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzTasks * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzTasks * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzTasks * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzTasks * This,
                       LONG Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzTasks * This,
                                __RPC__out LONG *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzTasks * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzTasksVtbl;
    interface IAzTasks
    {
        CONST_VTBL struct IAzTasksVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzScope;
    typedef struct IAzScopeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzScope * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzScope * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzScope * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzScope * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzScope * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzScope * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzScope * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzScope * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzScope * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzScope * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzScope * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzScope * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzScope * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzScope * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzScope * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzScope * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzScope * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzScope * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Roles )(
            __RPC__in IAzScope * This,
                                __RPC__deref_out_opt IAzRoles **ppRoleCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenRole )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *CreateRole )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *DeleteRole )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzScope * This,
                                __RPC__deref_out_opt IAzTasks **ppTaskCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenTask )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *CreateTask )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzScope * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_CanBeDelegated )(
            __RPC__in IAzScope * This,
                                __RPC__out BOOL *pfProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizrulesWritable )(
            __RPC__in IAzScope * This,
                                __RPC__out BOOL *pfProp);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzScope * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzScope * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzScope * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        END_INTERFACE
    } IAzScopeVtbl;
    interface IAzScope
    {
        CONST_VTBL struct IAzScopeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> get_CanBeDelegated(This,pfProp) )
    ( (This)->lpVtbl -> get_BizrulesWritable(This,pfProp) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
EXTERN_C const IID IID_IAzScopes;
    typedef struct IAzScopesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzScopes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzScopes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzScopes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzScopes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzScopes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzScopes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzScopes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzScopes * This,
                       LONG Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzScopes * This,
                                __RPC__out LONG *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzScopes * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzScopesVtbl;
    interface IAzScopes
    {
        CONST_VTBL struct IAzScopesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzApplicationGroup;
    typedef struct IAzApplicationGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzApplicationGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzApplicationGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzApplicationGroup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzApplicationGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzApplicationGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IAzApplicationGroup * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_LdapQuery )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_LdapQuery )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_AppMembers )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_AppNonMembers )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_NonMembers )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrDescription);
        HRESULT ( STDMETHODCALLTYPE *AddAppMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteAppMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddAppNonMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteAppNonMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddNonMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteNonMember )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzApplicationGroup * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzApplicationGroup * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzApplicationGroup * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzApplicationGroup * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzApplicationGroup * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMemberName )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMemberName )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddNonMemberName )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteNonMemberName )(
            __RPC__in IAzApplicationGroup * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_MembersName )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_NonMembersName )(
            __RPC__in IAzApplicationGroup * This,
                                __RPC__out VARIANT *pvarProp);
        END_INTERFACE
    } IAzApplicationGroupVtbl;
    interface IAzApplicationGroup
    {
        CONST_VTBL struct IAzApplicationGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Type(This,plProp) )
    ( (This)->lpVtbl -> put_Type(This,lProp) )
    ( (This)->lpVtbl -> get_LdapQuery(This,pbstrProp) )
    ( (This)->lpVtbl -> put_LdapQuery(This,bstrProp) )
    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_AppNonMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
    ( (This)->lpVtbl -> get_NonMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddAppNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteAppNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddNonMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteNonMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
    ( (This)->lpVtbl -> get_NonMembersName(This,pvarProp) )
EXTERN_C const IID IID_IAzApplicationGroups;
    typedef struct IAzApplicationGroupsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzApplicationGroups * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzApplicationGroups * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzApplicationGroups * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzApplicationGroups * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzApplicationGroups * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzApplicationGroups * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzApplicationGroups * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzApplicationGroups * This,
                       LONG Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzApplicationGroups * This,
                                __RPC__out LONG *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzApplicationGroups * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzApplicationGroupsVtbl;
    interface IAzApplicationGroups
    {
        CONST_VTBL struct IAzApplicationGroupsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzRole;
    typedef struct IAzRoleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzRole * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzRole * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzRole * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzRole * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzRole * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzRole * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzRole * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzRole * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzRole * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzRole * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrApplicationData);
        HRESULT ( STDMETHODCALLTYPE *AddAppMember )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteAppMember )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddTask )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddOperation )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMember )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMember )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzRole * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzRole * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzRole * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_AppMembers )(
            __RPC__in IAzRole * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in IAzRole * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzRole * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzRole * This,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzRole * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzRole * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzRole * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMemberName )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMemberName )(
            __RPC__in IAzRole * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_MembersName )(
            __RPC__in IAzRole * This,
                                __RPC__out VARIANT *pvarProp);
        END_INTERFACE
    } IAzRoleVtbl;
    interface IAzRole
    {
        CONST_VTBL struct IAzRoleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddTask(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddOperation(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
EXTERN_C const IID IID_IAzRoles;
    typedef struct IAzRolesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzRoles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzRoles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzRoles * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzRoles * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzRoles * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzRoles * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzRoles * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzRoles * This,
                       LONG Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzRoles * This,
                                __RPC__out LONG *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzRoles * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzRolesVtbl;
    interface IAzRoles
    {
        CONST_VTBL struct IAzRolesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzClientContext;
    typedef struct IAzClientContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzClientContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzClientContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzClientContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzClientContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzClientContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzClientContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzClientContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *AccessCheck )(
            __RPC__in IAzClientContext * This,
                       __RPC__in BSTR bstrObjectName,
                       VARIANT varScopeNames,
                       VARIANT varOperations,
                                 VARIANT varParameterNames,
                                 VARIANT varParameterValues,
                                 VARIANT varInterfaceNames,
                                 VARIANT varInterfaceFlags,
                                 VARIANT varInterfaces,
                                __RPC__out VARIANT *pvarResults);
        HRESULT ( STDMETHODCALLTYPE *GetBusinessRuleString )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrBusinessRuleString);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDn )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserSamCompat )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDisplay )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserGuid )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserCanonical )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserUpn )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDnsSamCompat )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzClientContext * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *GetRoles )(
            __RPC__in IAzClientContext * This,
                                     __RPC__in BSTR bstrScopeName,
                                __RPC__out VARIANT *pvarRoleNames);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleForAccessCheck )(
            __RPC__in IAzClientContext * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_RoleForAccessCheck )(
            __RPC__in IAzClientContext * This,
                       __RPC__in BSTR bstrProp);
        END_INTERFACE
    } IAzClientContextVtbl;
    interface IAzClientContext
    {
        CONST_VTBL struct IAzClientContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults) )
    ( (This)->lpVtbl -> GetBusinessRuleString(This,pbstrBusinessRuleString) )
    ( (This)->lpVtbl -> get_UserDn(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserSamCompat(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserDisplay(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserGuid(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserCanonical(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserUpn(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserDnsSamCompat(This,pbstrProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> GetRoles(This,bstrScopeName,pvarRoleNames) )
    ( (This)->lpVtbl -> get_RoleForAccessCheck(This,pbstrProp) )
    ( (This)->lpVtbl -> put_RoleForAccessCheck(This,bstrProp) )
EXTERN_C const IID IID_IAzClientContext2;
    typedef struct IAzClientContext2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzClientContext2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzClientContext2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzClientContext2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzClientContext2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzClientContext2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzClientContext2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzClientContext2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *AccessCheck )(
            __RPC__in IAzClientContext2 * This,
                       __RPC__in BSTR bstrObjectName,
                       VARIANT varScopeNames,
                       VARIANT varOperations,
                                 VARIANT varParameterNames,
                                 VARIANT varParameterValues,
                                 VARIANT varInterfaceNames,
                                 VARIANT varInterfaceFlags,
                                 VARIANT varInterfaces,
                                __RPC__out VARIANT *pvarResults);
        HRESULT ( STDMETHODCALLTYPE *GetBusinessRuleString )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrBusinessRuleString);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDn )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserSamCompat )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDisplay )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserGuid )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserCanonical )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserUpn )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDnsSamCompat )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzClientContext2 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *GetRoles )(
            __RPC__in IAzClientContext2 * This,
                                     __RPC__in BSTR bstrScopeName,
                                __RPC__out VARIANT *pvarRoleNames);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleForAccessCheck )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_RoleForAccessCheck )(
            __RPC__in IAzClientContext2 * This,
                       __RPC__in BSTR bstrProp);
        HRESULT ( STDMETHODCALLTYPE *GetAssignedScopesPage )(
            __RPC__in IAzClientContext2 * This,
                       LONG lOptions,
                       LONG PageSize,
                            __RPC__inout VARIANT *pvarCursor,
                                __RPC__out VARIANT *pvarScopeNames);
        HRESULT ( STDMETHODCALLTYPE *AddRoles )(
            __RPC__in IAzClientContext2 * This,
                       VARIANT varRoles,
                       __RPC__in BSTR bstrScopeName);
        HRESULT ( STDMETHODCALLTYPE *AddApplicationGroups )(
            __RPC__in IAzClientContext2 * This,
                       VARIANT varApplicationGroups);
        HRESULT ( STDMETHODCALLTYPE *AddStringSids )(
            __RPC__in IAzClientContext2 * This,
                       VARIANT varStringSids);
                        HRESULT ( STDMETHODCALLTYPE *put_LDAPQueryDN )(
            __RPC__in IAzClientContext2 * This,
                       __RPC__in BSTR bstrLDAPQueryDN);
                        HRESULT ( STDMETHODCALLTYPE *get_LDAPQueryDN )(
            __RPC__in IAzClientContext2 * This,
                                __RPC__deref_out_opt BSTR *pbstrLDAPQueryDN);
        END_INTERFACE
    } IAzClientContext2Vtbl;
    interface IAzClientContext2
    {
        CONST_VTBL struct IAzClientContext2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults) )
    ( (This)->lpVtbl -> GetBusinessRuleString(This,pbstrBusinessRuleString) )
    ( (This)->lpVtbl -> get_UserDn(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserSamCompat(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserDisplay(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserGuid(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserCanonical(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserUpn(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserDnsSamCompat(This,pbstrProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> GetRoles(This,bstrScopeName,pvarRoleNames) )
    ( (This)->lpVtbl -> get_RoleForAccessCheck(This,pbstrProp) )
    ( (This)->lpVtbl -> put_RoleForAccessCheck(This,bstrProp) )
    ( (This)->lpVtbl -> GetAssignedScopesPage(This,lOptions,PageSize,pvarCursor,pvarScopeNames) )
    ( (This)->lpVtbl -> AddRoles(This,varRoles,bstrScopeName) )
    ( (This)->lpVtbl -> AddApplicationGroups(This,varApplicationGroups) )
    ( (This)->lpVtbl -> AddStringSids(This,varStringSids) )
    ( (This)->lpVtbl -> put_LDAPQueryDN(This,bstrLDAPQueryDN) )
    ( (This)->lpVtbl -> get_LDAPQueryDN(This,pbstrLDAPQueryDN) )
EXTERN_C const IID IID_IAzBizRuleContext;
    typedef struct IAzBizRuleContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzBizRuleContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzBizRuleContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzBizRuleContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzBizRuleContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzBizRuleContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzBizRuleContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzBizRuleContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *put_BusinessRuleResult )(
            __RPC__in IAzBizRuleContext * This,
                       BOOL bResult);
                        HRESULT ( STDMETHODCALLTYPE *put_BusinessRuleString )(
            __RPC__in IAzBizRuleContext * This,
                       __RPC__in BSTR bstrBusinessRuleString);
                        HRESULT ( STDMETHODCALLTYPE *get_BusinessRuleString )(
            __RPC__in IAzBizRuleContext * This,
                                __RPC__deref_out_opt BSTR *pbstrBusinessRuleString);
        HRESULT ( STDMETHODCALLTYPE *GetParameter )(
            __RPC__in IAzBizRuleContext * This,
                       __RPC__in BSTR bstrParameterName,
                                __RPC__out VARIANT *pvarParameterValue);
        END_INTERFACE
    } IAzBizRuleContextVtbl;
    interface IAzBizRuleContext
    {
        CONST_VTBL struct IAzBizRuleContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_BusinessRuleResult(This,bResult) )
    ( (This)->lpVtbl -> put_BusinessRuleString(This,bstrBusinessRuleString) )
    ( (This)->lpVtbl -> get_BusinessRuleString(This,pbstrBusinessRuleString) )
    ( (This)->lpVtbl -> GetParameter(This,bstrParameterName,pvarParameterValue) )
EXTERN_C const IID IID_IAzBizRuleParameters;
    typedef struct IAzBizRuleParametersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzBizRuleParameters * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzBizRuleParameters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzBizRuleParameters * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzBizRuleParameters * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzBizRuleParameters * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzBizRuleParameters * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzBizRuleParameters * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *AddParameter )(
            __RPC__in IAzBizRuleParameters * This,
                       __RPC__in BSTR bstrParameterName,
                       VARIANT varParameterValue);
        HRESULT ( STDMETHODCALLTYPE *AddParameters )(
            __RPC__in IAzBizRuleParameters * This,
                       VARIANT varParameterNames,
                       VARIANT varParameterValues);
        HRESULT ( STDMETHODCALLTYPE *GetParameterValue )(
            __RPC__in IAzBizRuleParameters * This,
                       __RPC__in BSTR bstrParameterName,
                                __RPC__out VARIANT *pvarParameterValue);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IAzBizRuleParameters * This,
                       __RPC__in BSTR varParameterName);
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
            __RPC__in IAzBizRuleParameters * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzBizRuleParameters * This,
                                __RPC__out unsigned long *plCount);
        END_INTERFACE
    } IAzBizRuleParametersVtbl;
    interface IAzBizRuleParameters
    {
        CONST_VTBL struct IAzBizRuleParametersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AddParameter(This,bstrParameterName,varParameterValue) )
    ( (This)->lpVtbl -> AddParameters(This,varParameterNames,varParameterValues) )
    ( (This)->lpVtbl -> GetParameterValue(This,bstrParameterName,pvarParameterValue) )
    ( (This)->lpVtbl -> Remove(This,varParameterName) )
    ( (This)->lpVtbl -> RemoveAll(This) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
EXTERN_C const IID IID_IAzBizRuleInterfaces;
    typedef struct IAzBizRuleInterfacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzBizRuleInterfaces * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzBizRuleInterfaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzBizRuleInterfaces * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzBizRuleInterfaces * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzBizRuleInterfaces * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzBizRuleInterfaces * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzBizRuleInterfaces * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *AddInterface )(
            __RPC__in IAzBizRuleInterfaces * This,
                       __RPC__in BSTR bstrInterfaceName,
                       LONG lInterfaceFlag,
                       VARIANT varInterface);
        HRESULT ( STDMETHODCALLTYPE *AddInterfaces )(
            __RPC__in IAzBizRuleInterfaces * This,
                       VARIANT varInterfaceNames,
                       VARIANT varInterfaceFlags,
                       VARIANT varInterfaces);
        HRESULT ( STDMETHODCALLTYPE *GetInterfaceValue )(
            __RPC__in IAzBizRuleInterfaces * This,
                       __RPC__in BSTR bstrInterfaceName,
                        __RPC__out LONG *lInterfaceFlag,
                        __RPC__out VARIANT *varInterface);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IAzBizRuleInterfaces * This,
                       __RPC__in BSTR bstrInterfaceName);
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
            __RPC__in IAzBizRuleInterfaces * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzBizRuleInterfaces * This,
                                __RPC__out unsigned long *plCount);
        END_INTERFACE
    } IAzBizRuleInterfacesVtbl;
    interface IAzBizRuleInterfaces
    {
        CONST_VTBL struct IAzBizRuleInterfacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AddInterface(This,bstrInterfaceName,lInterfaceFlag,varInterface) )
    ( (This)->lpVtbl -> AddInterfaces(This,varInterfaceNames,varInterfaceFlags,varInterfaces) )
    ( (This)->lpVtbl -> GetInterfaceValue(This,bstrInterfaceName,lInterfaceFlag,varInterface) )
    ( (This)->lpVtbl -> Remove(This,bstrInterfaceName) )
    ( (This)->lpVtbl -> RemoveAll(This) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
EXTERN_C const IID IID_IAzClientContext3;
    typedef struct IAzClientContext3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzClientContext3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzClientContext3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzClientContext3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzClientContext3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzClientContext3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *AccessCheck )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrObjectName,
                       VARIANT varScopeNames,
                       VARIANT varOperations,
                                 VARIANT varParameterNames,
                                 VARIANT varParameterValues,
                                 VARIANT varInterfaceNames,
                                 VARIANT varInterfaceFlags,
                                 VARIANT varInterfaces,
                                __RPC__out VARIANT *pvarResults);
        HRESULT ( STDMETHODCALLTYPE *GetBusinessRuleString )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrBusinessRuleString);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDn )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserSamCompat )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDisplay )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserGuid )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserCanonical )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserUpn )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_UserDnsSamCompat )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzClientContext3 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *GetRoles )(
            __RPC__in IAzClientContext3 * This,
                                     __RPC__in BSTR bstrScopeName,
                                __RPC__out VARIANT *pvarRoleNames);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleForAccessCheck )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_RoleForAccessCheck )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrProp);
        HRESULT ( STDMETHODCALLTYPE *GetAssignedScopesPage )(
            __RPC__in IAzClientContext3 * This,
                       LONG lOptions,
                       LONG PageSize,
                            __RPC__inout VARIANT *pvarCursor,
                                __RPC__out VARIANT *pvarScopeNames);
        HRESULT ( STDMETHODCALLTYPE *AddRoles )(
            __RPC__in IAzClientContext3 * This,
                       VARIANT varRoles,
                       __RPC__in BSTR bstrScopeName);
        HRESULT ( STDMETHODCALLTYPE *AddApplicationGroups )(
            __RPC__in IAzClientContext3 * This,
                       VARIANT varApplicationGroups);
        HRESULT ( STDMETHODCALLTYPE *AddStringSids )(
            __RPC__in IAzClientContext3 * This,
                       VARIANT varStringSids);
                        HRESULT ( STDMETHODCALLTYPE *put_LDAPQueryDN )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrLDAPQueryDN);
                        HRESULT ( STDMETHODCALLTYPE *get_LDAPQueryDN )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt BSTR *pbstrLDAPQueryDN);
        HRESULT ( STDMETHODCALLTYPE *AccessCheck2 )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrObjectName,
                       __RPC__in BSTR bstrScopeName,
                       long lOperation,
                                __RPC__out unsigned long *plResult);
        HRESULT ( STDMETHODCALLTYPE *IsInRoleAssignment )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrScopeName,
                       __RPC__in BSTR bstrRoleName,
                                __RPC__out VARIANT_BOOL *pbIsInRole);
        HRESULT ( STDMETHODCALLTYPE *GetOperations )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrScopeName,
                                __RPC__deref_out_opt IAzOperations **ppOperationCollection);
        HRESULT ( STDMETHODCALLTYPE *GetTasks )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrScopeName,
                                __RPC__deref_out_opt IAzTasks **ppTaskCollection);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleParameters )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt IAzBizRuleParameters **ppBizRuleParam);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleInterfaces )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__deref_out_opt IAzBizRuleInterfaces **ppBizRuleInterfaces);
        HRESULT ( STDMETHODCALLTYPE *GetGroups )(
            __RPC__in IAzClientContext3 * This,
                       __RPC__in BSTR bstrScopeName,
                       ULONG ulOptions,
                                __RPC__out VARIANT *pGroupArray);
                        HRESULT ( STDMETHODCALLTYPE *get_Sids )(
            __RPC__in IAzClientContext3 * This,
                                __RPC__out VARIANT *pStringSidArray);
        END_INTERFACE
    } IAzClientContext3Vtbl;
    interface IAzClientContext3
    {
        CONST_VTBL struct IAzClientContext3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> AccessCheck(This,bstrObjectName,varScopeNames,varOperations,varParameterNames,varParameterValues,varInterfaceNames,varInterfaceFlags,varInterfaces,pvarResults) )
    ( (This)->lpVtbl -> GetBusinessRuleString(This,pbstrBusinessRuleString) )
    ( (This)->lpVtbl -> get_UserDn(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserSamCompat(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserDisplay(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserGuid(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserCanonical(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserUpn(This,pbstrProp) )
    ( (This)->lpVtbl -> get_UserDnsSamCompat(This,pbstrProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> GetRoles(This,bstrScopeName,pvarRoleNames) )
    ( (This)->lpVtbl -> get_RoleForAccessCheck(This,pbstrProp) )
    ( (This)->lpVtbl -> put_RoleForAccessCheck(This,bstrProp) )
    ( (This)->lpVtbl -> GetAssignedScopesPage(This,lOptions,PageSize,pvarCursor,pvarScopeNames) )
    ( (This)->lpVtbl -> AddRoles(This,varRoles,bstrScopeName) )
    ( (This)->lpVtbl -> AddApplicationGroups(This,varApplicationGroups) )
    ( (This)->lpVtbl -> AddStringSids(This,varStringSids) )
    ( (This)->lpVtbl -> put_LDAPQueryDN(This,bstrLDAPQueryDN) )
    ( (This)->lpVtbl -> get_LDAPQueryDN(This,pbstrLDAPQueryDN) )
    ( (This)->lpVtbl -> AccessCheck2(This,bstrObjectName,bstrScopeName,lOperation,plResult) )
    ( (This)->lpVtbl -> IsInRoleAssignment(This,bstrScopeName,bstrRoleName,pbIsInRole) )
    ( (This)->lpVtbl -> GetOperations(This,bstrScopeName,ppOperationCollection) )
    ( (This)->lpVtbl -> GetTasks(This,bstrScopeName,ppTaskCollection) )
    ( (This)->lpVtbl -> get_BizRuleParameters(This,ppBizRuleParam) )
    ( (This)->lpVtbl -> get_BizRuleInterfaces(This,ppBizRuleInterfaces) )
    ( (This)->lpVtbl -> GetGroups(This,bstrScopeName,ulOptions,pGroupArray) )
    ( (This)->lpVtbl -> get_Sids(This,pStringSidArray) )
EXTERN_C const IID IID_IAzScope2;
    typedef struct IAzScope2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzScope2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzScope2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzScope2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzScope2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzScope2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzScope2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzScope2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzScope2 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzScope2 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzScope2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzScope2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzScope2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzScope2 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzScope2 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Roles )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt IAzRoles **ppRoleCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenRole )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *CreateRole )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *DeleteRole )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt IAzTasks **ppTaskCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenTask )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *CreateTask )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzScope2 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_CanBeDelegated )(
            __RPC__in IAzScope2 * This,
                                __RPC__out BOOL *pfProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizrulesWritable )(
            __RPC__in IAzScope2 * This,
                                __RPC__out BOOL *pfProp);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzScope2 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzScope2 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleDefinitions )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt IAzRoleDefinitions **ppRoleDefinitions);
        HRESULT ( STDMETHODCALLTYPE *CreateRoleDefinition )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleDefinitionName,
                                __RPC__deref_out_opt IAzRoleDefinition **ppRoleDefinitions);
        HRESULT ( STDMETHODCALLTYPE *OpenRoleDefinition )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleDefinitionName,
                                __RPC__deref_out_opt IAzRoleDefinition **ppRoleDefinitions);
        HRESULT ( STDMETHODCALLTYPE *DeleteRoleDefinition )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleDefinitionName);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleAssignments )(
            __RPC__in IAzScope2 * This,
                                __RPC__deref_out_opt IAzRoleAssignments **ppRoleAssignments);
        HRESULT ( STDMETHODCALLTYPE *CreateRoleAssignment )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleAssignmentName,
                                __RPC__deref_out_opt IAzRoleAssignment **ppRoleAssignment);
        HRESULT ( STDMETHODCALLTYPE *OpenRoleAssignment )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleAssignmentName,
                                __RPC__deref_out_opt IAzRoleAssignment **ppRoleAssignment);
        HRESULT ( STDMETHODCALLTYPE *DeleteRoleAssignment )(
            __RPC__in IAzScope2 * This,
                       __RPC__in BSTR bstrRoleAssignmentName);
        END_INTERFACE
    } IAzScope2Vtbl;
    interface IAzScope2
    {
        CONST_VTBL struct IAzScope2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> get_CanBeDelegated(This,pfProp) )
    ( (This)->lpVtbl -> get_BizrulesWritable(This,pfProp) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
    ( (This)->lpVtbl -> CreateRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
    ( (This)->lpVtbl -> OpenRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinitionName) )
    ( (This)->lpVtbl -> get_RoleAssignments(This,ppRoleAssignments) )
    ( (This)->lpVtbl -> CreateRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
    ( (This)->lpVtbl -> OpenRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
    ( (This)->lpVtbl -> DeleteRoleAssignment(This,bstrRoleAssignmentName) )
EXTERN_C const IID IID_IAzApplication3;
    typedef struct IAzApplication3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzApplication3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzApplication3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzApplication3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzApplication3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzApplication3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_AuthzInterfaceClsid )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_AuthzInterfaceClsid )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Version )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_Version )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_GenerateAudits )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_GenerateAudits )(
            __RPC__in IAzApplication3 * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplyStoreSacl )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out BOOL *pbProp);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplyStoreSacl )(
            __RPC__in IAzApplication3 * This,
                       BOOL bProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzApplication3 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzApplication3 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministrators )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReaders )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministrator )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministrator )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReader )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReader )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Scopes )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt IAzScopes **ppScopeCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenScope )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzScope **ppScope);
        HRESULT ( STDMETHODCALLTYPE *CreateScope )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzScope **ppScope);
        HRESULT ( STDMETHODCALLTYPE *DeleteScope )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrScopeName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt IAzOperations **ppOperationCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenOperation )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzOperation **ppOperation);
        HRESULT ( STDMETHODCALLTYPE *CreateOperation )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzOperation **ppOperation);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrOperationName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt IAzTasks **ppTaskCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenTask )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *CreateTask )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzTask **ppTask);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrTaskName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationGroups )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt IAzApplicationGroups **ppGroupCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenApplicationGroup )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *CreateApplicationGroup )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzApplicationGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteApplicationGroup )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrGroupName,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Roles )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt IAzRoles **ppRoleCollection);
        HRESULT ( STDMETHODCALLTYPE *OpenRole )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *CreateRole )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzRole **ppRole);
        HRESULT ( STDMETHODCALLTYPE *DeleteRole )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleName,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromToken )(
            __RPC__in IAzApplication3 * This,
                       ULONGLONG ullTokenHandle,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzApplication3 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzApplication3 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzApplication3 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromName )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR ClientName,
                                     __RPC__in BSTR DomainName,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsers )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUser )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUser )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromStringSid )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR SidString,
                       LONG lOptions,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext **ppClientContext);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyAdministratorsName )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out VARIANT *pvarAdmins);
                        HRESULT ( STDMETHODCALLTYPE *get_PolicyReadersName )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out VARIANT *pvarReaders);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyAdministratorName )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyAdministratorName )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrAdmin,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPolicyReaderName )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePolicyReaderName )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrReader,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_DelegatedPolicyUsersName )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out VARIANT *pvarDelegatedPolicyUsers);
        HRESULT ( STDMETHODCALLTYPE *AddDelegatedPolicyUserName )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteDelegatedPolicyUserName )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrDelegatedPolicyUser,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContextFromToken2 )(
            __RPC__in IAzApplication3 * This,
                       ULONG ulTokenHandleLowPart,
                       ULONG ulTokenHandleHighPart,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext2 **ppClientContext);
        HRESULT ( STDMETHODCALLTYPE *InitializeClientContext2 )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR IdentifyingString,
                                 VARIANT varReserved,
                                __RPC__deref_out_opt IAzClientContext2 **ppClientContext);
        HRESULT ( STDMETHODCALLTYPE *ScopeExists )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrScopeName,
                                __RPC__out VARIANT_BOOL *pbExist);
        HRESULT ( STDMETHODCALLTYPE *OpenScope2 )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrScopeName,
                                __RPC__deref_out_opt IAzScope2 **ppScope2);
        HRESULT ( STDMETHODCALLTYPE *CreateScope2 )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrScopeName,
                                __RPC__deref_out_opt IAzScope2 **ppScope2);
        HRESULT ( STDMETHODCALLTYPE *DeleteScope2 )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrScopeName);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleDefinitions )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt IAzRoleDefinitions **ppRoleDefinitions);
        HRESULT ( STDMETHODCALLTYPE *CreateRoleDefinition )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleDefinitionName,
                                __RPC__deref_out_opt IAzRoleDefinition **ppRoleDefinitions);
        HRESULT ( STDMETHODCALLTYPE *OpenRoleDefinition )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleDefinitionName,
                                __RPC__deref_out_opt IAzRoleDefinition **ppRoleDefinitions);
        HRESULT ( STDMETHODCALLTYPE *DeleteRoleDefinition )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleDefinitionName);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleAssignments )(
            __RPC__in IAzApplication3 * This,
                                __RPC__deref_out_opt IAzRoleAssignments **ppRoleAssignments);
        HRESULT ( STDMETHODCALLTYPE *CreateRoleAssignment )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleAssignmentName,
                                __RPC__deref_out_opt IAzRoleAssignment **ppRoleAssignment);
        HRESULT ( STDMETHODCALLTYPE *OpenRoleAssignment )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleAssignmentName,
                                __RPC__deref_out_opt IAzRoleAssignment **ppRoleAssignment);
        HRESULT ( STDMETHODCALLTYPE *DeleteRoleAssignment )(
            __RPC__in IAzApplication3 * This,
                       __RPC__in BSTR bstrRoleAssignmentName);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRulesEnabled )(
            __RPC__in IAzApplication3 * This,
                                __RPC__out VARIANT_BOOL *pbEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRulesEnabled )(
            __RPC__in IAzApplication3 * This,
                       VARIANT_BOOL bEnabled);
        END_INTERFACE
    } IAzApplication3Vtbl;
    interface IAzApplication3
    {
        CONST_VTBL struct IAzApplication3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_AuthzInterfaceClsid(This,pbstrProp) )
    ( (This)->lpVtbl -> put_AuthzInterfaceClsid(This,bstrProp) )
    ( (This)->lpVtbl -> get_Version(This,pbstrProp) )
    ( (This)->lpVtbl -> put_Version(This,bstrProp) )
    ( (This)->lpVtbl -> get_GenerateAudits(This,pbProp) )
    ( (This)->lpVtbl -> put_GenerateAudits(This,bProp) )
    ( (This)->lpVtbl -> get_ApplyStoreSacl(This,pbProp) )
    ( (This)->lpVtbl -> put_ApplyStoreSacl(This,bProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_PolicyAdministrators(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReaders(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministrator(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReader(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_Scopes(This,ppScopeCollection) )
    ( (This)->lpVtbl -> OpenScope(This,bstrScopeName,varReserved,ppScope) )
    ( (This)->lpVtbl -> CreateScope(This,bstrScopeName,varReserved,ppScope) )
    ( (This)->lpVtbl -> DeleteScope(This,bstrScopeName,varReserved) )
    ( (This)->lpVtbl -> get_Operations(This,ppOperationCollection) )
    ( (This)->lpVtbl -> OpenOperation(This,bstrOperationName,varReserved,ppOperation) )
    ( (This)->lpVtbl -> CreateOperation(This,bstrOperationName,varReserved,ppOperation) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrOperationName,varReserved) )
    ( (This)->lpVtbl -> get_Tasks(This,ppTaskCollection) )
    ( (This)->lpVtbl -> OpenTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> CreateTask(This,bstrTaskName,varReserved,ppTask) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTaskName,varReserved) )
    ( (This)->lpVtbl -> get_ApplicationGroups(This,ppGroupCollection) )
    ( (This)->lpVtbl -> OpenApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> CreateApplicationGroup(This,bstrGroupName,varReserved,ppGroup) )
    ( (This)->lpVtbl -> DeleteApplicationGroup(This,bstrGroupName,varReserved) )
    ( (This)->lpVtbl -> get_Roles(This,ppRoleCollection) )
    ( (This)->lpVtbl -> OpenRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> CreateRole(This,bstrRoleName,varReserved,ppRole) )
    ( (This)->lpVtbl -> DeleteRole(This,bstrRoleName,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromToken(This,ullTokenHandle,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromName(This,ClientName,DomainName,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsers(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUser(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromStringSid(This,SidString,lOptions,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> get_PolicyAdministratorsName(This,pvarAdmins) )
    ( (This)->lpVtbl -> get_PolicyReadersName(This,pvarReaders) )
    ( (This)->lpVtbl -> AddPolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyAdministratorName(This,bstrAdmin,varReserved) )
    ( (This)->lpVtbl -> AddPolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> DeletePolicyReaderName(This,bstrReader,varReserved) )
    ( (This)->lpVtbl -> get_DelegatedPolicyUsersName(This,pvarDelegatedPolicyUsers) )
    ( (This)->lpVtbl -> AddDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> DeleteDelegatedPolicyUserName(This,bstrDelegatedPolicyUser,varReserved) )
    ( (This)->lpVtbl -> InitializeClientContextFromToken2(This,ulTokenHandleLowPart,ulTokenHandleHighPart,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> InitializeClientContext2(This,IdentifyingString,varReserved,ppClientContext) )
    ( (This)->lpVtbl -> ScopeExists(This,bstrScopeName,pbExist) )
    ( (This)->lpVtbl -> OpenScope2(This,bstrScopeName,ppScope2) )
    ( (This)->lpVtbl -> CreateScope2(This,bstrScopeName,ppScope2) )
    ( (This)->lpVtbl -> DeleteScope2(This,bstrScopeName) )
    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
    ( (This)->lpVtbl -> CreateRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
    ( (This)->lpVtbl -> OpenRoleDefinition(This,bstrRoleDefinitionName,ppRoleDefinitions) )
    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinitionName) )
    ( (This)->lpVtbl -> get_RoleAssignments(This,ppRoleAssignments) )
    ( (This)->lpVtbl -> CreateRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
    ( (This)->lpVtbl -> OpenRoleAssignment(This,bstrRoleAssignmentName,ppRoleAssignment) )
    ( (This)->lpVtbl -> DeleteRoleAssignment(This,bstrRoleAssignmentName) )
    ( (This)->lpVtbl -> get_BizRulesEnabled(This,pbEnabled) )
    ( (This)->lpVtbl -> put_BizRulesEnabled(This,bEnabled) )
EXTERN_C const IID IID_IAzOperation2;
    typedef struct IAzOperation2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzOperation2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzOperation2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzOperation2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzOperation2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzOperation2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzOperation2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzOperation2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzOperation2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzOperation2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzOperation2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzOperation2 * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzOperation2 * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzOperation2 * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_OperationID )(
            __RPC__in IAzOperation2 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_OperationID )(
            __RPC__in IAzOperation2 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzOperation2 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzOperation2 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzOperation2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzOperation2 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *RoleAssignments )(
            __RPC__in IAzOperation2 * This,
                       __RPC__in BSTR bstrScopeName,
                       VARIANT_BOOL bRecursive,
                                __RPC__deref_out_opt IAzRoleAssignments **ppRoleAssignments);
        END_INTERFACE
    } IAzOperation2Vtbl;
    interface IAzOperation2
    {
        CONST_VTBL struct IAzOperation2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_OperationID(This,plProp) )
    ( (This)->lpVtbl -> put_OperationID(This,lProp) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
EXTERN_C const IID IID_IAzRoleDefinitions;
    typedef struct IAzRoleDefinitionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzRoleDefinitions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzRoleDefinitions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzRoleDefinitions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzRoleDefinitions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzRoleDefinitions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzRoleDefinitions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzRoleDefinitions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzRoleDefinitions * This,
                       LONG Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzRoleDefinitions * This,
                                __RPC__out LONG *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzRoleDefinitions * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzRoleDefinitionsVtbl;
    interface IAzRoleDefinitions
    {
        CONST_VTBL struct IAzRoleDefinitionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzRoleDefinition;
    typedef struct IAzRoleDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzRoleDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzRoleDefinition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzRoleDefinition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzRoleDefinition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzRoleDefinition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRule )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRule )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleLanguage )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleLanguage )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleImportedPath )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleImportedPath )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_IsRoleDefinition )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__out BOOL *pfProp);
                        HRESULT ( STDMETHODCALLTYPE *put_IsRoleDefinition )(
            __RPC__in IAzRoleDefinition * This,
                       BOOL fProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *AddOperation )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrOp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrOp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddTask )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrTask,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrTask,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzRoleDefinition * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzRoleDefinition * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzRoleDefinition * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzRoleDefinition * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzRoleDefinition * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *RoleAssignments )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrScopeName,
                       VARIANT_BOOL bRecursive,
                                __RPC__deref_out_opt IAzRoleAssignments **ppRoleAssignments);
        HRESULT ( STDMETHODCALLTYPE *AddRoleDefinition )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrRoleDefinition);
        HRESULT ( STDMETHODCALLTYPE *DeleteRoleDefinition )(
            __RPC__in IAzRoleDefinition * This,
                       __RPC__in BSTR bstrRoleDefinition);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleDefinitions )(
            __RPC__in IAzRoleDefinition * This,
                                __RPC__deref_out_opt IAzRoleDefinitions **ppRoleDefinitions);
        END_INTERFACE
    } IAzRoleDefinitionVtbl;
    interface IAzRoleDefinition
    {
        CONST_VTBL struct IAzRoleDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
    ( (This)->lpVtbl -> get_IsRoleDefinition(This,pfProp) )
    ( (This)->lpVtbl -> put_IsRoleDefinition(This,fProp) )
    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
    ( (This)->lpVtbl -> AddOperation(This,bstrOp,varReserved) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrOp,varReserved) )
    ( (This)->lpVtbl -> AddTask(This,bstrTask,varReserved) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTask,varReserved) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
    ( (This)->lpVtbl -> AddRoleDefinition(This,bstrRoleDefinition) )
    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinition) )
    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
EXTERN_C const IID IID_IAzRoleAssignment;
    typedef struct IAzRoleAssignmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzRoleAssignment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzRoleAssignment * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzRoleAssignment * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzRoleAssignment * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzRoleAssignment * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrApplicationData);
        HRESULT ( STDMETHODCALLTYPE *AddAppMember )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteAppMember )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddTask )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddOperation )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMember )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMember )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzRoleAssignment * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzRoleAssignment * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_AppMembers )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzRoleAssignment * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzRoleAssignment * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzRoleAssignment * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMemberName )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMemberName )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_MembersName )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *AddRoleDefinition )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrRoleDefinition);
        HRESULT ( STDMETHODCALLTYPE *DeleteRoleDefinition )(
            __RPC__in IAzRoleAssignment * This,
                       __RPC__in BSTR bstrRoleDefinition);
                        HRESULT ( STDMETHODCALLTYPE *get_RoleDefinitions )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__deref_out_opt IAzRoleDefinitions **ppRoleDefinitions);
                        HRESULT ( STDMETHODCALLTYPE *get_Scope )(
            __RPC__in IAzRoleAssignment * This,
                                __RPC__deref_out_opt IAzScope **ppScope);
        END_INTERFACE
    } IAzRoleAssignmentVtbl;
    interface IAzRoleAssignment
    {
        CONST_VTBL struct IAzRoleAssignmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddTask(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddOperation(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
    ( (This)->lpVtbl -> AddRoleDefinition(This,bstrRoleDefinition) )
    ( (This)->lpVtbl -> DeleteRoleDefinition(This,bstrRoleDefinition) )
    ( (This)->lpVtbl -> get_RoleDefinitions(This,ppRoleDefinitions) )
    ( (This)->lpVtbl -> get_Scope(This,ppScope) )
EXTERN_C const IID IID_IAzRoleAssignments;
    typedef struct IAzRoleAssignmentsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzRoleAssignments * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzRoleAssignments * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzRoleAssignments * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzRoleAssignments * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzRoleAssignments * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzRoleAssignments * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzRoleAssignments * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAzRoleAssignments * This,
                       LONG Index,
                                __RPC__out VARIANT *pvarObtPtr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAzRoleAssignments * This,
                                __RPC__out LONG *plCount);
                            HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAzRoleAssignments * This,
                                __RPC__deref_out_opt LPUNKNOWN *ppEnumPtr);
        END_INTERFACE
    } IAzRoleAssignmentsVtbl;
    interface IAzRoleAssignments
    {
        CONST_VTBL struct IAzRoleAssignmentsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Item(This,Index,pvarObtPtr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumPtr) )
EXTERN_C const IID IID_IAzPrincipalLocator;
    typedef struct IAzPrincipalLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzPrincipalLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzPrincipalLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzPrincipalLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzPrincipalLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzPrincipalLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzPrincipalLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzPrincipalLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_NameResolver )(
            __RPC__in IAzPrincipalLocator * This,
                                __RPC__deref_out_opt IAzNameResolver **ppNameResolver);
                        HRESULT ( STDMETHODCALLTYPE *get_ObjectPicker )(
            __RPC__in IAzPrincipalLocator * This,
                                __RPC__deref_out_opt IAzObjectPicker **ppObjectPicker);
        END_INTERFACE
    } IAzPrincipalLocatorVtbl;
    interface IAzPrincipalLocator
    {
        CONST_VTBL struct IAzPrincipalLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_NameResolver(This,ppNameResolver) )
    ( (This)->lpVtbl -> get_ObjectPicker(This,ppObjectPicker) )
EXTERN_C const IID IID_IAzNameResolver;
    typedef struct IAzNameResolverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzNameResolver * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzNameResolver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzNameResolver * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzNameResolver * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzNameResolver * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzNameResolver * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzNameResolver * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *NameFromSid )(
            __RPC__in IAzNameResolver * This,
                       __RPC__in BSTR bstrSid,
                        __RPC__out long *pSidType,
                                __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *NamesFromSids )(
            __RPC__in IAzNameResolver * This,
                       VARIANT vSids,
                        __RPC__out VARIANT *pvSidTypes,
                                __RPC__out VARIANT *pvNames);
        END_INTERFACE
    } IAzNameResolverVtbl;
    interface IAzNameResolver
    {
        CONST_VTBL struct IAzNameResolverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> NameFromSid(This,bstrSid,pSidType,pbstrName) )
    ( (This)->lpVtbl -> NamesFromSids(This,vSids,pvSidTypes,pvNames) )
EXTERN_C const IID IID_IAzObjectPicker;
    typedef struct IAzObjectPickerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzObjectPicker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzObjectPicker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzObjectPicker * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzObjectPicker * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzObjectPicker * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzObjectPicker * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzObjectPicker * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *GetPrincipals )(
            __RPC__in IAzObjectPicker * This,
                       __RPC__in HWND hParentWnd,
                       __RPC__in BSTR bstrTitle,
                        __RPC__out VARIANT *pvSidTypes,
                        __RPC__out VARIANT *pvNames,
                                __RPC__out VARIANT *pvSids);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzObjectPicker * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
        END_INTERFACE
    } IAzObjectPickerVtbl;
    interface IAzObjectPicker
    {
        CONST_VTBL struct IAzObjectPickerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetPrincipals(This,hParentWnd,bstrTitle,pvSidTypes,pvNames,pvSids) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
EXTERN_C const IID IID_IAzApplicationGroup2;
    typedef struct IAzApplicationGroup2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzApplicationGroup2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzApplicationGroup2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzApplicationGroup2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzApplicationGroup2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzApplicationGroup2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out LONG *plProp);
                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IAzApplicationGroup2 * This,
                       LONG lProp);
                        HRESULT ( STDMETHODCALLTYPE *get_LdapQuery )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_LdapQuery )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_AppMembers )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_AppNonMembers )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Members )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_NonMembers )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrDescription);
        HRESULT ( STDMETHODCALLTYPE *AddAppMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteAppMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddAppNonMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteAppNonMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddNonMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteNonMember )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzApplicationGroup2 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzApplicationGroup2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzApplicationGroup2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzApplicationGroup2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzApplicationGroup2 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddMemberName )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteMemberName )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddNonMemberName )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteNonMemberName )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_MembersName )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_NonMembersName )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRule )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRule )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleLanguage )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleLanguage )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleImportedPath )(
            __RPC__in IAzApplicationGroup2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleImportedPath )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrProp);
        HRESULT ( STDMETHODCALLTYPE *RoleAssignments )(
            __RPC__in IAzApplicationGroup2 * This,
                       __RPC__in BSTR bstrScopeName,
                       VARIANT_BOOL bRecursive,
                                __RPC__deref_out_opt IAzRoleAssignments **ppRoleAssignments);
        END_INTERFACE
    } IAzApplicationGroup2Vtbl;
    interface IAzApplicationGroup2
    {
        CONST_VTBL struct IAzApplicationGroup2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Type(This,plProp) )
    ( (This)->lpVtbl -> put_Type(This,lProp) )
    ( (This)->lpVtbl -> get_LdapQuery(This,pbstrProp) )
    ( (This)->lpVtbl -> put_LdapQuery(This,bstrProp) )
    ( (This)->lpVtbl -> get_AppMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_AppNonMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_Members(This,pvarProp) )
    ( (This)->lpVtbl -> get_NonMembers(This,pvarProp) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> AddAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteAppMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddAppNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteAppNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteNonMember(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> AddMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> AddNonMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> DeleteNonMemberName(This,bstrProp,varReserved) )
    ( (This)->lpVtbl -> get_MembersName(This,pvarProp) )
    ( (This)->lpVtbl -> get_NonMembersName(This,pvarProp) )
    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
EXTERN_C const IID IID_IAzTask2;
    typedef struct IAzTask2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAzTask2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAzTask2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAzTask2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAzTask2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAzTask2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAzTask2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAzTask2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAzTask2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_Name )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IAzTask2 * This,
                                __RPC__deref_out_opt BSTR *pbstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrDescription);
                        HRESULT ( STDMETHODCALLTYPE *get_ApplicationData )(
            __RPC__in IAzTask2 * This,
                                __RPC__deref_out_opt BSTR *pbstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *put_ApplicationData )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrApplicationData);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRule )(
            __RPC__in IAzTask2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRule )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleLanguage )(
            __RPC__in IAzTask2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleLanguage )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_BizRuleImportedPath )(
            __RPC__in IAzTask2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProp);
                        HRESULT ( STDMETHODCALLTYPE *put_BizRuleImportedPath )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrProp);
                        HRESULT ( STDMETHODCALLTYPE *get_IsRoleDefinition )(
            __RPC__in IAzTask2 * This,
                                __RPC__out BOOL *pfProp);
                        HRESULT ( STDMETHODCALLTYPE *put_IsRoleDefinition )(
            __RPC__in IAzTask2 * This,
                       BOOL fProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Operations )(
            __RPC__in IAzTask2 * This,
                                __RPC__out VARIANT *pvarProp);
                        HRESULT ( STDMETHODCALLTYPE *get_Tasks )(
            __RPC__in IAzTask2 * This,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *AddOperation )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrOp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteOperation )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrOp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddTask )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrTask,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeleteTask )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrTask,
                                 VARIANT varReserved);
                        HRESULT ( STDMETHODCALLTYPE *get_Writable )(
            __RPC__in IAzTask2 * This,
                                __RPC__out BOOL *pfProp);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IAzTask2 * This,
                       LONG lPropId,
                                 VARIANT varReserved,
                                __RPC__out VARIANT *pvarProp);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IAzTask2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *AddPropertyItem )(
            __RPC__in IAzTask2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *DeletePropertyItem )(
            __RPC__in IAzTask2 * This,
                       LONG lPropId,
                       VARIANT varProp,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in IAzTask2 * This,
                                     LONG lFlags,
                                 VARIANT varReserved);
        HRESULT ( STDMETHODCALLTYPE *RoleAssignments )(
            __RPC__in IAzTask2 * This,
                       __RPC__in BSTR bstrScopeName,
                       VARIANT_BOOL bRecursive,
                                __RPC__deref_out_opt IAzRoleAssignments **ppRoleAssignments);
        END_INTERFACE
    } IAzTask2Vtbl;
    interface IAzTask2
    {
        CONST_VTBL struct IAzTask2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> put_Name(This,bstrName) )
    ( (This)->lpVtbl -> get_Description(This,pbstrDescription) )
    ( (This)->lpVtbl -> put_Description(This,bstrDescription) )
    ( (This)->lpVtbl -> get_ApplicationData(This,pbstrApplicationData) )
    ( (This)->lpVtbl -> put_ApplicationData(This,bstrApplicationData) )
    ( (This)->lpVtbl -> get_BizRule(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRule(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleLanguage(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleLanguage(This,bstrProp) )
    ( (This)->lpVtbl -> get_BizRuleImportedPath(This,pbstrProp) )
    ( (This)->lpVtbl -> put_BizRuleImportedPath(This,bstrProp) )
    ( (This)->lpVtbl -> get_IsRoleDefinition(This,pfProp) )
    ( (This)->lpVtbl -> put_IsRoleDefinition(This,fProp) )
    ( (This)->lpVtbl -> get_Operations(This,pvarProp) )
    ( (This)->lpVtbl -> get_Tasks(This,pvarProp) )
    ( (This)->lpVtbl -> AddOperation(This,bstrOp,varReserved) )
    ( (This)->lpVtbl -> DeleteOperation(This,bstrOp,varReserved) )
    ( (This)->lpVtbl -> AddTask(This,bstrTask,varReserved) )
    ( (This)->lpVtbl -> DeleteTask(This,bstrTask,varReserved) )
    ( (This)->lpVtbl -> get_Writable(This,pfProp) )
    ( (This)->lpVtbl -> GetProperty(This,lPropId,varReserved,pvarProp) )
    ( (This)->lpVtbl -> SetProperty(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> AddPropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> DeletePropertyItem(This,lPropId,varProp,varReserved) )
    ( (This)->lpVtbl -> Submit(This,lFlags,varReserved) )
    ( (This)->lpVtbl -> RoleAssignments(This,bstrScopeName,bRecursive,ppRoleAssignments) )
typedef
enum tagAZ_PROP_CONSTANTS
    {
        AZ_PROP_NAME = 1,
        AZ_PROP_DESCRIPTION = 2,
        AZ_PROP_WRITABLE = 3,
        AZ_PROP_APPLICATION_DATA = 4,
        AZ_PROP_CHILD_CREATE = 5,
        AZ_MAX_APPLICATION_NAME_LENGTH = 512,
        AZ_MAX_OPERATION_NAME_LENGTH = 64,
        AZ_MAX_TASK_NAME_LENGTH = 64,
        AZ_MAX_SCOPE_NAME_LENGTH = 65536,
        AZ_MAX_GROUP_NAME_LENGTH = 64,
        AZ_MAX_ROLE_NAME_LENGTH = 64,
        AZ_MAX_NAME_LENGTH = 65536,
        AZ_MAX_DESCRIPTION_LENGTH = 1024,
        AZ_MAX_APPLICATION_DATA_LENGTH = 4096,
        AZ_SUBMIT_FLAG_ABORT = 0x1,
        AZ_SUBMIT_FLAG_FLUSH = 0x2,
        AZ_MAX_POLICY_URL_LENGTH = 65536,
        AZ_AZSTORE_FLAG_CREATE = 0x1,
        AZ_AZSTORE_FLAG_MANAGE_STORE_ONLY = 0x2,
        AZ_AZSTORE_FLAG_BATCH_UPDATE = 0x4,
        AZ_AZSTORE_FLAG_AUDIT_IS_CRITICAL = 0x8,
        AZ_AZSTORE_FORCE_APPLICATION_CLOSE = 0x10,
        AZ_AZSTORE_NT6_FUNCTION_LEVEL = 0x20,
        AZ_AZSTORE_FLAG_MANAGE_ONLY_PASSIVE_SUBMIT = 0x8000,
        AZ_PROP_AZSTORE_DOMAIN_TIMEOUT = 100,
        AZ_AZSTORE_DEFAULT_DOMAIN_TIMEOUT = ( 15 * 1000 ) ,
        AZ_PROP_AZSTORE_SCRIPT_ENGINE_TIMEOUT = 101,
        AZ_AZSTORE_MIN_DOMAIN_TIMEOUT = 500,
        AZ_AZSTORE_MIN_SCRIPT_ENGINE_TIMEOUT = ( 5 * 1000 ) ,
        AZ_AZSTORE_DEFAULT_SCRIPT_ENGINE_TIMEOUT = ( 45 * 1000 ) ,
        AZ_PROP_AZSTORE_MAX_SCRIPT_ENGINES = 102,
        AZ_AZSTORE_DEFAULT_MAX_SCRIPT_ENGINES = 120,
        AZ_PROP_AZSTORE_MAJOR_VERSION = 103,
        AZ_PROP_AZSTORE_MINOR_VERSION = 104,
        AZ_PROP_AZSTORE_TARGET_MACHINE = 105,
        AZ_PROP_AZTORE_IS_ADAM_INSTANCE = 106,
        AZ_PROP_OPERATION_ID = 200,
        AZ_PROP_TASK_OPERATIONS = 300,
        AZ_PROP_TASK_BIZRULE = 301,
        AZ_PROP_TASK_BIZRULE_LANGUAGE = 302,
        AZ_PROP_TASK_TASKS = 303,
        AZ_PROP_TASK_BIZRULE_IMPORTED_PATH = 304,
        AZ_PROP_TASK_IS_ROLE_DEFINITION = 305,
        AZ_MAX_TASK_BIZRULE_LENGTH = 65536,
        AZ_MAX_TASK_BIZRULE_LANGUAGE_LENGTH = 64,
        AZ_MAX_TASK_BIZRULE_IMPORTED_PATH_LENGTH = 512,
        AZ_MAX_BIZRULE_STRING = 65536,
        AZ_PROP_GROUP_TYPE = 400,
        AZ_GROUPTYPE_LDAP_QUERY = 1,
        AZ_GROUPTYPE_BASIC = 2,
        AZ_GROUPTYPE_BIZRULE = 3,
        AZ_PROP_GROUP_APP_MEMBERS = 401,
        AZ_PROP_GROUP_APP_NON_MEMBERS = 402,
        AZ_PROP_GROUP_LDAP_QUERY = 403,
        AZ_MAX_GROUP_LDAP_QUERY_LENGTH = 4096,
        AZ_PROP_GROUP_MEMBERS = 404,
        AZ_PROP_GROUP_NON_MEMBERS = 405,
        AZ_PROP_GROUP_MEMBERS_NAME = 406,
        AZ_PROP_GROUP_NON_MEMBERS_NAME = 407,
        AZ_PROP_GROUP_BIZRULE = 408,
        AZ_PROP_GROUP_BIZRULE_LANGUAGE = 409,
        AZ_PROP_GROUP_BIZRULE_IMPORTED_PATH = 410,
        AZ_MAX_GROUP_BIZRULE_LENGTH = 65536,
        AZ_MAX_GROUP_BIZRULE_LANGUAGE_LENGTH = 64,
        AZ_MAX_GROUP_BIZRULE_IMPORTED_PATH_LENGTH = 512,
        AZ_PROP_ROLE_APP_MEMBERS = 500,
        AZ_PROP_ROLE_MEMBERS = 501,
        AZ_PROP_ROLE_OPERATIONS = 502,
        AZ_PROP_ROLE_TASKS = 504,
        AZ_PROP_ROLE_MEMBERS_NAME = 505,
        AZ_PROP_SCOPE_BIZRULES_WRITABLE = 600,
        AZ_PROP_SCOPE_CAN_BE_DELEGATED = 601,
        AZ_PROP_CLIENT_CONTEXT_USER_DN = 700,
        AZ_PROP_CLIENT_CONTEXT_USER_SAM_COMPAT = 701,
        AZ_PROP_CLIENT_CONTEXT_USER_DISPLAY = 702,
        AZ_PROP_CLIENT_CONTEXT_USER_GUID = 703,
        AZ_PROP_CLIENT_CONTEXT_USER_CANONICAL = 704,
        AZ_PROP_CLIENT_CONTEXT_USER_UPN = 705,
        AZ_PROP_CLIENT_CONTEXT_USER_DNS_SAM_COMPAT = 707,
        AZ_PROP_CLIENT_CONTEXT_ROLE_FOR_ACCESS_CHECK = 708,
        AZ_PROP_CLIENT_CONTEXT_LDAP_QUERY_DN = 709,
        AZ_PROP_APPLICATION_AUTHZ_INTERFACE_CLSID = 800,
        AZ_PROP_APPLICATION_VERSION = 801,
        AZ_MAX_APPLICATION_VERSION_LENGTH = 512,
        AZ_PROP_APPLICATION_NAME = 802,
        AZ_PROP_APPLICATION_BIZRULE_ENABLED = 803,
        AZ_PROP_APPLY_STORE_SACL = 900,
        AZ_PROP_GENERATE_AUDITS = 901,
        AZ_PROP_POLICY_ADMINS = 902,
        AZ_PROP_POLICY_READERS = 903,
        AZ_PROP_DELEGATED_POLICY_USERS = 904,
        AZ_PROP_POLICY_ADMINS_NAME = 905,
        AZ_PROP_POLICY_READERS_NAME = 906,
        AZ_PROP_DELEGATED_POLICY_USERS_NAME = 907,
        AZ_CLIENT_CONTEXT_SKIP_GROUP = 1,
        AZ_CLIENT_CONTEXT_SKIP_LDAP_QUERY = 1,
        AZ_CLIENT_CONTEXT_GET_GROUP_RECURSIVE = 2,
        AZ_CLIENT_CONTEXT_GET_GROUPS_STORE_LEVEL_ONLY = 2
    } AZ_PROP_CONSTANTS;
EXTERN_C const IID LIBID_AZROLESLib;
EXTERN_C const CLSID CLSID_AzAuthorizationStore;
class DECLSPEC_UUID("b2bcff59-a757-4b0b-a1bc-ea69981da69e")
AzAuthorizationStore;
EXTERN_C const CLSID CLSID_AzBizRuleContext;
class DECLSPEC_UUID("5c2dc96f-8d51-434b-b33c-379bccae77c3")
AzBizRuleContext;
EXTERN_C const CLSID CLSID_AzPrincipalLocator;
class DECLSPEC_UUID("483afb5d-70df-4e16-abdc-a1de4d015a3e")
AzPrincipalLocator;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_azroles_0000_0035_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
