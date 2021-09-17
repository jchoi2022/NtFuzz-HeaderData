#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEmptyVolumeCacheCallBack IEmptyVolumeCacheCallBack;
typedef interface IEmptyVolumeCache IEmptyVolumeCache;
typedef interface IEmptyVolumeCache2 IEmptyVolumeCache2;
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEmptyVolumeCacheCallBack *LPEMPTYVOLUMECACHECALLBACK;
EXTERN_C const IID IID_IEmptyVolumeCacheCallBack;
    typedef struct IEmptyVolumeCacheCallBackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEmptyVolumeCacheCallBack * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEmptyVolumeCacheCallBack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEmptyVolumeCacheCallBack * This);
        HRESULT ( STDMETHODCALLTYPE *ScanProgress )(
            __RPC__in IEmptyVolumeCacheCallBack * This,
                       DWORDLONG dwlSpaceUsed,
                       DWORD dwFlags,
                               __RPC__in_opt LPCWSTR pcwszStatus);
        HRESULT ( STDMETHODCALLTYPE *PurgeProgress )(
            __RPC__in IEmptyVolumeCacheCallBack * This,
                       DWORDLONG dwlSpaceFreed,
                       DWORDLONG dwlSpaceToFree,
                       DWORD dwFlags,
                               __RPC__in_opt LPCWSTR pcwszStatus);
        END_INTERFACE
    } IEmptyVolumeCacheCallBackVtbl;
    interface IEmptyVolumeCacheCallBack
    {
        CONST_VTBL struct IEmptyVolumeCacheCallBackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ScanProgress(This,dwlSpaceUsed,dwFlags,pcwszStatus) )
    ( (This)->lpVtbl -> PurgeProgress(This,dwlSpaceFreed,dwlSpaceToFree,dwFlags,pcwszStatus) )
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEmptyVolumeCache *LPEMPTYVOLUMECACHE;
EXTERN_C const IID IID_IEmptyVolumeCache;
    typedef struct IEmptyVolumeCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEmptyVolumeCache * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEmptyVolumeCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEmptyVolumeCache * This);
                      HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IEmptyVolumeCache * This,
                       HKEY hkRegKey,
                       LPCWSTR pcwszVolume,
                        LPWSTR *ppwszDisplayName,
                        LPWSTR *ppwszDescription,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSpaceUsed )(
            __RPC__in IEmptyVolumeCache * This,
                        __RPC__out DWORDLONG *pdwlSpaceUsed,
                       __RPC__in_opt IEmptyVolumeCacheCallBack *picb);
        HRESULT ( STDMETHODCALLTYPE *Purge )(
            __RPC__in IEmptyVolumeCache * This,
                       DWORDLONG dwlSpaceToFree,
                       __RPC__in_opt IEmptyVolumeCacheCallBack *picb);
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )(
            __RPC__in IEmptyVolumeCache * This,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in IEmptyVolumeCache * This,
                        __RPC__out DWORD *pdwFlags);
        END_INTERFACE
    } IEmptyVolumeCacheVtbl;
    interface IEmptyVolumeCache
    {
        CONST_VTBL struct IEmptyVolumeCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,hkRegKey,pcwszVolume,ppwszDisplayName,ppwszDescription,pdwFlags) )
    ( (This)->lpVtbl -> GetSpaceUsed(This,pdwlSpaceUsed,picb) )
    ( (This)->lpVtbl -> Purge(This,dwlSpaceToFree,picb) )
    ( (This)->lpVtbl -> ShowProperties(This,hwnd) )
    ( (This)->lpVtbl -> Deactivate(This,pdwFlags) )
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0002_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEmptyVolumeCache2 *LPEMPTYVOLUMECACHE2;
EXTERN_C const IID IID_IEmptyVolumeCache2;
    typedef struct IEmptyVolumeCache2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEmptyVolumeCache2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEmptyVolumeCache2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEmptyVolumeCache2 * This);
                      HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IEmptyVolumeCache2 * This,
                       HKEY hkRegKey,
                       LPCWSTR pcwszVolume,
                        LPWSTR *ppwszDisplayName,
                        LPWSTR *ppwszDescription,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSpaceUsed )(
            __RPC__in IEmptyVolumeCache2 * This,
                        __RPC__out DWORDLONG *pdwlSpaceUsed,
                       __RPC__in_opt IEmptyVolumeCacheCallBack *picb);
        HRESULT ( STDMETHODCALLTYPE *Purge )(
            __RPC__in IEmptyVolumeCache2 * This,
                       DWORDLONG dwlSpaceToFree,
                       __RPC__in_opt IEmptyVolumeCacheCallBack *picb);
        HRESULT ( STDMETHODCALLTYPE *ShowProperties )(
            __RPC__in IEmptyVolumeCache2 * This,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in IEmptyVolumeCache2 * This,
                        __RPC__out DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *InitializeEx )(
            IEmptyVolumeCache2 * This,
                       HKEY hkRegKey,
                       LPCWSTR pcwszVolume,
                       LPCWSTR pcwszKeyName,
                        LPWSTR *ppwszDisplayName,
                        LPWSTR *ppwszDescription,
                        LPWSTR *ppwszBtnText,
                        DWORD *pdwFlags);
        END_INTERFACE
    } IEmptyVolumeCache2Vtbl;
    interface IEmptyVolumeCache2
    {
        CONST_VTBL struct IEmptyVolumeCache2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,hkRegKey,pcwszVolume,ppwszDisplayName,ppwszDescription,pdwFlags) )
    ( (This)->lpVtbl -> GetSpaceUsed(This,pdwlSpaceUsed,picb) )
    ( (This)->lpVtbl -> Purge(This,dwlSpaceToFree,picb) )
    ( (This)->lpVtbl -> ShowProperties(This,hwnd) )
    ( (This)->lpVtbl -> Deactivate(This,pdwFlags) )
    ( (This)->lpVtbl -> InitializeEx(This,hkRegKey,pcwszVolume,pcwszKeyName,ppwszDisplayName,ppwszDescription,ppwszBtnText,pdwFlags) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_emptyvc_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
