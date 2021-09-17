#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAppHostMethodExtension IAppHostMethodExtension;
typedef interface IAppHostPropertyExtension IAppHostPropertyExtension;
typedef interface IAppHostElementExtension IAppHostElementExtension;
typedef interface IAppHostMappingExtension IAppHostMappingExtension;
typedef interface IAppHostChildElementCollection IAppHostChildElementCollection;
typedef interface IAppHostPropertyCollection IAppHostPropertyCollection;
typedef interface IAppHostConfigLocationCollection IAppHostConfigLocationCollection;
typedef interface IAppHostMethodCollection IAppHostMethodCollection;
typedef interface IAppHostElementSchemaCollection IAppHostElementSchemaCollection;
typedef interface IAppHostPropertySchemaCollection IAppHostPropertySchemaCollection;
typedef interface IAppHostConstantValueCollection IAppHostConstantValueCollection;
typedef interface IAppHostConstantValue IAppHostConstantValue;
typedef interface IAppHostPropertySchema IAppHostPropertySchema;
typedef interface IAppHostCollectionSchema IAppHostCollectionSchema;
typedef interface IAppHostElementSchema IAppHostElementSchema;
typedef interface IAppHostMethodSchema IAppHostMethodSchema;
typedef interface IAppHostMethodInstance IAppHostMethodInstance;
typedef interface IAppHostMethod IAppHostMethod;
typedef interface IAppHostConfigException IAppHostConfigException;
typedef interface IAppHostPropertyException IAppHostPropertyException;
typedef interface IAppHostElementCollection IAppHostElementCollection;
typedef interface IAppHostElement IAppHostElement;
typedef interface IAppHostProperty IAppHostProperty;
typedef interface IAppHostConfigLocation IAppHostConfigLocation;
typedef interface IAppHostSectionDefinition IAppHostSectionDefinition;
typedef interface IAppHostSectionDefinitionCollection IAppHostSectionDefinitionCollection;
typedef interface IAppHostSectionGroup IAppHostSectionGroup;
typedef interface IAppHostConfigFile IAppHostConfigFile;
typedef interface IAppHostPathMapper IAppHostPathMapper;
typedef interface IAppHostPathMapper2 IAppHostPathMapper2;
typedef interface IAppHostChangeHandler IAppHostChangeHandler;
typedef interface IAppHostAdminManager IAppHostAdminManager;
typedef interface IAppHostWritableAdminManager IAppHostWritableAdminManager;
typedef interface IAppHostConfigManager IAppHostConfigManager;
typedef class AppHostAdminManager AppHostAdminManager;
typedef class AppHostWritableAdminManager AppHostWritableAdminManager;
#include "unknwn.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ahadmin_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ahadmin_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAppHostMethodExtension;
    typedef struct IAppHostMethodExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostMethodExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostMethodExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostMethodExtension * This);
        HRESULT ( STDMETHODCALLTYPE *ProvideMethod )(
            __RPC__in IAppHostMethodExtension * This,
                       __RPC__in_opt IAppHostMethod *pMethod,
                       __RPC__in_opt IAppHostMethodInstance *pMethodInstance,
                       __RPC__in_opt IAppHostElement *pElement);
        END_INTERFACE
    } IAppHostMethodExtensionVtbl;
    interface IAppHostMethodExtension
    {
        CONST_VTBL struct IAppHostMethodExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProvideMethod(This,pMethod,pMethodInstance,pElement) )
EXTERN_C const IID IID_IAppHostPropertyExtension;
    typedef struct IAppHostPropertyExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostPropertyExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostPropertyExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostPropertyExtension * This);
        HRESULT ( STDMETHODCALLTYPE *ProvideGetProperty )(
            __RPC__in IAppHostPropertyExtension * This,
                       __RPC__in_opt IAppHostElement *pElement,
                       __RPC__in_opt IAppHostProperty *pProperty);
        END_INTERFACE
    } IAppHostPropertyExtensionVtbl;
    interface IAppHostPropertyExtension
    {
        CONST_VTBL struct IAppHostPropertyExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProvideGetProperty(This,pElement,pProperty) )
EXTERN_C const IID IID_IAppHostElementExtension;
    typedef struct IAppHostElementExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostElementExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostElementExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostElementExtension * This);
        HRESULT ( STDMETHODCALLTYPE *ProvideElement )(
            __RPC__in IAppHostElementExtension * This,
                       __RPC__in_opt IAppHostElement *pNewElement);
        END_INTERFACE
    } IAppHostElementExtensionVtbl;
    interface IAppHostElementExtension
    {
        CONST_VTBL struct IAppHostElementExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ProvideElement(This,pNewElement) )
EXTERN_C const IID IID_IAppHostMappingExtension;
    typedef struct IAppHostMappingExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostMappingExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostMappingExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostMappingExtension * This);
        HRESULT ( STDMETHODCALLTYPE *GetSiteNameFromSiteId )(
            __RPC__in IAppHostMappingExtension * This,
                       DWORD dwSiteId,
                                        __RPC__deref_out_opt_string BSTR *pbstrSiteName);
        HRESULT ( STDMETHODCALLTYPE *GetSiteIdFromSiteName )(
            __RPC__in IAppHostMappingExtension * This,
                               __RPC__in_string BSTR bstrSiteName,
                                __RPC__out DWORD *pdwSiteId);
        HRESULT ( STDMETHODCALLTYPE *GetSiteElementFromSiteId )(
            __RPC__in IAppHostMappingExtension * This,
                       DWORD dwSiteId,
                                __RPC__deref_out_opt IAppHostElement **ppSiteElement);
        HRESULT ( STDMETHODCALLTYPE *MapPath )(
            __RPC__in IAppHostMappingExtension * This,
                               __RPC__in_string BSTR bstrSiteName,
                               __RPC__in_string BSTR bstrVirtualPath,
                                __RPC__deref_out_opt_string BSTR *pbstrPhysicalPath,
                        __RPC__deref_out_opt IAppHostElement **ppVirtualDirectoryElement,
                        __RPC__deref_out_opt IAppHostElement **ppApplicationElement);
        END_INTERFACE
    } IAppHostMappingExtensionVtbl;
    interface IAppHostMappingExtension
    {
        CONST_VTBL struct IAppHostMappingExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSiteNameFromSiteId(This,dwSiteId,pbstrSiteName) )
    ( (This)->lpVtbl -> GetSiteIdFromSiteName(This,bstrSiteName,pdwSiteId) )
    ( (This)->lpVtbl -> GetSiteElementFromSiteId(This,dwSiteId,ppSiteElement) )
    ( (This)->lpVtbl -> MapPath(This,bstrSiteName,bstrVirtualPath,pbstrPhysicalPath,ppVirtualDirectoryElement,ppApplicationElement) )
