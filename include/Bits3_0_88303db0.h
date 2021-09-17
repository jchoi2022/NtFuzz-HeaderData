#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBitsPeerCacheRecord IBitsPeerCacheRecord;
typedef interface IEnumBitsPeerCacheRecords IEnumBitsPeerCacheRecords;
typedef interface IBitsPeer IBitsPeer;
typedef interface IEnumBitsPeers IEnumBitsPeers;
typedef interface IBitsPeerCacheAdministration IBitsPeerCacheAdministration;
typedef interface IBackgroundCopyJob4 IBackgroundCopyJob4;
typedef interface IBackgroundCopyFile3 IBackgroundCopyFile3;
typedef interface IBackgroundCopyCallback2 IBackgroundCopyCallback2;
typedef class BackgroundCopyManager3_0 BackgroundCopyManager3_0;
#include "bits.h"
#include "bits1_5.h"
#include "bits2_0.h"
#include "bits2_5.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bits3_0_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits3_0_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBitsPeerCacheRecord;
    typedef struct IBitsPeerCacheRecordVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBitsPeerCacheRecord * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBitsPeerCacheRecord * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBitsPeerCacheRecord * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IBitsPeerCacheRecord * This,
                             __RPC__out GUID *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginUrl )(
            __RPC__in IBitsPeerCacheRecord * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            __RPC__in IBitsPeerCacheRecord * This,
                             __RPC__out UINT64 *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetFileModificationTime )(
            __RPC__in IBitsPeerCacheRecord * This,
                             __RPC__out FILETIME *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetLastAccessTime )(
            __RPC__in IBitsPeerCacheRecord * This,
                             __RPC__out FILETIME *pVal);
        HRESULT ( STDMETHODCALLTYPE *IsFileValidated )(
            __RPC__in IBitsPeerCacheRecord * This);
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )(
            __RPC__in IBitsPeerCacheRecord * This,
                             __RPC__out DWORD *pRangeCount,
                                          __RPC__deref_out_ecount_full_opt(*pRangeCount) BG_FILE_RANGE **ppRanges);
        END_INTERFACE
    } IBitsPeerCacheRecordVtbl;
    interface IBitsPeerCacheRecord
    {
        CONST_VTBL struct IBitsPeerCacheRecordVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetId(This,pVal) )
    ( (This)->lpVtbl -> GetOriginUrl(This,pVal) )
    ( (This)->lpVtbl -> GetFileSize(This,pVal) )
    ( (This)->lpVtbl -> GetFileModificationTime(This,pVal) )
    ( (This)->lpVtbl -> GetLastAccessTime(This,pVal) )
    ( (This)->lpVtbl -> IsFileValidated(This) )
    ( (This)->lpVtbl -> GetFileRanges(This,pRangeCount,ppRanges) )
EXTERN_C const IID IID_IEnumBitsPeerCacheRecords;
    typedef struct IEnumBitsPeerCacheRecordsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumBitsPeerCacheRecords * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumBitsPeerCacheRecords * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumBitsPeerCacheRecords * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumBitsPeerCacheRecords * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, pceltFetched ? *pceltFetched : celt) IBitsPeerCacheRecord **rgelt,
                                    __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumBitsPeerCacheRecords * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumBitsPeerCacheRecords * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumBitsPeerCacheRecords * This,
                        __RPC__deref_out_opt IEnumBitsPeerCacheRecords **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumBitsPeerCacheRecords * This,
                        __RPC__out ULONG *puCount);
        END_INTERFACE
    } IEnumBitsPeerCacheRecordsVtbl;
    interface IEnumBitsPeerCacheRecords
    {
        CONST_VTBL struct IEnumBitsPeerCacheRecordsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
EXTERN_C const IID IID_IBitsPeer;
    typedef struct IBitsPeerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBitsPeer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBitsPeer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBitsPeer * This);
        HRESULT ( STDMETHODCALLTYPE *GetPeerName )(
            __RPC__in IBitsPeer * This,
                             __RPC__deref_out_opt LPWSTR *pName);
        HRESULT ( STDMETHODCALLTYPE *IsAuthenticated )(
            __RPC__in IBitsPeer * This,
                             __RPC__out BOOL *pAuth);
        HRESULT ( STDMETHODCALLTYPE *IsAvailable )(
            __RPC__in IBitsPeer * This,
                             __RPC__out BOOL *pOnline);
        END_INTERFACE
    } IBitsPeerVtbl;
    interface IBitsPeer
    {
        CONST_VTBL struct IBitsPeerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPeerName(This,pName) )
    ( (This)->lpVtbl -> IsAuthenticated(This,pAuth) )
    ( (This)->lpVtbl -> IsAvailable(This,pOnline) )
