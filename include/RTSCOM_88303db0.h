#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IRealTimeStylus IRealTimeStylus;
typedef interface IRealTimeStylus2 IRealTimeStylus2;
typedef interface IRealTimeStylus3 IRealTimeStylus3;
typedef interface IRealTimeStylusSynchronization IRealTimeStylusSynchronization;
typedef interface IStrokeBuilder IStrokeBuilder;
typedef interface IStylusPlugin IStylusPlugin;
typedef interface IStylusSyncPlugin IStylusSyncPlugin;
typedef interface IStylusAsyncPlugin IStylusAsyncPlugin;
typedef interface IDynamicRenderer IDynamicRenderer;
typedef interface IGestureRecognizer IGestureRecognizer;
typedef class RealTimeStylus RealTimeStylus;
typedef class DynamicRenderer DynamicRenderer;
typedef class GestureRecognizer GestureRecognizer;
typedef class StrokeBuilder StrokeBuilder;
#include "oaidl.h"
#include "ocidl.h"
#include "tpcshrd.h"
#include "msinkaut.h"
#include "manipulations.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum RealTimeStylusDataInterest
    {
        RTSDI_AllData = 0xffffffff,
        RTSDI_None = 0,
        RTSDI_Error = 0x1,
        RTSDI_RealTimeStylusEnabled = 0x2,
        RTSDI_RealTimeStylusDisabled = 0x4,
        RTSDI_StylusNew = 0x8,
        RTSDI_StylusInRange = 0x10,
        RTSDI_InAirPackets = 0x20,
        RTSDI_StylusOutOfRange = 0x40,
        RTSDI_StylusDown = 0x80,
        RTSDI_Packets = 0x100,
        RTSDI_StylusUp = 0x200,
        RTSDI_StylusButtonUp = 0x400,
        RTSDI_StylusButtonDown = 0x800,
        RTSDI_SystemEvents = 0x1000,
        RTSDI_TabletAdded = 0x2000,
        RTSDI_TabletRemoved = 0x4000,
        RTSDI_CustomStylusDataAdded = 0x8000,
        RTSDI_UpdateMapping = 0x10000,
        RTSDI_DefaultEvents = ( ( ( ( ( ( RTSDI_RealTimeStylusEnabled | RTSDI_RealTimeStylusDisabled ) | RTSDI_StylusDown ) | RTSDI_Packets ) | RTSDI_StylusUp ) | RTSDI_SystemEvents ) | RTSDI_CustomStylusDataAdded )
    } RealTimeStylusDataInterest;
typedef CURSOR_ID STYLUS_ID;
typedef struct StylusInfo
    {
    TABLET_CONTEXT_ID tcid;
    STYLUS_ID cid;
    BOOL bIsInvertedCursor;
    } StylusInfo;
typedef
enum StylusQueue
    {
        SyncStylusQueue = 0x1,
        AsyncStylusQueueImmediate = 0x2,
        AsyncStylusQueue = 0x3
    } StylusQueue;
typedef
enum RealTimeStylusLockType
    {
        RTSLT_ObjLock = 0x1,
        RTSLT_SyncEventLock = 0x2,
        RTSLT_AsyncEventLock = 0x4,
        RTSLT_ExcludeCallback = 0x8,
        RTSLT_SyncObjLock = 0xb,
        RTSLT_AsyncObjLock = 0xd
    } RealTimeStylusLockType;
typedef struct GESTURE_DATA
    {
    int gestureId;
    int recoConfidence;
    int strokeCount;
    } GESTURE_DATA;
typedef struct DYNAMIC_RENDERER_CACHED_DATA
    {
    LONG strokeId;
    IDynamicRenderer *dynamicRenderer;
    } DYNAMIC_RENDERER_CACHED_DATA;
