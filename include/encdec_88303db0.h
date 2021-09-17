#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IETFilterConfig IETFilterConfig;
typedef interface IDTFilterConfig IDTFilterConfig;
typedef interface IXDSCodecConfig IXDSCodecConfig;
typedef interface IDTFilterLicenseRenewal IDTFilterLicenseRenewal;
typedef interface IPTFilterLicenseRenewal IPTFilterLicenseRenewal;
typedef interface IMceBurnerControl IMceBurnerControl;
typedef interface IETFilter IETFilter;
typedef interface IETFilterEvents IETFilterEvents;
typedef class ETFilter ETFilter;
typedef interface IDTFilter IDTFilter;
typedef interface IDTFilter2 IDTFilter2;
typedef interface IDTFilter3 IDTFilter3;
typedef interface IDTFilterEvents IDTFilterEvents;
typedef class DTFilter DTFilter;
typedef interface IXDSCodec IXDSCodec;
typedef interface IXDSCodecEvents IXDSCodecEvents;
typedef class XDSCodec XDSCodec;
typedef class CXDSData CXDSData;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma region Desktop Family
#pragma endregion
typedef
enum EnTvRat_System
    {
        MPAA = 0,
        US_TV = 1,
        Canadian_English = 2,
        Canadian_French = 3,
        Reserved4 = 4,
        System5 = 5,
        System6 = 6,
        Reserved7 = 7,
        PBDA = 8,
        AgeBased = 9,
        TvRat_kSystems = 10,
        TvRat_SystemDontKnow = 255
    } EnTvRat_System;
typedef
enum EnTvRat_GenericLevel
    {
        TvRat_0 = 0,
        TvRat_1 = 1,
        TvRat_2 = 2,
        TvRat_3 = 3,
        TvRat_4 = 4,
        TvRat_5 = 5,
        TvRat_6 = 6,
        TvRat_7 = 7,
        TvRat_8 = 8,
        TvRat_9 = 9,
        TvRat_10 = 10,
        TvRat_11 = 11,
        TvRat_12 = 12,
        TvRat_13 = 13,
        TvRat_14 = 14,
        TvRat_15 = 15,
        TvRat_16 = 16,
        TvRat_17 = 17,
        TvRat_18 = 18,
        TvRat_19 = 19,
        TvRat_20 = 20,
        TvRat_21 = 21,
        TvRat_kLevels = 22,
        TvRat_Unblock = -1,
        TvRat_LevelDontKnow = 255
    } EnTvRat_GenericLevel;
typedef
enum EnTvRat_MPAA
    {
        MPAA_NotApplicable = TvRat_0,
        MPAA_G = TvRat_1,
        MPAA_PG = TvRat_2,
        MPAA_PG13 = TvRat_3,
        MPAA_R = TvRat_4,
        MPAA_NC17 = TvRat_5,
        MPAA_X = TvRat_6,
        MPAA_NotRated = TvRat_7
    } EnTvRat_MPAA;
typedef
enum EnTvRat_US_TV
    {
        US_TV_None = TvRat_0,
        US_TV_Y = TvRat_1,
        US_TV_Y7 = TvRat_2,
        US_TV_G = TvRat_3,
        US_TV_PG = TvRat_4,
        US_TV_14 = TvRat_5,
        US_TV_MA = TvRat_6,
        US_TV_None7 = TvRat_7
    } EnTvRat_US_TV;
typedef
enum EnTvRat_CAE_TV
    {
        CAE_TV_Exempt = TvRat_0,
        CAE_TV_C = TvRat_1,
        CAE_TV_C8 = TvRat_2,
        CAE_TV_G = TvRat_3,
        CAE_TV_PG = TvRat_4,
        CAE_TV_14 = TvRat_5,
        CAE_TV_18 = TvRat_6,
        CAE_TV_Reserved = TvRat_7
    } EnTvRat_CAE_TV;
typedef
enum EnTvRat_CAF_TV
    {
        CAF_TV_Exempt = TvRat_0,
        CAF_TV_G = TvRat_1,
        CAF_TV_8 = TvRat_2,
        CAF_TV_13 = TvRat_3,
        CAF_TV_16 = TvRat_4,
        CAF_TV_18 = TvRat_5,
        CAF_TV_Reserved6 = TvRat_6,
        CAF_TV_Reserved = TvRat_7
    } EnTvRat_CAF_TV;
