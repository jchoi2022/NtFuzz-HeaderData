#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumNetCfgBindingInterface IEnumNetCfgBindingInterface;
typedef interface IEnumNetCfgBindingPath IEnumNetCfgBindingPath;
typedef interface IEnumNetCfgComponent IEnumNetCfgComponent;
typedef interface INetCfg INetCfg;
typedef interface INetCfgLock INetCfgLock;
typedef interface INetCfgBindingInterface INetCfgBindingInterface;
typedef interface INetCfgBindingPath INetCfgBindingPath;
typedef interface INetCfgClass INetCfgClass;
typedef interface INetCfgClassSetup INetCfgClassSetup;
typedef interface INetCfgClassSetup2 INetCfgClassSetup2;
typedef interface INetCfgComponent INetCfgComponent;
typedef interface INetCfgComponentBindings INetCfgComponentBindings;
typedef interface INetCfgSysPrep INetCfgSysPrep;
#include "unknwn.h"
#include "prsht.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_CNetCfg;
extern RPC_IF_HANDLE __MIDL_itf_netcfgx_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcfgx_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumNetCfgBindingInterface;
    typedef struct IEnumNetCfgBindingInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumNetCfgBindingInterface * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumNetCfgBindingInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumNetCfgBindingInterface * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumNetCfgBindingInterface * This,
            _In_range_(>=,1) ULONG celt,
            _At_(*rgelt, _Out_writes_to_(celt, *pceltFetched)) INetCfgBindingInterface **rgelt,
            _When_(celt==1, _Out_opt_) _When_(celt!=1, _Out_) ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumNetCfgBindingInterface * This,
            _In_range_(>=,1) ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumNetCfgBindingInterface * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumNetCfgBindingInterface * This,
            _Reserved_ IEnumNetCfgBindingInterface **ppenum);
        END_INTERFACE
    } IEnumNetCfgBindingInterfaceVtbl;
    interface IEnumNetCfgBindingInterface
    {
        CONST_VTBL struct IEnumNetCfgBindingInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumNetCfgBindingPath;
    typedef struct IEnumNetCfgBindingPathVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumNetCfgBindingPath * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumNetCfgBindingPath * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumNetCfgBindingPath * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumNetCfgBindingPath * This,
            _In_range_(>=,1) ULONG celt,
            _At_(*rgelt, _Out_writes_to_(celt, *pceltFetched)) INetCfgBindingPath **rgelt,
            _When_(celt==1, _Out_opt_) _When_(celt!=1, _Out_) ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumNetCfgBindingPath * This,
            _In_range_(>=, 1) ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumNetCfgBindingPath * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumNetCfgBindingPath * This,
            _Reserved_ IEnumNetCfgBindingPath **ppenum);
        END_INTERFACE
    } IEnumNetCfgBindingPathVtbl;
    interface IEnumNetCfgBindingPath
    {
        CONST_VTBL struct IEnumNetCfgBindingPathVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumNetCfgComponent;
    typedef struct IEnumNetCfgComponentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumNetCfgComponent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumNetCfgComponent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumNetCfgComponent * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumNetCfgComponent * This,
            _In_range_(>=,1) ULONG celt,
            _At_(*rgelt, _Out_writes_to_(celt, *pceltFetched)) INetCfgComponent **rgelt,
            _When_(celt==1, _Out_opt_) _When_(celt!=1, _Out_) ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumNetCfgComponent * This,
            _In_range_(>=, 1) ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumNetCfgComponent * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumNetCfgComponent * This,
            _Reserved_ IEnumNetCfgComponent **ppenum);
        END_INTERFACE
    } IEnumNetCfgComponentVtbl;
    interface IEnumNetCfgComponent
    {
        CONST_VTBL struct IEnumNetCfgComponentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_INetCfg;
    typedef struct INetCfgVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfg * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfg * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfg * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            INetCfg * This,
            _Reserved_ PVOID pvReserved);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            INetCfg * This);
        HRESULT ( STDMETHODCALLTYPE *Apply )(
            INetCfg * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            INetCfg * This);
        HRESULT ( STDMETHODCALLTYPE *EnumComponents )(
            INetCfg * This,
            _In_ const GUID *pguidClass,
            _At_(*ppenumComponent, _Out_opt_) IEnumNetCfgComponent **ppenumComponent);
        HRESULT ( STDMETHODCALLTYPE *FindComponent )(
            INetCfg * This,
            _In_ LPCWSTR pszwInfId,
            _At_(*pComponent, _Out_opt_) INetCfgComponent **pComponent);
        HRESULT ( STDMETHODCALLTYPE *QueryNetCfgClass )(
            INetCfg * This,
            _In_ const GUID *pguidClass,
            _In_ REFIID riid,
            _At_(*ppvObject, _Out_opt_) void **ppvObject);
        END_INTERFACE
    } INetCfgVtbl;
    interface INetCfg
    {
        CONST_VTBL struct INetCfgVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pvReserved) )
    ( (This)->lpVtbl -> Uninitialize(This) )
    ( (This)->lpVtbl -> Apply(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> EnumComponents(This,pguidClass,ppenumComponent) )
    ( (This)->lpVtbl -> FindComponent(This,pszwInfId,pComponent) )
    ( (This)->lpVtbl -> QueryNetCfgClass(This,pguidClass,riid,ppvObject) )
EXTERN_C const IID IID_INetCfgLock;
    typedef struct INetCfgLockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgLock * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgLock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgLock * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireWriteLock )(
            INetCfgLock * This,
            _In_ DWORD cmsTimeout,
            _In_ LPCWSTR pszwClientDescription,
            _At_(*ppszwClientDescription, _Out_opt_) LPWSTR *ppszwClientDescription);
        HRESULT ( STDMETHODCALLTYPE *ReleaseWriteLock )(
            INetCfgLock * This);
        HRESULT ( STDMETHODCALLTYPE *IsWriteLocked )(
            INetCfgLock * This,
            _At_(*ppszwClientDescription, _Out_opt_) LPWSTR *ppszwClientDescription);
        END_INTERFACE
    } INetCfgLockVtbl;
    interface INetCfgLock
    {
        CONST_VTBL struct INetCfgLockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireWriteLock(This,cmsTimeout,pszwClientDescription,ppszwClientDescription) )
    ( (This)->lpVtbl -> ReleaseWriteLock(This) )
    ( (This)->lpVtbl -> IsWriteLocked(This,ppszwClientDescription) )