EXTERN_C const IID IID_IAppHostChildElementCollection;
    typedef struct IAppHostChildElementCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostChildElementCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostChildElementCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostChildElementCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostChildElementCollection * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostChildElementCollection * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostElement **ppElement);
        END_INTERFACE
    } IAppHostChildElementCollectionVtbl;
    interface IAppHostChildElementCollection
    {
        CONST_VTBL struct IAppHostChildElementCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppElement) )
EXTERN_C const IID IID_IAppHostPropertyCollection;
    typedef struct IAppHostPropertyCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostPropertyCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostPropertyCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostPropertyCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostPropertyCollection * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostPropertyCollection * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostProperty **ppProperty);
        END_INTERFACE
    } IAppHostPropertyCollectionVtbl;
    interface IAppHostPropertyCollection
    {
        CONST_VTBL struct IAppHostPropertyCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppProperty) )
EXTERN_C const IID IID_IAppHostConfigLocationCollection;
    typedef struct IAppHostConfigLocationCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostConfigLocationCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostConfigLocationCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostConfigLocationCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostConfigLocationCollection * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostConfigLocationCollection * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt IAppHostConfigLocation **ppLocation);
        HRESULT ( STDMETHODCALLTYPE *AddLocation )(
            __RPC__in IAppHostConfigLocationCollection * This,
                               __RPC__in_string BSTR bstrLocationPath,
                                __RPC__deref_out_opt IAppHostConfigLocation **ppNewLocation);
        HRESULT ( STDMETHODCALLTYPE *DeleteLocation )(
            __RPC__in IAppHostConfigLocationCollection * This,
                       VARIANT cIndex);
        HRESULT ( STDMETHODCALLTYPE *RenameLocation )(
            __RPC__in IAppHostConfigLocationCollection * This,
                       VARIANT varIndex,
                               __RPC__in_string BSTR bstrLocationPath);
        END_INTERFACE
    } IAppHostConfigLocationCollectionVtbl;
    interface IAppHostConfigLocationCollection
    {
        CONST_VTBL struct IAppHostConfigLocationCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppLocation) )
    ( (This)->lpVtbl -> AddLocation(This,bstrLocationPath,ppNewLocation) )
    ( (This)->lpVtbl -> DeleteLocation(This,cIndex) )
    ( (This)->lpVtbl -> RenameLocation(This,varIndex,bstrLocationPath) )
EXTERN_C const IID IID_IAppHostMethodCollection;
    typedef struct IAppHostMethodCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostMethodCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostMethodCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostMethodCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostMethodCollection * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostMethodCollection * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostMethod **ppMethod);
        END_INTERFACE
    } IAppHostMethodCollectionVtbl;
    interface IAppHostMethodCollection
    {
        CONST_VTBL struct IAppHostMethodCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppMethod) )
EXTERN_C const IID IID_IAppHostElementSchemaCollection;
    typedef struct IAppHostElementSchemaCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostElementSchemaCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostElementSchemaCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostElementSchemaCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostElementSchemaCollection * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostElementSchemaCollection * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostElementSchema **ppElementSchema);
        END_INTERFACE
    } IAppHostElementSchemaCollectionVtbl;
    interface IAppHostElementSchemaCollection
    {
        CONST_VTBL struct IAppHostElementSchemaCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppElementSchema) )
EXTERN_C const IID IID_IAppHostPropertySchemaCollection;
    typedef struct IAppHostPropertySchemaCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostPropertySchemaCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostPropertySchemaCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostPropertySchemaCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostPropertySchemaCollection * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostPropertySchemaCollection * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostPropertySchema **ppPropertySchema);
        END_INTERFACE
    } IAppHostPropertySchemaCollectionVtbl;
    interface IAppHostPropertySchemaCollection
    {
        CONST_VTBL struct IAppHostPropertySchemaCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppPropertySchema) )
EXTERN_C const IID IID_IAppHostConstantValueCollection;
    typedef struct IAppHostConstantValueCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostConstantValueCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostConstantValueCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostConstantValueCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostConstantValueCollection * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostConstantValueCollection * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostConstantValue **ppConstantValue);
        END_INTERFACE
    } IAppHostConstantValueCollectionVtbl;
    interface IAppHostConstantValueCollection
    {
        CONST_VTBL struct IAppHostConstantValueCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppConstantValue) )
EXTERN_C const IID IID_IAppHostConstantValue;
    typedef struct IAppHostConstantValueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostConstantValue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostConstantValue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostConstantValue * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostConstantValue * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IAppHostConstantValue * This,
                                __RPC__out DWORD *pdwValue);
        END_INTERFACE
    } IAppHostConstantValueVtbl;
    interface IAppHostConstantValue
    {
        CONST_VTBL struct IAppHostConstantValueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Value(This,pdwValue) )
