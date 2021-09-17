#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IInitializeWithFile IInitializeWithFile;
typedef interface IInitializeWithStream IInitializeWithStream;
typedef interface IPropertyStore IPropertyStore;
typedef interface INamedPropertyStore INamedPropertyStore;
typedef interface IObjectWithPropertyKey IObjectWithPropertyKey;
typedef interface IPropertyChange IPropertyChange;
typedef interface IPropertyChangeArray IPropertyChangeArray;
typedef interface IPropertyStoreCapabilities IPropertyStoreCapabilities;
typedef interface IPropertyStoreCache IPropertyStoreCache;
typedef interface IPropertyEnumType IPropertyEnumType;
typedef interface IPropertyEnumType2 IPropertyEnumType2;
typedef interface IPropertyEnumTypeList IPropertyEnumTypeList;
typedef interface IPropertyDescription IPropertyDescription;
typedef interface IPropertyDescription2 IPropertyDescription2;
typedef interface IPropertyDescriptionAliasInfo IPropertyDescriptionAliasInfo;
typedef interface IPropertyDescriptionSearchInfo IPropertyDescriptionSearchInfo;
typedef interface IPropertyDescriptionRelatedPropertyInfo IPropertyDescriptionRelatedPropertyInfo;
typedef interface IPropertySystem IPropertySystem;
typedef interface IPropertyDescriptionList IPropertyDescriptionList;
typedef interface IPropertyStoreFactory IPropertyStoreFactory;
typedef interface IDelayedPropertyStoreFactory IDelayedPropertyStoreFactory;
typedef interface IPersistSerializedPropStorage IPersistSerializedPropStorage;
typedef interface IPersistSerializedPropStorage2 IPersistSerializedPropStorage2;
typedef interface IPropertySystemChangeNotify IPropertySystemChangeNotify;
typedef interface ICreateObject ICreateObject;
typedef class InMemoryPropertyStore InMemoryPropertyStore;
typedef class InMemoryPropertyStoreMarshalByValue InMemoryPropertyStoreMarshalByValue;
typedef class PropertySystem PropertySystem;
#include "objidl.h"
#include "oleidl.h"
#include "ocidl.h"
#include "shtypes.h"
#include "StructuredQueryCondition.h"
extern "C"{
#include <winapifamily.h>
#if 0
typedef PROPERTYKEY *REFPROPERTYKEY;
#endif
#include <propkeydef.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IInitializeWithFile;
    typedef struct IInitializeWithFileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInitializeWithFile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInitializeWithFile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInitializeWithFile * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IInitializeWithFile * This,
                               __RPC__in_string LPCWSTR pszFilePath,
                       DWORD grfMode);
        END_INTERFACE
    } IInitializeWithFileVtbl;
    interface IInitializeWithFile
    {
        CONST_VTBL struct IInitializeWithFileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszFilePath,grfMode) )
EXTERN_C const IID IID_IInitializeWithStream;
    typedef struct IInitializeWithStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInitializeWithStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInitializeWithStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInitializeWithStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IInitializeWithStream * This,
            _In_ IStream *pstream,
            _In_ DWORD grfMode);
        END_INTERFACE
    } IInitializeWithStreamVtbl;
    interface IInitializeWithStream
    {
        CONST_VTBL struct IInitializeWithStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pstream,grfMode) )
                HRESULT STDMETHODCALLTYPE IInitializeWithStream_RemoteInitialize_Proxy(
    __RPC__in IInitializeWithStream * This,
               __RPC__in_opt IStream *pstream,
               DWORD grfMode);
void __RPC_STUB IInitializeWithStream_RemoteInitialize_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Application and Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IPropertyStore;
    typedef struct IPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyStore * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPropertyStore * This,
                        __RPC__out DWORD *cProps);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPropertyStore * This,
                       DWORD iProp,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IPropertyStore * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *pv);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IPropertyStore * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IPropertyStore * This);
        END_INTERFACE
    } IPropertyStoreVtbl;
    interface IPropertyStore
    {
        CONST_VTBL struct IPropertyStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,cProps) )
    ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
    ( (This)->lpVtbl -> GetValue(This,key,pv) )
    ( (This)->lpVtbl -> SetValue(This,key,propvar) )
    ( (This)->lpVtbl -> Commit(This) )
typedef __RPC_unique_pointer IPropertyStore *LPPROPERTYSTORE;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
PSSTDAPI PropVariantToWinRTPropertyValue(_In_ REFPROPVARIANT propvar, _In_ REFIID riid, _COM_Outptr_result_maybenull_ void **ppv);
PSSTDAPI WinRTPropertyValueToPropVariant(_In_opt_ IUnknown *punkPropertyValue, _Out_ PROPVARIANT *ppropvar);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_INamedPropertyStore;
    typedef struct INamedPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INamedPropertyStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INamedPropertyStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INamedPropertyStore * This);
        HRESULT ( STDMETHODCALLTYPE *GetNamedValue )(
            __RPC__in INamedPropertyStore * This,
                               __RPC__in_string LPCWSTR pszName,
                        __RPC__out PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *SetNamedValue )(
            __RPC__in INamedPropertyStore * This,
                               __RPC__in_string LPCWSTR pszName,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *GetNameCount )(
            __RPC__in INamedPropertyStore * This,
                        __RPC__out DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetNameAt )(
            __RPC__in INamedPropertyStore * This,
                       DWORD iProp,
                        __RPC__deref_out_opt BSTR *pbstrName);
        END_INTERFACE
    } INamedPropertyStoreVtbl;
    interface INamedPropertyStore
    {
        CONST_VTBL struct INamedPropertyStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNamedValue(This,pszName,ppropvar) )
    ( (This)->lpVtbl -> SetNamedValue(This,pszName,propvar) )
    ( (This)->lpVtbl -> GetNameCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetNameAt(This,iProp,pbstrName) )
typedef
enum GETPROPERTYSTOREFLAGS
    {
        GPS_DEFAULT = 0,
        GPS_HANDLERPROPERTIESONLY = 0x1,
        GPS_READWRITE = 0x2,
        GPS_TEMPORARY = 0x4,
        GPS_FASTPROPERTIESONLY = 0x8,
        GPS_OPENSLOWITEM = 0x10,
        GPS_DELAYCREATION = 0x20,
        GPS_BESTEFFORT = 0x40,
        GPS_NO_OPLOCK = 0x80,
        GPS_PREFERQUERYPROPERTIES = 0x100,
        GPS_EXTRINSICPROPERTIES = 0x200,
        GPS_EXTRINSICPROPERTIESONLY = 0x400,
        GPS_VOLATILEPROPERTIES = 0x800,
        GPS_VOLATILEPROPERTIESONLY = 0x1000,
        GPS_MASK_VALID = 0x1fff
    } GETPROPERTYSTOREFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(GETPROPERTYSTOREFLAGS)
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IObjectWithPropertyKey;
    typedef struct IObjectWithPropertyKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectWithPropertyKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectWithPropertyKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectWithPropertyKey * This);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyKey )(
            __RPC__in IObjectWithPropertyKey * This,
                       __RPC__in REFPROPERTYKEY key);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyKey )(
            __RPC__in IObjectWithPropertyKey * This,
                        __RPC__out PROPERTYKEY *pkey);
        END_INTERFACE
    } IObjectWithPropertyKeyVtbl;
    interface IObjectWithPropertyKey
    {
        CONST_VTBL struct IObjectWithPropertyKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPropertyKey(This,key) )
    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