EXTERN_C const IID IID_IEnumBitsPeers;
    typedef struct IEnumBitsPeersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumBitsPeers * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumBitsPeers * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumBitsPeers * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumBitsPeers * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, pceltFetched ? *pceltFetched : celt) IBitsPeer **rgelt,
                                    __RPC__inout_opt ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumBitsPeers * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumBitsPeers * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumBitsPeers * This,
                        __RPC__deref_out_opt IEnumBitsPeers **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumBitsPeers * This,
                        __RPC__out ULONG *puCount);
        END_INTERFACE
    } IEnumBitsPeersVtbl;
    interface IEnumBitsPeers
    {
        CONST_VTBL struct IEnumBitsPeersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
EXTERN_C const IID IID_IBitsPeerCacheAdministration;
    typedef struct IBitsPeerCacheAdministrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBitsPeerCacheAdministration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBitsPeerCacheAdministration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBitsPeerCacheAdministration * This);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumCacheSize )(
            __RPC__in IBitsPeerCacheAdministration * This,
                             __RPC__out DWORD *pBytes);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumCacheSize )(
            __RPC__in IBitsPeerCacheAdministration * This,
            DWORD Bytes);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumContentAge )(
            __RPC__in IBitsPeerCacheAdministration * This,
                             __RPC__out ULONG *pSeconds);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumContentAge )(
            __RPC__in IBitsPeerCacheAdministration * This,
            ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetConfigurationFlags )(
            __RPC__in IBitsPeerCacheAdministration * This,
                             __RPC__out DWORD *pFlags);
        HRESULT ( STDMETHODCALLTYPE *SetConfigurationFlags )(
            __RPC__in IBitsPeerCacheAdministration * This,
            DWORD Flags);
        HRESULT ( STDMETHODCALLTYPE *EnumRecords )(
            __RPC__in IBitsPeerCacheAdministration * This,
                        __RPC__deref_out_opt IEnumBitsPeerCacheRecords **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetRecord )(
            __RPC__in IBitsPeerCacheAdministration * This,
                       __RPC__in REFGUID id,
                        __RPC__deref_out_opt IBitsPeerCacheRecord **ppRecord);
        HRESULT ( STDMETHODCALLTYPE *ClearRecords )(
            __RPC__in IBitsPeerCacheAdministration * This);
        HRESULT ( STDMETHODCALLTYPE *DeleteRecord )(
            __RPC__in IBitsPeerCacheAdministration * This,
                       __RPC__in REFGUID id);
        HRESULT ( STDMETHODCALLTYPE *DeleteUrl )(
            __RPC__in IBitsPeerCacheAdministration * This,
                            __RPC__in LPCWSTR url);
        HRESULT ( STDMETHODCALLTYPE *EnumPeers )(
            __RPC__in IBitsPeerCacheAdministration * This,
                             __RPC__deref_out_opt IEnumBitsPeers **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *ClearPeers )(
            __RPC__in IBitsPeerCacheAdministration * This);
        HRESULT ( STDMETHODCALLTYPE *DiscoverPeers )(
            __RPC__in IBitsPeerCacheAdministration * This);
        END_INTERFACE
    } IBitsPeerCacheAdministrationVtbl;
    interface IBitsPeerCacheAdministration
    {
        CONST_VTBL struct IBitsPeerCacheAdministrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMaximumCacheSize(This,pBytes) )
    ( (This)->lpVtbl -> SetMaximumCacheSize(This,Bytes) )
    ( (This)->lpVtbl -> GetMaximumContentAge(This,pSeconds) )
    ( (This)->lpVtbl -> SetMaximumContentAge(This,Seconds) )
    ( (This)->lpVtbl -> GetConfigurationFlags(This,pFlags) )
    ( (This)->lpVtbl -> SetConfigurationFlags(This,Flags) )
    ( (This)->lpVtbl -> EnumRecords(This,ppEnum) )
    ( (This)->lpVtbl -> GetRecord(This,id,ppRecord) )
    ( (This)->lpVtbl -> ClearRecords(This) )
    ( (This)->lpVtbl -> DeleteRecord(This,id) )
    ( (This)->lpVtbl -> DeleteUrl(This,url) )
    ( (This)->lpVtbl -> EnumPeers(This,ppEnum) )
    ( (This)->lpVtbl -> ClearPeers(This) )
    ( (This)->lpVtbl -> DiscoverPeers(This) )
