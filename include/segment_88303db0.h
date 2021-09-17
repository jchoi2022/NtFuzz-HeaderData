#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMSVidRect IMSVidRect;
typedef interface IMSVidGraphSegmentContainer IMSVidGraphSegmentContainer;
typedef interface IMSVidGraphSegment IMSVidGraphSegment;
typedef interface IMSVidGraphSegmentUserInput IMSVidGraphSegmentUserInput;
typedef interface IMSVidCompositionSegment IMSVidCompositionSegment;
typedef interface IEnumMSVidGraphSegment IEnumMSVidGraphSegment;
typedef interface IMSVidVRGraphSegment IMSVidVRGraphSegment;
typedef interface IMSVidDevice IMSVidDevice;
typedef interface IMSVidDevice2 IMSVidDevice2;
typedef interface IMSVidInputDevice IMSVidInputDevice;
typedef interface IMSVidDeviceEvent IMSVidDeviceEvent;
typedef interface IMSVidInputDeviceEvent IMSVidInputDeviceEvent;
typedef interface IMSVidVideoInputDevice IMSVidVideoInputDevice;
typedef interface IMSVidPlayback IMSVidPlayback;
typedef interface IMSVidPlaybackEvent IMSVidPlaybackEvent;
typedef interface IMSVidTuner IMSVidTuner;
typedef interface IMSVidTunerEvent IMSVidTunerEvent;
typedef interface IMSVidAnalogTuner IMSVidAnalogTuner;
typedef interface IMSVidAnalogTuner2 IMSVidAnalogTuner2;
typedef interface IMSVidAnalogTunerEvent IMSVidAnalogTunerEvent;
typedef interface IMSVidFilePlayback IMSVidFilePlayback;
typedef interface IMSVidFilePlayback2 IMSVidFilePlayback2;
typedef interface IMSVidFilePlaybackEvent IMSVidFilePlaybackEvent;
typedef interface IMSVidWebDVD IMSVidWebDVD;
typedef interface IMSVidWebDVD2 IMSVidWebDVD2;
typedef interface IMSVidWebDVDEvent IMSVidWebDVDEvent;
typedef interface IMSVidWebDVDAdm IMSVidWebDVDAdm;
typedef interface IMSVidOutputDevice IMSVidOutputDevice;
typedef interface IMSVidOutputDeviceEvent IMSVidOutputDeviceEvent;
typedef interface IMSVidFeature IMSVidFeature;
typedef interface IMSVidFeatureEvent IMSVidFeatureEvent;
typedef interface IMSVidEncoder IMSVidEncoder;
typedef interface IMSVidClosedCaptioning IMSVidClosedCaptioning;
typedef interface IMSVidClosedCaptioning2 IMSVidClosedCaptioning2;
typedef interface IMSVidClosedCaptioning3 IMSVidClosedCaptioning3;
typedef interface IMSVidXDS IMSVidXDS;
typedef interface IMSVidXDSEvent IMSVidXDSEvent;
typedef interface IMSVidDataServices IMSVidDataServices;
typedef interface IMSVidDataServicesEvent IMSVidDataServicesEvent;
typedef interface IMSVidVideoRenderer IMSVidVideoRenderer;
typedef interface IMSVidVideoRendererEvent IMSVidVideoRendererEvent;
typedef interface IMSVidGenericSink IMSVidGenericSink;
typedef interface IMSVidGenericSink2 IMSVidGenericSink2;
typedef interface IMSVidStreamBufferRecordingControl IMSVidStreamBufferRecordingControl;
typedef interface IMSVidStreamBufferSink IMSVidStreamBufferSink;
typedef interface IMSVidStreamBufferSink2 IMSVidStreamBufferSink2;
typedef interface IMSVidStreamBufferSink3 IMSVidStreamBufferSink3;
typedef interface IMSVidStreamBufferSinkEvent IMSVidStreamBufferSinkEvent;
typedef interface IMSVidStreamBufferSinkEvent2 IMSVidStreamBufferSinkEvent2;
typedef interface IMSVidStreamBufferSinkEvent3 IMSVidStreamBufferSinkEvent3;
typedef interface IMSVidStreamBufferSinkEvent4 IMSVidStreamBufferSinkEvent4;
typedef interface IMSVidStreamBufferSource IMSVidStreamBufferSource;
typedef interface IMSVidStreamBufferSource2 IMSVidStreamBufferSource2;
typedef interface IMSVidStreamBufferSourceEvent IMSVidStreamBufferSourceEvent;
typedef interface IMSVidStreamBufferSourceEvent2 IMSVidStreamBufferSourceEvent2;
typedef interface IMSVidStreamBufferSourceEvent3 IMSVidStreamBufferSourceEvent3;
typedef interface IMSVidStreamBufferV2SourceEvent IMSVidStreamBufferV2SourceEvent;
typedef interface IMSVidVideoRenderer2 IMSVidVideoRenderer2;
typedef interface IMSVidVideoRendererEvent2 IMSVidVideoRendererEvent2;
typedef interface IMSVidVMR9 IMSVidVMR9;
typedef interface IMSVidEVR IMSVidEVR;
typedef interface IMSVidEVREvent IMSVidEVREvent;
typedef interface IMSVidAudioRenderer IMSVidAudioRenderer;
typedef interface IMSVidAudioRendererEvent IMSVidAudioRendererEvent;
typedef interface IMSVidAudioRendererEvent2 IMSVidAudioRendererEvent2;
typedef interface IMSVidInputDevices IMSVidInputDevices;
typedef interface IMSVidOutputDevices IMSVidOutputDevices;
typedef interface IMSVidVideoRendererDevices IMSVidVideoRendererDevices;
typedef interface IMSVidAudioRendererDevices IMSVidAudioRendererDevices;
typedef interface IMSVidFeatures IMSVidFeatures;
#include "oaidl.h"
#include "ocidl.h"
#include "strmif.h"
#include "tuner.h"
#include "tvratings.h"
#include "evr.h"
extern "C"{
       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <olectl.h>
typedef
enum SegDispidList
    {
        dispidName = 0,
        dispidStatus = ( dispidName + 1 ) ,
        dispidDevImageSourceWidth = ( dispidStatus + 1 ) ,
        dispidDevImageSourceHeight = ( dispidDevImageSourceWidth + 1 ) ,
        dispidDevCountryCode = ( dispidDevImageSourceHeight + 1 ) ,
        dispidDevOverScan = ( dispidDevCountryCode + 1 ) ,
        dispidSegment = ( dispidDevOverScan + 1 ) ,
        dispidDevVolume = ( dispidSegment + 1 ) ,
        dispidDevBalance = ( dispidDevVolume + 1 ) ,
        dispidDevPower = ( dispidDevBalance + 1 ) ,
        dispidTuneChan = ( dispidDevPower + 1 ) ,
        dispidDevVideoSubchannel = ( dispidTuneChan + 1 ) ,
        dispidDevAudioSubchannel = ( dispidDevVideoSubchannel + 1 ) ,
        dispidChannelAvailable = ( dispidDevAudioSubchannel + 1 ) ,
        dispidDevVideoFrequency = ( dispidChannelAvailable + 1 ) ,
        dispidDevAudioFrequency = ( dispidDevVideoFrequency + 1 ) ,
        dispidCount = ( dispidDevAudioFrequency + 1 ) ,
        dispidDevFileName = ( dispidCount + 1 ) ,
        dispidVisible = ( dispidDevFileName + 1 ) ,
        dispidOwner = ( dispidVisible + 1 ) ,
        dispidMessageDrain = ( dispidOwner + 1 ) ,
        dispidViewable = ( dispidMessageDrain + 1 ) ,
        dispidDevView = ( dispidViewable + 1 ) ,
        dispidKSCat = ( dispidDevView + 1 ) ,
        dispidCLSID = ( dispidKSCat + 1 ) ,
        dispid_KSCat = ( dispidCLSID + 1 ) ,
        dispid_CLSID = ( dispid_KSCat + 1 ) ,
        dispidTune = ( dispid_CLSID + 1 ) ,
        dispidTS = ( dispidTune + 1 ) ,
        dispidDevSAP = ( dispidTS + 1 ) ,
        dispidClip = ( dispidDevSAP + 1 ) ,
        dispidRequestedClipRect = ( dispidClip + 1 ) ,
        dispidClippedSourceRect = ( dispidRequestedClipRect + 1 ) ,
        dispidAvailableSourceRect = ( dispidClippedSourceRect + 1 ) ,
        dispidMediaPosition = ( dispidAvailableSourceRect + 1 ) ,
        dispidDevRun = ( dispidMediaPosition + 1 ) ,
        dispidDevPause = ( dispidDevRun + 1 ) ,
        dispidDevStop = ( dispidDevPause + 1 ) ,
        dispidCCEnable = ( dispidDevStop + 1 ) ,
        dispidDevStep = ( dispidCCEnable + 1 ) ,
        dispidDevCanStep = ( dispidDevStep + 1 ) ,
        dispidSourceSize = ( dispidDevCanStep + 1 ) ,
        dispid_playtitle = ( dispidSourceSize + 1 ) ,
        dispid_playchapterintitle = ( dispid_playtitle + 1 ) ,
        dispid_playchapter = ( dispid_playchapterintitle + 1 ) ,
        dispid_playchaptersautostop = ( dispid_playchapter + 1 ) ,
        dispid_playattime = ( dispid_playchaptersautostop + 1 ) ,
        dispid_playattimeintitle = ( dispid_playattime + 1 ) ,
        dispid_playperiodintitleautostop = ( dispid_playattimeintitle + 1 ) ,
        dispid_replaychapter = ( dispid_playperiodintitleautostop + 1 ) ,
        dispid_playprevchapter = ( dispid_replaychapter + 1 ) ,
        dispid_playnextchapter = ( dispid_playprevchapter + 1 ) ,
        dispid_playforwards = ( dispid_playnextchapter + 1 ) ,
        dispid_playbackwards = ( dispid_playforwards + 1 ) ,
        dispid_stilloff = ( dispid_playbackwards + 1 ) ,
        dispid_audiolanguage = ( dispid_stilloff + 1 ) ,
        dispid_showmenu = ( dispid_audiolanguage + 1 ) ,
        dispid_resume = ( dispid_showmenu + 1 ) ,
        dispid_returnfromsubmenu = ( dispid_resume + 1 ) ,
        dispid_buttonsavailable = ( dispid_returnfromsubmenu + 1 ) ,
        dispid_currentbutton = ( dispid_buttonsavailable + 1 ) ,
        dispid_SelectAndActivateButton = ( dispid_currentbutton + 1 ) ,
        dispid_ActivateButton = ( dispid_SelectAndActivateButton + 1 ) ,
        dispid_SelectRightButton = ( dispid_ActivateButton + 1 ) ,
        dispid_SelectLeftButton = ( dispid_SelectRightButton + 1 ) ,
        dispid_SelectLowerButton = ( dispid_SelectLeftButton + 1 ) ,
        dispid_SelectUpperButton = ( dispid_SelectLowerButton + 1 ) ,
        dispid_ActivateAtPosition = ( dispid_SelectUpperButton + 1 ) ,
        dispid_SelectAtPosition = ( dispid_ActivateAtPosition + 1 ) ,
        dispid_ButtonAtPosition = ( dispid_SelectAtPosition + 1 ) ,
        dispid_NumberOfChapters = ( dispid_ButtonAtPosition + 1 ) ,
        dispid_TotalTitleTime = ( dispid_NumberOfChapters + 1 ) ,
        dispid_TitlesAvailable = ( dispid_TotalTitleTime + 1 ) ,
        dispid_VolumesAvailable = ( dispid_TitlesAvailable + 1 ) ,
        dispid_CurrentVolume = ( dispid_VolumesAvailable + 1 ) ,
        dispid_CurrentDiscSide = ( dispid_CurrentVolume + 1 ) ,
        dispid_CurrentDomain = ( dispid_CurrentDiscSide + 1 ) ,
        dispid_CurrentChapter = ( dispid_CurrentDomain + 1 ) ,
        dispid_CurrentTitle = ( dispid_CurrentChapter + 1 ) ,
        dispid_CurrentTime = ( dispid_CurrentTitle + 1 ) ,
        dispid_FramesPerSecond = ( dispid_CurrentTime + 1 ) ,
        dispid_DVDTimeCode2bstr = ( dispid_FramesPerSecond + 1 ) ,
        dispid_DVDDirectory = ( dispid_DVDTimeCode2bstr + 1 ) ,
        dispid_IsSubpictureStreamEnabled = ( dispid_DVDDirectory + 1 ) ,
        dispid_IsAudioStreamEnabled = ( dispid_IsSubpictureStreamEnabled + 1 ) ,
        dispid_CurrentSubpictureStream = ( dispid_IsAudioStreamEnabled + 1 ) ,
        dispid_SubpictureLanguage = ( dispid_CurrentSubpictureStream + 1 ) ,
        dispid_CurrentAudioStream = ( dispid_SubpictureLanguage + 1 ) ,
        dispid_AudioStreamsAvailable = ( dispid_CurrentAudioStream + 1 ) ,
        dispid_AnglesAvailable = ( dispid_AudioStreamsAvailable + 1 ) ,
        dispid_CurrentAngle = ( dispid_AnglesAvailable + 1 ) ,
        dispid_CCActive = ( dispid_CurrentAngle + 1 ) ,
        dispid_CurrentCCService = ( dispid_CCActive + 1 ) ,
        dispid_SubpictureStreamsAvailable = ( dispid_CurrentCCService + 1 ) ,
        dispid_SubpictureOn = ( dispid_SubpictureStreamsAvailable + 1 ) ,
        dispid_DVDUniqueID = ( dispid_SubpictureOn + 1 ) ,
        dispid_EnableResetOnStop = ( dispid_DVDUniqueID + 1 ) ,
        dispid_AcceptParentalLevelChange = ( dispid_EnableResetOnStop + 1 ) ,
        dispid_NotifyParentalLevelChange = ( dispid_AcceptParentalLevelChange + 1 ) ,
        dispid_SelectParentalCountry = ( dispid_NotifyParentalLevelChange + 1 ) ,
        dispid_SelectParentalLevel = ( dispid_SelectParentalCountry + 1 ) ,
        dispid_TitleParentalLevels = ( dispid_SelectParentalLevel + 1 ) ,
        dispid_PlayerParentalCountry = ( dispid_TitleParentalLevels + 1 ) ,
        dispid_PlayerParentalLevel = ( dispid_PlayerParentalCountry + 1 ) ,
        dispid_Eject = ( dispid_PlayerParentalLevel + 1 ) ,
        dispid_UOPValid = ( dispid_Eject + 1 ) ,
        dispid_SPRM = ( dispid_UOPValid + 1 ) ,
        dispid_GPRM = ( dispid_SPRM + 1 ) ,
        dispid_DVDTextStringType = ( dispid_GPRM + 1 ) ,
        dispid_DVDTextString = ( dispid_DVDTextStringType + 1 ) ,
        dispid_DVDTextNumberOfStrings = ( dispid_DVDTextString + 1 ) ,
        dispid_DVDTextNumberOfLanguages = ( dispid_DVDTextNumberOfStrings + 1 ) ,
        dispid_DVDTextLanguageLCID = ( dispid_DVDTextNumberOfLanguages + 1 ) ,
        dispid_RegionChange = ( dispid_DVDTextLanguageLCID + 1 ) ,
        dispid_DVDAdm = ( dispid_RegionChange + 1 ) ,
        dispid_DeleteBookmark = ( dispid_DVDAdm + 1 ) ,
        dispid_RestoreBookmark = ( dispid_DeleteBookmark + 1 ) ,
        dispid_SaveBookmark = ( dispid_RestoreBookmark + 1 ) ,
        dispid_SelectDefaultAudioLanguage = ( dispid_SaveBookmark + 1 ) ,
        dispid_SelectDefaultSubpictureLanguage = ( dispid_SelectDefaultAudioLanguage + 1 ) ,
        dispid_PreferredSubpictureStream = ( dispid_SelectDefaultSubpictureLanguage + 1 ) ,
        dispid_DefaultMenuLanguage = ( dispid_PreferredSubpictureStream + 1 ) ,
        dispid_DefaultSubpictureLanguage = ( dispid_DefaultMenuLanguage + 1 ) ,
        dispid_DefaultAudioLanguage = ( dispid_DefaultSubpictureLanguage + 1 ) ,
        dispid_DefaultSubpictureLanguageExt = ( dispid_DefaultAudioLanguage + 1 ) ,
        dispid_DefaultAudioLanguageExt = ( dispid_DefaultSubpictureLanguageExt + 1 ) ,
        dispid_LanguageFromLCID = ( dispid_DefaultAudioLanguageExt + 1 ) ,
        dispid_KaraokeAudioPresentationMode = ( dispid_LanguageFromLCID + 1 ) ,
        dispid_KaraokeChannelContent = ( dispid_KaraokeAudioPresentationMode + 1 ) ,
        dispid_KaraokeChannelAssignment = ( dispid_KaraokeChannelContent + 1 ) ,
        dispid_RestorePreferredSettings = ( dispid_KaraokeChannelAssignment + 1 ) ,
        dispid_ButtonRect = ( dispid_RestorePreferredSettings + 1 ) ,
        dispid_DVDScreenInMouseCoordinates = ( dispid_ButtonRect + 1 ) ,
        dispid_CustomCompositorClass = ( dispid_DVDScreenInMouseCoordinates + 1 ) ,
        dispidCustomCompositorClass = ( dispid_CustomCompositorClass + 1 ) ,
        dispid_CustomCompositor = ( dispidCustomCompositorClass + 1 ) ,
        dispidMixerBitmap = ( dispid_CustomCompositor + 1 ) ,
        dispid_MixerBitmap = ( dispidMixerBitmap + 1 ) ,
        dispidMixerBitmapOpacity = ( dispid_MixerBitmap + 1 ) ,
        dispidMixerBitmapRect = ( dispidMixerBitmapOpacity + 1 ) ,
        dispidSetupMixerBitmap = ( dispidMixerBitmapRect + 1 ) ,
        dispidUsingOverlay = ( dispidSetupMixerBitmap + 1 ) ,
        dispidDisplayChange = ( dispidUsingOverlay + 1 ) ,
        dispidRePaint = ( dispidDisplayChange + 1 ) ,
        dispid_IsEqualDevice = ( dispidRePaint + 1 ) ,
        dispidrate = ( dispid_IsEqualDevice + 1 ) ,
        dispidposition = ( dispidrate + 1 ) ,
        dispidpositionmode = ( dispidposition + 1 ) ,
        dispidlength = ( dispidpositionmode + 1 ) ,
        dispidChangePassword = ( dispidlength + 1 ) ,
        dispidSaveParentalLevel = ( dispidChangePassword + 1 ) ,
        dispidSaveParentalCountry = ( dispidSaveParentalLevel + 1 ) ,
        dispidConfirmPassword = ( dispidSaveParentalCountry + 1 ) ,
        dispidGetParentalLevel = ( dispidConfirmPassword + 1 ) ,
        dispidGetParentalCountry = ( dispidGetParentalLevel + 1 ) ,
        dispidDefaultAudioLCID = ( dispidGetParentalCountry + 1 ) ,
        dispidDefaultSubpictureLCID = ( dispidDefaultAudioLCID + 1 ) ,
        dispidDefaultMenuLCID = ( dispidDefaultSubpictureLCID + 1 ) ,
        dispidBookmarkOnStop = ( dispidDefaultMenuLCID + 1 ) ,
        dispidMaxVidRect = ( dispidBookmarkOnStop + 1 ) ,
        dispidMinVidRect = ( dispidMaxVidRect + 1 ) ,
        dispidCapture = ( dispidMinVidRect + 1 ) ,
        dispid_DecimateInput = ( dispidCapture + 1 ) ,
        dispidAlloctor = ( dispid_DecimateInput + 1 ) ,
        dispid_Allocator = ( dispidAlloctor + 1 ) ,
        dispidAllocPresentID = ( dispid_Allocator + 1 ) ,
        dispidSetAllocator = ( dispidAllocPresentID + 1 ) ,
        dispid_SetAllocator = ( dispidSetAllocator + 1 ) ,
        dispidStreamBufferSinkName = ( dispid_SetAllocator + 1 ) ,
        dispidStreamBufferSourceName = ( dispidStreamBufferSinkName + 1 ) ,
        dispidStreamBufferContentRecording = ( dispidStreamBufferSourceName + 1 ) ,
        dispidStreamBufferReferenceRecording = ( dispidStreamBufferContentRecording + 1 ) ,
        dispidstarttime = ( dispidStreamBufferReferenceRecording + 1 ) ,
        dispidstoptime = ( dispidstarttime + 1 ) ,
        dispidrecordingstopped = ( dispidstoptime + 1 ) ,
        dispidrecordingstarted = ( dispidrecordingstopped + 1 ) ,
        dispidNameSetLock = ( dispidrecordingstarted + 1 ) ,
        dispidrecordingtype = ( dispidNameSetLock + 1 ) ,
        dispidstart = ( dispidrecordingtype + 1 ) ,
        dispidRecordingAttribute = ( dispidstart + 1 ) ,
        dispid_RecordingAttribute = ( dispidRecordingAttribute + 1 ) ,
        dispidSBEConfigure = ( dispid_RecordingAttribute + 1 ) ,
        dispid_CurrentRatings = ( dispidSBEConfigure + 1 ) ,
        dispid_MaxRatingsLevel = ( dispid_CurrentRatings + 1 ) ,
        dispid_audioencoderint = ( dispid_MaxRatingsLevel + 1 ) ,
        dispid_videoencoderint = ( dispid_audioencoderint + 1 ) ,
        dispidService = ( dispid_videoencoderint + 1 ) ,
        dispid_BlockUnrated = ( dispidService + 1 ) ,
        dispid_UnratedDelay = ( dispid_BlockUnrated + 1 ) ,
        dispid_SuppressEffects = ( dispid_UnratedDelay + 1 ) ,
        dispidsbesource = ( dispid_SuppressEffects + 1 ) ,
        dispidSetSinkFilter = ( dispidsbesource + 1 ) ,
        dispid_SinkStreams = ( dispidSetSinkFilter + 1 ) ,
        dispidTVFormats = ( dispid_SinkStreams + 1 ) ,
        dispidModes = ( dispidTVFormats + 1 ) ,
        dispidAuxInputs = ( dispidModes + 1 ) ,
        dispidTeleTextFilter = ( dispidAuxInputs + 1 ) ,
        dispid_channelchangeint = ( dispidTeleTextFilter + 1 ) ,
        dispidUnlockProfile = ( dispid_channelchangeint + 1 ) ,
        dispid_AddFilter = ( dispidUnlockProfile + 1 ) ,
        dispidSetMinSeek = ( dispid_AddFilter + 1 ) ,
        dispidRateEx = ( dispidSetMinSeek + 1 ) ,
        dispidaudiocounter = ( dispidRateEx + 1 ) ,
        dispidvideocounter = ( dispidaudiocounter + 1 ) ,
        dispidcccounter = ( dispidvideocounter + 1 ) ,
        dispidwstcounter = ( dispidcccounter + 1 ) ,
        dispid_audiocounter = ( dispidwstcounter + 1 ) ,
        dispid_videocounter = ( dispid_audiocounter + 1 ) ,
        dispid_cccounter = ( dispid_videocounter + 1 ) ,
        dispid_wstcounter = ( dispid_cccounter + 1 ) ,
        dispidaudioanalysis = ( dispid_wstcounter + 1 ) ,
        dispidvideoanalysis = ( dispidaudioanalysis + 1 ) ,
        dispiddataanalysis = ( dispidvideoanalysis + 1 ) ,
        dispidaudio_analysis = ( dispiddataanalysis + 1 ) ,
        dispidvideo_analysis = ( dispidaudio_analysis + 1 ) ,
        dispiddata_analysis = ( dispidvideo_analysis + 1 ) ,
        dispid_resetFilterList = ( dispiddata_analysis + 1 ) ,
        dispidDevicePath = ( dispid_resetFilterList + 1 ) ,
        dispid_SourceFilter = ( dispidDevicePath + 1 ) ,
        dispid__SourceFilter = ( dispid_SourceFilter + 1 ) ,
        dispidUserEvent = ( dispid__SourceFilter + 1 ) ,
        dispid_Bookmark = ( dispidUserEvent + 1 ) ,
        LastReservedDeviceDispid = 0x3fff
    } SegDispidList;
typedef
enum SegEventidList
    {
        eventidStateChange = 0,
        eventidOnTuneChanged = ( eventidStateChange + 1 ) ,
        eventidEndOfMedia = ( eventidOnTuneChanged + 1 ) ,
        eventidDVDNotify = ( eventidEndOfMedia + 1 ) ,
        eventidPlayForwards = ( eventidDVDNotify + 1 ) ,
        eventidPlayBackwards = ( eventidPlayForwards + 1 ) ,
        eventidShowMenu = ( eventidPlayBackwards + 1 ) ,
        eventidResume = ( eventidShowMenu + 1 ) ,
        eventidSelectOrActivateButton = ( eventidResume + 1 ) ,
        eventidStillOff = ( eventidSelectOrActivateButton + 1 ) ,
        eventidPauseOn = ( eventidStillOff + 1 ) ,
        eventidChangeCurrentAudioStream = ( eventidPauseOn + 1 ) ,
        eventidChangeCurrentSubpictureStream = ( eventidChangeCurrentAudioStream + 1 ) ,
        eventidChangeCurrentAngle = ( eventidChangeCurrentSubpictureStream + 1 ) ,
        eventidPlayAtTimeInTitle = ( eventidChangeCurrentAngle + 1 ) ,
        eventidPlayAtTime = ( eventidPlayAtTimeInTitle + 1 ) ,
        eventidPlayChapterInTitle = ( eventidPlayAtTime + 1 ) ,
        eventidPlayChapter = ( eventidPlayChapterInTitle + 1 ) ,
        eventidReplayChapter = ( eventidPlayChapter + 1 ) ,
        eventidPlayNextChapter = ( eventidReplayChapter + 1 ) ,
        eventidStop = ( eventidPlayNextChapter + 1 ) ,
        eventidReturnFromSubmenu = ( eventidStop + 1 ) ,
        eventidPlayTitle = ( eventidReturnFromSubmenu + 1 ) ,
        eventidPlayPrevChapter = ( eventidPlayTitle + 1 ) ,
        eventidChangeKaraokePresMode = ( eventidPlayPrevChapter + 1 ) ,
        eventidChangeVideoPresMode = ( eventidChangeKaraokePresMode + 1 ) ,
        eventidOverlayUnavailable = ( eventidChangeVideoPresMode + 1 ) ,
        eventidSinkCertificateFailure = ( eventidOverlayUnavailable + 1 ) ,
        eventidSinkCertificateSuccess = ( eventidSinkCertificateFailure + 1 ) ,
        eventidSourceCertificateFailure = ( eventidSinkCertificateSuccess + 1 ) ,
        eventidSourceCertificateSuccess = ( eventidSourceCertificateFailure + 1 ) ,
        eventidRatingsBlocked = ( eventidSourceCertificateSuccess + 1 ) ,
        eventidRatingsUnlocked = ( eventidRatingsBlocked + 1 ) ,
        eventidRatingsChanged = ( eventidRatingsUnlocked + 1 ) ,
        eventidWriteFailure = ( eventidRatingsChanged + 1 ) ,
        eventidTimeHole = ( eventidWriteFailure + 1 ) ,
        eventidStaleDataRead = ( eventidTimeHole + 1 ) ,
        eventidContentBecomingStale = ( eventidStaleDataRead + 1 ) ,
        eventidStaleFileDeleted = ( eventidContentBecomingStale + 1 ) ,
        eventidEncryptionOn = ( eventidStaleFileDeleted + 1 ) ,
        eventidEncryptionOff = ( eventidEncryptionOn + 1 ) ,
        eventidRateChange = ( eventidEncryptionOff + 1 ) ,
        eventidLicenseChange = ( eventidRateChange + 1 ) ,
        eventidCOPPBlocked = ( eventidLicenseChange + 1 ) ,
        eventidCOPPUnblocked = ( eventidCOPPBlocked + 1 ) ,
        dispidlicenseerrorcode = ( eventidCOPPUnblocked + 1 ) ,
        eventidBroadcastEvent = ( dispidlicenseerrorcode + 1 ) ,
        eventidBroadcastEventEx = ( eventidBroadcastEvent + 1 ) ,
        eventidContentPrimarilyAudio = ( eventidBroadcastEventEx + 1 ) ,
        dispidAVDecAudioDualMonoEvent = ( eventidContentPrimarilyAudio + 1 ) ,
        dispidAVAudioSampleRateEvent = ( dispidAVDecAudioDualMonoEvent + 1 ) ,
        dispidAVAudioChannelConfigEvent = ( dispidAVAudioSampleRateEvent + 1 ) ,
        dispidAVAudioChannelCountEvent = ( dispidAVAudioChannelConfigEvent + 1 ) ,
        dispidAVDecCommonMeanBitRateEvent = ( dispidAVAudioChannelCountEvent + 1 ) ,
        dispidAVDDSurroundModeEvent = ( dispidAVDecCommonMeanBitRateEvent + 1 ) ,
        dispidAVDecCommonInputFormatEvent = ( dispidAVDDSurroundModeEvent + 1 ) ,
        dispidAVDecCommonOutputFormatEvent = ( dispidAVDecCommonInputFormatEvent + 1 ) ,
        eventidWriteFailureClear = ( dispidAVDecCommonOutputFormatEvent + 1 ) ,
        LastReservedDeviceEvent = 0x3fff
    } SegEventidList;
typedef
enum PositionModeList
    {
        FrameMode = 0,
        TenthsSecondsMode = ( FrameMode + 1 )
    } PositionModeList;
typedef
enum RecordingType
    {
        CONTENT = 0,
        REFERENCE = ( CONTENT + 1 )
    } RecordingType;
typedef
enum MSVidCCService
    {
        None = 0,
        Caption1 = ( None + 1 ) ,
        Caption2 = ( Caption1 + 1 ) ,
        Text1 = ( Caption2 + 1 ) ,
        Text2 = ( Text1 + 1 ) ,
        XDS = ( Text2 + 1 )
    } MSVidCCService;
typedef
enum MSVidSinkStreams
    {
        MSVidSink_Video = 1,
        MSVidSink_Audio = 2,
        MSVidSink_Other = 4
    } MSVidSinkStreams;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSVidRect;
    typedef struct IMSVidRectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidRect * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidRect * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidRect * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidRect * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidRect * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidRect * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidRect * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in IMSVidRect * This,
                                __RPC__out LONG *TopVal);
                                    HRESULT ( STDMETHODCALLTYPE *put_Top )(
            __RPC__in IMSVidRect * This,
                       LONG TopVal);
                                    HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in IMSVidRect * This,
                                __RPC__out LONG *LeftVal);
                                    HRESULT ( STDMETHODCALLTYPE *put_Left )(
            __RPC__in IMSVidRect * This,
                       LONG LeftVal);
                                    HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IMSVidRect * This,
                                __RPC__out LONG *WidthVal);
                                    HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in IMSVidRect * This,
                       LONG WidthVal);
                                    HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IMSVidRect * This,
                                __RPC__out LONG *HeightVal);
                                    HRESULT ( STDMETHODCALLTYPE *put_Height )(
            __RPC__in IMSVidRect * This,
                       LONG HeightVal);
                                    HRESULT ( STDMETHODCALLTYPE *get_HWnd )(
            __RPC__in IMSVidRect * This,
                                __RPC__deref_out_opt HWND *HWndVal);
                                    HRESULT ( STDMETHODCALLTYPE *put_HWnd )(
            __RPC__in IMSVidRect * This,
                       __RPC__in HWND HWndVal);
                                    HRESULT ( STDMETHODCALLTYPE *put_Rect )(
            __RPC__in IMSVidRect * This,
                       __RPC__in_opt IMSVidRect *RectVal);
        END_INTERFACE
    } IMSVidRectVtbl;
    interface IMSVidRect
    {
        CONST_VTBL struct IMSVidRectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Top(This,TopVal) )
    ( (This)->lpVtbl -> put_Top(This,TopVal) )
    ( (This)->lpVtbl -> get_Left(This,LeftVal) )
    ( (This)->lpVtbl -> put_Left(This,LeftVal) )
    ( (This)->lpVtbl -> get_Width(This,WidthVal) )
    ( (This)->lpVtbl -> put_Width(This,WidthVal) )
    ( (This)->lpVtbl -> get_Height(This,HeightVal) )
    ( (This)->lpVtbl -> put_Height(This,HeightVal) )
    ( (This)->lpVtbl -> get_HWnd(This,HWndVal) )
    ( (This)->lpVtbl -> put_HWnd(This,HWndVal) )
    ( (This)->lpVtbl -> put_Rect(This,RectVal) )
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSVidGraphSegmentContainer;
    typedef struct IMSVidGraphSegmentContainerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidGraphSegmentContainer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidGraphSegmentContainer * This);
                                    HRESULT ( STDMETHODCALLTYPE *get_Graph )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IGraphBuilder **ppGraph);
                                    HRESULT ( STDMETHODCALLTYPE *get_Input )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IMSVidGraphSegment **ppInput);
                                    HRESULT ( STDMETHODCALLTYPE *get_Outputs )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IEnumMSVidGraphSegment **ppOutputs);
                                    HRESULT ( STDMETHODCALLTYPE *get_VideoRenderer )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IMSVidGraphSegment **ppVR);
                                    HRESULT ( STDMETHODCALLTYPE *get_AudioRenderer )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IMSVidGraphSegment **ppAR);
                                    HRESULT ( STDMETHODCALLTYPE *get_Features )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IEnumMSVidGraphSegment **ppFeatures);
                                    HRESULT ( STDMETHODCALLTYPE *get_Composites )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IEnumMSVidGraphSegment **ppComposites);
                                    HRESULT ( STDMETHODCALLTYPE *get_ParentContainer )(
            __RPC__in IMSVidGraphSegmentContainer * This,
                        __RPC__deref_out_opt IUnknown **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *Decompose )(
            __RPC__in IMSVidGraphSegmentContainer * This,
            __RPC__in_opt IMSVidGraphSegment *pSegment);
        HRESULT ( STDMETHODCALLTYPE *IsWindowless )(
            __RPC__in IMSVidGraphSegmentContainer * This);
        HRESULT ( STDMETHODCALLTYPE *GetFocus )(
            __RPC__in IMSVidGraphSegmentContainer * This);
        END_INTERFACE
    } IMSVidGraphSegmentContainerVtbl;
    interface IMSVidGraphSegmentContainer
    {
        CONST_VTBL struct IMSVidGraphSegmentContainerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Graph(This,ppGraph) )
    ( (This)->lpVtbl -> get_Input(This,ppInput) )
    ( (This)->lpVtbl -> get_Outputs(This,ppOutputs) )
    ( (This)->lpVtbl -> get_VideoRenderer(This,ppVR) )
    ( (This)->lpVtbl -> get_AudioRenderer(This,ppAR) )
    ( (This)->lpVtbl -> get_Features(This,ppFeatures) )
    ( (This)->lpVtbl -> get_Composites(This,ppComposites) )
    ( (This)->lpVtbl -> get_ParentContainer(This,ppContainer) )
    ( (This)->lpVtbl -> Decompose(This,pSegment) )
    ( (This)->lpVtbl -> IsWindowless(This) )
    ( (This)->lpVtbl -> GetFocus(This) )
