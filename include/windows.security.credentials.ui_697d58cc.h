#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics;
typedef interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResultsVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResultsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * This, __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResultsVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResultsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerificationResult;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerificationResult *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResultVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerifierAvailability;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability;
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailabilityVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailabilityVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability;
typedef struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * This, __RPC__out enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerifierAvailability *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailabilityVtbl;
interface __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailabilityVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CAuthenticationProtocol __x_ABI_CWindows_CSecurity_CCredentials_CUI_CAuthenticationProtocol;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CCredentialSaveOption __x_ABI_CWindows_CSecurity_CCredentials_CUI_CCredentialSaveOption;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerificationResult __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerificationResult;
typedef enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerifierAvailability __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerifierAvailability;
enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CAuthenticationProtocol
{
    AuthenticationProtocol_Basic = 0,
    AuthenticationProtocol_Digest = 1,
    AuthenticationProtocol_Ntlm = 2,
    AuthenticationProtocol_Kerberos = 3,
    AuthenticationProtocol_Negotiate = 4,
    AuthenticationProtocol_CredSsp = 5,
    AuthenticationProtocol_Custom = 6,
};
enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CCredentialSaveOption
{
    CredentialSaveOption_Unselected = 0,
    CredentialSaveOption_Selected = 1,
    CredentialSaveOption_Hidden = 2,
};
enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerificationResult
{
    UserConsentVerificationResult_Verified = 0,
    UserConsentVerificationResult_DeviceNotPresent = 1,
    UserConsentVerificationResult_NotConfiguredForUser = 2,
    UserConsentVerificationResult_DisabledByPolicy = 3,
    UserConsentVerificationResult_DeviceBusy = 4,
    UserConsentVerificationResult_RetriesExhausted = 5,
    UserConsentVerificationResult_Canceled = 6,
};
enum __x_ABI_CWindows_CSecurity_CCredentials_CUI_CUserConsentVerifierAvailability
{
    UserConsentVerifierAvailability_Available = 0,
    UserConsentVerifierAvailability_DeviceNotPresent = 1,
    UserConsentVerifierAvailability_NotConfiguredForUser = 2,
    UserConsentVerifierAvailability_DisabledByPolicy = 3,
    UserConsentVerifierAvailability_DeviceBusy = 4,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_UI_ICredentialPickerOptions[] = L"Windows.Security.Credentials.UI.ICredentialPickerOptions";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Caption )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Caption )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Message )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Message )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ErrorCode )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TargetName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TargetName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AuthenticationProtocol )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  __x_ABI_CWindows_CSecurity_CCredentials_CUI_CAuthenticationProtocol value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AuthenticationProtocol )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CUI_CAuthenticationProtocol * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomAuthenticationProtocol )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomAuthenticationProtocol )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreviousCredential )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviousCredential )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlwaysDisplayDialog )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlwaysDisplayDialog )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CallerSavesCredential )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CallerSavesCredential )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CredentialSaveOption )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                  __x_ABI_CWindows_CSecurity_CCredentials_CUI_CCredentialSaveOption value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialSaveOption )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CUI_CCredentialSaveOption * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptionsVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Caption(This,value) )
    ( (This)->lpVtbl->get_Caption(This,value) )
    ( (This)->lpVtbl->put_Message(This,value) )
    ( (This)->lpVtbl->get_Message(This,value) )
    ( (This)->lpVtbl->put_ErrorCode(This,value) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->put_TargetName(This,value) )
    ( (This)->lpVtbl->get_TargetName(This,value) )
    ( (This)->lpVtbl->put_AuthenticationProtocol(This,value) )
    ( (This)->lpVtbl->get_AuthenticationProtocol(This,value) )
    ( (This)->lpVtbl->put_CustomAuthenticationProtocol(This,value) )
    ( (This)->lpVtbl->get_CustomAuthenticationProtocol(This,value) )
    ( (This)->lpVtbl->put_PreviousCredential(This,value) )
    ( (This)->lpVtbl->get_PreviousCredential(This,value) )
    ( (This)->lpVtbl->put_AlwaysDisplayDialog(This,value) )
    ( (This)->lpVtbl->get_AlwaysDisplayDialog(This,value) )
    ( (This)->lpVtbl->put_CallerSavesCredential(This,value) )
    ( (This)->lpVtbl->get_CallerSavesCredential(This,value) )
    ( (This)->lpVtbl->put_CredentialSaveOption(This,value) )
    ( (This)->lpVtbl->get_CredentialSaveOption(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_UI_ICredentialPickerResults[] = L"Windows.Security.Credentials.UI.ICredentialPickerResults";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResultsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialSaveOption )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                           __RPC__out __x_ABI_CWindows_CSecurity_CCredentials_CUI_CCredentialSaveOption * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialSaved )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Credential )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialDomainName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialUserName )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CredentialPassword )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResultsVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResultsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->get_CredentialSaveOption(This,value) )
    ( (This)->lpVtbl->get_CredentialSaved(This,value) )
    ( (This)->lpVtbl->get_Credential(This,value) )
    ( (This)->lpVtbl->get_CredentialDomainName(This,value) )
    ( (This)->lpVtbl->get_CredentialUserName(This,value) )
    ( (This)->lpVtbl->get_CredentialPassword(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerResults;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_UI_ICredentialPickerStatics[] = L"Windows.Security.Credentials.UI.ICredentialPickerStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *PickWithOptionsAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *PickWithMessageAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This,
                  __RPC__in HSTRING targetName,
                  __RPC__in HSTRING message,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *PickWithCaptionAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics * This,
                  __RPC__in HSTRING targetName,
                  __RPC__in HSTRING message,
                  __RPC__in HSTRING caption,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CCredentialPickerResults * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->PickWithOptionsAsync(This,options,operation) )
    ( (This)->lpVtbl->PickWithMessageAsync(This,targetName,message,operation) )
    ( (This)->lpVtbl->PickWithCaptionAsync(This,targetName,message,caption,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CUI_CICredentialPickerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Security_Credentials_UI_IUserConsentVerifierStatics[] = L"Windows.Security.Credentials.UI.IUserConsentVerifierStatics";
typedef struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CheckAvailabilityAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerifierAvailability * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RequestVerificationAsync )(
        __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics * This,
                  __RPC__in HSTRING message,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CSecurity__CCredentials__CUI__CUserConsentVerificationResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStaticsVtbl;
interface __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CheckAvailabilityAsync(This,result) )
    ( (This)->lpVtbl->RequestVerificationAsync(This,message,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSecurity_CCredentials_CUI_CIUserConsentVerifierStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_UI_CredentialPicker[] = L"Windows.Security.Credentials.UI.CredentialPicker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_UI_CredentialPickerOptions[] = L"Windows.Security.Credentials.UI.CredentialPickerOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_UI_CredentialPickerResults[] = L"Windows.Security.Credentials.UI.CredentialPickerResults";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Security_Credentials_UI_UserConsentVerifier[] = L"Windows.Security.Credentials.UI.UserConsentVerifier";
       
       
#pragma clang diagnostic pop
