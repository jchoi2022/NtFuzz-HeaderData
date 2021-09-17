#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAtscPsipParser IAtscPsipParser;
typedef interface IATSC_MGT IATSC_MGT;
typedef interface IATSC_VCT IATSC_VCT;
typedef interface IATSC_EIT IATSC_EIT;
typedef interface IATSC_ETT IATSC_ETT;
typedef interface IATSC_STT IATSC_STT;
typedef interface ISCTE_EAS ISCTE_EAS;
typedef interface IAtscContentAdvisoryDescriptor IAtscContentAdvisoryDescriptor;
typedef interface ICaptionServiceDescriptor ICaptionServiceDescriptor;
typedef interface IServiceLocationDescriptor IServiceLocationDescriptor;
#include "oaidl.h"
#include "ocidl.h"
#include "mpeg2structs.h"
#include "mpeg2data.h"
#include "mpeg2psiparser.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_atscpsipparser_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_atscpsipparser_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAtscPsipParser;
    typedef struct IAtscPsipParserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAtscPsipParser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAtscPsipParser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAtscPsipParser * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IAtscPsipParser * This,
                       __RPC__in_opt IUnknown *punkMpeg2Data);
        HRESULT ( STDMETHODCALLTYPE *GetPAT )(
            __RPC__in IAtscPsipParser * This,
                        __RPC__deref_out_opt IPAT **ppPAT);
        HRESULT ( STDMETHODCALLTYPE *GetCAT )(
            __RPC__in IAtscPsipParser * This,
                       DWORD dwTimeout,
                        __RPC__deref_out_opt ICAT **ppCAT);
        HRESULT ( STDMETHODCALLTYPE *GetPMT )(
            __RPC__in IAtscPsipParser * This,
                       PID pid,
                       __RPC__in WORD *pwProgramNumber,
                        __RPC__deref_out_opt IPMT **ppPMT);
        HRESULT ( STDMETHODCALLTYPE *GetTSDT )(
            __RPC__in IAtscPsipParser * This,
                        __RPC__deref_out_opt ITSDT **ppTSDT);
        HRESULT ( STDMETHODCALLTYPE *GetMGT )(
            __RPC__in IAtscPsipParser * This,
                        __RPC__deref_out_opt IATSC_MGT **ppMGT);
        HRESULT ( STDMETHODCALLTYPE *GetVCT )(
            __RPC__in IAtscPsipParser * This,
                       TID tableId,
                       BOOL fGetNextTable,
                        __RPC__deref_out_opt IATSC_VCT **ppVCT);
        HRESULT ( STDMETHODCALLTYPE *GetEIT )(
            __RPC__in IAtscPsipParser * This,
                       PID pid,
                       __RPC__in WORD *pwSourceId,
                       DWORD dwTimeout,
                        __RPC__deref_out_opt IATSC_EIT **ppEIT);
        HRESULT ( STDMETHODCALLTYPE *GetETT )(
            __RPC__in IAtscPsipParser * This,
                       PID pid,
                       __RPC__in WORD *wSourceId,
                       __RPC__in WORD *pwEventId,
                        __RPC__deref_out_opt IATSC_ETT **ppETT);
        HRESULT ( STDMETHODCALLTYPE *GetSTT )(
            __RPC__in IAtscPsipParser * This,
                        __RPC__deref_out_opt IATSC_STT **ppSTT);
        HRESULT ( STDMETHODCALLTYPE *GetEAS )(
            __RPC__in IAtscPsipParser * This,
                       PID pid,
                        __RPC__deref_out_opt ISCTE_EAS **ppEAS);
        END_INTERFACE
    } IAtscPsipParserVtbl;
    interface IAtscPsipParser
    {
        CONST_VTBL struct IAtscPsipParserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,punkMpeg2Data) )
    ( (This)->lpVtbl -> GetPAT(This,ppPAT) )
    ( (This)->lpVtbl -> GetCAT(This,dwTimeout,ppCAT) )
    ( (This)->lpVtbl -> GetPMT(This,pid,pwProgramNumber,ppPMT) )
    ( (This)->lpVtbl -> GetTSDT(This,ppTSDT) )
    ( (This)->lpVtbl -> GetMGT(This,ppMGT) )
    ( (This)->lpVtbl -> GetVCT(This,tableId,fGetNextTable,ppVCT) )
    ( (This)->lpVtbl -> GetEIT(This,pid,pwSourceId,dwTimeout,ppEIT) )
    ( (This)->lpVtbl -> GetETT(This,pid,wSourceId,pwEventId,ppETT) )
    ( (This)->lpVtbl -> GetSTT(This,ppSTT) )
    ( (This)->lpVtbl -> GetEAS(This,pid,ppEAS) )