typedef
enum MSVidSegmentType
    {
        MSVidSEG_SOURCE = 0,
        MSVidSEG_XFORM = ( MSVidSEG_SOURCE + 1 ) ,
        MSVidSEG_DEST = ( MSVidSEG_XFORM + 1 )
    } MSVidSegmentType;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSVidGraphSegment;
    typedef struct IMSVidGraphSegmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidGraphSegment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidGraphSegment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IMSVidGraphSegment * This,
                        __RPC__out CLSID *pClassID);
                        HRESULT ( STDMETHODCALLTYPE *get_Init )(
            __RPC__in IMSVidGraphSegment * This,
                                __RPC__deref_out_opt IUnknown **pInit);
                        HRESULT ( STDMETHODCALLTYPE *put_Init )(
            __RPC__in IMSVidGraphSegment * This,
                       __RPC__in_opt IUnknown *pInit);
        HRESULT ( STDMETHODCALLTYPE *EnumFilters )(
            __RPC__in IMSVidGraphSegment * This,
                        __RPC__deref_out_opt IEnumFilters **pNewEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Container )(
            __RPC__in IMSVidGraphSegment * This,
                                __RPC__deref_out_opt IMSVidGraphSegmentContainer **ppCtl);
                                    HRESULT ( STDMETHODCALLTYPE *put_Container )(
            __RPC__in IMSVidGraphSegment * This,
                       __RPC__in_opt IMSVidGraphSegmentContainer *pCtl);
                                    HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IMSVidGraphSegment * This,
                                __RPC__out MSVidSegmentType *pType);
                                    HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidGraphSegment * This,
                                __RPC__out GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *Build )(
            __RPC__in IMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostBuild )(
            __RPC__in IMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PreRun )(
            __RPC__in IMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostRun )(
            __RPC__in IMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PreStop )(
            __RPC__in IMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostStop )(
            __RPC__in IMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *OnEventNotify )(
            __RPC__in IMSVidGraphSegment * This,
            LONG lEventCode,
            LONG_PTR lEventParm1,
            LONG_PTR lEventParm2);
        HRESULT ( STDMETHODCALLTYPE *Decompose )(
            __RPC__in IMSVidGraphSegment * This);
        END_INTERFACE
    } IMSVidGraphSegmentVtbl;
    interface IMSVidGraphSegment
    {
        CONST_VTBL struct IMSVidGraphSegmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> get_Init(This,pInit) )
    ( (This)->lpVtbl -> put_Init(This,pInit) )
    ( (This)->lpVtbl -> EnumFilters(This,pNewEnum) )
    ( (This)->lpVtbl -> get_Container(This,ppCtl) )
    ( (This)->lpVtbl -> put_Container(This,pCtl) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Category(This,pGuid) )
    ( (This)->lpVtbl -> Build(This) )
    ( (This)->lpVtbl -> PostBuild(This) )
    ( (This)->lpVtbl -> PreRun(This) )
    ( (This)->lpVtbl -> PostRun(This) )
    ( (This)->lpVtbl -> PreStop(This) )
    ( (This)->lpVtbl -> PostStop(This) )
    ( (This)->lpVtbl -> OnEventNotify(This,lEventCode,lEventParm1,lEventParm2) )
    ( (This)->lpVtbl -> Decompose(This) )
typedef
enum MSVidCtlButtonstate
    {
        MSVIDCTL_LEFT_BUTTON = 0x1,
        MSVIDCTL_RIGHT_BUTTON = 0x2,
        MSVIDCTL_MIDDLE_BUTTON = 0x4,
        MSVIDCTL_X_BUTTON1 = 0x8,
        MSVIDCTL_X_BUTTON2 = 0x10,
        MSVIDCTL_SHIFT = 0x1,
        MSVIDCTL_CTRL = 0x2,
        MSVIDCTL_ALT = 0x4
    } MSVidCtlButtonstate;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSVidGraphSegmentUserInput;
    typedef struct IMSVidGraphSegmentUserInputVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidGraphSegmentUserInput * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidGraphSegmentUserInput * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidGraphSegmentUserInput * This);
        HRESULT ( STDMETHODCALLTYPE *Click )(
            __RPC__in IMSVidGraphSegmentUserInput * This);
        HRESULT ( STDMETHODCALLTYPE *DblClick )(
            __RPC__in IMSVidGraphSegmentUserInput * This);
        HRESULT ( STDMETHODCALLTYPE *KeyDown )(
            __RPC__in IMSVidGraphSegmentUserInput * This,
            __RPC__in short *KeyCode,
            short ShiftState);
        HRESULT ( STDMETHODCALLTYPE *KeyPress )(
            __RPC__in IMSVidGraphSegmentUserInput * This,
            __RPC__in short *KeyAscii);
        HRESULT ( STDMETHODCALLTYPE *KeyUp )(
            __RPC__in IMSVidGraphSegmentUserInput * This,
            __RPC__in short *KeyCode,
            short ShiftState);
        HRESULT ( STDMETHODCALLTYPE *MouseDown )(
            __RPC__in IMSVidGraphSegmentUserInput * This,
            short ButtonState,
            short ShiftState,
                                                  OLE_XPOS_PIXELS x,
                                                  OLE_YPOS_PIXELS y);
        HRESULT ( STDMETHODCALLTYPE *MouseMove )(
            __RPC__in IMSVidGraphSegmentUserInput * This,
            short ButtonState,
            short ShiftState,
                                                  OLE_XPOS_PIXELS x,
                                                  OLE_YPOS_PIXELS y);
        HRESULT ( STDMETHODCALLTYPE *MouseUp )(
            __RPC__in IMSVidGraphSegmentUserInput * This,
            short ButtonState,
            short ShiftState,
                                                  OLE_XPOS_PIXELS x,
                                                  OLE_YPOS_PIXELS y);
        END_INTERFACE
    } IMSVidGraphSegmentUserInputVtbl;
    interface IMSVidGraphSegmentUserInput
    {
        CONST_VTBL struct IMSVidGraphSegmentUserInputVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Click(This) )
    ( (This)->lpVtbl -> DblClick(This) )
    ( (This)->lpVtbl -> KeyDown(This,KeyCode,ShiftState) )
    ( (This)->lpVtbl -> KeyPress(This,KeyAscii) )
    ( (This)->lpVtbl -> KeyUp(This,KeyCode,ShiftState) )
    ( (This)->lpVtbl -> MouseDown(This,ButtonState,ShiftState,x,y) )
    ( (This)->lpVtbl -> MouseMove(This,ButtonState,ShiftState,x,y) )
    ( (This)->lpVtbl -> MouseUp(This,ButtonState,ShiftState,x,y) )
EXTERN_C const IID IID_IMSVidCompositionSegment;
    typedef struct IMSVidCompositionSegmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidCompositionSegment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidCompositionSegment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IMSVidCompositionSegment * This,
                        __RPC__out CLSID *pClassID);
                        HRESULT ( STDMETHODCALLTYPE *get_Init )(
            __RPC__in IMSVidCompositionSegment * This,
                                __RPC__deref_out_opt IUnknown **pInit);
                        HRESULT ( STDMETHODCALLTYPE *put_Init )(
            __RPC__in IMSVidCompositionSegment * This,
                       __RPC__in_opt IUnknown *pInit);
        HRESULT ( STDMETHODCALLTYPE *EnumFilters )(
            __RPC__in IMSVidCompositionSegment * This,
                        __RPC__deref_out_opt IEnumFilters **pNewEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Container )(
            __RPC__in IMSVidCompositionSegment * This,
                                __RPC__deref_out_opt IMSVidGraphSegmentContainer **ppCtl);
                                    HRESULT ( STDMETHODCALLTYPE *put_Container )(
            __RPC__in IMSVidCompositionSegment * This,
                       __RPC__in_opt IMSVidGraphSegmentContainer *pCtl);
                                    HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IMSVidCompositionSegment * This,
                                __RPC__out MSVidSegmentType *pType);
                                    HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidCompositionSegment * This,
                                __RPC__out GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *Build )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostBuild )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PreRun )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostRun )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PreStop )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostStop )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *OnEventNotify )(
            __RPC__in IMSVidCompositionSegment * This,
            LONG lEventCode,
            LONG_PTR lEventParm1,
            LONG_PTR lEventParm2);
        HRESULT ( STDMETHODCALLTYPE *Decompose )(
            __RPC__in IMSVidCompositionSegment * This);
        HRESULT ( STDMETHODCALLTYPE *Compose )(
            __RPC__in IMSVidCompositionSegment * This,
                       __RPC__in_opt IMSVidGraphSegment *upstream,
                       __RPC__in_opt IMSVidGraphSegment *downstream);
                                    HRESULT ( STDMETHODCALLTYPE *get_Up )(
            __RPC__in IMSVidCompositionSegment * This,
                        __RPC__deref_out_opt IMSVidGraphSegment **upstream);
                                    HRESULT ( STDMETHODCALLTYPE *get_Down )(
            __RPC__in IMSVidCompositionSegment * This,
                        __RPC__deref_out_opt IMSVidGraphSegment **downstream);
        END_INTERFACE
    } IMSVidCompositionSegmentVtbl;
    interface IMSVidCompositionSegment
    {
        CONST_VTBL struct IMSVidCompositionSegmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> get_Init(This,pInit) )
    ( (This)->lpVtbl -> put_Init(This,pInit) )
    ( (This)->lpVtbl -> EnumFilters(This,pNewEnum) )
    ( (This)->lpVtbl -> get_Container(This,ppCtl) )
    ( (This)->lpVtbl -> put_Container(This,pCtl) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Category(This,pGuid) )
    ( (This)->lpVtbl -> Build(This) )
    ( (This)->lpVtbl -> PostBuild(This) )
    ( (This)->lpVtbl -> PreRun(This) )
    ( (This)->lpVtbl -> PostRun(This) )
    ( (This)->lpVtbl -> PreStop(This) )
    ( (This)->lpVtbl -> PostStop(This) )
    ( (This)->lpVtbl -> OnEventNotify(This,lEventCode,lEventParm1,lEventParm2) )
    ( (This)->lpVtbl -> Decompose(This) )
    ( (This)->lpVtbl -> Compose(This,upstream,downstream) )
    ( (This)->lpVtbl -> get_Up(This,upstream) )
    ( (This)->lpVtbl -> get_Down(This,downstream) )
