#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IProtectionPolicyManagerInterop IProtectionPolicyManagerInterop;
typedef interface IProtectionPolicyManagerInterop2 IProtectionPolicyManagerInterop2;
typedef interface IProtectionPolicyManagerInterop3 IProtectionPolicyManagerInterop3;
#include "inspectable.h"
#include "asyncinfo.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_efswrtinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_efswrtinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IProtectionPolicyManagerInterop;
    typedef struct IProtectionPolicyManagerInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProtectionPolicyManagerInterop * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProtectionPolicyManagerInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProtectionPolicyManagerInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IProtectionPolicyManagerInterop * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IProtectionPolicyManagerInterop * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IProtectionPolicyManagerInterop * This,
                        __RPC__out TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING targetIdentity,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *GetForWindow )(
            __RPC__in IProtectionPolicyManagerInterop * This,
                       __RPC__in HWND appWindow,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **result);
        END_INTERFACE
    } IProtectionPolicyManagerInteropVtbl;
    interface IProtectionPolicyManagerInterop
    {
        CONST_VTBL struct IProtectionPolicyManagerInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> RequestAccessForWindowAsync(This,appWindow,sourceIdentity,targetIdentity,riid,asyncOperation) )
    ( (This)->lpVtbl -> GetForWindow(This,appWindow,riid,result) )
EXTERN_C const IID IID_IProtectionPolicyManagerInterop2;
    typedef struct IProtectionPolicyManagerInterop2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProtectionPolicyManagerInterop2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProtectionPolicyManagerInterop2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                        __RPC__out TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING appPackageFamilyName,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessWithAuditingInfoForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING targetIdentity,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessWithMessageForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING targetIdentity,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in HSTRING messageFromApp,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithAuditingInfoForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING appPackageFamilyName,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithMessageForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop2 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING appPackageFamilyName,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in HSTRING messageFromApp,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        END_INTERFACE
    } IProtectionPolicyManagerInterop2Vtbl;
    interface IProtectionPolicyManagerInterop2
    {
        CONST_VTBL struct IProtectionPolicyManagerInterop2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> RequestAccessForAppWithWindowAsync(This,appWindow,sourceIdentity,appPackageFamilyName,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessWithAuditingInfoForWindowAsync(This,appWindow,sourceIdentity,targetIdentity,auditInfoUnk,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessWithMessageForWindowAsync(This,appWindow,sourceIdentity,targetIdentity,auditInfoUnk,messageFromApp,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessForAppWithAuditingInfoForWindowAsync(This,appWindow,sourceIdentity,appPackageFamilyName,auditInfoUnk,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessForAppWithMessageForWindowAsync(This,appWindow,sourceIdentity,appPackageFamilyName,auditInfoUnk,messageFromApp,riid,asyncOperation) )
EXTERN_C const IID IID_IProtectionPolicyManagerInterop3;
    typedef struct IProtectionPolicyManagerInterop3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProtectionPolicyManagerInterop3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProtectionPolicyManagerInterop3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                        __RPC__deref_out_opt HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                        __RPC__out TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessWithBehaviorForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING targetIdentity,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in HSTRING messageFromApp,
                       UINT32 behavior,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessForAppWithBehaviorForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in HSTRING sourceIdentity,
                       __RPC__in HSTRING appPackageFamilyName,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in HSTRING messageFromApp,
                       UINT32 behavior,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForAppForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in_opt IUnknown *sourceItemListUnk,
                       __RPC__in HSTRING appPackageFamilyName,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForAppWithMessageAndBehaviorForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in_opt IUnknown *sourceItemListUnk,
                       __RPC__in HSTRING appPackageFamilyName,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in HSTRING messageFromApp,
                       UINT32 behavior,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForProcessForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in_opt IUnknown *sourceItemListUnk,
                       UINT32 processId,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        HRESULT ( STDMETHODCALLTYPE *RequestAccessToFilesForProcessWithMessageAndBehaviorForWindowAsync )(
            __RPC__in IProtectionPolicyManagerInterop3 * This,
                       __RPC__in HWND appWindow,
                       __RPC__in_opt IUnknown *sourceItemListUnk,
                       UINT32 processId,
                       __RPC__in_opt IUnknown *auditInfoUnk,
                       __RPC__in HSTRING messageFromApp,
                       UINT32 behavior,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **asyncOperation);
        END_INTERFACE
    } IProtectionPolicyManagerInterop3Vtbl;
    interface IProtectionPolicyManagerInterop3
    {
        CONST_VTBL struct IProtectionPolicyManagerInterop3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> RequestAccessWithBehaviorForWindowAsync(This,appWindow,sourceIdentity,targetIdentity,auditInfoUnk,messageFromApp,behavior,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessForAppWithBehaviorForWindowAsync(This,appWindow,sourceIdentity,appPackageFamilyName,auditInfoUnk,messageFromApp,behavior,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessToFilesForAppForWindowAsync(This,appWindow,sourceItemListUnk,appPackageFamilyName,auditInfoUnk,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessToFilesForAppWithMessageAndBehaviorForWindowAsync(This,appWindow,sourceItemListUnk,appPackageFamilyName,auditInfoUnk,messageFromApp,behavior,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessToFilesForProcessForWindowAsync(This,appWindow,sourceItemListUnk,processId,auditInfoUnk,riid,asyncOperation) )
    ( (This)->lpVtbl -> RequestAccessToFilesForProcessWithMessageAndBehaviorForWindowAsync(This,appWindow,sourceItemListUnk,processId,auditInfoUnk,messageFromApp,behavior,riid,asyncOperation) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_efswrtinterop_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_efswrtinterop_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER HSTRING_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree( __RPC__in unsigned long *, __RPC__in HSTRING * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER HSTRING_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HSTRING * );
unsigned char * __RPC_USER HSTRING_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HSTRING * );
void __RPC_USER HSTRING_UserFree64( __RPC__in unsigned long *, __RPC__in HSTRING * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