typedef
enum BfEnTvRat_GenericAttributes
    {
        BfAttrNone = 0,
        BfIsBlocked = 1,
        BfIsAttr_1 = 2,
        BfIsAttr_2 = 4,
        BfIsAttr_3 = 8,
        BfIsAttr_4 = 16,
        BfIsAttr_5 = 32,
        BfIsAttr_6 = 64,
        BfIsAttr_7 = 128,
        BfValidAttrSubmask = 255
    } BfEnTvRat_GenericAttributes;
typedef
enum BfEnTvRat_Attributes_US_TV
    {
        US_TV_IsBlocked = BfIsBlocked,
        US_TV_IsViolent = BfIsAttr_1,
        US_TV_IsSexualSituation = BfIsAttr_2,
        US_TV_IsAdultLanguage = BfIsAttr_3,
        US_TV_IsSexuallySuggestiveDialog = BfIsAttr_4,
        US_TV_ValidAttrSubmask = 31
    } BfEnTvRat_Attributes_US_TV;
typedef
enum BfEnTvRat_Attributes_MPAA
    {
        MPAA_IsBlocked = BfIsBlocked,
        MPAA_ValidAttrSubmask = 1
    } BfEnTvRat_Attributes_MPAA;
typedef
enum BfEnTvRat_Attributes_CAE_TV
    {
        CAE_IsBlocked = BfIsBlocked,
        CAE_ValidAttrSubmask = 1
    } BfEnTvRat_Attributes_CAE_TV;
typedef
enum BfEnTvRat_Attributes_CAF_TV
    {
        CAF_IsBlocked = BfIsBlocked,
        CAF_ValidAttrSubmask = 1
    } BfEnTvRat_Attributes_CAF_TV;