EXTERN_C const IID IID_IEnumMSVidGraphSegment;
    typedef struct IEnumMSVidGraphSegmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumMSVidGraphSegment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumMSVidGraphSegment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumMSVidGraphSegment * This,
                       ULONG celt,
                        __RPC__deref_out_opt IMSVidGraphSegment **rgelt,
                        __RPC__out ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumMSVidGraphSegment * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumMSVidGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumMSVidGraphSegment * This,
                        __RPC__deref_out_opt IEnumMSVidGraphSegment **ppenum);
        END_INTERFACE
    } IEnumMSVidGraphSegmentVtbl;
    interface IEnumMSVidGraphSegment
    {
        CONST_VTBL struct IEnumMSVidGraphSegmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IMSVidVRGraphSegment;
    typedef struct IMSVidVRGraphSegmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVRGraphSegment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVRGraphSegment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVRGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *GetClassID )(
            __RPC__in IMSVidVRGraphSegment * This,
                        __RPC__out CLSID *pClassID);
                        HRESULT ( STDMETHODCALLTYPE *get_Init )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__deref_out_opt IUnknown **pInit);
                        HRESULT ( STDMETHODCALLTYPE *put_Init )(
            __RPC__in IMSVidVRGraphSegment * This,
                       __RPC__in_opt IUnknown *pInit);
        HRESULT ( STDMETHODCALLTYPE *EnumFilters )(
            __RPC__in IMSVidVRGraphSegment * This,
                        __RPC__deref_out_opt IEnumFilters **pNewEnum);
                                    HRESULT ( STDMETHODCALLTYPE *get_Container )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__deref_out_opt IMSVidGraphSegmentContainer **ppCtl);
                                    HRESULT ( STDMETHODCALLTYPE *put_Container )(
            __RPC__in IMSVidVRGraphSegment * This,
                       __RPC__in_opt IMSVidGraphSegmentContainer *pCtl);
                                    HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out MSVidSegmentType *pType);
                                    HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out GUID *pGuid);
        HRESULT ( STDMETHODCALLTYPE *Build )(
            __RPC__in IMSVidVRGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostBuild )(
            __RPC__in IMSVidVRGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PreRun )(
            __RPC__in IMSVidVRGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostRun )(
            __RPC__in IMSVidVRGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PreStop )(
            __RPC__in IMSVidVRGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *PostStop )(
            __RPC__in IMSVidVRGraphSegment * This);
        HRESULT ( STDMETHODCALLTYPE *OnEventNotify )(
            __RPC__in IMSVidVRGraphSegment * This,
            LONG lEventCode,
            LONG_PTR lEventParm1,
            LONG_PTR lEventParm2);
        HRESULT ( STDMETHODCALLTYPE *Decompose )(
            __RPC__in IMSVidVRGraphSegment * This);
                                            HRESULT ( STDMETHODCALLTYPE *put__VMRendererMode )(
            __RPC__in IMSVidVRGraphSegment * This,
                       LONG dwMode);
                                            HRESULT ( STDMETHODCALLTYPE *put_Owner )(
            __RPC__in IMSVidVRGraphSegment * This,
                       __RPC__in HWND Window);
                                            HRESULT ( STDMETHODCALLTYPE *get_Owner )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__deref_out_opt HWND *Window);
                                            HRESULT ( STDMETHODCALLTYPE *get_UseOverlay )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out VARIANT_BOOL *UseOverlayVal);
                                            HRESULT ( STDMETHODCALLTYPE *put_UseOverlay )(
            __RPC__in IMSVidVRGraphSegment * This,
                       VARIANT_BOOL UseOverlayVal);
                                            HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out VARIANT_BOOL *Visible);
                                            HRESULT ( STDMETHODCALLTYPE *put_Visible )(
            __RPC__in IMSVidVRGraphSegment * This,
                       VARIANT_BOOL Visible);
                                            HRESULT ( STDMETHODCALLTYPE *get_ColorKey )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out OLE_COLOR *ColorKey);
                                            HRESULT ( STDMETHODCALLTYPE *put_ColorKey )(
            __RPC__in IMSVidVRGraphSegment * This,
                       OLE_COLOR ColorKey);
                                            HRESULT ( STDMETHODCALLTYPE *get_Source )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out LPRECT r);
                                            HRESULT ( STDMETHODCALLTYPE *put_Source )(
            __RPC__in IMSVidVRGraphSegment * This,
                       RECT r);
                                            HRESULT ( STDMETHODCALLTYPE *get_Destination )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out LPRECT r);
                                            HRESULT ( STDMETHODCALLTYPE *put_Destination )(
            __RPC__in IMSVidVRGraphSegment * This,
                       RECT r);
                                            HRESULT ( STDMETHODCALLTYPE *get_NativeSize )(
            __RPC__in IMSVidVRGraphSegment * This,
                        __RPC__out LPSIZE sizeval,
                        __RPC__out LPSIZE aspectratio);
                                            HRESULT ( STDMETHODCALLTYPE *get_BorderColor )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out OLE_COLOR *color);
                                            HRESULT ( STDMETHODCALLTYPE *put_BorderColor )(
            __RPC__in IMSVidVRGraphSegment * This,
                       OLE_COLOR color);
                                            HRESULT ( STDMETHODCALLTYPE *get_MaintainAspectRatio )(
            __RPC__in IMSVidVRGraphSegment * This,
                                __RPC__out VARIANT_BOOL *fMaintain);
                                            HRESULT ( STDMETHODCALLTYPE *put_MaintainAspectRatio )(
            __RPC__in IMSVidVRGraphSegment * This,
                       VARIANT_BOOL fMaintain);
                                   HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IMSVidVRGraphSegment * This);
                                   HRESULT ( STDMETHODCALLTYPE *DisplayChange )(
            __RPC__in IMSVidVRGraphSegment * This);
                                   HRESULT ( STDMETHODCALLTYPE *RePaint )(
            __RPC__in IMSVidVRGraphSegment * This,
                       __RPC__in HDC hdc);
        END_INTERFACE
    } IMSVidVRGraphSegmentVtbl;
    interface IMSVidVRGraphSegment
    {
        CONST_VTBL struct IMSVidVRGraphSegmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClassID(This,pClassID) )
    ( (This)->lpVtbl -> get_Init(This,pInit) )
    ( (This)->lpVtbl -> put_Init(This,pInit) )
    ( (This)->lpVtbl -> EnumFilters(This,pNewEnum) )
    ( (This)->lpVtbl -> get_Container(This,ppCtl) )
    ( (This)->lpVtbl -> put_Container(This,pCtl) )
    ( (This)->lpVtbl -> get_Type(This,pType) )
    ( (This)->lpVtbl -> get_Category(This,pGuid) )
    ( (This)->lpVtbl -> Build(This) )
    ( (This)->lpVtbl -> PostBuild(This) )
    ( (This)->lpVtbl -> PreRun(This) )
    ( (This)->lpVtbl -> PostRun(This) )
    ( (This)->lpVtbl -> PreStop(This) )
    ( (This)->lpVtbl -> PostStop(This) )
    ( (This)->lpVtbl -> OnEventNotify(This,lEventCode,lEventParm1,lEventParm2) )
    ( (This)->lpVtbl -> Decompose(This) )
    ( (This)->lpVtbl -> put__VMRendererMode(This,dwMode) )
    ( (This)->lpVtbl -> put_Owner(This,Window) )
    ( (This)->lpVtbl -> get_Owner(This,Window) )
    ( (This)->lpVtbl -> get_UseOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> put_UseOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> get_Visible(This,Visible) )
    ( (This)->lpVtbl -> put_Visible(This,Visible) )
    ( (This)->lpVtbl -> get_ColorKey(This,ColorKey) )
    ( (This)->lpVtbl -> put_ColorKey(This,ColorKey) )
    ( (This)->lpVtbl -> get_Source(This,r) )
    ( (This)->lpVtbl -> put_Source(This,r) )
    ( (This)->lpVtbl -> get_Destination(This,r) )
    ( (This)->lpVtbl -> put_Destination(This,r) )
    ( (This)->lpVtbl -> get_NativeSize(This,sizeval,aspectratio) )
    ( (This)->lpVtbl -> get_BorderColor(This,color) )
    ( (This)->lpVtbl -> put_BorderColor(This,color) )
    ( (This)->lpVtbl -> get_MaintainAspectRatio(This,fMaintain) )
    ( (This)->lpVtbl -> put_MaintainAspectRatio(This,fMaintain) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> DisplayChange(This) )
    ( (This)->lpVtbl -> RePaint(This,hdc) )
EXTERN_C const IID IID_IMSVidDevice;
    typedef struct IMSVidDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidDevice * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidDevice * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidDevice * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidDevice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidDevice * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidDevice * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidDevice * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidDevice * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidDevice * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidDevice * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidDevice * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidDevice * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidDevice * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
        END_INTERFACE
    } IMSVidDeviceVtbl;
    interface IMSVidDevice
    {
        CONST_VTBL struct IMSVidDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
EXTERN_C const IID IID_IMSVidDevice2;
    typedef struct IMSVidDevice2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidDevice2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidDevice2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidDevice2 * This);
                            HRESULT ( STDMETHODCALLTYPE *get_DevicePath )(
            __RPC__in IMSVidDevice2 * This,
                                __RPC__deref_out_opt BSTR *DevPath);
        END_INTERFACE
    } IMSVidDevice2Vtbl;
    interface IMSVidDevice2
    {
        CONST_VTBL struct IMSVidDevice2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_DevicePath(This,DevPath) )
EXTERN_C const IID IID_IMSVidInputDevice;
    typedef struct IMSVidInputDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidInputDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidInputDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidInputDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidInputDevice * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidInputDevice * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidInputDevice * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidInputDevice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidInputDevice * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidInputDevice * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidInputDevice * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidInputDevice * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidInputDevice * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidInputDevice * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidInputDevice * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidInputDevice * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidInputDevice * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidInputDevice * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidInputDevice * This,
                       __RPC__in VARIANT *v);
        END_INTERFACE
    } IMSVidInputDeviceVtbl;
    interface IMSVidInputDevice
    {
        CONST_VTBL struct IMSVidInputDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
EXTERN_C const IID IID_IMSVidDeviceEvent;
    typedef struct IMSVidDeviceEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidDeviceEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidDeviceEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidDeviceEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidDeviceEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidDeviceEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidDeviceEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidDeviceEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidDeviceEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
        END_INTERFACE
    } IMSVidDeviceEventVtbl;
    interface IMSVidDeviceEvent
    {
        CONST_VTBL struct IMSVidDeviceEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
EXTERN_C const IID IID_IMSVidInputDeviceEvent;
    typedef struct IMSVidInputDeviceEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidInputDeviceEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidInputDeviceEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidInputDeviceEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidInputDeviceEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidInputDeviceEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidInputDeviceEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidInputDeviceEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } IMSVidInputDeviceEventVtbl;
    interface IMSVidInputDeviceEvent
    {
        CONST_VTBL struct IMSVidInputDeviceEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IMSVidVideoInputDevice;
    typedef struct IMSVidVideoInputDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVideoInputDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVideoInputDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVideoInputDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidVideoInputDevice * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidVideoInputDevice * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidVideoInputDevice * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidVideoInputDevice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidVideoInputDevice * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidVideoInputDevice * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidVideoInputDevice * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidVideoInputDevice * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidVideoInputDevice * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidVideoInputDevice * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidVideoInputDevice * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidVideoInputDevice * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidVideoInputDevice * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidVideoInputDevice * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidVideoInputDevice * This,
                       __RPC__in VARIANT *v);
        END_INTERFACE
    } IMSVidVideoInputDeviceVtbl;
    interface IMSVidVideoInputDevice
    {
        CONST_VTBL struct IMSVidVideoInputDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
EXTERN_C const IID IID_IMSVidPlayback;
    typedef struct IMSVidPlaybackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidPlayback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidPlayback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidPlayback * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidPlayback * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidPlayback * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidPlayback * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidPlayback * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidPlayback * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidPlayback * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidPlayback * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidPlayback * This,
                       __RPC__in VARIANT *v);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableResetOnStop )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableResetOnStop )(
            __RPC__in IMSVidPlayback * This,
                       VARIANT_BOOL newVal);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidPlayback * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidPlayback * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidPlayback * This);
                            HRESULT ( STDMETHODCALLTYPE *get_CanStep )(
            __RPC__in IMSVidPlayback * This,
                       VARIANT_BOOL fBackwards,
                                __RPC__out VARIANT_BOOL *pfCan);
                   HRESULT ( STDMETHODCALLTYPE *Step )(
            __RPC__in IMSVidPlayback * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMSVidPlayback * This,
                       double plRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out double *plRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMSVidPlayback * This,
                       long lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out long *lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_PositionMode )(
            __RPC__in IMSVidPlayback * This,
                       PositionModeList lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PositionMode )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out PositionModeList *lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IMSVidPlayback * This,
                                __RPC__out long *lLength);
        END_INTERFACE
    } IMSVidPlaybackVtbl;
    interface IMSVidPlayback
    {
        CONST_VTBL struct IMSVidPlaybackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_EnableResetOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_EnableResetOnStop(This,newVal) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_CanStep(This,fBackwards,pfCan) )
    ( (This)->lpVtbl -> Step(This,lStep) )
    ( (This)->lpVtbl -> put_Rate(This,plRate) )
    ( (This)->lpVtbl -> get_Rate(This,plRate) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> put_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_Length(This,lLength) )
EXTERN_C const IID IID_IMSVidPlaybackEvent;
    typedef struct IMSVidPlaybackEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidPlaybackEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidPlaybackEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidPlaybackEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidPlaybackEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidPlaybackEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidPlaybackEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidPlaybackEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EndOfMedia )(
            __RPC__in IMSVidPlaybackEvent * This,
                       __RPC__in_opt IMSVidPlayback *lpd);
        END_INTERFACE
    } IMSVidPlaybackEventVtbl;
    interface IMSVidPlaybackEvent
    {
        CONST_VTBL struct IMSVidPlaybackEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EndOfMedia(This,lpd) )
EXTERN_C const IID IID_IMSVidTuner;
    typedef struct IMSVidTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidTuner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidTuner * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidTuner * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidTuner * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidTuner * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidTuner * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidTuner * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidTuner * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidTuner * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidTuner * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidTuner * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidTuner * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidTuner * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidTuner * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidTuner * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidTuner * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidTuner * This,
                       __RPC__in VARIANT *v);
                            HRESULT ( STDMETHODCALLTYPE *get_Tune )(
            __RPC__in IMSVidTuner * This,
                                __RPC__deref_out_opt ITuneRequest **ppTR);
                            HRESULT ( STDMETHODCALLTYPE *put_Tune )(
            __RPC__in IMSVidTuner * This,
                       __RPC__in_opt ITuneRequest *pTR);
                            HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IMSVidTuner * This,
                                __RPC__deref_out_opt ITuningSpace **plTS);
                                                HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            __RPC__in IMSVidTuner * This,
                       __RPC__in_opt ITuningSpace *plTS);
        END_INTERFACE
    } IMSVidTunerVtbl;
    interface IMSVidTuner
    {
        CONST_VTBL struct IMSVidTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_Tune(This,ppTR) )
    ( (This)->lpVtbl -> put_Tune(This,pTR) )
    ( (This)->lpVtbl -> get_TuningSpace(This,plTS) )
    ( (This)->lpVtbl -> put_TuningSpace(This,plTS) )
EXTERN_C const IID IID_IMSVidTunerEvent;
    typedef struct IMSVidTunerEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidTunerEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidTunerEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidTunerEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidTunerEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidTunerEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidTunerEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidTunerEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *TuneChanged )(
            __RPC__in IMSVidTunerEvent * This,
                       __RPC__in_opt IMSVidTuner *lpd);
        END_INTERFACE
    } IMSVidTunerEventVtbl;
    interface IMSVidTunerEvent
    {
        CONST_VTBL struct IMSVidTunerEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> TuneChanged(This,lpd) )
EXTERN_C const IID IID_IMSVidAnalogTuner;
    typedef struct IMSVidAnalogTunerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidAnalogTuner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidAnalogTuner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidAnalogTuner * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidAnalogTuner * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidAnalogTuner * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidAnalogTuner * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidAnalogTuner * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidAnalogTuner * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidAnalogTuner * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidAnalogTuner * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidAnalogTuner * This,
                       __RPC__in VARIANT *v);
                            HRESULT ( STDMETHODCALLTYPE *get_Tune )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__deref_out_opt ITuneRequest **ppTR);
                            HRESULT ( STDMETHODCALLTYPE *put_Tune )(
            __RPC__in IMSVidAnalogTuner * This,
                       __RPC__in_opt ITuneRequest *pTR);
                            HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__deref_out_opt ITuningSpace **plTS);
                                                HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            __RPC__in IMSVidAnalogTuner * This,
                       __RPC__in_opt ITuningSpace *plTS);
                            HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out long *Channel);
                            HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            __RPC__in IMSVidAnalogTuner * This,
                       long Channel);
                            HRESULT ( STDMETHODCALLTYPE *get_VideoFrequency )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out long *lcc);
                            HRESULT ( STDMETHODCALLTYPE *get_AudioFrequency )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out long *lcc);
                            HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out long *lcc);
                            HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IMSVidAnalogTuner * This,
                       long lcc);
                            HRESULT ( STDMETHODCALLTYPE *get_SAP )(
            __RPC__in IMSVidAnalogTuner * This,
                                __RPC__out VARIANT_BOOL *pfSapOn);
                            HRESULT ( STDMETHODCALLTYPE *put_SAP )(
            __RPC__in IMSVidAnalogTuner * This,
                       VARIANT_BOOL fSapOn);
                   HRESULT ( STDMETHODCALLTYPE *ChannelAvailable )(
            __RPC__in IMSVidAnalogTuner * This,
                       long nChannel,
                        __RPC__out long *SignalStrength,
                                __RPC__out VARIANT_BOOL *fSignalPresent);
        END_INTERFACE
    } IMSVidAnalogTunerVtbl;
    interface IMSVidAnalogTuner
    {
        CONST_VTBL struct IMSVidAnalogTunerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_Tune(This,ppTR) )
    ( (This)->lpVtbl -> put_Tune(This,pTR) )
    ( (This)->lpVtbl -> get_TuningSpace(This,plTS) )
    ( (This)->lpVtbl -> put_TuningSpace(This,plTS) )
    ( (This)->lpVtbl -> get_Channel(This,Channel) )
    ( (This)->lpVtbl -> put_Channel(This,Channel) )
    ( (This)->lpVtbl -> get_VideoFrequency(This,lcc) )
    ( (This)->lpVtbl -> get_AudioFrequency(This,lcc) )
    ( (This)->lpVtbl -> get_CountryCode(This,lcc) )
    ( (This)->lpVtbl -> put_CountryCode(This,lcc) )
    ( (This)->lpVtbl -> get_SAP(This,pfSapOn) )
    ( (This)->lpVtbl -> put_SAP(This,fSapOn) )
    ( (This)->lpVtbl -> ChannelAvailable(This,nChannel,SignalStrength,fSignalPresent) )
EXTERN_C const IID IID_IMSVidAnalogTuner2;
    typedef struct IMSVidAnalogTuner2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidAnalogTuner2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidAnalogTuner2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidAnalogTuner2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidAnalogTuner2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       __RPC__in VARIANT *v);
                            HRESULT ( STDMETHODCALLTYPE *get_Tune )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__deref_out_opt ITuneRequest **ppTR);
                            HRESULT ( STDMETHODCALLTYPE *put_Tune )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       __RPC__in_opt ITuneRequest *pTR);
                            HRESULT ( STDMETHODCALLTYPE *get_TuningSpace )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__deref_out_opt ITuningSpace **plTS);
                                                HRESULT ( STDMETHODCALLTYPE *put_TuningSpace )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       __RPC__in_opt ITuningSpace *plTS);
                            HRESULT ( STDMETHODCALLTYPE *get_Channel )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *Channel);
                            HRESULT ( STDMETHODCALLTYPE *put_Channel )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       long Channel);
                            HRESULT ( STDMETHODCALLTYPE *get_VideoFrequency )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *lcc);
                            HRESULT ( STDMETHODCALLTYPE *get_AudioFrequency )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *lcc);
                            HRESULT ( STDMETHODCALLTYPE *get_CountryCode )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *lcc);
                            HRESULT ( STDMETHODCALLTYPE *put_CountryCode )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       long lcc);
                            HRESULT ( STDMETHODCALLTYPE *get_SAP )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out VARIANT_BOOL *pfSapOn);
                            HRESULT ( STDMETHODCALLTYPE *put_SAP )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       VARIANT_BOOL fSapOn);
                   HRESULT ( STDMETHODCALLTYPE *ChannelAvailable )(
            __RPC__in IMSVidAnalogTuner2 * This,
                       long nChannel,
                        __RPC__out long *SignalStrength,
                                __RPC__out VARIANT_BOOL *fSignalPresent);
                            HRESULT ( STDMETHODCALLTYPE *get_TVFormats )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *Formats);
                            HRESULT ( STDMETHODCALLTYPE *get_TunerModes )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *Modes);
                            HRESULT ( STDMETHODCALLTYPE *get_NumAuxInputs )(
            __RPC__in IMSVidAnalogTuner2 * This,
                                __RPC__out long *Inputs);
        END_INTERFACE
    } IMSVidAnalogTuner2Vtbl;
    interface IMSVidAnalogTuner2
    {
        CONST_VTBL struct IMSVidAnalogTuner2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_Tune(This,ppTR) )
    ( (This)->lpVtbl -> put_Tune(This,pTR) )
    ( (This)->lpVtbl -> get_TuningSpace(This,plTS) )
    ( (This)->lpVtbl -> put_TuningSpace(This,plTS) )
    ( (This)->lpVtbl -> get_Channel(This,Channel) )
    ( (This)->lpVtbl -> put_Channel(This,Channel) )
    ( (This)->lpVtbl -> get_VideoFrequency(This,lcc) )
    ( (This)->lpVtbl -> get_AudioFrequency(This,lcc) )
    ( (This)->lpVtbl -> get_CountryCode(This,lcc) )
    ( (This)->lpVtbl -> put_CountryCode(This,lcc) )
    ( (This)->lpVtbl -> get_SAP(This,pfSapOn) )
    ( (This)->lpVtbl -> put_SAP(This,fSapOn) )
    ( (This)->lpVtbl -> ChannelAvailable(This,nChannel,SignalStrength,fSignalPresent) )
    ( (This)->lpVtbl -> get_TVFormats(This,Formats) )
    ( (This)->lpVtbl -> get_TunerModes(This,Modes) )
    ( (This)->lpVtbl -> get_NumAuxInputs(This,Inputs) )
EXTERN_C const IID IID_IMSVidAnalogTunerEvent;
    typedef struct IMSVidAnalogTunerEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidAnalogTunerEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidAnalogTunerEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidAnalogTunerEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidAnalogTunerEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidAnalogTunerEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidAnalogTunerEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidAnalogTunerEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *TuneChanged )(
            __RPC__in IMSVidAnalogTunerEvent * This,
                       __RPC__in_opt IMSVidTuner *lpd);
        END_INTERFACE
    } IMSVidAnalogTunerEventVtbl;
    interface IMSVidAnalogTunerEvent
    {
        CONST_VTBL struct IMSVidAnalogTunerEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> TuneChanged(This,lpd) )
EXTERN_C const IID IID_IMSVidFilePlayback;
    typedef struct IMSVidFilePlaybackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidFilePlayback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidFilePlayback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidFilePlayback * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidFilePlayback * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidFilePlayback * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidFilePlayback * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidFilePlayback * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidFilePlayback * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidFilePlayback * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidFilePlayback * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidFilePlayback * This,
                       __RPC__in VARIANT *v);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableResetOnStop )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableResetOnStop )(
            __RPC__in IMSVidFilePlayback * This,
                       VARIANT_BOOL newVal);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidFilePlayback * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidFilePlayback * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidFilePlayback * This);
                            HRESULT ( STDMETHODCALLTYPE *get_CanStep )(
            __RPC__in IMSVidFilePlayback * This,
                       VARIANT_BOOL fBackwards,
                                __RPC__out VARIANT_BOOL *pfCan);
                   HRESULT ( STDMETHODCALLTYPE *Step )(
            __RPC__in IMSVidFilePlayback * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMSVidFilePlayback * This,
                       double plRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out double *plRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMSVidFilePlayback * This,
                       long lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out long *lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_PositionMode )(
            __RPC__in IMSVidFilePlayback * This,
                       PositionModeList lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PositionMode )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out PositionModeList *lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__out long *lLength);
                            HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IMSVidFilePlayback * This,
                                __RPC__deref_out_opt BSTR *FileName);
                            HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IMSVidFilePlayback * This,
                       __RPC__in BSTR FileName);
        END_INTERFACE
    } IMSVidFilePlaybackVtbl;
    interface IMSVidFilePlayback
    {
        CONST_VTBL struct IMSVidFilePlaybackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_EnableResetOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_EnableResetOnStop(This,newVal) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_CanStep(This,fBackwards,pfCan) )
    ( (This)->lpVtbl -> Step(This,lStep) )
    ( (This)->lpVtbl -> put_Rate(This,plRate) )
    ( (This)->lpVtbl -> get_Rate(This,plRate) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> put_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_Length(This,lLength) )
    ( (This)->lpVtbl -> get_FileName(This,FileName) )
    ( (This)->lpVtbl -> put_FileName(This,FileName) )
EXTERN_C const IID IID_IMSVidFilePlayback2;
    typedef struct IMSVidFilePlayback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidFilePlayback2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidFilePlayback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidFilePlayback2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidFilePlayback2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidFilePlayback2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidFilePlayback2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidFilePlayback2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidFilePlayback2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidFilePlayback2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidFilePlayback2 * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidFilePlayback2 * This,
                       __RPC__in VARIANT *v);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableResetOnStop )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableResetOnStop )(
            __RPC__in IMSVidFilePlayback2 * This,
                       VARIANT_BOOL newVal);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidFilePlayback2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidFilePlayback2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidFilePlayback2 * This);
                            HRESULT ( STDMETHODCALLTYPE *get_CanStep )(
            __RPC__in IMSVidFilePlayback2 * This,
                       VARIANT_BOOL fBackwards,
                                __RPC__out VARIANT_BOOL *pfCan);
                   HRESULT ( STDMETHODCALLTYPE *Step )(
            __RPC__in IMSVidFilePlayback2 * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMSVidFilePlayback2 * This,
                       double plRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out double *plRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMSVidFilePlayback2 * This,
                       long lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out long *lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_PositionMode )(
            __RPC__in IMSVidFilePlayback2 * This,
                       PositionModeList lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PositionMode )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out PositionModeList *lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__out long *lLength);
                            HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IMSVidFilePlayback2 * This,
                                __RPC__deref_out_opt BSTR *FileName);
                            HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IMSVidFilePlayback2 * This,
                       __RPC__in BSTR FileName);
                                    HRESULT ( STDMETHODCALLTYPE *put__SourceFilter )(
            __RPC__in IMSVidFilePlayback2 * This,
                       __RPC__in BSTR FileName);
                                    HRESULT ( STDMETHODCALLTYPE *put___SourceFilter )(
            __RPC__in IMSVidFilePlayback2 * This,
                       GUID FileName);
        END_INTERFACE
    } IMSVidFilePlayback2Vtbl;
    interface IMSVidFilePlayback2
    {
        CONST_VTBL struct IMSVidFilePlayback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_EnableResetOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_EnableResetOnStop(This,newVal) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_CanStep(This,fBackwards,pfCan) )
    ( (This)->lpVtbl -> Step(This,lStep) )
    ( (This)->lpVtbl -> put_Rate(This,plRate) )
    ( (This)->lpVtbl -> get_Rate(This,plRate) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> put_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_Length(This,lLength) )
    ( (This)->lpVtbl -> get_FileName(This,FileName) )
    ( (This)->lpVtbl -> put_FileName(This,FileName) )
    ( (This)->lpVtbl -> put__SourceFilter(This,FileName) )
    ( (This)->lpVtbl -> put___SourceFilter(This,FileName) )
