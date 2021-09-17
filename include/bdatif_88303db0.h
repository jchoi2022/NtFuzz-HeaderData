#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IBDA_TIF_REGISTRATION IBDA_TIF_REGISTRATION;
typedef interface IMPEG2_TIF_CONTROL IMPEG2_TIF_CONTROL;
typedef interface ITuneRequestInfo ITuneRequestInfo;
typedef interface ITuneRequestInfoEx ITuneRequestInfoEx;
typedef interface ISIInbandEPGEvent ISIInbandEPGEvent;
typedef interface ISIInbandEPG ISIInbandEPG;
typedef interface IGuideDataEvent IGuideDataEvent;
typedef interface IGuideDataProperty IGuideDataProperty;
typedef interface IEnumGuideDataProperties IEnumGuideDataProperties;
typedef interface IEnumTuneRequests IEnumTuneRequests;
typedef interface IGuideData IGuideData;
typedef interface IGuideDataLoader IGuideDataLoader;
typedef class TIFLoad TIFLoad;
#include "unknwn.h"
#include "strmif.h"
#include "tuner.h"
#include "dvbsiparser.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IBDA_TIF_REGISTRATION;
    typedef struct IBDA_TIF_REGISTRATIONVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDA_TIF_REGISTRATION * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDA_TIF_REGISTRATION * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDA_TIF_REGISTRATION * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterTIFEx )(
            __RPC__in IBDA_TIF_REGISTRATION * This,
                       __RPC__in_opt IPin *pTIFInputPin,
                            __RPC__inout ULONG *ppvRegistrationContext,
                            __RPC__deref_inout_opt IUnknown **ppMpeg2DataControl);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterTIF )(
            __RPC__in IBDA_TIF_REGISTRATION * This,
                       ULONG pvRegistrationContext);
        END_INTERFACE
    } IBDA_TIF_REGISTRATIONVtbl;
    interface IBDA_TIF_REGISTRATION
    {
        CONST_VTBL struct IBDA_TIF_REGISTRATIONVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterTIFEx(This,pTIFInputPin,ppvRegistrationContext,ppMpeg2DataControl) )
    ( (This)->lpVtbl -> UnregisterTIF(This,pvRegistrationContext) )
EXTERN_C const IID IID_IMPEG2_TIF_CONTROL;
    typedef struct IMPEG2_TIF_CONTROLVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMPEG2_TIF_CONTROL * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMPEG2_TIF_CONTROL * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMPEG2_TIF_CONTROL * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterTIF )(
            __RPC__in IMPEG2_TIF_CONTROL * This,
                       __RPC__in_opt IUnknown *pUnkTIF,
                            __RPC__inout ULONG *ppvRegistrationContext);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterTIF )(
            __RPC__in IMPEG2_TIF_CONTROL * This,
                       ULONG pvRegistrationContext);
                           HRESULT ( STDMETHODCALLTYPE *AddPIDs )(
            __RPC__in IMPEG2_TIF_CONTROL * This,
                       ULONG ulcPIDs,
                       __RPC__in ULONG *pulPIDs);
                           HRESULT ( STDMETHODCALLTYPE *DeletePIDs )(
            __RPC__in IMPEG2_TIF_CONTROL * This,
                       ULONG ulcPIDs,
                       __RPC__in ULONG *pulPIDs);
                           HRESULT ( STDMETHODCALLTYPE *GetPIDCount )(
            __RPC__in IMPEG2_TIF_CONTROL * This,
                        __RPC__out ULONG *pulcPIDs);
                           HRESULT ( STDMETHODCALLTYPE *GetPIDs )(
            __RPC__in IMPEG2_TIF_CONTROL * This,
                        __RPC__out ULONG *pulcPIDs,
                        __RPC__out ULONG *pulPIDs);
        END_INTERFACE
    } IMPEG2_TIF_CONTROLVtbl;
    interface IMPEG2_TIF_CONTROL
    {
        CONST_VTBL struct IMPEG2_TIF_CONTROLVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterTIF(This,pUnkTIF,ppvRegistrationContext) )
    ( (This)->lpVtbl -> UnregisterTIF(This,pvRegistrationContext) )
    ( (This)->lpVtbl -> AddPIDs(This,ulcPIDs,pulPIDs) )
    ( (This)->lpVtbl -> DeletePIDs(This,ulcPIDs,pulPIDs) )
    ( (This)->lpVtbl -> GetPIDCount(This,pulcPIDs) )
    ( (This)->lpVtbl -> GetPIDs(This,pulcPIDs,pulPIDs) )