typedef
enum PKA_FLAGS
    {
        PKA_SET = 0,
        PKA_APPEND = ( PKA_SET + 1 ) ,
        PKA_DELETE = ( PKA_APPEND + 1 )
    } PKA_FLAGS;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IPropertyChange;
    typedef struct IPropertyChangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyChange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyChange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyChange * This);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyKey )(
            __RPC__in IPropertyChange * This,
                       __RPC__in REFPROPERTYKEY key);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyKey )(
            __RPC__in IPropertyChange * This,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *ApplyToPropVariant )(
            __RPC__in IPropertyChange * This,
                       __RPC__in REFPROPVARIANT propvarIn,
                        __RPC__out PROPVARIANT *ppropvarOut);
        END_INTERFACE
    } IPropertyChangeVtbl;
    interface IPropertyChange
    {
        CONST_VTBL struct IPropertyChangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPropertyKey(This,key) )
    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
    ( (This)->lpVtbl -> ApplyToPropVariant(This,propvarIn,ppropvarOut) )
EXTERN_C const IID IID_IPropertyChangeArray;
    typedef struct IPropertyChangeArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyChangeArray * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyChangeArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyChangeArray * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPropertyChangeArray * This,
                        __RPC__out UINT *pcOperations);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPropertyChangeArray * This,
                       UINT iIndex,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *InsertAt )(
            __RPC__in IPropertyChangeArray * This,
                       UINT iIndex,
                       __RPC__in_opt IPropertyChange *ppropChange);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IPropertyChangeArray * This,
                       __RPC__in_opt IPropertyChange *ppropChange);
        HRESULT ( STDMETHODCALLTYPE *AppendOrReplace )(
            __RPC__in IPropertyChangeArray * This,
                       __RPC__in_opt IPropertyChange *ppropChange);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IPropertyChangeArray * This,
                       UINT iIndex);
        HRESULT ( STDMETHODCALLTYPE *IsKeyInArray )(
            __RPC__in IPropertyChangeArray * This,
                       __RPC__in REFPROPERTYKEY key);
        END_INTERFACE
    } IPropertyChangeArrayVtbl;
    interface IPropertyChangeArray
    {
        CONST_VTBL struct IPropertyChangeArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcOperations) )
    ( (This)->lpVtbl -> GetAt(This,iIndex,riid,ppv) )
    ( (This)->lpVtbl -> InsertAt(This,iIndex,ppropChange) )
    ( (This)->lpVtbl -> Append(This,ppropChange) )
    ( (This)->lpVtbl -> AppendOrReplace(This,ppropChange) )
    ( (This)->lpVtbl -> RemoveAt(This,iIndex) )
    ( (This)->lpVtbl -> IsKeyInArray(This,key) )
EXTERN_C const IID IID_IPropertyStoreCapabilities;
    typedef struct IPropertyStoreCapabilitiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyStoreCapabilities * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyStoreCapabilities * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyStoreCapabilities * This);
        HRESULT ( STDMETHODCALLTYPE *IsPropertyWritable )(
            __RPC__in IPropertyStoreCapabilities * This,
                       __RPC__in REFPROPERTYKEY key);
        END_INTERFACE
    } IPropertyStoreCapabilitiesVtbl;
    interface IPropertyStoreCapabilities
    {
        CONST_VTBL struct IPropertyStoreCapabilitiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsPropertyWritable(This,key) )
typedef
enum PSC_STATE
    {
        PSC_NORMAL = 0,
        PSC_NOTINSOURCE = 1,
        PSC_DIRTY = 2,
        PSC_READONLY = 3
    } PSC_STATE;
EXTERN_C const IID IID_IPropertyStoreCache;
    typedef struct IPropertyStoreCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyStoreCache * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyStoreCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyStoreCache * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPropertyStoreCache * This,
                        __RPC__out DWORD *cProps);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPropertyStoreCache * This,
                       DWORD iProp,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IPropertyStoreCache * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *pv);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in IPropertyStoreCache * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IPropertyStoreCache * This);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IPropertyStoreCache * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PSC_STATE *pstate);
        HRESULT ( STDMETHODCALLTYPE *GetValueAndState )(
            __RPC__in IPropertyStoreCache * This,
                       __RPC__in REFPROPERTYKEY key,
                        __RPC__out PROPVARIANT *ppropvar,
                        __RPC__out PSC_STATE *pstate);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            __RPC__in IPropertyStoreCache * This,
                       __RPC__in REFPROPERTYKEY key,
                       PSC_STATE state);
        HRESULT ( STDMETHODCALLTYPE *SetValueAndState )(
            __RPC__in IPropertyStoreCache * This,
                       __RPC__in REFPROPERTYKEY key,
                               __RPC__in_opt const PROPVARIANT *ppropvar,
                       PSC_STATE state);
        END_INTERFACE
    } IPropertyStoreCacheVtbl;
    interface IPropertyStoreCache
    {
        CONST_VTBL struct IPropertyStoreCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,cProps) )
    ( (This)->lpVtbl -> GetAt(This,iProp,pkey) )
    ( (This)->lpVtbl -> GetValue(This,key,pv) )
    ( (This)->lpVtbl -> SetValue(This,key,propvar) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> GetState(This,key,pstate) )
    ( (This)->lpVtbl -> GetValueAndState(This,key,ppropvar,pstate) )
    ( (This)->lpVtbl -> SetState(This,key,state) )
    ( (This)->lpVtbl -> SetValueAndState(This,key,ppropvar,state) )
typedef
enum PROPENUMTYPE
    {
        PET_DISCRETEVALUE = 0,
        PET_RANGEDVALUE = 1,
        PET_DEFAULTVALUE = 2,
        PET_ENDRANGE = 3
    } PROPENUMTYPE;
EXTERN_C const IID IID_IPropertyEnumType;
    typedef struct IPropertyEnumTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyEnumType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyEnumType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyEnumType * This);
        HRESULT ( STDMETHODCALLTYPE *GetEnumType )(
            __RPC__in IPropertyEnumType * This,
                        __RPC__out PROPENUMTYPE *penumtype);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IPropertyEnumType * This,
                        __RPC__out PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *GetRangeMinValue )(
            __RPC__in IPropertyEnumType * This,
                        __RPC__out PROPVARIANT *ppropvarMin);
        HRESULT ( STDMETHODCALLTYPE *GetRangeSetValue )(
            __RPC__in IPropertyEnumType * This,
                        __RPC__out PROPVARIANT *ppropvarSet);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayText )(
            __RPC__in IPropertyEnumType * This,
                        __RPC__deref_out_opt LPWSTR *ppszDisplay);
        END_INTERFACE
    } IPropertyEnumTypeVtbl;
    interface IPropertyEnumType
    {
        CONST_VTBL struct IPropertyEnumTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEnumType(This,penumtype) )
    ( (This)->lpVtbl -> GetValue(This,ppropvar) )
    ( (This)->lpVtbl -> GetRangeMinValue(This,ppropvarMin) )
    ( (This)->lpVtbl -> GetRangeSetValue(This,ppropvarSet) )
    ( (This)->lpVtbl -> GetDisplayText(This,ppszDisplay) )
