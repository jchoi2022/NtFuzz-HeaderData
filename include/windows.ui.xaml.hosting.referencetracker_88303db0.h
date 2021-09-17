#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IReferenceTrackerTarget IReferenceTrackerTarget;
typedef interface IReferenceTracker IReferenceTracker;
typedef interface IReferenceTrackerManager IReferenceTrackerManager;
typedef interface IFindReferenceTargetsCallback IFindReferenceTargetsCallback;
typedef interface IReferenceTrackerHost IReferenceTrackerHost;
typedef interface IReferenceTrackerExtension IReferenceTrackerExtension;
typedef interface ITrackerOwner ITrackerOwner;
#include "oaidl.h"
extern "C"{
#pragma warning(push)
#pragma warning(disable:4668)
#pragma warning(disable:4001)
       
#pragma warning(pop)
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IReferenceTrackerTarget;
    typedef struct IReferenceTrackerTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceTrackerTarget * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceTrackerTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceTrackerTarget * This);
        ULONG ( STDMETHODCALLTYPE *AddRefFromReferenceTracker )(
            IReferenceTrackerTarget * This);
        ULONG ( STDMETHODCALLTYPE *ReleaseFromReferenceTracker )(
            IReferenceTrackerTarget * This);
        HRESULT ( STDMETHODCALLTYPE *Peg )(
            IReferenceTrackerTarget * This);
        HRESULT ( STDMETHODCALLTYPE *Unpeg )(
            IReferenceTrackerTarget * This);
        END_INTERFACE
    } IReferenceTrackerTargetVtbl;
    interface IReferenceTrackerTarget
    {
        CONST_VTBL struct IReferenceTrackerTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddRefFromReferenceTracker(This) )
    ( (This)->lpVtbl -> ReleaseFromReferenceTracker(This) )
    ( (This)->lpVtbl -> Peg(This) )
    ( (This)->lpVtbl -> Unpeg(This) )
EXTERN_C const IID IID_IReferenceTracker;
    typedef struct IReferenceTrackerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceTracker * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceTracker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceTracker * This);
        HRESULT ( STDMETHODCALLTYPE *ConnectFromTrackerSource )(
            IReferenceTracker * This);
        HRESULT ( STDMETHODCALLTYPE *DisconnectFromTrackerSource )(
            IReferenceTracker * This);
        HRESULT ( STDMETHODCALLTYPE *FindTrackerTargets )(
            IReferenceTracker * This,
            _In_ IFindReferenceTargetsCallback *callback);
        HRESULT ( STDMETHODCALLTYPE *GetReferenceTrackerManager )(
            IReferenceTracker * This,
            _Out_ IReferenceTrackerManager **value);
        HRESULT ( STDMETHODCALLTYPE *AddRefFromTrackerSource )(
            IReferenceTracker * This);
        HRESULT ( STDMETHODCALLTYPE *ReleaseFromTrackerSource )(
            IReferenceTracker * This);
        HRESULT ( STDMETHODCALLTYPE *PegFromTrackerSource )(
            IReferenceTracker * This);
        END_INTERFACE
    } IReferenceTrackerVtbl;
    interface IReferenceTracker
    {
        CONST_VTBL struct IReferenceTrackerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ConnectFromTrackerSource(This) )
    ( (This)->lpVtbl -> DisconnectFromTrackerSource(This) )
    ( (This)->lpVtbl -> FindTrackerTargets(This,callback) )
    ( (This)->lpVtbl -> GetReferenceTrackerManager(This,value) )
    ( (This)->lpVtbl -> AddRefFromTrackerSource(This) )
    ( (This)->lpVtbl -> ReleaseFromTrackerSource(This) )
    ( (This)->lpVtbl -> PegFromTrackerSource(This) )
EXTERN_C const IID IID_IReferenceTrackerManager;
    typedef struct IReferenceTrackerManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceTrackerManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceTrackerManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceTrackerManager * This);
        HRESULT ( STDMETHODCALLTYPE *ReferenceTrackingStarted )(
            IReferenceTrackerManager * This);
        HRESULT ( STDMETHODCALLTYPE *FindTrackerTargetsCompleted )(
            IReferenceTrackerManager * This,
            _In_ boolean findFailed);
        HRESULT ( STDMETHODCALLTYPE *ReferenceTrackingCompleted )(
            IReferenceTrackerManager * This);
        HRESULT ( STDMETHODCALLTYPE *SetReferenceTrackerHost )(
            IReferenceTrackerManager * This,
            _In_ IReferenceTrackerHost *value);
        END_INTERFACE
    } IReferenceTrackerManagerVtbl;
    interface IReferenceTrackerManager
    {
        CONST_VTBL struct IReferenceTrackerManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ReferenceTrackingStarted(This) )
    ( (This)->lpVtbl -> FindTrackerTargetsCompleted(This,findFailed) )
    ( (This)->lpVtbl -> ReferenceTrackingCompleted(This) )
    ( (This)->lpVtbl -> SetReferenceTrackerHost(This,value) )