EXTERN_C const IID IID_IMSVidFilePlaybackEvent;
    typedef struct IMSVidFilePlaybackEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidFilePlaybackEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidFilePlaybackEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidFilePlaybackEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidFilePlaybackEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidFilePlaybackEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidFilePlaybackEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidFilePlaybackEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EndOfMedia )(
            __RPC__in IMSVidFilePlaybackEvent * This,
                       __RPC__in_opt IMSVidPlayback *lpd);
        END_INTERFACE
    } IMSVidFilePlaybackEventVtbl;
    interface IMSVidFilePlaybackEvent
    {
        CONST_VTBL struct IMSVidFilePlaybackEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EndOfMedia(This,lpd) )
typedef
enum DVDMenuIDConstants
    {
        dvdMenu_Title = 2,
        dvdMenu_Root = ( dvdMenu_Title + 1 ) ,
        dvdMenu_Subpicture = ( dvdMenu_Root + 1 ) ,
        dvdMenu_Audio = ( dvdMenu_Subpicture + 1 ) ,
        dvdMenu_Angle = ( dvdMenu_Audio + 1 ) ,
        dvdMenu_Chapter = ( dvdMenu_Angle + 1 )
    } DVDMenuIDConstants;
typedef
enum DVDFilterState
    {
        dvdState_Undefined = -2,
        dvdState_Unitialized = ( dvdState_Undefined + 1 ) ,
        dvdState_Stopped = ( dvdState_Unitialized + 1 ) ,
        dvdState_Paused = ( dvdState_Stopped + 1 ) ,
        dvdState_Running = ( dvdState_Paused + 1 )
    } DVDFilterState;
typedef
enum DVDTextStringType
    {
        dvdStruct_Volume = 0x1,
        dvdStruct_Title = 0x2,
        dvdStruct_ParentalID = 0x3,
        dvdStruct_PartOfTitle = 0x4,
        dvdStruct_Cell = 0x5,
        dvdStream_Audio = 0x10,
        dvdStream_Subpicture = 0x11,
        dvdStream_Angle = 0x12,
        dvdChannel_Audio = 0x20,
        dvdGeneral_Name = 0x30,
        dvdGeneral_Comments = 0x31,
        dvdTitle_Series = 0x38,
        dvdTitle_Movie = 0x39,
        dvdTitle_Video = 0x3a,
        dvdTitle_Album = 0x3b,
        dvdTitle_Song = 0x3c,
        dvdTitle_Other = 0x3f,
        dvdTitle_Sub_Series = 0x40,
        dvdTitle_Sub_Movie = 0x41,
        dvdTitle_Sub_Video = 0x42,
        dvdTitle_Sub_Album = 0x43,
        dvdTitle_Sub_Song = 0x44,
        dvdTitle_Sub_Other = 0x47,
        dvdTitle_Orig_Series = 0x48,
        dvdTitle_Orig_Movie = 0x49,
        dvdTitle_Orig_Video = 0x4a,
        dvdTitle_Orig_Album = 0x4b,
        dvdTitle_Orig_Song = 0x4c,
        dvdTitle_Orig_Other = 0x4f,
        dvdOther_Scene = 0x50,
        dvdOther_Cut = 0x51,
        dvdOther_Take = 0x52
    } DVDTextStringType;
typedef
enum DVDSPExt
    {
        dvdSPExt_NotSpecified = 0,
        dvdSPExt_Caption_Normal = 1,
        dvdSPExt_Caption_Big = 2,
        dvdSPExt_Caption_Children = 3,
        dvdSPExt_CC_Normal = 5,
        dvdSPExt_CC_Big = 6,
        dvdSPExt_CC_Children = 7,
        dvdSPExt_Forced = 9,
        dvdSPExt_DirectorComments_Normal = 13,
        dvdSPExt_DirectorComments_Big = 14,
        dvdSPExt_DirectorComments_Children = 15
    } DVDSPExt;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSVidWebDVD;
    typedef struct IMSVidWebDVDVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidWebDVD * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidWebDVD * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidWebDVD * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidWebDVD * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidWebDVD * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidWebDVD * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in VARIANT *v);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableResetOnStop )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableResetOnStop )(
            __RPC__in IMSVidWebDVD * This,
                       VARIANT_BOOL newVal);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidWebDVD * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidWebDVD * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidWebDVD * This);
                            HRESULT ( STDMETHODCALLTYPE *get_CanStep )(
            __RPC__in IMSVidWebDVD * This,
                       VARIANT_BOOL fBackwards,
                                __RPC__out VARIANT_BOOL *pfCan);
                   HRESULT ( STDMETHODCALLTYPE *Step )(
            __RPC__in IMSVidWebDVD * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMSVidWebDVD * This,
                       double plRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out double *plRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMSVidWebDVD * This,
                       long lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_PositionMode )(
            __RPC__in IMSVidWebDVD * This,
                       PositionModeList lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PositionMode )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out PositionModeList *lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *lLength);
        HRESULT ( STDMETHODCALLTYPE *OnDVDEvent )(
            __RPC__in IMSVidWebDVD * This,
                       long lEvent,
                       LONG_PTR lParam1,
                       LONG_PTR lParam2);
                               HRESULT ( STDMETHODCALLTYPE *PlayTitle )(
            __RPC__in IMSVidWebDVD * This,
                       long lTitle);
                               HRESULT ( STDMETHODCALLTYPE *PlayChapterInTitle )(
            __RPC__in IMSVidWebDVD * This,
                       long lTitle,
                       long lChapter);
                               HRESULT ( STDMETHODCALLTYPE *PlayChapter )(
            __RPC__in IMSVidWebDVD * This,
                       long lChapter);
                               HRESULT ( STDMETHODCALLTYPE *PlayChaptersAutoStop )(
            __RPC__in IMSVidWebDVD * This,
                       long lTitle,
                       long lstrChapter,
                       long lChapterCount);
                               HRESULT ( STDMETHODCALLTYPE *PlayAtTime )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in BSTR strTime);
                               HRESULT ( STDMETHODCALLTYPE *PlayAtTimeInTitle )(
            __RPC__in IMSVidWebDVD * This,
                       long lTitle,
                       __RPC__in BSTR strTime);
                               HRESULT ( STDMETHODCALLTYPE *PlayPeriodInTitleAutoStop )(
            __RPC__in IMSVidWebDVD * This,
                       long lTitle,
                       __RPC__in BSTR strStartTime,
                       __RPC__in BSTR strEndTime);
                               HRESULT ( STDMETHODCALLTYPE *ReplayChapter )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *PlayPrevChapter )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *PlayNextChapter )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *StillOff )(
            __RPC__in IMSVidWebDVD * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioLanguage )(
            __RPC__in IMSVidWebDVD * This,
                       long lStream,
                                     VARIANT_BOOL fFormat,
                                __RPC__deref_out_opt BSTR *strAudioLang);
                               HRESULT ( STDMETHODCALLTYPE *ShowMenu )(
            __RPC__in IMSVidWebDVD * This,
                       DVDMenuIDConstants MenuID);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *ReturnFromSubmenu )(
            __RPC__in IMSVidWebDVD * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonsAvailable )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentButton )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *SelectAndActivateButton )(
            __RPC__in IMSVidWebDVD * This,
                       long lButton);
                               HRESULT ( STDMETHODCALLTYPE *ActivateButton )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectRightButton )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectLeftButton )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectLowerButton )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectUpperButton )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *ActivateAtPosition )(
            __RPC__in IMSVidWebDVD * This,
                       long xPos,
                       long yPos);
                               HRESULT ( STDMETHODCALLTYPE *SelectAtPosition )(
            __RPC__in IMSVidWebDVD * This,
                       long xPos,
                       long yPos);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonAtPosition )(
            __RPC__in IMSVidWebDVD * This,
                       long xPos,
                       long yPos,
                                __RPC__out long *plButton);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfChapters )(
            __RPC__in IMSVidWebDVD * This,
                       long lTitle,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalTitleTime )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TitlesAvailable )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumesAvailable )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentVolume )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDiscSide )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDomain )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentChapter )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentTitle )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentTime )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *DVDTimeCode2bstr )(
            __RPC__in IMSVidWebDVD * This,
                       long timeCode,
                                __RPC__deref_out_opt BSTR *pTimeStr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDDirectory )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DVDDirectory )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in BSTR newVal);
                               HRESULT ( STDMETHODCALLTYPE *IsSubpictureStreamEnabled )(
            __RPC__in IMSVidWebDVD * This,
                       long lstream,
                                __RPC__out VARIANT_BOOL *fEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsAudioStreamEnabled )(
            __RPC__in IMSVidWebDVD * This,
                       long lstream,
                                __RPC__out VARIANT_BOOL *fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSubpictureStream )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentSubpictureStream )(
            __RPC__in IMSVidWebDVD * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubpictureLanguage )(
            __RPC__in IMSVidWebDVD * This,
            long lStream,
                                __RPC__deref_out_opt BSTR *strLanguage);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAudioStream )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentAudioStream )(
            __RPC__in IMSVidWebDVD * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioStreamsAvailable )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AnglesAvailable )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAngle )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentAngle )(
            __RPC__in IMSVidWebDVD * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubpictureStreamsAvailable )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubpictureOn )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SubpictureOn )(
            __RPC__in IMSVidWebDVD * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDUniqueID )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *AcceptParentalLevelChange )(
            __RPC__in IMSVidWebDVD * This,
                       VARIANT_BOOL fAccept,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                               HRESULT ( STDMETHODCALLTYPE *NotifyParentalLevelChange )(
            __RPC__in IMSVidWebDVD * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *SelectParentalCountry )(
            __RPC__in IMSVidWebDVD * This,
                       long lCountry,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                               HRESULT ( STDMETHODCALLTYPE *SelectParentalLevel )(
            __RPC__in IMSVidWebDVD * This,
                       long lParentalLevel,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                                        HRESULT ( STDMETHODCALLTYPE *get_TitleParentalLevels )(
            __RPC__in IMSVidWebDVD * This,
                       long lTitle,
                                __RPC__out long *plParentalLevels);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlayerParentalCountry )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *plCountryCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlayerParentalLevel )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *plParentalLevel);
                               HRESULT ( STDMETHODCALLTYPE *Eject )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *UOPValid )(
            __RPC__in IMSVidWebDVD * This,
                       long lUOP,
                                __RPC__out VARIANT_BOOL *pfValid);
                                        HRESULT ( STDMETHODCALLTYPE *get_SPRM )(
            __RPC__in IMSVidWebDVD * This,
                       long lIndex,
                                __RPC__out short *psSPRM);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPRM )(
            __RPC__in IMSVidWebDVD * This,
                       long lIndex,
                                __RPC__out short *psSPRM);
                                        HRESULT ( STDMETHODCALLTYPE *put_GPRM )(
            __RPC__in IMSVidWebDVD * This,
                       long lIndex,
                       short sValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextStringType )(
            __RPC__in IMSVidWebDVD * This,
                       long lLangIndex,
                       long lStringIndex,
                                __RPC__out DVDTextStringType *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextString )(
            __RPC__in IMSVidWebDVD * This,
                       long lLangIndex,
                       long lStringIndex,
                                __RPC__deref_out_opt BSTR *pstrText);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextNumberOfStrings )(
            __RPC__in IMSVidWebDVD * This,
                       long lLangIndex,
                                __RPC__out long *plNumOfStrings);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextNumberOfLanguages )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *plNumOfLangs);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextLanguageLCID )(
            __RPC__in IMSVidWebDVD * This,
                       long lLangIndex,
                                __RPC__out long *lcid);
                               HRESULT ( STDMETHODCALLTYPE *RegionChange )(
            __RPC__in IMSVidWebDVD * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDAdm )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt IDispatch **pVal);
                               HRESULT ( STDMETHODCALLTYPE *DeleteBookmark )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *RestoreBookmark )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *SaveBookmark )(
            __RPC__in IMSVidWebDVD * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectDefaultAudioLanguage )(
            __RPC__in IMSVidWebDVD * This,
                       long lang,
                       long ext);
                               HRESULT ( STDMETHODCALLTYPE *SelectDefaultSubpictureLanguage )(
            __RPC__in IMSVidWebDVD * This,
                       long lang,
                       DVDSPExt ext);
                                        HRESULT ( STDMETHODCALLTYPE *get_PreferredSubpictureStream )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultMenuLanguage )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *lang);
                                        HRESULT ( STDMETHODCALLTYPE *put_DefaultMenuLanguage )(
            __RPC__in IMSVidWebDVD * This,
                       long lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultSubpictureLanguage )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultAudioLanguage )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultSubpictureLanguageExt )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out DVDSPExt *ext);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultAudioLanguageExt )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *ext);
                                        HRESULT ( STDMETHODCALLTYPE *get_LanguageFromLCID )(
            __RPC__in IMSVidWebDVD * This,
                       long lcid,
                                __RPC__deref_out_opt BSTR *lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_KaraokeAudioPresentationMode )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_KaraokeAudioPresentationMode )(
            __RPC__in IMSVidWebDVD * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_KaraokeChannelContent )(
            __RPC__in IMSVidWebDVD * This,
                       long lStream,
                       long lChan,
                                __RPC__out long *lContent);
                                        HRESULT ( STDMETHODCALLTYPE *get_KaraokeChannelAssignment )(
            __RPC__in IMSVidWebDVD * This,
                       long lStream,
                                __RPC__out long *lChannelAssignment);
                               HRESULT ( STDMETHODCALLTYPE *RestorePreferredSettings )(
            __RPC__in IMSVidWebDVD * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonRect )(
            __RPC__in IMSVidWebDVD * This,
                       long lButton,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDScreenInMouseCoordinates )(
            __RPC__in IMSVidWebDVD * This,
                                __RPC__deref_out_opt IMSVidRect **ppRect);
                                        HRESULT ( STDMETHODCALLTYPE *put_DVDScreenInMouseCoordinates )(
            __RPC__in IMSVidWebDVD * This,
                       __RPC__in_opt IMSVidRect *pRect);
        END_INTERFACE
    } IMSVidWebDVDVtbl;
    interface IMSVidWebDVD
    {
        CONST_VTBL struct IMSVidWebDVDVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_EnableResetOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_EnableResetOnStop(This,newVal) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_CanStep(This,fBackwards,pfCan) )
    ( (This)->lpVtbl -> Step(This,lStep) )
    ( (This)->lpVtbl -> put_Rate(This,plRate) )
    ( (This)->lpVtbl -> get_Rate(This,plRate) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> put_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_Length(This,lLength) )
    ( (This)->lpVtbl -> OnDVDEvent(This,lEvent,lParam1,lParam2) )
    ( (This)->lpVtbl -> PlayTitle(This,lTitle) )
    ( (This)->lpVtbl -> PlayChapterInTitle(This,lTitle,lChapter) )
    ( (This)->lpVtbl -> PlayChapter(This,lChapter) )
    ( (This)->lpVtbl -> PlayChaptersAutoStop(This,lTitle,lstrChapter,lChapterCount) )
    ( (This)->lpVtbl -> PlayAtTime(This,strTime) )
    ( (This)->lpVtbl -> PlayAtTimeInTitle(This,lTitle,strTime) )
    ( (This)->lpVtbl -> PlayPeriodInTitleAutoStop(This,lTitle,strStartTime,strEndTime) )
    ( (This)->lpVtbl -> ReplayChapter(This) )
    ( (This)->lpVtbl -> PlayPrevChapter(This) )
    ( (This)->lpVtbl -> PlayNextChapter(This) )
    ( (This)->lpVtbl -> StillOff(This) )
    ( (This)->lpVtbl -> get_AudioLanguage(This,lStream,fFormat,strAudioLang) )
    ( (This)->lpVtbl -> ShowMenu(This,MenuID) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> ReturnFromSubmenu(This) )
    ( (This)->lpVtbl -> get_ButtonsAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentButton(This,pVal) )
    ( (This)->lpVtbl -> SelectAndActivateButton(This,lButton) )
    ( (This)->lpVtbl -> ActivateButton(This) )
    ( (This)->lpVtbl -> SelectRightButton(This) )
    ( (This)->lpVtbl -> SelectLeftButton(This) )
    ( (This)->lpVtbl -> SelectLowerButton(This) )
    ( (This)->lpVtbl -> SelectUpperButton(This) )
    ( (This)->lpVtbl -> ActivateAtPosition(This,xPos,yPos) )
    ( (This)->lpVtbl -> SelectAtPosition(This,xPos,yPos) )
    ( (This)->lpVtbl -> get_ButtonAtPosition(This,xPos,yPos,plButton) )
    ( (This)->lpVtbl -> get_NumberOfChapters(This,lTitle,pVal) )
    ( (This)->lpVtbl -> get_TotalTitleTime(This,pVal) )
    ( (This)->lpVtbl -> get_TitlesAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_VolumesAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentVolume(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentDiscSide(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentDomain(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentChapter(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentTitle(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentTime(This,pVal) )
    ( (This)->lpVtbl -> DVDTimeCode2bstr(This,timeCode,pTimeStr) )
    ( (This)->lpVtbl -> get_DVDDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_DVDDirectory(This,newVal) )
    ( (This)->lpVtbl -> IsSubpictureStreamEnabled(This,lstream,fEnabled) )
    ( (This)->lpVtbl -> IsAudioStreamEnabled(This,lstream,fEnabled) )
    ( (This)->lpVtbl -> get_CurrentSubpictureStream(This,pVal) )
    ( (This)->lpVtbl -> put_CurrentSubpictureStream(This,newVal) )
    ( (This)->lpVtbl -> get_SubpictureLanguage(This,lStream,strLanguage) )
    ( (This)->lpVtbl -> get_CurrentAudioStream(This,pVal) )
    ( (This)->lpVtbl -> put_CurrentAudioStream(This,newVal) )
    ( (This)->lpVtbl -> get_AudioStreamsAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_AnglesAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentAngle(This,pVal) )
    ( (This)->lpVtbl -> put_CurrentAngle(This,newVal) )
    ( (This)->lpVtbl -> get_SubpictureStreamsAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_SubpictureOn(This,pVal) )
    ( (This)->lpVtbl -> put_SubpictureOn(This,newVal) )
    ( (This)->lpVtbl -> get_DVDUniqueID(This,pVal) )
    ( (This)->lpVtbl -> AcceptParentalLevelChange(This,fAccept,strUserName,strPassword) )
    ( (This)->lpVtbl -> NotifyParentalLevelChange(This,newVal) )
    ( (This)->lpVtbl -> SelectParentalCountry(This,lCountry,strUserName,strPassword) )
    ( (This)->lpVtbl -> SelectParentalLevel(This,lParentalLevel,strUserName,strPassword) )
    ( (This)->lpVtbl -> get_TitleParentalLevels(This,lTitle,plParentalLevels) )
    ( (This)->lpVtbl -> get_PlayerParentalCountry(This,plCountryCode) )
    ( (This)->lpVtbl -> get_PlayerParentalLevel(This,plParentalLevel) )
    ( (This)->lpVtbl -> Eject(This) )
    ( (This)->lpVtbl -> UOPValid(This,lUOP,pfValid) )
    ( (This)->lpVtbl -> get_SPRM(This,lIndex,psSPRM) )
    ( (This)->lpVtbl -> get_GPRM(This,lIndex,psSPRM) )
    ( (This)->lpVtbl -> put_GPRM(This,lIndex,sValue) )
    ( (This)->lpVtbl -> get_DVDTextStringType(This,lLangIndex,lStringIndex,pType) )
    ( (This)->lpVtbl -> get_DVDTextString(This,lLangIndex,lStringIndex,pstrText) )
    ( (This)->lpVtbl -> get_DVDTextNumberOfStrings(This,lLangIndex,plNumOfStrings) )
    ( (This)->lpVtbl -> get_DVDTextNumberOfLanguages(This,plNumOfLangs) )
    ( (This)->lpVtbl -> get_DVDTextLanguageLCID(This,lLangIndex,lcid) )
    ( (This)->lpVtbl -> RegionChange(This) )
    ( (This)->lpVtbl -> get_DVDAdm(This,pVal) )
    ( (This)->lpVtbl -> DeleteBookmark(This) )
    ( (This)->lpVtbl -> RestoreBookmark(This) )
    ( (This)->lpVtbl -> SaveBookmark(This) )
    ( (This)->lpVtbl -> SelectDefaultAudioLanguage(This,lang,ext) )
    ( (This)->lpVtbl -> SelectDefaultSubpictureLanguage(This,lang,ext) )
    ( (This)->lpVtbl -> get_PreferredSubpictureStream(This,pVal) )
    ( (This)->lpVtbl -> get_DefaultMenuLanguage(This,lang) )
    ( (This)->lpVtbl -> put_DefaultMenuLanguage(This,lang) )
    ( (This)->lpVtbl -> get_DefaultSubpictureLanguage(This,lang) )
    ( (This)->lpVtbl -> get_DefaultAudioLanguage(This,lang) )
    ( (This)->lpVtbl -> get_DefaultSubpictureLanguageExt(This,ext) )
    ( (This)->lpVtbl -> get_DefaultAudioLanguageExt(This,ext) )
    ( (This)->lpVtbl -> get_LanguageFromLCID(This,lcid,lang) )
    ( (This)->lpVtbl -> get_KaraokeAudioPresentationMode(This,pVal) )
    ( (This)->lpVtbl -> put_KaraokeAudioPresentationMode(This,newVal) )
    ( (This)->lpVtbl -> get_KaraokeChannelContent(This,lStream,lChan,lContent) )
    ( (This)->lpVtbl -> get_KaraokeChannelAssignment(This,lStream,lChannelAssignment) )
    ( (This)->lpVtbl -> RestorePreferredSettings(This) )
    ( (This)->lpVtbl -> get_ButtonRect(This,lButton,pRect) )
    ( (This)->lpVtbl -> get_DVDScreenInMouseCoordinates(This,ppRect) )
    ( (This)->lpVtbl -> put_DVDScreenInMouseCoordinates(This,pRect) )
EXTERN_C const IID IID_IMSVidWebDVD2;
    typedef struct IMSVidWebDVD2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidWebDVD2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidWebDVD2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidWebDVD2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidWebDVD2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidWebDVD2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidWebDVD2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in VARIANT *v);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableResetOnStop )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableResetOnStop )(
            __RPC__in IMSVidWebDVD2 * This,
                       VARIANT_BOOL newVal);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidWebDVD2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidWebDVD2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidWebDVD2 * This);
                            HRESULT ( STDMETHODCALLTYPE *get_CanStep )(
            __RPC__in IMSVidWebDVD2 * This,
                       VARIANT_BOOL fBackwards,
                                __RPC__out VARIANT_BOOL *pfCan);
                   HRESULT ( STDMETHODCALLTYPE *Step )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMSVidWebDVD2 * This,
                       double plRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out double *plRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_PositionMode )(
            __RPC__in IMSVidWebDVD2 * This,
                       PositionModeList lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PositionMode )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out PositionModeList *lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *lLength);
        HRESULT ( STDMETHODCALLTYPE *OnDVDEvent )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lEvent,
                       LONG_PTR lParam1,
                       LONG_PTR lParam2);
                               HRESULT ( STDMETHODCALLTYPE *PlayTitle )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lTitle);
                               HRESULT ( STDMETHODCALLTYPE *PlayChapterInTitle )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lTitle,
                       long lChapter);
                               HRESULT ( STDMETHODCALLTYPE *PlayChapter )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lChapter);
                               HRESULT ( STDMETHODCALLTYPE *PlayChaptersAutoStop )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lTitle,
                       long lstrChapter,
                       long lChapterCount);
                               HRESULT ( STDMETHODCALLTYPE *PlayAtTime )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in BSTR strTime);
                               HRESULT ( STDMETHODCALLTYPE *PlayAtTimeInTitle )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lTitle,
                       __RPC__in BSTR strTime);
                               HRESULT ( STDMETHODCALLTYPE *PlayPeriodInTitleAutoStop )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lTitle,
                       __RPC__in BSTR strStartTime,
                       __RPC__in BSTR strEndTime);
                               HRESULT ( STDMETHODCALLTYPE *ReplayChapter )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *PlayPrevChapter )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *PlayNextChapter )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *StillOff )(
            __RPC__in IMSVidWebDVD2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lStream,
                                     VARIANT_BOOL fFormat,
                                __RPC__deref_out_opt BSTR *strAudioLang);
                               HRESULT ( STDMETHODCALLTYPE *ShowMenu )(
            __RPC__in IMSVidWebDVD2 * This,
                       DVDMenuIDConstants MenuID);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *ReturnFromSubmenu )(
            __RPC__in IMSVidWebDVD2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonsAvailable )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentButton )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                               HRESULT ( STDMETHODCALLTYPE *SelectAndActivateButton )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lButton);
                               HRESULT ( STDMETHODCALLTYPE *ActivateButton )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectRightButton )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectLeftButton )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectLowerButton )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectUpperButton )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *ActivateAtPosition )(
            __RPC__in IMSVidWebDVD2 * This,
                       long xPos,
                       long yPos);
                               HRESULT ( STDMETHODCALLTYPE *SelectAtPosition )(
            __RPC__in IMSVidWebDVD2 * This,
                       long xPos,
                       long yPos);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonAtPosition )(
            __RPC__in IMSVidWebDVD2 * This,
                       long xPos,
                       long yPos,
                                __RPC__out long *plButton);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfChapters )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lTitle,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TotalTitleTime )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_TitlesAvailable )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_VolumesAvailable )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentVolume )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDiscSide )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDomain )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentChapter )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentTitle )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentTime )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *DVDTimeCode2bstr )(
            __RPC__in IMSVidWebDVD2 * This,
                       long timeCode,
                                __RPC__deref_out_opt BSTR *pTimeStr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDDirectory )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DVDDirectory )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in BSTR newVal);
                               HRESULT ( STDMETHODCALLTYPE *IsSubpictureStreamEnabled )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lstream,
                                __RPC__out VARIANT_BOOL *fEnabled);
                               HRESULT ( STDMETHODCALLTYPE *IsAudioStreamEnabled )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lstream,
                                __RPC__out VARIANT_BOOL *fEnabled);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSubpictureStream )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentSubpictureStream )(
            __RPC__in IMSVidWebDVD2 * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubpictureLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
            long lStream,
                                __RPC__deref_out_opt BSTR *strLanguage);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAudioStream )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentAudioStream )(
            __RPC__in IMSVidWebDVD2 * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioStreamsAvailable )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_AnglesAvailable )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentAngle )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentAngle )(
            __RPC__in IMSVidWebDVD2 * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubpictureStreamsAvailable )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubpictureOn )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SubpictureOn )(
            __RPC__in IMSVidWebDVD2 * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDUniqueID )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *AcceptParentalLevelChange )(
            __RPC__in IMSVidWebDVD2 * This,
                       VARIANT_BOOL fAccept,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                               HRESULT ( STDMETHODCALLTYPE *NotifyParentalLevelChange )(
            __RPC__in IMSVidWebDVD2 * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *SelectParentalCountry )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lCountry,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                               HRESULT ( STDMETHODCALLTYPE *SelectParentalLevel )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lParentalLevel,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                                        HRESULT ( STDMETHODCALLTYPE *get_TitleParentalLevels )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lTitle,
                                __RPC__out long *plParentalLevels);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlayerParentalCountry )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *plCountryCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PlayerParentalLevel )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *plParentalLevel);
                               HRESULT ( STDMETHODCALLTYPE *Eject )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *UOPValid )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lUOP,
                                __RPC__out VARIANT_BOOL *pfValid);
                                        HRESULT ( STDMETHODCALLTYPE *get_SPRM )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lIndex,
                                __RPC__out short *psSPRM);
                                        HRESULT ( STDMETHODCALLTYPE *get_GPRM )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lIndex,
                                __RPC__out short *psSPRM);
                                        HRESULT ( STDMETHODCALLTYPE *put_GPRM )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lIndex,
                       short sValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextStringType )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lLangIndex,
                       long lStringIndex,
                                __RPC__out DVDTextStringType *pType);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextString )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lLangIndex,
                       long lStringIndex,
                                __RPC__deref_out_opt BSTR *pstrText);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextNumberOfStrings )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lLangIndex,
                                __RPC__out long *plNumOfStrings);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextNumberOfLanguages )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *plNumOfLangs);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDTextLanguageLCID )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lLangIndex,
                                __RPC__out long *lcid);
                               HRESULT ( STDMETHODCALLTYPE *RegionChange )(
            __RPC__in IMSVidWebDVD2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDAdm )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt IDispatch **pVal);
                               HRESULT ( STDMETHODCALLTYPE *DeleteBookmark )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RestoreBookmark )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SaveBookmark )(
            __RPC__in IMSVidWebDVD2 * This);
                               HRESULT ( STDMETHODCALLTYPE *SelectDefaultAudioLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lang,
                       long ext);
                               HRESULT ( STDMETHODCALLTYPE *SelectDefaultSubpictureLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lang,
                       DVDSPExt ext);
                                        HRESULT ( STDMETHODCALLTYPE *get_PreferredSubpictureStream )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultMenuLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *lang);
                                        HRESULT ( STDMETHODCALLTYPE *put_DefaultMenuLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultSubpictureLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultAudioLanguage )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultSubpictureLanguageExt )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out DVDSPExt *ext);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultAudioLanguageExt )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *ext);
                                        HRESULT ( STDMETHODCALLTYPE *get_LanguageFromLCID )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lcid,
                                __RPC__deref_out_opt BSTR *lang);
                                        HRESULT ( STDMETHODCALLTYPE *get_KaraokeAudioPresentationMode )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_KaraokeAudioPresentationMode )(
            __RPC__in IMSVidWebDVD2 * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_KaraokeChannelContent )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lStream,
                       long lChan,
                                __RPC__out long *lContent);
                                        HRESULT ( STDMETHODCALLTYPE *get_KaraokeChannelAssignment )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lStream,
                                __RPC__out long *lChannelAssignment);
                               HRESULT ( STDMETHODCALLTYPE *RestorePreferredSettings )(
            __RPC__in IMSVidWebDVD2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_ButtonRect )(
            __RPC__in IMSVidWebDVD2 * This,
                       long lButton,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                                        HRESULT ( STDMETHODCALLTYPE *get_DVDScreenInMouseCoordinates )(
            __RPC__in IMSVidWebDVD2 * This,
                                __RPC__deref_out_opt IMSVidRect **ppRect);
                                        HRESULT ( STDMETHODCALLTYPE *put_DVDScreenInMouseCoordinates )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in_opt IMSVidRect *pRect);
                                        HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
            __RPC__in IMSVidWebDVD2 * This,
                                          __RPC__deref_out_ecount_full_opt(*pDataLength) BYTE **ppData,
                        __RPC__out DWORD *pDataLength);
                                        HRESULT ( STDMETHODCALLTYPE *put_Bookmark )(
            __RPC__in IMSVidWebDVD2 * This,
                       __RPC__in BYTE *pData,
                       DWORD dwDataLength);
        END_INTERFACE
    } IMSVidWebDVD2Vtbl;
    interface IMSVidWebDVD2
    {
        CONST_VTBL struct IMSVidWebDVD2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_EnableResetOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_EnableResetOnStop(This,newVal) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_CanStep(This,fBackwards,pfCan) )
    ( (This)->lpVtbl -> Step(This,lStep) )
    ( (This)->lpVtbl -> put_Rate(This,plRate) )
    ( (This)->lpVtbl -> get_Rate(This,plRate) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> put_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_Length(This,lLength) )
    ( (This)->lpVtbl -> OnDVDEvent(This,lEvent,lParam1,lParam2) )
    ( (This)->lpVtbl -> PlayTitle(This,lTitle) )
    ( (This)->lpVtbl -> PlayChapterInTitle(This,lTitle,lChapter) )
    ( (This)->lpVtbl -> PlayChapter(This,lChapter) )
    ( (This)->lpVtbl -> PlayChaptersAutoStop(This,lTitle,lstrChapter,lChapterCount) )
    ( (This)->lpVtbl -> PlayAtTime(This,strTime) )
    ( (This)->lpVtbl -> PlayAtTimeInTitle(This,lTitle,strTime) )
    ( (This)->lpVtbl -> PlayPeriodInTitleAutoStop(This,lTitle,strStartTime,strEndTime) )
    ( (This)->lpVtbl -> ReplayChapter(This) )
    ( (This)->lpVtbl -> PlayPrevChapter(This) )
    ( (This)->lpVtbl -> PlayNextChapter(This) )
    ( (This)->lpVtbl -> StillOff(This) )
    ( (This)->lpVtbl -> get_AudioLanguage(This,lStream,fFormat,strAudioLang) )
    ( (This)->lpVtbl -> ShowMenu(This,MenuID) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> ReturnFromSubmenu(This) )
    ( (This)->lpVtbl -> get_ButtonsAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentButton(This,pVal) )
    ( (This)->lpVtbl -> SelectAndActivateButton(This,lButton) )
    ( (This)->lpVtbl -> ActivateButton(This) )
    ( (This)->lpVtbl -> SelectRightButton(This) )
    ( (This)->lpVtbl -> SelectLeftButton(This) )
    ( (This)->lpVtbl -> SelectLowerButton(This) )
    ( (This)->lpVtbl -> SelectUpperButton(This) )
    ( (This)->lpVtbl -> ActivateAtPosition(This,xPos,yPos) )
    ( (This)->lpVtbl -> SelectAtPosition(This,xPos,yPos) )
    ( (This)->lpVtbl -> get_ButtonAtPosition(This,xPos,yPos,plButton) )
    ( (This)->lpVtbl -> get_NumberOfChapters(This,lTitle,pVal) )
    ( (This)->lpVtbl -> get_TotalTitleTime(This,pVal) )
    ( (This)->lpVtbl -> get_TitlesAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_VolumesAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentVolume(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentDiscSide(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentDomain(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentChapter(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentTitle(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentTime(This,pVal) )
    ( (This)->lpVtbl -> DVDTimeCode2bstr(This,timeCode,pTimeStr) )
    ( (This)->lpVtbl -> get_DVDDirectory(This,pVal) )
    ( (This)->lpVtbl -> put_DVDDirectory(This,newVal) )
    ( (This)->lpVtbl -> IsSubpictureStreamEnabled(This,lstream,fEnabled) )
    ( (This)->lpVtbl -> IsAudioStreamEnabled(This,lstream,fEnabled) )
    ( (This)->lpVtbl -> get_CurrentSubpictureStream(This,pVal) )
    ( (This)->lpVtbl -> put_CurrentSubpictureStream(This,newVal) )
    ( (This)->lpVtbl -> get_SubpictureLanguage(This,lStream,strLanguage) )
    ( (This)->lpVtbl -> get_CurrentAudioStream(This,pVal) )
    ( (This)->lpVtbl -> put_CurrentAudioStream(This,newVal) )
    ( (This)->lpVtbl -> get_AudioStreamsAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_AnglesAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_CurrentAngle(This,pVal) )
    ( (This)->lpVtbl -> put_CurrentAngle(This,newVal) )
    ( (This)->lpVtbl -> get_SubpictureStreamsAvailable(This,pVal) )
    ( (This)->lpVtbl -> get_SubpictureOn(This,pVal) )
    ( (This)->lpVtbl -> put_SubpictureOn(This,newVal) )
    ( (This)->lpVtbl -> get_DVDUniqueID(This,pVal) )
    ( (This)->lpVtbl -> AcceptParentalLevelChange(This,fAccept,strUserName,strPassword) )
    ( (This)->lpVtbl -> NotifyParentalLevelChange(This,newVal) )
    ( (This)->lpVtbl -> SelectParentalCountry(This,lCountry,strUserName,strPassword) )
    ( (This)->lpVtbl -> SelectParentalLevel(This,lParentalLevel,strUserName,strPassword) )
    ( (This)->lpVtbl -> get_TitleParentalLevels(This,lTitle,plParentalLevels) )
    ( (This)->lpVtbl -> get_PlayerParentalCountry(This,plCountryCode) )
    ( (This)->lpVtbl -> get_PlayerParentalLevel(This,plParentalLevel) )
    ( (This)->lpVtbl -> Eject(This) )
    ( (This)->lpVtbl -> UOPValid(This,lUOP,pfValid) )
    ( (This)->lpVtbl -> get_SPRM(This,lIndex,psSPRM) )
    ( (This)->lpVtbl -> get_GPRM(This,lIndex,psSPRM) )
    ( (This)->lpVtbl -> put_GPRM(This,lIndex,sValue) )
    ( (This)->lpVtbl -> get_DVDTextStringType(This,lLangIndex,lStringIndex,pType) )
    ( (This)->lpVtbl -> get_DVDTextString(This,lLangIndex,lStringIndex,pstrText) )
    ( (This)->lpVtbl -> get_DVDTextNumberOfStrings(This,lLangIndex,plNumOfStrings) )
    ( (This)->lpVtbl -> get_DVDTextNumberOfLanguages(This,plNumOfLangs) )
    ( (This)->lpVtbl -> get_DVDTextLanguageLCID(This,lLangIndex,lcid) )
    ( (This)->lpVtbl -> RegionChange(This) )
    ( (This)->lpVtbl -> get_DVDAdm(This,pVal) )
    ( (This)->lpVtbl -> DeleteBookmark(This) )
    ( (This)->lpVtbl -> RestoreBookmark(This) )
    ( (This)->lpVtbl -> SaveBookmark(This) )
    ( (This)->lpVtbl -> SelectDefaultAudioLanguage(This,lang,ext) )
    ( (This)->lpVtbl -> SelectDefaultSubpictureLanguage(This,lang,ext) )
    ( (This)->lpVtbl -> get_PreferredSubpictureStream(This,pVal) )
    ( (This)->lpVtbl -> get_DefaultMenuLanguage(This,lang) )
    ( (This)->lpVtbl -> put_DefaultMenuLanguage(This,lang) )
    ( (This)->lpVtbl -> get_DefaultSubpictureLanguage(This,lang) )
    ( (This)->lpVtbl -> get_DefaultAudioLanguage(This,lang) )
    ( (This)->lpVtbl -> get_DefaultSubpictureLanguageExt(This,ext) )
    ( (This)->lpVtbl -> get_DefaultAudioLanguageExt(This,ext) )
    ( (This)->lpVtbl -> get_LanguageFromLCID(This,lcid,lang) )
    ( (This)->lpVtbl -> get_KaraokeAudioPresentationMode(This,pVal) )
    ( (This)->lpVtbl -> put_KaraokeAudioPresentationMode(This,newVal) )
    ( (This)->lpVtbl -> get_KaraokeChannelContent(This,lStream,lChan,lContent) )
    ( (This)->lpVtbl -> get_KaraokeChannelAssignment(This,lStream,lChannelAssignment) )
    ( (This)->lpVtbl -> RestorePreferredSettings(This) )
    ( (This)->lpVtbl -> get_ButtonRect(This,lButton,pRect) )
    ( (This)->lpVtbl -> get_DVDScreenInMouseCoordinates(This,ppRect) )
    ( (This)->lpVtbl -> put_DVDScreenInMouseCoordinates(This,pRect) )
    ( (This)->lpVtbl -> get_Bookmark(This,ppData,pDataLength) )
    ( (This)->lpVtbl -> put_Bookmark(This,pData,dwDataLength) )
                                HRESULT STDMETHODCALLTYPE IMSVidWebDVD2_put_Bookmark_Proxy(
    __RPC__in IMSVidWebDVD2 * This,
               __RPC__in BYTE *pData,
               DWORD dwDataLength);
void __RPC_STUB IMSVidWebDVD2_put_Bookmark_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IMSVidWebDVDEvent;
    typedef struct IMSVidWebDVDEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidWebDVDEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidWebDVDEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidWebDVDEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidWebDVDEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidWebDVDEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidWebDVDEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidWebDVDEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EndOfMedia )(
            __RPC__in IMSVidWebDVDEvent * This,
                       __RPC__in_opt IMSVidPlayback *lpd);
                               HRESULT ( STDMETHODCALLTYPE *DVDNotify )(
            __RPC__in IMSVidWebDVDEvent * This,
                       long lEventCode,
                       VARIANT lParam1,
                       VARIANT lParam2);
                               HRESULT ( STDMETHODCALLTYPE *PlayForwards )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayBackwards )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ShowMenu )(
            __RPC__in IMSVidWebDVDEvent * This,
                       DVDMenuIDConstants MenuID,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *SelectOrActivateButton )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *StillOff )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PauseOn )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ChangeCurrentAudioStream )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ChangeCurrentSubpictureStream )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ChangeCurrentAngle )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayAtTimeInTitle )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayAtTime )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayChapterInTitle )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayChapter )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ReplayChapter )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayNextChapter )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ReturnFromSubmenu )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayTitle )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *PlayPrevChapter )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ChangeKaraokePresMode )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
                               HRESULT ( STDMETHODCALLTYPE *ChangeVideoPresMode )(
            __RPC__in IMSVidWebDVDEvent * This,
                       VARIANT_BOOL bEnabled);
        END_INTERFACE
    } IMSVidWebDVDEventVtbl;
    interface IMSVidWebDVDEvent
    {
        CONST_VTBL struct IMSVidWebDVDEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EndOfMedia(This,lpd) )
    ( (This)->lpVtbl -> DVDNotify(This,lEventCode,lParam1,lParam2) )
    ( (This)->lpVtbl -> PlayForwards(This,bEnabled) )
    ( (This)->lpVtbl -> PlayBackwards(This,bEnabled) )
    ( (This)->lpVtbl -> ShowMenu(This,MenuID,bEnabled) )
    ( (This)->lpVtbl -> Resume(This,bEnabled) )
    ( (This)->lpVtbl -> SelectOrActivateButton(This,bEnabled) )
    ( (This)->lpVtbl -> StillOff(This,bEnabled) )
    ( (This)->lpVtbl -> PauseOn(This,bEnabled) )
    ( (This)->lpVtbl -> ChangeCurrentAudioStream(This,bEnabled) )
    ( (This)->lpVtbl -> ChangeCurrentSubpictureStream(This,bEnabled) )
    ( (This)->lpVtbl -> ChangeCurrentAngle(This,bEnabled) )
    ( (This)->lpVtbl -> PlayAtTimeInTitle(This,bEnabled) )
    ( (This)->lpVtbl -> PlayAtTime(This,bEnabled) )
    ( (This)->lpVtbl -> PlayChapterInTitle(This,bEnabled) )
    ( (This)->lpVtbl -> PlayChapter(This,bEnabled) )
    ( (This)->lpVtbl -> ReplayChapter(This,bEnabled) )
    ( (This)->lpVtbl -> PlayNextChapter(This,bEnabled) )
    ( (This)->lpVtbl -> Stop(This,bEnabled) )
    ( (This)->lpVtbl -> ReturnFromSubmenu(This,bEnabled) )
    ( (This)->lpVtbl -> PlayTitle(This,bEnabled) )
    ( (This)->lpVtbl -> PlayPrevChapter(This,bEnabled) )
    ( (This)->lpVtbl -> ChangeKaraokePresMode(This,bEnabled) )
    ( (This)->lpVtbl -> ChangeVideoPresMode(This,bEnabled) )