EXTERN_C const IID IID_ITuneRequestInfo;
    typedef struct ITuneRequestInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITuneRequestInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITuneRequestInfo * This);
                           HRESULT ( STDMETHODCALLTYPE *GetLocatorData )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in_opt ITuneRequest *Request);
                           HRESULT ( STDMETHODCALLTYPE *GetComponentData )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest);
                           HRESULT ( STDMETHODCALLTYPE *CreateComponentList )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetNextProgram )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetPreviousProgram )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetNextLocator )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetPreviousLocator )(
            __RPC__in ITuneRequestInfo * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
        END_INTERFACE
    } ITuneRequestInfoVtbl;
    interface ITuneRequestInfo
    {
        CONST_VTBL struct ITuneRequestInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLocatorData(This,Request) )
    ( (This)->lpVtbl -> GetComponentData(This,CurrentRequest) )
    ( (This)->lpVtbl -> CreateComponentList(This,CurrentRequest) )
    ( (This)->lpVtbl -> GetNextProgram(This,CurrentRequest,TuneRequest) )
    ( (This)->lpVtbl -> GetPreviousProgram(This,CurrentRequest,TuneRequest) )
    ( (This)->lpVtbl -> GetNextLocator(This,CurrentRequest,TuneRequest) )
    ( (This)->lpVtbl -> GetPreviousLocator(This,CurrentRequest,TuneRequest) )
EXTERN_C const IID IID_ITuneRequestInfoEx;
    typedef struct ITuneRequestInfoExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITuneRequestInfoEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITuneRequestInfoEx * This);
                           HRESULT ( STDMETHODCALLTYPE *GetLocatorData )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *Request);
                           HRESULT ( STDMETHODCALLTYPE *GetComponentData )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest);
                           HRESULT ( STDMETHODCALLTYPE *CreateComponentList )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetNextProgram )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetPreviousProgram )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetNextLocator )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *GetPreviousLocator )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *CreateComponentListEx )(
            __RPC__in ITuneRequestInfoEx * This,
                       __RPC__in_opt ITuneRequest *CurrentRequest,
                        __RPC__deref_out_opt IUnknown **ppCurPMT);
        END_INTERFACE
    } ITuneRequestInfoExVtbl;
    interface ITuneRequestInfoEx
    {
        CONST_VTBL struct ITuneRequestInfoExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLocatorData(This,Request) )
    ( (This)->lpVtbl -> GetComponentData(This,CurrentRequest) )
    ( (This)->lpVtbl -> CreateComponentList(This,CurrentRequest) )
    ( (This)->lpVtbl -> GetNextProgram(This,CurrentRequest,TuneRequest) )
    ( (This)->lpVtbl -> GetPreviousProgram(This,CurrentRequest,TuneRequest) )
    ( (This)->lpVtbl -> GetNextLocator(This,CurrentRequest,TuneRequest) )
    ( (This)->lpVtbl -> GetPreviousLocator(This,CurrentRequest,TuneRequest) )
    ( (This)->lpVtbl -> CreateComponentListEx(This,CurrentRequest,ppCurPMT) )
EXTERN_C const IID IID_ISIInbandEPGEvent;
    typedef struct ISIInbandEPGEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISIInbandEPGEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISIInbandEPGEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISIInbandEPGEvent * This);
        HRESULT ( STDMETHODCALLTYPE *SIObjectEvent )(
            __RPC__in ISIInbandEPGEvent * This,
                       __RPC__in_opt IDVB_EIT2 *pIDVB_EIT,
                       DWORD dwTable_ID,
                       DWORD dwService_ID);
        END_INTERFACE
    } ISIInbandEPGEventVtbl;
    interface ISIInbandEPGEvent
    {
        CONST_VTBL struct ISIInbandEPGEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SIObjectEvent(This,pIDVB_EIT,dwTable_ID,dwService_ID) )
