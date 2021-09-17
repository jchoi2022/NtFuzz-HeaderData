#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IItemEnumerator IItemEnumerator;
typedef interface ISettingsIdentity ISettingsIdentity;
typedef interface ITargetInfo ITargetInfo;
typedef interface ISettingsEngine ISettingsEngine;
typedef interface ISettingsItem ISettingsItem;
typedef interface ISettingsNamespace ISettingsNamespace;
typedef interface ISettingsResult ISettingsResult;
typedef interface ISettingsContext ISettingsContext;
typedef class SettingsEngine SettingsEngine;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0001
    {
        OfflineMode = 1,
        OnlineMode = 2
    } WcmTargetMode;
typedef
enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0002
    {
        SharedEnumeration = 1,
        UserEnumeration = 2,
        AllEnumeration = ( SharedEnumeration | UserEnumeration )
    } WcmNamespaceEnumerationFlags;
typedef
enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0003
    {
        dataTypeByte = 1,
        dataTypeSByte = 2,
        dataTypeUInt16 = 3,
        dataTypeInt16 = 4,
        dataTypeUInt32 = 5,
        dataTypeInt32 = 6,
        dataTypeUInt64 = 7,
        dataTypeInt64 = 8,
        dataTypeBoolean = 11,
        dataTypeString = 12,
        dataTypeFlagArray = 0x8000
    } WcmDataType;
typedef
enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0004
    {
        settingTypeScalar = 1,
        settingTypeComplex = 2,
        settingTypeList = 3
    } WcmSettingType;
typedef
enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0005
    {
        restrictionFacetMaxLength = 0x1,
        restrictionFacetEnumeration = 0x2,
        restrictionFacetMaxInclusive = 0x4,
        restrictionFacetMinInclusive = 0x8
    } WcmRestrictionFacets;
typedef
enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0006
    {
        UnknownStatus = 0,
        UserRegistered = 1,
        UserUnregistered = 2,
        UserLoaded = 3,
        UserUnloaded = 4
    } WcmUserStatus;
typedef
enum __MIDL___MIDL_itf_wcmconfig_0000_0000_0007
    {
        ReadOnlyAccess = 1,
        ReadWriteAccess = 2
    } WcmNamespaceAccess;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IItemEnumerator;
    typedef struct IItemEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IItemEnumerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IItemEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IItemEnumerator * This);
                           HRESULT ( STDMETHODCALLTYPE *Current )(
            IItemEnumerator * This,
                                VARIANT *Item);
                           HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            IItemEnumerator * This,
                                BOOL *ItemValid);
                           HRESULT ( STDMETHODCALLTYPE *Reset )(
            IItemEnumerator * This);
        END_INTERFACE
    } IItemEnumeratorVtbl;
    interface IItemEnumerator
    {
        CONST_VTBL struct IItemEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Current(This,Item) )
    ( (This)->lpVtbl -> MoveNext(This,ItemValid) )
    ( (This)->lpVtbl -> Reset(This) )
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ISettingsIdentity;
    typedef struct ISettingsIdentityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISettingsIdentity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISettingsIdentity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISettingsIdentity * This);
                           HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
            ISettingsIdentity * This,
                       void *Reserved,
                               const WCHAR *Name,
                                BSTR *Value);
                           HRESULT ( STDMETHODCALLTYPE *SetAttribute )(
            ISettingsIdentity * This,
                       void *Reserved,
                               const WCHAR *Name,
                               const WCHAR *Value);
                           HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            ISettingsIdentity * This,
                                DWORD *Flags);
                           HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            ISettingsIdentity * This,
                       DWORD Flags);
        END_INTERFACE
    } ISettingsIdentityVtbl;
    interface ISettingsIdentity
    {
        CONST_VTBL struct ISettingsIdentityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAttribute(This,Reserved,Name,Value) )
    ( (This)->lpVtbl -> SetAttribute(This,Reserved,Name,Value) )
    ( (This)->lpVtbl -> GetFlags(This,Flags) )
    ( (This)->lpVtbl -> SetFlags(This,Flags) )