EXTERN_C const IID IID_IMSVidWebDVDAdm;
    typedef struct IMSVidWebDVDAdmVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidWebDVDAdm * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidWebDVDAdm * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidWebDVDAdm * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidWebDVDAdm * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidWebDVDAdm * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidWebDVDAdm * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidWebDVDAdm * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *ChangePassword )(
            __RPC__in IMSVidWebDVDAdm * This,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strOld,
                       __RPC__in BSTR strNew);
                               HRESULT ( STDMETHODCALLTYPE *SaveParentalLevel )(
            __RPC__in IMSVidWebDVDAdm * This,
                       long level,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                               HRESULT ( STDMETHODCALLTYPE *SaveParentalCountry )(
            __RPC__in IMSVidWebDVDAdm * This,
                       long country,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword);
                                                   HRESULT ( STDMETHODCALLTYPE *ConfirmPassword )(
            __RPC__in IMSVidWebDVDAdm * This,
                       __RPC__in BSTR strUserName,
                       __RPC__in BSTR strPassword,
                                __RPC__out VARIANT_BOOL *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetParentalLevel )(
            __RPC__in IMSVidWebDVDAdm * This,
                                __RPC__out long *lLevel);
                               HRESULT ( STDMETHODCALLTYPE *GetParentalCountry )(
            __RPC__in IMSVidWebDVDAdm * This,
                                __RPC__out long *lCountry);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultAudioLCID )(
            __RPC__in IMSVidWebDVDAdm * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DefaultAudioLCID )(
            __RPC__in IMSVidWebDVDAdm * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultSubpictureLCID )(
            __RPC__in IMSVidWebDVDAdm * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DefaultSubpictureLCID )(
            __RPC__in IMSVidWebDVDAdm * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultMenuLCID )(
            __RPC__in IMSVidWebDVDAdm * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_DefaultMenuLCID )(
            __RPC__in IMSVidWebDVDAdm * This,
                       long newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_BookmarkOnStop )(
            __RPC__in IMSVidWebDVDAdm * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_BookmarkOnStop )(
            __RPC__in IMSVidWebDVDAdm * This,
                       VARIANT_BOOL newVal);
        END_INTERFACE
    } IMSVidWebDVDAdmVtbl;
    interface IMSVidWebDVDAdm
    {
        CONST_VTBL struct IMSVidWebDVDAdmVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ChangePassword(This,strUserName,strOld,strNew) )
    ( (This)->lpVtbl -> SaveParentalLevel(This,level,strUserName,strPassword) )
    ( (This)->lpVtbl -> SaveParentalCountry(This,country,strUserName,strPassword) )
    ( (This)->lpVtbl -> ConfirmPassword(This,strUserName,strPassword,pVal) )
    ( (This)->lpVtbl -> GetParentalLevel(This,lLevel) )
    ( (This)->lpVtbl -> GetParentalCountry(This,lCountry) )
    ( (This)->lpVtbl -> get_DefaultAudioLCID(This,pVal) )
    ( (This)->lpVtbl -> put_DefaultAudioLCID(This,newVal) )
    ( (This)->lpVtbl -> get_DefaultSubpictureLCID(This,pVal) )
    ( (This)->lpVtbl -> put_DefaultSubpictureLCID(This,newVal) )
    ( (This)->lpVtbl -> get_DefaultMenuLCID(This,pVal) )
    ( (This)->lpVtbl -> put_DefaultMenuLCID(This,newVal) )
    ( (This)->lpVtbl -> get_BookmarkOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_BookmarkOnStop(This,newVal) )
EXTERN_C const IID IID_IMSVidOutputDevice;
    typedef struct IMSVidOutputDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidOutputDevice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidOutputDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidOutputDevice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidOutputDevice * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidOutputDevice * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidOutputDevice * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidOutputDevice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidOutputDevice * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidOutputDevice * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidOutputDevice * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidOutputDevice * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidOutputDevice * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidOutputDevice * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidOutputDevice * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidOutputDevice * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidOutputDevice * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
        END_INTERFACE
    } IMSVidOutputDeviceVtbl;
    interface IMSVidOutputDevice
    {
        CONST_VTBL struct IMSVidOutputDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
EXTERN_C const IID IID_IMSVidOutputDeviceEvent;
    typedef struct IMSVidOutputDeviceEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidOutputDeviceEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidOutputDeviceEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidOutputDeviceEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidOutputDeviceEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidOutputDeviceEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidOutputDeviceEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidOutputDeviceEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidOutputDeviceEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
        END_INTERFACE
    } IMSVidOutputDeviceEventVtbl;
    interface IMSVidOutputDeviceEvent
    {
        CONST_VTBL struct IMSVidOutputDeviceEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
EXTERN_C const IID IID_IMSVidFeature;
    typedef struct IMSVidFeatureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidFeature * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidFeature * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidFeature * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidFeature * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidFeature * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidFeature * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidFeature * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidFeature * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidFeature * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidFeature * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidFeature * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidFeature * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidFeature * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidFeature * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidFeature * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidFeature * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
        END_INTERFACE
    } IMSVidFeatureVtbl;
    interface IMSVidFeature
    {
        CONST_VTBL struct IMSVidFeatureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
EXTERN_C const IID IID_IMSVidFeatureEvent;
    typedef struct IMSVidFeatureEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidFeatureEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidFeatureEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidFeatureEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidFeatureEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidFeatureEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidFeatureEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidFeatureEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidFeatureEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
        END_INTERFACE
    } IMSVidFeatureEventVtbl;
    interface IMSVidFeatureEvent
    {
        CONST_VTBL struct IMSVidFeatureEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
EXTERN_C const IID IID_IMSVidEncoder;
    typedef struct IMSVidEncoderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidEncoder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidEncoder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidEncoder * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidEncoder * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidEncoder * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidEncoder * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidEncoder * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidEncoder * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidEncoder * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_VideoEncoderInterface )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__deref_out_opt IUnknown **ppEncInt);
                            HRESULT ( STDMETHODCALLTYPE *get_AudioEncoderInterface )(
            __RPC__in IMSVidEncoder * This,
                                __RPC__deref_out_opt IUnknown **ppEncInt);
        END_INTERFACE
    } IMSVidEncoderVtbl;
    interface IMSVidEncoder
    {
        CONST_VTBL struct IMSVidEncoderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_VideoEncoderInterface(This,ppEncInt) )
    ( (This)->lpVtbl -> get_AudioEncoderInterface(This,ppEncInt) )