EXTERN_C const IID IID_ISIInbandEPG;
    typedef struct ISIInbandEPGVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISIInbandEPG * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISIInbandEPG * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISIInbandEPG * This);
        HRESULT ( STDMETHODCALLTYPE *StartSIEPGScan )(
            __RPC__in ISIInbandEPG * This);
        HRESULT ( STDMETHODCALLTYPE *StopSIEPGScan )(
            __RPC__in ISIInbandEPG * This);
        HRESULT ( STDMETHODCALLTYPE *IsSIEPGScanRunning )(
            __RPC__in ISIInbandEPG * This,
                                __RPC__out BOOL *bRunning);
        END_INTERFACE
    } ISIInbandEPGVtbl;
    interface ISIInbandEPG
    {
        CONST_VTBL struct ISIInbandEPGVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartSIEPGScan(This) )
    ( (This)->lpVtbl -> StopSIEPGScan(This) )
    ( (This)->lpVtbl -> IsSIEPGScanRunning(This,bRunning) )
EXTERN_C const IID IID_IGuideDataEvent;
    typedef struct IGuideDataEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGuideDataEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGuideDataEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGuideDataEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GuideDataAcquired )(
            __RPC__in IGuideDataEvent * This);
        HRESULT ( STDMETHODCALLTYPE *ProgramChanged )(
            __RPC__in IGuideDataEvent * This,
                       VARIANT varProgramDescriptionID);
        HRESULT ( STDMETHODCALLTYPE *ServiceChanged )(
            __RPC__in IGuideDataEvent * This,
                       VARIANT varServiceDescriptionID);
        HRESULT ( STDMETHODCALLTYPE *ScheduleEntryChanged )(
            __RPC__in IGuideDataEvent * This,
                       VARIANT varScheduleEntryDescriptionID);
        HRESULT ( STDMETHODCALLTYPE *ProgramDeleted )(
            __RPC__in IGuideDataEvent * This,
                       VARIANT varProgramDescriptionID);
        HRESULT ( STDMETHODCALLTYPE *ServiceDeleted )(
            __RPC__in IGuideDataEvent * This,
                       VARIANT varServiceDescriptionID);
        HRESULT ( STDMETHODCALLTYPE *ScheduleDeleted )(
            __RPC__in IGuideDataEvent * This,
                       VARIANT varScheduleEntryDescriptionID);
        END_INTERFACE
    } IGuideDataEventVtbl;
    interface IGuideDataEvent
    {
        CONST_VTBL struct IGuideDataEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GuideDataAcquired(This) )
    ( (This)->lpVtbl -> ProgramChanged(This,varProgramDescriptionID) )
    ( (This)->lpVtbl -> ServiceChanged(This,varServiceDescriptionID) )
    ( (This)->lpVtbl -> ScheduleEntryChanged(This,varScheduleEntryDescriptionID) )
    ( (This)->lpVtbl -> ProgramDeleted(This,varProgramDescriptionID) )
    ( (This)->lpVtbl -> ServiceDeleted(This,varServiceDescriptionID) )
    ( (This)->lpVtbl -> ScheduleDeleted(This,varScheduleEntryDescriptionID) )
EXTERN_C const IID IID_IGuideDataProperty;
    typedef struct IGuideDataPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGuideDataProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGuideDataProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGuideDataProperty * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IGuideDataProperty * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_Language )(
            __RPC__in IGuideDataProperty * This,
                        __RPC__out long *idLang);
                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IGuideDataProperty * This,
                        __RPC__out VARIANT *pvar);
        END_INTERFACE
    } IGuideDataPropertyVtbl;
    interface IGuideDataProperty
    {
        CONST_VTBL struct IGuideDataPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Name(This,pbstrName) )
    ( (This)->lpVtbl -> get_Language(This,idLang) )
    ( (This)->lpVtbl -> get_Value(This,pvar) )
