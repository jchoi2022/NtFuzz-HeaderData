#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDvbSiParser IDvbSiParser;
typedef interface IDvbSiParser2 IDvbSiParser2;
typedef interface IIsdbSiParser2 IIsdbSiParser2;
typedef interface IDVB_NIT IDVB_NIT;
typedef interface IDVB_SDT IDVB_SDT;
typedef interface IISDB_SDT IISDB_SDT;
typedef interface IDVB_EIT IDVB_EIT;
typedef interface IDVB_EIT2 IDVB_EIT2;
typedef interface IDVB_BAT IDVB_BAT;
typedef interface IDVB_RST IDVB_RST;
typedef interface IDVB_ST IDVB_ST;
typedef interface IDVB_TDT IDVB_TDT;
typedef interface IDVB_TOT IDVB_TOT;
typedef interface IDVB_DIT IDVB_DIT;
typedef interface IDVB_SIT IDVB_SIT;
typedef interface IISDB_BIT IISDB_BIT;
typedef interface IISDB_NBIT IISDB_NBIT;
typedef interface IISDB_LDT IISDB_LDT;
typedef interface IISDB_SDTT IISDB_SDTT;
typedef interface IISDB_CDT IISDB_CDT;
typedef interface IISDB_EMM IISDB_EMM;
typedef interface IDvbServiceAttributeDescriptor IDvbServiceAttributeDescriptor;
typedef interface IDvbContentIdentifierDescriptor IDvbContentIdentifierDescriptor;
typedef interface IDvbDefaultAuthorityDescriptor IDvbDefaultAuthorityDescriptor;
typedef interface IDvbSatelliteDeliverySystemDescriptor IDvbSatelliteDeliverySystemDescriptor;
typedef interface IDvbCableDeliverySystemDescriptor IDvbCableDeliverySystemDescriptor;
typedef interface IDvbTerrestrialDeliverySystemDescriptor IDvbTerrestrialDeliverySystemDescriptor;
typedef interface IDvbTerrestrial2DeliverySystemDescriptor IDvbTerrestrial2DeliverySystemDescriptor;
typedef interface IDvbFrequencyListDescriptor IDvbFrequencyListDescriptor;
typedef interface IDvbPrivateDataSpecifierDescriptor IDvbPrivateDataSpecifierDescriptor;
typedef interface IDvbLogicalChannelDescriptor IDvbLogicalChannelDescriptor;
typedef interface IDvbLogicalChannelDescriptor2 IDvbLogicalChannelDescriptor2;
typedef interface IDvbLogicalChannel2Descriptor IDvbLogicalChannel2Descriptor;
typedef interface IDvbHDSimulcastLogicalChannelDescriptor IDvbHDSimulcastLogicalChannelDescriptor;
typedef interface IDvbDataBroadcastIDDescriptor IDvbDataBroadcastIDDescriptor;
typedef interface IDvbDataBroadcastDescriptor IDvbDataBroadcastDescriptor;
typedef interface IDvbLinkageDescriptor IDvbLinkageDescriptor;
typedef interface IDvbTeletextDescriptor IDvbTeletextDescriptor;
typedef interface IDvbSubtitlingDescriptor IDvbSubtitlingDescriptor;
typedef interface IDvbServiceDescriptor IDvbServiceDescriptor;
typedef interface IDvbServiceDescriptor2 IDvbServiceDescriptor2;
typedef interface IDvbServiceListDescriptor IDvbServiceListDescriptor;
typedef interface IDvbMultilingualServiceNameDescriptor IDvbMultilingualServiceNameDescriptor;
typedef interface IDvbNetworkNameDescriptor IDvbNetworkNameDescriptor;
typedef interface IDvbShortEventDescriptor IDvbShortEventDescriptor;
typedef interface IDvbExtendedEventDescriptor IDvbExtendedEventDescriptor;
typedef interface IDvbComponentDescriptor IDvbComponentDescriptor;
typedef interface IDvbContentDescriptor IDvbContentDescriptor;
typedef interface IDvbParentalRatingDescriptor IDvbParentalRatingDescriptor;
typedef interface IIsdbTerrestrialDeliverySystemDescriptor IIsdbTerrestrialDeliverySystemDescriptor;
typedef interface IIsdbTSInformationDescriptor IIsdbTSInformationDescriptor;
typedef interface IIsdbDigitalCopyControlDescriptor IIsdbDigitalCopyControlDescriptor;
typedef interface IIsdbAudioComponentDescriptor IIsdbAudioComponentDescriptor;
typedef interface IIsdbDataContentDescriptor IIsdbDataContentDescriptor;
typedef interface IIsdbCAContractInformationDescriptor IIsdbCAContractInformationDescriptor;
typedef interface IIsdbEventGroupDescriptor IIsdbEventGroupDescriptor;
typedef interface IIsdbComponentGroupDescriptor IIsdbComponentGroupDescriptor;
typedef interface IIsdbSeriesDescriptor IIsdbSeriesDescriptor;
typedef interface IIsdbDownloadContentDescriptor IIsdbDownloadContentDescriptor;
typedef interface IIsdbLogoTransmissionDescriptor IIsdbLogoTransmissionDescriptor;
typedef interface IIsdbSIParameterDescriptor IIsdbSIParameterDescriptor;
typedef interface IIsdbEmergencyInformationDescriptor IIsdbEmergencyInformationDescriptor;
typedef interface IIsdbCADescriptor IIsdbCADescriptor;
typedef interface IIsdbCAServiceDescriptor IIsdbCAServiceDescriptor;
typedef interface IIsdbHierarchicalTransmissionDescriptor IIsdbHierarchicalTransmissionDescriptor;
typedef interface IPBDASiParser IPBDASiParser;
typedef interface IPBDA_EIT IPBDA_EIT;
typedef interface IPBDA_Services IPBDA_Services;
typedef interface IPBDAEntitlementDescriptor IPBDAEntitlementDescriptor;
typedef interface IPBDAAttributesDescriptor IPBDAAttributesDescriptor;
#include "oaidl.h"
#include "ocidl.h"
#include "mpeg2structs.h"
#include "mpeg2data.h"
#include "mpeg2psiparser.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_dvbsiparser_0000_0000_0001
    {
        STRCONV_MODE_DVB = 0,
        STRCONV_MODE_DVB_EMPHASIS = ( STRCONV_MODE_DVB + 1 ) ,
        STRCONV_MODE_DVB_WITHOUT_EMPHASIS = ( STRCONV_MODE_DVB_EMPHASIS + 1 ) ,
        STRCONV_MODE_ISDB = ( STRCONV_MODE_DVB_WITHOUT_EMPHASIS + 1 )
    } DVB_STRCONV_MODE;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDvbSiParser;
    typedef struct IDvbSiParserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbSiParser * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbSiParser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbSiParser * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDvbSiParser * This,
                       IUnknown *punkMpeg2Data);
        HRESULT ( STDMETHODCALLTYPE *GetPAT )(
            IDvbSiParser * This,
                        IPAT **ppPAT);
        HRESULT ( STDMETHODCALLTYPE *GetCAT )(
            IDvbSiParser * This,
                       DWORD dwTimeout,
                        ICAT **ppCAT);
        HRESULT ( STDMETHODCALLTYPE *GetPMT )(
            IDvbSiParser * This,
                       PID pid,
            _In_opt_ WORD *pwProgramNumber,
                        IPMT **ppPMT);
        HRESULT ( STDMETHODCALLTYPE *GetTSDT )(
            IDvbSiParser * This,
                        ITSDT **ppTSDT);
        HRESULT ( STDMETHODCALLTYPE *GetNIT )(
            IDvbSiParser * This,
                       TID tableId,
            _In_opt_ WORD *pwNetworkId,
                        IDVB_NIT **ppNIT);
        HRESULT ( STDMETHODCALLTYPE *GetSDT )(
            IDvbSiParser * This,
                       TID tableId,
            _In_opt_ WORD *pwTransportStreamId,
                        IDVB_SDT **ppSDT);
        HRESULT ( STDMETHODCALLTYPE *GetEIT )(
            IDvbSiParser * This,
                       TID tableId,
            _In_opt_ WORD *pwServiceId,
                        IDVB_EIT **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *GetBAT )(
            IDvbSiParser * This,
            _In_opt_ WORD *pwBouquetId,
                        IDVB_BAT **ppBAT);
        HRESULT ( STDMETHODCALLTYPE *GetRST )(
            IDvbSiParser * This,
                       DWORD dwTimeout,
                        IDVB_RST **ppRST);
        HRESULT ( STDMETHODCALLTYPE *GetST )(
            IDvbSiParser * This,
                       PID pid,
                       DWORD dwTimeout,
                        IDVB_ST **ppST);
        HRESULT ( STDMETHODCALLTYPE *GetTDT )(
            IDvbSiParser * This,
                        IDVB_TDT **ppTDT);
        HRESULT ( STDMETHODCALLTYPE *GetTOT )(
            IDvbSiParser * This,
                        IDVB_TOT **ppTOT);
        HRESULT ( STDMETHODCALLTYPE *GetDIT )(
            IDvbSiParser * This,
                       DWORD dwTimeout,
                        IDVB_DIT **ppDIT);
        HRESULT ( STDMETHODCALLTYPE *GetSIT )(
            IDvbSiParser * This,
                       DWORD dwTimeout,
                        IDVB_SIT **ppSIT);
        END_INTERFACE
    } IDvbSiParserVtbl;
    interface IDvbSiParser
    {
        CONST_VTBL struct IDvbSiParserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) )
    ( (This)->lpVtbl -> GetPAT(This,ppPAT) )
    ( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) )
    ( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) )
    ( (This)->lpVtbl -> GetTSDT(This,ppTSDT) )
    ( (This)->lpVtbl -> GetNIT(This,tableId,pwNetworkId,ppNIT) )
    ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) )
    ( (This)->lpVtbl -> GetEIT(This,tableId,pwServiceId,ppEIT) )
    ( (This)->lpVtbl -> GetBAT(This,pwBouquetId,ppBAT) )
    ( (This)->lpVtbl -> GetRST(This,dwTimeout,ppRST) )
    ( (This)->lpVtbl -> GetST(This,pid,dwTimeout,ppST) )
    ( (This)->lpVtbl -> GetTDT(This,ppTDT) )
    ( (This)->lpVtbl -> GetTOT(This,ppTOT) )
    ( (This)->lpVtbl -> GetDIT(This,dwTimeout,ppDIT) )
    ( (This)->lpVtbl -> GetSIT(This,dwTimeout,ppSIT) )
