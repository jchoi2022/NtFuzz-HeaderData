#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMMediaProps IWMMediaProps;
typedef interface IWMVideoMediaProps IWMVideoMediaProps;
typedef interface IWMWriter IWMWriter;
typedef interface IWMDRMWriter IWMDRMWriter;
typedef interface IWMDRMWriter2 IWMDRMWriter2;
typedef interface IWMDRMWriter3 IWMDRMWriter3;
typedef interface IWMInputMediaProps IWMInputMediaProps;
typedef interface IWMPropertyVault IWMPropertyVault;
typedef interface IWMIStreamProps IWMIStreamProps;
typedef interface IWMReader IWMReader;
typedef interface IWMSyncReader IWMSyncReader;
typedef interface IWMSyncReader2 IWMSyncReader2;
typedef interface IWMOutputMediaProps IWMOutputMediaProps;
typedef interface IWMStatusCallback IWMStatusCallback;
typedef interface IWMReaderCallback IWMReaderCallback;
typedef interface IWMCredentialCallback IWMCredentialCallback;
typedef interface IWMMetadataEditor IWMMetadataEditor;
typedef interface IWMMetadataEditor2 IWMMetadataEditor2;
typedef interface IWMDRMEditor IWMDRMEditor;
typedef interface IWMHeaderInfo IWMHeaderInfo;
typedef interface IWMHeaderInfo2 IWMHeaderInfo2;
typedef interface IWMHeaderInfo3 IWMHeaderInfo3;
typedef interface IWMProfileManager IWMProfileManager;
typedef interface IWMProfileManager2 IWMProfileManager2;
typedef interface IWMProfileManagerLanguage IWMProfileManagerLanguage;
typedef interface IWMProfile IWMProfile;
typedef interface IWMProfile2 IWMProfile2;
typedef interface IWMProfile3 IWMProfile3;
typedef interface IWMStreamConfig IWMStreamConfig;
typedef interface IWMStreamConfig2 IWMStreamConfig2;
typedef interface IWMStreamConfig3 IWMStreamConfig3;
typedef interface IWMPacketSize IWMPacketSize;
typedef interface IWMPacketSize2 IWMPacketSize2;
typedef interface IWMStreamList IWMStreamList;
typedef interface IWMMutualExclusion IWMMutualExclusion;
typedef interface IWMMutualExclusion2 IWMMutualExclusion2;
typedef interface IWMBandwidthSharing IWMBandwidthSharing;
typedef interface IWMStreamPrioritization IWMStreamPrioritization;
typedef interface IWMWriterAdvanced IWMWriterAdvanced;
typedef interface IWMWriterAdvanced2 IWMWriterAdvanced2;
typedef interface IWMWriterAdvanced3 IWMWriterAdvanced3;
typedef interface IWMWriterPreprocess IWMWriterPreprocess;
typedef interface IWMWriterPostViewCallback IWMWriterPostViewCallback;
typedef interface IWMWriterPostView IWMWriterPostView;
typedef interface IWMWriterSink IWMWriterSink;
typedef interface IWMRegisterCallback IWMRegisterCallback;
typedef interface IWMWriterFileSink IWMWriterFileSink;
typedef interface IWMWriterFileSink2 IWMWriterFileSink2;
typedef interface IWMWriterFileSink3 IWMWriterFileSink3;
typedef interface IWMWriterNetworkSink IWMWriterNetworkSink;
typedef interface IWMClientConnections IWMClientConnections;
typedef interface IWMClientConnections2 IWMClientConnections2;
typedef interface IWMReaderAdvanced IWMReaderAdvanced;
typedef interface IWMReaderAdvanced2 IWMReaderAdvanced2;
typedef interface IWMReaderAdvanced3 IWMReaderAdvanced3;
typedef interface IWMReaderAdvanced4 IWMReaderAdvanced4;
typedef interface IWMReaderAdvanced5 IWMReaderAdvanced5;
typedef interface IWMReaderAdvanced6 IWMReaderAdvanced6;
typedef interface IWMPlayerHook IWMPlayerHook;
typedef interface IWMReaderAllocatorEx IWMReaderAllocatorEx;
typedef interface IWMReaderTypeNegotiation IWMReaderTypeNegotiation;
typedef interface IWMReaderCallbackAdvanced IWMReaderCallbackAdvanced;
typedef interface IWMDRMReader IWMDRMReader;
typedef interface IWMDRMReader2 IWMDRMReader2;
typedef interface IWMDRMReader3 IWMDRMReader3;
typedef interface IWMReaderPlaylistBurn IWMReaderPlaylistBurn;
typedef interface IWMReaderNetworkConfig IWMReaderNetworkConfig;
typedef interface IWMReaderNetworkConfig2 IWMReaderNetworkConfig2;
typedef interface IWMReaderStreamClock IWMReaderStreamClock;
typedef interface IWMIndexer IWMIndexer;
typedef interface IWMIndexer2 IWMIndexer2;
typedef interface IWMLicenseBackup IWMLicenseBackup;
typedef interface IWMLicenseRestore IWMLicenseRestore;
typedef interface IWMBackupRestoreProps IWMBackupRestoreProps;
typedef interface IWMCodecInfo IWMCodecInfo;
typedef interface IWMCodecInfo2 IWMCodecInfo2;
typedef interface IWMCodecInfo3 IWMCodecInfo3;
typedef interface IWMLanguageList IWMLanguageList;
typedef interface IWMWriterPushSink IWMWriterPushSink;
typedef interface IWMDeviceRegistration IWMDeviceRegistration;
typedef interface IWMRegisteredDevice IWMRegisteredDevice;
typedef interface IWMProximityDetection IWMProximityDetection;
typedef interface IWMDRMMessageParser IWMDRMMessageParser;
typedef interface IWMDRMTranscryptor IWMDRMTranscryptor;
typedef interface IWMDRMTranscryptor2 IWMDRMTranscryptor2;
typedef interface IWMDRMTranscryptionManager IWMDRMTranscryptionManager;
typedef interface IWMWatermarkInfo IWMWatermarkInfo;
typedef interface IWMReaderAccelerator IWMReaderAccelerator;
typedef interface IWMReaderTimecode IWMReaderTimecode;
typedef interface IWMAddressAccess IWMAddressAccess;
typedef interface IWMAddressAccess2 IWMAddressAccess2;
typedef interface IWMImageInfo IWMImageInfo;
typedef interface IWMLicenseRevocationAgent IWMLicenseRevocationAgent;
#include "oaidl.h"
#include "wmsbuffer.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef unsigned __int64 QWORD;
static const DWORD g_dwWMSpecialAttributes = 20;
static const WCHAR g_wszWMDuration[] =L"Duration";
static const WCHAR g_wszWMBitrate[] =L"Bitrate";
static const WCHAR g_wszWMSeekable[] =L"Seekable";
static const WCHAR g_wszWMStridable[] =L"Stridable";
static const WCHAR g_wszWMBroadcast[] =L"Broadcast";
static const WCHAR g_wszWMProtected[] =L"Is_Protected";
static const WCHAR g_wszWMTrusted[] =L"Is_Trusted";
static const WCHAR g_wszWMSignature_Name[] =L"Signature_Name";
static const WCHAR g_wszWMHasAudio[] =L"HasAudio";
static const WCHAR g_wszWMHasImage[] =L"HasImage";
static const WCHAR g_wszWMHasScript[] =L"HasScript";
static const WCHAR g_wszWMHasVideo[] =L"HasVideo";
static const WCHAR g_wszWMCurrentBitrate[] =L"CurrentBitrate";
static const WCHAR g_wszWMOptimalBitrate[] =L"OptimalBitrate";
static const WCHAR g_wszWMHasAttachedImages[] =L"HasAttachedImages";
static const WCHAR g_wszWMSkipBackward[] =L"Can_Skip_Backward";
static const WCHAR g_wszWMSkipForward[] =L"Can_Skip_Forward";
static const WCHAR g_wszWMNumberOfFrames[] =L"NumberOfFrames";
static const WCHAR g_wszWMFileSize[] =L"FileSize";
static const WCHAR g_wszWMHasArbitraryDataStream[] =L"HasArbitraryDataStream";
static const WCHAR g_wszWMHasFileTransferStream[] =L"HasFileTransferStream";
static const WCHAR g_wszWMContainerFormat[] =L"WM/ContainerFormat";
static const DWORD g_dwWMContentAttributes = 5;
static const WCHAR g_wszWMTitle[] =L"Title";
static const WCHAR g_wszWMTitleSort[] =L"TitleSort";
static const WCHAR g_wszWMAuthor[] =L"Author";
static const WCHAR g_wszWMAuthorSort[] =L"AuthorSort";
static const WCHAR g_wszWMDescription[] =L"Description";
static const WCHAR g_wszWMRating[] =L"Rating";
static const WCHAR g_wszWMCopyright[] =L"Copyright";
static const WCHAR g_wszWMUse_DRM[] = L"Use_DRM";
static const WCHAR g_wszWMDRM_Flags[] = L"DRM_Flags";
static const WCHAR g_wszWMDRM_Level[] = L"DRM_Level";
static const WCHAR g_wszWMUse_Advanced_DRM[] = L"Use_Advanced_DRM";
static const WCHAR g_wszWMDRM_KeySeed[] = L"DRM_KeySeed";
static const WCHAR g_wszWMDRM_KeyID[] = L"DRM_KeyID";
static const WCHAR g_wszWMDRM_ContentID[] = L"DRM_ContentID";
static const WCHAR g_wszWMDRM_SourceID[] = L"DRM_SourceID";
static const WCHAR g_wszWMDRM_IndividualizedVersion[] = L"DRM_IndividualizedVersion";
static const WCHAR g_wszWMDRM_LicenseAcqURL[] = L"DRM_LicenseAcqURL";
static const WCHAR g_wszWMDRM_V1LicenseAcqURL[] = L"DRM_V1LicenseAcqURL";
static const WCHAR g_wszWMDRM_HeaderSignPrivKey[] = L"DRM_HeaderSignPrivKey";
static const WCHAR g_wszWMDRM_LASignaturePrivKey[] = L"DRM_LASignaturePrivKey";
static const WCHAR g_wszWMDRM_LASignatureCert[] = L"DRM_LASignatureCert";
static const WCHAR g_wszWMDRM_LASignatureLicSrvCert[] = L"DRM_LASignatureLicSrvCert";
static const WCHAR g_wszWMDRM_LASignatureRootCert[] = L"DRM_LASignatureRootCert";
static const WCHAR g_wszWMAlbumTitle[] =L"WM/AlbumTitle";
static const WCHAR g_wszWMAlbumTitleSort[] =L"WM/AlbumTitleSort";
static const WCHAR g_wszWMTrack[] =L"WM/Track";
static const WCHAR g_wszWMPromotionURL[] =L"WM/PromotionURL";
static const WCHAR g_wszWMAlbumCoverURL[] =L"WM/AlbumCoverURL";
static const WCHAR g_wszWMGenre[] =L"WM/Genre";
static const WCHAR g_wszWMYear[] =L"WM/Year";
static const WCHAR g_wszWMGenreID[] =L"WM/GenreID";
static const WCHAR g_wszWMMCDI[] =L"WM/MCDI";
static const WCHAR g_wszWMComposer[] =L"WM/Composer";
static const WCHAR g_wszWMComposerSort[] =L"WM/ComposerSort";
static const WCHAR g_wszWMLyrics[] =L"WM/Lyrics";
static const WCHAR g_wszWMTrackNumber[] =L"WM/TrackNumber";
static const WCHAR g_wszWMToolName[] =L"WM/ToolName";
static const WCHAR g_wszWMToolVersion[] =L"WM/ToolVersion";
static const WCHAR g_wszWMIsVBR[] =L"IsVBR";
static const WCHAR g_wszWMAlbumArtist[] =L"WM/AlbumArtist";
static const WCHAR g_wszWMAlbumArtistSort[] =L"WM/AlbumArtistSort";
static const WCHAR g_wszWMBannerImageType[] =L"BannerImageType";
static const WCHAR g_wszWMBannerImageData[] =L"BannerImageData";
static const WCHAR g_wszWMBannerImageURL[] =L"BannerImageURL";
static const WCHAR g_wszWMCopyrightURL[] =L"CopyrightURL";
static const WCHAR g_wszWMAspectRatioX[] =L"AspectRatioX";
static const WCHAR g_wszWMAspectRatioY[] =L"AspectRatioY";
static const WCHAR g_wszASFLeakyBucketPairs[] =L"ASFLeakyBucketPairs";
static const DWORD g_dwWMNSCAttributes = 5;
static const WCHAR g_wszWMNSCName[] =L"NSC_Name";
static const WCHAR g_wszWMNSCAddress[] =L"NSC_Address";
static const WCHAR g_wszWMNSCPhone[] =L"NSC_Phone";
static const WCHAR g_wszWMNSCEmail[] =L"NSC_Email";
static const WCHAR g_wszWMNSCDescription[] =L"NSC_Description";
static const WCHAR g_wszWMWriter[] =L"WM/Writer";
static const WCHAR g_wszWMConductor[] =L"WM/Conductor";
static const WCHAR g_wszWMProducer[] =L"WM/Producer";
static const WCHAR g_wszWMDirector[] =L"WM/Director";
static const WCHAR g_wszWMContentGroupDescription[] =L"WM/ContentGroupDescription";
static const WCHAR g_wszWMSubTitle[] =L"WM/SubTitle";
static const WCHAR g_wszWMPartOfSet[] =L"WM/PartOfSet";
static const WCHAR g_wszWMProtectionType[] =L"WM/ProtectionType";
static const WCHAR g_wszWMVideoHeight[] =L"WM/VideoHeight";
static const WCHAR g_wszWMVideoWidth[] =L"WM/VideoWidth";
static const WCHAR g_wszWMVideoFrameRate[] =L"WM/VideoFrameRate";
static const WCHAR g_wszWMMediaClassPrimaryID[] =L"WM/MediaClassPrimaryID";
static const WCHAR g_wszWMMediaClassSecondaryID[] =L"WM/MediaClassSecondaryID";
static const WCHAR g_wszWMPeriod[] = L"WM/Period";
static const WCHAR g_wszWMCategory[] = L"WM/Category";
static const WCHAR g_wszWMPicture[] =L"WM/Picture";
static const WCHAR g_wszWMLyrics_Synchronised[] =L"WM/Lyrics_Synchronised";
static const WCHAR g_wszWMOriginalLyricist[] =L"WM/OriginalLyricist";
static const WCHAR g_wszWMOriginalArtist[] =L"WM/OriginalArtist";
static const WCHAR g_wszWMOriginalAlbumTitle[] =L"WM/OriginalAlbumTitle";
static const WCHAR g_wszWMOriginalReleaseYear[] =L"WM/OriginalReleaseYear";
static const WCHAR g_wszWMOriginalFilename[] =L"WM/OriginalFilename";
static const WCHAR g_wszWMPublisher[] =L"WM/Publisher";
static const WCHAR g_wszWMEncodedBy[] =L"WM/EncodedBy";
static const WCHAR g_wszWMEncodingSettings[] =L"WM/EncodingSettings";
static const WCHAR g_wszWMEncodingTime[] =L"WM/EncodingTime";
static const WCHAR g_wszWMAuthorURL[] =L"WM/AuthorURL";
static const WCHAR g_wszWMUserWebURL[] =L"WM/UserWebURL";
static const WCHAR g_wszWMAudioFileURL[] =L"WM/AudioFileURL";
static const WCHAR g_wszWMAudioSourceURL[] =L"WM/AudioSourceURL";
static const WCHAR g_wszWMLanguage[] =L"WM/Language";
static const WCHAR g_wszWMParentalRating[] =L"WM/ParentalRating";
static const WCHAR g_wszWMBeatsPerMinute[] =L"WM/BeatsPerMinute";
static const WCHAR g_wszWMInitialKey[] =L"WM/InitialKey";
static const WCHAR g_wszWMMood[] =L"WM/Mood";
static const WCHAR g_wszWMText[] =L"WM/Text";
static const WCHAR g_wszWMDVDID[] =L"WM/DVDID";
static const WCHAR g_wszWMWMContentID[] =L"WM/WMContentID";
static const WCHAR g_wszWMWMCollectionID[] =L"WM/WMCollectionID";
static const WCHAR g_wszWMWMCollectionGroupID[] =L"WM/WMCollectionGroupID";
static const WCHAR g_wszWMUniqueFileIdentifier[] =L"WM/UniqueFileIdentifier";
static const WCHAR g_wszWMModifiedBy[] =L"WM/ModifiedBy";
static const WCHAR g_wszWMRadioStationName[] =L"WM/RadioStationName";
static const WCHAR g_wszWMRadioStationOwner[] =L"WM/RadioStationOwner";
static const WCHAR g_wszWMPlaylistDelay[] =L"WM/PlaylistDelay";
static const WCHAR g_wszWMCodec[] =L"WM/Codec";
static const WCHAR g_wszWMDRM[] =L"WM/DRM";
static const WCHAR g_wszWMISRC[] =L"WM/ISRC";
static const WCHAR g_wszWMProvider[] =L"WM/Provider";
static const WCHAR g_wszWMProviderRating[] =L"WM/ProviderRating";
static const WCHAR g_wszWMProviderStyle[] =L"WM/ProviderStyle";
static const WCHAR g_wszWMContentDistributor[] =L"WM/ContentDistributor";
static const WCHAR g_wszWMSubscriptionContentID[] =L"WM/SubscriptionContentID";
static const WCHAR g_wszWMWMADRCPeakReference[] =L"WM/WMADRCPeakReference";
static const WCHAR g_wszWMWMADRCPeakTarget[] =L"WM/WMADRCPeakTarget";
static const WCHAR g_wszWMWMADRCAverageReference[] =L"WM/WMADRCAverageReference";
static const WCHAR g_wszWMWMADRCAverageTarget[] =L"WM/WMADRCAverageTarget";
static const WCHAR g_wszWMStreamTypeInfo[] = L"WM/StreamTypeInfo";
static const WCHAR g_wszWMPeakBitrate[] = L"WM/PeakBitrate";
static const WCHAR g_wszWMASFPacketCount[] = L"WM/ASFPacketCount";
static const WCHAR g_wszWMASFSecurityObjectsSize[] = L"WM/ASFSecurityObjectsSize";
static const WCHAR g_wszWMSharedUserRating[] = L"WM/SharedUserRating";
static const WCHAR g_wszWMSubTitleDescription[] = L"WM/SubTitleDescription";
static const WCHAR g_wszWMMediaCredits[] = L"WM/MediaCredits";
static const WCHAR g_wszWMParentalRatingReason[] = L"WM/ParentalRatingReason";
static const WCHAR g_wszWMOriginalReleaseTime[] = L"WM/OriginalReleaseTime";
static const WCHAR g_wszWMMediaStationCallSign[] = L"WM/MediaStationCallSign";
static const WCHAR g_wszWMMediaStationName[] = L"WM/MediaStationName";
static const WCHAR g_wszWMMediaNetworkAffiliation[] = L"WM/MediaNetworkAffiliation";
static const WCHAR g_wszWMMediaOriginalChannel[] = L"WM/MediaOriginalChannel";
static const WCHAR g_wszWMMediaOriginalBroadcastDateTime[] = L"WM/MediaOriginalBroadcastDateTime";
static const WCHAR g_wszWMMediaIsStereo[] = L"WM/MediaIsStereo";
static const WCHAR g_wszWMVideoClosedCaptioning[] = L"WM/VideoClosedCaptioning";
static const WCHAR g_wszWMMediaIsRepeat[] = L"WM/MediaIsRepeat";
static const WCHAR g_wszWMMediaIsLive[] = L"WM/MediaIsLive";
static const WCHAR g_wszWMMediaIsTape[] = L"WM/MediaIsTape";
static const WCHAR g_wszWMMediaIsDelay[] = L"WM/MediaIsDelay";
static const WCHAR g_wszWMMediaIsSubtitled[] = L"WM/MediaIsSubtitled";
static const WCHAR g_wszWMMediaIsPremiere[] = L"WM/MediaIsPremiere";
static const WCHAR g_wszWMMediaIsFinale[] = L"WM/MediaIsFinale";
static const WCHAR g_wszWMMediaIsSAP[] = L"WM/MediaIsSAP";
static const WCHAR g_wszWMProviderCopyright[] = L"WM/ProviderCopyright";
static const WCHAR g_wszWMISAN[] = L"WM/ISAN";
static const WCHAR g_wszWMADID[] = L"WM/ADID";
static const WCHAR g_wszWMWMShadowFileSourceFileType[] = L"WM/WMShadowFileSourceFileType";
static const WCHAR g_wszWMWMShadowFileSourceDRMType[] = L"WM/WMShadowFileSourceDRMType";
static const WCHAR g_wszWMWMCPDistributor[] =L"WM/WMCPDistributor";
static const WCHAR g_wszWMWMCPDistributorID[] =L"WM/WMCPDistributorID";
static const WCHAR g_wszWMSeasonNumber[] =L"WM/SeasonNumber";
static const WCHAR g_wszWMEpisodeNumber[] =L"WM/EpisodeNumber";
static const WCHAR g_wszEarlyDataDelivery[] =L"EarlyDataDelivery";
static const WCHAR g_wszJustInTimeDecode[] =L"JustInTimeDecode";
static const WCHAR g_wszSingleOutputBuffer[] =L"SingleOutputBuffer";
static const WCHAR g_wszSoftwareScaling[] =L"SoftwareScaling";
static const WCHAR g_wszDeliverOnReceive[] =L"DeliverOnReceive";
static const WCHAR g_wszScrambledAudio[] =L"ScrambledAudio";
static const WCHAR g_wszDedicatedDeliveryThread[] =L"DedicatedDeliveryThread";
static const WCHAR g_wszEnableDiscreteOutput[] = L"EnableDiscreteOutput";
static const WCHAR g_wszSpeakerConfig[] = L"SpeakerConfig";
static const WCHAR g_wszDynamicRangeControl[] = L"DynamicRangeControl";
static const WCHAR g_wszAllowInterlacedOutput[] = L"AllowInterlacedOutput";
static const WCHAR g_wszVideoSampleDurations[] =L"VideoSampleDurations";
static const WCHAR g_wszStreamLanguage[] =L"StreamLanguage";
static const WCHAR g_wszEnableWMAProSPDIFOutput[] = L"EnableWMAProSPDIFOutput";
static const WCHAR g_wszDeinterlaceMode[] =L"DeinterlaceMode";
static const WCHAR g_wszInitialPatternForInverseTelecine[] =L"InitialPatternForInverseTelecine";
static const WCHAR g_wszJPEGCompressionQuality[] =L"JPEGCompressionQuality";
static const WCHAR g_wszWatermarkCLSID[] =L"WatermarkCLSID";
static const WCHAR g_wszWatermarkConfig[] =L"WatermarkConfig";
static const WCHAR g_wszInterlacedCoding[] =L"InterlacedCoding";
static const WCHAR g_wszFixedFrameRate[] =L"FixedFrameRate";
static const WCHAR g_wszOriginalSourceFormatTag[] =L"_SOURCEFORMATTAG";
static const WCHAR g_wszOriginalWaveFormat[] =L"_ORIGINALWAVEFORMAT";
static const WCHAR g_wszEDL[] =L"_EDL";
static const WCHAR g_wszComplexity[] =L"_COMPLEXITYEX";
static const WCHAR g_wszDecoderComplexityRequested[] =L"_DECODERCOMPLEXITYPROFILE";
static const WCHAR g_wszReloadIndexOnSeek[] =L"ReloadIndexOnSeek";
static const WCHAR g_wszStreamNumIndexObjects[] =L"StreamNumIndexObjects";
static const WCHAR g_wszFailSeekOnError[] =L"FailSeekOnError";
static const WCHAR g_wszPermitSeeksBeyondEndOfStream[] =L"PermitSeeksBeyondEndOfStream";
static const WCHAR g_wszUsePacketAtSeekPoint[] =L"UsePacketAtSeekPoint";
static const WCHAR g_wszSourceBufferTime[] =L"SourceBufferTime";
static const WCHAR g_wszSourceMaxBytesAtOnce[] =L"SourceMaxBytesAtOnce";
static const WCHAR g_wszVBREnabled[] =L"_VBRENABLED";
static const WCHAR g_wszVBRQuality[] =L"_VBRQUALITY";
static const WCHAR g_wszVBRBitrateMax[] =L"_RMAX";
static const WCHAR g_wszVBRBufferWindowMax[] =L"_BMAX";
static const WCHAR g_wszVBRPeak[] = L"VBR Peak";
static const WCHAR g_wszBufferAverage[] = L"Buffer Average";
static const WCHAR g_wszComplexityMax[] =L"_COMPLEXITYEXMAX";
static const WCHAR g_wszComplexityOffline[] =L"_COMPLEXITYEXOFFLINE";
static const WCHAR g_wszComplexityLive[] =L"_COMPLEXITYEXLIVE";
static const WCHAR g_wszIsVBRSupported[] =L"_ISVBRSUPPORTED";
static const WCHAR g_wszNumPasses[] = L"_PASSESUSED";
static const WCHAR g_wszMusicSpeechClassMode[] = L"MusicSpeechClassMode";
static const WCHAR g_wszMusicClassMode[] = L"MusicClassMode";
static const WCHAR g_wszSpeechClassMode[] = L"SpeechClassMode";
static const WCHAR g_wszMixedClassMode[] = L"MixedClassMode";
static const WCHAR g_wszSpeechCaps[] = L"SpeechFormatCap";
static const WCHAR g_wszPeakValue[] = L"PeakValue";
static const WCHAR g_wszAverageLevel[] = L"AverageLevel";
static const WCHAR g_wszFold6To2Channels3[] = L"Fold6To2Channels3";
static const WCHAR g_wszFoldToChannelsTemplate[] = L"Fold%luTo%luChannels%lu";
static const WCHAR g_wszDeviceConformanceTemplate[] = L"DeviceConformanceTemplate";
static const WCHAR g_wszEnableFrameInterpolation[] =L"EnableFrameInterpolation";
static const WCHAR g_wszNeedsPreviousSample[] =L"NeedsPreviousSample";
static const WCHAR g_wszWMIsCompilation[] = L"WM/IsCompilation";
typedef LPCWSTR LPCWSTR_WMSDK_TYPE_SAFE;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0001
    {
        WEBSTREAM_SAMPLE_TYPE_FILE = 0x1,
        WEBSTREAM_SAMPLE_TYPE_RENDER = 0x2
    } ;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0002
    {
        WM_SF_CLEANPOINT = 0x1,
        WM_SF_DISCONTINUITY = 0x2,
        WM_SF_DATALOSS = 0x4
    } ;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0003
    {
        WM_SFEX_NOTASYNCPOINT = 0x2,
        WM_SFEX_DATALOSS = 0x4
    } ;
typedef
enum WMT_STATUS
    {
        WMT_ERROR = 0,
        WMT_OPENED = 1,
        WMT_BUFFERING_START = 2,
        WMT_BUFFERING_STOP = 3,
        WMT_EOF = 4,
        WMT_END_OF_FILE = 4,
        WMT_END_OF_SEGMENT = 5,
        WMT_END_OF_STREAMING = 6,
        WMT_LOCATING = 7,
        WMT_CONNECTING = 8,
        WMT_NO_RIGHTS = 9,
        WMT_MISSING_CODEC = 10,
        WMT_STARTED = 11,
        WMT_STOPPED = 12,
        WMT_CLOSED = 13,
        WMT_STRIDING = 14,
        WMT_TIMER = 15,
        WMT_INDEX_PROGRESS = 16,
        WMT_SAVEAS_START = 17,
        WMT_SAVEAS_STOP = 18,
        WMT_NEW_SOURCEFLAGS = 19,
        WMT_NEW_METADATA = 20,
        WMT_BACKUPRESTORE_BEGIN = 21,
        WMT_SOURCE_SWITCH = 22,
        WMT_ACQUIRE_LICENSE = 23,
        WMT_INDIVIDUALIZE = 24,
        WMT_NEEDS_INDIVIDUALIZATION = 25,
        WMT_NO_RIGHTS_EX = 26,
        WMT_BACKUPRESTORE_END = 27,
        WMT_BACKUPRESTORE_CONNECTING = 28,
        WMT_BACKUPRESTORE_DISCONNECTING = 29,
        WMT_ERROR_WITHURL = 30,
        WMT_RESTRICTED_LICENSE = 31,
        WMT_CLIENT_CONNECT = 32,
        WMT_CLIENT_DISCONNECT = 33,
        WMT_NATIVE_OUTPUT_PROPS_CHANGED = 34,
        WMT_RECONNECT_START = 35,
        WMT_RECONNECT_END = 36,
        WMT_CLIENT_CONNECT_EX = 37,
        WMT_CLIENT_DISCONNECT_EX = 38,
        WMT_SET_FEC_SPAN = 39,
        WMT_PREROLL_READY = 40,
        WMT_PREROLL_COMPLETE = 41,
        WMT_CLIENT_PROPERTIES = 42,
        WMT_LICENSEURL_SIGNATURE_STATE = 43,
        WMT_INIT_PLAYLIST_BURN = 44,
        WMT_TRANSCRYPTOR_INIT = 45,
        WMT_TRANSCRYPTOR_SEEKED = 46,
        WMT_TRANSCRYPTOR_READ = 47,
        WMT_TRANSCRYPTOR_CLOSED = 48,
        WMT_PROXIMITY_RESULT = 49,
        WMT_PROXIMITY_COMPLETED = 50,
        WMT_CONTENT_ENABLER = 51
    } WMT_STATUS;
typedef
enum WMT_STREAM_SELECTION
    {
        WMT_OFF = 0,
        WMT_CLEANPOINT_ONLY = 1,
        WMT_ON = 2
    } WMT_STREAM_SELECTION;
typedef
enum WMT_IMAGE_TYPE
    {
        WMT_IT_NONE = 0,
        WMT_IT_BITMAP = 1,
        WMT_IT_JPEG = 2,
        WMT_IT_GIF = 3
    } WMT_IMAGE_TYPE;
typedef
enum WMT_ATTR_DATATYPE
    {
        WMT_TYPE_DWORD = 0,
        WMT_TYPE_STRING = 1,
        WMT_TYPE_BINARY = 2,
        WMT_TYPE_BOOL = 3,
        WMT_TYPE_QWORD = 4,
        WMT_TYPE_WORD = 5,
        WMT_TYPE_GUID = 6
    } WMT_ATTR_DATATYPE;
typedef
enum WMT_ATTR_IMAGETYPE
    {
        WMT_IMAGETYPE_BITMAP = 1,
        WMT_IMAGETYPE_JPEG = 2,
        WMT_IMAGETYPE_GIF = 3
    } WMT_ATTR_IMAGETYPE;
typedef
enum WMT_VERSION
    {
        WMT_VER_4_0 = 0x40000,
        WMT_VER_7_0 = 0x70000,
        WMT_VER_8_0 = 0x80000,
        WMT_VER_9_0 = 0x90000
    } WMT_VERSION;
typedef
enum tagWMT_STORAGE_FORMAT
    {
        WMT_Storage_Format_MP3 = 0,
        WMT_Storage_Format_V1 = ( WMT_Storage_Format_MP3 + 1 )
    } WMT_STORAGE_FORMAT;
typedef
enum tagWMT_DRMLA_TRUST
    {
        WMT_DRMLA_UNTRUSTED = 0,
        WMT_DRMLA_TRUSTED = ( WMT_DRMLA_UNTRUSTED + 1 ) ,
        WMT_DRMLA_TAMPERED = ( WMT_DRMLA_TRUSTED + 1 )
    } WMT_DRMLA_TRUST;
typedef
enum tagWMT_TRANSPORT_TYPE
    {
        WMT_Transport_Type_Unreliable = 0,
        WMT_Transport_Type_Reliable = ( WMT_Transport_Type_Unreliable + 1 )
    } WMT_TRANSPORT_TYPE;
typedef
enum WMT_NET_PROTOCOL
    {
        WMT_PROTOCOL_HTTP = 0
    } WMT_NET_PROTOCOL;
typedef
enum WMT_PLAY_MODE
    {
        WMT_PLAY_MODE_AUTOSELECT = 0,
        WMT_PLAY_MODE_LOCAL = 1,
        WMT_PLAY_MODE_DOWNLOAD = 2,
        WMT_PLAY_MODE_STREAMING = 3
    } WMT_PLAY_MODE;
typedef
enum WMT_PROXY_SETTINGS
    {
        WMT_PROXY_SETTING_NONE = 0,
        WMT_PROXY_SETTING_MANUAL = 1,
        WMT_PROXY_SETTING_AUTO = 2,
        WMT_PROXY_SETTING_BROWSER = 3,
        WMT_PROXY_SETTING_MAX = ( WMT_PROXY_SETTING_BROWSER + 1 )
    } WMT_PROXY_SETTINGS;
typedef
enum WMT_CODEC_INFO_TYPE
    {
        WMT_CODECINFO_AUDIO = 0,
        WMT_CODECINFO_VIDEO = 1,
        WMT_CODECINFO_UNKNOWN = 0xffffffff
    } WMT_CODEC_INFO_TYPE;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0004
    {
        WM_DM_NOTINTERLACED = 0,
        WM_DM_DEINTERLACE_NORMAL = 1,
        WM_DM_DEINTERLACE_HALFSIZE = 2,
        WM_DM_DEINTERLACE_HALFSIZEDOUBLERATE = 3,
        WM_DM_DEINTERLACE_INVERSETELECINE = 4,
        WM_DM_DEINTERLACE_VERTICALHALFSIZEDOUBLERATE = 5
    } ;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0005
    {
        WM_DM_IT_DISABLE_COHERENT_MODE = 0,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_TOP = 1,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_TOP = 2,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_TOP = 3,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_TOP = 4,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_TOP = 5,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_AA_BOTTOM = 6,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BB_BOTTOM = 7,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_BC_BOTTOM = 8,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_CD_BOTTOM = 9,
        WM_DM_IT_FIRST_FRAME_IN_CLIP_IS_DD_BOTTOM = 10
    } ;
typedef
enum tagWMT_OFFSET_FORMAT
    {
        WMT_OFFSET_FORMAT_100NS = 0,
        WMT_OFFSET_FORMAT_FRAME_NUMBERS = ( WMT_OFFSET_FORMAT_100NS + 1 ) ,
        WMT_OFFSET_FORMAT_PLAYLIST_OFFSET = ( WMT_OFFSET_FORMAT_FRAME_NUMBERS + 1 ) ,
        WMT_OFFSET_FORMAT_TIMECODE = ( WMT_OFFSET_FORMAT_PLAYLIST_OFFSET + 1 ) ,
        WMT_OFFSET_FORMAT_100NS_APPROXIMATE = ( WMT_OFFSET_FORMAT_TIMECODE + 1 )
    } WMT_OFFSET_FORMAT;
typedef
enum tagWMT_INDEXER_TYPE
    {
        WMT_IT_PRESENTATION_TIME = 0,
        WMT_IT_FRAME_NUMBERS = ( WMT_IT_PRESENTATION_TIME + 1 ) ,
        WMT_IT_TIMECODE = ( WMT_IT_FRAME_NUMBERS + 1 )
    } WMT_INDEXER_TYPE;
typedef
enum tagWMT_INDEX_TYPE
    {
        WMT_IT_NEAREST_DATA_UNIT = 1,
        WMT_IT_NEAREST_OBJECT = ( WMT_IT_NEAREST_DATA_UNIT + 1 ) ,
        WMT_IT_NEAREST_CLEAN_POINT = ( WMT_IT_NEAREST_OBJECT + 1 )
    } WMT_INDEX_TYPE;
typedef
enum tagWMT_FILESINK_MODE
    {
        WMT_FM_SINGLE_BUFFERS = 0x1,
        WMT_FM_FILESINK_DATA_UNITS = 0x2,
        WMT_FM_FILESINK_UNBUFFERED = 0x4
    } WMT_FILESINK_MODE;
typedef
enum tagWMT_MUSICSPEECH_CLASS_MODE
    {
        WMT_MS_CLASS_MUSIC = 0,
        WMT_MS_CLASS_SPEECH = 1,
        WMT_MS_CLASS_MIXED = 2
    } WMT_MUSICSPEECH_CLASS_MODE;
typedef
enum tagWMT_WATERMARK_ENTRY_TYPE
    {
        WMT_WMETYPE_AUDIO = 1,
        WMT_WMETYPE_VIDEO = 2
    } WMT_WATERMARK_ENTRY_TYPE;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0006
    {
        WM_PLAYBACK_DRC_HIGH = 0,
        WM_PLAYBACK_DRC_MEDIUM = ( WM_PLAYBACK_DRC_HIGH + 1 ) ,
        WM_PLAYBACK_DRC_LOW = ( WM_PLAYBACK_DRC_MEDIUM + 1 )
    } ;
