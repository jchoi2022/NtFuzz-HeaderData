#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITuningSpaces ITuningSpaces;
typedef interface ITuningSpaceContainer ITuningSpaceContainer;
typedef interface ITuningSpace ITuningSpace;
typedef interface IEnumTuningSpaces IEnumTuningSpaces;
typedef interface IDVBTuningSpace IDVBTuningSpace;
typedef interface IDVBTuningSpace2 IDVBTuningSpace2;
typedef interface IDVBSTuningSpace IDVBSTuningSpace;
typedef interface IAuxInTuningSpace IAuxInTuningSpace;
typedef interface IAuxInTuningSpace2 IAuxInTuningSpace2;
typedef interface IAnalogTVTuningSpace IAnalogTVTuningSpace;
typedef interface IATSCTuningSpace IATSCTuningSpace;
typedef interface IDigitalCableTuningSpace IDigitalCableTuningSpace;
typedef interface IAnalogRadioTuningSpace IAnalogRadioTuningSpace;
typedef interface IAnalogRadioTuningSpace2 IAnalogRadioTuningSpace2;
typedef interface ITuneRequest ITuneRequest;
typedef interface IChannelIDTuneRequest IChannelIDTuneRequest;
typedef interface IChannelTuneRequest IChannelTuneRequest;
typedef interface IATSCChannelTuneRequest IATSCChannelTuneRequest;
typedef interface IDigitalCableTuneRequest IDigitalCableTuneRequest;
typedef interface IDVBTuneRequest IDVBTuneRequest;
typedef interface IMPEG2TuneRequest IMPEG2TuneRequest;
typedef interface IMPEG2TuneRequestFactory IMPEG2TuneRequestFactory;
typedef interface IMPEG2TuneRequestSupport IMPEG2TuneRequestSupport;
typedef interface ITunerCap ITunerCap;
typedef interface ITunerCapEx ITunerCapEx;
typedef interface ITuner ITuner;
typedef interface IScanningTuner IScanningTuner;
typedef interface IScanningTunerEx IScanningTunerEx;
typedef interface IComponentType IComponentType;
typedef interface ILanguageComponentType ILanguageComponentType;
typedef interface IMPEG2ComponentType IMPEG2ComponentType;
typedef interface IATSCComponentType IATSCComponentType;
typedef interface IEnumComponentTypes IEnumComponentTypes;
typedef interface IComponentTypes IComponentTypes;
typedef interface IComponent IComponent;
typedef interface IAnalogAudioComponentType IAnalogAudioComponentType;
typedef interface IMPEG2Component IMPEG2Component;
typedef interface IEnumComponents IEnumComponents;
typedef interface IComponents IComponents;
typedef interface IComponentsOld IComponentsOld;
typedef interface ILocator ILocator;
typedef interface IAnalogLocator IAnalogLocator;
typedef interface IDigitalLocator IDigitalLocator;
typedef interface IATSCLocator IATSCLocator;
typedef interface IATSCLocator2 IATSCLocator2;
typedef interface IDigitalCableLocator IDigitalCableLocator;
typedef interface IDVBTLocator IDVBTLocator;
typedef interface IDVBTLocator2 IDVBTLocator2;
typedef interface IDVBSLocator IDVBSLocator;
typedef interface IDVBSLocator2 IDVBSLocator2;
typedef interface IDVBCLocator IDVBCLocator;
typedef interface IISDBSLocator IISDBSLocator;
typedef interface IESOpenMmiEvent IESOpenMmiEvent;
typedef interface IESCloseMmiEvent IESCloseMmiEvent;
typedef interface IESValueUpdatedEvent IESValueUpdatedEvent;
typedef interface IESRequestTunerEvent IESRequestTunerEvent;
typedef interface IESIsdbCasResponseEvent IESIsdbCasResponseEvent;
typedef interface IGpnvsCommonBase IGpnvsCommonBase;
typedef interface IESEventFactory IESEventFactory;
typedef interface IESLicenseRenewalResultEvent IESLicenseRenewalResultEvent;
typedef interface IESFileExpiryDateEvent IESFileExpiryDateEvent;
typedef interface IESEventService IESEventService;
typedef interface IESEventServiceConfiguration IESEventServiceConfiguration;
typedef interface IRegisterTuner IRegisterTuner;
typedef interface IBDAComparable IBDAComparable;
typedef interface IPersistTuneXml IPersistTuneXml;
typedef interface IPersistTuneXmlUtility IPersistTuneXmlUtility;
typedef interface IPersistTuneXmlUtility2 IPersistTuneXmlUtility2;
typedef interface IBDACreateTuneRequestEx IBDACreateTuneRequestEx;
typedef class SystemTuningSpaces SystemTuningSpaces;
typedef class TuningSpace TuningSpace;
typedef class ChannelIDTuningSpace ChannelIDTuningSpace;
typedef class ATSCTuningSpace ATSCTuningSpace;
typedef class DigitalCableTuningSpace DigitalCableTuningSpace;
typedef class AnalogRadioTuningSpace AnalogRadioTuningSpace;
typedef class AuxInTuningSpace AuxInTuningSpace;
typedef class AnalogTVTuningSpace AnalogTVTuningSpace;
typedef class DVBTuningSpace DVBTuningSpace;
typedef class DVBSTuningSpace DVBSTuningSpace;
typedef class ComponentTypes ComponentTypes;
typedef class ComponentType ComponentType;
typedef class LanguageComponentType LanguageComponentType;
typedef class MPEG2ComponentType MPEG2ComponentType;
typedef class ATSCComponentType ATSCComponentType;
typedef class Components Components;
typedef class Component Component;
typedef class MPEG2Component MPEG2Component;
typedef class AnalogAudioComponentType AnalogAudioComponentType;
typedef class TuneRequest TuneRequest;
typedef class ChannelIDTuneRequest ChannelIDTuneRequest;
typedef class ChannelTuneRequest ChannelTuneRequest;
typedef class ATSCChannelTuneRequest ATSCChannelTuneRequest;
typedef class DigitalCableTuneRequest DigitalCableTuneRequest;
typedef class MPEG2TuneRequest MPEG2TuneRequest;
typedef class MPEG2TuneRequestFactory MPEG2TuneRequestFactory;
typedef class Locator Locator;
typedef class DigitalLocator DigitalLocator;
typedef class AnalogLocator AnalogLocator;
typedef class ATSCLocator ATSCLocator;
typedef class DigitalCableLocator DigitalCableLocator;
typedef class DVBTLocator DVBTLocator;
typedef class DVBTLocator2 DVBTLocator2;
typedef class DVBSLocator DVBSLocator;
typedef class DVBCLocator DVBCLocator;
typedef class ISDBSLocator ISDBSLocator;
typedef class DVBTuneRequest DVBTuneRequest;
typedef class CreatePropBagOnRegKey CreatePropBagOnRegKey;
typedef class BroadcastEventService BroadcastEventService;
typedef class TunerMarshaler TunerMarshaler;
typedef class PersistTuneXmlUtility PersistTuneXmlUtility;
typedef class ESEventService ESEventService;
typedef class ESEventFactory ESEventFactory;
#include "oaidl.h"
#include "comcat.h"
#include "strmif.h"
#include "bdaiface.h"
#include "regbag.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum __MIDL___MIDL_itf_tuner_0000_0000_0001
    {
        DISPID_TUNER_TS_UNIQUENAME = 1,
        DISPID_TUNER_TS_FRIENDLYNAME = 2,
        DISPID_TUNER_TS_CLSID = 3,
        DISPID_TUNER_TS_NETWORKTYPE = 4,
        DISPID_TUNER_TS__NETWORKTYPE = 5,
        DISPID_TUNER_TS_CREATETUNEREQUEST = 6,
        DISPID_TUNER_TS_ENUMCATEGORYGUIDS = 7,
        DISPID_TUNER_TS_ENUMDEVICEMONIKERS = 8,
        DISPID_TUNER_TS_DEFAULTPREFERREDCOMPONENTTYPES = 9,
        DISPID_TUNER_TS_FREQMAP = 10,
        DISPID_TUNER_TS_DEFLOCATOR = 11,
        DISPID_TUNER_TS_CLONE = 12,
        DISPID_TUNER_TR_TUNINGSPACE = 1,
        DISPID_TUNER_TR_COMPONENTS = 2,
        DISPID_TUNER_TR_CLONE = 3,
        DISPID_TUNER_TR_LOCATOR = 4,
        DISPID_TUNER_CT_CATEGORY = 1,
        DISPID_TUNER_CT_MEDIAMAJORTYPE = 2,
        DISPID_TUNER_CT__MEDIAMAJORTYPE = 3,
        DISPID_TUNER_CT_MEDIASUBTYPE = 4,
        DISPID_TUNER_CT__MEDIASUBTYPE = 5,
        DISPID_TUNER_CT_MEDIAFORMATTYPE = 6,
        DISPID_TUNER_CT__MEDIAFORMATTYPE = 7,
        DISPID_TUNER_CT_MEDIATYPE = 8,
        DISPID_TUNER_CT_CLONE = 9,
        DISPID_TUNER_LCT_LANGID = 100,
        DISPID_TUNER_MP2CT_TYPE = 200,
        DISPID_TUNER_ATSCCT_FLAGS = 300,
        DISPID_TUNER_L_CARRFREQ = 1,
        DISPID_TUNER_L_INNERFECMETHOD = 2,
        DISPID_TUNER_L_INNERFECRATE = 3,
        DISPID_TUNER_L_OUTERFECMETHOD = 4,
        DISPID_TUNER_L_OUTERFECRATE = 5,
        DISPID_TUNER_L_MOD = 6,
        DISPID_TUNER_L_SYMRATE = 7,
        DISPID_TUNER_L_CLONE = 8,
        DISPID_TUNER_L_ATSC_PHYS_CHANNEL = 201,
        DISPID_TUNER_L_ATSC_TSID = 202,
        DISPID_TUNER_L_ATSC_MP2_PROGNO = 203,
        DISPID_TUNER_L_DVBT_BANDWIDTH = 301,
        DISPID_TUNER_L_DVBT_LPINNERFECMETHOD = 302,
        DISPID_TUNER_L_DVBT_LPINNERFECRATE = 303,
        DISPID_TUNER_L_DVBT_GUARDINTERVAL = 304,
        DISPID_TUNER_L_DVBT_HALPHA = 305,
        DISPID_TUNER_L_DVBT_TRANSMISSIONMODE = 306,
        DISPID_TUNER_L_DVBT_INUSE = 307,
        DISPID_TUNER_L_DVBT2_PHYSICALLAYERPIPEID = 351,
        DISPID_TUNER_L_DVBS_POLARISATION = 401,
        DISPID_TUNER_L_DVBS_WEST = 402,
        DISPID_TUNER_L_DVBS_ORBITAL = 403,
        DISPID_TUNER_L_DVBS_AZIMUTH = 404,
        DISPID_TUNER_L_DVBS_ELEVATION = 405,
        DISPID_TUNER_L_DVBS2_DISEQ_LNB_SOURCE = 406,
        DISPID_TUNER_TS_DVBS2_LOW_OSC_FREQ_OVERRIDE = 407,
        DISPID_TUNER_TS_DVBS2_HI_OSC_FREQ_OVERRIDE = 408,
        DISPID_TUNER_TS_DVBS2_LNB_SWITCH_FREQ_OVERRIDE = 409,
        DISPID_TUNER_TS_DVBS2_SPECTRAL_INVERSION_OVERRIDE = 410,
        DISPID_TUNER_L_DVBS2_ROLLOFF = 411,
        DISPID_TUNER_L_DVBS2_PILOT = 412,
        DISPID_TUNER_L_ANALOG_STANDARD = 601,
        DISPID_TUNER_L_DTV_O_MAJOR_CHANNEL = 701,
        DISPID_TUNER_C_TYPE = 1,
        DISPID_TUNER_C_STATUS = 2,
        DISPID_TUNER_C_LANGID = 3,
        DISPID_TUNER_C_DESCRIPTION = 4,
        DISPID_TUNER_C_CLONE = 5,
        DISPID_TUNER_C_MP2_PID = 101,
        DISPID_TUNER_C_MP2_PCRPID = 102,
        DISPID_TUNER_C_MP2_PROGNO = 103,
        DISPID_TUNER_C_ANALOG_AUDIO = 201,
        DISPID_TUNER_TS_DVB_SYSTEMTYPE = 101,
        DISPID_TUNER_TS_DVB2_NETWORK_ID = 102,
        DISPID_TUNER_TS_DVBS_LOW_OSC_FREQ = 1001,
        DISPID_TUNER_TS_DVBS_HI_OSC_FREQ = 1002,
        DISPID_TUNER_TS_DVBS_LNB_SWITCH_FREQ = 1003,
        DISPID_TUNER_TS_DVBS_INPUT_RANGE = 1004,
        DISPID_TUNER_TS_DVBS_SPECTRAL_INVERSION = 1005,
        DISPID_TUNER_TS_AR_MINFREQUENCY = 101,
        DISPID_TUNER_TS_AR_MAXFREQUENCY = 102,
        DISPID_TUNER_TS_AR_STEP = 103,
        DISPID_TUNER_TS_AR_COUNTRYCODE = 104,
        DISPID_TUNER_TS_AUX_COUNTRYCODE = 101,
        DISPID_TUNER_TS_ATV_MINCHANNEL = 101,
        DISPID_TUNER_TS_ATV_MAXCHANNEL = 102,
        DISPID_TUNER_TS_ATV_INPUTTYPE = 103,
        DISPID_TUNER_TS_ATV_COUNTRYCODE = 104,
        DISPID_TUNER_TS_ATSC_MINMINORCHANNEL = 201,
        DISPID_TUNER_TS_ATSC_MAXMINORCHANNEL = 202,
        DISPID_TUNER_TS_ATSC_MINPHYSCHANNEL = 203,
        DISPID_TUNER_TS_ATSC_MAXPHYSCHANNEL = 204,
        DISPID_TUNER_TS_DC_MINMAJORCHANNEL = 301,
        DISPID_TUNER_TS_DC_MAXMAJORCHANNEL = 302,
        DISPID_TUNER_TS_DC_MINSOURCEID = 303,
        DISPID_TUNER_TS_DC_MAXSOURCEID = 304,
        DISPID_CHTUNER_ATVAC_CHANNEL = 101,
        DISPID_CHTUNER_ATVDC_SYSTEM = 101,
        DISPID_CHTUNER_ATVDC_CONTENT = 102,
        DISPID_CHTUNER_CIDTR_CHANNELID = 101,
        DISPID_CHTUNER_CTR_CHANNEL = 101,
        DISPID_CHTUNER_ACTR_MINOR_CHANNEL = 201,
        DISPID_CHTUNER_DCTR_MAJOR_CHANNEL = 301,
        DISPID_CHTUNER_DCTR_SRCID = 302,
        DISPID_DVBTUNER_DVBC_ATTRIBUTESVALID = 101,
        DISPID_DVBTUNER_DVBC_PID = 102,
        DISPID_DVBTUNER_DVBC_TAG = 103,
        DISPID_DVBTUNER_DVBC_COMPONENTTYPE = 104,
        DISPID_DVBTUNER_ONID = 101,
        DISPID_DVBTUNER_TSID = 102,
        DISPID_DVBTUNER_SID = 103,
        DISPID_MP2TUNER_TSID = 101,
        DISPID_MP2TUNER_PROGNO = 102,
        DISPID_MP2TUNERFACTORY_CREATETUNEREQUEST = 1
    } ;
extern RPC_IF_HANDLE __MIDL_itf_tuner_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tuner_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITuningSpaces;
    typedef struct ITuningSpacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITuningSpaces * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITuningSpaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITuningSpaces * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITuningSpaces * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITuningSpaces * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITuningSpaces * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITuningSpaces * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ITuningSpaces * This,
                                __RPC__out long *Count);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ITuningSpaces * This,
                                __RPC__deref_out_opt IEnumVARIANT **NewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ITuningSpaces * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                                        HRESULT ( STDMETHODCALLTYPE *get_EnumTuningSpaces )(
            __RPC__in ITuningSpaces * This,
                                __RPC__deref_out_opt IEnumTuningSpaces **NewEnum);
        END_INTERFACE
    } ITuningSpacesVtbl;
    interface ITuningSpaces
    {
        CONST_VTBL struct ITuningSpacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,TuningSpace) )
    ( (This)->lpVtbl -> get_EnumTuningSpaces(This,NewEnum) )