EXTERN_C const IID IID_IDvbSiParser2;
    typedef struct IDvbSiParser2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbSiParser2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbSiParser2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbSiParser2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDvbSiParser2 * This,
                       IUnknown *punkMpeg2Data);
        HRESULT ( STDMETHODCALLTYPE *GetPAT )(
            IDvbSiParser2 * This,
                        IPAT **ppPAT);
        HRESULT ( STDMETHODCALLTYPE *GetCAT )(
            IDvbSiParser2 * This,
                       DWORD dwTimeout,
                        ICAT **ppCAT);
        HRESULT ( STDMETHODCALLTYPE *GetPMT )(
            IDvbSiParser2 * This,
                       PID pid,
            _In_opt_ WORD *pwProgramNumber,
                        IPMT **ppPMT);
        HRESULT ( STDMETHODCALLTYPE *GetTSDT )(
            IDvbSiParser2 * This,
                        ITSDT **ppTSDT);
        HRESULT ( STDMETHODCALLTYPE *GetNIT )(
            IDvbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwNetworkId,
                        IDVB_NIT **ppNIT);
        HRESULT ( STDMETHODCALLTYPE *GetSDT )(
            IDvbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwTransportStreamId,
                        IDVB_SDT **ppSDT);
        HRESULT ( STDMETHODCALLTYPE *GetEIT )(
            IDvbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwServiceId,
                        IDVB_EIT **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *GetBAT )(
            IDvbSiParser2 * This,
            _In_opt_ WORD *pwBouquetId,
                        IDVB_BAT **ppBAT);
        HRESULT ( STDMETHODCALLTYPE *GetRST )(
            IDvbSiParser2 * This,
                       DWORD dwTimeout,
                        IDVB_RST **ppRST);
        HRESULT ( STDMETHODCALLTYPE *GetST )(
            IDvbSiParser2 * This,
                       PID pid,
                       DWORD dwTimeout,
                        IDVB_ST **ppST);
        HRESULT ( STDMETHODCALLTYPE *GetTDT )(
            IDvbSiParser2 * This,
                        IDVB_TDT **ppTDT);
        HRESULT ( STDMETHODCALLTYPE *GetTOT )(
            IDvbSiParser2 * This,
                        IDVB_TOT **ppTOT);
        HRESULT ( STDMETHODCALLTYPE *GetDIT )(
            IDvbSiParser2 * This,
                       DWORD dwTimeout,
                        IDVB_DIT **ppDIT);
        HRESULT ( STDMETHODCALLTYPE *GetSIT )(
            IDvbSiParser2 * This,
                       DWORD dwTimeout,
                        IDVB_SIT **ppSIT);
        HRESULT ( STDMETHODCALLTYPE *GetEIT2 )(
            IDvbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwServiceId,
            _In_opt_ BYTE *pbSegment,
                        IDVB_EIT2 **ppEIT);
        END_INTERFACE
    } IDvbSiParser2Vtbl;
    interface IDvbSiParser2
    {
        CONST_VTBL struct IDvbSiParser2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) )
    ( (This)->lpVtbl -> GetPAT(This,ppPAT) )
    ( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) )
    ( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) )
    ( (This)->lpVtbl -> GetTSDT(This,ppTSDT) )
    ( (This)->lpVtbl -> GetNIT(This,tableId,pwNetworkId,ppNIT) )
    ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) )
    ( (This)->lpVtbl -> GetEIT(This,tableId,pwServiceId,ppEIT) )
    ( (This)->lpVtbl -> GetBAT(This,pwBouquetId,ppBAT) )
    ( (This)->lpVtbl -> GetRST(This,dwTimeout,ppRST) )
    ( (This)->lpVtbl -> GetST(This,pid,dwTimeout,ppST) )
    ( (This)->lpVtbl -> GetTDT(This,ppTDT) )
    ( (This)->lpVtbl -> GetTOT(This,ppTOT) )
    ( (This)->lpVtbl -> GetDIT(This,dwTimeout,ppDIT) )
    ( (This)->lpVtbl -> GetSIT(This,dwTimeout,ppSIT) )
    ( (This)->lpVtbl -> GetEIT2(This,tableId,pwServiceId,pbSegment,ppEIT) )
EXTERN_C const IID IID_IIsdbSiParser2;
    typedef struct IIsdbSiParser2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbSiParser2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbSiParser2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbSiParser2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IIsdbSiParser2 * This,
                       IUnknown *punkMpeg2Data);
        HRESULT ( STDMETHODCALLTYPE *GetPAT )(
            IIsdbSiParser2 * This,
                        IPAT **ppPAT);
        HRESULT ( STDMETHODCALLTYPE *GetCAT )(
            IIsdbSiParser2 * This,
                       DWORD dwTimeout,
                        ICAT **ppCAT);
        HRESULT ( STDMETHODCALLTYPE *GetPMT )(
            IIsdbSiParser2 * This,
                       PID pid,
            _In_opt_ WORD *pwProgramNumber,
                        IPMT **ppPMT);
        HRESULT ( STDMETHODCALLTYPE *GetTSDT )(
            IIsdbSiParser2 * This,
                        ITSDT **ppTSDT);
        HRESULT ( STDMETHODCALLTYPE *GetNIT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwNetworkId,
                        IDVB_NIT **ppNIT);
        HRESULT ( STDMETHODCALLTYPE *GetSDT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwTransportStreamId,
                        IDVB_SDT **ppSDT);
        HRESULT ( STDMETHODCALLTYPE *GetEIT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwServiceId,
                        IDVB_EIT **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *GetBAT )(
            IIsdbSiParser2 * This,
            _In_opt_ WORD *pwBouquetId,
                        IDVB_BAT **ppBAT);
        HRESULT ( STDMETHODCALLTYPE *GetRST )(
            IIsdbSiParser2 * This,
                       DWORD dwTimeout,
                        IDVB_RST **ppRST);
        HRESULT ( STDMETHODCALLTYPE *GetST )(
            IIsdbSiParser2 * This,
                       PID pid,
                       DWORD dwTimeout,
                        IDVB_ST **ppST);
        HRESULT ( STDMETHODCALLTYPE *GetTDT )(
            IIsdbSiParser2 * This,
                        IDVB_TDT **ppTDT);
        HRESULT ( STDMETHODCALLTYPE *GetTOT )(
            IIsdbSiParser2 * This,
                        IDVB_TOT **ppTOT);
        HRESULT ( STDMETHODCALLTYPE *GetDIT )(
            IIsdbSiParser2 * This,
                       DWORD dwTimeout,
                        IDVB_DIT **ppDIT);
        HRESULT ( STDMETHODCALLTYPE *GetSIT )(
            IIsdbSiParser2 * This,
                       DWORD dwTimeout,
                        IDVB_SIT **ppSIT);
        HRESULT ( STDMETHODCALLTYPE *GetEIT2 )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwServiceId,
            _In_opt_ BYTE *pbSegment,
                        IDVB_EIT2 **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *GetSDT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwTransportStreamId,
                        IISDB_SDT **ppSDT);
        HRESULT ( STDMETHODCALLTYPE *GetBIT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwOriginalNetworkId,
                        IISDB_BIT **ppBIT);
        HRESULT ( STDMETHODCALLTYPE *GetNBIT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwOriginalNetworkId,
                        IISDB_NBIT **ppNBIT);
        HRESULT ( STDMETHODCALLTYPE *GetLDT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwOriginalServiceId,
                        IISDB_LDT **ppLDT);
        HRESULT ( STDMETHODCALLTYPE *GetSDTT )(
            IIsdbSiParser2 * This,
                       TID tableId,
            _In_opt_ WORD *pwTableIdExt,
                        IISDB_SDTT **ppSDTT);
        HRESULT ( STDMETHODCALLTYPE *GetCDT )(
            IIsdbSiParser2 * This,
                       TID tableId,
                       BYTE bSectionNumber,
            _In_opt_ WORD *pwDownloadDataId,
                        IISDB_CDT **ppCDT);
        HRESULT ( STDMETHODCALLTYPE *GetEMM )(
            IIsdbSiParser2 * This,
                       PID pid,
                       WORD wTableIdExt,
                        IISDB_EMM **ppEMM);
        END_INTERFACE
    } IIsdbSiParser2Vtbl;
    interface IIsdbSiParser2
    {
        CONST_VTBL struct IIsdbSiParser2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) )
    ( (This)->lpVtbl -> GetPAT(This,ppPAT) )
    ( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) )
    ( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) )
    ( (This)->lpVtbl -> GetTSDT(This,ppTSDT) )
    ( (This)->lpVtbl -> GetNIT(This,tableId,pwNetworkId,ppNIT) )
    ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) )
    ( (This)->lpVtbl -> GetEIT(This,tableId,pwServiceId,ppEIT) )
    ( (This)->lpVtbl -> GetBAT(This,pwBouquetId,ppBAT) )
    ( (This)->lpVtbl -> GetRST(This,dwTimeout,ppRST) )
    ( (This)->lpVtbl -> GetST(This,pid,dwTimeout,ppST) )
    ( (This)->lpVtbl -> GetTDT(This,ppTDT) )
    ( (This)->lpVtbl -> GetTOT(This,ppTOT) )
    ( (This)->lpVtbl -> GetDIT(This,dwTimeout,ppDIT) )
    ( (This)->lpVtbl -> GetSIT(This,dwTimeout,ppSIT) )
    ( (This)->lpVtbl -> GetEIT2(This,tableId,pwServiceId,pbSegment,ppEIT) )
    ( (This)->lpVtbl -> GetSDT(This,tableId,pwTransportStreamId,ppSDT) )
    ( (This)->lpVtbl -> GetBIT(This,tableId,pwOriginalNetworkId,ppBIT) )
    ( (This)->lpVtbl -> GetNBIT(This,tableId,pwOriginalNetworkId,ppNBIT) )
    ( (This)->lpVtbl -> GetLDT(This,tableId,pwOriginalServiceId,ppLDT) )
    ( (This)->lpVtbl -> GetSDTT(This,tableId,pwTableIdExt,ppSDTT) )
    ( (This)->lpVtbl -> GetCDT(This,tableId,bSectionNumber,pwDownloadDataId,ppCDT) )
    ( (This)->lpVtbl -> GetEMM(This,pid,wTableIdExt,ppEMM) )