enum __MIDL___MIDL_itf_wmsdkidl_0000_0000_0007
    {
        WMT_TIMECODE_FRAMERATE_30 = 0,
        WMT_TIMECODE_FRAMERATE_30DROP = ( WMT_TIMECODE_FRAMERATE_30 + 1 ) ,
        WMT_TIMECODE_FRAMERATE_25 = ( WMT_TIMECODE_FRAMERATE_30DROP + 1 ) ,
        WMT_TIMECODE_FRAMERATE_24 = ( WMT_TIMECODE_FRAMERATE_25 + 1 )
    } ;
typedef
enum WMT_CREDENTIAL_FLAGS
    {
        WMT_CREDENTIAL_SAVE = 0x1,
        WMT_CREDENTIAL_DONT_CACHE = 0x2,
        WMT_CREDENTIAL_CLEAR_TEXT = 0x4,
        WMT_CREDENTIAL_PROXY = 0x8,
        WMT_CREDENTIAL_ENCRYPT = 0x10
    } WMT_CREDENTIAL_FLAGS;
typedef
enum WM_AETYPE
    {
        WM_AETYPE_INCLUDE = 0x69,
        WM_AETYPE_EXCLUDE = 0x65
    } WM_AETYPE;
typedef
enum WMT_RIGHTS
    {
        WMT_RIGHT_PLAYBACK = 0x1,
        WMT_RIGHT_COPY_TO_NON_SDMI_DEVICE = 0x2,
        WMT_RIGHT_COPY_TO_CD = 0x8,
        WMT_RIGHT_COPY_TO_SDMI_DEVICE = 0x10,
        WMT_RIGHT_ONE_TIME = 0x20,
        WMT_RIGHT_SAVE_STREAM_PROTECTED = 0x40,
        WMT_RIGHT_COPY = 0x80,
        WMT_RIGHT_COLLABORATIVE_PLAY = 0x100,
        WMT_RIGHT_SDMI_TRIGGER = 0x10000,
        WMT_RIGHT_SDMI_NOMORECOPIES = 0x20000
    } WMT_RIGHTS;
#pragma pack(push)
#pragma pack(2)
typedef struct _WMStreamPrioritizationRecord
    {
    WORD wStreamNumber;
    BOOL fMandatory;
    } WM_STREAM_PRIORITY_RECORD;
#pragma pack(pop)
typedef struct _WMWriterStatistics
    {
    QWORD qwSampleCount;
    QWORD qwByteCount;
    QWORD qwDroppedSampleCount;
    QWORD qwDroppedByteCount;
    DWORD dwCurrentBitrate;
    DWORD dwAverageBitrate;
    DWORD dwExpectedBitrate;
    DWORD dwCurrentSampleRate;
    DWORD dwAverageSampleRate;
    DWORD dwExpectedSampleRate;
    } WM_WRITER_STATISTICS;
typedef struct _WMWriterStatisticsEx
    {
    DWORD dwBitratePlusOverhead;
    DWORD dwCurrentSampleDropRateInQueue;
    DWORD dwCurrentSampleDropRateInCodec;
    DWORD dwCurrentSampleDropRateInMultiplexer;
    DWORD dwTotalSampleDropsInQueue;
    DWORD dwTotalSampleDropsInCodec;
    DWORD dwTotalSampleDropsInMultiplexer;
    } WM_WRITER_STATISTICS_EX;
typedef struct _WMReaderStatistics
    {
    DWORD cbSize;
    DWORD dwBandwidth;
    DWORD cPacketsReceived;
    DWORD cPacketsRecovered;
    DWORD cPacketsLost;
    WORD wQuality;
    } WM_READER_STATISTICS;
typedef struct _WMReaderClientInfo
    {
    DWORD cbSize;
    WCHAR *wszLang;
    WCHAR *wszBrowserUserAgent;
    WCHAR *wszBrowserWebPage;
    QWORD qwReserved;
    LPARAM *pReserved;
    WCHAR *wszHostExe;
    QWORD qwHostVersion;
    WCHAR *wszPlayerUserAgent;
    } WM_READER_CLIENTINFO;
typedef struct _WMClientProperties
    {
    DWORD dwIPAddress;
    DWORD dwPort;
    } WM_CLIENT_PROPERTIES;
typedef struct _WMClientPropertiesEx
    {
    DWORD cbSize;
    LPCWSTR pwszIPAddress;
    LPCWSTR pwszPort;
    LPCWSTR pwszDNSName;
    } WM_CLIENT_PROPERTIES_EX;
typedef struct _WMPortNumberRange
    {
    WORD wPortBegin;
    WORD wPortEnd;
    } WM_PORT_NUMBER_RANGE;
typedef struct _WMT_BUFFER_SEGMENT
    {
    INSSBuffer *pBuffer;
    DWORD cbOffset;
    DWORD cbLength;
    } WMT_BUFFER_SEGMENT;
typedef struct _WMT_PAYLOAD_FRAGMENT
    {
    DWORD dwPayloadIndex;
    WMT_BUFFER_SEGMENT segmentData;
    } WMT_PAYLOAD_FRAGMENT;
typedef struct _WMT_FILESINK_DATA_UNIT
    {
    WMT_BUFFER_SEGMENT packetHeaderBuffer;
    DWORD cPayloads;
    WMT_BUFFER_SEGMENT *pPayloadHeaderBuffers;
    DWORD cPayloadDataFragments;
    WMT_PAYLOAD_FRAGMENT *pPayloadDataFragments;
    } WMT_FILESINK_DATA_UNIT;
typedef struct _WMT_WEBSTREAM_FORMAT
    {
    WORD cbSize;
    WORD cbSampleHeaderFixedData;
    WORD wVersion;
    WORD wReserved;
    } WMT_WEBSTREAM_FORMAT;
typedef struct _WMT_WEBSTREAM_SAMPLE_HEADER
    {
    WORD cbLength;
    WORD wPart;
    WORD cTotalParts;
    WORD wSampleType;
    WCHAR wszURL[ 1 ];
    } WMT_WEBSTREAM_SAMPLE_HEADER;
typedef struct _WMAddressAccessEntry
    {
    DWORD dwIPAddress;
    DWORD dwMask;
    } WM_ADDRESS_ACCESSENTRY;
#pragma pack(push)
#pragma pack(1)
typedef struct _WMPicture
    {
    LPWSTR pwszMIMEType;
    BYTE bPictureType;
    LPWSTR pwszDescription;
    DWORD dwDataLen;
    BYTE *pbData;
    } WM_PICTURE;
typedef struct _WMSynchronisedLyrics
    {
    BYTE bTimeStampFormat;
    BYTE bContentType;
    LPWSTR pwszContentDescriptor;
    DWORD dwLyricsLen;
    BYTE *pbLyrics;
    } WM_SYNCHRONISED_LYRICS;
typedef struct _WMUserWebURL
    {
    LPWSTR pwszDescription;
    LPWSTR pwszURL;
    } WM_USER_WEB_URL;
typedef struct _WMUserText
    {
    LPWSTR pwszDescription;
    LPWSTR pwszText;
    } WM_USER_TEXT;
typedef struct _WMLeakyBucketPair
    {
    DWORD dwBitrate;
    DWORD msBufferWindow;
    } WM_LEAKY_BUCKET_PAIR;
typedef struct _WMStreamTypeInfo
    {
    GUID guidMajorType;
    DWORD cbFormat;
    } WM_STREAM_TYPE_INFO;
#pragma pack(pop)
typedef struct __WMT_WATERMARK_ENTRY
    {
    WMT_WATERMARK_ENTRY_TYPE wmetType;
    CLSID clsid;
    UINT cbDisplayName;
    LPWSTR pwszDisplayName;
    } WMT_WATERMARK_ENTRY;
typedef struct __WMT_VIDEOIMAGE_SAMPLE
    {
    DWORD dwMagic;
    ULONG cbStruct;
    DWORD dwControlFlags;
    DWORD dwInputFlagsCur;
    LONG lCurMotionXtoX;
    LONG lCurMotionYtoX;
    LONG lCurMotionXoffset;
    LONG lCurMotionXtoY;
    LONG lCurMotionYtoY;
    LONG lCurMotionYoffset;
    LONG lCurBlendCoef1;
    LONG lCurBlendCoef2;
    DWORD dwInputFlagsPrev;
    LONG lPrevMotionXtoX;
    LONG lPrevMotionYtoX;
    LONG lPrevMotionXoffset;
    LONG lPrevMotionXtoY;
    LONG lPrevMotionYtoY;
    LONG lPrevMotionYoffset;
    LONG lPrevBlendCoef1;
    LONG lPrevBlendCoef2;
    } WMT_VIDEOIMAGE_SAMPLE;
typedef struct __WMT_VIDEOIMAGE_SAMPLE2
    {
    DWORD dwMagic;
    DWORD dwStructSize;
    DWORD dwControlFlags;
    DWORD dwViewportWidth;
    DWORD dwViewportHeight;
    DWORD dwCurrImageWidth;
    DWORD dwCurrImageHeight;
    FLOAT fCurrRegionX0;
    FLOAT fCurrRegionY0;
    FLOAT fCurrRegionWidth;
    FLOAT fCurrRegionHeight;
    FLOAT fCurrBlendCoef;
    DWORD dwPrevImageWidth;
    DWORD dwPrevImageHeight;
    FLOAT fPrevRegionX0;
    FLOAT fPrevRegionY0;
    FLOAT fPrevRegionWidth;
    FLOAT fPrevRegionHeight;
    FLOAT fPrevBlendCoef;
    DWORD dwEffectType;
    DWORD dwNumEffectParas;
    FLOAT fEffectPara0;
    FLOAT fEffectPara1;
    FLOAT fEffectPara2;
    FLOAT fEffectPara3;
    FLOAT fEffectPara4;
    BOOL bKeepPrevImage;
    } WMT_VIDEOIMAGE_SAMPLE2;
typedef struct _WMMediaType
    {
    GUID majortype;
    GUID subtype;
    BOOL bFixedSizeSamples;
    BOOL bTemporalCompression;
    ULONG lSampleSize;
    GUID formattype;
    IUnknown *pUnk;
    ULONG cbFormat;
                    BYTE *pbFormat;
    } WM_MEDIA_TYPE;
typedef struct tagWMVIDEOINFOHEADER
{
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    LONGLONG AvgTimePerFrame;
    BITMAPINFOHEADER bmiHeader;
} WMVIDEOINFOHEADER;
typedef struct tagWMVIDEOINFOHEADER2
{
    RECT rcSource;
    RECT rcTarget;
    DWORD dwBitRate;
    DWORD dwBitErrorRate;
    LONGLONG AvgTimePerFrame;
    DWORD dwInterlaceFlags;
    DWORD dwCopyProtectFlags;
    DWORD dwPictAspectRatioX;
    DWORD dwPictAspectRatioY;
    DWORD dwReserved1;
    DWORD dwReserved2;
    BITMAPINFOHEADER bmiHeader;
} WMVIDEOINFOHEADER2;
typedef struct tagWMMPEG2VIDEOINFO
{
    WMVIDEOINFOHEADER2 hdr;
    DWORD dwStartTimeCode;
    DWORD cbSequenceHeader;
    DWORD dwProfile;
    DWORD dwLevel;
    DWORD dwFlags;
    DWORD dwSequenceHeader[1];
} WMMPEG2VIDEOINFO;
typedef struct tagWMSCRIPTFORMAT
{
    GUID scriptType;
} WMSCRIPTFORMAT;
EXTERN_GUID(WMMEDIASUBTYPE_Base,
0x00000000, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIATYPE_Video,
0x73646976, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_RGB1,
0xe436eb78, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB4,
0xe436eb79, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB8,
0xe436eb7a, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB565,
0xe436eb7b, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB555,
0xe436eb7c, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB24,
0xe436eb7d, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_RGB32,
0xe436eb7e, 0x524f, 0x11ce, 0x9f, 0x53, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
EXTERN_GUID(WMMEDIASUBTYPE_I420,
0x30323449, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_IYUV,
0x56555949, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YV12,
0x32315659, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YUY2,
0x32595559, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_P422,
0x32323450, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_UYVY,
0x59565955, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YVYU,
0x55595659, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_YVU9,
0x39555659, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_VIDEOIMAGE,
0x1d4a45f2, 0xe5f6, 0x4b44, 0x83, 0x88, 0xf0, 0xae, 0x5c, 0x0e, 0x0c, 0x37);
EXTERN_GUID(WMMEDIASUBTYPE_MP43,
0x3334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MP4S,
0x5334504D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_M4S2,
0x3253344D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMV1,
0x31564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMV2,
0x32564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MSS1,
0x3153534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MPEG2_VIDEO,
0xe06d8026, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x5f, 0x6c, 0xbb, 0xea);
EXTERN_GUID(WMMEDIATYPE_Audio,
0x73647561, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_PCM,
0x00000001, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_DRM,
0x00000009, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV9,
0x00000162, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudio_Lossless,
0x00000163, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MSS2,
0x3253534D, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID( WMMEDIASUBTYPE_WMSP1,
0x0000000A,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71);
EXTERN_GUID( WMMEDIASUBTYPE_WMSP2,
0x0000000B,0x0000,0x0010,0x80,0x00,0x00,0xAA,0x00,0x38,0x9B,0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMV3,
0x33564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMVP,
0x50564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WVP2,
0x32505657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMVA,
0x41564D57, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WVC1,
0x31435657, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV8,
0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV7,
0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WMAudioV2,
0x00000161, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_ACELPnet,
0x00000130, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_MP3,
0x00000055, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xAA, 0x00, 0x38, 0x9B, 0x71);
EXTERN_GUID(WMMEDIASUBTYPE_WebStream,
0x776257d4, 0xc627, 0x41cb, 0x8f, 0x81, 0x7a, 0xc7, 0xff, 0x1c, 0x40, 0xcc);
EXTERN_GUID(WMMEDIATYPE_Script,
0x73636d64, 0x0000, 0x0010, 0x80, 0x00, 0x00, 0xaa, 0x00, 0x38, 0x9b, 0x71);
EXTERN_GUID(WMMEDIATYPE_Image,
0x34a50fd8, 0x8aa5, 0x4386, 0x81, 0xfe, 0xa0, 0xef, 0xe0, 0x48, 0x8e, 0x31);
EXTERN_GUID(WMMEDIATYPE_FileTransfer,
0xd9e47579, 0x930e, 0x4427, 0xad, 0xfc, 0xad, 0x80, 0xf2, 0x90, 0xe4, 0x70);
EXTERN_GUID(WMMEDIATYPE_Text,
0x9bba1ea7, 0x5ab2, 0x4829, 0xba, 0x57, 0x9, 0x40, 0x20, 0x9b, 0xcf, 0x3e);
EXTERN_GUID(WMFORMAT_VideoInfo,
0x05589f80, 0xc356, 0x11ce, 0xbf, 0x01, 0x00, 0xaa, 0x00, 0x55, 0x59, 0x5a);
EXTERN_GUID(WMFORMAT_MPEG2Video,
0xe06d80e3, 0xdb46, 0x11cf, 0xb4, 0xd1, 0x00, 0x80, 0x05f, 0x6c, 0xbb, 0xea);
EXTERN_GUID(WMFORMAT_WaveFormatEx,
0x05589f81, 0xc356, 0x11ce, 0xbf, 0x01, 0x00, 0xaa, 0x00, 0x55, 0x59, 0x5a);
EXTERN_GUID(WMFORMAT_Script,
0x5c8510f2, 0xdebe, 0x4ca7, 0xbb, 0xa5, 0xf0, 0x7a, 0x10, 0x4f, 0x8d, 0xff);
EXTERN_GUID(WMFORMAT_WebStream,
0xda1e6b13, 0x8359, 0x4050, 0xb3, 0x98, 0x38, 0x8e, 0x96, 0x5b, 0xf0, 0x0c);
EXTERN_GUID( WMSCRIPTTYPE_TwoStrings,
0x82f38a70,0xc29f,0x11d1,0x97,0xad,0x00,0xa0,0xc9,0x5e,0xa8,0x50);
EXTERN_GUID( WM_SampleExtensionGUID_OutputCleanPoint, 0xf72a3c6f, 0x6eb4, 0x4ebc, 0xb1, 0x92, 0x9, 0xad, 0x97, 0x59, 0xe8, 0x28 );
EXTERN_GUID( WM_SampleExtensionGUID_Timecode, 0x399595ec, 0x8667, 0x4e2d, 0x8f, 0xdb, 0x98, 0x81, 0x4c, 0xe7, 0x6c, 0x1e);
EXTERN_GUID( WM_SampleExtensionGUID_ChromaLocation, 0x4c5acca0, 0x9276, 0x4b2c, 0x9e, 0x4c, 0xa0, 0xed, 0xef, 0xdd, 0x21, 0x7e);
EXTERN_GUID( WM_SampleExtensionGUID_ColorSpaceInfo, 0xf79ada56, 0x30eb, 0x4f2b, 0x9f, 0x7a, 0xf2, 0x4b, 0x13, 0x9a, 0x11, 0x57 );
EXTERN_GUID( WM_SampleExtensionGUID_UserDataInfo, 0x732bb4fa, 0x78be, 0x4549, 0x99, 0xbd, 0x2, 0xdb, 0x1a, 0x55, 0xb7, 0xa8 );
EXTERN_GUID( WM_SampleExtensionGUID_FileName, 0xe165ec0e, 0x19ed, 0x45d7, 0xb4, 0xa7, 0x25, 0xcb, 0xd1, 0xe2, 0x8e, 0x9b);
EXTERN_GUID( WM_SampleExtensionGUID_ContentType, 0xd590dc20, 0x07bc, 0x436c, 0x9c, 0xf7, 0xf3, 0xbb, 0xfb, 0xf1, 0xa4, 0xdc );
EXTERN_GUID( WM_SampleExtensionGUID_PixelAspectRatio, 0x1b1ee554, 0xf9ea, 0x4bc8, 0x82, 0x1a, 0x37, 0x6b, 0x74, 0xe4, 0xc4, 0xb8 );
EXTERN_GUID( WM_SampleExtensionGUID_SampleDuration, 0xc6bd9450, 0x867f, 0x4907, 0x83, 0xa3, 0xc7, 0x79, 0x21, 0xb7, 0x33, 0xad );
EXTERN_GUID( WM_SampleExtensionGUID_SampleProtectionSalt, 0x5403deee, 0xb9ee, 0x438f, 0xaa, 0x83, 0x38, 0x4, 0x99, 0x7e, 0x56, 0x9d );
#pragma pack(push)
#pragma pack(1)
typedef struct _WMT_COLORSPACEINFO_EXTENSION_DATA
    {
    BYTE ucColorPrimaries;
    BYTE ucColorTransferChar;
    BYTE ucColorMatrixCoef;
    } WMT_COLORSPACEINFO_EXTENSION_DATA;
#pragma pack(pop)
#pragma pack(push)
#pragma pack(2)
typedef struct _WMT_TIMECODE_EXTENSION_DATA
    {
    WORD wRange;
    DWORD dwTimecode;
    DWORD dwUserbits;
    DWORD dwAmFlags;
    } WMT_TIMECODE_EXTENSION_DATA;
#pragma pack(pop)
typedef struct _DRM_VAL16
    {
    BYTE val[ 16 ];
    } DRM_VAL16;
EXTERN_GUID( IID_IWMMediaProps, 0x96406bce,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMVideoMediaProps, 0x96406bcf,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriter, 0x96406bd4,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMInputMediaProps, 0x96406bd5,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReader, 0x96406bd6,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMSyncReader, 0x9397f121,0x7705,0x4dc9,0xb0,0x49,0x98,0xb6,0x98,0x18,0x84,0x14 );
EXTERN_GUID( IID_IWMSyncReader2, 0xfaed3d21,0x1b6b,0x4af7,0x8c,0xb6,0x3e,0x18,0x9b,0xbc,0x18,0x7b );
EXTERN_GUID( IID_IWMOutputMediaProps, 0x96406bd7,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMStatusCallback, 0x6d7cdc70,0x9888,0x11d3,0x8e,0xdc,0x00,0xc0,0x4f,0x61,0x09,0xcf );
EXTERN_GUID( IID_IWMReaderCallback, 0x96406bd8,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMCredentialCallback, 0x342e0eb7,0xe651,0x450c,0x97,0x5b,0x2a,0xce,0x2c,0x90,0xc4,0x8e );
EXTERN_GUID( IID_IWMMetadataEditor, 0x96406bd9,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMMetadataEditor2, 0x203cffe3,0x2e18,0x4fdf,0xb5,0x9d,0x6e,0x71,0x53,0x05,0x34,0xcf );
EXTERN_GUID( IID_IWMDRMEditor, 0xFF130EBC,0xA6C3,0x42A6,0xB4,0x01,0xC3,0x38,0x2C,0x3E,0x08,0xB3 );
EXTERN_GUID( IID_IWMHeaderInfo, 0x96406bda,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMHeaderInfo2, 0x15cf9781,0x454e,0x482e,0xb3,0x93,0x85,0xfa,0xe4,0x87,0xa8,0x10 );
EXTERN_GUID( IID_IWMHeaderInfo3, 0x15CC68E3,0x27CC,0x4ecd,0xB2,0x22,0x3F,0x5D,0x02,0xD8,0x0B,0xD5 );
EXTERN_GUID( IID_IWMProfileManager, 0xd16679f2,0x6ca0,0x472d,0x8d,0x31,0x2f,0x5d,0x55,0xae,0xe1,0x55 );
EXTERN_GUID( IID_IWMProfileManager2, 0x7a924e51,0x73c1,0x494d,0x80,0x19,0x23,0xd3,0x7e,0xd9,0xb8,0x9a );
EXTERN_GUID( IID_IWMProfileManagerLanguage, 0xba4dcc78,0x7ee0,0x4ab8,0xb2,0x7a,0xdb,0xce,0x8b,0xc5,0x14,0x54 );
EXTERN_GUID( IID_IWMProfile, 0x96406bdb,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMProfile2, 0x07e72d33,0xd94e,0x4be7,0x88,0x43,0x60,0xae,0x5f,0xf7,0xe5,0xf5 );
EXTERN_GUID( IID_IWMProfile3, 0x00ef96cc,0xa461,0x4546,0x8b,0xcd,0xc9,0xa2,0x8f,0x0e,0x06,0xf5 );
EXTERN_GUID( IID_IWMStreamConfig, 0x96406bdc,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMStreamConfig2, 0x7688d8cb,0xfc0d,0x43bd,0x94,0x59,0x5a,0x8d,0xec,0x20,0x0c,0xfa );
EXTERN_GUID( IID_IWMStreamConfig3, 0xcb164104,0x3aa9,0x45a7,0x9a,0xc9,0x4d,0xae,0xe1,0x31,0xd6,0xe1 );
EXTERN_GUID( IID_IWMStreamList, 0x96406bdd,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMMutualExclusion, 0x96406bde,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMMutualExclusion2, 0x302b57d,0x89d1,0x4ba2,0x85,0xc9,0x16,0x6f,0x2c,0x53,0xeb,0x91 );
EXTERN_GUID( IID_IWMBandwidthSharing, 0xad694af1,0xf8d9,0x42f8,0xbc,0x47,0x70,0x31,0x1b,0x0c,0x4f,0x9e );
EXTERN_GUID( IID_IWMStreamPrioritization, 0x8c1c6090,0xf9a8,0x4748,0x8e,0xc3,0xdd,0x11,0x08,0xba,0x1e,0x77 );
EXTERN_GUID( IID_IWMWriterAdvanced, 0x96406be3,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriterAdvanced2, 0x962dc1ec,0xc046,0x4db8,0x9c,0xc7,0x26,0xce,0xae,0x50,0x08,0x17 );
EXTERN_GUID( IID_IWMWriterAdvanced3, 0x2cd6492d,0x7c37,0x4e76,0x9d,0x3b,0x59,0x26,0x11,0x83,0xa2,0x2e );
EXTERN_GUID( IID_IWMWriterPreprocess, 0xfc54a285,0x38c4,0x45b5,0xaa,0x23,0x85,0xb9,0xf7,0xcb,0x42,0x4b );
EXTERN_GUID( IID_IWMWriterSink, 0x96406be4,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriterFileSink, 0x96406be5,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMWriterFileSink2, 0x14282ba7,0x4aef,0x4205,0x8c,0xe5,0xc2,0x29,0x03,0x5a,0x05,0xbc );
EXTERN_GUID( IID_IWMWriterFileSink3, 0x3fea4feb,0x2945,0x47a7,0xa1,0xdd,0xc5,0x3a,0x8f,0xc4,0xc4,0x5c );
EXTERN_GUID( IID_IWMWriterNetworkSink, 0x96406be7,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMClientConnections, 0x73c66010,0xa299,0x41df,0xb1,0xf0,0xcc,0xf0,0x3b,0x09,0xc1,0xc6 );
EXTERN_GUID( IID_IWMClientConnections2, 0x4091571e,0x4701,0x4593,0xbb,0x3d,0xd5,0xf5,0xf0,0xc7,0x42,0x46 );
EXTERN_GUID( IID_IWMReaderAdvanced, 0x96406bea,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReaderAdvanced2, 0xae14a945,0xb90c,0x4d0d,0x91,0x27,0x80,0xd6,0x65,0xf7,0xd7,0x3e );
EXTERN_GUID( IID_IWMReaderAdvanced3, 0x5dc0674b,0xf04b,0x4a4e,0x9f,0x2a,0xb1,0xaf,0xde,0x2c,0x81,0x00 );
EXTERN_GUID( IID_IWMReaderAdvanced4, 0x945a76a2,0x12ae,0x4d48,0xbd,0x3c,0xcd,0x1d,0x90,0x39,0x9b,0x85 );
EXTERN_GUID( IID_IWMReaderAdvanced5, 0x24c44db0,0x55d1,0x49ae,0xa5,0xcc,0xf1,0x38,0x15,0xe3,0x63,0x63 );
EXTERN_GUID( IID_IWMReaderAdvanced6, 0x18a2e7f8,0x428f,0x4acd,0x8a,0x00,0xe6,0x46,0x39,0xbc,0x93,0xde );
EXTERN_GUID( IID_IWMPlayerHook, 0xe5b7ca9a,0x0f1c,0x4f66,0x90,0x02,0x74,0xec,0x50,0xd8,0xb3,0x04 );
EXTERN_GUID( IID_IWMDRMReader, 0xd2827540,0x3ee7,0x432c,0xb1,0x4c,0xdc,0x17,0xf0,0x85,0xd3,0xb3 );
EXTERN_GUID( IID_IWMDRMReader2, 0xbefe7a75,0x9f1d,0x4075,0xb9,0xd9,0xa3,0xc3,0x7b,0xda,0x49,0xa0 );
EXTERN_GUID( IID_IWMDRMReader3, 0xe08672de,0xf1e7,0x4ff4,0xa0,0xa3,0xfc,0x4b,0x08,0xe4,0xca,0xf8 );
EXTERN_GUID( IID_IWMReaderPlaylistBurn, 0xf28c0300,0x9baa,0x4477,0xa8,0x46,0x17,0x44,0xd9,0xcb,0xf5,0x33 );
EXTERN_GUID( IID_IWMReaderCallbackAdvanced, 0x96406beb,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReaderNetworkConfig,0x96406bec,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMReaderStreamClock, 0x96406bed,0x2b2b,0x11d3,0xb3,0x6b,0x00,0xc0,0x4f,0x61,0x08,0xff );
EXTERN_GUID( IID_IWMIndexer, 0x6d7cdc71,0x9888,0x11d3,0x8e,0xdc,0x00,0xc0,0x4f,0x61,0x09,0xcf );
EXTERN_GUID( IID_IWMIndexer2, 0xb70f1e42,0x6255,0x4df0,0xa6,0xb9,0x02,0xb2,0x12,0xd9,0xe2,0xbb );
EXTERN_GUID( IID_IWMReaderAllocatorEx, 0x9f762fa7,0xa22e,0x428d,0x93,0xc9,0xac,0x82,0xf3,0xaa,0xfe,0x5a );
EXTERN_GUID( IID_IWMReaderTypeNegotiation, 0xfdbe5592,0x81a1,0x41ea,0x93,0xbd,0x73,0x5c,0xad,0x1a,0xdc,0x5 );
EXTERN_GUID( IID_IWMLicenseBackup, 0x05E5AC9F,0x3FB6,0x4508,0xBB,0x43,0xA4,0x06,0x7B,0xA1,0xEB,0xE8);
EXTERN_GUID( IID_IWMLicenseRestore, 0xC70B6334,0xa22e,0x4efb,0xA2,0x45,0x15,0xE6,0x5A,0x00,0x4A,0x13);
EXTERN_GUID( IID_IWMBackupRestoreProps, 0x3C8E0DA6,0x996F,0x4ff3,0xA1,0xAF,0x48,0x38,0xF9,0x37,0x7e,0x2e);
EXTERN_GUID( IID_IWMPacketSize, 0xcdfb97ab,0x188f,0x40b3,0xb6,0x43,0x5b,0x79,0x03,0x97,0x5c,0x59);
EXTERN_GUID( IID_IWMPacketSize2, 0x8bfc2b9e,0xb646,0x4233,0xa8,0x77,0x1c,0x6a,0x7,0x96,0x69,0xdc);
EXTERN_GUID( IID_IWMRegisterCallback, 0xcf4b1f99,0x4de2,0x4e49,0xa3,0x63,0x25,0x27,0x40,0xd9,0x9b,0xc1);
EXTERN_GUID( IID_IWMWriterPostView, 0x81e20ce4,0x75ef,0x491a,0x80,0x04,0xfc,0x53,0xc4,0x5b,0xdc,0x3e);
EXTERN_GUID( IID_IWMWriterPostViewCallback, 0xd9d6549d,0xa193,0x4f24,0xb3,0x08,0x03,0x12,0x3d,0x9b,0x7f,0x8d);
EXTERN_GUID( IID_IWMCodecInfo, 0xa970f41e,0x34de,0x4a98,0xb3,0xba,0xe4,0xb3,0xca,0x75,0x28,0xf0);
EXTERN_GUID( IID_IWMCodecInfo2, 0xaa65e273,0xb686,0x4056,0x91,0xec,0xdd,0x76,0x8d,0x4d,0xf7,0x10);
EXTERN_GUID( IID_IWMCodecInfo3, 0x7e51f487,0x4d93,0x4f98,0x8a,0xb4,0x27,0xd0,0x56,0x5a,0xdc,0x51);
EXTERN_GUID( IID_IWMPropertyVault, 0x72995A79,0x5090,0x42a4,0x9C,0x8C,0xD9,0xD0,0xB6,0xD3,0x4B,0xE5 );
EXTERN_GUID( IID_IWMIStreamProps, 0x6816dad3,0x2b4b,0x4c8e,0x81,0x49,0x87,0x4c,0x34,0x83,0xa7,0x53 );
EXTERN_GUID( IID_IWMLanguageList, 0xdf683f00,0x2d49,0x4d8e,0x92,0xb7,0xfb,0x19,0xf6,0xa0,0xdc,0x57 );
EXTERN_GUID( IID_IWMDRMWriter, 0xd6ea5dd0,0x12a0,0x43f4,0x90,0xab,0xa3,0xfd,0x45,0x1e,0x6a,0x07 );
EXTERN_GUID( IID_IWMDRMWriter2, 0x38ee7a94,0x40e2,0x4e10,0xaa,0x3f,0x33,0xfd,0x32,0x10,0xed,0x5b );
EXTERN_GUID( IID_IWMDRMWriter3, 0xa7184082,0xa4aa,0x4dde,0xac,0x9c,0xe7,0x5d,0xbd,0x11,0x17,0xce );
EXTERN_GUID( IID_IWMWriterPushSink, 0xdc10e6a5,0x072c,0x467d,0xbf,0x57,0x63,0x30,0xa9,0xdd,0xe1,0x2a );
EXTERN_GUID( IID_IWMReaderNetworkConfig2,0xd979a853,0x042b,0x4050,0x83,0x87,0xc9,0x39,0xdb,0x22,0x01,0x3f );
EXTERN_GUID( IID_IWMWatermarkInfo, 0x6f497062,0xf2e2,0x4624,0x8e,0xa7,0x9d,0xd4,0x0d,0x81,0xfc,0x8d );
EXTERN_GUID( IID_IWMReaderAccelerator, 0xbddc4d08,0x944d,0x4d52,0xa6,0x12,0x46,0xc3,0xfd,0xa0,0x7d,0xd4 );
EXTERN_GUID( IID_IWMReaderTimecode, 0xf369e2f0,0xe081,0x4fe6,0x84,0x50,0xb8,0x10,0xb2,0xf4,0x10,0xd1 );
EXTERN_GUID( IID_IWMImageInfo, 0x9f0aa3b6,0x7267,0x4d89,0x88,0xf2,0xba,0x91,0x5a,0xa5,0xc4,0xc6);
EXTERN_GUID( IID_IWMAddressAccess, 0xBB3C6389,0x1633,0x4e92,0xAF,0x14,0x9F,0x31,0x73,0xBA,0x39,0xD0 );
EXTERN_GUID( IID_IWMAddressAccess2, 0x65a83fc2,0x3e98,0x4d4d,0x81,0xb5,0x2a,0x74,0x28,0x86,0xb3,0x3d );
EXTERN_GUID( IID_IWMDeviceRegistration, 0xf6211f03,0x8d21,0x4e94,0x93,0xe6,0x85,0x10,0x80,0x5f,0x2d,0x99 );
EXTERN_GUID( IID_IWMRegisteredDevice, 0xa4503bec,0x5508,0x4148,0x97,0xac,0xbf,0xa7,0x57,0x60,0xa7,0x0d );
EXTERN_GUID( IID_IWMProximityDetection, 0x6A9FD8EE,0xB651,0x4bf0,0xB8,0x49,0x7D,0x4E,0xCE,0x79,0xA2,0xB1 );
EXTERN_GUID( IID_IWMDRMMessageParser, 0xa73a0072,0x25a0,0x4c99,0xb4,0xa5,0xed,0xe8,0x10,0x1a,0x6c,0x39 );
EXTERN_GUID( IID_IWMDRMTranscryptor, 0x69059850,0x6e6f,0x4bb2,0x80,0x6f,0x71,0x86,0x3d,0xdf,0xc4,0x71 );
EXTERN_GUID( IID_IWMDRMTranscryptor2, 0xe0da439f,0xd331,0x496a,0xbe,0xce,0x18,0xe5,0xba,0xc5,0xdd,0x23 );
EXTERN_GUID( IID_IWMDRMTranscryptionManager, 0xb1a887b2,0xa4f0,0x407a,0xb0,0x2e,0xef,0xbd,0x23,0xbb,0xec,0xdf );
EXTERN_GUID( IID_IWMLicenseRevocationAgent, 0x6967f2c9,0x4e26,0x4b57,0x88,0x94,0x79,0x98,0x80,0xf7,0xac,0x7b );
EXTERN_GUID( CLSID_WMMUTEX_Language, 0xD6E22A00,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMMUTEX_Bitrate, 0xD6E22A01,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMMUTEX_Presentation, 0xD6E22A02,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMMUTEX_Unknown, 0xD6E22A03,0x35DA,0x11D1,0x90,0x34,0x00,0xA0,0xC9,0x03,0x49,0xBE );
EXTERN_GUID( CLSID_WMBandwidthSharing_Exclusive, 0xaf6060aa,0x5197,0x11d2,0xb6,0xaf,0x00,0xc0,0x4f,0xd9,0x08,0xe9 );
EXTERN_GUID( CLSID_WMBandwidthSharing_Partial, 0xaf6060ab,0x5197,0x11d2,0xb6,0xaf,0x00,0xc0,0x4f,0xd9,0x08,0xe9 );
EXTERN_GUID( WMT_DMOCATEGORY_AUDIO_WATERMARK, 0x65221c5a, 0xfa75, 0x4b39, 0xb5, 0x0c, 0x06, 0xc3, 0x36, 0xb6, 0xa3, 0xef );
EXTERN_GUID( WMT_DMOCATEGORY_VIDEO_WATERMARK, 0x187cc922, 0x8efc, 0x4404, 0x9d, 0xaf, 0x63, 0xf4, 0x83, 0x0d, 0xf1, 0xbc );
HRESULT STDMETHODCALLTYPE WMIsContentProtected( const WCHAR *pwszFileName, BOOL *pfIsProtected );
HRESULT STDMETHODCALLTYPE WMCreateWriter( IUnknown* pUnkCert, IWMWriter **ppWriter );
HRESULT STDMETHODCALLTYPE WMCreateReader( IUnknown* pUnkCert, DWORD dwRights, IWMReader **ppReader );
HRESULT STDMETHODCALLTYPE WMCreateSyncReader( IUnknown* pUnkCert, DWORD dwRights, IWMSyncReader **ppSyncReader );
HRESULT STDMETHODCALLTYPE WMCreateEditor( IWMMetadataEditor **ppEditor );
HRESULT STDMETHODCALLTYPE WMCreateIndexer( IWMIndexer **ppIndexer );
HRESULT STDMETHODCALLTYPE WMCreateBackupRestorer( IUnknown *pCallback, IWMLicenseBackup **ppBackup );
HRESULT STDMETHODCALLTYPE WMCreateProfileManager( IWMProfileManager **ppProfileManager );
HRESULT STDMETHODCALLTYPE WMCreateWriterFileSink( IWMWriterFileSink **ppSink );
HRESULT STDMETHODCALLTYPE WMCreateWriterNetworkSink( IWMWriterNetworkSink **ppSink );
HRESULT STDMETHODCALLTYPE WMCreateWriterPushSink( IWMWriterPushSink **ppSink );
HRESULT STDMETHODCALLTYPE WMCreateDeviceRegistration( IWMDeviceRegistration **ppDevReg );
HRESULT STDMETHODCALLTYPE WMCreateDRMTranscryptor( IWMDRMTranscryptor **ppTranscryptor );
HRESULT STDMETHODCALLTYPE WMCreateDRMTranscryptionManager( IWMDRMTranscryptionManager **ppTranscryptionManager );
HRESULT STDMETHODCALLTYPE WMCreateLicenseRevocationAgent( IUnknown *pCallback, IWMLicenseRevocationAgent ** ppLicenseRevocationAgent );
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMMediaProps;
    typedef struct IWMMediaPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMMediaProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMMediaProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMMediaProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IWMMediaProps * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IWMMediaProps * This,
                        WM_MEDIA_TYPE *pType,
                            DWORD *pcbType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IWMMediaProps * This,
                       WM_MEDIA_TYPE *pType);
        END_INTERFACE
    } IWMMediaPropsVtbl;
    interface IWMMediaProps
    {
        CONST_VTBL struct IWMMediaPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) )
    ( (This)->lpVtbl -> SetMediaType(This,pType) )