#pragma region Desktop Family
#pragma endregion
#pragma endregion
DEFINE_GUID(SID_DRMSecureServiceChannel,
0xC4C4C4C4, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_ETFilterEncProperties,
0xC4C4C481, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_ETFilterTagProperties,
0xC4C4C491, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_PTFilter,
0x9cd31617, 0xb303, 0x4f96, 0x83, 0x30, 0x2e, 0xb1, 0x73, 0xea, 0x4d, 0xc6);
DEFINE_GUID(CLSID_DTFilterEncProperties,
0xC4C4C482, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_DTFilterTagProperties,
0xC4C4C492, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_XDSCodecProperties,
0xC4C4C483, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_XDSCodecTagProperties,
0xC4C4C493, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(CLSID_CPCAFiltersCategory,
0xC4C4C4FC, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_XDSCodecNewXDSRating,
0xC4C4C4E0, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_XDSCodecDuplicateXDSRating,
0xC4C4C4DF, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_XDSCodecNewXDSPacket,
0xC4C4C4E1, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterRatingChange,
0xC4C4C4E2, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterRatingsBlock,
0xC4C4C4E3, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterRatingsUnblock,
0xC4C4C4E4, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterXDSPacket,
0xC4C4C4E5, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterEncryptionOn,
0xC4C4C4E6, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterEncryptionOff,
0xC4C4C4E7, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterCOPPUnblock,
0xC4C4C4E8, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_EncDecFilterError,
0xC4C4C4E9, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterCOPPBlock ,
0xC4C4C4EA, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterCopyOnce,
0xC4C4C4EB, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETFilterCopyNever,
0xC4C4C4F0, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterDataFormatOK,
0xC4C4C4EC, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_DTFilterDataFormatFailure,
0xC4C4C4ED, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETDTFilterLicenseOK,
0xC4C4C4EE, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(EVENTID_ETDTFilterLicenseFailure,
0xC4C4C4EF, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(MEDIASUBTYPE_ETDTFilter_Tagged,
0xC4C4C4D0, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID(FORMATTYPE_ETDTFilter_Tagged,
0xC4C4C4D1, 0x0049, 0x4E2B, 0x98, 0xFB, 0x95, 0x37, 0xF6, 0xCE, 0x51, 0x6D);
DEFINE_GUID( MEDIASUBTYPE_CPFilters_Processed, 0x46adbd28, 0x6fd0, 0x4796, 0x93, 0xb2, 0x15, 0x5c, 0x51, 0xdc, 0x4, 0x8d );
DEFINE_GUID( FORMATTYPE_CPFilters_Processed, 0x6739b36f, 0x1d5f, 0x4ac2, 0x81, 0x92, 0x28, 0xbb, 0xe, 0x73, 0xd1, 0x6a );
DEFINE_GUID(EVENTID_EncDecFilterEvent,
0x4a1b465b, 0xfb9, 0x4159, 0xaf, 0xbd, 0xe3, 0x30, 0x6, 0xa0, 0xf9, 0xf4);
enum FormatNotSupportedEvents
    {
        FORMATNOTSUPPORTED_CLEAR = 0,
        FORMATNOTSUPPORTED_NOTSUPPORTED = 1
    } ;
DEFINE_GUID(EVENTID_FormatNotSupportedEvent,
0x24b2280a, 0xb2aa, 0x4777, 0xbf, 0x65, 0x63, 0xf3, 0x5e, 0x7b, 0x2, 0x4a);
DEFINE_GUID(EVENTID_DemultiplexerFilterDiscontinuity,
0x16155770, 0xaed5, 0x475c, 0xbb, 0x98, 0x95, 0xa3, 0x30, 0x70, 0xdf, 0xc);
DEFINE_GUID( DSATTRIB_WMDRMProtectionInfo, 0x40749583, 0x6b9d, 0x4eec, 0xb4, 0x3c, 0x67, 0xa1, 0x80, 0x1e, 0x1a, 0x9b );
DEFINE_GUID( DSATTRIB_BadSampleInfo, 0xe4846dda, 0x5838, 0x42b4, 0xb8, 0x97, 0x6f, 0x7e, 0x5f, 0xaa, 0x2f, 0x2f );
#pragma pack(push, 1)
typedef struct __MIDL___MIDL_itf_encdec_0000_0000_0001
    {
    unsigned short wszKID[ 25 ];
    unsigned __int64 qwCounter;
    unsigned __int64 qwIndex;
    unsigned char bOffset;
    } WMDRMProtectionInfo;
typedef struct __MIDL___MIDL_itf_encdec_0000_0000_0002
    {
    HRESULT hrReason;
    } BadSampleInfo;
#pragma pack(pop)
typedef LONGLONG REFERENCE_TIME;
typedef LONG PackedTvRating;
#pragma region Desktop Family
#pragma region Desktop Family
#pragma endregion
typedef DECLSPEC_UUID("25AEE876-3D61-4486-917E-7C0CB3D9983C")
enum ProtType
    {
        PROT_COPY_FREE = 1,
        PROT_COPY_ONCE = 2,
        PROT_COPY_NEVER = 3,
        PROT_COPY_NEVER_REALLY = 4,
        PROT_COPY_NO_MORE = 5,
        PROT_COPY_FREE_CIT = 6,
        PROT_COPY_BF = 7,
        PROT_COPY_CN_RECORDING_STOP = 8,
        PROT_COPY_FREE_SECURE = 9,
        PROT_COPY_INVALID = 50
    } ProtType;
typedef
enum EncDecEvents
    {
        ENCDEC_CPEVENT = 0,
        ENCDEC_RECORDING_STATUS = ( ENCDEC_CPEVENT + 1 )
    } EncDecEvents;
typedef
enum CPRecordingStatus
    {
        RECORDING_STOPPED = 0,
        RECORDING_STARTED = 1
    } CPRecordingStatus;
typedef
enum CPEventBitShift
    {
        CPEVENT_BITSHIFT_RATINGS = 0,
        CPEVENT_BITSHIFT_COPP = ( CPEVENT_BITSHIFT_RATINGS + 1 ) ,
        CPEVENT_BITSHIFT_LICENSE = ( CPEVENT_BITSHIFT_COPP + 1 ) ,
        CPEVENT_BITSHIFT_ROLLBACK = ( CPEVENT_BITSHIFT_LICENSE + 1 ) ,
        CPEVENT_BITSHIFT_SAC = ( CPEVENT_BITSHIFT_ROLLBACK + 1 ) ,
        CPEVENT_BITSHIFT_DOWNRES = ( CPEVENT_BITSHIFT_SAC + 1 ) ,
        CPEVENT_BITSHIFT_STUBLIB = ( CPEVENT_BITSHIFT_DOWNRES + 1 ) ,
        CPEVENT_BITSHIFT_UNTRUSTEDGRAPH = ( CPEVENT_BITSHIFT_STUBLIB + 1 ) ,
        CPEVENT_BITSHIFT_PENDING_CERTIFICATE = ( CPEVENT_BITSHIFT_UNTRUSTEDGRAPH + 1 ) ,
        CPEVENT_BITSHIFT_NO_PLAYREADY = ( CPEVENT_BITSHIFT_PENDING_CERTIFICATE + 1 )
    } CPEventBitShift;
typedef
enum CPEvents
    {
        CPEVENT_NONE = 0,
        CPEVENT_RATINGS = ( CPEVENT_NONE + 1 ) ,
        CPEVENT_COPP = ( CPEVENT_RATINGS + 1 ) ,
        CPEVENT_LICENSE = ( CPEVENT_COPP + 1 ) ,
        CPEVENT_ROLLBACK = ( CPEVENT_LICENSE + 1 ) ,
        CPEVENT_SAC = ( CPEVENT_ROLLBACK + 1 ) ,
        CPEVENT_DOWNRES = ( CPEVENT_SAC + 1 ) ,
        CPEVENT_STUBLIB = ( CPEVENT_DOWNRES + 1 ) ,
        CPEVENT_UNTRUSTEDGRAPH = ( CPEVENT_STUBLIB + 1 ) ,
        CPEVENT_PROTECTWINDOWED = ( CPEVENT_UNTRUSTEDGRAPH + 1 )
    } CPEvents;
typedef
enum RevokedComponent
    {
        REVOKED_COPP = 0,
        REVOKED_SAC = ( REVOKED_COPP + 1 ) ,
        REVOKED_APP_STUB = ( REVOKED_SAC + 1 ) ,
        REVOKED_SECURE_PIPELINE = ( REVOKED_APP_STUB + 1 ) ,
        REVOKED_MAX_TYPES = ( REVOKED_SECURE_PIPELINE + 1 )
    } RevokedComponent;
typedef
enum EnTag_Mode
    {
        EnTag_Remove = 0,
        EnTag_Once = 0x1,
        EnTag_Repeat = 0x2
    } EnTag_Mode;
typedef DECLSPEC_UUID("6F8C2442-2BFB-4180-9EE5-EA1FB47AE35C")
enum COPPEventBlockReason
    {
        COPP_Unknown = -1,
        COPP_BadDriver = 0,
        COPP_NoCardHDCPSupport = 1,
        COPP_NoMonitorHDCPSupport = 2,
        COPP_BadCertificate = 3,
        COPP_InvalidBusProtection = 4,
        COPP_AeroGlassOff = 5,
        COPP_RogueApp = 6,
        COPP_ForbiddenVideo = 7,
        COPP_Activate = 8,
        COPP_DigitalAudioUnprotected = 9
    } COPPEventBlockReason;
typedef DECLSPEC_UUID("57BCA1BE-DF7A-434e-8B89-26D6A0541FDA")
enum LicenseEventBlockReason
    {
        LIC_BadLicense = 0,
        LIC_NeedIndiv = 1,
        LIC_Expired = 2,
        LIC_NeedActivation = 3,
        LIC_ExtenderBlocked = 4
    } LicenseEventBlockReason;
typedef DECLSPEC_UUID("D5CC1CDC-EF31-48dc-95B8-AFD34C08036B")
enum DownResEventParam
    {
        DOWNRES_Always = 0,
        DOWNRES_InWindowOnly = 1,
        DOWNRES_Undefined = 2
    } DownResEventParam;
#pragma region Desktop Family
#pragma endregion
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_encdec_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_encdec_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IETFilterConfig;
    typedef struct IETFilterConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IETFilterConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IETFilterConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IETFilterConfig * This);
                               HRESULT ( STDMETHODCALLTYPE *InitLicense )(
            __RPC__in IETFilterConfig * This,
                       int LicenseId);
                               HRESULT ( STDMETHODCALLTYPE *GetSecureChannelObject )(
            __RPC__in IETFilterConfig * This,
                        __RPC__deref_out_opt IUnknown **ppUnkDRMSecureChannel);
        END_INTERFACE
    } IETFilterConfigVtbl;
    interface IETFilterConfig
    {
        CONST_VTBL struct IETFilterConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitLicense(This,LicenseId) )
    ( (This)->lpVtbl -> GetSecureChannelObject(This,ppUnkDRMSecureChannel) )
EXTERN_C const IID IID_IDTFilterConfig;
    typedef struct IDTFilterConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDTFilterConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDTFilterConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDTFilterConfig * This);
                               HRESULT ( STDMETHODCALLTYPE *GetSecureChannelObject )(
            __RPC__in IDTFilterConfig * This,
                        __RPC__deref_out_opt IUnknown **ppUnkDRMSecureChannel);
        END_INTERFACE
    } IDTFilterConfigVtbl;
    interface IDTFilterConfig
    {
        CONST_VTBL struct IDTFilterConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSecureChannelObject(This,ppUnkDRMSecureChannel) )
