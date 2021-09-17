#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IKsTopologyInfo IKsTopologyInfo;
typedef interface ISelector ISelector;
typedef interface ICameraControl ICameraControl;
typedef interface IVideoProcAmp IVideoProcAmp;
typedef interface IKsNodeControl IKsNodeControl;
#include "unknwn.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "ks.h"
typedef struct __MIDL___MIDL_itf_vidcap_0000_0000_0001
    {
    ULONG FromNode;
    ULONG FromNodePin;
    ULONG ToNode;
    ULONG ToNodePin;
    } KSTOPOLOGY_CONNECTION;
typedef struct __MIDL___MIDL_itf_vidcap_0000_0000_0001 *PKSTOPOLOGY_CONNECTION;
extern RPC_IF_HANDLE __MIDL_itf_vidcap_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vidcap_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IKsTopologyInfo;
    typedef struct IKsTopologyInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsTopologyInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsTopologyInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsTopologyInfo * This);
        HRESULT ( STDMETHODCALLTYPE *get_NumCategories )(
            IKsTopologyInfo * This,
                        DWORD *pdwNumCategories);
        HRESULT ( STDMETHODCALLTYPE *get_Category )(
            IKsTopologyInfo * This,
                       DWORD dwIndex,
                        GUID *pCategory);
        HRESULT ( STDMETHODCALLTYPE *get_NumConnections )(
            IKsTopologyInfo * This,
                        DWORD *pdwNumConnections);
        HRESULT ( STDMETHODCALLTYPE *get_ConnectionInfo )(
            IKsTopologyInfo * This,
                       DWORD dwIndex,
                        KSTOPOLOGY_CONNECTION *pConnectionInfo);
        HRESULT ( STDMETHODCALLTYPE *get_NodeName )(
            IKsTopologyInfo * This,
                       DWORD dwNodeId,
            _Out_writes_bytes_opt_(dwBufSize) WCHAR *pwchNodeName,
                       DWORD dwBufSize,
            _Out_ DWORD *pdwNameLen);
        HRESULT ( STDMETHODCALLTYPE *get_NumNodes )(
            IKsTopologyInfo * This,
                        DWORD *pdwNumNodes);
        HRESULT ( STDMETHODCALLTYPE *get_NodeType )(
            IKsTopologyInfo * This,
                       DWORD dwNodeId,
                        GUID *pNodeType);
        HRESULT ( STDMETHODCALLTYPE *CreateNodeInstance )(
            IKsTopologyInfo * This,
                       DWORD dwNodeId,
                       REFIID iid,
                        void **ppvObject);
        END_INTERFACE
    } IKsTopologyInfoVtbl;
    interface IKsTopologyInfo
    {
        CONST_VTBL struct IKsTopologyInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_NumCategories(This,pdwNumCategories) )
    ( (This)->lpVtbl -> get_Category(This,dwIndex,pCategory) )
    ( (This)->lpVtbl -> get_NumConnections(This,pdwNumConnections) )
    ( (This)->lpVtbl -> get_ConnectionInfo(This,dwIndex,pConnectionInfo) )
    ( (This)->lpVtbl -> get_NodeName(This,dwNodeId,pwchNodeName,dwBufSize,pdwNameLen) )
    ( (This)->lpVtbl -> get_NumNodes(This,pdwNumNodes) )
    ( (This)->lpVtbl -> get_NodeType(This,dwNodeId,pNodeType) )
    ( (This)->lpVtbl -> CreateNodeInstance(This,dwNodeId,iid,ppvObject) )
EXTERN_C const IID IID_ISelector;
    typedef struct ISelectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISelector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISelector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISelector * This);
        HRESULT ( STDMETHODCALLTYPE *get_NumSources )(
            ISelector * This,
                        DWORD *pdwNumSources);
        HRESULT ( STDMETHODCALLTYPE *get_SourceNodeId )(
            ISelector * This,
                        DWORD *pdwPinId);
        HRESULT ( STDMETHODCALLTYPE *put_SourceNodeId )(
            ISelector * This,
                       DWORD dwPinId);
        END_INTERFACE
    } ISelectorVtbl;
    interface ISelector
    {
        CONST_VTBL struct ISelectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_NumSources(This,pdwNumSources) )
    ( (This)->lpVtbl -> get_SourceNodeId(This,pdwPinId) )
    ( (This)->lpVtbl -> put_SourceNodeId(This,dwPinId) )