EXTERN_C const IID IID_IPropertyEnumType2;
    typedef struct IPropertyEnumType2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyEnumType2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyEnumType2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyEnumType2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEnumType )(
            __RPC__in IPropertyEnumType2 * This,
                        __RPC__out PROPENUMTYPE *penumtype);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in IPropertyEnumType2 * This,
                        __RPC__out PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *GetRangeMinValue )(
            __RPC__in IPropertyEnumType2 * This,
                        __RPC__out PROPVARIANT *ppropvarMin);
        HRESULT ( STDMETHODCALLTYPE *GetRangeSetValue )(
            __RPC__in IPropertyEnumType2 * This,
                        __RPC__out PROPVARIANT *ppropvarSet);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayText )(
            __RPC__in IPropertyEnumType2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszDisplay);
        HRESULT ( STDMETHODCALLTYPE *GetImageReference )(
            __RPC__in IPropertyEnumType2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszImageRes);
        END_INTERFACE
    } IPropertyEnumType2Vtbl;
    interface IPropertyEnumType2
    {
        CONST_VTBL struct IPropertyEnumType2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEnumType(This,penumtype) )
    ( (This)->lpVtbl -> GetValue(This,ppropvar) )
    ( (This)->lpVtbl -> GetRangeMinValue(This,ppropvarMin) )
    ( (This)->lpVtbl -> GetRangeSetValue(This,ppropvarSet) )
    ( (This)->lpVtbl -> GetDisplayText(This,ppszDisplay) )
    ( (This)->lpVtbl -> GetImageReference(This,ppszImageRes) )
EXTERN_C const IID IID_IPropertyEnumTypeList;
    typedef struct IPropertyEnumTypeListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyEnumTypeList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyEnumTypeList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyEnumTypeList * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPropertyEnumTypeList * This,
                        __RPC__out UINT *pctypes);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPropertyEnumTypeList * This,
                       UINT itype,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetConditionAt )(
            __RPC__in IPropertyEnumTypeList * This,
                       UINT nIndex,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *FindMatchingIndex )(
            __RPC__in IPropertyEnumTypeList * This,
                       __RPC__in REFPROPVARIANT propvarCmp,
                        __RPC__out UINT *pnIndex);
        END_INTERFACE
    } IPropertyEnumTypeListVtbl;
    interface IPropertyEnumTypeList
    {
        CONST_VTBL struct IPropertyEnumTypeListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pctypes) )
    ( (This)->lpVtbl -> GetAt(This,itype,riid,ppv) )
    ( (This)->lpVtbl -> GetConditionAt(This,nIndex,riid,ppv) )
    ( (This)->lpVtbl -> FindMatchingIndex(This,propvarCmp,pnIndex) )
typedef
enum PROPDESC_TYPE_FLAGS
    {
        PDTF_DEFAULT = 0,
        PDTF_MULTIPLEVALUES = 0x1,
        PDTF_ISINNATE = 0x2,
        PDTF_ISGROUP = 0x4,
        PDTF_CANGROUPBY = 0x8,
        PDTF_CANSTACKBY = 0x10,
        PDTF_ISTREEPROPERTY = 0x20,
        PDTF_INCLUDEINFULLTEXTQUERY = 0x40,
        PDTF_ISVIEWABLE = 0x80,
        PDTF_ISQUERYABLE = 0x100,
        PDTF_CANBEPURGED = 0x200,
        PDTF_SEARCHRAWVALUE = 0x400,
        PDTF_DONTCOERCEEMPTYSTRINGS = 0x800,
        PDTF_ALWAYSINSUPPLEMENTALSTORE = 0x1000,
        PDTF_ISSYSTEMPROPERTY = 0x80000000,
        PDTF_MASK_ALL = 0x80001fff
    } PROPDESC_TYPE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_TYPE_FLAGS)
typedef
enum PROPDESC_VIEW_FLAGS
    {
        PDVF_DEFAULT = 0,
        PDVF_CENTERALIGN = 0x1,
        PDVF_RIGHTALIGN = 0x2,
        PDVF_BEGINNEWGROUP = 0x4,
        PDVF_FILLAREA = 0x8,
        PDVF_SORTDESCENDING = 0x10,
        PDVF_SHOWONLYIFPRESENT = 0x20,
        PDVF_SHOWBYDEFAULT = 0x40,
        PDVF_SHOWINPRIMARYLIST = 0x80,
        PDVF_SHOWINSECONDARYLIST = 0x100,
        PDVF_HIDELABEL = 0x200,
        PDVF_HIDDEN = 0x800,
        PDVF_CANWRAP = 0x1000,
        PDVF_MASK_ALL = 0x1bff
    } PROPDESC_VIEW_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_VIEW_FLAGS)
typedef
enum PROPDESC_DISPLAYTYPE
    {
        PDDT_STRING = 0,
        PDDT_NUMBER = 1,
        PDDT_BOOLEAN = 2,
        PDDT_DATETIME = 3,
        PDDT_ENUMERATED = 4
    } PROPDESC_DISPLAYTYPE;
typedef
enum PROPDESC_GROUPING_RANGE
    {
        PDGR_DISCRETE = 0,
        PDGR_ALPHANUMERIC = 1,
        PDGR_SIZE = 2,
        PDGR_DYNAMIC = 3,
        PDGR_DATE = 4,
        PDGR_PERCENT = 5,
        PDGR_ENUMERATED = 6
    } PROPDESC_GROUPING_RANGE;
typedef
enum PROPDESC_FORMAT_FLAGS
    {
        PDFF_DEFAULT = 0,
        PDFF_PREFIXNAME = 0x1,
        PDFF_FILENAME = 0x2,
        PDFF_ALWAYSKB = 0x4,
        PDFF_RESERVED_RIGHTTOLEFT = 0x8,
        PDFF_SHORTTIME = 0x10,
        PDFF_LONGTIME = 0x20,
        PDFF_HIDETIME = 0x40,
        PDFF_SHORTDATE = 0x80,
        PDFF_LONGDATE = 0x100,
        PDFF_HIDEDATE = 0x200,
        PDFF_RELATIVEDATE = 0x400,
        PDFF_USEEDITINVITATION = 0x800,
        PDFF_READONLY = 0x1000,
        PDFF_NOAUTOREADINGORDER = 0x2000
    } PROPDESC_FORMAT_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_FORMAT_FLAGS)
typedef
enum PROPDESC_SORTDESCRIPTION
    {
        PDSD_GENERAL = 0,
        PDSD_A_Z = 1,
        PDSD_LOWEST_HIGHEST = 2,
        PDSD_SMALLEST_BIGGEST = 3,
        PDSD_OLDEST_NEWEST = 4
    } PROPDESC_SORTDESCRIPTION;
typedef
enum PROPDESC_RELATIVEDESCRIPTION_TYPE
    {
        PDRDT_GENERAL = 0,
        PDRDT_DATE = 1,
        PDRDT_SIZE = 2,
        PDRDT_COUNT = 3,
        PDRDT_REVISION = 4,
        PDRDT_LENGTH = 5,
        PDRDT_DURATION = 6,
        PDRDT_SPEED = 7,
        PDRDT_RATE = 8,
        PDRDT_RATING = 9,
        PDRDT_PRIORITY = 10
    } PROPDESC_RELATIVEDESCRIPTION_TYPE;
typedef
enum PROPDESC_AGGREGATION_TYPE
    {
        PDAT_DEFAULT = 0,
        PDAT_FIRST = 1,
        PDAT_SUM = 2,
        PDAT_AVERAGE = 3,
        PDAT_DATERANGE = 4,
        PDAT_UNION = 5,
        PDAT_MAX = 6,
        PDAT_MIN = 7
    } PROPDESC_AGGREGATION_TYPE;
typedef
enum PROPDESC_CONDITION_TYPE
    {
        PDCOT_NONE = 0,
        PDCOT_STRING = 1,
        PDCOT_SIZE = 2,
        PDCOT_DATETIME = 3,
        PDCOT_BOOLEAN = 4,
        PDCOT_NUMBER = 5
    } PROPDESC_CONDITION_TYPE;
