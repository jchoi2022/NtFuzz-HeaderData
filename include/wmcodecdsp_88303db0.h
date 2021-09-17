#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMValidate IWMValidate;
typedef interface IValidateBinding IValidateBinding;
typedef interface IWMVideoDecoderHurryup IWMVideoDecoderHurryup;
typedef interface IWMVideoForceKeyFrame IWMVideoForceKeyFrame;
typedef interface IWMCodecStrings IWMCodecStrings;
typedef interface IWMCodecProps IWMCodecProps;
typedef interface IWMCodecLeakyBucket IWMCodecLeakyBucket;
typedef interface IWMCodecOutputTimestamp IWMCodecOutputTimestamp;
typedef interface IWMVideoDecoderReconBuffer IWMVideoDecoderReconBuffer;
typedef interface IWMCodecPrivateData IWMCodecPrivateData;
typedef interface IWMSampleExtensionSupport IWMSampleExtensionSupport;
typedef interface IWMResamplerProps IWMResamplerProps;
typedef interface IWMResizerProps IWMResizerProps;
typedef interface IWMColorLegalizerProps IWMColorLegalizerProps;
typedef interface IWMInterlaceProps IWMInterlaceProps;
typedef interface IWMFrameInterpProps IWMFrameInterpProps;
typedef interface IWMColorConvProps IWMColorConvProps;
typedef interface ITocEntry ITocEntry;
typedef interface ITocEntryList ITocEntryList;
typedef interface IToc IToc;
typedef interface ITocCollection ITocCollection;
typedef interface ITocParser ITocParser;
typedef interface IFileIo IFileIo;
typedef interface IFileClient IFileClient;
typedef interface IClusterDetector IClusterDetector;
typedef class CMpeg4DecMediaObject CMpeg4DecMediaObject;
typedef class CMpeg43DecMediaObject CMpeg43DecMediaObject;
typedef class CMpeg4sDecMediaObject CMpeg4sDecMediaObject;
typedef class CMpeg4sDecMFT CMpeg4sDecMFT;
typedef class CZuneM4S2DecMediaObject CZuneM4S2DecMediaObject;
typedef class CMpeg4EncMediaObject CMpeg4EncMediaObject;
typedef class CMpeg4sEncMediaObject CMpeg4sEncMediaObject;
typedef class CMSSCDecMediaObject CMSSCDecMediaObject;
typedef class CMSSCEncMediaObject CMSSCEncMediaObject;
typedef class CMSSCEncMediaObject2 CMSSCEncMediaObject2;
typedef class CWMADecMediaObject CWMADecMediaObject;
typedef class CWMAEncMediaObject CWMAEncMediaObject;
typedef class CWMATransMediaObject CWMATransMediaObject;
typedef class CWMSPDecMediaObject CWMSPDecMediaObject;
typedef class CWMSPEncMediaObject CWMSPEncMediaObject;
typedef class CWMSPEncMediaObject2 CWMSPEncMediaObject2;
typedef class CWMTDecMediaObject CWMTDecMediaObject;
typedef class CWMTEncMediaObject CWMTEncMediaObject;
typedef class CWMVDecMediaObject CWMVDecMediaObject;
typedef class CWMVEncMediaObject2 CWMVEncMediaObject2;
typedef class CWMVXEncMediaObject CWMVXEncMediaObject;
typedef class CWMV9EncMediaObject CWMV9EncMediaObject;
typedef class CWVC1DecMediaObject CWVC1DecMediaObject;
typedef class CWVC1EncMediaObject CWVC1EncMediaObject;
typedef class CDeColorConvMediaObject CDeColorConvMediaObject;
typedef class CDVDecoderMediaObject CDVDecoderMediaObject;
typedef class CDVEncoderMediaObject CDVEncoderMediaObject;
typedef class CMpeg2DecMediaObject CMpeg2DecMediaObject;
typedef class CPK_DS_MPEG2Decoder CPK_DS_MPEG2Decoder;
typedef class CAC3DecMediaObject CAC3DecMediaObject;
typedef class CPK_DS_AC3Decoder CPK_DS_AC3Decoder;
typedef class CMP3DecMediaObject CMP3DecMediaObject;
typedef class CResamplerMediaObject CResamplerMediaObject;
typedef class CResizerMediaObject CResizerMediaObject;
typedef class CInterlaceMediaObject CInterlaceMediaObject;
typedef class CWMAudioLFXAPO CWMAudioLFXAPO;
typedef class CWMAudioGFXAPO CWMAudioGFXAPO;
typedef class CWMAudioSpdTxDMO CWMAudioSpdTxDMO;
typedef class CWMAudioAEC CWMAudioAEC;
typedef class CClusterDetectorDmo CClusterDetectorDmo;
typedef class CColorControlDmo CColorControlDmo;
typedef class CColorConvertDMO CColorConvertDMO;
typedef class CColorLegalizerDmo CColorLegalizerDmo;
typedef class CFrameInterpDMO CFrameInterpDMO;
typedef class CFrameRateConvertDmo CFrameRateConvertDmo;
typedef class CResizerDMO CResizerDMO;
typedef class CShotDetectorDmo CShotDetectorDmo;
typedef class CSmpteTransformsDmo CSmpteTransformsDmo;
typedef class CThumbnailGeneratorDmo CThumbnailGeneratorDmo;
typedef class CTocGeneratorDmo CTocGeneratorDmo;
typedef class CMPEGAACDecMediaObject CMPEGAACDecMediaObject;
typedef class CNokiaAACDecMediaObject CNokiaAACDecMediaObject;
typedef class CVodafoneAACDecMediaObject CVodafoneAACDecMediaObject;
typedef class CZuneAACCCDecMediaObject CZuneAACCCDecMediaObject;
typedef class CNokiaAACCCDecMediaObject CNokiaAACCCDecMediaObject;
typedef class CVodafoneAACCCDecMediaObject CVodafoneAACCCDecMediaObject;
typedef class CMPEG2EncoderDS CMPEG2EncoderDS;
typedef class CMPEG2EncoderVideoDS CMPEG2EncoderVideoDS;
typedef class CMPEG2EncoderAudioDS CMPEG2EncoderAudioDS;
typedef class CMPEG2AudDecoderDS CMPEG2AudDecoderDS;
typedef class CMPEG2VidDecoderDS CMPEG2VidDecoderDS;
typedef class CDTVAudDecoderDS CDTVAudDecoderDS;
typedef class CDTVVidDecoderDS CDTVVidDecoderDS;
typedef class CMSAC3Enc CMSAC3Enc;
typedef class CMSH264DecoderMFT CMSH264DecoderMFT;
typedef class CMSH263EncoderMFT CMSH263EncoderMFT;
typedef class CMSH264EncoderMFT CMSH264EncoderMFT;
typedef class CMSH265EncoderMFT CMSH265EncoderMFT;
typedef class CMSVPXEncoderMFT CMSVPXEncoderMFT;
typedef class CMSH264RemuxMFT CMSH264RemuxMFT;
typedef class CMSAACDecMFT CMSAACDecMFT;
typedef class AACMFTEncoder AACMFTEncoder;
typedef class CMSDDPlusDecMFT CMSDDPlusDecMFT;
typedef class CMPEG2VideoEncoderMFT CMPEG2VideoEncoderMFT;
typedef class CMPEG2AudioEncoderMFT CMPEG2AudioEncoderMFT;
typedef class CMSMPEGDecoderMFT CMSMPEGDecoderMFT;
typedef class CMSMPEGAudDecMFT CMSMPEGAudDecMFT;
typedef class CMSDolbyDigitalEncMFT CMSDolbyDigitalEncMFT;
typedef class MP3ACMCodecWrapper MP3ACMCodecWrapper;
typedef class ALawCodecWrapper ALawCodecWrapper;
typedef class MULawCodecWrapper MULawCodecWrapper;
typedef class CMSVideoDSPMFT CMSVideoDSPMFT;
typedef class VorbisDecoderMFT VorbisDecoderMFT;
typedef class CMSFLACDecMFT CMSFLACDecMFT;
typedef class CMSFLACEncMFT CMSFLACEncMFT;
typedef class MFFLACBytestreamHandler MFFLACBytestreamHandler;
typedef class MFFLACSinkClassFactory MFFLACSinkClassFactory;
typedef class CMSALACDecMFT CMSALACDecMFT;
typedef class CMSALACEncMFT CMSALACEncMFT;
typedef class CMSOpusDecMFT CMSOpusDecMFT;
typedef class MSAMRNBDecoder MSAMRNBDecoder;
typedef class MSAMRNBEncoder MSAMRNBEncoder;
typedef class MFAMRNBByteStreamHandler MFAMRNBByteStreamHandler;
typedef class MFAMRNBSinkClassFactory MFAMRNBSinkClassFactory;
#include "mediaobj.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum WMT_PROP_DATATYPE
    {
        WMT_PROP_TYPE_DWORD = 0,
        WMT_PROP_TYPE_STRING = 1,
        WMT_PROP_TYPE_BINARY = 2,
        WMT_PROP_TYPE_BOOL = 3,
        WMT_PROP_TYPE_QWORD = 4,
        WMT_PROP_TYPE_WORD = 5,
        WMT_PROP_TYPE_GUID = 6
    } WMT_PROP_DATATYPE;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMValidate;
    typedef struct IWMValidateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMValidate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMValidate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMValidate * This);
        HRESULT ( STDMETHODCALLTYPE *SetIdentifier )(
            __RPC__in IWMValidate * This,
                       GUID guidValidationID);
        END_INTERFACE
    } IWMValidateVtbl;
    interface IWMValidate
    {
        CONST_VTBL struct IWMValidateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIdentifier(This,guidValidationID) )
EXTERN_C const IID IID_IValidateBinding;
    typedef struct IValidateBindingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IValidateBinding * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IValidateBinding * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IValidateBinding * This);
        HRESULT ( STDMETHODCALLTYPE *GetIdentifier )(
            __RPC__in IValidateBinding * This,
                       GUID guidLicensorID,
                                __RPC__in_ecount_full(cbEphemeron) BYTE *pbEphemeron,
                       DWORD cbEphemeron,
                                          __RPC__deref_out_ecount_full_opt(*pcbBlobSize) BYTE **ppbBlobValidationID,
                        __RPC__out DWORD *pcbBlobSize);
        END_INTERFACE
    } IValidateBindingVtbl;
    interface IValidateBinding
    {
        CONST_VTBL struct IValidateBindingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIdentifier(This,guidLicensorID,pbEphemeron,cbEphemeron,ppbBlobValidationID,pcbBlobSize) )
static const WCHAR *g_wszSpeechFormatCaps = L"SpeechFormatCap";
static const WCHAR *g_wszWMCPCodecName = L"_CODECNAME";
static const WCHAR *g_wszWMCPSupportedVBRModes = L"_SUPPORTEDVBRMODES";
static const WCHAR *g_wszWMCPAudioVBRSupported = L"_VBRENABLED";
static const WCHAR *g_wszWMCPAudioVBRQuality = L"_VBRQUALITY";
static const WCHAR *g_wszWMCPMaxPasses = L"_PASSESRECOMMENDED";
static const WCHAR *g_wszWMCPDefaultCrisp = L"_DEFAULTCRISP";
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMVideoDecoderHurryup;
    typedef struct IWMVideoDecoderHurryupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMVideoDecoderHurryup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMVideoDecoderHurryup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMVideoDecoderHurryup * This);
        HRESULT ( STDMETHODCALLTYPE *SetHurryup )(
            IWMVideoDecoderHurryup * This,
                       LONG lHurryup);
        HRESULT ( STDMETHODCALLTYPE *GetHurryup )(
            IWMVideoDecoderHurryup * This,
                        LONG *plHurryup);
        END_INTERFACE
    } IWMVideoDecoderHurryupVtbl;
    interface IWMVideoDecoderHurryup
    {
        CONST_VTBL struct IWMVideoDecoderHurryupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHurryup(This,lHurryup) )
    ( (This)->lpVtbl -> GetHurryup(This,plHurryup) )
EXTERN_C const IID IID_IWMVideoForceKeyFrame;
    typedef struct IWMVideoForceKeyFrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMVideoForceKeyFrame * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMVideoForceKeyFrame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMVideoForceKeyFrame * This);
        HRESULT ( STDMETHODCALLTYPE *SetKeyFrame )(
            IWMVideoForceKeyFrame * This);
        END_INTERFACE
    } IWMVideoForceKeyFrameVtbl;
    interface IWMVideoForceKeyFrame
    {
        CONST_VTBL struct IWMVideoForceKeyFrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetKeyFrame(This) )
EXTERN_C const IID IID_IWMCodecStrings;
    typedef struct IWMCodecStringsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecStrings * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecStrings * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecStrings * This);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IWMCodecStrings * This,
                       DMO_MEDIA_TYPE *pmt,
                       ULONG cchLength,
            _Out_writes_to_opt_(cchLength, *pcchLength) LPWSTR szName,
                        ULONG *pcchLength);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IWMCodecStrings * This,
                       DMO_MEDIA_TYPE *pmt,
                       ULONG cchLength,
            _Out_writes_to_opt_(cchLength, *pcchLength) LPWSTR szDescription,
                        ULONG *pcchLength);
        END_INTERFACE
    } IWMCodecStringsVtbl;
    interface IWMCodecStrings
    {
        CONST_VTBL struct IWMCodecStringsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetName(This,pmt,cchLength,szName,pcchLength) )
    ( (This)->lpVtbl -> GetDescription(This,pmt,cchLength,szDescription,pcchLength) )
EXTERN_C const IID IID_IWMCodecProps;
    typedef struct IWMCodecPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetFormatProp )(
            IWMCodecProps * This,
                       DMO_MEDIA_TYPE *pmt,
                       LPCWSTR pszName,
                        WMT_PROP_DATATYPE *pType,
                                             BYTE *pValue,
                            DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *GetCodecProp )(
            IWMCodecProps * This,
                       DWORD dwFormat,
                       LPCWSTR pszName,
                        WMT_PROP_DATATYPE *pType,
                                             BYTE *pValue,
                            DWORD *pdwSize);
        END_INTERFACE
    } IWMCodecPropsVtbl;
    interface IWMCodecProps
    {
        CONST_VTBL struct IWMCodecPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFormatProp(This,pmt,pszName,pType,pValue,pdwSize) )
    ( (This)->lpVtbl -> GetCodecProp(This,dwFormat,pszName,pType,pValue,pdwSize) )