EXTERN_C const IID IID_IWMVideoMediaProps;
    typedef struct IWMVideoMediaPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMVideoMediaProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMVideoMediaProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMVideoMediaProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IWMVideoMediaProps * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IWMVideoMediaProps * This,
                        WM_MEDIA_TYPE *pType,
                            DWORD *pcbType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IWMVideoMediaProps * This,
                       WM_MEDIA_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *GetMaxKeyFrameSpacing )(
            IWMVideoMediaProps * This,
                        LONGLONG *pllTime);
        HRESULT ( STDMETHODCALLTYPE *SetMaxKeyFrameSpacing )(
            IWMVideoMediaProps * This,
                       LONGLONG llTime);
        HRESULT ( STDMETHODCALLTYPE *GetQuality )(
            IWMVideoMediaProps * This,
                        DWORD *pdwQuality);
        HRESULT ( STDMETHODCALLTYPE *SetQuality )(
            IWMVideoMediaProps * This,
                       DWORD dwQuality);
        END_INTERFACE
    } IWMVideoMediaPropsVtbl;
    interface IWMVideoMediaProps
    {
        CONST_VTBL struct IWMVideoMediaPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) )
    ( (This)->lpVtbl -> SetMediaType(This,pType) )
    ( (This)->lpVtbl -> GetMaxKeyFrameSpacing(This,pllTime) )
    ( (This)->lpVtbl -> SetMaxKeyFrameSpacing(This,llTime) )
    ( (This)->lpVtbl -> GetQuality(This,pdwQuality) )
    ( (This)->lpVtbl -> SetQuality(This,dwQuality) )
EXTERN_C const IID IID_IWMWriter;
    typedef struct IWMWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriter * This);
        HRESULT ( STDMETHODCALLTYPE *SetProfileByID )(
            IWMWriter * This,
                       REFGUID guidProfile);
        HRESULT ( STDMETHODCALLTYPE *SetProfile )(
            IWMWriter * This,
                       IWMProfile *pProfile);
        HRESULT ( STDMETHODCALLTYPE *SetOutputFilename )(
            IWMWriter * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *GetInputCount )(
            IWMWriter * This,
                        DWORD *pcInputs);
        HRESULT ( STDMETHODCALLTYPE *GetInputProps )(
            IWMWriter * This,
                       DWORD dwInputNum,
                        IWMInputMediaProps **ppInput);
        HRESULT ( STDMETHODCALLTYPE *SetInputProps )(
            IWMWriter * This,
                       DWORD dwInputNum,
                       IWMInputMediaProps *pInput);
        HRESULT ( STDMETHODCALLTYPE *GetInputFormatCount )(
            IWMWriter * This,
                       DWORD dwInputNumber,
                        DWORD *pcFormats);
        HRESULT ( STDMETHODCALLTYPE *GetInputFormat )(
            IWMWriter * This,
                       DWORD dwInputNumber,
                       DWORD dwFormatNumber,
                        IWMInputMediaProps **pProps);
        HRESULT ( STDMETHODCALLTYPE *BeginWriting )(
            IWMWriter * This);
        HRESULT ( STDMETHODCALLTYPE *EndWriting )(
            IWMWriter * This);
        HRESULT ( STDMETHODCALLTYPE *AllocateSample )(
            IWMWriter * This,
                       DWORD dwSampleSize,
                        INSSBuffer **ppSample);
        HRESULT ( STDMETHODCALLTYPE *WriteSample )(
            IWMWriter * This,
                       DWORD dwInputNum,
                       QWORD cnsSampleTime,
                       DWORD dwFlags,
                       INSSBuffer *pSample);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IWMWriter * This);
        END_INTERFACE
    } IWMWriterVtbl;
    interface IWMWriter
    {
        CONST_VTBL struct IWMWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetProfileByID(This,guidProfile) )
    ( (This)->lpVtbl -> SetProfile(This,pProfile) )
    ( (This)->lpVtbl -> SetOutputFilename(This,pwszFilename) )
    ( (This)->lpVtbl -> GetInputCount(This,pcInputs) )
    ( (This)->lpVtbl -> GetInputProps(This,dwInputNum,ppInput) )
    ( (This)->lpVtbl -> SetInputProps(This,dwInputNum,pInput) )
    ( (This)->lpVtbl -> GetInputFormatCount(This,dwInputNumber,pcFormats) )
    ( (This)->lpVtbl -> GetInputFormat(This,dwInputNumber,dwFormatNumber,pProps) )
    ( (This)->lpVtbl -> BeginWriting(This) )
    ( (This)->lpVtbl -> EndWriting(This) )
    ( (This)->lpVtbl -> AllocateSample(This,dwSampleSize,ppSample) )
    ( (This)->lpVtbl -> WriteSample(This,dwInputNum,cnsSampleTime,dwFlags,pSample) )
    ( (This)->lpVtbl -> Flush(This) )
EXTERN_C const IID IID_IWMDRMWriter;
    typedef struct IWMDRMWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMWriter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMWriter * This);
        HRESULT ( STDMETHODCALLTYPE *GenerateKeySeed )(
            IWMDRMWriter * This,
                                 WCHAR *pwszKeySeed,
                            DWORD *pcwchLength);
        HRESULT ( STDMETHODCALLTYPE *GenerateKeyID )(
            IWMDRMWriter * This,
                                 WCHAR *pwszKeyID,
                            DWORD *pcwchLength);
        HRESULT ( STDMETHODCALLTYPE *GenerateSigningKeyPair )(
            IWMDRMWriter * This,
                                 WCHAR *pwszPrivKey,
                            DWORD *pcwchPrivKeyLength,
                                 WCHAR *pwszPubKey,
                            DWORD *pcwchPubKeyLength);
        HRESULT ( STDMETHODCALLTYPE *SetDRMAttribute )(
            IWMDRMWriter * This,
                       WORD wStreamNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        END_INTERFACE
    } IWMDRMWriterVtbl;
    interface IWMDRMWriter
    {
        CONST_VTBL struct IWMDRMWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GenerateKeySeed(This,pwszKeySeed,pcwchLength) )
    ( (This)->lpVtbl -> GenerateKeyID(This,pwszKeyID,pcwchLength) )
    ( (This)->lpVtbl -> GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength) )
    ( (This)->lpVtbl -> SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) )
typedef struct WMDRM_IMPORT_INIT_STRUCT
    {
    DWORD dwVersion;
    DWORD cbEncryptedSessionKeyMessage;
    BYTE *pbEncryptedSessionKeyMessage;
    DWORD cbEncryptedKeyMessage;
    BYTE *pbEncryptedKeyMessage;
    } WMDRM_IMPORT_INIT_STRUCT;
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMDRMWriter2;
    typedef struct IWMDRMWriter2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMWriter2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMWriter2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMWriter2 * This);
        HRESULT ( STDMETHODCALLTYPE *GenerateKeySeed )(
            IWMDRMWriter2 * This,
                                 WCHAR *pwszKeySeed,
                            DWORD *pcwchLength);
        HRESULT ( STDMETHODCALLTYPE *GenerateKeyID )(
            IWMDRMWriter2 * This,
                                 WCHAR *pwszKeyID,
                            DWORD *pcwchLength);
        HRESULT ( STDMETHODCALLTYPE *GenerateSigningKeyPair )(
            IWMDRMWriter2 * This,
                                 WCHAR *pwszPrivKey,
                            DWORD *pcwchPrivKeyLength,
                                 WCHAR *pwszPubKey,
                            DWORD *pcwchPubKeyLength);
        HRESULT ( STDMETHODCALLTYPE *SetDRMAttribute )(
            IWMDRMWriter2 * This,
                       WORD wStreamNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *SetWMDRMNetEncryption )(
            IWMDRMWriter2 * This,
                       BOOL fSamplesEncrypted,
                       BYTE *pbKeyID,
                       DWORD cbKeyID);
        END_INTERFACE
    } IWMDRMWriter2Vtbl;
    interface IWMDRMWriter2
    {
        CONST_VTBL struct IWMDRMWriter2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GenerateKeySeed(This,pwszKeySeed,pcwchLength) )
    ( (This)->lpVtbl -> GenerateKeyID(This,pwszKeyID,pcwchLength) )
    ( (This)->lpVtbl -> GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength) )
    ( (This)->lpVtbl -> SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> SetWMDRMNetEncryption(This,fSamplesEncrypted,pbKeyID,cbKeyID) )
EXTERN_C const IID IID_IWMDRMWriter3;
    typedef struct IWMDRMWriter3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMWriter3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMWriter3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMWriter3 * This);
        HRESULT ( STDMETHODCALLTYPE *GenerateKeySeed )(
            IWMDRMWriter3 * This,
                                 WCHAR *pwszKeySeed,
                            DWORD *pcwchLength);
        HRESULT ( STDMETHODCALLTYPE *GenerateKeyID )(
            IWMDRMWriter3 * This,
                                 WCHAR *pwszKeyID,
                            DWORD *pcwchLength);
        HRESULT ( STDMETHODCALLTYPE *GenerateSigningKeyPair )(
            IWMDRMWriter3 * This,
                                 WCHAR *pwszPrivKey,
                            DWORD *pcwchPrivKeyLength,
                                 WCHAR *pwszPubKey,
                            DWORD *pcwchPubKeyLength);
        HRESULT ( STDMETHODCALLTYPE *SetDRMAttribute )(
            IWMDRMWriter3 * This,
                       WORD wStreamNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *SetWMDRMNetEncryption )(
            IWMDRMWriter3 * This,
                       BOOL fSamplesEncrypted,
                       BYTE *pbKeyID,
                       DWORD cbKeyID);
        HRESULT ( STDMETHODCALLTYPE *SetProtectStreamSamples )(
            IWMDRMWriter3 * This,
                       WMDRM_IMPORT_INIT_STRUCT *pImportInitStruct);
        END_INTERFACE
    } IWMDRMWriter3Vtbl;
    interface IWMDRMWriter3
    {
        CONST_VTBL struct IWMDRMWriter3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GenerateKeySeed(This,pwszKeySeed,pcwchLength) )
    ( (This)->lpVtbl -> GenerateKeyID(This,pwszKeyID,pcwchLength) )
    ( (This)->lpVtbl -> GenerateSigningKeyPair(This,pwszPrivKey,pcwchPrivKeyLength,pwszPubKey,pcwchPubKeyLength) )
    ( (This)->lpVtbl -> SetDRMAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> SetWMDRMNetEncryption(This,fSamplesEncrypted,pbKeyID,cbKeyID) )
    ( (This)->lpVtbl -> SetProtectStreamSamples(This,pImportInitStruct) )
EXTERN_C const IID IID_IWMInputMediaProps;
    typedef struct IWMInputMediaPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMInputMediaProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMInputMediaProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMInputMediaProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IWMInputMediaProps * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IWMInputMediaProps * This,
                        WM_MEDIA_TYPE *pType,
                            DWORD *pcbType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IWMInputMediaProps * This,
                       WM_MEDIA_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionName )(
            IWMInputMediaProps * This,
                                 WCHAR *pwszName,
                            WORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *GetGroupName )(
            IWMInputMediaProps * This,
                                 WCHAR *pwszName,
                            WORD *pcchName);
        END_INTERFACE
    } IWMInputMediaPropsVtbl;
    interface IWMInputMediaProps
    {
        CONST_VTBL struct IWMInputMediaPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) )
    ( (This)->lpVtbl -> SetMediaType(This,pType) )
    ( (This)->lpVtbl -> GetConnectionName(This,pwszName,pcchName) )
    ( (This)->lpVtbl -> GetGroupName(This,pwszName,pcchName) )
EXTERN_C const IID IID_IWMPropertyVault;
    typedef struct IWMPropertyVaultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPropertyVault * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPropertyVault * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPropertyVault * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyCount )(
            IWMPropertyVault * This,
                       DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyByName )(
            IWMPropertyVault * This,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            IWMPropertyVault * This,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE pType,
                       BYTE *pValue,
                       DWORD dwSize);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyByIndex )(
            IWMPropertyVault * This,
                       DWORD dwIndex,
                                 LPWSTR pszName,
                            DWORD *pdwNameLen,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *CopyPropertiesFrom )(
            IWMPropertyVault * This,
                       IWMPropertyVault *pIWMPropertyVault);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            IWMPropertyVault * This);
        END_INTERFACE
    } IWMPropertyVaultVtbl;
    interface IWMPropertyVault
    {
        CONST_VTBL struct IWMPropertyVaultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyCount(This,pdwCount) )
    ( (This)->lpVtbl -> GetPropertyByName(This,pszName,pType,pValue,pdwSize) )
    ( (This)->lpVtbl -> SetProperty(This,pszName,pType,pValue,dwSize) )
    ( (This)->lpVtbl -> GetPropertyByIndex(This,dwIndex,pszName,pdwNameLen,pType,pValue,pdwSize) )
    ( (This)->lpVtbl -> CopyPropertiesFrom(This,pIWMPropertyVault) )
    ( (This)->lpVtbl -> Clear(This) )
EXTERN_C const IID IID_IWMIStreamProps;
    typedef struct IWMIStreamPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMIStreamProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMIStreamProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMIStreamProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IWMIStreamProps * This,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            DWORD *pdwSize);
        END_INTERFACE
    } IWMIStreamPropsVtbl;
    interface IWMIStreamProps
    {
        CONST_VTBL struct IWMIStreamPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperty(This,pszName,pType,pValue,pdwSize) )
EXTERN_C const IID IID_IWMReader;
    typedef struct IWMReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReader * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMReader * This,
                       const WCHAR *pwszURL,
                       IWMReaderCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCount )(
            IWMReader * This,
                        DWORD *pcOutputs);
        HRESULT ( STDMETHODCALLTYPE *GetOutputProps )(
            IWMReader * This,
                       DWORD dwOutputNum,
                        IWMOutputMediaProps **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *SetOutputProps )(
            IWMReader * This,
                       DWORD dwOutputNum,
                       IWMOutputMediaProps *pOutput);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFormatCount )(
            IWMReader * This,
                       DWORD dwOutputNumber,
                        DWORD *pcFormats);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFormat )(
            IWMReader * This,
                       DWORD dwOutputNumber,
                       DWORD dwFormatNumber,
                        IWMOutputMediaProps **ppProps);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IWMReader * This,
                       QWORD cnsStart,
                       QWORD cnsDuration,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IWMReader * This);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            IWMReader * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            IWMReader * This);
        END_INTERFACE
    } IWMReaderVtbl;
    interface IWMReader
    {
        CONST_VTBL struct IWMReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pwszURL,pCallback,pvContext) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) )
    ( (This)->lpVtbl -> GetOutputProps(This,dwOutputNum,ppOutput) )
    ( (This)->lpVtbl -> SetOutputProps(This,dwOutputNum,pOutput) )
    ( (This)->lpVtbl -> GetOutputFormatCount(This,dwOutputNumber,pcFormats) )
    ( (This)->lpVtbl -> GetOutputFormat(This,dwOutputNumber,dwFormatNumber,ppProps) )
    ( (This)->lpVtbl -> Start(This,cnsStart,cnsDuration,fRate,pvContext) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
EXTERN_C const IID IID_IWMSyncReader;
    typedef struct IWMSyncReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMSyncReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMSyncReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMSyncReader * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMSyncReader * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMSyncReader * This);
        HRESULT ( STDMETHODCALLTYPE *SetRange )(
            IWMSyncReader * This,
                       QWORD cnsStartTime,
                       LONGLONG cnsDuration);
        HRESULT ( STDMETHODCALLTYPE *SetRangeByFrame )(
            IWMSyncReader * This,
                       WORD wStreamNum,
                       QWORD qwFrameNumber,
                       LONGLONG cFramesToRead);
        HRESULT ( STDMETHODCALLTYPE *GetNextSample )(
            IWMSyncReader * This,
                       WORD wStreamNum,
                        INSSBuffer **ppSample,
                        QWORD *pcnsSampleTime,
                        QWORD *pcnsDuration,
                        DWORD *pdwFlags,
                        DWORD *pdwOutputNum,
                        WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMSyncReader * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMSyncReader * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReadStreamSamples )(
            IWMSyncReader * This,
                       WORD wStreamNum,
                       BOOL fCompressed);
        HRESULT ( STDMETHODCALLTYPE *GetReadStreamSamples )(
            IWMSyncReader * This,
                       WORD wStreamNum,
                        BOOL *pfCompressed);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSetting )(
            IWMSyncReader * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetOutputSetting )(
            IWMSyncReader * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCount )(
            IWMSyncReader * This,
                        DWORD *pcOutputs);
        HRESULT ( STDMETHODCALLTYPE *GetOutputProps )(
            IWMSyncReader * This,
                       DWORD dwOutputNum,
                        IWMOutputMediaProps **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *SetOutputProps )(
            IWMSyncReader * This,
                       DWORD dwOutputNum,
                       IWMOutputMediaProps *pOutput);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFormatCount )(
            IWMSyncReader * This,
                       DWORD dwOutputNum,
                        DWORD *pcFormats);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFormat )(
            IWMSyncReader * This,
                       DWORD dwOutputNum,
                       DWORD dwFormatNum,
                        IWMOutputMediaProps **ppProps);
        HRESULT ( STDMETHODCALLTYPE *GetOutputNumberForStream )(
            IWMSyncReader * This,
                       WORD wStreamNum,
                        DWORD *pdwOutputNum);
        HRESULT ( STDMETHODCALLTYPE *GetStreamNumberForOutput )(
            IWMSyncReader * This,
                       DWORD dwOutputNum,
                        WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMSyncReader * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMSyncReader * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IWMSyncReader * This,
                       IStream *pStream);
        END_INTERFACE
    } IWMSyncReaderVtbl;
    interface IWMSyncReader
    {
        CONST_VTBL struct IWMSyncReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pwszFilename) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> SetRange(This,cnsStartTime,cnsDuration) )
    ( (This)->lpVtbl -> SetRangeByFrame(This,wStreamNum,qwFrameNumber,cFramesToRead) )
    ( (This)->lpVtbl -> GetNextSample(This,wStreamNum,ppSample,pcnsSampleTime,pcnsDuration,pdwFlags,pdwOutputNum,pwStreamNum) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReadStreamSamples(This,wStreamNum,fCompressed) )
    ( (This)->lpVtbl -> GetReadStreamSamples(This,wStreamNum,pfCompressed) )
    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) )
    ( (This)->lpVtbl -> GetOutputProps(This,dwOutputNum,ppOutput) )
    ( (This)->lpVtbl -> SetOutputProps(This,dwOutputNum,pOutput) )
    ( (This)->lpVtbl -> GetOutputFormatCount(This,dwOutputNum,pcFormats) )
    ( (This)->lpVtbl -> GetOutputFormat(This,dwOutputNum,dwFormatNum,ppProps) )
    ( (This)->lpVtbl -> GetOutputNumberForStream(This,wStreamNum,pdwOutputNum) )
    ( (This)->lpVtbl -> GetStreamNumberForOutput(This,dwOutputNum,pwStreamNum) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> OpenStream(This,pStream) )
EXTERN_C const IID IID_IWMSyncReader2;
    typedef struct IWMSyncReader2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMSyncReader2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMSyncReader2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMSyncReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMSyncReader2 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMSyncReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetRange )(
            IWMSyncReader2 * This,
                       QWORD cnsStartTime,
                       LONGLONG cnsDuration);
        HRESULT ( STDMETHODCALLTYPE *SetRangeByFrame )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                       QWORD qwFrameNumber,
                       LONGLONG cFramesToRead);
        HRESULT ( STDMETHODCALLTYPE *GetNextSample )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                        INSSBuffer **ppSample,
                        QWORD *pcnsSampleTime,
                        QWORD *pcnsDuration,
                        DWORD *pdwFlags,
                        DWORD *pdwOutputNum,
                        WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMSyncReader2 * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReadStreamSamples )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                       BOOL fCompressed);
        HRESULT ( STDMETHODCALLTYPE *GetReadStreamSamples )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                        BOOL *pfCompressed);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSetting )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetOutputSetting )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetOutputCount )(
            IWMSyncReader2 * This,
                        DWORD *pcOutputs);
        HRESULT ( STDMETHODCALLTYPE *GetOutputProps )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                        IWMOutputMediaProps **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *SetOutputProps )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                       IWMOutputMediaProps *pOutput);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFormatCount )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                        DWORD *pcFormats);
        HRESULT ( STDMETHODCALLTYPE *GetOutputFormat )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                       DWORD dwFormatNum,
                        IWMOutputMediaProps **ppProps);
        HRESULT ( STDMETHODCALLTYPE *GetOutputNumberForStream )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                        DWORD *pdwOutputNum);
        HRESULT ( STDMETHODCALLTYPE *GetStreamNumberForOutput )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                        WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMSyncReader2 * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMSyncReader2 * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IWMSyncReader2 * This,
                       IStream *pStream);
        HRESULT ( STDMETHODCALLTYPE *SetRangeByTimecode )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                       WMT_TIMECODE_EXTENSION_DATA *pStart,
                       WMT_TIMECODE_EXTENSION_DATA *pEnd);
        HRESULT ( STDMETHODCALLTYPE *SetRangeByFrameEx )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                       QWORD qwFrameNumber,
                       LONGLONG cFramesToRead,
                        QWORD *pcnsStartTime);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForOutput )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                       IWMReaderAllocatorEx *pAllocator);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForOutput )(
            IWMSyncReader2 * This,
                       DWORD dwOutputNum,
                        IWMReaderAllocatorEx **ppAllocator);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForStream )(
            IWMSyncReader2 * This,
                       WORD wStreamNum,
                       IWMReaderAllocatorEx *pAllocator);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForStream )(
            IWMSyncReader2 * This,
                       WORD dwSreamNum,
                        IWMReaderAllocatorEx **ppAllocator);
        END_INTERFACE
    } IWMSyncReader2Vtbl;
    interface IWMSyncReader2
    {
        CONST_VTBL struct IWMSyncReader2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pwszFilename) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> SetRange(This,cnsStartTime,cnsDuration) )
    ( (This)->lpVtbl -> SetRangeByFrame(This,wStreamNum,qwFrameNumber,cFramesToRead) )
    ( (This)->lpVtbl -> GetNextSample(This,wStreamNum,ppSample,pcnsSampleTime,pcnsDuration,pdwFlags,pdwOutputNum,pwStreamNum) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReadStreamSamples(This,wStreamNum,fCompressed) )
    ( (This)->lpVtbl -> GetReadStreamSamples(This,wStreamNum,pfCompressed) )
    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> GetOutputCount(This,pcOutputs) )
    ( (This)->lpVtbl -> GetOutputProps(This,dwOutputNum,ppOutput) )
    ( (This)->lpVtbl -> SetOutputProps(This,dwOutputNum,pOutput) )
    ( (This)->lpVtbl -> GetOutputFormatCount(This,dwOutputNum,pcFormats) )
    ( (This)->lpVtbl -> GetOutputFormat(This,dwOutputNum,dwFormatNum,ppProps) )
    ( (This)->lpVtbl -> GetOutputNumberForStream(This,wStreamNum,pdwOutputNum) )
    ( (This)->lpVtbl -> GetStreamNumberForOutput(This,dwOutputNum,pwStreamNum) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> OpenStream(This,pStream) )
    ( (This)->lpVtbl -> SetRangeByTimecode(This,wStreamNum,pStart,pEnd) )
    ( (This)->lpVtbl -> SetRangeByFrameEx(This,wStreamNum,qwFrameNumber,cFramesToRead,pcnsStartTime) )
    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,pAllocator) )
    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,ppAllocator) )
    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,pAllocator) )
    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,ppAllocator) )
EXTERN_C const IID IID_IWMOutputMediaProps;
    typedef struct IWMOutputMediaPropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMOutputMediaProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMOutputMediaProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMOutputMediaProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IWMOutputMediaProps * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *GetMediaType )(
            IWMOutputMediaProps * This,
                        WM_MEDIA_TYPE *pType,
                            DWORD *pcbType);
        HRESULT ( STDMETHODCALLTYPE *SetMediaType )(
            IWMOutputMediaProps * This,
                       WM_MEDIA_TYPE *pType);
        HRESULT ( STDMETHODCALLTYPE *GetStreamGroupName )(
            IWMOutputMediaProps * This,
                                 WCHAR *pwszName,
                            WORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionName )(
            IWMOutputMediaProps * This,
                                 WCHAR *pwszName,
                            WORD *pcchName);
        END_INTERFACE
    } IWMOutputMediaPropsVtbl;
    interface IWMOutputMediaProps
    {
        CONST_VTBL struct IWMOutputMediaPropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> GetMediaType(This,pType,pcbType) )
    ( (This)->lpVtbl -> SetMediaType(This,pType) )
    ( (This)->lpVtbl -> GetStreamGroupName(This,pwszName,pcchName) )
    ( (This)->lpVtbl -> GetConnectionName(This,pwszName,pcchName) )
EXTERN_C const IID IID_IWMStatusCallback;
    typedef struct IWMStatusCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMStatusCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMStatusCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMStatusCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatus )(
            IWMStatusCallback * This,
                       WMT_STATUS Status,
                       HRESULT hr,
                       WMT_ATTR_DATATYPE dwType,
                       BYTE *pValue,
                       void *pvContext);
        END_INTERFACE
    } IWMStatusCallbackVtbl;
    interface IWMStatusCallback
    {
        CONST_VTBL struct IWMStatusCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStatus(This,Status,hr,dwType,pValue,pvContext) )
EXTERN_C const IID IID_IWMReaderCallback;
    typedef struct IWMReaderCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatus )(
            IWMReaderCallback * This,
                       WMT_STATUS Status,
                       HRESULT hr,
                       WMT_ATTR_DATATYPE dwType,
                       BYTE *pValue,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *OnSample )(
            IWMReaderCallback * This,
                       DWORD dwOutputNum,
                       QWORD cnsSampleTime,
                       QWORD cnsSampleDuration,
                       DWORD dwFlags,
                       INSSBuffer *pSample,
                       void *pvContext);
        END_INTERFACE
    } IWMReaderCallbackVtbl;
    interface IWMReaderCallback
    {
        CONST_VTBL struct IWMReaderCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStatus(This,Status,hr,dwType,pValue,pvContext) )
    ( (This)->lpVtbl -> OnSample(This,dwOutputNum,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext) )
EXTERN_C const IID IID_IWMCredentialCallback;
    typedef struct IWMCredentialCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCredentialCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCredentialCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCredentialCallback * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireCredentials )(
            IWMCredentialCallback * This,
                       WCHAR *pwszRealm,
                       WCHAR *pwszSite,
                                 WCHAR *pwszUser,
                       DWORD cchUser,
                                 WCHAR *pwszPassword,
                       DWORD cchPassword,
                       HRESULT hrStatus,
                        DWORD *pdwFlags);
        END_INTERFACE
    } IWMCredentialCallbackVtbl;
    interface IWMCredentialCallback
    {
        CONST_VTBL struct IWMCredentialCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireCredentials(This,pwszRealm,pwszSite,pwszUser,cchUser,pwszPassword,cchPassword,hrStatus,pdwFlags) )
EXTERN_C const IID IID_IWMMetadataEditor;
    typedef struct IWMMetadataEditorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMMetadataEditor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMMetadataEditor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMMetadataEditor * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMMetadataEditor * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMMetadataEditor * This);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IWMMetadataEditor * This);
        END_INTERFACE
    } IWMMetadataEditorVtbl;
    interface IWMMetadataEditor
    {
        CONST_VTBL struct IWMMetadataEditorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pwszFilename) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Flush(This) )
EXTERN_C const IID IID_IWMMetadataEditor2;
    typedef struct IWMMetadataEditor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMMetadataEditor2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMMetadataEditor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMMetadataEditor2 * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMMetadataEditor2 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMMetadataEditor2 * This);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IWMMetadataEditor2 * This);
        HRESULT ( STDMETHODCALLTYPE *OpenEx )(
            IWMMetadataEditor2 * This,
                       const WCHAR *pwszFilename,
                       DWORD dwDesiredAccess,
                       DWORD dwShareMode);
        END_INTERFACE
    } IWMMetadataEditor2Vtbl;
    interface IWMMetadataEditor2
    {
        CONST_VTBL struct IWMMetadataEditor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Open(This,pwszFilename) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Flush(This) )
    ( (This)->lpVtbl -> OpenEx(This,pwszFilename,dwDesiredAccess,dwShareMode) )
EXTERN_C const IID IID_IWMDRMEditor;
    typedef struct IWMDRMEditorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMEditor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMEditor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMEditor * This);
        HRESULT ( STDMETHODCALLTYPE *GetDRMProperty )(
            IWMDRMEditor * This,
                       LPCWSTR pwstrName,
                        WMT_ATTR_DATATYPE *pdwType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        END_INTERFACE
    } IWMDRMEditorVtbl;
    interface IWMDRMEditor
    {
        CONST_VTBL struct IWMDRMEditorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) )
EXTERN_C const IID IID_IWMHeaderInfo;
    typedef struct IWMHeaderInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMHeaderInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMHeaderInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMHeaderInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCount )(
            IWMHeaderInfo * This,
                       WORD wStreamNum,
                        WORD *pcAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByIndex )(
            IWMHeaderInfo * This,
                       WORD wIndex,
                            WORD *pwStreamNum,
                                 WCHAR *pwszName,
                            WORD *pcchNameLen,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByName )(
            IWMHeaderInfo * This,
                            WORD *pwStreamNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )(
            IWMHeaderInfo * This,
                       WORD wStreamNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetMarkerCount )(
            IWMHeaderInfo * This,
                        WORD *pcMarkers);
        HRESULT ( STDMETHODCALLTYPE *GetMarker )(
            IWMHeaderInfo * This,
                       WORD wIndex,
                                 WCHAR *pwszMarkerName,
                            WORD *pcchMarkerNameLen,
                        QWORD *pcnsMarkerTime);
        HRESULT ( STDMETHODCALLTYPE *AddMarker )(
            IWMHeaderInfo * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszMarkerName,
                       QWORD cnsMarkerTime);
        HRESULT ( STDMETHODCALLTYPE *RemoveMarker )(
            IWMHeaderInfo * This,
                       WORD wIndex);
        HRESULT ( STDMETHODCALLTYPE *GetScriptCount )(
            IWMHeaderInfo * This,
                        WORD *pcScripts);
        HRESULT ( STDMETHODCALLTYPE *GetScript )(
            IWMHeaderInfo * This,
                       WORD wIndex,
                                 WCHAR *pwszType,
                            WORD *pcchTypeLen,
                                 WCHAR *pwszCommand,
                            WORD *pcchCommandLen,
                        QWORD *pcnsScriptTime);
        HRESULT ( STDMETHODCALLTYPE *AddScript )(
            IWMHeaderInfo * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszType,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszCommand,
                       QWORD cnsScriptTime);
        HRESULT ( STDMETHODCALLTYPE *RemoveScript )(
            IWMHeaderInfo * This,
                       WORD wIndex);
        END_INTERFACE
    } IWMHeaderInfoVtbl;
    interface IWMHeaderInfo
    {
        CONST_VTBL struct IWMHeaderInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAttributeCount(This,wStreamNum,pcAttributes) )
    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> GetMarkerCount(This,pcMarkers) )
    ( (This)->lpVtbl -> GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime) )
    ( (This)->lpVtbl -> AddMarker(This,pwszMarkerName,cnsMarkerTime) )
    ( (This)->lpVtbl -> RemoveMarker(This,wIndex) )
    ( (This)->lpVtbl -> GetScriptCount(This,pcScripts) )
    ( (This)->lpVtbl -> GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime) )
    ( (This)->lpVtbl -> AddScript(This,pwszType,pwszCommand,cnsScriptTime) )
    ( (This)->lpVtbl -> RemoveScript(This,wIndex) )
EXTERN_C const IID IID_IWMHeaderInfo2;
    typedef struct IWMHeaderInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMHeaderInfo2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMHeaderInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMHeaderInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCount )(
            IWMHeaderInfo2 * This,
                       WORD wStreamNum,
                        WORD *pcAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByIndex )(
            IWMHeaderInfo2 * This,
                       WORD wIndex,
                            WORD *pwStreamNum,
                                 WCHAR *pwszName,
                            WORD *pcchNameLen,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByName )(
            IWMHeaderInfo2 * This,
                            WORD *pwStreamNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )(
            IWMHeaderInfo2 * This,
                       WORD wStreamNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetMarkerCount )(
            IWMHeaderInfo2 * This,
                        WORD *pcMarkers);
        HRESULT ( STDMETHODCALLTYPE *GetMarker )(
            IWMHeaderInfo2 * This,
                       WORD wIndex,
                                 WCHAR *pwszMarkerName,
                            WORD *pcchMarkerNameLen,
                        QWORD *pcnsMarkerTime);
        HRESULT ( STDMETHODCALLTYPE *AddMarker )(
            IWMHeaderInfo2 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszMarkerName,
                       QWORD cnsMarkerTime);
        HRESULT ( STDMETHODCALLTYPE *RemoveMarker )(
            IWMHeaderInfo2 * This,
                       WORD wIndex);
        HRESULT ( STDMETHODCALLTYPE *GetScriptCount )(
            IWMHeaderInfo2 * This,
                        WORD *pcScripts);
        HRESULT ( STDMETHODCALLTYPE *GetScript )(
            IWMHeaderInfo2 * This,
                       WORD wIndex,
                                 WCHAR *pwszType,
                            WORD *pcchTypeLen,
                                 WCHAR *pwszCommand,
                            WORD *pcchCommandLen,
                        QWORD *pcnsScriptTime);
        HRESULT ( STDMETHODCALLTYPE *AddScript )(
            IWMHeaderInfo2 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszType,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszCommand,
                       QWORD cnsScriptTime);
        HRESULT ( STDMETHODCALLTYPE *RemoveScript )(
            IWMHeaderInfo2 * This,
                       WORD wIndex);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInfoCount )(
            IWMHeaderInfo2 * This,
                        DWORD *pcCodecInfos);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInfo )(
            IWMHeaderInfo2 * This,
                       DWORD wIndex,
                            WORD *pcchName,
                                 WCHAR *pwszName,
                            WORD *pcchDescription,
                                 WCHAR *pwszDescription,
                        WMT_CODEC_INFO_TYPE *pCodecType,
                            WORD *pcbCodecInfo,
                                 BYTE *pbCodecInfo);
        END_INTERFACE
    } IWMHeaderInfo2Vtbl;
    interface IWMHeaderInfo2
    {
        CONST_VTBL struct IWMHeaderInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAttributeCount(This,wStreamNum,pcAttributes) )
    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> GetMarkerCount(This,pcMarkers) )
    ( (This)->lpVtbl -> GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime) )
    ( (This)->lpVtbl -> AddMarker(This,pwszMarkerName,cnsMarkerTime) )
    ( (This)->lpVtbl -> RemoveMarker(This,wIndex) )
    ( (This)->lpVtbl -> GetScriptCount(This,pcScripts) )
    ( (This)->lpVtbl -> GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime) )
    ( (This)->lpVtbl -> AddScript(This,pwszType,pwszCommand,cnsScriptTime) )
    ( (This)->lpVtbl -> RemoveScript(This,wIndex) )
    ( (This)->lpVtbl -> GetCodecInfoCount(This,pcCodecInfos) )
    ( (This)->lpVtbl -> GetCodecInfo(This,wIndex,pcchName,pwszName,pcchDescription,pwszDescription,pCodecType,pcbCodecInfo,pbCodecInfo) )
