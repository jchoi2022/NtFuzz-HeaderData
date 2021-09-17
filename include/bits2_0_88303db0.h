#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyJob3 IBackgroundCopyJob3;
typedef interface IBackgroundCopyFile2 IBackgroundCopyFile2;
typedef class BackgroundCopyManager2_0 BackgroundCopyManager2_0;
#include "bits.h"
#include "bits1_5.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _BG_FILE_RANGE
    {
    UINT64 InitialOffset;
    UINT64 Length;
    } BG_FILE_RANGE;
extern RPC_IF_HANDLE __MIDL_itf_bits2_0_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits2_0_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBackgroundCopyJob3;
    typedef struct IBackgroundCopyJob3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJob3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJob3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJob3 * This);
        HRESULT ( STDMETHODCALLTYPE *AddFileSet )(
            __RPC__in IBackgroundCopyJob3 * This,
                       ULONG cFileCount,
                                __RPC__in_ecount_full(cFileCount) BG_FILE_INFO *pFileSet);
        HRESULT ( STDMETHODCALLTYPE *AddFile )(
            __RPC__in IBackgroundCopyJob3 * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName);
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyFiles **pEnum);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IBackgroundCopyJob3 * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IBackgroundCopyJob3 * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IBackgroundCopyJob3 * This);
        HRESULT ( STDMETHODCALLTYPE *Complete )(
            __RPC__in IBackgroundCopyJob3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out GUID *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out BG_JOB_TYPE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out BG_JOB_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetTimes )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out BG_JOB_TIMES *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out BG_JOB_STATE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt IBackgroundCopyError **ppError);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            __RPC__in IBackgroundCopyJob3 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in IBackgroundCopyJob3 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            __RPC__in IBackgroundCopyJob3 * This,
                       BG_JOB_PRIORITY Val);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out BG_JOB_PRIORITY *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyFlags )(
            __RPC__in IBackgroundCopyJob3 * This,
                       ULONG Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyFlags )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out ULONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyInterface )(
            __RPC__in IBackgroundCopyJob3 * This,
                       __RPC__in_opt IUnknown *Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyInterface )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt IUnknown **pVal);
        HRESULT ( STDMETHODCALLTYPE *SetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob3 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *SetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob3 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetErrorCount )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out ULONG *Errors);
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )(
            __RPC__in IBackgroundCopyJob3 * This,
                       BG_JOB_PROXY_USAGE ProxyUsage,
                                       __RPC__in_opt_string const WCHAR *ProxyList,
                                       __RPC__in_opt_string const WCHAR *ProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__out BG_JOB_PROXY_USAGE *pProxyUsage,
                        __RPC__deref_out_opt LPWSTR *pProxyList,
                        __RPC__deref_out_opt LPWSTR *pProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            __RPC__in IBackgroundCopyJob3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob3 * This,
                               __RPC__in_opt LPCWSTR Program,
                               __RPC__in_opt LPCWSTR Parameters);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt LPWSTR *pProgram,
                        __RPC__deref_out_opt LPWSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *GetReplyProgress )(
            __RPC__in IBackgroundCopyJob3 * This,
                            __RPC__inout BG_JOB_REPLY_PROGRESS *pProgress);
        HRESULT ( STDMETHODCALLTYPE *GetReplyData )(
            __RPC__in IBackgroundCopyJob3 * This,
                                          __RPC__deref_out_ecount_full_opt(( unsigned long )*pLength) byte **ppBuffer,
                                    __RPC__inout_opt UINT64 *pLength);
        HRESULT ( STDMETHODCALLTYPE *SetReplyFileName )(
            __RPC__in IBackgroundCopyJob3 * This,
                               __RPC__in_opt LPCWSTR ReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *GetReplyFileName )(
            __RPC__in IBackgroundCopyJob3 * This,
                        __RPC__deref_out_opt LPWSTR *pReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IBackgroundCopyJob3 * This,
            __RPC__in BG_AUTH_CREDENTIALS *credentials);
        HRESULT ( STDMETHODCALLTYPE *RemoveCredentials )(
            __RPC__in IBackgroundCopyJob3 * This,
            BG_AUTH_TARGET Target,
            BG_AUTH_SCHEME Scheme);
        HRESULT ( STDMETHODCALLTYPE *ReplaceRemotePrefix )(
            __RPC__in IBackgroundCopyJob3 * This,
                       __RPC__in LPCWSTR OldPrefix,
                       __RPC__in LPCWSTR NewPrefix);
        HRESULT ( STDMETHODCALLTYPE *AddFileWithRanges )(
            __RPC__in IBackgroundCopyJob3 * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName,
                       DWORD RangeCount,
                                __RPC__in_ecount_full(RangeCount) BG_FILE_RANGE Ranges[ ]);
        HRESULT ( STDMETHODCALLTYPE *SetFileACLFlags )(
            __RPC__in IBackgroundCopyJob3 * This,
                       DWORD Flags);
        HRESULT ( STDMETHODCALLTYPE *GetFileACLFlags )(
            __RPC__in IBackgroundCopyJob3 * This,
                             __RPC__out DWORD *Flags);
        END_INTERFACE
    } IBackgroundCopyJob3Vtbl;
    interface IBackgroundCopyJob3
    {
        CONST_VTBL struct IBackgroundCopyJob3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddFileSet(This,cFileCount,pFileSet) )
    ( (This)->lpVtbl -> AddFile(This,RemoteUrl,LocalName) )
    ( (This)->lpVtbl -> EnumFiles(This,pEnum) )
    ( (This)->lpVtbl -> Suspend(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Complete(This) )
    ( (This)->lpVtbl -> GetId(This,pVal) )
    ( (This)->lpVtbl -> GetType(This,pVal) )
    ( (This)->lpVtbl -> GetProgress(This,pVal) )
    ( (This)->lpVtbl -> GetTimes(This,pVal) )
    ( (This)->lpVtbl -> GetState(This,pVal) )
    ( (This)->lpVtbl -> GetError(This,ppError) )
    ( (This)->lpVtbl -> GetOwner(This,pVal) )
    ( (This)->lpVtbl -> SetDisplayName(This,Val) )
    ( (This)->lpVtbl -> GetDisplayName(This,pVal) )
    ( (This)->lpVtbl -> SetDescription(This,Val) )
    ( (This)->lpVtbl -> GetDescription(This,pVal) )
    ( (This)->lpVtbl -> SetPriority(This,Val) )
    ( (This)->lpVtbl -> GetPriority(This,pVal) )
    ( (This)->lpVtbl -> SetNotifyFlags(This,Val) )
    ( (This)->lpVtbl -> GetNotifyFlags(This,pVal) )
    ( (This)->lpVtbl -> SetNotifyInterface(This,Val) )
    ( (This)->lpVtbl -> GetNotifyInterface(This,pVal) )
    ( (This)->lpVtbl -> SetMinimumRetryDelay(This,Seconds) )
    ( (This)->lpVtbl -> GetMinimumRetryDelay(This,Seconds) )
    ( (This)->lpVtbl -> SetNoProgressTimeout(This,Seconds) )
    ( (This)->lpVtbl -> GetNoProgressTimeout(This,Seconds) )
    ( (This)->lpVtbl -> GetErrorCount(This,Errors) )
    ( (This)->lpVtbl -> SetProxySettings(This,ProxyUsage,ProxyList,ProxyBypassList) )
    ( (This)->lpVtbl -> GetProxySettings(This,pProxyUsage,pProxyList,pProxyBypassList) )
    ( (This)->lpVtbl -> TakeOwnership(This) )
    ( (This)->lpVtbl -> SetNotifyCmdLine(This,Program,Parameters) )
    ( (This)->lpVtbl -> GetNotifyCmdLine(This,pProgram,pParameters) )
    ( (This)->lpVtbl -> GetReplyProgress(This,pProgress) )
    ( (This)->lpVtbl -> GetReplyData(This,ppBuffer,pLength) )
    ( (This)->lpVtbl -> SetReplyFileName(This,ReplyFileName) )
    ( (This)->lpVtbl -> GetReplyFileName(This,pReplyFileName) )
    ( (This)->lpVtbl -> SetCredentials(This,credentials) )
    ( (This)->lpVtbl -> RemoveCredentials(This,Target,Scheme) )
    ( (This)->lpVtbl -> ReplaceRemotePrefix(This,OldPrefix,NewPrefix) )
    ( (This)->lpVtbl -> AddFileWithRanges(This,RemoteUrl,LocalName,RangeCount,Ranges) )
    ( (This)->lpVtbl -> SetFileACLFlags(This,Flags) )
    ( (This)->lpVtbl -> GetFileACLFlags(This,Flags) )
EXTERN_C const IID IID_IBackgroundCopyFile2;
    typedef struct IBackgroundCopyFile2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyFile2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyFile2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyFile2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteName )(
            __RPC__in IBackgroundCopyFile2 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )(
            __RPC__in IBackgroundCopyFile2 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyFile2 * This,
                        __RPC__out BG_FILE_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )(
            __RPC__in IBackgroundCopyFile2 * This,
                                    __RPC__inout_opt DWORD *RangeCount,
                                          __RPC__deref_out_ecount_full_opt(*RangeCount) BG_FILE_RANGE **Ranges);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteName )(
            __RPC__in IBackgroundCopyFile2 * This,
            __RPC__in LPCWSTR Val);
        END_INTERFACE
    } IBackgroundCopyFile2Vtbl;
    interface IBackgroundCopyFile2
    {
        CONST_VTBL struct IBackgroundCopyFile2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRemoteName(This,pVal) )
    ( (This)->lpVtbl -> GetLocalName(This,pVal) )
    ( (This)->lpVtbl -> GetProgress(This,pVal) )
    ( (This)->lpVtbl -> GetFileRanges(This,RangeCount,Ranges) )
    ( (This)->lpVtbl -> SetRemoteName(This,Val) )
EXTERN_C const IID LIBID_BackgroundCopyManager2_0;
EXTERN_C const CLSID CLSID_BackgroundCopyManager2_0;
class DECLSPEC_UUID("6d18ad12-bde3-4393-b311-099c346e6df9")
BackgroundCopyManager2_0;
#include "bits2_5.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits2_0_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits2_0_0000_0003_v0_0_s_ifspec;
}