EXTERN_C const IID IID_ITargetInfo;
    typedef struct ITargetInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITargetInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITargetInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITargetInfo * This);
                           HRESULT ( STDMETHODCALLTYPE *GetTargetMode )(
            ITargetInfo * This,
                                WcmTargetMode *TargetMode);
                           HRESULT ( STDMETHODCALLTYPE *SetTargetMode )(
            ITargetInfo * This,
                       WcmTargetMode TargetMode);
                           HRESULT ( STDMETHODCALLTYPE *GetTemporaryStoreLocation )(
            ITargetInfo * This,
                                BSTR *TemporaryStoreLocation);
                           HRESULT ( STDMETHODCALLTYPE *SetTemporaryStoreLocation )(
            ITargetInfo * This,
                               const WCHAR *TemporaryStoreLocation);
                           HRESULT ( STDMETHODCALLTYPE *GetTargetID )(
            ITargetInfo * This,
                                BSTR *TargetID);
                           HRESULT ( STDMETHODCALLTYPE *SetTargetID )(
            ITargetInfo * This,
                       GUID TargetID);
                           HRESULT ( STDMETHODCALLTYPE *GetTargetProcessorArchitecture )(
            ITargetInfo * This,
                                BSTR *ProcessorArchitecture);
                           HRESULT ( STDMETHODCALLTYPE *SetTargetProcessorArchitecture )(
            ITargetInfo * This,
                               const WCHAR *ProcessorArchitecture);
                           HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            ITargetInfo * This,
                       BOOL Offline,
                               const WCHAR *Property,
                                BSTR *Value);
                           HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            ITargetInfo * This,
                       BOOL Offline,
                               const WCHAR *Property,
                               const WCHAR *Value);
                           HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            ITargetInfo * This,
                                IItemEnumerator **Enumerator);
                           HRESULT ( STDMETHODCALLTYPE *ExpandTarget )(
            ITargetInfo * This,
                       BOOL Offline,
                               const WCHAR *Location,
                                BSTR *ExpandedLocation);
                           HRESULT ( STDMETHODCALLTYPE *ExpandTargetPath )(
            ITargetInfo * This,
                       BOOL Offline,
                               const WCHAR *Location,
                                BSTR *ExpandedLocation);
                           HRESULT ( STDMETHODCALLTYPE *SetModulePath )(
            ITargetInfo * This,
                               const WCHAR *Module,
                               const WCHAR *Path);
                           HRESULT ( STDMETHODCALLTYPE *LoadModule )(
            ITargetInfo * This,
                               const WCHAR *Module,
                                HMODULE *ModuleHandle);
                           HRESULT ( STDMETHODCALLTYPE *SetWow64Context )(
            ITargetInfo * This,
                               const WCHAR *InstallerModule,
                       BYTE *Wow64Context);
                           HRESULT ( STDMETHODCALLTYPE *TranslateWow64 )(
            ITargetInfo * This,
                               const WCHAR *ClientArchitecture,
                               const WCHAR *Value,
                                BSTR *TranslatedValue);
                           HRESULT ( STDMETHODCALLTYPE *SetSchemaHiveLocation )(
            ITargetInfo * This,
                       LPCWSTR pwzHiveDir);
                           HRESULT ( STDMETHODCALLTYPE *GetSchemaHiveLocation )(
            ITargetInfo * This,
                                BSTR *pHiveLocation);
                           HRESULT ( STDMETHODCALLTYPE *SetSchemaHiveMountName )(
            ITargetInfo * This,
                       LPCWSTR pwzMountName);
                           HRESULT ( STDMETHODCALLTYPE *GetSchemaHiveMountName )(
            ITargetInfo * This,
                                BSTR *pMountName);
        END_INTERFACE
    } ITargetInfoVtbl;
    interface ITargetInfo
    {
        CONST_VTBL struct ITargetInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTargetMode(This,TargetMode) )
    ( (This)->lpVtbl -> SetTargetMode(This,TargetMode) )
    ( (This)->lpVtbl -> GetTemporaryStoreLocation(This,TemporaryStoreLocation) )
    ( (This)->lpVtbl -> SetTemporaryStoreLocation(This,TemporaryStoreLocation) )
    ( (This)->lpVtbl -> GetTargetID(This,TargetID) )
    ( (This)->lpVtbl -> SetTargetID(This,TargetID) )
    ( (This)->lpVtbl -> GetTargetProcessorArchitecture(This,ProcessorArchitecture) )
    ( (This)->lpVtbl -> SetTargetProcessorArchitecture(This,ProcessorArchitecture) )
    ( (This)->lpVtbl -> GetProperty(This,Offline,Property,Value) )
    ( (This)->lpVtbl -> SetProperty(This,Offline,Property,Value) )
    ( (This)->lpVtbl -> GetEnumerator(This,Enumerator) )
    ( (This)->lpVtbl -> ExpandTarget(This,Offline,Location,ExpandedLocation) )
    ( (This)->lpVtbl -> ExpandTargetPath(This,Offline,Location,ExpandedLocation) )
    ( (This)->lpVtbl -> SetModulePath(This,Module,Path) )
    ( (This)->lpVtbl -> LoadModule(This,Module,ModuleHandle) )
    ( (This)->lpVtbl -> SetWow64Context(This,InstallerModule,Wow64Context) )
    ( (This)->lpVtbl -> TranslateWow64(This,ClientArchitecture,Value,TranslatedValue) )
    ( (This)->lpVtbl -> SetSchemaHiveLocation(This,pwzHiveDir) )
    ( (This)->lpVtbl -> GetSchemaHiveLocation(This,pHiveLocation) )
    ( (This)->lpVtbl -> SetSchemaHiveMountName(This,pwzMountName) )
    ( (This)->lpVtbl -> GetSchemaHiveMountName(This,pMountName) )
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ISettingsEngine;
    typedef struct ISettingsEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISettingsEngine * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISettingsEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISettingsEngine * This);
                           HRESULT ( STDMETHODCALLTYPE *GetNamespaces )(
            ISettingsEngine * This,
                       WcmNamespaceEnumerationFlags Flags,
                       void *Reserved,
                                IItemEnumerator **Namespaces);
                           HRESULT ( STDMETHODCALLTYPE *GetNamespace )(
            ISettingsEngine * This,
                       ISettingsIdentity *SettingsID,
                       WcmNamespaceAccess Access,
                       void *Reserved,
                                ISettingsNamespace **NamespaceItem);
                           HRESULT ( STDMETHODCALLTYPE *GetErrorDescription )(
            ISettingsEngine * This,
                       LONG HResult,
                                BSTR *Message);
                           HRESULT ( STDMETHODCALLTYPE *CreateSettingsIdentity )(
            ISettingsEngine * This,
                                ISettingsIdentity **SettingsID);
                           HRESULT ( STDMETHODCALLTYPE *GetStoreStatus )(
            ISettingsEngine * This,
                       void *Reserved,
                        WcmUserStatus *Status);
                           HRESULT ( STDMETHODCALLTYPE *LoadStore )(
            ISettingsEngine * This,
                       DWORD Flags);
                           HRESULT ( STDMETHODCALLTYPE *UnloadStore )(
            ISettingsEngine * This,
                       void *Reserved);
                           HRESULT ( STDMETHODCALLTYPE *RegisterNamespace )(
            ISettingsEngine * This,
                       ISettingsIdentity *SettingsID,
                       IStream *Stream,
                       BOOL PushSettings,
                                VARIANT *Results);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterNamespace )(
            ISettingsEngine * This,
                       ISettingsIdentity *SettingsID,
                       BOOL RemoveSettings);
                           HRESULT ( STDMETHODCALLTYPE *CreateTargetInfo )(
            ISettingsEngine * This,
                                ITargetInfo **Target);
                           HRESULT ( STDMETHODCALLTYPE *GetTargetInfo )(
            ISettingsEngine * This,
                                ITargetInfo **Target);
                           HRESULT ( STDMETHODCALLTYPE *SetTargetInfo )(
            ISettingsEngine * This,
                       ITargetInfo *Target);
                           HRESULT ( STDMETHODCALLTYPE *CreateSettingsContext )(
            ISettingsEngine * This,
                       DWORD Flags,
                       void *Reserved,
                                ISettingsContext **SettingsContext);
                           HRESULT ( STDMETHODCALLTYPE *SetSettingsContext )(
            ISettingsEngine * This,
                       ISettingsContext *SettingsContext);
                           HRESULT ( STDMETHODCALLTYPE *ApplySettingsContext )(
            ISettingsEngine * This,
                       ISettingsContext *SettingsContext,
            _Outptr_result_buffer_(*pcIdentities) LPWSTR **pppwzIdentities,
                                SIZE_T *pcIdentities);
                           HRESULT ( STDMETHODCALLTYPE *GetSettingsContext )(
            ISettingsEngine * This,
                                ISettingsContext **SettingsContext);
        END_INTERFACE
    } ISettingsEngineVtbl;
    interface ISettingsEngine
    {
        CONST_VTBL struct ISettingsEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNamespaces(This,Flags,Reserved,Namespaces) )
    ( (This)->lpVtbl -> GetNamespace(This,SettingsID,Access,Reserved,NamespaceItem) )
    ( (This)->lpVtbl -> GetErrorDescription(This,HResult,Message) )
    ( (This)->lpVtbl -> CreateSettingsIdentity(This,SettingsID) )
    ( (This)->lpVtbl -> GetStoreStatus(This,Reserved,Status) )
    ( (This)->lpVtbl -> LoadStore(This,Flags) )
    ( (This)->lpVtbl -> UnloadStore(This,Reserved) )
    ( (This)->lpVtbl -> RegisterNamespace(This,SettingsID,Stream,PushSettings,Results) )
    ( (This)->lpVtbl -> UnregisterNamespace(This,SettingsID,RemoveSettings) )
    ( (This)->lpVtbl -> CreateTargetInfo(This,Target) )
    ( (This)->lpVtbl -> GetTargetInfo(This,Target) )
    ( (This)->lpVtbl -> SetTargetInfo(This,Target) )
    ( (This)->lpVtbl -> CreateSettingsContext(This,Flags,Reserved,SettingsContext) )
    ( (This)->lpVtbl -> SetSettingsContext(This,SettingsContext) )
    ( (This)->lpVtbl -> ApplySettingsContext(This,SettingsContext,pppwzIdentities,pcIdentities) )
    ( (This)->lpVtbl -> GetSettingsContext(This,SettingsContext) )
