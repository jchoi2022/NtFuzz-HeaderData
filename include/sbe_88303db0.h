#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IStreamBufferInitialize IStreamBufferInitialize;
typedef interface IStreamBufferSink IStreamBufferSink;
typedef interface IStreamBufferSink2 IStreamBufferSink2;
typedef interface IStreamBufferSink3 IStreamBufferSink3;
typedef interface IStreamBufferSource IStreamBufferSource;
typedef interface IStreamBufferRecordControl IStreamBufferRecordControl;
typedef interface IStreamBufferRecComp IStreamBufferRecComp;
typedef interface IStreamBufferRecordingAttribute IStreamBufferRecordingAttribute;
typedef interface IEnumStreamBufferRecordingAttrib IEnumStreamBufferRecordingAttrib;
typedef interface IStreamBufferConfigure IStreamBufferConfigure;
typedef interface IStreamBufferConfigure2 IStreamBufferConfigure2;
typedef interface IStreamBufferConfigure3 IStreamBufferConfigure3;
typedef interface IStreamBufferMediaSeeking IStreamBufferMediaSeeking;
typedef interface IStreamBufferMediaSeeking2 IStreamBufferMediaSeeking2;
typedef interface IStreamBufferDataCounters IStreamBufferDataCounters;
typedef interface ISBE2GlobalEvent ISBE2GlobalEvent;
typedef interface ISBE2GlobalEvent2 ISBE2GlobalEvent2;
typedef interface ISBE2SpanningEvent ISBE2SpanningEvent;
typedef interface ISBE2Crossbar ISBE2Crossbar;
typedef interface ISBE2StreamMap ISBE2StreamMap;
typedef interface ISBE2EnumStream ISBE2EnumStream;
typedef interface ISBE2MediaTypeProfile ISBE2MediaTypeProfile;
typedef interface ISBE2FileScan ISBE2FileScan;
#include "unknwn.h"
#include "objidl.h"
#include "strmif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IStreamBufferInitialize;
    typedef struct IStreamBufferInitializeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IStreamBufferInitialize * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IStreamBufferInitialize * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IStreamBufferInitialize * This);
        HRESULT ( STDMETHODCALLTYPE *SetHKEY )(
            IStreamBufferInitialize * This,
                       HKEY hkeyRoot);
        HRESULT ( STDMETHODCALLTYPE *SetSIDs )(
            IStreamBufferInitialize * This,
                       DWORD cSIDs,
                                PSID *ppSID);
        END_INTERFACE
    } IStreamBufferInitializeVtbl;
    interface IStreamBufferInitialize
    {
        CONST_VTBL struct IStreamBufferInitializeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHKEY(This,hkeyRoot) )
    ( (This)->lpVtbl -> SetSIDs(This,cSIDs,ppSID) )
enum __MIDL___MIDL_itf_sbe_0000_0001_0001
    {
        RECORDING_TYPE_CONTENT = 0,
        RECORDING_TYPE_REFERENCE = ( RECORDING_TYPE_CONTENT + 1 )
    } ;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IStreamBufferSink;
    typedef struct IStreamBufferSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferSink * This);
        HRESULT ( STDMETHODCALLTYPE *LockProfile )(
            __RPC__in IStreamBufferSink * This,
                       __RPC__in LPCWSTR pszStreamBufferFilename);
        HRESULT ( STDMETHODCALLTYPE *CreateRecorder )(
            __RPC__in IStreamBufferSink * This,
                       __RPC__in LPCWSTR pszFilename,
                       DWORD dwRecordType,
                        __RPC__deref_out_opt IUnknown **pRecordingIUnknown);
        HRESULT ( STDMETHODCALLTYPE *IsProfileLocked )(
            __RPC__in IStreamBufferSink * This);
        END_INTERFACE
    } IStreamBufferSinkVtbl;
    interface IStreamBufferSink
    {
        CONST_VTBL struct IStreamBufferSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) )
    ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) )
    ( (This)->lpVtbl -> IsProfileLocked(This) )
EXTERN_C const IID IID_IStreamBufferSink2;
    typedef struct IStreamBufferSink2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferSink2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferSink2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *LockProfile )(
            __RPC__in IStreamBufferSink2 * This,
                       __RPC__in LPCWSTR pszStreamBufferFilename);
        HRESULT ( STDMETHODCALLTYPE *CreateRecorder )(
            __RPC__in IStreamBufferSink2 * This,
                       __RPC__in LPCWSTR pszFilename,
                       DWORD dwRecordType,
                        __RPC__deref_out_opt IUnknown **pRecordingIUnknown);
        HRESULT ( STDMETHODCALLTYPE *IsProfileLocked )(
            __RPC__in IStreamBufferSink2 * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockProfile )(
            __RPC__in IStreamBufferSink2 * This);
        END_INTERFACE
    } IStreamBufferSink2Vtbl;
    interface IStreamBufferSink2
    {
        CONST_VTBL struct IStreamBufferSink2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) )
    ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) )
    ( (This)->lpVtbl -> IsProfileLocked(This) )
    ( (This)->lpVtbl -> UnlockProfile(This) )
EXTERN_C const IID IID_IStreamBufferSink3;
    typedef struct IStreamBufferSink3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferSink3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferSink3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferSink3 * This);
        HRESULT ( STDMETHODCALLTYPE *LockProfile )(
            __RPC__in IStreamBufferSink3 * This,
                       __RPC__in LPCWSTR pszStreamBufferFilename);
        HRESULT ( STDMETHODCALLTYPE *CreateRecorder )(
            __RPC__in IStreamBufferSink3 * This,
                       __RPC__in LPCWSTR pszFilename,
                       DWORD dwRecordType,
                        __RPC__deref_out_opt IUnknown **pRecordingIUnknown);
        HRESULT ( STDMETHODCALLTYPE *IsProfileLocked )(
            __RPC__in IStreamBufferSink3 * This);
        HRESULT ( STDMETHODCALLTYPE *UnlockProfile )(
            __RPC__in IStreamBufferSink3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetAvailableFilter )(
            __RPC__in IStreamBufferSink3 * This,
                            __RPC__inout REFERENCE_TIME *prtMin);
        END_INTERFACE
    } IStreamBufferSink3Vtbl;
    interface IStreamBufferSink3
    {
        CONST_VTBL struct IStreamBufferSink3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LockProfile(This,pszStreamBufferFilename) )
    ( (This)->lpVtbl -> CreateRecorder(This,pszFilename,dwRecordType,pRecordingIUnknown) )
    ( (This)->lpVtbl -> IsProfileLocked(This) )
    ( (This)->lpVtbl -> UnlockProfile(This) )
    ( (This)->lpVtbl -> SetAvailableFilter(This,prtMin) )