EXTERN_C const IID IID_IPropertyDescription;
    typedef struct IPropertyDescriptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyDescription * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyDescription * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyDescription * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyKey )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IPropertyDescription * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyType )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out VARTYPE *pvartype);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IPropertyDescription * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetEditInvitation )(
            __RPC__in IPropertyDescription * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszInvite);
        HRESULT ( STDMETHODCALLTYPE *GetTypeFlags )(
            __RPC__in IPropertyDescription * This,
                       PROPDESC_TYPE_FLAGS mask,
                        __RPC__out PROPDESC_TYPE_FLAGS *ppdtFlags);
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPDESC_VIEW_FLAGS *ppdvFlags);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumnWidth )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out UINT *pcxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayType )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPDESC_DISPLAYTYPE *pdisplaytype);
        HRESULT ( STDMETHODCALLTYPE *GetColumnState )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out SHCOLSTATEF *pcsFlags);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingRange )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPDESC_GROUPING_RANGE *pgr);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescriptionType )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPDESC_RELATIVEDESCRIPTION_TYPE *prdt);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescription )(
            __RPC__in IPropertyDescription * This,
                       __RPC__in REFPROPVARIANT propvar1,
                       __RPC__in REFPROPVARIANT propvar2,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc1,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc2);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescription )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPDESC_SORTDESCRIPTION *psd);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescriptionLabel )(
            __RPC__in IPropertyDescription * This,
                       BOOL fDescending,
                                __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetAggregationType )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPDESC_AGGREGATION_TYPE *paggtype);
        HRESULT ( STDMETHODCALLTYPE *GetConditionType )(
            __RPC__in IPropertyDescription * This,
                        __RPC__out PROPDESC_CONDITION_TYPE *pcontype,
                        __RPC__out CONDITION_OPERATION *popDefault);
        HRESULT ( STDMETHODCALLTYPE *GetEnumTypeList )(
            __RPC__in IPropertyDescription * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *CoerceToCanonicalValue )(
            IPropertyDescription * This,
            _Inout_ PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )(
            __RPC__in IPropertyDescription * This,
                       __RPC__in REFPROPVARIANT propvar,
                       PROPDESC_FORMAT_FLAGS pdfFlags,
                                __RPC__deref_out_opt_string LPWSTR *ppszDisplay);
        HRESULT ( STDMETHODCALLTYPE *IsValueCanonical )(
            __RPC__in IPropertyDescription * This,
                       __RPC__in REFPROPVARIANT propvar);
        END_INTERFACE
    } IPropertyDescriptionVtbl;
    interface IPropertyDescription
    {
        CONST_VTBL struct IPropertyDescriptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
                HRESULT STDMETHODCALLTYPE IPropertyDescription_RemoteCoerceToCanonicalValue_Proxy(
    __RPC__in IPropertyDescription * This,
               __RPC__in REFPROPVARIANT propvar,
                __RPC__out PROPVARIANT *ppropvar);
void __RPC_STUB IPropertyDescription_RemoteCoerceToCanonicalValue_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IPropertyDescription2;
    typedef struct IPropertyDescription2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyDescription2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyDescription2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyDescription2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyKey )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IPropertyDescription2 * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyType )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out VARTYPE *pvartype);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IPropertyDescription2 * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetEditInvitation )(
            __RPC__in IPropertyDescription2 * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszInvite);
        HRESULT ( STDMETHODCALLTYPE *GetTypeFlags )(
            __RPC__in IPropertyDescription2 * This,
                       PROPDESC_TYPE_FLAGS mask,
                        __RPC__out PROPDESC_TYPE_FLAGS *ppdtFlags);
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPDESC_VIEW_FLAGS *ppdvFlags);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumnWidth )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out UINT *pcxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayType )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPDESC_DISPLAYTYPE *pdisplaytype);
        HRESULT ( STDMETHODCALLTYPE *GetColumnState )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out SHCOLSTATEF *pcsFlags);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingRange )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPDESC_GROUPING_RANGE *pgr);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescriptionType )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPDESC_RELATIVEDESCRIPTION_TYPE *prdt);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescription )(
            __RPC__in IPropertyDescription2 * This,
                       __RPC__in REFPROPVARIANT propvar1,
                       __RPC__in REFPROPVARIANT propvar2,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc1,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc2);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescription )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPDESC_SORTDESCRIPTION *psd);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescriptionLabel )(
            __RPC__in IPropertyDescription2 * This,
                       BOOL fDescending,
                                __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetAggregationType )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPDESC_AGGREGATION_TYPE *paggtype);
        HRESULT ( STDMETHODCALLTYPE *GetConditionType )(
            __RPC__in IPropertyDescription2 * This,
                        __RPC__out PROPDESC_CONDITION_TYPE *pcontype,
                        __RPC__out CONDITION_OPERATION *popDefault);
        HRESULT ( STDMETHODCALLTYPE *GetEnumTypeList )(
            __RPC__in IPropertyDescription2 * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *CoerceToCanonicalValue )(
            IPropertyDescription2 * This,
            _Inout_ PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )(
            __RPC__in IPropertyDescription2 * This,
                       __RPC__in REFPROPVARIANT propvar,
                       PROPDESC_FORMAT_FLAGS pdfFlags,
                                __RPC__deref_out_opt_string LPWSTR *ppszDisplay);
        HRESULT ( STDMETHODCALLTYPE *IsValueCanonical )(
            __RPC__in IPropertyDescription2 * This,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *GetImageReferenceForValue )(
            __RPC__in IPropertyDescription2 * This,
                       __RPC__in REFPROPVARIANT propvar,
                                __RPC__deref_out_opt_string LPWSTR *ppszImageRes);
        END_INTERFACE
    } IPropertyDescription2Vtbl;
    interface IPropertyDescription2
    {
        CONST_VTBL struct IPropertyDescription2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
    ( (This)->lpVtbl -> GetImageReferenceForValue(This,propvar,ppszImageRes) )
EXTERN_C const IID IID_IPropertyDescriptionAliasInfo;
    typedef struct IPropertyDescriptionAliasInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyDescriptionAliasInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyDescriptionAliasInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyKey )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyType )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out VARTYPE *pvartype);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetEditInvitation )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszInvite);
        HRESULT ( STDMETHODCALLTYPE *GetTypeFlags )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       PROPDESC_TYPE_FLAGS mask,
                        __RPC__out PROPDESC_TYPE_FLAGS *ppdtFlags);
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPDESC_VIEW_FLAGS *ppdvFlags);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumnWidth )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out UINT *pcxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayType )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPDESC_DISPLAYTYPE *pdisplaytype);
        HRESULT ( STDMETHODCALLTYPE *GetColumnState )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out SHCOLSTATEF *pcsFlags);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingRange )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPDESC_GROUPING_RANGE *pgr);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescriptionType )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPDESC_RELATIVEDESCRIPTION_TYPE *prdt);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescription )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       __RPC__in REFPROPVARIANT propvar1,
                       __RPC__in REFPROPVARIANT propvar2,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc1,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc2);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescription )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPDESC_SORTDESCRIPTION *psd);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescriptionLabel )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       BOOL fDescending,
                                __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetAggregationType )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPDESC_AGGREGATION_TYPE *paggtype);
        HRESULT ( STDMETHODCALLTYPE *GetConditionType )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                        __RPC__out PROPDESC_CONDITION_TYPE *pcontype,
                        __RPC__out CONDITION_OPERATION *popDefault);
        HRESULT ( STDMETHODCALLTYPE *GetEnumTypeList )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *CoerceToCanonicalValue )(
            IPropertyDescriptionAliasInfo * This,
            _Inout_ PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       __RPC__in REFPROPVARIANT propvar,
                       PROPDESC_FORMAT_FLAGS pdfFlags,
                                __RPC__deref_out_opt_string LPWSTR *ppszDisplay);
        HRESULT ( STDMETHODCALLTYPE *IsValueCanonical )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *GetSortByAlias )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetAdditionalSortByAliases )(
            __RPC__in IPropertyDescriptionAliasInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IPropertyDescriptionAliasInfoVtbl;
    interface IPropertyDescriptionAliasInfo
    {
        CONST_VTBL struct IPropertyDescriptionAliasInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
    ( (This)->lpVtbl -> GetSortByAlias(This,riid,ppv) )
    ( (This)->lpVtbl -> GetAdditionalSortByAliases(This,riid,ppv) )
typedef
enum PROPDESC_SEARCHINFO_FLAGS
    {
        PDSIF_DEFAULT = 0,
        PDSIF_ININVERTEDINDEX = 0x1,
        PDSIF_ISCOLUMN = 0x2,
        PDSIF_ISCOLUMNSPARSE = 0x4,
        PDSIF_ALWAYSINCLUDE = 0x8,
        PDSIF_USEFORTYPEAHEAD = 0x10
    } PROPDESC_SEARCHINFO_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(PROPDESC_SEARCHINFO_FLAGS)
typedef
enum PROPDESC_COLUMNINDEX_TYPE
    {
        PDCIT_NONE = 0,
        PDCIT_ONDISK = 1,
        PDCIT_INMEMORY = 2,
        PDCIT_ONDEMAND = 3,
        PDCIT_ONDISKALL = 4,
        PDCIT_ONDISKVECTOR = 5
    } PROPDESC_COLUMNINDEX_TYPE;
EXTERN_C const IID IID_IPropertyDescriptionSearchInfo;
    typedef struct IPropertyDescriptionSearchInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyDescriptionSearchInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyDescriptionSearchInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyKey )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyType )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out VARTYPE *pvartype);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetEditInvitation )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszInvite);
        HRESULT ( STDMETHODCALLTYPE *GetTypeFlags )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                       PROPDESC_TYPE_FLAGS mask,
                        __RPC__out PROPDESC_TYPE_FLAGS *ppdtFlags);
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_VIEW_FLAGS *ppdvFlags);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumnWidth )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out UINT *pcxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayType )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_DISPLAYTYPE *pdisplaytype);
        HRESULT ( STDMETHODCALLTYPE *GetColumnState )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out SHCOLSTATEF *pcsFlags);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingRange )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_GROUPING_RANGE *pgr);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescriptionType )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_RELATIVEDESCRIPTION_TYPE *prdt);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescription )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                       __RPC__in REFPROPVARIANT propvar1,
                       __RPC__in REFPROPVARIANT propvar2,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc1,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc2);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescription )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_SORTDESCRIPTION *psd);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescriptionLabel )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                       BOOL fDescending,
                                __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetAggregationType )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_AGGREGATION_TYPE *paggtype);
        HRESULT ( STDMETHODCALLTYPE *GetConditionType )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_CONDITION_TYPE *pcontype,
                        __RPC__out CONDITION_OPERATION *popDefault);
        HRESULT ( STDMETHODCALLTYPE *GetEnumTypeList )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *CoerceToCanonicalValue )(
            IPropertyDescriptionSearchInfo * This,
            _Inout_ PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                       __RPC__in REFPROPVARIANT propvar,
                       PROPDESC_FORMAT_FLAGS pdfFlags,
                                __RPC__deref_out_opt_string LPWSTR *ppszDisplay);
        HRESULT ( STDMETHODCALLTYPE *IsValueCanonical )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *GetSearchInfoFlags )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_SEARCHINFO_FLAGS *ppdsiFlags);
        HRESULT ( STDMETHODCALLTYPE *GetColumnIndexType )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out PROPDESC_COLUMNINDEX_TYPE *ppdciType);
        HRESULT ( STDMETHODCALLTYPE *GetProjectionString )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__deref_out_opt LPWSTR *ppszProjection);
        HRESULT ( STDMETHODCALLTYPE *GetMaxSize )(
            __RPC__in IPropertyDescriptionSearchInfo * This,
                        __RPC__out UINT *pcbMaxSize);
        END_INTERFACE
    } IPropertyDescriptionSearchInfoVtbl;
    interface IPropertyDescriptionSearchInfo
    {
        CONST_VTBL struct IPropertyDescriptionSearchInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
    ( (This)->lpVtbl -> GetSearchInfoFlags(This,ppdsiFlags) )
    ( (This)->lpVtbl -> GetColumnIndexType(This,ppdciType) )
    ( (This)->lpVtbl -> GetProjectionString(This,ppszProjection) )
    ( (This)->lpVtbl -> GetMaxSize(This,pcbMaxSize) )
EXTERN_C const IID IID_IPropertyDescriptionRelatedPropertyInfo;
    typedef struct IPropertyDescriptionRelatedPropertyInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyKey )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPERTYKEY *pkey);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalName )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyType )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out VARTYPE *pvartype);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *GetEditInvitation )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszInvite);
        HRESULT ( STDMETHODCALLTYPE *GetTypeFlags )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       PROPDESC_TYPE_FLAGS mask,
                        __RPC__out PROPDESC_TYPE_FLAGS *ppdtFlags);
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPDESC_VIEW_FLAGS *ppdvFlags);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultColumnWidth )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out UINT *pcxChars);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayType )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPDESC_DISPLAYTYPE *pdisplaytype);
        HRESULT ( STDMETHODCALLTYPE *GetColumnState )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out SHCOLSTATEF *pcsFlags);
        HRESULT ( STDMETHODCALLTYPE *GetGroupingRange )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPDESC_GROUPING_RANGE *pgr);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescriptionType )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPDESC_RELATIVEDESCRIPTION_TYPE *prdt);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeDescription )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       __RPC__in REFPROPVARIANT propvar1,
                       __RPC__in REFPROPVARIANT propvar2,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc1,
                                __RPC__deref_out_opt_string LPWSTR *ppszDesc2);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescription )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPDESC_SORTDESCRIPTION *psd);
        HRESULT ( STDMETHODCALLTYPE *GetSortDescriptionLabel )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       BOOL fDescending,
                                __RPC__deref_out_opt_string LPWSTR *ppszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetAggregationType )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPDESC_AGGREGATION_TYPE *paggtype);
        HRESULT ( STDMETHODCALLTYPE *GetConditionType )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                        __RPC__out PROPDESC_CONDITION_TYPE *pcontype,
                        __RPC__out CONDITION_OPERATION *popDefault);
        HRESULT ( STDMETHODCALLTYPE *GetEnumTypeList )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
                      HRESULT ( STDMETHODCALLTYPE *CoerceToCanonicalValue )(
            IPropertyDescriptionRelatedPropertyInfo * This,
            _Inout_ PROPVARIANT *ppropvar);
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       __RPC__in REFPROPVARIANT propvar,
                       PROPDESC_FORMAT_FLAGS pdfFlags,
                                __RPC__deref_out_opt_string LPWSTR *ppszDisplay);
        HRESULT ( STDMETHODCALLTYPE *IsValueCanonical )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       __RPC__in REFPROPVARIANT propvar);
        HRESULT ( STDMETHODCALLTYPE *GetRelatedProperty )(
            __RPC__in IPropertyDescriptionRelatedPropertyInfo * This,
                       __RPC__in LPCWSTR pszRelationshipName,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IPropertyDescriptionRelatedPropertyInfoVtbl;
    interface IPropertyDescriptionRelatedPropertyInfo
    {
        CONST_VTBL struct IPropertyDescriptionRelatedPropertyInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyKey(This,pkey) )
    ( (This)->lpVtbl -> GetCanonicalName(This,ppszName) )
    ( (This)->lpVtbl -> GetPropertyType(This,pvartype) )
    ( (This)->lpVtbl -> GetDisplayName(This,ppszName) )
    ( (This)->lpVtbl -> GetEditInvitation(This,ppszInvite) )
    ( (This)->lpVtbl -> GetTypeFlags(This,mask,ppdtFlags) )
    ( (This)->lpVtbl -> GetViewFlags(This,ppdvFlags) )
    ( (This)->lpVtbl -> GetDefaultColumnWidth(This,pcxChars) )
    ( (This)->lpVtbl -> GetDisplayType(This,pdisplaytype) )
    ( (This)->lpVtbl -> GetColumnState(This,pcsFlags) )
    ( (This)->lpVtbl -> GetGroupingRange(This,pgr) )
    ( (This)->lpVtbl -> GetRelativeDescriptionType(This,prdt) )
    ( (This)->lpVtbl -> GetRelativeDescription(This,propvar1,propvar2,ppszDesc1,ppszDesc2) )
    ( (This)->lpVtbl -> GetSortDescription(This,psd) )
    ( (This)->lpVtbl -> GetSortDescriptionLabel(This,fDescending,ppszDescription) )
    ( (This)->lpVtbl -> GetAggregationType(This,paggtype) )
    ( (This)->lpVtbl -> GetConditionType(This,pcontype,popDefault) )
    ( (This)->lpVtbl -> GetEnumTypeList(This,riid,ppv) )
    ( (This)->lpVtbl -> CoerceToCanonicalValue(This,ppropvar) )
    ( (This)->lpVtbl -> FormatForDisplay(This,propvar,pdfFlags,ppszDisplay) )
    ( (This)->lpVtbl -> IsValueCanonical(This,propvar) )
    ( (This)->lpVtbl -> GetRelatedProperty(This,pszRelationshipName,riid,ppv) )
typedef
enum PROPDESC_ENUMFILTER
    {
        PDEF_ALL = 0,
        PDEF_SYSTEM = 1,
        PDEF_NONSYSTEM = 2,
        PDEF_VIEWABLE = 3,
        PDEF_QUERYABLE = 4,
        PDEF_INFULLTEXTQUERY = 5,
        PDEF_COLUMN = 6
    } PROPDESC_ENUMFILTER;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_IPropertySystem;
    typedef struct IPropertySystemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertySystem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertySystem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertySystem * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescription )(
            __RPC__in IPropertySystem * This,
                       __RPC__in REFPROPERTYKEY propkey,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescriptionByName )(
            __RPC__in IPropertySystem * This,
                               __RPC__in_string LPCWSTR pszCanonicalName,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyDescriptionListFromString )(
            __RPC__in IPropertySystem * This,
                               __RPC__in_string LPCWSTR pszPropList,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *EnumeratePropertyDescriptions )(
            __RPC__in IPropertySystem * This,
                       PROPDESC_ENUMFILTER filterOn,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplay )(
            __RPC__in IPropertySystem * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFPROPVARIANT propvar,
                       PROPDESC_FORMAT_FLAGS pdff,
                                         __RPC__out_ecount_full_string(cchText) LPWSTR pszText,
                              __RPC__in_range(0,0x8000) DWORD cchText);
        HRESULT ( STDMETHODCALLTYPE *FormatForDisplayAlloc )(
            __RPC__in IPropertySystem * This,
                       __RPC__in REFPROPERTYKEY key,
                       __RPC__in REFPROPVARIANT propvar,
                       PROPDESC_FORMAT_FLAGS pdff,
                                __RPC__deref_out_opt_string LPWSTR *ppszDisplay);
        HRESULT ( STDMETHODCALLTYPE *RegisterPropertySchema )(
            __RPC__in IPropertySystem * This,
                               __RPC__in_string LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *UnregisterPropertySchema )(
            __RPC__in IPropertySystem * This,
                               __RPC__in_string LPCWSTR pszPath);
        HRESULT ( STDMETHODCALLTYPE *RefreshPropertySchema )(
            __RPC__in IPropertySystem * This);
        END_INTERFACE
    } IPropertySystemVtbl;
    interface IPropertySystem
    {
        CONST_VTBL struct IPropertySystemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyDescription(This,propkey,riid,ppv) )
    ( (This)->lpVtbl -> GetPropertyDescriptionByName(This,pszCanonicalName,riid,ppv) )
    ( (This)->lpVtbl -> GetPropertyDescriptionListFromString(This,pszPropList,riid,ppv) )
    ( (This)->lpVtbl -> EnumeratePropertyDescriptions(This,filterOn,riid,ppv) )
    ( (This)->lpVtbl -> FormatForDisplay(This,key,propvar,pdff,pszText,cchText) )
    ( (This)->lpVtbl -> FormatForDisplayAlloc(This,key,propvar,pdff,ppszDisplay) )
    ( (This)->lpVtbl -> RegisterPropertySchema(This,pszPath) )
    ( (This)->lpVtbl -> UnregisterPropertySchema(This,pszPath) )
    ( (This)->lpVtbl -> RefreshPropertySchema(This) )