EXTERN_C const IID IID_IDVB_NIT;
    typedef struct IDVB_NITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_NIT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_NIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_NIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_NIT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IDVB_NIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkId )(
            IDVB_NIT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            IDVB_NIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            IDVB_NIT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            IDVB_NIT * This,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDVB_NIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTransportStreamId )(
            IDVB_NIT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordOriginalNetworkId )(
            IDVB_NIT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IDVB_NIT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IDVB_NIT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IDVB_NIT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IDVB_NIT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IDVB_NIT * This,
                        IDVB_NIT **ppNIT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IDVB_NIT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IDVB_NIT * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IDVB_NIT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IDVB_NITVtbl;
    interface IDVB_NIT
    {
        CONST_VTBL struct IDVB_NITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppNIT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IDVB_SDT;
    typedef struct IDVB_SDTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_SDT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_SDT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_SDT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_SDT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IDVB_SDT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            IDVB_SDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IDVB_SDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDVB_SDT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEITScheduleFlag )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEITPresentFollowingFlag )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRunningStatus )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordFreeCAMode )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IDVB_SDT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IDVB_SDT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IDVB_SDT * This,
                        IDVB_SDT **ppSDT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IDVB_SDT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IDVB_SDT * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IDVB_SDT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IDVB_SDTVtbl;
    interface IDVB_SDT
    {
        CONST_VTBL struct IDVB_SDTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordEITScheduleFlag(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordEITPresentFollowingFlag(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppSDT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IISDB_SDT;
    typedef struct IISDB_SDTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDB_SDT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IISDB_SDT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IISDB_SDT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IISDB_SDT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IISDB_SDT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            IISDB_SDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IISDB_SDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IISDB_SDT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEITScheduleFlag )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEITPresentFollowingFlag )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRunningStatus )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordFreeCAMode )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IISDB_SDT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IISDB_SDT * This,
                        IDVB_SDT **ppSDT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IISDB_SDT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IISDB_SDT * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IISDB_SDT * This,
                        DWORD *pdwVersionHash);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEITUserDefinedFlags )(
            IISDB_SDT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        END_INTERFACE
    } IISDB_SDTVtbl;
    interface IISDB_SDT
    {
        CONST_VTBL struct IISDB_SDTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordEITScheduleFlag(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordEITPresentFollowingFlag(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppSDT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
    ( (This)->lpVtbl -> GetRecordEITUserDefinedFlags(This,dwRecordIndex,pbVal) )
EXTERN_C const IID IID_IDVB_EIT;
    typedef struct IDVB_EITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_EIT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_EIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_EIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_EIT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IDVB_EIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceId )(
            IDVB_EIT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            IDVB_EIT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IDVB_EIT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentLastSectionNumber )(
            IDVB_EIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLastTableId )(
            IDVB_EIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDVB_EIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEventId )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordStartTime )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                        MPEG_DATE_AND_TIME *pmdtVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDuration )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                        MPEG_DURATION *pmdVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRunningStatus )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordFreeCAMode )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IDVB_EIT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IDVB_EIT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IDVB_EIT * This,
                        IDVB_EIT **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IDVB_EIT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IDVB_EIT * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IDVB_EIT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IDVB_EITVtbl;
    interface IDVB_EIT
    {
        CONST_VTBL struct IDVB_EITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceId(This,pwVal) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetSegmentLastSectionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetLastTableId(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) )
    ( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) )
    ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppEIT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IDVB_EIT2;
    typedef struct IDVB_EIT2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_EIT2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_EIT2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_EIT2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_EIT2 * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IDVB_EIT2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceId )(
            IDVB_EIT2 * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            IDVB_EIT2 * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IDVB_EIT2 * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentLastSectionNumber )(
            IDVB_EIT2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLastTableId )(
            IDVB_EIT2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDVB_EIT2 * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEventId )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordStartTime )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                        MPEG_DATE_AND_TIME *pmdtVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDuration )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                        MPEG_DURATION *pmdVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRunningStatus )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordFreeCAMode )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IDVB_EIT2 * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IDVB_EIT2 * This,
                        IDVB_EIT **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IDVB_EIT2 * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IDVB_EIT2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IDVB_EIT2 * This,
                        DWORD *pdwVersionHash);
        HRESULT ( STDMETHODCALLTYPE *GetSegmentInfo )(
            IDVB_EIT2 * This,
                        BYTE *pbTid,
                        BYTE *pbSegment);
        HRESULT ( STDMETHODCALLTYPE *GetRecordSection )(
            IDVB_EIT2 * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        END_INTERFACE
    } IDVB_EIT2Vtbl;
    interface IDVB_EIT2
    {
        CONST_VTBL struct IDVB_EIT2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceId(This,pwVal) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetSegmentLastSectionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetLastTableId(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) )
    ( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) )
    ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordFreeCAMode(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppEIT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
    ( (This)->lpVtbl -> GetSegmentInfo(This,pbTid,pbSegment) )
    ( (This)->lpVtbl -> GetRecordSection(This,dwRecordIndex,pbVal) )
EXTERN_C const IID IID_IDVB_BAT;
    typedef struct IDVB_BATVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_BAT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_BAT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_BAT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_BAT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IDVB_BAT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetBouquetId )(
            IDVB_BAT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            IDVB_BAT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            IDVB_BAT * This,
                       DWORD dwIndex,
                       IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            IDVB_BAT * This,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDVB_BAT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTransportStreamId )(
            IDVB_BAT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordOriginalNetworkId )(
            IDVB_BAT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IDVB_BAT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IDVB_BAT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IDVB_BAT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IDVB_BAT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IDVB_BAT * This,
                        IDVB_BAT **ppBAT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IDVB_BAT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IDVB_BAT * This);
        END_INTERFACE
    } IDVB_BATVtbl;
    interface IDVB_BAT
    {
        CONST_VTBL struct IDVB_BATVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetBouquetId(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,ppBAT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
EXTERN_C const IID IID_IDVB_RST;
    typedef struct IDVB_RSTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_RST * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_RST * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_RST * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_RST * This,
                       ISectionList *pSectionList);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDVB_RST * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTransportStreamId )(
            IDVB_RST * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordOriginalNetworkId )(
            IDVB_RST * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDVB_RST * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEventId )(
            IDVB_RST * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRunningStatus )(
            IDVB_RST * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        END_INTERFACE
    } IDVB_RSTVtbl;
    interface IDVB_RST
    {
        CONST_VTBL struct IDVB_RSTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordOriginalNetworkId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) )
EXTERN_C const IID IID_IDVB_ST;
    typedef struct IDVB_STVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_ST * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_ST * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_ST * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_ST * This,
                       ISectionList *pSectionList);
        HRESULT ( STDMETHODCALLTYPE *GetDataLength )(
            IDVB_ST * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            IDVB_ST * This,
                        BYTE **ppData);
        END_INTERFACE
    } IDVB_STVtbl;
    interface IDVB_ST
    {
        CONST_VTBL struct IDVB_STVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList) )
    ( (This)->lpVtbl -> GetDataLength(This,pwVal) )
    ( (This)->lpVtbl -> GetData(This,ppData) )
EXTERN_C const IID IID_IDVB_TDT;
    typedef struct IDVB_TDTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_TDT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_TDT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_TDT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_TDT * This,
                       ISectionList *pSectionList);
        HRESULT ( STDMETHODCALLTYPE *GetUTCTime )(
            IDVB_TDT * This,
                        MPEG_DATE_AND_TIME *pmdtVal);
        END_INTERFACE
    } IDVB_TDTVtbl;
    interface IDVB_TDT
    {
        CONST_VTBL struct IDVB_TDTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList) )
    ( (This)->lpVtbl -> GetUTCTime(This,pmdtVal) )
EXTERN_C const IID IID_IDVB_TOT;
    typedef struct IDVB_TOTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_TOT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_TOT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_TOT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_TOT * This,
                       ISectionList *pSectionList);
        HRESULT ( STDMETHODCALLTYPE *GetUTCTime )(
            IDVB_TOT * This,
                        MPEG_DATE_AND_TIME *pmdtVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            IDVB_TOT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            IDVB_TOT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            IDVB_TOT * This,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        END_INTERFACE
    } IDVB_TOTVtbl;
    interface IDVB_TOT
    {
        CONST_VTBL struct IDVB_TOTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList) )
    ( (This)->lpVtbl -> GetUTCTime(This,pmdtVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
EXTERN_C const IID IID_IDVB_DIT;
    typedef struct IDVB_DITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_DIT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_DIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_DIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_DIT * This,
                       ISectionList *pSectionList);
        HRESULT ( STDMETHODCALLTYPE *GetTransitionFlag )(
            IDVB_DIT * This,
                        BOOL *pfVal);
        END_INTERFACE
    } IDVB_DITVtbl;
    interface IDVB_DIT
    {
        CONST_VTBL struct IDVB_DITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList) )
    ( (This)->lpVtbl -> GetTransitionFlag(This,pfVal) )