EXTERN_C const IID IID_IWMHeaderInfo3;
    typedef struct IWMHeaderInfo3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMHeaderInfo3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMHeaderInfo3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMHeaderInfo3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCount )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                        WORD *pcAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByIndex )(
            IWMHeaderInfo3 * This,
                       WORD wIndex,
                            WORD *pwStreamNum,
                                 WCHAR *pwszName,
                            WORD *pcchNameLen,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByName )(
            IWMHeaderInfo3 * This,
                            WORD *pwStreamNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetMarkerCount )(
            IWMHeaderInfo3 * This,
                        WORD *pcMarkers);
        HRESULT ( STDMETHODCALLTYPE *GetMarker )(
            IWMHeaderInfo3 * This,
                       WORD wIndex,
                                 WCHAR *pwszMarkerName,
                            WORD *pcchMarkerNameLen,
                        QWORD *pcnsMarkerTime);
        HRESULT ( STDMETHODCALLTYPE *AddMarker )(
            IWMHeaderInfo3 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszMarkerName,
                       QWORD cnsMarkerTime);
        HRESULT ( STDMETHODCALLTYPE *RemoveMarker )(
            IWMHeaderInfo3 * This,
                       WORD wIndex);
        HRESULT ( STDMETHODCALLTYPE *GetScriptCount )(
            IWMHeaderInfo3 * This,
                        WORD *pcScripts);
        HRESULT ( STDMETHODCALLTYPE *GetScript )(
            IWMHeaderInfo3 * This,
                       WORD wIndex,
                                 WCHAR *pwszType,
                            WORD *pcchTypeLen,
                                 WCHAR *pwszCommand,
                            WORD *pcchCommandLen,
                        QWORD *pcnsScriptTime);
        HRESULT ( STDMETHODCALLTYPE *AddScript )(
            IWMHeaderInfo3 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszType,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszCommand,
                       QWORD cnsScriptTime);
        HRESULT ( STDMETHODCALLTYPE *RemoveScript )(
            IWMHeaderInfo3 * This,
                       WORD wIndex);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInfoCount )(
            IWMHeaderInfo3 * This,
                        DWORD *pcCodecInfos);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInfo )(
            IWMHeaderInfo3 * This,
                       DWORD wIndex,
                            WORD *pcchName,
                                 WCHAR *pwszName,
                            WORD *pcchDescription,
                                 WCHAR *pwszDescription,
                        WMT_CODEC_INFO_TYPE *pCodecType,
                            WORD *pcbCodecInfo,
                                 BYTE *pbCodecInfo);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCountEx )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                        WORD *pcAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeIndices )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                       LPCWSTR pwszName,
                       WORD *pwLangIndex,
                                 WORD *pwIndices,
                            WORD *pwCount);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByIndexEx )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                       WORD wIndex,
                                 LPWSTR pwszName,
                            WORD *pwNameLen,
                        WMT_ATTR_DATATYPE *pType,
                        WORD *pwLangIndex,
                                 BYTE *pValue,
                            DWORD *pdwDataLength);
        HRESULT ( STDMETHODCALLTYPE *ModifyAttribute )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                       WORD wIndex,
                       WMT_ATTR_DATATYPE Type,
                       WORD wLangIndex,
                                const BYTE *pValue,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *AddAttribute )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                       LPCWSTR pszName,
                        WORD *pwIndex,
                       WMT_ATTR_DATATYPE Type,
                       WORD wLangIndex,
                                const BYTE *pValue,
                       DWORD dwLength);
        HRESULT ( STDMETHODCALLTYPE *DeleteAttribute )(
            IWMHeaderInfo3 * This,
                       WORD wStreamNum,
                       WORD wIndex);
        HRESULT ( STDMETHODCALLTYPE *AddCodecInfo )(
            IWMHeaderInfo3 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszName,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszDescription,
                       WMT_CODEC_INFO_TYPE codecType,
                       WORD cbCodecInfo,
                                BYTE *pbCodecInfo);
        END_INTERFACE
    } IWMHeaderInfo3Vtbl;
    interface IWMHeaderInfo3
    {
        CONST_VTBL struct IWMHeaderInfo3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAttributeCount(This,wStreamNum,pcAttributes) )
    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pwStreamNum,pwszName,pcchNameLen,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> GetAttributeByName(This,pwStreamNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetAttribute(This,wStreamNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> GetMarkerCount(This,pcMarkers) )
    ( (This)->lpVtbl -> GetMarker(This,wIndex,pwszMarkerName,pcchMarkerNameLen,pcnsMarkerTime) )
    ( (This)->lpVtbl -> AddMarker(This,pwszMarkerName,cnsMarkerTime) )
    ( (This)->lpVtbl -> RemoveMarker(This,wIndex) )
    ( (This)->lpVtbl -> GetScriptCount(This,pcScripts) )
    ( (This)->lpVtbl -> GetScript(This,wIndex,pwszType,pcchTypeLen,pwszCommand,pcchCommandLen,pcnsScriptTime) )
    ( (This)->lpVtbl -> AddScript(This,pwszType,pwszCommand,cnsScriptTime) )
    ( (This)->lpVtbl -> RemoveScript(This,wIndex) )
    ( (This)->lpVtbl -> GetCodecInfoCount(This,pcCodecInfos) )
    ( (This)->lpVtbl -> GetCodecInfo(This,wIndex,pcchName,pwszName,pcchDescription,pwszDescription,pCodecType,pcbCodecInfo,pbCodecInfo) )
    ( (This)->lpVtbl -> GetAttributeCountEx(This,wStreamNum,pcAttributes) )
    ( (This)->lpVtbl -> GetAttributeIndices(This,wStreamNum,pwszName,pwLangIndex,pwIndices,pwCount) )
    ( (This)->lpVtbl -> GetAttributeByIndexEx(This,wStreamNum,wIndex,pwszName,pwNameLen,pType,pwLangIndex,pValue,pdwDataLength) )
    ( (This)->lpVtbl -> ModifyAttribute(This,wStreamNum,wIndex,Type,wLangIndex,pValue,dwLength) )
    ( (This)->lpVtbl -> AddAttribute(This,wStreamNum,pszName,pwIndex,Type,wLangIndex,pValue,dwLength) )
    ( (This)->lpVtbl -> DeleteAttribute(This,wStreamNum,wIndex) )
    ( (This)->lpVtbl -> AddCodecInfo(This,pwszName,pwszDescription,codecType,cbCodecInfo,pbCodecInfo) )
EXTERN_C const IID IID_IWMProfileManager;
    typedef struct IWMProfileManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMProfileManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMProfileManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMProfileManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateEmptyProfile )(
            IWMProfileManager * This,
                       WMT_VERSION dwVersion,
                        IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *LoadProfileByID )(
            IWMProfileManager * This,
                       REFGUID guidProfile,
                        IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *LoadProfileByData )(
            IWMProfileManager * This,
                       const WCHAR *pwszProfile,
                        IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *SaveProfile )(
            IWMProfileManager * This,
                       IWMProfile *pIWMProfile,
                       WCHAR *pwszProfile,
                            DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSystemProfileCount )(
            IWMProfileManager * This,
                        DWORD *pcProfiles);
        HRESULT ( STDMETHODCALLTYPE *LoadSystemProfile )(
            IWMProfileManager * This,
                       DWORD dwProfileIndex,
                        IWMProfile **ppProfile);
        END_INTERFACE
    } IWMProfileManagerVtbl;
    interface IWMProfileManager
    {
        CONST_VTBL struct IWMProfileManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateEmptyProfile(This,dwVersion,ppProfile) )
    ( (This)->lpVtbl -> LoadProfileByID(This,guidProfile,ppProfile) )
    ( (This)->lpVtbl -> LoadProfileByData(This,pwszProfile,ppProfile) )
    ( (This)->lpVtbl -> SaveProfile(This,pIWMProfile,pwszProfile,pdwLength) )
    ( (This)->lpVtbl -> GetSystemProfileCount(This,pcProfiles) )
    ( (This)->lpVtbl -> LoadSystemProfile(This,dwProfileIndex,ppProfile) )
EXTERN_C const IID IID_IWMProfileManager2;
    typedef struct IWMProfileManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMProfileManager2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMProfileManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMProfileManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateEmptyProfile )(
            IWMProfileManager2 * This,
                       WMT_VERSION dwVersion,
                        IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *LoadProfileByID )(
            IWMProfileManager2 * This,
                       REFGUID guidProfile,
                        IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *LoadProfileByData )(
            IWMProfileManager2 * This,
                       const WCHAR *pwszProfile,
                        IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *SaveProfile )(
            IWMProfileManager2 * This,
                       IWMProfile *pIWMProfile,
                       WCHAR *pwszProfile,
                            DWORD *pdwLength);
        HRESULT ( STDMETHODCALLTYPE *GetSystemProfileCount )(
            IWMProfileManager2 * This,
                        DWORD *pcProfiles);
        HRESULT ( STDMETHODCALLTYPE *LoadSystemProfile )(
            IWMProfileManager2 * This,
                       DWORD dwProfileIndex,
                        IWMProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *GetSystemProfileVersion )(
            IWMProfileManager2 * This,
            WMT_VERSION *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *SetSystemProfileVersion )(
            IWMProfileManager2 * This,
            WMT_VERSION dwVersion);
        END_INTERFACE
    } IWMProfileManager2Vtbl;
    interface IWMProfileManager2
    {
        CONST_VTBL struct IWMProfileManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateEmptyProfile(This,dwVersion,ppProfile) )
    ( (This)->lpVtbl -> LoadProfileByID(This,guidProfile,ppProfile) )
    ( (This)->lpVtbl -> LoadProfileByData(This,pwszProfile,ppProfile) )
    ( (This)->lpVtbl -> SaveProfile(This,pIWMProfile,pwszProfile,pdwLength) )
    ( (This)->lpVtbl -> GetSystemProfileCount(This,pcProfiles) )
    ( (This)->lpVtbl -> LoadSystemProfile(This,dwProfileIndex,ppProfile) )
    ( (This)->lpVtbl -> GetSystemProfileVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> SetSystemProfileVersion(This,dwVersion) )
EXTERN_C const IID IID_IWMProfileManagerLanguage;
    typedef struct IWMProfileManagerLanguageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMProfileManagerLanguage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMProfileManagerLanguage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMProfileManagerLanguage * This);
        HRESULT ( STDMETHODCALLTYPE *GetUserLanguageID )(
            IWMProfileManagerLanguage * This,
            WORD *wLangID);
        HRESULT ( STDMETHODCALLTYPE *SetUserLanguageID )(
            IWMProfileManagerLanguage * This,
            WORD wLangID);
        END_INTERFACE
    } IWMProfileManagerLanguageVtbl;
    interface IWMProfileManagerLanguage
    {
        CONST_VTBL struct IWMProfileManagerLanguageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUserLanguageID(This,wLangID) )
    ( (This)->lpVtbl -> SetUserLanguageID(This,wLangID) )
EXTERN_C const IID IID_IWMProfile;
    typedef struct IWMProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMProfile * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMProfile * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            IWMProfile * This,
                        WMT_VERSION *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IWMProfile * This,
                                 WCHAR *pwszName,
                            DWORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            IWMProfile * This,
                       const WCHAR *pwszName);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IWMProfile * This,
                                 WCHAR *pwszDescription,
                            DWORD *pcchDescription);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            IWMProfile * This,
                       const WCHAR *pwszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IWMProfile * This,
                        DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IWMProfile * This,
                       DWORD dwStreamIndex,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *GetStreamByNumber )(
            IWMProfile * This,
                       WORD wStreamNum,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IWMProfile * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamByNumber )(
            IWMProfile * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IWMProfile * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *ReconfigStream )(
            IWMProfile * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *CreateNewStream )(
            IWMProfile * This,
                       REFGUID guidStreamType,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusionCount )(
            IWMProfile * This,
                        DWORD *pcME);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusion )(
            IWMProfile * This,
                       DWORD dwMEIndex,
                        IWMMutualExclusion **ppME);
        HRESULT ( STDMETHODCALLTYPE *RemoveMutualExclusion )(
            IWMProfile * This,
                       IWMMutualExclusion *pME);
        HRESULT ( STDMETHODCALLTYPE *AddMutualExclusion )(
            IWMProfile * This,
                       IWMMutualExclusion *pME);
        HRESULT ( STDMETHODCALLTYPE *CreateNewMutualExclusion )(
            IWMProfile * This,
                        IWMMutualExclusion **ppME);
        END_INTERFACE
    } IWMProfileVtbl;
    interface IWMProfile
    {
        CONST_VTBL struct IWMProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) )
    ( (This)->lpVtbl -> SetName(This,pwszName) )
    ( (This)->lpVtbl -> GetDescription(This,pwszDescription,pcchDescription) )
    ( (This)->lpVtbl -> SetDescription(This,pwszDescription) )
    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) )
    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,ppConfig) )
    ( (This)->lpVtbl -> GetStreamByNumber(This,wStreamNum,ppConfig) )
    ( (This)->lpVtbl -> RemoveStream(This,pConfig) )
    ( (This)->lpVtbl -> RemoveStreamByNumber(This,wStreamNum) )
    ( (This)->lpVtbl -> AddStream(This,pConfig) )
    ( (This)->lpVtbl -> ReconfigStream(This,pConfig) )
    ( (This)->lpVtbl -> CreateNewStream(This,guidStreamType,ppConfig) )
    ( (This)->lpVtbl -> GetMutualExclusionCount(This,pcME) )
    ( (This)->lpVtbl -> GetMutualExclusion(This,dwMEIndex,ppME) )
    ( (This)->lpVtbl -> RemoveMutualExclusion(This,pME) )
    ( (This)->lpVtbl -> AddMutualExclusion(This,pME) )
    ( (This)->lpVtbl -> CreateNewMutualExclusion(This,ppME) )
EXTERN_C const IID IID_IWMProfile2;
    typedef struct IWMProfile2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMProfile2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMProfile2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMProfile2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            IWMProfile2 * This,
                        WMT_VERSION *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IWMProfile2 * This,
                                 WCHAR *pwszName,
                            DWORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            IWMProfile2 * This,
                       const WCHAR *pwszName);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IWMProfile2 * This,
                                 WCHAR *pwszDescription,
                            DWORD *pcchDescription);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            IWMProfile2 * This,
                       const WCHAR *pwszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IWMProfile2 * This,
                        DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IWMProfile2 * This,
                       DWORD dwStreamIndex,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *GetStreamByNumber )(
            IWMProfile2 * This,
                       WORD wStreamNum,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IWMProfile2 * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamByNumber )(
            IWMProfile2 * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IWMProfile2 * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *ReconfigStream )(
            IWMProfile2 * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *CreateNewStream )(
            IWMProfile2 * This,
                       REFGUID guidStreamType,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusionCount )(
            IWMProfile2 * This,
                        DWORD *pcME);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusion )(
            IWMProfile2 * This,
                       DWORD dwMEIndex,
                        IWMMutualExclusion **ppME);
        HRESULT ( STDMETHODCALLTYPE *RemoveMutualExclusion )(
            IWMProfile2 * This,
                       IWMMutualExclusion *pME);
        HRESULT ( STDMETHODCALLTYPE *AddMutualExclusion )(
            IWMProfile2 * This,
                       IWMMutualExclusion *pME);
        HRESULT ( STDMETHODCALLTYPE *CreateNewMutualExclusion )(
            IWMProfile2 * This,
                        IWMMutualExclusion **ppME);
        HRESULT ( STDMETHODCALLTYPE *GetProfileID )(
            IWMProfile2 * This,
                        GUID *pguidID);
        END_INTERFACE
    } IWMProfile2Vtbl;
    interface IWMProfile2
    {
        CONST_VTBL struct IWMProfile2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) )
    ( (This)->lpVtbl -> SetName(This,pwszName) )
    ( (This)->lpVtbl -> GetDescription(This,pwszDescription,pcchDescription) )
    ( (This)->lpVtbl -> SetDescription(This,pwszDescription) )
    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) )
    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,ppConfig) )
    ( (This)->lpVtbl -> GetStreamByNumber(This,wStreamNum,ppConfig) )
    ( (This)->lpVtbl -> RemoveStream(This,pConfig) )
    ( (This)->lpVtbl -> RemoveStreamByNumber(This,wStreamNum) )
    ( (This)->lpVtbl -> AddStream(This,pConfig) )
    ( (This)->lpVtbl -> ReconfigStream(This,pConfig) )
    ( (This)->lpVtbl -> CreateNewStream(This,guidStreamType,ppConfig) )
    ( (This)->lpVtbl -> GetMutualExclusionCount(This,pcME) )
    ( (This)->lpVtbl -> GetMutualExclusion(This,dwMEIndex,ppME) )
    ( (This)->lpVtbl -> RemoveMutualExclusion(This,pME) )
    ( (This)->lpVtbl -> AddMutualExclusion(This,pME) )
    ( (This)->lpVtbl -> CreateNewMutualExclusion(This,ppME) )
    ( (This)->lpVtbl -> GetProfileID(This,pguidID) )
EXTERN_C const IID IID_IWMProfile3;
    typedef struct IWMProfile3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMProfile3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMProfile3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMProfile3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetVersion )(
            IWMProfile3 * This,
                        WMT_VERSION *pdwVersion);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IWMProfile3 * This,
                                 WCHAR *pwszName,
                            DWORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            IWMProfile3 * This,
                       const WCHAR *pwszName);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            IWMProfile3 * This,
                                 WCHAR *pwszDescription,
                            DWORD *pcchDescription);
        HRESULT ( STDMETHODCALLTYPE *SetDescription )(
            IWMProfile3 * This,
                       const WCHAR *pwszDescription);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            IWMProfile3 * This,
                        DWORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            IWMProfile3 * This,
                       DWORD dwStreamIndex,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *GetStreamByNumber )(
            IWMProfile3 * This,
                       WORD wStreamNum,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IWMProfile3 * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamByNumber )(
            IWMProfile3 * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IWMProfile3 * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *ReconfigStream )(
            IWMProfile3 * This,
                       IWMStreamConfig *pConfig);
        HRESULT ( STDMETHODCALLTYPE *CreateNewStream )(
            IWMProfile3 * This,
                       REFGUID guidStreamType,
                        IWMStreamConfig **ppConfig);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusionCount )(
            IWMProfile3 * This,
                        DWORD *pcME);
        HRESULT ( STDMETHODCALLTYPE *GetMutualExclusion )(
            IWMProfile3 * This,
                       DWORD dwMEIndex,
                        IWMMutualExclusion **ppME);
        HRESULT ( STDMETHODCALLTYPE *RemoveMutualExclusion )(
            IWMProfile3 * This,
                       IWMMutualExclusion *pME);
        HRESULT ( STDMETHODCALLTYPE *AddMutualExclusion )(
            IWMProfile3 * This,
                       IWMMutualExclusion *pME);
        HRESULT ( STDMETHODCALLTYPE *CreateNewMutualExclusion )(
            IWMProfile3 * This,
                        IWMMutualExclusion **ppME);
        HRESULT ( STDMETHODCALLTYPE *GetProfileID )(
            IWMProfile3 * This,
                        GUID *pguidID);
        HRESULT ( STDMETHODCALLTYPE *GetStorageFormat )(
            IWMProfile3 * This,
                        WMT_STORAGE_FORMAT *pnStorageFormat);
        HRESULT ( STDMETHODCALLTYPE *SetStorageFormat )(
            IWMProfile3 * This,
                       WMT_STORAGE_FORMAT nStorageFormat);
        HRESULT ( STDMETHODCALLTYPE *GetBandwidthSharingCount )(
            IWMProfile3 * This,
                        DWORD *pcBS);
        HRESULT ( STDMETHODCALLTYPE *GetBandwidthSharing )(
            IWMProfile3 * This,
                       DWORD dwBSIndex,
                        IWMBandwidthSharing **ppBS);
        HRESULT ( STDMETHODCALLTYPE *RemoveBandwidthSharing )(
            IWMProfile3 * This,
                       IWMBandwidthSharing *pBS);
        HRESULT ( STDMETHODCALLTYPE *AddBandwidthSharing )(
            IWMProfile3 * This,
                       IWMBandwidthSharing *pBS);
        HRESULT ( STDMETHODCALLTYPE *CreateNewBandwidthSharing )(
            IWMProfile3 * This,
                        IWMBandwidthSharing **ppBS);
        HRESULT ( STDMETHODCALLTYPE *GetStreamPrioritization )(
            IWMProfile3 * This,
                        IWMStreamPrioritization **ppSP);
        HRESULT ( STDMETHODCALLTYPE *SetStreamPrioritization )(
            IWMProfile3 * This,
                       IWMStreamPrioritization *pSP);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamPrioritization )(
            IWMProfile3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateNewStreamPrioritization )(
            IWMProfile3 * This,
                        IWMStreamPrioritization **ppSP);
        HRESULT ( STDMETHODCALLTYPE *GetExpectedPacketCount )(
            IWMProfile3 * This,
                       QWORD msDuration,
                        QWORD *pcPackets);
        END_INTERFACE
    } IWMProfile3Vtbl;
    interface IWMProfile3
    {
        CONST_VTBL struct IWMProfile3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVersion(This,pdwVersion) )
    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) )
    ( (This)->lpVtbl -> SetName(This,pwszName) )
    ( (This)->lpVtbl -> GetDescription(This,pwszDescription,pcchDescription) )
    ( (This)->lpVtbl -> SetDescription(This,pwszDescription) )
    ( (This)->lpVtbl -> GetStreamCount(This,pcStreams) )
    ( (This)->lpVtbl -> GetStream(This,dwStreamIndex,ppConfig) )
    ( (This)->lpVtbl -> GetStreamByNumber(This,wStreamNum,ppConfig) )
    ( (This)->lpVtbl -> RemoveStream(This,pConfig) )
    ( (This)->lpVtbl -> RemoveStreamByNumber(This,wStreamNum) )
    ( (This)->lpVtbl -> AddStream(This,pConfig) )
    ( (This)->lpVtbl -> ReconfigStream(This,pConfig) )
    ( (This)->lpVtbl -> CreateNewStream(This,guidStreamType,ppConfig) )
    ( (This)->lpVtbl -> GetMutualExclusionCount(This,pcME) )
    ( (This)->lpVtbl -> GetMutualExclusion(This,dwMEIndex,ppME) )
    ( (This)->lpVtbl -> RemoveMutualExclusion(This,pME) )
    ( (This)->lpVtbl -> AddMutualExclusion(This,pME) )
    ( (This)->lpVtbl -> CreateNewMutualExclusion(This,ppME) )
    ( (This)->lpVtbl -> GetProfileID(This,pguidID) )
    ( (This)->lpVtbl -> GetStorageFormat(This,pnStorageFormat) )
    ( (This)->lpVtbl -> SetStorageFormat(This,nStorageFormat) )
    ( (This)->lpVtbl -> GetBandwidthSharingCount(This,pcBS) )
    ( (This)->lpVtbl -> GetBandwidthSharing(This,dwBSIndex,ppBS) )
    ( (This)->lpVtbl -> RemoveBandwidthSharing(This,pBS) )
    ( (This)->lpVtbl -> AddBandwidthSharing(This,pBS) )
    ( (This)->lpVtbl -> CreateNewBandwidthSharing(This,ppBS) )
    ( (This)->lpVtbl -> GetStreamPrioritization(This,ppSP) )
    ( (This)->lpVtbl -> SetStreamPrioritization(This,pSP) )
    ( (This)->lpVtbl -> RemoveStreamPrioritization(This) )
    ( (This)->lpVtbl -> CreateNewStreamPrioritization(This,ppSP) )
    ( (This)->lpVtbl -> GetExpectedPacketCount(This,msDuration,pcPackets) )
EXTERN_C const IID IID_IWMStreamConfig;
    typedef struct IWMStreamConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMStreamConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMStreamConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMStreamConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamType )(
            IWMStreamConfig * This,
                        GUID *pguidStreamType);
        HRESULT ( STDMETHODCALLTYPE *GetStreamNumber )(
            IWMStreamConfig * This,
                        WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *SetStreamNumber )(
            IWMStreamConfig * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetStreamName )(
            IWMStreamConfig * This,
                                 WCHAR *pwszStreamName,
                            WORD *pcchStreamName);
        HRESULT ( STDMETHODCALLTYPE *SetStreamName )(
            IWMStreamConfig * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszStreamName);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionName )(
            IWMStreamConfig * This,
                                 WCHAR *pwszInputName,
                            WORD *pcchInputName);
        HRESULT ( STDMETHODCALLTYPE *SetConnectionName )(
            IWMStreamConfig * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszInputName);
        HRESULT ( STDMETHODCALLTYPE *GetBitrate )(
            IWMStreamConfig * This,
                        DWORD *pdwBitrate);
        HRESULT ( STDMETHODCALLTYPE *SetBitrate )(
            IWMStreamConfig * This,
                       DWORD pdwBitrate);
        HRESULT ( STDMETHODCALLTYPE *GetBufferWindow )(
            IWMStreamConfig * This,
                        DWORD *pmsBufferWindow);
        HRESULT ( STDMETHODCALLTYPE *SetBufferWindow )(
            IWMStreamConfig * This,
                       DWORD msBufferWindow);
        END_INTERFACE
    } IWMStreamConfigVtbl;
    interface IWMStreamConfig
    {
        CONST_VTBL struct IWMStreamConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamType(This,pguidStreamType) )
    ( (This)->lpVtbl -> GetStreamNumber(This,pwStreamNum) )
    ( (This)->lpVtbl -> SetStreamNumber(This,wStreamNum) )
    ( (This)->lpVtbl -> GetStreamName(This,pwszStreamName,pcchStreamName) )
    ( (This)->lpVtbl -> SetStreamName(This,pwszStreamName) )
    ( (This)->lpVtbl -> GetConnectionName(This,pwszInputName,pcchInputName) )
    ( (This)->lpVtbl -> SetConnectionName(This,pwszInputName) )
    ( (This)->lpVtbl -> GetBitrate(This,pdwBitrate) )
    ( (This)->lpVtbl -> SetBitrate(This,pdwBitrate) )
    ( (This)->lpVtbl -> GetBufferWindow(This,pmsBufferWindow) )
    ( (This)->lpVtbl -> SetBufferWindow(This,msBufferWindow) )
EXTERN_C const IID IID_IWMStreamConfig2;
    typedef struct IWMStreamConfig2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMStreamConfig2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMStreamConfig2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMStreamConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamType )(
            IWMStreamConfig2 * This,
                        GUID *pguidStreamType);
        HRESULT ( STDMETHODCALLTYPE *GetStreamNumber )(
            IWMStreamConfig2 * This,
                        WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *SetStreamNumber )(
            IWMStreamConfig2 * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetStreamName )(
            IWMStreamConfig2 * This,
                                 WCHAR *pwszStreamName,
                            WORD *pcchStreamName);
        HRESULT ( STDMETHODCALLTYPE *SetStreamName )(
            IWMStreamConfig2 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszStreamName);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionName )(
            IWMStreamConfig2 * This,
                                 WCHAR *pwszInputName,
                            WORD *pcchInputName);
        HRESULT ( STDMETHODCALLTYPE *SetConnectionName )(
            IWMStreamConfig2 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszInputName);
        HRESULT ( STDMETHODCALLTYPE *GetBitrate )(
            IWMStreamConfig2 * This,
                        DWORD *pdwBitrate);
        HRESULT ( STDMETHODCALLTYPE *SetBitrate )(
            IWMStreamConfig2 * This,
                       DWORD pdwBitrate);
        HRESULT ( STDMETHODCALLTYPE *GetBufferWindow )(
            IWMStreamConfig2 * This,
                        DWORD *pmsBufferWindow);
        HRESULT ( STDMETHODCALLTYPE *SetBufferWindow )(
            IWMStreamConfig2 * This,
                       DWORD msBufferWindow);
        HRESULT ( STDMETHODCALLTYPE *GetTransportType )(
            IWMStreamConfig2 * This,
                        WMT_TRANSPORT_TYPE *pnTransportType);
        HRESULT ( STDMETHODCALLTYPE *SetTransportType )(
            IWMStreamConfig2 * This,
                       WMT_TRANSPORT_TYPE nTransportType);
        HRESULT ( STDMETHODCALLTYPE *AddDataUnitExtension )(
            IWMStreamConfig2 * This,
                       GUID guidExtensionSystemID,
                       WORD cbExtensionDataSize,
                                BYTE *pbExtensionSystemInfo,
                       DWORD cbExtensionSystemInfo);
        HRESULT ( STDMETHODCALLTYPE *GetDataUnitExtensionCount )(
            IWMStreamConfig2 * This,
                        WORD *pcDataUnitExtensions);
        HRESULT ( STDMETHODCALLTYPE *GetDataUnitExtension )(
            IWMStreamConfig2 * This,
                       WORD wDataUnitExtensionNumber,
                        GUID *pguidExtensionSystemID,
                        WORD *pcbExtensionDataSize,
                                 BYTE *pbExtensionSystemInfo,
                            DWORD *pcbExtensionSystemInfo);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllDataUnitExtensions )(
            IWMStreamConfig2 * This);
        END_INTERFACE
    } IWMStreamConfig2Vtbl;
    interface IWMStreamConfig2
    {
        CONST_VTBL struct IWMStreamConfig2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamType(This,pguidStreamType) )
    ( (This)->lpVtbl -> GetStreamNumber(This,pwStreamNum) )
    ( (This)->lpVtbl -> SetStreamNumber(This,wStreamNum) )
    ( (This)->lpVtbl -> GetStreamName(This,pwszStreamName,pcchStreamName) )
    ( (This)->lpVtbl -> SetStreamName(This,pwszStreamName) )
    ( (This)->lpVtbl -> GetConnectionName(This,pwszInputName,pcchInputName) )
    ( (This)->lpVtbl -> SetConnectionName(This,pwszInputName) )
    ( (This)->lpVtbl -> GetBitrate(This,pdwBitrate) )
    ( (This)->lpVtbl -> SetBitrate(This,pdwBitrate) )
    ( (This)->lpVtbl -> GetBufferWindow(This,pmsBufferWindow) )
    ( (This)->lpVtbl -> SetBufferWindow(This,msBufferWindow) )
    ( (This)->lpVtbl -> GetTransportType(This,pnTransportType) )
    ( (This)->lpVtbl -> SetTransportType(This,nTransportType) )
    ( (This)->lpVtbl -> AddDataUnitExtension(This,guidExtensionSystemID,cbExtensionDataSize,pbExtensionSystemInfo,cbExtensionSystemInfo) )
    ( (This)->lpVtbl -> GetDataUnitExtensionCount(This,pcDataUnitExtensions) )
    ( (This)->lpVtbl -> GetDataUnitExtension(This,wDataUnitExtensionNumber,pguidExtensionSystemID,pcbExtensionDataSize,pbExtensionSystemInfo,pcbExtensionSystemInfo) )
    ( (This)->lpVtbl -> RemoveAllDataUnitExtensions(This) )
EXTERN_C const IID IID_IWMStreamConfig3;
    typedef struct IWMStreamConfig3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMStreamConfig3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMStreamConfig3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMStreamConfig3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamType )(
            IWMStreamConfig3 * This,
                        GUID *pguidStreamType);
        HRESULT ( STDMETHODCALLTYPE *GetStreamNumber )(
            IWMStreamConfig3 * This,
                        WORD *pwStreamNum);
        HRESULT ( STDMETHODCALLTYPE *SetStreamNumber )(
            IWMStreamConfig3 * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetStreamName )(
            IWMStreamConfig3 * This,
                                 WCHAR *pwszStreamName,
                            WORD *pcchStreamName);
        HRESULT ( STDMETHODCALLTYPE *SetStreamName )(
            IWMStreamConfig3 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszStreamName);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionName )(
            IWMStreamConfig3 * This,
                                 WCHAR *pwszInputName,
                            WORD *pcchInputName);
        HRESULT ( STDMETHODCALLTYPE *SetConnectionName )(
            IWMStreamConfig3 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszInputName);
        HRESULT ( STDMETHODCALLTYPE *GetBitrate )(
            IWMStreamConfig3 * This,
                        DWORD *pdwBitrate);
        HRESULT ( STDMETHODCALLTYPE *SetBitrate )(
            IWMStreamConfig3 * This,
                       DWORD pdwBitrate);
        HRESULT ( STDMETHODCALLTYPE *GetBufferWindow )(
            IWMStreamConfig3 * This,
                        DWORD *pmsBufferWindow);
        HRESULT ( STDMETHODCALLTYPE *SetBufferWindow )(
            IWMStreamConfig3 * This,
                       DWORD msBufferWindow);
        HRESULT ( STDMETHODCALLTYPE *GetTransportType )(
            IWMStreamConfig3 * This,
                        WMT_TRANSPORT_TYPE *pnTransportType);
        HRESULT ( STDMETHODCALLTYPE *SetTransportType )(
            IWMStreamConfig3 * This,
                       WMT_TRANSPORT_TYPE nTransportType);
        HRESULT ( STDMETHODCALLTYPE *AddDataUnitExtension )(
            IWMStreamConfig3 * This,
                       GUID guidExtensionSystemID,
                       WORD cbExtensionDataSize,
                                BYTE *pbExtensionSystemInfo,
                       DWORD cbExtensionSystemInfo);
        HRESULT ( STDMETHODCALLTYPE *GetDataUnitExtensionCount )(
            IWMStreamConfig3 * This,
                        WORD *pcDataUnitExtensions);
        HRESULT ( STDMETHODCALLTYPE *GetDataUnitExtension )(
            IWMStreamConfig3 * This,
                       WORD wDataUnitExtensionNumber,
                        GUID *pguidExtensionSystemID,
                        WORD *pcbExtensionDataSize,
                                 BYTE *pbExtensionSystemInfo,
                            DWORD *pcbExtensionSystemInfo);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllDataUnitExtensions )(
            IWMStreamConfig3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            IWMStreamConfig3 * This,
                                 WCHAR *pwszLanguageString,
                            WORD *pcchLanguageStringLength);
        HRESULT ( STDMETHODCALLTYPE *SetLanguage )(
            IWMStreamConfig3 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszLanguageString);
        END_INTERFACE
    } IWMStreamConfig3Vtbl;
    interface IWMStreamConfig3
    {
        CONST_VTBL struct IWMStreamConfig3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamType(This,pguidStreamType) )
    ( (This)->lpVtbl -> GetStreamNumber(This,pwStreamNum) )
    ( (This)->lpVtbl -> SetStreamNumber(This,wStreamNum) )
    ( (This)->lpVtbl -> GetStreamName(This,pwszStreamName,pcchStreamName) )
    ( (This)->lpVtbl -> SetStreamName(This,pwszStreamName) )
    ( (This)->lpVtbl -> GetConnectionName(This,pwszInputName,pcchInputName) )
    ( (This)->lpVtbl -> SetConnectionName(This,pwszInputName) )
    ( (This)->lpVtbl -> GetBitrate(This,pdwBitrate) )
    ( (This)->lpVtbl -> SetBitrate(This,pdwBitrate) )
    ( (This)->lpVtbl -> GetBufferWindow(This,pmsBufferWindow) )
    ( (This)->lpVtbl -> SetBufferWindow(This,msBufferWindow) )
    ( (This)->lpVtbl -> GetTransportType(This,pnTransportType) )
    ( (This)->lpVtbl -> SetTransportType(This,nTransportType) )
    ( (This)->lpVtbl -> AddDataUnitExtension(This,guidExtensionSystemID,cbExtensionDataSize,pbExtensionSystemInfo,cbExtensionSystemInfo) )
    ( (This)->lpVtbl -> GetDataUnitExtensionCount(This,pcDataUnitExtensions) )
    ( (This)->lpVtbl -> GetDataUnitExtension(This,wDataUnitExtensionNumber,pguidExtensionSystemID,pcbExtensionDataSize,pbExtensionSystemInfo,pcbExtensionSystemInfo) )
    ( (This)->lpVtbl -> RemoveAllDataUnitExtensions(This) )
    ( (This)->lpVtbl -> GetLanguage(This,pwszLanguageString,pcchLanguageStringLength) )
    ( (This)->lpVtbl -> SetLanguage(This,pwszLanguageString) )