EXTERN_C const IID IID_IWMCodecLeakyBucket;
    typedef struct IWMCodecLeakyBucketVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecLeakyBucket * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecLeakyBucket * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecLeakyBucket * This);
        HRESULT ( STDMETHODCALLTYPE *SetBufferSizeBits )(
            IWMCodecLeakyBucket * This,
                       ULONG ulBufferSize);
        HRESULT ( STDMETHODCALLTYPE *GetBufferSizeBits )(
            IWMCodecLeakyBucket * This,
                        ULONG *pulBufferSize);
        HRESULT ( STDMETHODCALLTYPE *SetBufferFullnessBits )(
            IWMCodecLeakyBucket * This,
                       ULONG ulBufferFullness);
        HRESULT ( STDMETHODCALLTYPE *GetBufferFullnessBits )(
            IWMCodecLeakyBucket * This,
                        ULONG *pulBufferFullness);
        END_INTERFACE
    } IWMCodecLeakyBucketVtbl;
    interface IWMCodecLeakyBucket
    {
        CONST_VTBL struct IWMCodecLeakyBucketVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBufferSizeBits(This,ulBufferSize) )
    ( (This)->lpVtbl -> GetBufferSizeBits(This,pulBufferSize) )
    ( (This)->lpVtbl -> SetBufferFullnessBits(This,ulBufferFullness) )
    ( (This)->lpVtbl -> GetBufferFullnessBits(This,pulBufferFullness) )
EXTERN_C const IID IID_IWMCodecOutputTimestamp;
    typedef struct IWMCodecOutputTimestampVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecOutputTimestamp * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecOutputTimestamp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecOutputTimestamp * This);
        HRESULT ( STDMETHODCALLTYPE *GetNextOutputTime )(
            IWMCodecOutputTimestamp * This,
                        REFERENCE_TIME *prtTime);
        END_INTERFACE
    } IWMCodecOutputTimestampVtbl;
    interface IWMCodecOutputTimestamp
    {
        CONST_VTBL struct IWMCodecOutputTimestampVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNextOutputTime(This,prtTime) )
EXTERN_C const IID IID_IWMVideoDecoderReconBuffer;
    typedef struct IWMVideoDecoderReconBufferVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMVideoDecoderReconBuffer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMVideoDecoderReconBuffer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMVideoDecoderReconBuffer * This);
        HRESULT ( STDMETHODCALLTYPE *GetReconstructedVideoFrameSize )(
            IWMVideoDecoderReconBuffer * This,
                        DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *GetReconstructedVideoFrame )(
            IWMVideoDecoderReconBuffer * This,
                        IMediaBuffer *pBuf);
        HRESULT ( STDMETHODCALLTYPE *SetReconstructedVideoFrame )(
            IWMVideoDecoderReconBuffer * This,
                       IMediaBuffer *pBuf);
        END_INTERFACE
    } IWMVideoDecoderReconBufferVtbl;
    interface IWMVideoDecoderReconBuffer
    {
        CONST_VTBL struct IWMVideoDecoderReconBufferVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetReconstructedVideoFrameSize(This,pdwSize) )
    ( (This)->lpVtbl -> GetReconstructedVideoFrame(This,pBuf) )
    ( (This)->lpVtbl -> SetReconstructedVideoFrame(This,pBuf) )
EXTERN_C const IID IID_IWMCodecPrivateData;
    typedef struct IWMCodecPrivateDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecPrivateData * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecPrivateData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecPrivateData * This);
        HRESULT ( STDMETHODCALLTYPE *SetPartialOutputType )(
            IWMCodecPrivateData * This,
                       DMO_MEDIA_TYPE *pmt);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateData )(
            IWMCodecPrivateData * This,
                                             BYTE *pbData,
                            ULONG *pcbData);
        END_INTERFACE
    } IWMCodecPrivateDataVtbl;
    interface IWMCodecPrivateData
    {
        CONST_VTBL struct IWMCodecPrivateDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPartialOutputType(This,pmt) )
    ( (This)->lpVtbl -> GetPrivateData(This,pbData,pcbData) )
EXTERN_C const IID IID_IWMSampleExtensionSupport;
    typedef struct IWMSampleExtensionSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMSampleExtensionSupport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMSampleExtensionSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMSampleExtensionSupport * This);
        HRESULT ( STDMETHODCALLTYPE *SetUseSampleExtensions )(
            IWMSampleExtensionSupport * This,
            BOOL fUseExtensions);
        END_INTERFACE
    } IWMSampleExtensionSupportVtbl;
    interface IWMSampleExtensionSupport
    {
        CONST_VTBL struct IWMSampleExtensionSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUseSampleExtensions(This,fUseExtensions) )
typedef float ChMtxType;
EXTERN_C const IID IID_IWMResamplerProps;
    typedef struct IWMResamplerPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMResamplerProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMResamplerProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMResamplerProps * This);
        HRESULT ( STDMETHODCALLTYPE *SetHalfFilterLength )(
            IWMResamplerProps * This,
                       LONG lhalfFilterLen);
        HRESULT ( STDMETHODCALLTYPE *SetUserChannelMtx )(
            IWMResamplerProps * This,
                       ChMtxType *userChannelMtx);
        END_INTERFACE
    } IWMResamplerPropsVtbl;
    interface IWMResamplerProps
    {
        CONST_VTBL struct IWMResamplerPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHalfFilterLength(This,lhalfFilterLen) )
    ( (This)->lpVtbl -> SetUserChannelMtx(This,userChannelMtx) )
EXTERN_C const IID IID_IWMResizerProps;
    typedef struct IWMResizerPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMResizerProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMResizerProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMResizerProps * This);
        HRESULT ( STDMETHODCALLTYPE *SetResizerQuality )(
            IWMResizerProps * This,
                       LONG lquality);
        HRESULT ( STDMETHODCALLTYPE *SetInterlaceMode )(
            IWMResizerProps * This,
                       LONG lmode);
        HRESULT ( STDMETHODCALLTYPE *SetClipRegion )(
            IWMResizerProps * This,
                       LONG lClipOriXSrc,
                       LONG lClipOriYSrc,
                       LONG lClipWidthSrc,
                       LONG lClipHeightSrc);
        HRESULT ( STDMETHODCALLTYPE *SetFullCropRegion )(
            IWMResizerProps * This,
                       LONG lClipOriXSrc,
                       LONG lClipOriYSrc,
                       LONG lClipWidthSrc,
                       LONG lClipHeightSrc,
                       LONG lClipOriXDst,
                       LONG lClipOriYDst,
                       LONG lClipWidthDst,
                       LONG lClipHeightDst);
        HRESULT ( STDMETHODCALLTYPE *GetFullCropRegion )(
            IWMResizerProps * This,
                        LONG *lClipOriXSrc,
                        LONG *lClipOriYSrc,
                        LONG *lClipWidthSrc,
                        LONG *lClipHeightSrc,
                        LONG *lClipOriXDst,
                        LONG *lClipOriYDst,
                        LONG *lClipWidthDst,
                        LONG *lClipHeightDst);
        END_INTERFACE
    } IWMResizerPropsVtbl;
    interface IWMResizerProps
    {
        CONST_VTBL struct IWMResizerPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetResizerQuality(This,lquality) )
    ( (This)->lpVtbl -> SetInterlaceMode(This,lmode) )
    ( (This)->lpVtbl -> SetClipRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc) )
    ( (This)->lpVtbl -> SetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) )
    ( (This)->lpVtbl -> GetFullCropRegion(This,lClipOriXSrc,lClipOriYSrc,lClipWidthSrc,lClipHeightSrc,lClipOriXDst,lClipOriYDst,lClipWidthDst,lClipHeightDst) )
EXTERN_C const IID IID_IWMColorLegalizerProps;
    typedef struct IWMColorLegalizerPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMColorLegalizerProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMColorLegalizerProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMColorLegalizerProps * This);
        HRESULT ( STDMETHODCALLTYPE *SetColorLegalizerQuality )(
            IWMColorLegalizerProps * This,
                       LONG lquality);
        END_INTERFACE
    } IWMColorLegalizerPropsVtbl;
    interface IWMColorLegalizerProps
    {
        CONST_VTBL struct IWMColorLegalizerPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetColorLegalizerQuality(This,lquality) )
EXTERN_C const IID IID_IWMInterlaceProps;
    typedef struct IWMInterlacePropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMInterlaceProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMInterlaceProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMInterlaceProps * This);
        HRESULT ( STDMETHODCALLTYPE *SetProcessType )(
            IWMInterlaceProps * This,
                       int iProcessType);
        HRESULT ( STDMETHODCALLTYPE *SetInitInverseTeleCinePattern )(
            IWMInterlaceProps * This,
                       int iInitPattern);
        HRESULT ( STDMETHODCALLTYPE *SetLastFrame )(
            IWMInterlaceProps * This);
        END_INTERFACE
    } IWMInterlacePropsVtbl;
    interface IWMInterlaceProps
    {
        CONST_VTBL struct IWMInterlacePropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetProcessType(This,iProcessType) )
    ( (This)->lpVtbl -> SetInitInverseTeleCinePattern(This,iInitPattern) )
    ( (This)->lpVtbl -> SetLastFrame(This) )
EXTERN_C const IID IID_IWMFrameInterpProps;
    typedef struct IWMFrameInterpPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMFrameInterpProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMFrameInterpProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMFrameInterpProps * This);
        HRESULT ( STDMETHODCALLTYPE *SetFrameRateIn )(
            IWMFrameInterpProps * This,
                       LONG lFrameRate,
                       LONG lScale);
        HRESULT ( STDMETHODCALLTYPE *SetFrameRateOut )(
            IWMFrameInterpProps * This,
                       LONG lFrameRate,
                       LONG lScale);
        HRESULT ( STDMETHODCALLTYPE *SetFrameInterpEnabled )(
            IWMFrameInterpProps * This,
                       BOOL bFIEnabled);
        HRESULT ( STDMETHODCALLTYPE *SetComplexityLevel )(
            IWMFrameInterpProps * This,
                       int iComplexity);
        END_INTERFACE
    } IWMFrameInterpPropsVtbl;
    interface IWMFrameInterpProps
    {
        CONST_VTBL struct IWMFrameInterpPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFrameRateIn(This,lFrameRate,lScale) )
    ( (This)->lpVtbl -> SetFrameRateOut(This,lFrameRate,lScale) )
    ( (This)->lpVtbl -> SetFrameInterpEnabled(This,bFIEnabled) )
    ( (This)->lpVtbl -> SetComplexityLevel(This,iComplexity) )
EXTERN_C const IID IID_IWMColorConvProps;
    typedef struct IWMColorConvPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMColorConvProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMColorConvProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMColorConvProps * This);
        HRESULT ( STDMETHODCALLTYPE *SetMode )(
            IWMColorConvProps * This,
                       LONG lMode);
        HRESULT ( STDMETHODCALLTYPE *SetFullCroppingParam )(
            IWMColorConvProps * This,
                       LONG lSrcCropLeft,
                       LONG lSrcCropTop,
                       LONG lDstCropLeft,
                       LONG lDstCropTop,
                       LONG lCropWidth,
                       LONG lCropHeight);
        END_INTERFACE
    } IWMColorConvPropsVtbl;
    interface IWMColorConvProps
    {
        CONST_VTBL struct IWMColorConvPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMode(This,lMode) )
    ( (This)->lpVtbl -> SetFullCroppingParam(This,lSrcCropLeft,lSrcCropTop,lDstCropLeft,lDstCropTop,lCropWidth,lCropHeight) )