EXTERN_C const IID IID_IPropertyDescriptionList;
    typedef struct IPropertyDescriptionListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyDescriptionList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyDescriptionList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyDescriptionList * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IPropertyDescriptionList * This,
                        __RPC__out UINT *pcElem);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IPropertyDescriptionList * This,
                       UINT iElem,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IPropertyDescriptionListVtbl;
    interface IPropertyDescriptionList
    {
        CONST_VTBL struct IPropertyDescriptionListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcElem) )
    ( (This)->lpVtbl -> GetAt(This,iElem,riid,ppv) )
EXTERN_C const IID IID_IPropertyStoreFactory;
    typedef struct IPropertyStoreFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertyStoreFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertyStoreFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertyStoreFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStore )(
            __RPC__in IPropertyStoreFactory * This,
                       GETPROPERTYSTOREFLAGS flags,
                               __RPC__in_opt IUnknown *pUnkFactory,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreForKeys )(
            __RPC__in IPropertyStoreFactory * This,
                               __RPC__in_opt const PROPERTYKEY *rgKeys,
                       UINT cKeys,
                       GETPROPERTYSTOREFLAGS flags,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IPropertyStoreFactoryVtbl;
    interface IPropertyStoreFactory
    {
        CONST_VTBL struct IPropertyStoreFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyStore(This,flags,pUnkFactory,riid,ppv) )
    ( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) )