EXTERN_C const IID IID_IStreamBufferSource;
    typedef struct IStreamBufferSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferSource * This);
        HRESULT ( STDMETHODCALLTYPE *SetStreamSink )(
            __RPC__in IStreamBufferSource * This,
                       __RPC__in_opt IStreamBufferSink *pIStreamBufferSink);
        END_INTERFACE
    } IStreamBufferSourceVtbl;
    interface IStreamBufferSource
    {
        CONST_VTBL struct IStreamBufferSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetStreamSink(This,pIStreamBufferSink) )
EXTERN_C const IID IID_IStreamBufferRecordControl;
    typedef struct IStreamBufferRecordControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferRecordControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferRecordControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferRecordControl * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IStreamBufferRecordControl * This,
                            __RPC__inout REFERENCE_TIME *prtStart);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IStreamBufferRecordControl * This,
                       REFERENCE_TIME rtStop);
        HRESULT ( STDMETHODCALLTYPE *GetRecordingStatus )(
            __RPC__in IStreamBufferRecordControl * This,
                        __RPC__out HRESULT *phResult,
                        __RPC__out BOOL *pbStarted,
                        __RPC__out BOOL *pbStopped);
        END_INTERFACE
    } IStreamBufferRecordControlVtbl;
    interface IStreamBufferRecordControl
    {
        CONST_VTBL struct IStreamBufferRecordControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This,prtStart) )
    ( (This)->lpVtbl -> Stop(This,rtStop) )
    ( (This)->lpVtbl -> GetRecordingStatus(This,phResult,pbStarted,pbStopped) )
EXTERN_C const IID IID_IStreamBufferRecComp;
    typedef struct IStreamBufferRecCompVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferRecComp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferRecComp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferRecComp * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IStreamBufferRecComp * This,
                       __RPC__in LPCWSTR pszTargetFilename,
                       __RPC__in LPCWSTR pszSBRecProfileRef);
        HRESULT ( STDMETHODCALLTYPE *Append )(
            __RPC__in IStreamBufferRecComp * This,
                       __RPC__in LPCWSTR pszSBRecording);
        HRESULT ( STDMETHODCALLTYPE *AppendEx )(
            __RPC__in IStreamBufferRecComp * This,
                       __RPC__in LPCWSTR pszSBRecording,
                       REFERENCE_TIME rtStart,
                       REFERENCE_TIME rtStop);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLength )(
            __RPC__in IStreamBufferRecComp * This,
                        __RPC__out DWORD *pcSeconds);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IStreamBufferRecComp * This);
        HRESULT ( STDMETHODCALLTYPE *Cancel )(
            __RPC__in IStreamBufferRecComp * This);
        END_INTERFACE
    } IStreamBufferRecCompVtbl;
    interface IStreamBufferRecComp
    {
        CONST_VTBL struct IStreamBufferRecCompVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszTargetFilename,pszSBRecProfileRef) )
    ( (This)->lpVtbl -> Append(This,pszSBRecording) )
    ( (This)->lpVtbl -> AppendEx(This,pszSBRecording,rtStart,rtStop) )
    ( (This)->lpVtbl -> GetCurrentLength(This,pcSeconds) )
    ( (This)->lpVtbl -> Close(This) )
    ( (This)->lpVtbl -> Cancel(This) )