static const PROPERTYKEY MFPKEY_STARTTIME = { { 0x5cefee10, 0xe210, 0x45c6, {0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7} }, 0x01 };
static const PROPERTYKEY MFPKEY_STOPTIME = { { 0x5cefee10, 0xe210, 0x45c6, {0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7} }, 0x02 };
static const PROPERTYKEY MFPKEY_PROGRESS = { { 0x5cefee10, 0xe210, 0x45c6, {0x9e, 0x28, 0xf5, 0xa8, 0x73, 0x1c, 0x96, 0xc7} }, 0x03 };
static const PROPERTYKEY MFPKEY_PHANTOMING_ON = { { 0x12b53cb2, 0xe12e, 0x4579, { 0x8a, 0xc3, 0xd0, 0x2f, 0x94, 0xf1, 0xe8, 0x9e } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_ROOMCORR_PROFILE = { { 0xf311cdc7, 0xf45f, 0x4eb7, { 0xa8, 0x64, 0x9d, 0xc1, 0xae, 0xeb, 0x7e, 0x6d } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_BASSMGMT_CROSSOVER_FREQ = { { 0x61e8acb9, 0xf04f, 0x4f40, { 0xa6, 0x5f, 0x8f, 0x49, 0xfa, 0xb3, 0xba, 0x10 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_BASSMGMT_SPKRBASSCONFIG = { { 0x7bfd170d, 0x4770, 0x4dc5, { 0x92, 0x4d, 0x0b, 0x7b, 0x25, 0x2e, 0xe9, 0x18 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_BASSMGMT_BIGROOM = { { 0xc816a1a7, 0xa119, 0x48a5, { 0x9a, 0xd2, 0x85, 0x45, 0x1f, 0x4b, 0x5a, 0x2e } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_BASSMGMT_NO_SUB = { { 0x5c3fd32e, 0x0d40, 0x4e2d, { 0x99, 0xfb, 0xc9, 0x1e, 0x96, 0x42, 0x0b, 0xe7 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_BASSMGMT_INVERT_SUB = { { 0xb1103003, 0xc191, 0x4275, { 0x9f, 0xa0, 0x8c, 0x28, 0x2c, 0x72, 0x4b, 0xce } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_CORR_HEADPHONE = { { 0x445f3559, 0xb43f, 0x4b67, {0xb0, 0xf8, 0x32, 0xb6, 0x7c, 0xf9, 0x4b, 0x48} }, PID_FIRST_USABLE + 0};
static const PROPERTYKEY MFPKEY_CORR_BASS_MANAGEMENT_MODE = { { 0x1864a4e0, 0xefc1, 0x45e6, { 0xa6, 0x75, 0x57, 0x86, 0xcb, 0xf3, 0xb9, 0xf0 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_CORR_MULTICHANNEL_MODE = { { 0x1b5c2483, 0x0839, 0x4523, { 0xba, 0x87, 0x95, 0xf8, 0x9d, 0x27, 0xbd, 0x8c } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_CORR_LOUDNESS_EQUALIZATION_ON = { { 0xfc52a749, 0x4be9, 0x4510, { 0x89, 0x6e, 0x96, 0x6b, 0xa6, 0x52, 0x59, 0x80 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_CORR_ROOM_CORRECTION_ON = { { 0x01fb17e3, 0x796c, 0x4451, { 0x81, 0x63, 0x68, 0xcd, 0xc1, 0x32, 0x1a, 0x60 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_CORR_SPKRMASK = { { 0xd328d8fb, 0xd49f, 0x4aa9, {0xb7, 0x21, 0xe1, 0x71, 0xe9, 0x3a, 0xd5, 0x63} }, PID_FIRST_USABLE + 5};
static const PROPERTYKEY MFPKEY_CORR_NORMALIZATION_GAIN = { { 0xd61b266c, 0x5aee, 0x456b, {0x84, 0x24, 0x72, 0x25, 0x47, 0x7d, 0xae, 0x77} }, PID_FIRST_USABLE + 0};
static const PROPERTYKEY MFPKEY_BASS_BOOST_AMOUNT = { { 0xae7f0b2a, 0x96fc, 0x493a, { 0x92, 0x47, 0xa0, 0x19, 0xf1, 0xf7, 0x01, 0xe1 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_LOUDNESS_EQUALIZATION_RELEASE = { { 0x9c00eeed, 0xedce, 0x4cd8, { 0xae, 0x08, 0xcb, 0x05, 0xe8, 0xef, 0x57, 0xa0 } }, PID_FIRST_USABLE };
static const PROPERTYKEY PKEY_SYSFXUI_HIDE_MASK = { { 0xcb9c6bce, 0x7a25, 0x47aa, { 0xb2, 0xbe, 0x6a, 0xd8, 0x44, 0x31, 0xed, 0xde } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_AUVRHP_SKIPHRTFREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x01 };
static const PROPERTYKEY MFPKEY_AUVRHP_SKIPPOSTREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x02 };
static const PROPERTYKEY MFPKEY_AUVRHP_ROOMMODEL = { { 0x73ae880e, 0x8258, 0x4e57, { 0xb8, 0x5f, 0x7d, 0xaa, 0x6b, 0x7d, 0x5e, 0xf0 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_AUVRHP_LFWEIGHT = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x04 };
static const PROPERTYKEY MFPKEY_AUVRHP_DOHRTFREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x05 };
static const PROPERTYKEY MFPKEY_AUVRHP_DOPOSTREVERB = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x06 };
static const PROPERTYKEY MFPKEY_AUVRHP_POSTREVERB_START = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x07 };
static const PROPERTYKEY MFPKEY_AUVRHP_POSTREVERB_LEN = { { 0x30bbfebf, 0x24b4, 0x4198, { 0x89, 0xba, 0xad, 0x11, 0xa2, 0xac, 0xd6, 0x1 } }, 0x08 };
static const PROPERTYKEY MFPKEY_WMRESAMP_FILTERQUALITY = { { 0xaf1adc73, 0xa210, 0x4b05, {0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d} }, 0x01 };
static const PROPERTYKEY MFPKEY_WMRESAMP_CHANNELMTX = { { 0xaf1adc73, 0xa210, 0x4b05, {0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d} }, 0x02 };
static const PROPERTYKEY MFPKEY_WMRESAMP_LOWPASS_BANDWIDTH = { { 0xaf1adc73, 0xa210, 0x4b05, {0x96, 0x6e, 0x54, 0x91, 0xcf, 0xf4, 0x8b, 0x1d} }, 0x03 };
static const PROPERTYKEY MFPKEY_WMAENC_AVGBYTESPERSEC = { { 0x11caf780, 0x921b, 0x42ef, { 0xb7, 0x55, 0xf3, 0xa0, 0x53, 0xea, 0x1a, 0x41 } }, 0x00 };
static const PROPERTYKEY MFPKEY_WMAENC_ORIGWAVEFORMAT = { { 0xf5c760a2, 0x3635, 0x48e1, { 0x8f, 0xbd, 0x0e, 0x49, 0x81, 0x24, 0xe0, 0xa2 } }, 0x00 };
static const PROPERTYKEY MFPKEY_PEAKCONSTRAINED = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 };
static const PROPERTYKEY MFPKEY_STAT_RAVG = { { 0x23a0e3b5, 0xfc62, 0x4ab8, { 0xb7, 0x7c, 0x6e, 0x0c, 0x28, 0xab, 0x30, 0x16 } }, 0x00 };
static const PROPERTYKEY MFPKEY_STAT_BAVG = { { 0x036f6b60, 0xad43, 0x485c, { 0x86, 0xc6, 0x21, 0xa6, 0xdb, 0x2c, 0x1b, 0xa3 } }, 0x00 };
static const PROPERTYKEY MFPKEY_STAT_RMAX = { { 0x82ff7c67, 0x6554, 0x4749, { 0xa3, 0x2b, 0x36, 0x90, 0xdd, 0x1a, 0xe8, 0xde } }, 0x00 };
static const PROPERTYKEY MFPKEY_STAT_BMAX = { { 0xcd95e5b7, 0x9143, 0x47fb, { 0xa9, 0xd2, 0x9d, 0xb7, 0x5f, 0x2e, 0x74, 0xbe } }, 0x00 };
static const PROPERTYKEY MFPKEY_CONSTRAINENCLATENCY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 1};
static const PROPERTYKEY MFPKEY_CONSTRAINDECLATENCY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 2};
static const PROPERTYKEY MFPKEY_CONSTRAINENCCOMPLEXITY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 3};
static const PROPERTYKEY MFPKEY_MAXENCLATENCYMS = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 4};
static const PROPERTYKEY MFPKEY_MAXDECLATENCYMS = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 5};
static const PROPERTYKEY MFPKEY_ENCCOMPLEXITY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 6};
static const PROPERTYKEY MFPKEY_CHECKDATACONSISTENCY2P = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 7};
static const PROPERTYKEY MFPKEY_AVGCONSTRAINED = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 8};
static const PROPERTYKEY MFPKEY_ENHANCED_WMA = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 20};
static const PROPERTYKEY MFPKEY_REQUESTING_A_FRAMESIZE = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 21};
static const PROPERTYKEY MFPKEY_PREFERRED_FRAMESIZE = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 22};
static const PROPERTYKEY MFPKEY_WMA_ELEMENTARY_STREAM = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 23};
static const PROPERTYKEY MFPKEY_MOST_RECENTLY_ENUMERATED_VBRQUALITY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 24};
static const PROPERTYKEY MFPKEY_DESIRED_VBRQUALITY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 25};
static const PROPERTYKEY MFPKEY_CONSTRAIN_ENUMERATED_VBRQUALITY = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 26};
static const PROPERTYKEY MFPKEY_WMAENC_GENERATE_DRC_PARAMS = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 28};
static const PROPERTYKEY MFPKEY_WMAENC_BUFFERLESSCBR = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 29};
static const PROPERTYKEY MFPKEY_WMAENC_RTSPDIF = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 30};
static const PROPERTYKEY MFPKEY_DYN_VBR_RAVG = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 9};
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNCATION = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 10};
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_QFLOOR = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 11};
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_QCEIL = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 12};
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_BWFLOOR = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 13};
static const PROPERTYKEY MFPKEY_DYN_BANDTRUNC_BWCEIL = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 14};
static const PROPERTYKEY MFPKEY_DYN_SIMPLEMASK = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 15};
static const PROPERTYKEY MFPKEY_DYN_STEREO_PREPROC = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 16};
static const PROPERTYKEY MFPKEY_DYN_VBR_BAVG = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 18};
static const PROPERTYKEY MFPKEY_DYN_ALLOW_NOISESUB = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 19};
static const PROPERTYKEY MFPKEY_DYN_ALLOW_PCMRANGELIMITING = { { 0x6dbdf03b, 0xb05c, 0x4a03, { 0x8e, 0xc1, 0xbb, 0xe6, 0x3d, 0xb1, 0x0c, 0xb4 } }, 0x00 + 27};
static const PROPERTYKEY MFPKEY_WMADEC_HIRESOUTPUT = { { 0x8d3fe592, 0xeecc, 0x4f4e, { 0x9a, 0xff, 0x5a, 0xf1, 0x67, 0x9d, 0x38, 0xd2 } }, 0x00 };
static const PROPERTYKEY MFPKEY_WMADEC_SPKRCFG = { { 0x8fff67be, 0x977f, 0x41dc, { 0x8f, 0xaf, 0x23, 0xba, 0xc9, 0xa6, 0xdf, 0x73 } }, 0x00 };
static const PROPERTYKEY MFPKEY_WMADEC_FOLDDOWN_MATRIX = { { 0x51647e9b, 0x6a7f, 0x4739, { 0x9e, 0x0b, 0x29, 0x4b, 0x27, 0x89, 0x69, 0xeb } }, 0x00 };
static const PROPERTYKEY MFPKEY_WMADEC_DRCMODE = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x00 };
static const PROPERTYKEY MFPKEY_WMADRC_AVGTARGET = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x01 };
static const PROPERTYKEY MFPKEY_WMADRC_PEAKTARGET = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x02 };
static const PROPERTYKEY MFPKEY_WMADRC_AVGREF = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x03 };
static const PROPERTYKEY MFPKEY_WMADRC_PEAKREF = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x04 };
static const PROPERTYKEY MFPKEY_WMADEC_LTRTOUTPUT = { { 0x7b613713, 0x3d38, 0x4cda, { 0xaa, 0x61, 0x04, 0x78, 0xb1, 0xbc, 0xfc, 0x42 } }, 0x05 };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_MusicSpeechClassMode = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_BufferWindow = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 1 };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_DecoderDelay = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 2 };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_EDL = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 3 };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_VariableRate = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 4 };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_BandWidth = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 5 };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_PacketLossMode = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 6 };
static const PROPERTYKEY MFPKEY_WMAVOICE_ENC_RT_MinBufferSize = { { 0xd9c8f5fe, 0x8682, 0x4347, { 0x85, 0x7, 0x60, 0xa3, 0xf5, 0x1f, 0x33, 0xf1 } }, PID_FIRST_USABLE + 7 };
static const PROPERTYKEY MFPKEY_WMAVOICE_DEC_RT_JitterControl = { { 0x165f69b, 0x80a1, 0x4ef8, { 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd } }, PID_FIRST_USABLE };
static const PROPERTYKEY MFPKEY_WMAVOICE_DEC_RT_JitterMode = { { 0x165f69b, 0x80a1, 0x4ef8, { 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd } }, PID_FIRST_USABLE + 1 };
static const PROPERTYKEY MFPKEY_WMAVOICE_DEC_RT_PacketLossMode = { { 0x165f69b, 0x80a1, 0x4ef8, { 0xa4, 0xa9, 0xad, 0xa3, 0xb8, 0xa6, 0x89, 0xdd } }, PID_FIRST_USABLE + 2 };
static const PROPERTYKEY MFPKEY_Decoder_MaxNumPCMSamplesWithPaddedSilence = { { 0xc678ba85, 0x1212, 0x43da, { 90, 0xc3, 0xe7, 0x48, 0xb9, 0x24, 0x49, 0xec } }, 0x00 };
static const PROPERTYKEY MFPKEY_WMAAECMA_SYSTEM_MODE = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 0};
static const PROPERTYKEY MFPKEY_WMAAECMA_DMO_SOURCE_MODE = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 1};
static const PROPERTYKEY MFPKEY_WMAAECMA_DEVICE_INDEXES = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 2};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATURE_MODE = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 3};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_FRAME_SIZE = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 4};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_ECHO_LENGTH = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 5};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_NS = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 6};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_AGC = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 7};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_AES = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 8};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_VAD = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 9};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_CENTER_CLIP = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 10};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_NOISE_FILL = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 11};
static const PROPERTYKEY MFPKEY_WMAAECMA_RETRIEVE_TS_STATS = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 12};
static const PROPERTYKEY MFPKEY_WMAAECMA_QUALITY_METRICS = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 13};
static const PROPERTYKEY MFPKEY_WMAAECMA_MICARRAY_DESCPTR = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 14};
static const PROPERTYKEY MFPKEY_WMAAECMA_DEVICEPAIR_GUID = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 15};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_MICARR_MODE = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 16};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_MICARR_BEAM = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 17};
static const PROPERTYKEY MFPKEY_WMAAECMA_FEATR_MICARR_PREPROC = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 18};
static const PROPERTYKEY MFPKEY_WMAAECMA_MIC_GAIN_BOUNDER = { { 0x6f52c567, 0x360, 0x4bd2, { 0x96, 0x17, 0xcc, 0xbf, 0x14, 0x21, 0xc9, 0x39 } }, PID_FIRST_USABLE + 19};
static const PROPERTYKEY MFPKEY_COLOR_BRIGHTNESS = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x01 };
static const PROPERTYKEY MFPKEY_COLOR_CONTRAST = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x02 };
static const PROPERTYKEY MFPKEY_COLOR_HUE = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x03 };
static const PROPERTYKEY MFPKEY_COLOR_SATURATION = { { 0x174fb0ec, 0x2695, 0x476c, { 0x88, 0xaa, 0xd2, 0xb4, 0x1c, 0xe7, 0x5e, 0x67 } }, 0x04 };
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITY = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x01 };
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYEX = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x02 };
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYMAX = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x03 };
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYLIVE = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x04 };
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_COMPLEXITYOFFLINE = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x05 };
static const PROPERTYKEY MFPKEY_COLORLEGALIZER_bSVideo = { { 0xadd0e6c1, 0xcc30, 0x475d, { 0x9e, 0x5a, 0xf1, 0xb1, 0x9f, 0x58, 0x7b, 0xe0 } }, 0x06 };
static const PROPERTYKEY MFPKEY_CONV_INPUTFRAMERATE = { { 0x52f8d29b, 0x2e76, 0x43f7, { 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf } }, 0x01 };
static const PROPERTYKEY MFPKEY_CONV_OUTPUTFRAMERATE = { { 0x52f8d29b, 0x2e76, 0x43f7, { 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf } }, 0x02 };
static const PROPERTYKEY MFPKEY_CONV_REVERSEPLAYBACK = { { 0x52f8d29b, 0x2e76, 0x43f7, { 0xa4, 0xf6, 0x17, 0x17, 0x90, 0x4e, 0x35, 0xdf } }, 0x03 };
static const PROPERTYKEY MFPKEY_SMPTE_MASKNUM = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x01 };
static const PROPERTYKEY MFPKEY_SMPTE_OFFSETX = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x02 };
static const PROPERTYKEY MFPKEY_SMPTE_OFFSETY = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x03 };
static const PROPERTYKEY MFPKEY_SMPTE_REPLICATEX = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x04 };
static const PROPERTYKEY MFPKEY_SMPTE_REPLICATEY = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x05 };
static const PROPERTYKEY MFPKEY_SMPTE_REVERSE = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x06 };
static const PROPERTYKEY MFPKEY_SMPTE_BORDERSOFTNESS = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x07 };
static const PROPERTYKEY MFPKEY_SMPTE_BORDERWIDTH = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x08 };
static const PROPERTYKEY MFPKEY_SMPTE_BORDERCOLOR = { { 0x427ce859, 0xd55c, 0x4f8e, {0xb0, 0x0e, 0x9c, 0xdf, 0x76, 0x15, 0x48, 0xa6} }, 0x09 };
static const PROPERTYKEY MFPKEY_DENOISE_FILTER = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x01 };
static const PROPERTYKEY MFPKEY_DENOISE_CACHEFRAMES = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x02 };
static const PROPERTYKEY MFPKEY_DENOISE_PROCFRAMES = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x03 };
static const PROPERTYKEY MFPKEY_DENOISE_CAUSAL = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x04 };
static const PROPERTYKEY MFPKEY_DENOISE_ITERATIVE = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x05 };
static const PROPERTYKEY MFPKEY_DENOISE_PARA1 = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x06 };
static const PROPERTYKEY MFPKEY_DENOISE_PARA2 = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x07 };
static const PROPERTYKEY MFPKEY_DENOISE_PARA3 = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x08 };
static const PROPERTYKEY MFPKEY_DENOISE_PARA4 = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x09 };
static const PROPERTYKEY MFPKEY_DENOISE_PARA5 = { { 0x7213c6ef, 0xcdd4, 0x4d09, {0xa8, 0x9e, 0xf3, 0xeb, 0xeb, 0xe5, 0xf5, 0x65} }, 0x10 };
static const PROPERTYKEY MFPKEY_CLUSTERDETECTOR_MAXCLUSTERS = { { 0xb79a666d, 0x8a9d, 0x463c, { 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a } }, 0x01 };
static const PROPERTYKEY MFPKEY_CLUSTERDETECTOR_MINCLUSTERDURATION = { { 0xb79a666d, 0x8a9d, 0x463c, { 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a } }, 0x02 };
static const PROPERTYKEY MFPKEY_CLUSTERDETECTOR_MAXCLUSTERDURATION = { { 0xb79a666d, 0x8a9d, 0x463c, { 0x9d, 0x97, 0xe1, 0xb1, 0x0, 0x45, 0xc1, 0x3a } }, 0x03 };
static const PROPERTYKEY MFPKEY_FACEDETECTOR_SKIPFRAMES = { { 0xe1a124a6, 0x4fa8, 0x4ba5, { 0xa2, 0xd8, 0xdc, 0x34, 0x53, 0x6f, 0x74, 0x26 } }, 0x01 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_TYPE = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x01 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_CLASSIFICATIONMETHOD = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x02 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_GLOBALTHRESHOLD = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x03 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_ADAPTIVETHRESHOLD = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x04 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_ADAPTIVEWINDOWSIZE = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x05 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MINCLIPWEIGHT = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x06 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MINCLIPDURATION = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x07 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MAXCLIPDURATION = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x08 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_MAXCLIPSPERHOUR = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x09 };
static const PROPERTYKEY MFPKEY_SHOTDETECTOR_PRESERVEMONOCLIPS = { { 0x7bcc7b0f, 0xdedf, 0x4a68, { 0x96, 0xa2, 0xfc, 0xe0, 0x19, 0xed, 0x95, 0x6f } }, 0x0a };
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_SEARCHWINDOWSIZE = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x01 };
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_MINCOLORENTROPY = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x02 };
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_MAXMOTIONACTIVITY = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x03 };
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILWIDTH = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x04 };
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILHEIGHT = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x05 };
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILREADY = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0x06 };
static const PROPERTYKEY MFPKEY_THUMBNAILGENERATOR_THUMBNAILFILENAME = { { 0xd9d7473f, 0x7d68, 0x4226, { 0x98, 0x5c, 0x31, 0x85, 0x2c, 0x4c, 0x9e, 0x74 } }, 0xff };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_TOCREADY = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x01 };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_TOCOBJECT = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x02 };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_SHOTDETECTOR_ON = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x03 };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_CLUSTERDETECTOR_ON = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x04 };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_THUMBNAILGENERATOR_ON = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x05 };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_FEATUREEXTRACTOR_ON = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x06 };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_FACEDETECTOR_ON = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0x07 };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_USEENDSIGNAL = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfa };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_ENDSIGNAL = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfb };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_ENDTIME = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfc };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_CURRENTTIME = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfd };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_PROCESSEDFRAMES = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xfe };
static const PROPERTYKEY MFPKEY_TOCGENERATOR_INDEXFILENAME = { { 0x7c109759, 0x3c27, 0x42ef, { 0xa6, 0xa3, 0xce, 0xde, 0xf7, 0x5a, 0x35, 0xe9 } }, 0xff };
static const PROPERTYKEY MFPKEY_DXVA_ENABLED = { { 0x58e28605, 0x1d51, 0x48ed, { 0xa3, 0xeb, 0xf, 0x9b, 0xaf, 0x78, 0x5f, 0xbd } }, 0x01 };
static const PROPERTYKEY MFPKEY_FI_SUPPORTED = { { 0x5ce18788, 0xb992, 0x49a7, { 0xa4, 0xf1, 0x60, 0xea, 0x21, 0xca, 0xa5, 0x5f } }, 0x02 };
static const PROPERTYKEY MFPKEY_FI_ENABLED = { { 0xe020c4ca, 0x3bdd, 0x40ec, { 0xbc, 0xf4, 0x40, 0x39, 0xb1, 0x45, 0xe, 0xb8 } }, 0x03 };
static const PROPERTYKEY MFPKEY_DECODER_DEINTERLACING = { { 0xc6281f, 0x4be6, 0x4e44, { 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4 } }, 0x04 };
static const PROPERTYKEY MFPKEY_POSTPROCESSMODE = { { 0xc6281f, 0x4be6, 0x4e44, { 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4 } }, 0x05 };
static const PROPERTYKEY MFPKEY_NUMTHREADSDEC = { { 0xc6281f, 0x4be6, 0x4e44, { 0x9e, 0xd8, 0x9e, 0xc5, 0x42, 0x23, 0x16, 0xe4 } }, 0x06 };
static const PROPERTYKEY MFPKEY_AVDecVideoSWPowerLevel = { { 0xfb5d2347, 0x4dd8, 0x4509, {0xae, 0xd0, 0xdb, 0x5f, 0xa9, 0xaa, 0x93, 0xf4 } }, 0x08 };
static const PROPERTYKEY MFPKEY_AVGFRAMERATE = { { 0x41d700d6, 0x95b1, 0x4e3f, { 0xb7, 0x59, 0x2d, 0x66, 0xd8, 0xc7, 0xad, 0xa2 } }, 0x01 };
static const PROPERTYKEY MFPKEY_BUFFERFULLNESSINFIRSTBYTE = { { 0xb69dc3c5, 0x64c4, 0x4757, { 0x99, 0xcb, 0x5d, 0x58, 0xf, 0xd5, 0x65, 0x9e } }, 0x02 };
static const PROPERTYKEY MFPKEY_PASSESRECOMMENDED = { { 0x38bdceea, 0x393e, 0x4f9a, { 0x8d, 0xc3, 0x80, 0x2c, 0xc4, 0x5, 0x83, 0x8f } }, 0x03 };
static const PROPERTYKEY MFPKEY_DECODERCOMPLEXITYPROFILE = { { 0xc0d912d6, 0x14da, 0x4d31, { 0x8d, 0x83, 0xd1, 0x8, 0x91, 0x5e, 0x8d, 0x77 } }, 0x04 };
static const PROPERTYKEY MFPKEY_TOTALFRAMES = { { 0xce5f1e3c, 0xd3d4, 0x4c3f, { 0x88, 0xc8, 0x1, 0xe9, 0x89, 0xd9, 0x98, 0xd2 } }, 0x05 };
static const PROPERTYKEY MFPKEY_CODEDFRAMES = { { 0x62872b55, 0xfe0e, 0x4930, { 0xa6, 0xd2, 0xcc, 0xaa, 0x37, 0xe8, 0xf5, 0x35 } }, 0x06 };
static const PROPERTYKEY MFPKEY_ZEROBYTEFRAMES = { { 0x8f04aba4, 0x313d, 0x40fb, { 0x80, 0x31, 0x31, 0x51, 0x78, 0x13, 0xd9, 0xef } }, 0x07 };
static const PROPERTYKEY MFPKEY_ENDOFPASS = { { 0xb2030f2a, 0x8bbc, 0x46f8, { 0xa6, 0x4b, 0xa9, 0x8f, 0xf7, 0xfc, 0xf0, 0x2a } }, 0x08 };
static const PROPERTYKEY MFPKEY_DATARATE = { { 0xe0db0807, 0x8003, 0x4880, { 0xac, 0x11, 0x61, 0xb7, 0x3f, 0x33, 0xdc, 0x60 } }, 0x09 };
static const PROPERTYKEY MFPKEY_KEYDIST = { { 0x18d6f8c5, 0x2416, 0x4d7b, { 0x90, 0xd7, 0x9f, 0x3f, 0x21, 0xe7, 0x52, 0xb4 } }, 0x0a };
static const PROPERTYKEY MFPKEY_CRISP = { { 0x2985f772, 0x3af2, 0x4d15, { 0x8c, 0xfa, 0x8a, 0x96, 0x2f, 0xf3, 0x20, 0x40 } }, 0x0b };
static const PROPERTYKEY MFPKEY_FOURCC = { { 0x593e3f2e, 0xf84d, 0x4e85, { 0xb6, 0x8d, 0xf6, 0x69, 0x40, 0xe, 0xda, 0xbc } }, 0x0c };
static const PROPERTYKEY MFPKEY_VIDEOWINDOW = { { 0xc1c96060, 0x76f0, 0x47d4, { 0xa8, 0x75, 0x5b, 0xdd, 0xa9, 0xd, 0xf5, 0xe9 } }, 0x0d };
static const PROPERTYKEY MFPKEY_FRAMECOUNT = { { 0x75028eb4, 0x4853, 0x44d3, { 0x88, 0xa3, 0xe4, 0x99, 0xf8, 0x9d, 0x22, 0x7f } }, 0x0e };
static const PROPERTYKEY MFPKEY_LIVEENCODE = { { 0x3ffa1e60, 0x5514, 0x4634, { 0x86, 0xe6, 0x1f, 0x3b, 0x7c, 0x54, 0x51, 0x43 } }, 0x0f };
static const PROPERTYKEY MFPKEY_COMPLEXITY = { { 0x44fa08c7, 0x92f5, 0x45dc, { 0x83, 0x76, 0x8d, 0x1d, 0x32, 0x4c, 0x65, 0x2a } }, 0x10 };
static const PROPERTYKEY MFPKEY_COMPLEXITYEX = { { 0xd6e48f93, 0xfd47, 0x47a3, { 0x92, 0x62, 0x8a, 0xef, 0xb5, 0x53, 0x3, 0x32 } }, 0x11 };
static const PROPERTYKEY MFPKEY_ASFOVERHEADPERFRAME = { { 0xeac7502, 0x1957, 0x4beb, { 0x91, 0x4d, 0x88, 0x5f, 0x85, 0xe7, 0x54, 0x36 } }, 0x12 };
static const PROPERTYKEY MFPKEY_PASSESUSED = { { 0xb1653ac1, 0xcb7d, 0x43ee, { 0x84, 0x54, 0x3f, 0x9d, 0x81, 0x1b, 0x3, 0x31 } }, 0x13 };
static const PROPERTYKEY MFPKEY_VBRENABLED = { { 0xe48d9459, 0x6abe, 0x4eb5, { 0x92, 0x11, 0x60, 0x8, 0xc, 0x1a, 0xb9, 0x84 } }, 0x14 };
static const PROPERTYKEY MFPKEY_VBRQUALITY = { { 0xf97b3f3a, 0x9eff, 0x4ac9, { 0x82, 0x47, 0x35, 0xb3, 0xe, 0xb9, 0x25, 0xf4 } }, 0x15 };
static const PROPERTYKEY MFPKEY_RAVG = { { 0x14b2aae6, 0x2987, 0x460a, { 0x8b, 0x22, 0x9c, 0x7, 0x7c, 0x55, 0xd0, 0x5e } }, 0x16 };
static const PROPERTYKEY MFPKEY_BAVG = { { 0x10174e76, 0xe0ca, 0x4a39, { 0x94, 0x8c, 0x85, 0x10, 0xc2, 0x32, 0x32, 0x76 } }, 0x17 };
static const PROPERTYKEY MFPKEY_RMAX = { { 0x7d8dd246, 0xaaf4, 0x4a24, { 0x81, 0x66, 0x19, 0x39, 0x6b, 0x6, 0xef, 0x69 } }, 0x18 };
static const PROPERTYKEY MFPKEY_BMAX = { { 0xff365211, 0x21b6, 0x4134, { 0xab, 0x7c, 0x52, 0x39, 0x3a, 0x8f, 0x80, 0xf6 } }, 0x19 };
static const PROPERTYKEY MFPKEY_INTERLACEDCODINGENABLED = { { 0x56976073, 0x6c3, 0x4b3b, { 0xad, 0x41, 0xb7, 0x41, 0x7f, 0xce, 0x84, 0x74 } }, 0x1a };
static const PROPERTYKEY MFPKEY_PRODUCEDUMMYFRAMES = { { 0x61714bc6, 0x8a1, 0x49d1, { 0xb8, 0x27, 0xa3, 0x3a, 0xad, 0xa9, 0x55, 0x26 } }, 0x1b };
static const PROPERTYKEY MFPKEY_DECODERCOMPLEXITYREQUESTED = { { 0xb0d7d4a7, 0x422b, 0x44c3, { 0x97, 0xb4, 0xb9, 0x76, 0xc, 0xce, 0xee, 0xa9 } }, 0x1c };
static const PROPERTYKEY MFPKEY_DROPPEDFRAMES = { { 0xbdb5afd3, 0x4027, 0x4882, { 0x80, 0x6c, 0x41, 0x62, 0xe4, 0xa7, 0xa3, 0xf0 } }, 0x1d };
static const PROPERTYKEY MFPKEY_CODEDNONZEROFRAMES = { { 0x7adf5b69, 0x1e3f, 0x42d3, { 0x99, 0x1d, 0xf8, 0x1e, 0xc, 0xeb, 0xe9, 0x3e } }, 0x1e };
static const PROPERTYKEY MFPKEY_QPPERFRAME = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x1f };
static const PROPERTYKEY MFPKEY_VOLHEADERFORREENCODE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x21 };
static const PROPERTYKEY MFPKEY_REENCDURATION = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x22 };
static const PROPERTYKEY MFPKEY_REENCSTARTBUFFERSIZE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x23 };
static const PROPERTYKEY MFPKEY_REENCENDBUFFERSIZE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x24 };
static const PROPERTYKEY MFPKEY_REENCQPREF = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x25 };
static const PROPERTYKEY MFPKEY_DENOISEOPTION = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x26 };
static const PROPERTYKEY MFPKEY_FULLFRAMERATE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2d };
static const PROPERTYKEY MFPKEY_MOTIONSEARCHRANGE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2e };
static const PROPERTYKEY MFPKEY_DELTAMVRANGEINDEX = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x2f };
static const PROPERTYKEY MFPKEY_NUMBFRAMES = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x30 };
static const PROPERTYKEY MFPKEY_RDSUBPIXELSEARCH = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x31 };
static const PROPERTYKEY MFPKEY_BDELTAQP = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x32 };
static const PROPERTYKEY MFPKEY_FORCEFRAMEWIDTH = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x33 };
static const PROPERTYKEY MFPKEY_FORCEFRAMEHEIGHT = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x34 };
static const PROPERTYKEY MFPKEY_RANGEREDUX = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x35 };
static const PROPERTYKEY MFPKEY_LOOKAHEAD = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x36 };
static const PROPERTYKEY MFPKEY_VIDEOSCALING = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x37 };
static const PROPERTYKEY MFPKEY_PERCEPTUALOPTLEVEL = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x38 };
static const PROPERTYKEY MFPKEY_FORCEMEDIANSETTING = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x39 };
static const PROPERTYKEY MFPKEY_NUMTHREADS = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3a };
static const PROPERTYKEY MFPKEY_LOOPFILTER = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3b };
static const PROPERTYKEY MFPKEY_NOISEEDGEREMOVAL = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3c };
static const PROPERTYKEY MFPKEY_VTYPE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3d };
static const PROPERTYKEY MFPKEY_CLOSEDENTRYPOINT = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x3f };
static const PROPERTYKEY MFPKEY_MOTIONSEARCHLEVEL = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x40 };
static const PROPERTYKEY MFPKEY_MOTIONMATCHMETHOD = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x41 };
static const PROPERTYKEY MFPKEY_MACROBLOCKMODECOSTMETHOD = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x42 };
static const PROPERTYKEY MFPKEY_COMPRESSIONOPTIMIZATIONTYPE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x43 };
static const PROPERTYKEY MFPKEY_PERIODICALSPDISTANCE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x46 };
static const PROPERTYKEY MFPKEY_ENCODERCOMPLEXITY = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x47 };
static const PROPERTYKEY MFPKEY_USERDATASIZE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x48 };
static const PROPERTYKEY MFPKEY_LETTERBOXPRESENT = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x49 };
static const PROPERTYKEY MFPKEY_SCENECHANGE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x4a };
static const PROPERTYKEY MFPKEY_VARIABLEGOP = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x4b };
static const PROPERTYKEY MFPKEY_SCENECHANGEI = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x4c };
static const PROPERTYKEY MFPKEY_LOOKAHEADRC = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x4d };
static const PROPERTYKEY MFPKEY_DQUANTOPTION = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x4e };
static const PROPERTYKEY MFPKEY_DQUANTSTRENGTH = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x4f };
static const PROPERTYKEY MFPKEY_FORCEOVERLAP = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x50 };
static const PROPERTYKEY MFPKEY_MOTIONVECTORCOSTMETHOD = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x51 };
static const PROPERTYKEY MFPKEY_DYNCOMPLEXLEVEL = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x52 };
static const PROPERTYKEY MFPKEY_TARGETENCRATE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x53 };
static const PROPERTYKEY MFPKEY_DYNENCMODE = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x54 };
static const PROPERTYKEY MFPKEY_TARGETENCDELTA = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x55 };
static const PROPERTYKEY MFPKEY_ADAPTIVERESOLUTION = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x56 };
static const PROPERTYKEY MFPKEY_SETDYNVIDRES = { { 0x4e91bf89, 0x665a, 0x49da, { 0xbb, 0x94, 0x88, 0xc5, 0x50, 0xcf, 0xcd, 0x28 } }, 0x57 };
static const PROPERTYKEY MFPKEY_CLIP_XORIG = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x01 };
static const PROPERTYKEY MFPKEY_CLIP_YORIG = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x02 };
static const PROPERTYKEY MFPKEY_CLIP_WIDTH = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x03 };
static const PROPERTYKEY MFPKEY_CLIP_HEIGHT = { { 0x716fe5c8, 0x755c, 0x482f, { 0x8d, 0xf3, 0xb3, 0x1d, 0x53, 0x59, 0xf0, 0xd6 } }, 0x04 };
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_VALU_SRC = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x01 };
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_SCAL_SRC = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x02 };
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_VALU_DST = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x03 };
static const PROPERTYKEY MFPKEY_FI_FRAMERATE_SCAL_DST = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x04 };
static const PROPERTYKEY MFPKEY_FI_ALLOWED = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x05 };
static const PROPERTYKEY MFPKEY_FI_COMPLEXITY = { { 0x305bca55, 0x1e5b, 0x428e, { 0xa9, 0x4c, 0x65, 0xb9, 0x4d, 0x2, 0x64, 0xed } }, 0x06 };
static const PROPERTYKEY MFPKEY_RESIZE_SRC_LEFT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x01 };
static const PROPERTYKEY MFPKEY_RESIZE_SRC_TOP = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x02 };
static const PROPERTYKEY MFPKEY_RESIZE_SRC_WIDTH = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x03 };
static const PROPERTYKEY MFPKEY_RESIZE_SRC_HEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x04 };
static const PROPERTYKEY MFPKEY_RESIZE_DST_LEFT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x05 };
static const PROPERTYKEY MFPKEY_RESIZE_DST_TOP = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x06 };
static const PROPERTYKEY MFPKEY_RESIZE_DST_WIDTH = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x07 };
static const PROPERTYKEY MFPKEY_RESIZE_DST_HEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x08 };
static const PROPERTYKEY MFPKEY_RESIZE_QUALITY = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x09 };
static const PROPERTYKEY MFPKEY_RESIZE_INTERLACE = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0a };
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPX = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0b };
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPY = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0c };
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPWIDTH = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0d };
static const PROPERTYKEY MFPKEY_RESIZE_PANSCANAPHEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0e };
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPX = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x0f };
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPY = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x10 };
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPWIDTH = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x11 };
static const PROPERTYKEY MFPKEY_RESIZE_GEOMAPHEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x12 };
static const PROPERTYKEY MFPKEY_RESIZE_MINAPX = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x13 };
static const PROPERTYKEY MFPKEY_RESIZE_MINAPY = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x14 };
static const PROPERTYKEY MFPKEY_RESIZE_MINAPWIDTH = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x15 };
static const PROPERTYKEY MFPKEY_RESIZE_MINAPHEIGHT = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x16 };
static const PROPERTYKEY MFPKEY_PIXELASPECTRATIO = { { 0x6612a6bc, 0xe57d, 0x407d, { 0xa9, 0x58, 0x28, 0x5d, 0xf0, 0xd9, 0xb4, 0x0 } }, 0x17 };
static const PROPERTYKEY MFPKEY_COLORCONV_SRCLEFT = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x01 };
static const PROPERTYKEY MFPKEY_COLORCONV_SRCTOP = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x02 };
static const PROPERTYKEY MFPKEY_COLORCONV_DSTLEFT = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x03 };
static const PROPERTYKEY MFPKEY_COLORCONV_DSTTOP = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x04 };
static const PROPERTYKEY MFPKEY_COLORCONV_WIDTH = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x05 };
static const PROPERTYKEY MFPKEY_COLORCONV_HEIGHT = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x06 };
static const PROPERTYKEY MFPKEY_COLORCONV_MODE = { { 0xdc9100be, 0x1228, 0x416c, { 0x99, 0x48, 0x6f, 0x38, 0xf4, 0x79, 0x65, 0x4f } }, 0x07 };
static const PROPERTYKEY MFPKEY_DEINTERLACE_PROCESSTYPE = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x01 };
static const PROPERTYKEY MFPKEY_DEINTERLACE_TELECINEPATTERN = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x02 };
static const PROPERTYKEY MFPKEY_DEINTERLACE_LASTFRAME = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x03 };
static const PROPERTYKEY MFPKEY_DEINTERLACE_DETELECINE_FLAG = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x04 };
static const PROPERTYKEY MFPKEY_DEINTERLACE_SMOOTHLEVEL = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x05 };
static const PROPERTYKEY MFPKEY_DEINTERLACE_EDGETHRESHOLD = { { 0x6141f4c3, 0xd3a2, 0x48a9, { 0x96, 0xac, 0x2f, 0x0, 0x14, 0x17, 0x6c, 0x26 } }, 0x06 };
static const PROPERTYKEY MFPKEY_DVDEC_SIZE = { { 0x75f2421a, 0xe73a, 0x45b3, { 0xae, 0xf0, 0x91, 0x3c, 0x66, 0x84, 0x64, 0x61 } }, 0x00 };
static const PROPERTYKEY MFPKEY_DVENC_FORMAT = { { 0xf449a927, 0x7b22, 0x46ef, {0xb2, 0xe7, 0x4d, 0x2b, 0x72, 0x8b, 0x69, 0x9c } }, 0x00 };
typedef
enum WMV_DYNAMIC_FLAGS
    {
        WMV_DYNAMIC_BITRATE = 0x1,
        WMV_DYNAMIC_RESOLUTION = 0x2,
        WMV_DYNAMIC_COMPLEXITY = 0x4
    } WMV_DYNAMIC_FLAGS;