EXTERN_C const IID IID_ITuningSpaceContainer;
    typedef struct ITuningSpaceContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITuningSpaceContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITuningSpaceContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITuningSpaceContainer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITuningSpaceContainer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITuningSpaceContainer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITuningSpaceContainer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITuningSpaceContainer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ITuningSpaceContainer * This,
                                __RPC__out long *Count);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ITuningSpaceContainer * This,
                                __RPC__deref_out_opt IEnumVARIANT **NewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ITuningSpaceContainer * This,
                       VARIANT varIndex,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *put_Item )(
            __RPC__in ITuningSpaceContainer * This,
                       VARIANT varIndex,
                       __RPC__in_opt ITuningSpace *TuningSpace);
                           HRESULT ( STDMETHODCALLTYPE *TuningSpacesForCLSID )(
            __RPC__in ITuningSpaceContainer * This,
                       __RPC__in BSTR SpaceCLSID,
                                __RPC__deref_out_opt ITuningSpaces **NewColl);
                                               HRESULT ( STDMETHODCALLTYPE *_TuningSpacesForCLSID )(
            __RPC__in ITuningSpaceContainer * This,
                       __RPC__in REFCLSID SpaceCLSID,
                                __RPC__deref_out_opt ITuningSpaces **NewColl);
                           HRESULT ( STDMETHODCALLTYPE *TuningSpacesForName )(
            __RPC__in ITuningSpaceContainer * This,
                       __RPC__in BSTR Name,
                                __RPC__deref_out_opt ITuningSpaces **NewColl);
                           HRESULT ( STDMETHODCALLTYPE *FindID )(
            __RPC__in ITuningSpaceContainer * This,
                       __RPC__in_opt ITuningSpace *TuningSpace,
                                __RPC__out long *ID);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ITuningSpaceContainer * This,
                       __RPC__in_opt ITuningSpace *TuningSpace,
                                __RPC__out VARIANT *NewIndex);
                                                        HRESULT ( STDMETHODCALLTYPE *get_EnumTuningSpaces )(
            __RPC__in ITuningSpaceContainer * This,
                                __RPC__deref_out_opt IEnumTuningSpaces **ppEnum);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ITuningSpaceContainer * This,
                       VARIANT Index);
                                    HRESULT ( STDMETHODCALLTYPE *get_MaxCount )(
            __RPC__in ITuningSpaceContainer * This,
                                __RPC__out long *MaxCount);
                                                        HRESULT ( STDMETHODCALLTYPE *put_MaxCount )(
            __RPC__in ITuningSpaceContainer * This,
                       long MaxCount);
        END_INTERFACE
    } ITuningSpaceContainerVtbl;
    interface ITuningSpaceContainer
    {
        CONST_VTBL struct ITuningSpaceContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,NewEnum) )
    ( (This)->lpVtbl -> get_Item(This,varIndex,TuningSpace) )
    ( (This)->lpVtbl -> put_Item(This,varIndex,TuningSpace) )
    ( (This)->lpVtbl -> TuningSpacesForCLSID(This,SpaceCLSID,NewColl) )
    ( (This)->lpVtbl -> _TuningSpacesForCLSID(This,SpaceCLSID,NewColl) )
    ( (This)->lpVtbl -> TuningSpacesForName(This,Name,NewColl) )
    ( (This)->lpVtbl -> FindID(This,TuningSpace,ID) )
    ( (This)->lpVtbl -> Add(This,TuningSpace,NewIndex) )
    ( (This)->lpVtbl -> get_EnumTuningSpaces(This,ppEnum) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> get_MaxCount(This,MaxCount) )
    ( (This)->lpVtbl -> put_MaxCount(This,MaxCount) )
EXTERN_C const IID IID_ITuningSpace;
    typedef struct ITuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in ITuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in ITuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in ITuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in ITuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in ITuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in ITuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in ITuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in ITuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
        END_INTERFACE
    } ITuningSpaceVtbl;
    interface ITuningSpace
    {
        CONST_VTBL struct ITuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
EXTERN_C const IID IID_IEnumTuningSpaces;
    typedef struct IEnumTuningSpacesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTuningSpaces * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTuningSpaces * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTuningSpaces * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTuningSpaces * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) ITuningSpace **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTuningSpaces * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTuningSpaces * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTuningSpaces * This,
                        __RPC__deref_out_opt IEnumTuningSpaces **ppEnum);
        END_INTERFACE
    } IEnumTuningSpacesVtbl;
    interface IEnumTuningSpaces
    {
        CONST_VTBL struct IEnumTuningSpacesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IDVBTuningSpace;
    typedef struct IDVBTuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBTuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBTuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBTuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBTuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBTuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IDVBTuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IDVBTuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_SystemType )(
            __RPC__in IDVBTuningSpace * This,
                                __RPC__out DVBSystemType *SysType);
                                        HRESULT ( STDMETHODCALLTYPE *put_SystemType )(
            __RPC__in IDVBTuningSpace * This,
                       DVBSystemType SysType);
        END_INTERFACE
    } IDVBTuningSpaceVtbl;
    interface IDVBTuningSpace
    {
        CONST_VTBL struct IDVBTuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_SystemType(This,SysType) )
    ( (This)->lpVtbl -> put_SystemType(This,SysType) )
EXTERN_C const IID IID_IDVBTuningSpace2;
    typedef struct IDVBTuningSpace2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBTuningSpace2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBTuningSpace2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBTuningSpace2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBTuningSpace2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBTuningSpace2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IDVBTuningSpace2 * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IDVBTuningSpace2 * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_SystemType )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__out DVBSystemType *SysType);
                                        HRESULT ( STDMETHODCALLTYPE *put_SystemType )(
            __RPC__in IDVBTuningSpace2 * This,
                       DVBSystemType SysType);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkID )(
            __RPC__in IDVBTuningSpace2 * This,
                                __RPC__out long *NetworkID);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkID )(
            __RPC__in IDVBTuningSpace2 * This,
                       long NetworkID);
        END_INTERFACE
    } IDVBTuningSpace2Vtbl;
    interface IDVBTuningSpace2
    {
        CONST_VTBL struct IDVBTuningSpace2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_SystemType(This,SysType) )
    ( (This)->lpVtbl -> put_SystemType(This,SysType) )
    ( (This)->lpVtbl -> get_NetworkID(This,NetworkID) )
    ( (This)->lpVtbl -> put_NetworkID(This,NetworkID) )
EXTERN_C const IID IID_IDVBSTuningSpace;
    typedef struct IDVBSTuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBSTuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBSTuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBSTuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBSTuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBSTuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IDVBSTuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_SystemType )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__out DVBSystemType *SysType);
                                        HRESULT ( STDMETHODCALLTYPE *put_SystemType )(
            __RPC__in IDVBSTuningSpace * This,
                       DVBSystemType SysType);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkID )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__out long *NetworkID);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkID )(
            __RPC__in IDVBSTuningSpace * This,
                       long NetworkID);
                                        HRESULT ( STDMETHODCALLTYPE *get_LowOscillator )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__out long *LowOscillator);
                                        HRESULT ( STDMETHODCALLTYPE *put_LowOscillator )(
            __RPC__in IDVBSTuningSpace * This,
                       long LowOscillator);
                                        HRESULT ( STDMETHODCALLTYPE *get_HighOscillator )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__out long *HighOscillator);
                                        HRESULT ( STDMETHODCALLTYPE *put_HighOscillator )(
            __RPC__in IDVBSTuningSpace * This,
                       long HighOscillator);
                                        HRESULT ( STDMETHODCALLTYPE *get_LNBSwitch )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__out long *LNBSwitch);
                                        HRESULT ( STDMETHODCALLTYPE *put_LNBSwitch )(
            __RPC__in IDVBSTuningSpace * This,
                       long LNBSwitch);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputRange )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__deref_out_opt BSTR *InputRange);
                                        HRESULT ( STDMETHODCALLTYPE *put_InputRange )(
            __RPC__in IDVBSTuningSpace * This,
                       __RPC__in BSTR InputRange);
                                        HRESULT ( STDMETHODCALLTYPE *get_SpectralInversion )(
            __RPC__in IDVBSTuningSpace * This,
                                __RPC__out SpectralInversion *SpectralInversionVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SpectralInversion )(
            __RPC__in IDVBSTuningSpace * This,
                       SpectralInversion SpectralInversionVal);
        END_INTERFACE
    } IDVBSTuningSpaceVtbl;
    interface IDVBSTuningSpace
    {
        CONST_VTBL struct IDVBSTuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_SystemType(This,SysType) )
    ( (This)->lpVtbl -> put_SystemType(This,SysType) )
    ( (This)->lpVtbl -> get_NetworkID(This,NetworkID) )
    ( (This)->lpVtbl -> put_NetworkID(This,NetworkID) )
    ( (This)->lpVtbl -> get_LowOscillator(This,LowOscillator) )
    ( (This)->lpVtbl -> put_LowOscillator(This,LowOscillator) )
    ( (This)->lpVtbl -> get_HighOscillator(This,HighOscillator) )
    ( (This)->lpVtbl -> put_HighOscillator(This,HighOscillator) )
    ( (This)->lpVtbl -> get_LNBSwitch(This,LNBSwitch) )
    ( (This)->lpVtbl -> put_LNBSwitch(This,LNBSwitch) )
    ( (This)->lpVtbl -> get_InputRange(This,InputRange) )
    ( (This)->lpVtbl -> put_InputRange(This,InputRange) )
    ( (This)->lpVtbl -> get_SpectralInversion(This,SpectralInversionVal) )
    ( (This)->lpVtbl -> put_SpectralInversion(This,SpectralInversionVal) )
EXTERN_C const IID IID_IAuxInTuningSpace;
    typedef struct IAuxInTuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAuxInTuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAuxInTuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAuxInTuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAuxInTuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAuxInTuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IAuxInTuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IAuxInTuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAuxInTuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
        END_INTERFACE
    } IAuxInTuningSpaceVtbl;
    interface IAuxInTuningSpace
    {
        CONST_VTBL struct IAuxInTuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
EXTERN_C const IID IID_IAuxInTuningSpace2;
    typedef struct IAuxInTuningSpace2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAuxInTuningSpace2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAuxInTuningSpace2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAuxInTuningSpace2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAuxInTuningSpace2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAuxInTuningSpace2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IAuxInTuningSpace2 * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IAuxInTuningSpace2 * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IAuxInTuningSpace2 * This,
                                __RPC__out long *CountryCodeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IAuxInTuningSpace2 * This,
                       long NewCountryCodeVal);
        END_INTERFACE
    } IAuxInTuningSpace2Vtbl;
    interface IAuxInTuningSpace2
    {
        CONST_VTBL struct IAuxInTuningSpace2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
EXTERN_C const IID IID_IAnalogTVTuningSpace;
    typedef struct IAnalogTVTuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnalogTVTuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnalogTVTuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAnalogTVTuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAnalogTVTuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAnalogTVTuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IAnalogTVTuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IAnalogTVTuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinChannel )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__out long *MinChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinChannel )(
            __RPC__in IAnalogTVTuningSpace * This,
                       long NewMinChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxChannel )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__out long *MaxChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxChannel )(
            __RPC__in IAnalogTVTuningSpace * This,
                       long NewMaxChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputType )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__out TunerInputType *InputTypeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InputType )(
            __RPC__in IAnalogTVTuningSpace * This,
                       TunerInputType NewInputTypeVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IAnalogTVTuningSpace * This,
                                __RPC__out long *CountryCodeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IAnalogTVTuningSpace * This,
                       long NewCountryCodeVal);
        END_INTERFACE
    } IAnalogTVTuningSpaceVtbl;
    interface IAnalogTVTuningSpace
    {
        CONST_VTBL struct IAnalogTVTuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_MinChannel(This,MinChannelVal) )
    ( (This)->lpVtbl -> put_MinChannel(This,NewMinChannelVal) )
    ( (This)->lpVtbl -> get_MaxChannel(This,MaxChannelVal) )
    ( (This)->lpVtbl -> put_MaxChannel(This,NewMaxChannelVal) )
    ( (This)->lpVtbl -> get_InputType(This,InputTypeVal) )
    ( (This)->lpVtbl -> put_InputType(This,NewInputTypeVal) )
    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
EXTERN_C const IID IID_IATSCTuningSpace;
    typedef struct IATSCTuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSCTuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSCTuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IATSCTuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IATSCTuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IATSCTuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IATSCTuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IATSCTuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinChannel )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out long *MinChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinChannel )(
            __RPC__in IATSCTuningSpace * This,
                       long NewMinChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxChannel )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out long *MaxChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxChannel )(
            __RPC__in IATSCTuningSpace * This,
                       long NewMaxChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputType )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out TunerInputType *InputTypeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InputType )(
            __RPC__in IATSCTuningSpace * This,
                       TunerInputType NewInputTypeVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out long *CountryCodeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IATSCTuningSpace * This,
                       long NewCountryCodeVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinMinorChannel )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out long *MinMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinMinorChannel )(
            __RPC__in IATSCTuningSpace * This,
                       long NewMinMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxMinorChannel )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out long *MaxMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxMinorChannel )(
            __RPC__in IATSCTuningSpace * This,
                       long NewMaxMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinPhysicalChannel )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out long *MinPhysicalChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinPhysicalChannel )(
            __RPC__in IATSCTuningSpace * This,
                       long NewMinPhysicalChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxPhysicalChannel )(
            __RPC__in IATSCTuningSpace * This,
                                __RPC__out long *MaxPhysicalChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxPhysicalChannel )(
            __RPC__in IATSCTuningSpace * This,
                       long NewMaxPhysicalChannelVal);
        END_INTERFACE
    } IATSCTuningSpaceVtbl;
    interface IATSCTuningSpace
    {
        CONST_VTBL struct IATSCTuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_MinChannel(This,MinChannelVal) )
    ( (This)->lpVtbl -> put_MinChannel(This,NewMinChannelVal) )
    ( (This)->lpVtbl -> get_MaxChannel(This,MaxChannelVal) )
    ( (This)->lpVtbl -> put_MaxChannel(This,NewMaxChannelVal) )
    ( (This)->lpVtbl -> get_InputType(This,InputTypeVal) )
    ( (This)->lpVtbl -> put_InputType(This,NewInputTypeVal) )
    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
    ( (This)->lpVtbl -> get_MinMinorChannel(This,MinMinorChannelVal) )
    ( (This)->lpVtbl -> put_MinMinorChannel(This,NewMinMinorChannelVal) )
    ( (This)->lpVtbl -> get_MaxMinorChannel(This,MaxMinorChannelVal) )
    ( (This)->lpVtbl -> put_MaxMinorChannel(This,NewMaxMinorChannelVal) )
    ( (This)->lpVtbl -> get_MinPhysicalChannel(This,MinPhysicalChannelVal) )
    ( (This)->lpVtbl -> put_MinPhysicalChannel(This,NewMinPhysicalChannelVal) )
    ( (This)->lpVtbl -> get_MaxPhysicalChannel(This,MaxPhysicalChannelVal) )
    ( (This)->lpVtbl -> put_MaxPhysicalChannel(This,NewMaxPhysicalChannelVal) )
EXTERN_C const IID IID_IDigitalCableTuningSpace;
    typedef struct IDigitalCableTuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDigitalCableTuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDigitalCableTuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDigitalCableTuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDigitalCableTuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDigitalCableTuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IDigitalCableTuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IDigitalCableTuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MinChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMinChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MaxChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMaxChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputType )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out TunerInputType *InputTypeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_InputType )(
            __RPC__in IDigitalCableTuningSpace * This,
                       TunerInputType NewInputTypeVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *CountryCodeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewCountryCodeVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinMinorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MinMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinMinorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMinMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxMinorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MaxMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxMinorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMaxMinorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinPhysicalChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MinPhysicalChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinPhysicalChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMinPhysicalChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxPhysicalChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MaxPhysicalChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxPhysicalChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMaxPhysicalChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinMajorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MinMajorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinMajorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMinMajorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxMajorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MaxMajorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxMajorChannel )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMaxMajorChannelVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinSourceID )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MinSourceIDVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinSourceID )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMinSourceIDVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxSourceID )(
            __RPC__in IDigitalCableTuningSpace * This,
                                __RPC__out long *MaxSourceIDVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxSourceID )(
            __RPC__in IDigitalCableTuningSpace * This,
                       long NewMaxSourceIDVal);
        END_INTERFACE
    } IDigitalCableTuningSpaceVtbl;
    interface IDigitalCableTuningSpace
    {
        CONST_VTBL struct IDigitalCableTuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_MinChannel(This,MinChannelVal) )
    ( (This)->lpVtbl -> put_MinChannel(This,NewMinChannelVal) )
    ( (This)->lpVtbl -> get_MaxChannel(This,MaxChannelVal) )
    ( (This)->lpVtbl -> put_MaxChannel(This,NewMaxChannelVal) )
    ( (This)->lpVtbl -> get_InputType(This,InputTypeVal) )
    ( (This)->lpVtbl -> put_InputType(This,NewInputTypeVal) )
    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
    ( (This)->lpVtbl -> get_MinMinorChannel(This,MinMinorChannelVal) )
    ( (This)->lpVtbl -> put_MinMinorChannel(This,NewMinMinorChannelVal) )
    ( (This)->lpVtbl -> get_MaxMinorChannel(This,MaxMinorChannelVal) )
    ( (This)->lpVtbl -> put_MaxMinorChannel(This,NewMaxMinorChannelVal) )
    ( (This)->lpVtbl -> get_MinPhysicalChannel(This,MinPhysicalChannelVal) )
    ( (This)->lpVtbl -> put_MinPhysicalChannel(This,NewMinPhysicalChannelVal) )
    ( (This)->lpVtbl -> get_MaxPhysicalChannel(This,MaxPhysicalChannelVal) )
    ( (This)->lpVtbl -> put_MaxPhysicalChannel(This,NewMaxPhysicalChannelVal) )
    ( (This)->lpVtbl -> get_MinMajorChannel(This,MinMajorChannelVal) )
    ( (This)->lpVtbl -> put_MinMajorChannel(This,NewMinMajorChannelVal) )
    ( (This)->lpVtbl -> get_MaxMajorChannel(This,MaxMajorChannelVal) )
    ( (This)->lpVtbl -> put_MaxMajorChannel(This,NewMaxMajorChannelVal) )
    ( (This)->lpVtbl -> get_MinSourceID(This,MinSourceIDVal) )
    ( (This)->lpVtbl -> put_MinSourceID(This,NewMinSourceIDVal) )
    ( (This)->lpVtbl -> get_MaxSourceID(This,MaxSourceIDVal) )
    ( (This)->lpVtbl -> put_MaxSourceID(This,NewMaxSourceIDVal) )