EXTERN_C const IID IID_IDVB_SIT;
    typedef struct IDVB_SITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDVB_SIT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDVB_SIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDVB_SIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IDVB_SIT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IDVB_SIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            IDVB_SIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            IDVB_SIT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            IDVB_SIT * This,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDVB_SIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDVB_SIT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRunningStatus )(
            IDVB_SIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IDVB_SIT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IDVB_SIT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IDVB_SIT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *RegisterForNextTable )(
            IDVB_SIT * This,
                       HANDLE hNextTableAvailable);
        HRESULT ( STDMETHODCALLTYPE *GetNextTable )(
            IDVB_SIT * This,
                       DWORD dwTimeout,
                        IDVB_SIT **ppSIT);
        HRESULT ( STDMETHODCALLTYPE *RegisterForWhenCurrent )(
            IDVB_SIT * This,
                       HANDLE hNextTableIsCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertNextToCurrent )(
            IDVB_SIT * This);
        END_INTERFACE
    } IDVB_SITVtbl;
    interface IDVB_SIT
    {
        CONST_VTBL struct IDVB_SITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordRunningStatus(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> RegisterForNextTable(This,hNextTableAvailable) )
    ( (This)->lpVtbl -> GetNextTable(This,dwTimeout,ppSIT) )
    ( (This)->lpVtbl -> RegisterForWhenCurrent(This,hNextTableIsCurrent) )
    ( (This)->lpVtbl -> ConvertNextToCurrent(This) )
EXTERN_C const IID IID_IISDB_BIT;
    typedef struct IISDB_BITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDB_BIT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IISDB_BIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IISDB_BIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IISDB_BIT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IISDB_BIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IISDB_BIT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetBroadcastViewPropriety )(
            IISDB_BIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            IISDB_BIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            IISDB_BIT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            IISDB_BIT * This,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IISDB_BIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordBroadcasterId )(
            IISDB_BIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IISDB_BIT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IISDB_BIT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IISDB_BIT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IISDB_BIT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IISDB_BITVtbl;
    interface IISDB_BIT
    {
        CONST_VTBL struct IISDB_BITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetBroadcastViewPropriety(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordBroadcasterId(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IISDB_NBIT;
    typedef struct IISDB_NBITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDB_NBIT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IISDB_NBIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IISDB_NBIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IISDB_NBIT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IISDB_NBIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IISDB_NBIT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IISDB_NBIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordInformationId )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordInformationType )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptionBodyLocation )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordMessageSectionNumber )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordUserDefined )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordNumberOfKeys )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordKeys )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        BYTE **pbKeys);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IISDB_NBIT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IISDB_NBIT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IISDB_NBITVtbl;
    interface IISDB_NBIT
    {
        CONST_VTBL struct IISDB_NBITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordInformationId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordInformationType(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordDescriptionBodyLocation(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordMessageSectionNumber(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordUserDefined(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordNumberOfKeys(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordKeys(This,dwRecordIndex,pbKeys) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IISDB_LDT;
    typedef struct IISDB_LDTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDB_LDT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IISDB_LDT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IISDB_LDT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IISDB_LDT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IISDB_LDT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalServiceId )(
            IISDB_LDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            IISDB_LDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IISDB_LDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IISDB_LDT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptionId )(
            IISDB_LDT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IISDB_LDT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IISDB_LDT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IISDB_LDT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IISDB_LDT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IISDB_LDTVtbl;
    interface IISDB_LDT
    {
        CONST_VTBL struct IISDB_LDTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetOriginalServiceId(This,pwVal) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptionId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IISDB_SDTT;
    typedef struct IISDB_SDTTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDB_SDTT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IISDB_SDTT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IISDB_SDTT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IISDB_SDTT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IISDB_SDTT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableIdExt )(
            IISDB_SDTT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            IISDB_SDTT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IISDB_SDTT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceId )(
            IISDB_SDTT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IISDB_SDTT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordGroup )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTargetVersion )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordNewVersion )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDownloadLevel )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordVersionIndicator )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordScheduleTimeShiftInformation )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfSchedules )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordStartTimeByIndex )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        MPEG_DATE_AND_TIME *pmdtVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDurationByIndex )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        MPEG_DURATION *pmdVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IISDB_SDTT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IISDB_SDTT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IISDB_SDTTVtbl;
    interface IISDB_SDTT
    {
        CONST_VTBL struct IISDB_SDTTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetTableIdExt(This,pwVal) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetServiceId(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordGroup(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordTargetVersion(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordNewVersion(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordDownloadLevel(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordVersionIndicator(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordScheduleTimeShiftInformation(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCountOfSchedules(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordStartTimeByIndex(This,dwRecordIndex,dwIndex,pmdtVal) )
    ( (This)->lpVtbl -> GetRecordDurationByIndex(This,dwRecordIndex,dwIndex,pmdVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IISDB_CDT;
    typedef struct IISDB_CDTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDB_CDT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IISDB_CDT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IISDB_CDT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IISDB_CDT * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData,
                       BYTE bSectionNumber);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IISDB_CDT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadDataId )(
            IISDB_CDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetSectionNumber )(
            IISDB_CDT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginalNetworkId )(
            IISDB_CDT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDataType )(
            IISDB_CDT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            IISDB_CDT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            IISDB_CDT * This,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            IISDB_CDT * This,
                       BYTE bTag,
            _Inout_opt_ DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetSizeOfDataModule )(
            IISDB_CDT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDataModule )(
            IISDB_CDT * This,
                        BYTE **pbData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IISDB_CDT * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IISDB_CDTVtbl;
    interface IISDB_CDT
    {
        CONST_VTBL struct IISDB_CDTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData,bSectionNumber) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetDownloadDataId(This,pwVal) )
    ( (This)->lpVtbl -> GetSectionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetOriginalNetworkId(This,pwVal) )
    ( (This)->lpVtbl -> GetDataType(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetSizeOfDataModule(This,pdwVal) )
    ( (This)->lpVtbl -> GetDataModule(This,pbData) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IISDB_EMM;
    typedef struct IISDB_EMMVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IISDB_EMM * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IISDB_EMM * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IISDB_EMM * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IISDB_EMM * This,
                       ISectionList *pSectionList,
                       IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IISDB_EMM * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableIdExtension )(
            IISDB_EMM * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDataBytes )(
            IISDB_EMM * This,
                            WORD *pwBufferLength,
                        BYTE *pbBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetSharedEmmMessage )(
            IISDB_EMM * This,
            WORD *pwLength,
            BYTE **ppbMessage);
        HRESULT ( STDMETHODCALLTYPE *GetIndividualEmmMessage )(
            IISDB_EMM * This,
            IUnknown *pUnknown,
            WORD *pwLength,
            BYTE **ppbMessage);
        HRESULT ( STDMETHODCALLTYPE *GetVersionHash )(
            IISDB_EMM * This,
                        DWORD *pdwVersionHash);
        END_INTERFACE
    } IISDB_EMMVtbl;
    interface IISDB_EMM
    {
        CONST_VTBL struct IISDB_EMMVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetTableIdExtension(This,pwVal) )
    ( (This)->lpVtbl -> GetDataBytes(This,pwBufferLength,pbBuffer) )
    ( (This)->lpVtbl -> GetSharedEmmMessage(This,pwLength,ppbMessage) )
    ( (This)->lpVtbl -> GetIndividualEmmMessage(This,pUnknown,pwLength,ppbMessage) )
    ( (This)->lpVtbl -> GetVersionHash(This,pdwVersionHash) )
EXTERN_C const IID IID_IDvbServiceAttributeDescriptor;
    typedef struct IDvbServiceAttributeDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbServiceAttributeDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbServiceAttributeDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbServiceAttributeDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbServiceAttributeDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbServiceAttributeDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbServiceAttributeDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDvbServiceAttributeDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordNumericSelectionFlag )(
            IDvbServiceAttributeDescriptor * This,
                       BYTE bRecordIndex,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordVisibleServiceFlag )(
            IDvbServiceAttributeDescriptor * This,
                       BYTE bRecordIndex,
                        BOOL *pfVal);
        END_INTERFACE
    } IDvbServiceAttributeDescriptorVtbl;
    interface IDvbServiceAttributeDescriptor
    {
        CONST_VTBL struct IDvbServiceAttributeDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordNumericSelectionFlag(This,bRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordVisibleServiceFlag(This,bRecordIndex,pfVal) )
typedef
enum __MIDL___MIDL_itf_dvbsiparser_0000_0022_0001
    {
        CRID_LOCATION_IN_DESCRIPTOR = 0,
        CRID_LOCATION_IN_CIT = 0x1,
        CRID_LOCATION_DVB_RESERVED1 = 0x2,
        CRID_LOCATION_DVB_RESERVED2 = 0x3
    } CRID_LOCATION;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IDvbContentIdentifierDescriptor;
    typedef struct IDvbContentIdentifierDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbContentIdentifierDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbContentIdentifierDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbContentIdentifierDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbContentIdentifierDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbContentIdentifierDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbContentIdentifierDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCrid )(
            IDvbContentIdentifierDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbType,
                        BYTE *pbLocation,
                        BYTE *pbLength,
                                          BYTE **ppbBytes);
        END_INTERFACE
    } IDvbContentIdentifierDescriptorVtbl;
    interface IDvbContentIdentifierDescriptor
    {
        CONST_VTBL struct IDvbContentIdentifierDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordCrid(This,bRecordIndex,pbType,pbLocation,pbLength,ppbBytes) )
EXTERN_C const IID IID_IDvbDefaultAuthorityDescriptor;
    typedef struct IDvbDefaultAuthorityDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbDefaultAuthorityDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbDefaultAuthorityDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbDefaultAuthorityDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbDefaultAuthorityDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbDefaultAuthorityDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultAuthority )(
            IDvbDefaultAuthorityDescriptor * This,
                        BYTE *pbLength,
                                          BYTE **ppbBytes);
        END_INTERFACE
    } IDvbDefaultAuthorityDescriptorVtbl;
    interface IDvbDefaultAuthorityDescriptor
    {
        CONST_VTBL struct IDvbDefaultAuthorityDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetDefaultAuthority(This,pbLength,ppbBytes) )
EXTERN_C const IID IID_IDvbSatelliteDeliverySystemDescriptor;
    typedef struct IDvbSatelliteDeliverySystemDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbSatelliteDeliverySystemDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbSatelliteDeliverySystemDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetFrequency )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOrbitalPosition )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetWestEastFlag )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetPolarization )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetModulation )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSymbolRate )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetFECInner )(
            IDvbSatelliteDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbSatelliteDeliverySystemDescriptorVtbl;
    interface IDvbSatelliteDeliverySystemDescriptor
    {
        CONST_VTBL struct IDvbSatelliteDeliverySystemDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetFrequency(This,pdwVal) )
    ( (This)->lpVtbl -> GetOrbitalPosition(This,pwVal) )
    ( (This)->lpVtbl -> GetWestEastFlag(This,pbVal) )
    ( (This)->lpVtbl -> GetPolarization(This,pbVal) )
    ( (This)->lpVtbl -> GetModulation(This,pbVal) )
    ( (This)->lpVtbl -> GetSymbolRate(This,pdwVal) )
    ( (This)->lpVtbl -> GetFECInner(This,pbVal) )
EXTERN_C const IID IID_IDvbCableDeliverySystemDescriptor;
    typedef struct IDvbCableDeliverySystemDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbCableDeliverySystemDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbCableDeliverySystemDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbCableDeliverySystemDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbCableDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbCableDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetFrequency )(
            IDvbCableDeliverySystemDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetFECOuter )(
            IDvbCableDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetModulation )(
            IDvbCableDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSymbolRate )(
            IDvbCableDeliverySystemDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetFECInner )(
            IDvbCableDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbCableDeliverySystemDescriptorVtbl;
    interface IDvbCableDeliverySystemDescriptor
    {
        CONST_VTBL struct IDvbCableDeliverySystemDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetFrequency(This,pdwVal) )
    ( (This)->lpVtbl -> GetFECOuter(This,pbVal) )
    ( (This)->lpVtbl -> GetModulation(This,pbVal) )
    ( (This)->lpVtbl -> GetSymbolRate(This,pdwVal) )
    ( (This)->lpVtbl -> GetFECInner(This,pbVal) )
EXTERN_C const IID IID_IDvbTerrestrialDeliverySystemDescriptor;
    typedef struct IDvbTerrestrialDeliverySystemDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbTerrestrialDeliverySystemDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbTerrestrialDeliverySystemDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCentreFrequency )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetBandwidth )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetConstellation )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetHierarchyInformation )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCodeRateHPStream )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCodeRateLPStream )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetGuardInterval )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransmissionMode )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetOtherFrequencyFlag )(
            IDvbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbTerrestrialDeliverySystemDescriptorVtbl;
    interface IDvbTerrestrialDeliverySystemDescriptor
    {
        CONST_VTBL struct IDvbTerrestrialDeliverySystemDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCentreFrequency(This,pdwVal) )
    ( (This)->lpVtbl -> GetBandwidth(This,pbVal) )
    ( (This)->lpVtbl -> GetConstellation(This,pbVal) )
    ( (This)->lpVtbl -> GetHierarchyInformation(This,pbVal) )
    ( (This)->lpVtbl -> GetCodeRateHPStream(This,pbVal) )
    ( (This)->lpVtbl -> GetCodeRateLPStream(This,pbVal) )
    ( (This)->lpVtbl -> GetGuardInterval(This,pbVal) )
    ( (This)->lpVtbl -> GetTransmissionMode(This,pbVal) )
    ( (This)->lpVtbl -> GetOtherFrequencyFlag(This,pbVal) )
EXTERN_C const IID IID_IDvbTerrestrial2DeliverySystemDescriptor;
    typedef struct IDvbTerrestrial2DeliverySystemDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbTerrestrial2DeliverySystemDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbTerrestrial2DeliverySystemDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTagExtension )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCentreFrequency )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetPLPId )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetT2SystemId )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetMultipleInputMode )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetBandwidth )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetGuardInterval )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransmissionMode )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCellId )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOtherFrequencyFlag )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTFSFlag )(
            IDvbTerrestrial2DeliverySystemDescriptor * This,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbTerrestrial2DeliverySystemDescriptorVtbl;
    interface IDvbTerrestrial2DeliverySystemDescriptor
    {
        CONST_VTBL struct IDvbTerrestrial2DeliverySystemDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetTagExtension(This,pbVal) )
    ( (This)->lpVtbl -> GetCentreFrequency(This,pdwVal) )
    ( (This)->lpVtbl -> GetPLPId(This,pbVal) )
    ( (This)->lpVtbl -> GetT2SystemId(This,pwVal) )
    ( (This)->lpVtbl -> GetMultipleInputMode(This,pbVal) )
    ( (This)->lpVtbl -> GetBandwidth(This,pbVal) )
    ( (This)->lpVtbl -> GetGuardInterval(This,pbVal) )
    ( (This)->lpVtbl -> GetTransmissionMode(This,pbVal) )
    ( (This)->lpVtbl -> GetCellId(This,pwVal) )
    ( (This)->lpVtbl -> GetOtherFrequencyFlag(This,pbVal) )
    ( (This)->lpVtbl -> GetTFSFlag(This,pbVal) )
EXTERN_C const IID IID_IDvbFrequencyListDescriptor;
    typedef struct IDvbFrequencyListDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbFrequencyListDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbFrequencyListDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbFrequencyListDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbFrequencyListDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbFrequencyListDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCodingType )(
            IDvbFrequencyListDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbFrequencyListDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCentreFrequency )(
            IDvbFrequencyListDescriptor * This,
                       BYTE bRecordIndex,
                        DWORD *pdwVal);
        END_INTERFACE
    } IDvbFrequencyListDescriptorVtbl;
    interface IDvbFrequencyListDescriptor
    {
        CONST_VTBL struct IDvbFrequencyListDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCodingType(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordCentreFrequency(This,bRecordIndex,pdwVal) )
EXTERN_C const IID IID_IDvbPrivateDataSpecifierDescriptor;
    typedef struct IDvbPrivateDataSpecifierDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbPrivateDataSpecifierDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbPrivateDataSpecifierDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbPrivateDataSpecifierDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbPrivateDataSpecifierDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbPrivateDataSpecifierDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateDataSpecifier )(
            IDvbPrivateDataSpecifierDescriptor * This,
                        DWORD *pdwVal);
        END_INTERFACE
    } IDvbPrivateDataSpecifierDescriptorVtbl;
    interface IDvbPrivateDataSpecifierDescriptor
    {
        CONST_VTBL struct IDvbPrivateDataSpecifierDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetPrivateDataSpecifier(This,pdwVal) )
EXTERN_C const IID IID_IDvbLogicalChannelDescriptor;
    typedef struct IDvbLogicalChannelDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbLogicalChannelDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbLogicalChannelDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbLogicalChannelDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbLogicalChannelDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbLogicalChannelDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbLogicalChannelDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDvbLogicalChannelDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLogicalChannelNumber )(
            IDvbLogicalChannelDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        END_INTERFACE
    } IDvbLogicalChannelDescriptorVtbl;
    interface IDvbLogicalChannelDescriptor
    {
        CONST_VTBL struct IDvbLogicalChannelDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) )
EXTERN_C const IID IID_IDvbLogicalChannelDescriptor2;
    typedef struct IDvbLogicalChannelDescriptor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbLogicalChannelDescriptor2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbLogicalChannelDescriptor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbLogicalChannelDescriptor2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbLogicalChannelDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbLogicalChannelDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbLogicalChannelDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDvbLogicalChannelDescriptor2 * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLogicalChannelNumber )(
            IDvbLogicalChannelDescriptor2 * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLogicalChannelAndVisibility )(
            IDvbLogicalChannelDescriptor2 * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        END_INTERFACE
    } IDvbLogicalChannelDescriptor2Vtbl;
    interface IDvbLogicalChannelDescriptor2
    {
        CONST_VTBL struct IDvbLogicalChannelDescriptor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal) )
