#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITpmVirtualSmartCardManagerStatusCallback ITpmVirtualSmartCardManagerStatusCallback;
typedef interface ITpmVirtualSmartCardManager ITpmVirtualSmartCardManager;
typedef interface ITpmVirtualSmartCardManager2 ITpmVirtualSmartCardManager2;
typedef interface ITpmVirtualSmartCardManager3 ITpmVirtualSmartCardManager3;
typedef class TpmVirtualSmartCardManager TpmVirtualSmartCardManager;
typedef class RemoteTpmVirtualSmartCardManager RemoteTpmVirtualSmartCardManager;
#include "oaidl.h"
#include "TpmVscAttestation.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_tpmvscmgr_0000_0000_0001
    {
        TPMVSCMGR_STATUS_VTPMSMARTCARD_INITIALIZING = 0,
        TPMVSCMGR_STATUS_VTPMSMARTCARD_CREATING = ( TPMVSCMGR_STATUS_VTPMSMARTCARD_INITIALIZING + 1 ) ,
        TPMVSCMGR_STATUS_VTPMSMARTCARD_DESTROYING = ( TPMVSCMGR_STATUS_VTPMSMARTCARD_CREATING + 1 ) ,
        TPMVSCMGR_STATUS_VGIDSSIMULATOR_INITIALIZING = ( TPMVSCMGR_STATUS_VTPMSMARTCARD_DESTROYING + 1 ) ,
        TPMVSCMGR_STATUS_VGIDSSIMULATOR_CREATING = ( TPMVSCMGR_STATUS_VGIDSSIMULATOR_INITIALIZING + 1 ) ,
        TPMVSCMGR_STATUS_VGIDSSIMULATOR_DESTROYING = ( TPMVSCMGR_STATUS_VGIDSSIMULATOR_CREATING + 1 ) ,
        TPMVSCMGR_STATUS_VREADER_INITIALIZING = ( TPMVSCMGR_STATUS_VGIDSSIMULATOR_DESTROYING + 1 ) ,
        TPMVSCMGR_STATUS_VREADER_CREATING = ( TPMVSCMGR_STATUS_VREADER_INITIALIZING + 1 ) ,
        TPMVSCMGR_STATUS_VREADER_DESTROYING = ( TPMVSCMGR_STATUS_VREADER_CREATING + 1 ) ,
        TPMVSCMGR_STATUS_GENERATE_WAITING = ( TPMVSCMGR_STATUS_VREADER_DESTROYING + 1 ) ,
        TPMVSCMGR_STATUS_GENERATE_AUTHENTICATING = ( TPMVSCMGR_STATUS_GENERATE_WAITING + 1 ) ,
        TPMVSCMGR_STATUS_GENERATE_RUNNING = ( TPMVSCMGR_STATUS_GENERATE_AUTHENTICATING + 1 ) ,
        TPMVSCMGR_STATUS_CARD_CREATED = ( TPMVSCMGR_STATUS_GENERATE_RUNNING + 1 ) ,
        TPMVSCMGR_STATUS_CARD_DESTROYED = ( TPMVSCMGR_STATUS_CARD_CREATED + 1 )
    } TPMVSCMGR_STATUS;