EXTERN_C const IID IID_IATSC_MGT;
    typedef struct IATSC_MGTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSC_MGT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSC_MGT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSC_MGT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IATSC_MGT * This,
                       __RPC__in_opt ISectionList *pSectionList,
                       __RPC__in_opt IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            __RPC__in IATSC_MGT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            __RPC__in IATSC_MGT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            __RPC__in IATSC_MGT * This,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordType )(
            __RPC__in IATSC_MGT * This,
                       DWORD dwRecordIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTypePid )(
            __RPC__in IATSC_MGT * This,
                       DWORD dwRecordIndex,
                        __RPC__out PID *ppidVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordVersionNumber )(
            __RPC__in IATSC_MGT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            __RPC__in IATSC_MGT * This,
                       DWORD dwRecordIndex,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            __RPC__in IATSC_MGT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            __RPC__in IATSC_MGT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
                            __RPC__inout DWORD *pdwCookie,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            __RPC__in IATSC_MGT * This,
                       __RPC__in DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            __RPC__in IATSC_MGT * This,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            __RPC__in IATSC_MGT * This,
                       BYTE bTag,
                            __RPC__inout DWORD *pdwCookie,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        END_INTERFACE
    } IATSC_MGTVtbl;
    interface IATSC_MGT
    {
        CONST_VTBL struct IATSC_MGTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordType(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordTypePid(This,dwRecordIndex,ppidVal) )
    ( (This)->lpVtbl -> GetRecordVersionNumber(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
EXTERN_C const IID IID_IATSC_VCT;
    typedef struct IATSC_VCTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSC_VCT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSC_VCT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSC_VCT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IATSC_VCT * This,
                       __RPC__in_opt ISectionList *pSectionList,
                       __RPC__in_opt IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            __RPC__in IATSC_VCT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetTransportStreamId )(
            __RPC__in IATSC_VCT * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            __RPC__in IATSC_VCT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            __RPC__in IATSC_VCT * This,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordName )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__deref_out_opt LPWSTR *pwsName);
        HRESULT ( STDMETHODCALLTYPE *GetRecordMajorChannelNumber )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordMinorChannelNumber )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordModulationMode )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCarrierFrequency )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTransportStreamId )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordProgramNumber )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEtmLocation )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordIsAccessControlledBitSet )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordIsHiddenBitSet )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordIsPathSelectBitSet )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordIsOutOfBandBitSet )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordIsHideGuideBitSet )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BOOL *pfVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordServiceType )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordSourceId )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
                            __RPC__inout DWORD *pdwCookie,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            __RPC__in IATSC_VCT * This,
                       __RPC__in DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            __RPC__in IATSC_VCT * This,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            __RPC__in IATSC_VCT * This,
                       BYTE bTag,
                            __RPC__inout DWORD *pdwCookie,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        END_INTERFACE
    } IATSC_VCTVtbl;
    interface IATSC_VCT
    {
        CONST_VTBL struct IATSC_VCTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetTransportStreamId(This,pwVal) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordName(This,dwRecordIndex,pwsName) )
    ( (This)->lpVtbl -> GetRecordMajorChannelNumber(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordMinorChannelNumber(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordModulationMode(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordCarrierFrequency(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordTransportStreamId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordProgramNumber(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordEtmLocation(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordIsAccessControlledBitSet(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordIsHiddenBitSet(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordIsPathSelectBitSet(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordIsOutOfBandBitSet(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordIsHideGuideBitSet(This,dwRecordIndex,pfVal) )
    ( (This)->lpVtbl -> GetRecordServiceType(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordSourceId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
EXTERN_C const IID IID_IATSC_EIT;
    typedef struct IATSC_EITVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSC_EIT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSC_EIT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSC_EIT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IATSC_EIT * This,
                       __RPC__in_opt ISectionList *pSectionList,
                       __RPC__in_opt IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            __RPC__in IATSC_EIT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSourceId )(
            __RPC__in IATSC_EIT * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            __RPC__in IATSC_EIT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfRecords )(
            __RPC__in IATSC_EIT * This,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEventId )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordStartTime )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                        __RPC__out MPEG_DATE_AND_TIME *pmdtVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordEtmLocation )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDuration )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                        __RPC__out MPEG_DURATION *pmdVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordTitleText )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                        __RPC__out DWORD *pdwLength,
                        __RPC__deref_out_opt BYTE **ppText);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCountOfDescriptors )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByIndex )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetRecordDescriptorByTag )(
            __RPC__in IATSC_EIT * This,
                       DWORD dwRecordIndex,
                       BYTE bTag,
                            __RPC__inout DWORD *pdwCookie,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        END_INTERFACE
    } IATSC_EITVtbl;
    interface IATSC_EIT
    {
        CONST_VTBL struct IATSC_EITVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetSourceId(This,pwVal) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
    ( (This)->lpVtbl -> GetCountOfRecords(This,pdwVal) )
    ( (This)->lpVtbl -> GetRecordEventId(This,dwRecordIndex,pwVal) )
    ( (This)->lpVtbl -> GetRecordStartTime(This,dwRecordIndex,pmdtVal) )
    ( (This)->lpVtbl -> GetRecordEtmLocation(This,dwRecordIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordDuration(This,dwRecordIndex,pmdVal) )
    ( (This)->lpVtbl -> GetRecordTitleText(This,dwRecordIndex,pdwLength,ppText) )
    ( (This)->lpVtbl -> GetRecordCountOfDescriptors(This,dwRecordIndex,pdwVal) )
    ( (This)->lpVtbl -> GetRecordDescriptorByIndex(This,dwRecordIndex,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetRecordDescriptorByTag(This,dwRecordIndex,bTag,pdwCookie,ppDescriptor) )
EXTERN_C const IID IID_IATSC_ETT;
    typedef struct IATSC_ETTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSC_ETT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSC_ETT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSC_ETT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IATSC_ETT * This,
                       __RPC__in_opt ISectionList *pSectionList,
                       __RPC__in_opt IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            __RPC__in IATSC_ETT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            __RPC__in IATSC_ETT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetEtmId )(
            __RPC__in IATSC_ETT * This,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetExtendedMessageText )(
            __RPC__in IATSC_ETT * This,
                        __RPC__out DWORD *pdwLength,
                        __RPC__deref_out_opt BYTE **ppText);
        END_INTERFACE
    } IATSC_ETTVtbl;
    interface IATSC_ETT
    {
        CONST_VTBL struct IATSC_ETTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
    ( (This)->lpVtbl -> GetEtmId(This,pdwVal) )
    ( (This)->lpVtbl -> GetExtendedMessageText(This,pdwLength,ppText) )
EXTERN_C const IID IID_IATSC_STT;
    typedef struct IATSC_STTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IATSC_STT * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IATSC_STT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IATSC_STT * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IATSC_STT * This,
                       __RPC__in_opt ISectionList *pSectionList,
                       __RPC__in_opt IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            __RPC__in IATSC_STT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSystemTime )(
            __RPC__in IATSC_STT * This,
                        __RPC__out MPEG_DATE_AND_TIME *pmdtSystemTime);
        HRESULT ( STDMETHODCALLTYPE *GetGpsUtcOffset )(
            __RPC__in IATSC_STT * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDaylightSavings )(
            __RPC__in IATSC_STT * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            __RPC__in IATSC_STT * This,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            __RPC__in IATSC_STT * This,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            __RPC__in IATSC_STT * This,
                       BYTE bTag,
                            __RPC__inout DWORD *pdwCookie,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        END_INTERFACE
    } IATSC_STTVtbl;
    interface IATSC_STT
    {
        CONST_VTBL struct IATSC_STTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
    ( (This)->lpVtbl -> GetSystemTime(This,pmdtSystemTime) )
    ( (This)->lpVtbl -> GetGpsUtcOffset(This,pbVal) )
    ( (This)->lpVtbl -> GetDaylightSavings(This,pwVal) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
EXTERN_C const IID IID_ISCTE_EAS;
    typedef struct ISCTE_EASVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISCTE_EAS * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISCTE_EAS * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISCTE_EAS * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ISCTE_EAS * This,
                       __RPC__in_opt ISectionList *pSectionList,
                       __RPC__in_opt IMpeg2Data *pMPEGData);
        HRESULT ( STDMETHODCALLTYPE *GetVersionNumber )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetSequencyNumber )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolVersion )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetEASEventID )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetOriginatorCode )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetEASEventCodeLen )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetEASEventCode )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRawNatureOfActivationTextLen )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRawNatureOfActivationText )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetNatureOfActivationText )(
            __RPC__in ISCTE_EAS * This,
                       __RPC__in BSTR bstrIS0639code,
                        __RPC__deref_out_opt BSTR *pbstrString);
        HRESULT ( STDMETHODCALLTYPE *GetTimeRemaining )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetStartTime )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetAlertPriority )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetDetailsOOBSourceID )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDetailsMajor )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDetailsMinor )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetDetailsAudioOOBSourceID )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetAlertText )(
            __RPC__in ISCTE_EAS * This,
                       __RPC__in BSTR bstrIS0639code,
                        __RPC__deref_out_opt BSTR *pbstrString);
        HRESULT ( STDMETHODCALLTYPE *GetRawAlertTextLen )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetRawAlertText )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocationCount )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLocationCodes )(
            __RPC__in ISCTE_EAS * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbState,
                        __RPC__out BYTE *pbCountySubdivision,
                        __RPC__out WORD *pwCounty);
        HRESULT ( STDMETHODCALLTYPE *GetExceptionCount )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetExceptionService )(
            __RPC__in ISCTE_EAS * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbIBRef,
                        __RPC__out WORD *pwFirst,
                        __RPC__out WORD *pwSecond);
        HRESULT ( STDMETHODCALLTYPE *GetCountOfTableDescriptors )(
            __RPC__in ISCTE_EAS * This,
                        __RPC__out DWORD *pdwVal);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByIndex )(
            __RPC__in ISCTE_EAS * This,
                       DWORD dwIndex,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetTableDescriptorByTag )(
            __RPC__in ISCTE_EAS * This,
                       BYTE bTag,
                            __RPC__inout DWORD *pdwCookie,
                        __RPC__deref_out_opt IGenericDescriptor **ppDescriptor);
        END_INTERFACE
    } ISCTE_EASVtbl;
    interface ISCTE_EAS
    {
        CONST_VTBL struct ISCTE_EASVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSectionList,pMPEGData) )
    ( (This)->lpVtbl -> GetVersionNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetSequencyNumber(This,pbVal) )
    ( (This)->lpVtbl -> GetProtocolVersion(This,pbVal) )
    ( (This)->lpVtbl -> GetEASEventID(This,pwVal) )
    ( (This)->lpVtbl -> GetOriginatorCode(This,pbVal) )
    ( (This)->lpVtbl -> GetEASEventCodeLen(This,pbVal) )
    ( (This)->lpVtbl -> GetEASEventCode(This,pbVal) )
    ( (This)->lpVtbl -> GetRawNatureOfActivationTextLen(This,pbVal) )
    ( (This)->lpVtbl -> GetRawNatureOfActivationText(This,pbVal) )
    ( (This)->lpVtbl -> GetNatureOfActivationText(This,bstrIS0639code,pbstrString) )
    ( (This)->lpVtbl -> GetTimeRemaining(This,pbVal) )
    ( (This)->lpVtbl -> GetStartTime(This,pdwVal) )
    ( (This)->lpVtbl -> GetDuration(This,pwVal) )
    ( (This)->lpVtbl -> GetAlertPriority(This,pbVal) )
    ( (This)->lpVtbl -> GetDetailsOOBSourceID(This,pwVal) )
    ( (This)->lpVtbl -> GetDetailsMajor(This,pwVal) )
    ( (This)->lpVtbl -> GetDetailsMinor(This,pwVal) )
    ( (This)->lpVtbl -> GetDetailsAudioOOBSourceID(This,pwVal) )
    ( (This)->lpVtbl -> GetAlertText(This,bstrIS0639code,pbstrString) )
    ( (This)->lpVtbl -> GetRawAlertTextLen(This,pwVal) )
    ( (This)->lpVtbl -> GetRawAlertText(This,pbVal) )
    ( (This)->lpVtbl -> GetLocationCount(This,pbVal) )
    ( (This)->lpVtbl -> GetLocationCodes(This,bIndex,pbState,pbCountySubdivision,pwCounty) )
    ( (This)->lpVtbl -> GetExceptionCount(This,pbVal) )
    ( (This)->lpVtbl -> GetExceptionService(This,bIndex,pbIBRef,pwFirst,pwSecond) )
    ( (This)->lpVtbl -> GetCountOfTableDescriptors(This,pdwVal) )
    ( (This)->lpVtbl -> GetTableDescriptorByIndex(This,dwIndex,ppDescriptor) )
    ( (This)->lpVtbl -> GetTableDescriptorByTag(This,bTag,pdwCookie,ppDescriptor) )