EXTERN_C const IID IID_IDvbLogicalChannel2Descriptor;
    typedef struct IDvbLogicalChannel2DescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbLogicalChannel2Descriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbLogicalChannel2Descriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbLogicalChannel2Descriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbLogicalChannel2Descriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbLogicalChannel2Descriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbLogicalChannel2Descriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLogicalChannelNumber )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLogicalChannelAndVisibility )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfLists )(
            IDvbLogicalChannel2Descriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetListId )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bListIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetListNameW )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bListIndex,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetListCountryCode )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bListIndex,
            _Out_writes_(4) char *pszCode);
        HRESULT ( STDMETHODCALLTYPE *GetListCountOfRecords )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bChannelListIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetListRecordServiceId )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bListIndex,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetListRecordLogicalChannelNumber )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bListIndex,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetListRecordLogicalChannelAndVisibility )(
            IDvbLogicalChannel2Descriptor * This,
                       BYTE bListIndex,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        END_INTERFACE
    } IDvbLogicalChannel2DescriptorVtbl;
    interface IDvbLogicalChannel2Descriptor
    {
        CONST_VTBL struct IDvbLogicalChannel2DescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetCountOfLists(This,pbVal) )
    ( (This)->lpVtbl -> GetListId(This,bListIndex,pbVal) )
    ( (This)->lpVtbl -> GetListNameW(This,bListIndex,convMode,pbstrName) )
    ( (This)->lpVtbl -> GetListCountryCode(This,bListIndex,pszCode) )
    ( (This)->lpVtbl -> GetListCountOfRecords(This,bChannelListIndex,pbVal) )
    ( (This)->lpVtbl -> GetListRecordServiceId(This,bListIndex,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetListRecordLogicalChannelNumber(This,bListIndex,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetListRecordLogicalChannelAndVisibility(This,bListIndex,bRecordIndex,pwVal) )
EXTERN_C const IID IID_IDvbHDSimulcastLogicalChannelDescriptor;
    typedef struct IDvbHDSimulcastLogicalChannelDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbHDSimulcastLogicalChannelDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbHDSimulcastLogicalChannelDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbHDSimulcastLogicalChannelDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbHDSimulcastLogicalChannelDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbHDSimulcastLogicalChannelDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbHDSimulcastLogicalChannelDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDvbHDSimulcastLogicalChannelDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLogicalChannelNumber )(
            IDvbHDSimulcastLogicalChannelDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLogicalChannelAndVisibility )(
            IDvbHDSimulcastLogicalChannelDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        END_INTERFACE
    } IDvbHDSimulcastLogicalChannelDescriptorVtbl;
    interface IDvbHDSimulcastLogicalChannelDescriptor
    {
        CONST_VTBL struct IDvbHDSimulcastLogicalChannelDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordLogicalChannelNumber(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordLogicalChannelAndVisibility(This,bRecordIndex,pwVal) )
EXTERN_C const IID IID_IDvbDataBroadcastIDDescriptor;
    typedef struct IDvbDataBroadcastIDDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbDataBroadcastIDDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbDataBroadcastIDDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbDataBroadcastIDDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbDataBroadcastIDDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbDataBroadcastIDDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDataBroadcastID )(
            IDvbDataBroadcastIDDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetIDSelectorBytes )(
            IDvbDataBroadcastIDDescriptor * This,
                            BYTE *pbLen,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbDataBroadcastIDDescriptorVtbl;
    interface IDvbDataBroadcastIDDescriptor
    {
        CONST_VTBL struct IDvbDataBroadcastIDDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetDataBroadcastID(This,pwVal) )
    ( (This)->lpVtbl -> GetIDSelectorBytes(This,pbLen,pbVal) )
EXTERN_C const IID IID_IDvbDataBroadcastDescriptor;
    typedef struct IDvbDataBroadcastDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbDataBroadcastDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbDataBroadcastDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbDataBroadcastDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbDataBroadcastDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbDataBroadcastDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDataBroadcastID )(
            IDvbDataBroadcastDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetComponentTag )(
            IDvbDataBroadcastDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSelectorLength )(
            IDvbDataBroadcastDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSelectorBytes )(
            IDvbDataBroadcastDescriptor * This,
                            BYTE *pbLen,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLangID )(
            IDvbDataBroadcastDescriptor * This,
                        ULONG *pulVal);
        HRESULT ( STDMETHODCALLTYPE *GetTextLength )(
            IDvbDataBroadcastDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            IDvbDataBroadcastDescriptor * This,
                            BYTE *pbLen,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbDataBroadcastDescriptorVtbl;
    interface IDvbDataBroadcastDescriptor
    {
        CONST_VTBL struct IDvbDataBroadcastDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetDataBroadcastID(This,pwVal) )
    ( (This)->lpVtbl -> GetComponentTag(This,pbVal) )
    ( (This)->lpVtbl -> GetSelectorLength(This,pbVal) )
    ( (This)->lpVtbl -> GetSelectorBytes(This,pbLen,pbVal) )
    ( (This)->lpVtbl -> GetLangID(This,pulVal) )
    ( (This)->lpVtbl -> GetTextLength(This,pbVal) )
    ( (This)->lpVtbl -> GetText(This,pbLen,pbVal) )
typedef
enum __MIDL___MIDL_itf_dvbsiparser_0000_0036_0001
    {
        DESC_LINKAGE_RESERVED0 = 0,
        DESC_LINKAGE_INFORMATION = ( DESC_LINKAGE_RESERVED0 + 1 ) ,
        DESC_LINKAGE_EPG = ( DESC_LINKAGE_INFORMATION + 1 ) ,
        DESC_LINKAGE_CA_REPLACEMENT = ( DESC_LINKAGE_EPG + 1 ) ,
        DESC_LINKAGE_COMPLETE_NET_BOUQUET_SI = ( DESC_LINKAGE_CA_REPLACEMENT + 1 ) ,
        DESC_LINKAGE_REPLACEMENT = ( DESC_LINKAGE_COMPLETE_NET_BOUQUET_SI + 1 ) ,
        DESC_LINKAGE_DATA = ( DESC_LINKAGE_REPLACEMENT + 1 ) ,
        DESC_LINKAGE_RESERVED1 = 0x7,
        DESC_LINKAGE_USER = 0x8,
        DESC_LINKAGE_RESERVED2 = 0xff
    } DESC_LINKAGE_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0036_v0_0_s_ifspec;
EXTERN_C const IID IID_IDvbLinkageDescriptor;
    typedef struct IDvbLinkageDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbLinkageDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbLinkageDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbLinkageDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbLinkageDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbLinkageDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTSId )(
            IDvbLinkageDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetONId )(
            IDvbLinkageDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceId )(
            IDvbLinkageDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetLinkageType )(
            IDvbLinkageDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateDataLength )(
            IDvbLinkageDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IDvbLinkageDescriptor * This,
                            BYTE *pbLen,
                        BYTE *pbData);
        END_INTERFACE
    } IDvbLinkageDescriptorVtbl;
    interface IDvbLinkageDescriptor
    {
        CONST_VTBL struct IDvbLinkageDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetTSId(This,pwVal) )
    ( (This)->lpVtbl -> GetONId(This,pwVal) )
    ( (This)->lpVtbl -> GetServiceId(This,pwVal) )
    ( (This)->lpVtbl -> GetLinkageType(This,pbVal) )
    ( (This)->lpVtbl -> GetPrivateDataLength(This,pbVal) )
    ( (This)->lpVtbl -> GetPrivateData(This,pbLen,pbData) )
EXTERN_C const IID IID_IDvbTeletextDescriptor;
    typedef struct IDvbTeletextDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbTeletextDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbTeletextDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbTeletextDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbTeletextDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbTeletextDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbTeletextDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLangId )(
            IDvbTeletextDescriptor * This,
                       BYTE bRecordIndex,
                        ULONG *pulVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTeletextType )(
            IDvbTeletextDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordMagazineNumber )(
            IDvbTeletextDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordPageNumber )(
            IDvbTeletextDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbTeletextDescriptorVtbl;
    interface IDvbTeletextDescriptor
    {
        CONST_VTBL struct IDvbTeletextDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordLangId(This,bRecordIndex,pulVal) )
    ( (This)->lpVtbl -> GetRecordTeletextType(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordMagazineNumber(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordPageNumber(This,bRecordIndex,pbVal) )
EXTERN_C const IID IID_IDvbSubtitlingDescriptor;
    typedef struct IDvbSubtitlingDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbSubtitlingDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbSubtitlingDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbSubtitlingDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbSubtitlingDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbSubtitlingDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbSubtitlingDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLangId )(
            IDvbSubtitlingDescriptor * This,
                       BYTE bRecordIndex,
                        ULONG *pulVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordSubtitlingType )(
            IDvbSubtitlingDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCompositionPageID )(
            IDvbSubtitlingDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordAncillaryPageID )(
            IDvbSubtitlingDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        END_INTERFACE
    } IDvbSubtitlingDescriptorVtbl;
    interface IDvbSubtitlingDescriptor
    {
        CONST_VTBL struct IDvbSubtitlingDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordLangId(This,bRecordIndex,pulVal) )
    ( (This)->lpVtbl -> GetRecordSubtitlingType(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCompositionPageID(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordAncillaryPageID(This,bRecordIndex,pwVal) )
EXTERN_C const IID IID_IDvbServiceDescriptor;
    typedef struct IDvbServiceDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbServiceDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbServiceDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbServiceDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbServiceDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbServiceDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceType )(
            IDvbServiceDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceProviderName )(
            IDvbServiceDescriptor * This,
            _Outptr_ char **pszName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceProviderNameW )(
            IDvbServiceDescriptor * This,
            _Outptr_ BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceName )(
            IDvbServiceDescriptor * This,
            _Outptr_ char **pszName);
        HRESULT ( STDMETHODCALLTYPE *GetProcessedServiceName )(
            IDvbServiceDescriptor * This,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceNameEmphasized )(
            IDvbServiceDescriptor * This,
                        BSTR *pbstrName);
        END_INTERFACE
    } IDvbServiceDescriptorVtbl;
    interface IDvbServiceDescriptor
    {
        CONST_VTBL struct IDvbServiceDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceType(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceProviderName(This,pszName) )
    ( (This)->lpVtbl -> GetServiceProviderNameW(This,pbstrName) )
    ( (This)->lpVtbl -> GetServiceName(This,pszName) )
    ( (This)->lpVtbl -> GetProcessedServiceName(This,pbstrName) )
    ( (This)->lpVtbl -> GetServiceNameEmphasized(This,pbstrName) )
EXTERN_C const IID IID_IDvbServiceDescriptor2;
    typedef struct IDvbServiceDescriptor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbServiceDescriptor2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbServiceDescriptor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbServiceDescriptor2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbServiceDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbServiceDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceType )(
            IDvbServiceDescriptor2 * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceProviderName )(
            IDvbServiceDescriptor2 * This,
            _Outptr_ char **pszName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceProviderNameW )(
            IDvbServiceDescriptor2 * This,
            _Outptr_ BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceName )(
            IDvbServiceDescriptor2 * This,
            _Outptr_ char **pszName);
        HRESULT ( STDMETHODCALLTYPE *GetProcessedServiceName )(
            IDvbServiceDescriptor2 * This,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceNameEmphasized )(
            IDvbServiceDescriptor2 * This,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceProviderNameW )(
            IDvbServiceDescriptor2 * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetServiceNameW )(
            IDvbServiceDescriptor2 * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        END_INTERFACE
    } IDvbServiceDescriptor2Vtbl;
    interface IDvbServiceDescriptor2
    {
        CONST_VTBL struct IDvbServiceDescriptor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceType(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceProviderName(This,pszName) )
    ( (This)->lpVtbl -> GetServiceProviderNameW(This,pbstrName) )
    ( (This)->lpVtbl -> GetServiceName(This,pszName) )
    ( (This)->lpVtbl -> GetProcessedServiceName(This,pbstrName) )
    ( (This)->lpVtbl -> GetServiceNameEmphasized(This,pbstrName) )
    ( (This)->lpVtbl -> GetServiceProviderNameW(This,convMode,pbstrName) )
    ( (This)->lpVtbl -> GetServiceNameW(This,convMode,pbstrName) )
EXTERN_C const IID IID_IDvbServiceListDescriptor;
    typedef struct IDvbServiceListDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbServiceListDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbServiceListDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbServiceListDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbServiceListDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbServiceListDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbServiceListDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceId )(
            IDvbServiceListDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceType )(
            IDvbServiceListDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbServiceListDescriptorVtbl;
    interface IDvbServiceListDescriptor
    {
        CONST_VTBL struct IDvbServiceListDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordServiceId(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordServiceType(This,bRecordIndex,pbVal) )
EXTERN_C const IID IID_IDvbMultilingualServiceNameDescriptor;
    typedef struct IDvbMultilingualServiceNameDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbMultilingualServiceNameDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbMultilingualServiceNameDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbMultilingualServiceNameDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbMultilingualServiceNameDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbMultilingualServiceNameDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbMultilingualServiceNameDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordLangId )(
            IDvbMultilingualServiceNameDescriptor * This,
                       BYTE bRecordIndex,
                        ULONG *ulVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceProviderNameW )(
            IDvbMultilingualServiceNameDescriptor * This,
                       BYTE bRecordIndex,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceNameW )(
            IDvbMultilingualServiceNameDescriptor * This,
                       BYTE bRecordIndex,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        END_INTERFACE
    } IDvbMultilingualServiceNameDescriptorVtbl;
    interface IDvbMultilingualServiceNameDescriptor
    {
        CONST_VTBL struct IDvbMultilingualServiceNameDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordLangId(This,bRecordIndex,ulVal) )
    ( (This)->lpVtbl -> GetRecordServiceProviderNameW(This,bRecordIndex,convMode,pbstrName) )
    ( (This)->lpVtbl -> GetRecordServiceNameW(This,bRecordIndex,convMode,pbstrName) )
EXTERN_C const IID IID_IDvbNetworkNameDescriptor;
    typedef struct IDvbNetworkNameDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbNetworkNameDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbNetworkNameDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbNetworkNameDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbNetworkNameDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbNetworkNameDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkName )(
            IDvbNetworkNameDescriptor * This,
            _Outptr_ char **pszName);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkNameW )(
            IDvbNetworkNameDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        END_INTERFACE
    } IDvbNetworkNameDescriptorVtbl;
    interface IDvbNetworkNameDescriptor
    {
        CONST_VTBL struct IDvbNetworkNameDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetNetworkName(This,pszName) )
    ( (This)->lpVtbl -> GetNetworkNameW(This,convMode,pbstrName) )
EXTERN_C const IID IID_IDvbShortEventDescriptor;
    typedef struct IDvbShortEventDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbShortEventDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbShortEventDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbShortEventDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbShortEventDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbShortEventDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCode )(
            IDvbShortEventDescriptor * This,
            _Out_writes_(4) char *pszCode);
        HRESULT ( STDMETHODCALLTYPE *GetEventNameW )(
            IDvbShortEventDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetTextW )(
            IDvbShortEventDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrText);
        END_INTERFACE
    } IDvbShortEventDescriptorVtbl;
    interface IDvbShortEventDescriptor
    {
        CONST_VTBL struct IDvbShortEventDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) )
    ( (This)->lpVtbl -> GetEventNameW(This,convMode,pbstrName) )
    ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) )
