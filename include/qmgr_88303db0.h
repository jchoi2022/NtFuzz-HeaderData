#pragma warning( disable: 4049 )
#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBackgroundCopyJob1 IBackgroundCopyJob1;
typedef interface IEnumBackgroundCopyJobs1 IEnumBackgroundCopyJobs1;
typedef interface IBackgroundCopyGroup IBackgroundCopyGroup;
typedef interface IEnumBackgroundCopyGroups IEnumBackgroundCopyGroups;
typedef interface IBackgroundCopyCallback1 IBackgroundCopyCallback1;
typedef interface IBackgroundCopyQMgr IBackgroundCopyQMgr;
typedef class BackgroundCopyQMgr BackgroundCopyQMgr;
#include "unknwn.h"
#include "ocidl.h"
#include "docobj.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_qmgr_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_qmgr_0000_0000_v0_0_s_ifspec;
typedef struct _FILESETINFO
    {
    BSTR bstrRemoteFile;
    BSTR bstrLocalFile;
    DWORD dwSizeHint;
    } FILESETINFO;
EXTERN_C const IID IID_IBackgroundCopyJob1;
    typedef struct IBackgroundCopyJob1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyJob1 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyJob1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyJob1 * This);
        HRESULT ( STDMETHODCALLTYPE *CancelJob )(
            __RPC__in IBackgroundCopyJob1 * This);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyJob1 * This,
                       DWORD dwFlags,
                        __RPC__out DWORD *pdwProgress);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IBackgroundCopyJob1 * This,
                        __RPC__out DWORD *pdwStatus,
                        __RPC__out DWORD *pdwWin32Result,
                        __RPC__out DWORD *pdwTransportResult,
                        __RPC__out DWORD *pdwNumOfRetries);
        HRESULT ( STDMETHODCALLTYPE *AddFiles )(
            __RPC__in IBackgroundCopyJob1 * This,
                       ULONG cFileCount,
                                __RPC__in_ecount_full(cFileCount) FILESETINFO **ppFileSet);
        HRESULT ( STDMETHODCALLTYPE *GetFile )(
            __RPC__in IBackgroundCopyJob1 * This,
                       ULONG cFileIndex,
                        __RPC__out FILESETINFO *pFileInfo);
        HRESULT ( STDMETHODCALLTYPE *GetFileCount )(
            __RPC__in IBackgroundCopyJob1 * This,
                        __RPC__out DWORD *pdwFileCount);
        HRESULT ( STDMETHODCALLTYPE *SwitchToForeground )(
            __RPC__in IBackgroundCopyJob1 * This);
        HRESULT ( STDMETHODCALLTYPE *get_JobID )(
            __RPC__in IBackgroundCopyJob1 * This,
                        __RPC__out GUID *pguidJobID);
        END_INTERFACE
    } IBackgroundCopyJob1Vtbl;
    interface IBackgroundCopyJob1
    {
        CONST_VTBL struct IBackgroundCopyJob1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CancelJob(This) )
    ( (This)->lpVtbl -> GetProgress(This,dwFlags,pdwProgress) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus,pdwWin32Result,pdwTransportResult,pdwNumOfRetries) )
    ( (This)->lpVtbl -> AddFiles(This,cFileCount,ppFileSet) )
    ( (This)->lpVtbl -> GetFile(This,cFileIndex,pFileInfo) )
    ( (This)->lpVtbl -> GetFileCount(This,pdwFileCount) )
    ( (This)->lpVtbl -> SwitchToForeground(This) )
    ( (This)->lpVtbl -> get_JobID(This,pguidJobID) )
