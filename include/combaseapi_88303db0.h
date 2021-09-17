#include <apiset.h>
#include <apisetcconv.h>
#include <rpc.h>
#include <rpcndr.h>
       
#include <pshpack8.h>
#pragma region Application or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
    #define BEGIN_INTERFACE
    #define END_INTERFACE
                                    const struct iface##Vtbl FAR* lpVtbl; \
                                } iface; \
                                typedef const struct iface##Vtbl iface##Vtbl; \
                                const struct iface##Vtbl
#include <stdlib.h>
                                 CLSCTX_INPROC_HANDLER| \
                                 CLSCTX_LOCAL_SERVER| \
                                 CLSCTX_REMOTE_SERVER)
typedef enum tagREGCLS
{
    REGCLS_SINGLEUSE = 0,
    REGCLS_MULTIPLEUSE = 1,
    REGCLS_MULTI_SEPARATE = 2,
    REGCLS_SUSPENDED = 4,
    REGCLS_SURROGATE = 8,
    REGCLS_AGILE = 0x10,
} REGCLS;
typedef interface IRpcStubBuffer IRpcStubBuffer;
typedef interface IRpcChannelBuffer IRpcChannelBuffer;
typedef enum tagCOINITBASE
{
  COINITBASE_MULTITHREADED = 0x0,
} COINITBASE;
#include <wtypesbase.h>
#include <unknwnbase.h>
#include <objidlbase.h>
#include <guiddef.h>
#include <cguid.h>
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetMalloc(
    _In_ DWORD dwMemContext,
    _Outptr_ LPMALLOC FAR * ppMalloc
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CreateStreamOnHGlobal(
    HGLOBAL hGlobal,
    _In_ BOOL fDeleteOnRelease,
    _Outptr_ LPSTREAM FAR * ppstm
    );
_Check_return_ WINOLEAPI
GetHGlobalFromStream(
    _In_ LPSTREAM pstm,
    _Out_ HGLOBAL FAR * phglobal
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINOLEAPI_(void)
CoUninitialize(
    void
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINOLEAPI_(DWORD)
CoGetCurrentProcess(
    void
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_Check_return_ WINOLEAPI
CoInitializeEx(
    _In_opt_ LPVOID pvReserved,
    _In_ DWORD dwCoInit
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINOLEAPI
CoGetCallerTID(
    _Out_ LPDWORD lpdwTID
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINOLEAPI
CoGetCurrentLogicalThreadId(
    _Out_ GUID* pguid
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetContextToken(
    _Out_ ULONG_PTR* pToken
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetDefaultContext(
    _In_ APTTYPE aptType,
    _In_ REFIID riid,
    _Outptr_ void** ppv
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetApartmentType(
    _Out_ APTTYPE* pAptType,
    _Out_ APTTYPEQUALIFIER* pAptQualifier
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagServerInformation
{
    DWORD dwServerPid;
    DWORD dwServerTid;
    UINT64 ui64ServerAddress;
} ServerInformation, *PServerInformation;
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoDecodeProxy(
    _In_ DWORD dwClientPid,
    _In_ UINT64 ui64ProxyAddress,
    _Out_ PServerInformation pServerInformation
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
DECLARE_HANDLE(CO_MTA_USAGE_COOKIE);
_Check_return_ WINOLEAPI
CoIncrementMTAUsage(
    _Out_ CO_MTA_USAGE_COOKIE* pCookie
    );
               WINOLEAPI
CoDecrementMTAUsage(
    _In_ CO_MTA_USAGE_COOKIE Cookie
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
WINOLEAPI
CoAllowUnmarshalerCLSID(
    _In_ REFCLSID clsid
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetObjectContext(
    _In_ REFIID riid,
    _Outptr_ LPVOID FAR * ppv
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_Check_return_ WINOLEAPI
CoGetClassObject(
    _In_ REFCLSID rclsid,
    _In_ DWORD dwClsContext,
    _In_opt_ LPVOID pvReserved,
    _In_ REFIID riid,
    _Outptr_ LPVOID FAR * ppv
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_Check_return_ WINOLEAPI
CoRegisterClassObject(
    _In_ REFCLSID rclsid,
    _In_ LPUNKNOWN pUnk,
    _In_ DWORD dwClsContext,
    _In_ DWORD flags,
    _Out_ LPDWORD lpdwRegister
    );
WINOLEAPI
CoRevokeClassObject(
    _In_ DWORD dwRegister
    );
_Check_return_ WINOLEAPI
CoResumeClassObjects(
    void
    );
_Check_return_ WINOLEAPI
CoSuspendClassObjects(
    void
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINOLEAPI_(ULONG)
CoAddRefServerProcess(
    void
    );
WINOLEAPI_(ULONG)
CoReleaseServerProcess(
    void
    );
_Check_return_ WINOLEAPI
CoGetPSClsid(
    _In_ REFIID riid,
    _Out_ CLSID* pClsid
    );
_Check_return_ WINOLEAPI
CoRegisterPSClsid(
    _In_ REFIID riid,
    _In_ REFCLSID rclsid
    );
_Check_return_ WINOLEAPI
CoRegisterSurrogate(
    _In_ LPSURROGATE pSurrogate
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetMarshalSizeMax(
    _Out_ ULONG* pulSize,
    _In_ REFIID riid,
    _In_ LPUNKNOWN pUnk,
    _In_ DWORD dwDestContext,
    _In_opt_ LPVOID pvDestContext,
    _In_ DWORD mshlflags
    );
_Check_return_ WINOLEAPI
CoMarshalInterface(
    _In_ LPSTREAM pStm,
    _In_ REFIID riid,
    _In_ LPUNKNOWN pUnk,
    _In_ DWORD dwDestContext,
    _In_opt_ LPVOID pvDestContext,
    _In_ DWORD mshlflags
    );
_Check_return_ WINOLEAPI
CoUnmarshalInterface(
    _In_ LPSTREAM pStm,
    _In_ REFIID riid,
    _COM_Outptr_ LPVOID FAR * ppv
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINOLEAPI
CoMarshalHresult(
    _In_ LPSTREAM pstm,
    _In_ HRESULT hresult
    );
WINOLEAPI
CoUnmarshalHresult(
    _In_ LPSTREAM pstm,
    _Out_ HRESULT FAR * phresult
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoReleaseMarshalData(
    _In_ LPSTREAM pStm
    );
_Check_return_ WINOLEAPI
CoDisconnectObject(
    _In_ LPUNKNOWN pUnk,
    _In_ DWORD dwReserved
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoLockObjectExternal(
    _In_ LPUNKNOWN pUnk,
    _In_ BOOL fLock,
    _In_ BOOL fLastUnlockReleases
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetStandardMarshal(
    _In_ REFIID riid,
    _In_ LPUNKNOWN pUnk,
    _In_ DWORD dwDestContext,
    _In_opt_ LPVOID pvDestContext,
    _In_ DWORD mshlflags,
    _Outptr_ LPMARSHAL FAR * ppMarshal
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetStdMarshalEx(
    _In_ LPUNKNOWN pUnkOuter,
    _In_ DWORD smexflags,
    _Outptr_ LPUNKNOWN FAR * ppUnkInner
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum tagSTDMSHLFLAGS
{
    SMEXF_SERVER = 0x01,
    SMEXF_HANDLER = 0x02
} STDMSHLFLAGS;
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINOLEAPI_(BOOL)
CoIsHandlerConnected(
    _In_ LPUNKNOWN pUnk
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoMarshalInterThreadInterfaceInStream(
    _In_ REFIID riid,
    _In_ LPUNKNOWN pUnk,
    _Outptr_ LPSTREAM* ppStm
    );
_Check_return_ WINOLEAPI
CoGetInterfaceAndReleaseStream(
    _In_ LPSTREAM pStm,
    _In_ REFIID iid,
    _COM_Outptr_ LPVOID FAR * ppv
    );
_Check_return_ WINOLEAPI
CoCreateFreeThreadedMarshaler(
    _In_opt_ LPUNKNOWN punkOuter,
    _Outptr_ LPUNKNOWN* ppunkMarshal
    );
WINOLEAPI_(void)
CoFreeUnusedLibraries(
    void
    );
WINOLEAPI_(void)
CoFreeUnusedLibrariesEx(
    _In_ DWORD dwUnloadDelay,
    _In_ DWORD dwReserved
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoDisconnectContext(
    DWORD dwTimeout
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_Check_return_ WINOLEAPI
CoInitializeSecurity(
    _In_opt_ PSECURITY_DESCRIPTOR pSecDesc,
    _In_ LONG cAuthSvc,
    _In_reads_opt_(cAuthSvc) SOLE_AUTHENTICATION_SERVICE* asAuthSvc,
    _In_opt_ void* pReserved1,
    _In_ DWORD dwAuthnLevel,
    _In_ DWORD dwImpLevel,
    _In_opt_ void* pAuthList,
    _In_ DWORD dwCapabilities,
    _In_opt_ void* pReserved3
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetCallContext(
    _In_ REFIID riid,
    _Outptr_ void** ppInterface
    );
_Check_return_ WINOLEAPI
CoQueryProxyBlanket(
    _In_ IUnknown* pProxy,
    _Out_opt_ DWORD* pwAuthnSvc,
    _Out_opt_ DWORD* pAuthzSvc,
    _Outptr_opt_ LPOLESTR* pServerPrincName,
    _Out_opt_ DWORD* pAuthnLevel,
    _Out_opt_ DWORD* pImpLevel,
    _Out_opt_ RPC_AUTH_IDENTITY_HANDLE* pAuthInfo,
    _Out_opt_ DWORD* pCapabilites
    );
_Check_return_ WINOLEAPI
CoSetProxyBlanket(
    _In_ IUnknown* pProxy,
    _In_ DWORD dwAuthnSvc,
    _In_ DWORD dwAuthzSvc,
    _In_opt_ OLECHAR* pServerPrincName,
    _In_ DWORD dwAuthnLevel,
    _In_ DWORD dwImpLevel,
    _In_opt_ RPC_AUTH_IDENTITY_HANDLE pAuthInfo,
    _In_ DWORD dwCapabilities
    );
_Check_return_ WINOLEAPI
CoCopyProxy(
    _In_ IUnknown* pProxy,
    _Outptr_ IUnknown** ppCopy
    );
_Check_return_ WINOLEAPI
CoQueryClientBlanket(
    _Out_opt_ DWORD* pAuthnSvc,
    _Out_opt_ DWORD* pAuthzSvc,
    _Outptr_opt_ LPOLESTR* pServerPrincName,
    _Out_opt_ DWORD* pAuthnLevel,
    _Out_opt_ DWORD* pImpLevel,
    _Outptr_opt_result_buffer_(_Inexpressible_("depends on pAuthnSvc")) RPC_AUTHZ_HANDLE* pPrivs,
    _Inout_opt_ DWORD* pCapabilities
    );
_Check_return_ WINOLEAPI
CoImpersonateClient(
    void
    );
_Check_return_ WINOLEAPI
CoRevertToSelf(
    void
    );
_Check_return_ WINOLEAPI
CoQueryAuthenticationServices(
    _Out_ DWORD* pcAuthSvc,
    _Outptr_result_buffer_(*pcAuthSvc) SOLE_AUTHENTICATION_SERVICE** asAuthSvc
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoSwitchCallContext(
    _In_opt_ IUnknown* pNewObject,
    _Outptr_ IUnknown** ppOldObject
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_Check_return_ WINOLEAPI
CoCreateInstance(
    _In_ REFCLSID rclsid,
    _In_opt_ LPUNKNOWN pUnkOuter,
    _In_ DWORD dwClsContext,
    _In_ REFIID riid,
    _COM_Outptr_ _At_(*ppv, _Post_readable_size_(_Inexpressible_(varies))) LPVOID FAR * ppv
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoCreateInstanceEx(
    _In_ REFCLSID Clsid,
    _In_opt_ IUnknown* punkOuter,
    _In_ DWORD dwClsCtx,
    _In_opt_ COSERVERINFO* pServerInfo,
    _In_ DWORD dwCount,
    _Inout_updates_(dwCount) MULTI_QI* pResults
    );
WINOLEAPI
CoRegisterActivationFilter(
    _In_ IActivationFilter* pActivationFilter
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoCreateInstanceFromApp(
    _In_ REFCLSID Clsid,
    _In_opt_ IUnknown* punkOuter,
    _In_ DWORD dwClsCtx,
    _In_opt_ PVOID reserved,
    _In_ DWORD dwCount,
    _Inout_updates_(dwCount) MULTI_QI* pResults
    );
#endif
#pragma endregion
#pragma region Not Desktop or OneCore Family
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetCancelObject(
    _In_ DWORD dwThreadId,
    _In_ REFIID iid,
    _Outptr_ void** ppUnk
    );
_Check_return_ WINOLEAPI
CoSetCancelObject(
    _In_opt_ IUnknown* pUnk
    );
_Check_return_ WINOLEAPI
CoCancelCall(
    _In_ DWORD dwThreadId,
    _In_ ULONG ulTimeout
    );
_Check_return_ WINOLEAPI
CoTestCancel(
    void
    );
_Check_return_ WINOLEAPI
CoEnableCallCancellation(
    _In_opt_ LPVOID pReserved
    );
_Check_return_ WINOLEAPI
CoDisableCallCancellation(
    _In_opt_ LPVOID pReserved
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_Check_return_ WINOLEAPI
StringFromCLSID(
    _In_ REFCLSID rclsid,
    _Outptr_ LPOLESTR FAR * lplpsz
    );
_Check_return_ WINOLEAPI
CLSIDFromString(
    _In_ LPCOLESTR lpsz,
    _Out_ LPCLSID pclsid
    );
_Check_return_ WINOLEAPI
StringFromIID(
    _In_ REFIID rclsid,
    _Outptr_ LPOLESTR FAR * lplpsz
    );
_Check_return_ WINOLEAPI
IIDFromString(
    _In_ LPCOLESTR lpsz,
    _Out_ LPIID lpiid
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
ProgIDFromCLSID(
    _In_ REFCLSID clsid,
    _Outptr_ LPOLESTR FAR * lplpszProgID
    );
_Check_return_ WINOLEAPI
CLSIDFromProgID(
    _In_ LPCOLESTR lpszProgID,
    _Out_ LPCLSID lpclsid
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
_Check_return_ WINOLEAPI_(int)
StringFromGUID2(
    _In_ REFGUID rguid,
    _Out_writes_to_(cchMax,return) LPOLESTR lpsz,
    _In_ int cchMax
    );
_Check_return_ WINOLEAPI
CoCreateGuid(
    _Out_ GUID FAR * pguid
    );
typedef struct tagPROPVARIANT PROPVARIANT;
_Check_return_
WINOLEAPI
PropVariantCopy(
    _Out_ PROPVARIANT* pvarDest,
    _In_ const PROPVARIANT* pvarSrc
    );
WINOLEAPI
PropVariantClear(
    _Inout_ PROPVARIANT* pvar
    );
WINOLEAPI
FreePropVariantArray(
    _In_ ULONG cVariants,
    _Inout_updates_(cVariants) PROPVARIANT* rgvars
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoWaitForMultipleHandles(
    _In_ DWORD dwFlags,
    _In_ DWORD dwTimeout,
    _In_ ULONG cHandles,
    _In_reads_(cHandles) LPHANDLE pHandles,
    _Out_ LPDWORD lpdwindex
    );
typedef enum tagCOWAIT_FLAGS
{
  COWAIT_DEFAULT = 0,
  COWAIT_WAITALL = 1,
  COWAIT_ALERTABLE = 2,
  COWAIT_INPUTAVAILABLE = 4,
  COWAIT_DISPATCH_CALLS = 8,
  COWAIT_DISPATCH_WINDOW_MESSAGES = 0x10,
}COWAIT_FLAGS;
typedef enum CWMO_FLAGS
{
  CWMO_DEFAULT = 0,
  CWMO_DISPATCH_CALLS = 1,
  CWMO_DISPATCH_WINDOW_MESSAGES = 2,
} CWMO_FLAGS;
WINOLEAPI
CoWaitForMultipleObjects(
    _In_ DWORD dwFlags,
    _In_ DWORD dwTimeout,
    _In_ ULONG cHandles,
    _In_reads_(cHandles) const HANDLE* pHandles,
    _Out_ LPDWORD lpdwindex
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoGetTreatAsClass(
    _In_ REFCLSID clsidOld,
    _Out_ LPCLSID pClsidNew
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
_Check_return_ WINOLEAPI
CoInvalidateRemoteMachineBindings(
    _In_ LPOLESTR pszMachineName
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
enum AgileReferenceOptions
{
    AGILEREFERENCE_DEFAULT = 0,
    AGILEREFERENCE_DELAYEDMARSHAL = 1,
};
_Check_return_ WINOLEAPI
RoGetAgileReference(
    _In_ enum AgileReferenceOptions options,
    _In_ REFIID riid,
    _In_ IUnknown* pUnk,
    _COM_Outptr_ IAgileReference** ppAgileReference
    );
#endif
#pragma endregion
#pragma region Application or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef HRESULT (STDAPICALLTYPE * LPFNGETCLASSOBJECT) (REFCLSID, REFIID, LPVOID *);
typedef HRESULT (STDAPICALLTYPE * LPFNCANUNLOADNOW)(void);
_Check_return_
STDAPI DllGetClassObject(_In_ REFCLSID rclsid, _In_ REFIID riid, _Outptr_ LPVOID FAR* ppv);
__control_entrypoint(DllExport)
STDAPI DllCanUnloadNow(void);
WINOLEAPI_(_Ret_opt_ _Post_writable_byte_size_(cb) __drv_allocatesMem(Mem) _Check_return_ LPVOID)
CoTaskMemAlloc(
    _In_ SIZE_T cb
    );
WINOLEAPI_(_Ret_opt_ _Post_writable_byte_size_(cb) _When_(cb > 0, __drv_allocatesMem(Mem) _Check_return_) LPVOID)
CoTaskMemRealloc(
    _Pre_maybenull_ __drv_freesMem(Mem) _Post_invalid_ LPVOID pv,
    _In_ SIZE_T cb
    );
WINOLEAPI_(void)
CoTaskMemFree(
    _Frees_ptr_opt_ LPVOID pv
    );
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINOLEAPI
CoFileTimeNow(
    _Out_ FILETIME FAR * lpFileTime
    );
_Check_return_ WINOLEAPI
CLSIDFromProgIDEx(
    _In_ LPCOLESTR lpszProgID,
    _Out_ LPCLSID lpclsid
    );
#endif
#pragma endregion
#include <poppack.h>