extern RPC_IF_HANDLE __MIDL_itf_rtscom_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rtscom_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_TPCRTSLib;
EXTERN_C const IID IID_IRealTimeStylus;
    typedef struct IRealTimeStylusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRealTimeStylus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRealTimeStylus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRealTimeStylus * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IRealTimeStylus * This,
                                __RPC__out BOOL *pfEnable);
                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IRealTimeStylus * This,
                       BOOL fEnable);
                        HRESULT ( STDMETHODCALLTYPE *get_HWND )(
            __RPC__in IRealTimeStylus * This,
                                __RPC__out HANDLE_PTR *phwnd);
                        HRESULT ( STDMETHODCALLTYPE *put_HWND )(
            __RPC__in IRealTimeStylus * This,
                       HANDLE_PTR hwnd);
                        HRESULT ( STDMETHODCALLTYPE *get_WindowInputRectangle )(
            __RPC__in IRealTimeStylus * This,
                                __RPC__out RECT *prcWndInputRect);
                        HRESULT ( STDMETHODCALLTYPE *put_WindowInputRectangle )(
            __RPC__in IRealTimeStylus * This,
                       __RPC__in const RECT *prcWndInputRect);
        HRESULT ( STDMETHODCALLTYPE *AddStylusSyncPlugin )(
            __RPC__in IRealTimeStylus * This,
                       ULONG iIndex,
                       __RPC__in_opt IStylusSyncPlugin *piPlugin);
        HRESULT ( STDMETHODCALLTYPE *RemoveStylusSyncPlugin )(
            __RPC__in IRealTimeStylus * This,
                       ULONG iIndex,
                            __RPC__deref_inout_opt IStylusSyncPlugin **ppiPlugin);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllStylusSyncPlugins )(
            __RPC__in IRealTimeStylus * This);
        HRESULT ( STDMETHODCALLTYPE *GetStylusSyncPlugin )(
            __RPC__in IRealTimeStylus * This,
                       ULONG iIndex,
                        __RPC__deref_out_opt IStylusSyncPlugin **ppiPlugin);
        HRESULT ( STDMETHODCALLTYPE *GetStylusSyncPluginCount )(
            __RPC__in IRealTimeStylus * This,
                        __RPC__out ULONG *pcPlugins);
        HRESULT ( STDMETHODCALLTYPE *AddStylusAsyncPlugin )(
            __RPC__in IRealTimeStylus * This,
                       ULONG iIndex,
                       __RPC__in_opt IStylusAsyncPlugin *piPlugin);
        HRESULT ( STDMETHODCALLTYPE *RemoveStylusAsyncPlugin )(
            __RPC__in IRealTimeStylus * This,
                       ULONG iIndex,
                            __RPC__deref_inout_opt IStylusAsyncPlugin **ppiPlugin);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllStylusAsyncPlugins )(
            __RPC__in IRealTimeStylus * This);
        HRESULT ( STDMETHODCALLTYPE *GetStylusAsyncPlugin )(
            __RPC__in IRealTimeStylus * This,
                       ULONG iIndex,
                        __RPC__deref_out_opt IStylusAsyncPlugin **ppiPlugin);
        HRESULT ( STDMETHODCALLTYPE *GetStylusAsyncPluginCount )(
            __RPC__in IRealTimeStylus * This,
                        __RPC__out ULONG *pcPlugins);
                        HRESULT ( STDMETHODCALLTYPE *get_ChildRealTimeStylusPlugin )(
            __RPC__in IRealTimeStylus * This,
                                __RPC__deref_out_opt IRealTimeStylus **ppiRTS);
                           HRESULT ( STDMETHODCALLTYPE *putref_ChildRealTimeStylusPlugin )(
            __RPC__in IRealTimeStylus * This,
                               __RPC__in_opt IRealTimeStylus *piRTS);
        HRESULT ( STDMETHODCALLTYPE *AddCustomStylusDataToQueue )(
            __RPC__in IRealTimeStylus * This,
                       StylusQueue sq,
                       __RPC__in const GUID *pGuidId,
                              __RPC__in_range(0,0x7fff) ULONG cbData,
                                        __RPC__in_ecount_full_opt(cbData) BYTE *pbData);
        HRESULT ( STDMETHODCALLTYPE *ClearStylusQueues )(
            __RPC__in IRealTimeStylus * This);
        HRESULT ( STDMETHODCALLTYPE *SetAllTabletsMode )(
            __RPC__in IRealTimeStylus * This,
                       BOOL fUseMouseForInput);
        HRESULT ( STDMETHODCALLTYPE *SetSingleTabletMode )(
            __RPC__in IRealTimeStylus * This,
                       __RPC__in_opt IInkTablet *piTablet);
        HRESULT ( STDMETHODCALLTYPE *GetTablet )(
            __RPC__in IRealTimeStylus * This,
                                __RPC__deref_out_opt IInkTablet **ppiSingleTablet);
        HRESULT ( STDMETHODCALLTYPE *GetTabletContextIdFromTablet )(
            __RPC__in IRealTimeStylus * This,
                       __RPC__in_opt IInkTablet *piTablet,
                                __RPC__out TABLET_CONTEXT_ID *ptcid);
        HRESULT ( STDMETHODCALLTYPE *GetTabletFromTabletContextId )(
            __RPC__in IRealTimeStylus * This,
                       TABLET_CONTEXT_ID tcid,
                                __RPC__deref_out_opt IInkTablet **ppiTablet);
        HRESULT ( STDMETHODCALLTYPE *GetAllTabletContextIds )(
            __RPC__in IRealTimeStylus * This,
                            __RPC__inout ULONG *pcTcidCount,
                                          __RPC__deref_out_ecount_full_opt(*pcTcidCount) TABLET_CONTEXT_ID **ppTcids);
        HRESULT ( STDMETHODCALLTYPE *GetStyluses )(
            __RPC__in IRealTimeStylus * This,
                                __RPC__deref_out_opt IInkCursors **ppiInkCursors);
        HRESULT ( STDMETHODCALLTYPE *GetStylusForId )(
            __RPC__in IRealTimeStylus * This,
                       STYLUS_ID sid,
                                __RPC__deref_out_opt IInkCursor **ppiInkCursor);
        HRESULT ( STDMETHODCALLTYPE *SetDesiredPacketDescription )(
            __RPC__in IRealTimeStylus * This,
                              __RPC__in_range(0,32) ULONG cProperties,
                                __RPC__in_ecount_full(cProperties) const GUID *pPropertyGuids);
        HRESULT ( STDMETHODCALLTYPE *GetDesiredPacketDescription )(
            __RPC__in IRealTimeStylus * This,
                            __RPC__inout ULONG *pcProperties,
                                          __RPC__deref_out_ecount_full_opt(*pcProperties) GUID **ppPropertyGuids);
        HRESULT ( STDMETHODCALLTYPE *GetPacketDescriptionData )(
            __RPC__in IRealTimeStylus * This,
                       TABLET_CONTEXT_ID tcid,
                                    __RPC__inout_opt FLOAT *pfInkToDeviceScaleX,
                                    __RPC__inout_opt FLOAT *pfInkToDeviceScaleY,
                            __RPC__inout ULONG *pcPacketProperties,
                                          __RPC__deref_out_ecount_full_opt(*pcPacketProperties) PACKET_PROPERTY **ppPacketProperties);
        END_INTERFACE
    } IRealTimeStylusVtbl;
    interface IRealTimeStylus
    {
        CONST_VTBL struct IRealTimeStylusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Enabled(This,pfEnable) )
    ( (This)->lpVtbl -> put_Enabled(This,fEnable) )
    ( (This)->lpVtbl -> get_HWND(This,phwnd) )
    ( (This)->lpVtbl -> put_HWND(This,hwnd) )
    ( (This)->lpVtbl -> get_WindowInputRectangle(This,prcWndInputRect) )
    ( (This)->lpVtbl -> put_WindowInputRectangle(This,prcWndInputRect) )
    ( (This)->lpVtbl -> AddStylusSyncPlugin(This,iIndex,piPlugin) )
    ( (This)->lpVtbl -> RemoveStylusSyncPlugin(This,iIndex,ppiPlugin) )
    ( (This)->lpVtbl -> RemoveAllStylusSyncPlugins(This) )
    ( (This)->lpVtbl -> GetStylusSyncPlugin(This,iIndex,ppiPlugin) )
    ( (This)->lpVtbl -> GetStylusSyncPluginCount(This,pcPlugins) )
    ( (This)->lpVtbl -> AddStylusAsyncPlugin(This,iIndex,piPlugin) )
    ( (This)->lpVtbl -> RemoveStylusAsyncPlugin(This,iIndex,ppiPlugin) )
    ( (This)->lpVtbl -> RemoveAllStylusAsyncPlugins(This) )
    ( (This)->lpVtbl -> GetStylusAsyncPlugin(This,iIndex,ppiPlugin) )
    ( (This)->lpVtbl -> GetStylusAsyncPluginCount(This,pcPlugins) )
    ( (This)->lpVtbl -> get_ChildRealTimeStylusPlugin(This,ppiRTS) )
    ( (This)->lpVtbl -> putref_ChildRealTimeStylusPlugin(This,piRTS) )
    ( (This)->lpVtbl -> AddCustomStylusDataToQueue(This,sq,pGuidId,cbData,pbData) )
    ( (This)->lpVtbl -> ClearStylusQueues(This) )
    ( (This)->lpVtbl -> SetAllTabletsMode(This,fUseMouseForInput) )
    ( (This)->lpVtbl -> SetSingleTabletMode(This,piTablet) )
    ( (This)->lpVtbl -> GetTablet(This,ppiSingleTablet) )
    ( (This)->lpVtbl -> GetTabletContextIdFromTablet(This,piTablet,ptcid) )
    ( (This)->lpVtbl -> GetTabletFromTabletContextId(This,tcid,ppiTablet) )
    ( (This)->lpVtbl -> GetAllTabletContextIds(This,pcTcidCount,ppTcids) )
    ( (This)->lpVtbl -> GetStyluses(This,ppiInkCursors) )
    ( (This)->lpVtbl -> GetStylusForId(This,sid,ppiInkCursor) )
    ( (This)->lpVtbl -> SetDesiredPacketDescription(This,cProperties,pPropertyGuids) )
    ( (This)->lpVtbl -> GetDesiredPacketDescription(This,pcProperties,ppPropertyGuids) )
    ( (This)->lpVtbl -> GetPacketDescriptionData(This,tcid,pfInkToDeviceScaleX,pfInkToDeviceScaleY,pcPacketProperties,ppPacketProperties) )
