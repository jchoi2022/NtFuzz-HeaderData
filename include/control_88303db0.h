#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IAMCollection IAMCollection;
typedef interface IMediaControl IMediaControl;
typedef interface IMediaEvent IMediaEvent;
typedef interface IMediaEventEx IMediaEventEx;
typedef interface IMediaPosition IMediaPosition;
typedef interface IBasicAudio IBasicAudio;
typedef interface IVideoWindow IVideoWindow;
typedef interface IBasicVideo IBasicVideo;
typedef interface IBasicVideo2 IBasicVideo2;
typedef interface IDeferredCommand IDeferredCommand;
typedef interface IQueueCommand IQueueCommand;
typedef class FilgraphManager FilgraphManager;
typedef interface IFilterInfo IFilterInfo;
typedef interface IRegFilterInfo IRegFilterInfo;
typedef interface IMediaTypeInfo IMediaTypeInfo;
typedef interface IPinInfo IPinInfo;
typedef interface IAMStats IAMStats;
extern "C"{
typedef double REFTIME;
typedef LONG_PTR OAEVENT;
typedef LONG_PTR OAHWND;
typedef long OAFilterState;
DEFINE_GUID(LIBID_QuartzTypeLib,0x56a868b0,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
DEFINE_GUID(IID_IAMCollection,0x56a868b9,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IAMCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAMCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAMCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAMCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAMCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAMCollection * This,
                                __RPC__out LONG *plCount);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IAMCollection * This,
                       long lItem,
                        __RPC__deref_out_opt IUnknown **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IAMCollection * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
        END_INTERFACE
    } IAMCollectionVtbl;
    interface IAMCollection
    {
        CONST_VTBL struct IAMCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> Item(This,lItem,ppUnk) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppUnk) )
DEFINE_GUID(IID_IMediaControl,0x56a868b1,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IMediaControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMediaControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMediaControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMediaControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMediaControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMediaControl * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMediaControl * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMediaControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            __RPC__in IMediaControl * This,
                       LONG msTimeout,
                        __RPC__out OAFilterState *pfs);
        HRESULT ( STDMETHODCALLTYPE *RenderFile )(
            __RPC__in IMediaControl * This,
                       __RPC__in BSTR strFilename);
        HRESULT ( STDMETHODCALLTYPE *AddSourceFilter )(
            __RPC__in IMediaControl * This,
                       __RPC__in BSTR strFilename,
                        __RPC__deref_out_opt IDispatch **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_FilterCollection )(
            __RPC__in IMediaControl * This,
                                __RPC__deref_out_opt IDispatch **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_RegFilterCollection )(
            __RPC__in IMediaControl * This,
                                __RPC__deref_out_opt IDispatch **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *StopWhenReady )(
            __RPC__in IMediaControl * This);
        END_INTERFACE
    } IMediaControlVtbl;
    interface IMediaControl
    {
        CONST_VTBL struct IMediaControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> GetState(This,msTimeout,pfs) )
    ( (This)->lpVtbl -> RenderFile(This,strFilename) )
    ( (This)->lpVtbl -> AddSourceFilter(This,strFilename,ppUnk) )
    ( (This)->lpVtbl -> get_FilterCollection(This,ppUnk) )
    ( (This)->lpVtbl -> get_RegFilterCollection(This,ppUnk) )
    ( (This)->lpVtbl -> StopWhenReady(This) )
DEFINE_GUID(IID_IMediaEvent,0x56a868b6,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IMediaEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMediaEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMediaEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMediaEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMediaEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *GetEventHandle )(
            __RPC__in IMediaEvent * This,
                        __RPC__out OAEVENT *hEvent);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMediaEvent * This,
                        __RPC__out long *lEventCode,
                        __RPC__out LONG_PTR *lParam1,
                        __RPC__out LONG_PTR *lParam2,
                       long msTimeout);
        HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IMediaEvent * This,
                       long msTimeout,
                        __RPC__out long *pEvCode);
        HRESULT ( STDMETHODCALLTYPE *CancelDefaultHandling )(
            __RPC__in IMediaEvent * This,
                       long lEvCode);
        HRESULT ( STDMETHODCALLTYPE *RestoreDefaultHandling )(
            __RPC__in IMediaEvent * This,
                       long lEvCode);
        HRESULT ( STDMETHODCALLTYPE *FreeEventParams )(
            __RPC__in IMediaEvent * This,
                       long lEvCode,
                       LONG_PTR lParam1,
                       LONG_PTR lParam2);
        END_INTERFACE
    } IMediaEventVtbl;
    interface IMediaEvent
    {
        CONST_VTBL struct IMediaEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetEventHandle(This,hEvent) )
    ( (This)->lpVtbl -> GetEvent(This,lEventCode,lParam1,lParam2,msTimeout) )
    ( (This)->lpVtbl -> WaitForCompletion(This,msTimeout,pEvCode) )
    ( (This)->lpVtbl -> CancelDefaultHandling(This,lEvCode) )
    ( (This)->lpVtbl -> RestoreDefaultHandling(This,lEvCode) )
    ( (This)->lpVtbl -> FreeEventParams(This,lEvCode,lParam1,lParam2) )