EXTERN_C const IID IID_IAppHostPropertySchema;
    typedef struct IAppHostPropertySchemaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostPropertySchema * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostPropertySchema * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostPropertySchema * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostPropertySchema * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IAppHostPropertySchema * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_DefaultValue )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT *pDefaultValue);
                        HRESULT ( STDMETHODCALLTYPE *get_IsRequired )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT_BOOL *pfIsRequired);
                        HRESULT ( STDMETHODCALLTYPE *get_IsUniqueKey )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT_BOOL *pfIsUniqueKey);
                        HRESULT ( STDMETHODCALLTYPE *get_IsCombinedKey )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT_BOOL *pfIsCombinedKey);
                        HRESULT ( STDMETHODCALLTYPE *get_IsExpanded )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT_BOOL *pfIsExpanded);
                        HRESULT ( STDMETHODCALLTYPE *get_ValidationType )(
            __RPC__in IAppHostPropertySchema * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrValidationType);
                        HRESULT ( STDMETHODCALLTYPE *get_ValidationParameter )(
            __RPC__in IAppHostPropertySchema * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrValidationParameter);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostPropertySchema * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_IsCaseSensitive )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT_BOOL *pfIsCaseSensitive);
                        HRESULT ( STDMETHODCALLTYPE *get_PossibleValues )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__deref_out_opt IAppHostConstantValueCollection **ppValues);
                        HRESULT ( STDMETHODCALLTYPE *get_DoesAllowInfinite )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT_BOOL *pfAllowInfinite);
                        HRESULT ( STDMETHODCALLTYPE *get_IsEncrypted )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__out VARIANT_BOOL *pfIsEncrypted);
                        HRESULT ( STDMETHODCALLTYPE *get_TimeSpanFormat )(
            __RPC__in IAppHostPropertySchema * This,
                                __RPC__deref_out_opt BSTR *pbstrTimeSpanFormat);
        END_INTERFACE
    } IAppHostPropertySchemaVtbl;
    interface IAppHostPropertySchema
    {
        CONST_VTBL struct IAppHostPropertySchemaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Type(This,pbstrType) )
    ( (This)->lpVtbl -> get_DefaultValue(This,pDefaultValue) )
    ( (This)->lpVtbl -> get_IsRequired(This,pfIsRequired) )
    ( (This)->lpVtbl -> get_IsUniqueKey(This,pfIsUniqueKey) )
    ( (This)->lpVtbl -> get_IsCombinedKey(This,pfIsCombinedKey) )
    ( (This)->lpVtbl -> get_IsExpanded(This,pfIsExpanded) )
    ( (This)->lpVtbl -> get_ValidationType(This,pbstrValidationType) )
    ( (This)->lpVtbl -> get_ValidationParameter(This,pbstrValidationParameter) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> get_IsCaseSensitive(This,pfIsCaseSensitive) )
    ( (This)->lpVtbl -> get_PossibleValues(This,ppValues) )
    ( (This)->lpVtbl -> get_DoesAllowInfinite(This,pfAllowInfinite) )
    ( (This)->lpVtbl -> get_IsEncrypted(This,pfIsEncrypted) )
    ( (This)->lpVtbl -> get_TimeSpanFormat(This,pbstrTimeSpanFormat) )
EXTERN_C const IID IID_IAppHostCollectionSchema;
    typedef struct IAppHostCollectionSchemaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostCollectionSchema * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostCollectionSchema * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostCollectionSchema * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AddElementNames )(
            __RPC__in IAppHostCollectionSchema * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrElementName);
        HRESULT ( STDMETHODCALLTYPE *GetAddElementSchema )(
            __RPC__in IAppHostCollectionSchema * This,
                               __RPC__in_string BSTR bstrElementName,
                                __RPC__deref_out_opt IAppHostElementSchema **ppSchema);
                        HRESULT ( STDMETHODCALLTYPE *get_RemoveElementSchema )(
            __RPC__in IAppHostCollectionSchema * This,
                                __RPC__deref_out_opt IAppHostElementSchema **ppSchema);
                        HRESULT ( STDMETHODCALLTYPE *get_ClearElementSchema )(
            __RPC__in IAppHostCollectionSchema * This,
                                __RPC__deref_out_opt IAppHostElementSchema **ppSchema);
                        HRESULT ( STDMETHODCALLTYPE *get_IsMergeAppend )(
            __RPC__in IAppHostCollectionSchema * This,
                                __RPC__out VARIANT_BOOL *pfIsMergeAppend);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostCollectionSchema * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_DoesAllowDuplicates )(
            __RPC__in IAppHostCollectionSchema * This,
                                __RPC__out VARIANT_BOOL *pfAllowDuplicates);
        END_INTERFACE
    } IAppHostCollectionSchemaVtbl;
    interface IAppHostCollectionSchema
    {
        CONST_VTBL struct IAppHostCollectionSchemaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AddElementNames(This,pbstrElementName) )
    ( (This)->lpVtbl -> GetAddElementSchema(This,bstrElementName,ppSchema) )
    ( (This)->lpVtbl -> get_RemoveElementSchema(This,ppSchema) )
    ( (This)->lpVtbl -> get_ClearElementSchema(This,ppSchema) )
    ( (This)->lpVtbl -> get_IsMergeAppend(This,pfIsMergeAppend) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> get_DoesAllowDuplicates(This,pfAllowDuplicates) )
EXTERN_C const IID IID_IAppHostElementSchema;
    typedef struct IAppHostElementSchemaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostElementSchema * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostElementSchema * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostElementSchema * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostElementSchema * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_DoesAllowUnschematizedProperties )(
            __RPC__in IAppHostElementSchema * This,
                                __RPC__out VARIANT_BOOL *pfAllowUnschematized);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostElementSchema * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
                        HRESULT ( STDMETHODCALLTYPE *get_CollectionSchema )(
            __RPC__in IAppHostElementSchema * This,
                                __RPC__deref_out_opt IAppHostCollectionSchema **ppCollectionSchema);
                        HRESULT ( STDMETHODCALLTYPE *get_ChildElementSchemas )(
            __RPC__in IAppHostElementSchema * This,
                                __RPC__deref_out_opt IAppHostElementSchemaCollection **ppChildSchemas);
                        HRESULT ( STDMETHODCALLTYPE *get_PropertySchemas )(
            __RPC__in IAppHostElementSchema * This,
                                __RPC__deref_out_opt IAppHostPropertySchemaCollection **ppPropertySchemas);
                        HRESULT ( STDMETHODCALLTYPE *get_IsCollectionDefault )(
            __RPC__in IAppHostElementSchema * This,
                                __RPC__out VARIANT_BOOL *pfIsCollectionDefault);
        END_INTERFACE
    } IAppHostElementSchemaVtbl;
    interface IAppHostElementSchema
    {
        CONST_VTBL struct IAppHostElementSchemaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_DoesAllowUnschematizedProperties(This,pfAllowUnschematized) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> get_CollectionSchema(This,ppCollectionSchema) )
    ( (This)->lpVtbl -> get_ChildElementSchemas(This,ppChildSchemas) )
    ( (This)->lpVtbl -> get_PropertySchemas(This,ppPropertySchemas) )
    ( (This)->lpVtbl -> get_IsCollectionDefault(This,pfIsCollectionDefault) )