EXTERN_C const IID IID_IDvbExtendedEventDescriptor;
    typedef struct IDvbExtendedEventDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbExtendedEventDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbExtendedEventDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbExtendedEventDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbExtendedEventDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbExtendedEventDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptorNumber )(
            IDvbExtendedEventDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLastDescriptorNumber )(
            IDvbExtendedEventDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCode )(
            IDvbExtendedEventDescriptor * This,
            _Out_writes_(4) char *pszCode);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbExtendedEventDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordItemW )(
            IDvbExtendedEventDescriptor * This,
                       BYTE bRecordIndex,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrDesc,
                        BSTR *pbstrItem);
        HRESULT ( STDMETHODCALLTYPE *GetConcatenatedItemW )(
            IDvbExtendedEventDescriptor * This,
                       IDvbExtendedEventDescriptor *pFollowingDescriptor,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrDesc,
                        BSTR *pbstrItem);
        HRESULT ( STDMETHODCALLTYPE *GetTextW )(
            IDvbExtendedEventDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrText);
        HRESULT ( STDMETHODCALLTYPE *GetConcatenatedTextW )(
            IDvbExtendedEventDescriptor * This,
                       IDvbExtendedEventDescriptor *FollowingDescriptor,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrText);
        HRESULT ( STDMETHODCALLTYPE *GetRecordItemRawBytes )(
            IDvbExtendedEventDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE **ppbRawItem,
                        BYTE *pbItemLength);
        END_INTERFACE
    } IDvbExtendedEventDescriptorVtbl;
    interface IDvbExtendedEventDescriptor
    {
        CONST_VTBL struct IDvbExtendedEventDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetDescriptorNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetLastDescriptorNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordItemW(This,bRecordIndex,convMode,pbstrDesc,pbstrItem) )
    ( (This)->lpVtbl -> GetConcatenatedItemW(This,pFollowingDescriptor,convMode,pbstrDesc,pbstrItem) )
    ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) )
    ( (This)->lpVtbl -> GetConcatenatedTextW(This,FollowingDescriptor,convMode,pbstrText) )
    ( (This)->lpVtbl -> GetRecordItemRawBytes(This,bRecordIndex,ppbRawItem,pbItemLength) )
EXTERN_C const IID IID_IDvbComponentDescriptor;
    typedef struct IDvbComponentDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbComponentDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbComponentDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbComponentDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetStreamContent )(
            IDvbComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            IDvbComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetComponentTag )(
            IDvbComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCode )(
            IDvbComponentDescriptor * This,
            _Out_writes_(4) char *pszCode);
        HRESULT ( STDMETHODCALLTYPE *GetTextW )(
            IDvbComponentDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrText);
        END_INTERFACE
    } IDvbComponentDescriptorVtbl;
    interface IDvbComponentDescriptor
    {
        CONST_VTBL struct IDvbComponentDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetStreamContent(This,pbVal) )
    ( (This)->lpVtbl -> GetComponentType(This,pbVal) )
    ( (This)->lpVtbl -> GetComponentTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) )
    ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) )
EXTERN_C const IID IID_IDvbContentDescriptor;
    typedef struct IDvbContentDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbContentDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbContentDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbContentDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordContentNibbles )(
            IDvbContentDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbValLevel1,
                        BYTE *pbValLevel2);
        HRESULT ( STDMETHODCALLTYPE *GetRecordUserNibbles )(
            IDvbContentDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal1,
                        BYTE *pbVal2);
        END_INTERFACE
    } IDvbContentDescriptorVtbl;
    interface IDvbContentDescriptor
    {
        CONST_VTBL struct IDvbContentDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordContentNibbles(This,bRecordIndex,pbValLevel1,pbValLevel2) )
    ( (This)->lpVtbl -> GetRecordUserNibbles(This,bRecordIndex,pbVal1,pbVal2) )
EXTERN_C const IID IID_IDvbParentalRatingDescriptor;
    typedef struct IDvbParentalRatingDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDvbParentalRatingDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDvbParentalRatingDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDvbParentalRatingDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IDvbParentalRatingDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IDvbParentalRatingDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IDvbParentalRatingDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRating )(
            IDvbParentalRatingDescriptor * This,
                       BYTE bRecordIndex,
            _Out_writes_(4) char *pszCountryCode,
                        BYTE *pbVal);
        END_INTERFACE
    } IDvbParentalRatingDescriptorVtbl;
    interface IDvbParentalRatingDescriptor
    {
        CONST_VTBL struct IDvbParentalRatingDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordRating(This,bRecordIndex,pszCountryCode,pbVal) )
EXTERN_C const IID IID_IIsdbTerrestrialDeliverySystemDescriptor;
    typedef struct IIsdbTerrestrialDeliverySystemDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbTerrestrialDeliverySystemDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbTerrestrialDeliverySystemDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetAreaCode )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetGuardInterval )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransmissionMode )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordFrequency )(
            IIsdbTerrestrialDeliverySystemDescriptor * This,
                       BYTE bRecordIndex,
                        DWORD *pdwVal);
        END_INTERFACE
    } IIsdbTerrestrialDeliverySystemDescriptorVtbl;
    interface IIsdbTerrestrialDeliverySystemDescriptor
    {
        CONST_VTBL struct IIsdbTerrestrialDeliverySystemDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetAreaCode(This,pwVal) )
    ( (This)->lpVtbl -> GetGuardInterval(This,pbVal) )
    ( (This)->lpVtbl -> GetTransmissionMode(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordFrequency(This,bRecordIndex,pdwVal) )
EXTERN_C const IID IID_IIsdbTSInformationDescriptor;
    typedef struct IIsdbTSInformationDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbTSInformationDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbTSInformationDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbTSInformationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbTSInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbTSInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRemoteControlKeyId )(
            IIsdbTSInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTSNameW )(
            IIsdbTSInformationDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbTSInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTransmissionTypeInfo )(
            IIsdbTSInformationDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordNumberOfServices )(
            IIsdbTSInformationDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceIdByIndex )(
            IIsdbTSInformationDescriptor * This,
                       BYTE bRecordIndex,
                       BYTE bServiceIndex,
                        WORD *pdwVal);
        END_INTERFACE
    } IIsdbTSInformationDescriptorVtbl;
    interface IIsdbTSInformationDescriptor
    {
        CONST_VTBL struct IIsdbTSInformationDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetRemoteControlKeyId(This,pbVal) )
    ( (This)->lpVtbl -> GetTSNameW(This,convMode,pbstrName) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordTransmissionTypeInfo(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordNumberOfServices(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordServiceIdByIndex(This,bRecordIndex,bServiceIndex,pdwVal) )
EXTERN_C const IID IID_IIsdbDigitalCopyControlDescriptor;
    typedef struct IIsdbDigitalCopyControlDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbDigitalCopyControlDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbDigitalCopyControlDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbDigitalCopyControlDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbDigitalCopyControlDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbDigitalCopyControlDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCopyControl )(
            IIsdbDigitalCopyControlDescriptor * This,
                        BYTE *pbDigitalRecordingControlData,
                        BYTE *pbCopyControlType,
                        BYTE *pbAPSControlData,
                        BYTE *pbMaximumBitrate);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbDigitalCopyControlDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCopyControl )(
            IIsdbDigitalCopyControlDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbComponentTag,
                        BYTE *pbDigitalRecordingControlData,
                        BYTE *pbCopyControlType,
                        BYTE *pbAPSControlData,
                        BYTE *pbMaximumBitrate);
        END_INTERFACE
    } IIsdbDigitalCopyControlDescriptorVtbl;
    interface IIsdbDigitalCopyControlDescriptor
    {
        CONST_VTBL struct IIsdbDigitalCopyControlDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCopyControl(This,pbDigitalRecordingControlData,pbCopyControlType,pbAPSControlData,pbMaximumBitrate) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordCopyControl(This,bRecordIndex,pbComponentTag,pbDigitalRecordingControlData,pbCopyControlType,pbAPSControlData,pbMaximumBitrate) )