typedef
enum MF_AUVRHP_ROOMMODEL
    {
        VRHP_SMALLROOM = 0,
        VRHP_MEDIUMROOM = ( VRHP_SMALLROOM + 1 ) ,
        VRHP_BIGROOM = ( VRHP_MEDIUMROOM + 1 ) ,
        VRHP_CUSTUMIZEDROOM = ( VRHP_BIGROOM + 1 )
    } MF_AUVRHP_ROOMMODEL;
typedef
enum AEC_SYSTEM_MODE
    {
        SINGLE_CHANNEL_AEC = 0,
        ADAPTIVE_ARRAY_ONLY = ( SINGLE_CHANNEL_AEC + 1 ) ,
        OPTIBEAM_ARRAY_ONLY = ( ADAPTIVE_ARRAY_ONLY + 1 ) ,
        ADAPTIVE_ARRAY_AND_AEC = ( OPTIBEAM_ARRAY_ONLY + 1 ) ,
        OPTIBEAM_ARRAY_AND_AEC = ( ADAPTIVE_ARRAY_AND_AEC + 1 ) ,
        SINGLE_CHANNEL_NSAGC = ( OPTIBEAM_ARRAY_AND_AEC + 1 ) ,
        MODE_NOT_SET = ( SINGLE_CHANNEL_NSAGC + 1 )
    } AEC_SYSTEM_MODE;