EXTERN_C const IID IID_IWMPacketSize;
    typedef struct IWMPacketSizeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPacketSize * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPacketSize * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPacketSize * This);
        HRESULT ( STDMETHODCALLTYPE *GetMaxPacketSize )(
            IWMPacketSize * This,
                        DWORD *pdwMaxPacketSize);
        HRESULT ( STDMETHODCALLTYPE *SetMaxPacketSize )(
            IWMPacketSize * This,
                       DWORD dwMaxPacketSize);
        END_INTERFACE
    } IWMPacketSizeVtbl;
    interface IWMPacketSize
    {
        CONST_VTBL struct IWMPacketSizeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMaxPacketSize(This,pdwMaxPacketSize) )
    ( (This)->lpVtbl -> SetMaxPacketSize(This,dwMaxPacketSize) )
EXTERN_C const IID IID_IWMPacketSize2;
    typedef struct IWMPacketSize2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPacketSize2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPacketSize2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPacketSize2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetMaxPacketSize )(
            IWMPacketSize2 * This,
                        DWORD *pdwMaxPacketSize);
        HRESULT ( STDMETHODCALLTYPE *SetMaxPacketSize )(
            IWMPacketSize2 * This,
                       DWORD dwMaxPacketSize);
        HRESULT ( STDMETHODCALLTYPE *GetMinPacketSize )(
            IWMPacketSize2 * This,
                        DWORD *pdwMinPacketSize);
        HRESULT ( STDMETHODCALLTYPE *SetMinPacketSize )(
            IWMPacketSize2 * This,
                       DWORD dwMinPacketSize);
        END_INTERFACE
    } IWMPacketSize2Vtbl;
    interface IWMPacketSize2
    {
        CONST_VTBL struct IWMPacketSize2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMaxPacketSize(This,pdwMaxPacketSize) )
    ( (This)->lpVtbl -> SetMaxPacketSize(This,dwMaxPacketSize) )
    ( (This)->lpVtbl -> GetMinPacketSize(This,pdwMinPacketSize) )
    ( (This)->lpVtbl -> SetMinPacketSize(This,dwMinPacketSize) )
EXTERN_C const IID IID_IWMStreamList;
    typedef struct IWMStreamListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMStreamList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMStreamList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMStreamList * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreams )(
            IWMStreamList * This,
                                 WORD *pwStreamNumArray,
                            WORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IWMStreamList * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IWMStreamList * This,
                       WORD wStreamNum);
        END_INTERFACE
    } IWMStreamListVtbl;
    interface IWMStreamList
    {
        CONST_VTBL struct IWMStreamListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) )
    ( (This)->lpVtbl -> AddStream(This,wStreamNum) )
    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) )
EXTERN_C const IID IID_IWMMutualExclusion;
    typedef struct IWMMutualExclusionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMMutualExclusion * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMMutualExclusion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMMutualExclusion * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreams )(
            IWMMutualExclusion * This,
                                 WORD *pwStreamNumArray,
                            WORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IWMMutualExclusion * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IWMMutualExclusion * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IWMMutualExclusion * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *SetType )(
            IWMMutualExclusion * This,
                       REFGUID guidType);
        END_INTERFACE
    } IWMMutualExclusionVtbl;
    interface IWMMutualExclusion
    {
        CONST_VTBL struct IWMMutualExclusionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) )
    ( (This)->lpVtbl -> AddStream(This,wStreamNum) )
    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> SetType(This,guidType) )
EXTERN_C const IID IID_IWMMutualExclusion2;
    typedef struct IWMMutualExclusion2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMMutualExclusion2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMMutualExclusion2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMMutualExclusion2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreams )(
            IWMMutualExclusion2 * This,
                                 WORD *pwStreamNumArray,
                            WORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IWMMutualExclusion2 * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IWMMutualExclusion2 * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IWMMutualExclusion2 * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *SetType )(
            IWMMutualExclusion2 * This,
                       REFGUID guidType);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            IWMMutualExclusion2 * This,
                                 WCHAR *pwszName,
                            WORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *SetName )(
            IWMMutualExclusion2 * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszName);
        HRESULT ( STDMETHODCALLTYPE *GetRecordCount )(
            IWMMutualExclusion2 * This,
                        WORD *pwRecordCount);
        HRESULT ( STDMETHODCALLTYPE *AddRecord )(
            IWMMutualExclusion2 * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveRecord )(
            IWMMutualExclusion2 * This,
                       WORD wRecordNumber);
        HRESULT ( STDMETHODCALLTYPE *GetRecordName )(
            IWMMutualExclusion2 * This,
                       WORD wRecordNumber,
                                 WCHAR *pwszRecordName,
                            WORD *pcchRecordName);
        HRESULT ( STDMETHODCALLTYPE *SetRecordName )(
            IWMMutualExclusion2 * This,
                       WORD wRecordNumber,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszRecordName);
        HRESULT ( STDMETHODCALLTYPE *GetStreamsForRecord )(
            IWMMutualExclusion2 * This,
                       WORD wRecordNumber,
                                 WORD *pwStreamNumArray,
                            WORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *AddStreamForRecord )(
            IWMMutualExclusion2 * This,
                       WORD wRecordNumber,
                       WORD wStreamNumber);
        HRESULT ( STDMETHODCALLTYPE *RemoveStreamForRecord )(
            IWMMutualExclusion2 * This,
                       WORD wRecordNumber,
                       WORD wStreamNumber);
        END_INTERFACE
    } IWMMutualExclusion2Vtbl;
    interface IWMMutualExclusion2
    {
        CONST_VTBL struct IWMMutualExclusion2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) )
    ( (This)->lpVtbl -> AddStream(This,wStreamNum) )
    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> SetType(This,guidType) )
    ( (This)->lpVtbl -> GetName(This,pwszName,pcchName) )
    ( (This)->lpVtbl -> SetName(This,pwszName) )
    ( (This)->lpVtbl -> GetRecordCount(This,pwRecordCount) )
    ( (This)->lpVtbl -> AddRecord(This) )
    ( (This)->lpVtbl -> RemoveRecord(This,wRecordNumber) )
    ( (This)->lpVtbl -> GetRecordName(This,wRecordNumber,pwszRecordName,pcchRecordName) )
    ( (This)->lpVtbl -> SetRecordName(This,wRecordNumber,pwszRecordName) )
    ( (This)->lpVtbl -> GetStreamsForRecord(This,wRecordNumber,pwStreamNumArray,pcStreams) )
    ( (This)->lpVtbl -> AddStreamForRecord(This,wRecordNumber,wStreamNumber) )
    ( (This)->lpVtbl -> RemoveStreamForRecord(This,wRecordNumber,wStreamNumber) )
EXTERN_C const IID IID_IWMBandwidthSharing;
    typedef struct IWMBandwidthSharingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMBandwidthSharing * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMBandwidthSharing * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMBandwidthSharing * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreams )(
            IWMBandwidthSharing * This,
                                 WORD *pwStreamNumArray,
                            WORD *pcStreams);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            IWMBandwidthSharing * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *RemoveStream )(
            IWMBandwidthSharing * This,
                       WORD wStreamNum);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            IWMBandwidthSharing * This,
                        GUID *pguidType);
        HRESULT ( STDMETHODCALLTYPE *SetType )(
            IWMBandwidthSharing * This,
                       REFGUID guidType);
        HRESULT ( STDMETHODCALLTYPE *GetBandwidth )(
            IWMBandwidthSharing * This,
                        DWORD *pdwBitrate,
                        DWORD *pmsBufferWindow);
        HRESULT ( STDMETHODCALLTYPE *SetBandwidth )(
            IWMBandwidthSharing * This,
                       DWORD dwBitrate,
                       DWORD msBufferWindow);
        END_INTERFACE
    } IWMBandwidthSharingVtbl;
    interface IWMBandwidthSharing
    {
        CONST_VTBL struct IWMBandwidthSharingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreams(This,pwStreamNumArray,pcStreams) )
    ( (This)->lpVtbl -> AddStream(This,wStreamNum) )
    ( (This)->lpVtbl -> RemoveStream(This,wStreamNum) )
    ( (This)->lpVtbl -> GetType(This,pguidType) )
    ( (This)->lpVtbl -> SetType(This,guidType) )
    ( (This)->lpVtbl -> GetBandwidth(This,pdwBitrate,pmsBufferWindow) )
    ( (This)->lpVtbl -> SetBandwidth(This,dwBitrate,msBufferWindow) )
EXTERN_C const IID IID_IWMStreamPrioritization;
    typedef struct IWMStreamPrioritizationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMStreamPrioritization * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMStreamPrioritization * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMStreamPrioritization * This);
        HRESULT ( STDMETHODCALLTYPE *GetPriorityRecords )(
            IWMStreamPrioritization * This,
                                 WM_STREAM_PRIORITY_RECORD *pRecordArray,
                            WORD *pcRecords);
        HRESULT ( STDMETHODCALLTYPE *SetPriorityRecords )(
            IWMStreamPrioritization * This,
                       WM_STREAM_PRIORITY_RECORD *pRecordArray,
                       WORD cRecords);
        END_INTERFACE
    } IWMStreamPrioritizationVtbl;
    interface IWMStreamPrioritization
    {
        CONST_VTBL struct IWMStreamPrioritizationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPriorityRecords(This,pRecordArray,pcRecords) )
    ( (This)->lpVtbl -> SetPriorityRecords(This,pRecordArray,cRecords) )
EXTERN_C const IID IID_IWMWriterAdvanced;
    typedef struct IWMWriterAdvancedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterAdvanced * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterAdvanced * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterAdvanced * This);
        HRESULT ( STDMETHODCALLTYPE *GetSinkCount )(
            IWMWriterAdvanced * This,
                        DWORD *pcSinks);
        HRESULT ( STDMETHODCALLTYPE *GetSink )(
            IWMWriterAdvanced * This,
                       DWORD dwSinkNum,
                        IWMWriterSink **ppSink);
        HRESULT ( STDMETHODCALLTYPE *AddSink )(
            IWMWriterAdvanced * This,
                       IWMWriterSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *RemoveSink )(
            IWMWriterAdvanced * This,
                       IWMWriterSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *WriteStreamSample )(
            IWMWriterAdvanced * This,
                       WORD wStreamNum,
                       QWORD cnsSampleTime,
                       DWORD msSampleSendTime,
                       QWORD cnsSampleDuration,
                       DWORD dwFlags,
                       INSSBuffer *pSample);
        HRESULT ( STDMETHODCALLTYPE *SetLiveSource )(
            IWMWriterAdvanced * This,
            BOOL fIsLiveSource);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterAdvanced * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *GetWriterTime )(
            IWMWriterAdvanced * This,
                        QWORD *pcnsCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMWriterAdvanced * This,
                       WORD wStreamNum,
                        WM_WRITER_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *SetSyncTolerance )(
            IWMWriterAdvanced * This,
                       DWORD msWindow);
        HRESULT ( STDMETHODCALLTYPE *GetSyncTolerance )(
            IWMWriterAdvanced * This,
                        DWORD *pmsWindow);
        END_INTERFACE
    } IWMWriterAdvancedVtbl;
    interface IWMWriterAdvanced
    {
        CONST_VTBL struct IWMWriterAdvancedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSinkCount(This,pcSinks) )
    ( (This)->lpVtbl -> GetSink(This,dwSinkNum,ppSink) )
    ( (This)->lpVtbl -> AddSink(This,pSink) )
    ( (This)->lpVtbl -> RemoveSink(This,pSink) )
    ( (This)->lpVtbl -> WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample) )
    ( (This)->lpVtbl -> SetLiveSource(This,fIsLiveSource) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> GetWriterTime(This,pcnsCurrentTime) )
    ( (This)->lpVtbl -> GetStatistics(This,wStreamNum,pStats) )
    ( (This)->lpVtbl -> SetSyncTolerance(This,msWindow) )
    ( (This)->lpVtbl -> GetSyncTolerance(This,pmsWindow) )
EXTERN_C const IID IID_IWMWriterAdvanced2;
    typedef struct IWMWriterAdvanced2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterAdvanced2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterAdvanced2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterAdvanced2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSinkCount )(
            IWMWriterAdvanced2 * This,
                        DWORD *pcSinks);
        HRESULT ( STDMETHODCALLTYPE *GetSink )(
            IWMWriterAdvanced2 * This,
                       DWORD dwSinkNum,
                        IWMWriterSink **ppSink);
        HRESULT ( STDMETHODCALLTYPE *AddSink )(
            IWMWriterAdvanced2 * This,
                       IWMWriterSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *RemoveSink )(
            IWMWriterAdvanced2 * This,
                       IWMWriterSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *WriteStreamSample )(
            IWMWriterAdvanced2 * This,
                       WORD wStreamNum,
                       QWORD cnsSampleTime,
                       DWORD msSampleSendTime,
                       QWORD cnsSampleDuration,
                       DWORD dwFlags,
                       INSSBuffer *pSample);
        HRESULT ( STDMETHODCALLTYPE *SetLiveSource )(
            IWMWriterAdvanced2 * This,
            BOOL fIsLiveSource);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterAdvanced2 * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *GetWriterTime )(
            IWMWriterAdvanced2 * This,
                        QWORD *pcnsCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMWriterAdvanced2 * This,
                       WORD wStreamNum,
                        WM_WRITER_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *SetSyncTolerance )(
            IWMWriterAdvanced2 * This,
                       DWORD msWindow);
        HRESULT ( STDMETHODCALLTYPE *GetSyncTolerance )(
            IWMWriterAdvanced2 * This,
                        DWORD *pmsWindow);
        HRESULT ( STDMETHODCALLTYPE *GetInputSetting )(
            IWMWriterAdvanced2 * This,
                       DWORD dwInputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetInputSetting )(
            IWMWriterAdvanced2 * This,
                       DWORD dwInputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        END_INTERFACE
    } IWMWriterAdvanced2Vtbl;
    interface IWMWriterAdvanced2
    {
        CONST_VTBL struct IWMWriterAdvanced2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSinkCount(This,pcSinks) )
    ( (This)->lpVtbl -> GetSink(This,dwSinkNum,ppSink) )
    ( (This)->lpVtbl -> AddSink(This,pSink) )
    ( (This)->lpVtbl -> RemoveSink(This,pSink) )
    ( (This)->lpVtbl -> WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample) )
    ( (This)->lpVtbl -> SetLiveSource(This,fIsLiveSource) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> GetWriterTime(This,pcnsCurrentTime) )
    ( (This)->lpVtbl -> GetStatistics(This,wStreamNum,pStats) )
    ( (This)->lpVtbl -> SetSyncTolerance(This,msWindow) )
    ( (This)->lpVtbl -> GetSyncTolerance(This,pmsWindow) )
    ( (This)->lpVtbl -> GetInputSetting(This,dwInputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetInputSetting(This,dwInputNum,pszName,Type,pValue,cbLength) )
EXTERN_C const IID IID_IWMWriterAdvanced3;
    typedef struct IWMWriterAdvanced3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterAdvanced3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterAdvanced3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterAdvanced3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSinkCount )(
            IWMWriterAdvanced3 * This,
                        DWORD *pcSinks);
        HRESULT ( STDMETHODCALLTYPE *GetSink )(
            IWMWriterAdvanced3 * This,
                       DWORD dwSinkNum,
                        IWMWriterSink **ppSink);
        HRESULT ( STDMETHODCALLTYPE *AddSink )(
            IWMWriterAdvanced3 * This,
                       IWMWriterSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *RemoveSink )(
            IWMWriterAdvanced3 * This,
                       IWMWriterSink *pSink);
        HRESULT ( STDMETHODCALLTYPE *WriteStreamSample )(
            IWMWriterAdvanced3 * This,
                       WORD wStreamNum,
                       QWORD cnsSampleTime,
                       DWORD msSampleSendTime,
                       QWORD cnsSampleDuration,
                       DWORD dwFlags,
                       INSSBuffer *pSample);
        HRESULT ( STDMETHODCALLTYPE *SetLiveSource )(
            IWMWriterAdvanced3 * This,
            BOOL fIsLiveSource);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterAdvanced3 * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *GetWriterTime )(
            IWMWriterAdvanced3 * This,
                        QWORD *pcnsCurrentTime);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMWriterAdvanced3 * This,
                       WORD wStreamNum,
                        WM_WRITER_STATISTICS *pStats);
        HRESULT ( STDMETHODCALLTYPE *SetSyncTolerance )(
            IWMWriterAdvanced3 * This,
                       DWORD msWindow);
        HRESULT ( STDMETHODCALLTYPE *GetSyncTolerance )(
            IWMWriterAdvanced3 * This,
                        DWORD *pmsWindow);
        HRESULT ( STDMETHODCALLTYPE *GetInputSetting )(
            IWMWriterAdvanced3 * This,
                       DWORD dwInputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetInputSetting )(
            IWMWriterAdvanced3 * This,
                       DWORD dwInputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetStatisticsEx )(
            IWMWriterAdvanced3 * This,
                       WORD wStreamNum,
                        WM_WRITER_STATISTICS_EX *pStats);
        HRESULT ( STDMETHODCALLTYPE *SetNonBlocking )(
            IWMWriterAdvanced3 * This);
        END_INTERFACE
    } IWMWriterAdvanced3Vtbl;
    interface IWMWriterAdvanced3
    {
        CONST_VTBL struct IWMWriterAdvanced3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSinkCount(This,pcSinks) )
    ( (This)->lpVtbl -> GetSink(This,dwSinkNum,ppSink) )
    ( (This)->lpVtbl -> AddSink(This,pSink) )
    ( (This)->lpVtbl -> RemoveSink(This,pSink) )
    ( (This)->lpVtbl -> WriteStreamSample(This,wStreamNum,cnsSampleTime,msSampleSendTime,cnsSampleDuration,dwFlags,pSample) )
    ( (This)->lpVtbl -> SetLiveSource(This,fIsLiveSource) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> GetWriterTime(This,pcnsCurrentTime) )
    ( (This)->lpVtbl -> GetStatistics(This,wStreamNum,pStats) )
    ( (This)->lpVtbl -> SetSyncTolerance(This,msWindow) )
    ( (This)->lpVtbl -> GetSyncTolerance(This,pmsWindow) )
    ( (This)->lpVtbl -> GetInputSetting(This,dwInputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetInputSetting(This,dwInputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> GetStatisticsEx(This,wStreamNum,pStats) )
    ( (This)->lpVtbl -> SetNonBlocking(This) )
EXTERN_C const IID IID_IWMWriterPreprocess;
    typedef struct IWMWriterPreprocessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterPreprocess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterPreprocess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterPreprocess * This);
        HRESULT ( STDMETHODCALLTYPE *GetMaxPreprocessingPasses )(
            IWMWriterPreprocess * This,
                       DWORD dwInputNum,
                       DWORD dwFlags,
                        DWORD *pdwMaxNumPasses);
        HRESULT ( STDMETHODCALLTYPE *SetNumPreprocessingPasses )(
            IWMWriterPreprocess * This,
                       DWORD dwInputNum,
                       DWORD dwFlags,
                       DWORD dwNumPasses);
        HRESULT ( STDMETHODCALLTYPE *BeginPreprocessingPass )(
            IWMWriterPreprocess * This,
                       DWORD dwInputNum,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *PreprocessSample )(
            IWMWriterPreprocess * This,
                       DWORD dwInputNum,
                       QWORD cnsSampleTime,
                       DWORD dwFlags,
                       INSSBuffer *pSample);
        HRESULT ( STDMETHODCALLTYPE *EndPreprocessingPass )(
            IWMWriterPreprocess * This,
                       DWORD dwInputNum,
                       DWORD dwFlags);
        END_INTERFACE
    } IWMWriterPreprocessVtbl;
    interface IWMWriterPreprocess
    {
        CONST_VTBL struct IWMWriterPreprocessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMaxPreprocessingPasses(This,dwInputNum,dwFlags,pdwMaxNumPasses) )
    ( (This)->lpVtbl -> SetNumPreprocessingPasses(This,dwInputNum,dwFlags,dwNumPasses) )
    ( (This)->lpVtbl -> BeginPreprocessingPass(This,dwInputNum,dwFlags) )
    ( (This)->lpVtbl -> PreprocessSample(This,dwInputNum,cnsSampleTime,dwFlags,pSample) )
    ( (This)->lpVtbl -> EndPreprocessingPass(This,dwInputNum,dwFlags) )
EXTERN_C const IID IID_IWMWriterPostViewCallback;
    typedef struct IWMWriterPostViewCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterPostViewCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterPostViewCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterPostViewCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatus )(
            IWMWriterPostViewCallback * This,
                       WMT_STATUS Status,
                       HRESULT hr,
                       WMT_ATTR_DATATYPE dwType,
                       BYTE *pValue,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *OnPostViewSample )(
            IWMWriterPostViewCallback * This,
                       WORD wStreamNumber,
                       QWORD cnsSampleTime,
                       QWORD cnsSampleDuration,
                       DWORD dwFlags,
                       INSSBuffer *pSample,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *AllocateForPostView )(
            IWMWriterPostViewCallback * This,
                       WORD wStreamNum,
                       DWORD cbBuffer,
                        INSSBuffer **ppBuffer,
                       void *pvContext);
        END_INTERFACE
    } IWMWriterPostViewCallbackVtbl;
    interface IWMWriterPostViewCallback
    {
        CONST_VTBL struct IWMWriterPostViewCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStatus(This,Status,hr,dwType,pValue,pvContext) )
    ( (This)->lpVtbl -> OnPostViewSample(This,wStreamNumber,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext) )
    ( (This)->lpVtbl -> AllocateForPostView(This,wStreamNum,cbBuffer,ppBuffer,pvContext) )
EXTERN_C const IID IID_IWMWriterPostView;
    typedef struct IWMWriterPostViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterPostView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterPostView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterPostView * This);
        HRESULT ( STDMETHODCALLTYPE *SetPostViewCallback )(
            IWMWriterPostView * This,
            IWMWriterPostViewCallback *pCallback,
            void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *SetReceivePostViewSamples )(
            IWMWriterPostView * This,
                       WORD wStreamNum,
                       BOOL fReceivePostViewSamples);
        HRESULT ( STDMETHODCALLTYPE *GetReceivePostViewSamples )(
            IWMWriterPostView * This,
                       WORD wStreamNum,
                        BOOL *pfReceivePostViewSamples);
        HRESULT ( STDMETHODCALLTYPE *GetPostViewProps )(
            IWMWriterPostView * This,
                       WORD wStreamNumber,
                        IWMMediaProps **ppOutput);
        HRESULT ( STDMETHODCALLTYPE *SetPostViewProps )(
            IWMWriterPostView * This,
                       WORD wStreamNumber,
                       IWMMediaProps *pOutput);
        HRESULT ( STDMETHODCALLTYPE *GetPostViewFormatCount )(
            IWMWriterPostView * This,
                       WORD wStreamNumber,
                        DWORD *pcFormats);
        HRESULT ( STDMETHODCALLTYPE *GetPostViewFormat )(
            IWMWriterPostView * This,
                       WORD wStreamNumber,
                       DWORD dwFormatNumber,
                        IWMMediaProps **ppProps);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForPostView )(
            IWMWriterPostView * This,
                       WORD wStreamNumber,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForPostView )(
            IWMWriterPostView * This,
                       WORD wStreamNumber,
                        BOOL *pfAllocate);
        END_INTERFACE
    } IWMWriterPostViewVtbl;
    interface IWMWriterPostView
    {
        CONST_VTBL struct IWMWriterPostViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPostViewCallback(This,pCallback,pvContext) )
    ( (This)->lpVtbl -> SetReceivePostViewSamples(This,wStreamNum,fReceivePostViewSamples) )
    ( (This)->lpVtbl -> GetReceivePostViewSamples(This,wStreamNum,pfReceivePostViewSamples) )
    ( (This)->lpVtbl -> GetPostViewProps(This,wStreamNumber,ppOutput) )
    ( (This)->lpVtbl -> SetPostViewProps(This,wStreamNumber,pOutput) )
    ( (This)->lpVtbl -> GetPostViewFormatCount(This,wStreamNumber,pcFormats) )
    ( (This)->lpVtbl -> GetPostViewFormat(This,wStreamNumber,dwFormatNumber,ppProps) )
    ( (This)->lpVtbl -> SetAllocateForPostView(This,wStreamNumber,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForPostView(This,wStreamNumber,pfAllocate) )
EXTERN_C const IID IID_IWMWriterSink;
    typedef struct IWMWriterSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnHeader )(
            IWMWriterSink * This,
                       INSSBuffer *pHeader);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterSink * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *AllocateDataUnit )(
            IWMWriterSink * This,
                       DWORD cbDataUnit,
                        INSSBuffer **ppDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnDataUnit )(
            IWMWriterSink * This,
                       INSSBuffer *pDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnEndWriting )(
            IWMWriterSink * This);
        END_INTERFACE
    } IWMWriterSinkVtbl;
    interface IWMWriterSink
    {
        CONST_VTBL struct IWMWriterSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnHeader(This,pHeader) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) )
    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) )
    ( (This)->lpVtbl -> OnEndWriting(This) )
EXTERN_C const IID IID_IWMRegisterCallback;
    typedef struct IWMRegisterCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMRegisterCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMRegisterCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMRegisterCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            IWMRegisterCallback * This,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            IWMRegisterCallback * This,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        END_INTERFACE
    } IWMRegisterCallbackVtbl;
    interface IWMRegisterCallback
    {
        CONST_VTBL struct IWMRegisterCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Advise(This,pCallback,pvContext) )
    ( (This)->lpVtbl -> Unadvise(This,pCallback,pvContext) )
EXTERN_C const IID IID_IWMWriterFileSink;
    typedef struct IWMWriterFileSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterFileSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterFileSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterFileSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnHeader )(
            IWMWriterFileSink * This,
                       INSSBuffer *pHeader);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterFileSink * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *AllocateDataUnit )(
            IWMWriterFileSink * This,
                       DWORD cbDataUnit,
                        INSSBuffer **ppDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnDataUnit )(
            IWMWriterFileSink * This,
                       INSSBuffer *pDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnEndWriting )(
            IWMWriterFileSink * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMWriterFileSink * This,
                       const WCHAR *pwszFilename);
        END_INTERFACE
    } IWMWriterFileSinkVtbl;
    interface IWMWriterFileSink
    {
        CONST_VTBL struct IWMWriterFileSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnHeader(This,pHeader) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) )
    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) )
    ( (This)->lpVtbl -> OnEndWriting(This) )
    ( (This)->lpVtbl -> Open(This,pwszFilename) )
EXTERN_C const IID IID_IWMWriterFileSink2;
    typedef struct IWMWriterFileSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterFileSink2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterFileSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterFileSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnHeader )(
            IWMWriterFileSink2 * This,
                       INSSBuffer *pHeader);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterFileSink2 * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *AllocateDataUnit )(
            IWMWriterFileSink2 * This,
                       DWORD cbDataUnit,
                        INSSBuffer **ppDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnDataUnit )(
            IWMWriterFileSink2 * This,
                       INSSBuffer *pDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnEndWriting )(
            IWMWriterFileSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMWriterFileSink2 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IWMWriterFileSink2 * This,
                       QWORD cnsStartTime);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IWMWriterFileSink2 * This,
                       QWORD cnsStopTime);
        HRESULT ( STDMETHODCALLTYPE *IsStopped )(
            IWMWriterFileSink2 * This,
                        BOOL *pfStopped);
        HRESULT ( STDMETHODCALLTYPE *GetFileDuration )(
            IWMWriterFileSink2 * This,
                        QWORD *pcnsDuration);
        HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            IWMWriterFileSink2 * This,
                        QWORD *pcbFile);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMWriterFileSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *IsClosed )(
            IWMWriterFileSink2 * This,
                        BOOL *pfClosed);
        END_INTERFACE
    } IWMWriterFileSink2Vtbl;
    interface IWMWriterFileSink2
    {
        CONST_VTBL struct IWMWriterFileSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnHeader(This,pHeader) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) )
    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) )
    ( (This)->lpVtbl -> OnEndWriting(This) )
    ( (This)->lpVtbl -> Open(This,pwszFilename) )
    ( (This)->lpVtbl -> Start(This,cnsStartTime) )
    ( (This)->lpVtbl -> Stop(This,cnsStopTime) )
    ( (This)->lpVtbl -> IsStopped(This,pfStopped) )
    ( (This)->lpVtbl -> GetFileDuration(This,pcnsDuration) )
    ( (This)->lpVtbl -> GetFileSize(This,pcbFile) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> IsClosed(This,pfClosed) )
EXTERN_C const IID IID_IWMWriterFileSink3;
    typedef struct IWMWriterFileSink3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterFileSink3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterFileSink3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterFileSink3 * This);
        HRESULT ( STDMETHODCALLTYPE *OnHeader )(
            IWMWriterFileSink3 * This,
                       INSSBuffer *pHeader);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterFileSink3 * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *AllocateDataUnit )(
            IWMWriterFileSink3 * This,
                       DWORD cbDataUnit,
                        INSSBuffer **ppDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnDataUnit )(
            IWMWriterFileSink3 * This,
                       INSSBuffer *pDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnEndWriting )(
            IWMWriterFileSink3 * This);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMWriterFileSink3 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IWMWriterFileSink3 * This,
                       QWORD cnsStartTime);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IWMWriterFileSink3 * This,
                       QWORD cnsStopTime);
        HRESULT ( STDMETHODCALLTYPE *IsStopped )(
            IWMWriterFileSink3 * This,
                        BOOL *pfStopped);
        HRESULT ( STDMETHODCALLTYPE *GetFileDuration )(
            IWMWriterFileSink3 * This,
                        QWORD *pcnsDuration);
        HRESULT ( STDMETHODCALLTYPE *GetFileSize )(
            IWMWriterFileSink3 * This,
                        QWORD *pcbFile);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMWriterFileSink3 * This);
        HRESULT ( STDMETHODCALLTYPE *IsClosed )(
            IWMWriterFileSink3 * This,
                        BOOL *pfClosed);
        HRESULT ( STDMETHODCALLTYPE *SetAutoIndexing )(
            IWMWriterFileSink3 * This,
                       BOOL fDoAutoIndexing);
        HRESULT ( STDMETHODCALLTYPE *GetAutoIndexing )(
            IWMWriterFileSink3 * This,
                        BOOL *pfAutoIndexing);
        HRESULT ( STDMETHODCALLTYPE *SetControlStream )(
            IWMWriterFileSink3 * This,
                       WORD wStreamNumber,
                       BOOL fShouldControlStartAndStop);
        HRESULT ( STDMETHODCALLTYPE *GetMode )(
            IWMWriterFileSink3 * This,
                        DWORD *pdwFileSinkMode);
        HRESULT ( STDMETHODCALLTYPE *OnDataUnitEx )(
            IWMWriterFileSink3 * This,
                       WMT_FILESINK_DATA_UNIT *pFileSinkDataUnit);
        HRESULT ( STDMETHODCALLTYPE *SetUnbufferedIO )(
            IWMWriterFileSink3 * This,
                       BOOL fUnbufferedIO,
                       BOOL fRestrictMemUsage);
        HRESULT ( STDMETHODCALLTYPE *GetUnbufferedIO )(
            IWMWriterFileSink3 * This,
                        BOOL *pfUnbufferedIO);
        HRESULT ( STDMETHODCALLTYPE *CompleteOperations )(
            IWMWriterFileSink3 * This);
        END_INTERFACE
    } IWMWriterFileSink3Vtbl;
    interface IWMWriterFileSink3
    {
        CONST_VTBL struct IWMWriterFileSink3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnHeader(This,pHeader) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) )
    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) )
    ( (This)->lpVtbl -> OnEndWriting(This) )
    ( (This)->lpVtbl -> Open(This,pwszFilename) )
    ( (This)->lpVtbl -> Start(This,cnsStartTime) )
    ( (This)->lpVtbl -> Stop(This,cnsStopTime) )
    ( (This)->lpVtbl -> IsStopped(This,pfStopped) )
    ( (This)->lpVtbl -> GetFileDuration(This,pcnsDuration) )
    ( (This)->lpVtbl -> GetFileSize(This,pcbFile) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> IsClosed(This,pfClosed) )
    ( (This)->lpVtbl -> SetAutoIndexing(This,fDoAutoIndexing) )
    ( (This)->lpVtbl -> GetAutoIndexing(This,pfAutoIndexing) )
    ( (This)->lpVtbl -> SetControlStream(This,wStreamNumber,fShouldControlStartAndStop) )
    ( (This)->lpVtbl -> GetMode(This,pdwFileSinkMode) )
    ( (This)->lpVtbl -> OnDataUnitEx(This,pFileSinkDataUnit) )
    ( (This)->lpVtbl -> SetUnbufferedIO(This,fUnbufferedIO,fRestrictMemUsage) )
    ( (This)->lpVtbl -> GetUnbufferedIO(This,pfUnbufferedIO) )
    ( (This)->lpVtbl -> CompleteOperations(This) )
EXTERN_C const IID IID_IWMWriterNetworkSink;
    typedef struct IWMWriterNetworkSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterNetworkSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterNetworkSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterNetworkSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnHeader )(
            IWMWriterNetworkSink * This,
                       INSSBuffer *pHeader);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterNetworkSink * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *AllocateDataUnit )(
            IWMWriterNetworkSink * This,
                       DWORD cbDataUnit,
                        INSSBuffer **ppDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnDataUnit )(
            IWMWriterNetworkSink * This,
                       INSSBuffer *pDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnEndWriting )(
            IWMWriterNetworkSink * This);
        HRESULT ( STDMETHODCALLTYPE *SetMaximumClients )(
            IWMWriterNetworkSink * This,
                       DWORD dwMaxClients);
        HRESULT ( STDMETHODCALLTYPE *GetMaximumClients )(
            IWMWriterNetworkSink * This,
                        DWORD *pdwMaxClients);
        HRESULT ( STDMETHODCALLTYPE *SetNetworkProtocol )(
            IWMWriterNetworkSink * This,
                       WMT_NET_PROTOCOL protocol);
        HRESULT ( STDMETHODCALLTYPE *GetNetworkProtocol )(
            IWMWriterNetworkSink * This,
                        WMT_NET_PROTOCOL *pProtocol);
        HRESULT ( STDMETHODCALLTYPE *GetHostURL )(
            IWMWriterNetworkSink * This,
                        WCHAR *pwszURL,
                            DWORD *pcchURL);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMWriterNetworkSink * This,
                            DWORD *pdwPortNum);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IWMWriterNetworkSink * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMWriterNetworkSink * This);
        END_INTERFACE
    } IWMWriterNetworkSinkVtbl;
    interface IWMWriterNetworkSink
    {
        CONST_VTBL struct IWMWriterNetworkSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnHeader(This,pHeader) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) )
    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) )
    ( (This)->lpVtbl -> OnEndWriting(This) )
    ( (This)->lpVtbl -> SetMaximumClients(This,dwMaxClients) )
    ( (This)->lpVtbl -> GetMaximumClients(This,pdwMaxClients) )
    ( (This)->lpVtbl -> SetNetworkProtocol(This,protocol) )
    ( (This)->lpVtbl -> GetNetworkProtocol(This,pProtocol) )
    ( (This)->lpVtbl -> GetHostURL(This,pwszURL,pcchURL) )
    ( (This)->lpVtbl -> Open(This,pdwPortNum) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IWMClientConnections;
    typedef struct IWMClientConnectionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMClientConnections * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMClientConnections * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMClientConnections * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientCount )(
            IWMClientConnections * This,
                        DWORD *pcClients);
        HRESULT ( STDMETHODCALLTYPE *GetClientProperties )(
            IWMClientConnections * This,
                       DWORD dwClientNum,
                        WM_CLIENT_PROPERTIES *pClientProperties);
        END_INTERFACE
    } IWMClientConnectionsVtbl;
    interface IWMClientConnections
    {
        CONST_VTBL struct IWMClientConnectionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClientCount(This,pcClients) )
    ( (This)->lpVtbl -> GetClientProperties(This,dwClientNum,pClientProperties) )
EXTERN_C const IID IID_IWMClientConnections2;
    typedef struct IWMClientConnections2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMClientConnections2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMClientConnections2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMClientConnections2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientCount )(
            IWMClientConnections2 * This,
                        DWORD *pcClients);
        HRESULT ( STDMETHODCALLTYPE *GetClientProperties )(
            IWMClientConnections2 * This,
                       DWORD dwClientNum,
                        WM_CLIENT_PROPERTIES *pClientProperties);
        HRESULT ( STDMETHODCALLTYPE *GetClientInfo )(
            IWMClientConnections2 * This,
                       DWORD dwClientNum,
                                 WCHAR *pwszNetworkAddress,
                            DWORD *pcchNetworkAddress,
                                 WCHAR *pwszPort,
                            DWORD *pcchPort,
                                 WCHAR *pwszDNSName,
                            DWORD *pcchDNSName);
        END_INTERFACE
    } IWMClientConnections2Vtbl;
    interface IWMClientConnections2
    {
        CONST_VTBL struct IWMClientConnections2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClientCount(This,pcClients) )
    ( (This)->lpVtbl -> GetClientProperties(This,dwClientNum,pClientProperties) )
    ( (This)->lpVtbl -> GetClientInfo(This,dwClientNum,pwszNetworkAddress,pcchNetworkAddress,pwszPort,pcchPort,pwszDNSName,pcchDNSName) )
