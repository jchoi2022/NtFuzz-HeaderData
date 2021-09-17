#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyJob5 IBackgroundCopyJob5;
typedef interface IBackgroundCopyFile5 IBackgroundCopyFile5;
typedef class BackgroundCopyManager5_0 BackgroundCopyManager5_0;
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
#include "bits3_0.h"
#include "bits4_0.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum BITS_JOB_TRANSFER_POLICY
    {
        BITS_JOB_TRANSFER_POLICY_ALWAYS = 0x800000ff,
        BITS_JOB_TRANSFER_POLICY_NOT_ROAMING = 0x8000007f,
        BITS_JOB_TRANSFER_POLICY_NO_SURCHARGE = 0x8000006f,
        BITS_JOB_TRANSFER_POLICY_STANDARD = 0x80000067,
        BITS_JOB_TRANSFER_POLICY_UNRESTRICTED = 0x80000021
    } BITS_JOB_TRANSFER_POLICY;
typedef
enum BITS_JOB_PROPERTY_ID
    {
        BITS_JOB_PROPERTY_ID_COST_FLAGS = 1,
        BITS_JOB_PROPERTY_NOTIFICATION_CLSID = 2,
        BITS_JOB_PROPERTY_DYNAMIC_CONTENT = 3,
        BITS_JOB_PROPERTY_HIGH_PERFORMANCE = 4,
        BITS_JOB_PROPERTY_MAX_DOWNLOAD_SIZE = 5,
        BITS_JOB_PROPERTY_USE_STORED_CREDENTIALS = 7,
        BITS_JOB_PROPERTY_MINIMUM_NOTIFICATION_INTERVAL_MS = 9,
        BITS_JOB_PROPERTY_ON_DEMAND_MODE = 10
    } BITS_JOB_PROPERTY_ID;
typedef union __MIDL___MIDL_itf_bits5_0_0000_0000_0001
    {
                   DWORD Dword;
                   GUID ClsID;
                   BOOL Enable;
                   UINT64 Uint64;
                   BG_AUTH_TARGET Target;
    } BITS_JOB_PROPERTY_VALUE;
typedef
enum BITS_FILE_PROPERTY_ID
    {
        BITS_FILE_PROPERTY_ID_HTTP_RESPONSE_HEADERS = 1
    } BITS_FILE_PROPERTY_ID;
typedef union __MIDL___MIDL_itf_bits5_0_0000_0000_0002
    {
                   LPWSTR String;
    } BITS_FILE_PROPERTY_VALUE;