EXTERN_C const IID IID_IMSVidClosedCaptioning;
    typedef struct IMSVidClosedCaptioningVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidClosedCaptioning * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidClosedCaptioning * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidClosedCaptioning * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidClosedCaptioning * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidClosedCaptioning * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidClosedCaptioning * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidClosedCaptioning * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidClosedCaptioning * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidClosedCaptioning * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_Enable )(
            __RPC__in IMSVidClosedCaptioning * This,
                                __RPC__out VARIANT_BOOL *On);
                            HRESULT ( STDMETHODCALLTYPE *put_Enable )(
            __RPC__in IMSVidClosedCaptioning * This,
                       VARIANT_BOOL On);
        END_INTERFACE
    } IMSVidClosedCaptioningVtbl;
    interface IMSVidClosedCaptioning
    {
        CONST_VTBL struct IMSVidClosedCaptioningVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_Enable(This,On) )
    ( (This)->lpVtbl -> put_Enable(This,On) )
EXTERN_C const IID IID_IMSVidClosedCaptioning2;
    typedef struct IMSVidClosedCaptioning2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidClosedCaptioning2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidClosedCaptioning2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidClosedCaptioning2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_Enable )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__out VARIANT_BOOL *On);
                            HRESULT ( STDMETHODCALLTYPE *put_Enable )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                       VARIANT_BOOL On);
                            HRESULT ( STDMETHODCALLTYPE *get_Service )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                                __RPC__out MSVidCCService *On);
                            HRESULT ( STDMETHODCALLTYPE *put_Service )(
            __RPC__in IMSVidClosedCaptioning2 * This,
                       MSVidCCService On);
        END_INTERFACE
    } IMSVidClosedCaptioning2Vtbl;
    interface IMSVidClosedCaptioning2
    {
        CONST_VTBL struct IMSVidClosedCaptioning2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_Enable(This,On) )
    ( (This)->lpVtbl -> put_Enable(This,On) )
    ( (This)->lpVtbl -> get_Service(This,On) )
    ( (This)->lpVtbl -> put_Service(This,On) )
EXTERN_C const IID IID_IMSVidClosedCaptioning3;
    typedef struct IMSVidClosedCaptioning3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidClosedCaptioning3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidClosedCaptioning3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidClosedCaptioning3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_Enable )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__out VARIANT_BOOL *On);
                            HRESULT ( STDMETHODCALLTYPE *put_Enable )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                       VARIANT_BOOL On);
                            HRESULT ( STDMETHODCALLTYPE *get_Service )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__out MSVidCCService *On);
                            HRESULT ( STDMETHODCALLTYPE *put_Service )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                       MSVidCCService On);
                            HRESULT ( STDMETHODCALLTYPE *get_TeleTextFilter )(
            __RPC__in IMSVidClosedCaptioning3 * This,
                                __RPC__deref_out_opt IUnknown **punkTTFilter);
        END_INTERFACE
    } IMSVidClosedCaptioning3Vtbl;
    interface IMSVidClosedCaptioning3
    {
        CONST_VTBL struct IMSVidClosedCaptioning3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_Enable(This,On) )
    ( (This)->lpVtbl -> put_Enable(This,On) )
    ( (This)->lpVtbl -> get_Service(This,On) )
    ( (This)->lpVtbl -> put_Service(This,On) )
    ( (This)->lpVtbl -> get_TeleTextFilter(This,punkTTFilter) )
EXTERN_C const IID IID_IMSVidXDS;
    typedef struct IMSVidXDSVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidXDS * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidXDS * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidXDS * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidXDS * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidXDS * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidXDS * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidXDS * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidXDS * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidXDS * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidXDS * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidXDS * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidXDS * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidXDS * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidXDS * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidXDS * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidXDS * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_ChannelChangeInterface )(
            __RPC__in IMSVidXDS * This,
                                __RPC__deref_out_opt IUnknown **punkCC);
        END_INTERFACE
    } IMSVidXDSVtbl;
    interface IMSVidXDS
    {
        CONST_VTBL struct IMSVidXDSVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_ChannelChangeInterface(This,punkCC) )
EXTERN_C const IID IID_IMSVidXDSEvent;
    typedef struct IMSVidXDSEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidXDSEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidXDSEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidXDSEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidXDSEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidXDSEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidXDSEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidXDSEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidXDSEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                               HRESULT ( STDMETHODCALLTYPE *RatingChange )(
            __RPC__in IMSVidXDSEvent * This,
                       EnTvRat_System PrevRatingSystem,
                       EnTvRat_GenericLevel PrevLevel,
                       BfEnTvRat_GenericAttributes PrevAttributes,
                       EnTvRat_System NewRatingSystem,
                       EnTvRat_GenericLevel NewLevel,
                       BfEnTvRat_GenericAttributes NewAttributes);
        END_INTERFACE
    } IMSVidXDSEventVtbl;
    interface IMSVidXDSEvent
    {
        CONST_VTBL struct IMSVidXDSEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> RatingChange(This,PrevRatingSystem,PrevLevel,PrevAttributes,NewRatingSystem,NewLevel,NewAttributes) )
EXTERN_C const IID IID_IMSVidDataServices;
    typedef struct IMSVidDataServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidDataServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidDataServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidDataServices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidDataServices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidDataServices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidDataServices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidDataServices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidDataServices * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidDataServices * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidDataServices * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidDataServices * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidDataServices * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidDataServices * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidDataServices * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidDataServices * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidDataServices * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
        END_INTERFACE
    } IMSVidDataServicesVtbl;
    interface IMSVidDataServices
    {
        CONST_VTBL struct IMSVidDataServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
EXTERN_C const IID IID_IMSVidDataServicesEvent;
    typedef struct IMSVidDataServicesEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidDataServicesEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidDataServicesEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidDataServicesEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidDataServicesEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidDataServicesEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidDataServicesEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidDataServicesEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidDataServicesEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
        END_INTERFACE
    } IMSVidDataServicesEventVtbl;
    interface IMSVidDataServicesEvent
    {
        CONST_VTBL struct IMSVidDataServicesEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
typedef
enum SourceSizeList
    {
        sslFullSize = 0,
        sslClipByOverScan = ( sslFullSize + 1 ) ,
        sslClipByClipRect = ( sslClipByOverScan + 1 )
    } SourceSizeList;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0039_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSVidVideoRenderer;
    typedef struct IMSVidVideoRendererVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVideoRenderer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVideoRenderer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidVideoRenderer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidVideoRenderer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidVideoRenderer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidVideoRenderer * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt BSTR *CompositorCLSID);
                            HRESULT ( STDMETHODCALLTYPE *put_CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in BSTR CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out GUID *CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in REFCLSID CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositor )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IVMRImageCompositor **Compositor);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositor )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in_opt IVMRImageCompositor *Compositor);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmap )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IPictureDisp **MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *get__MixerBitmap )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IVMRMixerBitmap **MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmap )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *put__MixerBitmap )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in VMRALPHABITMAP *MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapPositionRect )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IMSVidRect **rDest);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapPositionRect )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapOpacity )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out int *opacity);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapOpacity )(
            __RPC__in IMSVidVideoRenderer * This,
                       int opacity);
                   HRESULT ( STDMETHODCALLTYPE *SetupMixerBitmap )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp,
                       long Opacity,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_SourceSize )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out SourceSizeList *CurrentSize);
                            HRESULT ( STDMETHODCALLTYPE *put_SourceSize )(
            __RPC__in IMSVidVideoRenderer * This,
                       SourceSizeList NewSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverScan )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out long *plPercent);
                                        HRESULT ( STDMETHODCALLTYPE *put_OverScan )(
            __RPC__in IMSVidVideoRenderer * This,
                       long lPercent);
                            HRESULT ( STDMETHODCALLTYPE *get_AvailableSourceRect )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxVidRect )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MinVidRect )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_ClippedSourceRect )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *put_ClippedSourceRect )(
            __RPC__in IMSVidVideoRenderer * This,
                       __RPC__in_opt IMSVidRect *pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_UsingOverlay )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out VARIANT_BOOL *UseOverlayVal);
                            HRESULT ( STDMETHODCALLTYPE *put_UsingOverlay )(
            __RPC__in IMSVidVideoRenderer * This,
                       VARIANT_BOOL UseOverlayVal);
                   HRESULT ( STDMETHODCALLTYPE *Capture )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__deref_out_opt IPictureDisp **currentImage);
                                        HRESULT ( STDMETHODCALLTYPE *get_FramesPerSecond )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DecimateInput )(
            __RPC__in IMSVidVideoRenderer * This,
                                __RPC__out VARIANT_BOOL *pDeci);
                                        HRESULT ( STDMETHODCALLTYPE *put_DecimateInput )(
            __RPC__in IMSVidVideoRenderer * This,
                       VARIANT_BOOL pDeci);
        END_INTERFACE
    } IMSVidVideoRendererVtbl;
    interface IMSVidVideoRenderer
    {
        CONST_VTBL struct IMSVidVideoRendererVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> put__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> get_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> get__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> put_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> put__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> get_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> put_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> get_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> put_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetupMixerBitmap(This,MixerPictureDisp,Opacity,rDest) )
    ( (This)->lpVtbl -> get_SourceSize(This,CurrentSize) )
    ( (This)->lpVtbl -> put_SourceSize(This,NewSize) )
    ( (This)->lpVtbl -> get_OverScan(This,plPercent) )
    ( (This)->lpVtbl -> put_OverScan(This,lPercent) )
    ( (This)->lpVtbl -> get_AvailableSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_MaxVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_MinVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> put_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> put_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> Capture(This,currentImage) )
    ( (This)->lpVtbl -> get_FramesPerSecond(This,pVal) )
    ( (This)->lpVtbl -> get_DecimateInput(This,pDeci) )
    ( (This)->lpVtbl -> put_DecimateInput(This,pDeci) )
EXTERN_C const IID IID_IMSVidVideoRendererEvent;
    typedef struct IMSVidVideoRendererEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVideoRendererEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVideoRendererEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVideoRendererEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidVideoRendererEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidVideoRendererEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidVideoRendererEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidVideoRendererEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidVideoRendererEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                               HRESULT ( STDMETHODCALLTYPE *OverlayUnavailable )(
            __RPC__in IMSVidVideoRendererEvent * This);
        END_INTERFACE
    } IMSVidVideoRendererEventVtbl;
    interface IMSVidVideoRendererEvent
    {
        CONST_VTBL struct IMSVidVideoRendererEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> OverlayUnavailable(This) )
EXTERN_C const IID IID_IMSVidGenericSink;
    typedef struct IMSVidGenericSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidGenericSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidGenericSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidGenericSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidGenericSink * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidGenericSink * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidGenericSink * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidGenericSink * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidGenericSink * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidGenericSink * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                               HRESULT ( STDMETHODCALLTYPE *SetSinkFilter )(
            __RPC__in IMSVidGenericSink * This,
            __RPC__in BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_SinkStreams )(
            __RPC__in IMSVidGenericSink * This,
                                __RPC__out MSVidSinkStreams *pStreams);
                                        HRESULT ( STDMETHODCALLTYPE *put_SinkStreams )(
            __RPC__in IMSVidGenericSink * This,
                       MSVidSinkStreams Streams);
        END_INTERFACE
    } IMSVidGenericSinkVtbl;
    interface IMSVidGenericSink
    {
        CONST_VTBL struct IMSVidGenericSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> SetSinkFilter(This,bstrName) )
    ( (This)->lpVtbl -> get_SinkStreams(This,pStreams) )
    ( (This)->lpVtbl -> put_SinkStreams(This,Streams) )
EXTERN_C const IID IID_IMSVidGenericSink2;
    typedef struct IMSVidGenericSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidGenericSink2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidGenericSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidGenericSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidGenericSink2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidGenericSink2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidGenericSink2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidGenericSink2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidGenericSink2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidGenericSink2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                               HRESULT ( STDMETHODCALLTYPE *SetSinkFilter )(
            __RPC__in IMSVidGenericSink2 * This,
            __RPC__in BSTR bstrName);
                                        HRESULT ( STDMETHODCALLTYPE *get_SinkStreams )(
            __RPC__in IMSVidGenericSink2 * This,
                                __RPC__out MSVidSinkStreams *pStreams);
                                        HRESULT ( STDMETHODCALLTYPE *put_SinkStreams )(
            __RPC__in IMSVidGenericSink2 * This,
                       MSVidSinkStreams Streams);
                               HRESULT ( STDMETHODCALLTYPE *AddFilter )(
            __RPC__in IMSVidGenericSink2 * This,
            __RPC__in BSTR bstrName);
                               HRESULT ( STDMETHODCALLTYPE *ResetFilterList )(
            __RPC__in IMSVidGenericSink2 * This);
        END_INTERFACE
    } IMSVidGenericSink2Vtbl;
    interface IMSVidGenericSink2
    {
        CONST_VTBL struct IMSVidGenericSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> SetSinkFilter(This,bstrName) )
    ( (This)->lpVtbl -> get_SinkStreams(This,pStreams) )
    ( (This)->lpVtbl -> put_SinkStreams(This,Streams) )
    ( (This)->lpVtbl -> AddFilter(This,bstrName) )
    ( (This)->lpVtbl -> ResetFilterList(This) )
EXTERN_C const IID IID_IMSVidStreamBufferRecordingControl;
    typedef struct IMSVidStreamBufferRecordingControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferRecordingControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferRecordingControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferRecordingControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                                __RPC__out long *rtStart);
                                        HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                       long rtStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_StopTime )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                                __RPC__out long *rtStop);
                                        HRESULT ( STDMETHODCALLTYPE *put_StopTime )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                       long rtStop);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecordingStopped )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                                __RPC__out VARIANT_BOOL *phResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecordingStarted )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                                __RPC__out VARIANT_BOOL *phResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecordingType )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                                __RPC__out RecordingType *dwType);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecordingAttribute )(
            __RPC__in IMSVidStreamBufferRecordingControl * This,
                                __RPC__deref_out_opt IUnknown **pRecordingAttribute);
        END_INTERFACE
    } IMSVidStreamBufferRecordingControlVtbl;
    interface IMSVidStreamBufferRecordingControl
    {
        CONST_VTBL struct IMSVidStreamBufferRecordingControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StartTime(This,rtStart) )
    ( (This)->lpVtbl -> put_StartTime(This,rtStart) )
    ( (This)->lpVtbl -> get_StopTime(This,rtStop) )
    ( (This)->lpVtbl -> put_StopTime(This,rtStop) )
    ( (This)->lpVtbl -> get_RecordingStopped(This,phResult) )
    ( (This)->lpVtbl -> get_RecordingStarted(This,phResult) )
    ( (This)->lpVtbl -> get_RecordingType(This,dwType) )
    ( (This)->lpVtbl -> get_RecordingAttribute(This,pRecordingAttribute) )
EXTERN_C const IID IID_IMSVidStreamBufferSink;
    typedef struct IMSVidStreamBufferSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSink * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSink * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSink * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSink * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSink * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidStreamBufferSink * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidStreamBufferSink * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentRecorder )(
            __RPC__in IMSVidStreamBufferSink * This,
                       __RPC__in BSTR pszFilename,
                                __RPC__deref_out_opt IMSVidStreamBufferRecordingControl **pRecordingIUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReferenceRecorder )(
            __RPC__in IMSVidStreamBufferSink * This,
                       __RPC__in BSTR pszFilename,
                                __RPC__deref_out_opt IMSVidStreamBufferRecordingControl **pRecordingIUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_SinkName )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SinkName )(
            __RPC__in IMSVidStreamBufferSink * This,
                       __RPC__in BSTR Name);
                               HRESULT ( STDMETHODCALLTYPE *NameSetLock )(
            __RPC__in IMSVidStreamBufferSink * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SBESink )(
            __RPC__in IMSVidStreamBufferSink * This,
                                __RPC__deref_out_opt IUnknown **sbeConfig);
        END_INTERFACE
    } IMSVidStreamBufferSinkVtbl;
    interface IMSVidStreamBufferSink
    {
        CONST_VTBL struct IMSVidStreamBufferSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_ContentRecorder(This,pszFilename,pRecordingIUnknown) )
    ( (This)->lpVtbl -> get_ReferenceRecorder(This,pszFilename,pRecordingIUnknown) )
    ( (This)->lpVtbl -> get_SinkName(This,pName) )
    ( (This)->lpVtbl -> put_SinkName(This,Name) )
    ( (This)->lpVtbl -> NameSetLock(This) )
    ( (This)->lpVtbl -> get_SBESink(This,sbeConfig) )
EXTERN_C const IID IID_IMSVidStreamBufferSink2;
    typedef struct IMSVidStreamBufferSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSink2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentRecorder )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       __RPC__in BSTR pszFilename,
                                __RPC__deref_out_opt IMSVidStreamBufferRecordingControl **pRecordingIUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReferenceRecorder )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       __RPC__in BSTR pszFilename,
                                __RPC__deref_out_opt IMSVidStreamBufferRecordingControl **pRecordingIUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_SinkName )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SinkName )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                       __RPC__in BSTR Name);
                               HRESULT ( STDMETHODCALLTYPE *NameSetLock )(
            __RPC__in IMSVidStreamBufferSink2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SBESink )(
            __RPC__in IMSVidStreamBufferSink2 * This,
                                __RPC__deref_out_opt IUnknown **sbeConfig);
                               HRESULT ( STDMETHODCALLTYPE *UnlockProfile )(
            __RPC__in IMSVidStreamBufferSink2 * This);
        END_INTERFACE
    } IMSVidStreamBufferSink2Vtbl;
    interface IMSVidStreamBufferSink2
    {
        CONST_VTBL struct IMSVidStreamBufferSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_ContentRecorder(This,pszFilename,pRecordingIUnknown) )
    ( (This)->lpVtbl -> get_ReferenceRecorder(This,pszFilename,pRecordingIUnknown) )
    ( (This)->lpVtbl -> get_SinkName(This,pName) )
    ( (This)->lpVtbl -> put_SinkName(This,Name) )
    ( (This)->lpVtbl -> NameSetLock(This) )
    ( (This)->lpVtbl -> get_SBESink(This,sbeConfig) )
    ( (This)->lpVtbl -> UnlockProfile(This) )
EXTERN_C const IID IID_IMSVidStreamBufferSink3;
    typedef struct IMSVidStreamBufferSink3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSink3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSink3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSink3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContentRecorder )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in BSTR pszFilename,
                                __RPC__deref_out_opt IMSVidStreamBufferRecordingControl **pRecordingIUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReferenceRecorder )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in BSTR pszFilename,
                                __RPC__deref_out_opt IMSVidStreamBufferRecordingControl **pRecordingIUnknown);
                                        HRESULT ( STDMETHODCALLTYPE *get_SinkName )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt BSTR *pName);
                                        HRESULT ( STDMETHODCALLTYPE *put_SinkName )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in BSTR Name);
                               HRESULT ( STDMETHODCALLTYPE *NameSetLock )(
            __RPC__in IMSVidStreamBufferSink3 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SBESink )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt IUnknown **sbeConfig);
                               HRESULT ( STDMETHODCALLTYPE *UnlockProfile )(
            __RPC__in IMSVidStreamBufferSink3 * This);
                               HRESULT ( STDMETHODCALLTYPE *SetMinSeek )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out LONG *pdwMin);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioCounter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_VideoCounter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_CCCounter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_WSTCounter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *put_AudioAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in BSTR szCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt BSTR *pszCLSID);
                                                            HRESULT ( STDMETHODCALLTYPE *put__AudioAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       GUID guid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__AudioAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out GUID *pGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_VideoAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in BSTR szCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_VideoAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt BSTR *pszCLSID);
                                                            HRESULT ( STDMETHODCALLTYPE *put__VideoAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       GUID guid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__VideoAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out GUID *pGuid);
                                        HRESULT ( STDMETHODCALLTYPE *put_DataAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       __RPC__in BSTR szCLSID);
                                        HRESULT ( STDMETHODCALLTYPE *get_DataAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__deref_out_opt BSTR *pszCLSID);
                                                            HRESULT ( STDMETHODCALLTYPE *put__DataAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                       GUID guid);
                                                            HRESULT ( STDMETHODCALLTYPE *get__DataAnalysisFilter )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out GUID *pGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_LicenseErrorCode )(
            __RPC__in IMSVidStreamBufferSink3 * This,
                                __RPC__out HRESULT *hres);
        END_INTERFACE
    } IMSVidStreamBufferSink3Vtbl;
    interface IMSVidStreamBufferSink3
    {
        CONST_VTBL struct IMSVidStreamBufferSink3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_ContentRecorder(This,pszFilename,pRecordingIUnknown) )
    ( (This)->lpVtbl -> get_ReferenceRecorder(This,pszFilename,pRecordingIUnknown) )
    ( (This)->lpVtbl -> get_SinkName(This,pName) )
    ( (This)->lpVtbl -> put_SinkName(This,Name) )
    ( (This)->lpVtbl -> NameSetLock(This) )
    ( (This)->lpVtbl -> get_SBESink(This,sbeConfig) )
    ( (This)->lpVtbl -> UnlockProfile(This) )
    ( (This)->lpVtbl -> SetMinSeek(This,pdwMin) )
    ( (This)->lpVtbl -> get_AudioCounter(This,ppUnk) )
    ( (This)->lpVtbl -> get_VideoCounter(This,ppUnk) )
    ( (This)->lpVtbl -> get_CCCounter(This,ppUnk) )
    ( (This)->lpVtbl -> get_WSTCounter(This,ppUnk) )
    ( (This)->lpVtbl -> put_AudioAnalysisFilter(This,szCLSID) )
    ( (This)->lpVtbl -> get_AudioAnalysisFilter(This,pszCLSID) )
    ( (This)->lpVtbl -> put__AudioAnalysisFilter(This,guid) )
    ( (This)->lpVtbl -> get__AudioAnalysisFilter(This,pGuid) )
    ( (This)->lpVtbl -> put_VideoAnalysisFilter(This,szCLSID) )
    ( (This)->lpVtbl -> get_VideoAnalysisFilter(This,pszCLSID) )
    ( (This)->lpVtbl -> put__VideoAnalysisFilter(This,guid) )
    ( (This)->lpVtbl -> get__VideoAnalysisFilter(This,pGuid) )
    ( (This)->lpVtbl -> put_DataAnalysisFilter(This,szCLSID) )
    ( (This)->lpVtbl -> get_DataAnalysisFilter(This,pszCLSID) )
    ( (This)->lpVtbl -> put__DataAnalysisFilter(This,guid) )
    ( (This)->lpVtbl -> get__DataAnalysisFilter(This,pGuid) )
    ( (This)->lpVtbl -> get_LicenseErrorCode(This,hres) )