static const WCHAR g_wszStreamBufferRecordingDuration[] =L"Duration";
static const WCHAR g_wszStreamBufferRecordingBitrate[] =L"Bitrate";
static const WCHAR g_wszStreamBufferRecordingSeekable[] =L"Seekable";
static const WCHAR g_wszStreamBufferRecordingStridable[] =L"Stridable";
static const WCHAR g_wszStreamBufferRecordingBroadcast[] =L"Broadcast";
static const WCHAR g_wszStreamBufferRecordingProtected[] =L"Is_Protected";
static const WCHAR g_wszStreamBufferRecordingTrusted[] =L"Is_Trusted";
static const WCHAR g_wszStreamBufferRecordingSignature_Name[] =L"Signature_Name";
static const WCHAR g_wszStreamBufferRecordingHasAudio[] =L"HasAudio";
static const WCHAR g_wszStreamBufferRecordingHasImage[] =L"HasImage";
static const WCHAR g_wszStreamBufferRecordingHasScript[] =L"HasScript";
static const WCHAR g_wszStreamBufferRecordingHasVideo[] =L"HasVideo";
static const WCHAR g_wszStreamBufferRecordingCurrentBitrate[] =L"CurrentBitrate";
static const WCHAR g_wszStreamBufferRecordingOptimalBitrate[] =L"OptimalBitrate";
static const WCHAR g_wszStreamBufferRecordingHasAttachedImages[] =L"HasAttachedImages";
static const WCHAR g_wszStreamBufferRecordingSkipBackward[] =L"Can_Skip_Backward";
static const WCHAR g_wszStreamBufferRecordingSkipForward[] =L"Can_Skip_Forward";
static const WCHAR g_wszStreamBufferRecordingNumberOfFrames[] =L"NumberOfFrames";
static const WCHAR g_wszStreamBufferRecordingFileSize[] =L"FileSize";
static const WCHAR g_wszStreamBufferRecordingHasArbitraryDataStream[] =L"HasArbitraryDataStream";
static const WCHAR g_wszStreamBufferRecordingHasFileTransferStream[] =L"HasFileTransferStream";
static const WCHAR g_wszStreamBufferRecordingTitle[] =L"Title";
static const WCHAR g_wszStreamBufferRecordingAuthor[] =L"Author";
static const WCHAR g_wszStreamBufferRecordingDescription[] =L"Description";
static const WCHAR g_wszStreamBufferRecordingRating[] =L"Rating";
static const WCHAR g_wszStreamBufferRecordingCopyright[] =L"Copyright";
static const WCHAR *g_wszStreamBufferRecordingUse_DRM = L"Use_DRM";
static const WCHAR *g_wszStreamBufferRecordingDRM_Flags = L"DRM_Flags";
static const WCHAR *g_wszStreamBufferRecordingDRM_Level = L"DRM_Level";
static const WCHAR g_wszStreamBufferRecordingAlbumTitle[] =L"WM/AlbumTitle";
static const WCHAR g_wszStreamBufferRecordingTrack[] =L"WM/Track";
static const WCHAR g_wszStreamBufferRecordingPromotionURL[] =L"WM/PromotionURL";
static const WCHAR g_wszStreamBufferRecordingAlbumCoverURL[] =L"WM/AlbumCoverURL";
static const WCHAR g_wszStreamBufferRecordingGenre[] =L"WM/Genre";
static const WCHAR g_wszStreamBufferRecordingYear[] =L"WM/Year";
static const WCHAR g_wszStreamBufferRecordingGenreID[] =L"WM/GenreID";
static const WCHAR g_wszStreamBufferRecordingMCDI[] =L"WM/MCDI";
static const WCHAR g_wszStreamBufferRecordingComposer[] =L"WM/Composer";
static const WCHAR g_wszStreamBufferRecordingLyrics[] =L"WM/Lyrics";
static const WCHAR g_wszStreamBufferRecordingTrackNumber[] =L"WM/TrackNumber";
static const WCHAR g_wszStreamBufferRecordingToolName[] =L"WM/ToolName";
static const WCHAR g_wszStreamBufferRecordingToolVersion[] =L"WM/ToolVersion";
static const WCHAR g_wszStreamBufferRecordingIsVBR[] =L"IsVBR";
static const WCHAR g_wszStreamBufferRecordingAlbumArtist[] =L"WM/AlbumArtist";
static const WCHAR g_wszStreamBufferRecordingBannerImageType[] =L"BannerImageType";
static const WCHAR g_wszStreamBufferRecordingBannerImageData[] =L"BannerImageData";
static const WCHAR g_wszStreamBufferRecordingBannerImageURL[] =L"BannerImageURL";
static const WCHAR g_wszStreamBufferRecordingCopyrightURL[] =L"CopyrightURL";
static const WCHAR g_wszStreamBufferRecordingAspectRatioX[] =L"AspectRatioX";
static const WCHAR g_wszStreamBufferRecordingAspectRatioY[] =L"AspectRatioY";
static const WCHAR g_wszStreamBufferRecordingNSCName[] =L"NSC_Name";
static const WCHAR g_wszStreamBufferRecordingNSCAddress[] =L"NSC_Address";
static const WCHAR g_wszStreamBufferRecordingNSCPhone[] =L"NSC_Phone";
static const WCHAR g_wszStreamBufferRecordingNSCEmail[] =L"NSC_Email";
static const WCHAR g_wszStreamBufferRecordingNSCDescription[] =L"NSC_Description";
typedef DECLSPEC_UUID("99038221-f409-4d44-8313-bff73269a85e")
enum STREAMBUFFER_ATTR_DATATYPE
    {
        STREAMBUFFER_TYPE_DWORD = 0,
        STREAMBUFFER_TYPE_STRING = 1,
        STREAMBUFFER_TYPE_BINARY = 2,
        STREAMBUFFER_TYPE_BOOL = 3,
        STREAMBUFFER_TYPE_QWORD = 4,
        STREAMBUFFER_TYPE_WORD = 5,
        STREAMBUFFER_TYPE_GUID = 6
    } STREAMBUFFER_ATTR_DATATYPE;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IStreamBufferRecordingAttribute;
    typedef struct IStreamBufferRecordingAttributeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferRecordingAttribute * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferRecordingAttribute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferRecordingAttribute * This);
        HRESULT ( STDMETHODCALLTYPE *SetAttribute )(
            __RPC__in IStreamBufferRecordingAttribute * This,
                       ULONG ulReserved,
                       __RPC__in LPCWSTR pszAttributeName,
                       STREAMBUFFER_ATTR_DATATYPE StreamBufferAttributeType,
                                __RPC__in_ecount_full(cbAttributeLength) BYTE *pbAttribute,
                       WORD cbAttributeLength);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCount )(
            __RPC__in IStreamBufferRecordingAttribute * This,
                       ULONG ulReserved,
                        __RPC__out WORD *pcAttributes);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByName )(
            __RPC__in IStreamBufferRecordingAttribute * This,
                       __RPC__in LPCWSTR pszAttributeName,
                       __RPC__in ULONG *pulReserved,
                        __RPC__out STREAMBUFFER_ATTR_DATATYPE *pStreamBufferAttributeType,
                                 __RPC__out_ecount_full(*pcbLength) BYTE *pbAttribute,
                            __RPC__inout WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeByIndex )(
            __RPC__in IStreamBufferRecordingAttribute * This,
                       WORD wIndex,
                       __RPC__in ULONG *pulReserved,
                        __RPC__out WCHAR *pszAttributeName,
                            __RPC__inout WORD *pcchNameLength,
                        __RPC__out STREAMBUFFER_ATTR_DATATYPE *pStreamBufferAttributeType,
                                 __RPC__out_ecount_full(*pcbLength) BYTE *pbAttribute,
                            __RPC__inout WORD *pcbLength);
        HRESULT ( STDMETHODCALLTYPE *EnumAttributes )(
            __RPC__in IStreamBufferRecordingAttribute * This,
                        __RPC__deref_out_opt IEnumStreamBufferRecordingAttrib **ppIEnumStreamBufferAttrib);
        END_INTERFACE
    } IStreamBufferRecordingAttributeVtbl;
    interface IStreamBufferRecordingAttribute
    {
        CONST_VTBL struct IStreamBufferRecordingAttributeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAttribute(This,ulReserved,pszAttributeName,StreamBufferAttributeType,pbAttribute,cbAttributeLength) )
    ( (This)->lpVtbl -> GetAttributeCount(This,ulReserved,pcAttributes) )
    ( (This)->lpVtbl -> GetAttributeByName(This,pszAttributeName,pulReserved,pStreamBufferAttributeType,pbAttribute,pcbLength) )
    ( (This)->lpVtbl -> GetAttributeByIndex(This,wIndex,pulReserved,pszAttributeName,pcchNameLength,pStreamBufferAttributeType,pbAttribute,pcbLength) )
    ( (This)->lpVtbl -> EnumAttributes(This,ppIEnumStreamBufferAttrib) )