DEFINE_GUID(IID_IMediaEventEx,0x56a868c0,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IMediaEventExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaEventEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaEventEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaEventEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMediaEventEx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMediaEventEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMediaEventEx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMediaEventEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *GetEventHandle )(
            __RPC__in IMediaEventEx * This,
                        __RPC__out OAEVENT *hEvent);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in IMediaEventEx * This,
                        __RPC__out long *lEventCode,
                        __RPC__out LONG_PTR *lParam1,
                        __RPC__out LONG_PTR *lParam2,
                       long msTimeout);
        HRESULT ( STDMETHODCALLTYPE *WaitForCompletion )(
            __RPC__in IMediaEventEx * This,
                       long msTimeout,
                        __RPC__out long *pEvCode);
        HRESULT ( STDMETHODCALLTYPE *CancelDefaultHandling )(
            __RPC__in IMediaEventEx * This,
                       long lEvCode);
        HRESULT ( STDMETHODCALLTYPE *RestoreDefaultHandling )(
            __RPC__in IMediaEventEx * This,
                       long lEvCode);
        HRESULT ( STDMETHODCALLTYPE *FreeEventParams )(
            __RPC__in IMediaEventEx * This,
                       long lEvCode,
                       LONG_PTR lParam1,
                       LONG_PTR lParam2);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyWindow )(
            __RPC__in IMediaEventEx * This,
                       OAHWND hwnd,
                       long lMsg,
                       LONG_PTR lInstanceData);
        HRESULT ( STDMETHODCALLTYPE *SetNotifyFlags )(
            __RPC__in IMediaEventEx * This,
                       long lNoNotifyFlags);
        HRESULT ( STDMETHODCALLTYPE *GetNotifyFlags )(
            __RPC__in IMediaEventEx * This,
                        __RPC__out long *lplNoNotifyFlags);
        END_INTERFACE
    } IMediaEventExVtbl;
    interface IMediaEventEx
    {
        CONST_VTBL struct IMediaEventExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetEventHandle(This,hEvent) )
    ( (This)->lpVtbl -> GetEvent(This,lEventCode,lParam1,lParam2,msTimeout) )
    ( (This)->lpVtbl -> WaitForCompletion(This,msTimeout,pEvCode) )
    ( (This)->lpVtbl -> CancelDefaultHandling(This,lEvCode) )
    ( (This)->lpVtbl -> RestoreDefaultHandling(This,lEvCode) )
    ( (This)->lpVtbl -> FreeEventParams(This,lEvCode,lParam1,lParam2) )
    ( (This)->lpVtbl -> SetNotifyWindow(This,hwnd,lMsg,lInstanceData) )
    ( (This)->lpVtbl -> SetNotifyFlags(This,lNoNotifyFlags) )
    ( (This)->lpVtbl -> GetNotifyFlags(This,lplNoNotifyFlags) )
DEFINE_GUID(IID_IMediaPosition,0x56a868b2,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IMediaPositionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaPosition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaPosition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaPosition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMediaPosition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMediaPosition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMediaPosition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMediaPosition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Duration )(
            __RPC__in IMediaPosition * This,
                                __RPC__out REFTIME *plength);
                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMediaPosition * This,
                       REFTIME llTime);
                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMediaPosition * This,
                                __RPC__out REFTIME *pllTime);
                        HRESULT ( STDMETHODCALLTYPE *get_StopTime )(
            __RPC__in IMediaPosition * This,
                                __RPC__out REFTIME *pllTime);
                        HRESULT ( STDMETHODCALLTYPE *put_StopTime )(
            __RPC__in IMediaPosition * This,
                       REFTIME llTime);
                        HRESULT ( STDMETHODCALLTYPE *get_PrerollTime )(
            __RPC__in IMediaPosition * This,
                                __RPC__out REFTIME *pllTime);
                        HRESULT ( STDMETHODCALLTYPE *put_PrerollTime )(
            __RPC__in IMediaPosition * This,
                       REFTIME llTime);
                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMediaPosition * This,
                       double dRate);
                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMediaPosition * This,
                                __RPC__out double *pdRate);
        HRESULT ( STDMETHODCALLTYPE *CanSeekForward )(
            __RPC__in IMediaPosition * This,
                                __RPC__out LONG *pCanSeekForward);
        HRESULT ( STDMETHODCALLTYPE *CanSeekBackward )(
            __RPC__in IMediaPosition * This,
                                __RPC__out LONG *pCanSeekBackward);
        END_INTERFACE
    } IMediaPositionVtbl;
    interface IMediaPosition
    {
        CONST_VTBL struct IMediaPositionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Duration(This,plength) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,llTime) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,pllTime) )
    ( (This)->lpVtbl -> get_StopTime(This,pllTime) )
    ( (This)->lpVtbl -> put_StopTime(This,llTime) )
    ( (This)->lpVtbl -> get_PrerollTime(This,pllTime) )
    ( (This)->lpVtbl -> put_PrerollTime(This,llTime) )
    ( (This)->lpVtbl -> put_Rate(This,dRate) )
    ( (This)->lpVtbl -> get_Rate(This,pdRate) )
    ( (This)->lpVtbl -> CanSeekForward(This,pCanSeekForward) )
    ( (This)->lpVtbl -> CanSeekBackward(This,pCanSeekBackward) )
DEFINE_GUID(IID_IBasicAudio,0x56a868b3,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IBasicAudioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBasicAudio * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBasicAudio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBasicAudio * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBasicAudio * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBasicAudio * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBasicAudio * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBasicAudio * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in IBasicAudio * This,
                       long lVolume);
                        HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in IBasicAudio * This,
                                __RPC__out long *plVolume);
                        HRESULT ( STDMETHODCALLTYPE *put_Balance )(
            __RPC__in IBasicAudio * This,
                       long lBalance);
                        HRESULT ( STDMETHODCALLTYPE *get_Balance )(
            __RPC__in IBasicAudio * This,
                                __RPC__out long *plBalance);
        END_INTERFACE
    } IBasicAudioVtbl;
    interface IBasicAudio
    {
        CONST_VTBL struct IBasicAudioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_Volume(This,lVolume) )
    ( (This)->lpVtbl -> get_Volume(This,plVolume) )
    ( (This)->lpVtbl -> put_Balance(This,lBalance) )
    ( (This)->lpVtbl -> get_Balance(This,plBalance) )