EXTERN_C const IID IID_IDelayedPropertyStoreFactory;
    typedef struct IDelayedPropertyStoreFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDelayedPropertyStoreFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDelayedPropertyStoreFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDelayedPropertyStoreFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStore )(
            __RPC__in IDelayedPropertyStoreFactory * This,
                       GETPROPERTYSTOREFLAGS flags,
                               __RPC__in_opt IUnknown *pUnkFactory,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStoreForKeys )(
            __RPC__in IDelayedPropertyStoreFactory * This,
                               __RPC__in_opt const PROPERTYKEY *rgKeys,
                       UINT cKeys,
                       GETPROPERTYSTOREFLAGS flags,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetDelayedPropertyStore )(
            __RPC__in IDelayedPropertyStoreFactory * This,
                       GETPROPERTYSTOREFLAGS flags,
                       DWORD dwStoreId,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IDelayedPropertyStoreFactoryVtbl;
    interface IDelayedPropertyStoreFactory
    {
        CONST_VTBL struct IDelayedPropertyStoreFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyStore(This,flags,pUnkFactory,riid,ppv) )
    ( (This)->lpVtbl -> GetPropertyStoreForKeys(This,rgKeys,cKeys,flags,riid,ppv) )
    ( (This)->lpVtbl -> GetDelayedPropertyStore(This,flags,dwStoreId,riid,ppv) )
enum _PERSIST_SPROPSTORE_FLAGS
    {
        FPSPS_DEFAULT = 0,
        FPSPS_READONLY = 0x1,
        FPSPS_TREAT_NEW_VALUES_AS_DIRTY = 0x2
    } ;
typedef int PERSIST_SPROPSTORE_FLAGS;
typedef struct tagSERIALIZEDPROPSTORAGE SERIALIZEDPROPSTORAGE;
typedef SERIALIZEDPROPSTORAGE __unaligned *PUSERIALIZEDPROPSTORAGE;
typedef const SERIALIZEDPROPSTORAGE __unaligned *PCUSERIALIZEDPROPSTORAGE;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0021_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0021_v0_0_s_ifspec;
EXTERN_C const IID IID_IPersistSerializedPropStorage;
    typedef struct IPersistSerializedPropStorageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPersistSerializedPropStorage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPersistSerializedPropStorage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPersistSerializedPropStorage * This);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IPersistSerializedPropStorage * This,
                       PERSIST_SPROPSTORE_FLAGS flags);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyStorage )(
            IPersistSerializedPropStorage * This,
            _In_reads_bytes_(cb) PCUSERIALIZEDPROPSTORAGE psps,
            _In_ DWORD cb);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStorage )(
            IPersistSerializedPropStorage * This,
            _Outptr_result_bytebuffer_(*pcb) SERIALIZEDPROPSTORAGE **ppsps,
            _Out_ DWORD *pcb);
        END_INTERFACE
    } IPersistSerializedPropStorageVtbl;
    interface IPersistSerializedPropStorage
    {
        CONST_VTBL struct IPersistSerializedPropStorageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFlags(This,flags) )
    ( (This)->lpVtbl -> SetPropertyStorage(This,psps,cb) )
    ( (This)->lpVtbl -> GetPropertyStorage(This,ppsps,pcb) )
