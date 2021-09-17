#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyJob2 IBackgroundCopyJob2;
typedef class BackgroundCopyManager1_5 BackgroundCopyManager1_5;
#include "bits.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bits1_5_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits1_5_0000_0000_v0_0_s_ifspec;
typedef struct _BG_JOB_REPLY_PROGRESS
    {
    UINT64 BytesTotal;
    UINT64 BytesTransferred;
    } BG_JOB_REPLY_PROGRESS;
typedef
enum BG_AUTH_TARGET
    {
        BG_AUTH_TARGET_SERVER = 1,
        BG_AUTH_TARGET_PROXY = ( BG_AUTH_TARGET_SERVER + 1 )
    } BG_AUTH_TARGET;
typedef
enum BG_AUTH_SCHEME
    {
        BG_AUTH_SCHEME_BASIC = 1,
        BG_AUTH_SCHEME_DIGEST = ( BG_AUTH_SCHEME_BASIC + 1 ) ,
        BG_AUTH_SCHEME_NTLM = ( BG_AUTH_SCHEME_DIGEST + 1 ) ,
        BG_AUTH_SCHEME_NEGOTIATE = ( BG_AUTH_SCHEME_NTLM + 1 ) ,
        BG_AUTH_SCHEME_PASSPORT = ( BG_AUTH_SCHEME_NEGOTIATE + 1 )
    } BG_AUTH_SCHEME;
typedef struct __MIDL_IBackgroundCopyJob2_0001
    {
    LPWSTR UserName;
    LPWSTR Password;
    } BG_BASIC_CREDENTIALS;
typedef BG_BASIC_CREDENTIALS *PBG_BASIC_CREDENTIALS;
typedef union __MIDL_IBackgroundCopyJob2_0002
    {
                   BG_BASIC_CREDENTIALS Basic;
    } BG_AUTH_CREDENTIALS_UNION;
typedef struct __MIDL_IBackgroundCopyJob2_0003
    {
    BG_AUTH_TARGET Target;
    BG_AUTH_SCHEME Scheme;
                      BG_AUTH_CREDENTIALS_UNION Credentials;
    } BG_AUTH_CREDENTIALS;
typedef BG_AUTH_CREDENTIALS *PBG_AUTH_CREDENTIALS;
EXTERN_C const IID IID_IBackgroundCopyJob2;
    typedef struct IBackgroundCopyJob2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJob2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJob2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddFileSet )(
            __RPC__in IBackgroundCopyJob2 * This,
                       ULONG cFileCount,
                                __RPC__in_ecount_full(cFileCount) BG_FILE_INFO *pFileSet);
        HRESULT ( STDMETHODCALLTYPE *AddFile )(
            __RPC__in IBackgroundCopyJob2 * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName);
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyFiles **pEnum);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IBackgroundCopyJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IBackgroundCopyJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IBackgroundCopyJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *Complete )(
            __RPC__in IBackgroundCopyJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out GUID *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out BG_JOB_TYPE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out BG_JOB_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetTimes )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out BG_JOB_TIMES *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out BG_JOB_STATE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt IBackgroundCopyError **ppError);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            __RPC__in IBackgroundCopyJob2 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in IBackgroundCopyJob2 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            __RPC__in IBackgroundCopyJob2 * This,
                       BG_JOB_PRIORITY Val);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out BG_JOB_PRIORITY *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyFlags )(
            __RPC__in IBackgroundCopyJob2 * This,
                       ULONG Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyFlags )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out ULONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyInterface )(
            __RPC__in IBackgroundCopyJob2 * This,
                       __RPC__in_opt IUnknown *Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyInterface )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt IUnknown **pVal);
        HRESULT ( STDMETHODCALLTYPE *SetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob2 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *SetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob2 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetErrorCount )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out ULONG *Errors);
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )(
            __RPC__in IBackgroundCopyJob2 * This,
                       BG_JOB_PROXY_USAGE ProxyUsage,
                                       __RPC__in_opt_string const WCHAR *ProxyList,
                                       __RPC__in_opt_string const WCHAR *ProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__out BG_JOB_PROXY_USAGE *pProxyUsage,
                        __RPC__deref_out_opt LPWSTR *pProxyList,
                        __RPC__deref_out_opt LPWSTR *pProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            __RPC__in IBackgroundCopyJob2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob2 * This,
                               __RPC__in_opt LPCWSTR Program,
                               __RPC__in_opt LPCWSTR Parameters);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt LPWSTR *pProgram,
                        __RPC__deref_out_opt LPWSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *GetReplyProgress )(
            __RPC__in IBackgroundCopyJob2 * This,
                            __RPC__inout BG_JOB_REPLY_PROGRESS *pProgress);
        HRESULT ( STDMETHODCALLTYPE *GetReplyData )(
            __RPC__in IBackgroundCopyJob2 * This,
                                          __RPC__deref_out_ecount_full_opt(( unsigned long )*pLength) byte **ppBuffer,
                                    __RPC__inout_opt UINT64 *pLength);
        HRESULT ( STDMETHODCALLTYPE *SetReplyFileName )(
            __RPC__in IBackgroundCopyJob2 * This,
                               __RPC__in_opt LPCWSTR ReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *GetReplyFileName )(
            __RPC__in IBackgroundCopyJob2 * This,
                        __RPC__deref_out_opt LPWSTR *pReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IBackgroundCopyJob2 * This,
            __RPC__in BG_AUTH_CREDENTIALS *credentials);
        HRESULT ( STDMETHODCALLTYPE *RemoveCredentials )(
            __RPC__in IBackgroundCopyJob2 * This,
            BG_AUTH_TARGET Target,
            BG_AUTH_SCHEME Scheme);
        END_INTERFACE
    } IBackgroundCopyJob2Vtbl;
    interface IBackgroundCopyJob2
    {
        CONST_VTBL struct IBackgroundCopyJob2Vtbl *lpVtbl;
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
EXTERN_C const IID LIBID_BackgroundCopyManager1_5;
EXTERN_C const CLSID CLSID_BackgroundCopyManager1_5;
class DECLSPEC_UUID("f087771f-d74f-4c1a-bb8a-e16aca9124ea")
BackgroundCopyManager1_5;
#include "bits2_0.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits1_5_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits1_5_0000_0002_v0_0_s_ifspec;
}