DEFINE_GUID(IID_IVideoWindow,0x56a868b4,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IVideoWindowVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVideoWindow * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVideoWindow * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVideoWindow * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IVideoWindow * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IVideoWindow * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IVideoWindow * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVideoWindow * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *put_Caption )(
            __RPC__in IVideoWindow * This,
                       __RPC__in BSTR strCaption);
                        HRESULT ( STDMETHODCALLTYPE *get_Caption )(
            __RPC__in IVideoWindow * This,
                                __RPC__deref_out_opt BSTR *strCaption);
                        HRESULT ( STDMETHODCALLTYPE *put_WindowStyle )(
            __RPC__in IVideoWindow * This,
                       long WindowStyle);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowStyle )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *WindowStyle);
                        HRESULT ( STDMETHODCALLTYPE *put_WindowStyleEx )(
            __RPC__in IVideoWindow * This,
                       long WindowStyleEx);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowStyleEx )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *WindowStyleEx);
                        HRESULT ( STDMETHODCALLTYPE *put_AutoShow )(
            __RPC__in IVideoWindow * This,
                       long AutoShow);
                        HRESULT ( STDMETHODCALLTYPE *get_AutoShow )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *AutoShow);
                        HRESULT ( STDMETHODCALLTYPE *put_WindowState )(
            __RPC__in IVideoWindow * This,
                       long WindowState);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowState )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *WindowState);
                        HRESULT ( STDMETHODCALLTYPE *put_BackgroundPalette )(
            __RPC__in IVideoWindow * This,
                       long BackgroundPalette);
                        HRESULT ( STDMETHODCALLTYPE *get_BackgroundPalette )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *pBackgroundPalette);
                        HRESULT ( STDMETHODCALLTYPE *put_Visible )(
            __RPC__in IVideoWindow * This,
                       long Visible);
                        HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *pVisible);
                        HRESULT ( STDMETHODCALLTYPE *put_Left )(
            __RPC__in IVideoWindow * This,
                       long Left);
                        HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *pLeft);
                        HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in IVideoWindow * This,
                       long Width);
                        HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *pWidth);
                        HRESULT ( STDMETHODCALLTYPE *put_Top )(
            __RPC__in IVideoWindow * This,
                       long Top);
                        HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *pTop);
                        HRESULT ( STDMETHODCALLTYPE *put_Height )(
            __RPC__in IVideoWindow * This,
                       long Height);
                        HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *pHeight);
                        HRESULT ( STDMETHODCALLTYPE *put_Owner )(
            __RPC__in IVideoWindow * This,
                       OAHWND Owner);
                        HRESULT ( STDMETHODCALLTYPE *get_Owner )(
            __RPC__in IVideoWindow * This,
                                __RPC__out OAHWND *Owner);
                        HRESULT ( STDMETHODCALLTYPE *put_MessageDrain )(
            __RPC__in IVideoWindow * This,
                       OAHWND Drain);
                        HRESULT ( STDMETHODCALLTYPE *get_MessageDrain )(
            __RPC__in IVideoWindow * This,
                                __RPC__out OAHWND *Drain);
                        HRESULT ( STDMETHODCALLTYPE *get_BorderColor )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *Color);
                        HRESULT ( STDMETHODCALLTYPE *put_BorderColor )(
            __RPC__in IVideoWindow * This,
                       long Color);
                        HRESULT ( STDMETHODCALLTYPE *get_FullScreenMode )(
            __RPC__in IVideoWindow * This,
                                __RPC__out long *FullScreenMode);
                        HRESULT ( STDMETHODCALLTYPE *put_FullScreenMode )(
            __RPC__in IVideoWindow * This,
                       long FullScreenMode);
        HRESULT ( STDMETHODCALLTYPE *SetWindowForeground )(
            __RPC__in IVideoWindow * This,
                       long Focus);
        HRESULT ( STDMETHODCALLTYPE *NotifyOwnerMessage )(
            __RPC__in IVideoWindow * This,
                       OAHWND hwnd,
                       long uMsg,
                       LONG_PTR wParam,
                       LONG_PTR lParam);
        HRESULT ( STDMETHODCALLTYPE *SetWindowPosition )(
            __RPC__in IVideoWindow * This,
                       long Left,
                       long Top,
                       long Width,
                       long Height);
        HRESULT ( STDMETHODCALLTYPE *GetWindowPosition )(
            __RPC__in IVideoWindow * This,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *GetMinIdealImageSize )(
            __RPC__in IVideoWindow * This,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *GetMaxIdealImageSize )(
            __RPC__in IVideoWindow * This,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *GetRestorePosition )(
            __RPC__in IVideoWindow * This,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *HideCursor )(
            __RPC__in IVideoWindow * This,
                       long HideCursor);
        HRESULT ( STDMETHODCALLTYPE *IsCursorHidden )(
            __RPC__in IVideoWindow * This,
                        __RPC__out long *CursorHidden);
        END_INTERFACE
    } IVideoWindowVtbl;
    interface IVideoWindow
    {
        CONST_VTBL struct IVideoWindowVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_Caption(This,strCaption) )
    ( (This)->lpVtbl -> get_Caption(This,strCaption) )
    ( (This)->lpVtbl -> put_WindowStyle(This,WindowStyle) )
    ( (This)->lpVtbl -> get_WindowStyle(This,WindowStyle) )
    ( (This)->lpVtbl -> put_WindowStyleEx(This,WindowStyleEx) )
    ( (This)->lpVtbl -> get_WindowStyleEx(This,WindowStyleEx) )
    ( (This)->lpVtbl -> put_AutoShow(This,AutoShow) )
    ( (This)->lpVtbl -> get_AutoShow(This,AutoShow) )
    ( (This)->lpVtbl -> put_WindowState(This,WindowState) )
    ( (This)->lpVtbl -> get_WindowState(This,WindowState) )
    ( (This)->lpVtbl -> put_BackgroundPalette(This,BackgroundPalette) )
    ( (This)->lpVtbl -> get_BackgroundPalette(This,pBackgroundPalette) )
    ( (This)->lpVtbl -> put_Visible(This,Visible) )
    ( (This)->lpVtbl -> get_Visible(This,pVisible) )
    ( (This)->lpVtbl -> put_Left(This,Left) )
    ( (This)->lpVtbl -> get_Left(This,pLeft) )
    ( (This)->lpVtbl -> put_Width(This,Width) )
    ( (This)->lpVtbl -> get_Width(This,pWidth) )
    ( (This)->lpVtbl -> put_Top(This,Top) )
    ( (This)->lpVtbl -> get_Top(This,pTop) )
    ( (This)->lpVtbl -> put_Height(This,Height) )
    ( (This)->lpVtbl -> get_Height(This,pHeight) )
    ( (This)->lpVtbl -> put_Owner(This,Owner) )
    ( (This)->lpVtbl -> get_Owner(This,Owner) )
    ( (This)->lpVtbl -> put_MessageDrain(This,Drain) )
    ( (This)->lpVtbl -> get_MessageDrain(This,Drain) )
    ( (This)->lpVtbl -> get_BorderColor(This,Color) )
    ( (This)->lpVtbl -> put_BorderColor(This,Color) )
    ( (This)->lpVtbl -> get_FullScreenMode(This,FullScreenMode) )
    ( (This)->lpVtbl -> put_FullScreenMode(This,FullScreenMode) )
    ( (This)->lpVtbl -> SetWindowForeground(This,Focus) )
    ( (This)->lpVtbl -> NotifyOwnerMessage(This,hwnd,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> SetWindowPosition(This,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> GetWindowPosition(This,pLeft,pTop,pWidth,pHeight) )
    ( (This)->lpVtbl -> GetMinIdealImageSize(This,pWidth,pHeight) )
    ( (This)->lpVtbl -> GetMaxIdealImageSize(This,pWidth,pHeight) )
    ( (This)->lpVtbl -> GetRestorePosition(This,pLeft,pTop,pWidth,pHeight) )
    ( (This)->lpVtbl -> HideCursor(This,HideCursor) )
    ( (This)->lpVtbl -> IsCursorHidden(This,CursorHidden) )
DEFINE_GUID(IID_IBasicVideo,0x56a868b5,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IBasicVideoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBasicVideo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBasicVideo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBasicVideo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBasicVideo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBasicVideo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBasicVideo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBasicVideo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_AvgTimePerFrame )(
            __RPC__in IBasicVideo * This,
                                __RPC__out REFTIME *pAvgTimePerFrame);
                        HRESULT ( STDMETHODCALLTYPE *get_BitRate )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pBitRate);
                        HRESULT ( STDMETHODCALLTYPE *get_BitErrorRate )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pBitErrorRate);
                        HRESULT ( STDMETHODCALLTYPE *get_VideoWidth )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pVideoWidth);
                        HRESULT ( STDMETHODCALLTYPE *get_VideoHeight )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pVideoHeight);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceLeft )(
            __RPC__in IBasicVideo * This,
                       long SourceLeft);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceLeft )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pSourceLeft);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceWidth )(
            __RPC__in IBasicVideo * This,
                       long SourceWidth);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceWidth )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pSourceWidth);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceTop )(
            __RPC__in IBasicVideo * This,
                       long SourceTop);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceTop )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pSourceTop);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceHeight )(
            __RPC__in IBasicVideo * This,
                       long SourceHeight);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceHeight )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pSourceHeight);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationLeft )(
            __RPC__in IBasicVideo * This,
                       long DestinationLeft);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationLeft )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pDestinationLeft);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationWidth )(
            __RPC__in IBasicVideo * This,
                       long DestinationWidth);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationWidth )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pDestinationWidth);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationTop )(
            __RPC__in IBasicVideo * This,
                       long DestinationTop);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationTop )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pDestinationTop);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationHeight )(
            __RPC__in IBasicVideo * This,
                       long DestinationHeight);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationHeight )(
            __RPC__in IBasicVideo * This,
                                __RPC__out long *pDestinationHeight);
        HRESULT ( STDMETHODCALLTYPE *SetSourcePosition )(
            __RPC__in IBasicVideo * This,
                       long Left,
                       long Top,
                       long Width,
                       long Height);
        HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )(
            __RPC__in IBasicVideo * This,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSourcePosition )(
            __RPC__in IBasicVideo * This);
        HRESULT ( STDMETHODCALLTYPE *SetDestinationPosition )(
            __RPC__in IBasicVideo * This,
                       long Left,
                       long Top,
                       long Width,
                       long Height);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationPosition )(
            __RPC__in IBasicVideo * This,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultDestinationPosition )(
            __RPC__in IBasicVideo * This);
        HRESULT ( STDMETHODCALLTYPE *GetVideoSize )(
            __RPC__in IBasicVideo * This,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *GetVideoPaletteEntries )(
            __RPC__in IBasicVideo * This,
                       long StartIndex,
                       long Entries,
                        __RPC__out long *pRetrieved,
                        __RPC__out long *pPalette);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )(
            __RPC__in IBasicVideo * This,
                            __RPC__inout long *pBufferSize,
                        __RPC__out long *pDIBImage);
        HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultSource )(
            __RPC__in IBasicVideo * This);
        HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultDestination )(
            __RPC__in IBasicVideo * This);
        END_INTERFACE
    } IBasicVideoVtbl;
    interface IBasicVideo
    {
        CONST_VTBL struct IBasicVideoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AvgTimePerFrame(This,pAvgTimePerFrame) )
    ( (This)->lpVtbl -> get_BitRate(This,pBitRate) )
    ( (This)->lpVtbl -> get_BitErrorRate(This,pBitErrorRate) )
    ( (This)->lpVtbl -> get_VideoWidth(This,pVideoWidth) )
    ( (This)->lpVtbl -> get_VideoHeight(This,pVideoHeight) )
    ( (This)->lpVtbl -> put_SourceLeft(This,SourceLeft) )
    ( (This)->lpVtbl -> get_SourceLeft(This,pSourceLeft) )
    ( (This)->lpVtbl -> put_SourceWidth(This,SourceWidth) )
    ( (This)->lpVtbl -> get_SourceWidth(This,pSourceWidth) )
    ( (This)->lpVtbl -> put_SourceTop(This,SourceTop) )
    ( (This)->lpVtbl -> get_SourceTop(This,pSourceTop) )
    ( (This)->lpVtbl -> put_SourceHeight(This,SourceHeight) )
    ( (This)->lpVtbl -> get_SourceHeight(This,pSourceHeight) )
    ( (This)->lpVtbl -> put_DestinationLeft(This,DestinationLeft) )
    ( (This)->lpVtbl -> get_DestinationLeft(This,pDestinationLeft) )
    ( (This)->lpVtbl -> put_DestinationWidth(This,DestinationWidth) )
    ( (This)->lpVtbl -> get_DestinationWidth(This,pDestinationWidth) )
    ( (This)->lpVtbl -> put_DestinationTop(This,DestinationTop) )
    ( (This)->lpVtbl -> get_DestinationTop(This,pDestinationTop) )
    ( (This)->lpVtbl -> put_DestinationHeight(This,DestinationHeight) )
    ( (This)->lpVtbl -> get_DestinationHeight(This,pDestinationHeight) )
    ( (This)->lpVtbl -> SetSourcePosition(This,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> GetSourcePosition(This,pLeft,pTop,pWidth,pHeight) )
    ( (This)->lpVtbl -> SetDefaultSourcePosition(This) )
    ( (This)->lpVtbl -> SetDestinationPosition(This,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight) )
    ( (This)->lpVtbl -> SetDefaultDestinationPosition(This) )
    ( (This)->lpVtbl -> GetVideoSize(This,pWidth,pHeight) )
    ( (This)->lpVtbl -> GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette) )
    ( (This)->lpVtbl -> GetCurrentImage(This,pBufferSize,pDIBImage) )
    ( (This)->lpVtbl -> IsUsingDefaultSource(This) )
    ( (This)->lpVtbl -> IsUsingDefaultDestination(This) )
