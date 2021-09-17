#include <winapifamily.h>
#include <rpc.h>
#include <rpcndr.h>
#include <pshpack8.h>
#include <combaseapi.h>
#include <coml2api.h>
typedef enum tagCOINIT
{
  COINIT_APARTMENTTHREADED = 0x2,
  COINIT_MULTITHREADED = COINITBASE_MULTITHREADED,
  COINIT_DISABLE_OLE1DDE = 0x4,
  COINIT_SPEED_OVER_MEMORY = 0x8,
} COINIT;
#include <objidl.h>
BOOL _fastcall wIsEqualGUID(REFGUID rguid1, REFGUID rguid2);
#pragma region Desktop Partition
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINOLEAPI_(DWORD) CoBuildVersion( VOID );
_Check_return_ WINOLEAPI CoInitialize(_In_opt_ LPVOID pvReserved);
_Check_return_ WINOLEAPI CoRegisterMallocSpy(_In_ LPMALLOCSPY pMallocSpy);
_Check_return_ WINOLEAPI CoRevokeMallocSpy(void);
WINOLEAPI CoCreateStandardMalloc(_In_ DWORD memctx, _Outptr_ IMalloc FAR* FAR* ppMalloc);
_Check_return_ WINOLEAPI CoRegisterInitializeSpy(_In_ IInitializeSpy *pSpy, _Out_ ULARGE_INTEGER *puliCookie);
_Check_return_ WINOLEAPI CoRevokeInitializeSpy(_In_ ULARGE_INTEGER uliCookie);
typedef enum tagCOMSD
{
    SD_LAUNCHPERMISSIONS = 0,
    SD_ACCESSPERMISSIONS = 1,
    SD_LAUNCHRESTRICTIONS = 2,
    SD_ACCESSRESTRICTIONS = 3
} COMSD;
_Check_return_ WINOLEAPI CoGetSystemSecurityPermissions(COMSD comSDType, PSECURITY_DESCRIPTOR *ppSD);
WINOLEAPI_(HINSTANCE) CoLoadLibrary(_In_ LPOLESTR lpszLibName, _In_ BOOL bAutoFree);
WINOLEAPI_(void) CoFreeLibrary(_In_ HINSTANCE hInst);
WINOLEAPI_(void) CoFreeAllLibraries(void);
_Check_return_ WINOLEAPI CoGetInstanceFromFile(
    _In_opt_ COSERVERINFO * pServerInfo,
    _In_opt_ CLSID * pClsid,
    _In_opt_ IUnknown * punkOuter,
    _In_ DWORD dwClsCtx,
    _In_ DWORD grfMode,
    _In_ _Null_terminated_ OLECHAR * pwszName,
    _In_ DWORD dwCount,
    _Inout_updates_(dwCount) MULTI_QI * pResults );
_Check_return_ WINOLEAPI CoGetInstanceFromIStorage(
    _In_opt_ COSERVERINFO * pServerInfo,
    _In_opt_ CLSID * pClsid,
    _In_opt_ IUnknown * punkOuter,
    _In_ DWORD dwClsCtx,
    _In_ struct IStorage * pstg,
    _In_ DWORD dwCount,
    _Inout_updates_(dwCount) MULTI_QI * pResults );
WINOLEAPI CoAllowSetForegroundWindow(_In_ IUnknown *pUnk, _In_opt_ LPVOID lpvReserved);
WINOLEAPI DcomChannelSetHResult(_In_opt_ LPVOID pvReserved, _In_opt_ ULONG* pulReserved, _In_ HRESULT appsHR);
WINOLEAPI_(BOOL) CoIsOle1Class(_In_ REFCLSID rclsid);
_Check_return_ WINOLEAPI CLSIDFromProgIDEx (_In_ LPCOLESTR lpszProgID, _Out_ LPCLSID lpclsid);
WINOLEAPI_(BOOL) CoFileTimeToDosDateTime(
                 _In_ FILETIME FAR* lpFileTime, _Out_ LPWORD lpDosDate, _Out_ LPWORD lpDosTime);
WINOLEAPI_(BOOL) CoDosDateTimeToFileTime(
                       _In_ WORD nDosDate, _In_ WORD nDosTime, _Out_ FILETIME FAR* lpFileTime);
WINOLEAPI CoFileTimeNow( _Out_ FILETIME FAR* lpFileTime );
_Check_return_ WINOLEAPI CoRegisterMessageFilter( _In_opt_ LPMESSAGEFILTER lpMessageFilter,
                                _Outptr_opt_result_maybenull_ LPMESSAGEFILTER FAR* lplpMessageFilter );
WINOLEAPI CoRegisterChannelHook( _In_ REFGUID ExtensionUuid, _In_ IChannelHook *pChannelHook );
_Check_return_ WINOLEAPI CoTreatAsClass(_In_ REFCLSID clsidOld, _In_ REFCLSID clsidNew);
WINOLEAPI CreateDataAdviseHolder(_Outptr_ LPDATAADVISEHOLDER FAR* ppDAHolder);
WINOLEAPI CreateDataCache(_In_opt_ LPUNKNOWN pUnkOuter, _In_ REFCLSID rclsid,
                          _In_ REFIID iid, _Out_ LPVOID FAR* ppv);