EXTERN_C const IID IID_ICameraControl;
    typedef struct ICameraControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICameraControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICameraControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICameraControl * This);
        HRESULT ( STDMETHODCALLTYPE *get_Exposure )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Exposure )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Exposure )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Focus )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Focus )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Focus )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Iris )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Iris )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Iris )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Zoom )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Zoom )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Zoom )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_FocalLengths )(
            ICameraControl * This,
                        long *plOcularFocalLength,
                        long *plObjectiveFocalLengthMin,
                        long *plObjectiveFocalLengthMax);
        HRESULT ( STDMETHODCALLTYPE *get_Pan )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Pan )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Pan )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Tilt )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Tilt )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Tilt )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_PanTilt )(
            ICameraControl * This,
                        long *pPanValue,
                        long *pTiltValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_PanTilt )(
            ICameraControl * This,
                       long PanValue,
                       long TiltValue,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *get_Roll )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Roll )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Roll )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_ExposureRelative )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_ExposureRelative )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_ExposureRelative )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_FocusRelative )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_FocusRelative )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_FocusRelative )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_IrisRelative )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_IrisRelative )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_IrisRelative )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_ZoomRelative )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_ZoomRelative )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_ZoomRelative )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_PanRelative )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_PanRelative )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *get_TiltRelative )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_TiltRelative )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_TiltRelative )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_PanTiltRelative )(
            ICameraControl * This,
                        long *pPanValue,
                        long *pTiltValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_PanTiltRelative )(
            ICameraControl * This,
                       long PanValue,
                       long TiltValue,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_PanRelative )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_RollRelative )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_RollRelative )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_RollRelative )(
            ICameraControl * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_ScanMode )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_ScanMode )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *get_PrivacyMode )(
            ICameraControl * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_PrivacyMode )(
            ICameraControl * This,
                       long Value,
                       long Flags);
        END_INTERFACE
    } ICameraControlVtbl;
    interface ICameraControl
    {
        CONST_VTBL struct ICameraControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Exposure(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Exposure(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Exposure(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Focus(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Focus(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Focus(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Iris(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Iris(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Iris(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Zoom(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Zoom(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Zoom(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_FocalLengths(This,plOcularFocalLength,plObjectiveFocalLengthMin,plObjectiveFocalLengthMax) )
    ( (This)->lpVtbl -> get_Pan(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Pan(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Pan(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Tilt(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Tilt(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Tilt(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_PanTilt(This,pPanValue,pTiltValue,pFlags) )
    ( (This)->lpVtbl -> put_PanTilt(This,PanValue,TiltValue,Flags) )
    ( (This)->lpVtbl -> get_Roll(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Roll(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Roll(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_ExposureRelative(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_ExposureRelative(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_ExposureRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_FocusRelative(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_FocusRelative(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_FocusRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_IrisRelative(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_IrisRelative(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_IrisRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_ZoomRelative(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_ZoomRelative(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_ZoomRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_PanRelative(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_PanRelative(This,Value,Flags) )
    ( (This)->lpVtbl -> get_TiltRelative(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_TiltRelative(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_TiltRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_PanTiltRelative(This,pPanValue,pTiltValue,pFlags) )
    ( (This)->lpVtbl -> put_PanTiltRelative(This,PanValue,TiltValue,Flags) )
    ( (This)->lpVtbl -> getRange_PanRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_RollRelative(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_RollRelative(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_RollRelative(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_ScanMode(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_ScanMode(This,Value,Flags) )
    ( (This)->lpVtbl -> get_PrivacyMode(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_PrivacyMode(This,Value,Flags) )
EXTERN_C const IID IID_IVideoProcAmp;
    typedef struct IVideoProcAmpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVideoProcAmp * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVideoProcAmp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVideoProcAmp * This);
        HRESULT ( STDMETHODCALLTYPE *get_BacklightCompensation )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_BacklightCompensation )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_BacklightCompensation )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Brightness )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Brightness )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Brightness )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_ColorEnable )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_ColorEnable )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_ColorEnable )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Contrast )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Contrast )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Contrast )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Gamma )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Gamma )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Gamma )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Saturation )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Saturation )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Saturation )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Sharpness )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Sharpness )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Sharpness )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_WhiteBalance )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_WhiteBalance )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_WhiteBalance )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Gain )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Gain )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Gain )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_Hue )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_Hue )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_Hue )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_DigitalMultiplier )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_DigitalMultiplier )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_DigitalMultiplier )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_PowerlineFrequency )(
            IVideoProcAmp * This,
                        long *pValue,
                        long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_PowerlineFrequency )(
            IVideoProcAmp * This,
                       long Value,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_PowerlineFrequency )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                        long *pCapsFlag);
        HRESULT ( STDMETHODCALLTYPE *get_WhiteBalanceComponent )(
            IVideoProcAmp * This,
                        long *pValue1,
                        long *pValue2,
                            long *pFlags);
        HRESULT ( STDMETHODCALLTYPE *put_WhiteBalanceComponent )(
            IVideoProcAmp * This,
                       long Value1,
                       long Value2,
                       long Flags);
        HRESULT ( STDMETHODCALLTYPE *getRange_WhiteBalanceComponent )(
            IVideoProcAmp * This,
                        long *pMin,
                        long *pMax,
                        long *pSteppingDelta,
                        long *pDefault,
                            long *pCapsFlag);
        END_INTERFACE
    } IVideoProcAmpVtbl;
    interface IVideoProcAmp
    {
        CONST_VTBL struct IVideoProcAmpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_BacklightCompensation(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_BacklightCompensation(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_BacklightCompensation(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Brightness(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Brightness(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Brightness(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_ColorEnable(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_ColorEnable(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_ColorEnable(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Contrast(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Contrast(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Contrast(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Gamma(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Gamma(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Gamma(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Saturation(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Saturation(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Saturation(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Sharpness(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Sharpness(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Sharpness(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_WhiteBalance(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_WhiteBalance(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_WhiteBalance(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Gain(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Gain(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Gain(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_Hue(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_Hue(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_Hue(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_DigitalMultiplier(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_DigitalMultiplier(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_DigitalMultiplier(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_PowerlineFrequency(This,pValue,pFlags) )
    ( (This)->lpVtbl -> put_PowerlineFrequency(This,Value,Flags) )
    ( (This)->lpVtbl -> getRange_PowerlineFrequency(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
    ( (This)->lpVtbl -> get_WhiteBalanceComponent(This,pValue1,pValue2,pFlags) )
    ( (This)->lpVtbl -> put_WhiteBalanceComponent(This,Value1,Value2,Flags) )
    ( (This)->lpVtbl -> getRange_WhiteBalanceComponent(This,pMin,pMax,pSteppingDelta,pDefault,pCapsFlag) )
EXTERN_C const IID IID_IKsNodeControl;
    typedef struct IKsNodeControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKsNodeControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKsNodeControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKsNodeControl * This);
        HRESULT ( STDMETHODCALLTYPE *put_NodeId )(
            IKsNodeControl * This,
                       DWORD dwNodeId);
        HRESULT ( STDMETHODCALLTYPE *put_KsControl )(
            IKsNodeControl * This,
                       PVOID pKsControl);
        END_INTERFACE
    } IKsNodeControlVtbl;
    interface IKsNodeControl
    {
        CONST_VTBL struct IKsNodeControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> put_NodeId(This,dwNodeId) )
    ( (This)->lpVtbl -> put_KsControl(This,pKsControl) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_vidcap_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_vidcap_0000_0005_v0_0_s_ifspec;
}