EXTERN_C const IID IID_INetCfgBindingInterface;
    typedef struct INetCfgBindingInterfaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgBindingInterface * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgBindingInterface * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgBindingInterface * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            INetCfgBindingInterface * This,
            _At_(*ppszwInterfaceName, _Out_opt_) LPWSTR *ppszwInterfaceName);
        HRESULT ( STDMETHODCALLTYPE *GetUpperComponent )(
            INetCfgBindingInterface * This,
            _At_(*ppnccItem, _Out_opt_) INetCfgComponent **ppnccItem);
        HRESULT ( STDMETHODCALLTYPE *GetLowerComponent )(
            INetCfgBindingInterface * This,
            _At_(*ppnccItem, _Out_opt_) INetCfgComponent **ppnccItem);
        END_INTERFACE
    } INetCfgBindingInterfaceVtbl;
    interface INetCfgBindingInterface
    {
        CONST_VTBL struct INetCfgBindingInterfaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,ppszwInterfaceName) )
    ( (This)->lpVtbl -> GetUpperComponent(This,ppnccItem) )
    ( (This)->lpVtbl -> GetLowerComponent(This,ppnccItem) )
EXTERN_C const IID IID_INetCfgBindingPath;
    typedef struct INetCfgBindingPathVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgBindingPath * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgBindingPath * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgBindingPath * This);
        HRESULT ( STDMETHODCALLTYPE *IsSamePathAs )(
            INetCfgBindingPath * This,
            _In_ INetCfgBindingPath *pPath);
        HRESULT ( STDMETHODCALLTYPE *IsSubPathOf )(
            INetCfgBindingPath * This,
            _In_ INetCfgBindingPath *pPath);
        HRESULT ( STDMETHODCALLTYPE *IsEnabled )(
            INetCfgBindingPath * This);
        HRESULT ( STDMETHODCALLTYPE *Enable )(
            INetCfgBindingPath * This,
            _In_ BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *GetPathToken )(
            INetCfgBindingPath * This,
            _At_(*ppszwPathToken, _Out_opt_) LPWSTR *ppszwPathToken);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            INetCfgBindingPath * This,
            _At_(*ppComponent, _Out_opt_) INetCfgComponent **ppComponent);
        HRESULT ( STDMETHODCALLTYPE *GetDepth )(
            INetCfgBindingPath * This,
            _Out_ ULONG *pcInterfaces);
        HRESULT ( STDMETHODCALLTYPE *EnumBindingInterfaces )(
            INetCfgBindingPath * This,
            _At_(*ppenumInterface, _Out_opt_) IEnumNetCfgBindingInterface **ppenumInterface);
        END_INTERFACE
    } INetCfgBindingPathVtbl;
    interface INetCfgBindingPath
    {
        CONST_VTBL struct INetCfgBindingPathVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsSamePathAs(This,pPath) )
    ( (This)->lpVtbl -> IsSubPathOf(This,pPath) )
    ( (This)->lpVtbl -> IsEnabled(This) )
    ( (This)->lpVtbl -> Enable(This,fEnable) )
    ( (This)->lpVtbl -> GetPathToken(This,ppszwPathToken) )
    ( (This)->lpVtbl -> GetOwner(This,ppComponent) )
    ( (This)->lpVtbl -> GetDepth(This,pcInterfaces) )
    ( (This)->lpVtbl -> EnumBindingInterfaces(This,ppenumInterface) )