DEFINE_GUID(IID_IBasicVideo2,0x329bb360,0xf6ea,0x11d1,0x90,0x38,0x00,0xa0,0xc9,0x69,0x72,0x98);
    typedef struct IBasicVideo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBasicVideo2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBasicVideo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBasicVideo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IBasicVideo2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IBasicVideo2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IBasicVideo2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IBasicVideo2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_AvgTimePerFrame )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out REFTIME *pAvgTimePerFrame);
                        HRESULT ( STDMETHODCALLTYPE *get_BitRate )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pBitRate);
                        HRESULT ( STDMETHODCALLTYPE *get_BitErrorRate )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pBitErrorRate);
                        HRESULT ( STDMETHODCALLTYPE *get_VideoWidth )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pVideoWidth);
                        HRESULT ( STDMETHODCALLTYPE *get_VideoHeight )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pVideoHeight);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceLeft )(
            __RPC__in IBasicVideo2 * This,
                       long SourceLeft);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceLeft )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pSourceLeft);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceWidth )(
            __RPC__in IBasicVideo2 * This,
                       long SourceWidth);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceWidth )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pSourceWidth);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceTop )(
            __RPC__in IBasicVideo2 * This,
                       long SourceTop);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceTop )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pSourceTop);
                        HRESULT ( STDMETHODCALLTYPE *put_SourceHeight )(
            __RPC__in IBasicVideo2 * This,
                       long SourceHeight);
                        HRESULT ( STDMETHODCALLTYPE *get_SourceHeight )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pSourceHeight);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationLeft )(
            __RPC__in IBasicVideo2 * This,
                       long DestinationLeft);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationLeft )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pDestinationLeft);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationWidth )(
            __RPC__in IBasicVideo2 * This,
                       long DestinationWidth);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationWidth )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pDestinationWidth);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationTop )(
            __RPC__in IBasicVideo2 * This,
                       long DestinationTop);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationTop )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pDestinationTop);
                        HRESULT ( STDMETHODCALLTYPE *put_DestinationHeight )(
            __RPC__in IBasicVideo2 * This,
                       long DestinationHeight);
                        HRESULT ( STDMETHODCALLTYPE *get_DestinationHeight )(
            __RPC__in IBasicVideo2 * This,
                                __RPC__out long *pDestinationHeight);
        HRESULT ( STDMETHODCALLTYPE *SetSourcePosition )(
            __RPC__in IBasicVideo2 * This,
                       long Left,
                       long Top,
                       long Width,
                       long Height);
        HRESULT ( STDMETHODCALLTYPE *GetSourcePosition )(
            __RPC__in IBasicVideo2 * This,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultSourcePosition )(
            __RPC__in IBasicVideo2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDestinationPosition )(
            __RPC__in IBasicVideo2 * This,
                       long Left,
                       long Top,
                       long Width,
                       long Height);
        HRESULT ( STDMETHODCALLTYPE *GetDestinationPosition )(
            __RPC__in IBasicVideo2 * This,
                        __RPC__out long *pLeft,
                        __RPC__out long *pTop,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultDestinationPosition )(
            __RPC__in IBasicVideo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetVideoSize )(
            __RPC__in IBasicVideo2 * This,
                        __RPC__out long *pWidth,
                        __RPC__out long *pHeight);
        HRESULT ( STDMETHODCALLTYPE *GetVideoPaletteEntries )(
            __RPC__in IBasicVideo2 * This,
                       long StartIndex,
                       long Entries,
                        __RPC__out long *pRetrieved,
                        __RPC__out long *pPalette);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentImage )(
            __RPC__in IBasicVideo2 * This,
                            __RPC__inout long *pBufferSize,
                        __RPC__out long *pDIBImage);
        HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultSource )(
            __RPC__in IBasicVideo2 * This);
        HRESULT ( STDMETHODCALLTYPE *IsUsingDefaultDestination )(
            __RPC__in IBasicVideo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetPreferredAspectRatio )(
            __RPC__in IBasicVideo2 * This,
                        __RPC__out long *plAspectX,
                        __RPC__out long *plAspectY);
        END_INTERFACE
    } IBasicVideo2Vtbl;
    interface IBasicVideo2
    {
        CONST_VTBL struct IBasicVideo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AvgTimePerFrame(This,pAvgTimePerFrame) )
    ( (This)->lpVtbl -> get_BitRate(This,pBitRate) )
    ( (This)->lpVtbl -> get_BitErrorRate(This,pBitErrorRate) )
    ( (This)->lpVtbl -> get_VideoWidth(This,pVideoWidth) )
    ( (This)->lpVtbl -> get_VideoHeight(This,pVideoHeight) )
    ( (This)->lpVtbl -> put_SourceLeft(This,SourceLeft) )
    ( (This)->lpVtbl -> get_SourceLeft(This,pSourceLeft) )
    ( (This)->lpVtbl -> put_SourceWidth(This,SourceWidth) )
    ( (This)->lpVtbl -> get_SourceWidth(This,pSourceWidth) )
    ( (This)->lpVtbl -> put_SourceTop(This,SourceTop) )
    ( (This)->lpVtbl -> get_SourceTop(This,pSourceTop) )
    ( (This)->lpVtbl -> put_SourceHeight(This,SourceHeight) )
    ( (This)->lpVtbl -> get_SourceHeight(This,pSourceHeight) )
    ( (This)->lpVtbl -> put_DestinationLeft(This,DestinationLeft) )
    ( (This)->lpVtbl -> get_DestinationLeft(This,pDestinationLeft) )
    ( (This)->lpVtbl -> put_DestinationWidth(This,DestinationWidth) )
    ( (This)->lpVtbl -> get_DestinationWidth(This,pDestinationWidth) )
    ( (This)->lpVtbl -> put_DestinationTop(This,DestinationTop) )
    ( (This)->lpVtbl -> get_DestinationTop(This,pDestinationTop) )
    ( (This)->lpVtbl -> put_DestinationHeight(This,DestinationHeight) )
    ( (This)->lpVtbl -> get_DestinationHeight(This,pDestinationHeight) )
    ( (This)->lpVtbl -> SetSourcePosition(This,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> GetSourcePosition(This,pLeft,pTop,pWidth,pHeight) )
    ( (This)->lpVtbl -> SetDefaultSourcePosition(This) )
    ( (This)->lpVtbl -> SetDestinationPosition(This,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> GetDestinationPosition(This,pLeft,pTop,pWidth,pHeight) )
    ( (This)->lpVtbl -> SetDefaultDestinationPosition(This) )
    ( (This)->lpVtbl -> GetVideoSize(This,pWidth,pHeight) )
    ( (This)->lpVtbl -> GetVideoPaletteEntries(This,StartIndex,Entries,pRetrieved,pPalette) )
    ( (This)->lpVtbl -> GetCurrentImage(This,pBufferSize,pDIBImage) )
    ( (This)->lpVtbl -> IsUsingDefaultSource(This) )
    ( (This)->lpVtbl -> IsUsingDefaultDestination(This) )
    ( (This)->lpVtbl -> GetPreferredAspectRatio(This,plAspectX,plAspectY) )
DEFINE_GUID(IID_IDeferredCommand,0x56a868b8,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IDeferredCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDeferredCommand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDeferredCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDeferredCommand * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IDeferredCommand * This);
        HRESULT ( STDMETHODCALLTYPE *Confidence )(
            __RPC__in IDeferredCommand * This,
                        __RPC__out LONG *pConfidence);
        HRESULT ( STDMETHODCALLTYPE *Postpone )(
            __RPC__in IDeferredCommand * This,
                       REFTIME newtime);
        HRESULT ( STDMETHODCALLTYPE *GetHResult )(
            __RPC__in IDeferredCommand * This,
                        __RPC__out HRESULT *phrResult);
        END_INTERFACE
    } IDeferredCommandVtbl;
    interface IDeferredCommand
    {
        CONST_VTBL struct IDeferredCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Confidence(This,pConfidence) )
    ( (This)->lpVtbl -> Postpone(This,newtime) )
    ( (This)->lpVtbl -> GetHResult(This,phrResult) )
DEFINE_GUID(IID_IQueueCommand,0x56a868b7,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IQueueCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQueueCommand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQueueCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQueueCommand * This);
        HRESULT ( STDMETHODCALLTYPE *InvokeAtStreamTime )(
            __RPC__in IQueueCommand * This,
                        __RPC__deref_out_opt IDeferredCommand **pCmd,
                       REFTIME time,
                       __RPC__in GUID *iid,
                       long dispidMethod,
                       short wFlags,
                       long cArgs,
                       __RPC__in VARIANT *pDispParams,
                            __RPC__inout VARIANT *pvarResult,
                        __RPC__out short *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *InvokeAtPresentationTime )(
            __RPC__in IQueueCommand * This,
                        __RPC__deref_out_opt IDeferredCommand **pCmd,
                       REFTIME time,
                       __RPC__in GUID *iid,
                       long dispidMethod,
                       short wFlags,
                       long cArgs,
                       __RPC__in VARIANT *pDispParams,
                            __RPC__inout VARIANT *pvarResult,
                        __RPC__out short *puArgErr);
        END_INTERFACE
    } IQueueCommandVtbl;
    interface IQueueCommand
    {
        CONST_VTBL struct IQueueCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InvokeAtStreamTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr) )
    ( (This)->lpVtbl -> InvokeAtPresentationTime(This,pCmd,time,iid,dispidMethod,wFlags,cArgs,pDispParams,pvarResult,puArgErr) )