EXTERN_C const IID IID_IXDSCodecConfig;
    typedef struct IXDSCodecConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXDSCodecConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXDSCodecConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXDSCodecConfig * This);
                               HRESULT ( STDMETHODCALLTYPE *GetSecureChannelObject )(
            __RPC__in IXDSCodecConfig * This,
                        __RPC__deref_out_opt IUnknown **ppUnkDRMSecureChannel);
                               HRESULT ( STDMETHODCALLTYPE *SetPauseBufferTime )(
            __RPC__in IXDSCodecConfig * This,
                       DWORD dwPauseBufferTime);
        END_INTERFACE
    } IXDSCodecConfigVtbl;
    interface IXDSCodecConfig
    {
        CONST_VTBL struct IXDSCodecConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSecureChannelObject(This,ppUnkDRMSecureChannel) )
    ( (This)->lpVtbl -> SetPauseBufferTime(This,dwPauseBufferTime) )
EXTERN_C const IID IID_IDTFilterLicenseRenewal;
    typedef struct IDTFilterLicenseRenewalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDTFilterLicenseRenewal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDTFilterLicenseRenewal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDTFilterLicenseRenewal * This);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseRenewalData )(
            __RPC__in IDTFilterLicenseRenewal * This,
                        __RPC__deref_out_opt LPWSTR *ppwszFileName,
                        __RPC__deref_out_opt LPWSTR *ppwszExpiredKid,
                        __RPC__deref_out_opt LPWSTR *ppwszTunerId);
        END_INTERFACE
    } IDTFilterLicenseRenewalVtbl;
    interface IDTFilterLicenseRenewal
    {
        CONST_VTBL struct IDTFilterLicenseRenewalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLicenseRenewalData(This,ppwszFileName,ppwszExpiredKid,ppwszTunerId) )