EXTERN_C const IID IID_IPersistSerializedPropStorage2;
    typedef struct IPersistSerializedPropStorage2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPersistSerializedPropStorage2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPersistSerializedPropStorage2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPersistSerializedPropStorage2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IPersistSerializedPropStorage2 * This,
                       PERSIST_SPROPSTORE_FLAGS flags);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyStorage )(
            IPersistSerializedPropStorage2 * This,
            _In_reads_bytes_(cb) PCUSERIALIZEDPROPSTORAGE psps,
            _In_ DWORD cb);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStorage )(
            IPersistSerializedPropStorage2 * This,
            _Outptr_result_bytebuffer_(*pcb) SERIALIZEDPROPSTORAGE **ppsps,
            _Out_ DWORD *pcb);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStorageSize )(
            IPersistSerializedPropStorage2 * This,
            _Out_ DWORD *pcb);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyStorageBuffer )(
            IPersistSerializedPropStorage2 * This,
            _Out_writes_bytes_to_(cb, *pcbWritten) SERIALIZEDPROPSTORAGE *psps,
                       DWORD cb,
            _Out_ DWORD *pcbWritten);
        END_INTERFACE
    } IPersistSerializedPropStorage2Vtbl;
    interface IPersistSerializedPropStorage2
    {
        CONST_VTBL struct IPersistSerializedPropStorage2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFlags(This,flags) )
    ( (This)->lpVtbl -> SetPropertyStorage(This,psps,cb) )
    ( (This)->lpVtbl -> GetPropertyStorage(This,ppsps,pcb) )
    ( (This)->lpVtbl -> GetPropertyStorageSize(This,pcb) )
    ( (This)->lpVtbl -> GetPropertyStorageBuffer(This,psps,cb,pcbWritten) )
EXTERN_C const IID IID_IPropertySystemChangeNotify;
    typedef struct IPropertySystemChangeNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertySystemChangeNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertySystemChangeNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertySystemChangeNotify * This);
        HRESULT ( STDMETHODCALLTYPE *SchemaRefreshed )(
            __RPC__in IPropertySystemChangeNotify * This);
        END_INTERFACE
    } IPropertySystemChangeNotifyVtbl;
    interface IPropertySystemChangeNotify
    {
        CONST_VTBL struct IPropertySystemChangeNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SchemaRefreshed(This) )
EXTERN_C const IID IID_ICreateObject;
    typedef struct ICreateObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICreateObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICreateObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICreateObject * This);
        HRESULT ( STDMETHODCALLTYPE *CreateObject )(
            __RPC__in ICreateObject * This,
                       __RPC__in REFCLSID clsid,
                               __RPC__in_opt IUnknown *pUnkOuter,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } ICreateObjectVtbl;
    interface ICreateObject
    {
        CONST_VTBL struct ICreateObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateObject(This,clsid,pUnkOuter,riid,ppv) )
PSSTDAPI PSFormatForDisplay(
    _In_ REFPROPERTYKEY propkey,
    _In_ REFPROPVARIANT propvar,
    _In_ PROPDESC_FORMAT_FLAGS pdfFlags,
    _Out_writes_(cchText) LPWSTR pwszText,
    _In_ DWORD cchText);
PSSTDAPI PSFormatForDisplayAlloc(
    _In_ REFPROPERTYKEY key,
    _In_ REFPROPVARIANT propvar,
    _In_ PROPDESC_FORMAT_FLAGS pdff,
    _Outptr_ PWSTR *ppszDisplay);
PSSTDAPI PSFormatPropertyValue(
    _In_ IPropertyStore *pps,
    _In_ IPropertyDescription *ppd,
    _In_ PROPDESC_FORMAT_FLAGS pdff,
    _Outptr_ LPWSTR *ppszDisplay);
PSSTDAPI PSGetImageReferenceForValue(
    _In_ REFPROPERTYKEY propkey,
    _In_ REFPROPVARIANT propvar,
    _Outptr_ PWSTR *ppszImageRes);
PSSTDAPI PSStringFromPropertyKey(
    _In_ REFPROPERTYKEY pkey,
    _Out_writes_(cch) LPWSTR psz,
    _In_ UINT cch);
PSSTDAPI PSPropertyKeyFromString(
    _In_ LPCWSTR pszString,
    _Out_ PROPERTYKEY *pkey);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
PSSTDAPI PSCreateMemoryPropertyStore(
    _In_ REFIID riid,
    _Outptr_ void **ppv);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