EXTERN_C const IID IID_ISettingsItem;
    typedef struct ISettingsItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISettingsItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISettingsItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISettingsItem * This);
                           HRESULT ( STDMETHODCALLTYPE *GetName )(
            ISettingsItem * This,
                                BSTR *Name);
                           HRESULT ( STDMETHODCALLTYPE *GetValue )(
            ISettingsItem * This,
                                VARIANT *Value);
                           HRESULT ( STDMETHODCALLTYPE *SetValue )(
            ISettingsItem * This,
                       const VARIANT *Value);
                           HRESULT ( STDMETHODCALLTYPE *GetSettingType )(
            ISettingsItem * This,
                                WcmSettingType *Type);
                           HRESULT ( STDMETHODCALLTYPE *GetDataType )(
            ISettingsItem * This,
                                WcmDataType *Type);
        HRESULT ( STDMETHODCALLTYPE *GetValueRaw )(
            ISettingsItem * This,
                                          BYTE **Data,
                                ULONG *DataSize);
        HRESULT ( STDMETHODCALLTYPE *SetValueRaw )(
            ISettingsItem * This,
                       LONG DataType,
                                const BYTE *Data,
                       ULONG DataSize);
                           HRESULT ( STDMETHODCALLTYPE *HasChild )(
            ISettingsItem * This,
                                BOOL *ItemHasChild);
                           HRESULT ( STDMETHODCALLTYPE *Children )(
            ISettingsItem * This,
                                IItemEnumerator **Children);
                           HRESULT ( STDMETHODCALLTYPE *GetChild )(
            ISettingsItem * This,
                               const WCHAR *Name,
                                ISettingsItem **Child);
                           HRESULT ( STDMETHODCALLTYPE *GetSettingByPath )(
            ISettingsItem * This,
                               const WCHAR *Path,
                                ISettingsItem **Setting);
                           HRESULT ( STDMETHODCALLTYPE *CreateSettingByPath )(
            ISettingsItem * This,
                               const WCHAR *Path,
                                ISettingsItem **Setting);
                           HRESULT ( STDMETHODCALLTYPE *RemoveSettingByPath )(
            ISettingsItem * This,
                               const WCHAR *Path);
                           HRESULT ( STDMETHODCALLTYPE *GetListKeyInformation )(
            ISettingsItem * This,
                        BSTR *KeyName,
                                WcmDataType *DataType);
                           HRESULT ( STDMETHODCALLTYPE *CreateListElement )(
            ISettingsItem * This,
                       const VARIANT *KeyData,
                                ISettingsItem **Child);
                           HRESULT ( STDMETHODCALLTYPE *RemoveListElement )(
            ISettingsItem * This,
                               LPCWSTR ElementName);
                           HRESULT ( STDMETHODCALLTYPE *Attributes )(
            ISettingsItem * This,
                                IItemEnumerator **Attributes);
                           HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
            ISettingsItem * This,
                               const WCHAR *Name,
                                VARIANT *Value);
                           HRESULT ( STDMETHODCALLTYPE *GetPath )(
            ISettingsItem * This,
                                BSTR *Path);
                           HRESULT ( STDMETHODCALLTYPE *GetRestrictionFacets )(
            ISettingsItem * This,
                                WcmRestrictionFacets *RestrictionFacets);
                           HRESULT ( STDMETHODCALLTYPE *GetRestriction )(
            ISettingsItem * This,
                       WcmRestrictionFacets RestrictionFacet,
                                VARIANT *FacetData);
                           HRESULT ( STDMETHODCALLTYPE *GetKeyValue )(
            ISettingsItem * This,
                                VARIANT *Value);
        END_INTERFACE
    } ISettingsItemVtbl;
    interface ISettingsItem
    {
        CONST_VTBL struct ISettingsItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,Name) )
    ( (This)->lpVtbl -> GetValue(This,Value) )
    ( (This)->lpVtbl -> SetValue(This,Value) )
    ( (This)->lpVtbl -> GetSettingType(This,Type) )
    ( (This)->lpVtbl -> GetDataType(This,Type) )
    ( (This)->lpVtbl -> GetValueRaw(This,Data,DataSize) )
    ( (This)->lpVtbl -> SetValueRaw(This,DataType,Data,DataSize) )
    ( (This)->lpVtbl -> HasChild(This,ItemHasChild) )
    ( (This)->lpVtbl -> Children(This,Children) )
    ( (This)->lpVtbl -> GetChild(This,Name,Child) )
    ( (This)->lpVtbl -> GetSettingByPath(This,Path,Setting) )
    ( (This)->lpVtbl -> CreateSettingByPath(This,Path,Setting) )
    ( (This)->lpVtbl -> RemoveSettingByPath(This,Path) )
    ( (This)->lpVtbl -> GetListKeyInformation(This,KeyName,DataType) )
    ( (This)->lpVtbl -> CreateListElement(This,KeyData,Child) )
    ( (This)->lpVtbl -> RemoveListElement(This,ElementName) )
    ( (This)->lpVtbl -> Attributes(This,Attributes) )
    ( (This)->lpVtbl -> GetAttribute(This,Name,Value) )
    ( (This)->lpVtbl -> GetPath(This,Path) )
    ( (This)->lpVtbl -> GetRestrictionFacets(This,RestrictionFacets) )
    ( (This)->lpVtbl -> GetRestriction(This,RestrictionFacet,FacetData) )
    ( (This)->lpVtbl -> GetKeyValue(This,Value) )