typedef struct STREAMBUFFER_ATTRIBUTE
    {
    LPWSTR pszName;
    STREAMBUFFER_ATTR_DATATYPE StreamBufferAttributeType;
                    BYTE *pbAttribute;
    WORD cbLength;
    } STREAMBUFFER_ATTRIBUTE;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumStreamBufferRecordingAttrib;
    typedef struct IEnumStreamBufferRecordingAttribVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumStreamBufferRecordingAttrib * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumStreamBufferRecordingAttrib * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumStreamBufferRecordingAttrib * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumStreamBufferRecordingAttrib * This,
                       ULONG cRequest,
                                     __RPC__inout_ecount_full(cRequest) STREAMBUFFER_ATTRIBUTE *pStreamBufferAttribute,
                        __RPC__out ULONG *pcReceived);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumStreamBufferRecordingAttrib * This,
                       ULONG cRecords);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumStreamBufferRecordingAttrib * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumStreamBufferRecordingAttrib * This,
                        __RPC__deref_out_opt IEnumStreamBufferRecordingAttrib **ppIEnumStreamBufferAttrib);
        END_INTERFACE
    } IEnumStreamBufferRecordingAttribVtbl;
    interface IEnumStreamBufferRecordingAttrib
    {
        CONST_VTBL struct IEnumStreamBufferRecordingAttribVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cRequest,pStreamBufferAttribute,pcReceived) )
    ( (This)->lpVtbl -> Skip(This,cRecords) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnumStreamBufferAttrib) )
EXTERN_C const IID IID_IStreamBufferConfigure;
    typedef struct IStreamBufferConfigureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferConfigure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferConfigure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferConfigure * This);
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )(
            __RPC__in IStreamBufferConfigure * This,
                       __RPC__in LPCWSTR pszDirectoryName);
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )(
            __RPC__in IStreamBufferConfigure * This,
                        __RPC__deref_out_opt LPWSTR *ppszDirectoryName);
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileCount )(
            __RPC__in IStreamBufferConfigure * This,
                       DWORD dwMin,
                       DWORD dwMax);
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileCount )(
            __RPC__in IStreamBufferConfigure * This,
                        __RPC__out DWORD *pdwMin,
                        __RPC__out DWORD *pdwMax);
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileDuration )(
            __RPC__in IStreamBufferConfigure * This,
                       DWORD dwSeconds);
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileDuration )(
            __RPC__in IStreamBufferConfigure * This,
                        __RPC__out DWORD *pdwSeconds);
        END_INTERFACE
    } IStreamBufferConfigureVtbl;
    interface IStreamBufferConfigure
    {
        CONST_VTBL struct IStreamBufferConfigureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) )
    ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) )
    ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) )
    ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) )
    ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) )
    ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) )
EXTERN_C const IID IID_IStreamBufferConfigure2;
    typedef struct IStreamBufferConfigure2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferConfigure2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferConfigure2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferConfigure2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )(
            __RPC__in IStreamBufferConfigure2 * This,
                       __RPC__in LPCWSTR pszDirectoryName);
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )(
            __RPC__in IStreamBufferConfigure2 * This,
                        __RPC__deref_out_opt LPWSTR *ppszDirectoryName);
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileCount )(
            __RPC__in IStreamBufferConfigure2 * This,
                       DWORD dwMin,
                       DWORD dwMax);
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileCount )(
            __RPC__in IStreamBufferConfigure2 * This,
                        __RPC__out DWORD *pdwMin,
                        __RPC__out DWORD *pdwMax);
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileDuration )(
            __RPC__in IStreamBufferConfigure2 * This,
                       DWORD dwSeconds);
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileDuration )(
            __RPC__in IStreamBufferConfigure2 * This,
                        __RPC__out DWORD *pdwSeconds);
        HRESULT ( STDMETHODCALLTYPE *SetMultiplexedPacketSize )(
            __RPC__in IStreamBufferConfigure2 * This,
                       DWORD cbBytesPerPacket);
        HRESULT ( STDMETHODCALLTYPE *GetMultiplexedPacketSize )(
            __RPC__in IStreamBufferConfigure2 * This,
                        __RPC__out DWORD *pcbBytesPerPacket);
        HRESULT ( STDMETHODCALLTYPE *SetFFTransitionRates )(
            __RPC__in IStreamBufferConfigure2 * This,
                       DWORD dwMaxFullFrameRate,
                       DWORD dwMaxNonSkippingRate);
        HRESULT ( STDMETHODCALLTYPE *GetFFTransitionRates )(
            __RPC__in IStreamBufferConfigure2 * This,
                        __RPC__out DWORD *pdwMaxFullFrameRate,
                        __RPC__out DWORD *pdwMaxNonSkippingRate);
        END_INTERFACE
    } IStreamBufferConfigure2Vtbl;
    interface IStreamBufferConfigure2
    {
        CONST_VTBL struct IStreamBufferConfigure2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) )
    ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) )
    ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) )
    ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) )
    ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) )
    ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) )
    ( (This)->lpVtbl -> SetMultiplexedPacketSize(This,cbBytesPerPacket) )
    ( (This)->lpVtbl -> GetMultiplexedPacketSize(This,pcbBytesPerPacket) )
    ( (This)->lpVtbl -> SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) )
    ( (This)->lpVtbl -> GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) )