EXTERN_C const IID IID_IWMReaderAdvanced;
    typedef struct IWMReaderAdvancedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAdvanced * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAdvanced * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAdvanced * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserProvidedClock )(
            IWMReaderAdvanced * This,
                       BOOL fUserClock);
        HRESULT ( STDMETHODCALLTYPE *GetUserProvidedClock )(
            IWMReaderAdvanced * This,
                        BOOL *pfUserClock);
        HRESULT ( STDMETHODCALLTYPE *DeliverTime )(
            IWMReaderAdvanced * This,
                       QWORD cnsTime);
        HRESULT ( STDMETHODCALLTYPE *SetManualStreamSelection )(
            IWMReaderAdvanced * This,
                       BOOL fSelection);
        HRESULT ( STDMETHODCALLTYPE *GetManualStreamSelection )(
            IWMReaderAdvanced * This,
                        BOOL *pfSelection);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMReaderAdvanced * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMReaderAdvanced * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveSelectionCallbacks )(
            IWMReaderAdvanced * This,
                       BOOL fGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveSelectionCallbacks )(
            IWMReaderAdvanced * This,
                        BOOL *pfGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveStreamSamples )(
            IWMReaderAdvanced * This,
                       WORD wStreamNum,
                       BOOL fReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveStreamSamples )(
            IWMReaderAdvanced * This,
                       WORD wStreamNum,
                        BOOL *pfReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForOutput )(
            IWMReaderAdvanced * This,
                       DWORD dwOutputNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForOutput )(
            IWMReaderAdvanced * This,
                       DWORD dwOutputNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForStream )(
            IWMReaderAdvanced * This,
                       WORD wStreamNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForStream )(
            IWMReaderAdvanced * This,
                       WORD dwSreamNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMReaderAdvanced * This,
                            WM_READER_STATISTICS *pStatistics);
        HRESULT ( STDMETHODCALLTYPE *SetClientInfo )(
            IWMReaderAdvanced * This,
                       WM_READER_CLIENTINFO *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMReaderAdvanced * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMReaderAdvanced * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *NotifyLateDelivery )(
            IWMReaderAdvanced * This,
            QWORD cnsLateness);
        END_INTERFACE
    } IWMReaderAdvancedVtbl;
    interface IWMReaderAdvanced
    {
        CONST_VTBL struct IWMReaderAdvancedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) )
    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) )
    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) )
    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) )
    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) )
    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) )
    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) )
    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) )
    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) )
    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) )
    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) )
    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) )
EXTERN_C const IID IID_IWMReaderAdvanced2;
    typedef struct IWMReaderAdvanced2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAdvanced2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAdvanced2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAdvanced2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserProvidedClock )(
            IWMReaderAdvanced2 * This,
                       BOOL fUserClock);
        HRESULT ( STDMETHODCALLTYPE *GetUserProvidedClock )(
            IWMReaderAdvanced2 * This,
                        BOOL *pfUserClock);
        HRESULT ( STDMETHODCALLTYPE *DeliverTime )(
            IWMReaderAdvanced2 * This,
                       QWORD cnsTime);
        HRESULT ( STDMETHODCALLTYPE *SetManualStreamSelection )(
            IWMReaderAdvanced2 * This,
                       BOOL fSelection);
        HRESULT ( STDMETHODCALLTYPE *GetManualStreamSelection )(
            IWMReaderAdvanced2 * This,
                        BOOL *pfSelection);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMReaderAdvanced2 * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMReaderAdvanced2 * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveSelectionCallbacks )(
            IWMReaderAdvanced2 * This,
                       BOOL fGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveSelectionCallbacks )(
            IWMReaderAdvanced2 * This,
                        BOOL *pfGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveStreamSamples )(
            IWMReaderAdvanced2 * This,
                       WORD wStreamNum,
                       BOOL fReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveStreamSamples )(
            IWMReaderAdvanced2 * This,
                       WORD wStreamNum,
                        BOOL *pfReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForOutput )(
            IWMReaderAdvanced2 * This,
                       DWORD dwOutputNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForOutput )(
            IWMReaderAdvanced2 * This,
                       DWORD dwOutputNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForStream )(
            IWMReaderAdvanced2 * This,
                       WORD wStreamNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForStream )(
            IWMReaderAdvanced2 * This,
                       WORD dwSreamNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMReaderAdvanced2 * This,
                            WM_READER_STATISTICS *pStatistics);
        HRESULT ( STDMETHODCALLTYPE *SetClientInfo )(
            IWMReaderAdvanced2 * This,
                       WM_READER_CLIENTINFO *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMReaderAdvanced2 * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMReaderAdvanced2 * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *NotifyLateDelivery )(
            IWMReaderAdvanced2 * This,
            QWORD cnsLateness);
        HRESULT ( STDMETHODCALLTYPE *SetPlayMode )(
            IWMReaderAdvanced2 * This,
                       WMT_PLAY_MODE Mode);
        HRESULT ( STDMETHODCALLTYPE *GetPlayMode )(
            IWMReaderAdvanced2 * This,
                        WMT_PLAY_MODE *pMode);
        HRESULT ( STDMETHODCALLTYPE *GetBufferProgress )(
            IWMReaderAdvanced2 * This,
                        DWORD *pdwPercent,
                        QWORD *pcnsBuffering);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProgress )(
            IWMReaderAdvanced2 * This,
                        DWORD *pdwPercent,
                        QWORD *pqwBytesDownloaded,
                        QWORD *pcnsDownload);
        HRESULT ( STDMETHODCALLTYPE *GetSaveAsProgress )(
            IWMReaderAdvanced2 * This,
                        DWORD *pdwPercent);
        HRESULT ( STDMETHODCALLTYPE *SaveFileAs )(
            IWMReaderAdvanced2 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolName )(
            IWMReaderAdvanced2 * This,
                                 WCHAR *pwszProtocol,
                            DWORD *pcchProtocol);
        HRESULT ( STDMETHODCALLTYPE *StartAtMarker )(
            IWMReaderAdvanced2 * This,
                       WORD wMarkerIndex,
                       QWORD cnsDuration,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSetting )(
            IWMReaderAdvanced2 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetOutputSetting )(
            IWMReaderAdvanced2 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *Preroll )(
            IWMReaderAdvanced2 * This,
                       QWORD cnsStart,
                       QWORD cnsDuration,
                       float fRate);
        HRESULT ( STDMETHODCALLTYPE *SetLogClientID )(
            IWMReaderAdvanced2 * This,
                       BOOL fLogClientID);
        HRESULT ( STDMETHODCALLTYPE *GetLogClientID )(
            IWMReaderAdvanced2 * This,
                        BOOL *pfLogClientID);
        HRESULT ( STDMETHODCALLTYPE *StopBuffering )(
            IWMReaderAdvanced2 * This);
        HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IWMReaderAdvanced2 * This,
                       IStream *pStream,
                       IWMReaderCallback *pCallback,
                       void *pvContext);
        END_INTERFACE
    } IWMReaderAdvanced2Vtbl;
    interface IWMReaderAdvanced2
    {
        CONST_VTBL struct IWMReaderAdvanced2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) )
    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) )
    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) )
    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) )
    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) )
    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) )
    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) )
    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) )
    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) )
    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) )
    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) )
    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) )
    ( (This)->lpVtbl -> SetPlayMode(This,Mode) )
    ( (This)->lpVtbl -> GetPlayMode(This,pMode) )
    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) )
    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) )
    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) )
    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) )
    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) )
    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) )
    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) )
    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) )
    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) )
    ( (This)->lpVtbl -> StopBuffering(This) )
    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) )
EXTERN_C const IID IID_IWMReaderAdvanced3;
    typedef struct IWMReaderAdvanced3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAdvanced3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAdvanced3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAdvanced3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserProvidedClock )(
            IWMReaderAdvanced3 * This,
                       BOOL fUserClock);
        HRESULT ( STDMETHODCALLTYPE *GetUserProvidedClock )(
            IWMReaderAdvanced3 * This,
                        BOOL *pfUserClock);
        HRESULT ( STDMETHODCALLTYPE *DeliverTime )(
            IWMReaderAdvanced3 * This,
                       QWORD cnsTime);
        HRESULT ( STDMETHODCALLTYPE *SetManualStreamSelection )(
            IWMReaderAdvanced3 * This,
                       BOOL fSelection);
        HRESULT ( STDMETHODCALLTYPE *GetManualStreamSelection )(
            IWMReaderAdvanced3 * This,
                        BOOL *pfSelection);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMReaderAdvanced3 * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMReaderAdvanced3 * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveSelectionCallbacks )(
            IWMReaderAdvanced3 * This,
                       BOOL fGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveSelectionCallbacks )(
            IWMReaderAdvanced3 * This,
                        BOOL *pfGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveStreamSamples )(
            IWMReaderAdvanced3 * This,
                       WORD wStreamNum,
                       BOOL fReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveStreamSamples )(
            IWMReaderAdvanced3 * This,
                       WORD wStreamNum,
                        BOOL *pfReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForOutput )(
            IWMReaderAdvanced3 * This,
                       DWORD dwOutputNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForOutput )(
            IWMReaderAdvanced3 * This,
                       DWORD dwOutputNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForStream )(
            IWMReaderAdvanced3 * This,
                       WORD wStreamNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForStream )(
            IWMReaderAdvanced3 * This,
                       WORD dwSreamNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMReaderAdvanced3 * This,
                            WM_READER_STATISTICS *pStatistics);
        HRESULT ( STDMETHODCALLTYPE *SetClientInfo )(
            IWMReaderAdvanced3 * This,
                       WM_READER_CLIENTINFO *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMReaderAdvanced3 * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMReaderAdvanced3 * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *NotifyLateDelivery )(
            IWMReaderAdvanced3 * This,
            QWORD cnsLateness);
        HRESULT ( STDMETHODCALLTYPE *SetPlayMode )(
            IWMReaderAdvanced3 * This,
                       WMT_PLAY_MODE Mode);
        HRESULT ( STDMETHODCALLTYPE *GetPlayMode )(
            IWMReaderAdvanced3 * This,
                        WMT_PLAY_MODE *pMode);
        HRESULT ( STDMETHODCALLTYPE *GetBufferProgress )(
            IWMReaderAdvanced3 * This,
                        DWORD *pdwPercent,
                        QWORD *pcnsBuffering);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProgress )(
            IWMReaderAdvanced3 * This,
                        DWORD *pdwPercent,
                        QWORD *pqwBytesDownloaded,
                        QWORD *pcnsDownload);
        HRESULT ( STDMETHODCALLTYPE *GetSaveAsProgress )(
            IWMReaderAdvanced3 * This,
                        DWORD *pdwPercent);
        HRESULT ( STDMETHODCALLTYPE *SaveFileAs )(
            IWMReaderAdvanced3 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolName )(
            IWMReaderAdvanced3 * This,
                                 WCHAR *pwszProtocol,
                            DWORD *pcchProtocol);
        HRESULT ( STDMETHODCALLTYPE *StartAtMarker )(
            IWMReaderAdvanced3 * This,
                       WORD wMarkerIndex,
                       QWORD cnsDuration,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSetting )(
            IWMReaderAdvanced3 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetOutputSetting )(
            IWMReaderAdvanced3 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *Preroll )(
            IWMReaderAdvanced3 * This,
                       QWORD cnsStart,
                       QWORD cnsDuration,
                       float fRate);
        HRESULT ( STDMETHODCALLTYPE *SetLogClientID )(
            IWMReaderAdvanced3 * This,
                       BOOL fLogClientID);
        HRESULT ( STDMETHODCALLTYPE *GetLogClientID )(
            IWMReaderAdvanced3 * This,
                        BOOL *pfLogClientID);
        HRESULT ( STDMETHODCALLTYPE *StopBuffering )(
            IWMReaderAdvanced3 * This);
        HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IWMReaderAdvanced3 * This,
                       IStream *pStream,
                       IWMReaderCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *StopNetStreaming )(
            IWMReaderAdvanced3 * This);
        HRESULT ( STDMETHODCALLTYPE *StartAtPosition )(
            IWMReaderAdvanced3 * This,
                       WORD wStreamNum,
                       void *pvOffsetStart,
                       void *pvDuration,
                       WMT_OFFSET_FORMAT dwOffsetFormat,
                       float fRate,
                       void *pvContext);
        END_INTERFACE
    } IWMReaderAdvanced3Vtbl;
    interface IWMReaderAdvanced3
    {
        CONST_VTBL struct IWMReaderAdvanced3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) )
    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) )
    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) )
    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) )
    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) )
    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) )
    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) )
    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) )
    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) )
    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) )
    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) )
    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) )
    ( (This)->lpVtbl -> SetPlayMode(This,Mode) )
    ( (This)->lpVtbl -> GetPlayMode(This,pMode) )
    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) )
    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) )
    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) )
    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) )
    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) )
    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) )
    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) )
    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) )
    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) )
    ( (This)->lpVtbl -> StopBuffering(This) )
    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) )
    ( (This)->lpVtbl -> StopNetStreaming(This) )
    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) )
EXTERN_C const IID IID_IWMReaderAdvanced4;
    typedef struct IWMReaderAdvanced4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAdvanced4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAdvanced4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAdvanced4 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserProvidedClock )(
            IWMReaderAdvanced4 * This,
                       BOOL fUserClock);
        HRESULT ( STDMETHODCALLTYPE *GetUserProvidedClock )(
            IWMReaderAdvanced4 * This,
                        BOOL *pfUserClock);
        HRESULT ( STDMETHODCALLTYPE *DeliverTime )(
            IWMReaderAdvanced4 * This,
                       QWORD cnsTime);
        HRESULT ( STDMETHODCALLTYPE *SetManualStreamSelection )(
            IWMReaderAdvanced4 * This,
                       BOOL fSelection);
        HRESULT ( STDMETHODCALLTYPE *GetManualStreamSelection )(
            IWMReaderAdvanced4 * This,
                        BOOL *pfSelection);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMReaderAdvanced4 * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMReaderAdvanced4 * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveSelectionCallbacks )(
            IWMReaderAdvanced4 * This,
                       BOOL fGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveSelectionCallbacks )(
            IWMReaderAdvanced4 * This,
                        BOOL *pfGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveStreamSamples )(
            IWMReaderAdvanced4 * This,
                       WORD wStreamNum,
                       BOOL fReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveStreamSamples )(
            IWMReaderAdvanced4 * This,
                       WORD wStreamNum,
                        BOOL *pfReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForOutput )(
            IWMReaderAdvanced4 * This,
                       DWORD dwOutputNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForOutput )(
            IWMReaderAdvanced4 * This,
                       DWORD dwOutputNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForStream )(
            IWMReaderAdvanced4 * This,
                       WORD wStreamNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForStream )(
            IWMReaderAdvanced4 * This,
                       WORD dwSreamNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMReaderAdvanced4 * This,
                            WM_READER_STATISTICS *pStatistics);
        HRESULT ( STDMETHODCALLTYPE *SetClientInfo )(
            IWMReaderAdvanced4 * This,
                       WM_READER_CLIENTINFO *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMReaderAdvanced4 * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMReaderAdvanced4 * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *NotifyLateDelivery )(
            IWMReaderAdvanced4 * This,
            QWORD cnsLateness);
        HRESULT ( STDMETHODCALLTYPE *SetPlayMode )(
            IWMReaderAdvanced4 * This,
                       WMT_PLAY_MODE Mode);
        HRESULT ( STDMETHODCALLTYPE *GetPlayMode )(
            IWMReaderAdvanced4 * This,
                        WMT_PLAY_MODE *pMode);
        HRESULT ( STDMETHODCALLTYPE *GetBufferProgress )(
            IWMReaderAdvanced4 * This,
                        DWORD *pdwPercent,
                        QWORD *pcnsBuffering);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProgress )(
            IWMReaderAdvanced4 * This,
                        DWORD *pdwPercent,
                        QWORD *pqwBytesDownloaded,
                        QWORD *pcnsDownload);
        HRESULT ( STDMETHODCALLTYPE *GetSaveAsProgress )(
            IWMReaderAdvanced4 * This,
                        DWORD *pdwPercent);
        HRESULT ( STDMETHODCALLTYPE *SaveFileAs )(
            IWMReaderAdvanced4 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolName )(
            IWMReaderAdvanced4 * This,
                                 WCHAR *pwszProtocol,
                            DWORD *pcchProtocol);
        HRESULT ( STDMETHODCALLTYPE *StartAtMarker )(
            IWMReaderAdvanced4 * This,
                       WORD wMarkerIndex,
                       QWORD cnsDuration,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSetting )(
            IWMReaderAdvanced4 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetOutputSetting )(
            IWMReaderAdvanced4 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *Preroll )(
            IWMReaderAdvanced4 * This,
                       QWORD cnsStart,
                       QWORD cnsDuration,
                       float fRate);
        HRESULT ( STDMETHODCALLTYPE *SetLogClientID )(
            IWMReaderAdvanced4 * This,
                       BOOL fLogClientID);
        HRESULT ( STDMETHODCALLTYPE *GetLogClientID )(
            IWMReaderAdvanced4 * This,
                        BOOL *pfLogClientID);
        HRESULT ( STDMETHODCALLTYPE *StopBuffering )(
            IWMReaderAdvanced4 * This);
        HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IWMReaderAdvanced4 * This,
                       IStream *pStream,
                       IWMReaderCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *StopNetStreaming )(
            IWMReaderAdvanced4 * This);
        HRESULT ( STDMETHODCALLTYPE *StartAtPosition )(
            IWMReaderAdvanced4 * This,
                       WORD wStreamNum,
                       void *pvOffsetStart,
                       void *pvDuration,
                       WMT_OFFSET_FORMAT dwOffsetFormat,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCount )(
            IWMReaderAdvanced4 * This,
                       DWORD dwOutputNum,
                        WORD *pwLanguageCount);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            IWMReaderAdvanced4 * This,
                       DWORD dwOutputNum,
                       WORD wLanguage,
                                 WCHAR *pwszLanguageString,
                            WORD *pcchLanguageStringLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxSpeedFactor )(
            IWMReaderAdvanced4 * This,
                        double *pdblFactor);
        HRESULT ( STDMETHODCALLTYPE *IsUsingFastCache )(
            IWMReaderAdvanced4 * This,
                        BOOL *pfUsingFastCache);
        HRESULT ( STDMETHODCALLTYPE *AddLogParam )(
            IWMReaderAdvanced4 * This,
                       LPCWSTR wszNameSpace,
                       LPCWSTR wszName,
                       LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SendLogParams )(
            IWMReaderAdvanced4 * This);
        HRESULT ( STDMETHODCALLTYPE *CanSaveFileAs )(
            IWMReaderAdvanced4 * This,
                        BOOL *pfCanSave);
        HRESULT ( STDMETHODCALLTYPE *CancelSaveFileAs )(
            IWMReaderAdvanced4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            IWMReaderAdvanced4 * This,
                                 WCHAR *pwszURL,
                            DWORD *pcchURL);
        END_INTERFACE
    } IWMReaderAdvanced4Vtbl;
    interface IWMReaderAdvanced4
    {
        CONST_VTBL struct IWMReaderAdvanced4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) )
    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) )
    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) )
    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) )
    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) )
    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) )
    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) )
    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) )
    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) )
    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) )
    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) )
    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) )
    ( (This)->lpVtbl -> SetPlayMode(This,Mode) )
    ( (This)->lpVtbl -> GetPlayMode(This,pMode) )
    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) )
    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) )
    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) )
    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) )
    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) )
    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) )
    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) )
    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) )
    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) )
    ( (This)->lpVtbl -> StopBuffering(This) )
    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) )
    ( (This)->lpVtbl -> StopNetStreaming(This) )
    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) )
    ( (This)->lpVtbl -> GetLanguageCount(This,dwOutputNum,pwLanguageCount) )
    ( (This)->lpVtbl -> GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength) )
    ( (This)->lpVtbl -> GetMaxSpeedFactor(This,pdblFactor) )
    ( (This)->lpVtbl -> IsUsingFastCache(This,pfUsingFastCache) )
    ( (This)->lpVtbl -> AddLogParam(This,wszNameSpace,wszName,wszValue) )
    ( (This)->lpVtbl -> SendLogParams(This) )
    ( (This)->lpVtbl -> CanSaveFileAs(This,pfCanSave) )
    ( (This)->lpVtbl -> CancelSaveFileAs(This) )
    ( (This)->lpVtbl -> GetURL(This,pwszURL,pcchURL) )
EXTERN_C const IID IID_IWMReaderAdvanced5;
    typedef struct IWMReaderAdvanced5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAdvanced5 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAdvanced5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAdvanced5 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserProvidedClock )(
            IWMReaderAdvanced5 * This,
                       BOOL fUserClock);
        HRESULT ( STDMETHODCALLTYPE *GetUserProvidedClock )(
            IWMReaderAdvanced5 * This,
                        BOOL *pfUserClock);
        HRESULT ( STDMETHODCALLTYPE *DeliverTime )(
            IWMReaderAdvanced5 * This,
                       QWORD cnsTime);
        HRESULT ( STDMETHODCALLTYPE *SetManualStreamSelection )(
            IWMReaderAdvanced5 * This,
                       BOOL fSelection);
        HRESULT ( STDMETHODCALLTYPE *GetManualStreamSelection )(
            IWMReaderAdvanced5 * This,
                        BOOL *pfSelection);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMReaderAdvanced5 * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMReaderAdvanced5 * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveSelectionCallbacks )(
            IWMReaderAdvanced5 * This,
                       BOOL fGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveSelectionCallbacks )(
            IWMReaderAdvanced5 * This,
                        BOOL *pfGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveStreamSamples )(
            IWMReaderAdvanced5 * This,
                       WORD wStreamNum,
                       BOOL fReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveStreamSamples )(
            IWMReaderAdvanced5 * This,
                       WORD wStreamNum,
                        BOOL *pfReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForOutput )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutputNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForOutput )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutputNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForStream )(
            IWMReaderAdvanced5 * This,
                       WORD wStreamNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForStream )(
            IWMReaderAdvanced5 * This,
                       WORD dwSreamNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMReaderAdvanced5 * This,
                            WM_READER_STATISTICS *pStatistics);
        HRESULT ( STDMETHODCALLTYPE *SetClientInfo )(
            IWMReaderAdvanced5 * This,
                       WM_READER_CLIENTINFO *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMReaderAdvanced5 * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *NotifyLateDelivery )(
            IWMReaderAdvanced5 * This,
            QWORD cnsLateness);
        HRESULT ( STDMETHODCALLTYPE *SetPlayMode )(
            IWMReaderAdvanced5 * This,
                       WMT_PLAY_MODE Mode);
        HRESULT ( STDMETHODCALLTYPE *GetPlayMode )(
            IWMReaderAdvanced5 * This,
                        WMT_PLAY_MODE *pMode);
        HRESULT ( STDMETHODCALLTYPE *GetBufferProgress )(
            IWMReaderAdvanced5 * This,
                        DWORD *pdwPercent,
                        QWORD *pcnsBuffering);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProgress )(
            IWMReaderAdvanced5 * This,
                        DWORD *pdwPercent,
                        QWORD *pqwBytesDownloaded,
                        QWORD *pcnsDownload);
        HRESULT ( STDMETHODCALLTYPE *GetSaveAsProgress )(
            IWMReaderAdvanced5 * This,
                        DWORD *pdwPercent);
        HRESULT ( STDMETHODCALLTYPE *SaveFileAs )(
            IWMReaderAdvanced5 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolName )(
            IWMReaderAdvanced5 * This,
                                 WCHAR *pwszProtocol,
                            DWORD *pcchProtocol);
        HRESULT ( STDMETHODCALLTYPE *StartAtMarker )(
            IWMReaderAdvanced5 * This,
                       WORD wMarkerIndex,
                       QWORD cnsDuration,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSetting )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetOutputSetting )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *Preroll )(
            IWMReaderAdvanced5 * This,
                       QWORD cnsStart,
                       QWORD cnsDuration,
                       float fRate);
        HRESULT ( STDMETHODCALLTYPE *SetLogClientID )(
            IWMReaderAdvanced5 * This,
                       BOOL fLogClientID);
        HRESULT ( STDMETHODCALLTYPE *GetLogClientID )(
            IWMReaderAdvanced5 * This,
                        BOOL *pfLogClientID);
        HRESULT ( STDMETHODCALLTYPE *StopBuffering )(
            IWMReaderAdvanced5 * This);
        HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IWMReaderAdvanced5 * This,
                       IStream *pStream,
                       IWMReaderCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *StopNetStreaming )(
            IWMReaderAdvanced5 * This);
        HRESULT ( STDMETHODCALLTYPE *StartAtPosition )(
            IWMReaderAdvanced5 * This,
                       WORD wStreamNum,
                       void *pvOffsetStart,
                       void *pvDuration,
                       WMT_OFFSET_FORMAT dwOffsetFormat,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCount )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutputNum,
                        WORD *pwLanguageCount);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutputNum,
                       WORD wLanguage,
                                 WCHAR *pwszLanguageString,
                            WORD *pcchLanguageStringLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxSpeedFactor )(
            IWMReaderAdvanced5 * This,
                        double *pdblFactor);
        HRESULT ( STDMETHODCALLTYPE *IsUsingFastCache )(
            IWMReaderAdvanced5 * This,
                        BOOL *pfUsingFastCache);
        HRESULT ( STDMETHODCALLTYPE *AddLogParam )(
            IWMReaderAdvanced5 * This,
                       LPCWSTR wszNameSpace,
                       LPCWSTR wszName,
                       LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SendLogParams )(
            IWMReaderAdvanced5 * This);
        HRESULT ( STDMETHODCALLTYPE *CanSaveFileAs )(
            IWMReaderAdvanced5 * This,
                        BOOL *pfCanSave);
        HRESULT ( STDMETHODCALLTYPE *CancelSaveFileAs )(
            IWMReaderAdvanced5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            IWMReaderAdvanced5 * This,
                                 WCHAR *pwszURL,
                            DWORD *pcchURL);
        HRESULT ( STDMETHODCALLTYPE *SetPlayerHook )(
            IWMReaderAdvanced5 * This,
                       DWORD dwOutputNum,
                       IWMPlayerHook *pHook);
        END_INTERFACE
    } IWMReaderAdvanced5Vtbl;
    interface IWMReaderAdvanced5
    {
        CONST_VTBL struct IWMReaderAdvanced5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) )
    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) )
    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) )
    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) )
    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) )
    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) )
    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) )
    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) )
    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) )
    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) )
    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) )
    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) )
    ( (This)->lpVtbl -> SetPlayMode(This,Mode) )
    ( (This)->lpVtbl -> GetPlayMode(This,pMode) )
    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) )
    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) )
    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) )
    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) )
    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) )
    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) )
    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) )
    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) )
    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) )
    ( (This)->lpVtbl -> StopBuffering(This) )
    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) )
    ( (This)->lpVtbl -> StopNetStreaming(This) )
    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) )
    ( (This)->lpVtbl -> GetLanguageCount(This,dwOutputNum,pwLanguageCount) )
    ( (This)->lpVtbl -> GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength) )
    ( (This)->lpVtbl -> GetMaxSpeedFactor(This,pdblFactor) )
    ( (This)->lpVtbl -> IsUsingFastCache(This,pfUsingFastCache) )
    ( (This)->lpVtbl -> AddLogParam(This,wszNameSpace,wszName,wszValue) )
    ( (This)->lpVtbl -> SendLogParams(This) )
    ( (This)->lpVtbl -> CanSaveFileAs(This,pfCanSave) )
    ( (This)->lpVtbl -> CancelSaveFileAs(This) )
    ( (This)->lpVtbl -> GetURL(This,pwszURL,pcchURL) )
    ( (This)->lpVtbl -> SetPlayerHook(This,dwOutputNum,pHook) )
EXTERN_C const IID IID_IWMReaderAdvanced6;
    typedef struct IWMReaderAdvanced6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAdvanced6 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAdvanced6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAdvanced6 * This);
        HRESULT ( STDMETHODCALLTYPE *SetUserProvidedClock )(
            IWMReaderAdvanced6 * This,
                       BOOL fUserClock);
        HRESULT ( STDMETHODCALLTYPE *GetUserProvidedClock )(
            IWMReaderAdvanced6 * This,
                        BOOL *pfUserClock);
        HRESULT ( STDMETHODCALLTYPE *DeliverTime )(
            IWMReaderAdvanced6 * This,
                       QWORD cnsTime);
        HRESULT ( STDMETHODCALLTYPE *SetManualStreamSelection )(
            IWMReaderAdvanced6 * This,
                       BOOL fSelection);
        HRESULT ( STDMETHODCALLTYPE *GetManualStreamSelection )(
            IWMReaderAdvanced6 * This,
                        BOOL *pfSelection);
        HRESULT ( STDMETHODCALLTYPE *SetStreamsSelected )(
            IWMReaderAdvanced6 * This,
                       WORD cStreamCount,
                       WORD *pwStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections);
        HRESULT ( STDMETHODCALLTYPE *GetStreamSelected )(
            IWMReaderAdvanced6 * This,
                       WORD wStreamNum,
                        WMT_STREAM_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveSelectionCallbacks )(
            IWMReaderAdvanced6 * This,
                       BOOL fGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveSelectionCallbacks )(
            IWMReaderAdvanced6 * This,
                        BOOL *pfGetCallbacks);
        HRESULT ( STDMETHODCALLTYPE *SetReceiveStreamSamples )(
            IWMReaderAdvanced6 * This,
                       WORD wStreamNum,
                       BOOL fReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *GetReceiveStreamSamples )(
            IWMReaderAdvanced6 * This,
                       WORD wStreamNum,
                        BOOL *pfReceiveStreamSamples);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForOutput )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutputNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForOutput )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutputNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *SetAllocateForStream )(
            IWMReaderAdvanced6 * This,
                       WORD wStreamNum,
                       BOOL fAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetAllocateForStream )(
            IWMReaderAdvanced6 * This,
                       WORD dwSreamNum,
                        BOOL *pfAllocate);
        HRESULT ( STDMETHODCALLTYPE *GetStatistics )(
            IWMReaderAdvanced6 * This,
                            WM_READER_STATISTICS *pStatistics);
        HRESULT ( STDMETHODCALLTYPE *SetClientInfo )(
            IWMReaderAdvanced6 * This,
                       WM_READER_CLIENTINFO *pClientInfo);
        HRESULT ( STDMETHODCALLTYPE *GetMaxOutputSampleSize )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutput,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *GetMaxStreamSampleSize )(
            IWMReaderAdvanced6 * This,
                       WORD wStream,
                        DWORD *pcbMax);
        HRESULT ( STDMETHODCALLTYPE *NotifyLateDelivery )(
            IWMReaderAdvanced6 * This,
            QWORD cnsLateness);
        HRESULT ( STDMETHODCALLTYPE *SetPlayMode )(
            IWMReaderAdvanced6 * This,
                       WMT_PLAY_MODE Mode);
        HRESULT ( STDMETHODCALLTYPE *GetPlayMode )(
            IWMReaderAdvanced6 * This,
                        WMT_PLAY_MODE *pMode);
        HRESULT ( STDMETHODCALLTYPE *GetBufferProgress )(
            IWMReaderAdvanced6 * This,
                        DWORD *pdwPercent,
                        QWORD *pcnsBuffering);
        HRESULT ( STDMETHODCALLTYPE *GetDownloadProgress )(
            IWMReaderAdvanced6 * This,
                        DWORD *pdwPercent,
                        QWORD *pqwBytesDownloaded,
                        QWORD *pcnsDownload);
        HRESULT ( STDMETHODCALLTYPE *GetSaveAsProgress )(
            IWMReaderAdvanced6 * This,
                        DWORD *pdwPercent);
        HRESULT ( STDMETHODCALLTYPE *SaveFileAs )(
            IWMReaderAdvanced6 * This,
                       const WCHAR *pwszFilename);
        HRESULT ( STDMETHODCALLTYPE *GetProtocolName )(
            IWMReaderAdvanced6 * This,
                                 WCHAR *pwszProtocol,
                            DWORD *pcchProtocol);
        HRESULT ( STDMETHODCALLTYPE *StartAtMarker )(
            IWMReaderAdvanced6 * This,
                       WORD wMarkerIndex,
                       QWORD cnsDuration,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetOutputSetting )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetOutputSetting )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutputNum,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *Preroll )(
            IWMReaderAdvanced6 * This,
                       QWORD cnsStart,
                       QWORD cnsDuration,
                       float fRate);
        HRESULT ( STDMETHODCALLTYPE *SetLogClientID )(
            IWMReaderAdvanced6 * This,
                       BOOL fLogClientID);
        HRESULT ( STDMETHODCALLTYPE *GetLogClientID )(
            IWMReaderAdvanced6 * This,
                        BOOL *pfLogClientID);
        HRESULT ( STDMETHODCALLTYPE *StopBuffering )(
            IWMReaderAdvanced6 * This);
        HRESULT ( STDMETHODCALLTYPE *OpenStream )(
            IWMReaderAdvanced6 * This,
                       IStream *pStream,
                       IWMReaderCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *StopNetStreaming )(
            IWMReaderAdvanced6 * This);
        HRESULT ( STDMETHODCALLTYPE *StartAtPosition )(
            IWMReaderAdvanced6 * This,
                       WORD wStreamNum,
                       void *pvOffsetStart,
                       void *pvDuration,
                       WMT_OFFSET_FORMAT dwOffsetFormat,
                       float fRate,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCount )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutputNum,
                        WORD *pwLanguageCount);
        HRESULT ( STDMETHODCALLTYPE *GetLanguage )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutputNum,
                       WORD wLanguage,
                                 WCHAR *pwszLanguageString,
                            WORD *pcchLanguageStringLength);
        HRESULT ( STDMETHODCALLTYPE *GetMaxSpeedFactor )(
            IWMReaderAdvanced6 * This,
                        double *pdblFactor);
        HRESULT ( STDMETHODCALLTYPE *IsUsingFastCache )(
            IWMReaderAdvanced6 * This,
                        BOOL *pfUsingFastCache);
        HRESULT ( STDMETHODCALLTYPE *AddLogParam )(
            IWMReaderAdvanced6 * This,
                       LPCWSTR wszNameSpace,
                       LPCWSTR wszName,
                       LPCWSTR wszValue);
        HRESULT ( STDMETHODCALLTYPE *SendLogParams )(
            IWMReaderAdvanced6 * This);
        HRESULT ( STDMETHODCALLTYPE *CanSaveFileAs )(
            IWMReaderAdvanced6 * This,
                        BOOL *pfCanSave);
        HRESULT ( STDMETHODCALLTYPE *CancelSaveFileAs )(
            IWMReaderAdvanced6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetURL )(
            IWMReaderAdvanced6 * This,
                                 WCHAR *pwszURL,
                            DWORD *pcchURL);
        HRESULT ( STDMETHODCALLTYPE *SetPlayerHook )(
            IWMReaderAdvanced6 * This,
                       DWORD dwOutputNum,
                       IWMPlayerHook *pHook);
        HRESULT ( STDMETHODCALLTYPE *SetProtectStreamSamples )(
            IWMReaderAdvanced6 * This,
                                BYTE *pbCertificate,
                       DWORD cbCertificate,
                       DWORD dwCertificateType,
                       DWORD dwFlags,
                                 BYTE *pbInitializationVector,
                            DWORD *pcbInitializationVector);
        END_INTERFACE
    } IWMReaderAdvanced6Vtbl;
    interface IWMReaderAdvanced6
    {
        CONST_VTBL struct IWMReaderAdvanced6Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUserProvidedClock(This,fUserClock) )
    ( (This)->lpVtbl -> GetUserProvidedClock(This,pfUserClock) )
    ( (This)->lpVtbl -> DeliverTime(This,cnsTime) )
    ( (This)->lpVtbl -> SetManualStreamSelection(This,fSelection) )
    ( (This)->lpVtbl -> GetManualStreamSelection(This,pfSelection) )
    ( (This)->lpVtbl -> SetStreamsSelected(This,cStreamCount,pwStreamNumbers,pSelections) )
    ( (This)->lpVtbl -> GetStreamSelected(This,wStreamNum,pSelection) )
    ( (This)->lpVtbl -> SetReceiveSelectionCallbacks(This,fGetCallbacks) )
    ( (This)->lpVtbl -> GetReceiveSelectionCallbacks(This,pfGetCallbacks) )
    ( (This)->lpVtbl -> SetReceiveStreamSamples(This,wStreamNum,fReceiveStreamSamples) )
    ( (This)->lpVtbl -> GetReceiveStreamSamples(This,wStreamNum,pfReceiveStreamSamples) )
    ( (This)->lpVtbl -> SetAllocateForOutput(This,dwOutputNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForOutput(This,dwOutputNum,pfAllocate) )
    ( (This)->lpVtbl -> SetAllocateForStream(This,wStreamNum,fAllocate) )
    ( (This)->lpVtbl -> GetAllocateForStream(This,dwSreamNum,pfAllocate) )
    ( (This)->lpVtbl -> GetStatistics(This,pStatistics) )
    ( (This)->lpVtbl -> SetClientInfo(This,pClientInfo) )
    ( (This)->lpVtbl -> GetMaxOutputSampleSize(This,dwOutput,pcbMax) )
    ( (This)->lpVtbl -> GetMaxStreamSampleSize(This,wStream,pcbMax) )
    ( (This)->lpVtbl -> NotifyLateDelivery(This,cnsLateness) )
    ( (This)->lpVtbl -> SetPlayMode(This,Mode) )
    ( (This)->lpVtbl -> GetPlayMode(This,pMode) )
    ( (This)->lpVtbl -> GetBufferProgress(This,pdwPercent,pcnsBuffering) )
    ( (This)->lpVtbl -> GetDownloadProgress(This,pdwPercent,pqwBytesDownloaded,pcnsDownload) )
    ( (This)->lpVtbl -> GetSaveAsProgress(This,pdwPercent) )
    ( (This)->lpVtbl -> SaveFileAs(This,pwszFilename) )
    ( (This)->lpVtbl -> GetProtocolName(This,pwszProtocol,pcchProtocol) )
    ( (This)->lpVtbl -> StartAtMarker(This,wMarkerIndex,cnsDuration,fRate,pvContext) )
    ( (This)->lpVtbl -> GetOutputSetting(This,dwOutputNum,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetOutputSetting(This,dwOutputNum,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> Preroll(This,cnsStart,cnsDuration,fRate) )
    ( (This)->lpVtbl -> SetLogClientID(This,fLogClientID) )
    ( (This)->lpVtbl -> GetLogClientID(This,pfLogClientID) )
    ( (This)->lpVtbl -> StopBuffering(This) )
    ( (This)->lpVtbl -> OpenStream(This,pStream,pCallback,pvContext) )
    ( (This)->lpVtbl -> StopNetStreaming(This) )
    ( (This)->lpVtbl -> StartAtPosition(This,wStreamNum,pvOffsetStart,pvDuration,dwOffsetFormat,fRate,pvContext) )
    ( (This)->lpVtbl -> GetLanguageCount(This,dwOutputNum,pwLanguageCount) )
    ( (This)->lpVtbl -> GetLanguage(This,dwOutputNum,wLanguage,pwszLanguageString,pcchLanguageStringLength) )
    ( (This)->lpVtbl -> GetMaxSpeedFactor(This,pdblFactor) )
    ( (This)->lpVtbl -> IsUsingFastCache(This,pfUsingFastCache) )
    ( (This)->lpVtbl -> AddLogParam(This,wszNameSpace,wszName,wszValue) )
    ( (This)->lpVtbl -> SendLogParams(This) )
    ( (This)->lpVtbl -> CanSaveFileAs(This,pfCanSave) )
    ( (This)->lpVtbl -> CancelSaveFileAs(This) )
    ( (This)->lpVtbl -> GetURL(This,pwszURL,pcchURL) )
    ( (This)->lpVtbl -> SetPlayerHook(This,dwOutputNum,pHook) )
    ( (This)->lpVtbl -> SetProtectStreamSamples(This,pbCertificate,cbCertificate,dwCertificateType,dwFlags,pbInitializationVector,pcbInitializationVector) )
EXTERN_C const IID IID_IWMPlayerHook;
    typedef struct IWMPlayerHookVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMPlayerHook * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMPlayerHook * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMPlayerHook * This);
        HRESULT ( STDMETHODCALLTYPE *PreDecode )(
            IWMPlayerHook * This);
        END_INTERFACE
    } IWMPlayerHookVtbl;
    interface IWMPlayerHook
    {
        CONST_VTBL struct IWMPlayerHookVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PreDecode(This) )
EXTERN_C const IID IID_IWMReaderAllocatorEx;
    typedef struct IWMReaderAllocatorExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAllocatorEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAllocatorEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAllocatorEx * This);
        HRESULT ( STDMETHODCALLTYPE *AllocateForStreamEx )(
            IWMReaderAllocatorEx * This,
                       WORD wStreamNum,
                       DWORD cbBuffer,
                        INSSBuffer **ppBuffer,
                       DWORD dwFlags,
                       QWORD cnsSampleTime,
                       QWORD cnsSampleDuration,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *AllocateForOutputEx )(
            IWMReaderAllocatorEx * This,
                       DWORD dwOutputNum,
                       DWORD cbBuffer,
                        INSSBuffer **ppBuffer,
                       DWORD dwFlags,
                       QWORD cnsSampleTime,
                       QWORD cnsSampleDuration,
                       void *pvContext);
        END_INTERFACE
    } IWMReaderAllocatorExVtbl;
    interface IWMReaderAllocatorEx
    {
        CONST_VTBL struct IWMReaderAllocatorExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllocateForStreamEx(This,wStreamNum,cbBuffer,ppBuffer,dwFlags,cnsSampleTime,cnsSampleDuration,pvContext) )
    ( (This)->lpVtbl -> AllocateForOutputEx(This,dwOutputNum,cbBuffer,ppBuffer,dwFlags,cnsSampleTime,cnsSampleDuration,pvContext) )
