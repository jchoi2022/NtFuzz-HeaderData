#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICloneViewHelper ICloneViewHelper;
typedef interface IViewHelper IViewHelper;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagSources
{
    ULONG sourceId;
    int numTargets;
    ULONG aTargets[1];
} Sources;
typedef struct tagAdapter
{
    WCHAR AdapterName[128];
    int numSources;
    Sources sources[1];
} Adapter;
typedef struct tagAdapters
{
    int numAdapters;
    Adapter adapter[1];
} Adapters;
typedef struct tagDisplayMode
{
    WCHAR DeviceName[32];
    DEVMODEW devMode;
} DisplayMode;
typedef struct tagDisplayModes
{
    int numDisplayModes;
    DisplayMode displayMode[1];
} DisplayModes;
extern RPC_IF_HANDLE __MIDL_itf_cloneviewhelper_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cloneviewhelper_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICloneViewHelper;
    typedef struct ICloneViewHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICloneViewHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICloneViewHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICloneViewHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetConnectedIDs )(
            __RPC__in ICloneViewHelper * This,
                       __RPC__in LPCWSTR wszAdaptorName,
                            __RPC__inout ULONG *pulCount,
                            __RPC__inout ULONG *pulID,
                       ULONG ulFlags);
        HRESULT ( STDMETHODCALLTYPE *GetActiveTopology )(
            __RPC__in ICloneViewHelper * This,
                       __RPC__in LPCWSTR wszAdaptorName,
                       ULONG ulSourceID,
                            __RPC__inout ULONG *pulCount,
                            __RPC__inout ULONG *pulTargetID);
        HRESULT ( STDMETHODCALLTYPE *SetActiveTopology )(
            __RPC__in ICloneViewHelper * This,
                       __RPC__in LPCWSTR wszAdaptorName,
                       ULONG ulSourceID,
                       ULONG ulCount,
                       __RPC__in ULONG *pulTargetID);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ICloneViewHelper * This,
                       BOOL fFinalCall);
        END_INTERFACE
    } ICloneViewHelperVtbl;
    interface ICloneViewHelper
    {
        CONST_VTBL struct ICloneViewHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConnectedIDs(This,wszAdaptorName,pulCount,pulID,ulFlags) )
    ( (This)->lpVtbl -> GetActiveTopology(This,wszAdaptorName,ulSourceID,pulCount,pulTargetID) )
    ( (This)->lpVtbl -> SetActiveTopology(This,wszAdaptorName,ulSourceID,ulCount,pulTargetID) )
    ( (This)->lpVtbl -> Commit(This,fFinalCall) )
EXTERN_C const IID IID_IViewHelper;
    typedef struct IViewHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetConnectedIDs )(
            __RPC__in IViewHelper * This,
                       __RPC__in LPCWSTR wszAdaptorName,
                            __RPC__inout ULONG *pulCount,
                            __RPC__inout ULONG *pulID,
                       ULONG ulFlags);
        HRESULT ( STDMETHODCALLTYPE *GetActiveTopology )(
            __RPC__in IViewHelper * This,
                       __RPC__in LPCWSTR wszAdaptorName,
                       ULONG ulSourceID,
                            __RPC__inout ULONG *pulCount,
                            __RPC__inout ULONG *pulTargetID);
        HRESULT ( STDMETHODCALLTYPE *SetActiveTopology )(
            __RPC__in IViewHelper * This,
                       __RPC__in LPCWSTR wszAdaptorName,
                       ULONG ulSourceID,
                       ULONG ulCount,
                       __RPC__in ULONG *pulTargetID);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in IViewHelper * This);
        HRESULT ( STDMETHODCALLTYPE *SetConfiguration )(
            __RPC__in IViewHelper * This,
                       __RPC__in_opt IStream *pIStream,
                        __RPC__out ULONG *pulStatus);
        HRESULT ( STDMETHODCALLTYPE *GetProceedOnNewConfiguration )(
            __RPC__in IViewHelper * This);
        END_INTERFACE
    } IViewHelperVtbl;
    interface IViewHelper
    {
        CONST_VTBL struct IViewHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetConnectedIDs(This,wszAdaptorName,pulCount,pulID,ulFlags) )
    ( (This)->lpVtbl -> GetActiveTopology(This,wszAdaptorName,ulSourceID,pulCount,pulTargetID) )
    ( (This)->lpVtbl -> SetActiveTopology(This,wszAdaptorName,ulSourceID,ulCount,pulTargetID) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> SetConfiguration(This,pIStream,pulStatus) )
    ( (This)->lpVtbl -> GetProceedOnNewConfiguration(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_cloneviewhelper_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_cloneviewhelper_0000_0002_v0_0_s_ifspec;
}