EXTERN_C const IID IID_ISettingsNamespace;
    typedef struct ISettingsNamespaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISettingsNamespace * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISettingsNamespace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISettingsNamespace * This);
                           HRESULT ( STDMETHODCALLTYPE *GetIdentity )(
            ISettingsNamespace * This,
                                ISettingsIdentity **SettingsID);
                           HRESULT ( STDMETHODCALLTYPE *Settings )(
            ISettingsNamespace * This,
                                IItemEnumerator **Settings);
                           HRESULT ( STDMETHODCALLTYPE *Save )(
            ISettingsNamespace * This,
                       BOOL PushSettings,
                                ISettingsResult **Result);
                           HRESULT ( STDMETHODCALLTYPE *GetSettingByPath )(
            ISettingsNamespace * This,
                               const WCHAR *Path,
                                ISettingsItem **Setting);
                           HRESULT ( STDMETHODCALLTYPE *CreateSettingByPath )(
            ISettingsNamespace * This,
                               const WCHAR *Path,
                                ISettingsItem **Setting);
                           HRESULT ( STDMETHODCALLTYPE *RemoveSettingByPath )(
            ISettingsNamespace * This,
                               const WCHAR *Path);
                           HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
            ISettingsNamespace * This,
                               const WCHAR *Name,
                                VARIANT *Value);
        END_INTERFACE
    } ISettingsNamespaceVtbl;
    interface ISettingsNamespace
    {
        CONST_VTBL struct ISettingsNamespaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdentity(This,SettingsID) )
    ( (This)->lpVtbl -> Settings(This,Settings) )
    ( (This)->lpVtbl -> Save(This,PushSettings,Result) )
    ( (This)->lpVtbl -> GetSettingByPath(This,Path,Setting) )
    ( (This)->lpVtbl -> CreateSettingByPath(This,Path,Setting) )
    ( (This)->lpVtbl -> RemoveSettingByPath(This,Path) )
    ( (This)->lpVtbl -> GetAttribute(This,Name,Value) )