EXTERN_C const IID IID_IPTFilterLicenseRenewal;
    typedef struct IPTFilterLicenseRenewalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPTFilterLicenseRenewal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPTFilterLicenseRenewal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPTFilterLicenseRenewal * This);
        HRESULT ( STDMETHODCALLTYPE *RenewLicenses )(
            __RPC__in IPTFilterLicenseRenewal * This,
                       __RPC__in WCHAR *wszFileName,
                       __RPC__in WCHAR *wszExpiredKid,
                       DWORD dwCallersId,
                       BOOL bHighPriority);
        HRESULT ( STDMETHODCALLTYPE *CancelLicenseRenewal )(
            __RPC__in IPTFilterLicenseRenewal * This);
        END_INTERFACE
    } IPTFilterLicenseRenewalVtbl;
    interface IPTFilterLicenseRenewal
    {
        CONST_VTBL struct IPTFilterLicenseRenewalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RenewLicenses(This,wszFileName,wszExpiredKid,dwCallersId,bHighPriority) )
    ( (This)->lpVtbl -> CancelLicenseRenewal(This) )
EXTERN_C const IID IID_IMceBurnerControl;
    typedef struct IMceBurnerControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMceBurnerControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMceBurnerControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMceBurnerControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetBurnerNoDecryption )(
            __RPC__in IMceBurnerControl * This);
        END_INTERFACE
    } IMceBurnerControlVtbl;
    interface IMceBurnerControl
    {
        CONST_VTBL struct IMceBurnerControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBurnerNoDecryption(This) )