EXTERN_C const IID IID_IAppHostMethodSchema;
    typedef struct IAppHostMethodSchemaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostMethodSchema * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostMethodSchema * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostMethodSchema * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostMethodSchema * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_InputSchema )(
            __RPC__in IAppHostMethodSchema * This,
                                __RPC__deref_out_opt IAppHostElementSchema **ppInputSchema);
                        HRESULT ( STDMETHODCALLTYPE *get_OutputSchema )(
            __RPC__in IAppHostMethodSchema * This,
                                __RPC__deref_out_opt IAppHostElementSchema **ppOutputSchema);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostMethodSchema * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
        END_INTERFACE
    } IAppHostMethodSchemaVtbl;
    interface IAppHostMethodSchema
    {
        CONST_VTBL struct IAppHostMethodSchemaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_InputSchema(This,ppInputSchema) )
    ( (This)->lpVtbl -> get_OutputSchema(This,ppOutputSchema) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
EXTERN_C const IID IID_IAppHostMethodInstance;
    typedef struct IAppHostMethodInstanceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostMethodInstance * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostMethodInstance * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostMethodInstance * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Input )(
            __RPC__in IAppHostMethodInstance * This,
                                __RPC__deref_out_opt IAppHostElement **ppInputElement);
                        HRESULT ( STDMETHODCALLTYPE *get_Output )(
            __RPC__in IAppHostMethodInstance * This,
                                __RPC__deref_out_opt IAppHostElement **ppOutputElement);
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in IAppHostMethodInstance * This);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostMethodInstance * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IAppHostMethodInstance * This,
                               __RPC__in_string BSTR bstrMetadataType,
                       VARIANT value);
        END_INTERFACE
    } IAppHostMethodInstanceVtbl;
    interface IAppHostMethodInstance
    {
        CONST_VTBL struct IAppHostMethodInstanceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Input(This,ppInputElement) )
    ( (This)->lpVtbl -> get_Output(This,ppOutputElement) )
    ( (This)->lpVtbl -> Execute(This) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
EXTERN_C const IID IID_IAppHostMethod;
    typedef struct IAppHostMethodVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostMethod * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostMethod * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostMethod * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostMethod * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IAppHostMethod * This,
                                __RPC__deref_out_opt IAppHostMethodSchema **ppMethodSchema);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in IAppHostMethod * This,
                                __RPC__deref_out_opt IAppHostMethodInstance **ppMethodInstance);
        END_INTERFACE
    } IAppHostMethodVtbl;
    interface IAppHostMethod
    {
        CONST_VTBL struct IAppHostMethodVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Schema(This,ppMethodSchema) )
    ( (This)->lpVtbl -> CreateInstance(This,ppMethodInstance) )
EXTERN_C const IID IID_IAppHostConfigException;
    typedef struct IAppHostConfigExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostConfigException * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostConfigException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostConfigException * This);
                        HRESULT ( STDMETHODCALLTYPE *get_LineNumber )(
            __RPC__in IAppHostConfigException * This,
                                __RPC__out ULONG *pcLineNumber);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IAppHostConfigException * This,
                                __RPC__deref_out_opt BSTR *pbstrFileName);
                        HRESULT ( STDMETHODCALLTYPE *get_ConfigPath )(
            __RPC__in IAppHostConfigException * This,
                                __RPC__deref_out_opt BSTR *pbstrConfigPath);
                        HRESULT ( STDMETHODCALLTYPE *get_ErrorLine )(
            __RPC__in IAppHostConfigException * This,
                                __RPC__deref_out_opt BSTR *pbstrErrorLine);
                        HRESULT ( STDMETHODCALLTYPE *get_PreErrorLine )(
            __RPC__in IAppHostConfigException * This,
                                __RPC__deref_out_opt BSTR *pbstrPreErrorLine);
                        HRESULT ( STDMETHODCALLTYPE *get_PostErrorLine )(
            __RPC__in IAppHostConfigException * This,
                                __RPC__deref_out_opt BSTR *pbstrPostErrorLine);
                        HRESULT ( STDMETHODCALLTYPE *get_ErrorString )(
            __RPC__in IAppHostConfigException * This,
                                __RPC__deref_out_opt BSTR *pbstrErrorString);
        END_INTERFACE
    } IAppHostConfigExceptionVtbl;
    interface IAppHostConfigException
    {
        CONST_VTBL struct IAppHostConfigExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_LineNumber(This,pcLineNumber) )
    ( (This)->lpVtbl -> get_FileName(This,pbstrFileName) )
    ( (This)->lpVtbl -> get_ConfigPath(This,pbstrConfigPath) )
    ( (This)->lpVtbl -> get_ErrorLine(This,pbstrErrorLine) )
    ( (This)->lpVtbl -> get_PreErrorLine(This,pbstrPreErrorLine) )
    ( (This)->lpVtbl -> get_PostErrorLine(This,pbstrPostErrorLine) )
    ( (This)->lpVtbl -> get_ErrorString(This,pbstrErrorString) )