EXTERN_C const IID IID_ISettingsResult;
    typedef struct ISettingsResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISettingsResult * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISettingsResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISettingsResult * This);
                           HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            ISettingsResult * This,
                                BSTR *description);
                           HRESULT ( STDMETHODCALLTYPE *GetErrorCode )(
            ISettingsResult * This,
                                HRESULT *hrOut);
                           HRESULT ( STDMETHODCALLTYPE *GetContextDescription )(
            ISettingsResult * This,
                                BSTR *description);
                           HRESULT ( STDMETHODCALLTYPE *GetLine )(
            ISettingsResult * This,
                                DWORD *dwLine);
                           HRESULT ( STDMETHODCALLTYPE *GetColumn )(
            ISettingsResult * This,
                                DWORD *dwColumn);
                           HRESULT ( STDMETHODCALLTYPE *GetSource )(
            ISettingsResult * This,
                                BSTR *file);
        END_INTERFACE
    } ISettingsResultVtbl;
    interface ISettingsResult
    {
        CONST_VTBL struct ISettingsResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,description) )
    ( (This)->lpVtbl -> GetErrorCode(This,hrOut) )
    ( (This)->lpVtbl -> GetContextDescription(This,description) )
    ( (This)->lpVtbl -> GetLine(This,dwLine) )
    ( (This)->lpVtbl -> GetColumn(This,dwColumn) )
    ( (This)->lpVtbl -> GetSource(This,file) )
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_ISettingsContext;
    typedef struct ISettingsContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISettingsContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISettingsContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISettingsContext * This);
                           HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISettingsContext * This,
                       IStream *pStream,
                       ITargetInfo *pTarget);
                           HRESULT ( STDMETHODCALLTYPE *Deserialize )(
            ISettingsContext * This,
                       IStream *pStream,
                       ITargetInfo *pTarget,
                                          ISettingsResult ***pppResults,
                                SIZE_T *pcResultCount);
                           HRESULT ( STDMETHODCALLTYPE *SetUserData )(
            ISettingsContext * This,
                       void *pUserData);
                           HRESULT ( STDMETHODCALLTYPE *GetUserData )(
            ISettingsContext * This,
                                void **pUserData);
                           HRESULT ( STDMETHODCALLTYPE *GetNamespaces )(
            ISettingsContext * This,
                                IItemEnumerator **ppNamespaceIds);
                           HRESULT ( STDMETHODCALLTYPE *GetStoredSettings )(
            ISettingsContext * This,
                       ISettingsIdentity *pIdentity,
                        IItemEnumerator **ppAddedSettings,
                        IItemEnumerator **ppModifiedSettings,
                        IItemEnumerator **ppDeletedSettings);
                           HRESULT ( STDMETHODCALLTYPE *RevertSetting )(
            ISettingsContext * This,
                       ISettingsIdentity *pIdentity,
                       LPCWSTR pwzSetting);
        END_INTERFACE
    } ISettingsContextVtbl;
    interface ISettingsContext
    {
        CONST_VTBL struct ISettingsContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pStream,pTarget) )
    ( (This)->lpVtbl -> Deserialize(This,pStream,pTarget,pppResults,pcResultCount) )
    ( (This)->lpVtbl -> SetUserData(This,pUserData) )
    ( (This)->lpVtbl -> GetUserData(This,pUserData) )
    ( (This)->lpVtbl -> GetNamespaces(This,ppNamespaceIds) )
    ( (This)->lpVtbl -> GetStoredSettings(This,pIdentity,ppAddedSettings,ppModifiedSettings,ppDeletedSettings) )
    ( (This)->lpVtbl -> RevertSetting(This,pIdentity,pwzSetting) )
EXTERN_C const IID LIBID_Wcm;
EXTERN_C const CLSID CLSID_SettingsEngine;
class DECLSPEC_UUID("9F7D7BB5-20B3-11DA-81A5-0030F1642E3C")
SettingsEngine;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wcmconfig_0000_0009_v0_0_s_ifspec;
}