EXTERN_C const IID LIBID_EncDec;
EXTERN_C const IID IID_IETFilter;
    typedef struct IETFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IETFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IETFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IETFilter * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EvalRatObjOK )(
            __RPC__in IETFilter * This,
                                __RPC__out HRESULT *pHrCoCreateRetVal);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrRating )(
            __RPC__in IETFilter * This,
                        __RPC__out EnTvRat_System *pEnSystem,
                        __RPC__out EnTvRat_GenericLevel *pEnRating,
                        __RPC__out LONG *plbfEnAttr);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrLicenseExpDate )(
            __RPC__in IETFilter * This,
                       __RPC__in ProtType *protType,
                        __RPC__out long *lpDateTime);
                               HRESULT ( STDMETHODCALLTYPE *GetLastErrorCode )(
            __RPC__in IETFilter * This);
                               HRESULT ( STDMETHODCALLTYPE *SetRecordingOn )(
            __RPC__in IETFilter * This,
            BOOL fRecState);
        END_INTERFACE
    } IETFilterVtbl;
    interface IETFilter
    {
        CONST_VTBL struct IETFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
    ( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
    ( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
    ( (This)->lpVtbl -> GetLastErrorCode(This) )
    ( (This)->lpVtbl -> SetRecordingOn(This,fRecState) )
EXTERN_C const IID DIID_IETFilterEvents;
    typedef struct IETFilterEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IETFilterEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IETFilterEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IETFilterEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IETFilterEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IETFilterEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IETFilterEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IETFilterEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IETFilterEventsVtbl;
    interface IETFilterEvents
    {
        CONST_VTBL struct IETFilterEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_ETFilter;
class DECLSPEC_UUID("C4C4C4F1-0049-4E2B-98FB-9537F6CE516D")
ETFilter;
EXTERN_C const IID IID_IDTFilter;
    typedef struct IDTFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDTFilter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDTFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDTFilter * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EvalRatObjOK )(
            __RPC__in IDTFilter * This,
                                __RPC__out HRESULT *pHrCoCreateRetVal);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrRating )(
            __RPC__in IDTFilter * This,
                        __RPC__out EnTvRat_System *pEnSystem,
                        __RPC__out EnTvRat_GenericLevel *pEnRating,
                        __RPC__out LONG *plbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedRatingAttributes )(
            __RPC__in IDTFilter * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                                __RPC__out LONG *plbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedRatingAttributes )(
            __RPC__in IDTFilter * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                       LONG lbfAttrs);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockUnRated )(
            __RPC__in IDTFilter * This,
                                __RPC__out BOOL *pfBlockUnRatedShows);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnRated )(
            __RPC__in IDTFilter * This,
                       BOOL fBlockUnRatedShows);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockUnRatedDelay )(
            __RPC__in IDTFilter * This,
                                __RPC__out LONG *pmsecsDelayBeforeBlock);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnRatedDelay )(
            __RPC__in IDTFilter * This,
                       LONG msecsDelayBeforeBlock);
        END_INTERFACE
    } IDTFilterVtbl;
    interface IDTFilter
    {
        CONST_VTBL struct IDTFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
    ( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
    ( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr) )
    ( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) )
    ( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) )
    ( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) )
    ( (This)->lpVtbl -> get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock) )
    ( (This)->lpVtbl -> put_BlockUnRatedDelay(This,msecsDelayBeforeBlock) )