EXTERN_C const IID IID_IAtscContentAdvisoryDescriptor;
    typedef struct IAtscContentAdvisoryDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAtscContentAdvisoryDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAtscContentAdvisoryDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTag )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRatingRegionCount )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRatingRegion )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRatedDimensions )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRatingDimension )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                       BYTE bIndexOuter,
                       BYTE bIndexInner,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRatingValue )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                       BYTE bIndexOuter,
                       BYTE bIndexInner,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetRecordRatingDescriptionText )(
            __RPC__in IAtscContentAdvisoryDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbLength,
                        __RPC__deref_out_opt BYTE **ppText);
        END_INTERFACE
    } IAtscContentAdvisoryDescriptorVtbl;
    interface IAtscContentAdvisoryDescriptor
    {
        CONST_VTBL struct IAtscContentAdvisoryDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTag(This,pbVal) )
    ( (This)->lpVtbl -> GetLength(This,pbVal) )
    ( (This)->lpVtbl -> GetRatingRegionCount(This,pbVal) )
    ( (This)->lpVtbl -> GetRecordRatingRegion(This,bIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordRatedDimensions(This,bIndex,pbVal) )
    ( (This)->lpVtbl -> GetRecordRatingDimension(This,bIndexOuter,bIndexInner,pbVal) )
    ( (This)->lpVtbl -> GetRecordRatingValue(This,bIndexOuter,bIndexInner,pbVal) )
    ( (This)->lpVtbl -> GetRecordRatingDescriptionText(This,bIndex,pbLength,ppText) )
EXTERN_C const IID IID_ICaptionServiceDescriptor;
    typedef struct ICaptionServiceDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICaptionServiceDescriptor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICaptionServiceDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICaptionServiceDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfServices )(
            __RPC__in ICaptionServiceDescriptor * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCode )(
            __RPC__in ICaptionServiceDescriptor * This,
                       BYTE bIndex,
                        __RPC__out_ecount_full(3) BYTE LangCode[ 3 ]);
        HRESULT ( STDMETHODCALLTYPE *GetCaptionServiceNumber )(
            __RPC__in ICaptionServiceDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetCCType )(
            __RPC__in ICaptionServiceDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetEasyReader )(
            __RPC__in ICaptionServiceDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetWideAspectRatio )(
            __RPC__in ICaptionServiceDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbVal);
        END_INTERFACE
    } ICaptionServiceDescriptorVtbl;
    interface ICaptionServiceDescriptor
    {
        CONST_VTBL struct ICaptionServiceDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNumberOfServices(This,pbVal) )
    ( (This)->lpVtbl -> GetLanguageCode(This,bIndex,LangCode) )
    ( (This)->lpVtbl -> GetCaptionServiceNumber(This,bIndex,pbVal) )
    ( (This)->lpVtbl -> GetCCType(This,bIndex,pbVal) )
    ( (This)->lpVtbl -> GetEasyReader(This,bIndex,pbVal) )
    ( (This)->lpVtbl -> GetWideAspectRatio(This,bIndex,pbVal) )