EXTERN_C const IID IID_IAnalogRadioTuningSpace;
    typedef struct IAnalogRadioTuningSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnalogRadioTuningSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnalogRadioTuningSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAnalogRadioTuningSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAnalogRadioTuningSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IAnalogRadioTuningSpace * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinFrequency )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__out long *MinFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinFrequency )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       long NewMinFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxFrequency )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__out long *MaxFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxFrequency )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       long NewMaxFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Step )(
            __RPC__in IAnalogRadioTuningSpace * This,
                                __RPC__out long *StepVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Step )(
            __RPC__in IAnalogRadioTuningSpace * This,
                       long NewStepVal);
        END_INTERFACE
    } IAnalogRadioTuningSpaceVtbl;
    interface IAnalogRadioTuningSpace
    {
        CONST_VTBL struct IAnalogRadioTuningSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_MinFrequency(This,MinFrequencyVal) )
    ( (This)->lpVtbl -> put_MinFrequency(This,NewMinFrequencyVal) )
    ( (This)->lpVtbl -> get_MaxFrequency(This,MaxFrequencyVal) )
    ( (This)->lpVtbl -> put_MaxFrequency(This,NewMaxFrequencyVal) )
    ( (This)->lpVtbl -> get_Step(This,StepVal) )
    ( (This)->lpVtbl -> put_Step(This,NewStepVal) )
EXTERN_C const IID IID_IAnalogRadioTuningSpace2;
    typedef struct IAnalogRadioTuningSpace2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnalogRadioTuningSpace2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnalogRadioTuningSpace2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAnalogRadioTuningSpace2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_UniqueName )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_UniqueName )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_FriendlyName )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *put_FriendlyName )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in BSTR Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_CLSID )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *SpaceCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_NetworkType )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *NetworkTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_NetworkType )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in BSTR NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__NetworkType )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__out GUID *NetworkTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__NetworkType )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in REFCLSID NetworkTypeGuid);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                       HRESULT ( STDMETHODCALLTYPE *EnumCategoryGUIDs )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt IEnumGUID **ppEnum);
                                       HRESULT ( STDMETHODCALLTYPE *EnumDeviceMonikers )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt IEnumMoniker **ppEnum);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultPreferredComponentTypes )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultPreferredComponentTypes )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in_opt IComponentTypes *NewComponentTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_FrequencyMapping )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt BSTR *pMapping);
                            HRESULT ( STDMETHODCALLTYPE *put_FrequencyMapping )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
            __RPC__in BSTR Mapping);
                            HRESULT ( STDMETHODCALLTYPE *get_DefaultLocator )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt ILocator **LocatorVal);
                            HRESULT ( STDMETHODCALLTYPE *put_DefaultLocator )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       __RPC__in_opt ILocator *LocatorVal);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__deref_out_opt ITuningSpace **NewTS);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinFrequency )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__out long *MinFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinFrequency )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       long NewMinFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MaxFrequency )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__out long *MaxFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_MaxFrequency )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       long NewMaxFrequencyVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Step )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__out long *StepVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Step )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       long NewStepVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                                __RPC__out long *CountryCodeVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IAnalogRadioTuningSpace2 * This,
                       long NewCountryCodeVal);
        END_INTERFACE
    } IAnalogRadioTuningSpace2Vtbl;
    interface IAnalogRadioTuningSpace2
    {
        CONST_VTBL struct IAnalogRadioTuningSpace2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_UniqueName(This,Name) )
    ( (This)->lpVtbl -> put_UniqueName(This,Name) )
    ( (This)->lpVtbl -> get_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> put_FriendlyName(This,Name) )
    ( (This)->lpVtbl -> get_CLSID(This,SpaceCLSID) )
    ( (This)->lpVtbl -> get_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put_NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> get__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> put__NetworkType(This,NetworkTypeGuid) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> EnumCategoryGUIDs(This,ppEnum) )
    ( (This)->lpVtbl -> EnumDeviceMonikers(This,ppEnum) )
    ( (This)->lpVtbl -> get_DefaultPreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_DefaultPreferredComponentTypes(This,NewComponentTypes) )
    ( (This)->lpVtbl -> get_FrequencyMapping(This,pMapping) )
    ( (This)->lpVtbl -> put_FrequencyMapping(This,Mapping) )
    ( (This)->lpVtbl -> get_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> put_DefaultLocator(This,LocatorVal) )
    ( (This)->lpVtbl -> Clone(This,NewTS) )
    ( (This)->lpVtbl -> get_MinFrequency(This,MinFrequencyVal) )
    ( (This)->lpVtbl -> put_MinFrequency(This,NewMinFrequencyVal) )
    ( (This)->lpVtbl -> get_MaxFrequency(This,MaxFrequencyVal) )
    ( (This)->lpVtbl -> put_MaxFrequency(This,NewMaxFrequencyVal) )
    ( (This)->lpVtbl -> get_Step(This,StepVal) )
    ( (This)->lpVtbl -> put_Step(This,NewStepVal) )
    ( (This)->lpVtbl -> get_CountryCode(This,CountryCodeVal) )
    ( (This)->lpVtbl -> put_CountryCode(This,NewCountryCodeVal) )
EXTERN_C const IID IID_ITuneRequest;
    typedef struct ITuneRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITuneRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITuneRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITuneRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ITuneRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ITuneRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ITuneRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ITuneRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in ITuneRequest * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in ITuneRequest * This,
                                __RPC__deref_out_opt IComponents **Components);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITuneRequest * This,
                                __RPC__deref_out_opt ITuneRequest **NewTuneRequest);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locator )(
            __RPC__in ITuneRequest * This,
                                __RPC__deref_out_opt ILocator **Locator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Locator )(
            __RPC__in ITuneRequest * This,
                       __RPC__in_opt ILocator *Locator);
        END_INTERFACE
    } ITuneRequestVtbl;
    interface ITuneRequest
    {
        CONST_VTBL struct ITuneRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> get_Components(This,Components) )
    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
    ( (This)->lpVtbl -> get_Locator(This,Locator) )
    ( (This)->lpVtbl -> put_Locator(This,Locator) )
EXTERN_C const IID IID_IChannelIDTuneRequest;
    typedef struct IChannelIDTuneRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IChannelIDTuneRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IChannelIDTuneRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IChannelIDTuneRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IChannelIDTuneRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IChannelIDTuneRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IChannelIDTuneRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IChannelIDTuneRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IChannelIDTuneRequest * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in IChannelIDTuneRequest * This,
                                __RPC__deref_out_opt IComponents **Components);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IChannelIDTuneRequest * This,
                                __RPC__deref_out_opt ITuneRequest **NewTuneRequest);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locator )(
            __RPC__in IChannelIDTuneRequest * This,
                                __RPC__deref_out_opt ILocator **Locator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Locator )(
            __RPC__in IChannelIDTuneRequest * This,
                       __RPC__in_opt ILocator *Locator);
                                        HRESULT ( STDMETHODCALLTYPE *get_ChannelID )(
            __RPC__in IChannelIDTuneRequest * This,
                                __RPC__deref_out_opt BSTR *ChannelID);
                                        HRESULT ( STDMETHODCALLTYPE *put_ChannelID )(
            __RPC__in IChannelIDTuneRequest * This,
                       __RPC__in BSTR ChannelID);
        END_INTERFACE
    } IChannelIDTuneRequestVtbl;
    interface IChannelIDTuneRequest
    {
        CONST_VTBL struct IChannelIDTuneRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> get_Components(This,Components) )
    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
    ( (This)->lpVtbl -> get_Locator(This,Locator) )
    ( (This)->lpVtbl -> put_Locator(This,Locator) )
    ( (This)->lpVtbl -> get_ChannelID(This,ChannelID) )
    ( (This)->lpVtbl -> put_ChannelID(This,ChannelID) )
EXTERN_C const IID IID_IChannelTuneRequest;
    typedef struct IChannelTuneRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IChannelTuneRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IChannelTuneRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IChannelTuneRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IChannelTuneRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IChannelTuneRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IChannelTuneRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IChannelTuneRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IChannelTuneRequest * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in IChannelTuneRequest * This,
                                __RPC__deref_out_opt IComponents **Components);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IChannelTuneRequest * This,
                                __RPC__deref_out_opt ITuneRequest **NewTuneRequest);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locator )(
            __RPC__in IChannelTuneRequest * This,
                                __RPC__deref_out_opt ILocator **Locator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Locator )(
            __RPC__in IChannelTuneRequest * This,
                       __RPC__in_opt ILocator *Locator);
                                        HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            __RPC__in IChannelTuneRequest * This,
                                __RPC__out long *Channel);
                                        HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            __RPC__in IChannelTuneRequest * This,
                       long Channel);
        END_INTERFACE
    } IChannelTuneRequestVtbl;
    interface IChannelTuneRequest
    {
        CONST_VTBL struct IChannelTuneRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> get_Components(This,Components) )
    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
    ( (This)->lpVtbl -> get_Locator(This,Locator) )
    ( (This)->lpVtbl -> put_Locator(This,Locator) )
    ( (This)->lpVtbl -> get_Channel(This,Channel) )
    ( (This)->lpVtbl -> put_Channel(This,Channel) )
EXTERN_C const IID IID_IATSCChannelTuneRequest;
    typedef struct IATSCChannelTuneRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSCChannelTuneRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSCChannelTuneRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSCChannelTuneRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IATSCChannelTuneRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IATSCChannelTuneRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IATSCChannelTuneRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IATSCChannelTuneRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IATSCChannelTuneRequest * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in IATSCChannelTuneRequest * This,
                                __RPC__deref_out_opt IComponents **Components);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IATSCChannelTuneRequest * This,
                                __RPC__deref_out_opt ITuneRequest **NewTuneRequest);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locator )(
            __RPC__in IATSCChannelTuneRequest * This,
                                __RPC__deref_out_opt ILocator **Locator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Locator )(
            __RPC__in IATSCChannelTuneRequest * This,
                       __RPC__in_opt ILocator *Locator);
                                        HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            __RPC__in IATSCChannelTuneRequest * This,
                                __RPC__out long *Channel);
                                        HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            __RPC__in IATSCChannelTuneRequest * This,
                       long Channel);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorChannel )(
            __RPC__in IATSCChannelTuneRequest * This,
                                __RPC__out long *MinorChannel);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinorChannel )(
            __RPC__in IATSCChannelTuneRequest * This,
                       long MinorChannel);
        END_INTERFACE
    } IATSCChannelTuneRequestVtbl;
    interface IATSCChannelTuneRequest
    {
        CONST_VTBL struct IATSCChannelTuneRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> get_Components(This,Components) )
    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
    ( (This)->lpVtbl -> get_Locator(This,Locator) )
    ( (This)->lpVtbl -> put_Locator(This,Locator) )
    ( (This)->lpVtbl -> get_Channel(This,Channel) )
    ( (This)->lpVtbl -> put_Channel(This,Channel) )
    ( (This)->lpVtbl -> get_MinorChannel(This,MinorChannel) )
    ( (This)->lpVtbl -> put_MinorChannel(This,MinorChannel) )
EXTERN_C const IID IID_IDigitalCableTuneRequest;
    typedef struct IDigitalCableTuneRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDigitalCableTuneRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDigitalCableTuneRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDigitalCableTuneRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDigitalCableTuneRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDigitalCableTuneRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDigitalCableTuneRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDigitalCableTuneRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__deref_out_opt IComponents **Components);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__deref_out_opt ITuneRequest **NewTuneRequest);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locator )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__deref_out_opt ILocator **Locator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Locator )(
            __RPC__in IDigitalCableTuneRequest * This,
                       __RPC__in_opt ILocator *Locator);
                                        HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__out long *Channel);
                                        HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            __RPC__in IDigitalCableTuneRequest * This,
                       long Channel);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinorChannel )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__out long *MinorChannel);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinorChannel )(
            __RPC__in IDigitalCableTuneRequest * This,
                       long MinorChannel);
                                        HRESULT ( STDMETHODCALLTYPE *get_MajorChannel )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__out long *pMajorChannel);
                                        HRESULT ( STDMETHODCALLTYPE *put_MajorChannel )(
            __RPC__in IDigitalCableTuneRequest * This,
                       long MajorChannel);
                                        HRESULT ( STDMETHODCALLTYPE *get_SourceID )(
            __RPC__in IDigitalCableTuneRequest * This,
                                __RPC__out long *pSourceID);
                                        HRESULT ( STDMETHODCALLTYPE *put_SourceID )(
            __RPC__in IDigitalCableTuneRequest * This,
                       long SourceID);
        END_INTERFACE
    } IDigitalCableTuneRequestVtbl;
    interface IDigitalCableTuneRequest
    {
        CONST_VTBL struct IDigitalCableTuneRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> get_Components(This,Components) )
    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
    ( (This)->lpVtbl -> get_Locator(This,Locator) )
    ( (This)->lpVtbl -> put_Locator(This,Locator) )
    ( (This)->lpVtbl -> get_Channel(This,Channel) )
    ( (This)->lpVtbl -> put_Channel(This,Channel) )
    ( (This)->lpVtbl -> get_MinorChannel(This,MinorChannel) )
    ( (This)->lpVtbl -> put_MinorChannel(This,MinorChannel) )
    ( (This)->lpVtbl -> get_MajorChannel(This,pMajorChannel) )
    ( (This)->lpVtbl -> put_MajorChannel(This,MajorChannel) )
    ( (This)->lpVtbl -> get_SourceID(This,pSourceID) )
    ( (This)->lpVtbl -> put_SourceID(This,SourceID) )
EXTERN_C const IID IID_IDVBTuneRequest;
    typedef struct IDVBTuneRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBTuneRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBTuneRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBTuneRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBTuneRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBTuneRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBTuneRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBTuneRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IDVBTuneRequest * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in IDVBTuneRequest * This,
                                __RPC__deref_out_opt IComponents **Components);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBTuneRequest * This,
                                __RPC__deref_out_opt ITuneRequest **NewTuneRequest);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locator )(
            __RPC__in IDVBTuneRequest * This,
                                __RPC__deref_out_opt ILocator **Locator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Locator )(
            __RPC__in IDVBTuneRequest * This,
                       __RPC__in_opt ILocator *Locator);
                                        HRESULT ( STDMETHODCALLTYPE *get_ONID )(
            __RPC__in IDVBTuneRequest * This,
                                __RPC__out long *ONID);
                                        HRESULT ( STDMETHODCALLTYPE *put_ONID )(
            __RPC__in IDVBTuneRequest * This,
                       long ONID);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IDVBTuneRequest * This,
                                __RPC__out long *TSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_TSID )(
            __RPC__in IDVBTuneRequest * This,
                       long TSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_SID )(
            __RPC__in IDVBTuneRequest * This,
                                __RPC__out long *SID);
                                        HRESULT ( STDMETHODCALLTYPE *put_SID )(
            __RPC__in IDVBTuneRequest * This,
                       long SID);
        END_INTERFACE
    } IDVBTuneRequestVtbl;
    interface IDVBTuneRequest
    {
        CONST_VTBL struct IDVBTuneRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> get_Components(This,Components) )
    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
    ( (This)->lpVtbl -> get_Locator(This,Locator) )
    ( (This)->lpVtbl -> put_Locator(This,Locator) )
    ( (This)->lpVtbl -> get_ONID(This,ONID) )
    ( (This)->lpVtbl -> put_ONID(This,ONID) )
    ( (This)->lpVtbl -> get_TSID(This,TSID) )
    ( (This)->lpVtbl -> put_TSID(This,TSID) )
    ( (This)->lpVtbl -> get_SID(This,SID) )
    ( (This)->lpVtbl -> put_SID(This,SID) )
EXTERN_C const IID IID_IMPEG2TuneRequest;
    typedef struct IMPEG2TuneRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMPEG2TuneRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMPEG2TuneRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMPEG2TuneRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMPEG2TuneRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMPEG2TuneRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMPEG2TuneRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMPEG2TuneRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IMPEG2TuneRequest * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_Components )(
            __RPC__in IMPEG2TuneRequest * This,
                                __RPC__deref_out_opt IComponents **Components);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IMPEG2TuneRequest * This,
                                __RPC__deref_out_opt ITuneRequest **NewTuneRequest);
                                        HRESULT ( STDMETHODCALLTYPE *get_Locator )(
            __RPC__in IMPEG2TuneRequest * This,
                                __RPC__deref_out_opt ILocator **Locator);
                                        HRESULT ( STDMETHODCALLTYPE *put_Locator )(
            __RPC__in IMPEG2TuneRequest * This,
                       __RPC__in_opt ILocator *Locator);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IMPEG2TuneRequest * This,
                                __RPC__out long *TSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_TSID )(
            __RPC__in IMPEG2TuneRequest * This,
                       long TSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProgNo )(
            __RPC__in IMPEG2TuneRequest * This,
                                __RPC__out long *ProgNo);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProgNo )(
            __RPC__in IMPEG2TuneRequest * This,
                       long ProgNo);
        END_INTERFACE
    } IMPEG2TuneRequestVtbl;
    interface IMPEG2TuneRequest
    {
        CONST_VTBL struct IMPEG2TuneRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> get_Components(This,Components) )
    ( (This)->lpVtbl -> Clone(This,NewTuneRequest) )
    ( (This)->lpVtbl -> get_Locator(This,Locator) )
    ( (This)->lpVtbl -> put_Locator(This,Locator) )
    ( (This)->lpVtbl -> get_TSID(This,TSID) )
    ( (This)->lpVtbl -> put_TSID(This,TSID) )
    ( (This)->lpVtbl -> get_ProgNo(This,ProgNo) )
    ( (This)->lpVtbl -> put_ProgNo(This,ProgNo) )
EXTERN_C const IID IID_IMPEG2TuneRequestFactory;
    typedef struct IMPEG2TuneRequestFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMPEG2TuneRequestFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMPEG2TuneRequestFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMPEG2TuneRequestFactory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMPEG2TuneRequestFactory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMPEG2TuneRequestFactory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMPEG2TuneRequestFactory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMPEG2TuneRequestFactory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *CreateTuneRequest )(
            __RPC__in IMPEG2TuneRequestFactory * This,
                       __RPC__in_opt ITuningSpace *TuningSpace,
                                __RPC__deref_out_opt IMPEG2TuneRequest **TuneRequest);
        END_INTERFACE
    } IMPEG2TuneRequestFactoryVtbl;
    interface IMPEG2TuneRequestFactory
    {
        CONST_VTBL struct IMPEG2TuneRequestFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> CreateTuneRequest(This,TuningSpace,TuneRequest) )