EXTERN_C const IID IID_IStreamBufferConfigure3;
    typedef struct IStreamBufferConfigure3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferConfigure3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferConfigure3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferConfigure3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetDirectory )(
            __RPC__in IStreamBufferConfigure3 * This,
                       __RPC__in LPCWSTR pszDirectoryName);
        HRESULT ( STDMETHODCALLTYPE *GetDirectory )(
            __RPC__in IStreamBufferConfigure3 * This,
                        __RPC__deref_out_opt LPWSTR *ppszDirectoryName);
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileCount )(
            __RPC__in IStreamBufferConfigure3 * This,
                       DWORD dwMin,
                       DWORD dwMax);
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileCount )(
            __RPC__in IStreamBufferConfigure3 * This,
                        __RPC__out DWORD *pdwMin,
                        __RPC__out DWORD *pdwMax);
        HRESULT ( STDMETHODCALLTYPE *SetBackingFileDuration )(
            __RPC__in IStreamBufferConfigure3 * This,
                       DWORD dwSeconds);
        HRESULT ( STDMETHODCALLTYPE *GetBackingFileDuration )(
            __RPC__in IStreamBufferConfigure3 * This,
                        __RPC__out DWORD *pdwSeconds);
        HRESULT ( STDMETHODCALLTYPE *SetMultiplexedPacketSize )(
            __RPC__in IStreamBufferConfigure3 * This,
                       DWORD cbBytesPerPacket);
        HRESULT ( STDMETHODCALLTYPE *GetMultiplexedPacketSize )(
            __RPC__in IStreamBufferConfigure3 * This,
                        __RPC__out DWORD *pcbBytesPerPacket);
        HRESULT ( STDMETHODCALLTYPE *SetFFTransitionRates )(
            __RPC__in IStreamBufferConfigure3 * This,
                       DWORD dwMaxFullFrameRate,
                       DWORD dwMaxNonSkippingRate);
        HRESULT ( STDMETHODCALLTYPE *GetFFTransitionRates )(
            __RPC__in IStreamBufferConfigure3 * This,
                        __RPC__out DWORD *pdwMaxFullFrameRate,
                        __RPC__out DWORD *pdwMaxNonSkippingRate);
        HRESULT ( STDMETHODCALLTYPE *SetStartRecConfig )(
            __RPC__in IStreamBufferConfigure3 * This,
                       BOOL fStartStopsCur);
        HRESULT ( STDMETHODCALLTYPE *GetStartRecConfig )(
            __RPC__in IStreamBufferConfigure3 * This,
                        __RPC__out BOOL *pfStartStopsCur);
        HRESULT ( STDMETHODCALLTYPE *SetNamespace )(
            __RPC__in IStreamBufferConfigure3 * This,
                       __RPC__in LPWSTR pszNamespace);
        HRESULT ( STDMETHODCALLTYPE *GetNamespace )(
            __RPC__in IStreamBufferConfigure3 * This,
                        __RPC__deref_out_opt LPWSTR *ppszNamespace);
        END_INTERFACE
    } IStreamBufferConfigure3Vtbl;
    interface IStreamBufferConfigure3
    {
        CONST_VTBL struct IStreamBufferConfigure3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetDirectory(This,pszDirectoryName) )
    ( (This)->lpVtbl -> GetDirectory(This,ppszDirectoryName) )
    ( (This)->lpVtbl -> SetBackingFileCount(This,dwMin,dwMax) )
    ( (This)->lpVtbl -> GetBackingFileCount(This,pdwMin,pdwMax) )
    ( (This)->lpVtbl -> SetBackingFileDuration(This,dwSeconds) )
    ( (This)->lpVtbl -> GetBackingFileDuration(This,pdwSeconds) )
    ( (This)->lpVtbl -> SetMultiplexedPacketSize(This,cbBytesPerPacket) )
    ( (This)->lpVtbl -> GetMultiplexedPacketSize(This,pcbBytesPerPacket) )
    ( (This)->lpVtbl -> SetFFTransitionRates(This,dwMaxFullFrameRate,dwMaxNonSkippingRate) )
    ( (This)->lpVtbl -> GetFFTransitionRates(This,pdwMaxFullFrameRate,pdwMaxNonSkippingRate) )
    ( (This)->lpVtbl -> SetStartRecConfig(This,fStartStopsCur) )
    ( (This)->lpVtbl -> GetStartRecConfig(This,pfStartStopsCur) )
    ( (This)->lpVtbl -> SetNamespace(This,pszNamespace) )
    ( (This)->lpVtbl -> GetNamespace(This,ppszNamespace) )