EXTERN_C const IID IID_IRealTimeStylus2;
    typedef struct IRealTimeStylus2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRealTimeStylus2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRealTimeStylus2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRealTimeStylus2 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_FlicksEnabled )(
            __RPC__in IRealTimeStylus2 * This,
                                __RPC__out BOOL *pfEnable);
                        HRESULT ( STDMETHODCALLTYPE *put_FlicksEnabled )(
            __RPC__in IRealTimeStylus2 * This,
                       BOOL fEnable);
        END_INTERFACE
    } IRealTimeStylus2Vtbl;
    interface IRealTimeStylus2
    {
        CONST_VTBL struct IRealTimeStylus2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_FlicksEnabled(This,pfEnable) )
    ( (This)->lpVtbl -> put_FlicksEnabled(This,fEnable) )
EXTERN_C const IID IID_IRealTimeStylus3;
    typedef struct IRealTimeStylus3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRealTimeStylus3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRealTimeStylus3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRealTimeStylus3 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_MultiTouchEnabled )(
            __RPC__in IRealTimeStylus3 * This,
                                __RPC__out BOOL *pfEnable);
                        HRESULT ( STDMETHODCALLTYPE *put_MultiTouchEnabled )(
            __RPC__in IRealTimeStylus3 * This,
                       BOOL fEnable);
        END_INTERFACE
    } IRealTimeStylus3Vtbl;
    interface IRealTimeStylus3
    {
        CONST_VTBL struct IRealTimeStylus3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_MultiTouchEnabled(This,pfEnable) )
    ( (This)->lpVtbl -> put_MultiTouchEnabled(This,fEnable) )
