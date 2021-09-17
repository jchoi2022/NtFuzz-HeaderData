#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUserDataPathsInterop IUserDataPathsInterop;
typedef interface ISystemDataPathsInterop ISystemDataPathsInterop;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_knownfolderpathscom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_knownfolderpathscom_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUserDataPathsInterop;
    typedef struct IUserDataPathsInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUserDataPathsInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUserDataPathsInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUserDataPathsInterop * This);
                        HRESULT ( STDMETHODCALLTYPE *get_AdminTools )(
            __RPC__in IUserDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_CDBurning )(
            __RPC__in IUserDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_NetworkShortcuts )(
            __RPC__in IUserDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Programs )(
            __RPC__in IUserDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_SendTo )(
            __RPC__in IUserDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_StartMenu )(
            __RPC__in IUserDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Startup )(
            __RPC__in IUserDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
        END_INTERFACE
    } IUserDataPathsInteropVtbl;
    interface IUserDataPathsInterop
    {
        CONST_VTBL struct IUserDataPathsInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_AdminTools(This,value) )
    ( (This)->lpVtbl -> get_CDBurning(This,value) )
    ( (This)->lpVtbl -> get_NetworkShortcuts(This,value) )
    ( (This)->lpVtbl -> get_Programs(This,value) )
    ( (This)->lpVtbl -> get_SendTo(This,value) )
    ( (This)->lpVtbl -> get_StartMenu(This,value) )
    ( (This)->lpVtbl -> get_Startup(This,value) )
EXTERN_C const IID IID_ISystemDataPathsInterop;
    typedef struct ISystemDataPathsInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISystemDataPathsInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISystemDataPathsInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISystemDataPathsInterop * This);
                        HRESULT ( STDMETHODCALLTYPE *get_CommonAdminTools )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_CommonOemLinks )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_CommonPrograms )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_CommonStartMenu )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_CommonStartup )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_CommonTemplates )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_LocalizedResources )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFiles )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesCommon )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesCommonHost )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesCommonX64 )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesCommonX86 )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesCommonArm )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesHost )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesX64 )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesX86 )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_ProgramFilesArm )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Resource )(
            __RPC__in ISystemDataPathsInterop * This,
                                        __RPC__deref_out_opt_string LPWSTR *value);
        END_INTERFACE
    } ISystemDataPathsInteropVtbl;
    interface ISystemDataPathsInterop
    {
        CONST_VTBL struct ISystemDataPathsInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_CommonAdminTools(This,value) )
    ( (This)->lpVtbl -> get_CommonOemLinks(This,value) )
    ( (This)->lpVtbl -> get_CommonPrograms(This,value) )
    ( (This)->lpVtbl -> get_CommonStartMenu(This,value) )
    ( (This)->lpVtbl -> get_CommonStartup(This,value) )
    ( (This)->lpVtbl -> get_CommonTemplates(This,value) )
    ( (This)->lpVtbl -> get_LocalizedResources(This,value) )
    ( (This)->lpVtbl -> get_ProgramFiles(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesCommon(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesCommonHost(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesCommonX64(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesCommonX86(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesCommonArm(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesHost(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesX64(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesX86(This,value) )
    ( (This)->lpVtbl -> get_ProgramFilesArm(This,value) )
    ( (This)->lpVtbl -> get_Resource(This,value) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_knownfolderpathscom_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_knownfolderpathscom_0000_0002_v0_0_s_ifspec;
}
