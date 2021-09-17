#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IStorageProviderPropertyHandler IStorageProviderPropertyHandler;
typedef interface IStorageProviderHandler IStorageProviderHandler;
#include "oaidl.h"
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_storageprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_storageprovider_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IStorageProviderPropertyHandler;
    typedef struct IStorageProviderPropertyHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStorageProviderPropertyHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStorageProviderPropertyHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStorageProviderPropertyHandler * This);
        HRESULT ( STDMETHODCALLTYPE *RetrieveProperties )(
            __RPC__in IStorageProviderPropertyHandler * This,
                                __RPC__in_ecount_full(propertiesToRetrieveCount) const PROPERTYKEY *propertiesToRetrieve,
                       ULONG propertiesToRetrieveCount,
                        __RPC__deref_out_opt IPropertyStore **retrievedProperties);
        HRESULT ( STDMETHODCALLTYPE *SaveProperties )(
            __RPC__in IStorageProviderPropertyHandler * This,
                       __RPC__in_opt IPropertyStore *propertiesToSave);
        END_INTERFACE
    } IStorageProviderPropertyHandlerVtbl;
    interface IStorageProviderPropertyHandler
    {
        CONST_VTBL struct IStorageProviderPropertyHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RetrieveProperties(This,propertiesToRetrieve,propertiesToRetrieveCount,retrievedProperties) )
    ( (This)->lpVtbl -> SaveProperties(This,propertiesToSave) )
EXTERN_C const IID IID_IStorageProviderHandler;
    typedef struct IStorageProviderHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStorageProviderHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStorageProviderHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStorageProviderHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyHandlerFromPath )(
            __RPC__in IStorageProviderHandler * This,
                       __RPC__in LPCWSTR path,
                        __RPC__deref_out_opt IStorageProviderPropertyHandler **propertyHandler);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyHandlerFromUri )(
            __RPC__in IStorageProviderHandler * This,
                       __RPC__in LPCWSTR uri,
                        __RPC__deref_out_opt IStorageProviderPropertyHandler **propertyHandler);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyHandlerFromFileId )(
            __RPC__in IStorageProviderHandler * This,
                       __RPC__in LPCWSTR fileId,
                        __RPC__deref_out_opt IStorageProviderPropertyHandler **propertyHandler);
        END_INTERFACE
    } IStorageProviderHandlerVtbl;
    interface IStorageProviderHandler
    {
        CONST_VTBL struct IStorageProviderHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyHandlerFromPath(This,path,propertyHandler) )
    ( (This)->lpVtbl -> GetPropertyHandlerFromUri(This,uri,propertyHandler) )
    ( (This)->lpVtbl -> GetPropertyHandlerFromFileId(This,fileId,propertyHandler) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_storageprovider_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_storageprovider_0000_0002_v0_0_s_ifspec;
}