EXTERN_C const IID IID_IBackgroundCopyJob4;
    typedef struct IBackgroundCopyJob4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJob4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJob4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJob4 * This);
        HRESULT ( STDMETHODCALLTYPE *AddFileSet )(
            __RPC__in IBackgroundCopyJob4 * This,
                       ULONG cFileCount,
                                __RPC__in_ecount_full(cFileCount) BG_FILE_INFO *pFileSet);
        HRESULT ( STDMETHODCALLTYPE *AddFile )(
            __RPC__in IBackgroundCopyJob4 * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName);
        HRESULT ( STDMETHODCALLTYPE *EnumFiles )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyFiles **pEnum);
        HRESULT ( STDMETHODCALLTYPE *Suspend )(
            __RPC__in IBackgroundCopyJob4 * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IBackgroundCopyJob4 * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IBackgroundCopyJob4 * This);
        HRESULT ( STDMETHODCALLTYPE *Complete )(
            __RPC__in IBackgroundCopyJob4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out GUID *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out BG_JOB_TYPE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out BG_JOB_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetTimes )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out BG_JOB_TIMES *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out BG_JOB_STATE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetError )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt IBackgroundCopyError **ppError);
        HRESULT ( STDMETHODCALLTYPE *GetOwner )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDisplayName )(
            __RPC__in IBackgroundCopyJob4 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            __RPC__in IBackgroundCopyJob4 * This,
                       __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            __RPC__in IBackgroundCopyJob4 * This,
                       BG_JOB_PRIORITY Val);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out BG_JOB_PRIORITY *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyFlags )(
            __RPC__in IBackgroundCopyJob4 * This,
                       ULONG Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyFlags )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out ULONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyInterface )(
            __RPC__in IBackgroundCopyJob4 * This,
                       __RPC__in_opt IUnknown *Val);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyInterface )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt IUnknown **pVal);
        HRESULT ( STDMETHODCALLTYPE *SetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob4 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetMinimumRetryDelay )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *SetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob4 * This,
                       ULONG Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetNoProgressTimeout )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out ULONG *Seconds);
        HRESULT ( STDMETHODCALLTYPE *GetErrorCount )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out ULONG *Errors);
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )(
            __RPC__in IBackgroundCopyJob4 * This,
                       BG_JOB_PROXY_USAGE ProxyUsage,
                                       __RPC__in_opt_string const WCHAR *ProxyList,
                                       __RPC__in_opt_string const WCHAR *ProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__out BG_JOB_PROXY_USAGE *pProxyUsage,
                        __RPC__deref_out_opt LPWSTR *pProxyList,
                        __RPC__deref_out_opt LPWSTR *pProxyBypassList);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            __RPC__in IBackgroundCopyJob4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob4 * This,
                               __RPC__in_opt LPCWSTR Program,
                               __RPC__in_opt LPCWSTR Parameters);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyCmdLine )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt LPWSTR *pProgram,
                        __RPC__deref_out_opt LPWSTR *pParameters);
        HRESULT ( STDMETHODCALLTYPE *GetReplyProgress )(
            __RPC__in IBackgroundCopyJob4 * This,
                            __RPC__inout BG_JOB_REPLY_PROGRESS *pProgress);
        HRESULT ( STDMETHODCALLTYPE *GetReplyData )(
            __RPC__in IBackgroundCopyJob4 * This,
                                          __RPC__deref_out_ecount_full_opt(( unsigned long )*pLength) byte **ppBuffer,
                                    __RPC__inout_opt UINT64 *pLength);
        HRESULT ( STDMETHODCALLTYPE *SetReplyFileName )(
            __RPC__in IBackgroundCopyJob4 * This,
                               __RPC__in_opt LPCWSTR ReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *GetReplyFileName )(
            __RPC__in IBackgroundCopyJob4 * This,
                        __RPC__deref_out_opt LPWSTR *pReplyFileName);
        HRESULT ( STDMETHODCALLTYPE *SetCredentials )(
            __RPC__in IBackgroundCopyJob4 * This,
            __RPC__in BG_AUTH_CREDENTIALS *credentials);
        HRESULT ( STDMETHODCALLTYPE *RemoveCredentials )(
            __RPC__in IBackgroundCopyJob4 * This,
            BG_AUTH_TARGET Target,
            BG_AUTH_SCHEME Scheme);
        HRESULT ( STDMETHODCALLTYPE *ReplaceRemotePrefix )(
            __RPC__in IBackgroundCopyJob4 * This,
                       __RPC__in LPCWSTR OldPrefix,
                       __RPC__in LPCWSTR NewPrefix);
        HRESULT ( STDMETHODCALLTYPE *AddFileWithRanges )(
            __RPC__in IBackgroundCopyJob4 * This,
                       __RPC__in LPCWSTR RemoteUrl,
                       __RPC__in LPCWSTR LocalName,
                       DWORD RangeCount,
                                __RPC__in_ecount_full(RangeCount) BG_FILE_RANGE Ranges[ ]);
        HRESULT ( STDMETHODCALLTYPE *SetFileACLFlags )(
            __RPC__in IBackgroundCopyJob4 * This,
                       DWORD Flags);
        HRESULT ( STDMETHODCALLTYPE *GetFileACLFlags )(
            __RPC__in IBackgroundCopyJob4 * This,
                             __RPC__out DWORD *Flags);
        HRESULT ( STDMETHODCALLTYPE *SetPeerCachingFlags )(
            __RPC__in IBackgroundCopyJob4 * This,
            DWORD Flags);
        HRESULT ( STDMETHODCALLTYPE *GetPeerCachingFlags )(
            __RPC__in IBackgroundCopyJob4 * This,
                             __RPC__out DWORD *pFlags);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerIntegrityLevel )(
            __RPC__in IBackgroundCopyJob4 * This,
                             __RPC__out ULONG *pLevel);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerElevationState )(
            __RPC__in IBackgroundCopyJob4 * This,
                             __RPC__out BOOL *pElevated);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumDownloadTime )(
            __RPC__in IBackgroundCopyJob4 * This,
            ULONG Timeout);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumDownloadTime )(
            __RPC__in IBackgroundCopyJob4 * This,
                             __RPC__out ULONG *pTimeout);
        END_INTERFACE
    } IBackgroundCopyJob4Vtbl;
    interface IBackgroundCopyJob4
    {
        CONST_VTBL struct IBackgroundCopyJob4Vtbl *lpVtbl;
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
EXTERN_C const IID IID_IBackgroundCopyFile3;
    typedef struct IBackgroundCopyFile3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyFile3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyFile3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyFile3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteName )(
            __RPC__in IBackgroundCopyFile3 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )(
            __RPC__in IBackgroundCopyFile3 * This,
                        __RPC__deref_out_opt LPWSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyFile3 * This,
                        __RPC__out BG_FILE_PROGRESS *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetFileRanges )(
            __RPC__in IBackgroundCopyFile3 * This,
                                    __RPC__inout_opt DWORD *RangeCount,
                                          __RPC__deref_out_ecount_full_opt(*RangeCount) BG_FILE_RANGE **Ranges);
        HRESULT ( STDMETHODCALLTYPE *SetRemoteName )(
            __RPC__in IBackgroundCopyFile3 * This,
            __RPC__in LPCWSTR Val);
        HRESULT ( STDMETHODCALLTYPE *GetTemporaryName )(
            __RPC__in IBackgroundCopyFile3 * This,
                        __RPC__deref_out_opt LPWSTR *pFilename);
        HRESULT ( STDMETHODCALLTYPE *SetValidationState )(
            __RPC__in IBackgroundCopyFile3 * This,
                       BOOL state);
        HRESULT ( STDMETHODCALLTYPE *GetValidationState )(
            __RPC__in IBackgroundCopyFile3 * This,
                        __RPC__out BOOL *pState);
        HRESULT ( STDMETHODCALLTYPE *IsDownloadedFromPeer )(
            __RPC__in IBackgroundCopyFile3 * This,
                        __RPC__out BOOL *pVal);
        END_INTERFACE
    } IBackgroundCopyFile3Vtbl;
    interface IBackgroundCopyFile3
    {
        CONST_VTBL struct IBackgroundCopyFile3Vtbl *lpVtbl;
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
EXTERN_C const IID IID_IBackgroundCopyCallback2;
    typedef struct IBackgroundCopyCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyCallback2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyCallback2 * This);
        HRESULT ( STDMETHODCALLTYPE *JobTransferred )(
            __RPC__in IBackgroundCopyCallback2 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob);
        HRESULT ( STDMETHODCALLTYPE *JobError )(
            __RPC__in IBackgroundCopyCallback2 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       __RPC__in_opt IBackgroundCopyError *pError);
        HRESULT ( STDMETHODCALLTYPE *JobModification )(
            __RPC__in IBackgroundCopyCallback2 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *FileTransferred )(
            __RPC__in IBackgroundCopyCallback2 * This,
                       __RPC__in_opt IBackgroundCopyJob *pJob,
                       __RPC__in_opt IBackgroundCopyFile *pFile);
        END_INTERFACE
    } IBackgroundCopyCallback2Vtbl;
    interface IBackgroundCopyCallback2
    {
        CONST_VTBL struct IBackgroundCopyCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> JobTransferred(This,pJob) )
    ( (This)->lpVtbl -> JobError(This,pJob,pError) )
    ( (This)->lpVtbl -> JobModification(This,pJob,dwReserved) )
    ( (This)->lpVtbl -> FileTransferred(This,pJob,pFile) )
EXTERN_C const IID LIBID_BackgroundCopyManager3_0;
EXTERN_C const CLSID CLSID_BackgroundCopyManager3_0;
class DECLSPEC_UUID("659cdea7-489e-11d9-a9cd-000d56965251")
BackgroundCopyManager3_0;
#include "bits4_0.h"
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bits3_0_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bits3_0_0000_0009_v0_0_s_ifspec;
}