EXTERN_C const IID IID_IFindReferenceTargetsCallback;
    typedef struct IFindReferenceTargetsCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFindReferenceTargetsCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFindReferenceTargetsCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFindReferenceTargetsCallback * This);
        HRESULT ( STDMETHODCALLTYPE *FoundTrackerTarget )(
            IFindReferenceTargetsCallback * This,
            _In_ IReferenceTrackerTarget *target);
        END_INTERFACE
    } IFindReferenceTargetsCallbackVtbl;
    interface IFindReferenceTargetsCallback
    {
        CONST_VTBL struct IFindReferenceTargetsCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FoundTrackerTarget(This,target) )
typedef
enum __MIDL___MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0004_0001
    {
        XAML_REFERENCETRACKER_DISCONNECT_DEFAULT = 0,
        XAML_REFERENCETRACKER_DISCONNECT_SUSPEND = 1
    } XAML_REFERENCETRACKER_DISCONNECT;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IReferenceTrackerHost;
    typedef struct IReferenceTrackerHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceTrackerHost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceTrackerHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceTrackerHost * This);
        HRESULT ( STDMETHODCALLTYPE *DisconnectUnusedReferenceSources )(
            IReferenceTrackerHost * This,
                       XAML_REFERENCETRACKER_DISCONNECT options);
        HRESULT ( STDMETHODCALLTYPE *ReleaseDisconnectedReferenceSources )(
            IReferenceTrackerHost * This);
        HRESULT ( STDMETHODCALLTYPE *NotifyEndOfReferenceTrackingOnThread )(
            IReferenceTrackerHost * This);
        HRESULT ( STDMETHODCALLTYPE *GetTrackerTarget )(
            IReferenceTrackerHost * This,
            IUnknown *unknown,
            IReferenceTrackerTarget **newReference);
        HRESULT ( STDMETHODCALLTYPE *AddMemoryPressure )(
            IReferenceTrackerHost * This,
            UINT64 bytesAllocated);
        HRESULT ( STDMETHODCALLTYPE *RemoveMemoryPressure )(
            IReferenceTrackerHost * This,
            UINT64 bytesAllocated);
        END_INTERFACE
    } IReferenceTrackerHostVtbl;
    interface IReferenceTrackerHost
    {
        CONST_VTBL struct IReferenceTrackerHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DisconnectUnusedReferenceSources(This,options) )
    ( (This)->lpVtbl -> ReleaseDisconnectedReferenceSources(This) )
    ( (This)->lpVtbl -> NotifyEndOfReferenceTrackingOnThread(This) )
    ( (This)->lpVtbl -> GetTrackerTarget(This,unknown,newReference) )
    ( (This)->lpVtbl -> AddMemoryPressure(This,bytesAllocated) )
    ( (This)->lpVtbl -> RemoveMemoryPressure(This,bytesAllocated) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IReferenceTrackerExtension;
    typedef struct IReferenceTrackerExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IReferenceTrackerExtension * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IReferenceTrackerExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IReferenceTrackerExtension * This);
        END_INTERFACE
    } IReferenceTrackerExtensionVtbl;
    interface IReferenceTrackerExtension
    {
        CONST_VTBL struct IReferenceTrackerExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
typedef struct TrackerHandle__
    {
    int unused;
    } TrackerHandle__;
typedef __RPC_unique_pointer TrackerHandle__ *TrackerHandle;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_ITrackerOwner;
    typedef struct ITrackerOwnerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITrackerOwner * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITrackerOwner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITrackerOwner * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTrackerHandle )(
            ITrackerOwner * This,
                                TrackerHandle *returnValue);
        HRESULT ( STDMETHODCALLTYPE *DeleteTrackerHandle )(
            ITrackerOwner * This,
                       TrackerHandle handle);
        HRESULT ( STDMETHODCALLTYPE *SetTrackerValue )(
            ITrackerOwner * This,
                       TrackerHandle handle,
                       IUnknown *value);
        boolean ( STDMETHODCALLTYPE *TryGetSafeTrackerValue )(
            ITrackerOwner * This,
                       TrackerHandle handle,
                                IUnknown **returnValue);
        END_INTERFACE
    } ITrackerOwnerVtbl;
    interface ITrackerOwner
    {
        CONST_VTBL struct ITrackerOwnerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTrackerHandle(This,returnValue) )
    ( (This)->lpVtbl -> DeleteTrackerHandle(This,handle) )
    ( (This)->lpVtbl -> SetTrackerValue(This,handle,value) )
    ( (This)->lpVtbl -> TryGetSafeTrackerValue(This,handle,returnValue) )
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_windows2Eui2Examl2Ehosting2Ereferencetracker_0000_0007_v0_0_s_ifspec;
}
