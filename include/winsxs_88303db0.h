#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAssemblyName IAssemblyName;
typedef interface IAssemblyCacheItem IAssemblyCacheItem;
typedef interface IAssemblyCache IAssemblyCache;
#include "objidl.h"
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
EXTERN_C const IID IID_IAssemblyName;
EXTERN_C const IID IID_IAssemblyCacheItem;
EXTERN_C const IID IID_IAssemblyScavenger;
EXTERN_C const IID IID_IAssemblyCache;
typedef struct _ASSEMBLY_INFO
    {
    ULONG cbAssemblyInfo;
    DWORD dwAssemblyFlags;
    ULARGE_INTEGER uliAssemblySizeInKB;
    LPWSTR pszCurrentAssemblyPathBuf;
    ULONG cchBuf;
    } ASSEMBLY_INFO;
DEFINE_GUID(FUSION_REFCOUNT_UNINSTALL_SUBKEY_GUID, 0x8cedc215, 0xac4b, 0x488b, 0x93, 0xc0, 0xa5, 0x0a, 0x49, 0xcb, 0x2f, 0xb8);
DEFINE_GUID(FUSION_REFCOUNT_FILEPATH_GUID, 0xb02f9d65, 0xfb77, 0x4f7a, 0xaf, 0xa5, 0xb3, 0x91, 0x30, 0x9f, 0x11, 0xc9);
DEFINE_GUID(FUSION_REFCOUNT_OPAQUE_STRING_GUID, 0x2ec93463, 0xb0c3, 0x45e1, 0x83, 0x64, 0x32, 0x7e, 0x96, 0xae, 0xa8, 0x56);
typedef struct _FUSION_INSTALL_REFERENCE_
    {
    DWORD cbSize;
    DWORD dwFlags;
    GUID guidScheme;
    LPCWSTR szIdentifier;
    LPCWSTR szNonCannonicalData;
    } FUSION_INSTALL_REFERENCE;
typedef struct _FUSION_INSTALL_REFERENCE_ *LPFUSION_INSTALL_REFERENCE;
typedef const struct _FUSION_INSTALL_REFERENCE_ *LPCFUSION_INSTALL_REFERENCE;
extern RPC_IF_HANDLE __MIDL_itf_winsxs_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsxs_0000_0000_v0_0_s_ifspec;
typedef IAssemblyName *LPASSEMBLYNAME;
typedef
enum __MIDL_IAssemblyName_0001
    {
        ASM_NAME_PUBLIC_KEY = 0,
        ASM_NAME_PUBLIC_KEY_TOKEN = ( ASM_NAME_PUBLIC_KEY + 1 ) ,
        ASM_NAME_HASH_VALUE = ( ASM_NAME_PUBLIC_KEY_TOKEN + 1 ) ,
        ASM_NAME_NAME = ( ASM_NAME_HASH_VALUE + 1 ) ,
        ASM_NAME_MAJOR_VERSION = ( ASM_NAME_NAME + 1 ) ,
        ASM_NAME_MINOR_VERSION = ( ASM_NAME_MAJOR_VERSION + 1 ) ,
        ASM_NAME_BUILD_NUMBER = ( ASM_NAME_MINOR_VERSION + 1 ) ,
        ASM_NAME_REVISION_NUMBER = ( ASM_NAME_BUILD_NUMBER + 1 ) ,
        ASM_NAME_CULTURE = ( ASM_NAME_REVISION_NUMBER + 1 ) ,
        ASM_NAME_PROCESSOR_ID_ARRAY = ( ASM_NAME_CULTURE + 1 ) ,
        ASM_NAME_OSINFO_ARRAY = ( ASM_NAME_PROCESSOR_ID_ARRAY + 1 ) ,
        ASM_NAME_HASH_ALGID = ( ASM_NAME_OSINFO_ARRAY + 1 ) ,
        ASM_NAME_ALIAS = ( ASM_NAME_HASH_ALGID + 1 ) ,
        ASM_NAME_CODEBASE_URL = ( ASM_NAME_ALIAS + 1 ) ,
        ASM_NAME_CODEBASE_LASTMOD = ( ASM_NAME_CODEBASE_URL + 1 ) ,
        ASM_NAME_NULL_PUBLIC_KEY = ( ASM_NAME_CODEBASE_LASTMOD + 1 ) ,
        ASM_NAME_NULL_PUBLIC_KEY_TOKEN = ( ASM_NAME_NULL_PUBLIC_KEY + 1 ) ,
        ASM_NAME_CUSTOM = ( ASM_NAME_NULL_PUBLIC_KEY_TOKEN + 1 ) ,
        ASM_NAME_NULL_CUSTOM = ( ASM_NAME_CUSTOM + 1 ) ,
        ASM_NAME_MVID = ( ASM_NAME_NULL_CUSTOM + 1 ) ,
        ASM_NAME_MAX_PARAMS = ( ASM_NAME_MVID + 1 )
    } ASM_NAME;