EXTERN_C const IID IID_IAppHostPropertyException;
    typedef struct IAppHostPropertyExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostPropertyException * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostPropertyException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostPropertyException * This);
                        HRESULT ( STDMETHODCALLTYPE *get_LineNumber )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__out ULONG *pcLineNumber);
                        HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__deref_out_opt BSTR *pbstrFileName);
                        HRESULT ( STDMETHODCALLTYPE *get_ConfigPath )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__deref_out_opt BSTR *pbstrConfigPath);
                        HRESULT ( STDMETHODCALLTYPE *get_ErrorLine )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__deref_out_opt BSTR *pbstrErrorLine);
                        HRESULT ( STDMETHODCALLTYPE *get_PreErrorLine )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__deref_out_opt BSTR *pbstrPreErrorLine);
                        HRESULT ( STDMETHODCALLTYPE *get_PostErrorLine )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__deref_out_opt BSTR *pbstrPostErrorLine);
                        HRESULT ( STDMETHODCALLTYPE *get_ErrorString )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__deref_out_opt BSTR *pbstrErrorString);
                        HRESULT ( STDMETHODCALLTYPE *get_InvalidValue )(
            __RPC__in IAppHostPropertyException * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrValue);
                        HRESULT ( STDMETHODCALLTYPE *get_ValidationFailureReason )(
            __RPC__in IAppHostPropertyException * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrValidationReason);
                        HRESULT ( STDMETHODCALLTYPE *get_ValidationFailureParameters )(
            __RPC__in IAppHostPropertyException * This,
                                __RPC__deref_out_opt SAFEARRAY * *pParameterArray);
        END_INTERFACE
    } IAppHostPropertyExceptionVtbl;
    interface IAppHostPropertyException
    {
        CONST_VTBL struct IAppHostPropertyExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_LineNumber(This,pcLineNumber) )
    ( (This)->lpVtbl -> get_FileName(This,pbstrFileName) )
    ( (This)->lpVtbl -> get_ConfigPath(This,pbstrConfigPath) )
    ( (This)->lpVtbl -> get_ErrorLine(This,pbstrErrorLine) )
    ( (This)->lpVtbl -> get_PreErrorLine(This,pbstrPreErrorLine) )
    ( (This)->lpVtbl -> get_PostErrorLine(This,pbstrPostErrorLine) )
    ( (This)->lpVtbl -> get_ErrorString(This,pbstrErrorString) )
    ( (This)->lpVtbl -> get_InvalidValue(This,pbstrValue) )
    ( (This)->lpVtbl -> get_ValidationFailureReason(This,pbstrValidationReason) )
    ( (This)->lpVtbl -> get_ValidationFailureParameters(This,pParameterArray) )
EXTERN_C const IID IID_IAppHostElementCollection;
    typedef struct IAppHostElementCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostElementCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostElementCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostElementCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostElementCollection * This,
                                __RPC__out DWORD *pcElementCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostElementCollection * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostElement **ppElement);
        HRESULT ( STDMETHODCALLTYPE *AddElement )(
            __RPC__in IAppHostElementCollection * This,
                       __RPC__in_opt IAppHostElement *pElement,
                                     INT cPosition);
        HRESULT ( STDMETHODCALLTYPE *DeleteElement )(
            __RPC__in IAppHostElementCollection * This,
                       VARIANT cIndex);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IAppHostElementCollection * This);
        HRESULT ( STDMETHODCALLTYPE *CreateNewElement )(
            __RPC__in IAppHostElementCollection * This,
                                             __RPC__in_string BSTR bstrElementName,
                                __RPC__deref_out_opt IAppHostElement **ppElement);
                        HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IAppHostElementCollection * This,
                                __RPC__deref_out_opt IAppHostCollectionSchema **ppSchema);
        END_INTERFACE
    } IAppHostElementCollectionVtbl;
    interface IAppHostElementCollection
    {
        CONST_VTBL struct IAppHostElementCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcElementCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppElement) )
    ( (This)->lpVtbl -> AddElement(This,pElement,cPosition) )
    ( (This)->lpVtbl -> DeleteElement(This,cIndex) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> CreateNewElement(This,bstrElementName,ppElement) )
    ( (This)->lpVtbl -> get_Schema(This,ppSchema) )