EXTERN_C const IID IID_IMPEG2TuneRequestSupport;
    typedef struct IMPEG2TuneRequestSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMPEG2TuneRequestSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMPEG2TuneRequestSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMPEG2TuneRequestSupport * This);
        END_INTERFACE
    } IMPEG2TuneRequestSupportVtbl;
    interface IMPEG2TuneRequestSupport
    {
        CONST_VTBL struct IMPEG2TuneRequestSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
EXTERN_C const IID IID_ITunerCap;
    typedef struct ITunerCapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITunerCap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITunerCap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITunerCap * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_SupportedNetworkTypes )(
            __RPC__in ITunerCap * This,
                       ULONG ulcNetworkTypesMax,
                        __RPC__out ULONG *pulcNetworkTypes,
                            __RPC__inout GUID *pguidNetworkTypes);
                                    HRESULT ( STDMETHODCALLTYPE *get_SupportedVideoFormats )(
            __RPC__in ITunerCap * This,
                        __RPC__out ULONG *pulAMTunerModeType,
                        __RPC__out ULONG *pulAnalogVideoStandard);
                                    HRESULT ( STDMETHODCALLTYPE *get_AuxInputCount )(
            __RPC__in ITunerCap * This,
                            __RPC__inout ULONG *pulCompositeCount,
                            __RPC__inout ULONG *pulSvideoCount);
        END_INTERFACE
    } ITunerCapVtbl;
    interface ITunerCap
    {
        CONST_VTBL struct ITunerCapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SupportedNetworkTypes(This,ulcNetworkTypesMax,pulcNetworkTypes,pguidNetworkTypes) )
    ( (This)->lpVtbl -> get_SupportedVideoFormats(This,pulAMTunerModeType,pulAnalogVideoStandard) )
    ( (This)->lpVtbl -> get_AuxInputCount(This,pulCompositeCount,pulSvideoCount) )
EXTERN_C const IID IID_ITunerCapEx;
    typedef struct ITunerCapExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITunerCapEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITunerCapEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITunerCapEx * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Has608_708Caption )(
            __RPC__in ITunerCapEx * This,
                                __RPC__out VARIANT_BOOL *pbHasCaption);
        END_INTERFACE
    } ITunerCapExVtbl;
    interface ITunerCapEx
    {
        CONST_VTBL struct ITunerCapExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Has608_708Caption(This,pbHasCaption) )
EXTERN_C const IID IID_ITuner;
    typedef struct ITunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITuner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITuner * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in ITuner * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                    HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            __RPC__in ITuner * This,
                       __RPC__in_opt ITuningSpace *TuningSpace);
                                               HRESULT ( STDMETHODCALLTYPE *EnumTuningSpaces )(
            __RPC__in ITuner * This,
                                __RPC__deref_out_opt IEnumTuningSpaces **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_TuneRequest )(
            __RPC__in ITuner * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                    HRESULT ( STDMETHODCALLTYPE *put_TuneRequest )(
            __RPC__in ITuner * This,
                       __RPC__in_opt ITuneRequest *TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *Validate )(
            __RPC__in ITuner * This,
                       __RPC__in_opt ITuneRequest *TuneRequest);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredComponentTypes )(
            __RPC__in ITuner * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredComponentTypes )(
            __RPC__in ITuner * This,
                       __RPC__in_opt IComponentTypes *ComponentTypes);
                                    HRESULT ( STDMETHODCALLTYPE *get_SignalStrength )(
            __RPC__in ITuner * This,
                                __RPC__out long *Strength);
                           HRESULT ( STDMETHODCALLTYPE *TriggerSignalEvents )(
            __RPC__in ITuner * This,
                       long Interval);
        END_INTERFACE
    } ITunerVtbl;
    interface ITuner
    {
        CONST_VTBL struct ITunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> put_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> EnumTuningSpaces(This,ppEnum) )
    ( (This)->lpVtbl -> get_TuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> put_TuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> Validate(This,TuneRequest) )
    ( (This)->lpVtbl -> get_PreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_PreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> get_SignalStrength(This,Strength) )
    ( (This)->lpVtbl -> TriggerSignalEvents(This,Interval) )
EXTERN_C const IID IID_IScanningTuner;
    typedef struct IScanningTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScanningTuner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScanningTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScanningTuner * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IScanningTuner * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                    HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            __RPC__in IScanningTuner * This,
                       __RPC__in_opt ITuningSpace *TuningSpace);
                                               HRESULT ( STDMETHODCALLTYPE *EnumTuningSpaces )(
            __RPC__in IScanningTuner * This,
                                __RPC__deref_out_opt IEnumTuningSpaces **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_TuneRequest )(
            __RPC__in IScanningTuner * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                    HRESULT ( STDMETHODCALLTYPE *put_TuneRequest )(
            __RPC__in IScanningTuner * This,
                       __RPC__in_opt ITuneRequest *TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *Validate )(
            __RPC__in IScanningTuner * This,
                       __RPC__in_opt ITuneRequest *TuneRequest);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredComponentTypes )(
            __RPC__in IScanningTuner * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredComponentTypes )(
            __RPC__in IScanningTuner * This,
                       __RPC__in_opt IComponentTypes *ComponentTypes);
                                    HRESULT ( STDMETHODCALLTYPE *get_SignalStrength )(
            __RPC__in IScanningTuner * This,
                                __RPC__out long *Strength);
                           HRESULT ( STDMETHODCALLTYPE *TriggerSignalEvents )(
            __RPC__in IScanningTuner * This,
                       long Interval);
                           HRESULT ( STDMETHODCALLTYPE *SeekUp )(
            __RPC__in IScanningTuner * This);
                           HRESULT ( STDMETHODCALLTYPE *SeekDown )(
            __RPC__in IScanningTuner * This);
                           HRESULT ( STDMETHODCALLTYPE *ScanUp )(
            __RPC__in IScanningTuner * This,
                       long MillisecondsPause);
                           HRESULT ( STDMETHODCALLTYPE *ScanDown )(
            __RPC__in IScanningTuner * This,
                       long MillisecondsPause);
                           HRESULT ( STDMETHODCALLTYPE *AutoProgram )(
            __RPC__in IScanningTuner * This);
        END_INTERFACE
    } IScanningTunerVtbl;
    interface IScanningTuner
    {
        CONST_VTBL struct IScanningTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> put_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> EnumTuningSpaces(This,ppEnum) )
    ( (This)->lpVtbl -> get_TuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> put_TuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> Validate(This,TuneRequest) )
    ( (This)->lpVtbl -> get_PreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_PreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> get_SignalStrength(This,Strength) )
    ( (This)->lpVtbl -> TriggerSignalEvents(This,Interval) )
    ( (This)->lpVtbl -> SeekUp(This) )
    ( (This)->lpVtbl -> SeekDown(This) )
    ( (This)->lpVtbl -> ScanUp(This,MillisecondsPause) )
    ( (This)->lpVtbl -> ScanDown(This,MillisecondsPause) )
    ( (This)->lpVtbl -> AutoProgram(This) )
EXTERN_C const IID IID_IScanningTunerEx;
    typedef struct IScanningTunerExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScanningTunerEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScanningTunerEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScanningTunerEx * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IScanningTunerEx * This,
                                __RPC__deref_out_opt ITuningSpace **TuningSpace);
                                    HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            __RPC__in IScanningTunerEx * This,
                       __RPC__in_opt ITuningSpace *TuningSpace);
                                               HRESULT ( STDMETHODCALLTYPE *EnumTuningSpaces )(
            __RPC__in IScanningTunerEx * This,
                                __RPC__deref_out_opt IEnumTuningSpaces **ppEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_TuneRequest )(
            __RPC__in IScanningTunerEx * This,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
                                    HRESULT ( STDMETHODCALLTYPE *put_TuneRequest )(
            __RPC__in IScanningTunerEx * This,
                       __RPC__in_opt ITuneRequest *TuneRequest);
                           HRESULT ( STDMETHODCALLTYPE *Validate )(
            __RPC__in IScanningTunerEx * This,
                       __RPC__in_opt ITuneRequest *TuneRequest);
                                    HRESULT ( STDMETHODCALLTYPE *get_PreferredComponentTypes )(
            __RPC__in IScanningTunerEx * This,
                                __RPC__deref_out_opt IComponentTypes **ComponentTypes);
                                    HRESULT ( STDMETHODCALLTYPE *put_PreferredComponentTypes )(
            __RPC__in IScanningTunerEx * This,
                       __RPC__in_opt IComponentTypes *ComponentTypes);
                                    HRESULT ( STDMETHODCALLTYPE *get_SignalStrength )(
            __RPC__in IScanningTunerEx * This,
                                __RPC__out long *Strength);
                           HRESULT ( STDMETHODCALLTYPE *TriggerSignalEvents )(
            __RPC__in IScanningTunerEx * This,
                       long Interval);
                           HRESULT ( STDMETHODCALLTYPE *SeekUp )(
            __RPC__in IScanningTunerEx * This);
                           HRESULT ( STDMETHODCALLTYPE *SeekDown )(
            __RPC__in IScanningTunerEx * This);
                           HRESULT ( STDMETHODCALLTYPE *ScanUp )(
            __RPC__in IScanningTunerEx * This,
                       long MillisecondsPause);
                           HRESULT ( STDMETHODCALLTYPE *ScanDown )(
            __RPC__in IScanningTunerEx * This,
                       long MillisecondsPause);
                           HRESULT ( STDMETHODCALLTYPE *AutoProgram )(
            __RPC__in IScanningTunerEx * This);
                           HRESULT ( STDMETHODCALLTYPE *GetCurrentLocator )(
            __RPC__in IScanningTunerEx * This,
            __RPC__deref_in_opt ILocator **pILocator);
                           HRESULT ( STDMETHODCALLTYPE *PerformExhaustiveScan )(
            __RPC__in IScanningTunerEx * This,
                       long dwLowerFreq,
                       long dwHigherFreq,
                       VARIANT_BOOL bFineTune,
                       HEVENT hEvent);
                           HRESULT ( STDMETHODCALLTYPE *TerminateCurrentScan )(
            __RPC__in IScanningTunerEx * This,
                                __RPC__out long *pcurrentFreq);
                           HRESULT ( STDMETHODCALLTYPE *ResumeCurrentScan )(
            __RPC__in IScanningTunerEx * This,
                       HEVENT hEvent);
                           HRESULT ( STDMETHODCALLTYPE *GetTunerScanningCapability )(
            __RPC__in IScanningTunerEx * This,
                        __RPC__out long *HardwareAssistedScanning,
                        __RPC__out long *NumStandardsSupported,
                        __RPC__out GUID *BroadcastStandards);
                           HRESULT ( STDMETHODCALLTYPE *GetTunerStatus )(
            __RPC__in IScanningTunerEx * This,
                        __RPC__out long *SecondsLeft,
                        __RPC__out long *CurrentLockType,
                        __RPC__out long *AutoDetect,
                        __RPC__out long *CurrentFreq);
                           HRESULT ( STDMETHODCALLTYPE *GetCurrentTunerStandardCapability )(
            __RPC__in IScanningTunerEx * This,
                       GUID CurrentBroadcastStandard,
                        __RPC__out long *SettlingTime,
                        __RPC__out long *TvStandardsSupported);
                           HRESULT ( STDMETHODCALLTYPE *SetScanSignalTypeFilter )(
            __RPC__in IScanningTunerEx * This,
                       long ScanModulationTypes,
                       long AnalogVideoStandard);
        END_INTERFACE
    } IScanningTunerExVtbl;
    interface IScanningTunerEx
    {
        CONST_VTBL struct IScanningTunerExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> put_TuningSpace(This,TuningSpace) )
    ( (This)->lpVtbl -> EnumTuningSpaces(This,ppEnum) )
    ( (This)->lpVtbl -> get_TuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> put_TuneRequest(This,TuneRequest) )
    ( (This)->lpVtbl -> Validate(This,TuneRequest) )
    ( (This)->lpVtbl -> get_PreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> put_PreferredComponentTypes(This,ComponentTypes) )
    ( (This)->lpVtbl -> get_SignalStrength(This,Strength) )
    ( (This)->lpVtbl -> TriggerSignalEvents(This,Interval) )
    ( (This)->lpVtbl -> SeekUp(This) )
    ( (This)->lpVtbl -> SeekDown(This) )
    ( (This)->lpVtbl -> ScanUp(This,MillisecondsPause) )
    ( (This)->lpVtbl -> ScanDown(This,MillisecondsPause) )
    ( (This)->lpVtbl -> AutoProgram(This) )
    ( (This)->lpVtbl -> GetCurrentLocator(This,pILocator) )
    ( (This)->lpVtbl -> PerformExhaustiveScan(This,dwLowerFreq,dwHigherFreq,bFineTune,hEvent) )
    ( (This)->lpVtbl -> TerminateCurrentScan(This,pcurrentFreq) )
    ( (This)->lpVtbl -> ResumeCurrentScan(This,hEvent) )
    ( (This)->lpVtbl -> GetTunerScanningCapability(This,HardwareAssistedScanning,NumStandardsSupported,BroadcastStandards) )
    ( (This)->lpVtbl -> GetTunerStatus(This,SecondsLeft,CurrentLockType,AutoDetect,CurrentFreq) )
    ( (This)->lpVtbl -> GetCurrentTunerStandardCapability(This,CurrentBroadcastStandard,SettlingTime,TvStandardsSupported) )
    ( (This)->lpVtbl -> SetScanSignalTypeFilter(This,ScanModulationTypes,AnalogVideoStandard) )
EXTERN_C const IID IID_IComponentType;
    typedef struct IComponentTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponentType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponentType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponentType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IComponentType * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IComponentType * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IComponentType * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IComponentType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IComponentType * This,
                                __RPC__out ComponentCategory *Category);
                                        HRESULT ( STDMETHODCALLTYPE *put_Category )(
            __RPC__in IComponentType * This,
                       ComponentCategory Category);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaMajorType )(
            __RPC__in IComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaMajorType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaMajorType )(
            __RPC__in IComponentType * This,
                       __RPC__in BSTR MediaMajorType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaMajorType )(
            __RPC__in IComponentType * This,
                                __RPC__out GUID *MediaMajorTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaMajorType )(
            __RPC__in IComponentType * This,
                       __RPC__in REFCLSID MediaMajorTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaSubType )(
            __RPC__in IComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaSubType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaSubType )(
            __RPC__in IComponentType * This,
                       __RPC__in BSTR MediaSubType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaSubType )(
            __RPC__in IComponentType * This,
                                __RPC__out GUID *MediaSubTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaSubType )(
            __RPC__in IComponentType * This,
                       __RPC__in REFCLSID MediaSubTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaFormatType )(
            __RPC__in IComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaFormatType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaFormatType )(
            __RPC__in IComponentType * This,
                       __RPC__in BSTR MediaFormatType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaFormatType )(
            __RPC__in IComponentType * This,
                                __RPC__out GUID *MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaFormatType )(
            __RPC__in IComponentType * This,
                       __RPC__in REFCLSID MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in IComponentType * This,
                                __RPC__out AM_MEDIA_TYPE *MediaType);
                                                            HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
            __RPC__in IComponentType * This,
                       __RPC__in AM_MEDIA_TYPE *MediaType);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IComponentType * This,
                                __RPC__deref_out_opt IComponentType **NewCT);
        END_INTERFACE
    } IComponentTypeVtbl;
    interface IComponentType
    {
        CONST_VTBL struct IComponentTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Category(This,Category) )
    ( (This)->lpVtbl -> put_Category(This,Category) )
    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> Clone(This,NewCT) )
EXTERN_C const IID IID_ILanguageComponentType;
    typedef struct ILanguageComponentTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILanguageComponentType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILanguageComponentType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ILanguageComponentType * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ILanguageComponentType * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ILanguageComponentType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__out ComponentCategory *Category);
                                        HRESULT ( STDMETHODCALLTYPE *put_Category )(
            __RPC__in ILanguageComponentType * This,
                       ComponentCategory Category);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaMajorType )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaMajorType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaMajorType )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in BSTR MediaMajorType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaMajorType )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__out GUID *MediaMajorTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaMajorType )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in REFCLSID MediaMajorTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaSubType )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaSubType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaSubType )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in BSTR MediaSubType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaSubType )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__out GUID *MediaSubTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaSubType )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in REFCLSID MediaSubTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaFormatType )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaFormatType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaFormatType )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in BSTR MediaFormatType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaFormatType )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__out GUID *MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaFormatType )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in REFCLSID MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__out AM_MEDIA_TYPE *MediaType);
                                                            HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
            __RPC__in ILanguageComponentType * This,
                       __RPC__in AM_MEDIA_TYPE *MediaType);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__deref_out_opt IComponentType **NewCT);
                                        HRESULT ( STDMETHODCALLTYPE *get_LangID )(
            __RPC__in ILanguageComponentType * This,
                                __RPC__out long *LangID);
                                        HRESULT ( STDMETHODCALLTYPE *put_LangID )(
            __RPC__in ILanguageComponentType * This,
                       long LangID);
        END_INTERFACE
    } ILanguageComponentTypeVtbl;
    interface ILanguageComponentType
    {
        CONST_VTBL struct ILanguageComponentTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Category(This,Category) )
    ( (This)->lpVtbl -> put_Category(This,Category) )
    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> Clone(This,NewCT) )
    ( (This)->lpVtbl -> get_LangID(This,LangID) )
    ( (This)->lpVtbl -> put_LangID(This,LangID) )