_Check_return_ WINOLEAPI StgOpenAsyncDocfileOnIFillLockBytes( _In_ IFillLockBytes *pflb,
             _In_ DWORD grfMode,
             _In_ DWORD asyncFlags,
             _Outptr_ IStorage** ppstgOpen);
_Check_return_ WINOLEAPI StgGetIFillLockBytesOnILockBytes( _In_ ILockBytes *pilb,
             _Outptr_ IFillLockBytes** ppflb);
_Check_return_ WINOLEAPI StgGetIFillLockBytesOnFile(_In_ _Null_terminated_ OLECHAR const *pwcsName,
             _Outptr_ IFillLockBytes** ppflb);
_Check_return_ WINOLEAPI StgOpenLayoutDocfile(_In_ _Null_terminated_ OLECHAR const *pwcsDfName,
             _In_ DWORD grfMode,
             _In_ DWORD reserved,
             _Outptr_ IStorage** ppstgOpen);
#endif
#pragma endregion
#pragma region Desktop Partition
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINOLEAPI CoInstall(
    _In_ IBindCtx * pbc,
    _In_ DWORD dwFlags,
    _In_ uCLSSPEC * pClassSpec,
    _In_ QUERYCONTEXT * pQuery,
    _In_ LPWSTR pszCodeBase);
#endif
#pragma endregion
#pragma region PC Application Partition
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP)
_Check_return_ WINOLEAPI BindMoniker(_In_ LPMONIKER pmk, _In_ DWORD grfOpt, _In_ REFIID iidResult, _Outptr_ LPVOID FAR* ppvResult);
_Check_return_ WINOLEAPI CoGetObject(_In_ LPCWSTR pszName, _In_opt_ BIND_OPTS *pBindOptions, _In_ REFIID riid, _Outptr_ void **ppv);
_Check_return_ WINOLEAPI MkParseDisplayName(_In_ LPBC pbc, _In_ LPCOLESTR szUserName,
                _Out_ ULONG FAR * pchEaten, _Outptr_ LPMONIKER FAR * ppmk);
_Check_return_ WINOLEAPI MonikerRelativePathTo(_In_ LPMONIKER pmkSrc, _In_ LPMONIKER pmkDest, _Outptr_ LPMONIKER
                FAR* ppmkRelPath, _In_ BOOL dwReserved);
_Check_return_ WINOLEAPI MonikerCommonPrefixWith(_In_ LPMONIKER pmkThis, _In_ LPMONIKER pmkOther,
                _Outptr_ LPMONIKER FAR* ppmkCommon);
_Check_return_ WINOLEAPI CreateBindCtx(_In_ DWORD reserved, _Outptr_ LPBC FAR* ppbc);
_Check_return_ WINOLEAPI CreateGenericComposite(_In_opt_ LPMONIKER pmkFirst, _In_opt_ LPMONIKER pmkRest,
                _Outptr_ LPMONIKER FAR* ppmkComposite);
_Check_return_ WINOLEAPI GetClassFile (_In_ LPCOLESTR szFilename, _Out_ CLSID FAR* pclsid);
_Check_return_ WINOLEAPI CreateClassMoniker(_In_ REFCLSID rclsid, _Outptr_ LPMONIKER FAR* ppmk);
_Check_return_ WINOLEAPI CreateFileMoniker(_In_ LPCOLESTR lpszPathName, _Outptr_ LPMONIKER FAR* ppmk);
_Check_return_ WINOLEAPI CreateItemMoniker(_In_ LPCOLESTR lpszDelim, _In_ LPCOLESTR lpszItem,
                          _Outptr_ LPMONIKER FAR* ppmk);
_Check_return_ WINOLEAPI CreateAntiMoniker(_Outptr_ LPMONIKER FAR* ppmk);
_Check_return_ WINOLEAPI CreatePointerMoniker(_In_opt_ LPUNKNOWN punk, _Outptr_ LPMONIKER FAR* ppmk);
_Check_return_ WINOLEAPI CreateObjrefMoniker(_In_opt_ LPUNKNOWN punk, _Outptr_ LPMONIKER FAR * ppmk);
#endif
#pragma endregion
#pragma region Desktop Partition
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Check_return_ WINOLEAPI GetRunningObjectTable( _In_ DWORD reserved, _Outptr_ LPRUNNINGOBJECTTABLE FAR* pprot);
#endif
#pragma endregion
#include <urlmon.h>
#include <propidl.h>
#pragma region Desktop Partition
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINOLEAPI CreateStdProgressIndicator(_In_ HWND hwndParent,
                                   _In_ LPCOLESTR pszTitle,
                                   _In_ IBindStatusCallback * pIbscCaller,
                                   _Outptr_ IBindStatusCallback ** ppIbsc);
#endif
#pragma endregion
#include <poppack.h>