DEFINE_GUID(CLSID_FilgraphManager,0xe436ebb3,0x524f,0x11ce,0x9f,0x53,0x00,0x20,0xaf,0x0b,0xa7,0x70);
class DECLSPEC_UUID("e436ebb3-524f-11ce-9f53-0020af0ba770")
FilgraphManager;
DEFINE_GUID(IID_IFilterInfo,0x56a868ba,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IFilterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFilterInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFilterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFilterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IFilterInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IFilterInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IFilterInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IFilterInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *FindPin )(
            __RPC__in IFilterInfo * This,
                       __RPC__in BSTR strPinID,
                        __RPC__deref_out_opt IDispatch **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IFilterInfo * This,
                                __RPC__deref_out_opt BSTR *strName);
                        HRESULT ( STDMETHODCALLTYPE *get_VendorInfo )(
            __RPC__in IFilterInfo * This,
                                __RPC__deref_out_opt BSTR *strVendorInfo);
                        HRESULT ( STDMETHODCALLTYPE *get_Filter )(
            __RPC__in IFilterInfo * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_Pins )(
            __RPC__in IFilterInfo * This,
                                __RPC__deref_out_opt IDispatch **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_IsFileSource )(
            __RPC__in IFilterInfo * This,
                                __RPC__out LONG *pbIsSource);
                        HRESULT ( STDMETHODCALLTYPE *get_Filename )(
            __RPC__in IFilterInfo * This,
                                __RPC__deref_out_opt BSTR *pstrFilename);
                        HRESULT ( STDMETHODCALLTYPE *put_Filename )(
            __RPC__in IFilterInfo * This,
                       __RPC__in BSTR strFilename);
        END_INTERFACE
    } IFilterInfoVtbl;
    interface IFilterInfo
    {
        CONST_VTBL struct IFilterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> FindPin(This,strPinID,ppUnk) )
    ( (This)->lpVtbl -> get_Name(This,strName) )
    ( (This)->lpVtbl -> get_VendorInfo(This,strVendorInfo) )
    ( (This)->lpVtbl -> get_Filter(This,ppUnk) )
    ( (This)->lpVtbl -> get_Pins(This,ppUnk) )
    ( (This)->lpVtbl -> get_IsFileSource(This,pbIsSource) )
    ( (This)->lpVtbl -> get_Filename(This,pstrFilename) )
    ( (This)->lpVtbl -> put_Filename(This,strFilename) )