EXTERN_C const IID IID_INetCfgClass;
    typedef struct INetCfgClassVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgClass * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgClass * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgClass * This);
        HRESULT ( STDMETHODCALLTYPE *FindComponent )(
            INetCfgClass * This,
            _In_ LPCWSTR pszwInfId,
            _At_(*ppnccItem, _Out_opt_) INetCfgComponent **ppnccItem);
        HRESULT ( STDMETHODCALLTYPE *EnumComponents )(
            INetCfgClass * This,
            _At_(*ppenumComponent, _Out_opt_) IEnumNetCfgComponent **ppenumComponent);
        END_INTERFACE
    } INetCfgClassVtbl;
    interface INetCfgClass
    {
        CONST_VTBL struct INetCfgClassVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindComponent(This,pszwInfId,ppnccItem) )
    ( (This)->lpVtbl -> EnumComponents(This,ppenumComponent) )
typedef
enum tagOBO_TOKEN_TYPE
    {
        OBO_USER = 1,
        OBO_COMPONENT = 2,
        OBO_SOFTWARE = 3
    } OBO_TOKEN_TYPE;
typedef struct tagOBO_TOKEN
    {
    OBO_TOKEN_TYPE Type;
    INetCfgComponent *pncc;
    LPCWSTR pszwManufacturer;
    LPCWSTR pszwProduct;
    LPCWSTR pszwDisplayName;
    BOOL fRegistered;
    } OBO_TOKEN;
EXTERN_C const IID IID_INetCfgClassSetup;
    typedef struct INetCfgClassSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgClassSetup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgClassSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgClassSetup * This);
        HRESULT ( STDMETHODCALLTYPE *SelectAndInstall )(
            INetCfgClassSetup * This,
            _In_ HWND hwndParent,
            _In_opt_ OBO_TOKEN *pOboToken,
            _At_(*ppnccItem, _Out_opt_) INetCfgComponent **ppnccItem);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            INetCfgClassSetup * This,
            _In_ LPCWSTR pszwInfId,
            _In_opt_ OBO_TOKEN *pOboToken,
            _In_opt_ DWORD dwSetupFlags,
            _In_opt_ DWORD dwUpgradeFromBuildNo,
            _In_opt_ LPCWSTR pszwAnswerFile,
            _In_opt_ LPCWSTR pszwAnswerSections,
            _At_(*ppnccItem, _Out_opt_) INetCfgComponent **ppnccItem);
        HRESULT ( STDMETHODCALLTYPE *DeInstall )(
            INetCfgClassSetup * This,
            _In_ INetCfgComponent *pComponent,
            _In_opt_ OBO_TOKEN *pOboToken,
            _Inout_opt_ _At_(*pmszwRefs, _Out_opt_) LPWSTR *pmszwRefs);
        END_INTERFACE
    } INetCfgClassSetupVtbl;
    interface INetCfgClassSetup
    {
        CONST_VTBL struct INetCfgClassSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SelectAndInstall(This,hwndParent,pOboToken,ppnccItem) )
    ( (This)->lpVtbl -> Install(This,pszwInfId,pOboToken,dwSetupFlags,dwUpgradeFromBuildNo,pszwAnswerFile,pszwAnswerSections,ppnccItem) )
    ( (This)->lpVtbl -> DeInstall(This,pComponent,pOboToken,pmszwRefs) )