EXTERN_C const IID IID_IEnumBackgroundCopyJobs1;
    typedef struct IEnumBackgroundCopyJobs1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumBackgroundCopyJobs1 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumBackgroundCopyJobs1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumBackgroundCopyJobs1 * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumBackgroundCopyJobs1 * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) GUID *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumBackgroundCopyJobs1 * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumBackgroundCopyJobs1 * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumBackgroundCopyJobs1 * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyJobs1 **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumBackgroundCopyJobs1 * This,
                        __RPC__out ULONG *puCount);
        END_INTERFACE
    } IEnumBackgroundCopyJobs1Vtbl;
    interface IEnumBackgroundCopyJobs1
    {
        CONST_VTBL struct IEnumBackgroundCopyJobs1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
typedef
enum GROUPPROP
    {
        GROUPPROP_PRIORITY = 0,
        GROUPPROP_REMOTEUSERID = 1,
        GROUPPROP_REMOTEUSERPWD = 2,
        GROUPPROP_LOCALUSERID = 3,
        GROUPPROP_LOCALUSERPWD = 4,
        GROUPPROP_PROTOCOLFLAGS = 5,
        GROUPPROP_NOTIFYFLAGS = 6,
        GROUPPROP_NOTIFYCLSID = 7,
        GROUPPROP_PROGRESSSIZE = 8,
        GROUPPROP_PROGRESSPERCENT = 9,
        GROUPPROP_PROGRESSTIME = 10,
        GROUPPROP_DISPLAYNAME = 11,
        GROUPPROP_DESCRIPTION = 12
    } GROUPPROP;
EXTERN_C const IID IID_IBackgroundCopyGroup;
    typedef struct IBackgroundCopyGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyGroup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetProp )(
            __RPC__in IBackgroundCopyGroup * This,
                       GROUPPROP propID,
                        __RPC__out VARIANT *pvarVal);
                      HRESULT ( STDMETHODCALLTYPE *SetProp )(
            IBackgroundCopyGroup * This,
                       GROUPPROP propID,
                       VARIANT *pvarVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgress )(
            __RPC__in IBackgroundCopyGroup * This,
                       DWORD dwFlags,
                        __RPC__out DWORD *pdwProgress);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IBackgroundCopyGroup * This,
                        __RPC__out DWORD *pdwStatus,
                        __RPC__out DWORD *pdwJobIndex);
        HRESULT ( STDMETHODCALLTYPE *GetJob )(
            __RPC__in IBackgroundCopyGroup * This,
                       GUID jobID,
                        __RPC__deref_out_opt IBackgroundCopyJob1 **ppJob);
        HRESULT ( STDMETHODCALLTYPE *SuspendGroup )(
            __RPC__in IBackgroundCopyGroup * This);
        HRESULT ( STDMETHODCALLTYPE *ResumeGroup )(
            __RPC__in IBackgroundCopyGroup * This);
        HRESULT ( STDMETHODCALLTYPE *CancelGroup )(
            __RPC__in IBackgroundCopyGroup * This);
        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in IBackgroundCopyGroup * This,
                        __RPC__out DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *get_GroupID )(
            __RPC__in IBackgroundCopyGroup * This,
                        __RPC__out GUID *pguidGroupID);
        HRESULT ( STDMETHODCALLTYPE *CreateJob )(
            __RPC__in IBackgroundCopyGroup * This,
                       GUID guidJobID,
                        __RPC__deref_out_opt IBackgroundCopyJob1 **ppJob);
        HRESULT ( STDMETHODCALLTYPE *EnumJobs )(
            __RPC__in IBackgroundCopyGroup * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IEnumBackgroundCopyJobs1 **ppEnumJobs);
        HRESULT ( STDMETHODCALLTYPE *SwitchToForeground )(
            __RPC__in IBackgroundCopyGroup * This);
        HRESULT ( STDMETHODCALLTYPE *QueryNewJobInterface )(
            __RPC__in IBackgroundCopyGroup * This,
                       __RPC__in REFIID iid,
                                __RPC__deref_out_opt IUnknown **pUnk);
        HRESULT ( STDMETHODCALLTYPE *SetNotificationPointer )(
            __RPC__in IBackgroundCopyGroup * This,
                       __RPC__in REFIID iid,
                       __RPC__in_opt IUnknown *pUnk);
        END_INTERFACE
    } IBackgroundCopyGroupVtbl;
    interface IBackgroundCopyGroup
    {
        CONST_VTBL struct IBackgroundCopyGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProp(This,propID,pvarVal) )
    ( (This)->lpVtbl -> SetProp(This,propID,pvarVal) )
    ( (This)->lpVtbl -> GetProgress(This,dwFlags,pdwProgress) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus,pdwJobIndex) )
    ( (This)->lpVtbl -> GetJob(This,jobID,ppJob) )
    ( (This)->lpVtbl -> SuspendGroup(This) )
    ( (This)->lpVtbl -> ResumeGroup(This) )
    ( (This)->lpVtbl -> CancelGroup(This) )
    ( (This)->lpVtbl -> get_Size(This,pdwSize) )
    ( (This)->lpVtbl -> get_GroupID(This,pguidGroupID) )
    ( (This)->lpVtbl -> CreateJob(This,guidJobID,ppJob) )
    ( (This)->lpVtbl -> EnumJobs(This,dwFlags,ppEnumJobs) )
    ( (This)->lpVtbl -> SwitchToForeground(This) )
    ( (This)->lpVtbl -> QueryNewJobInterface(This,iid,pUnk) )
    ( (This)->lpVtbl -> SetNotificationPointer(This,iid,pUnk) )
                HRESULT STDMETHODCALLTYPE IBackgroundCopyGroup_InternalSetProp_Proxy(
    __RPC__in IBackgroundCopyGroup * This,
               GROUPPROP propID,
               __RPC__in VARIANT *pvarVal);