DEFINE_GUID(IID_IRegFilterInfo,0x56a868bb,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IRegFilterInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRegFilterInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRegFilterInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRegFilterInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IRegFilterInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IRegFilterInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IRegFilterInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IRegFilterInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IRegFilterInfo * This,
                                __RPC__deref_out_opt BSTR *strName);
        HRESULT ( STDMETHODCALLTYPE *Filter )(
            __RPC__in IRegFilterInfo * This,
                        __RPC__deref_out_opt IDispatch **ppUnk);
        END_INTERFACE
    } IRegFilterInfoVtbl;
    interface IRegFilterInfo
    {
        CONST_VTBL struct IRegFilterInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,strName) )
    ( (This)->lpVtbl -> Filter(This,ppUnk) )
DEFINE_GUID(IID_IMediaTypeInfo,0x56a868bc,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IMediaTypeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMediaTypeInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMediaTypeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMediaTypeInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMediaTypeInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMediaTypeInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMediaTypeInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMediaTypeInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IMediaTypeInfo * This,
                                __RPC__deref_out_opt BSTR *strType);
                        HRESULT ( STDMETHODCALLTYPE *get_Subtype )(
            __RPC__in IMediaTypeInfo * This,
                                __RPC__deref_out_opt BSTR *strType);
        END_INTERFACE
    } IMediaTypeInfoVtbl;
    interface IMediaTypeInfo
    {
        CONST_VTBL struct IMediaTypeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,strType) )
    ( (This)->lpVtbl -> get_Subtype(This,strType) )