EXTERN_C const IID IID_INetCfgClassSetup2;
    typedef struct INetCfgClassSetup2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgClassSetup2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgClassSetup2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgClassSetup2 * This);
        HRESULT ( STDMETHODCALLTYPE *SelectAndInstall )(
            INetCfgClassSetup2 * This,
            _In_ HWND hwndParent,
            _In_opt_ OBO_TOKEN *pOboToken,
            _At_(*ppnccItem, _Out_opt_) INetCfgComponent **ppnccItem);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            INetCfgClassSetup2 * This,
            _In_ LPCWSTR pszwInfId,
            _In_opt_ OBO_TOKEN *pOboToken,
            _In_opt_ DWORD dwSetupFlags,
            _In_opt_ DWORD dwUpgradeFromBuildNo,
            _In_opt_ LPCWSTR pszwAnswerFile,
            _In_opt_ LPCWSTR pszwAnswerSections,
            _At_(*ppnccItem, _Out_opt_) INetCfgComponent **ppnccItem);
        HRESULT ( STDMETHODCALLTYPE *DeInstall )(
            INetCfgClassSetup2 * This,
            _In_ INetCfgComponent *pComponent,
            _In_opt_ OBO_TOKEN *pOboToken,
            _Inout_opt_ _At_(*pmszwRefs, _Out_opt_) LPWSTR *pmszwRefs);
        HRESULT ( STDMETHODCALLTYPE *UpdateNonEnumeratedComponent )(
            INetCfgClassSetup2 * This,
            _In_ INetCfgComponent *pIComp,
            _Reserved_ DWORD dwSetupFlags,
            _Reserved_ DWORD dwUpgradeFromBuildNo);
        END_INTERFACE
    } INetCfgClassSetup2Vtbl;
    interface INetCfgClassSetup2
    {
        CONST_VTBL struct INetCfgClassSetup2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SelectAndInstall(This,hwndParent,pOboToken,ppnccItem) )
    ( (This)->lpVtbl -> Install(This,pszwInfId,pOboToken,dwSetupFlags,dwUpgradeFromBuildNo,pszwAnswerFile,pszwAnswerSections,ppnccItem) )
    ( (This)->lpVtbl -> DeInstall(This,pComponent,pOboToken,pmszwRefs) )
    ( (This)->lpVtbl -> UpdateNonEnumeratedComponent(This,pIComp,dwSetupFlags,dwUpgradeFromBuildNo) )
typedef
enum tagCOMPONENT_CHARACTERISTICS
    {
        NCF_VIRTUAL = 0x1,
        NCF_SOFTWARE_ENUMERATED = 0x2,
        NCF_PHYSICAL = 0x4,
        NCF_HIDDEN = 0x8,
        NCF_NO_SERVICE = 0x10,
        NCF_NOT_USER_REMOVABLE = 0x20,
        NCF_MULTIPORT_INSTANCED_ADAPTER = 0x40,
        NCF_HAS_UI = 0x80,
        NCF_SINGLE_INSTANCE = 0x100,
        NCF_FILTER = 0x400,
        NCF_DONTEXPOSELOWER = 0x1000,
        NCF_HIDE_BINDING = 0x2000,
        NCF_NDIS_PROTOCOL = 0x4000,
        NCF_FIXED_BINDING = 0x20000,
        NCF_LW_FILTER = 0x40000
    } COMPONENT_CHARACTERISTICS;