EXTERN_C const IID IID_IDTFilter2;
    typedef struct IDTFilter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDTFilter2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDTFilter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDTFilter2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EvalRatObjOK )(
            __RPC__in IDTFilter2 * This,
                                __RPC__out HRESULT *pHrCoCreateRetVal);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrRating )(
            __RPC__in IDTFilter2 * This,
                        __RPC__out EnTvRat_System *pEnSystem,
                        __RPC__out EnTvRat_GenericLevel *pEnRating,
                        __RPC__out LONG *plbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedRatingAttributes )(
            __RPC__in IDTFilter2 * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                                __RPC__out LONG *plbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedRatingAttributes )(
            __RPC__in IDTFilter2 * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                       LONG lbfAttrs);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockUnRated )(
            __RPC__in IDTFilter2 * This,
                                __RPC__out BOOL *pfBlockUnRatedShows);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnRated )(
            __RPC__in IDTFilter2 * This,
                       BOOL fBlockUnRatedShows);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockUnRatedDelay )(
            __RPC__in IDTFilter2 * This,
                                __RPC__out LONG *pmsecsDelayBeforeBlock);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnRatedDelay )(
            __RPC__in IDTFilter2 * This,
                       LONG msecsDelayBeforeBlock);
                                        HRESULT ( STDMETHODCALLTYPE *get_ChallengeUrl )(
            __RPC__in IDTFilter2 * This,
                        __RPC__deref_out_opt BSTR *pbstrChallengeUrl);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrLicenseExpDate )(
            __RPC__in IDTFilter2 * This,
                       __RPC__in ProtType *protType,
                        __RPC__out long *lpDateTime);
                               HRESULT ( STDMETHODCALLTYPE *GetLastErrorCode )(
            __RPC__in IDTFilter2 * This);
        END_INTERFACE
    } IDTFilter2Vtbl;
    interface IDTFilter2
    {
        CONST_VTBL struct IDTFilter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
    ( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
    ( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr) )
    ( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) )
    ( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) )
    ( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) )
    ( (This)->lpVtbl -> get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock) )
    ( (This)->lpVtbl -> put_BlockUnRatedDelay(This,msecsDelayBeforeBlock) )
    ( (This)->lpVtbl -> get_ChallengeUrl(This,pbstrChallengeUrl) )
    ( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
    ( (This)->lpVtbl -> GetLastErrorCode(This) )
EXTERN_C const IID IID_IDTFilter3;
    typedef struct IDTFilter3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDTFilter3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDTFilter3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDTFilter3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_EvalRatObjOK )(
            __RPC__in IDTFilter3 * This,
                                __RPC__out HRESULT *pHrCoCreateRetVal);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrRating )(
            __RPC__in IDTFilter3 * This,
                        __RPC__out EnTvRat_System *pEnSystem,
                        __RPC__out EnTvRat_GenericLevel *pEnRating,
                        __RPC__out LONG *plbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockedRatingAttributes )(
            __RPC__in IDTFilter3 * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                                __RPC__out LONG *plbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockedRatingAttributes )(
            __RPC__in IDTFilter3 * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enLevel,
                       LONG lbfAttrs);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockUnRated )(
            __RPC__in IDTFilter3 * This,
                                __RPC__out BOOL *pfBlockUnRatedShows);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnRated )(
            __RPC__in IDTFilter3 * This,
                       BOOL fBlockUnRatedShows);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockUnRatedDelay )(
            __RPC__in IDTFilter3 * This,
                                __RPC__out LONG *pmsecsDelayBeforeBlock);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnRatedDelay )(
            __RPC__in IDTFilter3 * This,
                       LONG msecsDelayBeforeBlock);
                                        HRESULT ( STDMETHODCALLTYPE *get_ChallengeUrl )(
            __RPC__in IDTFilter3 * This,
                        __RPC__deref_out_opt BSTR *pbstrChallengeUrl);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrLicenseExpDate )(
            __RPC__in IDTFilter3 * This,
                       __RPC__in ProtType *protType,
                        __RPC__out long *lpDateTime);
                               HRESULT ( STDMETHODCALLTYPE *GetLastErrorCode )(
            __RPC__in IDTFilter3 * This);
                               HRESULT ( STDMETHODCALLTYPE *GetProtectionType )(
            __RPC__in IDTFilter3 * This,
                        __RPC__out ProtType *pProtectionType);
                               HRESULT ( STDMETHODCALLTYPE *LicenseHasExpirationDate )(
            __RPC__in IDTFilter3 * This,
                        __RPC__out BOOL *pfLicenseHasExpirationDate);
                               HRESULT ( STDMETHODCALLTYPE *SetRights )(
            __RPC__in IDTFilter3 * This,
                       __RPC__in BSTR bstrRights);
        END_INTERFACE
    } IDTFilter3Vtbl;
    interface IDTFilter3
    {
        CONST_VTBL struct IDTFilter3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_EvalRatObjOK(This,pHrCoCreateRetVal) )
    ( (This)->lpVtbl -> GetCurrRating(This,pEnSystem,pEnRating,plbfEnAttr) )
    ( (This)->lpVtbl -> get_BlockedRatingAttributes(This,enSystem,enLevel,plbfEnAttr) )
    ( (This)->lpVtbl -> put_BlockedRatingAttributes(This,enSystem,enLevel,lbfAttrs) )
    ( (This)->lpVtbl -> get_BlockUnRated(This,pfBlockUnRatedShows) )
    ( (This)->lpVtbl -> put_BlockUnRated(This,fBlockUnRatedShows) )
    ( (This)->lpVtbl -> get_BlockUnRatedDelay(This,pmsecsDelayBeforeBlock) )
    ( (This)->lpVtbl -> put_BlockUnRatedDelay(This,msecsDelayBeforeBlock) )
    ( (This)->lpVtbl -> get_ChallengeUrl(This,pbstrChallengeUrl) )
    ( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
    ( (This)->lpVtbl -> GetLastErrorCode(This) )
    ( (This)->lpVtbl -> GetProtectionType(This,pProtectionType) )
    ( (This)->lpVtbl -> LicenseHasExpirationDate(This,pfLicenseHasExpirationDate) )
    ( (This)->lpVtbl -> SetRights(This,bstrRights) )
EXTERN_C const IID DIID_IDTFilterEvents;
    typedef struct IDTFilterEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDTFilterEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDTFilterEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDTFilterEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDTFilterEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDTFilterEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDTFilterEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDTFilterEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IDTFilterEventsVtbl;
    interface IDTFilterEvents
    {
        CONST_VTBL struct IDTFilterEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_DTFilter;
class DECLSPEC_UUID("C4C4C4F2-0049-4E2B-98FB-9537F6CE516D")
DTFilter;
EXTERN_C const IID IID_IXDSCodec;
    typedef struct IXDSCodecVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXDSCodec * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXDSCodec * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXDSCodec * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_XDSToRatObjOK )(
            __RPC__in IXDSCodec * This,
                                __RPC__out HRESULT *pHrCoCreateRetVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CCSubstreamService )(
            __RPC__in IXDSCodec * This,
                       long SubstreamMask);
                                        HRESULT ( STDMETHODCALLTYPE *get_CCSubstreamService )(
            __RPC__in IXDSCodec * This,
                                __RPC__out long *pSubstreamMask);
                               HRESULT ( STDMETHODCALLTYPE *GetContentAdvisoryRating )(
            __RPC__in IXDSCodec * This,
                        __RPC__out PackedTvRating *pRat,
                        __RPC__out long *pPktSeqID,
                        __RPC__out long *pCallSeqID,
                        __RPC__out REFERENCE_TIME *pTimeStart,
                        __RPC__out REFERENCE_TIME *pTimeEnd);
                               HRESULT ( STDMETHODCALLTYPE *GetXDSPacket )(
            __RPC__in IXDSCodec * This,
                        __RPC__out long *pXDSClassPkt,
                        __RPC__out long *pXDSTypePkt,
                        __RPC__deref_out_opt BSTR *pBstrXDSPkt,
                        __RPC__out long *pPktSeqID,
                        __RPC__out long *pCallSeqID,
                        __RPC__out REFERENCE_TIME *pTimeStart,
                        __RPC__out REFERENCE_TIME *pTimeEnd);
                               HRESULT ( STDMETHODCALLTYPE *GetCurrLicenseExpDate )(
            __RPC__in IXDSCodec * This,
                       __RPC__in ProtType *protType,
                        __RPC__out long *lpDateTime);
                               HRESULT ( STDMETHODCALLTYPE *GetLastErrorCode )(
            __RPC__in IXDSCodec * This);
        END_INTERFACE
    } IXDSCodecVtbl;
    interface IXDSCodec
    {
        CONST_VTBL struct IXDSCodecVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_XDSToRatObjOK(This,pHrCoCreateRetVal) )
    ( (This)->lpVtbl -> put_CCSubstreamService(This,SubstreamMask) )
    ( (This)->lpVtbl -> get_CCSubstreamService(This,pSubstreamMask) )
    ( (This)->lpVtbl -> GetContentAdvisoryRating(This,pRat,pPktSeqID,pCallSeqID,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> GetXDSPacket(This,pXDSClassPkt,pXDSTypePkt,pBstrXDSPkt,pPktSeqID,pCallSeqID,pTimeStart,pTimeEnd) )
    ( (This)->lpVtbl -> GetCurrLicenseExpDate(This,protType,lpDateTime) )
    ( (This)->lpVtbl -> GetLastErrorCode(This) )
EXTERN_C const IID DIID_IXDSCodecEvents;
    typedef struct IXDSCodecEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXDSCodecEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXDSCodecEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXDSCodecEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IXDSCodecEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IXDSCodecEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IXDSCodecEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXDSCodecEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IXDSCodecEventsVtbl;
    interface IXDSCodecEvents
    {
        CONST_VTBL struct IXDSCodecEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_XDSCodec;
class DECLSPEC_UUID("C4C4C4F3-0049-4E2B-98FB-9537F6CE516D")
XDSCodec;
EXTERN_C const CLSID CLSID_CXDSData;
class DECLSPEC_UUID("C4C4C4F4-0049-4E2B-98FB-9537F6CE516D")
CXDSData;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_encdec_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_encdec_0000_0007_v0_0_s_ifspec;
}