EXTERN_C const IID IID_IWMReaderTypeNegotiation;
    typedef struct IWMReaderTypeNegotiationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderTypeNegotiation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderTypeNegotiation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderTypeNegotiation * This);
        HRESULT ( STDMETHODCALLTYPE *TryOutputProps )(
            IWMReaderTypeNegotiation * This,
                       DWORD dwOutputNum,
                       IWMOutputMediaProps *pOutput);
        END_INTERFACE
    } IWMReaderTypeNegotiationVtbl;
    interface IWMReaderTypeNegotiation
    {
        CONST_VTBL struct IWMReaderTypeNegotiationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TryOutputProps(This,dwOutputNum,pOutput) )
EXTERN_C const IID IID_IWMReaderCallbackAdvanced;
    typedef struct IWMReaderCallbackAdvancedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderCallbackAdvanced * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderCallbackAdvanced * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderCallbackAdvanced * This);
        HRESULT ( STDMETHODCALLTYPE *OnStreamSample )(
            IWMReaderCallbackAdvanced * This,
                       WORD wStreamNum,
                       QWORD cnsSampleTime,
                       QWORD cnsSampleDuration,
                       DWORD dwFlags,
                       INSSBuffer *pSample,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *OnTime )(
            IWMReaderCallbackAdvanced * This,
                       QWORD cnsCurrentTime,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *OnStreamSelection )(
            IWMReaderCallbackAdvanced * This,
                       WORD wStreamCount,
                       WORD *pStreamNumbers,
                       WMT_STREAM_SELECTION *pSelections,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *OnOutputPropsChanged )(
            IWMReaderCallbackAdvanced * This,
                       DWORD dwOutputNum,
                       WM_MEDIA_TYPE *pMediaType,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *AllocateForStream )(
            IWMReaderCallbackAdvanced * This,
                       WORD wStreamNum,
                       DWORD cbBuffer,
                        INSSBuffer **ppBuffer,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *AllocateForOutput )(
            IWMReaderCallbackAdvanced * This,
                       DWORD dwOutputNum,
                       DWORD cbBuffer,
                        INSSBuffer **ppBuffer,
                       void *pvContext);
        END_INTERFACE
    } IWMReaderCallbackAdvancedVtbl;
    interface IWMReaderCallbackAdvanced
    {
        CONST_VTBL struct IWMReaderCallbackAdvancedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStreamSample(This,wStreamNum,cnsSampleTime,cnsSampleDuration,dwFlags,pSample,pvContext) )
    ( (This)->lpVtbl -> OnTime(This,cnsCurrentTime,pvContext) )
    ( (This)->lpVtbl -> OnStreamSelection(This,wStreamCount,pStreamNumbers,pSelections,pvContext) )
    ( (This)->lpVtbl -> OnOutputPropsChanged(This,dwOutputNum,pMediaType,pvContext) )
    ( (This)->lpVtbl -> AllocateForStream(This,wStreamNum,cbBuffer,ppBuffer,pvContext) )
    ( (This)->lpVtbl -> AllocateForOutput(This,dwOutputNum,cbBuffer,ppBuffer,pvContext) )
EXTERN_C const IID IID_IWMDRMReader;
    typedef struct IWMDRMReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMReader * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireLicense )(
            IWMDRMReader * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CancelLicenseAcquisition )(
            IWMDRMReader * This);
        HRESULT ( STDMETHODCALLTYPE *Individualize )(
            IWMDRMReader * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CancelIndividualization )(
            IWMDRMReader * This);
        HRESULT ( STDMETHODCALLTYPE *MonitorLicenseAcquisition )(
            IWMDRMReader * This);
        HRESULT ( STDMETHODCALLTYPE *CancelMonitorLicenseAcquisition )(
            IWMDRMReader * This);
        HRESULT ( STDMETHODCALLTYPE *SetDRMProperty )(
            IWMDRMReader * This,
                       LPCWSTR pwstrName,
                       WMT_ATTR_DATATYPE dwType,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetDRMProperty )(
            IWMDRMReader * This,
                       LPCWSTR pwstrName,
                        WMT_ATTR_DATATYPE *pdwType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        END_INTERFACE
    } IWMDRMReaderVtbl;
    interface IWMDRMReader
    {
        CONST_VTBL struct IWMDRMReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireLicense(This,dwFlags) )
    ( (This)->lpVtbl -> CancelLicenseAcquisition(This) )
    ( (This)->lpVtbl -> Individualize(This,dwFlags) )
    ( (This)->lpVtbl -> CancelIndividualization(This) )
    ( (This)->lpVtbl -> MonitorLicenseAcquisition(This) )
    ( (This)->lpVtbl -> CancelMonitorLicenseAcquisition(This) )
    ( (This)->lpVtbl -> SetDRMProperty(This,pwstrName,dwType,pValue,cbLength) )
    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) )
typedef struct __tagDRM_MINIMUM_OUTPUT_PROTECTION_LEVELS
    {
    WORD wCompressedDigitalVideo;
    WORD wUncompressedDigitalVideo;
    WORD wAnalogVideo;
    WORD wCompressedDigitalAudio;
    WORD wUncompressedDigitalAudio;
    } DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS;
typedef struct __tagDRM_OPL_OUTPUT_IDS
    {
    WORD cIds;
    GUID *rgIds;
    } DRM_OPL_OUTPUT_IDS;
typedef struct __tagDRM_OUTPUT_PROTECTION
    {
    GUID guidId;
    BYTE bConfigData;
    } DRM_OUTPUT_PROTECTION;
typedef DRM_OUTPUT_PROTECTION DRM_VIDEO_OUTPUT_PROTECTION;
typedef struct __tagDRM_VIDEO_OUTPUT_PROTECTION_IDS
    {
    WORD cEntries;
    DRM_VIDEO_OUTPUT_PROTECTION *rgVop;
    } DRM_VIDEO_OUTPUT_PROTECTION_IDS;
typedef struct __tagDRM_PLAY_OPL
    {
    DRM_MINIMUM_OUTPUT_PROTECTION_LEVELS minOPL;
    DRM_OPL_OUTPUT_IDS oplIdReserved;
    DRM_VIDEO_OUTPUT_PROTECTION_IDS vopi;
    } DRM_PLAY_OPL;
typedef struct __tagDRM_COPY_OPL
    {
    WORD wMinimumCopyLevel;
    DRM_OPL_OUTPUT_IDS oplIdIncludes;
    DRM_OPL_OUTPUT_IDS oplIdExcludes;
    } DRM_COPY_OPL;
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0063_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0063_v0_0_s_ifspec;
EXTERN_C const IID IID_IWMDRMReader2;
    typedef struct IWMDRMReader2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMReader2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMReader2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireLicense )(
            IWMDRMReader2 * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CancelLicenseAcquisition )(
            IWMDRMReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *Individualize )(
            IWMDRMReader2 * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CancelIndividualization )(
            IWMDRMReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *MonitorLicenseAcquisition )(
            IWMDRMReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *CancelMonitorLicenseAcquisition )(
            IWMDRMReader2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDRMProperty )(
            IWMDRMReader2 * This,
                       LPCWSTR pwstrName,
                       WMT_ATTR_DATATYPE dwType,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetDRMProperty )(
            IWMDRMReader2 * This,
                       LPCWSTR pwstrName,
                        WMT_ATTR_DATATYPE *pdwType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetEvaluateOutputLevelLicenses )(
            IWMDRMReader2 * This,
                       BOOL fEvaluate);
        HRESULT ( STDMETHODCALLTYPE *GetPlayOutputLevels )(
            IWMDRMReader2 * This,
                                 DRM_PLAY_OPL *pPlayOPL,
                            DWORD *pcbLength,
                        DWORD *pdwMinAppComplianceLevel);
        HRESULT ( STDMETHODCALLTYPE *GetCopyOutputLevels )(
            IWMDRMReader2 * This,
                                 DRM_COPY_OPL *pCopyOPL,
                            DWORD *pcbLength,
                        DWORD *pdwMinAppComplianceLevel);
        HRESULT ( STDMETHODCALLTYPE *TryNextLicense )(
            IWMDRMReader2 * This);
        END_INTERFACE
    } IWMDRMReader2Vtbl;
    interface IWMDRMReader2
    {
        CONST_VTBL struct IWMDRMReader2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireLicense(This,dwFlags) )
    ( (This)->lpVtbl -> CancelLicenseAcquisition(This) )
    ( (This)->lpVtbl -> Individualize(This,dwFlags) )
    ( (This)->lpVtbl -> CancelIndividualization(This) )
    ( (This)->lpVtbl -> MonitorLicenseAcquisition(This) )
    ( (This)->lpVtbl -> CancelMonitorLicenseAcquisition(This) )
    ( (This)->lpVtbl -> SetDRMProperty(This,pwstrName,dwType,pValue,cbLength) )
    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetEvaluateOutputLevelLicenses(This,fEvaluate) )
    ( (This)->lpVtbl -> GetPlayOutputLevels(This,pPlayOPL,pcbLength,pdwMinAppComplianceLevel) )
    ( (This)->lpVtbl -> GetCopyOutputLevels(This,pCopyOPL,pcbLength,pdwMinAppComplianceLevel) )
    ( (This)->lpVtbl -> TryNextLicense(This) )
EXTERN_C const IID IID_IWMDRMReader3;
    typedef struct IWMDRMReader3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMReader3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMReader3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMReader3 * This);
        HRESULT ( STDMETHODCALLTYPE *AcquireLicense )(
            IWMDRMReader3 * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CancelLicenseAcquisition )(
            IWMDRMReader3 * This);
        HRESULT ( STDMETHODCALLTYPE *Individualize )(
            IWMDRMReader3 * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *CancelIndividualization )(
            IWMDRMReader3 * This);
        HRESULT ( STDMETHODCALLTYPE *MonitorLicenseAcquisition )(
            IWMDRMReader3 * This);
        HRESULT ( STDMETHODCALLTYPE *CancelMonitorLicenseAcquisition )(
            IWMDRMReader3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDRMProperty )(
            IWMDRMReader3 * This,
                       LPCWSTR pwstrName,
                       WMT_ATTR_DATATYPE dwType,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *GetDRMProperty )(
            IWMDRMReader3 * This,
                       LPCWSTR pwstrName,
                        WMT_ATTR_DATATYPE *pdwType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetEvaluateOutputLevelLicenses )(
            IWMDRMReader3 * This,
                       BOOL fEvaluate);
        HRESULT ( STDMETHODCALLTYPE *GetPlayOutputLevels )(
            IWMDRMReader3 * This,
                                 DRM_PLAY_OPL *pPlayOPL,
                            DWORD *pcbLength,
                        DWORD *pdwMinAppComplianceLevel);
        HRESULT ( STDMETHODCALLTYPE *GetCopyOutputLevels )(
            IWMDRMReader3 * This,
                                 DRM_COPY_OPL *pCopyOPL,
                            DWORD *pcbLength,
                        DWORD *pdwMinAppComplianceLevel);
        HRESULT ( STDMETHODCALLTYPE *TryNextLicense )(
            IWMDRMReader3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetInclusionList )(
            IWMDRMReader3 * This,
                        GUID **ppGuids,
                        DWORD *pcGuids);
        END_INTERFACE
    } IWMDRMReader3Vtbl;
    interface IWMDRMReader3
    {
        CONST_VTBL struct IWMDRMReader3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AcquireLicense(This,dwFlags) )
    ( (This)->lpVtbl -> CancelLicenseAcquisition(This) )
    ( (This)->lpVtbl -> Individualize(This,dwFlags) )
    ( (This)->lpVtbl -> CancelIndividualization(This) )
    ( (This)->lpVtbl -> MonitorLicenseAcquisition(This) )
    ( (This)->lpVtbl -> CancelMonitorLicenseAcquisition(This) )
    ( (This)->lpVtbl -> SetDRMProperty(This,pwstrName,dwType,pValue,cbLength) )
    ( (This)->lpVtbl -> GetDRMProperty(This,pwstrName,pdwType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetEvaluateOutputLevelLicenses(This,fEvaluate) )
    ( (This)->lpVtbl -> GetPlayOutputLevels(This,pPlayOPL,pcbLength,pdwMinAppComplianceLevel) )
    ( (This)->lpVtbl -> GetCopyOutputLevels(This,pCopyOPL,pcbLength,pdwMinAppComplianceLevel) )
    ( (This)->lpVtbl -> TryNextLicense(This) )
    ( (This)->lpVtbl -> GetInclusionList(This,ppGuids,pcGuids) )
EXTERN_C const IID IID_IWMReaderPlaylistBurn;
    typedef struct IWMReaderPlaylistBurnVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderPlaylistBurn * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderPlaylistBurn * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderPlaylistBurn * This);
        HRESULT ( STDMETHODCALLTYPE *InitPlaylistBurn )(
            IWMReaderPlaylistBurn * This,
                       DWORD cFiles,
                       LPCWSTR_WMSDK_TYPE_SAFE *ppwszFilenames,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *GetInitResults )(
            IWMReaderPlaylistBurn * This,
                       DWORD cFiles,
                        HRESULT *phrStati);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IWMReaderPlaylistBurn * This);
        HRESULT ( STDMETHODCALLTYPE *EndPlaylistBurn )(
            IWMReaderPlaylistBurn * This,
                       HRESULT hrBurnResult);
        END_INTERFACE
    } IWMReaderPlaylistBurnVtbl;
    interface IWMReaderPlaylistBurn
    {
        CONST_VTBL struct IWMReaderPlaylistBurnVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitPlaylistBurn(This,cFiles,ppwszFilenames,pCallback,pvContext) )
    ( (This)->lpVtbl -> GetInitResults(This,cFiles,phrStati) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> EndPlaylistBurn(This,hrBurnResult) )
EXTERN_C const IID IID_IWMReaderNetworkConfig;
    typedef struct IWMReaderNetworkConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderNetworkConfig * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderNetworkConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderNetworkConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetBufferingTime )(
            IWMReaderNetworkConfig * This,
                        QWORD *pcnsBufferingTime);
        HRESULT ( STDMETHODCALLTYPE *SetBufferingTime )(
            IWMReaderNetworkConfig * This,
                       QWORD cnsBufferingTime);
        HRESULT ( STDMETHODCALLTYPE *GetUDPPortRanges )(
            IWMReaderNetworkConfig * This,
                                 WM_PORT_NUMBER_RANGE *pRangeArray,
                            DWORD *pcRanges);
        HRESULT ( STDMETHODCALLTYPE *SetUDPPortRanges )(
            IWMReaderNetworkConfig * This,
                                WM_PORT_NUMBER_RANGE *pRangeArray,
                       DWORD cRanges);
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                        WMT_PROXY_SETTINGS *pProxySetting);
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                       WMT_PROXY_SETTINGS ProxySetting);
        HRESULT ( STDMETHODCALLTYPE *GetProxyHostName )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                                 WCHAR *pwszHostName,
                            DWORD *pcchHostName);
        HRESULT ( STDMETHODCALLTYPE *SetProxyHostName )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                       LPCWSTR pwszHostName);
        HRESULT ( STDMETHODCALLTYPE *GetProxyPort )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                        DWORD *pdwPort);
        HRESULT ( STDMETHODCALLTYPE *SetProxyPort )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                       DWORD dwPort);
        HRESULT ( STDMETHODCALLTYPE *GetProxyExceptionList )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                                 WCHAR *pwszExceptionList,
                            DWORD *pcchExceptionList);
        HRESULT ( STDMETHODCALLTYPE *SetProxyExceptionList )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                       LPCWSTR pwszExceptionList);
        HRESULT ( STDMETHODCALLTYPE *GetProxyBypassForLocal )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                        BOOL *pfBypassForLocal);
        HRESULT ( STDMETHODCALLTYPE *SetProxyBypassForLocal )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszProtocol,
                       BOOL fBypassForLocal);
        HRESULT ( STDMETHODCALLTYPE *GetForceRerunAutoProxyDetection )(
            IWMReaderNetworkConfig * This,
                        BOOL *pfForceRerunDetection);
        HRESULT ( STDMETHODCALLTYPE *SetForceRerunAutoProxyDetection )(
            IWMReaderNetworkConfig * This,
                       BOOL fForceRerunDetection);
        HRESULT ( STDMETHODCALLTYPE *GetEnableMulticast )(
            IWMReaderNetworkConfig * This,
                        BOOL *pfEnableMulticast);
        HRESULT ( STDMETHODCALLTYPE *SetEnableMulticast )(
            IWMReaderNetworkConfig * This,
                       BOOL fEnableMulticast);
        HRESULT ( STDMETHODCALLTYPE *GetEnableHTTP )(
            IWMReaderNetworkConfig * This,
                        BOOL *pfEnableHTTP);
        HRESULT ( STDMETHODCALLTYPE *SetEnableHTTP )(
            IWMReaderNetworkConfig * This,
                       BOOL fEnableHTTP);
        HRESULT ( STDMETHODCALLTYPE *GetEnableUDP )(
            IWMReaderNetworkConfig * This,
                        BOOL *pfEnableUDP);
        HRESULT ( STDMETHODCALLTYPE *SetEnableUDP )(
            IWMReaderNetworkConfig * This,
                       BOOL fEnableUDP);
        HRESULT ( STDMETHODCALLTYPE *GetEnableTCP )(
            IWMReaderNetworkConfig * This,
                        BOOL *pfEnableTCP);
        HRESULT ( STDMETHODCALLTYPE *SetEnableTCP )(
            IWMReaderNetworkConfig * This,
                       BOOL fEnableTCP);
        HRESULT ( STDMETHODCALLTYPE *ResetProtocolRollover )(
            IWMReaderNetworkConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionBandwidth )(
            IWMReaderNetworkConfig * This,
                        DWORD *pdwConnectionBandwidth);
        HRESULT ( STDMETHODCALLTYPE *SetConnectionBandwidth )(
            IWMReaderNetworkConfig * This,
                       DWORD dwConnectionBandwidth);
        HRESULT ( STDMETHODCALLTYPE *GetNumProtocolsSupported )(
            IWMReaderNetworkConfig * This,
                        DWORD *pcProtocols);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedProtocolName )(
            IWMReaderNetworkConfig * This,
                       DWORD dwProtocolNum,
                                 WCHAR *pwszProtocolName,
                            DWORD *pcchProtocolName);
        HRESULT ( STDMETHODCALLTYPE *AddLoggingUrl )(
            IWMReaderNetworkConfig * This,
                       LPCWSTR pwszUrl);
        HRESULT ( STDMETHODCALLTYPE *GetLoggingUrl )(
            IWMReaderNetworkConfig * This,
                       DWORD dwIndex,
                                 LPWSTR pwszUrl,
                            DWORD *pcchUrl);
        HRESULT ( STDMETHODCALLTYPE *GetLoggingUrlCount )(
            IWMReaderNetworkConfig * This,
                        DWORD *pdwUrlCount);
        HRESULT ( STDMETHODCALLTYPE *ResetLoggingUrlList )(
            IWMReaderNetworkConfig * This);
        END_INTERFACE
    } IWMReaderNetworkConfigVtbl;
    interface IWMReaderNetworkConfig
    {
        CONST_VTBL struct IWMReaderNetworkConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBufferingTime(This,pcnsBufferingTime) )
    ( (This)->lpVtbl -> SetBufferingTime(This,cnsBufferingTime) )
    ( (This)->lpVtbl -> GetUDPPortRanges(This,pRangeArray,pcRanges) )
    ( (This)->lpVtbl -> SetUDPPortRanges(This,pRangeArray,cRanges) )
    ( (This)->lpVtbl -> GetProxySettings(This,pwszProtocol,pProxySetting) )
    ( (This)->lpVtbl -> SetProxySettings(This,pwszProtocol,ProxySetting) )
    ( (This)->lpVtbl -> GetProxyHostName(This,pwszProtocol,pwszHostName,pcchHostName) )
    ( (This)->lpVtbl -> SetProxyHostName(This,pwszProtocol,pwszHostName) )
    ( (This)->lpVtbl -> GetProxyPort(This,pwszProtocol,pdwPort) )
    ( (This)->lpVtbl -> SetProxyPort(This,pwszProtocol,dwPort) )
    ( (This)->lpVtbl -> GetProxyExceptionList(This,pwszProtocol,pwszExceptionList,pcchExceptionList) )
    ( (This)->lpVtbl -> SetProxyExceptionList(This,pwszProtocol,pwszExceptionList) )
    ( (This)->lpVtbl -> GetProxyBypassForLocal(This,pwszProtocol,pfBypassForLocal) )
    ( (This)->lpVtbl -> SetProxyBypassForLocal(This,pwszProtocol,fBypassForLocal) )
    ( (This)->lpVtbl -> GetForceRerunAutoProxyDetection(This,pfForceRerunDetection) )
    ( (This)->lpVtbl -> SetForceRerunAutoProxyDetection(This,fForceRerunDetection) )
    ( (This)->lpVtbl -> GetEnableMulticast(This,pfEnableMulticast) )
    ( (This)->lpVtbl -> SetEnableMulticast(This,fEnableMulticast) )
    ( (This)->lpVtbl -> GetEnableHTTP(This,pfEnableHTTP) )
    ( (This)->lpVtbl -> SetEnableHTTP(This,fEnableHTTP) )
    ( (This)->lpVtbl -> GetEnableUDP(This,pfEnableUDP) )
    ( (This)->lpVtbl -> SetEnableUDP(This,fEnableUDP) )
    ( (This)->lpVtbl -> GetEnableTCP(This,pfEnableTCP) )
    ( (This)->lpVtbl -> SetEnableTCP(This,fEnableTCP) )
    ( (This)->lpVtbl -> ResetProtocolRollover(This) )
    ( (This)->lpVtbl -> GetConnectionBandwidth(This,pdwConnectionBandwidth) )
    ( (This)->lpVtbl -> SetConnectionBandwidth(This,dwConnectionBandwidth) )
    ( (This)->lpVtbl -> GetNumProtocolsSupported(This,pcProtocols) )
    ( (This)->lpVtbl -> GetSupportedProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) )
    ( (This)->lpVtbl -> AddLoggingUrl(This,pwszUrl) )
    ( (This)->lpVtbl -> GetLoggingUrl(This,dwIndex,pwszUrl,pcchUrl) )
    ( (This)->lpVtbl -> GetLoggingUrlCount(This,pdwUrlCount) )
    ( (This)->lpVtbl -> ResetLoggingUrlList(This) )
EXTERN_C const IID IID_IWMReaderNetworkConfig2;
    typedef struct IWMReaderNetworkConfig2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderNetworkConfig2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderNetworkConfig2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderNetworkConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetBufferingTime )(
            IWMReaderNetworkConfig2 * This,
                        QWORD *pcnsBufferingTime);
        HRESULT ( STDMETHODCALLTYPE *SetBufferingTime )(
            IWMReaderNetworkConfig2 * This,
                       QWORD cnsBufferingTime);
        HRESULT ( STDMETHODCALLTYPE *GetUDPPortRanges )(
            IWMReaderNetworkConfig2 * This,
                                 WM_PORT_NUMBER_RANGE *pRangeArray,
                            DWORD *pcRanges);
        HRESULT ( STDMETHODCALLTYPE *SetUDPPortRanges )(
            IWMReaderNetworkConfig2 * This,
                                WM_PORT_NUMBER_RANGE *pRangeArray,
                       DWORD cRanges);
        HRESULT ( STDMETHODCALLTYPE *GetProxySettings )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                        WMT_PROXY_SETTINGS *pProxySetting);
        HRESULT ( STDMETHODCALLTYPE *SetProxySettings )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                       WMT_PROXY_SETTINGS ProxySetting);
        HRESULT ( STDMETHODCALLTYPE *GetProxyHostName )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                                 WCHAR *pwszHostName,
                            DWORD *pcchHostName);
        HRESULT ( STDMETHODCALLTYPE *SetProxyHostName )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                       LPCWSTR pwszHostName);
        HRESULT ( STDMETHODCALLTYPE *GetProxyPort )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                        DWORD *pdwPort);
        HRESULT ( STDMETHODCALLTYPE *SetProxyPort )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                       DWORD dwPort);
        HRESULT ( STDMETHODCALLTYPE *GetProxyExceptionList )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                                 WCHAR *pwszExceptionList,
                            DWORD *pcchExceptionList);
        HRESULT ( STDMETHODCALLTYPE *SetProxyExceptionList )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                       LPCWSTR pwszExceptionList);
        HRESULT ( STDMETHODCALLTYPE *GetProxyBypassForLocal )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                        BOOL *pfBypassForLocal);
        HRESULT ( STDMETHODCALLTYPE *SetProxyBypassForLocal )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszProtocol,
                       BOOL fBypassForLocal);
        HRESULT ( STDMETHODCALLTYPE *GetForceRerunAutoProxyDetection )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfForceRerunDetection);
        HRESULT ( STDMETHODCALLTYPE *SetForceRerunAutoProxyDetection )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fForceRerunDetection);
        HRESULT ( STDMETHODCALLTYPE *GetEnableMulticast )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableMulticast);
        HRESULT ( STDMETHODCALLTYPE *SetEnableMulticast )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableMulticast);
        HRESULT ( STDMETHODCALLTYPE *GetEnableHTTP )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableHTTP);
        HRESULT ( STDMETHODCALLTYPE *SetEnableHTTP )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableHTTP);
        HRESULT ( STDMETHODCALLTYPE *GetEnableUDP )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableUDP);
        HRESULT ( STDMETHODCALLTYPE *SetEnableUDP )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableUDP);
        HRESULT ( STDMETHODCALLTYPE *GetEnableTCP )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableTCP);
        HRESULT ( STDMETHODCALLTYPE *SetEnableTCP )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableTCP);
        HRESULT ( STDMETHODCALLTYPE *ResetProtocolRollover )(
            IWMReaderNetworkConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetConnectionBandwidth )(
            IWMReaderNetworkConfig2 * This,
                        DWORD *pdwConnectionBandwidth);
        HRESULT ( STDMETHODCALLTYPE *SetConnectionBandwidth )(
            IWMReaderNetworkConfig2 * This,
                       DWORD dwConnectionBandwidth);
        HRESULT ( STDMETHODCALLTYPE *GetNumProtocolsSupported )(
            IWMReaderNetworkConfig2 * This,
                        DWORD *pcProtocols);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedProtocolName )(
            IWMReaderNetworkConfig2 * This,
                       DWORD dwProtocolNum,
                                 WCHAR *pwszProtocolName,
                            DWORD *pcchProtocolName);
        HRESULT ( STDMETHODCALLTYPE *AddLoggingUrl )(
            IWMReaderNetworkConfig2 * This,
                       LPCWSTR pwszUrl);
        HRESULT ( STDMETHODCALLTYPE *GetLoggingUrl )(
            IWMReaderNetworkConfig2 * This,
                       DWORD dwIndex,
                                 LPWSTR pwszUrl,
                            DWORD *pcchUrl);
        HRESULT ( STDMETHODCALLTYPE *GetLoggingUrlCount )(
            IWMReaderNetworkConfig2 * This,
                        DWORD *pdwUrlCount);
        HRESULT ( STDMETHODCALLTYPE *ResetLoggingUrlList )(
            IWMReaderNetworkConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEnableContentCaching )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableContentCaching);
        HRESULT ( STDMETHODCALLTYPE *SetEnableContentCaching )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableContentCaching);
        HRESULT ( STDMETHODCALLTYPE *GetEnableFastCache )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableFastCache);
        HRESULT ( STDMETHODCALLTYPE *SetEnableFastCache )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableFastCache);
        HRESULT ( STDMETHODCALLTYPE *GetAcceleratedStreamingDuration )(
            IWMReaderNetworkConfig2 * This,
                        QWORD *pcnsAccelDuration);
        HRESULT ( STDMETHODCALLTYPE *SetAcceleratedStreamingDuration )(
            IWMReaderNetworkConfig2 * This,
                       QWORD cnsAccelDuration);
        HRESULT ( STDMETHODCALLTYPE *GetAutoReconnectLimit )(
            IWMReaderNetworkConfig2 * This,
                        DWORD *pdwAutoReconnectLimit);
        HRESULT ( STDMETHODCALLTYPE *SetAutoReconnectLimit )(
            IWMReaderNetworkConfig2 * This,
                       DWORD dwAutoReconnectLimit);
        HRESULT ( STDMETHODCALLTYPE *GetEnableResends )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableResends);
        HRESULT ( STDMETHODCALLTYPE *SetEnableResends )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableResends);
        HRESULT ( STDMETHODCALLTYPE *GetEnableThinning )(
            IWMReaderNetworkConfig2 * This,
                        BOOL *pfEnableThinning);
        HRESULT ( STDMETHODCALLTYPE *SetEnableThinning )(
            IWMReaderNetworkConfig2 * This,
                       BOOL fEnableThinning);
        HRESULT ( STDMETHODCALLTYPE *GetMaxNetPacketSize )(
            IWMReaderNetworkConfig2 * This,
                        DWORD *pdwMaxNetPacketSize);
        END_INTERFACE
    } IWMReaderNetworkConfig2Vtbl;
    interface IWMReaderNetworkConfig2
    {
        CONST_VTBL struct IWMReaderNetworkConfig2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBufferingTime(This,pcnsBufferingTime) )
    ( (This)->lpVtbl -> SetBufferingTime(This,cnsBufferingTime) )
    ( (This)->lpVtbl -> GetUDPPortRanges(This,pRangeArray,pcRanges) )
    ( (This)->lpVtbl -> SetUDPPortRanges(This,pRangeArray,cRanges) )
    ( (This)->lpVtbl -> GetProxySettings(This,pwszProtocol,pProxySetting) )
    ( (This)->lpVtbl -> SetProxySettings(This,pwszProtocol,ProxySetting) )
    ( (This)->lpVtbl -> GetProxyHostName(This,pwszProtocol,pwszHostName,pcchHostName) )
    ( (This)->lpVtbl -> SetProxyHostName(This,pwszProtocol,pwszHostName) )
    ( (This)->lpVtbl -> GetProxyPort(This,pwszProtocol,pdwPort) )
    ( (This)->lpVtbl -> SetProxyPort(This,pwszProtocol,dwPort) )
    ( (This)->lpVtbl -> GetProxyExceptionList(This,pwszProtocol,pwszExceptionList,pcchExceptionList) )
    ( (This)->lpVtbl -> SetProxyExceptionList(This,pwszProtocol,pwszExceptionList) )
    ( (This)->lpVtbl -> GetProxyBypassForLocal(This,pwszProtocol,pfBypassForLocal) )
    ( (This)->lpVtbl -> SetProxyBypassForLocal(This,pwszProtocol,fBypassForLocal) )
    ( (This)->lpVtbl -> GetForceRerunAutoProxyDetection(This,pfForceRerunDetection) )
    ( (This)->lpVtbl -> SetForceRerunAutoProxyDetection(This,fForceRerunDetection) )
    ( (This)->lpVtbl -> GetEnableMulticast(This,pfEnableMulticast) )
    ( (This)->lpVtbl -> SetEnableMulticast(This,fEnableMulticast) )
    ( (This)->lpVtbl -> GetEnableHTTP(This,pfEnableHTTP) )
    ( (This)->lpVtbl -> SetEnableHTTP(This,fEnableHTTP) )
    ( (This)->lpVtbl -> GetEnableUDP(This,pfEnableUDP) )
    ( (This)->lpVtbl -> SetEnableUDP(This,fEnableUDP) )
    ( (This)->lpVtbl -> GetEnableTCP(This,pfEnableTCP) )
    ( (This)->lpVtbl -> SetEnableTCP(This,fEnableTCP) )
    ( (This)->lpVtbl -> ResetProtocolRollover(This) )
    ( (This)->lpVtbl -> GetConnectionBandwidth(This,pdwConnectionBandwidth) )
    ( (This)->lpVtbl -> SetConnectionBandwidth(This,dwConnectionBandwidth) )
    ( (This)->lpVtbl -> GetNumProtocolsSupported(This,pcProtocols) )
    ( (This)->lpVtbl -> GetSupportedProtocolName(This,dwProtocolNum,pwszProtocolName,pcchProtocolName) )
    ( (This)->lpVtbl -> AddLoggingUrl(This,pwszUrl) )
    ( (This)->lpVtbl -> GetLoggingUrl(This,dwIndex,pwszUrl,pcchUrl) )
    ( (This)->lpVtbl -> GetLoggingUrlCount(This,pdwUrlCount) )
    ( (This)->lpVtbl -> ResetLoggingUrlList(This) )
    ( (This)->lpVtbl -> GetEnableContentCaching(This,pfEnableContentCaching) )
    ( (This)->lpVtbl -> SetEnableContentCaching(This,fEnableContentCaching) )
    ( (This)->lpVtbl -> GetEnableFastCache(This,pfEnableFastCache) )
    ( (This)->lpVtbl -> SetEnableFastCache(This,fEnableFastCache) )
    ( (This)->lpVtbl -> GetAcceleratedStreamingDuration(This,pcnsAccelDuration) )
    ( (This)->lpVtbl -> SetAcceleratedStreamingDuration(This,cnsAccelDuration) )
    ( (This)->lpVtbl -> GetAutoReconnectLimit(This,pdwAutoReconnectLimit) )
    ( (This)->lpVtbl -> SetAutoReconnectLimit(This,dwAutoReconnectLimit) )
    ( (This)->lpVtbl -> GetEnableResends(This,pfEnableResends) )
    ( (This)->lpVtbl -> SetEnableResends(This,fEnableResends) )
    ( (This)->lpVtbl -> GetEnableThinning(This,pfEnableThinning) )
    ( (This)->lpVtbl -> SetEnableThinning(This,fEnableThinning) )
    ( (This)->lpVtbl -> GetMaxNetPacketSize(This,pdwMaxNetPacketSize) )