EXTERN_C const IID IID_IServiceLocationDescriptor;
    typedef struct IServiceLocationDescriptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceLocationDescriptor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceLocationDescriptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceLocationDescriptor * This);
        HRESULT ( STDMETHODCALLTYPE *GetPCR_PID )(
            __RPC__in IServiceLocationDescriptor * This,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetNumberOfElements )(
            __RPC__in IServiceLocationDescriptor * This,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetElementStreamType )(
            __RPC__in IServiceLocationDescriptor * This,
                       BYTE bIndex,
                        __RPC__out BYTE *pbVal);
        HRESULT ( STDMETHODCALLTYPE *GetElementPID )(
            __RPC__in IServiceLocationDescriptor * This,
                       BYTE bIndex,
                        __RPC__out WORD *pwVal);
        HRESULT ( STDMETHODCALLTYPE *GetElementLanguageCode )(
            __RPC__in IServiceLocationDescriptor * This,
                       BYTE bIndex,
                        __RPC__out_ecount_full(3) BYTE LangCode[ 3 ]);
        END_INTERFACE
    } IServiceLocationDescriptorVtbl;
    interface IServiceLocationDescriptor
    {
        CONST_VTBL struct IServiceLocationDescriptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPCR_PID(This,pwVal) )
    ( (This)->lpVtbl -> GetNumberOfElements(This,pbVal) )
    ( (This)->lpVtbl -> GetElementStreamType(This,bIndex,pbVal) )
    ( (This)->lpVtbl -> GetElementPID(This,bIndex,pwVal) )
    ( (This)->lpVtbl -> GetElementLanguageCode(This,bIndex,LangCode) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_atscpsipparser_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_atscpsipparser_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