EXTERN_C const IID IID_IMPEG2ComponentType;
    typedef struct IMPEG2ComponentTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMPEG2ComponentType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMPEG2ComponentType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMPEG2ComponentType * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMPEG2ComponentType * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMPEG2ComponentType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__out ComponentCategory *Category);
                                        HRESULT ( STDMETHODCALLTYPE *put_Category )(
            __RPC__in IMPEG2ComponentType * This,
                       ComponentCategory Category);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaMajorType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaMajorType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaMajorType )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in BSTR MediaMajorType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaMajorType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__out GUID *MediaMajorTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaMajorType )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in REFCLSID MediaMajorTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaSubType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaSubType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaSubType )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in BSTR MediaSubType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaSubType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__out GUID *MediaSubTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaSubType )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in REFCLSID MediaSubTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaFormatType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaFormatType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaFormatType )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in BSTR MediaFormatType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaFormatType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__out GUID *MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaFormatType )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in REFCLSID MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__out AM_MEDIA_TYPE *MediaType);
                                                            HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
            __RPC__in IMPEG2ComponentType * This,
                       __RPC__in AM_MEDIA_TYPE *MediaType);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__deref_out_opt IComponentType **NewCT);
                                        HRESULT ( STDMETHODCALLTYPE *get_LangID )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__out long *LangID);
                                        HRESULT ( STDMETHODCALLTYPE *put_LangID )(
            __RPC__in IMPEG2ComponentType * This,
                       long LangID);
                                        HRESULT ( STDMETHODCALLTYPE *get_StreamType )(
            __RPC__in IMPEG2ComponentType * This,
                                __RPC__out MPEG2StreamType *MP2StreamType);
                                        HRESULT ( STDMETHODCALLTYPE *put_StreamType )(
            __RPC__in IMPEG2ComponentType * This,
                       MPEG2StreamType MP2StreamType);
        END_INTERFACE
    } IMPEG2ComponentTypeVtbl;
    interface IMPEG2ComponentType
    {
        CONST_VTBL struct IMPEG2ComponentTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Category(This,Category) )
    ( (This)->lpVtbl -> put_Category(This,Category) )
    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> Clone(This,NewCT) )
    ( (This)->lpVtbl -> get_LangID(This,LangID) )
    ( (This)->lpVtbl -> put_LangID(This,LangID) )
    ( (This)->lpVtbl -> get_StreamType(This,MP2StreamType) )
    ( (This)->lpVtbl -> put_StreamType(This,MP2StreamType) )
EXTERN_C const IID IID_IATSCComponentType;
    typedef struct IATSCComponentTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSCComponentType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSCComponentType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IATSCComponentType * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IATSCComponentType * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IATSCComponentType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out ComponentCategory *Category);
                                        HRESULT ( STDMETHODCALLTYPE *put_Category )(
            __RPC__in IATSCComponentType * This,
                       ComponentCategory Category);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaMajorType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaMajorType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaMajorType )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in BSTR MediaMajorType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaMajorType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out GUID *MediaMajorTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaMajorType )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in REFCLSID MediaMajorTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaSubType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaSubType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaSubType )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in BSTR MediaSubType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaSubType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out GUID *MediaSubTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaSubType )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in REFCLSID MediaSubTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaFormatType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaFormatType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaFormatType )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in BSTR MediaFormatType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaFormatType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out GUID *MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaFormatType )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in REFCLSID MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out AM_MEDIA_TYPE *MediaType);
                                                            HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
            __RPC__in IATSCComponentType * This,
                       __RPC__in AM_MEDIA_TYPE *MediaType);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IATSCComponentType * This,
                                __RPC__deref_out_opt IComponentType **NewCT);
                                        HRESULT ( STDMETHODCALLTYPE *get_LangID )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out long *LangID);
                                        HRESULT ( STDMETHODCALLTYPE *put_LangID )(
            __RPC__in IATSCComponentType * This,
                       long LangID);
                                        HRESULT ( STDMETHODCALLTYPE *get_StreamType )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out MPEG2StreamType *MP2StreamType);
                                        HRESULT ( STDMETHODCALLTYPE *put_StreamType )(
            __RPC__in IATSCComponentType * This,
                       MPEG2StreamType MP2StreamType);
                                        HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IATSCComponentType * This,
                                __RPC__out long *Flags);
                                        HRESULT ( STDMETHODCALLTYPE *put_Flags )(
            __RPC__in IATSCComponentType * This,
                       long flags);
        END_INTERFACE
    } IATSCComponentTypeVtbl;
    interface IATSCComponentType
    {
        CONST_VTBL struct IATSCComponentTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Category(This,Category) )
    ( (This)->lpVtbl -> put_Category(This,Category) )
    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> Clone(This,NewCT) )
    ( (This)->lpVtbl -> get_LangID(This,LangID) )
    ( (This)->lpVtbl -> put_LangID(This,LangID) )
    ( (This)->lpVtbl -> get_StreamType(This,MP2StreamType) )
    ( (This)->lpVtbl -> put_StreamType(This,MP2StreamType) )
    ( (This)->lpVtbl -> get_Flags(This,Flags) )
    ( (This)->lpVtbl -> put_Flags(This,flags) )
EXTERN_C const IID IID_IEnumComponentTypes;
    typedef struct IEnumComponentTypesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumComponentTypes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumComponentTypes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumComponentTypes * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumComponentTypes * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IComponentType **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumComponentTypes * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumComponentTypes * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumComponentTypes * This,
                        __RPC__deref_out_opt IEnumComponentTypes **ppEnum);
        END_INTERFACE
    } IEnumComponentTypesVtbl;
    interface IEnumComponentTypes
    {
        CONST_VTBL struct IEnumComponentTypesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IComponentTypes;
    typedef struct IComponentTypesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponentTypes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponentTypes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponentTypes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IComponentTypes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IComponentTypes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IComponentTypes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IComponentTypes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IComponentTypes * This,
                                __RPC__out long *Count);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IComponentTypes * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppNewEnum);
                                               HRESULT ( STDMETHODCALLTYPE *EnumComponentTypes )(
            __RPC__in IComponentTypes * This,
                                __RPC__deref_out_opt IEnumComponentTypes **ppNewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IComponentTypes * This,
                       VARIANT Index,
                                __RPC__deref_out_opt IComponentType **ComponentType);
                                        HRESULT ( STDMETHODCALLTYPE *put_Item )(
            __RPC__in IComponentTypes * This,
                       VARIANT Index,
                       __RPC__in_opt IComponentType *ComponentType);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IComponentTypes * This,
                       __RPC__in_opt IComponentType *ComponentType,
                                __RPC__out VARIANT *NewIndex);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IComponentTypes * This,
                       VARIANT Index);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IComponentTypes * This,
                                __RPC__deref_out_opt IComponentTypes **NewList);
        END_INTERFACE
    } IComponentTypesVtbl;
    interface IComponentTypes
    {
        CONST_VTBL struct IComponentTypesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
    ( (This)->lpVtbl -> EnumComponentTypes(This,ppNewEnum) )
    ( (This)->lpVtbl -> get_Item(This,Index,ComponentType) )
    ( (This)->lpVtbl -> put_Item(This,Index,ComponentType) )
    ( (This)->lpVtbl -> Add(This,ComponentType,NewIndex) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clone(This,NewList) )
EXTERN_C const IID IID_IComponent;
    typedef struct IComponentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IComponent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IComponent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IComponent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IComponent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IComponent * This,
                                __RPC__deref_out_opt IComponentType **CT);
                                                            HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IComponent * This,
                       __RPC__in_opt IComponentType *CT);
                                        HRESULT ( STDMETHODCALLTYPE *get_DescLangID )(
            __RPC__in IComponent * This,
                                __RPC__out long *LangID);
                                        HRESULT ( STDMETHODCALLTYPE *put_DescLangID )(
            __RPC__in IComponent * This,
                       long LangID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IComponent * This,
                                __RPC__out ComponentStatus *Status);
                                        HRESULT ( STDMETHODCALLTYPE *put_Status )(
            __RPC__in IComponent * This,
                       ComponentStatus Status);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IComponent * This,
                                __RPC__deref_out_opt BSTR *Description);
                                                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IComponent * This,
                       __RPC__in BSTR Description);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IComponent * This,
                                __RPC__deref_out_opt IComponent **NewComponent);
        END_INTERFACE
    } IComponentVtbl;
    interface IComponent
    {
        CONST_VTBL struct IComponentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,CT) )
    ( (This)->lpVtbl -> put_Type(This,CT) )
    ( (This)->lpVtbl -> get_DescLangID(This,LangID) )
    ( (This)->lpVtbl -> put_DescLangID(This,LangID) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Status(This,Status) )
    ( (This)->lpVtbl -> get_Description(This,Description) )
    ( (This)->lpVtbl -> put_Description(This,Description) )
    ( (This)->lpVtbl -> Clone(This,NewComponent) )
EXTERN_C const IID IID_IAnalogAudioComponentType;
    typedef struct IAnalogAudioComponentTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnalogAudioComponentType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnalogAudioComponentType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAnalogAudioComponentType * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAnalogAudioComponentType * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAnalogAudioComponentType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__out ComponentCategory *Category);
                                        HRESULT ( STDMETHODCALLTYPE *put_Category )(
            __RPC__in IAnalogAudioComponentType * This,
                       ComponentCategory Category);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaMajorType )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaMajorType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaMajorType )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in BSTR MediaMajorType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaMajorType )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__out GUID *MediaMajorTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaMajorType )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in REFCLSID MediaMajorTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaSubType )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaSubType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaSubType )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in BSTR MediaSubType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaSubType )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__out GUID *MediaSubTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaSubType )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in REFCLSID MediaSubTypeGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_MediaFormatType )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__deref_out_opt BSTR *MediaFormatType);
                                        HRESULT ( STDMETHODCALLTYPE *put_MediaFormatType )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in BSTR MediaFormatType);
                                                            HRESULT ( STDMETHODCALLTYPE *get__MediaFormatType )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__out GUID *MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *put__MediaFormatType )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in REFCLSID MediaFormatTypeGuid);
                                                            HRESULT ( STDMETHODCALLTYPE *get_MediaType )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__out AM_MEDIA_TYPE *MediaType);
                                                            HRESULT ( STDMETHODCALLTYPE *put_MediaType )(
            __RPC__in IAnalogAudioComponentType * This,
                       __RPC__in AM_MEDIA_TYPE *MediaType);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__deref_out_opt IComponentType **NewCT);
                                        HRESULT ( STDMETHODCALLTYPE *get_AnalogAudioMode )(
            __RPC__in IAnalogAudioComponentType * This,
                                __RPC__out TVAudioMode *Mode);
                                        HRESULT ( STDMETHODCALLTYPE *put_AnalogAudioMode )(
            __RPC__in IAnalogAudioComponentType * This,
                       TVAudioMode Mode);
        END_INTERFACE
    } IAnalogAudioComponentTypeVtbl;
    interface IAnalogAudioComponentType
    {
        CONST_VTBL struct IAnalogAudioComponentTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Category(This,Category) )
    ( (This)->lpVtbl -> put_Category(This,Category) )
    ( (This)->lpVtbl -> get_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> put_MediaMajorType(This,MediaMajorType) )
    ( (This)->lpVtbl -> get__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> put__MediaMajorType(This,MediaMajorTypeGuid) )
    ( (This)->lpVtbl -> get_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> put_MediaSubType(This,MediaSubType) )
    ( (This)->lpVtbl -> get__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> put__MediaSubType(This,MediaSubTypeGuid) )
    ( (This)->lpVtbl -> get_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> put_MediaFormatType(This,MediaFormatType) )
    ( (This)->lpVtbl -> get__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> put__MediaFormatType(This,MediaFormatTypeGuid) )
    ( (This)->lpVtbl -> get_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> put_MediaType(This,MediaType) )
    ( (This)->lpVtbl -> Clone(This,NewCT) )
    ( (This)->lpVtbl -> get_AnalogAudioMode(This,Mode) )
    ( (This)->lpVtbl -> put_AnalogAudioMode(This,Mode) )
EXTERN_C const IID IID_IMPEG2Component;
    typedef struct IMPEG2ComponentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMPEG2Component * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMPEG2Component * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMPEG2Component * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMPEG2Component * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMPEG2Component * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMPEG2Component * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMPEG2Component * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IMPEG2Component * This,
                                __RPC__deref_out_opt IComponentType **CT);
                                                            HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in IMPEG2Component * This,
                       __RPC__in_opt IComponentType *CT);
                                        HRESULT ( STDMETHODCALLTYPE *get_DescLangID )(
            __RPC__in IMPEG2Component * This,
                                __RPC__out long *LangID);
                                        HRESULT ( STDMETHODCALLTYPE *put_DescLangID )(
            __RPC__in IMPEG2Component * This,
                       long LangID);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMPEG2Component * This,
                                __RPC__out ComponentStatus *Status);
                                        HRESULT ( STDMETHODCALLTYPE *put_Status )(
            __RPC__in IMPEG2Component * This,
                       ComponentStatus Status);
                                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IMPEG2Component * This,
                                __RPC__deref_out_opt BSTR *Description);
                                                            HRESULT ( STDMETHODCALLTYPE *put_Description )(
            __RPC__in IMPEG2Component * This,
                       __RPC__in BSTR Description);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IMPEG2Component * This,
                                __RPC__deref_out_opt IComponent **NewComponent);
                                        HRESULT ( STDMETHODCALLTYPE *get_PID )(
            __RPC__in IMPEG2Component * This,
                                __RPC__out long *PID);
                                        HRESULT ( STDMETHODCALLTYPE *put_PID )(
            __RPC__in IMPEG2Component * This,
                       long PID);
                                        HRESULT ( STDMETHODCALLTYPE *get_PCRPID )(
            __RPC__in IMPEG2Component * This,
                                __RPC__out long *PCRPID);
                                        HRESULT ( STDMETHODCALLTYPE *put_PCRPID )(
            __RPC__in IMPEG2Component * This,
                       long PCRPID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProgramNumber )(
            __RPC__in IMPEG2Component * This,
                                __RPC__out long *ProgramNumber);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProgramNumber )(
            __RPC__in IMPEG2Component * This,
                       long ProgramNumber);
        END_INTERFACE
    } IMPEG2ComponentVtbl;
    interface IMPEG2Component
    {
        CONST_VTBL struct IMPEG2ComponentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,CT) )
    ( (This)->lpVtbl -> put_Type(This,CT) )
    ( (This)->lpVtbl -> get_DescLangID(This,LangID) )
    ( (This)->lpVtbl -> put_DescLangID(This,LangID) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Status(This,Status) )
    ( (This)->lpVtbl -> get_Description(This,Description) )
    ( (This)->lpVtbl -> put_Description(This,Description) )
    ( (This)->lpVtbl -> Clone(This,NewComponent) )
    ( (This)->lpVtbl -> get_PID(This,PID) )
    ( (This)->lpVtbl -> put_PID(This,PID) )
    ( (This)->lpVtbl -> get_PCRPID(This,PCRPID) )
    ( (This)->lpVtbl -> put_PCRPID(This,PCRPID) )
    ( (This)->lpVtbl -> get_ProgramNumber(This,ProgramNumber) )
    ( (This)->lpVtbl -> put_ProgramNumber(This,ProgramNumber) )
EXTERN_C const IID IID_IEnumComponents;
    typedef struct IEnumComponentsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumComponents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumComponents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumComponents * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumComponents * This,
                       ULONG celt,
                                            __RPC__out_ecount_part(celt, *pceltFetched) IComponent **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumComponents * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumComponents * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumComponents * This,
                        __RPC__deref_out_opt IEnumComponents **ppEnum);
        END_INTERFACE
    } IEnumComponentsVtbl;
    interface IEnumComponents
    {
        CONST_VTBL struct IEnumComponentsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
EXTERN_C const IID IID_IComponents;
    typedef struct IComponentsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IComponents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IComponents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IComponents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IComponents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IComponents * This,
                                __RPC__out long *Count);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IComponents * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppNewEnum);
                                               HRESULT ( STDMETHODCALLTYPE *EnumComponents )(
            __RPC__in IComponents * This,
                                __RPC__deref_out_opt IEnumComponents **ppNewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IComponents * This,
                       VARIANT Index,
                                __RPC__deref_out_opt IComponent **ppComponent);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IComponents * This,
                       __RPC__in_opt IComponent *Component,
                                __RPC__out VARIANT *NewIndex);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IComponents * This,
                       VARIANT Index);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IComponents * This,
                                __RPC__deref_out_opt IComponents **NewList);
                                        HRESULT ( STDMETHODCALLTYPE *put_Item )(
            __RPC__in IComponents * This,
                       VARIANT Index,
                       __RPC__in_opt IComponent *ppComponent);
        END_INTERFACE
    } IComponentsVtbl;
    interface IComponents
    {
        CONST_VTBL struct IComponentsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
    ( (This)->lpVtbl -> EnumComponents(This,ppNewEnum) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppComponent) )
    ( (This)->lpVtbl -> Add(This,Component,NewIndex) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clone(This,NewList) )
    ( (This)->lpVtbl -> put_Item(This,Index,ppComponent) )
EXTERN_C const IID IID_IComponentsOld;
    typedef struct IComponentsOldVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponentsOld * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponentsOld * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponentsOld * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IComponentsOld * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IComponentsOld * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IComponentsOld * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IComponentsOld * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IComponentsOld * This,
                                __RPC__out long *Count);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IComponentsOld * This,
                                __RPC__deref_out_opt IEnumVARIANT **ppNewEnum);
                                               HRESULT ( STDMETHODCALLTYPE *EnumComponents )(
            __RPC__in IComponentsOld * This,
                                __RPC__deref_out_opt IEnumComponents **ppNewEnum);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IComponentsOld * This,
                       VARIANT Index,
                                __RPC__deref_out_opt IComponent **ppComponent);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IComponentsOld * This,
                       __RPC__in_opt IComponent *Component,
                                __RPC__out VARIANT *NewIndex);
                               HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IComponentsOld * This,
                       VARIANT Index);
                           HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IComponentsOld * This,
                                __RPC__deref_out_opt IComponents **NewList);
        END_INTERFACE
    } IComponentsOldVtbl;
    interface IComponentsOld
    {
        CONST_VTBL struct IComponentsOldVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppNewEnum) )
    ( (This)->lpVtbl -> EnumComponents(This,ppNewEnum) )
    ( (This)->lpVtbl -> get_Item(This,Index,ppComponent) )
    ( (This)->lpVtbl -> Add(This,Component,NewIndex) )
    ( (This)->lpVtbl -> Remove(This,Index) )
    ( (This)->lpVtbl -> Clone(This,NewList) )