typedef
enum tagNCRP_FLAGS
    {
        NCRP_QUERY_PROPERTY_UI = 0x1,
        NCRP_SHOW_PROPERTY_UI = 0x2
    } NCRP_FLAGS;
EXTERN_C const IID IID_INetCfgComponent;
    typedef struct INetCfgComponentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponent * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            INetCfgComponent * This,
            _At_(*ppszwDisplayName, _Out_opt_) LPWSTR *ppszwDisplayName);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            INetCfgComponent * This,
            _In_ LPCWSTR pszwDisplayName);
        HRESULT ( STDMETHODCALLTYPE *GetHelpText )(
            INetCfgComponent * This,
            _At_(*pszwHelpText, _Out_opt_) LPWSTR *pszwHelpText);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            INetCfgComponent * This,
            _At_(*ppszwId, _Out_opt_) LPWSTR *ppszwId);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            INetCfgComponent * This,
            _Out_ LPDWORD pdwCharacteristics);
        HRESULT ( STDMETHODCALLTYPE *GetInstanceGuid )(
            INetCfgComponent * This,
            _Out_opt_ GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetPnpDevNodeId )(
            INetCfgComponent * This,
            _At_(*ppszwDevNodeId, _Out_opt_) LPWSTR *ppszwDevNodeId);
        HRESULT ( STDMETHODCALLTYPE *GetClassGuid )(
            INetCfgComponent * This,
            _Out_opt_ GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *GetBindName )(
            INetCfgComponent * This,
            _At_(*ppszwBindName, _Out_opt_) LPWSTR *ppszwBindName);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceStatus )(
            INetCfgComponent * This,
            _Out_ ULONG *pulStatus);
        HRESULT ( STDMETHODCALLTYPE *OpenParamKey )(
            INetCfgComponent * This,
            _At_(*phkey, _Out_opt_) HKEY *phkey);
        HRESULT ( STDMETHODCALLTYPE *RaisePropertyUi )(
            INetCfgComponent * This,
            _In_opt_ HWND hwndParent,
            _In_ DWORD dwFlags,
            _In_opt_ IUnknown *punkContext);
        END_INTERFACE
    } INetCfgComponentVtbl;
    interface INetCfgComponent
    {
        CONST_VTBL struct INetCfgComponentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,ppszwDisplayName) )
    ( (This)->lpVtbl -> SetDisplayName(This,pszwDisplayName) )
    ( (This)->lpVtbl -> GetHelpText(This,pszwHelpText) )
    ( (This)->lpVtbl -> GetId(This,ppszwId) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pdwCharacteristics) )
    ( (This)->lpVtbl -> GetInstanceGuid(This,pGuid) )
    ( (This)->lpVtbl -> GetPnpDevNodeId(This,ppszwDevNodeId) )
    ( (This)->lpVtbl -> GetClassGuid(This,pGuid) )
    ( (This)->lpVtbl -> GetBindName(This,ppszwBindName) )
    ( (This)->lpVtbl -> GetDeviceStatus(This,pulStatus) )
    ( (This)->lpVtbl -> OpenParamKey(This,phkey) )
    ( (This)->lpVtbl -> RaisePropertyUi(This,hwndParent,dwFlags,punkContext) )
typedef
enum tagSUPPORTS_BINDING_INTERFACE_FLAGS
    {
        NCF_LOWER = 0x1,
        NCF_UPPER = 0x2
    } SUPPORTS_BINDING_INTERFACE_FLAGS;
typedef
enum tagENUM_BINDING_PATHS_FLAGS
    {
        EBP_ABOVE = 0x1,
        EBP_BELOW = 0x2
    } ENUM_BINDING_PATHS_FLAGS;
