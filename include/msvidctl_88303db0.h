#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMSVidCtl IMSVidCtl;
typedef interface IMSEventBinder IMSEventBinder;
typedef interface _IMSVidCtlEvents _IMSVidCtlEvents;
typedef class MSVidAnalogTunerDevice MSVidAnalogTunerDevice;
typedef class MSVidBDATunerDevice MSVidBDATunerDevice;
typedef class MSVidFilePlaybackDevice MSVidFilePlaybackDevice;
typedef class MSVidWebDVD MSVidWebDVD;
typedef class MSVidWebDVDAdm MSVidWebDVDAdm;
typedef class MSVidVideoRenderer MSVidVideoRenderer;
typedef class MSVidVMR9 MSVidVMR9;
typedef class MSVidEVR MSVidEVR;
typedef class MSVidAudioRenderer MSVidAudioRenderer;
typedef class MSVidGenericSink MSVidGenericSink;
typedef class MSVidStreamBufferSink MSVidStreamBufferSink;
typedef class MSVidStreamBufferSource MSVidStreamBufferSource;
typedef class MSVidStreamBufferV2Source MSVidStreamBufferV2Source;
typedef class MSVidEncoder MSVidEncoder;
typedef class MSVidITVCapture MSVidITVCapture;
typedef class MSVidITVPlayback MSVidITVPlayback;
typedef class MSVidCCA MSVidCCA;
typedef class MSVidClosedCaptioning MSVidClosedCaptioning;
typedef class MSVidClosedCaptioningSI MSVidClosedCaptioningSI;
typedef class MSVidDataServices MSVidDataServices;
typedef class MSVidXDS MSVidXDS;
typedef class MSVidAnalogCaptureToDataServices MSVidAnalogCaptureToDataServices;
typedef class MSVidDataServicesToStreamBufferSink MSVidDataServicesToStreamBufferSink;
typedef class MSVidDataServicesToXDS MSVidDataServicesToXDS;
typedef class MSVidAnalogCaptureToXDS MSVidAnalogCaptureToXDS;
typedef class MSVidCtl MSVidCtl;
typedef class MSVidInputDevices MSVidInputDevices;
typedef class MSVidOutputDevices MSVidOutputDevices;
typedef class MSVidVideoRendererDevices MSVidVideoRendererDevices;
typedef class MSVidAudioRendererDevices MSVidAudioRendererDevices;
typedef class MSVidFeatures MSVidFeatures;
typedef class MSVidGenericComposite MSVidGenericComposite;
typedef class MSVidAnalogCaptureToOverlayMixer MSVidAnalogCaptureToOverlayMixer;
typedef class MSVidWebDVDToVideoRenderer MSVidWebDVDToVideoRenderer;
typedef class MSVidWebDVDToAudioRenderer MSVidWebDVDToAudioRenderer;
typedef class MSVidMPEG2DecoderToClosedCaptioning MSVidMPEG2DecoderToClosedCaptioning;
typedef class MSVidAnalogCaptureToStreamBufferSink MSVidAnalogCaptureToStreamBufferSink;
typedef class MSVidDigitalCaptureToStreamBufferSink MSVidDigitalCaptureToStreamBufferSink;
typedef class MSVidITVToStreamBufferSink MSVidITVToStreamBufferSink;
typedef class MSVidCCAToStreamBufferSink MSVidCCAToStreamBufferSink;
typedef class MSVidEncoderToStreamBufferSink MSVidEncoderToStreamBufferSink;
typedef class MSVidFilePlaybackToVideoRenderer MSVidFilePlaybackToVideoRenderer;
typedef class MSVidFilePlaybackToAudioRenderer MSVidFilePlaybackToAudioRenderer;
typedef class MSVidAnalogTVToEncoder MSVidAnalogTVToEncoder;
typedef class MSVidStreamBufferSourceToVideoRenderer MSVidStreamBufferSourceToVideoRenderer;
typedef class MSVidAnalogCaptureToCCA MSVidAnalogCaptureToCCA;
typedef class MSVidDigitalCaptureToCCA MSVidDigitalCaptureToCCA;
typedef class MSVidDigitalCaptureToITV MSVidDigitalCaptureToITV;
typedef class MSVidSBESourceToITV MSVidSBESourceToITV;
typedef class MSVidSBESourceToCC MSVidSBESourceToCC;
typedef class MSVidSBESourceToGenericSink MSVidSBESourceToGenericSink;
typedef class MSVidCCToVMR MSVidCCToVMR;
typedef class MSVidCCToAR MSVidCCToAR;
typedef class MSEventBinder MSEventBinder;
typedef class MSVidStreamBufferRecordingControl MSVidStreamBufferRecordingControl;
typedef class MSVidRect MSVidRect;
typedef class MSVidDevice MSVidDevice;
typedef class MSVidDevice2 MSVidDevice2;
typedef class MSVidInputDevice MSVidInputDevice;
typedef class MSVidVideoInputDevice MSVidVideoInputDevice;
typedef class MSVidVideoPlaybackDevice MSVidVideoPlaybackDevice;
typedef class MSVidFeature MSVidFeature;
typedef class MSVidOutput MSVidOutput;
#include "mshtml.h"
#include "segment.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum MSViddispidList
    {
        dispidInputs = 0,
        dispidOutputs = ( dispidInputs + 1 ) ,
        dispid_Inputs = ( dispidOutputs + 1 ) ,
        dispid_Outputs = ( dispid_Inputs + 1 ) ,
        dispidVideoRenderers = ( dispid_Outputs + 1 ) ,
        dispidAudioRenderers = ( dispidVideoRenderers + 1 ) ,
        dispidFeatures = ( dispidAudioRenderers + 1 ) ,
        dispidInput = ( dispidFeatures + 1 ) ,
        dispidOutput = ( dispidInput + 1 ) ,
        dispidVideoRenderer = ( dispidOutput + 1 ) ,
        dispidAudioRenderer = ( dispidVideoRenderer + 1 ) ,
        dispidSelectedFeatures = ( dispidAudioRenderer + 1 ) ,
        dispidView = ( dispidSelectedFeatures + 1 ) ,
        dispidBuild = ( dispidView + 1 ) ,
        dispidPause = ( dispidBuild + 1 ) ,
        dispidRun = ( dispidPause + 1 ) ,
        dispidStop = ( dispidRun + 1 ) ,
        dispidDecompose = ( dispidStop + 1 ) ,
        dispidDisplaySize = ( dispidDecompose + 1 ) ,
        dispidMaintainAspectRatio = ( dispidDisplaySize + 1 ) ,
        dispidColorKey = ( dispidMaintainAspectRatio + 1 ) ,
        dispidStateChange = ( dispidColorKey + 1 ) ,
        dispidgetState = ( dispidStateChange + 1 ) ,
        dispidunbind = ( dispidgetState + 1 ) ,
        dispidbind = ( dispidunbind + 1 ) ,
        dispidDisableVideo = ( dispidbind + 1 ) ,
        dispidDisableAudio = ( dispidDisableVideo + 1 ) ,
        dispidViewNext = ( dispidDisableAudio + 1 ) ,
        dispidServiceP = ( dispidViewNext + 1 )
    } MSViddispidList;