EXTERN_C const IID IID_IRealTimeStylusSynchronization;
    typedef struct IRealTimeStylusSynchronizationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRealTimeStylusSynchronization * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRealTimeStylusSynchronization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRealTimeStylusSynchronization * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireLock )(
            __RPC__in IRealTimeStylusSynchronization * This,
                       RealTimeStylusLockType lock);
        HRESULT ( STDMETHODCALLTYPE *ReleaseLock )(
            __RPC__in IRealTimeStylusSynchronization * This,
                       RealTimeStylusLockType lock);
        END_INTERFACE
    } IRealTimeStylusSynchronizationVtbl;
    interface IRealTimeStylusSynchronization
    {
        CONST_VTBL struct IRealTimeStylusSynchronizationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireLock(This,lock) )
    ( (This)->lpVtbl -> ReleaseLock(This,lock) )
EXTERN_C const IID IID_IStrokeBuilder;
    typedef struct IStrokeBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStrokeBuilder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStrokeBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStrokeBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *CreateStroke )(
            __RPC__in IStrokeBuilder * This,
                              __RPC__in_range(0,0xfffff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) const LONG *pPackets,
                              __RPC__in_range(0,32) ULONG cPacketProperties,
                                __RPC__in_ecount_full(cPacketProperties) const PACKET_PROPERTY *pPacketProperties,
                       FLOAT fInkToDeviceScaleX,
                       FLOAT fInkToDeviceScaleY,
                            __RPC__deref_inout_opt IInkStrokeDisp **ppIInkStroke);
        HRESULT ( STDMETHODCALLTYPE *BeginStroke )(
            __RPC__in IStrokeBuilder * This,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid,
                       __RPC__in const LONG *pPacket,
                              __RPC__in_range(0,32) ULONG cPacketProperties,
                                __RPC__in_ecount_full(cPacketProperties) PACKET_PROPERTY *pPacketProperties,
                       FLOAT fInkToDeviceScaleX,
                       FLOAT fInkToDeviceScaleY,
                                    __RPC__deref_opt_inout_opt IInkStrokeDisp **ppIInkStroke);
        HRESULT ( STDMETHODCALLTYPE *AppendPackets )(
            __RPC__in IStrokeBuilder * This,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid,
                              __RPC__in_range(0,0x7fff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) const LONG *pPackets);
        HRESULT ( STDMETHODCALLTYPE *EndStroke )(
            __RPC__in IStrokeBuilder * This,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid,
                            __RPC__deref_inout_opt IInkStrokeDisp **ppIInkStroke,
                            __RPC__inout RECT *pDirtyRect);
                        HRESULT ( STDMETHODCALLTYPE *get_Ink )(
            __RPC__in IStrokeBuilder * This,
                                __RPC__deref_out_opt IInkDisp **ppiInkObj);
                           HRESULT ( STDMETHODCALLTYPE *putref_Ink )(
            __RPC__in IStrokeBuilder * This,
                       __RPC__in_opt IInkDisp *piInkObj);
        END_INTERFACE
    } IStrokeBuilderVtbl;
    interface IStrokeBuilder
    {
        CONST_VTBL struct IStrokeBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateStroke(This,cPktBuffLength,pPackets,cPacketProperties,pPacketProperties,fInkToDeviceScaleX,fInkToDeviceScaleY,ppIInkStroke) )
    ( (This)->lpVtbl -> BeginStroke(This,tcid,sid,pPacket,cPacketProperties,pPacketProperties,fInkToDeviceScaleX,fInkToDeviceScaleY,ppIInkStroke) )
    ( (This)->lpVtbl -> AppendPackets(This,tcid,sid,cPktBuffLength,pPackets) )
    ( (This)->lpVtbl -> EndStroke(This,tcid,sid,ppIInkStroke,pDirtyRect) )
    ( (This)->lpVtbl -> get_Ink(This,ppiInkObj) )
    ( (This)->lpVtbl -> putref_Ink(This,piInkObj) )