EXTERN_C const IID IID_IMSVidStreamBufferSinkEvent;
    typedef struct IMSVidStreamBufferSinkEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSinkEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSinkEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSinkEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSinkEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSinkEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSinkEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSinkEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidStreamBufferSinkEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                               HRESULT ( STDMETHODCALLTYPE *CertificateFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *CertificateSuccess )(
            __RPC__in IMSVidStreamBufferSinkEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *WriteFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent * This);
        END_INTERFACE
    } IMSVidStreamBufferSinkEventVtbl;
    interface IMSVidStreamBufferSinkEvent
    {
        CONST_VTBL struct IMSVidStreamBufferSinkEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> CertificateFailure(This) )
    ( (This)->lpVtbl -> CertificateSuccess(This) )
    ( (This)->lpVtbl -> WriteFailure(This) )
EXTERN_C const IID IID_IMSVidStreamBufferSinkEvent2;
    typedef struct IMSVidStreamBufferSinkEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSinkEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                               HRESULT ( STDMETHODCALLTYPE *CertificateFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *CertificateSuccess )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *WriteFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *EncryptionOn )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *EncryptionOff )(
            __RPC__in IMSVidStreamBufferSinkEvent2 * This);
        END_INTERFACE
    } IMSVidStreamBufferSinkEvent2Vtbl;
    interface IMSVidStreamBufferSinkEvent2
    {
        CONST_VTBL struct IMSVidStreamBufferSinkEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> CertificateFailure(This) )
    ( (This)->lpVtbl -> CertificateSuccess(This) )
    ( (This)->lpVtbl -> WriteFailure(This) )
    ( (This)->lpVtbl -> EncryptionOn(This) )
    ( (This)->lpVtbl -> EncryptionOff(This) )
EXTERN_C const IID IID_IMSVidStreamBufferSinkEvent3;
    typedef struct IMSVidStreamBufferSinkEvent3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSinkEvent3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                               HRESULT ( STDMETHODCALLTYPE *CertificateFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *CertificateSuccess )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *WriteFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *EncryptionOn )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *EncryptionOff )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *LicenseChange )(
            __RPC__in IMSVidStreamBufferSinkEvent3 * This,
                       long dwProt);
        END_INTERFACE
    } IMSVidStreamBufferSinkEvent3Vtbl;
    interface IMSVidStreamBufferSinkEvent3
    {
        CONST_VTBL struct IMSVidStreamBufferSinkEvent3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> CertificateFailure(This) )
    ( (This)->lpVtbl -> CertificateSuccess(This) )
    ( (This)->lpVtbl -> WriteFailure(This) )
    ( (This)->lpVtbl -> EncryptionOn(This) )
    ( (This)->lpVtbl -> EncryptionOff(This) )
    ( (This)->lpVtbl -> LicenseChange(This,dwProt) )
EXTERN_C const IID IID_IMSVidStreamBufferSinkEvent4;
    typedef struct IMSVidStreamBufferSinkEvent4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSinkEvent4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                               HRESULT ( STDMETHODCALLTYPE *CertificateFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
                               HRESULT ( STDMETHODCALLTYPE *CertificateSuccess )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
                               HRESULT ( STDMETHODCALLTYPE *WriteFailure )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
                               HRESULT ( STDMETHODCALLTYPE *EncryptionOn )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
                               HRESULT ( STDMETHODCALLTYPE *EncryptionOff )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
                               HRESULT ( STDMETHODCALLTYPE *LicenseChange )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This,
                       long dwProt);
                               HRESULT ( STDMETHODCALLTYPE *WriteFailureClear )(
            __RPC__in IMSVidStreamBufferSinkEvent4 * This);
        END_INTERFACE
    } IMSVidStreamBufferSinkEvent4Vtbl;
    interface IMSVidStreamBufferSinkEvent4
    {
        CONST_VTBL struct IMSVidStreamBufferSinkEvent4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> CertificateFailure(This) )
    ( (This)->lpVtbl -> CertificateSuccess(This) )
    ( (This)->lpVtbl -> WriteFailure(This) )
    ( (This)->lpVtbl -> EncryptionOn(This) )
    ( (This)->lpVtbl -> EncryptionOff(This) )
    ( (This)->lpVtbl -> LicenseChange(This,dwProt) )
    ( (This)->lpVtbl -> WriteFailureClear(This) )
EXTERN_C const IID IID_IMSVidStreamBufferSource;
    typedef struct IMSVidStreamBufferSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSource * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSource * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSource * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSource * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidStreamBufferSource * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidStreamBufferSource * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidStreamBufferSource * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidStreamBufferSource * This,
                       __RPC__in VARIANT *v);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableResetOnStop )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableResetOnStop )(
            __RPC__in IMSVidStreamBufferSource * This,
                       VARIANT_BOOL newVal);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidStreamBufferSource * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidStreamBufferSource * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidStreamBufferSource * This);
                            HRESULT ( STDMETHODCALLTYPE *get_CanStep )(
            __RPC__in IMSVidStreamBufferSource * This,
                       VARIANT_BOOL fBackwards,
                                __RPC__out VARIANT_BOOL *pfCan);
                   HRESULT ( STDMETHODCALLTYPE *Step )(
            __RPC__in IMSVidStreamBufferSource * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMSVidStreamBufferSource * This,
                       double plRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out double *plRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMSVidStreamBufferSource * This,
                       long lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out long *lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_PositionMode )(
            __RPC__in IMSVidStreamBufferSource * This,
                       PositionModeList lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PositionMode )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out PositionModeList *lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out long *lLength);
                            HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__deref_out_opt BSTR *FileName);
                            HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IMSVidStreamBufferSource * This,
                       __RPC__in BSTR FileName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Start )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__out long *lStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecordingAttribute )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__deref_out_opt IUnknown **pRecordingAttribute);
                               HRESULT ( STDMETHODCALLTYPE *CurrentRatings )(
            __RPC__in IMSVidStreamBufferSource * This,
                        __RPC__out EnTvRat_System *pEnSystem,
                        __RPC__out EnTvRat_GenericLevel *pEnRating,
                        __RPC__out LONG *pBfEnAttr);
                               HRESULT ( STDMETHODCALLTYPE *MaxRatingsLevel )(
            __RPC__in IMSVidStreamBufferSource * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enRating,
                       LONG lbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnrated )(
            __RPC__in IMSVidStreamBufferSource * This,
                       VARIANT_BOOL bBlock);
                                        HRESULT ( STDMETHODCALLTYPE *put_UnratedDelay )(
            __RPC__in IMSVidStreamBufferSource * This,
                       long dwDelay);
                                        HRESULT ( STDMETHODCALLTYPE *get_SBESource )(
            __RPC__in IMSVidStreamBufferSource * This,
                                __RPC__deref_out_opt IUnknown **sbeFilter);
        END_INTERFACE
    } IMSVidStreamBufferSourceVtbl;
    interface IMSVidStreamBufferSource
    {
        CONST_VTBL struct IMSVidStreamBufferSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_EnableResetOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_EnableResetOnStop(This,newVal) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_CanStep(This,fBackwards,pfCan) )
    ( (This)->lpVtbl -> Step(This,lStep) )
    ( (This)->lpVtbl -> put_Rate(This,plRate) )
    ( (This)->lpVtbl -> get_Rate(This,plRate) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> put_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_Length(This,lLength) )
    ( (This)->lpVtbl -> get_FileName(This,FileName) )
    ( (This)->lpVtbl -> put_FileName(This,FileName) )
    ( (This)->lpVtbl -> get_Start(This,lStart) )
    ( (This)->lpVtbl -> get_RecordingAttribute(This,pRecordingAttribute) )
    ( (This)->lpVtbl -> CurrentRatings(This,pEnSystem,pEnRating,pBfEnAttr) )
    ( (This)->lpVtbl -> MaxRatingsLevel(This,enSystem,enRating,lbfEnAttr) )
    ( (This)->lpVtbl -> put_BlockUnrated(This,bBlock) )
    ( (This)->lpVtbl -> put_UnratedDelay(This,dwDelay) )
    ( (This)->lpVtbl -> get_SBESource(This,sbeFilter) )
EXTERN_C const IID IID_IMSVidStreamBufferSource2;
    typedef struct IMSVidStreamBufferSource2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSource2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSource2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSource2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                   HRESULT ( STDMETHODCALLTYPE *IsViewable )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       __RPC__in VARIANT *v,
                                __RPC__out VARIANT_BOOL *pfViewable);
                   HRESULT ( STDMETHODCALLTYPE *View )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       __RPC__in VARIANT *v);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnableResetOnStop )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnableResetOnStop )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       VARIANT_BOOL newVal);
                   HRESULT ( STDMETHODCALLTYPE *Run )(
            __RPC__in IMSVidStreamBufferSource2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in IMSVidStreamBufferSource2 * This);
                   HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IMSVidStreamBufferSource2 * This);
                            HRESULT ( STDMETHODCALLTYPE *get_CanStep )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       VARIANT_BOOL fBackwards,
                                __RPC__out VARIANT_BOOL *pfCan);
                   HRESULT ( STDMETHODCALLTYPE *Step )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       long lStep);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       double plRate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out double *plRate);
                                        HRESULT ( STDMETHODCALLTYPE *put_CurrentPosition )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       long lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentPosition )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out long *lPosition);
                                        HRESULT ( STDMETHODCALLTYPE *put_PositionMode )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       PositionModeList lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_PositionMode )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out PositionModeList *lPositionMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out long *lLength);
                            HRESULT ( STDMETHODCALLTYPE *get_FileName )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt BSTR *FileName);
                            HRESULT ( STDMETHODCALLTYPE *put_FileName )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       __RPC__in BSTR FileName);
                                        HRESULT ( STDMETHODCALLTYPE *get_Start )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__out long *lStart);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecordingAttribute )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt IUnknown **pRecordingAttribute);
                               HRESULT ( STDMETHODCALLTYPE *CurrentRatings )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                        __RPC__out EnTvRat_System *pEnSystem,
                        __RPC__out EnTvRat_GenericLevel *pEnRating,
                        __RPC__out LONG *pBfEnAttr);
                               HRESULT ( STDMETHODCALLTYPE *MaxRatingsLevel )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       EnTvRat_System enSystem,
                       EnTvRat_GenericLevel enRating,
                       LONG lbfEnAttr);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockUnrated )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       VARIANT_BOOL bBlock);
                                        HRESULT ( STDMETHODCALLTYPE *put_UnratedDelay )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       long dwDelay);
                                        HRESULT ( STDMETHODCALLTYPE *get_SBESource )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt IUnknown **sbeFilter);
                                        HRESULT ( STDMETHODCALLTYPE *put_RateEx )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                       double dwRate,
                       DWORD dwFramesPerSecond);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioCounter )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_VideoCounter )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_CCCounter )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_WSTCounter )(
            __RPC__in IMSVidStreamBufferSource2 * This,
                                __RPC__deref_out_opt IUnknown **ppUnk);
        END_INTERFACE
    } IMSVidStreamBufferSource2Vtbl;
    interface IMSVidStreamBufferSource2
    {
        CONST_VTBL struct IMSVidStreamBufferSource2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> IsViewable(This,v,pfViewable) )
    ( (This)->lpVtbl -> View(This,v) )
    ( (This)->lpVtbl -> get_EnableResetOnStop(This,pVal) )
    ( (This)->lpVtbl -> put_EnableResetOnStop(This,newVal) )
    ( (This)->lpVtbl -> Run(This) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_CanStep(This,fBackwards,pfCan) )
    ( (This)->lpVtbl -> Step(This,lStep) )
    ( (This)->lpVtbl -> put_Rate(This,plRate) )
    ( (This)->lpVtbl -> get_Rate(This,plRate) )
    ( (This)->lpVtbl -> put_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> get_CurrentPosition(This,lPosition) )
    ( (This)->lpVtbl -> put_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_PositionMode(This,lPositionMode) )
    ( (This)->lpVtbl -> get_Length(This,lLength) )
    ( (This)->lpVtbl -> get_FileName(This,FileName) )
    ( (This)->lpVtbl -> put_FileName(This,FileName) )
    ( (This)->lpVtbl -> get_Start(This,lStart) )
    ( (This)->lpVtbl -> get_RecordingAttribute(This,pRecordingAttribute) )
    ( (This)->lpVtbl -> CurrentRatings(This,pEnSystem,pEnRating,pBfEnAttr) )
    ( (This)->lpVtbl -> MaxRatingsLevel(This,enSystem,enRating,lbfEnAttr) )
    ( (This)->lpVtbl -> put_BlockUnrated(This,bBlock) )
    ( (This)->lpVtbl -> put_UnratedDelay(This,dwDelay) )
    ( (This)->lpVtbl -> get_SBESource(This,sbeFilter) )
    ( (This)->lpVtbl -> put_RateEx(This,dwRate,dwFramesPerSecond) )
    ( (This)->lpVtbl -> get_AudioCounter(This,ppUnk) )
    ( (This)->lpVtbl -> get_VideoCounter(This,ppUnk) )
    ( (This)->lpVtbl -> get_CCCounter(This,ppUnk) )
    ( (This)->lpVtbl -> get_WSTCounter(This,ppUnk) )
EXTERN_C const IID IID_IMSVidStreamBufferSourceEvent;
    typedef struct IMSVidStreamBufferSourceEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSourceEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSourceEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSourceEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSourceEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSourceEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EndOfMedia )(
            __RPC__in IMSVidStreamBufferSourceEvent * This,
                       __RPC__in_opt IMSVidPlayback *lpd);
                               HRESULT ( STDMETHODCALLTYPE *CertificateFailure )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *CertificateSuccess )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsBlocked )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsUnblocked )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsChanged )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *TimeHole )(
            __RPC__in IMSVidStreamBufferSourceEvent * This,
                       long StreamOffsetMS,
                       long SizeMS);
                               HRESULT ( STDMETHODCALLTYPE *StaleDataRead )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *ContentBecomingStale )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *StaleFileDeleted )(
            __RPC__in IMSVidStreamBufferSourceEvent * This);
        END_INTERFACE
    } IMSVidStreamBufferSourceEventVtbl;
    interface IMSVidStreamBufferSourceEvent
    {
        CONST_VTBL struct IMSVidStreamBufferSourceEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EndOfMedia(This,lpd) )
    ( (This)->lpVtbl -> CertificateFailure(This) )
    ( (This)->lpVtbl -> CertificateSuccess(This) )
    ( (This)->lpVtbl -> RatingsBlocked(This) )
    ( (This)->lpVtbl -> RatingsUnblocked(This) )
    ( (This)->lpVtbl -> RatingsChanged(This) )
    ( (This)->lpVtbl -> TimeHole(This,StreamOffsetMS,SizeMS) )
    ( (This)->lpVtbl -> StaleDataRead(This) )
    ( (This)->lpVtbl -> ContentBecomingStale(This) )
    ( (This)->lpVtbl -> StaleFileDeleted(This) )
EXTERN_C const IID IID_IMSVidStreamBufferSourceEvent2;
    typedef struct IMSVidStreamBufferSourceEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSourceEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EndOfMedia )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This,
                       __RPC__in_opt IMSVidPlayback *lpd);
                               HRESULT ( STDMETHODCALLTYPE *CertificateFailure )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *CertificateSuccess )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsBlocked )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsUnblocked )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsChanged )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *TimeHole )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This,
                       long StreamOffsetMS,
                       long SizeMS);
                               HRESULT ( STDMETHODCALLTYPE *StaleDataRead )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *ContentBecomingStale )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *StaleFileDeleted )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This);
                               HRESULT ( STDMETHODCALLTYPE *RateChange )(
            __RPC__in IMSVidStreamBufferSourceEvent2 * This,
                       double qwNewRate,
                       double qwOldRate);
        END_INTERFACE
    } IMSVidStreamBufferSourceEvent2Vtbl;
    interface IMSVidStreamBufferSourceEvent2
    {
        CONST_VTBL struct IMSVidStreamBufferSourceEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EndOfMedia(This,lpd) )
    ( (This)->lpVtbl -> CertificateFailure(This) )
    ( (This)->lpVtbl -> CertificateSuccess(This) )
    ( (This)->lpVtbl -> RatingsBlocked(This) )
    ( (This)->lpVtbl -> RatingsUnblocked(This) )
    ( (This)->lpVtbl -> RatingsChanged(This) )
    ( (This)->lpVtbl -> TimeHole(This,StreamOffsetMS,SizeMS) )
    ( (This)->lpVtbl -> StaleDataRead(This) )
    ( (This)->lpVtbl -> ContentBecomingStale(This) )
    ( (This)->lpVtbl -> StaleFileDeleted(This) )
    ( (This)->lpVtbl -> RateChange(This,qwNewRate,qwOldRate) )
EXTERN_C const IID IID_IMSVidStreamBufferSourceEvent3;
    typedef struct IMSVidStreamBufferSourceEvent3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferSourceEvent3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EndOfMedia )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       __RPC__in_opt IMSVidPlayback *lpd);
                               HRESULT ( STDMETHODCALLTYPE *CertificateFailure )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *CertificateSuccess )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsBlocked )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsUnblocked )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *RatingsChanged )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *TimeHole )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       long StreamOffsetMS,
                       long SizeMS);
                               HRESULT ( STDMETHODCALLTYPE *StaleDataRead )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *ContentBecomingStale )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *StaleFileDeleted )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *RateChange )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       double qwNewRate,
                       double qwOldRate);
                               HRESULT ( STDMETHODCALLTYPE *BroadcastEvent )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       __RPC__in BSTR Guid);
                               HRESULT ( STDMETHODCALLTYPE *BroadcastEventEx )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This,
                       __RPC__in BSTR Guid,
                       ULONG Param1,
                       ULONG Param2,
                       ULONG Param3,
                       ULONG Param4);
                               HRESULT ( STDMETHODCALLTYPE *COPPBlocked )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *COPPUnblocked )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
                               HRESULT ( STDMETHODCALLTYPE *ContentPrimarilyAudio )(
            __RPC__in IMSVidStreamBufferSourceEvent3 * This);
        END_INTERFACE
    } IMSVidStreamBufferSourceEvent3Vtbl;
    interface IMSVidStreamBufferSourceEvent3
    {
        CONST_VTBL struct IMSVidStreamBufferSourceEvent3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EndOfMedia(This,lpd) )
    ( (This)->lpVtbl -> CertificateFailure(This) )
    ( (This)->lpVtbl -> CertificateSuccess(This) )
    ( (This)->lpVtbl -> RatingsBlocked(This) )
    ( (This)->lpVtbl -> RatingsUnblocked(This) )
    ( (This)->lpVtbl -> RatingsChanged(This) )
    ( (This)->lpVtbl -> TimeHole(This,StreamOffsetMS,SizeMS) )
    ( (This)->lpVtbl -> StaleDataRead(This) )
    ( (This)->lpVtbl -> ContentBecomingStale(This) )
    ( (This)->lpVtbl -> StaleFileDeleted(This) )
    ( (This)->lpVtbl -> RateChange(This,qwNewRate,qwOldRate) )
    ( (This)->lpVtbl -> BroadcastEvent(This,Guid) )
    ( (This)->lpVtbl -> BroadcastEventEx(This,Guid,Param1,Param2,Param3,Param4) )
    ( (This)->lpVtbl -> COPPBlocked(This) )
    ( (This)->lpVtbl -> COPPUnblocked(This) )
    ( (This)->lpVtbl -> ContentPrimarilyAudio(This) )
EXTERN_C const IID IID_IMSVidStreamBufferV2SourceEvent;
    typedef struct IMSVidStreamBufferV2SourceEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidStreamBufferV2SourceEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *EndOfMedia )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       __RPC__in_opt IMSVidPlayback *lpd);
                               HRESULT ( STDMETHODCALLTYPE *RatingsChanged )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *TimeHole )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       long StreamOffsetMS,
                       long SizeMS);
                               HRESULT ( STDMETHODCALLTYPE *StaleDataRead )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *ContentBecomingStale )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *StaleFileDeleted )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This);
                               HRESULT ( STDMETHODCALLTYPE *RateChange )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       double qwNewRate,
                       double qwOldRate);
                               HRESULT ( STDMETHODCALLTYPE *BroadcastEvent )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       __RPC__in BSTR Guid);
                               HRESULT ( STDMETHODCALLTYPE *BroadcastEventEx )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This,
                       __RPC__in BSTR Guid,
                       ULONG Param1,
                       ULONG Param2,
                       ULONG Param3,
                       ULONG Param4);
                               HRESULT ( STDMETHODCALLTYPE *ContentPrimarilyAudio )(
            __RPC__in IMSVidStreamBufferV2SourceEvent * This);
        END_INTERFACE
    } IMSVidStreamBufferV2SourceEventVtbl;
    interface IMSVidStreamBufferV2SourceEvent
    {
        CONST_VTBL struct IMSVidStreamBufferV2SourceEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> EndOfMedia(This,lpd) )
    ( (This)->lpVtbl -> RatingsChanged(This) )
    ( (This)->lpVtbl -> TimeHole(This,StreamOffsetMS,SizeMS) )
    ( (This)->lpVtbl -> StaleDataRead(This) )
    ( (This)->lpVtbl -> ContentBecomingStale(This) )
    ( (This)->lpVtbl -> StaleFileDeleted(This) )
    ( (This)->lpVtbl -> RateChange(This,qwNewRate,qwOldRate) )
    ( (This)->lpVtbl -> BroadcastEvent(This,Guid) )
    ( (This)->lpVtbl -> BroadcastEventEx(This,Guid,Param1,Param2,Param3,Param4) )
    ( (This)->lpVtbl -> ContentPrimarilyAudio(This) )
EXTERN_C const IID IID_IMSVidVideoRenderer2;
    typedef struct IMSVidVideoRenderer2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVideoRenderer2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVideoRenderer2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidVideoRenderer2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidVideoRenderer2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt BSTR *CompositorCLSID);
                            HRESULT ( STDMETHODCALLTYPE *put_CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in BSTR CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out GUID *CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositorClass )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in REFCLSID CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositor )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IVMRImageCompositor **Compositor);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositor )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IVMRImageCompositor *Compositor);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmap )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IPictureDisp **MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *get__MixerBitmap )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IVMRMixerBitmap **MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmap )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *put__MixerBitmap )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in VMRALPHABITMAP *MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapPositionRect )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IMSVidRect **rDest);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapPositionRect )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapOpacity )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out int *opacity);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapOpacity )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       int opacity);
                   HRESULT ( STDMETHODCALLTYPE *SetupMixerBitmap )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp,
                       long Opacity,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_SourceSize )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out SourceSizeList *CurrentSize);
                            HRESULT ( STDMETHODCALLTYPE *put_SourceSize )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       SourceSizeList NewSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverScan )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out long *plPercent);
                                        HRESULT ( STDMETHODCALLTYPE *put_OverScan )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       long lPercent);
                            HRESULT ( STDMETHODCALLTYPE *get_AvailableSourceRect )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxVidRect )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MinVidRect )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_ClippedSourceRect )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *put_ClippedSourceRect )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IMSVidRect *pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_UsingOverlay )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out VARIANT_BOOL *UseOverlayVal);
                            HRESULT ( STDMETHODCALLTYPE *put_UsingOverlay )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       VARIANT_BOOL UseOverlayVal);
                   HRESULT ( STDMETHODCALLTYPE *Capture )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IPictureDisp **currentImage);
                                        HRESULT ( STDMETHODCALLTYPE *get_FramesPerSecond )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DecimateInput )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out VARIANT_BOOL *pDeci);
                                        HRESULT ( STDMETHODCALLTYPE *put_DecimateInput )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       VARIANT_BOOL pDeci);
                            HRESULT ( STDMETHODCALLTYPE *get_Allocator )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IUnknown **AllocPresent);
                                                HRESULT ( STDMETHODCALLTYPE *get__Allocator )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__deref_out_opt IVMRSurfaceAllocator **AllocPresent);
                            HRESULT ( STDMETHODCALLTYPE *get_Allocator_ID )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out long *ID);
                   HRESULT ( STDMETHODCALLTYPE *SetAllocator )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IUnknown *AllocPresent,
                                     long ID);
                                       HRESULT ( STDMETHODCALLTYPE *_SetAllocator )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       __RPC__in_opt IVMRSurfaceAllocator *AllocPresent,
                                     long ID);
                            HRESULT ( STDMETHODCALLTYPE *put_SuppressEffects )(
            __RPC__in IMSVidVideoRenderer2 * This,
                       VARIANT_BOOL bSuppress);
                            HRESULT ( STDMETHODCALLTYPE *get_SuppressEffects )(
            __RPC__in IMSVidVideoRenderer2 * This,
                                __RPC__out VARIANT_BOOL *bSuppress);
        END_INTERFACE
    } IMSVidVideoRenderer2Vtbl;
    interface IMSVidVideoRenderer2
    {
        CONST_VTBL struct IMSVidVideoRenderer2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> put__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> get_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> get__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> put_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> put__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> get_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> put_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> get_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> put_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetupMixerBitmap(This,MixerPictureDisp,Opacity,rDest) )
    ( (This)->lpVtbl -> get_SourceSize(This,CurrentSize) )
    ( (This)->lpVtbl -> put_SourceSize(This,NewSize) )
    ( (This)->lpVtbl -> get_OverScan(This,plPercent) )
    ( (This)->lpVtbl -> put_OverScan(This,lPercent) )
    ( (This)->lpVtbl -> get_AvailableSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_MaxVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_MinVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> put_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> put_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> Capture(This,currentImage) )
    ( (This)->lpVtbl -> get_FramesPerSecond(This,pVal) )
    ( (This)->lpVtbl -> get_DecimateInput(This,pDeci) )
    ( (This)->lpVtbl -> put_DecimateInput(This,pDeci) )
    ( (This)->lpVtbl -> get_Allocator(This,AllocPresent) )
    ( (This)->lpVtbl -> get__Allocator(This,AllocPresent) )
    ( (This)->lpVtbl -> get_Allocator_ID(This,ID) )
    ( (This)->lpVtbl -> SetAllocator(This,AllocPresent,ID) )
    ( (This)->lpVtbl -> _SetAllocator(This,AllocPresent,ID) )
    ( (This)->lpVtbl -> put_SuppressEffects(This,bSuppress) )
    ( (This)->lpVtbl -> get_SuppressEffects(This,bSuppress) )