EXTERN_C const IID IID_INetCfgComponentBindings;
    typedef struct INetCfgComponentBindingsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgComponentBindings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgComponentBindings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgComponentBindings * This);
        HRESULT ( STDMETHODCALLTYPE *BindTo )(
            INetCfgComponentBindings * This,
            _In_ INetCfgComponent *pnccItem);
        HRESULT ( STDMETHODCALLTYPE *UnbindFrom )(
            INetCfgComponentBindings * This,
            _In_ INetCfgComponent *pnccItem);
        HRESULT ( STDMETHODCALLTYPE *SupportsBindingInterface )(
            INetCfgComponentBindings * This,
            _In_ DWORD dwFlags,
            _In_ LPCWSTR pszwInterfaceName);
        HRESULT ( STDMETHODCALLTYPE *IsBoundTo )(
            INetCfgComponentBindings * This,
            _In_ INetCfgComponent *pnccItem);
        HRESULT ( STDMETHODCALLTYPE *IsBindableTo )(
            INetCfgComponentBindings * This,
            _In_ INetCfgComponent *pnccItem);
        HRESULT ( STDMETHODCALLTYPE *EnumBindingPaths )(
            INetCfgComponentBindings * This,
            _In_ DWORD dwFlags,
            _At_(*ppIEnum, _Out_opt_) IEnumNetCfgBindingPath **ppIEnum);
        HRESULT ( STDMETHODCALLTYPE *MoveBefore )(
            INetCfgComponentBindings * This,
            _In_ INetCfgBindingPath *pncbItemSrc,
            _In_opt_ INetCfgBindingPath *pncbItemDest);
        HRESULT ( STDMETHODCALLTYPE *MoveAfter )(
            INetCfgComponentBindings * This,
            _In_ INetCfgBindingPath *pncbItemSrc,
            _In_opt_ INetCfgBindingPath *pncbItemDest);
        END_INTERFACE
    } INetCfgComponentBindingsVtbl;
    interface INetCfgComponentBindings
    {
        CONST_VTBL struct INetCfgComponentBindingsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BindTo(This,pnccItem) )
    ( (This)->lpVtbl -> UnbindFrom(This,pnccItem) )
    ( (This)->lpVtbl -> SupportsBindingInterface(This,dwFlags,pszwInterfaceName) )
    ( (This)->lpVtbl -> IsBoundTo(This,pnccItem) )
    ( (This)->lpVtbl -> IsBindableTo(This,pnccItem) )
    ( (This)->lpVtbl -> EnumBindingPaths(This,dwFlags,ppIEnum) )
    ( (This)->lpVtbl -> MoveBefore(This,pncbItemSrc,pncbItemDest) )
    ( (This)->lpVtbl -> MoveAfter(This,pncbItemSrc,pncbItemDest) )
EXTERN_C const IID IID_INetCfgSysPrep;
    typedef struct INetCfgSysPrepVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INetCfgSysPrep * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INetCfgSysPrep * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INetCfgSysPrep * This);
        HRESULT ( STDMETHODCALLTYPE *HrSetupSetFirstDword )(
            INetCfgSysPrep * This,
            _In_ LPCWSTR pwszSection,
            _In_ LPCWSTR pwszKey,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *HrSetupSetFirstString )(
            INetCfgSysPrep * This,
            _In_ LPCWSTR pwszSection,
            _In_ LPCWSTR pwszKey,
            _In_ LPCWSTR pwszValue);
        HRESULT ( STDMETHODCALLTYPE *HrSetupSetFirstStringAsBool )(
            INetCfgSysPrep * This,
            _In_ LPCWSTR pwszSection,
            _In_ LPCWSTR pwszKey,
                       BOOL fValue);
        HRESULT ( STDMETHODCALLTYPE *HrSetupSetFirstMultiSzField )(
            INetCfgSysPrep * This,
            _In_ LPCWSTR pwszSection,
            _In_ LPCWSTR pwszKey,
            _In_ LPCWSTR pmszValue);
        END_INTERFACE
    } INetCfgSysPrepVtbl;
    interface INetCfgSysPrep
    {
        CONST_VTBL struct INetCfgSysPrepVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> HrSetupSetFirstDword(This,pwszSection,pwszKey,dwValue) )
    ( (This)->lpVtbl -> HrSetupSetFirstString(This,pwszSection,pwszKey,pwszValue) )
    ( (This)->lpVtbl -> HrSetupSetFirstStringAsBool(This,pwszSection,pwszKey,fValue) )
    ( (This)->lpVtbl -> HrSetupSetFirstMultiSzField(This,pwszSection,pwszKey,pmszValue) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_netcfgx_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_netcfgx_0000_0013_v0_0_s_ifspec;
}