typedef
enum DisplaySizeList
    {
        dslDefaultSize = 0,
        dslSourceSize = 0,
        dslHalfSourceSize = ( dslSourceSize + 1 ) ,
        dslDoubleSourceSize = ( dslHalfSourceSize + 1 ) ,
        dslFullScreen = ( dslDoubleSourceSize + 1 ) ,
        dslHalfScreen = ( dslFullScreen + 1 ) ,
        dslQuarterScreen = ( dslHalfScreen + 1 ) ,
        dslSixteenthScreen = ( dslQuarterScreen + 1 )
    } DisplaySizeList;
typedef
enum MSVidCtlStateList
    {
        STATE_UNBUILT = -1,
        STATE_STOP = ( STATE_UNBUILT + 1 ) ,
        STATE_PAUSE = ( STATE_STOP + 1 ) ,
        STATE_PLAY = ( STATE_PAUSE + 1 )
    } MSVidCtlStateList;
extern RPC_IF_HANDLE __MIDL_itf_msvidctl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msvidctl_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSVidCtl;
    typedef struct IMSVidCtlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidCtl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidCtl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidCtl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidCtl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidCtl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_AutoSize )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out VARIANT_BOOL *pbool);
                            HRESULT ( STDMETHODCALLTYPE *put_AutoSize )(
            __RPC__in IMSVidCtl * This,
                       VARIANT_BOOL vbool);
                            HRESULT ( STDMETHODCALLTYPE *get_BackColor )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out OLE_COLOR *backcolor);
                            HRESULT ( STDMETHODCALLTYPE *put_BackColor )(
            __RPC__in IMSVidCtl * This,
                       OLE_COLOR backcolor);
                            HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out VARIANT_BOOL *pbool);
                            HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IMSVidCtl * This,
                       VARIANT_BOOL vbool);
                            HRESULT ( STDMETHODCALLTYPE *get_TabStop )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out VARIANT_BOOL *pbool);
                            HRESULT ( STDMETHODCALLTYPE *put_TabStop )(
            __RPC__in IMSVidCtl * This,
                       VARIANT_BOOL vbool);
                            HRESULT ( STDMETHODCALLTYPE *get_Window )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt HWND *phwnd);
                   HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IMSVidCtl * This);
                            HRESULT ( STDMETHODCALLTYPE *get_DisplaySize )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out DisplaySizeList *CurrentValue);
                            HRESULT ( STDMETHODCALLTYPE *put_DisplaySize )(
            __RPC__in IMSVidCtl * This,
                       DisplaySizeList NewValue);
                            HRESULT ( STDMETHODCALLTYPE *get_MaintainAspectRatio )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out VARIANT_BOOL *CurrentValue);
                            HRESULT ( STDMETHODCALLTYPE *put_MaintainAspectRatio )(
            __RPC__in IMSVidCtl * This,
                       VARIANT_BOOL NewValue);
                            HRESULT ( STDMETHODCALLTYPE *get_ColorKey )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out OLE_COLOR *CurrentValue);
                            HRESULT ( STDMETHODCALLTYPE *put_ColorKey )(
            __RPC__in IMSVidCtl * This,
                       OLE_COLOR NewValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputsAvailable )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in BSTR CategoryGuid,
                                __RPC__deref_out_opt IMSVidInputDevices **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutputsAvailable )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in BSTR CategoryGuid,
                                __RPC__deref_out_opt IMSVidOutputDevices **pVal);
                                                            HRESULT ( STDMETHODCALLTYPE *get__InputsAvailable )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in LPCGUID CategoryGuid,
                                __RPC__deref_out_opt IMSVidInputDevices **pVal);
                                                            HRESULT ( STDMETHODCALLTYPE *get__OutputsAvailable )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in LPCGUID CategoryGuid,
                                __RPC__deref_out_opt IMSVidOutputDevices **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VideoRenderersAvailable )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidVideoRendererDevices **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioRenderersAvailable )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidAudioRendererDevices **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FeaturesAvailable )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidFeatures **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputActive )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidInputDevice **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InputActive )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in_opt IMSVidInputDevice *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_OutputsActive )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidOutputDevices **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_OutputsActive )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in_opt IMSVidOutputDevices *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VideoRendererActive )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidVideoRenderer **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_VideoRendererActive )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in_opt IMSVidVideoRenderer *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioRendererActive )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidAudioRenderer **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_AudioRendererActive )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in_opt IMSVidAudioRenderer *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_FeaturesActive )(
            __RPC__in IMSVidCtl * This,
                                __RPC__deref_out_opt IMSVidFeatures **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_FeaturesActive )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in_opt IMSVidFeatures *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in IMSVidCtl * This,
                                __RPC__out MSVidCtlStateList *lState);
                               HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in VARIANT *v);
                               HRESULT ( STDMETHODCALLTYPE *Build )(
            __RPC__in IMSVidCtl * This);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidCtl * This);
                               HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidCtl * This);
                               HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidCtl * This);
                               HRESULT ( STDMETHODCALLTYPE *Decompose )(
            __RPC__in IMSVidCtl * This);
                               HRESULT ( STDMETHODCALLTYPE *DisableVideo )(
            __RPC__in IMSVidCtl * This);
                               HRESULT ( STDMETHODCALLTYPE *DisableAudio )(
            __RPC__in IMSVidCtl * This);
                               HRESULT ( STDMETHODCALLTYPE *ViewNext )(
            __RPC__in IMSVidCtl * This,
                       __RPC__in VARIANT *v);
        END_INTERFACE
    } IMSVidCtlVtbl;
    interface IMSVidCtl
    {
        CONST_VTBL struct IMSVidCtlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AutoSize(This,pbool) )
    ( (This)->lpVtbl -> put_AutoSize(This,vbool) )
    ( (This)->lpVtbl -> get_BackColor(This,backcolor) )
    ( (This)->lpVtbl -> put_BackColor(This,backcolor) )
    ( (This)->lpVtbl -> get_Enabled(This,pbool) )
    ( (This)->lpVtbl -> put_Enabled(This,vbool) )
    ( (This)->lpVtbl -> get_TabStop(This,pbool) )
    ( (This)->lpVtbl -> put_TabStop(This,vbool) )
    ( (This)->lpVtbl -> get_Window(This,phwnd) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> get_DisplaySize(This,CurrentValue) )
    ( (This)->lpVtbl -> put_DisplaySize(This,NewValue) )
    ( (This)->lpVtbl -> get_MaintainAspectRatio(This,CurrentValue) )
    ( (This)->lpVtbl -> put_MaintainAspectRatio(This,NewValue) )
    ( (This)->lpVtbl -> get_ColorKey(This,CurrentValue) )
    ( (This)->lpVtbl -> put_ColorKey(This,NewValue) )
    ( (This)->lpVtbl -> get_InputsAvailable(This,CategoryGuid,pVal) )
    ( (This)->lpVtbl -> get_OutputsAvailable(This,CategoryGuid,pVal) )
    ( (This)->lpVtbl -> get__InputsAvailable(This,CategoryGuid,pVal) )
    ( (This)->lpVtbl -> get__OutputsAvailable(This,CategoryGuid,pVal) )
    ( (This)->lpVtbl -> get_VideoRenderersAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_AudioRenderersAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_FeaturesAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_InputActive(This,pVal) )
    ( (This)->lpVtbl -> put_InputActive(This,pVal) )
    ( (This)->lpVtbl -> get_OutputsActive(This,pVal) )
    ( (This)->lpVtbl -> put_OutputsActive(This,pVal) )
    ( (This)->lpVtbl -> get_VideoRendererActive(This,pVal) )
    ( (This)->lpVtbl -> put_VideoRendererActive(This,pVal) )
    ( (This)->lpVtbl -> get_AudioRendererActive(This,pVal) )
    ( (This)->lpVtbl -> put_AudioRendererActive(This,pVal) )
    ( (This)->lpVtbl -> get_FeaturesActive(This,pVal) )
    ( (This)->lpVtbl -> put_FeaturesActive(This,pVal) )
    ( (This)->lpVtbl -> get_State(This,lState) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> Build(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Decompose(This) )
    ( (This)->lpVtbl -> DisableVideo(This) )
    ( (This)->lpVtbl -> DisableAudio(This) )
    ( (This)->lpVtbl -> ViewNext(This,v) )
EXTERN_C const IID IID_IMSEventBinder;
    typedef struct IMSEventBinderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSEventBinder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSEventBinder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSEventBinder * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSEventBinder * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSEventBinder * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSEventBinder * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSEventBinder * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Bind )(
            __RPC__in IMSEventBinder * This,
                       __RPC__in_opt LPDISPATCH pEventObject,
                       __RPC__in BSTR EventName,
                       __RPC__in BSTR EventHandler,
                                __RPC__out LONG *CancelID);
                               HRESULT ( STDMETHODCALLTYPE *Unbind )(
            __RPC__in IMSEventBinder * This,
                       DWORD CancelCookie);
        END_INTERFACE
    } IMSEventBinderVtbl;
    interface IMSEventBinder
    {
        CONST_VTBL struct IMSEventBinderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Bind(This,pEventObject,EventName,EventHandler,CancelID) )
    ( (This)->lpVtbl -> Unbind(This,CancelCookie) )