EXTERN_C const IID IID_IStreamBufferMediaSeeking;
    typedef struct IStreamBufferMediaSeekingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferMediaSeeking * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferMediaSeeking * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferMediaSeeking * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ DWORD *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *CheckCapabilities )(
            __RPC__in IStreamBufferMediaSeeking * This,
                            __RPC__inout DWORD *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
            __RPC__in IStreamBufferMediaSeeking * This,
                       __RPC__in const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *QueryPreferredFormat )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *IsUsingTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking * This,
                       __RPC__in const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *SetTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking * This,
                       __RPC__in const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ LONGLONG *pDuration);
        HRESULT ( STDMETHODCALLTYPE *GetStopPosition )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ LONGLONG *pStop);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPosition )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ LONGLONG *pCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ LONGLONG *pTarget,
            _In_opt_ const GUID *pTargetFormat,
                       LONGLONG Source,
            _In_opt_ const GUID *pSourceFormat);
        HRESULT ( STDMETHODCALLTYPE *SetPositions )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Inout_opt_ LONGLONG *pCurrent,
                       DWORD dwCurrentFlags,
            _Inout_opt_ LONGLONG *pStop,
                       DWORD dwStopFlags);
        HRESULT ( STDMETHODCALLTYPE *GetPositions )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_opt_ LONGLONG *pCurrent,
            _Out_opt_ LONGLONG *pStop);
        HRESULT ( STDMETHODCALLTYPE *GetAvailable )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_opt_ LONGLONG *pEarliest,
            _Out_opt_ LONGLONG *pLatest);
        HRESULT ( STDMETHODCALLTYPE *SetRate )(
            __RPC__in IStreamBufferMediaSeeking * This,
                       double dRate);
        HRESULT ( STDMETHODCALLTYPE *GetRate )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ double *pdRate);
        HRESULT ( STDMETHODCALLTYPE *GetPreroll )(
            __RPC__in IStreamBufferMediaSeeking * This,
            _Out_ LONGLONG *pllPreroll);
        END_INTERFACE
    } IStreamBufferMediaSeekingVtbl;
    interface IStreamBufferMediaSeeking
    {
        CONST_VTBL struct IStreamBufferMediaSeekingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) )
    ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) )
    ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) )
    ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetDuration(This,pDuration) )
    ( (This)->lpVtbl -> GetStopPosition(This,pStop) )
    ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) )
    ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) )
    ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) )
    ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) )
    ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) )
    ( (This)->lpVtbl -> SetRate(This,dRate) )
    ( (This)->lpVtbl -> GetRate(This,pdRate) )
    ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) )
EXTERN_C const IID IID_IStreamBufferMediaSeeking2;
    typedef struct IStreamBufferMediaSeeking2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferMediaSeeking2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferMediaSeeking2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ DWORD *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *CheckCapabilities )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
                            __RPC__inout DWORD *pCapabilities);
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
                       __RPC__in const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *QueryPreferredFormat )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *IsUsingTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
                       __RPC__in const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *SetTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
                       __RPC__in const GUID *pFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDuration )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ LONGLONG *pDuration);
        HRESULT ( STDMETHODCALLTYPE *GetStopPosition )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ LONGLONG *pStop);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPosition )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ LONGLONG *pCurrent);
        HRESULT ( STDMETHODCALLTYPE *ConvertTimeFormat )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ LONGLONG *pTarget,
            _In_opt_ const GUID *pTargetFormat,
                       LONGLONG Source,
            _In_opt_ const GUID *pSourceFormat);
        HRESULT ( STDMETHODCALLTYPE *SetPositions )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Inout_opt_ LONGLONG *pCurrent,
                       DWORD dwCurrentFlags,
            _Inout_opt_ LONGLONG *pStop,
                       DWORD dwStopFlags);
        HRESULT ( STDMETHODCALLTYPE *GetPositions )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_opt_ LONGLONG *pCurrent,
            _Out_opt_ LONGLONG *pStop);
        HRESULT ( STDMETHODCALLTYPE *GetAvailable )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_opt_ LONGLONG *pEarliest,
            _Out_opt_ LONGLONG *pLatest);
        HRESULT ( STDMETHODCALLTYPE *SetRate )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
                       double dRate);
        HRESULT ( STDMETHODCALLTYPE *GetRate )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ double *pdRate);
        HRESULT ( STDMETHODCALLTYPE *GetPreroll )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
            _Out_ LONGLONG *pllPreroll);
        HRESULT ( STDMETHODCALLTYPE *SetRateEx )(
            __RPC__in IStreamBufferMediaSeeking2 * This,
                       double dRate,
                       DWORD dwFramesPerSec);
        END_INTERFACE
    } IStreamBufferMediaSeeking2Vtbl;
    interface IStreamBufferMediaSeeking2
    {
        CONST_VTBL struct IStreamBufferMediaSeeking2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,pCapabilities) )
    ( (This)->lpVtbl -> CheckCapabilities(This,pCapabilities) )
    ( (This)->lpVtbl -> IsFormatSupported(This,pFormat) )
    ( (This)->lpVtbl -> QueryPreferredFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> IsUsingTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> SetTimeFormat(This,pFormat) )
    ( (This)->lpVtbl -> GetDuration(This,pDuration) )
    ( (This)->lpVtbl -> GetStopPosition(This,pStop) )
    ( (This)->lpVtbl -> GetCurrentPosition(This,pCurrent) )
    ( (This)->lpVtbl -> ConvertTimeFormat(This,pTarget,pTargetFormat,Source,pSourceFormat) )
    ( (This)->lpVtbl -> SetPositions(This,pCurrent,dwCurrentFlags,pStop,dwStopFlags) )
    ( (This)->lpVtbl -> GetPositions(This,pCurrent,pStop) )
    ( (This)->lpVtbl -> GetAvailable(This,pEarliest,pLatest) )
    ( (This)->lpVtbl -> SetRate(This,dRate) )
    ( (This)->lpVtbl -> GetRate(This,pdRate) )
    ( (This)->lpVtbl -> GetPreroll(This,pllPreroll) )
    ( (This)->lpVtbl -> SetRateEx(This,dRate,dwFramesPerSec) )
typedef struct SBE_PIN_DATA
    {
    ULONGLONG cDataBytes;
    ULONGLONG cSamplesProcessed;
    ULONGLONG cDiscontinuities;
    ULONGLONG cSyncPoints;
    ULONGLONG cTimestamps;
    } SBE_PIN_DATA;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IStreamBufferDataCounters;
    typedef struct IStreamBufferDataCountersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStreamBufferDataCounters * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStreamBufferDataCounters * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStreamBufferDataCounters * This);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in IStreamBufferDataCounters * This,
                        __RPC__out SBE_PIN_DATA *pPinData);
        HRESULT ( STDMETHODCALLTYPE *ResetData )(
            __RPC__in IStreamBufferDataCounters * This);
        END_INTERFACE
    } IStreamBufferDataCountersVtbl;
    interface IStreamBufferDataCounters
    {
        CONST_VTBL struct IStreamBufferDataCountersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetData(This,pPinData) )
    ( (This)->lpVtbl -> ResetData(This) )