typedef struct tagAecQualityMetrics_Struct
    {
    LONGLONG i64Timestamp;
    BYTE ConvergenceFlag;
    BYTE MicClippedFlag;
    BYTE MicSilenceFlag;
    BYTE PstvFeadbackFlag;
    BYTE SpkClippedFlag;
    BYTE SpkMuteFlag;
    BYTE GlitchFlag;
    BYTE DoubleTalkFlag;
    ULONG uGlitchCount;
    ULONG uMicClipCount;
    float fDuration;
    float fTSVariance;
    float fTSDriftRate;
    float fVoiceLevel;
    float fNoiseLevel;
    float fERLE;
    float fAvgERLE;
    DWORD dwReserved;
    } AecQualityMetrics_Struct;
typedef
enum AEC_VAD_MODE
    {
        AEC_VAD_DISABLED = 0,
        AEC_VAD_NORMAL = ( AEC_VAD_DISABLED + 1 ) ,
        AEC_VAD_FOR_AGC = ( AEC_VAD_NORMAL + 1 ) ,
        AEC_VAD_FOR_SILENCE_SUPPRESSION = ( AEC_VAD_FOR_AGC + 1 )
    } AEC_VAD_MODE;
typedef
enum AEC_INPUT_STREAM
    {
        AEC_CAPTURE_STREAM = 0,
        AEC_REFERENCE_STREAM = 1
    } AEC_INPUT_STREAM;
