#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ItsPubPlugin2 ItsPubPlugin2;
#include "oaidl.h"
#include "ocidl.h"
#include "tspubplugincom.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tspubplugin2com_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tspubplugin2com_0000_0000_v0_0_s_ifspec;
typedef struct __MIDL_ItsPubPlugin2_0001
    {
    WCHAR extName[ 256 ];
    boolean primaryHandler;
    unsigned long pceIconSize;
                    byte *iconContents;
    } pluginResource2FileAssociation;
typedef __RPC_string WCHAR *pluginFolderName;
typedef struct __MIDL_ItsPubPlugin2_0002
    {
    pluginResource resourceV1;
    unsigned long pceFileAssocListSize;
                    pluginResource2FileAssociation *fileAssocList;
                           WCHAR *securityDescriptor;
    unsigned long pceFolderListSize;
                    pluginFolderName *folderList;
    } pluginResource2;
typedef
enum _TSPUB_PLUGIN_PD_RESOLUTION_TYPE
    {
        TSPUB_PLUGIN_PD_QUERY_OR_CREATE = 0,
        TSPUB_PLUGIN_PD_QUERY_EXISTING = 1
    } TSPUB_PLUGIN_PD_RESOLUTION_TYPE;
typedef
enum _TSPUB_PLUGIN_PD_ASSIGNMENT_TYPE
    {
        TSPUB_PLUGIN_PD_ASSIGNMENT_NEW = 0,
        TSPUB_PLUGIN_PD_ASSIGNMENT_EXISTING = 1
    } TSPUB_PLUGIN_PD_ASSIGNMENT_TYPE;
EXTERN_C const IID IID_ItsPubPlugin2;
    typedef struct ItsPubPlugin2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ItsPubPlugin2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ItsPubPlugin2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ItsPubPlugin2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetResourceList )(
            __RPC__in ItsPubPlugin2 * This,
                       __RPC__in LPCWSTR userID,
                        __RPC__out LONG *pceAppListSize,
                        __RPC__deref_out_opt pluginResource **resourceList);
        HRESULT ( STDMETHODCALLTYPE *GetResource )(
            __RPC__in ItsPubPlugin2 * This,
                       __RPC__in LPCWSTR alias,
            LONG flags,
                        __RPC__out pluginResource *resource);
                           HRESULT ( STDMETHODCALLTYPE *GetCacheLastUpdateTime )(
            __RPC__in ItsPubPlugin2 * This,
                        __RPC__out unsigned long long *lastUpdateTime);
                        HRESULT ( STDMETHODCALLTYPE *get_pluginName )(
            __RPC__in ItsPubPlugin2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                        HRESULT ( STDMETHODCALLTYPE *get_pluginVersion )(
            __RPC__in ItsPubPlugin2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *ResolveResource )(
            __RPC__in ItsPubPlugin2 * This,
                        __RPC__out DWORD *resourceType,
                                __RPC__out_ecount_full_string(256) wchar_t resourceLocation[ 256 ],
                                __RPC__out_ecount_full_string(256) wchar_t endPointName[ 256 ],
                               __RPC__in_string wchar_t *userID,
                               __RPC__in_string wchar_t *alias);
        HRESULT ( STDMETHODCALLTYPE *GetResource2List )(
            __RPC__in ItsPubPlugin2 * This,
                       __RPC__in LPCWSTR userID,
                        __RPC__out LONG *pceAppListSize,
                        __RPC__deref_out_opt pluginResource2 **resourceList);
        HRESULT ( STDMETHODCALLTYPE *GetResource2 )(
            __RPC__in ItsPubPlugin2 * This,
                       __RPC__in LPCWSTR alias,
            LONG flags,
                        __RPC__out pluginResource2 *resource);
        HRESULT ( STDMETHODCALLTYPE *ResolvePersonalDesktop )(
            __RPC__in ItsPubPlugin2 * This,
                               __RPC__in_string const wchar_t *userId,
                               __RPC__in_string const wchar_t *poolId,
                       TSPUB_PLUGIN_PD_RESOLUTION_TYPE ePdResolutionType,
                        __RPC__out TSPUB_PLUGIN_PD_ASSIGNMENT_TYPE *pPdAssignmentType,
                                __RPC__out_ecount_full_string(256) wchar_t endPointName[ 256 ]);
        HRESULT ( STDMETHODCALLTYPE *DeletePersonalDesktopAssignment )(
            __RPC__in ItsPubPlugin2 * This,
                               __RPC__in_string const wchar_t *userId,
                               __RPC__in_string const wchar_t *poolId,
                               __RPC__in_string const wchar_t *endpointName);
        END_INTERFACE
    } ItsPubPlugin2Vtbl;
    interface ItsPubPlugin2
    {
        CONST_VTBL struct ItsPubPlugin2Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetResource2List(This,userID,pceAppListSize,resourceList) )
    ( (This)->lpVtbl -> GetResource2(This,alias,flags,resource) )
    ( (This)->lpVtbl -> ResolvePersonalDesktop(This,userId,poolId,ePdResolutionType,pPdAssignmentType,endPointName) )
    ( (This)->lpVtbl -> DeletePersonalDesktopAssignment(This,userId,poolId,endpointName) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tspubplugin2com_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tspubplugin2com_0000_0001_v0_0_s_ifspec;
}