enum {
    STREAMBUFFER_EC_TIMEHOLE = STREAMBUFFER_EC_BASE,
    STREAMBUFFER_EC_STALE_DATA_READ,
    STREAMBUFFER_EC_STALE_FILE_DELETED,
    STREAMBUFFER_EC_CONTENT_BECOMING_STALE,
    STREAMBUFFER_EC_WRITE_FAILURE,
    STREAMBUFFER_EC_WRITE_FAILURE_CLEAR,
    STREAMBUFFER_EC_READ_FAILURE,
    STREAMBUFFER_EC_RATE_CHANGED,
    STREAMBUFFER_EC_PRIMARY_AUDIO,
    STREAMBUFFER_EC_RATE_CHANGING_FOR_SETPOSITIONS,
    STREAMBUFFER_EC_SETPOSITIONS_EVENTS_DONE,
} ;
DEFINE_GUID(EVENTID_SBE2RecControlStarted,
0x8966a89e, 0xf83e, 0x4c0e, 0xbc, 0x3b, 0xbf, 0xa7, 0x64, 0x9e, 0x4, 0xcb);
DEFINE_GUID(EVENTID_SBE2RecControlStopped,
0x454b1ec8, 0xc9b, 0x4caa, 0xb1, 0xa1, 0x1e, 0x7a, 0x26, 0x66, 0xf6, 0xc3);
DEFINE_GUID (SBE2_STREAM_DESC_EVENT,
0x2313a4ed, 0xbf2d, 0x454f, 0xad, 0x8a, 0xd9, 0x5b, 0xa7, 0xf9, 0x1f, 0xee);
DEFINE_GUID (SBE2_V1_STREAMS_CREATION_EVENT,
0xfcf09, 0x97f5, 0x46ac, 0x97, 0x69, 0x7a, 0x83, 0xb3, 0x53, 0x84, 0xfb);
DEFINE_GUID (SBE2_V2_STREAMS_CREATION_EVENT,
0xa72530a3, 0x344, 0x4cab, 0xa2, 0xd0, 0xfe, 0x93, 0x7d, 0xbd, 0xca, 0xb3);
typedef enum {
DEF_MODE_PROFILE = 0x0000001,
DEF_MODE_STREAMS = 0x0000002,
} CROSSBAR_DEFAULT_FLAGS ;
typedef DWORD SBE2_STREAM_ID;
typedef struct __MIDL___MIDL_itf_sbe_0000_0015_0001
    {
    DWORD Version;
    SBE2_STREAM_ID StreamId;
    DWORD Default;
    DWORD Reserved;
    } SBE2_STREAM_DESC;
typedef struct __MIDL___MIDL_itf_sbe_0000_0015_0002
    {
    DWORD Version;
    DWORD StreamId;
    BOOL Default;
    BOOL Creation;
    DWORD Reserved;
    GUID guidSubMediaType;
    GUID guidFormatType;
    AM_MEDIA_TYPE MediaType;
    } DVR_STREAM_DESC;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID IID_ISBE2GlobalEvent;
    typedef struct ISBE2GlobalEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2GlobalEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2GlobalEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2GlobalEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in ISBE2GlobalEvent * This,
                       __RPC__in REFGUID idEvt,
                       ULONG param1,
                       ULONG param2,
                       ULONG param3,
                       ULONG param4,
                        __RPC__out BOOL *pSpanning,
                            __RPC__inout DWORD *pcb,
                                 __RPC__out_ecount_full(*pcb) BYTE *pb);
        END_INTERFACE
    } ISBE2GlobalEventVtbl;
    interface ISBE2GlobalEvent
    {
        CONST_VTBL struct ISBE2GlobalEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb) )
EXTERN_C const IID IID_ISBE2GlobalEvent2;
    typedef struct ISBE2GlobalEvent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2GlobalEvent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2GlobalEvent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2GlobalEvent2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in ISBE2GlobalEvent2 * This,
                       __RPC__in REFGUID idEvt,
                       ULONG param1,
                       ULONG param2,
                       ULONG param3,
                       ULONG param4,
                        __RPC__out BOOL *pSpanning,
                            __RPC__inout DWORD *pcb,
                                 __RPC__out_ecount_full(*pcb) BYTE *pb);
        HRESULT ( STDMETHODCALLTYPE *GetEventEx )(
            __RPC__in ISBE2GlobalEvent2 * This,
                       __RPC__in REFGUID idEvt,
                       ULONG param1,
                       ULONG param2,
                       ULONG param3,
                       ULONG param4,
                        __RPC__out BOOL *pSpanning,
                            __RPC__inout DWORD *pcb,
                                 __RPC__out_ecount_full(*pcb) BYTE *pb,
                        __RPC__out REFERENCE_TIME *pStreamTime);
        END_INTERFACE
    } ISBE2GlobalEvent2Vtbl;
    interface ISBE2GlobalEvent2
    {
        CONST_VTBL struct ISBE2GlobalEvent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb) )
    ( (This)->lpVtbl -> GetEventEx(This,idEvt,param1,param2,param3,param4,pSpanning,pcb,pb,pStreamTime) )
EXTERN_C const IID IID_ISBE2SpanningEvent;
    typedef struct ISBE2SpanningEventVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2SpanningEvent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2SpanningEvent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2SpanningEvent * This);
        HRESULT ( STDMETHODCALLTYPE *GetEvent )(
            __RPC__in ISBE2SpanningEvent * This,
                       __RPC__in REFGUID idEvt,
                       SBE2_STREAM_ID streamId,
                            __RPC__inout DWORD *pcb,
                                 __RPC__out_ecount_full(*pcb) BYTE *pb);
        END_INTERFACE
    } ISBE2SpanningEventVtbl;
    interface ISBE2SpanningEvent
    {
        CONST_VTBL struct ISBE2SpanningEventVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetEvent(This,idEvt,streamId,pcb,pb) )