EXTERN_C const IID IID_IStylusPlugin;
    typedef struct IStylusPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStylusPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStylusPlugin * This);
        HRESULT ( STDMETHODCALLTYPE *RealTimeStylusEnabled )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                              __RPC__in_range(0,8) ULONG cTcidCount,
                                __RPC__in_ecount_full(cTcidCount) const TABLET_CONTEXT_ID *pTcids);
        HRESULT ( STDMETHODCALLTYPE *RealTimeStylusDisabled )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                              __RPC__in_range(0,8) ULONG cTcidCount,
                                __RPC__in_ecount_full(cTcidCount) const TABLET_CONTEXT_ID *pTcids);
        HRESULT ( STDMETHODCALLTYPE *StylusInRange )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid);
        HRESULT ( STDMETHODCALLTYPE *StylusOutOfRange )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid);
        HRESULT ( STDMETHODCALLTYPE *StylusDown )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                              __RPC__in_range(0,32) ULONG cPropCountPerPkt,
                                __RPC__in_ecount_full(cPropCountPerPkt) LONG *pPacket,
                            __RPC__deref_inout_opt LONG **ppInOutPkt);
        HRESULT ( STDMETHODCALLTYPE *StylusUp )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                              __RPC__in_range(0,32) ULONG cPropCountPerPkt,
                                __RPC__in_ecount_full(cPropCountPerPkt) LONG *pPacket,
                            __RPC__deref_inout_opt LONG **ppInOutPkt);
        HRESULT ( STDMETHODCALLTYPE *StylusButtonDown )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       STYLUS_ID sid,
                       __RPC__in const GUID *pGuidStylusButton,
                            __RPC__inout POINT *pStylusPos);
        HRESULT ( STDMETHODCALLTYPE *StylusButtonUp )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       STYLUS_ID sid,
                       __RPC__in const GUID *pGuidStylusButton,
                            __RPC__inout POINT *pStylusPos);
        HRESULT ( STDMETHODCALLTYPE *InAirPackets )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                       ULONG cPktCount,
                              __RPC__in_range(0,0x7fff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) LONG *pPackets,
                            __RPC__inout ULONG *pcInOutPkts,
                            __RPC__deref_inout_opt LONG **ppInOutPkts);
        HRESULT ( STDMETHODCALLTYPE *Packets )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                       ULONG cPktCount,
                              __RPC__in_range(0,0x7fff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) LONG *pPackets,
                            __RPC__inout ULONG *pcInOutPkts,
                            __RPC__deref_inout_opt LONG **ppInOutPkts);
        HRESULT ( STDMETHODCALLTYPE *CustomStylusDataAdded )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const GUID *pGuidId,
                              __RPC__in_range(0,0x7fff) ULONG cbData,
                                        __RPC__in_ecount_full_opt(cbData) const BYTE *pbData);
        HRESULT ( STDMETHODCALLTYPE *SystemEvent )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid,
                       SYSTEM_EVENT event,
                       SYSTEM_EVENT_DATA eventdata);
        HRESULT ( STDMETHODCALLTYPE *TabletAdded )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in_opt IInkTablet *piTablet);
        HRESULT ( STDMETHODCALLTYPE *TabletRemoved )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       LONG iTabletIndex);
        HRESULT ( STDMETHODCALLTYPE *Error )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in_opt IStylusPlugin *piPlugin,
                       RealTimeStylusDataInterest dataInterest,
                       HRESULT hrErrorCode,
                            __RPC__inout LONG_PTR *lptrKey);
        HRESULT ( STDMETHODCALLTYPE *UpdateMapping )(
            __RPC__in IStylusPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc);
        HRESULT ( STDMETHODCALLTYPE *DataInterest )(
            __RPC__in IStylusPlugin * This,
                                __RPC__out RealTimeStylusDataInterest *pDataInterest);
        END_INTERFACE
    } IStylusPluginVtbl;
    interface IStylusPlugin
    {
        CONST_VTBL struct IStylusPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) )
    ( (This)->lpVtbl -> RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) )
    ( (This)->lpVtbl -> StylusInRange(This,piRtsSrc,tcid,sid) )
    ( (This)->lpVtbl -> StylusOutOfRange(This,piRtsSrc,tcid,sid) )
    ( (This)->lpVtbl -> StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
    ( (This)->lpVtbl -> StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
    ( (This)->lpVtbl -> StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
    ( (This)->lpVtbl -> StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
    ( (This)->lpVtbl -> InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
    ( (This)->lpVtbl -> Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
    ( (This)->lpVtbl -> CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) )
    ( (This)->lpVtbl -> SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) )
    ( (This)->lpVtbl -> TabletAdded(This,piRtsSrc,piTablet) )
    ( (This)->lpVtbl -> TabletRemoved(This,piRtsSrc,iTabletIndex) )
    ( (This)->lpVtbl -> Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) )
    ( (This)->lpVtbl -> UpdateMapping(This,piRtsSrc) )
    ( (This)->lpVtbl -> DataInterest(This,pDataInterest) )
EXTERN_C const IID IID_IStylusSyncPlugin;
    typedef struct IStylusSyncPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStylusSyncPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStylusSyncPlugin * This);
        HRESULT ( STDMETHODCALLTYPE *RealTimeStylusEnabled )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                              __RPC__in_range(0,8) ULONG cTcidCount,
                                __RPC__in_ecount_full(cTcidCount) const TABLET_CONTEXT_ID *pTcids);
        HRESULT ( STDMETHODCALLTYPE *RealTimeStylusDisabled )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                              __RPC__in_range(0,8) ULONG cTcidCount,
                                __RPC__in_ecount_full(cTcidCount) const TABLET_CONTEXT_ID *pTcids);
        HRESULT ( STDMETHODCALLTYPE *StylusInRange )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid);
        HRESULT ( STDMETHODCALLTYPE *StylusOutOfRange )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid);
        HRESULT ( STDMETHODCALLTYPE *StylusDown )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                              __RPC__in_range(0,32) ULONG cPropCountPerPkt,
                                __RPC__in_ecount_full(cPropCountPerPkt) LONG *pPacket,
                            __RPC__deref_inout_opt LONG **ppInOutPkt);
        HRESULT ( STDMETHODCALLTYPE *StylusUp )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                              __RPC__in_range(0,32) ULONG cPropCountPerPkt,
                                __RPC__in_ecount_full(cPropCountPerPkt) LONG *pPacket,
                            __RPC__deref_inout_opt LONG **ppInOutPkt);
        HRESULT ( STDMETHODCALLTYPE *StylusButtonDown )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       STYLUS_ID sid,
                       __RPC__in const GUID *pGuidStylusButton,
                            __RPC__inout POINT *pStylusPos);
        HRESULT ( STDMETHODCALLTYPE *StylusButtonUp )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       STYLUS_ID sid,
                       __RPC__in const GUID *pGuidStylusButton,
                            __RPC__inout POINT *pStylusPos);
        HRESULT ( STDMETHODCALLTYPE *InAirPackets )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                       ULONG cPktCount,
                              __RPC__in_range(0,0x7fff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) LONG *pPackets,
                            __RPC__inout ULONG *pcInOutPkts,
                            __RPC__deref_inout_opt LONG **ppInOutPkts);
        HRESULT ( STDMETHODCALLTYPE *Packets )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                       ULONG cPktCount,
                              __RPC__in_range(0,0x7fff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) LONG *pPackets,
                            __RPC__inout ULONG *pcInOutPkts,
                            __RPC__deref_inout_opt LONG **ppInOutPkts);
        HRESULT ( STDMETHODCALLTYPE *CustomStylusDataAdded )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const GUID *pGuidId,
                              __RPC__in_range(0,0x7fff) ULONG cbData,
                                        __RPC__in_ecount_full_opt(cbData) const BYTE *pbData);
        HRESULT ( STDMETHODCALLTYPE *SystemEvent )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid,
                       SYSTEM_EVENT event,
                       SYSTEM_EVENT_DATA eventdata);
        HRESULT ( STDMETHODCALLTYPE *TabletAdded )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in_opt IInkTablet *piTablet);
        HRESULT ( STDMETHODCALLTYPE *TabletRemoved )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       LONG iTabletIndex);
        HRESULT ( STDMETHODCALLTYPE *Error )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in_opt IStylusPlugin *piPlugin,
                       RealTimeStylusDataInterest dataInterest,
                       HRESULT hrErrorCode,
                            __RPC__inout LONG_PTR *lptrKey);
        HRESULT ( STDMETHODCALLTYPE *UpdateMapping )(
            __RPC__in IStylusSyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc);
        HRESULT ( STDMETHODCALLTYPE *DataInterest )(
            __RPC__in IStylusSyncPlugin * This,
                                __RPC__out RealTimeStylusDataInterest *pDataInterest);
        END_INTERFACE
    } IStylusSyncPluginVtbl;
    interface IStylusSyncPlugin
    {
        CONST_VTBL struct IStylusSyncPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) )
    ( (This)->lpVtbl -> RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) )
    ( (This)->lpVtbl -> StylusInRange(This,piRtsSrc,tcid,sid) )
    ( (This)->lpVtbl -> StylusOutOfRange(This,piRtsSrc,tcid,sid) )
    ( (This)->lpVtbl -> StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
    ( (This)->lpVtbl -> StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
    ( (This)->lpVtbl -> StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
    ( (This)->lpVtbl -> StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
    ( (This)->lpVtbl -> InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
    ( (This)->lpVtbl -> Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
    ( (This)->lpVtbl -> CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) )
    ( (This)->lpVtbl -> SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) )
    ( (This)->lpVtbl -> TabletAdded(This,piRtsSrc,piTablet) )
    ( (This)->lpVtbl -> TabletRemoved(This,piRtsSrc,iTabletIndex) )
    ( (This)->lpVtbl -> Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) )
    ( (This)->lpVtbl -> UpdateMapping(This,piRtsSrc) )
    ( (This)->lpVtbl -> DataInterest(This,pDataInterest) )
EXTERN_C const IID IID_IStylusAsyncPlugin;
    typedef struct IStylusAsyncPluginVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStylusAsyncPlugin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStylusAsyncPlugin * This);
        HRESULT ( STDMETHODCALLTYPE *RealTimeStylusEnabled )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                              __RPC__in_range(0,8) ULONG cTcidCount,
                                __RPC__in_ecount_full(cTcidCount) const TABLET_CONTEXT_ID *pTcids);
        HRESULT ( STDMETHODCALLTYPE *RealTimeStylusDisabled )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                              __RPC__in_range(0,8) ULONG cTcidCount,
                                __RPC__in_ecount_full(cTcidCount) const TABLET_CONTEXT_ID *pTcids);
        HRESULT ( STDMETHODCALLTYPE *StylusInRange )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid);
        HRESULT ( STDMETHODCALLTYPE *StylusOutOfRange )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid);
        HRESULT ( STDMETHODCALLTYPE *StylusDown )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                              __RPC__in_range(0,32) ULONG cPropCountPerPkt,
                                __RPC__in_ecount_full(cPropCountPerPkt) LONG *pPacket,
                            __RPC__deref_inout_opt LONG **ppInOutPkt);
        HRESULT ( STDMETHODCALLTYPE *StylusUp )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                              __RPC__in_range(0,32) ULONG cPropCountPerPkt,
                                __RPC__in_ecount_full(cPropCountPerPkt) LONG *pPacket,
                            __RPC__deref_inout_opt LONG **ppInOutPkt);
        HRESULT ( STDMETHODCALLTYPE *StylusButtonDown )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       STYLUS_ID sid,
                       __RPC__in const GUID *pGuidStylusButton,
                            __RPC__inout POINT *pStylusPos);
        HRESULT ( STDMETHODCALLTYPE *StylusButtonUp )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       STYLUS_ID sid,
                       __RPC__in const GUID *pGuidStylusButton,
                            __RPC__inout POINT *pStylusPos);
        HRESULT ( STDMETHODCALLTYPE *InAirPackets )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                       ULONG cPktCount,
                              __RPC__in_range(0,0x7fff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) LONG *pPackets,
                            __RPC__inout ULONG *pcInOutPkts,
                            __RPC__deref_inout_opt LONG **ppInOutPkts);
        HRESULT ( STDMETHODCALLTYPE *Packets )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const StylusInfo *pStylusInfo,
                       ULONG cPktCount,
                              __RPC__in_range(0,0x7fff) ULONG cPktBuffLength,
                                __RPC__in_ecount_full(cPktBuffLength) LONG *pPackets,
                            __RPC__inout ULONG *pcInOutPkts,
                            __RPC__deref_inout_opt LONG **ppInOutPkts);
        HRESULT ( STDMETHODCALLTYPE *CustomStylusDataAdded )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in const GUID *pGuidId,
                              __RPC__in_range(0,0x7fff) ULONG cbData,
                                        __RPC__in_ecount_full_opt(cbData) const BYTE *pbData);
        HRESULT ( STDMETHODCALLTYPE *SystemEvent )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       TABLET_CONTEXT_ID tcid,
                       STYLUS_ID sid,
                       SYSTEM_EVENT event,
                       SYSTEM_EVENT_DATA eventdata);
        HRESULT ( STDMETHODCALLTYPE *TabletAdded )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in_opt IInkTablet *piTablet);
        HRESULT ( STDMETHODCALLTYPE *TabletRemoved )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       LONG iTabletIndex);
        HRESULT ( STDMETHODCALLTYPE *Error )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc,
                       __RPC__in_opt IStylusPlugin *piPlugin,
                       RealTimeStylusDataInterest dataInterest,
                       HRESULT hrErrorCode,
                            __RPC__inout LONG_PTR *lptrKey);
        HRESULT ( STDMETHODCALLTYPE *UpdateMapping )(
            __RPC__in IStylusAsyncPlugin * This,
                       __RPC__in_opt IRealTimeStylus *piRtsSrc);
        HRESULT ( STDMETHODCALLTYPE *DataInterest )(
            __RPC__in IStylusAsyncPlugin * This,
                                __RPC__out RealTimeStylusDataInterest *pDataInterest);
        END_INTERFACE
    } IStylusAsyncPluginVtbl;
    interface IStylusAsyncPlugin
    {
        CONST_VTBL struct IStylusAsyncPluginVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RealTimeStylusEnabled(This,piRtsSrc,cTcidCount,pTcids) )
    ( (This)->lpVtbl -> RealTimeStylusDisabled(This,piRtsSrc,cTcidCount,pTcids) )
    ( (This)->lpVtbl -> StylusInRange(This,piRtsSrc,tcid,sid) )
    ( (This)->lpVtbl -> StylusOutOfRange(This,piRtsSrc,tcid,sid) )
    ( (This)->lpVtbl -> StylusDown(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
    ( (This)->lpVtbl -> StylusUp(This,piRtsSrc,pStylusInfo,cPropCountPerPkt,pPacket,ppInOutPkt) )
    ( (This)->lpVtbl -> StylusButtonDown(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
    ( (This)->lpVtbl -> StylusButtonUp(This,piRtsSrc,sid,pGuidStylusButton,pStylusPos) )
    ( (This)->lpVtbl -> InAirPackets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
    ( (This)->lpVtbl -> Packets(This,piRtsSrc,pStylusInfo,cPktCount,cPktBuffLength,pPackets,pcInOutPkts,ppInOutPkts) )
    ( (This)->lpVtbl -> CustomStylusDataAdded(This,piRtsSrc,pGuidId,cbData,pbData) )
    ( (This)->lpVtbl -> SystemEvent(This,piRtsSrc,tcid,sid,event,eventdata) )
    ( (This)->lpVtbl -> TabletAdded(This,piRtsSrc,piTablet) )
    ( (This)->lpVtbl -> TabletRemoved(This,piRtsSrc,iTabletIndex) )
    ( (This)->lpVtbl -> Error(This,piRtsSrc,piPlugin,dataInterest,hrErrorCode,lptrKey) )
    ( (This)->lpVtbl -> UpdateMapping(This,piRtsSrc) )
    ( (This)->lpVtbl -> DataInterest(This,pDataInterest) )
EXTERN_C const IID IID_IDynamicRenderer;
    typedef struct IDynamicRendererVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDynamicRenderer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDynamicRenderer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDynamicRenderer * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IDynamicRenderer * This,
                                __RPC__out BOOL *bEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IDynamicRenderer * This,
                       BOOL bEnabled);
                        HRESULT ( STDMETHODCALLTYPE *get_HWND )(
            __RPC__in IDynamicRenderer * This,
                                __RPC__out HANDLE_PTR *hwnd);
                        HRESULT ( STDMETHODCALLTYPE *put_HWND )(
            __RPC__in IDynamicRenderer * This,
                       HANDLE_PTR hwnd);
                        HRESULT ( STDMETHODCALLTYPE *get_ClipRectangle )(
            __RPC__in IDynamicRenderer * This,
                                __RPC__out RECT *prcClipRect);
                        HRESULT ( STDMETHODCALLTYPE *put_ClipRectangle )(
            __RPC__in IDynamicRenderer * This,
                       __RPC__in const RECT *prcClipRect);
                        HRESULT ( STDMETHODCALLTYPE *get_ClipRegion )(
            __RPC__in IDynamicRenderer * This,
                                __RPC__out HANDLE_PTR *phClipRgn);
                        HRESULT ( STDMETHODCALLTYPE *put_ClipRegion )(
            __RPC__in IDynamicRenderer * This,
                       HANDLE_PTR hClipRgn);
                        HRESULT ( STDMETHODCALLTYPE *get_DrawingAttributes )(
            __RPC__in IDynamicRenderer * This,
                                __RPC__deref_out_opt IInkDrawingAttributes **ppiDA);
                           HRESULT ( STDMETHODCALLTYPE *putref_DrawingAttributes )(
            __RPC__in IDynamicRenderer * This,
                       __RPC__in_opt IInkDrawingAttributes *piDA);
                        HRESULT ( STDMETHODCALLTYPE *get_DataCacheEnabled )(
            __RPC__in IDynamicRenderer * This,
                                __RPC__out BOOL *pfCacheData);
                        HRESULT ( STDMETHODCALLTYPE *put_DataCacheEnabled )(
            __RPC__in IDynamicRenderer * This,
                       BOOL fCacheData);
        HRESULT ( STDMETHODCALLTYPE *ReleaseCachedData )(
            __RPC__in IDynamicRenderer * This,
            ULONG strokeId);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IDynamicRenderer * This);
        HRESULT ( STDMETHODCALLTYPE *Draw )(
            __RPC__in IDynamicRenderer * This,
                       HANDLE_PTR hDC);
        END_INTERFACE
    } IDynamicRendererVtbl;
    interface IDynamicRenderer
    {
        CONST_VTBL struct IDynamicRendererVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Enabled(This,bEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,bEnabled) )
    ( (This)->lpVtbl -> get_HWND(This,hwnd) )
    ( (This)->lpVtbl -> put_HWND(This,hwnd) )
    ( (This)->lpVtbl -> get_ClipRectangle(This,prcClipRect) )
    ( (This)->lpVtbl -> put_ClipRectangle(This,prcClipRect) )
    ( (This)->lpVtbl -> get_ClipRegion(This,phClipRgn) )
    ( (This)->lpVtbl -> put_ClipRegion(This,hClipRgn) )
    ( (This)->lpVtbl -> get_DrawingAttributes(This,ppiDA) )
    ( (This)->lpVtbl -> putref_DrawingAttributes(This,piDA) )
    ( (This)->lpVtbl -> get_DataCacheEnabled(This,pfCacheData) )
    ( (This)->lpVtbl -> put_DataCacheEnabled(This,fCacheData) )
    ( (This)->lpVtbl -> ReleaseCachedData(This,strokeId) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Draw(This,hDC) )
EXTERN_C const IID IID_IGestureRecognizer;
    typedef struct IGestureRecognizerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGestureRecognizer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGestureRecognizer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGestureRecognizer * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Enabled )(
            __RPC__in IGestureRecognizer * This,
                                __RPC__out BOOL *pfEnabled);
                        HRESULT ( STDMETHODCALLTYPE *put_Enabled )(
            __RPC__in IGestureRecognizer * This,
                       BOOL fEnabled);
                        HRESULT ( STDMETHODCALLTYPE *get_MaxStrokeCount )(
            __RPC__in IGestureRecognizer * This,
                                __RPC__out long *pcStrokes);
                        HRESULT ( STDMETHODCALLTYPE *put_MaxStrokeCount )(
            __RPC__in IGestureRecognizer * This,
                       long cStrokes);
        HRESULT ( STDMETHODCALLTYPE *EnableGestures )(
            __RPC__in IGestureRecognizer * This,
                              __RPC__in_range(0,64) ULONG cGestures,
                                __RPC__in_ecount_full(cGestures) const int *pGestures);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IGestureRecognizer * This);
        END_INTERFACE
    } IGestureRecognizerVtbl;
    interface IGestureRecognizer
    {
        CONST_VTBL struct IGestureRecognizerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Enabled(This,pfEnabled) )
    ( (This)->lpVtbl -> put_Enabled(This,fEnabled) )
    ( (This)->lpVtbl -> get_MaxStrokeCount(This,pcStrokes) )
    ( (This)->lpVtbl -> put_MaxStrokeCount(This,cStrokes) )
    ( (This)->lpVtbl -> EnableGestures(This,cGestures,pGestures) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const CLSID CLSID_RealTimeStylus;
class DECLSPEC_UUID("E26B366D-F998-43ce-836F-CB6D904432B0")
RealTimeStylus;
EXTERN_C const CLSID CLSID_DynamicRenderer;
class DECLSPEC_UUID("ECD32AEA-746F-4dcb-BF68-082757FAFF18")
DynamicRenderer;
EXTERN_C const CLSID CLSID_GestureRecognizer;
class DECLSPEC_UUID("EA30C654-C62C-441f-AC00-95F9A196782C")
GestureRecognizer;
EXTERN_C const CLSID CLSID_StrokeBuilder;
class DECLSPEC_UUID("E810CEE7-6E51-4cb0-AA3A-0B985B70DAF7")
StrokeBuilder;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_rtscom_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_rtscom_0000_0001_v0_0_s_ifspec;
}