EXTERN_C const IID IID_IIsdbAudioComponentDescriptor;
    typedef struct IIsdbAudioComponentDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbAudioComponentDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbAudioComponentDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbAudioComponentDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetStreamContent )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetComponentType )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetComponentTag )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetStreamType )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSimulcastGroupTag )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetESMultiLingualFlag )(
            IIsdbAudioComponentDescriptor * This,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetMainComponentFlag )(
            IIsdbAudioComponentDescriptor * This,
                        BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetQualityIndicator )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSamplingRate )(
            IIsdbAudioComponentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCode )(
            IIsdbAudioComponentDescriptor * This,
            _Out_writes_(4) char *pszCode);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCode2 )(
            IIsdbAudioComponentDescriptor * This,
            _Out_writes_(4) char *pszCode);
        HRESULT ( STDMETHODCALLTYPE *GetTextW )(
            IIsdbAudioComponentDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrText);
        END_INTERFACE
    } IIsdbAudioComponentDescriptorVtbl;
    interface IIsdbAudioComponentDescriptor
    {
        CONST_VTBL struct IIsdbAudioComponentDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetStreamContent(This,pbVal) )
    ( (This)->lpVtbl -> GetComponentType(This,pbVal) )
    ( (This)->lpVtbl -> GetComponentTag(This,pbVal) )
    ( (This)->lpVtbl -> GetStreamType(This,pbVal) )
    ( (This)->lpVtbl -> GetSimulcastGroupTag(This,pbVal) )
    ( (This)->lpVtbl -> GetESMultiLingualFlag(This,pfVal) )
    ( (This)->lpVtbl -> GetMainComponentFlag(This,pfVal) )
    ( (This)->lpVtbl -> GetQualityIndicator(This,pbVal) )
    ( (This)->lpVtbl -> GetSamplingRate(This,pbVal) )
    ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) )
    ( (This)->lpVtbl -> GetLanguageCode2(This,pszCode) )
    ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) )
EXTERN_C const IID IID_IIsdbDataContentDescriptor;
    typedef struct IIsdbDataContentDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbDataContentDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbDataContentDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbDataContentDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbDataContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbDataContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDataComponentId )(
            IIsdbDataContentDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetEntryComponent )(
            IIsdbDataContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSelectorLength )(
            IIsdbDataContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSelectorBytes )(
            IIsdbDataContentDescriptor * This,
                       BYTE bBufLength,
                        BYTE *pbBuf);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbDataContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordComponentRef )(
            IIsdbDataContentDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCode )(
            IIsdbDataContentDescriptor * This,
            _Out_writes_(4) char *pszCode);
        HRESULT ( STDMETHODCALLTYPE *GetTextW )(
            IIsdbDataContentDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrText);
        END_INTERFACE
    } IIsdbDataContentDescriptorVtbl;
    interface IIsdbDataContentDescriptor
    {
        CONST_VTBL struct IIsdbDataContentDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetDataComponentId(This,pwVal) )
    ( (This)->lpVtbl -> GetEntryComponent(This,pbVal) )
    ( (This)->lpVtbl -> GetSelectorLength(This,pbVal) )
    ( (This)->lpVtbl -> GetSelectorBytes(This,bBufLength,pbBuf) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordComponentRef(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetLanguageCode(This,pszCode) )
    ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrText) )
EXTERN_C const IID IID_IIsdbCAContractInformationDescriptor;
    typedef struct IIsdbCAContractInformationDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbCAContractInformationDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbCAContractInformationDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbCAContractInformationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbCAContractInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbCAContractInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCASystemId )(
            IIsdbCAContractInformationDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCAUnitId )(
            IIsdbCAContractInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbCAContractInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordComponentTag )(
            IIsdbCAContractInformationDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetContractVerificationInfoLength )(
            IIsdbCAContractInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetContractVerificationInfo )(
            IIsdbCAContractInformationDescriptor * This,
                       BYTE bBufLength,
                        BYTE *pbBuf);
        HRESULT ( STDMETHODCALLTYPE *GetFeeNameW )(
            IIsdbCAContractInformationDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        END_INTERFACE
    } IIsdbCAContractInformationDescriptorVtbl;
    interface IIsdbCAContractInformationDescriptor
    {
        CONST_VTBL struct IIsdbCAContractInformationDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCASystemId(This,pwVal) )
    ( (This)->lpVtbl -> GetCAUnitId(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordComponentTag(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetContractVerificationInfoLength(This,pbVal) )
    ( (This)->lpVtbl -> GetContractVerificationInfo(This,bBufLength,pbBuf) )
    ( (This)->lpVtbl -> GetFeeNameW(This,convMode,pbstrName) )
EXTERN_C const IID IID_IIsdbEventGroupDescriptor;
    typedef struct IIsdbEventGroupDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbEventGroupDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbEventGroupDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbEventGroupDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbEventGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbEventGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetGroupType )(
            IIsdbEventGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbEventGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEvent )(
            IIsdbEventGroupDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwServiceId,
                        WORD *pwEventId);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRefRecords )(
            IIsdbEventGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRefRecordEvent )(
            IIsdbEventGroupDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwOriginalNetworkId,
                        WORD *pwTransportStreamId,
                        WORD *pwServiceId,
                        WORD *pwEventId);
        END_INTERFACE
    } IIsdbEventGroupDescriptorVtbl;
    interface IIsdbEventGroupDescriptor
    {
        CONST_VTBL struct IIsdbEventGroupDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetGroupType(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordEvent(This,bRecordIndex,pwServiceId,pwEventId) )
    ( (This)->lpVtbl -> GetCountOfRefRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRefRecordEvent(This,bRecordIndex,pwOriginalNetworkId,pwTransportStreamId,pwServiceId,pwEventId) )
EXTERN_C const IID IID_IIsdbComponentGroupDescriptor;
    typedef struct IIsdbComponentGroupDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbComponentGroupDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbComponentGroupDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbComponentGroupDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbComponentGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbComponentGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetComponentGroupType )(
            IIsdbComponentGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbComponentGroupDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordGroupId )(
            IIsdbComponentGroupDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordNumberOfCAUnit )(
            IIsdbComponentGroupDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCAUnitCAUnitId )(
            IIsdbComponentGroupDescriptor * This,
                       BYTE bRecordIndex,
                       BYTE bCAUnitIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCAUnitNumberOfComponents )(
            IIsdbComponentGroupDescriptor * This,
                       BYTE bRecordIndex,
                       BYTE bCAUnitIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCAUnitComponentTag )(
            IIsdbComponentGroupDescriptor * This,
                       BYTE bRecordIndex,
                       BYTE bCAUnitIndex,
                       BYTE bComponentIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTotalBitRate )(
            IIsdbComponentGroupDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTextW )(
            IIsdbComponentGroupDescriptor * This,
                       BYTE bRecordIndex,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrText);
        END_INTERFACE
    } IIsdbComponentGroupDescriptorVtbl;
    interface IIsdbComponentGroupDescriptor
    {
        CONST_VTBL struct IIsdbComponentGroupDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetComponentGroupType(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordGroupId(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordNumberOfCAUnit(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCAUnitCAUnitId(This,bRecordIndex,bCAUnitIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCAUnitNumberOfComponents(This,bRecordIndex,bCAUnitIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCAUnitComponentTag(This,bRecordIndex,bCAUnitIndex,bComponentIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordTotalBitRate(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordTextW(This,bRecordIndex,convMode,pbstrText) )
EXTERN_C const IID IID_IIsdbSeriesDescriptor;
    typedef struct IIsdbSeriesDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbSeriesDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbSeriesDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbSeriesDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbSeriesDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbSeriesDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSeriesId )(
            IIsdbSeriesDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRepeatLabel )(
            IIsdbSeriesDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetProgramPattern )(
            IIsdbSeriesDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetExpireDate )(
            IIsdbSeriesDescriptor * This,
                        BOOL *pfValid,
                        MPEG_DATE_AND_TIME *pmdtVal);
        HRESULT ( STDMETHODCALLTYPE *GetEpisodeNumber )(
            IIsdbSeriesDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetLastEpisodeNumber )(
            IIsdbSeriesDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetSeriesNameW )(
            IIsdbSeriesDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        END_INTERFACE
    } IIsdbSeriesDescriptorVtbl;
    interface IIsdbSeriesDescriptor
    {
        CONST_VTBL struct IIsdbSeriesDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetSeriesId(This,pwVal) )
    ( (This)->lpVtbl -> GetRepeatLabel(This,pbVal) )
    ( (This)->lpVtbl -> GetProgramPattern(This,pbVal) )
    ( (This)->lpVtbl -> GetExpireDate(This,pfValid,pmdtVal) )
    ( (This)->lpVtbl -> GetEpisodeNumber(This,pwVal) )
    ( (This)->lpVtbl -> GetLastEpisodeNumber(This,pwVal) )
    ( (This)->lpVtbl -> GetSeriesNameW(This,convMode,pbstrName) )
EXTERN_C const IID IID_IIsdbDownloadContentDescriptor;
    typedef struct IIsdbDownloadContentDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbDownloadContentDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbDownloadContentDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbDownloadContentDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbDownloadContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbDownloadContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IIsdbDownloadContentDescriptor * This,
                        BOOL *pfReboot,
                        BOOL *pfAddOn,
                        BOOL *pfCompatibility,
                        BOOL *pfModuleInfo,
                        BOOL *pfTextInfo);
        HRESULT ( STDMETHODCALLTYPE *GetComponentSize )(
            IIsdbDownloadContentDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadId )(
            IIsdbDownloadContentDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTimeOutValueDII )(
            IIsdbDownloadContentDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetLeakRate )(
            IIsdbDownloadContentDescriptor * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetComponentTag )(
            IIsdbDownloadContentDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCompatiblityDescriptorLength )(
            IIsdbDownloadContentDescriptor * This,
                        WORD *pwLength);
        HRESULT ( STDMETHODCALLTYPE *GetCompatiblityDescriptor )(
            IIsdbDownloadContentDescriptor * This,
                        BYTE **ppbData);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbDownloadContentDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordModuleId )(
            IIsdbDownloadContentDescriptor * This,
                       WORD wRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordModuleSize )(
            IIsdbDownloadContentDescriptor * This,
                       WORD wRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordModuleInfoLength )(
            IIsdbDownloadContentDescriptor * This,
                       WORD wRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordModuleInfo )(
            IIsdbDownloadContentDescriptor * This,
                       WORD wRecordIndex,
                        BYTE **ppbData);
        HRESULT ( STDMETHODCALLTYPE *GetTextLanguageCode )(
            IIsdbDownloadContentDescriptor * This,
            _Out_writes_(4) char *szCode);
        HRESULT ( STDMETHODCALLTYPE *GetTextW )(
            IIsdbDownloadContentDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrName);
        END_INTERFACE
    } IIsdbDownloadContentDescriptorVtbl;
    interface IIsdbDownloadContentDescriptor
    {
        CONST_VTBL struct IIsdbDownloadContentDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetFlags(This,pfReboot,pfAddOn,pfCompatibility,pfModuleInfo,pfTextInfo) )
    ( (This)->lpVtbl -> GetComponentSize(This,pdwVal) )
    ( (This)->lpVtbl -> GetDownloadId(This,pdwVal) )
    ( (This)->lpVtbl -> GetTimeOutValueDII(This,pdwVal) )
    ( (This)->lpVtbl -> GetLeakRate(This,pdwVal) )
    ( (This)->lpVtbl -> GetComponentTag(This,pbVal) )
    ( (This)->lpVtbl -> GetCompatiblityDescriptorLength(This,pwLength) )
    ( (This)->lpVtbl -> GetCompatiblityDescriptor(This,ppbData) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pwVal) )
    ( (This)->lpVtbl -> GetRecordModuleId(This,wRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordModuleSize(This,wRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordModuleInfoLength(This,wRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordModuleInfo(This,wRecordIndex,ppbData) )
    ( (This)->lpVtbl -> GetTextLanguageCode(This,szCode) )
    ( (This)->lpVtbl -> GetTextW(This,convMode,pbstrName) )
EXTERN_C const IID IID_IIsdbLogoTransmissionDescriptor;
    typedef struct IIsdbLogoTransmissionDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbLogoTransmissionDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbLogoTransmissionDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbLogoTransmissionDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbLogoTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbLogoTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLogoTransmissionType )(
            IIsdbLogoTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLogoId )(
            IIsdbLogoTransmissionDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetLogoVersion )(
            IIsdbLogoTransmissionDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadDataId )(
            IIsdbLogoTransmissionDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetLogoCharW )(
            IIsdbLogoTransmissionDescriptor * This,
                       DVB_STRCONV_MODE convMode,
                        BSTR *pbstrChar);
        END_INTERFACE
    } IIsdbLogoTransmissionDescriptorVtbl;
    interface IIsdbLogoTransmissionDescriptor
    {
        CONST_VTBL struct IIsdbLogoTransmissionDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetLogoTransmissionType(This,pbVal) )
    ( (This)->lpVtbl -> GetLogoId(This,pwVal) )
    ( (This)->lpVtbl -> GetLogoVersion(This,pwVal) )
    ( (This)->lpVtbl -> GetDownloadDataId(This,pwVal) )
    ( (This)->lpVtbl -> GetLogoCharW(This,convMode,pbstrChar) )
EXTERN_C const IID IID_IIsdbSIParameterDescriptor;
    typedef struct IIsdbSIParameterDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbSIParameterDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbSIParameterDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbSIParameterDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbSIParameterDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbSIParameterDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetParameterVersion )(
            IIsdbSIParameterDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetUpdateTime )(
            IIsdbSIParameterDescriptor * This,
                        MPEG_DATE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordNumberOfTable )(
            IIsdbSIParameterDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableId )(
            IIsdbSIParameterDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptionLength )(
            IIsdbSIParameterDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptionBytes )(
            IIsdbSIParameterDescriptor * This,
                       BYTE bRecordIndex,
                            BYTE *pbBufferLength,
                        BYTE *pbBuffer);
        END_INTERFACE
    } IIsdbSIParameterDescriptorVtbl;
    interface IIsdbSIParameterDescriptor
    {
        CONST_VTBL struct IIsdbSIParameterDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetParameterVersion(This,pbVal) )
    ( (This)->lpVtbl -> GetUpdateTime(This,pVal) )
    ( (This)->lpVtbl -> GetRecordNumberOfTable(This,pbVal) )
    ( (This)->lpVtbl -> GetTableId(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetTableDescriptionLength(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetTableDescriptionBytes(This,bRecordIndex,pbBufferLength,pbBuffer) )
EXTERN_C const IID IID_IIsdbEmergencyInformationDescriptor;
    typedef struct IIsdbEmergencyInformationDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbEmergencyInformationDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbEmergencyInformationDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbEmergencyInformationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbEmergencyInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbEmergencyInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IIsdbEmergencyInformationDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceId )(
            IIsdbEmergencyInformationDescriptor * This,
                       BYTE bRecordIndex,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetStartEndFlag )(
            IIsdbEmergencyInformationDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetSignalLevel )(
            IIsdbEmergencyInformationDescriptor * This,
                       BYTE bRecordIndex,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetAreaCode )(
            IIsdbEmergencyInformationDescriptor * This,
                       BYTE bRecordIndex,
                        WORD **ppwVal,
                        BYTE *pbNumAreaCodes);
        END_INTERFACE
    } IIsdbEmergencyInformationDescriptorVtbl;
    interface IIsdbEmergencyInformationDescriptor
    {
        CONST_VTBL struct IIsdbEmergencyInformationDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceId(This,bRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetStartEndFlag(This,bRecordIndex,pVal) )
    ( (This)->lpVtbl -> GetSignalLevel(This,bRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetAreaCode(This,bRecordIndex,ppwVal,pbNumAreaCodes) )
EXTERN_C const IID IID_IIsdbCADescriptor;
    typedef struct IIsdbCADescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbCADescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbCADescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbCADescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbCADescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbCADescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCASystemId )(
            IIsdbCADescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetReservedBits )(
            IIsdbCADescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCAPID )(
            IIsdbCADescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateDataBytes )(
            IIsdbCADescriptor * This,
                            BYTE *pbBufferLength,
                        BYTE *pbBuffer);
        END_INTERFACE
    } IIsdbCADescriptorVtbl;
    interface IIsdbCADescriptor
    {
        CONST_VTBL struct IIsdbCADescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCASystemId(This,pwVal) )
    ( (This)->lpVtbl -> GetReservedBits(This,pbVal) )
    ( (This)->lpVtbl -> GetCAPID(This,pwVal) )
    ( (This)->lpVtbl -> GetPrivateDataBytes(This,pbBufferLength,pbBuffer) )
EXTERN_C const IID IID_IIsdbCAServiceDescriptor;
    typedef struct IIsdbCAServiceDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbCAServiceDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbCAServiceDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbCAServiceDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbCAServiceDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbCAServiceDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCASystemId )(
            IIsdbCAServiceDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCABroadcasterGroupId )(
            IIsdbCAServiceDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetMessageControl )(
            IIsdbCAServiceDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceIds )(
            IIsdbCAServiceDescriptor * This,
                            BYTE *pbNumServiceIds,
                        WORD *pwServiceIds);
        END_INTERFACE
    } IIsdbCAServiceDescriptorVtbl;
    interface IIsdbCAServiceDescriptor
    {
        CONST_VTBL struct IIsdbCAServiceDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetCASystemId(This,pwVal) )
    ( (This)->lpVtbl -> GetCABroadcasterGroupId(This,pbVal) )
    ( (This)->lpVtbl -> GetMessageControl(This,pbVal) )
    ( (This)->lpVtbl -> GetServiceIds(This,pbNumServiceIds,pwServiceIds) )
