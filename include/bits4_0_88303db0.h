#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBitsTokenOptions IBitsTokenOptions;
typedef interface IBackgroundCopyFile4 IBackgroundCopyFile4;
typedef class BackgroundCopyManager4_0 BackgroundCopyManager4_0;
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bits4_0_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits4_0_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBitsTokenOptions;
    typedef struct IBitsTokenOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBitsTokenOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBitsTokenOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBitsTokenOptions * This);
        HRESULT ( STDMETHODCALLTYPE *SetHelperTokenFlags )(
            __RPC__in IBitsTokenOptions * This,
            DWORD UsageFlags);
        HRESULT ( STDMETHODCALLTYPE *GetHelperTokenFlags )(
            __RPC__in IBitsTokenOptions * This,
                        __RPC__out DWORD *pFlags);
        HRESULT ( STDMETHODCALLTYPE *SetHelperToken )(
            __RPC__in IBitsTokenOptions * This);
        HRESULT ( STDMETHODCALLTYPE *ClearHelperToken )(
            __RPC__in IBitsTokenOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetHelperTokenSid )(
            __RPC__in IBitsTokenOptions * This,
                        __RPC__deref_out_opt LPWSTR *pSid);
        END_INTERFACE
    } IBitsTokenOptionsVtbl;
    interface IBitsTokenOptions
    {
        CONST_VTBL struct IBitsTokenOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHelperTokenFlags(This,UsageFlags) )
    ( (This)->lpVtbl -> GetHelperTokenFlags(This,pFlags) )
    ( (This)->lpVtbl -> SetHelperToken(This) )
    ( (This)->lpVtbl -> ClearHelperToken(This) )
    ( (This)->lpVtbl -> GetHelperTokenSid(This,pSid) )
EXTERN_C const IID IID_IBackgroundCopyFile4;
    typedef struct IBackgroundCopyFile4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyFile4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyFile4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyFile4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteName )(
            __RPC__in IBackgroundCopyFile4 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )(
            __RPC__in IBackgroundCopyFile4 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyFile4 * This,
                        __RPC__out BG_FILE_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )(
            __RPC__in IBackgroundCopyFile4 * This,
                                    __RPC__inout_opt DWORD *RangeCount,
                                          __RPC__deref_out_ecount_full_opt(*RangeCount) BG_FILE_RANGE **Ranges);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteName )(
            __RPC__in IBackgroundCopyFile4 * This,
            __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetTemporaryName )(
            __RPC__in IBackgroundCopyFile4 * This,
                        __RPC__deref_out_opt LPWSTR *pFilename);
        HRESULT ( STDMETHODCALLTYPE *SetValidationState )(
            __RPC__in IBackgroundCopyFile4 * This,
                       BOOL state);
        HRESULT ( STDMETHODCALLTYPE *GetValidationState )(
            __RPC__in IBackgroundCopyFile4 * This,
                        __RPC__out BOOL *pState);
        HRESULT ( STDMETHODCALLTYPE *IsDownloadedFromPeer )(
            __RPC__in IBackgroundCopyFile4 * This,
                        __RPC__out BOOL *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetPeerDownloadStats )(
            __RPC__in IBackgroundCopyFile4 * This,
                        __RPC__out PUINT64 pFromOrigin,
                        __RPC__out PUINT64 pFromPeers);
        END_INTERFACE
    } IBackgroundCopyFile4Vtbl;
    interface IBackgroundCopyFile4
    {
        CONST_VTBL struct IBackgroundCopyFile4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRemoteName(This,pVal) )
    ( (This)->lpVtbl -> GetLocalName(This,pVal) )
    ( (This)->lpVtbl -> GetProgress(This,pVal) )
    ( (This)->lpVtbl -> GetFileRanges(This,RangeCount,Ranges) )
    ( (This)->lpVtbl -> SetRemoteName(This,Val) )
    ( (This)->lpVtbl -> GetTemporaryName(This,pFilename) )
    ( (This)->lpVtbl -> SetValidationState(This,state) )
    ( (This)->lpVtbl -> GetValidationState(This,pState) )
    ( (This)->lpVtbl -> IsDownloadedFromPeer(This,pVal) )
    ( (This)->lpVtbl -> GetPeerDownloadStats(This,pFromOrigin,pFromPeers) )
EXTERN_C const IID LIBID_BackgroundCopyManager4_0;
EXTERN_C const CLSID CLSID_BackgroundCopyManager4_0;
class DECLSPEC_UUID("bb6df56b-cace-11dc-9992-0019b93a3a84")
BackgroundCopyManager4_0;
#include "bits5_0.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits4_0_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits4_0_0000_0003_v0_0_s_ifspec;
}