typedef
enum __MIDL_IAssemblyName_0002
    {
        ASM_BINDF_FORCE_CACHE_INSTALL = 0x1,
        ASM_BINDF_RFS_INTEGRITY_CHECK = 0x2,
        ASM_BINDF_RFS_MODULE_CHECK = 0x4,
        ASM_BINDF_BINPATH_PROBE_ONLY = 0x8,
        ASM_BINDF_SHARED_BINPATH_HINT = 0x10,
        ASM_BINDF_PARENT_ASM_HINT = 0x20
    } ASM_BIND_FLAGS;
typedef
enum __MIDL_IAssemblyName_0003
    {
        ASM_DISPLAYF_VERSION = 0x1,
        ASM_DISPLAYF_CULTURE = 0x2,
        ASM_DISPLAYF_PUBLIC_KEY_TOKEN = 0x4,
        ASM_DISPLAYF_PUBLIC_KEY = 0x8,
        ASM_DISPLAYF_CUSTOM = 0x10,
        ASM_DISPLAYF_PROCESSORARCHITECTURE = 0x20,
        ASM_DISPLAYF_LANGUAGEID = 0x40
    } ASM_DISPLAY_FLAGS;
typedef
enum __MIDL_IAssemblyName_0004
    {
        ASM_CMPF_NAME = 0x1,
        ASM_CMPF_MAJOR_VERSION = 0x2,
        ASM_CMPF_MINOR_VERSION = 0x4,
        ASM_CMPF_BUILD_NUMBER = 0x8,
        ASM_CMPF_REVISION_NUMBER = 0x10,
        ASM_CMPF_PUBLIC_KEY_TOKEN = 0x20,
        ASM_CMPF_CULTURE = 0x40,
        ASM_CMPF_CUSTOM = 0x80,
        ASM_CMPF_ALL = ( ( ( ( ( ( ( ASM_CMPF_NAME | ASM_CMPF_MAJOR_VERSION ) | ASM_CMPF_MINOR_VERSION ) | ASM_CMPF_REVISION_NUMBER ) | ASM_CMPF_BUILD_NUMBER ) | ASM_CMPF_PUBLIC_KEY_TOKEN ) | ASM_CMPF_CULTURE ) | ASM_CMPF_CUSTOM ) ,
        ASM_CMPF_DEFAULT = 0x100
    } ASM_CMP_FLAGS;
EXTERN_C const IID IID_IAssemblyName;
    typedef struct IAssemblyNameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAssemblyName * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAssemblyName * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAssemblyName * This);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            IAssemblyName * This,
                       DWORD PropertyId,
                       LPVOID pvProperty,
                       DWORD cbProperty);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IAssemblyName * This,
                       DWORD PropertyId,
                        LPVOID pvProperty,
                            LPDWORD pcbProperty);
        HRESULT ( STDMETHODCALLTYPE *Finalize )(
            IAssemblyName * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            IAssemblyName * This,
            _Out_writes_opt_(*pccDisplayName) LPWSTR szDisplayName,
            _Inout_ LPDWORD pccDisplayName,
                       DWORD dwDisplayFlags);
        HRESULT ( STDMETHODCALLTYPE *Reserved )(
            IAssemblyName * This,
                       REFIID refIID,
                       IUnknown *pUnkReserved1,
                       IUnknown *pUnkReserved2,
                       LPCOLESTR szReserved,
                       LONGLONG llReserved,
                       LPVOID pvReserved,
                       DWORD cbReserved,
                        LPVOID *ppReserved);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IAssemblyName * This,
            _Inout_ LPDWORD lpcwBuffer,
            _Out_writes_opt_(*lpcwBuffer) LPWSTR pwzName);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            IAssemblyName * This,
                        LPDWORD pdwVersionHi,
                        LPDWORD pdwVersionLow);
        HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            IAssemblyName * This,
                       IAssemblyName *pName,
                       DWORD dwCmpFlags);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IAssemblyName * This,
                        IAssemblyName **pName);
        END_INTERFACE
    } IAssemblyNameVtbl;
    interface IAssemblyName
    {
        CONST_VTBL struct IAssemblyNameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetProperty(This,PropertyId,pvProperty,cbProperty) )
    ( (This)->lpVtbl -> GetProperty(This,PropertyId,pvProperty,pcbProperty) )
    ( (This)->lpVtbl -> Finalize(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,szDisplayName,pccDisplayName,dwDisplayFlags) )
    ( (This)->lpVtbl -> Reserved(This,refIID,pUnkReserved1,pUnkReserved2,szReserved,llReserved,pvReserved,cbReserved,ppReserved) )
    ( (This)->lpVtbl -> GetName(This,lpcwBuffer,pwzName) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersionHi,pdwVersionLow) )
    ( (This)->lpVtbl -> IsEqual(This,pName,dwCmpFlags) )
    ( (This)->lpVtbl -> Clone(This,pName) )
