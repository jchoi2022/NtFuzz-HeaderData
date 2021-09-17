#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ItsPubPlugin ItsPubPlugin;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tspubplugincom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tspubplugincom_0000_0000_v0_0_s_ifspec;
typedef struct __MIDL_ItsPubPlugin_0001
    {
    WCHAR alias[ 256 ];
    WCHAR name[ 256 ];
                           WCHAR *resourceFileContents;
    WCHAR fileExtension[ 256 ];
    WCHAR resourcePluginType[ 256 ];
    boolean isDiscoverable;
    long resourceType;
    unsigned long pceIconSize;
                    byte *iconContents;
    unsigned long pcePluginBlobSize;
                    byte *blobContents;
    } pluginResource;
EXTERN_C const IID IID_ItsPubPlugin;
    typedef struct ItsPubPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ItsPubPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ItsPubPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ItsPubPlugin * This);
        HRESULT ( STDMETHODCALLTYPE *GetResourceList )(
            __RPC__in ItsPubPlugin * This,
                       __RPC__in LPCWSTR userID,
                        __RPC__out LONG *pceAppListSize,
                        __RPC__deref_out_opt pluginResource **resourceList);
        HRESULT ( STDMETHODCALLTYPE *GetResource )(
            __RPC__in ItsPubPlugin * This,
                       __RPC__in LPCWSTR alias,
            LONG flags,
                        __RPC__out pluginResource *resource);
                           HRESULT ( STDMETHODCALLTYPE *GetCacheLastUpdateTime )(
            __RPC__in ItsPubPlugin * This,
                        __RPC__out unsigned long long *lastUpdateTime);
                        HRESULT ( STDMETHODCALLTYPE *get_pluginName )(
            __RPC__in ItsPubPlugin * This,
                                __RPC__deref_out_opt BSTR *pVal);
                        HRESULT ( STDMETHODCALLTYPE *get_pluginVersion )(
            __RPC__in ItsPubPlugin * This,
                                __RPC__deref_out_opt BSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *ResolveResource )(
            __RPC__in ItsPubPlugin * This,
                        __RPC__out DWORD *resourceType,
                                __RPC__out_ecount_full_string(256) wchar_t resourceLocation[ 256 ],
                                __RPC__out_ecount_full_string(256) wchar_t endPointName[ 256 ],
                               __RPC__in_string wchar_t *userID,
                               __RPC__in_string wchar_t *alias);
        END_INTERFACE
    } ItsPubPluginVtbl;
    interface ItsPubPlugin
    {
        CONST_VTBL struct ItsPubPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetResourceList(This,userID,pceAppListSize,resourceList) )
    ( (This)->lpVtbl -> GetResource(This,alias,flags,resource) )
    ( (This)->lpVtbl -> GetCacheLastUpdateTime(This,lastUpdateTime) )
    ( (This)->lpVtbl -> get_pluginName(This,pVal) )
    ( (This)->lpVtbl -> get_pluginVersion(This,pVal) )
    ( (This)->lpVtbl -> ResolveResource(This,resourceType,resourceLocation,endPointName,userID,alias) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tspubplugincom_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tspubplugincom_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