typedef
enum MIC_ARRAY_MODE
    {
        MICARRAY_SINGLE_CHAN = 0,
        MICARRAY_SIMPLE_SUM = 0x100,
        MICARRAY_SINGLE_BEAM = 0x200,
        MICARRAY_FIXED_BEAM = 0x400,
        MICARRAY_EXTERN_BEAM = 0x800
    } MIC_ARRAY_MODE;
DEFINE_GUID(MEDIASUBTYPE_Y41T, 0x54313459, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_Y42T, 0x54323459, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NV11, 0x3131564E, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_V216, 0x36313256, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_V410, 0x30313456, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_v210, 0x30313276, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_I420, 0x30323449, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WVC1, 0x31435657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wvc1, 0x31637677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVA, 0x41564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmva, 0x61766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVB, 0x42564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvb, 0x62766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVR, 0x52564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvr, 0x72766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMVP, 0x50564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmvp, 0x70766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WVP2, 0x32505657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wvp2, 0x32707677, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV3, 0x33564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv3, 0x33766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV2, 0x32564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv2, 0x32766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMV1, 0x31564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_wmv1, 0x31766D77, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPG4, 0x3447504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mpg4, 0x3467706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP42, 0x3234504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp42, 0x3234706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP43, 0x3334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp43, 0x3334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MP4S, 0x5334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_mp4s, 0x7334706D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_M4S2, 0x3253344D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_m4s2, 0x3273346D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSS1, 0x3153534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSS2, 0x3253534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MSAUDIO1, 0x00000160, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO2, 0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO3, 0x00000162, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO_LOSSLESS, 0x00000163, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMASPDIF, 0x00000164, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_WMAUDIO4, 0x00000168, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_ADTS_AAC, 0x00001600, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_RAW_AAC, 0x00001601, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_LOAS, 0x00001602, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NOKIA_MPEG_ADTS_AAC, 0x00001608, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_NOKIA_MPEG_RAW_AAC, 0x00001609, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_VODAFONE_MPEG_ADTS_AAC, 0x0000160A, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_VODAFONE_MPEG_RAW_AAC, 0x0000160B, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_MPEG_HEAAC, 0x00001610, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_RAW_AAC1, 0x000000FF, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_DVM, 0x00002000, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_DTS2, 0x00002001, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_DOLBY_DDPLUS, 0xa7fb87af, 0x2d02, 0x42fb, 0xa4, 0xd4, 0x5, 0xcd, 0x93, 0x84, 0x3b, 0xdd);
DEFINE_GUID(MEDIASUBTYPE_DOLBY_TRUEHD, 0xeb27cec4, 0x163e, 0x4ca3, 0x8b, 0x74, 0x8e, 0x25, 0xf9, 0x1b, 0x51, 0x7e);
DEFINE_GUID(MEDIASUBTYPE_DTS_HD, 0xa2e58eb7, 0xfa9, 0x48bb, 0xa4, 0xc, 0xfa, 0xe, 0x15, 0x6d, 0x6, 0x45);
DEFINE_GUID(MEDIASUBTYPE_DTS_HD_HRA, 0xA61AC364, 0xAD0E, 0x4744, 0x89, 0xFF, 0x21, 0x3C, 0xE0, 0xDF, 0x88, 0x04);
DEFINE_GUID(MEDIASUBTYPE_h264, 0x34363268, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_AVC1, 0x31435641, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_X264, 0x34363258, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
DEFINE_GUID(MEDIASUBTYPE_x264, 0x34363278, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
typedef
enum _MFVideoDSPMode
    {
        MFVideoDSPMode_Passthrough = 1,
        MFVideoDSPMode_Stabilization = 4
    } MFVideoDSPMode;
DEFINE_GUID(MF_VIDEODSP_MODE, 0x16d720f0, 0x768c, 0x11de, 0x8a, 0x39, 0x08, 0x00, 0x20, 0x0c, 0x9a, 0x66);
DEFINE_GUID(MFSampleExtension_VideoDSPMode, 0xc12d55cb, 0xd7d9, 0x476d, 0x81, 0xf3, 0x69, 0x11, 0x7f, 0x16, 0x3e, 0xa0);
DEFINE_GUID(CLSID_CTocEntry, 0xF22F5E05,0x585C,0x4def,0x85,0x23,0x65,0x55,0xCF,0xBC,0x0C,0xB3);
DEFINE_GUID(CLSID_CTocEntryList, 0x3A8CCCBC,0x0EFD,0x43a3,0xB8,0x38,0xF3,0x8A,0x55,0x2B,0xA2,0x37);
DEFINE_GUID(CLSID_CToc, 0x4FE24495,0x28CE,0x4920,0xA4,0xC4,0xE5,0x56,0xE1,0xF0,0xDF,0x2A);
DEFINE_GUID(CLSID_CTocCollection, 0x5058292D,0xA244,0x4840,0xAB,0x44,0x48,0x09,0x75,0xC4,0xFF,0xE4);
DEFINE_GUID(CLSID_CTocParser, 0x499EAEEA,0x2737,0x4849,0x8B,0xB6,0x47,0xF1,0x07,0xEA,0xF3,0x58);
DEFINE_GUID(CLSID_CAsfTocParser, 0x9B77C0F2,0x8735,0x46c5,0xB9,0x0F,0x5F,0x0B,0x30,0x3E,0xF6,0xAB);
DEFINE_GUID(CLSID_CAviTocParser, 0x3ADCE5CC,0x13C8,0x4573,0xB3,0x28,0xED,0x43,0x8E,0xB6,0x94,0xF9);
DEFINE_GUID(CLSID_CFileIo, 0x11993195,0x1244,0x4840,0xAB,0x44,0x48,0x09,0x75,0xC4,0xFF,0xE4);
DEFINE_GUID(CLSID_CFileClient, 0xBFCCD195,0x1244,0x4840,0xAB,0x44,0x48,0x09,0x75,0xC4,0xFF,0xE4);
DEFINE_GUID(CLSID_CClusterDetectorEx, 0x47354492,0x827E,0x4b8a,0xB3,0x18,0xC8,0x0E,0xBA,0x13,0x81,0xF0);
typedef unsigned __int64 QWORD;
typedef unsigned __int64 QWORD;
typedef struct _TOC_DESCRIPTOR
    {
    GUID guidID;
    WORD wStreamNumber;
    GUID guidType;
    WORD wLanguageIndex;
    } TOC_DESCRIPTOR;
typedef struct _TOC_ENTRY_DESCRIPTOR
    {
    QWORD qwStartTime;
    QWORD qwEndTime;
    QWORD qwStartPacketOffset;
    QWORD qwEndPacketOffset;
    QWORD qwRepresentativeFrameTime;
    } TOC_ENTRY_DESCRIPTOR;
enum TOC_POS_TYPE
    {
        TOC_POS_INHEADER = 0,
        TOC_POS_TOPLEVELOBJECT = ( TOC_POS_INHEADER + 1 )
    } ;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_ITocEntry;
    typedef struct ITocEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITocEntry * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITocEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITocEntry * This);
        HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            ITocEntry * This,
                       LPCWSTR pwszTitle);
        HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            ITocEntry * This,
                            WORD *pwTitleSize,
            _Out_writes_opt_(*pwTitleSize) LPWSTR pwszTitle);
        HRESULT ( STDMETHODCALLTYPE *SetDescriptor )(
            ITocEntry * This,
                       TOC_ENTRY_DESCRIPTOR *pDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptor )(
            ITocEntry * This,
                        TOC_ENTRY_DESCRIPTOR *pDescriptor);
        HRESULT ( STDMETHODCALLTYPE *SetSubEntries )(
            ITocEntry * This,
                       DWORD dwNumSubEntries,
                       WORD *pwSubEntryIndices);
        HRESULT ( STDMETHODCALLTYPE *GetSubEntries )(
            ITocEntry * This,
                            DWORD *pdwNumSubEntries,
                        WORD *pwSubEntryIndices);
        HRESULT ( STDMETHODCALLTYPE *SetDescriptionData )(
            ITocEntry * This,
                       DWORD dwDescriptionDataSize,
                       BYTE *pbtDescriptionData,
                       GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptionData )(
            ITocEntry * This,
                            DWORD *pdwDescriptionDataSize,
                        BYTE *pbtDescriptionData,
                        GUID *pGuidType);
        END_INTERFACE
    } ITocEntryVtbl;
    interface ITocEntry
    {
        CONST_VTBL struct ITocEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTitle(This,pwszTitle) )
    ( (This)->lpVtbl -> GetTitle(This,pwTitleSize,pwszTitle) )
    ( (This)->lpVtbl -> SetDescriptor(This,pDescriptor) )
    ( (This)->lpVtbl -> GetDescriptor(This,pDescriptor) )
    ( (This)->lpVtbl -> SetSubEntries(This,dwNumSubEntries,pwSubEntryIndices) )
    ( (This)->lpVtbl -> GetSubEntries(This,pdwNumSubEntries,pwSubEntryIndices) )
    ( (This)->lpVtbl -> SetDescriptionData(This,dwDescriptionDataSize,pbtDescriptionData,pguidType) )
    ( (This)->lpVtbl -> GetDescriptionData(This,pdwDescriptionDataSize,pbtDescriptionData,pGuidType) )
EXTERN_C const IID IID_ITocEntryList;
    typedef struct ITocEntryListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITocEntryList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITocEntryList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITocEntryList * This);
        HRESULT ( STDMETHODCALLTYPE *GetEntryCount )(
            ITocEntryList * This,
                        DWORD *pdwEntryCount);
        HRESULT ( STDMETHODCALLTYPE *GetEntryByIndex )(
            ITocEntryList * This,
                       DWORD dwEntryIndex,
                        ITocEntry **ppEntry);
        HRESULT ( STDMETHODCALLTYPE *AddEntry )(
            ITocEntryList * This,
                       ITocEntry *pEntry,
                        DWORD *pdwEntryIndex);
        HRESULT ( STDMETHODCALLTYPE *AddEntryByIndex )(
            ITocEntryList * This,
                       DWORD dwEntryIndex,
                       ITocEntry *pEntry);
        HRESULT ( STDMETHODCALLTYPE *RemoveEntryByIndex )(
            ITocEntryList * This,
                       DWORD dwEntryIndex);
        END_INTERFACE
    } ITocEntryListVtbl;
    interface ITocEntryList
    {
        CONST_VTBL struct ITocEntryListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEntryCount(This,pdwEntryCount) )
    ( (This)->lpVtbl -> GetEntryByIndex(This,dwEntryIndex,ppEntry) )
    ( (This)->lpVtbl -> AddEntry(This,pEntry,pdwEntryIndex) )
    ( (This)->lpVtbl -> AddEntryByIndex(This,dwEntryIndex,pEntry) )
    ( (This)->lpVtbl -> RemoveEntryByIndex(This,dwEntryIndex) )
EXTERN_C const IID IID_IToc;
    typedef struct ITocVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IToc * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IToc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IToc * This);
        HRESULT ( STDMETHODCALLTYPE *SetDescriptor )(
            IToc * This,
                       TOC_DESCRIPTOR *pDescriptor);
        HRESULT ( STDMETHODCALLTYPE *GetDescriptor )(
            IToc * This,
                        TOC_DESCRIPTOR *pDescriptor);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            IToc * This,
                       LPCWSTR pwszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IToc * This,
                            WORD *pwDescriptionSize,
            _Out_writes_opt_(*pwDescriptionSize) LPWSTR pwszDescription);
        HRESULT ( STDMETHODCALLTYPE *SetContext )(
            IToc * This,
                       DWORD dwContextSize,
                       BYTE *pbtContext);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            IToc * This,
                            DWORD *pdwContextSize,
                        BYTE *pbtContext);
        HRESULT ( STDMETHODCALLTYPE *GetEntryListCount )(
            IToc * This,
                        WORD *pwCount);
        HRESULT ( STDMETHODCALLTYPE *GetEntryListByIndex )(
            IToc * This,
                       WORD wEntryListIndex,
                        ITocEntryList **ppEntryList);
        HRESULT ( STDMETHODCALLTYPE *AddEntryList )(
            IToc * This,
                       ITocEntryList *pEntryList,
                        WORD *pwEntryListIndex);
        HRESULT ( STDMETHODCALLTYPE *AddEntryListByIndex )(
            IToc * This,
                       WORD wEntryListIndex,
                       ITocEntryList *pEntryList);
        HRESULT ( STDMETHODCALLTYPE *RemoveEntryListByIndex )(
            IToc * This,
                       WORD wEntryListIndex);
        END_INTERFACE
    } ITocVtbl;
    interface IToc
    {
        CONST_VTBL struct ITocVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDescriptor(This,pDescriptor) )
    ( (This)->lpVtbl -> GetDescriptor(This,pDescriptor) )
    ( (This)->lpVtbl -> SetDescription(This,pwszDescription) )
    ( (This)->lpVtbl -> GetDescription(This,pwDescriptionSize,pwszDescription) )
    ( (This)->lpVtbl -> SetContext(This,dwContextSize,pbtContext) )
    ( (This)->lpVtbl -> GetContext(This,pdwContextSize,pbtContext) )
    ( (This)->lpVtbl -> GetEntryListCount(This,pwCount) )
    ( (This)->lpVtbl -> GetEntryListByIndex(This,wEntryListIndex,ppEntryList) )
    ( (This)->lpVtbl -> AddEntryList(This,pEntryList,pwEntryListIndex) )
    ( (This)->lpVtbl -> AddEntryListByIndex(This,wEntryListIndex,pEntryList) )
    ( (This)->lpVtbl -> RemoveEntryListByIndex(This,wEntryListIndex) )