EXTERN_C const IID IID_IMSVidVideoRendererEvent2;
    typedef struct IMSVidVideoRendererEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVideoRendererEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVideoRendererEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVideoRendererEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidVideoRendererEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidVideoRendererEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidVideoRendererEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidVideoRendererEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidVideoRendererEvent2 * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                               HRESULT ( STDMETHODCALLTYPE *OverlayUnavailable )(
            __RPC__in IMSVidVideoRendererEvent2 * This);
        END_INTERFACE
    } IMSVidVideoRendererEvent2Vtbl;
    interface IMSVidVideoRendererEvent2
    {
        CONST_VTBL struct IMSVidVideoRendererEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> OverlayUnavailable(This) )
EXTERN_C const IID IID_IMSVidVMR9;
    typedef struct IMSVidVMR9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVMR9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVMR9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidVMR9 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidVMR9 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidVMR9 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidVMR9 * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_CustomCompositorClass )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt BSTR *CompositorCLSID);
                            HRESULT ( STDMETHODCALLTYPE *put_CustomCompositorClass )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in BSTR CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositorClass )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out GUID *CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositorClass )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in REFCLSID CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositor )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IVMRImageCompositor **Compositor);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositor )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in_opt IVMRImageCompositor *Compositor);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmap )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IPictureDisp **MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *get__MixerBitmap )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IVMRMixerBitmap **MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmap )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *put__MixerBitmap )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in VMRALPHABITMAP *MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapPositionRect )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IMSVidRect **rDest);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapPositionRect )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapOpacity )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out int *opacity);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapOpacity )(
            __RPC__in IMSVidVMR9 * This,
                       int opacity);
                   HRESULT ( STDMETHODCALLTYPE *SetupMixerBitmap )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp,
                       long Opacity,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_SourceSize )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out SourceSizeList *CurrentSize);
                            HRESULT ( STDMETHODCALLTYPE *put_SourceSize )(
            __RPC__in IMSVidVMR9 * This,
                       SourceSizeList NewSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverScan )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out long *plPercent);
                                        HRESULT ( STDMETHODCALLTYPE *put_OverScan )(
            __RPC__in IMSVidVMR9 * This,
                       long lPercent);
                            HRESULT ( STDMETHODCALLTYPE *get_AvailableSourceRect )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxVidRect )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MinVidRect )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_ClippedSourceRect )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *put_ClippedSourceRect )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in_opt IMSVidRect *pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_UsingOverlay )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out VARIANT_BOOL *UseOverlayVal);
                            HRESULT ( STDMETHODCALLTYPE *put_UsingOverlay )(
            __RPC__in IMSVidVMR9 * This,
                       VARIANT_BOOL UseOverlayVal);
                   HRESULT ( STDMETHODCALLTYPE *Capture )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IPictureDisp **currentImage);
                                        HRESULT ( STDMETHODCALLTYPE *get_FramesPerSecond )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DecimateInput )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out VARIANT_BOOL *pDeci);
                                        HRESULT ( STDMETHODCALLTYPE *put_DecimateInput )(
            __RPC__in IMSVidVMR9 * This,
                       VARIANT_BOOL pDeci);
                            HRESULT ( STDMETHODCALLTYPE *get_Allocator_ID )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out long *ID);
                   HRESULT ( STDMETHODCALLTYPE *SetAllocator )(
            __RPC__in IMSVidVMR9 * This,
                       __RPC__in_opt IUnknown *AllocPresent,
                                     long ID);
                            HRESULT ( STDMETHODCALLTYPE *put_SuppressEffects )(
            __RPC__in IMSVidVMR9 * This,
                       VARIANT_BOOL bSuppress);
                            HRESULT ( STDMETHODCALLTYPE *get_SuppressEffects )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__out VARIANT_BOOL *bSuppress);
                            HRESULT ( STDMETHODCALLTYPE *get_Allocator )(
            __RPC__in IMSVidVMR9 * This,
                                __RPC__deref_out_opt IUnknown **AllocPresent);
        END_INTERFACE
    } IMSVidVMR9Vtbl;
    interface IMSVidVMR9
    {
        CONST_VTBL struct IMSVidVMR9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> put__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> get_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> get__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> put_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> put__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> get_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> put_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> get_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> put_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetupMixerBitmap(This,MixerPictureDisp,Opacity,rDest) )
    ( (This)->lpVtbl -> get_SourceSize(This,CurrentSize) )
    ( (This)->lpVtbl -> put_SourceSize(This,NewSize) )
    ( (This)->lpVtbl -> get_OverScan(This,plPercent) )
    ( (This)->lpVtbl -> put_OverScan(This,lPercent) )
    ( (This)->lpVtbl -> get_AvailableSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_MaxVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_MinVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> put_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> put_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> Capture(This,currentImage) )
    ( (This)->lpVtbl -> get_FramesPerSecond(This,pVal) )
    ( (This)->lpVtbl -> get_DecimateInput(This,pDeci) )
    ( (This)->lpVtbl -> put_DecimateInput(This,pDeci) )
    ( (This)->lpVtbl -> get_Allocator_ID(This,ID) )
    ( (This)->lpVtbl -> SetAllocator(This,AllocPresent,ID) )
    ( (This)->lpVtbl -> put_SuppressEffects(This,bSuppress) )
    ( (This)->lpVtbl -> get_SuppressEffects(This,bSuppress) )
    ( (This)->lpVtbl -> get_Allocator(This,AllocPresent) )
EXTERN_C const IID IID_IMSVidEVR;
    typedef struct IMSVidEVRVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidEVR * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidEVR * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidEVR * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidEVR * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidEVR * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidEVR * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *get_CustomCompositorClass )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt BSTR *CompositorCLSID);
                            HRESULT ( STDMETHODCALLTYPE *put_CustomCompositorClass )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in BSTR CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositorClass )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out GUID *CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositorClass )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in REFCLSID CompositorCLSID);
                                                HRESULT ( STDMETHODCALLTYPE *get__CustomCompositor )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IVMRImageCompositor **Compositor);
                                                HRESULT ( STDMETHODCALLTYPE *put__CustomCompositor )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in_opt IVMRImageCompositor *Compositor);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmap )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IPictureDisp **MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *get__MixerBitmap )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IVMRMixerBitmap **MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmap )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp);
                                                HRESULT ( STDMETHODCALLTYPE *put__MixerBitmap )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in VMRALPHABITMAP *MixerPicture);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapPositionRect )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IMSVidRect **rDest);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapPositionRect )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_MixerBitmapOpacity )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out int *opacity);
                            HRESULT ( STDMETHODCALLTYPE *put_MixerBitmapOpacity )(
            __RPC__in IMSVidEVR * This,
                       int opacity);
                   HRESULT ( STDMETHODCALLTYPE *SetupMixerBitmap )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in_opt IPictureDisp *MixerPictureDisp,
                       long Opacity,
                       __RPC__in_opt IMSVidRect *rDest);
                            HRESULT ( STDMETHODCALLTYPE *get_SourceSize )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out SourceSizeList *CurrentSize);
                            HRESULT ( STDMETHODCALLTYPE *put_SourceSize )(
            __RPC__in IMSVidEVR * This,
                       SourceSizeList NewSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_OverScan )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out long *plPercent);
                                        HRESULT ( STDMETHODCALLTYPE *put_OverScan )(
            __RPC__in IMSVidEVR * This,
                       long lPercent);
                            HRESULT ( STDMETHODCALLTYPE *get_AvailableSourceRect )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MaxVidRect )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_MinVidRect )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IMSVidRect **ppVidRect);
                            HRESULT ( STDMETHODCALLTYPE *get_ClippedSourceRect )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IMSVidRect **pRect);
                            HRESULT ( STDMETHODCALLTYPE *put_ClippedSourceRect )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in_opt IMSVidRect *pRect);
                            HRESULT ( STDMETHODCALLTYPE *get_UsingOverlay )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out VARIANT_BOOL *UseOverlayVal);
                            HRESULT ( STDMETHODCALLTYPE *put_UsingOverlay )(
            __RPC__in IMSVidEVR * This,
                       VARIANT_BOOL UseOverlayVal);
                   HRESULT ( STDMETHODCALLTYPE *Capture )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IPictureDisp **currentImage);
                                        HRESULT ( STDMETHODCALLTYPE *get_FramesPerSecond )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out long *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_DecimateInput )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out VARIANT_BOOL *pDeci);
                                        HRESULT ( STDMETHODCALLTYPE *put_DecimateInput )(
            __RPC__in IMSVidEVR * This,
                       VARIANT_BOOL pDeci);
                            HRESULT ( STDMETHODCALLTYPE *get_Presenter )(
            __RPC__in IMSVidEVR * This,
                                __RPC__deref_out_opt IMFVideoPresenter **ppAllocPresent);
                            HRESULT ( STDMETHODCALLTYPE *put_Presenter )(
            __RPC__in IMSVidEVR * This,
                       __RPC__in_opt IMFVideoPresenter *pAllocPresent);
                            HRESULT ( STDMETHODCALLTYPE *put_SuppressEffects )(
            __RPC__in IMSVidEVR * This,
                       VARIANT_BOOL bSuppress);
                            HRESULT ( STDMETHODCALLTYPE *get_SuppressEffects )(
            __RPC__in IMSVidEVR * This,
                                __RPC__out VARIANT_BOOL *bSuppress);
        END_INTERFACE
    } IMSVidEVRVtbl;
    interface IMSVidEVR
    {
        CONST_VTBL struct IMSVidEVRVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> get_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put_CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> put__CustomCompositorClass(This,CompositorCLSID) )
    ( (This)->lpVtbl -> get__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> put__CustomCompositor(This,Compositor) )
    ( (This)->lpVtbl -> get_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> get__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> put_MixerBitmap(This,MixerPictureDisp) )
    ( (This)->lpVtbl -> put__MixerBitmap(This,MixerPicture) )
    ( (This)->lpVtbl -> get_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> put_MixerBitmapPositionRect(This,rDest) )
    ( (This)->lpVtbl -> get_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> put_MixerBitmapOpacity(This,opacity) )
    ( (This)->lpVtbl -> SetupMixerBitmap(This,MixerPictureDisp,Opacity,rDest) )
    ( (This)->lpVtbl -> get_SourceSize(This,CurrentSize) )
    ( (This)->lpVtbl -> put_SourceSize(This,NewSize) )
    ( (This)->lpVtbl -> get_OverScan(This,plPercent) )
    ( (This)->lpVtbl -> put_OverScan(This,lPercent) )
    ( (This)->lpVtbl -> get_AvailableSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_MaxVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_MinVidRect(This,ppVidRect) )
    ( (This)->lpVtbl -> get_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> put_ClippedSourceRect(This,pRect) )
    ( (This)->lpVtbl -> get_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> put_UsingOverlay(This,UseOverlayVal) )
    ( (This)->lpVtbl -> Capture(This,currentImage) )
    ( (This)->lpVtbl -> get_FramesPerSecond(This,pVal) )
    ( (This)->lpVtbl -> get_DecimateInput(This,pDeci) )
    ( (This)->lpVtbl -> put_DecimateInput(This,pDeci) )
    ( (This)->lpVtbl -> get_Presenter(This,ppAllocPresent) )
    ( (This)->lpVtbl -> put_Presenter(This,pAllocPresent) )
    ( (This)->lpVtbl -> put_SuppressEffects(This,bSuppress) )
    ( (This)->lpVtbl -> get_SuppressEffects(This,bSuppress) )
EXTERN_C const IID IID_IMSVidEVREvent;
    typedef struct IMSVidEVREventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidEVREvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidEVREvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidEVREvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidEVREvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidEVREvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidEVREvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidEVREvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidEVREvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                   HRESULT ( STDMETHODCALLTYPE *OnUserEvent )(
            __RPC__in IMSVidEVREvent * This,
                       long lEventCode);
        END_INTERFACE
    } IMSVidEVREventVtbl;
    interface IMSVidEVREvent
    {
        CONST_VTBL struct IMSVidEVREventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> OnUserEvent(This,lEventCode) )
EXTERN_C const IID IID_IMSVidAudioRenderer;
    typedef struct IMSVidAudioRendererVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidAudioRenderer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidAudioRenderer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidAudioRenderer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidAudioRenderer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidAudioRenderer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidAudioRenderer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidAudioRenderer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__deref_out_opt BSTR *Name);
                            HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__out long *Status);
                            HRESULT ( STDMETHODCALLTYPE *put_Power )(
            __RPC__in IMSVidAudioRenderer * This,
                       VARIANT_BOOL Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Power )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__out VARIANT_BOOL *Power);
                            HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__deref_out_opt BSTR *Guid);
                            HRESULT ( STDMETHODCALLTYPE *get_ClassID )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__deref_out_opt BSTR *Clsid);
                                                HRESULT ( STDMETHODCALLTYPE *get__Category )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__out GUID *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *get__ClassID )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__out GUID *Clsid);
                               HRESULT ( STDMETHODCALLTYPE *IsEqualDevice )(
            __RPC__in IMSVidAudioRenderer * This,
                       __RPC__in_opt IMSVidDevice *Device,
                                __RPC__out VARIANT_BOOL *IsEqual);
                            HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in IMSVidAudioRenderer * This,
                       long lVol);
                            HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__out long *lVol);
                            HRESULT ( STDMETHODCALLTYPE *put_Balance )(
            __RPC__in IMSVidAudioRenderer * This,
                       long lBal);
                            HRESULT ( STDMETHODCALLTYPE *get_Balance )(
            __RPC__in IMSVidAudioRenderer * This,
                                __RPC__out long *lBal);
        END_INTERFACE
    } IMSVidAudioRendererVtbl;
    interface IMSVidAudioRenderer
    {
        CONST_VTBL struct IMSVidAudioRendererVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> put_Power(This,Power) )
    ( (This)->lpVtbl -> get_Power(This,Power) )
    ( (This)->lpVtbl -> get_Category(This,Guid) )
    ( (This)->lpVtbl -> get_ClassID(This,Clsid) )
    ( (This)->lpVtbl -> get__Category(This,Guid) )
    ( (This)->lpVtbl -> get__ClassID(This,Clsid) )
    ( (This)->lpVtbl -> IsEqualDevice(This,Device,IsEqual) )
    ( (This)->lpVtbl -> put_Volume(This,lVol) )
    ( (This)->lpVtbl -> get_Volume(This,lVol) )
    ( (This)->lpVtbl -> put_Balance(This,lBal) )
    ( (This)->lpVtbl -> get_Balance(This,lBal) )
EXTERN_C const IID IID_IMSVidAudioRendererEvent;
    typedef struct IMSVidAudioRendererEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidAudioRendererEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidAudioRendererEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidAudioRendererEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidAudioRendererEvent * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidAudioRendererEvent * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidAudioRendererEvent * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidAudioRendererEvent * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidAudioRendererEvent * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
        END_INTERFACE
    } IMSVidAudioRendererEventVtbl;
    interface IMSVidAudioRendererEvent
    {
        CONST_VTBL struct IMSVidAudioRendererEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
EXTERN_C const IID IID_IMSVidAudioRendererEvent2;
    typedef struct IMSVidAudioRendererEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidAudioRendererEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidAudioRendererEvent2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidAudioRendererEvent2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidAudioRendererEvent2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidAudioRendererEvent2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *StateChange )(
            __RPC__in IMSVidAudioRendererEvent2 * This,
                       __RPC__in_opt IMSVidDevice *lpd,
                       long oldState,
                       long newState);
                   HRESULT ( STDMETHODCALLTYPE *AVDecAudioDualMono )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AVAudioSampleRate )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AVAudioChannelConfig )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AVAudioChannelCount )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AVDecCommonMeanBitRate )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AVDDSurroundMode )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AVDecCommonInputFormat )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AVDecCommonOutputFormat )(
            __RPC__in IMSVidAudioRendererEvent2 * This);
        END_INTERFACE
    } IMSVidAudioRendererEvent2Vtbl;
    interface IMSVidAudioRendererEvent2
    {
        CONST_VTBL struct IMSVidAudioRendererEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> StateChange(This,lpd,oldState,newState) )
    ( (This)->lpVtbl -> AVDecAudioDualMono(This) )
    ( (This)->lpVtbl -> AVAudioSampleRate(This) )
    ( (This)->lpVtbl -> AVAudioChannelConfig(This) )
    ( (This)->lpVtbl -> AVAudioChannelCount(This) )
    ( (This)->lpVtbl -> AVDecCommonMeanBitRate(This) )
    ( (This)->lpVtbl -> AVDDSurroundMode(This) )
    ( (This)->lpVtbl -> AVDecCommonInputFormat(This) )
    ( (This)->lpVtbl -> AVDecCommonOutputFormat(This) )
EXTERN_C const IID IID_IMSVidInputDevices;
    typedef struct IMSVidInputDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidInputDevices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidInputDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidInputDevices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidInputDevices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidInputDevices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidInputDevices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidInputDevices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMSVidInputDevices * This,
                                __RPC__out long *lCount);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IMSVidInputDevices * This,
                                __RPC__deref_out_opt IEnumVARIANT **pD);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IMSVidInputDevices * This,
                       VARIANT v,
                                __RPC__deref_out_opt IMSVidInputDevice **pDB);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IMSVidInputDevices * This,
                       __RPC__in_opt IMSVidInputDevice *pDB);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IMSVidInputDevices * This,
                       VARIANT v);
        END_INTERFACE
    } IMSVidInputDevicesVtbl;
    interface IMSVidInputDevices
    {
        CONST_VTBL struct IMSVidInputDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,lCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,pD) )
    ( (This)->lpVtbl -> get_Item(This,v,pDB) )
    ( (This)->lpVtbl -> Add(This,pDB) )
    ( (This)->lpVtbl -> Remove(This,v) )
EXTERN_C const IID IID_IMSVidOutputDevices;
    typedef struct IMSVidOutputDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidOutputDevices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidOutputDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidOutputDevices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidOutputDevices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidOutputDevices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidOutputDevices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidOutputDevices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMSVidOutputDevices * This,
                                __RPC__out long *lCount);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IMSVidOutputDevices * This,
                                __RPC__deref_out_opt IEnumVARIANT **pD);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IMSVidOutputDevices * This,
                       VARIANT v,
                                __RPC__deref_out_opt IMSVidOutputDevice **pDB);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IMSVidOutputDevices * This,
                       __RPC__in_opt IMSVidOutputDevice *pDB);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IMSVidOutputDevices * This,
                       VARIANT v);
        END_INTERFACE
    } IMSVidOutputDevicesVtbl;
    interface IMSVidOutputDevices
    {
        CONST_VTBL struct IMSVidOutputDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,lCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,pD) )
    ( (This)->lpVtbl -> get_Item(This,v,pDB) )
    ( (This)->lpVtbl -> Add(This,pDB) )
    ( (This)->lpVtbl -> Remove(This,v) )
EXTERN_C const IID IID_IMSVidVideoRendererDevices;
    typedef struct IMSVidVideoRendererDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidVideoRendererDevices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidVideoRendererDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidVideoRendererDevices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidVideoRendererDevices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidVideoRendererDevices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidVideoRendererDevices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidVideoRendererDevices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMSVidVideoRendererDevices * This,
                                __RPC__out long *lCount);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IMSVidVideoRendererDevices * This,
                                __RPC__deref_out_opt IEnumVARIANT **pD);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IMSVidVideoRendererDevices * This,
                       VARIANT v,
                                __RPC__deref_out_opt IMSVidVideoRenderer **pDB);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IMSVidVideoRendererDevices * This,
                       __RPC__in_opt IMSVidVideoRenderer *pDB);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IMSVidVideoRendererDevices * This,
                       VARIANT v);
        END_INTERFACE
    } IMSVidVideoRendererDevicesVtbl;
    interface IMSVidVideoRendererDevices
    {
        CONST_VTBL struct IMSVidVideoRendererDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,lCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,pD) )
    ( (This)->lpVtbl -> get_Item(This,v,pDB) )
    ( (This)->lpVtbl -> Add(This,pDB) )
    ( (This)->lpVtbl -> Remove(This,v) )
EXTERN_C const IID IID_IMSVidAudioRendererDevices;
    typedef struct IMSVidAudioRendererDevicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidAudioRendererDevices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidAudioRendererDevices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidAudioRendererDevices * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidAudioRendererDevices * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidAudioRendererDevices * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidAudioRendererDevices * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidAudioRendererDevices * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMSVidAudioRendererDevices * This,
                                __RPC__out long *lCount);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IMSVidAudioRendererDevices * This,
                                __RPC__deref_out_opt IEnumVARIANT **pD);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IMSVidAudioRendererDevices * This,
                       VARIANT v,
                                __RPC__deref_out_opt IMSVidAudioRenderer **pDB);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IMSVidAudioRendererDevices * This,
                       __RPC__in_opt IMSVidAudioRenderer *pDB);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IMSVidAudioRendererDevices * This,
                       VARIANT v);
        END_INTERFACE
    } IMSVidAudioRendererDevicesVtbl;
    interface IMSVidAudioRendererDevices
    {
        CONST_VTBL struct IMSVidAudioRendererDevicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,lCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,pD) )
    ( (This)->lpVtbl -> get_Item(This,v,pDB) )
    ( (This)->lpVtbl -> Add(This,pDB) )
    ( (This)->lpVtbl -> Remove(This,v) )
EXTERN_C const IID IID_IMSVidFeatures;
    typedef struct IMSVidFeaturesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSVidFeatures * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSVidFeatures * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSVidFeatures * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSVidFeatures * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSVidFeatures * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSVidFeatures * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSVidFeatures * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IMSVidFeatures * This,
                                __RPC__out long *lCount);
                                                HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IMSVidFeatures * This,
                                __RPC__deref_out_opt IEnumVARIANT **pD);
                            HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IMSVidFeatures * This,
                       VARIANT v,
                                __RPC__deref_out_opt IMSVidFeature **pDB);
                   HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in IMSVidFeatures * This,
                       __RPC__in_opt IMSVidFeature *pDB);
                   HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in IMSVidFeatures * This,
                       VARIANT v);
        END_INTERFACE
    } IMSVidFeaturesVtbl;
    interface IMSVidFeatures
    {
        CONST_VTBL struct IMSVidFeaturesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,lCount) )
    ( (This)->lpVtbl -> get__NewEnum(This,pD) )
    ( (This)->lpVtbl -> get_Item(This,v,pDB) )
    ( (This)->lpVtbl -> Add(This,pDB) )
    ( (This)->lpVtbl -> Remove(This,v) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_segment_0000_0070_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HDC_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree( __RPC__in unsigned long *, __RPC__in HDC * );
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
unsigned long __RPC_USER HDC_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HDC * );
unsigned char * __RPC_USER HDC_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HDC * );
void __RPC_USER HDC_UserFree64( __RPC__in unsigned long *, __RPC__in HDC * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