EXTERN_C const IID IID_IAssemblyCacheItem;
    typedef struct IAssemblyCacheItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAssemblyCacheItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAssemblyCacheItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAssemblyCacheItem * This);
        HRESULT ( STDMETHODCALLTYPE *CreateStream )(
            IAssemblyCacheItem * This,
                       DWORD dwFlags,
                       LPCWSTR pszStreamName,
                       DWORD dwFormat,
                       DWORD dwFormatFlags,
                        IStream **ppIStream,
                                 ULARGE_INTEGER *puliMaxSize);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            IAssemblyCacheItem * This,
                       DWORD dwFlags,
                                  ULONG *pulDisposition);
        HRESULT ( STDMETHODCALLTYPE *AbortItem )(
            IAssemblyCacheItem * This);
        END_INTERFACE
    } IAssemblyCacheItemVtbl;
    interface IAssemblyCacheItem
    {
        CONST_VTBL struct IAssemblyCacheItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateStream(This,dwFlags,pszStreamName,dwFormat,dwFormatFlags,ppIStream,puliMaxSize) )
    ( (This)->lpVtbl -> Commit(This,dwFlags,pulDisposition) )
    ( (This)->lpVtbl -> AbortItem(This) )
EXTERN_C const IID IID_IAssemblyCache;
    typedef struct IAssemblyCacheVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAssemblyCache * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAssemblyCache * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAssemblyCache * This);
        HRESULT ( STDMETHODCALLTYPE *UninstallAssembly )(
            IAssemblyCache * This,
                       DWORD dwFlags,
                       LPCWSTR pszAssemblyName,
                       LPCFUSION_INSTALL_REFERENCE pRefData,
                                  ULONG *pulDisposition);
        HRESULT ( STDMETHODCALLTYPE *QueryAssemblyInfo )(
            IAssemblyCache * This,
                       DWORD dwFlags,
                       LPCWSTR pszAssemblyName,
                            ASSEMBLY_INFO *pAsmInfo);
        HRESULT ( STDMETHODCALLTYPE *CreateAssemblyCacheItem )(
            IAssemblyCache * This,
                       DWORD dwFlags,
                       PVOID pvReserved,
                        IAssemblyCacheItem **ppAsmItem,
                                 LPCWSTR pszAssemblyName);
        HRESULT ( STDMETHODCALLTYPE *Reserved )(
            IAssemblyCache * This,
                        IUnknown **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *InstallAssembly )(
            IAssemblyCache * This,
                       DWORD dwFlags,
                       LPCWSTR pszManifestFilePath,
                       LPCFUSION_INSTALL_REFERENCE pRefData);
        END_INTERFACE
    } IAssemblyCacheVtbl;
    interface IAssemblyCache
    {
        CONST_VTBL struct IAssemblyCacheVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UninstallAssembly(This,dwFlags,pszAssemblyName,pRefData,pulDisposition) )
    ( (This)->lpVtbl -> QueryAssemblyInfo(This,dwFlags,pszAssemblyName,pAsmInfo) )
    ( (This)->lpVtbl -> CreateAssemblyCacheItem(This,dwFlags,pvReserved,ppAsmItem,pszAssemblyName) )
    ( (This)->lpVtbl -> Reserved(This,ppUnk) )
    ( (This)->lpVtbl -> InstallAssembly(This,dwFlags,pszManifestFilePath,pRefData) )
typedef
enum __MIDL___MIDL_itf_winsxs_0000_0003_0001
    {
        CANOF_PARSE_DISPLAY_NAME = 0x1,
        CANOF_SET_DEFAULT_VALUES = 0x2
    } CREATE_ASM_NAME_OBJ_FLAGS;
STDAPI CreateAssemblyNameObject(LPASSEMBLYNAME *ppAssemblyNameObj, LPCWSTR szAssemblyName, DWORD dwFlags, LPVOID pvReserved);
STDAPI CreateAssemblyCache(IAssemblyCache **ppAsmCache, DWORD dwReserved);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_winsxs_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_winsxs_0000_0003_v0_0_s_ifspec;
}