EXTERN_C const IID IID_IAppHostElement;
    typedef struct IAppHostElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostElement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostElement * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostElement * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Collection )(
            __RPC__in IAppHostElement * This,
                                __RPC__deref_out_opt IAppHostElementCollection **ppCollection);
                        HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in IAppHostElement * This,
                                __RPC__deref_out_opt IAppHostPropertyCollection **ppProperties);
                        HRESULT ( STDMETHODCALLTYPE *get_ChildElements )(
            __RPC__in IAppHostElement * This,
                                __RPC__deref_out_opt IAppHostChildElementCollection **ppElements);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostElement * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IAppHostElement * This,
                               __RPC__in_string BSTR bstrMetadataType,
                       VARIANT value);
                        HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IAppHostElement * This,
                                __RPC__deref_out_opt IAppHostElementSchema **ppSchema);
        HRESULT ( STDMETHODCALLTYPE *GetElementByName )(
            __RPC__in IAppHostElement * This,
                               __RPC__in_string BSTR bstrSubName,
                                __RPC__deref_out_opt IAppHostElement **ppElement);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyByName )(
            __RPC__in IAppHostElement * This,
                               __RPC__in_string BSTR bstrSubName,
                                __RPC__deref_out_opt IAppHostProperty **ppProperty);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IAppHostElement * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Methods )(
            __RPC__in IAppHostElement * This,
                                __RPC__deref_out_opt IAppHostMethodCollection **ppMethods);
        END_INTERFACE
    } IAppHostElementVtbl;
    interface IAppHostElement
    {
        CONST_VTBL struct IAppHostElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Collection(This,ppCollection) )
    ( (This)->lpVtbl -> get_Properties(This,ppProperties) )
    ( (This)->lpVtbl -> get_ChildElements(This,ppElements) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
    ( (This)->lpVtbl -> get_Schema(This,ppSchema) )
    ( (This)->lpVtbl -> GetElementByName(This,bstrSubName,ppElement) )
    ( (This)->lpVtbl -> GetPropertyByName(This,bstrSubName,ppProperty) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_Methods(This,ppMethods) )
EXTERN_C const IID IID_IAppHostProperty;
    typedef struct IAppHostPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostProperty * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostProperty * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IAppHostProperty * This,
                                __RPC__out VARIANT *pVariant);
                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IAppHostProperty * This,
                       VARIANT value);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IAppHostProperty * This);
                        HRESULT ( STDMETHODCALLTYPE *get_StringValue )(
            __RPC__in IAppHostProperty * This,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                        HRESULT ( STDMETHODCALLTYPE *get_Exception )(
            __RPC__in IAppHostProperty * This,
                                __RPC__deref_out_opt IAppHostPropertyException **ppException);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostProperty * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IAppHostProperty * This,
                               __RPC__in_string BSTR bstrMetadataType,
                       VARIANT value);
                        HRESULT ( STDMETHODCALLTYPE *get_Schema )(
            __RPC__in IAppHostProperty * This,
                                __RPC__deref_out_opt IAppHostPropertySchema **ppSchema);
        END_INTERFACE
    } IAppHostPropertyVtbl;
    interface IAppHostProperty
    {
        CONST_VTBL struct IAppHostPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Value(This,pVariant) )
    ( (This)->lpVtbl -> put_Value(This,value) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> get_StringValue(This,pbstrValue) )
    ( (This)->lpVtbl -> get_Exception(This,ppException) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
    ( (This)->lpVtbl -> get_Schema(This,ppSchema) )
EXTERN_C const IID IID_IAppHostConfigLocation;
    typedef struct IAppHostConfigLocationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostConfigLocation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostConfigLocation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostConfigLocation * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IAppHostConfigLocation * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrLocationPath);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostConfigLocation * This,
                                __RPC__out DWORD *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostConfigLocation * This,
                       VARIANT cIndex,
                                __RPC__deref_out_opt IAppHostElement **ppSection);
        HRESULT ( STDMETHODCALLTYPE *AddConfigSection )(
            __RPC__in IAppHostConfigLocation * This,
                       __RPC__in BSTR bstrSectionName,
                                __RPC__deref_out_opt IAppHostElement **ppAdminElement);
        HRESULT ( STDMETHODCALLTYPE *DeleteConfigSection )(
            __RPC__in IAppHostConfigLocation * This,
                       VARIANT cIndex);
        END_INTERFACE
    } IAppHostConfigLocationVtbl;
    interface IAppHostConfigLocation
    {
        CONST_VTBL struct IAppHostConfigLocationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Path(This,pbstrLocationPath) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,cIndex,ppSection) )
    ( (This)->lpVtbl -> AddConfigSection(This,bstrSectionName,ppAdminElement) )
    ( (This)->lpVtbl -> DeleteConfigSection(This,cIndex) )
EXTERN_C const IID IID_IAppHostSectionDefinition;
    typedef struct IAppHostSectionDefinitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostSectionDefinition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostSectionDefinition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostSectionDefinition * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostSectionDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IAppHostSectionDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IAppHostSectionDefinition * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_OverrideModeDefault )(
            __RPC__in IAppHostSectionDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrOverrideModeDefault);
                        HRESULT ( STDMETHODCALLTYPE *put_OverrideModeDefault )(
            __RPC__in IAppHostSectionDefinition * This,
                       __RPC__in BSTR bstrOverrideModeDefault);
                        HRESULT ( STDMETHODCALLTYPE *get_AllowDefinition )(
            __RPC__in IAppHostSectionDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrAllowDefinition);
                        HRESULT ( STDMETHODCALLTYPE *put_AllowDefinition )(
            __RPC__in IAppHostSectionDefinition * This,
                       __RPC__in BSTR bstrAllowDefinition);
                        HRESULT ( STDMETHODCALLTYPE *get_AllowLocation )(
            __RPC__in IAppHostSectionDefinition * This,
                                __RPC__deref_out_opt BSTR *pbstrAllowLocation);
                        HRESULT ( STDMETHODCALLTYPE *put_AllowLocation )(
            __RPC__in IAppHostSectionDefinition * This,
                       __RPC__in BSTR bstrAllowLocation);
                        HRESULT ( STDMETHODCALLTYPE *get_RequirePermission )(
            __RPC__in IAppHostSectionDefinition * This,
                                __RPC__out VARIANT_BOOL *pfRequirePermission);
                        HRESULT ( STDMETHODCALLTYPE *put_RequirePermission )(
            __RPC__in IAppHostSectionDefinition * This,
                       VARIANT_BOOL pfRequirePermission);
        END_INTERFACE
    } IAppHostSectionDefinitionVtbl;
    interface IAppHostSectionDefinition
    {
        CONST_VTBL struct IAppHostSectionDefinitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Type(This,pbstrType) )
    ( (This)->lpVtbl -> put_Type(This,bstrType) )
    ( (This)->lpVtbl -> get_OverrideModeDefault(This,pbstrOverrideModeDefault) )
    ( (This)->lpVtbl -> put_OverrideModeDefault(This,bstrOverrideModeDefault) )
    ( (This)->lpVtbl -> get_AllowDefinition(This,pbstrAllowDefinition) )
    ( (This)->lpVtbl -> put_AllowDefinition(This,bstrAllowDefinition) )
    ( (This)->lpVtbl -> get_AllowLocation(This,pbstrAllowLocation) )
    ( (This)->lpVtbl -> put_AllowLocation(This,bstrAllowLocation) )
    ( (This)->lpVtbl -> get_RequirePermission(This,pfRequirePermission) )
    ( (This)->lpVtbl -> put_RequirePermission(This,pfRequirePermission) )