DEFINE_GUID(IID_IPinInfo,0x56a868bd,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
    typedef struct IPinInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPinInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPinInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPinInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IPinInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IPinInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IPinInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IPinInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                        HRESULT ( STDMETHODCALLTYPE *get_Pin )(
            __RPC__in IPinInfo * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectedTo )(
            __RPC__in IPinInfo * This,
                                __RPC__deref_out_opt IDispatch **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_ConnectionMediaType )(
            __RPC__in IPinInfo * This,
                                __RPC__deref_out_opt IDispatch **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_FilterInfo )(
            __RPC__in IPinInfo * This,
                                __RPC__deref_out_opt IDispatch **ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IPinInfo * This,
                                __RPC__deref_out_opt BSTR *ppUnk);
                        HRESULT ( STDMETHODCALLTYPE *get_Direction )(
            __RPC__in IPinInfo * This,
                                __RPC__out LONG *ppDirection);
                        HRESULT ( STDMETHODCALLTYPE *get_PinID )(
            __RPC__in IPinInfo * This,
                                __RPC__deref_out_opt BSTR *strPinID);
                        HRESULT ( STDMETHODCALLTYPE *get_MediaTypes )(
            __RPC__in IPinInfo * This,
                                __RPC__deref_out_opt IDispatch **ppUnk);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            __RPC__in IPinInfo * This,
                       __RPC__in_opt IUnknown *pPin);
        HRESULT ( STDMETHODCALLTYPE *ConnectDirect )(
            __RPC__in IPinInfo * This,
                       __RPC__in_opt IUnknown *pPin);
        HRESULT ( STDMETHODCALLTYPE *ConnectWithType )(
            __RPC__in IPinInfo * This,
                       __RPC__in_opt IUnknown *pPin,
                       __RPC__in_opt IDispatch *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            __RPC__in IPinInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Render )(
            __RPC__in IPinInfo * This);
        END_INTERFACE
    } IPinInfoVtbl;
    interface IPinInfo
    {
        CONST_VTBL struct IPinInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Pin(This,ppUnk) )
    ( (This)->lpVtbl -> get_ConnectedTo(This,ppUnk) )
    ( (This)->lpVtbl -> get_ConnectionMediaType(This,ppUnk) )
    ( (This)->lpVtbl -> get_FilterInfo(This,ppUnk) )
    ( (This)->lpVtbl -> get_Name(This,ppUnk) )
    ( (This)->lpVtbl -> get_Direction(This,ppDirection) )
    ( (This)->lpVtbl -> get_PinID(This,strPinID) )
    ( (This)->lpVtbl -> get_MediaTypes(This,ppUnk) )
    ( (This)->lpVtbl -> Connect(This,pPin) )
    ( (This)->lpVtbl -> ConnectDirect(This,pPin) )
    ( (This)->lpVtbl -> ConnectWithType(This,pPin,pMediaType) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> Render(This) )