EXTERN_C const IID IID_ISBE2Crossbar;
    typedef struct ISBE2CrossbarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2Crossbar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2Crossbar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2Crossbar * This);
        HRESULT ( STDMETHODCALLTYPE *EnableDefaultMode )(
            __RPC__in ISBE2Crossbar * This,
                       DWORD DefaultFlags);
        HRESULT ( STDMETHODCALLTYPE *GetInitialProfile )(
            __RPC__in ISBE2Crossbar * This,
                        __RPC__deref_out_opt ISBE2MediaTypeProfile **ppProfile);
        HRESULT ( STDMETHODCALLTYPE *SetOutputProfile )(
            __RPC__in ISBE2Crossbar * This,
                       __RPC__in_opt ISBE2MediaTypeProfile *pProfile,
                        __RPC__out DWORD *pcOutputPins,
                        __RPC__deref_out_opt IPin **ppOutputPins);
        HRESULT ( STDMETHODCALLTYPE *EnumStreams )(
            __RPC__in ISBE2Crossbar * This,
                        __RPC__deref_out_opt ISBE2EnumStream **ppStreams);
        END_INTERFACE
    } ISBE2CrossbarVtbl;
    interface ISBE2Crossbar
    {
        CONST_VTBL struct ISBE2CrossbarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableDefaultMode(This,DefaultFlags) )
    ( (This)->lpVtbl -> GetInitialProfile(This,ppProfile) )
    ( (This)->lpVtbl -> SetOutputProfile(This,pProfile,pcOutputPins,ppOutputPins) )
    ( (This)->lpVtbl -> EnumStreams(This,ppStreams) )
EXTERN_C const IID IID_ISBE2StreamMap;
    typedef struct ISBE2StreamMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2StreamMap * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2StreamMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2StreamMap * This);
        HRESULT ( STDMETHODCALLTYPE *MapStream )(
            __RPC__in ISBE2StreamMap * This,
                       SBE2_STREAM_ID Stream);
        HRESULT ( STDMETHODCALLTYPE *UnmapStream )(
            __RPC__in ISBE2StreamMap * This,
                       SBE2_STREAM_ID Stream);
        HRESULT ( STDMETHODCALLTYPE *EnumMappedStreams )(
            __RPC__in ISBE2StreamMap * This,
                        __RPC__deref_out_opt ISBE2EnumStream **ppStreams);
        END_INTERFACE
    } ISBE2StreamMapVtbl;
    interface ISBE2StreamMap
    {
        CONST_VTBL struct ISBE2StreamMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MapStream(This,Stream) )
    ( (This)->lpVtbl -> UnmapStream(This,Stream) )
    ( (This)->lpVtbl -> EnumMappedStreams(This,ppStreams) )
EXTERN_C const IID IID_ISBE2EnumStream;
    typedef struct ISBE2EnumStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2EnumStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2EnumStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2EnumStream * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in ISBE2EnumStream * This,
                       ULONG cRequest,
                                     __RPC__inout_ecount_full(cRequest) SBE2_STREAM_DESC *pStreamDesc,
                        __RPC__out ULONG *pcReceived);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in ISBE2EnumStream * This,
                       ULONG cRecords);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISBE2EnumStream * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ISBE2EnumStream * This,
                        __RPC__deref_out_opt ISBE2EnumStream **ppIEnumStream);
        END_INTERFACE
    } ISBE2EnumStreamVtbl;
    interface ISBE2EnumStream
    {
        CONST_VTBL struct ISBE2EnumStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cRequest,pStreamDesc,pcReceived) )
    ( (This)->lpVtbl -> Skip(This,cRecords) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppIEnumStream) )
EXTERN_C const IID IID_ISBE2MediaTypeProfile;
    typedef struct ISBE2MediaTypeProfileVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2MediaTypeProfile * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2MediaTypeProfile * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2MediaTypeProfile * This);
        HRESULT ( STDMETHODCALLTYPE *GetStreamCount )(
            __RPC__in ISBE2MediaTypeProfile * This,
                        __RPC__out DWORD *pCount);
        HRESULT ( STDMETHODCALLTYPE *GetStream )(
            __RPC__in ISBE2MediaTypeProfile * This,
                       DWORD Index,
                        __RPC__deref_out_opt AM_MEDIA_TYPE **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *AddStream )(
            __RPC__in ISBE2MediaTypeProfile * This,
                       __RPC__in AM_MEDIA_TYPE *pMediaType);
        HRESULT ( STDMETHODCALLTYPE *DeleteStream )(
            __RPC__in ISBE2MediaTypeProfile * This,
                       DWORD Index);
        END_INTERFACE
    } ISBE2MediaTypeProfileVtbl;
    interface ISBE2MediaTypeProfile
    {
        CONST_VTBL struct ISBE2MediaTypeProfileVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStreamCount(This,pCount) )
    ( (This)->lpVtbl -> GetStream(This,Index,ppMediaType) )
    ( (This)->lpVtbl -> AddStream(This,pMediaType) )
    ( (This)->lpVtbl -> DeleteStream(This,Index) )
EXTERN_C const IID IID_ISBE2FileScan;
    typedef struct ISBE2FileScanVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISBE2FileScan * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISBE2FileScan * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISBE2FileScan * This);
        HRESULT ( STDMETHODCALLTYPE *RepairFile )(
            __RPC__in ISBE2FileScan * This,
                       __RPC__in LPCWSTR filename);
        END_INTERFACE
    } ISBE2FileScanVtbl;
    interface ISBE2FileScan
    {
        CONST_VTBL struct ISBE2FileScanVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RepairFile(This,filename) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sbe_0000_0023_v0_0_s_ifspec;
}