EXTERN_C const IID IID_IAppHostSectionDefinitionCollection;
    typedef struct IAppHostSectionDefinitionCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostSectionDefinitionCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostSectionDefinitionCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostSectionDefinitionCollection * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostSectionDefinitionCollection * This,
                                __RPC__out ULONG *pcCount);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostSectionDefinitionCollection * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt IAppHostSectionDefinition **ppConfigSection);
        HRESULT ( STDMETHODCALLTYPE *AddSection )(
            __RPC__in IAppHostSectionDefinitionCollection * This,
                               __RPC__in_string BSTR bstrSectionName,
                                __RPC__deref_out_opt IAppHostSectionDefinition **ppConfigSection);
        HRESULT ( STDMETHODCALLTYPE *DeleteSection )(
            __RPC__in IAppHostSectionDefinitionCollection * This,
                       VARIANT varIndex);
        END_INTERFACE
    } IAppHostSectionDefinitionCollectionVtbl;
    interface IAppHostSectionDefinitionCollection
    {
        CONST_VTBL struct IAppHostSectionDefinitionCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcCount) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppConfigSection) )
    ( (This)->lpVtbl -> AddSection(This,bstrSectionName,ppConfigSection) )
    ( (This)->lpVtbl -> DeleteSection(This,varIndex) )
EXTERN_C const IID IID_IAppHostSectionGroup;
    typedef struct IAppHostSectionGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostSectionGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostSectionGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostSectionGroup * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAppHostSectionGroup * This,
                                __RPC__out ULONG *pcSectionGroup);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IAppHostSectionGroup * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt IAppHostSectionGroup **ppSectionGroup);
                        HRESULT ( STDMETHODCALLTYPE *get_Sections )(
            __RPC__in IAppHostSectionGroup * This,
                                __RPC__deref_out_opt IAppHostSectionDefinitionCollection **ppSections);
        HRESULT ( STDMETHODCALLTYPE *AddSectionGroup )(
            __RPC__in IAppHostSectionGroup * This,
                               __RPC__in_string BSTR bstrSectionGroupName,
                                __RPC__deref_out_opt IAppHostSectionGroup **ppSectionGroup);
        HRESULT ( STDMETHODCALLTYPE *DeleteSectionGroup )(
            __RPC__in IAppHostSectionGroup * This,
                       VARIANT varIndex);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IAppHostSectionGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IAppHostSectionGroup * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IAppHostSectionGroup * This,
                       __RPC__in BSTR bstrType);
        END_INTERFACE
    } IAppHostSectionGroupVtbl;
    interface IAppHostSectionGroup
    {
        CONST_VTBL struct IAppHostSectionGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Count(This,pcSectionGroup) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,ppSectionGroup) )
    ( (This)->lpVtbl -> get_Sections(This,ppSections) )
    ( (This)->lpVtbl -> AddSectionGroup(This,bstrSectionGroupName,ppSectionGroup) )
    ( (This)->lpVtbl -> DeleteSectionGroup(This,varIndex) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Type(This,pbstrType) )
    ( (This)->lpVtbl -> put_Type(This,bstrType) )
EXTERN_C const IID IID_IAppHostConfigFile;
    typedef struct IAppHostConfigFileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostConfigFile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostConfigFile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostConfigFile * This);
                        HRESULT ( STDMETHODCALLTYPE *get_ConfigPath )(
            __RPC__in IAppHostConfigFile * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrConfigPath);
                        HRESULT ( STDMETHODCALLTYPE *get_FilePath )(
            __RPC__in IAppHostConfigFile * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrFilePath);
                        HRESULT ( STDMETHODCALLTYPE *get_Locations )(
            __RPC__in IAppHostConfigFile * This,
                                __RPC__deref_out_opt IAppHostConfigLocationCollection **ppLocations);
        HRESULT ( STDMETHODCALLTYPE *GetAdminSection )(
            __RPC__in IAppHostConfigFile * This,
                               __RPC__in_string BSTR bstrSectionName,
                               __RPC__in_string BSTR bstrPath,
                                __RPC__deref_out_opt IAppHostElement **ppAdminSection);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostConfigFile * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IAppHostConfigFile * This,
                               __RPC__in_string BSTR bstrMetadataType,
                       VARIANT value);
        HRESULT ( STDMETHODCALLTYPE *ClearInvalidSections )(
            __RPC__in IAppHostConfigFile * This);
                        HRESULT ( STDMETHODCALLTYPE *get_RootSectionGroup )(
            __RPC__in IAppHostConfigFile * This,
                                __RPC__deref_out_opt IAppHostSectionGroup **ppSectionGroups);
        END_INTERFACE
    } IAppHostConfigFileVtbl;
    interface IAppHostConfigFile
    {
        CONST_VTBL struct IAppHostConfigFileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_ConfigPath(This,pbstrConfigPath) )
    ( (This)->lpVtbl -> get_FilePath(This,pbstrFilePath) )
    ( (This)->lpVtbl -> get_Locations(This,ppLocations) )
    ( (This)->lpVtbl -> GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
    ( (This)->lpVtbl -> ClearInvalidSections(This) )
    ( (This)->lpVtbl -> get_RootSectionGroup(This,ppSectionGroups) )
EXTERN_C const IID IID_IAppHostPathMapper;
    typedef struct IAppHostPathMapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostPathMapper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostPathMapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostPathMapper * This);
        HRESULT ( STDMETHODCALLTYPE *MapPath )(
            __RPC__in IAppHostPathMapper * This,
                               __RPC__in_string BSTR bstrConfigPath,
                               __RPC__in_string BSTR bstrMappedPhysicalPath,
                                        __RPC__deref_out_opt_string BSTR *pbstrNewPhysicalPath);
        END_INTERFACE
    } IAppHostPathMapperVtbl;
    interface IAppHostPathMapper
    {
        CONST_VTBL struct IAppHostPathMapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MapPath(This,bstrConfigPath,bstrMappedPhysicalPath,pbstrNewPhysicalPath) )
EXTERN_C const IID IID_IAppHostPathMapper2;
    typedef struct IAppHostPathMapper2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAppHostPathMapper2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAppHostPathMapper2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAppHostPathMapper2 * This);
        HRESULT ( STDMETHODCALLTYPE *MapPath )(
            IAppHostPathMapper2 * This,
                               BSTR bstrConfigPath,
                               BSTR bstrMappedPhysicalPath,
                                BSTR *pbstrNewPhysicalPath,
                        HANDLE *phImpersonationToken);
        END_INTERFACE
    } IAppHostPathMapper2Vtbl;
    interface IAppHostPathMapper2
    {
        CONST_VTBL struct IAppHostPathMapper2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MapPath(This,bstrConfigPath,bstrMappedPhysicalPath,pbstrNewPhysicalPath,phImpersonationToken) )