typedef
enum __MIDL___MIDL_itf_tpmvscmgr_0000_0000_0002
    {
        TPMVSCMGR_ERROR_IMPERSONATION = 0,
        TPMVSCMGR_ERROR_PIN_COMPLEXITY = ( TPMVSCMGR_ERROR_IMPERSONATION + 1 ) ,
        TPMVSCMGR_ERROR_READER_COUNT_LIMIT = ( TPMVSCMGR_ERROR_PIN_COMPLEXITY + 1 ) ,
        TPMVSCMGR_ERROR_TERMINAL_SERVICES_SESSION = ( TPMVSCMGR_ERROR_READER_COUNT_LIMIT + 1 ) ,
        TPMVSCMGR_ERROR_VTPMSMARTCARD_INITIALIZE = ( TPMVSCMGR_ERROR_TERMINAL_SERVICES_SESSION + 1 ) ,
        TPMVSCMGR_ERROR_VTPMSMARTCARD_CREATE = ( TPMVSCMGR_ERROR_VTPMSMARTCARD_INITIALIZE + 1 ) ,
        TPMVSCMGR_ERROR_VTPMSMARTCARD_DESTROY = ( TPMVSCMGR_ERROR_VTPMSMARTCARD_CREATE + 1 ) ,
        TPMVSCMGR_ERROR_VGIDSSIMULATOR_INITIALIZE = ( TPMVSCMGR_ERROR_VTPMSMARTCARD_DESTROY + 1 ) ,
        TPMVSCMGR_ERROR_VGIDSSIMULATOR_CREATE = ( TPMVSCMGR_ERROR_VGIDSSIMULATOR_INITIALIZE + 1 ) ,
        TPMVSCMGR_ERROR_VGIDSSIMULATOR_DESTROY = ( TPMVSCMGR_ERROR_VGIDSSIMULATOR_CREATE + 1 ) ,
        TPMVSCMGR_ERROR_VGIDSSIMULATOR_WRITE_PROPERTY = ( TPMVSCMGR_ERROR_VGIDSSIMULATOR_DESTROY + 1 ) ,
        TPMVSCMGR_ERROR_VGIDSSIMULATOR_READ_PROPERTY = ( TPMVSCMGR_ERROR_VGIDSSIMULATOR_WRITE_PROPERTY + 1 ) ,
        TPMVSCMGR_ERROR_VREADER_INITIALIZE = ( TPMVSCMGR_ERROR_VGIDSSIMULATOR_READ_PROPERTY + 1 ) ,
        TPMVSCMGR_ERROR_VREADER_CREATE = ( TPMVSCMGR_ERROR_VREADER_INITIALIZE + 1 ) ,
        TPMVSCMGR_ERROR_VREADER_DESTROY = ( TPMVSCMGR_ERROR_VREADER_CREATE + 1 ) ,
        TPMVSCMGR_ERROR_GENERATE_LOCATE_READER = ( TPMVSCMGR_ERROR_VREADER_DESTROY + 1 ) ,
        TPMVSCMGR_ERROR_GENERATE_FILESYSTEM = ( TPMVSCMGR_ERROR_GENERATE_LOCATE_READER + 1 ) ,
        TPMVSCMGR_ERROR_CARD_CREATE = ( TPMVSCMGR_ERROR_GENERATE_FILESYSTEM + 1 ) ,
        TPMVSCMGR_ERROR_CARD_DESTROY = ( TPMVSCMGR_ERROR_CARD_CREATE + 1 )
    } TPMVSCMGR_ERROR;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITpmVirtualSmartCardManagerStatusCallback;
    typedef struct ITpmVirtualSmartCardManagerStatusCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITpmVirtualSmartCardManagerStatusCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITpmVirtualSmartCardManagerStatusCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITpmVirtualSmartCardManagerStatusCallback * This);
        HRESULT ( STDMETHODCALLTYPE *ReportProgress )(
            __RPC__in ITpmVirtualSmartCardManagerStatusCallback * This,
                       TPMVSCMGR_STATUS Status);
        HRESULT ( STDMETHODCALLTYPE *ReportError )(
            __RPC__in ITpmVirtualSmartCardManagerStatusCallback * This,
                       TPMVSCMGR_ERROR Error);
        END_INTERFACE
    } ITpmVirtualSmartCardManagerStatusCallbackVtbl;
    interface ITpmVirtualSmartCardManagerStatusCallback
    {
        CONST_VTBL struct ITpmVirtualSmartCardManagerStatusCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReportProgress(This,Status) )
    ( (This)->lpVtbl -> ReportError(This,Error) )
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ITpmVirtualSmartCardManager;
    typedef struct ITpmVirtualSmartCardManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITpmVirtualSmartCardManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITpmVirtualSmartCardManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITpmVirtualSmartCardManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualSmartCard )(
            __RPC__in ITpmVirtualSmartCardManager * This,
                               __RPC__in_string LPCWSTR pszFriendlyName,
                       BYTE bAdminAlgId,
                                __RPC__in_ecount_full(cbAdminKey) const BYTE *pbAdminKey,
                       DWORD cbAdminKey,
                                        __RPC__in_ecount_full_opt(cbAdminKcv) const BYTE *pbAdminKcv,
                       DWORD cbAdminKcv,
                                        __RPC__in_ecount_full_opt(cbPuk) const BYTE *pbPuk,
                       DWORD cbPuk,
                                __RPC__in_ecount_full(cbPin) const BYTE *pbPin,
                       DWORD cbPin,
                       BOOL fGenerate,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                                __RPC__deref_out_opt_string LPWSTR *ppszInstanceId,
                        __RPC__out BOOL *pfNeedReboot);
        HRESULT ( STDMETHODCALLTYPE *DestroyVirtualSmartCard )(
            __RPC__in ITpmVirtualSmartCardManager * This,
                               __RPC__in_string LPCWSTR pszInstanceId,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                        __RPC__out BOOL *pfNeedReboot);
        END_INTERFACE
    } ITpmVirtualSmartCardManagerVtbl;
    interface ITpmVirtualSmartCardManager
    {
        CONST_VTBL struct ITpmVirtualSmartCardManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateVirtualSmartCard(This,pszFriendlyName,bAdminAlgId,pbAdminKey,cbAdminKey,pbAdminKcv,cbAdminKcv,pbPuk,cbPuk,pbPin,cbPin,fGenerate,pStatusCallback,ppszInstanceId,pfNeedReboot) )
    ( (This)->lpVtbl -> DestroyVirtualSmartCard(This,pszInstanceId,pStatusCallback,pfNeedReboot) )
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ITpmVirtualSmartCardManager2;
    typedef struct ITpmVirtualSmartCardManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITpmVirtualSmartCardManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITpmVirtualSmartCardManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITpmVirtualSmartCardManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualSmartCard )(
            __RPC__in ITpmVirtualSmartCardManager2 * This,
                               __RPC__in_string LPCWSTR pszFriendlyName,
                       BYTE bAdminAlgId,
                                __RPC__in_ecount_full(cbAdminKey) const BYTE *pbAdminKey,
                       DWORD cbAdminKey,
                                        __RPC__in_ecount_full_opt(cbAdminKcv) const BYTE *pbAdminKcv,
                       DWORD cbAdminKcv,
                                        __RPC__in_ecount_full_opt(cbPuk) const BYTE *pbPuk,
                       DWORD cbPuk,
                                __RPC__in_ecount_full(cbPin) const BYTE *pbPin,
                       DWORD cbPin,
                       BOOL fGenerate,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                                __RPC__deref_out_opt_string LPWSTR *ppszInstanceId,
                        __RPC__out BOOL *pfNeedReboot);
        HRESULT ( STDMETHODCALLTYPE *DestroyVirtualSmartCard )(
            __RPC__in ITpmVirtualSmartCardManager2 * This,
                               __RPC__in_string LPCWSTR pszInstanceId,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                        __RPC__out BOOL *pfNeedReboot);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualSmartCardWithPinPolicy )(
            __RPC__in ITpmVirtualSmartCardManager2 * This,
                               __RPC__in_string LPCWSTR pszFriendlyName,
                       BYTE bAdminAlgId,
                                __RPC__in_ecount_full(cbAdminKey) const BYTE *pbAdminKey,
                       DWORD cbAdminKey,
                                        __RPC__in_ecount_full_opt(cbAdminKcv) const BYTE *pbAdminKcv,
                       DWORD cbAdminKcv,
                                        __RPC__in_ecount_full_opt(cbPuk) const BYTE *pbPuk,
                       DWORD cbPuk,
                                __RPC__in_ecount_full(cbPin) const BYTE *pbPin,
                       DWORD cbPin,
                                        __RPC__in_ecount_full_opt(cbPinPolicy) const BYTE *pbPinPolicy,
                       DWORD cbPinPolicy,
                       BOOL fGenerate,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                                __RPC__deref_out_opt_string LPWSTR *ppszInstanceId,
                        __RPC__out BOOL *pfNeedReboot);
        END_INTERFACE
    } ITpmVirtualSmartCardManager2Vtbl;
    interface ITpmVirtualSmartCardManager2
    {
        CONST_VTBL struct ITpmVirtualSmartCardManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateVirtualSmartCard(This,pszFriendlyName,bAdminAlgId,pbAdminKey,cbAdminKey,pbAdminKcv,cbAdminKcv,pbPuk,cbPuk,pbPin,cbPin,fGenerate,pStatusCallback,ppszInstanceId,pfNeedReboot) )
    ( (This)->lpVtbl -> DestroyVirtualSmartCard(This,pszInstanceId,pStatusCallback,pfNeedReboot) )
    ( (This)->lpVtbl -> CreateVirtualSmartCardWithPinPolicy(This,pszFriendlyName,bAdminAlgId,pbAdminKey,cbAdminKey,pbAdminKcv,cbAdminKcv,pbPuk,cbPuk,pbPin,cbPin,pbPinPolicy,cbPinPolicy,fGenerate,pStatusCallback,ppszInstanceId,pfNeedReboot) )
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ITpmVirtualSmartCardManager3;
    typedef struct ITpmVirtualSmartCardManager3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITpmVirtualSmartCardManager3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITpmVirtualSmartCardManager3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITpmVirtualSmartCardManager3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualSmartCard )(
            __RPC__in ITpmVirtualSmartCardManager3 * This,
                               __RPC__in_string LPCWSTR pszFriendlyName,
                       BYTE bAdminAlgId,
                                __RPC__in_ecount_full(cbAdminKey) const BYTE *pbAdminKey,
                       DWORD cbAdminKey,
                                        __RPC__in_ecount_full_opt(cbAdminKcv) const BYTE *pbAdminKcv,
                       DWORD cbAdminKcv,
                                        __RPC__in_ecount_full_opt(cbPuk) const BYTE *pbPuk,
                       DWORD cbPuk,
                                __RPC__in_ecount_full(cbPin) const BYTE *pbPin,
                       DWORD cbPin,
                       BOOL fGenerate,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                                __RPC__deref_out_opt_string LPWSTR *ppszInstanceId,
                        __RPC__out BOOL *pfNeedReboot);
        HRESULT ( STDMETHODCALLTYPE *DestroyVirtualSmartCard )(
            __RPC__in ITpmVirtualSmartCardManager3 * This,
                               __RPC__in_string LPCWSTR pszInstanceId,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                        __RPC__out BOOL *pfNeedReboot);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualSmartCardWithPinPolicy )(
            __RPC__in ITpmVirtualSmartCardManager3 * This,
                               __RPC__in_string LPCWSTR pszFriendlyName,
                       BYTE bAdminAlgId,
                                __RPC__in_ecount_full(cbAdminKey) const BYTE *pbAdminKey,
                       DWORD cbAdminKey,
                                        __RPC__in_ecount_full_opt(cbAdminKcv) const BYTE *pbAdminKcv,
                       DWORD cbAdminKcv,
                                        __RPC__in_ecount_full_opt(cbPuk) const BYTE *pbPuk,
                       DWORD cbPuk,
                                __RPC__in_ecount_full(cbPin) const BYTE *pbPin,
                       DWORD cbPin,
                                        __RPC__in_ecount_full_opt(cbPinPolicy) const BYTE *pbPinPolicy,
                       DWORD cbPinPolicy,
                       BOOL fGenerate,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                                __RPC__deref_out_opt_string LPWSTR *ppszInstanceId,
                        __RPC__out BOOL *pfNeedReboot);
        HRESULT ( STDMETHODCALLTYPE *CreateVirtualSmartCardWithAttestation )(
            __RPC__in ITpmVirtualSmartCardManager3 * This,
                               __RPC__in_string LPCWSTR pszFriendlyName,
                       BYTE bAdminAlgId,
                                __RPC__in_ecount_full(cbAdminKey) const BYTE *pbAdminKey,
                       DWORD cbAdminKey,
                                        __RPC__in_ecount_full_opt(cbAdminKcv) const BYTE *pbAdminKcv,
                       DWORD cbAdminKcv,
                                        __RPC__in_ecount_full_opt(cbPuk) const BYTE *pbPuk,
                       DWORD cbPuk,
                                __RPC__in_ecount_full(cbPin) const BYTE *pbPin,
                       DWORD cbPin,
                                        __RPC__in_ecount_full_opt(cbPinPolicy) const BYTE *pbPinPolicy,
                       DWORD cbPinPolicy,
                       TPMVSC_ATTESTATION_TYPE attestationType,
                       BOOL fGenerate,
                               __RPC__in_opt ITpmVirtualSmartCardManagerStatusCallback *pStatusCallback,
                                __RPC__deref_out_opt_string LPWSTR *ppszInstanceId);
        END_INTERFACE
    } ITpmVirtualSmartCardManager3Vtbl;
    interface ITpmVirtualSmartCardManager3
    {
        CONST_VTBL struct ITpmVirtualSmartCardManager3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateVirtualSmartCard(This,pszFriendlyName,bAdminAlgId,pbAdminKey,cbAdminKey,pbAdminKcv,cbAdminKcv,pbPuk,cbPuk,pbPin,cbPin,fGenerate,pStatusCallback,ppszInstanceId,pfNeedReboot) )
    ( (This)->lpVtbl -> DestroyVirtualSmartCard(This,pszInstanceId,pStatusCallback,pfNeedReboot) )
    ( (This)->lpVtbl -> CreateVirtualSmartCardWithPinPolicy(This,pszFriendlyName,bAdminAlgId,pbAdminKey,cbAdminKey,pbAdminKcv,cbAdminKcv,pbPuk,cbPuk,pbPin,cbPin,pbPinPolicy,cbPinPolicy,fGenerate,pStatusCallback,ppszInstanceId,pfNeedReboot) )
    ( (This)->lpVtbl -> CreateVirtualSmartCardWithAttestation(This,pszFriendlyName,bAdminAlgId,pbAdminKey,cbAdminKey,pbAdminKcv,cbAdminKcv,pbPuk,cbPuk,pbPin,cbPin,pbPinPolicy,cbPinPolicy,attestationType,fGenerate,pStatusCallback,ppszInstanceId) )
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID LIBID_TpmVirtualSmartCardManagers;
EXTERN_C const CLSID CLSID_TpmVirtualSmartCardManager;
class DECLSPEC_UUID("16A18E86-7F6E-4C20-AD89-4FFC0DB7A96A")
TpmVirtualSmartCardManager;
EXTERN_C const CLSID CLSID_RemoteTpmVirtualSmartCardManager;
class DECLSPEC_UUID("152EA2A8-70DC-4C59-8B2A-32AA3CA0DCAC")
RemoteTpmVirtualSmartCardManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpmvscmgr_0000_0005_v0_0_s_ifspec;
}