EXTERN_C const IID IID_IIsdbHierarchicalTransmissionDescriptor;
    typedef struct IIsdbHierarchicalTransmissionDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IIsdbHierarchicalTransmissionDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IIsdbHierarchicalTransmissionDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IIsdbHierarchicalTransmissionDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IIsdbHierarchicalTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IIsdbHierarchicalTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetFutureUse1 )(
            IIsdbHierarchicalTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetQualityLevel )(
            IIsdbHierarchicalTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetFutureUse2 )(
            IIsdbHierarchicalTransmissionDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetReferencePid )(
            IIsdbHierarchicalTransmissionDescriptor * This,
                        WORD *pwVal);
        END_INTERFACE
    } IIsdbHierarchicalTransmissionDescriptorVtbl;
    interface IIsdbHierarchicalTransmissionDescriptor
    {
        CONST_VTBL struct IIsdbHierarchicalTransmissionDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetFutureUse1(This,pbVal) )
    ( (This)->lpVtbl -> GetQualityLevel(This,pbVal) )
    ( (This)->lpVtbl -> GetFutureUse2(This,pbVal) )
    ( (This)->lpVtbl -> GetReferencePid(This,pwVal) )
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0065_v0_0_s_ifspec;
EXTERN_C const IID IID_IPBDASiParser;
    typedef struct IPBDASiParserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPBDASiParser * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPBDASiParser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPBDASiParser * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IPBDASiParser * This,
                       IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *GetEIT )(
            IPBDASiParser * This,
                       DWORD dwSize,
                       BYTE *pBuffer,
                        IPBDA_EIT **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *GetServices )(
            IPBDASiParser * This,
                       DWORD dwSize,
                       const BYTE *pBuffer,
                        IPBDA_Services **ppServices);
        END_INTERFACE
    } IPBDASiParserVtbl;
    interface IPBDASiParser
    {
        CONST_VTBL struct IPBDASiParserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,punk) )
    ( (This)->lpVtbl -> GetEIT(This,dwSize,pBuffer,ppEIT) )
    ( (This)->lpVtbl -> GetServices(This,dwSize,pBuffer,ppServices) )
EXTERN_C const IID IID_IPBDA_EIT;
    typedef struct IPBDA_EITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPBDA_EIT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPBDA_EIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPBDA_EIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IPBDA_EIT * This,
                       DWORD size,
                                const BYTE *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetTableId )(
            IPBDA_EIT * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            IPBDA_EIT * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetServiceIdx )(
            IPBDA_EIT * This,
                        ULONG64 *plwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IPBDA_EIT * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEventId )(
            IPBDA_EIT * This,
                       DWORD dwRecordIndex,
                        ULONG64 *plwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordStartTime )(
            IPBDA_EIT * This,
                       DWORD dwRecordIndex,
                        MPEG_DATE_AND_TIME *pmdtVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDuration )(
            IPBDA_EIT * This,
                       DWORD dwRecordIndex,
                        MPEG_DURATION *pmdVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            IPBDA_EIT * This,
                       DWORD dwRecordIndex,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            IPBDA_EIT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            IPBDA_EIT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
                            DWORD *pdwCookie,
                        IGenericDescriptor **ppDescriptor);
        END_INTERFACE
    } IPBDA_EITVtbl;
    interface IPBDA_EIT
    {
        CONST_VTBL struct IPBDA_EITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,size,pBuffer) )
    ( (This)->lpVtbl -> GetTableId(This,pbVal) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pwVal) )
    ( (This)->lpVtbl -> GetServiceIdx(This,plwVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,plwVal) )
    ( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) )
    ( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
EXTERN_C const IID IID_IPBDA_Services;
    typedef struct IPBDA_ServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPBDA_Services * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPBDA_Services * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPBDA_Services * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IPBDA_Services * This,
                       DWORD size,
                                BYTE *pBuffer);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            IPBDA_Services * This,
                        DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordByIndex )(
            IPBDA_Services * This,
                       DWORD dwRecordIndex,
                        ULONG64 *pul64ServiceIdx);
        END_INTERFACE
    } IPBDA_ServicesVtbl;
    interface IPBDA_Services
    {
        CONST_VTBL struct IPBDA_ServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,size,pBuffer) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordByIndex(This,dwRecordIndex,pul64ServiceIdx) )
EXTERN_C const IID IID_IPBDAEntitlementDescriptor;
    typedef struct IPBDAEntitlementDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPBDAEntitlementDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPBDAEntitlementDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPBDAEntitlementDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IPBDAEntitlementDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IPBDAEntitlementDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetToken )(
            IPBDAEntitlementDescriptor * This,
                        BYTE **ppbTokenBuffer,
                        DWORD *pdwTokenLength);
        END_INTERFACE
    } IPBDAEntitlementDescriptorVtbl;
    interface IPBDAEntitlementDescriptor
    {
        CONST_VTBL struct IPBDAEntitlementDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pwVal) )
    ( (This)->lpVtbl -> GetToken(This,ppbTokenBuffer,pdwTokenLength) )
EXTERN_C const IID IID_IPBDAAttributesDescriptor;
    typedef struct IPBDAAttributesDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPBDAAttributesDescriptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPBDAAttributesDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPBDAAttributesDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            IPBDAAttributesDescriptor * This,
                        BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IPBDAAttributesDescriptor * This,
                        WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetAttributePayload )(
            IPBDAAttributesDescriptor * This,
                        BYTE **ppbAttributeBuffer,
                        DWORD *pdwAttributeLength);
        END_INTERFACE
    } IPBDAAttributesDescriptorVtbl;
    interface IPBDAAttributesDescriptor
    {
        CONST_VTBL struct IPBDAAttributesDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pwVal) )
    ( (This)->lpVtbl -> GetAttributePayload(This,ppbAttributeBuffer,pdwAttributeLength) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dvbsiparser_0000_0070_v0_0_s_ifspec;
}