void __RPC_STUB IBackgroundCopyGroup_InternalSetProp_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IEnumBackgroundCopyGroups;
    typedef struct IEnumBackgroundCopyGroupsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumBackgroundCopyGroups * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumBackgroundCopyGroups * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumBackgroundCopyGroups * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumBackgroundCopyGroups * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) GUID *rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumBackgroundCopyGroups * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumBackgroundCopyGroups * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumBackgroundCopyGroups * This,
                        __RPC__deref_out_opt IEnumBackgroundCopyGroups **ppenum);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IEnumBackgroundCopyGroups * This,
                        __RPC__out ULONG *puCount);
        END_INTERFACE
    } IEnumBackgroundCopyGroupsVtbl;
    interface IEnumBackgroundCopyGroups
    {
        CONST_VTBL struct IEnumBackgroundCopyGroupsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
EXTERN_C const IID IID_IBackgroundCopyCallback1;
    typedef struct IBackgroundCopyCallback1Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyCallback1 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyCallback1 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyCallback1 * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatus )(
            __RPC__in IBackgroundCopyCallback1 * This,
                       __RPC__in_opt IBackgroundCopyGroup *pGroup,
                       __RPC__in_opt IBackgroundCopyJob1 *pJob,
                       DWORD dwFileIndex,
                       DWORD dwStatus,
                       DWORD dwNumOfRetries,
                       DWORD dwWin32Result,
                       DWORD dwTransportResult);
        HRESULT ( STDMETHODCALLTYPE *OnProgress )(
            __RPC__in IBackgroundCopyCallback1 * This,
                       DWORD ProgressType,
                       __RPC__in_opt IBackgroundCopyGroup *pGroup,
                       __RPC__in_opt IBackgroundCopyJob1 *pJob,
                       DWORD dwFileIndex,
                       DWORD dwProgressValue);
        HRESULT ( STDMETHODCALLTYPE *OnProgressEx )(
            __RPC__in IBackgroundCopyCallback1 * This,
                       DWORD ProgressType,
                       __RPC__in_opt IBackgroundCopyGroup *pGroup,
                       __RPC__in_opt IBackgroundCopyJob1 *pJob,
                       DWORD dwFileIndex,
                       DWORD dwProgressValue,
                       DWORD dwByteArraySize,
                                __RPC__in_ecount_full(dwByteArraySize) BYTE *pByte);
        END_INTERFACE
    } IBackgroundCopyCallback1Vtbl;
    interface IBackgroundCopyCallback1
    {
        CONST_VTBL struct IBackgroundCopyCallback1Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStatus(This,pGroup,pJob,dwFileIndex,dwStatus,dwNumOfRetries,dwWin32Result,dwTransportResult) )
    ( (This)->lpVtbl -> OnProgress(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue) )
    ( (This)->lpVtbl -> OnProgressEx(This,ProgressType,pGroup,pJob,dwFileIndex,dwProgressValue,dwByteArraySize,pByte) )
EXTERN_C const IID IID_IBackgroundCopyQMgr;
    typedef struct IBackgroundCopyQMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBackgroundCopyQMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBackgroundCopyQMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBackgroundCopyQMgr * This);
        HRESULT ( STDMETHODCALLTYPE *CreateGroup )(
            __RPC__in IBackgroundCopyQMgr * This,
                       GUID guidGroupID,
                        __RPC__deref_out_opt IBackgroundCopyGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *GetGroup )(
            __RPC__in IBackgroundCopyQMgr * This,
                       GUID groupID,
                        __RPC__deref_out_opt IBackgroundCopyGroup **ppGroup);
        HRESULT ( STDMETHODCALLTYPE *EnumGroups )(
            __RPC__in IBackgroundCopyQMgr * This,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IEnumBackgroundCopyGroups **ppEnumGroups);
        END_INTERFACE
    } IBackgroundCopyQMgrVtbl;
    interface IBackgroundCopyQMgr
    {
        CONST_VTBL struct IBackgroundCopyQMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateGroup(This,guidGroupID,ppGroup) )
    ( (This)->lpVtbl -> GetGroup(This,groupID,ppGroup) )
    ( (This)->lpVtbl -> EnumGroups(This,dwFlags,ppEnumGroups) )
EXTERN_C const IID LIBID_BackgroundCopyQMgr;
EXTERN_C const CLSID CLSID_BackgroundCopyQMgr;
class DECLSPEC_UUID("69AD4AEE-51BE-439b-A92C-86AE490E8B30")
BackgroundCopyQMgr;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_qmgr_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_qmgr_0000_0007_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
              HRESULT STDMETHODCALLTYPE IBackgroundCopyGroup_SetProp_Proxy(
    IBackgroundCopyGroup * This,
               GROUPPROP propID,
               VARIANT *pvarVal);
                HRESULT STDMETHODCALLTYPE IBackgroundCopyGroup_SetProp_Stub(
    __RPC__in IBackgroundCopyGroup * This,
               GROUPPROP propID,
               __RPC__in VARIANT *pvarVal);
}