DEFINE_GUID(IID_IAMStats,0xbc9bcf80,0xdcd2,0x11d2,0xab,0xf6,0x00,0xa0,0xc9,0x05,0xf3,0x75);
    typedef struct IAMStatsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAMStats * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAMStats * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAMStats * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAMStats * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAMStats * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAMStats * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAMStats * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IAMStats * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IAMStats * This,
                                __RPC__out LONG *plCount);
        HRESULT ( STDMETHODCALLTYPE *GetValueByIndex )(
            __RPC__in IAMStats * This,
                       long lIndex,
                        __RPC__deref_out_opt BSTR *szName,
                        __RPC__out long *lCount,
                        __RPC__out double *dLast,
                        __RPC__out double *dAverage,
                        __RPC__out double *dStdDev,
                        __RPC__out double *dMin,
                        __RPC__out double *dMax);
        HRESULT ( STDMETHODCALLTYPE *GetValueByName )(
            __RPC__in IAMStats * This,
                       __RPC__in BSTR szName,
                        __RPC__out long *lIndex,
                        __RPC__out long *lCount,
                        __RPC__out double *dLast,
                        __RPC__out double *dAverage,
                        __RPC__out double *dStdDev,
                        __RPC__out double *dMin,
                        __RPC__out double *dMax);
        HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in IAMStats * This,
                       __RPC__in BSTR szName,
                       long lCreate,
                        __RPC__out long *plIndex);
        HRESULT ( STDMETHODCALLTYPE *AddValue )(
            __RPC__in IAMStats * This,
                       long lIndex,
                       double dValue);
        END_INTERFACE
    } IAMStatsVtbl;
    interface IAMStats
    {
        CONST_VTBL struct IAMStatsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> get_Count(This,plCount) )
    ( (This)->lpVtbl -> GetValueByIndex(This,lIndex,szName,lCount,dLast,dAverage,dStdDev,dMin,dMax) )
    ( (This)->lpVtbl -> GetValueByName(This,szName,lIndex,lCount,dLast,dAverage,dStdDev,dMin,dMax) )
    ( (This)->lpVtbl -> GetIndex(This,szName,lCreate,plIndex) )
    ( (This)->lpVtbl -> AddValue(This,lIndex,dValue) )
}