EXTERN_C const IID IID_ILocator;
    typedef struct ILocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ILocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ILocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ILocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ILocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ILocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ILocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ILocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in ILocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in ILocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in ILocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in ILocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in ILocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in ILocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in ILocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in ILocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in ILocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in ILocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in ILocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in ILocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in ILocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in ILocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ILocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
        END_INTERFACE
    } ILocatorVtbl;
    interface ILocator
    {
        CONST_VTBL struct ILocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
EXTERN_C const IID IID_IAnalogLocator;
    typedef struct IAnalogLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAnalogLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAnalogLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAnalogLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IAnalogLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IAnalogLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IAnalogLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IAnalogLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IAnalogLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IAnalogLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IAnalogLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IAnalogLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IAnalogLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IAnalogLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IAnalogLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IAnalogLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_VideoStandard )(
            __RPC__in IAnalogLocator * This,
                                __RPC__out AnalogVideoStandard *AVS);
                                        HRESULT ( STDMETHODCALLTYPE *put_VideoStandard )(
            __RPC__in IAnalogLocator * This,
                       AnalogVideoStandard AVS);
        END_INTERFACE
    } IAnalogLocatorVtbl;
    interface IAnalogLocator
    {
        CONST_VTBL struct IAnalogLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_VideoStandard(This,AVS) )
    ( (This)->lpVtbl -> put_VideoStandard(This,AVS) )
EXTERN_C const IID IID_IDigitalLocator;
    typedef struct IDigitalLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDigitalLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDigitalLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDigitalLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDigitalLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDigitalLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDigitalLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDigitalLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IDigitalLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IDigitalLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IDigitalLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IDigitalLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IDigitalLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IDigitalLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IDigitalLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IDigitalLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IDigitalLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IDigitalLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IDigitalLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IDigitalLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IDigitalLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IDigitalLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDigitalLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
        END_INTERFACE
    } IDigitalLocatorVtbl;
    interface IDigitalLocator
    {
        CONST_VTBL struct IDigitalLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
EXTERN_C const IID IID_IATSCLocator;
    typedef struct IATSCLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSCLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSCLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSCLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IATSCLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IATSCLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IATSCLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IATSCLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IATSCLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IATSCLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IATSCLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IATSCLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IATSCLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IATSCLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IATSCLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IATSCLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IATSCLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IATSCLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IATSCLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IATSCLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IATSCLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IATSCLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IATSCLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhysicalChannel )(
            __RPC__in IATSCLocator * This,
                                __RPC__out long *PhysicalChannel);
                                        HRESULT ( STDMETHODCALLTYPE *put_PhysicalChannel )(
            __RPC__in IATSCLocator * This,
                       long PhysicalChannel);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IATSCLocator * This,
                                __RPC__out long *TSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_TSID )(
            __RPC__in IATSCLocator * This,
                       long TSID);
        END_INTERFACE
    } IATSCLocatorVtbl;
    interface IATSCLocator
    {
        CONST_VTBL struct IATSCLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_PhysicalChannel(This,PhysicalChannel) )
    ( (This)->lpVtbl -> put_PhysicalChannel(This,PhysicalChannel) )
    ( (This)->lpVtbl -> get_TSID(This,TSID) )
    ( (This)->lpVtbl -> put_TSID(This,TSID) )
EXTERN_C const IID IID_IATSCLocator2;
    typedef struct IATSCLocator2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSCLocator2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSCLocator2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSCLocator2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IATSCLocator2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IATSCLocator2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IATSCLocator2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IATSCLocator2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IATSCLocator2 * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IATSCLocator2 * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IATSCLocator2 * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IATSCLocator2 * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IATSCLocator2 * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IATSCLocator2 * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IATSCLocator2 * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhysicalChannel )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out long *PhysicalChannel);
                                        HRESULT ( STDMETHODCALLTYPE *put_PhysicalChannel )(
            __RPC__in IATSCLocator2 * This,
                       long PhysicalChannel);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out long *TSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_TSID )(
            __RPC__in IATSCLocator2 * This,
                       long TSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProgramNumber )(
            __RPC__in IATSCLocator2 * This,
                                __RPC__out long *ProgramNumber);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProgramNumber )(
            __RPC__in IATSCLocator2 * This,
                       long ProgramNumber);
        END_INTERFACE
    } IATSCLocator2Vtbl;
    interface IATSCLocator2
    {
        CONST_VTBL struct IATSCLocator2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_PhysicalChannel(This,PhysicalChannel) )
    ( (This)->lpVtbl -> put_PhysicalChannel(This,PhysicalChannel) )
    ( (This)->lpVtbl -> get_TSID(This,TSID) )
    ( (This)->lpVtbl -> put_TSID(This,TSID) )
    ( (This)->lpVtbl -> get_ProgramNumber(This,ProgramNumber) )
    ( (This)->lpVtbl -> put_ProgramNumber(This,ProgramNumber) )
EXTERN_C const IID IID_IDigitalCableLocator;
    typedef struct IDigitalCableLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDigitalCableLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDigitalCableLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDigitalCableLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDigitalCableLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDigitalCableLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDigitalCableLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDigitalCableLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IDigitalCableLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IDigitalCableLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IDigitalCableLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IDigitalCableLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IDigitalCableLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IDigitalCableLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IDigitalCableLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhysicalChannel )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out long *PhysicalChannel);
                                        HRESULT ( STDMETHODCALLTYPE *put_PhysicalChannel )(
            __RPC__in IDigitalCableLocator * This,
                       long PhysicalChannel);
                                        HRESULT ( STDMETHODCALLTYPE *get_TSID )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out long *TSID);
                                        HRESULT ( STDMETHODCALLTYPE *put_TSID )(
            __RPC__in IDigitalCableLocator * This,
                       long TSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProgramNumber )(
            __RPC__in IDigitalCableLocator * This,
                                __RPC__out long *ProgramNumber);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProgramNumber )(
            __RPC__in IDigitalCableLocator * This,
                       long ProgramNumber);
        END_INTERFACE
    } IDigitalCableLocatorVtbl;
    interface IDigitalCableLocator
    {
        CONST_VTBL struct IDigitalCableLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_PhysicalChannel(This,PhysicalChannel) )
    ( (This)->lpVtbl -> put_PhysicalChannel(This,PhysicalChannel) )
    ( (This)->lpVtbl -> get_TSID(This,TSID) )
    ( (This)->lpVtbl -> put_TSID(This,TSID) )
    ( (This)->lpVtbl -> get_ProgramNumber(This,ProgramNumber) )
    ( (This)->lpVtbl -> put_ProgramNumber(This,ProgramNumber) )
EXTERN_C const IID IID_IDVBTLocator;
    typedef struct IDVBTLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBTLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBTLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBTLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBTLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBTLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBTLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBTLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IDVBTLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IDVBTLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IDVBTLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IDVBTLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IDVBTLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IDVBTLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IDVBTLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBTLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out long *BandWidthVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )(
            __RPC__in IDVBTLocator * This,
                       long BandwidthVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LPInnerFEC )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_LPInnerFEC )(
            __RPC__in IDVBTLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_LPInnerFECRate )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_LPInnerFECRate )(
            __RPC__in IDVBTLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_HAlpha )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out HierarchyAlpha *Alpha);
                                        HRESULT ( STDMETHODCALLTYPE *put_HAlpha )(
            __RPC__in IDVBTLocator * This,
                       HierarchyAlpha Alpha);
                                        HRESULT ( STDMETHODCALLTYPE *get_Guard )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out GuardInterval *GI);
                                        HRESULT ( STDMETHODCALLTYPE *put_Guard )(
            __RPC__in IDVBTLocator * This,
                       GuardInterval GI);
                                        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out TransmissionMode *mode);
                                        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in IDVBTLocator * This,
                       TransmissionMode mode);
                                        HRESULT ( STDMETHODCALLTYPE *get_OtherFrequencyInUse )(
            __RPC__in IDVBTLocator * This,
                                __RPC__out VARIANT_BOOL *OtherFrequencyInUseVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_OtherFrequencyInUse )(
            __RPC__in IDVBTLocator * This,
                       VARIANT_BOOL OtherFrequencyInUseVal);
        END_INTERFACE
    } IDVBTLocatorVtbl;
    interface IDVBTLocator
    {
        CONST_VTBL struct IDVBTLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_Bandwidth(This,BandWidthVal) )
    ( (This)->lpVtbl -> put_Bandwidth(This,BandwidthVal) )
    ( (This)->lpVtbl -> get_LPInnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_LPInnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_LPInnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_LPInnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_HAlpha(This,Alpha) )
    ( (This)->lpVtbl -> put_HAlpha(This,Alpha) )
    ( (This)->lpVtbl -> get_Guard(This,GI) )
    ( (This)->lpVtbl -> put_Guard(This,GI) )
    ( (This)->lpVtbl -> get_Mode(This,mode) )
    ( (This)->lpVtbl -> put_Mode(This,mode) )
    ( (This)->lpVtbl -> get_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
    ( (This)->lpVtbl -> put_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
EXTERN_C const IID IID_IDVBTLocator2;
    typedef struct IDVBTLocator2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBTLocator2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBTLocator2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBTLocator2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBTLocator2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBTLocator2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBTLocator2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBTLocator2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IDVBTLocator2 * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IDVBTLocator2 * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IDVBTLocator2 * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IDVBTLocator2 * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IDVBTLocator2 * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IDVBTLocator2 * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IDVBTLocator2 * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_Bandwidth )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out long *BandWidthVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Bandwidth )(
            __RPC__in IDVBTLocator2 * This,
                       long BandwidthVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LPInnerFEC )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_LPInnerFEC )(
            __RPC__in IDVBTLocator2 * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_LPInnerFECRate )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_LPInnerFECRate )(
            __RPC__in IDVBTLocator2 * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_HAlpha )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out HierarchyAlpha *Alpha);
                                        HRESULT ( STDMETHODCALLTYPE *put_HAlpha )(
            __RPC__in IDVBTLocator2 * This,
                       HierarchyAlpha Alpha);
                                        HRESULT ( STDMETHODCALLTYPE *get_Guard )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out GuardInterval *GI);
                                        HRESULT ( STDMETHODCALLTYPE *put_Guard )(
            __RPC__in IDVBTLocator2 * This,
                       GuardInterval GI);
                                        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out TransmissionMode *mode);
                                        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in IDVBTLocator2 * This,
                       TransmissionMode mode);
                                        HRESULT ( STDMETHODCALLTYPE *get_OtherFrequencyInUse )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out VARIANT_BOOL *OtherFrequencyInUseVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_OtherFrequencyInUse )(
            __RPC__in IDVBTLocator2 * This,
                       VARIANT_BOOL OtherFrequencyInUseVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhysicalLayerPipeId )(
            __RPC__in IDVBTLocator2 * This,
                                __RPC__out long *PhysicalLayerPipeIdVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_PhysicalLayerPipeId )(
            __RPC__in IDVBTLocator2 * This,
                       long PhysicalLayerPipeIdVal);
        END_INTERFACE
    } IDVBTLocator2Vtbl;
    interface IDVBTLocator2
    {
        CONST_VTBL struct IDVBTLocator2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_Bandwidth(This,BandWidthVal) )
    ( (This)->lpVtbl -> put_Bandwidth(This,BandwidthVal) )
    ( (This)->lpVtbl -> get_LPInnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_LPInnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_LPInnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_LPInnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_HAlpha(This,Alpha) )
    ( (This)->lpVtbl -> put_HAlpha(This,Alpha) )
    ( (This)->lpVtbl -> get_Guard(This,GI) )
    ( (This)->lpVtbl -> put_Guard(This,GI) )
    ( (This)->lpVtbl -> get_Mode(This,mode) )
    ( (This)->lpVtbl -> put_Mode(This,mode) )
    ( (This)->lpVtbl -> get_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
    ( (This)->lpVtbl -> put_OtherFrequencyInUse(This,OtherFrequencyInUseVal) )
    ( (This)->lpVtbl -> get_PhysicalLayerPipeId(This,PhysicalLayerPipeIdVal) )
    ( (This)->lpVtbl -> put_PhysicalLayerPipeId(This,PhysicalLayerPipeIdVal) )
EXTERN_C const IID IID_IDVBSLocator;
    typedef struct IDVBSLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBSLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBSLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBSLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBSLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBSLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBSLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBSLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IDVBSLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IDVBSLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IDVBSLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IDVBSLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IDVBSLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IDVBSLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IDVBSLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBSLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignalPolarisation )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out Polarisation *PolarisationVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SignalPolarisation )(
            __RPC__in IDVBSLocator * This,
                       Polarisation PolarisationVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WestPosition )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out VARIANT_BOOL *WestLongitude);
                                        HRESULT ( STDMETHODCALLTYPE *put_WestPosition )(
            __RPC__in IDVBSLocator * This,
                       VARIANT_BOOL WestLongitude);
                                        HRESULT ( STDMETHODCALLTYPE *get_OrbitalPosition )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out long *longitude);
                                        HRESULT ( STDMETHODCALLTYPE *put_OrbitalPosition )(
            __RPC__in IDVBSLocator * This,
                       long longitude);
                                        HRESULT ( STDMETHODCALLTYPE *get_Azimuth )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out long *Azimuth);
                                        HRESULT ( STDMETHODCALLTYPE *put_Azimuth )(
            __RPC__in IDVBSLocator * This,
                       long Azimuth);
                                        HRESULT ( STDMETHODCALLTYPE *get_Elevation )(
            __RPC__in IDVBSLocator * This,
                                __RPC__out long *Elevation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Elevation )(
            __RPC__in IDVBSLocator * This,
                       long Elevation);
        END_INTERFACE
    } IDVBSLocatorVtbl;
    interface IDVBSLocator
    {
        CONST_VTBL struct IDVBSLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_SignalPolarisation(This,PolarisationVal) )
    ( (This)->lpVtbl -> put_SignalPolarisation(This,PolarisationVal) )
    ( (This)->lpVtbl -> get_WestPosition(This,WestLongitude) )
    ( (This)->lpVtbl -> put_WestPosition(This,WestLongitude) )
    ( (This)->lpVtbl -> get_OrbitalPosition(This,longitude) )
    ( (This)->lpVtbl -> put_OrbitalPosition(This,longitude) )
    ( (This)->lpVtbl -> get_Azimuth(This,Azimuth) )
    ( (This)->lpVtbl -> put_Azimuth(This,Azimuth) )
    ( (This)->lpVtbl -> get_Elevation(This,Elevation) )
    ( (This)->lpVtbl -> put_Elevation(This,Elevation) )
EXTERN_C const IID IID_IDVBSLocator2;
    typedef struct IDVBSLocator2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBSLocator2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBSLocator2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBSLocator2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBSLocator2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBSLocator2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBSLocator2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBSLocator2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IDVBSLocator2 * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IDVBSLocator2 * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IDVBSLocator2 * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IDVBSLocator2 * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IDVBSLocator2 * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IDVBSLocator2 * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IDVBSLocator2 * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignalPolarisation )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out Polarisation *PolarisationVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SignalPolarisation )(
            __RPC__in IDVBSLocator2 * This,
                       Polarisation PolarisationVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WestPosition )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out VARIANT_BOOL *WestLongitude);
                                        HRESULT ( STDMETHODCALLTYPE *put_WestPosition )(
            __RPC__in IDVBSLocator2 * This,
                       VARIANT_BOOL WestLongitude);
                                        HRESULT ( STDMETHODCALLTYPE *get_OrbitalPosition )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *longitude);
                                        HRESULT ( STDMETHODCALLTYPE *put_OrbitalPosition )(
            __RPC__in IDVBSLocator2 * This,
                       long longitude);
                                        HRESULT ( STDMETHODCALLTYPE *get_Azimuth )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *Azimuth);
                                        HRESULT ( STDMETHODCALLTYPE *put_Azimuth )(
            __RPC__in IDVBSLocator2 * This,
                       long Azimuth);
                                        HRESULT ( STDMETHODCALLTYPE *get_Elevation )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *Elevation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Elevation )(
            __RPC__in IDVBSLocator2 * This,
                       long Elevation);
                                        HRESULT ( STDMETHODCALLTYPE *get_DiseqLNBSource )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out LNB_Source *DiseqLNBSourceVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DiseqLNBSource )(
            __RPC__in IDVBSLocator2 * This,
                       LNB_Source DiseqLNBSourceVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalOscillatorOverrideLow )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *LocalOscillatorOverrideLowVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LocalOscillatorOverrideLow )(
            __RPC__in IDVBSLocator2 * This,
                       long LocalOscillatorOverrideLowVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalOscillatorOverrideHigh )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *LocalOscillatorOverrideHighVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LocalOscillatorOverrideHigh )(
            __RPC__in IDVBSLocator2 * This,
                       long LocalOscillatorOverrideHighVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalLNBSwitchOverride )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out long *LocalLNBSwitchOverrideVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LocalLNBSwitchOverride )(
            __RPC__in IDVBSLocator2 * This,
                       long LocalLNBSwitchOverrideVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalSpectralInversionOverride )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out SpectralInversion *LocalSpectralInversionOverrideVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LocalSpectralInversionOverride )(
            __RPC__in IDVBSLocator2 * This,
                       SpectralInversion LocalSpectralInversionOverrideVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignalRollOff )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out RollOff *RollOffVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SignalRollOff )(
            __RPC__in IDVBSLocator2 * This,
                       RollOff RollOffVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignalPilot )(
            __RPC__in IDVBSLocator2 * This,
                                __RPC__out Pilot *PilotVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SignalPilot )(
            __RPC__in IDVBSLocator2 * This,
                       Pilot PilotVal);
        END_INTERFACE
    } IDVBSLocator2Vtbl;
    interface IDVBSLocator2
    {
        CONST_VTBL struct IDVBSLocator2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_SignalPolarisation(This,PolarisationVal) )
    ( (This)->lpVtbl -> put_SignalPolarisation(This,PolarisationVal) )
    ( (This)->lpVtbl -> get_WestPosition(This,WestLongitude) )
    ( (This)->lpVtbl -> put_WestPosition(This,WestLongitude) )
    ( (This)->lpVtbl -> get_OrbitalPosition(This,longitude) )
    ( (This)->lpVtbl -> put_OrbitalPosition(This,longitude) )
    ( (This)->lpVtbl -> get_Azimuth(This,Azimuth) )
    ( (This)->lpVtbl -> put_Azimuth(This,Azimuth) )
    ( (This)->lpVtbl -> get_Elevation(This,Elevation) )
    ( (This)->lpVtbl -> put_Elevation(This,Elevation) )
    ( (This)->lpVtbl -> get_DiseqLNBSource(This,DiseqLNBSourceVal) )
    ( (This)->lpVtbl -> put_DiseqLNBSource(This,DiseqLNBSourceVal) )
    ( (This)->lpVtbl -> get_LocalOscillatorOverrideLow(This,LocalOscillatorOverrideLowVal) )
    ( (This)->lpVtbl -> put_LocalOscillatorOverrideLow(This,LocalOscillatorOverrideLowVal) )
    ( (This)->lpVtbl -> get_LocalOscillatorOverrideHigh(This,LocalOscillatorOverrideHighVal) )
    ( (This)->lpVtbl -> put_LocalOscillatorOverrideHigh(This,LocalOscillatorOverrideHighVal) )
    ( (This)->lpVtbl -> get_LocalLNBSwitchOverride(This,LocalLNBSwitchOverrideVal) )
    ( (This)->lpVtbl -> put_LocalLNBSwitchOverride(This,LocalLNBSwitchOverrideVal) )
    ( (This)->lpVtbl -> get_LocalSpectralInversionOverride(This,LocalSpectralInversionOverrideVal) )
    ( (This)->lpVtbl -> put_LocalSpectralInversionOverride(This,LocalSpectralInversionOverrideVal) )
    ( (This)->lpVtbl -> get_SignalRollOff(This,RollOffVal) )
    ( (This)->lpVtbl -> put_SignalRollOff(This,RollOffVal) )
    ( (This)->lpVtbl -> get_SignalPilot(This,PilotVal) )
    ( (This)->lpVtbl -> put_SignalPilot(This,PilotVal) )
