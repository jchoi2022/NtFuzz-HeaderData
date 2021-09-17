#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyCallback3 IBackgroundCopyCallback3;
typedef interface IBackgroundCopyFile6 IBackgroundCopyFile6;
typedef class BackgroundCopyManager10_1 BackgroundCopyManager10_1;
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"
#include "bits5_0.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bits10_1_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits10_1_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBackgroundCopyCallback3;
    typedef struct IBackgroundCopyCallback3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyCallback3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyCallback3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyCallback3 * This);
        HRESULT ( STDMETHODCALLTYPE *JobTransferred )(
            __RPC__in IBackgroundCopyCallback3 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob);
        HRESULT ( STDMETHODCALLTYPE *JobError )(
            __RPC__in IBackgroundCopyCallback3 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       __RPC__in_opt IBackgroundCopyError *pError);
        HRESULT ( STDMETHODCALLTYPE *JobModification )(
            __RPC__in IBackgroundCopyCallback3 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *FileTransferred )(
            __RPC__in IBackgroundCopyCallback3 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       __RPC__in_opt IBackgroundCopyFile *pFile);
        HRESULT ( STDMETHODCALLTYPE *FileRangesTransferred )(
            __RPC__in IBackgroundCopyCallback3 * This,
                       __RPC__in_opt IBackgroundCopyJob *job,
                       __RPC__in_opt IBackgroundCopyFile *file,
                       DWORD rangeCount,
                                __RPC__in_ecount_full(rangeCount) const BG_FILE_RANGE ranges[ ]);
        END_INTERFACE
    } IBackgroundCopyCallback3Vtbl;
    interface IBackgroundCopyCallback3
    {
        CONST_VTBL struct IBackgroundCopyCallback3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> JobTransferred(This,pJob) )
    ( (This)->lpVtbl -> JobError(This,pJob,pError) )
    ( (This)->lpVtbl -> JobModification(This,pJob,dwReserved) )
    ( (This)->lpVtbl -> FileTransferred(This,pJob,pFile) )
    ( (This)->lpVtbl -> FileRangesTransferred(This,job,file,rangeCount,ranges) )
EXTERN_C const IID IID_IBackgroundCopyFile6;
    typedef struct IBackgroundCopyFile6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyFile6 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyFile6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyFile6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteName )(
            __RPC__in IBackgroundCopyFile6 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )(
            __RPC__in IBackgroundCopyFile6 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyFile6 * This,
                        __RPC__out BG_FILE_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )(
            __RPC__in IBackgroundCopyFile6 * This,
                                    __RPC__inout_opt DWORD *RangeCount,
                                          __RPC__deref_out_ecount_full_opt(*RangeCount) BG_FILE_RANGE **Ranges);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteName )(
            __RPC__in IBackgroundCopyFile6 * This,
            __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetTemporaryName )(
            __RPC__in IBackgroundCopyFile6 * This,
                        __RPC__deref_out_opt LPWSTR *pFilename);
        HRESULT ( STDMETHODCALLTYPE *SetValidationState )(
            __RPC__in IBackgroundCopyFile6 * This,
                       BOOL state);
        HRESULT ( STDMETHODCALLTYPE *GetValidationState )(
            __RPC__in IBackgroundCopyFile6 * This,
                        __RPC__out BOOL *pState);
        HRESULT ( STDMETHODCALLTYPE *IsDownloadedFromPeer )(
            __RPC__in IBackgroundCopyFile6 * This,
                        __RPC__out BOOL *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetPeerDownloadStats )(
            __RPC__in IBackgroundCopyFile6 * This,
                        __RPC__out PUINT64 pFromOrigin,
                        __RPC__out PUINT64 pFromPeers);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IBackgroundCopyFile6 * This,
                       BITS_FILE_PROPERTY_ID PropertyId,
                                  BITS_FILE_PROPERTY_VALUE PropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IBackgroundCopyFile6 * This,
                       BITS_FILE_PROPERTY_ID PropertyId,
                                   __RPC__out BITS_FILE_PROPERTY_VALUE *PropertyValue);
        HRESULT ( STDMETHODCALLTYPE *UpdateDownloadPosition )(
            __RPC__in IBackgroundCopyFile6 * This,
                       UINT64 offset);
        HRESULT ( STDMETHODCALLTYPE *RequestFileRanges )(
            __RPC__in IBackgroundCopyFile6 * This,
                       DWORD rangeCount,
                                __RPC__in_ecount_full(rangeCount) const BG_FILE_RANGE ranges[ ]);
        HRESULT ( STDMETHODCALLTYPE *GetFilledFileRanges )(
            __RPC__in IBackgroundCopyFile6 * This,
                             __RPC__out DWORD *rangeCount,
                                          __RPC__deref_out_ecount_full_opt(*rangeCount) BG_FILE_RANGE **ranges);
        END_INTERFACE
    } IBackgroundCopyFile6Vtbl;
    interface IBackgroundCopyFile6
    {
        CONST_VTBL struct IBackgroundCopyFile6Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> SetProperty(This,PropertyId,PropertyValue) )
    ( (This)->lpVtbl -> GetProperty(This,PropertyId,PropertyValue) )
    ( (This)->lpVtbl -> UpdateDownloadPosition(This,offset) )
    ( (This)->lpVtbl -> RequestFileRanges(This,rangeCount,ranges) )
    ( (This)->lpVtbl -> GetFilledFileRanges(This,rangeCount,ranges) )
EXTERN_C const IID LIBID_BackgroundCopyManager10_1;
EXTERN_C const CLSID CLSID_BackgroundCopyManager10_1;
class DECLSPEC_UUID("4BD3E4E1-7BD4-4A2B-9964-496400DE5193")
BackgroundCopyManager10_1;
#include "bits10_2.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits10_1_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits10_1_0000_0003_v0_0_s_ifspec;
}