DEFINE_GUID(SID_MSVidCtl_CurrentAudioEndpoint, 0xcf9a88f4, 0xabcf, 0x4ed8, 0x9b, 0x74, 0x7d, 0xb3, 0x34, 0x45, 0x45, 0x9e);
EXTERN_C const IID LIBID_MSVidCtlLib;
EXTERN_C const IID DIID__IMSVidCtlEvents;
    typedef struct _IMSVidCtlEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _IMSVidCtlEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _IMSVidCtlEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _IMSVidCtlEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _IMSVidCtlEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _IMSVidCtlEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _IMSVidCtlEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _IMSVidCtlEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _IMSVidCtlEventsVtbl;
    interface _IMSVidCtlEvents
    {
        CONST_VTBL struct _IMSVidCtlEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_MSVidAnalogTunerDevice;
class DECLSPEC_UUID("1C15D484-911D-11d2-B632-00C04F79498E")
MSVidAnalogTunerDevice;
EXTERN_C const CLSID CLSID_MSVidBDATunerDevice;
class DECLSPEC_UUID("A2E3074E-6C3D-11d3-B653-00C04F79498E")
MSVidBDATunerDevice;
EXTERN_C const CLSID CLSID_MSVidFilePlaybackDevice;
class DECLSPEC_UUID("37B0353C-A4C8-11d2-B634-00C04F79498E")
MSVidFilePlaybackDevice;
EXTERN_C const CLSID CLSID_MSVidWebDVD;
class DECLSPEC_UUID("011B3619-FE63-4814-8A84-15A194CE9CE3")
MSVidWebDVD;
EXTERN_C const CLSID CLSID_MSVidWebDVDAdm;
class DECLSPEC_UUID("FA7C375B-66A7-4280-879D-FD459C84BB02")
MSVidWebDVDAdm;
EXTERN_C const CLSID CLSID_MSVidVideoRenderer;
class DECLSPEC_UUID("37B03543-A4C8-11d2-B634-00C04F79498E")
MSVidVideoRenderer;
EXTERN_C const CLSID CLSID_MSVidVMR9;
class DECLSPEC_UUID("24DC3975-09BF-4231-8655-3EE71F43837D")
MSVidVMR9;
EXTERN_C const CLSID CLSID_MSVidEVR;
class DECLSPEC_UUID("C45268A2-FA81-4e19-B1E3-72EDBD60AEDA")
MSVidEVR;
EXTERN_C const CLSID CLSID_MSVidAudioRenderer;
class DECLSPEC_UUID("37B03544-A4C8-11d2-B634-00C04F79498E")
MSVidAudioRenderer;
EXTERN_C const CLSID CLSID_MSVidGenericSink;
class DECLSPEC_UUID("4A5869CF-929D-4040-AE03-FCAFC5B9CD42")
MSVidGenericSink;
EXTERN_C const CLSID CLSID_MSVidStreamBufferSink;
class DECLSPEC_UUID("9E77AAC4-35E5-42a1-BDC2-8F3FF399847C")
MSVidStreamBufferSink;
EXTERN_C const CLSID CLSID_MSVidStreamBufferSource;
class DECLSPEC_UUID("AD8E510D-217F-409b-8076-29C5E73B98E8")
MSVidStreamBufferSource;
EXTERN_C const CLSID CLSID_MSVidStreamBufferV2Source;
class DECLSPEC_UUID("FD351EA1-4173-4af4-821D-80D4AE979048")
MSVidStreamBufferV2Source;
EXTERN_C const CLSID CLSID_MSVidEncoder;
class DECLSPEC_UUID("BB530C63-D9DF-4b49-9439-63453962E598")
MSVidEncoder;
EXTERN_C const CLSID CLSID_MSVidITVCapture;
class DECLSPEC_UUID("5740A302-EF0B-45ce-BF3B-4470A14A8980")
MSVidITVCapture;
EXTERN_C const CLSID CLSID_MSVidITVPlayback;
class DECLSPEC_UUID("9E797ED0-5253-4243-A9B7-BD06C58F8EF3")
MSVidITVPlayback;
EXTERN_C const CLSID CLSID_MSVidCCA;
class DECLSPEC_UUID("86151827-E47B-45ee-8421-D10E6E690979")
MSVidCCA;
EXTERN_C const CLSID CLSID_MSVidClosedCaptioning;
class DECLSPEC_UUID("7F9CB14D-48E4-43b6-9346-1AEBC39C64D3")
MSVidClosedCaptioning;
EXTERN_C const CLSID CLSID_MSVidClosedCaptioningSI;
class DECLSPEC_UUID("92ED88BF-879E-448f-B6B6-A385BCEB846D")
MSVidClosedCaptioningSI;
EXTERN_C const CLSID CLSID_MSVidDataServices;
class DECLSPEC_UUID("334125C0-77E5-11d3-B653-00C04F79498E")
MSVidDataServices;
EXTERN_C const CLSID CLSID_MSVidXDS;
class DECLSPEC_UUID("0149EEDF-D08F-4142-8D73-D23903D21E90")
MSVidXDS;
EXTERN_C const CLSID CLSID_MSVidAnalogCaptureToDataServices;
class DECLSPEC_UUID("C5702CD6-9B79-11d3-B654-00C04F79498E")
MSVidAnalogCaptureToDataServices;
EXTERN_C const CLSID CLSID_MSVidDataServicesToStreamBufferSink;
class DECLSPEC_UUID("38F03426-E83B-4e68-B65B-DCAE73304838")
MSVidDataServicesToStreamBufferSink;
EXTERN_C const CLSID CLSID_MSVidDataServicesToXDS;
class DECLSPEC_UUID("0429EC6E-1144-4bed-B88B-2FB9899A4A3D")
MSVidDataServicesToXDS;
EXTERN_C const CLSID CLSID_MSVidAnalogCaptureToXDS;
class DECLSPEC_UUID("3540D440-5B1D-49cb-821A-E84B8CF065A7")
MSVidAnalogCaptureToXDS;
EXTERN_C const CLSID CLSID_MSVidCtl;
class DECLSPEC_UUID("B0EDF163-910A-11D2-B632-00C04F79498E")
MSVidCtl;
EXTERN_C const CLSID CLSID_MSVidInputDevices;
class DECLSPEC_UUID("C5702CCC-9B79-11d3-B654-00C04F79498E")
MSVidInputDevices;
EXTERN_C const CLSID CLSID_MSVidOutputDevices;
class DECLSPEC_UUID("C5702CCD-9B79-11d3-B654-00C04F79498E")
MSVidOutputDevices;
EXTERN_C const CLSID CLSID_MSVidVideoRendererDevices;
class DECLSPEC_UUID("C5702CCE-9B79-11d3-B654-00C04F79498E")
MSVidVideoRendererDevices;
EXTERN_C const CLSID CLSID_MSVidAudioRendererDevices;
class DECLSPEC_UUID("C5702CCF-9B79-11d3-B654-00C04F79498E")
MSVidAudioRendererDevices;
EXTERN_C const CLSID CLSID_MSVidFeatures;
class DECLSPEC_UUID("C5702CD0-9B79-11d3-B654-00C04F79498E")
MSVidFeatures;
EXTERN_C const CLSID CLSID_MSVidGenericComposite;
class DECLSPEC_UUID("2764BCE5-CC39-11D2-B639-00C04F79498E")
MSVidGenericComposite;
EXTERN_C const CLSID CLSID_MSVidAnalogCaptureToOverlayMixer;
class DECLSPEC_UUID("E18AF75A-08AF-11d3-B64A-00C04F79498E")
MSVidAnalogCaptureToOverlayMixer;
EXTERN_C const CLSID CLSID_MSVidWebDVDToVideoRenderer;
class DECLSPEC_UUID("267db0b3-55e3-4902-949b-df8f5cec0191")
MSVidWebDVDToVideoRenderer;
EXTERN_C const CLSID CLSID_MSVidWebDVDToAudioRenderer;
class DECLSPEC_UUID("8D04238E-9FD1-41c6-8DE3-9E1EE309E935")
MSVidWebDVDToAudioRenderer;
EXTERN_C const CLSID CLSID_MSVidMPEG2DecoderToClosedCaptioning;
class DECLSPEC_UUID("6AD28EE1-5002-4e71-AAF7-BD077907B1A4")
MSVidMPEG2DecoderToClosedCaptioning;
EXTERN_C const CLSID CLSID_MSVidAnalogCaptureToStreamBufferSink;
class DECLSPEC_UUID("9F50E8B1-9530-4ddc-825E-1AF81D47AED6")
MSVidAnalogCaptureToStreamBufferSink;
EXTERN_C const CLSID CLSID_MSVidDigitalCaptureToStreamBufferSink;
class DECLSPEC_UUID("ABE40035-27C3-4a2f-8153-6624471608AF")
MSVidDigitalCaptureToStreamBufferSink;
EXTERN_C const CLSID CLSID_MSVidITVToStreamBufferSink;
class DECLSPEC_UUID("92B94828-1AF7-4e6e-9EBF-770657F77AF5")
MSVidITVToStreamBufferSink;
EXTERN_C const CLSID CLSID_MSVidCCAToStreamBufferSink;
class DECLSPEC_UUID("3EF76D68-8661-4843-8B8F-C37163D8C9CE")
MSVidCCAToStreamBufferSink;
EXTERN_C const CLSID CLSID_MSVidEncoderToStreamBufferSink;
class DECLSPEC_UUID("A0B9B497-AFBC-45ad-A8A6-9B077C40D4F2")
MSVidEncoderToStreamBufferSink;
EXTERN_C const CLSID CLSID_MSVidFilePlaybackToVideoRenderer;
class DECLSPEC_UUID("B401C5EB-8457-427f-84EA-A4D2363364B0")
MSVidFilePlaybackToVideoRenderer;
EXTERN_C const CLSID CLSID_MSVidFilePlaybackToAudioRenderer;
class DECLSPEC_UUID("CC23F537-18D4-4ece-93BD-207A84726979")
MSVidFilePlaybackToAudioRenderer;
EXTERN_C const CLSID CLSID_MSVidAnalogTVToEncoder;
class DECLSPEC_UUID("28953661-0231-41db-8986-21FF4388EE9B")
MSVidAnalogTVToEncoder;
EXTERN_C const CLSID CLSID_MSVidStreamBufferSourceToVideoRenderer;
class DECLSPEC_UUID("3C4708DC-B181-46a8-8DA8-4AB0371758CD")
MSVidStreamBufferSourceToVideoRenderer;
EXTERN_C const CLSID CLSID_MSVidAnalogCaptureToCCA;
class DECLSPEC_UUID("942B7909-A28E-49a1-A207-34EBCBCB4B3B")
MSVidAnalogCaptureToCCA;
EXTERN_C const CLSID CLSID_MSVidDigitalCaptureToCCA;
class DECLSPEC_UUID("73D14237-B9DB-4efa-A6DD-84350421FB2F")
MSVidDigitalCaptureToCCA;
EXTERN_C const CLSID CLSID_MSVidDigitalCaptureToITV;
class DECLSPEC_UUID("5D8E73F7-4989-4ac8-8A98-39BA0D325302")
MSVidDigitalCaptureToITV;
EXTERN_C const CLSID CLSID_MSVidSBESourceToITV;
class DECLSPEC_UUID("2291478C-5EE3-4bef-AB5D-B5FF2CF58352")
MSVidSBESourceToITV;
EXTERN_C const CLSID CLSID_MSVidSBESourceToCC;
class DECLSPEC_UUID("9193A8F9-0CBA-400e-AA97-EB4709164576")
MSVidSBESourceToCC;
EXTERN_C const CLSID CLSID_MSVidSBESourceToGenericSink;
class DECLSPEC_UUID("991DA7E5-953F-435B-BE5E-B92A05EDFC42")
MSVidSBESourceToGenericSink;
EXTERN_C const CLSID CLSID_MSVidCCToVMR;
class DECLSPEC_UUID("C4BF2784-AE00-41ba-9828-9C953BD3C54A")
MSVidCCToVMR;
EXTERN_C const CLSID CLSID_MSVidCCToAR;
class DECLSPEC_UUID("D76334CA-D89E-4baf-86AB-DDB59372AFC2")
MSVidCCToAR;
EXTERN_C const CLSID CLSID_MSEventBinder;
class DECLSPEC_UUID("577FAA18-4518-445E-8F70-1473F8CF4BA4")
MSEventBinder;
EXTERN_C const CLSID CLSID_MSVidStreamBufferRecordingControl;
class DECLSPEC_UUID("CAAFDD83-CEFC-4e3d-BA03-175F17A24F91")
MSVidStreamBufferRecordingControl;
EXTERN_C const CLSID CLSID_MSVidRect;
class DECLSPEC_UUID("CB4276E6-7D5F-4cf1-9727-629C5E6DB6AE")
MSVidRect;
EXTERN_C const CLSID CLSID_MSVidDevice;
class DECLSPEC_UUID("6E40476F-9C49-4c3e-8BB9-8587958EFF74")
MSVidDevice;
EXTERN_C const CLSID CLSID_MSVidDevice2;
class DECLSPEC_UUID("30997F7D-B3B5-4A1C-983A-1FE8098CB77D")
MSVidDevice2;
EXTERN_C const CLSID CLSID_MSVidInputDevice;
class DECLSPEC_UUID("AC1972F2-138A-4ca3-90DA-AE51112EDA28")
MSVidInputDevice;
EXTERN_C const CLSID CLSID_MSVidVideoInputDevice;
class DECLSPEC_UUID("95F4820B-BB3A-4e2d-BC64-5B817BC2C30E")
MSVidVideoInputDevice;
EXTERN_C const CLSID CLSID_MSVidVideoPlaybackDevice;
class DECLSPEC_UUID("1990D634-1A5E-4071-A34A-53AAFFCE9F36")
MSVidVideoPlaybackDevice;
EXTERN_C const CLSID CLSID_MSVidFeature;
class DECLSPEC_UUID("7748530B-C08A-47ea-B24C-BE8695FF405F")
MSVidFeature;
EXTERN_C const CLSID CLSID_MSVidOutput;
class DECLSPEC_UUID("87EB890D-03AD-4e9d-9866-376E5EC572ED")
MSVidOutput;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msvidctl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msvidctl_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