EXTERN_C const IID IID_IDVBCLocator;
    typedef struct IDVBCLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDVBCLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDVBCLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDVBCLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDVBCLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDVBCLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDVBCLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDVBCLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IDVBCLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IDVBCLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IDVBCLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IDVBCLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IDVBCLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IDVBCLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IDVBCLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IDVBCLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IDVBCLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IDVBCLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IDVBCLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IDVBCLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IDVBCLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IDVBCLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IDVBCLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
        END_INTERFACE
    } IDVBCLocatorVtbl;
    interface IDVBCLocator
    {
        CONST_VTBL struct IDVBCLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
EXTERN_C const IID IID_IISDBSLocator;
    typedef struct IISDBSLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IISDBSLocator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IISDBSLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IISDBSLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IISDBSLocator * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IISDBSLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IISDBSLocator * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IISDBSLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CarrierFrequency )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out long *Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *put_CarrierFrequency )(
            __RPC__in IISDBSLocator * This,
                       long Frequency);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFEC )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFEC )(
            __RPC__in IISDBSLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_InnerFECRate )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_InnerFECRate )(
            __RPC__in IISDBSLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFEC )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out FECMethod *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFEC )(
            __RPC__in IISDBSLocator * This,
                       FECMethod FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_OuterFECRate )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out BinaryConvolutionCodeRate *FEC);
                                        HRESULT ( STDMETHODCALLTYPE *put_OuterFECRate )(
            __RPC__in IISDBSLocator * This,
                       BinaryConvolutionCodeRate FEC);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modulation )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out ModulationType *Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Modulation )(
            __RPC__in IISDBSLocator * This,
                       ModulationType Modulation);
                                        HRESULT ( STDMETHODCALLTYPE *get_SymbolRate )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_SymbolRate )(
            __RPC__in IISDBSLocator * This,
                       long Rate);
                               HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IISDBSLocator * This,
                                __RPC__deref_out_opt ILocator **NewLocator);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignalPolarisation )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out Polarisation *PolarisationVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SignalPolarisation )(
            __RPC__in IISDBSLocator * This,
                       Polarisation PolarisationVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_WestPosition )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out VARIANT_BOOL *WestLongitude);
                                        HRESULT ( STDMETHODCALLTYPE *put_WestPosition )(
            __RPC__in IISDBSLocator * This,
                       VARIANT_BOOL WestLongitude);
                                        HRESULT ( STDMETHODCALLTYPE *get_OrbitalPosition )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out long *longitude);
                                        HRESULT ( STDMETHODCALLTYPE *put_OrbitalPosition )(
            __RPC__in IISDBSLocator * This,
                       long longitude);
                                        HRESULT ( STDMETHODCALLTYPE *get_Azimuth )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out long *Azimuth);
                                        HRESULT ( STDMETHODCALLTYPE *put_Azimuth )(
            __RPC__in IISDBSLocator * This,
                       long Azimuth);
                                        HRESULT ( STDMETHODCALLTYPE *get_Elevation )(
            __RPC__in IISDBSLocator * This,
                                __RPC__out long *Elevation);
                                        HRESULT ( STDMETHODCALLTYPE *put_Elevation )(
            __RPC__in IISDBSLocator * This,
                       long Elevation);
        END_INTERFACE
    } IISDBSLocatorVtbl;
    interface IISDBSLocator
    {
        CONST_VTBL struct IISDBSLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> put_CarrierFrequency(This,Frequency) )
    ( (This)->lpVtbl -> get_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFEC(This,FEC) )
    ( (This)->lpVtbl -> get_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_InnerFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFEC(This,FEC) )
    ( (This)->lpVtbl -> get_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> put_OuterFECRate(This,FEC) )
    ( (This)->lpVtbl -> get_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> put_Modulation(This,Modulation) )
    ( (This)->lpVtbl -> get_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> put_SymbolRate(This,Rate) )
    ( (This)->lpVtbl -> Clone(This,NewLocator) )
    ( (This)->lpVtbl -> get_SignalPolarisation(This,PolarisationVal) )
    ( (This)->lpVtbl -> put_SignalPolarisation(This,PolarisationVal) )
    ( (This)->lpVtbl -> get_WestPosition(This,WestLongitude) )
    ( (This)->lpVtbl -> put_WestPosition(This,WestLongitude) )
    ( (This)->lpVtbl -> get_OrbitalPosition(This,longitude) )
    ( (This)->lpVtbl -> put_OrbitalPosition(This,longitude) )
    ( (This)->lpVtbl -> get_Azimuth(This,Azimuth) )
    ( (This)->lpVtbl -> put_Azimuth(This,Azimuth) )
    ( (This)->lpVtbl -> get_Elevation(This,Elevation) )
    ( (This)->lpVtbl -> put_Elevation(This,Elevation) )
EXTERN_C const IID IID_IESOpenMmiEvent;
    typedef struct IESOpenMmiEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESOpenMmiEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESOpenMmiEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESOpenMmiEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESOpenMmiEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESOpenMmiEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESOpenMmiEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESOpenMmiEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESOpenMmiEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        HRESULT ( STDMETHODCALLTYPE *GetDialogNumber )(
            __RPC__in IESOpenMmiEvent * This,
                        __RPC__out DWORD *pDialogRequest,
                                __RPC__out DWORD *pDialogNumber);
        HRESULT ( STDMETHODCALLTYPE *GetDialogType )(
            __RPC__in IESOpenMmiEvent * This,
                                __RPC__out GUID *guidDialogType);
        HRESULT ( STDMETHODCALLTYPE *GetDialogData )(
            __RPC__in IESOpenMmiEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetDialogStringData )(
            __RPC__in IESOpenMmiEvent * This,
                        __RPC__deref_out_opt BSTR *pbstrBaseUrl,
                                __RPC__deref_out_opt BSTR *pbstrData);
        END_INTERFACE
    } IESOpenMmiEventVtbl;
    interface IESOpenMmiEvent
    {
        CONST_VTBL struct IESOpenMmiEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
    ( (This)->lpVtbl -> GetDialogNumber(This,pDialogRequest,pDialogNumber) )
    ( (This)->lpVtbl -> GetDialogType(This,guidDialogType) )
    ( (This)->lpVtbl -> GetDialogData(This,pbData) )
    ( (This)->lpVtbl -> GetDialogStringData(This,pbstrBaseUrl,pbstrData) )
EXTERN_C const IID IID_IESCloseMmiEvent;
    typedef struct IESCloseMmiEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESCloseMmiEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESCloseMmiEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESCloseMmiEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESCloseMmiEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESCloseMmiEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESCloseMmiEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESCloseMmiEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESCloseMmiEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        HRESULT ( STDMETHODCALLTYPE *GetDialogNumber )(
            __RPC__in IESCloseMmiEvent * This,
                                __RPC__out DWORD *pDialogNumber);
        END_INTERFACE
    } IESCloseMmiEventVtbl;
    interface IESCloseMmiEvent
    {
        CONST_VTBL struct IESCloseMmiEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
    ( (This)->lpVtbl -> GetDialogNumber(This,pDialogNumber) )
EXTERN_C const IID IID_IESValueUpdatedEvent;
    typedef struct IESValueUpdatedEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESValueUpdatedEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESValueUpdatedEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESValueUpdatedEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESValueUpdatedEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESValueUpdatedEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESValueUpdatedEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESValueUpdatedEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESValueUpdatedEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        HRESULT ( STDMETHODCALLTYPE *GetValueNames )(
            __RPC__in IESValueUpdatedEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbstrNames);
        END_INTERFACE
    } IESValueUpdatedEventVtbl;
    interface IESValueUpdatedEvent
    {
        CONST_VTBL struct IESValueUpdatedEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
    ( (This)->lpVtbl -> GetValueNames(This,pbstrNames) )
EXTERN_C const IID IID_IESRequestTunerEvent;
    typedef struct IESRequestTunerEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESRequestTunerEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESRequestTunerEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESRequestTunerEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESRequestTunerEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__out BYTE *pbyPriority);
        HRESULT ( STDMETHODCALLTYPE *GetReason )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__out BYTE *pbyReason);
        HRESULT ( STDMETHODCALLTYPE *GetConsequences )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__out BYTE *pbyConsequences);
        HRESULT ( STDMETHODCALLTYPE *GetEstimatedTime )(
            __RPC__in IESRequestTunerEvent * This,
                                __RPC__out DWORD *pdwEstimatedTime);
        END_INTERFACE
    } IESRequestTunerEventVtbl;
    interface IESRequestTunerEvent
    {
        CONST_VTBL struct IESRequestTunerEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
    ( (This)->lpVtbl -> GetPriority(This,pbyPriority) )
    ( (This)->lpVtbl -> GetReason(This,pbyReason) )
    ( (This)->lpVtbl -> GetConsequences(This,pbyConsequences) )
    ( (This)->lpVtbl -> GetEstimatedTime(This,pdwEstimatedTime) )
EXTERN_C const IID IID_IESIsdbCasResponseEvent;
    typedef struct IESIsdbCasResponseEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESIsdbCasResponseEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESIsdbCasResponseEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESIsdbCasResponseEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESIsdbCasResponseEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        HRESULT ( STDMETHODCALLTYPE *GetRequestId )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__out DWORD *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__out DWORD *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetDataLength )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__out DWORD *pRequestLength);
        HRESULT ( STDMETHODCALLTYPE *GetResponseData )(
            __RPC__in IESIsdbCasResponseEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        END_INTERFACE
    } IESIsdbCasResponseEventVtbl;
    interface IESIsdbCasResponseEvent
    {
        CONST_VTBL struct IESIsdbCasResponseEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
    ( (This)->lpVtbl -> GetRequestId(This,pRequestId) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetDataLength(This,pRequestLength) )
    ( (This)->lpVtbl -> GetResponseData(This,pbData) )
EXTERN_C const IID IID_IGpnvsCommonBase;
    typedef struct IGpnvsCommonBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IGpnvsCommonBase * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IGpnvsCommonBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IGpnvsCommonBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetValueUpdateName )(
            __RPC__in IGpnvsCommonBase * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
        END_INTERFACE
    } IGpnvsCommonBaseVtbl;
    interface IGpnvsCommonBase
    {
        CONST_VTBL struct IGpnvsCommonBaseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetValueUpdateName(This,pbstrName) )
EXTERN_C const IID IID_IESEventFactory;
    typedef struct IESEventFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESEventFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESEventFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESEventFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreateESEvent )(
            __RPC__in IESEventFactory * This,
                       __RPC__in_opt IUnknown *pServiceProvider,
                       DWORD dwEventId,
                       GUID guidEventType,
                       DWORD dwEventDataLength,
                                __RPC__in_ecount_full(dwEventDataLength) BYTE *pEventData,
                       __RPC__in BSTR bstrBaseUrl,
                       __RPC__in_opt IUnknown *pInitContext,
                                __RPC__deref_out_opt IESEvent **ppESEvent);
        END_INTERFACE
    } IESEventFactoryVtbl;
    interface IESEventFactory
    {
        CONST_VTBL struct IESEventFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateESEvent(This,pServiceProvider,dwEventId,guidEventType,dwEventDataLength,pEventData,bstrBaseUrl,pInitContext,ppESEvent) )
EXTERN_C const IID IID_IESLicenseRenewalResultEvent;
    typedef struct IESLicenseRenewalResultEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESLicenseRenewalResultEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESLicenseRenewalResultEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        HRESULT ( STDMETHODCALLTYPE *GetCallersId )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out DWORD *pdwCallersId);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrFilename);
        HRESULT ( STDMETHODCALLTYPE *IsRenewalSuccessful )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out BOOL *pfRenewalSuccessful);
        HRESULT ( STDMETHODCALLTYPE *IsCheckEntitlementCallRequired )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out BOOL *pfCheckEntTokenCallNeeded);
        HRESULT ( STDMETHODCALLTYPE *GetDescrambledStatus )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out DWORD *pDescrambledStatus);
        HRESULT ( STDMETHODCALLTYPE *GetRenewalResultCode )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out DWORD *pdwRenewalResultCode);
        HRESULT ( STDMETHODCALLTYPE *GetCASFailureCode )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out DWORD *pdwCASFailureCode);
        HRESULT ( STDMETHODCALLTYPE *GetRenewalHResult )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out HRESULT *phr);
        HRESULT ( STDMETHODCALLTYPE *GetEntitlementTokenLength )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetEntitlementToken )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetExpiryDate )(
            __RPC__in IESLicenseRenewalResultEvent * This,
                                __RPC__out DWORD64 *pqwExpiryDate);
        END_INTERFACE
    } IESLicenseRenewalResultEventVtbl;
    interface IESLicenseRenewalResultEvent
    {
        CONST_VTBL struct IESLicenseRenewalResultEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
    ( (This)->lpVtbl -> GetCallersId(This,pdwCallersId) )
    ( (This)->lpVtbl -> GetFileName(This,pbstrFilename) )
    ( (This)->lpVtbl -> IsRenewalSuccessful(This,pfRenewalSuccessful) )
    ( (This)->lpVtbl -> IsCheckEntitlementCallRequired(This,pfCheckEntTokenCallNeeded) )
    ( (This)->lpVtbl -> GetDescrambledStatus(This,pDescrambledStatus) )
    ( (This)->lpVtbl -> GetRenewalResultCode(This,pdwRenewalResultCode) )
    ( (This)->lpVtbl -> GetCASFailureCode(This,pdwCASFailureCode) )
    ( (This)->lpVtbl -> GetRenewalHResult(This,phr) )
    ( (This)->lpVtbl -> GetEntitlementTokenLength(This,pdwLength) )
    ( (This)->lpVtbl -> GetEntitlementToken(This,pbData) )
    ( (This)->lpVtbl -> GetExpiryDate(This,pqwExpiryDate) )
EXTERN_C const IID IID_IESFileExpiryDateEvent;
    typedef struct IESFileExpiryDateEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESFileExpiryDateEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESFileExpiryDateEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESFileExpiryDateEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEventId )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out DWORD *pdwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetEventType )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out GUID *pguidEventType);
        HRESULT ( STDMETHODCALLTYPE *SetCompletionStatus )(
            __RPC__in IESFileExpiryDateEvent * This,
                       DWORD dwResult);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__deref_out_opt SAFEARRAY * *pbData);
        HRESULT ( STDMETHODCALLTYPE *GetStringData )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__deref_out_opt BSTR *pbstrData);
        HRESULT ( STDMETHODCALLTYPE *GetTunerId )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out GUID *pguidTunerId);
        HRESULT ( STDMETHODCALLTYPE *GetExpiryDate )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out DWORD64 *pqwExpiryDate);
        HRESULT ( STDMETHODCALLTYPE *GetFinalExpiryDate )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out DWORD64 *pqwExpiryDate);
        HRESULT ( STDMETHODCALLTYPE *GetMaxRenewalCount )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out DWORD *dwMaxRenewalCount);
        HRESULT ( STDMETHODCALLTYPE *IsEntitlementTokenPresent )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out BOOL *pfEntTokenPresent);
        HRESULT ( STDMETHODCALLTYPE *DoesExpireAfterFirstUse )(
            __RPC__in IESFileExpiryDateEvent * This,
                                __RPC__out BOOL *pfExpireAfterFirstUse);
        END_INTERFACE
    } IESFileExpiryDateEventVtbl;
    interface IESFileExpiryDateEvent
    {
        CONST_VTBL struct IESFileExpiryDateEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEventId(This,pdwEventId) )
    ( (This)->lpVtbl -> GetEventType(This,pguidEventType) )
    ( (This)->lpVtbl -> SetCompletionStatus(This,dwResult) )
    ( (This)->lpVtbl -> GetData(This,pbData) )
    ( (This)->lpVtbl -> GetStringData(This,pbstrData) )
    ( (This)->lpVtbl -> GetTunerId(This,pguidTunerId) )
    ( (This)->lpVtbl -> GetExpiryDate(This,pqwExpiryDate) )
    ( (This)->lpVtbl -> GetFinalExpiryDate(This,pqwExpiryDate) )
    ( (This)->lpVtbl -> GetMaxRenewalCount(This,dwMaxRenewalCount) )
    ( (This)->lpVtbl -> IsEntitlementTokenPresent(This,pfEntTokenPresent) )
    ( (This)->lpVtbl -> DoesExpireAfterFirstUse(This,pfExpireAfterFirstUse) )