extern RPC_IF_HANDLE __MIDL_itf_bits5_0_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits5_0_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBackgroundCopyJob5;
    typedef struct IBackgroundCopyJob5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJob5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJob5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJob5 * This);
        HRESULT ( STDMETHODCALLTYPE *AddFileSet )(
            __RPC__in IBackgroundCopyJob5 * This,
                       ULONG cFileCount,
                                __RPC__in_ecount_full(cFileCount) BG_FILE_INFO *pFileSet);
        HRESULT ( STDMETHODCALLTYPE *AddFile )(
            __RPC__in IBackgroundCopyJob5 * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName);
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyFiles **pEnum);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IBackgroundCopyJob5 * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IBackgroundCopyJob5 * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IBackgroundCopyJob5 * This);
        HRESULT ( STDMETHODCALLTYPE *Complete )(
            __RPC__in IBackgroundCopyJob5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out GUID *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out BG_JOB_TYPE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out BG_JOB_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetTimes )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out BG_JOB_TIMES *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out BG_JOB_STATE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt IBackgroundCopyError **ppError);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            __RPC__in IBackgroundCopyJob5 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in IBackgroundCopyJob5 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            __RPC__in IBackgroundCopyJob5 * This,
                       BG_JOB_PRIORITY Val);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out BG_JOB_PRIORITY *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyFlags )(
            __RPC__in IBackgroundCopyJob5 * This,
                       ULONG Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyFlags )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out ULONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyInterface )(
            __RPC__in IBackgroundCopyJob5 * This,
                       __RPC__in_opt IUnknown *Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyInterface )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt IUnknown **pVal);
        HRESULT ( STDMETHODCALLTYPE *SetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob5 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *SetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob5 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetErrorCount )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out ULONG *Errors);
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )(
            __RPC__in IBackgroundCopyJob5 * This,
                       BG_JOB_PROXY_USAGE ProxyUsage,
                                       __RPC__in_opt_string const WCHAR *ProxyList,
                                       __RPC__in_opt_string const WCHAR *ProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__out BG_JOB_PROXY_USAGE *pProxyUsage,
                        __RPC__deref_out_opt LPWSTR *pProxyList,
                        __RPC__deref_out_opt LPWSTR *pProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            __RPC__in IBackgroundCopyJob5 * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob5 * This,
                               __RPC__in_opt LPCWSTR Program,
                               __RPC__in_opt LPCWSTR Parameters);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt LPWSTR *pProgram,
                        __RPC__deref_out_opt LPWSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *GetReplyProgress )(
            __RPC__in IBackgroundCopyJob5 * This,
                            __RPC__inout BG_JOB_REPLY_PROGRESS *pProgress);
        HRESULT ( STDMETHODCALLTYPE *GetReplyData )(
            __RPC__in IBackgroundCopyJob5 * This,
                                          __RPC__deref_out_ecount_full_opt(( unsigned long )*pLength) byte **ppBuffer,
                                    __RPC__inout_opt UINT64 *pLength);
        HRESULT ( STDMETHODCALLTYPE *SetReplyFileName )(
            __RPC__in IBackgroundCopyJob5 * This,
                               __RPC__in_opt LPCWSTR ReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *GetReplyFileName )(
            __RPC__in IBackgroundCopyJob5 * This,
                        __RPC__deref_out_opt LPWSTR *pReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IBackgroundCopyJob5 * This,
            __RPC__in BG_AUTH_CREDENTIALS *credentials);
        HRESULT ( STDMETHODCALLTYPE *RemoveCredentials )(
            __RPC__in IBackgroundCopyJob5 * This,
            BG_AUTH_TARGET Target,
            BG_AUTH_SCHEME Scheme);
        HRESULT ( STDMETHODCALLTYPE *ReplaceRemotePrefix )(
            __RPC__in IBackgroundCopyJob5 * This,
                       __RPC__in LPCWSTR OldPrefix,
                       __RPC__in LPCWSTR NewPrefix);
        HRESULT ( STDMETHODCALLTYPE *AddFileWithRanges )(
            __RPC__in IBackgroundCopyJob5 * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName,
                       DWORD RangeCount,
                                __RPC__in_ecount_full(RangeCount) BG_FILE_RANGE Ranges[ ]);
        HRESULT ( STDMETHODCALLTYPE *SetFileACLFlags )(
            __RPC__in IBackgroundCopyJob5 * This,
                       DWORD Flags);
        HRESULT ( STDMETHODCALLTYPE *GetFileACLFlags )(
            __RPC__in IBackgroundCopyJob5 * This,
                             __RPC__out DWORD *Flags);
        HRESULT ( STDMETHODCALLTYPE *SetPeerCachingFlags )(
            __RPC__in IBackgroundCopyJob5 * This,
            DWORD Flags);
        HRESULT ( STDMETHODCALLTYPE *GetPeerCachingFlags )(
            __RPC__in IBackgroundCopyJob5 * This,
                             __RPC__out DWORD *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerIntegrityLevel )(
            __RPC__in IBackgroundCopyJob5 * This,
                             __RPC__out ULONG *pLevel);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerElevationState )(
            __RPC__in IBackgroundCopyJob5 * This,
                             __RPC__out BOOL *pElevated);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumDownloadTime )(
            __RPC__in IBackgroundCopyJob5 * This,
            ULONG Timeout);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumDownloadTime )(
            __RPC__in IBackgroundCopyJob5 * This,
                             __RPC__out ULONG *pTimeout);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IBackgroundCopyJob5 * This,
                       BITS_JOB_PROPERTY_ID PropertyId,
                                  BITS_JOB_PROPERTY_VALUE PropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IBackgroundCopyJob5 * This,
                       BITS_JOB_PROPERTY_ID PropertyId,
                                   __RPC__out BITS_JOB_PROPERTY_VALUE *PropertyValue);
        END_INTERFACE
    } IBackgroundCopyJob5Vtbl;
    interface IBackgroundCopyJob5
    {
        CONST_VTBL struct IBackgroundCopyJob5Vtbl *lpVtbl;
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
    ( (This)->lpVtbl -> SetPeerCachingFlags(This,Flags) )
    ( (This)->lpVtbl -> GetPeerCachingFlags(This,pFlags) )
    ( (This)->lpVtbl -> GetOwnerIntegrityLevel(This,pLevel) )
    ( (This)->lpVtbl -> GetOwnerElevationState(This,pElevated) )
    ( (This)->lpVtbl -> SetMaximumDownloadTime(This,Timeout) )
    ( (This)->lpVtbl -> GetMaximumDownloadTime(This,pTimeout) )
    ( (This)->lpVtbl -> SetProperty(This,PropertyId,PropertyValue) )
    ( (This)->lpVtbl -> GetProperty(This,PropertyId,PropertyValue) )
EXTERN_C const IID IID_IBackgroundCopyFile5;
    typedef struct IBackgroundCopyFile5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyFile5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyFile5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyFile5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteName )(
            __RPC__in IBackgroundCopyFile5 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )(
            __RPC__in IBackgroundCopyFile5 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyFile5 * This,
                        __RPC__out BG_FILE_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )(
            __RPC__in IBackgroundCopyFile5 * This,
                                    __RPC__inout_opt DWORD *RangeCount,
                                          __RPC__deref_out_ecount_full_opt(*RangeCount) BG_FILE_RANGE **Ranges);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteName )(
            __RPC__in IBackgroundCopyFile5 * This,
            __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetTemporaryName )(
            __RPC__in IBackgroundCopyFile5 * This,
                        __RPC__deref_out_opt LPWSTR *pFilename);
        HRESULT ( STDMETHODCALLTYPE *SetValidationState )(
            __RPC__in IBackgroundCopyFile5 * This,
                       BOOL state);
        HRESULT ( STDMETHODCALLTYPE *GetValidationState )(
            __RPC__in IBackgroundCopyFile5 * This,
                        __RPC__out BOOL *pState);
        HRESULT ( STDMETHODCALLTYPE *IsDownloadedFromPeer )(
            __RPC__in IBackgroundCopyFile5 * This,
                        __RPC__out BOOL *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetPeerDownloadStats )(
            __RPC__in IBackgroundCopyFile5 * This,
                        __RPC__out PUINT64 pFromOrigin,
                        __RPC__out PUINT64 pFromPeers);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in IBackgroundCopyFile5 * This,
                       BITS_FILE_PROPERTY_ID PropertyId,
                                  BITS_FILE_PROPERTY_VALUE PropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IBackgroundCopyFile5 * This,
                       BITS_FILE_PROPERTY_ID PropertyId,
                                   __RPC__out BITS_FILE_PROPERTY_VALUE *PropertyValue);
        END_INTERFACE
    } IBackgroundCopyFile5Vtbl;
    interface IBackgroundCopyFile5
    {
        CONST_VTBL struct IBackgroundCopyFile5Vtbl *lpVtbl;
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
EXTERN_C const IID LIBID_BackgroundCopyManager5_0;
EXTERN_C const CLSID CLSID_BackgroundCopyManager5_0;
class DECLSPEC_UUID("1ECCA34C-E88A-44E3-8D6A-8921BDE9E452")
BackgroundCopyManager5_0;
#include "bits10_1.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits5_0_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits5_0_0000_0003_v0_0_s_ifspec;
}