EXTERN_C const IID IID_IAppHostChangeHandler;
    typedef struct IAppHostChangeHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostChangeHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostChangeHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostChangeHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnSectionChanges )(
            __RPC__in IAppHostChangeHandler * This,
                               __RPC__in_string BSTR bstrSectionName,
                               __RPC__in_string BSTR bstrConfigPath);
        END_INTERFACE
    } IAppHostChangeHandlerVtbl;
    interface IAppHostChangeHandler
    {
        CONST_VTBL struct IAppHostChangeHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSectionChanges(This,bstrSectionName,bstrConfigPath) )
EXTERN_C const IID IID_IAppHostAdminManager;
    typedef struct IAppHostAdminManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostAdminManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostAdminManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostAdminManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetAdminSection )(
            __RPC__in IAppHostAdminManager * This,
                               __RPC__in_string BSTR bstrSectionName,
                               __RPC__in_string BSTR bstrPath,
                                __RPC__deref_out_opt IAppHostElement **ppAdminSection);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostAdminManager * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IAppHostAdminManager * This,
                               __RPC__in_string BSTR bstrMetadataType,
                       VARIANT value);
                        HRESULT ( STDMETHODCALLTYPE *get_ConfigManager )(
            __RPC__in IAppHostAdminManager * This,
                                __RPC__deref_out_opt IAppHostConfigManager **ppConfigManager);
        END_INTERFACE
    } IAppHostAdminManagerVtbl;
    interface IAppHostAdminManager
    {
        CONST_VTBL struct IAppHostAdminManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
    ( (This)->lpVtbl -> get_ConfigManager(This,ppConfigManager) )
EXTERN_C const IID IID_IAppHostWritableAdminManager;
    typedef struct IAppHostWritableAdminManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostWritableAdminManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostWritableAdminManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostWritableAdminManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetAdminSection )(
            __RPC__in IAppHostWritableAdminManager * This,
                               __RPC__in_string BSTR bstrSectionName,
                               __RPC__in_string BSTR bstrPath,
                                __RPC__deref_out_opt IAppHostElement **ppAdminSection);
        HRESULT ( STDMETHODCALLTYPE *GetMetadata )(
            __RPC__in IAppHostWritableAdminManager * This,
                               __RPC__in_string BSTR bstrMetadataType,
                                __RPC__out VARIANT *pValue);
        HRESULT ( STDMETHODCALLTYPE *SetMetadata )(
            __RPC__in IAppHostWritableAdminManager * This,
                               __RPC__in_string BSTR bstrMetadataType,
                       VARIANT value);
                        HRESULT ( STDMETHODCALLTYPE *get_ConfigManager )(
            __RPC__in IAppHostWritableAdminManager * This,
                                __RPC__deref_out_opt IAppHostConfigManager **ppConfigManager);
        HRESULT ( STDMETHODCALLTYPE *CommitChanges )(
            __RPC__in IAppHostWritableAdminManager * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CommitPath )(
            __RPC__in IAppHostWritableAdminManager * This,
                                        __RPC__deref_out_opt_string BSTR *pbstrCommitPath);
                        HRESULT ( STDMETHODCALLTYPE *put_CommitPath )(
            __RPC__in IAppHostWritableAdminManager * This,
                               __RPC__in_string BSTR bstrCommitPath);
        END_INTERFACE
    } IAppHostWritableAdminManagerVtbl;
    interface IAppHostWritableAdminManager
    {
        CONST_VTBL struct IAppHostWritableAdminManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAdminSection(This,bstrSectionName,bstrPath,ppAdminSection) )
    ( (This)->lpVtbl -> GetMetadata(This,bstrMetadataType,pValue) )
    ( (This)->lpVtbl -> SetMetadata(This,bstrMetadataType,value) )
    ( (This)->lpVtbl -> get_ConfigManager(This,ppConfigManager) )
    ( (This)->lpVtbl -> CommitChanges(This) )
    ( (This)->lpVtbl -> get_CommitPath(This,pbstrCommitPath) )
    ( (This)->lpVtbl -> put_CommitPath(This,bstrCommitPath) )
EXTERN_C const IID IID_IAppHostConfigManager;
    typedef struct IAppHostConfigManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAppHostConfigManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAppHostConfigManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAppHostConfigManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetConfigFile )(
            __RPC__in IAppHostConfigManager * This,
                               __RPC__in_string BSTR bstrConfigPath,
                                __RPC__deref_out_opt IAppHostConfigFile **ppConfigFile);
        HRESULT ( STDMETHODCALLTYPE *GetUniqueConfigPath )(
            __RPC__in IAppHostConfigManager * This,
                               __RPC__in_string BSTR bstrConfigPath,
                                        __RPC__deref_out_opt_string BSTR *pbstrUniquePath);
        END_INTERFACE
    } IAppHostConfigManagerVtbl;
    interface IAppHostConfigManager
    {
        CONST_VTBL struct IAppHostConfigManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConfigFile(This,bstrConfigPath,ppConfigFile) )
    ( (This)->lpVtbl -> GetUniqueConfigPath(This,bstrConfigPath,pbstrUniquePath) )
EXTERN_C const IID LIBID_AppHostAdminLibrary;
EXTERN_C const CLSID CLSID_AppHostAdminManager;
class DECLSPEC_UUID("228fb8f7-fb53-4fd5-8c7b-ff59de606c5b")
AppHostAdminManager;
EXTERN_C const CLSID CLSID_AppHostWritableAdminManager;
class DECLSPEC_UUID("2b72133b-3f5b-4602-8952-803546ce3344")
AppHostWritableAdminManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ahadmin_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ahadmin_0000_0035_v0_0_s_ifspec;
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