EXTERN_C const IID IID_ITocCollection;
    typedef struct ITocCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITocCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITocCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITocCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetEntryCount )(
            ITocCollection * This,
                        DWORD *pdwEntryCount);
        HRESULT ( STDMETHODCALLTYPE *GetEntryByIndex )(
            ITocCollection * This,
                       DWORD dwEntryIndex,
                        IToc **ppToc);
        HRESULT ( STDMETHODCALLTYPE *AddEntry )(
            ITocCollection * This,
                       IToc *pToc,
                        DWORD *pdwEntryIndex);
        HRESULT ( STDMETHODCALLTYPE *AddEntryByIndex )(
            ITocCollection * This,
                       DWORD dwEntryIndex,
                       IToc *pToc);
        HRESULT ( STDMETHODCALLTYPE *RemoveEntryByIndex )(
            ITocCollection * This,
                       DWORD dwEntryIndex);
        END_INTERFACE
    } ITocCollectionVtbl;
    interface ITocCollection
    {
        CONST_VTBL struct ITocCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEntryCount(This,pdwEntryCount) )
    ( (This)->lpVtbl -> GetEntryByIndex(This,dwEntryIndex,ppToc) )
    ( (This)->lpVtbl -> AddEntry(This,pToc,pdwEntryIndex) )
    ( (This)->lpVtbl -> AddEntryByIndex(This,dwEntryIndex,pToc) )
    ( (This)->lpVtbl -> RemoveEntryByIndex(This,dwEntryIndex) )
EXTERN_C const IID IID_ITocParser;
    typedef struct ITocParserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITocParser * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITocParser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITocParser * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            ITocParser * This,
                       LPCWSTR pwszFileName);
        HRESULT ( STDMETHODCALLTYPE *GetTocCount )(
            ITocParser * This,
                       enum TOC_POS_TYPE enumTocPosType,
                        DWORD *pdwTocCount);
        HRESULT ( STDMETHODCALLTYPE *GetTocByIndex )(
            ITocParser * This,
                       enum TOC_POS_TYPE enumTocPosType,
                       DWORD dwTocIndex,
                        IToc **ppToc);
        HRESULT ( STDMETHODCALLTYPE *GetTocByType )(
            ITocParser * This,
                       enum TOC_POS_TYPE enumTocPosType,
                       GUID guidTocType,
                        ITocCollection **ppTocs);
        HRESULT ( STDMETHODCALLTYPE *AddToc )(
            ITocParser * This,
                       enum TOC_POS_TYPE enumTocPosType,
                       IToc *pToc,
                        DWORD *pdwTocIndex);
        HRESULT ( STDMETHODCALLTYPE *RemoveTocByIndex )(
            ITocParser * This,
                       enum TOC_POS_TYPE enumTocPosType,
                       DWORD dwTocIndex);
        HRESULT ( STDMETHODCALLTYPE *RemoveTocByType )(
            ITocParser * This,
                       enum TOC_POS_TYPE enumTocPosType,
                       GUID guidTocType);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ITocParser * This);
        END_INTERFACE
    } ITocParserVtbl;
    interface ITocParser
    {
        CONST_VTBL struct ITocParserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pwszFileName) )
    ( (This)->lpVtbl -> GetTocCount(This,enumTocPosType,pdwTocCount) )
    ( (This)->lpVtbl -> GetTocByIndex(This,enumTocPosType,dwTocIndex,ppToc) )
    ( (This)->lpVtbl -> GetTocByType(This,enumTocPosType,guidTocType,ppTocs) )
    ( (This)->lpVtbl -> AddToc(This,enumTocPosType,pToc,pdwTocIndex) )
    ( (This)->lpVtbl -> RemoveTocByIndex(This,enumTocPosType,dwTocIndex) )
    ( (This)->lpVtbl -> RemoveTocByType(This,enumTocPosType,guidTocType) )
    ( (This)->lpVtbl -> Commit(This) )
enum FILE_OPENMODE
    {
        OPENMODE_FAIL_IF_NOT_EXIST = 0,
        OPENMODE_FAIL_IF_EXIST = 1,
        OPENMODE_RESET_IF_EXIST = 2,
        OPENMODE_APPEND_IF_EXIST = 3,
        OPENMODE_DELETE_IF_EXIST = 4
    } ;
enum SEEK_ORIGIN
    {
        _msoBegin = 0,
        _msoCurrent = 1
    } ;
enum FILE_ACCESSMODE
    {
        ACCESSMODE_READ = 1,
        ACCESSMODE_WRITE = 2,
        ACCESSMODE_READWRITE = 3,
        ACCESSMODE_WRITE_EXCLUSIVE = 4
    } ;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IFileIo;
    typedef struct IFileIoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFileIo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFileIo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFileIo * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IFileIo * This,
                       enum FILE_ACCESSMODE eAccessMode,
                       enum FILE_OPENMODE eOpenMode,
                       LPCWSTR pwszFileName);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            IFileIo * This,
                        QWORD *pqwLength);
        HRESULT ( STDMETHODCALLTYPE *SetLength )(
            IFileIo * This,
                       QWORD qwLength);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPosition )(
            IFileIo * This,
                        QWORD *pqwPosition);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentPosition )(
            IFileIo * This,
                       QWORD qwPosition);
        HRESULT ( STDMETHODCALLTYPE *IsEndOfStream )(
            IFileIo * This,
                        BOOL *pbEndOfStream);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IFileIo * This,
                       BYTE *pbt,
                       ULONG ul,
                        ULONG *pulRead);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            IFileIo * This,
                       BYTE *pbt,
                       ULONG ul,
                        ULONG *pulWritten);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            IFileIo * This,
                       enum SEEK_ORIGIN eSeekOrigin,
                       QWORD qwSeekOffset,
                       DWORD dwSeekFlags,
                        QWORD *pqwCurrentPosition);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IFileIo * This);
        END_INTERFACE
    } IFileIoVtbl;
    interface IFileIo
    {
        CONST_VTBL struct IFileIoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,eAccessMode,eOpenMode,pwszFileName) )
    ( (This)->lpVtbl -> GetLength(This,pqwLength) )
    ( (This)->lpVtbl -> SetLength(This,qwLength) )
    ( (This)->lpVtbl -> GetCurrentPosition(This,pqwPosition) )
    ( (This)->lpVtbl -> SetCurrentPosition(This,qwPosition) )
    ( (This)->lpVtbl -> IsEndOfStream(This,pbEndOfStream) )
    ( (This)->lpVtbl -> Read(This,pbt,ul,pulRead) )
    ( (This)->lpVtbl -> Write(This,pbt,ul,pulWritten) )
    ( (This)->lpVtbl -> Seek(This,eSeekOrigin,qwSeekOffset,dwSeekFlags,pqwCurrentPosition) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IFileClient;
    typedef struct IFileClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFileClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFileClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFileClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetObjectDiskSize )(
            IFileClient * This,
                        QWORD *pqwSize);
        HRESULT ( STDMETHODCALLTYPE *Write )(
            IFileClient * This,
                       IFileIo *pFio);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IFileClient * This,
                       IFileIo *pFio);
        END_INTERFACE
    } IFileClientVtbl;
    interface IFileClient
    {
        CONST_VTBL struct IFileClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetObjectDiskSize(This,pqwSize) )
    ( (This)->lpVtbl -> Write(This,pFio) )
    ( (This)->lpVtbl -> Read(This,pFio) )
EXTERN_C const IID IID_IClusterDetector;
    typedef struct IClusterDetectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IClusterDetector * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IClusterDetector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IClusterDetector * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IClusterDetector * This,
                       WORD wBaseEntryLevel,
                       WORD wClusterEntryLevel);
        HRESULT ( STDMETHODCALLTYPE *Detect )(
            IClusterDetector * This,
                       DWORD dwMaxNumClusters,
                       FLOAT fMinClusterDuration,
                       FLOAT fMaxClusterDuration,
                       IToc *pSrcToc,
                        IToc **ppDstToc);
        END_INTERFACE
    } IClusterDetectorVtbl;
    interface IClusterDetector
    {
        CONST_VTBL struct IClusterDetectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,wBaseEntryLevel,wClusterEntryLevel) )
    ( (This)->lpVtbl -> Detect(This,dwMaxNumClusters,fMinClusterDuration,fMaxClusterDuration,pSrcToc,ppDstToc) )
STDAPI CreateToc(
                     IToc **ppTableOfContents);
STDAPI CreateTocEntryList(
                     ITocEntryList **ppTocEntryList);
STDAPI CreateTocEntry(
                     ITocEntry **ppTocEntry);
STDAPI CreateTocCollection(
                     ITocCollection **ppTocCollection);
STDAPI CreateTocParser(
                     ITocParser **ppTocParser);