EXTERN_C const IID IID_IESEventService;
    typedef struct IESEventServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESEventService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESEventService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESEventService * This);
        HRESULT ( STDMETHODCALLTYPE *FireESEvent )(
            __RPC__in IESEventService * This,
            __RPC__in_opt IESEvent *pESEvent);
        END_INTERFACE
    } IESEventServiceVtbl;
    interface IESEventService
    {
        CONST_VTBL struct IESEventServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FireESEvent(This,pESEvent) )
EXTERN_C const IID IID_IESEventServiceConfiguration;
    typedef struct IESEventServiceConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IESEventServiceConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IESEventServiceConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IESEventServiceConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *SetParent )(
            __RPC__in IESEventServiceConfiguration * This,
            __RPC__in_opt IESEventService *pEventService);
        HRESULT ( STDMETHODCALLTYPE *RemoveParent )(
            __RPC__in IESEventServiceConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *SetOwner )(
            __RPC__in IESEventServiceConfiguration * This,
            __RPC__in_opt IESEvents *pESEvents);
        HRESULT ( STDMETHODCALLTYPE *RemoveOwner )(
            __RPC__in IESEventServiceConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *SetGraph )(
            __RPC__in IESEventServiceConfiguration * This,
            __RPC__in_opt IFilterGraph *pGraph);
        HRESULT ( STDMETHODCALLTYPE *RemoveGraph )(
            __RPC__in IESEventServiceConfiguration * This,
            __RPC__in_opt IFilterGraph *pGraph);
        END_INTERFACE
    } IESEventServiceConfigurationVtbl;
    interface IESEventServiceConfiguration
    {
        CONST_VTBL struct IESEventServiceConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetParent(This,pEventService) )
    ( (This)->lpVtbl -> RemoveParent(This) )
    ( (This)->lpVtbl -> SetOwner(This,pESEvents) )
    ( (This)->lpVtbl -> RemoveOwner(This) )
    ( (This)->lpVtbl -> SetGraph(This,pGraph) )
    ( (This)->lpVtbl -> RemoveGraph(This,pGraph) )
EXTERN_C const IID IID_IRegisterTuner;
    typedef struct IRegisterTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRegisterTuner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRegisterTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRegisterTuner * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IRegisterTuner * This,
                       __RPC__in_opt ITuner *pTuner,
                       __RPC__in_opt IGraphBuilder *pGraph);
        HRESULT ( STDMETHODCALLTYPE *Unregister )(
            __RPC__in IRegisterTuner * This);
        END_INTERFACE
    } IRegisterTunerVtbl;
    interface IRegisterTuner
    {
        CONST_VTBL struct IRegisterTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,pTuner,pGraph) )
    ( (This)->lpVtbl -> Unregister(This) )
EXTERN_C const IID IID_IBDAComparable;
    typedef struct IBDAComparableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDAComparable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDAComparable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDAComparable * This);
                           HRESULT ( STDMETHODCALLTYPE *CompareExact )(
            __RPC__in IBDAComparable * This,
                       __RPC__in_opt IDispatch *CompareTo,
                                __RPC__out long *Result);
                           HRESULT ( STDMETHODCALLTYPE *CompareEquivalent )(
            __RPC__in IBDAComparable * This,
                       __RPC__in_opt IDispatch *CompareTo,
                       DWORD dwFlags,
                                __RPC__out long *Result);
                           HRESULT ( STDMETHODCALLTYPE *HashExact )(
            __RPC__in IBDAComparable * This,
                                __RPC__out __int64 *Result);
        HRESULT ( STDMETHODCALLTYPE *HashExactIncremental )(
            __RPC__in IBDAComparable * This,
                       __int64 PartialResult,
                                __RPC__out __int64 *Result);
                           HRESULT ( STDMETHODCALLTYPE *HashEquivalent )(
            __RPC__in IBDAComparable * This,
                       DWORD dwFlags,
                                __RPC__out __int64 *Result);
        HRESULT ( STDMETHODCALLTYPE *HashEquivalentIncremental )(
            __RPC__in IBDAComparable * This,
                       __int64 PartialResult,
                       DWORD dwFlags,
                                __RPC__out __int64 *Result);
        END_INTERFACE
    } IBDAComparableVtbl;
    interface IBDAComparable
    {
        CONST_VTBL struct IBDAComparableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CompareExact(This,CompareTo,Result) )
    ( (This)->lpVtbl -> CompareEquivalent(This,CompareTo,dwFlags,Result) )
    ( (This)->lpVtbl -> HashExact(This,Result) )
    ( (This)->lpVtbl -> HashExactIncremental(This,PartialResult,Result) )
    ( (This)->lpVtbl -> HashEquivalent(This,dwFlags,Result) )
    ( (This)->lpVtbl -> HashEquivalentIncremental(This,PartialResult,dwFlags,Result) )
EXTERN_C const IID IID_IPersistTuneXml;
    typedef struct IPersistTuneXmlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistTuneXml * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistTuneXml * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistTuneXml * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IPersistTuneXml * This,
                        __RPC__out CLSID *pClassID);
        HRESULT ( STDMETHODCALLTYPE *InitNew )(
            __RPC__in IPersistTuneXml * This);
        HRESULT ( STDMETHODCALLTYPE *Load )(
            __RPC__in IPersistTuneXml * This,
                       VARIANT varValue);
        HRESULT ( STDMETHODCALLTYPE *Save )(
            __RPC__in IPersistTuneXml * This,
                        __RPC__out VARIANT *pvarFragment);
        END_INTERFACE
    } IPersistTuneXmlVtbl;
    interface IPersistTuneXml
    {
        CONST_VTBL struct IPersistTuneXmlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> InitNew(This) )
    ( (This)->lpVtbl -> Load(This,varValue) )
    ( (This)->lpVtbl -> Save(This,pvarFragment) )
EXTERN_C const IID IID_IPersistTuneXmlUtility;
    typedef struct IPersistTuneXmlUtilityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistTuneXmlUtility * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistTuneXmlUtility * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistTuneXmlUtility * This);
        HRESULT ( STDMETHODCALLTYPE *Deserialize )(
            __RPC__in IPersistTuneXmlUtility * This,
                       VARIANT varValue,
                                __RPC__deref_out_opt IUnknown **ppObject);
        END_INTERFACE
    } IPersistTuneXmlUtilityVtbl;
    interface IPersistTuneXmlUtility
    {
        CONST_VTBL struct IPersistTuneXmlUtilityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Deserialize(This,varValue,ppObject) )
EXTERN_C const IID IID_IPersistTuneXmlUtility2;
    typedef struct IPersistTuneXmlUtility2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPersistTuneXmlUtility2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPersistTuneXmlUtility2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPersistTuneXmlUtility2 * This);
        HRESULT ( STDMETHODCALLTYPE *Deserialize )(
            __RPC__in IPersistTuneXmlUtility2 * This,
                       VARIANT varValue,
                                __RPC__deref_out_opt IUnknown **ppObject);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            __RPC__in IPersistTuneXmlUtility2 * This,
                       __RPC__in_opt ITuneRequest *piTuneRequest,
                                __RPC__deref_out_opt BSTR *pString);
        END_INTERFACE
    } IPersistTuneXmlUtility2Vtbl;
    interface IPersistTuneXmlUtility2
    {
        CONST_VTBL struct IPersistTuneXmlUtility2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Deserialize(This,varValue,ppObject) )
    ( (This)->lpVtbl -> Serialize(This,piTuneRequest,pString) )
EXTERN_C const IID IID_IBDACreateTuneRequestEx;
    typedef struct IBDACreateTuneRequestExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBDACreateTuneRequestEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBDACreateTuneRequestEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBDACreateTuneRequestEx * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTuneRequestEx )(
            __RPC__in IBDACreateTuneRequestEx * This,
                       __RPC__in REFCLSID TuneRequestIID,
                                __RPC__deref_out_opt ITuneRequest **TuneRequest);
        END_INTERFACE
    } IBDACreateTuneRequestExVtbl;
    interface IBDACreateTuneRequestEx
    {
        CONST_VTBL struct IBDACreateTuneRequestExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTuneRequestEx(This,TuneRequestIID,TuneRequest) )
EXTERN_C const IID LIBID_TunerLib;
EXTERN_C const CLSID CLSID_SystemTuningSpaces;
class DECLSPEC_UUID("D02AAC50-027E-11d3-9D8E-00C04F72D980")
SystemTuningSpaces;
EXTERN_C const CLSID CLSID_TuningSpace;
class DECLSPEC_UUID("5FFDC5E6-B83A-4b55-B6E8-C69E765FE9DB")
TuningSpace;
EXTERN_C const CLSID CLSID_ChannelIDTuningSpace;
class DECLSPEC_UUID("CC829A2F-3365-463f-AF13-81DBB6F3A555")
ChannelIDTuningSpace;
EXTERN_C const CLSID CLSID_ATSCTuningSpace;
class DECLSPEC_UUID("A2E30750-6C3D-11d3-B653-00C04F79498E")
ATSCTuningSpace;
EXTERN_C const CLSID CLSID_DigitalCableTuningSpace;
class DECLSPEC_UUID("D9BB4CEE-B87A-47F1-AC92-B08D9C7813FC")
DigitalCableTuningSpace;
EXTERN_C const CLSID CLSID_AnalogRadioTuningSpace;
class DECLSPEC_UUID("8A674B4C-1F63-11d3-B64C-00C04F79498E")
AnalogRadioTuningSpace;
EXTERN_C const CLSID CLSID_AuxInTuningSpace;
class DECLSPEC_UUID("F9769A06-7ACA-4e39-9CFB-97BB35F0E77E")
AuxInTuningSpace;
EXTERN_C const CLSID CLSID_AnalogTVTuningSpace;
class DECLSPEC_UUID("8A674B4D-1F63-11d3-B64C-00C04F79498E")
AnalogTVTuningSpace;
EXTERN_C const CLSID CLSID_DVBTuningSpace;
class DECLSPEC_UUID("C6B14B32-76AA-4a86-A7AC-5C79AAF58DA7")
DVBTuningSpace;
EXTERN_C const CLSID CLSID_DVBSTuningSpace;
class DECLSPEC_UUID("B64016F3-C9A2-4066-96F0-BD9563314726")
DVBSTuningSpace;
EXTERN_C const CLSID CLSID_ComponentTypes;
class DECLSPEC_UUID("A1A2B1C4-0E3A-11d3-9D8E-00C04F72D980")
ComponentTypes;
EXTERN_C const CLSID CLSID_ComponentType;
class DECLSPEC_UUID("823535A0-0318-11d3-9D8E-00C04F72D980")
ComponentType;
EXTERN_C const CLSID CLSID_LanguageComponentType;
class DECLSPEC_UUID("1BE49F30-0E1B-11d3-9D8E-00C04F72D980")
LanguageComponentType;
EXTERN_C const CLSID CLSID_MPEG2ComponentType;
class DECLSPEC_UUID("418008F3-CF67-4668-9628-10DC52BE1D08")
MPEG2ComponentType;
EXTERN_C const CLSID CLSID_ATSCComponentType;
class DECLSPEC_UUID("A8DCF3D5-0780-4ef4-8A83-2CFFAACB8ACE")
ATSCComponentType;
EXTERN_C const CLSID CLSID_Components;
class DECLSPEC_UUID("809B6661-94C4-49e6-B6EC-3F0F862215AA")
Components;
EXTERN_C const CLSID CLSID_Component;
class DECLSPEC_UUID("59DC47A8-116C-11d3-9D8E-00C04F72D980")
Component;
EXTERN_C const CLSID CLSID_MPEG2Component;
class DECLSPEC_UUID("055CB2D7-2969-45cd-914B-76890722F112")
MPEG2Component;
EXTERN_C const CLSID CLSID_AnalogAudioComponentType;
class DECLSPEC_UUID("28AB0005-E845-4FFA-AA9B-F4665236141C")
AnalogAudioComponentType;
EXTERN_C const CLSID CLSID_TuneRequest;
class DECLSPEC_UUID("B46E0D38-AB35-4a06-A137-70576B01B39F")
TuneRequest;
EXTERN_C const CLSID CLSID_ChannelIDTuneRequest;
class DECLSPEC_UUID("3A9428A7-31A4-45e9-9EFB-E055BF7BB3DB")
ChannelIDTuneRequest;
EXTERN_C const CLSID CLSID_ChannelTuneRequest;
class DECLSPEC_UUID("0369B4E5-45B6-11d3-B650-00C04F79498E")
ChannelTuneRequest;
EXTERN_C const CLSID CLSID_ATSCChannelTuneRequest;
class DECLSPEC_UUID("0369B4E6-45B6-11d3-B650-00C04F79498E")
ATSCChannelTuneRequest;
EXTERN_C const CLSID CLSID_DigitalCableTuneRequest;
class DECLSPEC_UUID("26EC0B63-AA90-458A-8DF4-5659F2C8A18A")
DigitalCableTuneRequest;
EXTERN_C const CLSID CLSID_MPEG2TuneRequest;
class DECLSPEC_UUID("0955AC62-BF2E-4cba-A2B9-A63F772D46CF")
MPEG2TuneRequest;
EXTERN_C const CLSID CLSID_MPEG2TuneRequestFactory;
class DECLSPEC_UUID("2C63E4EB-4CEA-41b8-919C-E947EA19A77C")
MPEG2TuneRequestFactory;
EXTERN_C const CLSID CLSID_Locator;
class DECLSPEC_UUID("0888C883-AC4F-4943-B516-2C38D9B34562")
Locator;
EXTERN_C const CLSID CLSID_DigitalLocator;
class DECLSPEC_UUID("6E50CC0D-C19B-4BF6-810B-5BD60761F5CC")
DigitalLocator;
EXTERN_C const CLSID CLSID_AnalogLocator;
class DECLSPEC_UUID("49638B91-48AB-48B7-A47A-7D0E75A08EDE")
AnalogLocator;
EXTERN_C const CLSID CLSID_ATSCLocator;
class DECLSPEC_UUID("8872FF1B-98FA-4d7a-8D93-C9F1055F85BB")
ATSCLocator;
EXTERN_C const CLSID CLSID_DigitalCableLocator;
class DECLSPEC_UUID("03C06416-D127-407A-AB4C-FDD279ABBE5D")
DigitalCableLocator;
EXTERN_C const CLSID CLSID_DVBTLocator;
class DECLSPEC_UUID("9CD64701-BDF3-4d14-8E03-F12983D86664")
DVBTLocator;
EXTERN_C const CLSID CLSID_DVBTLocator2;
class DECLSPEC_UUID("EFE3FA02-45D7-4920-BE96-53FA7F35B0E6")
DVBTLocator2;
EXTERN_C const CLSID CLSID_DVBSLocator;
class DECLSPEC_UUID("1DF7D126-4050-47f0-A7CF-4C4CA9241333")
DVBSLocator;
EXTERN_C const CLSID CLSID_DVBCLocator;
class DECLSPEC_UUID("C531D9FD-9685-4028-8B68-6E1232079F1E")
DVBCLocator;
EXTERN_C const CLSID CLSID_ISDBSLocator;
class DECLSPEC_UUID("6504AFED-A629-455c-A7F1-04964DEA5CC4")
ISDBSLocator;
EXTERN_C const CLSID CLSID_DVBTuneRequest;
class DECLSPEC_UUID("15D6504A-5494-499c-886C-973C9E53B9F1")
DVBTuneRequest;
EXTERN_C const CLSID CLSID_CreatePropBagOnRegKey;
class DECLSPEC_UUID("8A674B49-1F63-11d3-B64C-00C04F79498E")
CreatePropBagOnRegKey;
EXTERN_C const CLSID CLSID_BroadcastEventService;
class DECLSPEC_UUID("0B3FFB92-0919-4934-9D5B-619C719D0202")
BroadcastEventService;
EXTERN_C const CLSID CLSID_TunerMarshaler;
class DECLSPEC_UUID("6438570B-0C08-4a25-9504-8012BB4D50CF")
TunerMarshaler;
EXTERN_C const CLSID CLSID_PersistTuneXmlUtility;
class DECLSPEC_UUID("E77026B0-B97F-4cbb-B7FB-F4F03AD69F11")
PersistTuneXmlUtility;
EXTERN_C const CLSID CLSID_ESEventService;
class DECLSPEC_UUID("C20447FC-EC60-475e-813F-D2B0A6DECEFE")
ESEventService;
EXTERN_C const CLSID CLSID_ESEventFactory;
class DECLSPEC_UUID("8E8A07DA-71F8-40c1-A929-5E3A868AC2C6")
ESEventFactory;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tuner_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tuner_0000_0070_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