EXTERN_C const IID IID_IWMReaderStreamClock;
    typedef struct IWMReaderStreamClockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderStreamClock * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderStreamClock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderStreamClock * This);
        HRESULT ( STDMETHODCALLTYPE *GetTime )(
            IWMReaderStreamClock * This,
                       QWORD *pcnsNow);
        HRESULT ( STDMETHODCALLTYPE *SetTimer )(
            IWMReaderStreamClock * This,
                       QWORD cnsWhen,
                       void *pvParam,
                        DWORD *pdwTimerId);
        HRESULT ( STDMETHODCALLTYPE *KillTimer )(
            IWMReaderStreamClock * This,
                       DWORD dwTimerId);
        END_INTERFACE
    } IWMReaderStreamClockVtbl;
    interface IWMReaderStreamClock
    {
        CONST_VTBL struct IWMReaderStreamClockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTime(This,pcnsNow) )
    ( (This)->lpVtbl -> SetTimer(This,cnsWhen,pvParam,pdwTimerId) )
    ( (This)->lpVtbl -> KillTimer(This,dwTimerId) )
EXTERN_C const IID IID_IWMIndexer;
    typedef struct IWMIndexerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMIndexer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMIndexer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMIndexer * This);
        HRESULT ( STDMETHODCALLTYPE *StartIndexing )(
            IWMIndexer * This,
                       const WCHAR *pwszURL,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IWMIndexer * This);
        END_INTERFACE
    } IWMIndexerVtbl;
    interface IWMIndexer
    {
        CONST_VTBL struct IWMIndexerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartIndexing(This,pwszURL,pCallback,pvContext) )
    ( (This)->lpVtbl -> Cancel(This) )
EXTERN_C const IID IID_IWMIndexer2;
    typedef struct IWMIndexer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMIndexer2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMIndexer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMIndexer2 * This);
        HRESULT ( STDMETHODCALLTYPE *StartIndexing )(
            IWMIndexer2 * This,
                       const WCHAR *pwszURL,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            IWMIndexer2 * This);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            IWMIndexer2 * This,
                       WORD wStreamNum,
                       WMT_INDEXER_TYPE nIndexerType,
                       void *pvInterval,
                       void *pvIndexType);
        END_INTERFACE
    } IWMIndexer2Vtbl;
    interface IWMIndexer2
    {
        CONST_VTBL struct IWMIndexer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartIndexing(This,pwszURL,pCallback,pvContext) )
    ( (This)->lpVtbl -> Cancel(This) )
    ( (This)->lpVtbl -> Configure(This,wStreamNum,nIndexerType,pvInterval,pvIndexType) )
EXTERN_C const IID IID_IWMLicenseBackup;
    typedef struct IWMLicenseBackupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMLicenseBackup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMLicenseBackup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMLicenseBackup * This);
        HRESULT ( STDMETHODCALLTYPE *BackupLicenses )(
            IWMLicenseBackup * This,
                       DWORD dwFlags,
                       IWMStatusCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *CancelLicenseBackup )(
            IWMLicenseBackup * This);
        END_INTERFACE
    } IWMLicenseBackupVtbl;
    interface IWMLicenseBackup
    {
        CONST_VTBL struct IWMLicenseBackupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BackupLicenses(This,dwFlags,pCallback) )
    ( (This)->lpVtbl -> CancelLicenseBackup(This) )
EXTERN_C const IID IID_IWMLicenseRestore;
    typedef struct IWMLicenseRestoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMLicenseRestore * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMLicenseRestore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMLicenseRestore * This);
        HRESULT ( STDMETHODCALLTYPE *RestoreLicenses )(
            IWMLicenseRestore * This,
                       DWORD dwFlags,
                       IWMStatusCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *CancelLicenseRestore )(
            IWMLicenseRestore * This);
        END_INTERFACE
    } IWMLicenseRestoreVtbl;
    interface IWMLicenseRestore
    {
        CONST_VTBL struct IWMLicenseRestoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RestoreLicenses(This,dwFlags,pCallback) )
    ( (This)->lpVtbl -> CancelLicenseRestore(This) )
EXTERN_C const IID IID_IWMBackupRestoreProps;
    typedef struct IWMBackupRestorePropsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMBackupRestoreProps * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMBackupRestoreProps * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMBackupRestoreProps * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropCount )(
            IWMBackupRestoreProps * This,
                        WORD *pcProps);
        HRESULT ( STDMETHODCALLTYPE *GetPropByIndex )(
            IWMBackupRestoreProps * This,
                       WORD wIndex,
                                 WCHAR *pwszName,
                            WORD *pcchNameLen,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *GetPropByName )(
            IWMBackupRestoreProps * This,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *SetProp )(
            IWMBackupRestoreProps * This,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       WORD cbLength);
        HRESULT ( STDMETHODCALLTYPE *RemoveProp )(
            IWMBackupRestoreProps * This,
                       LPCWSTR pcwszName);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllProps )(
            IWMBackupRestoreProps * This);
        END_INTERFACE
    } IWMBackupRestorePropsVtbl;
    interface IWMBackupRestoreProps
    {
        CONST_VTBL struct IWMBackupRestorePropsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropCount(This,pcProps) )
    ( (This)->lpVtbl -> GetPropByIndex(This,wIndex,pwszName,pcchNameLen,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> GetPropByName(This,pszName,pType,pValue,pcbLength) )
    ( (This)->lpVtbl -> SetProp(This,pszName,Type,pValue,cbLength) )
    ( (This)->lpVtbl -> RemoveProp(This,pcwszName) )
    ( (This)->lpVtbl -> RemoveAllProps(This) )
EXTERN_C const IID IID_IWMCodecInfo;
    typedef struct IWMCodecInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInfoCount )(
            IWMCodecInfo * This,
                       REFGUID guidType,
                        DWORD *pcCodecs);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormatCount )(
            IWMCodecInfo * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                        DWORD *pcFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormat )(
            IWMCodecInfo * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       DWORD dwFormatIndex,
                        IWMStreamConfig **ppIStreamConfig);
        END_INTERFACE
    } IWMCodecInfoVtbl;
    interface IWMCodecInfo
    {
        CONST_VTBL struct IWMCodecInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCodecInfoCount(This,guidType,pcCodecs) )
    ( (This)->lpVtbl -> GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat) )
    ( (This)->lpVtbl -> GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig) )
EXTERN_C const IID IID_IWMCodecInfo2;
    typedef struct IWMCodecInfo2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecInfo2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecInfo2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecInfo2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInfoCount )(
            IWMCodecInfo2 * This,
                       REFGUID guidType,
                        DWORD *pcCodecs);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormatCount )(
            IWMCodecInfo2 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                        DWORD *pcFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormat )(
            IWMCodecInfo2 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       DWORD dwFormatIndex,
                        IWMStreamConfig **ppIStreamConfig);
        HRESULT ( STDMETHODCALLTYPE *GetCodecName )(
            IWMCodecInfo2 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                                 WCHAR *wszName,
                            DWORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormatDesc )(
            IWMCodecInfo2 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       DWORD dwFormatIndex,
                        IWMStreamConfig **ppIStreamConfig,
                                 WCHAR *wszDesc,
                            DWORD *pcchDesc);
        END_INTERFACE
    } IWMCodecInfo2Vtbl;
    interface IWMCodecInfo2
    {
        CONST_VTBL struct IWMCodecInfo2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCodecInfoCount(This,guidType,pcCodecs) )
    ( (This)->lpVtbl -> GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat) )
    ( (This)->lpVtbl -> GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig) )
    ( (This)->lpVtbl -> GetCodecName(This,guidType,dwCodecIndex,wszName,pcchName) )
    ( (This)->lpVtbl -> GetCodecFormatDesc(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig,wszDesc,pcchDesc) )
EXTERN_C const IID IID_IWMCodecInfo3;
    typedef struct IWMCodecInfo3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMCodecInfo3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMCodecInfo3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMCodecInfo3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInfoCount )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                        DWORD *pcCodecs);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormatCount )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                        DWORD *pcFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormat )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       DWORD dwFormatIndex,
                        IWMStreamConfig **ppIStreamConfig);
        HRESULT ( STDMETHODCALLTYPE *GetCodecName )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                                 WCHAR *wszName,
                            DWORD *pcchName);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormatDesc )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       DWORD dwFormatIndex,
                        IWMStreamConfig **ppIStreamConfig,
                                 WCHAR *wszDesc,
                            DWORD *pcchDesc);
        HRESULT ( STDMETHODCALLTYPE *GetCodecFormatProp )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       DWORD dwFormatIndex,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *GetCodecProp )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            DWORD *pdwSize);
        HRESULT ( STDMETHODCALLTYPE *SetCodecEnumerationSetting )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       LPCWSTR pszName,
                       WMT_ATTR_DATATYPE Type,
                                const BYTE *pValue,
                       DWORD dwSize);
        HRESULT ( STDMETHODCALLTYPE *GetCodecEnumerationSetting )(
            IWMCodecInfo3 * This,
                       REFGUID guidType,
                       DWORD dwCodecIndex,
                       LPCWSTR pszName,
                        WMT_ATTR_DATATYPE *pType,
                                 BYTE *pValue,
                            DWORD *pdwSize);
        END_INTERFACE
    } IWMCodecInfo3Vtbl;
    interface IWMCodecInfo3
    {
        CONST_VTBL struct IWMCodecInfo3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCodecInfoCount(This,guidType,pcCodecs) )
    ( (This)->lpVtbl -> GetCodecFormatCount(This,guidType,dwCodecIndex,pcFormat) )
    ( (This)->lpVtbl -> GetCodecFormat(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig) )
    ( (This)->lpVtbl -> GetCodecName(This,guidType,dwCodecIndex,wszName,pcchName) )
    ( (This)->lpVtbl -> GetCodecFormatDesc(This,guidType,dwCodecIndex,dwFormatIndex,ppIStreamConfig,wszDesc,pcchDesc) )
    ( (This)->lpVtbl -> GetCodecFormatProp(This,guidType,dwCodecIndex,dwFormatIndex,pszName,pType,pValue,pdwSize) )
    ( (This)->lpVtbl -> GetCodecProp(This,guidType,dwCodecIndex,pszName,pType,pValue,pdwSize) )
    ( (This)->lpVtbl -> SetCodecEnumerationSetting(This,guidType,dwCodecIndex,pszName,Type,pValue,dwSize) )
    ( (This)->lpVtbl -> GetCodecEnumerationSetting(This,guidType,dwCodecIndex,pszName,pType,pValue,pdwSize) )
EXTERN_C const IID IID_IWMLanguageList;
    typedef struct IWMLanguageListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMLanguageList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMLanguageList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMLanguageList * This);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageCount )(
            IWMLanguageList * This,
                        WORD *pwCount);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageDetails )(
            IWMLanguageList * This,
                       WORD wIndex,
                                 WCHAR *pwszLanguageString,
                            WORD *pcchLanguageStringLength);
        HRESULT ( STDMETHODCALLTYPE *AddLanguageByRFC1766String )(
            IWMLanguageList * This,
                       LPCWSTR_WMSDK_TYPE_SAFE pwszLanguageString,
                        WORD *pwIndex);
        END_INTERFACE
    } IWMLanguageListVtbl;
    interface IWMLanguageList
    {
        CONST_VTBL struct IWMLanguageListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLanguageCount(This,pwCount) )
    ( (This)->lpVtbl -> GetLanguageDetails(This,wIndex,pwszLanguageString,pcchLanguageStringLength) )
    ( (This)->lpVtbl -> AddLanguageByRFC1766String(This,pwszLanguageString,pwIndex) )
EXTERN_C const IID IID_IWMWriterPushSink;
    typedef struct IWMWriterPushSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWriterPushSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWriterPushSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWriterPushSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnHeader )(
            IWMWriterPushSink * This,
                       INSSBuffer *pHeader);
        HRESULT ( STDMETHODCALLTYPE *IsRealTime )(
            IWMWriterPushSink * This,
                        BOOL *pfRealTime);
        HRESULT ( STDMETHODCALLTYPE *AllocateDataUnit )(
            IWMWriterPushSink * This,
                       DWORD cbDataUnit,
                        INSSBuffer **ppDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnDataUnit )(
            IWMWriterPushSink * This,
                       INSSBuffer *pDataUnit);
        HRESULT ( STDMETHODCALLTYPE *OnEndWriting )(
            IWMWriterPushSink * This);
        HRESULT ( STDMETHODCALLTYPE *Connect )(
            IWMWriterPushSink * This,
                       LPCWSTR pwszURL,
                       LPCWSTR pwszTemplateURL,
                       BOOL fAutoDestroy);
        HRESULT ( STDMETHODCALLTYPE *Disconnect )(
            IWMWriterPushSink * This);
        HRESULT ( STDMETHODCALLTYPE *EndSession )(
            IWMWriterPushSink * This);
        END_INTERFACE
    } IWMWriterPushSinkVtbl;
    interface IWMWriterPushSink
    {
        CONST_VTBL struct IWMWriterPushSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnHeader(This,pHeader) )
    ( (This)->lpVtbl -> IsRealTime(This,pfRealTime) )
    ( (This)->lpVtbl -> AllocateDataUnit(This,cbDataUnit,ppDataUnit) )
    ( (This)->lpVtbl -> OnDataUnit(This,pDataUnit) )
    ( (This)->lpVtbl -> OnEndWriting(This) )
    ( (This)->lpVtbl -> Connect(This,pwszURL,pwszTemplateURL,fAutoDestroy) )
    ( (This)->lpVtbl -> Disconnect(This) )
    ( (This)->lpVtbl -> EndSession(This) )
EXTERN_C const IID IID_IWMDeviceRegistration;
    typedef struct IWMDeviceRegistrationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDeviceRegistration * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDeviceRegistration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDeviceRegistration * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterDevice )(
            IWMDeviceRegistration * This,
                       DWORD dwRegisterType,
                                BYTE *pbCertificate,
                       DWORD cbCertificate,
                       DRM_VAL16 SerialNumber,
                        IWMRegisteredDevice **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *UnregisterDevice )(
            IWMDeviceRegistration * This,
                       DWORD dwRegisterType,
                                BYTE *pbCertificate,
                       DWORD cbCertificate,
                       DRM_VAL16 SerialNumber);
        HRESULT ( STDMETHODCALLTYPE *GetRegistrationStats )(
            IWMDeviceRegistration * This,
                       DWORD dwRegisterType,
                        DWORD *pcRegisteredDevices);
        HRESULT ( STDMETHODCALLTYPE *GetFirstRegisteredDevice )(
            IWMDeviceRegistration * This,
                       DWORD dwRegisterType,
                        IWMRegisteredDevice **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetNextRegisteredDevice )(
            IWMDeviceRegistration * This,
                        IWMRegisteredDevice **ppDevice);
        HRESULT ( STDMETHODCALLTYPE *GetRegisteredDeviceByID )(
            IWMDeviceRegistration * This,
                       DWORD dwRegisterType,
                                BYTE *pbCertificate,
                       DWORD cbCertificate,
                       DRM_VAL16 SerialNumber,
                        IWMRegisteredDevice **ppDevice);
        END_INTERFACE
    } IWMDeviceRegistrationVtbl;
    interface IWMDeviceRegistration
    {
        CONST_VTBL struct IWMDeviceRegistrationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterDevice(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber,ppDevice) )
    ( (This)->lpVtbl -> UnregisterDevice(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber) )
    ( (This)->lpVtbl -> GetRegistrationStats(This,dwRegisterType,pcRegisteredDevices) )
    ( (This)->lpVtbl -> GetFirstRegisteredDevice(This,dwRegisterType,ppDevice) )
    ( (This)->lpVtbl -> GetNextRegisteredDevice(This,ppDevice) )
    ( (This)->lpVtbl -> GetRegisteredDeviceByID(This,dwRegisterType,pbCertificate,cbCertificate,SerialNumber,ppDevice) )
EXTERN_C const IID IID_IWMRegisteredDevice;
    typedef struct IWMRegisteredDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMRegisteredDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMRegisteredDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMRegisteredDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceSerialNumber )(
            IWMRegisteredDevice * This,
                        DRM_VAL16 *pSerialNumber);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceCertificate )(
            IWMRegisteredDevice * This,
                        INSSBuffer **ppCertificate);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceType )(
            IWMRegisteredDevice * This,
                        DWORD *pdwType);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCount )(
            IWMRegisteredDevice * This,
                        DWORD *pcAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByIndex )(
            IWMRegisteredDevice * This,
                       DWORD dwIndex,
                        BSTR *pbstrName,
                        BSTR *pbstrValue);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByName )(
            IWMRegisteredDevice * This,
                       BSTR bstrName,
                        BSTR *pbstrValue);
        HRESULT ( STDMETHODCALLTYPE *SetAttributeByName )(
            IWMRegisteredDevice * This,
                       BSTR bstrName,
                       BSTR bstrValue);
        HRESULT ( STDMETHODCALLTYPE *Approve )(
            IWMRegisteredDevice * This,
                       BOOL fApprove);
        HRESULT ( STDMETHODCALLTYPE *IsValid )(
            IWMRegisteredDevice * This,
                        BOOL *pfValid);
        HRESULT ( STDMETHODCALLTYPE *IsApproved )(
            IWMRegisteredDevice * This,
                        BOOL *pfApproved);
        HRESULT ( STDMETHODCALLTYPE *IsWmdrmCompliant )(
            IWMRegisteredDevice * This,
                        BOOL *pfCompliant);
        HRESULT ( STDMETHODCALLTYPE *IsOpened )(
            IWMRegisteredDevice * This,
                        BOOL *pfOpened);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            IWMRegisteredDevice * This);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMRegisteredDevice * This);
        END_INTERFACE
    } IWMRegisteredDeviceVtbl;
    interface IWMRegisteredDevice
    {
        CONST_VTBL struct IWMRegisteredDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDeviceSerialNumber(This,pSerialNumber) )
    ( (This)->lpVtbl -> GetDeviceCertificate(This,ppCertificate) )
    ( (This)->lpVtbl -> GetDeviceType(This,pdwType) )
    ( (This)->lpVtbl -> GetAttributeCount(This,pcAttributes) )
    ( (This)->lpVtbl -> GetAttributeByIndex(This,dwIndex,pbstrName,pbstrValue) )
    ( (This)->lpVtbl -> GetAttributeByName(This,bstrName,pbstrValue) )
    ( (This)->lpVtbl -> SetAttributeByName(This,bstrName,bstrValue) )
    ( (This)->lpVtbl -> Approve(This,fApprove) )
    ( (This)->lpVtbl -> IsValid(This,pfValid) )
    ( (This)->lpVtbl -> IsApproved(This,pfApproved) )
    ( (This)->lpVtbl -> IsWmdrmCompliant(This,pfCompliant) )
    ( (This)->lpVtbl -> IsOpened(This,pfOpened) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IWMProximityDetection;
    typedef struct IWMProximityDetectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMProximityDetection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMProximityDetection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMProximityDetection * This);
        HRESULT ( STDMETHODCALLTYPE *StartDetection )(
            IWMProximityDetection * This,
                                BYTE *pbRegistrationMsg,
                       DWORD cbRegistrationMsg,
                                BYTE *pbLocalAddress,
                       DWORD cbLocalAddress,
                       DWORD dwExtraPortsAllowed,
                        INSSBuffer **ppRegistrationResponseMsg,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        END_INTERFACE
    } IWMProximityDetectionVtbl;
    interface IWMProximityDetection
    {
        CONST_VTBL struct IWMProximityDetectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartDetection(This,pbRegistrationMsg,cbRegistrationMsg,pbLocalAddress,cbLocalAddress,dwExtraPortsAllowed,ppRegistrationResponseMsg,pCallback,pvContext) )
EXTERN_C const IID IID_IWMDRMMessageParser;
    typedef struct IWMDRMMessageParserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMMessageParser * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMMessageParser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMMessageParser * This);
        HRESULT ( STDMETHODCALLTYPE *ParseRegistrationReqMsg )(
            IWMDRMMessageParser * This,
                                BYTE *pbRegistrationReqMsg,
                       DWORD cbRegistrationReqMsg,
                        INSSBuffer **ppDeviceCert,
                        DRM_VAL16 *pDeviceSerialNumber);
        HRESULT ( STDMETHODCALLTYPE *ParseLicenseRequestMsg )(
            IWMDRMMessageParser * This,
                                BYTE *pbLicenseRequestMsg,
                       DWORD cbLicenseRequestMsg,
                        INSSBuffer **ppDeviceCert,
                        DRM_VAL16 *pDeviceSerialNumber,
                        BSTR *pbstrAction);
        END_INTERFACE
    } IWMDRMMessageParserVtbl;
    interface IWMDRMMessageParser
    {
        CONST_VTBL struct IWMDRMMessageParserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ParseRegistrationReqMsg(This,pbRegistrationReqMsg,cbRegistrationReqMsg,ppDeviceCert,pDeviceSerialNumber) )
    ( (This)->lpVtbl -> ParseLicenseRequestMsg(This,pbLicenseRequestMsg,cbLicenseRequestMsg,ppDeviceCert,pDeviceSerialNumber,pbstrAction) )
EXTERN_C const IID IID_IWMDRMTranscryptor;
    typedef struct IWMDRMTranscryptorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMTranscryptor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMTranscryptor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMTranscryptor * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IWMDRMTranscryptor * This,
                       BSTR bstrFileName,
                                BYTE *pbLicenseRequestMsg,
                       DWORD cbLicenseRequestMsg,
                        INSSBuffer **ppLicenseResponseMsg,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            IWMDRMTranscryptor * This,
                       QWORD hnsTime);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IWMDRMTranscryptor * This,
                       BYTE *pbData,
                       DWORD *pcbData);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMDRMTranscryptor * This);
        END_INTERFACE
    } IWMDRMTranscryptorVtbl;
    interface IWMDRMTranscryptor
    {
        CONST_VTBL struct IWMDRMTranscryptorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,bstrFileName,pbLicenseRequestMsg,cbLicenseRequestMsg,ppLicenseResponseMsg,pCallback,pvContext) )
    ( (This)->lpVtbl -> Seek(This,hnsTime) )
    ( (This)->lpVtbl -> Read(This,pbData,pcbData) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_IWMDRMTranscryptor2;
    typedef struct IWMDRMTranscryptor2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMTranscryptor2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMTranscryptor2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMTranscryptor2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IWMDRMTranscryptor2 * This,
                       BSTR bstrFileName,
                                BYTE *pbLicenseRequestMsg,
                       DWORD cbLicenseRequestMsg,
                        INSSBuffer **ppLicenseResponseMsg,
                       IWMStatusCallback *pCallback,
                       void *pvContext);
        HRESULT ( STDMETHODCALLTYPE *Seek )(
            IWMDRMTranscryptor2 * This,
                       QWORD hnsTime);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IWMDRMTranscryptor2 * This,
                       BYTE *pbData,
                       DWORD *pcbData);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IWMDRMTranscryptor2 * This);
        HRESULT ( STDMETHODCALLTYPE *SeekEx )(
            IWMDRMTranscryptor2 * This,
                       QWORD cnsStartTime,
                       QWORD cnsDuration,
                       float flRate,
                       BOOL fIncludeFileHeader);
        HRESULT ( STDMETHODCALLTYPE *ZeroAdjustTimestamps )(
            IWMDRMTranscryptor2 * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *GetSeekStartTime )(
            IWMDRMTranscryptor2 * This,
                        QWORD *pcnsTime);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            IWMDRMTranscryptor2 * This,
                        QWORD *pcnsDuration);
        END_INTERFACE
    } IWMDRMTranscryptor2Vtbl;
    interface IWMDRMTranscryptor2
    {
        CONST_VTBL struct IWMDRMTranscryptor2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,bstrFileName,pbLicenseRequestMsg,cbLicenseRequestMsg,ppLicenseResponseMsg,pCallback,pvContext) )
    ( (This)->lpVtbl -> Seek(This,hnsTime) )
    ( (This)->lpVtbl -> Read(This,pbData,pcbData) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> SeekEx(This,cnsStartTime,cnsDuration,flRate,fIncludeFileHeader) )
    ( (This)->lpVtbl -> ZeroAdjustTimestamps(This,fEnable) )
    ( (This)->lpVtbl -> GetSeekStartTime(This,pcnsTime) )
    ( (This)->lpVtbl -> GetDuration(This,pcnsDuration) )
EXTERN_C const IID IID_IWMDRMTranscryptionManager;
    typedef struct IWMDRMTranscryptionManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMDRMTranscryptionManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMDRMTranscryptionManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMDRMTranscryptionManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateTranscryptor )(
            IWMDRMTranscryptionManager * This,
                        IWMDRMTranscryptor **ppTranscryptor);
        END_INTERFACE
    } IWMDRMTranscryptionManagerVtbl;
    interface IWMDRMTranscryptionManager
    {
        CONST_VTBL struct IWMDRMTranscryptionManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateTranscryptor(This,ppTranscryptor) )
EXTERN_C const IID IID_IWMWatermarkInfo;
    typedef struct IWMWatermarkInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMWatermarkInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMWatermarkInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMWatermarkInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetWatermarkEntryCount )(
            IWMWatermarkInfo * This,
                       WMT_WATERMARK_ENTRY_TYPE wmetType,
                        DWORD *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *GetWatermarkEntry )(
            IWMWatermarkInfo * This,
                       WMT_WATERMARK_ENTRY_TYPE wmetType,
                       DWORD dwEntryNum,
                        WMT_WATERMARK_ENTRY *pEntry);
        END_INTERFACE
    } IWMWatermarkInfoVtbl;
    interface IWMWatermarkInfo
    {
        CONST_VTBL struct IWMWatermarkInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWatermarkEntryCount(This,wmetType,pdwCount) )
    ( (This)->lpVtbl -> GetWatermarkEntry(This,wmetType,dwEntryNum,pEntry) )
EXTERN_C const IID IID_IWMReaderAccelerator;
    typedef struct IWMReaderAcceleratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderAccelerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderAccelerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderAccelerator * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodecInterface )(
            IWMReaderAccelerator * This,
                       DWORD dwOutputNum,
                       REFIID riid,
                        void **ppvCodecInterface);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            IWMReaderAccelerator * This,
                       DWORD dwOutputNum,
                       WM_MEDIA_TYPE *pSubtype);
        END_INTERFACE
    } IWMReaderAcceleratorVtbl;
    interface IWMReaderAccelerator
    {
        CONST_VTBL struct IWMReaderAcceleratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCodecInterface(This,dwOutputNum,riid,ppvCodecInterface) )
    ( (This)->lpVtbl -> Notify(This,dwOutputNum,pSubtype) )
EXTERN_C const IID IID_IWMReaderTimecode;
    typedef struct IWMReaderTimecodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMReaderTimecode * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMReaderTimecode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMReaderTimecode * This);
        HRESULT ( STDMETHODCALLTYPE *GetTimecodeRangeCount )(
            IWMReaderTimecode * This,
                       WORD wStreamNum,
                        WORD *pwRangeCount);
        HRESULT ( STDMETHODCALLTYPE *GetTimecodeRangeBounds )(
            IWMReaderTimecode * This,
                       WORD wStreamNum,
                       WORD wRangeNum,
                        DWORD *pStartTimecode,
                        DWORD *pEndTimecode);
        END_INTERFACE
    } IWMReaderTimecodeVtbl;
    interface IWMReaderTimecode
    {
        CONST_VTBL struct IWMReaderTimecodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTimecodeRangeCount(This,wStreamNum,pwRangeCount) )
    ( (This)->lpVtbl -> GetTimecodeRangeBounds(This,wStreamNum,wRangeNum,pStartTimecode,pEndTimecode) )
EXTERN_C const IID IID_IWMAddressAccess;
    typedef struct IWMAddressAccessVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMAddressAccess * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMAddressAccess * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMAddressAccess * This);
        HRESULT ( STDMETHODCALLTYPE *GetAccessEntryCount )(
            IWMAddressAccess * This,
                       WM_AETYPE aeType,
                        DWORD *pcEntries);
        HRESULT ( STDMETHODCALLTYPE *GetAccessEntry )(
            IWMAddressAccess * This,
                       WM_AETYPE aeType,
                       DWORD dwEntryNum,
                        WM_ADDRESS_ACCESSENTRY *pAddrAccessEntry);
        HRESULT ( STDMETHODCALLTYPE *AddAccessEntry )(
            IWMAddressAccess * This,
                       WM_AETYPE aeType,
                       WM_ADDRESS_ACCESSENTRY *pAddrAccessEntry);
        HRESULT ( STDMETHODCALLTYPE *RemoveAccessEntry )(
            IWMAddressAccess * This,
                       WM_AETYPE aeType,
                       DWORD dwEntryNum);
        END_INTERFACE
    } IWMAddressAccessVtbl;
    interface IWMAddressAccess
    {
        CONST_VTBL struct IWMAddressAccessVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAccessEntryCount(This,aeType,pcEntries) )
    ( (This)->lpVtbl -> GetAccessEntry(This,aeType,dwEntryNum,pAddrAccessEntry) )
    ( (This)->lpVtbl -> AddAccessEntry(This,aeType,pAddrAccessEntry) )
    ( (This)->lpVtbl -> RemoveAccessEntry(This,aeType,dwEntryNum) )
EXTERN_C const IID IID_IWMAddressAccess2;
    typedef struct IWMAddressAccess2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMAddressAccess2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMAddressAccess2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMAddressAccess2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetAccessEntryCount )(
            IWMAddressAccess2 * This,
                       WM_AETYPE aeType,
                        DWORD *pcEntries);
        HRESULT ( STDMETHODCALLTYPE *GetAccessEntry )(
            IWMAddressAccess2 * This,
                       WM_AETYPE aeType,
                       DWORD dwEntryNum,
                        WM_ADDRESS_ACCESSENTRY *pAddrAccessEntry);
        HRESULT ( STDMETHODCALLTYPE *AddAccessEntry )(
            IWMAddressAccess2 * This,
                       WM_AETYPE aeType,
                       WM_ADDRESS_ACCESSENTRY *pAddrAccessEntry);
        HRESULT ( STDMETHODCALLTYPE *RemoveAccessEntry )(
            IWMAddressAccess2 * This,
                       WM_AETYPE aeType,
                       DWORD dwEntryNum);
        HRESULT ( STDMETHODCALLTYPE *GetAccessEntryEx )(
            IWMAddressAccess2 * This,
                       WM_AETYPE aeType,
                       DWORD dwEntryNum,
                        BSTR *pbstrAddress,
                        BSTR *pbstrMask);
        HRESULT ( STDMETHODCALLTYPE *AddAccessEntryEx )(
            IWMAddressAccess2 * This,
                       WM_AETYPE aeType,
                       BSTR bstrAddress,
                       BSTR bstrMask);
        END_INTERFACE
    } IWMAddressAccess2Vtbl;
    interface IWMAddressAccess2
    {
        CONST_VTBL struct IWMAddressAccess2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAccessEntryCount(This,aeType,pcEntries) )
    ( (This)->lpVtbl -> GetAccessEntry(This,aeType,dwEntryNum,pAddrAccessEntry) )
    ( (This)->lpVtbl -> AddAccessEntry(This,aeType,pAddrAccessEntry) )
    ( (This)->lpVtbl -> RemoveAccessEntry(This,aeType,dwEntryNum) )
    ( (This)->lpVtbl -> GetAccessEntryEx(This,aeType,dwEntryNum,pbstrAddress,pbstrMask) )
    ( (This)->lpVtbl -> AddAccessEntryEx(This,aeType,bstrAddress,bstrMask) )
EXTERN_C const IID IID_IWMImageInfo;
    typedef struct IWMImageInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMImageInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMImageInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMImageInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetImageCount )(
            IWMImageInfo * This,
                        DWORD *pcImages);
        HRESULT ( STDMETHODCALLTYPE *GetImage )(
            IWMImageInfo * This,
                       DWORD wIndex,
                            WORD *pcchMIMEType,
                                 WCHAR *pwszMIMEType,
                            WORD *pcchDescription,
                                 WCHAR *pwszDescription,
                        WORD *pImageType,
                            DWORD *pcbImageData,
                                 BYTE *pbImageData);
        END_INTERFACE
    } IWMImageInfoVtbl;
    interface IWMImageInfo
    {
        CONST_VTBL struct IWMImageInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetImageCount(This,pcImages) )
    ( (This)->lpVtbl -> GetImage(This,wIndex,pcchMIMEType,pwszMIMEType,pcchDescription,pwszDescription,pImageType,pcbImageData,pbImageData) )
EXTERN_C const IID IID_IWMLicenseRevocationAgent;
    typedef struct IWMLicenseRevocationAgentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWMLicenseRevocationAgent * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWMLicenseRevocationAgent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWMLicenseRevocationAgent * This);
        HRESULT ( STDMETHODCALLTYPE *GetLRBChallenge )(
            IWMLicenseRevocationAgent * This,
                       BYTE *pMachineID,
                       DWORD dwMachineIDLength,
                       BYTE *pChallenge,
                       DWORD dwChallengeLength,
                        BYTE *pChallengeOutput,
                        DWORD *pdwChallengeOutputLength);
        HRESULT ( STDMETHODCALLTYPE *ProcessLRB )(
            IWMLicenseRevocationAgent * This,
                       BYTE *pSignedLRB,
                       DWORD dwSignedLRBLength,
                        BYTE *pSignedACK,
                        DWORD *pdwSignedACKLength);
        END_INTERFACE
    } IWMLicenseRevocationAgentVtbl;
    interface IWMLicenseRevocationAgent
    {
        CONST_VTBL struct IWMLicenseRevocationAgentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLRBChallenge(This,pMachineID,dwMachineIDLength,pChallenge,dwChallengeLength,pChallengeOutput,pdwChallengeOutputLength) )
    ( (This)->lpVtbl -> ProcessLRB(This,pSignedLRB,dwSignedLRBLength,pSignedACK,pdwSignedACKLength) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0093_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wmsdkidl_0000_0093_v0_0_s_ifspec;
}