STDAPI CreateFileIo(
                     IFileIo **ppFileIo);
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID LIBID_WMCodecDSPCLSIDTypeLib;
EXTERN_C const CLSID CLSID_CMpeg4DecMediaObject;
class DECLSPEC_UUID("f371728a-6052-4d47-827c-d039335dfe0a")
CMpeg4DecMediaObject;
EXTERN_C const CLSID CLSID_CMpeg43DecMediaObject;
class DECLSPEC_UUID("cba9e78b-49a3-49ea-93d4-6bcba8c4de07")
CMpeg43DecMediaObject;
EXTERN_C const CLSID CLSID_CMpeg4sDecMediaObject;
class DECLSPEC_UUID("2a11bae2-fe6e-4249-864b-9e9ed6e8dbc2")
CMpeg4sDecMediaObject;
EXTERN_C const CLSID CLSID_CMpeg4sDecMFT;
class DECLSPEC_UUID("5686a0d9-fe39-409f-9dff-3fdbc849f9f5")
CMpeg4sDecMFT;
EXTERN_C const CLSID CLSID_CZuneM4S2DecMediaObject;
class DECLSPEC_UUID("C56FC25C-0FC6-404a-9503-B10BF51A8AB9")
CZuneM4S2DecMediaObject;
EXTERN_C const CLSID CLSID_CMpeg4EncMediaObject;
class DECLSPEC_UUID("24f258d8-c651-4042-93e4-ca654abb682c")
CMpeg4EncMediaObject;
EXTERN_C const CLSID CLSID_CMpeg4sEncMediaObject;
class DECLSPEC_UUID("6ec5a7be-d81e-4f9e-ada3-cd1bf262b6d8")
CMpeg4sEncMediaObject;
EXTERN_C const CLSID CLSID_CMSSCDecMediaObject;
class DECLSPEC_UUID("7bafb3b1-d8f4-4279-9253-27da423108de")
CMSSCDecMediaObject;
EXTERN_C const CLSID CLSID_CMSSCEncMediaObject;
class DECLSPEC_UUID("8cb9cc06-d139-4ae6-8bb4-41e612e141d5")
CMSSCEncMediaObject;
EXTERN_C const CLSID CLSID_CMSSCEncMediaObject2;
class DECLSPEC_UUID("f7ffe0a0-a4f5-44b5-949e-15ed2bc66f9d")
CMSSCEncMediaObject2;
EXTERN_C const CLSID CLSID_CWMADecMediaObject;
class DECLSPEC_UUID("2eeb4adf-4578-4d10-bca7-bb955f56320a")
CWMADecMediaObject;
EXTERN_C const CLSID CLSID_CWMAEncMediaObject;
class DECLSPEC_UUID("70f598e9-f4ab-495a-99e2-a7c4d3d89abf")
CWMAEncMediaObject;
EXTERN_C const CLSID CLSID_CWMATransMediaObject;
class DECLSPEC_UUID("edcad9cb-3127-40df-b527-0152ccb3f6f5")
CWMATransMediaObject;
EXTERN_C const CLSID CLSID_CWMSPDecMediaObject;
class DECLSPEC_UUID("874131cb-4ecc-443b-8948-746b89595d20")
CWMSPDecMediaObject;
EXTERN_C const CLSID CLSID_CWMSPEncMediaObject;
class DECLSPEC_UUID("67841b03-c689-4188-ad3f-4c9ebeec710b")
CWMSPEncMediaObject;
EXTERN_C const CLSID CLSID_CWMSPEncMediaObject2;
class DECLSPEC_UUID("1f1f4e1a-2252-4063-84bb-eee75f8856d5")
CWMSPEncMediaObject2;
EXTERN_C const CLSID CLSID_CWMTDecMediaObject;
class DECLSPEC_UUID("F9DBC64E-2DD0-45dd-9B52-66642EF94431")
CWMTDecMediaObject;
EXTERN_C const CLSID CLSID_CWMTEncMediaObject;
class DECLSPEC_UUID("60B67652-E46B-4e44-8609-F74BFFDC083C")
CWMTEncMediaObject;
EXTERN_C const CLSID CLSID_CWMVDecMediaObject;
class DECLSPEC_UUID("82d353df-90bd-4382-8bc2-3f6192b76e34")
CWMVDecMediaObject;
EXTERN_C const CLSID CLSID_CWMVEncMediaObject2;
class DECLSPEC_UUID("96b57cdd-8966-410c-bb1f-c97eea765c04")
CWMVEncMediaObject2;
EXTERN_C const CLSID CLSID_CWMVXEncMediaObject;
class DECLSPEC_UUID("7e320092-596a-41b2-bbeb-175d10504eb6")
CWMVXEncMediaObject;
EXTERN_C const CLSID CLSID_CWMV9EncMediaObject;
class DECLSPEC_UUID("d23b90d0-144f-46bd-841d-59e4eb19dc59")
CWMV9EncMediaObject;
EXTERN_C const CLSID CLSID_CWVC1DecMediaObject;
class DECLSPEC_UUID("c9bfbccf-e60e-4588-a3df-5a03b1fd9585")
CWVC1DecMediaObject;
EXTERN_C const CLSID CLSID_CWVC1EncMediaObject;
class DECLSPEC_UUID("44653D0D-8CCA-41e7-BACA-884337B747AC")
CWVC1EncMediaObject;
EXTERN_C const CLSID CLSID_CDeColorConvMediaObject;
class DECLSPEC_UUID("49034c05-f43c-400f-84c1-90a683195a3a")
CDeColorConvMediaObject;
EXTERN_C const CLSID CLSID_CDVDecoderMediaObject;
class DECLSPEC_UUID("e54709c5-1e17-4c8d-94e7-478940433584")
CDVDecoderMediaObject;
EXTERN_C const CLSID CLSID_CDVEncoderMediaObject;
class DECLSPEC_UUID("c82ae729-c327-4cce-914d-8171fefebefb")
CDVEncoderMediaObject;
EXTERN_C const CLSID CLSID_CMpeg2DecMediaObject;
class DECLSPEC_UUID("863d66cd-cdce-4617-b47f-c8929cfc28a6")
CMpeg2DecMediaObject;
EXTERN_C const CLSID CLSID_CPK_DS_MPEG2Decoder;
class DECLSPEC_UUID("9910c5cd-95c9-4e06-865a-efa1c8016bf4")
CPK_DS_MPEG2Decoder;
EXTERN_C const CLSID CLSID_CAC3DecMediaObject;
class DECLSPEC_UUID("03d7c802-ecfa-47d9-b268-5fb3e310dee4")
CAC3DecMediaObject;
EXTERN_C const CLSID CLSID_CPK_DS_AC3Decoder;
class DECLSPEC_UUID("6c9c69d6-0ffc-4481-afdb-cdf1c79c6f3e")
CPK_DS_AC3Decoder;
EXTERN_C const CLSID CLSID_CMP3DecMediaObject;
class DECLSPEC_UUID("bbeea841-0a63-4f52-a7ab-a9b3a84ed38a")
CMP3DecMediaObject;
EXTERN_C const CLSID CLSID_CResamplerMediaObject;
class DECLSPEC_UUID("f447b69e-1884-4a7e-8055-346f74d6edb3")
CResamplerMediaObject;
EXTERN_C const CLSID CLSID_CResizerMediaObject;
class DECLSPEC_UUID("d3ec8b8b-7728-4fd8-9fe0-7b67d19f73a3")
CResizerMediaObject;
EXTERN_C const CLSID CLSID_CInterlaceMediaObject;
class DECLSPEC_UUID("b5a89c80-4901-407b-9abc-90d9a644bb46")
CInterlaceMediaObject;
EXTERN_C const CLSID CLSID_CWMAudioLFXAPO;
class DECLSPEC_UUID("62dc1a93-ae24-464c-a43e-452f824c4250")
CWMAudioLFXAPO;
EXTERN_C const CLSID CLSID_CWMAudioGFXAPO;
class DECLSPEC_UUID("637c490d-eee3-4c0a-973f-371958802da2")
CWMAudioGFXAPO;
EXTERN_C const CLSID CLSID_CWMAudioSpdTxDMO;
class DECLSPEC_UUID("5210f8e4-b0bb-47c3-a8d9-7b2282cc79ed")
CWMAudioSpdTxDMO;
EXTERN_C const CLSID CLSID_CWMAudioAEC;
class DECLSPEC_UUID("745057c7-f353-4f2d-a7ee-58434477730e")
CWMAudioAEC;
EXTERN_C const CLSID CLSID_CClusterDetectorDmo;
class DECLSPEC_UUID("36e820c4-165a-4521-863c-619e1160d4d4")
CClusterDetectorDmo;
EXTERN_C const CLSID CLSID_CColorControlDmo;
class DECLSPEC_UUID("798059f0-89ca-4160-b325-aeb48efe4f9a")
CColorControlDmo;
EXTERN_C const CLSID CLSID_CColorConvertDMO;
class DECLSPEC_UUID("98230571-0087-4204-b020-3282538e57d3")
CColorConvertDMO;
EXTERN_C const CLSID CLSID_CColorLegalizerDmo;
class DECLSPEC_UUID("fdfaa753-e48e-4e33-9c74-98a27fc6726a")
CColorLegalizerDmo;
EXTERN_C const CLSID CLSID_CFrameInterpDMO;
class DECLSPEC_UUID("0a7cfe1b-6ab5-4334-9ed8-3f97cb37daa1")
CFrameInterpDMO;
EXTERN_C const CLSID CLSID_CFrameRateConvertDmo;
class DECLSPEC_UUID("01f36ce2-0907-4d8b-979d-f151be91c883")
CFrameRateConvertDmo;
EXTERN_C const CLSID CLSID_CResizerDMO;
class DECLSPEC_UUID("1ea1ea14-48f4-4054-ad1a-e8aee10ac805")
CResizerDMO;
EXTERN_C const CLSID CLSID_CShotDetectorDmo;
class DECLSPEC_UUID("56aefacd-110c-4397-9292-b0a0c61b6750")
CShotDetectorDmo;
EXTERN_C const CLSID CLSID_CSmpteTransformsDmo;
class DECLSPEC_UUID("bde6388b-da25-485d-ba7f-fabc28b20318")
CSmpteTransformsDmo;
EXTERN_C const CLSID CLSID_CThumbnailGeneratorDmo;
class DECLSPEC_UUID("559c6bad-1ea8-4963-a087-8a6810f9218b")
CThumbnailGeneratorDmo;
EXTERN_C const CLSID CLSID_CTocGeneratorDmo;
class DECLSPEC_UUID("4dda1941-77a0-4fb1-a518-e2185041d70c")
CTocGeneratorDmo;
EXTERN_C const CLSID CLSID_CMPEGAACDecMediaObject;
class DECLSPEC_UUID("8DDE1772-EDAD-41c3-B4BE-1F30FB4EE0D6")
CMPEGAACDecMediaObject;
EXTERN_C const CLSID CLSID_CNokiaAACDecMediaObject;
class DECLSPEC_UUID("3CB2BDE4-4E29-4c44-A73E-2D7C2C46D6EC")
CNokiaAACDecMediaObject;
EXTERN_C const CLSID CLSID_CVodafoneAACDecMediaObject;
class DECLSPEC_UUID("7F36F942-DCF3-4d82-9289-5B1820278F7C")
CVodafoneAACDecMediaObject;
EXTERN_C const CLSID CLSID_CZuneAACCCDecMediaObject;
class DECLSPEC_UUID("A74E98F2-52D6-4b4e-885B-E0A6CA4F187A")
CZuneAACCCDecMediaObject;
EXTERN_C const CLSID CLSID_CNokiaAACCCDecMediaObject;
class DECLSPEC_UUID("EABF7A6F-CCBA-4d60-8620-B152CC977263")
CNokiaAACCCDecMediaObject;
EXTERN_C const CLSID CLSID_CVodafoneAACCCDecMediaObject;
class DECLSPEC_UUID("7E76BF7F-C993-4e26-8FAB-470A70C0D59C")
CVodafoneAACCCDecMediaObject;
EXTERN_C const CLSID CLSID_CMPEG2EncoderDS;
class DECLSPEC_UUID("5F5AFF4A-2F7F-4279-88C2-CD88EB39D144")
CMPEG2EncoderDS;
EXTERN_C const CLSID CLSID_CMPEG2EncoderVideoDS;
class DECLSPEC_UUID("42150cd9-ca9a-4ea5-9939-30ee037f6e74")
CMPEG2EncoderVideoDS;
EXTERN_C const CLSID CLSID_CMPEG2EncoderAudioDS;
class DECLSPEC_UUID("acd453bc-c58a-44d1-bbf5-bfb325be2d78")
CMPEG2EncoderAudioDS;
EXTERN_C const CLSID CLSID_CMPEG2AudDecoderDS;
class DECLSPEC_UUID("E1F1A0B8-BEEE-490d-BA7C-066C40B5E2B9")
CMPEG2AudDecoderDS;
EXTERN_C const CLSID CLSID_CMPEG2VidDecoderDS;
class DECLSPEC_UUID("212690FB-83E5-4526-8FD7-74478B7939CD")
CMPEG2VidDecoderDS;
EXTERN_C const CLSID CLSID_CDTVAudDecoderDS;
class DECLSPEC_UUID("8E269032-FE03-4753-9B17-18253C21722E")
CDTVAudDecoderDS;
EXTERN_C const CLSID CLSID_CDTVVidDecoderDS;
class DECLSPEC_UUID("64777DC8-4E24-4beb-9D19-60A35BE1DAAF")
CDTVVidDecoderDS;
EXTERN_C const CLSID CLSID_CMSAC3Enc;
class DECLSPEC_UUID("C6B400E2-20A7-4e58-A2FE-24619682CE6C")
CMSAC3Enc;
EXTERN_C const CLSID CLSID_CMSH264DecoderMFT;
class DECLSPEC_UUID("62CE7E72-4C71-4d20-B15D-452831A87D9D")
CMSH264DecoderMFT;
EXTERN_C const CLSID CLSID_CMSH263EncoderMFT;
class DECLSPEC_UUID("bc47fcfe-98a0-4f27-bb07-698af24f2b38")
CMSH263EncoderMFT;
EXTERN_C const CLSID CLSID_CMSH264EncoderMFT;
class DECLSPEC_UUID("6ca50344-051a-4ded-9779-a43305165e35")
CMSH264EncoderMFT;
EXTERN_C const CLSID CLSID_CMSH265EncoderMFT;
class DECLSPEC_UUID("f2f84074-8bca-40bd-9159-e880f673dd3b")
CMSH265EncoderMFT;
EXTERN_C const CLSID CLSID_CMSVPXEncoderMFT;
class DECLSPEC_UUID("aeb6c755-2546-4881-82cc-e15ae5ebff3d")
CMSVPXEncoderMFT;
EXTERN_C const CLSID CLSID_CMSH264RemuxMFT;
class DECLSPEC_UUID("05A47EBB-8BF0-4CBF-AD2F-3B71D75866F5")
CMSH264RemuxMFT;
EXTERN_C const CLSID CLSID_CMSAACDecMFT;
class DECLSPEC_UUID("32d186a7-218f-4c75-8876-dd77273a8999")
CMSAACDecMFT;
EXTERN_C const CLSID CLSID_AACMFTEncoder;
class DECLSPEC_UUID("93AF0C51-2275-45d2-A35B-F2BA21CAED00")
AACMFTEncoder;
EXTERN_C const CLSID CLSID_CMSDDPlusDecMFT;
class DECLSPEC_UUID("177C0AFE-900B-48d4-9E4C-57ADD250B3D4")
CMSDDPlusDecMFT;
EXTERN_C const CLSID CLSID_CMPEG2VideoEncoderMFT;
class DECLSPEC_UUID("E6335F02-80B7-4dc4-ADFA-DFE7210D20D5")
CMPEG2VideoEncoderMFT;
EXTERN_C const CLSID CLSID_CMPEG2AudioEncoderMFT;
class DECLSPEC_UUID("46A4DD5C-73F8-4304-94DF-308F760974F4")
CMPEG2AudioEncoderMFT;
EXTERN_C const CLSID CLSID_CMSMPEGDecoderMFT;
class DECLSPEC_UUID("2D709E52-123F-49b5-9CBC-9AF5CDE28FB9")
CMSMPEGDecoderMFT;
EXTERN_C const CLSID CLSID_CMSMPEGAudDecMFT;
class DECLSPEC_UUID("70707B39-B2CA-4015-ABEA-F8447D22D88B")
CMSMPEGAudDecMFT;
EXTERN_C const CLSID CLSID_CMSDolbyDigitalEncMFT;
class DECLSPEC_UUID("AC3315C9-F481-45D7-826C-0B406C1F64B8")
CMSDolbyDigitalEncMFT;
EXTERN_C const CLSID CLSID_MP3ACMCodecWrapper;
class DECLSPEC_UUID("11103421-354c-4cca-a7a3-1aff9a5b6701")
MP3ACMCodecWrapper;
EXTERN_C const CLSID CLSID_ALawCodecWrapper;
class DECLSPEC_UUID("36CB6E0C-78C1-42B2-9943-846262F31786")
ALawCodecWrapper;
EXTERN_C const CLSID CLSID_MULawCodecWrapper;
class DECLSPEC_UUID("92b66080-5e2d-449e-90c4-c41f268e5514")
MULawCodecWrapper;
EXTERN_C const CLSID CLSID_CMSVideoDSPMFT;
class DECLSPEC_UUID("51571744-7FE4-4ff2-A498-2DC34FF74F1B")
CMSVideoDSPMFT;
EXTERN_C const CLSID CLSID_VorbisDecoderMFT;
class DECLSPEC_UUID("1A198EF2-60E5-4EA8-90D8-DA1F2832C288")
VorbisDecoderMFT;
EXTERN_C const CLSID CLSID_CMSFLACDecMFT;
class DECLSPEC_UUID("6B0B3E6B-A2C5-4514-8055-AFE8A95242D9")
CMSFLACDecMFT;
EXTERN_C const CLSID CLSID_CMSFLACEncMFT;
class DECLSPEC_UUID("128509e9-c44e-45dc-95e9-c255b8f466a6")
CMSFLACEncMFT;
EXTERN_C const CLSID CLSID_MFFLACBytestreamHandler;
class DECLSPEC_UUID("0E41CFB8-0506-40F4-A516-77CC23642D91")
MFFLACBytestreamHandler;
EXTERN_C const CLSID CLSID_MFFLACSinkClassFactory;
class DECLSPEC_UUID("7d39c56f-6075-47c9-9bae-8cf9e531b5f5")
MFFLACSinkClassFactory;
EXTERN_C const CLSID CLSID_CMSALACDecMFT;
class DECLSPEC_UUID("C0CD7D12-31FC-4BBC-B363-7322EE3E1879")
CMSALACDecMFT;
EXTERN_C const CLSID CLSID_CMSALACEncMFT;
class DECLSPEC_UUID("9AB6A28C-748E-4B6A-BFFF-CC443B8E8FB4")
CMSALACEncMFT;
EXTERN_C const CLSID CLSID_CMSOpusDecMFT;
class DECLSPEC_UUID("63e17c10-2d43-4c42-8fe3-8d8b63e46a6a")
CMSOpusDecMFT;
EXTERN_C const CLSID CLSID_MSAMRNBDecoder;
class DECLSPEC_UUID("265011AE-5481-4f77-A295-ABB6FFE8D63E")
MSAMRNBDecoder;
EXTERN_C const CLSID CLSID_MSAMRNBEncoder;
class DECLSPEC_UUID("2FAE8AFE-04A3-423a-A814-85DB454712B0")
MSAMRNBEncoder;
EXTERN_C const CLSID CLSID_MFAMRNBByteStreamHandler;
class DECLSPEC_UUID("EFE6208A-0A2C-49FA-8A01-3768B559B6DA")
MFAMRNBByteStreamHandler;
EXTERN_C const CLSID CLSID_MFAMRNBSinkClassFactory;
class DECLSPEC_UUID("B0271158-70D2-4C5B-9F94-76F549D90FDF")
MFAMRNBSinkClassFactory;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmcodecdsp_0000_0026_v0_0_s_ifspec;
}