EXTERN_C const IID IID_IEnumGuideDataProperties;
    typedef struct IEnumGuideDataPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumGuideDataProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumGuideDataProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumGuideDataProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumGuideDataProperties * This,
                       unsigned long celt,
                        __RPC__deref_out_opt IGuideDataProperty **ppprop,
                        __RPC__out unsigned long *pcelt);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumGuideDataProperties * This,
                       unsigned long celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumGuideDataProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumGuideDataProperties * This,
                        __RPC__deref_out_opt IEnumGuideDataProperties **ppenum);
        END_INTERFACE
    } IEnumGuideDataPropertiesVtbl;
    interface IEnumGuideDataProperties
    {
        CONST_VTBL struct IEnumGuideDataPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppprop,pcelt) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IEnumTuneRequests;
    typedef struct IEnumTuneRequestsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTuneRequests * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTuneRequests * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTuneRequests * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTuneRequests * This,
                       unsigned long celt,
                        __RPC__deref_out_opt ITuneRequest **ppprop,
                        __RPC__out unsigned long *pcelt);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTuneRequests * This,
                       unsigned long celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTuneRequests * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTuneRequests * This,
                        __RPC__deref_out_opt IEnumTuneRequests **ppenum);
        END_INTERFACE
    } IEnumTuneRequestsVtbl;
    interface IEnumTuneRequests
    {
        CONST_VTBL struct IEnumTuneRequestsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,ppprop,pcelt) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IGuideData;
    typedef struct IGuideDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGuideData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGuideData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGuideData * This);
                           HRESULT ( STDMETHODCALLTYPE *GetServices )(
            __RPC__in IGuideData * This,
                                __RPC__deref_out_opt IEnumTuneRequests **ppEnumTuneRequests);
                           HRESULT ( STDMETHODCALLTYPE *GetServiceProperties )(
            __RPC__in IGuideData * This,
                       __RPC__in_opt ITuneRequest *pTuneRequest,
                                __RPC__deref_out_opt IEnumGuideDataProperties **ppEnumProperties);
                           HRESULT ( STDMETHODCALLTYPE *GetGuideProgramIDs )(
            __RPC__in IGuideData * This,
                                __RPC__deref_out_opt IEnumVARIANT **pEnumPrograms);
                           HRESULT ( STDMETHODCALLTYPE *GetProgramProperties )(
            __RPC__in IGuideData * This,
                       VARIANT varProgramDescriptionID,
                                __RPC__deref_out_opt IEnumGuideDataProperties **ppEnumProperties);
                           HRESULT ( STDMETHODCALLTYPE *GetScheduleEntryIDs )(
            __RPC__in IGuideData * This,
                                __RPC__deref_out_opt IEnumVARIANT **pEnumScheduleEntries);
                           HRESULT ( STDMETHODCALLTYPE *GetScheduleEntryProperties )(
            __RPC__in IGuideData * This,
                       VARIANT varScheduleEntryDescriptionID,
                                __RPC__deref_out_opt IEnumGuideDataProperties **ppEnumProperties);
        END_INTERFACE
    } IGuideDataVtbl;
    interface IGuideData
    {
        CONST_VTBL struct IGuideDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetServices(This,ppEnumTuneRequests) )
    ( (This)->lpVtbl -> GetServiceProperties(This,pTuneRequest,ppEnumProperties) )
    ( (This)->lpVtbl -> GetGuideProgramIDs(This,pEnumPrograms) )
    ( (This)->lpVtbl -> GetProgramProperties(This,varProgramDescriptionID,ppEnumProperties) )
    ( (This)->lpVtbl -> GetScheduleEntryIDs(This,pEnumScheduleEntries) )
    ( (This)->lpVtbl -> GetScheduleEntryProperties(This,varScheduleEntryDescriptionID,ppEnumProperties) )
EXTERN_C const IID IID_IGuideDataLoader;
    typedef struct IGuideDataLoaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGuideDataLoader * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGuideDataLoader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGuideDataLoader * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            __RPC__in IGuideDataLoader * This,
                       __RPC__in_opt IGuideData *pGuideStore);
        HRESULT ( STDMETHODCALLTYPE *Terminate )(
            __RPC__in IGuideDataLoader * This);
        END_INTERFACE
    } IGuideDataLoaderVtbl;
    interface IGuideDataLoader
    {
        CONST_VTBL struct IGuideDataLoaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pGuideStore) )
    ( (This)->lpVtbl -> Terminate(This) )
EXTERN_C const IID LIBID_PSISLOADLib;
EXTERN_C const CLSID CLSID_TIFLoad;
class DECLSPEC_UUID("14EB8748-1753-4393-95AE-4F7E7A87AAD6")
TIFLoad;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_bdatif_0000_0013_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