PSSTDAPI PSCreateDelayedMultiplexPropertyStore(
    _In_ GETPROPERTYSTOREFLAGS flags,
    _In_ IDelayedPropertyStoreFactory *pdpsf,
    _In_reads_(cStores) const DWORD *rgStoreIds,
    _In_ DWORD cStores,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSCreateMultiplexPropertyStore(
    _In_reads_(cStores) IUnknown **prgpunkStores,
    _In_ DWORD cStores,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSCreatePropertyChangeArray(
    _In_reads_opt_(cChanges) const PROPERTYKEY *rgpropkey,
    _In_reads_opt_(cChanges) const PKA_FLAGS *rgflags,
    _In_reads_opt_(cChanges) const PROPVARIANT *rgpropvar,
    _In_ UINT cChanges,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSCreateSimplePropertyChange(
    _In_ PKA_FLAGS flags,
    _In_ REFPROPERTYKEY key,
    _In_ REFPROPVARIANT propvar,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSGetPropertyDescription(
    _In_ REFPROPERTYKEY propkey,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSGetPropertyDescriptionByName(
    _In_ LPCWSTR pszCanonicalName,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSLookupPropertyHandlerCLSID(
    _In_ PCWSTR pszFilePath,
    _Out_ CLSID *pclsid);
PSSTDAPI PSGetItemPropertyHandler(
    _In_ IUnknown *punkItem,
    _In_ BOOL fReadWrite,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSGetItemPropertyHandlerWithCreateObject(
    _In_ IUnknown *punkItem,
    _In_ BOOL fReadWrite,
    _In_ IUnknown *punkCreateObject,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSGetPropertyValue(
    _In_ IPropertyStore *pps,
    _In_ IPropertyDescription *ppd,
    _Out_ PROPVARIANT *ppropvar);
PSSTDAPI PSSetPropertyValue(
    _In_ IPropertyStore *pps,
    _In_ IPropertyDescription *ppd,
    _In_ REFPROPVARIANT propvar);
PSSTDAPI PSRegisterPropertySchema(
    _In_ PCWSTR pszPath);
PSSTDAPI PSUnregisterPropertySchema(
    _In_ PCWSTR pszPath);
PSSTDAPI PSRefreshPropertySchema(void);
PSSTDAPI PSEnumeratePropertyDescriptions(
    _In_ PROPDESC_ENUMFILTER filterOn,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSGetPropertyKeyFromName(
    _In_ PCWSTR pszName,
    _Out_ PROPERTYKEY *ppropkey);
PSSTDAPI PSGetNameFromPropertyKey(
    _In_ REFPROPERTYKEY propkey,
    _Outptr_ PWSTR *ppszCanonicalName);
PSSTDAPI PSCoerceToCanonicalValue(
    _In_ REFPROPERTYKEY key,
    _Inout_ PROPVARIANT *ppropvar);
PSSTDAPI PSGetPropertyDescriptionListFromString(
    _In_ LPCWSTR pszPropList,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSCreatePropertyStoreFromPropertySetStorage(
    _In_ IPropertySetStorage *ppss,
    _In_ DWORD grfMode,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
PSSTDAPI PSCreatePropertyStoreFromObject(
    _In_ IUnknown *punk,
    _In_ DWORD grfMode,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSCreateAdapterFromPropertyStore(
    _In_ IPropertyStore *pps,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
PSSTDAPI PSGetPropertySystem(
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSGetPropertyFromPropertyStorage(
    _In_reads_bytes_(cb) PCUSERIALIZEDPROPSTORAGE psps,
    _In_ DWORD cb,
    _In_ REFPROPERTYKEY rpkey,
    _Out_ PROPVARIANT *ppropvar);
PSSTDAPI PSGetNamedPropertyFromPropertyStorage(
    _In_reads_bytes_(cb) PCUSERIALIZEDPROPSTORAGE psps,
    _In_ DWORD cb,
    _In_ LPCWSTR pszName,
    _Out_ PROPVARIANT *ppropvar);
PSSTDAPI PSPropertyBag_ReadType(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ VARIANT *var,
    VARTYPE type);
PSSTDAPI PSPropertyBag_ReadStr(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_writes_(characterCount) LPWSTR value,
    int characterCount);
PSSTDAPI PSPropertyBag_ReadStrAlloc(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Outptr_ PWSTR *value);
PSSTDAPI PSPropertyBag_ReadBSTR(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Outptr_ BSTR *value);
PSSTDAPI PSPropertyBag_WriteStr(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ LPCWSTR value);
PSSTDAPI PSPropertyBag_WriteBSTR(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ BSTR value);
PSSTDAPI PSPropertyBag_ReadInt(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ INT *value);
PSSTDAPI PSPropertyBag_WriteInt(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    INT value);
PSSTDAPI PSPropertyBag_ReadSHORT(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ SHORT *value);
PSSTDAPI PSPropertyBag_WriteSHORT(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    SHORT value);
PSSTDAPI PSPropertyBag_ReadLONG(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ LONG *value);
PSSTDAPI PSPropertyBag_WriteLONG(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    LONG value);
PSSTDAPI PSPropertyBag_ReadDWORD(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ DWORD *value);
PSSTDAPI PSPropertyBag_WriteDWORD(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    DWORD value);
PSSTDAPI PSPropertyBag_ReadBOOL(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ BOOL *value);
PSSTDAPI PSPropertyBag_WriteBOOL(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    BOOL value);
PSSTDAPI PSPropertyBag_ReadPOINTL(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ POINTL *value);
PSSTDAPI PSPropertyBag_WritePOINTL(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ const POINTL *value);
PSSTDAPI PSPropertyBag_ReadPOINTS(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ POINTS *value);
PSSTDAPI PSPropertyBag_WritePOINTS(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ const POINTS *value);
PSSTDAPI PSPropertyBag_ReadRECTL(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ RECTL *value);
PSSTDAPI PSPropertyBag_WriteRECTL(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ const RECTL *value);
PSSTDAPI PSPropertyBag_ReadStream(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Outptr_ IStream **value);
PSSTDAPI PSPropertyBag_WriteStream(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ IStream *value);
PSSTDAPI PSPropertyBag_Delete(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName);
PSSTDAPI PSPropertyBag_ReadULONGLONG(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ ULONGLONG *value);
PSSTDAPI PSPropertyBag_WriteULONGLONG(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    ULONGLONG value);
PSSTDAPI PSPropertyBag_ReadUnknown(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ REFIID riid,
    _Outptr_ void **ppv);
PSSTDAPI PSPropertyBag_WriteUnknown(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ IUnknown *punk);
PSSTDAPI PSPropertyBag_ReadGUID(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ GUID *value);
PSSTDAPI PSPropertyBag_WriteGUID(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ const GUID *value);
PSSTDAPI PSPropertyBag_ReadPropertyKey(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _Out_ PROPERTYKEY *value);
PSSTDAPI PSPropertyBag_WritePropertyKey(
    _In_ IPropertyBag *propBag,
    _In_ LPCWSTR propName,
    _In_ REFPROPERTYKEY value);
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID LIBID_PropSysObjects;
EXTERN_C const CLSID CLSID_InMemoryPropertyStore;
class DECLSPEC_UUID("9a02e012-6303-4e1e-b9a1-630f802592c5")
InMemoryPropertyStore;
EXTERN_C const CLSID CLSID_InMemoryPropertyStoreMarshalByValue;
class DECLSPEC_UUID("D4CA0E2D-6DA7-4b75-A97C-5F306F0EAEDC")
InMemoryPropertyStoreMarshalByValue;
EXTERN_C const CLSID CLSID_PropertySystem;
class DECLSPEC_UUID("b8967f85-58ae-4f46-9fb2-5d7904798f4b")
PropertySystem;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_propsys_0000_0026_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
              HRESULT STDMETHODCALLTYPE IInitializeWithStream_Initialize_Proxy(
    IInitializeWithStream * This,
    _In_ IStream *pstream,
    _In_ DWORD grfMode);
                HRESULT STDMETHODCALLTYPE IInitializeWithStream_Initialize_Stub(
    __RPC__in IInitializeWithStream * This,
               __RPC__in_opt IStream *pstream,
               DWORD grfMode);
              HRESULT STDMETHODCALLTYPE IPropertyDescription_CoerceToCanonicalValue_Proxy(
    IPropertyDescription * This,
    _Inout_ PROPVARIANT *ppropvar);
                HRESULT STDMETHODCALLTYPE IPropertyDescription_CoerceToCanonicalValue_Stub(
    __RPC__in IPropertyDescription * This,
               __RPC__in REFPROPVARIANT propvar,
                __RPC__out PROPVARIANT *ppropvar);
}
