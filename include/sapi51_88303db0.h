#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISpNotifySource ISpNotifySource;
typedef interface ISpNotifySink ISpNotifySink;
typedef interface ISpNotifyTranslator ISpNotifyTranslator;
typedef interface ISpDataKey ISpDataKey;
typedef interface ISpRegDataKey ISpRegDataKey;
typedef interface ISpObjectTokenCategory ISpObjectTokenCategory;
typedef interface ISpObjectToken ISpObjectToken;
typedef interface ISpObjectTokenInit ISpObjectTokenInit;
typedef interface IEnumSpObjectTokens IEnumSpObjectTokens;
typedef interface ISpObjectWithToken ISpObjectWithToken;
typedef interface ISpResourceManager ISpResourceManager;
typedef interface ISpEventSource ISpEventSource;
typedef interface ISpEventSink ISpEventSink;
typedef interface ISpStreamFormat ISpStreamFormat;
typedef interface ISpStream ISpStream;
typedef interface ISpStreamFormatConverter ISpStreamFormatConverter;
typedef interface ISpAudio ISpAudio;
typedef interface ISpMMSysAudio ISpMMSysAudio;
typedef interface ISpTranscript ISpTranscript;
typedef interface ISpLexicon ISpLexicon;
typedef interface ISpContainerLexicon ISpContainerLexicon;
typedef interface ISpPhoneConverter ISpPhoneConverter;
typedef interface ISpVoice ISpVoice;
typedef interface ISpPhrase ISpPhrase;
typedef interface ISpPhraseAlt ISpPhraseAlt;
typedef interface ISpRecoResult ISpRecoResult;
typedef interface ISpGrammarBuilder ISpGrammarBuilder;
typedef interface ISpRecoGrammar ISpRecoGrammar;
typedef interface ISpRecoContext ISpRecoContext;
typedef interface ISpProperties ISpProperties;
typedef interface ISpRecognizer ISpRecognizer;
typedef interface ISpeechDataKey ISpeechDataKey;
typedef interface ISpeechObjectToken ISpeechObjectToken;
typedef interface ISpeechObjectTokens ISpeechObjectTokens;
typedef interface ISpeechObjectTokenCategory ISpeechObjectTokenCategory;
typedef interface ISpeechAudioBufferInfo ISpeechAudioBufferInfo;
typedef interface ISpeechAudioStatus ISpeechAudioStatus;
typedef interface ISpeechAudioFormat ISpeechAudioFormat;
typedef interface ISpeechWaveFormatEx ISpeechWaveFormatEx;
typedef interface ISpeechBaseStream ISpeechBaseStream;
typedef interface ISpeechFileStream ISpeechFileStream;
typedef interface ISpeechMemoryStream ISpeechMemoryStream;
typedef interface ISpeechCustomStream ISpeechCustomStream;
typedef interface ISpeechAudio ISpeechAudio;
typedef interface ISpeechMMSysAudio ISpeechMMSysAudio;
typedef interface ISpeechVoice ISpeechVoice;
typedef interface ISpeechVoiceStatus ISpeechVoiceStatus;
typedef interface _ISpeechVoiceEvents _ISpeechVoiceEvents;
typedef interface ISpeechRecognizer ISpeechRecognizer;
typedef interface ISpeechRecognizerStatus ISpeechRecognizerStatus;
typedef interface ISpeechRecoContext ISpeechRecoContext;
typedef interface ISpeechRecoGrammar ISpeechRecoGrammar;
typedef interface _ISpeechRecoContextEvents _ISpeechRecoContextEvents;
typedef interface ISpeechGrammarRule ISpeechGrammarRule;
typedef interface ISpeechGrammarRules ISpeechGrammarRules;
typedef interface ISpeechGrammarRuleState ISpeechGrammarRuleState;
typedef interface ISpeechGrammarRuleStateTransition ISpeechGrammarRuleStateTransition;
typedef interface ISpeechGrammarRuleStateTransitions ISpeechGrammarRuleStateTransitions;
typedef interface ISpeechTextSelectionInformation ISpeechTextSelectionInformation;
typedef interface ISpeechRecoResult ISpeechRecoResult;
typedef interface ISpeechRecoResultTimes ISpeechRecoResultTimes;
typedef interface ISpeechPhraseAlternate ISpeechPhraseAlternate;
typedef interface ISpeechPhraseAlternates ISpeechPhraseAlternates;
typedef interface ISpeechPhraseInfo ISpeechPhraseInfo;
typedef interface ISpeechPhraseElement ISpeechPhraseElement;
typedef interface ISpeechPhraseElements ISpeechPhraseElements;
typedef interface ISpeechPhraseReplacement ISpeechPhraseReplacement;
typedef interface ISpeechPhraseReplacements ISpeechPhraseReplacements;
typedef interface ISpeechPhraseProperty ISpeechPhraseProperty;
typedef interface ISpeechPhraseProperties ISpeechPhraseProperties;
typedef interface ISpeechPhraseRule ISpeechPhraseRule;
typedef interface ISpeechPhraseRules ISpeechPhraseRules;
typedef interface ISpeechLexicon ISpeechLexicon;
typedef interface ISpeechLexiconWords ISpeechLexiconWords;
typedef interface ISpeechLexiconWord ISpeechLexiconWord;
typedef interface ISpeechLexiconPronunciations ISpeechLexiconPronunciations;
typedef interface ISpeechLexiconPronunciation ISpeechLexiconPronunciation;
typedef interface ISpeechPhraseInfoBuilder ISpeechPhraseInfoBuilder;
typedef interface ISpeechPhoneConverter ISpeechPhoneConverter;
typedef class SpNotifyTranslator SpNotifyTranslator;
typedef class SpObjectTokenCategory SpObjectTokenCategory;
typedef class SpObjectToken SpObjectToken;
typedef class SpResourceManager SpResourceManager;
typedef class SpStreamFormatConverter SpStreamFormatConverter;
typedef class SpMMAudioEnum SpMMAudioEnum;
typedef class SpMMAudioIn SpMMAudioIn;
typedef class SpMMAudioOut SpMMAudioOut;
typedef class SpStream SpStream;
typedef class SpVoice SpVoice;
typedef class SpSharedRecoContext SpSharedRecoContext;
typedef class SpInprocRecognizer SpInprocRecognizer;
typedef class SpSharedRecognizer SpSharedRecognizer;
typedef class SpLexicon SpLexicon;
typedef class SpUnCompressedLexicon SpUnCompressedLexicon;
typedef class SpCompressedLexicon SpCompressedLexicon;
typedef class SpPhoneConverter SpPhoneConverter;
typedef class SpNullPhoneConverter SpNullPhoneConverter;
typedef class SpTextSelectionInformation SpTextSelectionInformation;
typedef class SpPhraseInfoBuilder SpPhraseInfoBuilder;
typedef class SpAudioFormat SpAudioFormat;
typedef class SpWaveFormatEx SpWaveFormatEx;
typedef class SpInProcRecoContext SpInProcRecoContext;
typedef class SpCustomStream SpCustomStream;
typedef class SpFileStream SpFileStream;
typedef class SpMemoryStream SpMemoryStream;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable:4201)
#pragma comment(lib, "sapi.lib")
#if 0
typedef struct WAVEFORMATEX
    {
    WORD wFormatTag;
    WORD nChannels;
    DWORD nSamplesPerSec;
    DWORD nAvgBytesPerSec;
    WORD nBlockAlign;
    WORD wBitsPerSample;
    WORD cbSize;
    } WAVEFORMATEX;
#else
#include <mmsystem.h>
#endif
typedef
enum SPDATAKEYLOCATION
    {
        SPDKL_DefaultLocation = 0,
        SPDKL_CurrentUser = 1,
        SPDKL_LocalMachine = 2,
        SPDKL_CurrentConfig = 5
    } SPDATAKEYLOCATION;
typedef
enum SPSTREAMFORMAT
    {
        SPSF_Default = -1,
        SPSF_NoAssignedFormat = 0,
        SPSF_Text = ( SPSF_NoAssignedFormat + 1 ) ,
        SPSF_NonStandardFormat = ( SPSF_Text + 1 ) ,
        SPSF_ExtendedAudioFormat = ( SPSF_NonStandardFormat + 1 ) ,
        SPSF_8kHz8BitMono = ( SPSF_ExtendedAudioFormat + 1 ) ,
        SPSF_8kHz8BitStereo = ( SPSF_8kHz8BitMono + 1 ) ,
        SPSF_8kHz16BitMono = ( SPSF_8kHz8BitStereo + 1 ) ,
        SPSF_8kHz16BitStereo = ( SPSF_8kHz16BitMono + 1 ) ,
        SPSF_11kHz8BitMono = ( SPSF_8kHz16BitStereo + 1 ) ,
        SPSF_11kHz8BitStereo = ( SPSF_11kHz8BitMono + 1 ) ,
        SPSF_11kHz16BitMono = ( SPSF_11kHz8BitStereo + 1 ) ,
        SPSF_11kHz16BitStereo = ( SPSF_11kHz16BitMono + 1 ) ,
        SPSF_12kHz8BitMono = ( SPSF_11kHz16BitStereo + 1 ) ,
        SPSF_12kHz8BitStereo = ( SPSF_12kHz8BitMono + 1 ) ,
        SPSF_12kHz16BitMono = ( SPSF_12kHz8BitStereo + 1 ) ,
        SPSF_12kHz16BitStereo = ( SPSF_12kHz16BitMono + 1 ) ,
        SPSF_16kHz8BitMono = ( SPSF_12kHz16BitStereo + 1 ) ,
        SPSF_16kHz8BitStereo = ( SPSF_16kHz8BitMono + 1 ) ,
        SPSF_16kHz16BitMono = ( SPSF_16kHz8BitStereo + 1 ) ,
        SPSF_16kHz16BitStereo = ( SPSF_16kHz16BitMono + 1 ) ,
        SPSF_22kHz8BitMono = ( SPSF_16kHz16BitStereo + 1 ) ,
        SPSF_22kHz8BitStereo = ( SPSF_22kHz8BitMono + 1 ) ,
        SPSF_22kHz16BitMono = ( SPSF_22kHz8BitStereo + 1 ) ,
        SPSF_22kHz16BitStereo = ( SPSF_22kHz16BitMono + 1 ) ,
        SPSF_24kHz8BitMono = ( SPSF_22kHz16BitStereo + 1 ) ,
        SPSF_24kHz8BitStereo = ( SPSF_24kHz8BitMono + 1 ) ,
        SPSF_24kHz16BitMono = ( SPSF_24kHz8BitStereo + 1 ) ,
        SPSF_24kHz16BitStereo = ( SPSF_24kHz16BitMono + 1 ) ,
        SPSF_32kHz8BitMono = ( SPSF_24kHz16BitStereo + 1 ) ,
        SPSF_32kHz8BitStereo = ( SPSF_32kHz8BitMono + 1 ) ,
        SPSF_32kHz16BitMono = ( SPSF_32kHz8BitStereo + 1 ) ,
        SPSF_32kHz16BitStereo = ( SPSF_32kHz16BitMono + 1 ) ,
        SPSF_44kHz8BitMono = ( SPSF_32kHz16BitStereo + 1 ) ,
        SPSF_44kHz8BitStereo = ( SPSF_44kHz8BitMono + 1 ) ,
        SPSF_44kHz16BitMono = ( SPSF_44kHz8BitStereo + 1 ) ,
        SPSF_44kHz16BitStereo = ( SPSF_44kHz16BitMono + 1 ) ,
        SPSF_48kHz8BitMono = ( SPSF_44kHz16BitStereo + 1 ) ,
        SPSF_48kHz8BitStereo = ( SPSF_48kHz8BitMono + 1 ) ,
        SPSF_48kHz16BitMono = ( SPSF_48kHz8BitStereo + 1 ) ,
        SPSF_48kHz16BitStereo = ( SPSF_48kHz16BitMono + 1 ) ,
        SPSF_TrueSpeech_8kHz1BitMono = ( SPSF_48kHz16BitStereo + 1 ) ,
        SPSF_CCITT_ALaw_8kHzMono = ( SPSF_TrueSpeech_8kHz1BitMono + 1 ) ,
        SPSF_CCITT_ALaw_8kHzStereo = ( SPSF_CCITT_ALaw_8kHzMono + 1 ) ,
        SPSF_CCITT_ALaw_11kHzMono = ( SPSF_CCITT_ALaw_8kHzStereo + 1 ) ,
        SPSF_CCITT_ALaw_11kHzStereo = ( SPSF_CCITT_ALaw_11kHzMono + 1 ) ,
        SPSF_CCITT_ALaw_22kHzMono = ( SPSF_CCITT_ALaw_11kHzStereo + 1 ) ,
        SPSF_CCITT_ALaw_22kHzStereo = ( SPSF_CCITT_ALaw_22kHzMono + 1 ) ,
        SPSF_CCITT_ALaw_44kHzMono = ( SPSF_CCITT_ALaw_22kHzStereo + 1 ) ,
        SPSF_CCITT_ALaw_44kHzStereo = ( SPSF_CCITT_ALaw_44kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_8kHzMono = ( SPSF_CCITT_ALaw_44kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_8kHzStereo = ( SPSF_CCITT_uLaw_8kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_11kHzMono = ( SPSF_CCITT_uLaw_8kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_11kHzStereo = ( SPSF_CCITT_uLaw_11kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_22kHzMono = ( SPSF_CCITT_uLaw_11kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_22kHzStereo = ( SPSF_CCITT_uLaw_22kHzMono + 1 ) ,
        SPSF_CCITT_uLaw_44kHzMono = ( SPSF_CCITT_uLaw_22kHzStereo + 1 ) ,
        SPSF_CCITT_uLaw_44kHzStereo = ( SPSF_CCITT_uLaw_44kHzMono + 1 ) ,
        SPSF_ADPCM_8kHzMono = ( SPSF_CCITT_uLaw_44kHzStereo + 1 ) ,
        SPSF_ADPCM_8kHzStereo = ( SPSF_ADPCM_8kHzMono + 1 ) ,
        SPSF_ADPCM_11kHzMono = ( SPSF_ADPCM_8kHzStereo + 1 ) ,
        SPSF_ADPCM_11kHzStereo = ( SPSF_ADPCM_11kHzMono + 1 ) ,
        SPSF_ADPCM_22kHzMono = ( SPSF_ADPCM_11kHzStereo + 1 ) ,
        SPSF_ADPCM_22kHzStereo = ( SPSF_ADPCM_22kHzMono + 1 ) ,
        SPSF_ADPCM_44kHzMono = ( SPSF_ADPCM_22kHzStereo + 1 ) ,
        SPSF_ADPCM_44kHzStereo = ( SPSF_ADPCM_44kHzMono + 1 ) ,
        SPSF_GSM610_8kHzMono = ( SPSF_ADPCM_44kHzStereo + 1 ) ,
        SPSF_GSM610_11kHzMono = ( SPSF_GSM610_8kHzMono + 1 ) ,
        SPSF_GSM610_22kHzMono = ( SPSF_GSM610_11kHzMono + 1 ) ,
        SPSF_GSM610_44kHzMono = ( SPSF_GSM610_22kHzMono + 1 ) ,
        SPSF_NUM_FORMATS = ( SPSF_GSM610_44kHzMono + 1 )
    } SPSTREAMFORMAT;
EXTERN_C const GUID SPDFID_Text;
EXTERN_C const GUID SPDFID_WaveFormatEx;
typedef void *ISpNotifyCallback;
#if 0
typedef void *SPNOTIFYCALLBACK;
#else
typedef void __stdcall SPNOTIFYCALLBACK(WPARAM wParam, LPARAM lParam);
#endif
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpNotifySource;
    typedef struct ISpNotifySourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpNotifySource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpNotifySource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpNotifySource * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )(
            __RPC__in ISpNotifySource * This,
                       __RPC__in_opt ISpNotifySink *pNotifySink);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )(
            ISpNotifySource * This,
                       HWND hWnd,
                       UINT Msg,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )(
            ISpNotifySource * This,
                       SPNOTIFYCALLBACK *pfnCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )(
            ISpNotifySource * This,
                       ISpNotifyCallback *pSpCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )(
            ISpNotifySource * This);
                      HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )(
            ISpNotifySource * This,
                       DWORD dwMilliseconds);
                      HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )(
            ISpNotifySource * This);
        END_INTERFACE
    } ISpNotifySourceVtbl;
    interface ISpNotifySource
    {
        CONST_VTBL struct ISpNotifySourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) )
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) )
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) )
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) )
EXTERN_C const IID IID_ISpNotifySink;
    typedef struct ISpNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpNotifySink * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in ISpNotifySink * This);
        END_INTERFACE
    } ISpNotifySinkVtbl;
    interface ISpNotifySink
    {
        CONST_VTBL struct ISpNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This) )
EXTERN_C const IID IID_ISpNotifyTranslator;
    typedef struct ISpNotifyTranslatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpNotifyTranslator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpNotifyTranslator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpNotifyTranslator * This);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            ISpNotifyTranslator * This);
        HRESULT ( STDMETHODCALLTYPE *InitWindowMessage )(
            ISpNotifyTranslator * This,
                       HWND hWnd,
                       UINT Msg,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *InitCallback )(
            ISpNotifyTranslator * This,
                       SPNOTIFYCALLBACK *pfnCallback,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *InitSpNotifyCallback )(
            ISpNotifyTranslator * This,
                       ISpNotifyCallback *pSpCallback,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *InitWin32Event )(
            ISpNotifyTranslator * This,
                       HANDLE hEvent,
                       BOOL fCloseHandleOnRelease);
        HRESULT ( STDMETHODCALLTYPE *Wait )(
            ISpNotifyTranslator * This,
                       DWORD dwMilliseconds);
        HANDLE ( STDMETHODCALLTYPE *GetEventHandle )(
            ISpNotifyTranslator * This);
        END_INTERFACE
    } ISpNotifyTranslatorVtbl;
    interface ISpNotifyTranslator
    {
        CONST_VTBL struct ISpNotifyTranslatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Notify(This) )
    ( (This)->lpVtbl -> InitWindowMessage(This,hWnd,Msg,wParam,lParam) )
    ( (This)->lpVtbl -> InitCallback(This,pfnCallback,wParam,lParam) )
    ( (This)->lpVtbl -> InitSpNotifyCallback(This,pSpCallback,wParam,lParam) )
    ( (This)->lpVtbl -> InitWin32Event(This,hEvent,fCloseHandleOnRelease) )
    ( (This)->lpVtbl -> Wait(This,dwMilliseconds) )
    ( (This)->lpVtbl -> GetEventHandle(This) )
EXTERN_C const IID IID_ISpDataKey;
    typedef struct ISpDataKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpDataKey * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpDataKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpDataKey * This);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            ISpDataKey * This,
                       LPCWSTR pszValueName,
                       ULONG cbData,
                       const BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ISpDataKey * This,
                       LPCWSTR pszValueName,
                       ULONG *pcbData,
                        BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            ISpDataKey * This,
            _In_opt_ LPCWSTR pszValueName,
                       LPCWSTR pszValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            ISpDataKey * This,
            _In_opt_ LPCWSTR pszValueName,
            _Outptr_ LPWSTR *ppszValue);
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )(
            ISpDataKey * This,
                       LPCWSTR pszValueName,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )(
            ISpDataKey * This,
                       LPCWSTR pszValueName,
                        DWORD *pdwValue);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            ISpDataKey * This,
                       LPCWSTR pszSubKeyName,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *CreateKey )(
            ISpDataKey * This,
                       LPCWSTR pszSubKey,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            ISpDataKey * This,
                       LPCWSTR pszSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )(
            ISpDataKey * This,
                       LPCWSTR pszValueName);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            ISpDataKey * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszSubKeyName);
        HRESULT ( STDMETHODCALLTYPE *EnumValues )(
            ISpDataKey * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszValueName);
        END_INTERFACE
    } ISpDataKeyVtbl;
    interface ISpDataKey
    {
        CONST_VTBL struct ISpDataKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) )
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) )
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) )
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) )
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) )
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) )
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) )
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) )
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) )
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) )
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) )
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) )
EXTERN_C const IID IID_ISpRegDataKey;
    typedef struct ISpRegDataKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpRegDataKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpRegDataKey * This);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszValueName,
                       ULONG cbData,
                       __RPC__in const BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszValueName,
                       __RPC__in ULONG *pcbData,
                        __RPC__out BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            __RPC__in ISpRegDataKey * This,
            _In_opt_ LPCWSTR pszValueName,
                       __RPC__in LPCWSTR pszValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            __RPC__in ISpRegDataKey * This,
            _In_opt_ LPCWSTR pszValueName,
            _Outptr_ LPWSTR *ppszValue);
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszValueName,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszValueName,
                        __RPC__out DWORD *pdwValue);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszSubKeyName,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *CreateKey )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszSubKey,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )(
            __RPC__in ISpRegDataKey * This,
                       __RPC__in LPCWSTR pszValueName);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            __RPC__in ISpRegDataKey * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszSubKeyName);
        HRESULT ( STDMETHODCALLTYPE *EnumValues )(
            __RPC__in ISpRegDataKey * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszValueName);
                      HRESULT ( STDMETHODCALLTYPE *SetKey )(
            ISpRegDataKey * This,
                       HKEY hkey,
                       BOOL fReadOnly);
        END_INTERFACE
    } ISpRegDataKeyVtbl;
    interface ISpRegDataKey
    {
        CONST_VTBL struct ISpRegDataKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) )
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) )
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) )
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) )
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) )
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) )
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) )
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) )
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) )
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) )
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) )
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) )
    ( (This)->lpVtbl -> SetKey(This,hkey,fReadOnly) )
EXTERN_C const IID IID_ISpObjectTokenCategory;
    typedef struct ISpObjectTokenCategoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpObjectTokenCategory * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpObjectTokenCategory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpObjectTokenCategory * This);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszValueName,
                       ULONG cbData,
                       const BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszValueName,
                       ULONG *pcbData,
                        BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            ISpObjectTokenCategory * This,
            _In_opt_ LPCWSTR pszValueName,
                       LPCWSTR pszValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            ISpObjectTokenCategory * This,
            _In_opt_ LPCWSTR pszValueName,
            _Outptr_ LPWSTR *ppszValue);
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszValueName,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszValueName,
                        DWORD *pdwValue);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszSubKeyName,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *CreateKey )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszSubKey,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszValueName);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            ISpObjectTokenCategory * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszSubKeyName);
        HRESULT ( STDMETHODCALLTYPE *EnumValues )(
            ISpObjectTokenCategory * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszValueName);
        HRESULT ( STDMETHODCALLTYPE *SetId )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszCategoryId,
                       BOOL fCreateIfNotExist);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            ISpObjectTokenCategory * This,
            _Outptr_ LPWSTR *ppszCoMemCategoryId);
        HRESULT ( STDMETHODCALLTYPE *GetDataKey )(
            ISpObjectTokenCategory * This,
                       SPDATAKEYLOCATION spdkl,
            _Outptr_ ISpDataKey **ppDataKey);
        HRESULT ( STDMETHODCALLTYPE *EnumTokens )(
            ISpObjectTokenCategory * This,
            _In_opt_ LPCWSTR pzsReqAttribs,
            _In_opt_ LPCWSTR pszOptAttribs,
                        IEnumSpObjectTokens **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultTokenId )(
            ISpObjectTokenCategory * This,
                       LPCWSTR pszTokenId);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultTokenId )(
            ISpObjectTokenCategory * This,
            _Outptr_ LPWSTR *ppszCoMemTokenId);
        END_INTERFACE
    } ISpObjectTokenCategoryVtbl;
    interface ISpObjectTokenCategory
    {
        CONST_VTBL struct ISpObjectTokenCategoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) )
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) )
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) )
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) )
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) )
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) )
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) )
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) )
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) )
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) )
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) )
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) )
    ( (This)->lpVtbl -> SetId(This,pszCategoryId,fCreateIfNotExist) )
    ( (This)->lpVtbl -> GetId(This,ppszCoMemCategoryId) )
    ( (This)->lpVtbl -> GetDataKey(This,spdkl,ppDataKey) )
    ( (This)->lpVtbl -> EnumTokens(This,pzsReqAttribs,pszOptAttribs,ppEnum) )
    ( (This)->lpVtbl -> SetDefaultTokenId(This,pszTokenId) )
    ( (This)->lpVtbl -> GetDefaultTokenId(This,ppszCoMemTokenId) )
EXTERN_C const IID IID_ISpObjectToken;
    typedef struct ISpObjectTokenVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpObjectToken * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpObjectToken * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpObjectToken * This);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            ISpObjectToken * This,
                       LPCWSTR pszValueName,
                       ULONG cbData,
                       const BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            ISpObjectToken * This,
                       LPCWSTR pszValueName,
                       ULONG *pcbData,
                        BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            ISpObjectToken * This,
            _In_opt_ LPCWSTR pszValueName,
                       LPCWSTR pszValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            ISpObjectToken * This,
            _In_opt_ LPCWSTR pszValueName,
            _Outptr_ LPWSTR *ppszValue);
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )(
            ISpObjectToken * This,
                       LPCWSTR pszValueName,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )(
            ISpObjectToken * This,
                       LPCWSTR pszValueName,
                        DWORD *pdwValue);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            ISpObjectToken * This,
                       LPCWSTR pszSubKeyName,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *CreateKey )(
            ISpObjectToken * This,
                       LPCWSTR pszSubKey,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            ISpObjectToken * This,
                       LPCWSTR pszSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )(
            ISpObjectToken * This,
                       LPCWSTR pszValueName);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            ISpObjectToken * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszSubKeyName);
        HRESULT ( STDMETHODCALLTYPE *EnumValues )(
            ISpObjectToken * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszValueName);
        HRESULT ( STDMETHODCALLTYPE *SetId )(
            ISpObjectToken * This,
            _In_opt_ LPCWSTR pszCategoryId,
                       LPCWSTR pszTokenId,
                       BOOL fCreateIfNotExist);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            ISpObjectToken * This,
            _Outptr_ LPWSTR *ppszCoMemTokenId);
        HRESULT ( STDMETHODCALLTYPE *GetCategory )(
            ISpObjectToken * This,
            _Outptr_ ISpObjectTokenCategory **ppTokenCategory);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            ISpObjectToken * This,
                       IUnknown *pUnkOuter,
                       DWORD dwClsContext,
                       REFIID riid,
                                void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetStorageFileName )(
            ISpObjectToken * This,
                       REFCLSID clsidCaller,
            _In_ LPCWSTR pszValueName,
            _In_opt_ LPCWSTR pszFileNameSpecifier,
                       ULONG nFolder,
            _Outptr_ LPWSTR *ppszFilePath);
        HRESULT ( STDMETHODCALLTYPE *RemoveStorageFileName )(
            ISpObjectToken * This,
                       REFCLSID clsidCaller,
            _In_ LPCWSTR pszKeyName,
                       BOOL fDeleteFile);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            ISpObjectToken * This,
            _In_opt_ const CLSID *pclsidCaller);
                      HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            ISpObjectToken * This,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                       IUnknown *punkObject,
                        BOOL *pfSupported);
                      HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            ISpObjectToken * This,
                       HWND hwndParent,
                       LPCWSTR pszTitle,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                       IUnknown *punkObject);
        HRESULT ( STDMETHODCALLTYPE *MatchesAttributes )(
            ISpObjectToken * This,
                       LPCWSTR pszAttributes,
                        BOOL *pfMatches);
        END_INTERFACE
    } ISpObjectTokenVtbl;
    interface ISpObjectToken
    {
        CONST_VTBL struct ISpObjectTokenVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) )
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) )
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) )
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) )
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) )
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) )
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) )
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) )
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) )
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) )
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) )
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) )
    ( (This)->lpVtbl -> SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist) )
    ( (This)->lpVtbl -> GetId(This,ppszCoMemTokenId) )
    ( (This)->lpVtbl -> GetCategory(This,ppTokenCategory) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject) )
    ( (This)->lpVtbl -> GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath) )
    ( (This)->lpVtbl -> RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile) )
    ( (This)->lpVtbl -> Remove(This,pclsidCaller) )
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) )
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject) )
    ( (This)->lpVtbl -> MatchesAttributes(This,pszAttributes,pfMatches) )
EXTERN_C const IID IID_ISpObjectTokenInit;
    typedef struct ISpObjectTokenInitVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpObjectTokenInit * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpObjectTokenInit * This);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszValueName,
                       ULONG cbData,
                       __RPC__in const BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszValueName,
                       __RPC__in ULONG *pcbData,
                        __RPC__out BYTE *pData);
        HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            __RPC__in ISpObjectTokenInit * This,
            _In_opt_ LPCWSTR pszValueName,
                       __RPC__in LPCWSTR pszValue);
        HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            __RPC__in ISpObjectTokenInit * This,
            _In_opt_ LPCWSTR pszValueName,
            _Outptr_ LPWSTR *ppszValue);
        HRESULT ( STDMETHODCALLTYPE *SetDWORD )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszValueName,
                       DWORD dwValue);
        HRESULT ( STDMETHODCALLTYPE *GetDWORD )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszValueName,
                        __RPC__out DWORD *pdwValue);
        HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszSubKeyName,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *CreateKey )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszSubKey,
            _Outptr_ ISpDataKey **ppSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszSubKey);
        HRESULT ( STDMETHODCALLTYPE *DeleteValue )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszValueName);
        HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            __RPC__in ISpObjectTokenInit * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszSubKeyName);
        HRESULT ( STDMETHODCALLTYPE *EnumValues )(
            __RPC__in ISpObjectTokenInit * This,
                       ULONG Index,
            _Outptr_ LPWSTR *ppszValueName);
        HRESULT ( STDMETHODCALLTYPE *SetId )(
            __RPC__in ISpObjectTokenInit * This,
            _In_opt_ LPCWSTR pszCategoryId,
                       __RPC__in LPCWSTR pszTokenId,
                       BOOL fCreateIfNotExist);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in ISpObjectTokenInit * This,
            _Outptr_ LPWSTR *ppszCoMemTokenId);
        HRESULT ( STDMETHODCALLTYPE *GetCategory )(
            __RPC__in ISpObjectTokenInit * This,
            _Outptr_ ISpObjectTokenCategory **ppTokenCategory);
        HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in_opt IUnknown *pUnkOuter,
                       DWORD dwClsContext,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *GetStorageFileName )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in REFCLSID clsidCaller,
            _In_ LPCWSTR pszValueName,
            _In_opt_ LPCWSTR pszFileNameSpecifier,
                       ULONG nFolder,
            _Outptr_ LPWSTR *ppszFilePath);
        HRESULT ( STDMETHODCALLTYPE *RemoveStorageFileName )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in REFCLSID clsidCaller,
            _In_ LPCWSTR pszKeyName,
                       BOOL fDeleteFile);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ISpObjectTokenInit * This,
            _In_opt_ const CLSID *pclsidCaller);
                      HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            ISpObjectTokenInit * This,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                       IUnknown *punkObject,
                        BOOL *pfSupported);
                      HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            ISpObjectTokenInit * This,
                       HWND hwndParent,
                       LPCWSTR pszTitle,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                       IUnknown *punkObject);
        HRESULT ( STDMETHODCALLTYPE *MatchesAttributes )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszAttributes,
                        __RPC__out BOOL *pfMatches);
        HRESULT ( STDMETHODCALLTYPE *InitFromDataKey )(
            __RPC__in ISpObjectTokenInit * This,
                       __RPC__in LPCWSTR pszCategoryId,
                       __RPC__in LPCWSTR pszTokenId,
                       __RPC__in_opt ISpDataKey *pDataKey);
        END_INTERFACE
    } ISpObjectTokenInitVtbl;
    interface ISpObjectTokenInit
    {
        CONST_VTBL struct ISpObjectTokenInitVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetData(This,pszValueName,cbData,pData) )
    ( (This)->lpVtbl -> GetData(This,pszValueName,pcbData,pData) )
    ( (This)->lpVtbl -> SetStringValue(This,pszValueName,pszValue) )
    ( (This)->lpVtbl -> GetStringValue(This,pszValueName,ppszValue) )
    ( (This)->lpVtbl -> SetDWORD(This,pszValueName,dwValue) )
    ( (This)->lpVtbl -> GetDWORD(This,pszValueName,pdwValue) )
    ( (This)->lpVtbl -> OpenKey(This,pszSubKeyName,ppSubKey) )
    ( (This)->lpVtbl -> CreateKey(This,pszSubKey,ppSubKey) )
    ( (This)->lpVtbl -> DeleteKey(This,pszSubKey) )
    ( (This)->lpVtbl -> DeleteValue(This,pszValueName) )
    ( (This)->lpVtbl -> EnumKeys(This,Index,ppszSubKeyName) )
    ( (This)->lpVtbl -> EnumValues(This,Index,ppszValueName) )
    ( (This)->lpVtbl -> SetId(This,pszCategoryId,pszTokenId,fCreateIfNotExist) )
    ( (This)->lpVtbl -> GetId(This,ppszCoMemTokenId) )
    ( (This)->lpVtbl -> GetCategory(This,ppTokenCategory) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,dwClsContext,riid,ppvObject) )
    ( (This)->lpVtbl -> GetStorageFileName(This,clsidCaller,pszValueName,pszFileNameSpecifier,nFolder,ppszFilePath) )
    ( (This)->lpVtbl -> RemoveStorageFileName(This,clsidCaller,pszKeyName,fDeleteFile) )
    ( (This)->lpVtbl -> Remove(This,pclsidCaller) )
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,punkObject,pfSupported) )
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData,punkObject) )
    ( (This)->lpVtbl -> MatchesAttributes(This,pszAttributes,pfMatches) )
    ( (This)->lpVtbl -> InitFromDataKey(This,pszCategoryId,pszTokenId,pDataKey) )
EXTERN_C const IID IID_IEnumSpObjectTokens;
    typedef struct IEnumSpObjectTokensVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumSpObjectTokens * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumSpObjectTokens * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumSpObjectTokens * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumSpObjectTokens * This,
                       ULONG celt,
                                            ISpObjectToken **pelt,
            _Out_opt_ ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumSpObjectTokens * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumSpObjectTokens * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumSpObjectTokens * This,
                        IEnumSpObjectTokens **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Item )(
            IEnumSpObjectTokens * This,
                       ULONG Index,
                        ISpObjectToken **ppToken);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IEnumSpObjectTokens * This,
                        ULONG *pCount);
        END_INTERFACE
    } IEnumSpObjectTokensVtbl;
    interface IEnumSpObjectTokens
    {
        CONST_VTBL struct IEnumSpObjectTokensVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,pelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Item(This,Index,ppToken) )
    ( (This)->lpVtbl -> GetCount(This,pCount) )
EXTERN_C const IID IID_ISpObjectWithToken;
    typedef struct ISpObjectWithTokenVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpObjectWithToken * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpObjectWithToken * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpObjectWithToken * This);
        HRESULT ( STDMETHODCALLTYPE *SetObjectToken )(
            __RPC__in ISpObjectWithToken * This,
                       __RPC__in_opt ISpObjectToken *pToken);
        HRESULT ( STDMETHODCALLTYPE *GetObjectToken )(
            __RPC__in ISpObjectWithToken * This,
                        __RPC__deref_out_opt ISpObjectToken **ppToken);
        END_INTERFACE
    } ISpObjectWithTokenVtbl;
    interface ISpObjectWithToken
    {
        CONST_VTBL struct ISpObjectWithTokenVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetObjectToken(This,pToken) )
    ( (This)->lpVtbl -> GetObjectToken(This,ppToken) )
EXTERN_C const IID IID_ISpResourceManager;
    typedef struct ISpResourceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpResourceManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpResourceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpResourceManager * This);
                      HRESULT ( STDMETHODCALLTYPE *QueryService )(
            ISpResourceManager * This,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Outptr_ void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *SetObject )(
            __RPC__in ISpResourceManager * This,
                       __RPC__in REFGUID guidServiceId,
                       __RPC__in_opt IUnknown *pUnkObject);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            __RPC__in ISpResourceManager * This,
                       __RPC__in REFGUID guidServiceId,
                       __RPC__in REFCLSID ObjectCLSID,
                       __RPC__in REFIID ObjectIID,
                       BOOL fReleaseWhenLastExternalRefReleased,
                                __RPC__deref_out_opt void **ppObject);
        END_INTERFACE
    } ISpResourceManagerVtbl;
    interface ISpResourceManager
    {
        CONST_VTBL struct ISpResourceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject) )
    ( (This)->lpVtbl -> SetObject(This,guidServiceId,pUnkObject) )
    ( (This)->lpVtbl -> GetObject(This,guidServiceId,ObjectCLSID,ObjectIID,fReleaseWhenLastExternalRefReleased,ppObject) )
typedef
enum SPEVENTLPARAMTYPE
    {
        SPET_LPARAM_IS_UNDEFINED = 0,
        SPET_LPARAM_IS_TOKEN = ( SPET_LPARAM_IS_UNDEFINED + 1 ) ,
        SPET_LPARAM_IS_OBJECT = ( SPET_LPARAM_IS_TOKEN + 1 ) ,
        SPET_LPARAM_IS_POINTER = ( SPET_LPARAM_IS_OBJECT + 1 ) ,
        SPET_LPARAM_IS_STRING = ( SPET_LPARAM_IS_POINTER + 1 )
    } SPEVENTLPARAMTYPE;
typedef
enum SPEVENTENUM
    {
        SPEI_UNDEFINED = 0,
        SPEI_START_INPUT_STREAM = 1,
        SPEI_END_INPUT_STREAM = 2,
        SPEI_VOICE_CHANGE = 3,
        SPEI_TTS_BOOKMARK = 4,
        SPEI_WORD_BOUNDARY = 5,
        SPEI_PHONEME = 6,
        SPEI_SENTENCE_BOUNDARY = 7,
        SPEI_VISEME = 8,
        SPEI_TTS_AUDIO_LEVEL = 9,
        SPEI_TTS_PRIVATE = 15,
        SPEI_MIN_TTS = 1,
        SPEI_MAX_TTS = 15,
        SPEI_END_SR_STREAM = 34,
        SPEI_SOUND_START = 35,
        SPEI_SOUND_END = 36,
        SPEI_PHRASE_START = 37,
        SPEI_RECOGNITION = 38,
        SPEI_HYPOTHESIS = 39,
        SPEI_SR_BOOKMARK = 40,
        SPEI_PROPERTY_NUM_CHANGE = 41,
        SPEI_PROPERTY_STRING_CHANGE = 42,
        SPEI_FALSE_RECOGNITION = 43,
        SPEI_INTERFERENCE = 44,
        SPEI_REQUEST_UI = 45,
        SPEI_RECO_STATE_CHANGE = 46,
        SPEI_ADAPTATION = 47,
        SPEI_START_SR_STREAM = 48,
        SPEI_RECO_OTHER_CONTEXT = 49,
        SPEI_SR_AUDIO_LEVEL = 50,
        SPEI_SR_PRIVATE = 52,
        SPEI_MIN_SR = 34,
        SPEI_MAX_SR = 52,
        SPEI_RESERVED1 = 30,
        SPEI_RESERVED2 = 33,
        SPEI_RESERVED3 = 63
    } SPEVENTENUM;
#if 0
typedef struct SPEVENT
    {
    WORD eEventId;
    WORD elParamType;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    WPARAM wParam;
    LPARAM lParam;
    } SPEVENT;
typedef struct SPSERIALIZEDEVENT
    {
    WORD eEventId;
    WORD elParamType;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONG SerializedwParam;
    LONG SerializedlParam;
    } SPSERIALIZEDEVENT;
typedef struct SPSERIALIZEDEVENT64
    {
    WORD eEventId;
    WORD elParamType;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONGLONG SerializedwParam;
    LONGLONG SerializedlParam;
    } SPSERIALIZEDEVENT64;
#else
typedef struct SPEVENT
{
    SPEVENTENUM eEventId : 16;
    SPEVENTLPARAMTYPE elParamType : 16;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    WPARAM wParam;
    LPARAM lParam;
} SPEVENT;
typedef struct SPSERIALIZEDEVENT
{
    SPEVENTENUM eEventId : 16;
    SPEVENTLPARAMTYPE elParamType : 16;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONG SerializedwParam;
    LONG SerializedlParam;
} SPSERIALIZEDEVENT;
typedef struct SPSERIALIZEDEVENT64
{
    SPEVENTENUM eEventId : 16;
    SPEVENTLPARAMTYPE elParamType : 16;
    ULONG ulStreamNum;
    ULONGLONG ullAudioStreamOffset;
    ULONGLONG SerializedwParam;
    LONGLONG SerializedlParam;
} SPSERIALIZEDEVENT64;
#endif
typedef
enum SPINTERFERENCE
    {
        SPINTERFERENCE_NONE = 0,
        SPINTERFERENCE_NOISE = ( SPINTERFERENCE_NONE + 1 ) ,
        SPINTERFERENCE_NOSIGNAL = ( SPINTERFERENCE_NOISE + 1 ) ,
        SPINTERFERENCE_TOOLOUD = ( SPINTERFERENCE_NOSIGNAL + 1 ) ,
        SPINTERFERENCE_TOOQUIET = ( SPINTERFERENCE_TOOLOUD + 1 ) ,
        SPINTERFERENCE_TOOFAST = ( SPINTERFERENCE_TOOQUIET + 1 ) ,
        SPINTERFERENCE_TOOSLOW = ( SPINTERFERENCE_TOOFAST + 1 ) ,
        SPINTERFERENCE_LATENCY_WARNING = ( SPINTERFERENCE_TOOSLOW + 1 ) ,
        SPINTERFERENCE_LATENCY_TRUNCATE_BEGIN = ( SPINTERFERENCE_LATENCY_WARNING + 1 ) ,
        SPINTERFERENCE_LATENCY_TRUNCATE_END = ( SPINTERFERENCE_LATENCY_TRUNCATE_BEGIN + 1 )
    } SPINTERFERENCE;
typedef
enum SPENDSRSTREAMFLAGS
    {
        SPESF_NONE = 0,
        SPESF_STREAM_RELEASED = ( 1 << 0 )
    } SPENDSRSTREAMFLAGS;
typedef
enum SPVFEATURE
    {
        SPVFEATURE_STRESSED = ( 1L << 0 ) ,
        SPVFEATURE_EMPHASIS = ( 1L << 1 )
    } SPVFEATURE;
typedef
enum SPVISEMES
    {
        SP_VISEME_0 = 0,
        SP_VISEME_1 = ( SP_VISEME_0 + 1 ) ,
        SP_VISEME_2 = ( SP_VISEME_1 + 1 ) ,
        SP_VISEME_3 = ( SP_VISEME_2 + 1 ) ,
        SP_VISEME_4 = ( SP_VISEME_3 + 1 ) ,
        SP_VISEME_5 = ( SP_VISEME_4 + 1 ) ,
        SP_VISEME_6 = ( SP_VISEME_5 + 1 ) ,
        SP_VISEME_7 = ( SP_VISEME_6 + 1 ) ,
        SP_VISEME_8 = ( SP_VISEME_7 + 1 ) ,
        SP_VISEME_9 = ( SP_VISEME_8 + 1 ) ,
        SP_VISEME_10 = ( SP_VISEME_9 + 1 ) ,
        SP_VISEME_11 = ( SP_VISEME_10 + 1 ) ,
        SP_VISEME_12 = ( SP_VISEME_11 + 1 ) ,
        SP_VISEME_13 = ( SP_VISEME_12 + 1 ) ,
        SP_VISEME_14 = ( SP_VISEME_13 + 1 ) ,
        SP_VISEME_15 = ( SP_VISEME_14 + 1 ) ,
        SP_VISEME_16 = ( SP_VISEME_15 + 1 ) ,
        SP_VISEME_17 = ( SP_VISEME_16 + 1 ) ,
        SP_VISEME_18 = ( SP_VISEME_17 + 1 ) ,
        SP_VISEME_19 = ( SP_VISEME_18 + 1 ) ,
        SP_VISEME_20 = ( SP_VISEME_19 + 1 ) ,
        SP_VISEME_21 = ( SP_VISEME_20 + 1 )
    } SPVISEMES;
typedef struct SPEVENTSOURCEINFO
    {
    ULONGLONG ullEventInterest;
    ULONGLONG ullQueuedInterest;
    ULONG ulCount;
    } SPEVENTSOURCEINFO;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpEventSource;
    typedef struct ISpEventSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpEventSource * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpEventSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpEventSource * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )(
            ISpEventSource * This,
                       ISpNotifySink *pNotifySink);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )(
            ISpEventSource * This,
                       HWND hWnd,
                       UINT Msg,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )(
            ISpEventSource * This,
                       SPNOTIFYCALLBACK *pfnCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )(
            ISpEventSource * This,
                       ISpNotifyCallback *pSpCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )(
            ISpEventSource * This);
                      HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )(
            ISpEventSource * This,
                       DWORD dwMilliseconds);
                      HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )(
            ISpEventSource * This);
        HRESULT ( STDMETHODCALLTYPE *SetInterest )(
            ISpEventSource * This,
                       ULONGLONG ullEventInterest,
                       ULONGLONG ullQueuedInterest);
        HRESULT ( STDMETHODCALLTYPE *GetEvents )(
            ISpEventSource * This,
                       ULONG ulCount,
                                 SPEVENT *pEventArray,
                        ULONG *pulFetched);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            ISpEventSource * This,
                        SPEVENTSOURCEINFO *pInfo);
        END_INTERFACE
    } ISpEventSourceVtbl;
    interface ISpEventSource
    {
        CONST_VTBL struct ISpEventSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) )
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) )
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) )
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) )
    ( (This)->lpVtbl -> SetInterest(This,ullEventInterest,ullQueuedInterest) )
    ( (This)->lpVtbl -> GetEvents(This,ulCount,pEventArray,pulFetched) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
EXTERN_C const IID IID_ISpEventSink;
    typedef struct ISpEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpEventSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *AddEvents )(
            ISpEventSink * This,
                       const SPEVENT *pEventArray,
                       ULONG ulCount);
        HRESULT ( STDMETHODCALLTYPE *GetEventInterest )(
            ISpEventSink * This,
                        ULONGLONG *pullEventInterest);
        END_INTERFACE
    } ISpEventSinkVtbl;
    interface ISpEventSink
    {
        CONST_VTBL struct ISpEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddEvents(This,pEventArray,ulCount) )
    ( (This)->lpVtbl -> GetEventInterest(This,pullEventInterest) )
EXTERN_C const IID IID_ISpStreamFormat;
    typedef struct ISpStreamFormatVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpStreamFormat * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpStreamFormat * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpStreamFormat * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ISpStreamFormat * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            ISpStreamFormat * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            ISpStreamFormat * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in ISpStreamFormat * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            ISpStreamFormat * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ISpStreamFormat * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in ISpStreamFormat * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in ISpStreamFormat * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in ISpStreamFormat * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in ISpStreamFormat * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ISpStreamFormat * This,
                        __RPC__deref_out_opt IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in ISpStreamFormat * This,
                       __RPC__in GUID *pguidFormatId,
                        __RPC__deref_out_opt WAVEFORMATEX **ppCoMemWaveFormatEx);
        END_INTERFACE
    } ISpStreamFormatVtbl;
    interface ISpStreamFormat
    {
        CONST_VTBL struct ISpStreamFormatVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) )
typedef
enum SPFILEMODE
    {
        SPFM_OPEN_READONLY = 0,
        SPFM_OPEN_READWRITE = ( SPFM_OPEN_READONLY + 1 ) ,
        SPFM_CREATE = ( SPFM_OPEN_READWRITE + 1 ) ,
        SPFM_CREATE_ALWAYS = ( SPFM_CREATE + 1 ) ,
        SPFM_NUM_MODES = ( SPFM_CREATE_ALWAYS + 1 )
    } SPFILEMODE;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpStream;
    typedef struct ISpStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpStream * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpStream * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ISpStream * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            ISpStream * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            ISpStream * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            ISpStream * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            ISpStream * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpStream * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            ISpStream * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            ISpStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            ISpStream * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            ISpStream * This,
                        STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            ISpStream * This,
                        IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            ISpStream * This,
                       GUID *pguidFormatId,
                        WAVEFORMATEX **ppCoMemWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *SetBaseStream )(
            ISpStream * This,
                       IStream *pStream,
                       REFGUID rguidFormat,
                       const WAVEFORMATEX *pWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *GetBaseStream )(
            ISpStream * This,
            _Outptr_ IStream **ppStream);
        HRESULT ( STDMETHODCALLTYPE *BindToFile )(
            ISpStream * This,
            _In_z_ LPCWSTR pszFileName,
                       SPFILEMODE eMode,
            _In_opt_ const GUID *pFormatId,
            _In_opt_ const WAVEFORMATEX *pWaveFormatEx,
                       ULONGLONG ullEventInterest);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            ISpStream * This);
        END_INTERFACE
    } ISpStreamVtbl;
    interface ISpStream
    {
        CONST_VTBL struct ISpStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) )
    ( (This)->lpVtbl -> SetBaseStream(This,pStream,rguidFormat,pWaveFormatEx) )
    ( (This)->lpVtbl -> GetBaseStream(This,ppStream) )
    ( (This)->lpVtbl -> BindToFile(This,pszFileName,eMode,pFormatId,pWaveFormatEx,ullEventInterest) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_ISpStreamFormatConverter;
    typedef struct ISpStreamFormatConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpStreamFormatConverter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpStreamFormatConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpStreamFormatConverter * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ISpStreamFormatConverter * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            ISpStreamFormatConverter * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            ISpStreamFormatConverter * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            __RPC__in ISpStreamFormatConverter * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            ISpStreamFormatConverter * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ISpStreamFormatConverter * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in ISpStreamFormatConverter * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            __RPC__in ISpStreamFormatConverter * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            __RPC__in ISpStreamFormatConverter * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            __RPC__in ISpStreamFormatConverter * This,
                        __RPC__out STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ISpStreamFormatConverter * This,
                        __RPC__deref_out_opt IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in ISpStreamFormatConverter * This,
                       __RPC__in GUID *pguidFormatId,
                        __RPC__deref_out_opt WAVEFORMATEX **ppCoMemWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *SetBaseStream )(
            __RPC__in ISpStreamFormatConverter * This,
                       __RPC__in_opt ISpStreamFormat *pStream,
                       BOOL fSetFormatToBaseStreamFormat,
                       BOOL fWriteToBaseStream);
        HRESULT ( STDMETHODCALLTYPE *GetBaseStream )(
            __RPC__in ISpStreamFormatConverter * This,
                        __RPC__deref_out_opt ISpStreamFormat **ppStream);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            __RPC__in ISpStreamFormatConverter * This,
                       __RPC__in REFGUID rguidFormatIdOfConvertedStream,
                       __RPC__in const WAVEFORMATEX *pWaveFormatExOfConvertedStream);
        HRESULT ( STDMETHODCALLTYPE *ResetSeekPosition )(
            __RPC__in ISpStreamFormatConverter * This);
        HRESULT ( STDMETHODCALLTYPE *ScaleConvertedToBaseOffset )(
            __RPC__in ISpStreamFormatConverter * This,
                       ULONGLONG ullOffsetConvertedStream,
                        __RPC__out ULONGLONG *pullOffsetBaseStream);
        HRESULT ( STDMETHODCALLTYPE *ScaleBaseToConvertedOffset )(
            __RPC__in ISpStreamFormatConverter * This,
                       ULONGLONG ullOffsetBaseStream,
                        __RPC__out ULONGLONG *pullOffsetConvertedStream);
        END_INTERFACE
    } ISpStreamFormatConverterVtbl;
    interface ISpStreamFormatConverter
    {
        CONST_VTBL struct ISpStreamFormatConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) )
    ( (This)->lpVtbl -> SetBaseStream(This,pStream,fSetFormatToBaseStreamFormat,fWriteToBaseStream) )
    ( (This)->lpVtbl -> GetBaseStream(This,ppStream) )
    ( (This)->lpVtbl -> SetFormat(This,rguidFormatIdOfConvertedStream,pWaveFormatExOfConvertedStream) )
    ( (This)->lpVtbl -> ResetSeekPosition(This) )
    ( (This)->lpVtbl -> ScaleConvertedToBaseOffset(This,ullOffsetConvertedStream,pullOffsetBaseStream) )
    ( (This)->lpVtbl -> ScaleBaseToConvertedOffset(This,ullOffsetBaseStream,pullOffsetConvertedStream) )
typedef
enum _SPAUDIOSTATE
    {
        SPAS_CLOSED = 0,
        SPAS_STOP = ( SPAS_CLOSED + 1 ) ,
        SPAS_PAUSE = ( SPAS_STOP + 1 ) ,
        SPAS_RUN = ( SPAS_PAUSE + 1 )
    } SPAUDIOSTATE;
typedef struct SPAUDIOSTATUS
    {
    long cbFreeBuffSpace;
    ULONG cbNonBlockingIO;
    SPAUDIOSTATE State;
    ULONGLONG CurSeekPos;
    ULONGLONG CurDevicePos;
    DWORD dwAudioLevel;
    DWORD dwReserved2;
    } SPAUDIOSTATUS;
typedef struct SPAUDIOBUFFERINFO
    {
    ULONG ulMsMinNotification;
    ULONG ulMsBufferSize;
    ULONG ulMsEventBias;
    } SPAUDIOBUFFERINFO;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpAudio;
    typedef struct ISpAudioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpAudio * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpAudio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpAudio * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ISpAudio * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            ISpAudio * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            ISpAudio * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            ISpAudio * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            ISpAudio * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpAudio * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            ISpAudio * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            ISpAudio * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            ISpAudio * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            ISpAudio * This,
                        STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            ISpAudio * This,
                        IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            ISpAudio * This,
                       GUID *pguidFormatId,
                        WAVEFORMATEX **ppCoMemWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            ISpAudio * This,
                       SPAUDIOSTATE NewState,
                       ULONGLONG ullReserved);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            ISpAudio * This,
                       REFGUID rguidFmtId,
                       const WAVEFORMATEX *pWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            ISpAudio * This,
                        SPAUDIOSTATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *SetBufferInfo )(
            ISpAudio * This,
                       const SPAUDIOBUFFERINFO *pBuffInfo);
        HRESULT ( STDMETHODCALLTYPE *GetBufferInfo )(
            ISpAudio * This,
                        SPAUDIOBUFFERINFO *pBuffInfo);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFormat )(
            ISpAudio * This,
                        GUID *pFormatId,
                        WAVEFORMATEX **ppCoMemWaveFormatEx);
        HANDLE ( STDMETHODCALLTYPE *EventHandle )(
            ISpAudio * This);
        HRESULT ( STDMETHODCALLTYPE *GetVolumeLevel )(
            ISpAudio * This,
                        ULONG *pLevel);
        HRESULT ( STDMETHODCALLTYPE *SetVolumeLevel )(
            ISpAudio * This,
                       ULONG Level);
        HRESULT ( STDMETHODCALLTYPE *GetBufferNotifySize )(
            ISpAudio * This,
                        ULONG *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *SetBufferNotifySize )(
            ISpAudio * This,
                       ULONG cbSize);
        END_INTERFACE
    } ISpAudioVtbl;
    interface ISpAudio
    {
        CONST_VTBL struct ISpAudioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) )
    ( (This)->lpVtbl -> SetState(This,NewState,ullReserved) )
    ( (This)->lpVtbl -> SetFormat(This,rguidFmtId,pWaveFormatEx) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
    ( (This)->lpVtbl -> SetBufferInfo(This,pBuffInfo) )
    ( (This)->lpVtbl -> GetBufferInfo(This,pBuffInfo) )
    ( (This)->lpVtbl -> GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx) )
    ( (This)->lpVtbl -> EventHandle(This) )
    ( (This)->lpVtbl -> GetVolumeLevel(This,pLevel) )
    ( (This)->lpVtbl -> SetVolumeLevel(This,Level) )
    ( (This)->lpVtbl -> GetBufferNotifySize(This,pcbSize) )
    ( (This)->lpVtbl -> SetBufferNotifySize(This,cbSize) )
EXTERN_C const IID IID_ISpMMSysAudio;
    typedef struct ISpMMSysAudioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpMMSysAudio * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpMMSysAudio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpMMSysAudio * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            ISpMMSysAudio * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            ISpMMSysAudio * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            ISpMMSysAudio * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            ISpMMSysAudio * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            ISpMMSysAudio * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpMMSysAudio * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            ISpMMSysAudio * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            ISpMMSysAudio * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            ISpMMSysAudio * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            ISpMMSysAudio * This,
                        STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            ISpMMSysAudio * This,
                        IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            ISpMMSysAudio * This,
                       GUID *pguidFormatId,
                        WAVEFORMATEX **ppCoMemWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *SetState )(
            ISpMMSysAudio * This,
                       SPAUDIOSTATE NewState,
                       ULONGLONG ullReserved);
        HRESULT ( STDMETHODCALLTYPE *SetFormat )(
            ISpMMSysAudio * This,
                       REFGUID rguidFmtId,
                       const WAVEFORMATEX *pWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            ISpMMSysAudio * This,
                        SPAUDIOSTATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *SetBufferInfo )(
            ISpMMSysAudio * This,
                       const SPAUDIOBUFFERINFO *pBuffInfo);
        HRESULT ( STDMETHODCALLTYPE *GetBufferInfo )(
            ISpMMSysAudio * This,
                        SPAUDIOBUFFERINFO *pBuffInfo);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultFormat )(
            ISpMMSysAudio * This,
                        GUID *pFormatId,
                        WAVEFORMATEX **ppCoMemWaveFormatEx);
        HANDLE ( STDMETHODCALLTYPE *EventHandle )(
            ISpMMSysAudio * This);
        HRESULT ( STDMETHODCALLTYPE *GetVolumeLevel )(
            ISpMMSysAudio * This,
                        ULONG *pLevel);
        HRESULT ( STDMETHODCALLTYPE *SetVolumeLevel )(
            ISpMMSysAudio * This,
                       ULONG Level);
        HRESULT ( STDMETHODCALLTYPE *GetBufferNotifySize )(
            ISpMMSysAudio * This,
                        ULONG *pcbSize);
        HRESULT ( STDMETHODCALLTYPE *SetBufferNotifySize )(
            ISpMMSysAudio * This,
                       ULONG cbSize);
        HRESULT ( STDMETHODCALLTYPE *GetDeviceId )(
            ISpMMSysAudio * This,
                        UINT *puDeviceId);
        HRESULT ( STDMETHODCALLTYPE *SetDeviceId )(
            ISpMMSysAudio * This,
                       UINT uDeviceId);
        HRESULT ( STDMETHODCALLTYPE *GetMMHandle )(
            ISpMMSysAudio * This,
                        void **pHandle);
        HRESULT ( STDMETHODCALLTYPE *GetLineId )(
            ISpMMSysAudio * This,
                        UINT *puLineId);
        HRESULT ( STDMETHODCALLTYPE *SetLineId )(
            ISpMMSysAudio * This,
                       UINT uLineId);
        END_INTERFACE
    } ISpMMSysAudioVtbl;
    interface ISpMMSysAudio
    {
        CONST_VTBL struct ISpMMSysAudioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> GetFormat(This,pguidFormatId,ppCoMemWaveFormatEx) )
    ( (This)->lpVtbl -> SetState(This,NewState,ullReserved) )
    ( (This)->lpVtbl -> SetFormat(This,rguidFmtId,pWaveFormatEx) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
    ( (This)->lpVtbl -> SetBufferInfo(This,pBuffInfo) )
    ( (This)->lpVtbl -> GetBufferInfo(This,pBuffInfo) )
    ( (This)->lpVtbl -> GetDefaultFormat(This,pFormatId,ppCoMemWaveFormatEx) )
    ( (This)->lpVtbl -> EventHandle(This) )
    ( (This)->lpVtbl -> GetVolumeLevel(This,pLevel) )
    ( (This)->lpVtbl -> SetVolumeLevel(This,Level) )
    ( (This)->lpVtbl -> GetBufferNotifySize(This,pcbSize) )
    ( (This)->lpVtbl -> SetBufferNotifySize(This,cbSize) )
    ( (This)->lpVtbl -> GetDeviceId(This,puDeviceId) )
    ( (This)->lpVtbl -> SetDeviceId(This,uDeviceId) )
    ( (This)->lpVtbl -> GetMMHandle(This,pHandle) )
    ( (This)->lpVtbl -> GetLineId(This,puLineId) )
    ( (This)->lpVtbl -> SetLineId(This,uLineId) )
EXTERN_C const IID IID_ISpTranscript;
    typedef struct ISpTranscriptVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpTranscript * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpTranscript * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpTranscript * This);
        HRESULT ( STDMETHODCALLTYPE *GetTranscript )(
            __RPC__in ISpTranscript * This,
                                __RPC__deref_out_opt_string LPWSTR *ppszTranscript);
        HRESULT ( STDMETHODCALLTYPE *AppendTranscript )(
            __RPC__in ISpTranscript * This,
                               __RPC__in_string LPCWSTR pszTranscript);
        END_INTERFACE
    } ISpTranscriptVtbl;
    interface ISpTranscript
    {
        CONST_VTBL struct ISpTranscriptVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTranscript(This,ppszTranscript) )
    ( (This)->lpVtbl -> AppendTranscript(This,pszTranscript) )
typedef
enum SPDISPLYATTRIBUTES
    {
        SPAF_ONE_TRAILING_SPACE = 0x2,
        SPAF_TWO_TRAILING_SPACES = 0x4,
        SPAF_CONSUME_LEADING_SPACES = 0x8,
        SPAF_ALL = 0xf
    } SPDISPLAYATTRIBUTES;
typedef WCHAR SPPHONEID;
typedef LPWSTR PSPPHONEID;
typedef LPCWSTR PCSPPHONEID;
typedef struct SPPHRASEELEMENT
    {
    ULONG ulAudioTimeOffset;
    ULONG ulAudioSizeTime;
    ULONG ulAudioStreamOffset;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedStreamOffset;
    ULONG ulRetainedSizeBytes;
    LPCWSTR pszDisplayText;
    LPCWSTR pszLexicalForm;
    const SPPHONEID *pszPronunciation;
    BYTE bDisplayAttributes;
    signed char RequiredConfidence;
    signed char ActualConfidence;
    BYTE Reserved;
    float SREngineConfidence;
    } SPPHRASEELEMENT;
typedef struct SPPHRASERULE SPPHRASERULE;
struct SPPHRASERULE
    {
    LPCWSTR pszName;
    ULONG ulId;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    const SPPHRASERULE *pNextSibling;
    const SPPHRASERULE *pFirstChild;
    float SREngineConfidence;
    signed char Confidence;
    } ;
typedef struct SPPHRASEPROPERTY SPPHRASEPROPERTY;
typedef
enum SPPHRASEPROPERTYUNIONTYPE
    {
        SPPPUT_UNUSED = 0,
        SPPPUT_ARRAY_INDEX = ( SPPPUT_UNUSED + 1 )
    } SPPHRASEPROPERTYUNIONTYPE;
struct SPPHRASEPROPERTY
    {
    LPCWSTR pszName;
    union
        {
        ULONG ulId;
        struct
            {
            byte bType;
            byte bReserved;
            unsigned short usArrayIndex;
            } ;
        } ;
    LPCWSTR pszValue;
    VARIANT vValue;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    const SPPHRASEPROPERTY *pNextSibling;
    const SPPHRASEPROPERTY *pFirstChild;
    float SREngineConfidence;
    signed char Confidence;
    } ;
typedef struct SPPHRASEREPLACEMENT
    {
    BYTE bDisplayAttributes;
    LPCWSTR pszReplacementText;
    ULONG ulFirstElement;
    ULONG ulCountOfElements;
    } SPPHRASEREPLACEMENT;
typedef struct SPPHRASE
    {
    ULONG cbSize;
    WORD LangID;
    WORD wHomophoneGroupId;
    ULONGLONG ullGrammarID;
    ULONGLONG ftStartTime;
    ULONGLONG ullAudioStreamPosition;
    ULONG ulAudioSizeBytes;
    ULONG ulRetainedSizeBytes;
    ULONG ulAudioSizeTime;
    SPPHRASERULE Rule;
    const SPPHRASEPROPERTY *pProperties;
    const SPPHRASEELEMENT *pElements;
    ULONG cReplacements;
    const SPPHRASEREPLACEMENT *pReplacements;
    GUID SREngineID;
    ULONG ulSREnginePrivateDataSize;
    const BYTE *pSREnginePrivateData;
    } SPPHRASE;
typedef struct SPSERIALIZEDPHRASE
    {
    ULONG ulSerializedSize;
    } SPSERIALIZEDPHRASE;
typedef
enum SPVALUETYPE
    {
        SPDF_PROPERTY = 0x1,
        SPDF_REPLACEMENT = 0x2,
        SPDF_RULE = 0x4,
        SPDF_DISPLAYTEXT = 0x8,
        SPDF_LEXICALFORM = 0x10,
        SPDF_PRONUNCIATION = 0x20,
        SPDF_AUDIO = 0x40,
        SPDF_ALTERNATES = 0x80,
        SPDF_ALL = 0xff
    } SPVALUETYPE;
typedef struct SPBINARYGRAMMAR
    {
    ULONG ulTotalSerializedSize;
    } SPBINARYGRAMMAR;
typedef
enum SPPHRASERNG
    {
        SPPR_ALL_ELEMENTS = -1
    } SPPHRASERNG;
#if 0
typedef void *SPSTATEHANDLE;
#else
DECLARE_HANDLE(SPSTATEHANDLE);
#endif
typedef
enum SPRECOEVENTFLAGS
    {
        SPREF_AutoPause = ( 1 << 0 ) ,
        SPREF_Emulated = ( 1 << 1 )
    } SPRECOEVENTFLAGS;
typedef
enum SPPARTOFSPEECH
    {
        SPPS_NotOverriden = -1,
        SPPS_Unknown = 0,
        SPPS_Noun = 0x1000,
        SPPS_Verb = 0x2000,
        SPPS_Modifier = 0x3000,
        SPPS_Function = 0x4000,
        SPPS_Interjection = 0x5000
    } SPPARTOFSPEECH;
typedef
enum SPLEXICONTYPE
    {
        eLEXTYPE_USER = ( 1L << 0 ) ,
        eLEXTYPE_APP = ( 1L << 1 ) ,
        eLEXTYPE_VENDORLEXICON = ( 1L << 2 ) ,
        eLEXTYPE_LETTERTOSOUND = ( 1L << 3 ) ,
        eLEXTYPE_MORPHOLOGY = ( 1L << 4 ) ,
        eLEXTYPE_RESERVED4 = ( 1L << 5 ) ,
        eLEXTYPE_USER_SHORTCUT = ( 1L << 6 ) ,
        eLEXTYPE_RESERVED6 = ( 1L << 7 ) ,
        eLEXTYPE_RESERVED7 = ( 1L << 8 ) ,
        eLEXTYPE_RESERVED8 = ( 1L << 9 ) ,
        eLEXTYPE_RESERVED9 = ( 1L << 10 ) ,
        eLEXTYPE_RESERVED10 = ( 1L << 11 ) ,
        eLEXTYPE_PRIVATE1 = ( 1L << 12 ) ,
        eLEXTYPE_PRIVATE2 = ( 1L << 13 ) ,
        eLEXTYPE_PRIVATE3 = ( 1L << 14 ) ,
        eLEXTYPE_PRIVATE4 = ( 1L << 15 ) ,
        eLEXTYPE_PRIVATE5 = ( 1L << 16 ) ,
        eLEXTYPE_PRIVATE6 = ( 1L << 17 ) ,
        eLEXTYPE_PRIVATE7 = ( 1L << 18 ) ,
        eLEXTYPE_PRIVATE8 = ( 1L << 19 ) ,
        eLEXTYPE_PRIVATE9 = ( 1L << 20 ) ,
        eLEXTYPE_PRIVATE10 = ( 1L << 21 ) ,
        eLEXTYPE_PRIVATE11 = ( 1L << 22 ) ,
        eLEXTYPE_PRIVATE12 = ( 1L << 23 ) ,
        eLEXTYPE_PRIVATE13 = ( 1L << 24 ) ,
        eLEXTYPE_PRIVATE14 = ( 1L << 25 ) ,
        eLEXTYPE_PRIVATE15 = ( 1L << 26 ) ,
        eLEXTYPE_PRIVATE16 = ( 1L << 27 ) ,
        eLEXTYPE_PRIVATE17 = ( 1L << 28 ) ,
        eLEXTYPE_PRIVATE18 = ( 1L << 29 ) ,
        eLEXTYPE_PRIVATE19 = ( 1L << 30 ) ,
        eLEXTYPE_PRIVATE20 = ( 1L << 31 )
    } SPLEXICONTYPE;
typedef
enum SPWORDTYPE
    {
        eWORDTYPE_ADDED = ( 1L << 0 ) ,
        eWORDTYPE_DELETED = ( 1L << 1 )
    } SPWORDTYPE;
typedef struct SPWORDPRONUNCIATION
    {
    struct SPWORDPRONUNCIATION *pNextWordPronunciation;
    SPLEXICONTYPE eLexiconType;
    WORD LangID;
    WORD wPronunciationFlags;
    SPPARTOFSPEECH ePartOfSpeech;
    SPPHONEID szPronunciation[ 1 ];
    } SPWORDPRONUNCIATION;
typedef struct SPWORDPRONUNCIATIONLIST
    {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPWORDPRONUNCIATION *pFirstWordPronunciation;
    } SPWORDPRONUNCIATIONLIST;
typedef struct SPWORD
    {
    struct SPWORD *pNextWord;
    WORD LangID;
    WORD wReserved;
    SPWORDTYPE eWordType;
    LPWSTR pszWord;
    SPWORDPRONUNCIATION *pFirstWordPronunciation;
    } SPWORD;
typedef struct SPWORDLIST
    {
    ULONG ulSize;
    BYTE *pvBuffer;
    SPWORD *pFirstWord;
    } SPWORDLIST;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpLexicon;
    typedef struct ISpLexiconVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpLexicon * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpLexicon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpLexicon * This);
        HRESULT ( STDMETHODCALLTYPE *GetPronunciations )(
            ISpLexicon * This,
                       LPCWSTR pszWord,
                       WORD LangID,
                       DWORD dwFlags,
                            SPWORDPRONUNCIATIONLIST *pWordPronunciationList);
        HRESULT ( STDMETHODCALLTYPE *AddPronunciation )(
            ISpLexicon * This,
                       LPCWSTR pszWord,
                       WORD LangID,
                       SPPARTOFSPEECH ePartOfSpeech,
            _In_opt_ PCSPPHONEID pszPronunciation);
        HRESULT ( STDMETHODCALLTYPE *RemovePronunciation )(
            ISpLexicon * This,
                       LPCWSTR pszWord,
                       WORD LangID,
                       SPPARTOFSPEECH ePartOfSpeech,
            _In_opt_ PCSPPHONEID pszPronunciation);
        HRESULT ( STDMETHODCALLTYPE *GetGeneration )(
            ISpLexicon * This,
                        DWORD *pdwGeneration);
        HRESULT ( STDMETHODCALLTYPE *GetGenerationChange )(
            ISpLexicon * This,
                       DWORD dwFlags,
                            DWORD *pdwGeneration,
                            SPWORDLIST *pWordList);
        HRESULT ( STDMETHODCALLTYPE *GetWords )(
            ISpLexicon * This,
                       DWORD dwFlags,
                            DWORD *pdwGeneration,
            _Inout_opt_ DWORD *pdwCookie,
                            SPWORDLIST *pWordList);
        END_INTERFACE
    } ISpLexiconVtbl;
    interface ISpLexicon
    {
        CONST_VTBL struct ISpLexiconVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList) )
    ( (This)->lpVtbl -> AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) )
    ( (This)->lpVtbl -> RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) )
    ( (This)->lpVtbl -> GetGeneration(This,pdwGeneration) )
    ( (This)->lpVtbl -> GetGenerationChange(This,dwFlags,pdwGeneration,pWordList) )
    ( (This)->lpVtbl -> GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList) )
EXTERN_C const IID IID_ISpContainerLexicon;
    typedef struct ISpContainerLexiconVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpContainerLexicon * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpContainerLexicon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpContainerLexicon * This);
        HRESULT ( STDMETHODCALLTYPE *GetPronunciations )(
            __RPC__in ISpContainerLexicon * This,
                       __RPC__in LPCWSTR pszWord,
                       WORD LangID,
                       DWORD dwFlags,
                            __RPC__inout SPWORDPRONUNCIATIONLIST *pWordPronunciationList);
        HRESULT ( STDMETHODCALLTYPE *AddPronunciation )(
            __RPC__in ISpContainerLexicon * This,
                       __RPC__in LPCWSTR pszWord,
                       WORD LangID,
                       SPPARTOFSPEECH ePartOfSpeech,
            _In_opt_ PCSPPHONEID pszPronunciation);
        HRESULT ( STDMETHODCALLTYPE *RemovePronunciation )(
            __RPC__in ISpContainerLexicon * This,
                       __RPC__in LPCWSTR pszWord,
                       WORD LangID,
                       SPPARTOFSPEECH ePartOfSpeech,
            _In_opt_ PCSPPHONEID pszPronunciation);
        HRESULT ( STDMETHODCALLTYPE *GetGeneration )(
            __RPC__in ISpContainerLexicon * This,
                        __RPC__out DWORD *pdwGeneration);
        HRESULT ( STDMETHODCALLTYPE *GetGenerationChange )(
            __RPC__in ISpContainerLexicon * This,
                       DWORD dwFlags,
                            __RPC__inout DWORD *pdwGeneration,
                            __RPC__inout SPWORDLIST *pWordList);
        HRESULT ( STDMETHODCALLTYPE *GetWords )(
            __RPC__in ISpContainerLexicon * This,
                       DWORD dwFlags,
                            __RPC__inout DWORD *pdwGeneration,
            _Inout_opt_ DWORD *pdwCookie,
                            __RPC__inout SPWORDLIST *pWordList);
        HRESULT ( STDMETHODCALLTYPE *AddLexicon )(
            __RPC__in ISpContainerLexicon * This,
                       __RPC__in_opt ISpLexicon *pAddLexicon,
                       DWORD dwFlags);
        END_INTERFACE
    } ISpContainerLexiconVtbl;
    interface ISpContainerLexicon
    {
        CONST_VTBL struct ISpContainerLexiconVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPronunciations(This,pszWord,LangID,dwFlags,pWordPronunciationList) )
    ( (This)->lpVtbl -> AddPronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) )
    ( (This)->lpVtbl -> RemovePronunciation(This,pszWord,LangID,ePartOfSpeech,pszPronunciation) )
    ( (This)->lpVtbl -> GetGeneration(This,pdwGeneration) )
    ( (This)->lpVtbl -> GetGenerationChange(This,dwFlags,pdwGeneration,pWordList) )
    ( (This)->lpVtbl -> GetWords(This,dwFlags,pdwGeneration,pdwCookie,pWordList) )
    ( (This)->lpVtbl -> AddLexicon(This,pAddLexicon,dwFlags) )
EXTERN_C const IID IID_ISpPhoneConverter;
    typedef struct ISpPhoneConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpPhoneConverter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpPhoneConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpPhoneConverter * This);
        HRESULT ( STDMETHODCALLTYPE *SetObjectToken )(
            __RPC__in ISpPhoneConverter * This,
                       __RPC__in_opt ISpObjectToken *pToken);
        HRESULT ( STDMETHODCALLTYPE *GetObjectToken )(
            __RPC__in ISpPhoneConverter * This,
                        __RPC__deref_out_opt ISpObjectToken **ppToken);
        HRESULT ( STDMETHODCALLTYPE *PhoneToId )(
            __RPC__in ISpPhoneConverter * This,
                       __RPC__in LPCWSTR pszPhone,
                        __RPC__out SPPHONEID *pId);
        HRESULT ( STDMETHODCALLTYPE *IdToPhone )(
            __RPC__in ISpPhoneConverter * This,
                       __RPC__in PCSPPHONEID pId,
                        __RPC__out WCHAR *pszPhone);
        END_INTERFACE
    } ISpPhoneConverterVtbl;
    interface ISpPhoneConverter
    {
        CONST_VTBL struct ISpPhoneConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetObjectToken(This,pToken) )
    ( (This)->lpVtbl -> GetObjectToken(This,ppToken) )
    ( (This)->lpVtbl -> PhoneToId(This,pszPhone,pId) )
    ( (This)->lpVtbl -> IdToPhone(This,pId,pszPhone) )
typedef struct SPVPITCH
    {
    long MiddleAdj;
    long RangeAdj;
    } SPVPITCH;
typedef
enum SPVACTIONS
    {
        SPVA_Speak = 0,
        SPVA_Silence = ( SPVA_Speak + 1 ) ,
        SPVA_Pronounce = ( SPVA_Silence + 1 ) ,
        SPVA_Bookmark = ( SPVA_Pronounce + 1 ) ,
        SPVA_SpellOut = ( SPVA_Bookmark + 1 ) ,
        SPVA_Section = ( SPVA_SpellOut + 1 ) ,
        SPVA_ParseUnknownTag = ( SPVA_Section + 1 )
    } SPVACTIONS;
typedef struct SPVCONTEXT
    {
    LPCWSTR pCategory;
    LPCWSTR pBefore;
    LPCWSTR pAfter;
    } SPVCONTEXT;
typedef struct SPVSTATE
    {
    SPVACTIONS eAction;
    WORD LangID;
    WORD wReserved;
    long EmphAdj;
    long RateAdj;
    ULONG Volume;
    SPVPITCH PitchAdj;
    ULONG SilenceMSecs;
    SPPHONEID *pPhoneIds;
    SPPARTOFSPEECH ePartOfSpeech;
    SPVCONTEXT Context;
    } SPVSTATE;
typedef
enum SPRUNSTATE
    {
        SPRS_DONE = ( 1L << 0 ) ,
        SPRS_IS_SPEAKING = ( 1L << 1 )
    } SPRUNSTATE;
typedef
enum SPVLIMITS
    {
        SPMIN_VOLUME = 0,
        SPMAX_VOLUME = 100,
        SPMIN_RATE = -10,
        SPMAX_RATE = 10
    } SPVLIMITS;
typedef
enum SPVPRIORITY
    {
        SPVPRI_NORMAL = 0,
        SPVPRI_ALERT = ( 1L << 0 ) ,
        SPVPRI_OVER = ( 1L << 1 )
    } SPVPRIORITY;
typedef struct SPVOICESTATUS
    {
    ULONG ulCurrentStream;
    ULONG ulLastStreamQueued;
    HRESULT hrLastResult;
    DWORD dwRunningState;
    ULONG ulInputWordPos;
    ULONG ulInputWordLen;
    ULONG ulInputSentPos;
    ULONG ulInputSentLen;
    LONG lBookmarkId;
    SPPHONEID PhonemeId;
    SPVISEMES VisemeId;
    DWORD dwReserved1;
    DWORD dwReserved2;
    } SPVOICESTATUS;
typedef
enum SPEAKFLAGS
    {
        SPF_DEFAULT = 0,
        SPF_ASYNC = ( 1L << 0 ) ,
        SPF_PURGEBEFORESPEAK = ( 1L << 1 ) ,
        SPF_IS_FILENAME = ( 1L << 2 ) ,
        SPF_IS_XML = ( 1L << 3 ) ,
        SPF_IS_NOT_XML = ( 1L << 4 ) ,
        SPF_PERSIST_XML = ( 1L << 5 ) ,
        SPF_NLP_SPEAK_PUNC = ( 1L << 6 ) ,
        SPF_NLP_MASK = SPF_NLP_SPEAK_PUNC,
        SPF_VOICE_MASK = ( ( ( ( ( ( SPF_ASYNC | SPF_PURGEBEFORESPEAK ) | SPF_IS_FILENAME ) | SPF_IS_XML ) | SPF_IS_NOT_XML ) | SPF_NLP_MASK ) | SPF_PERSIST_XML ) ,
        SPF_UNUSED_FLAGS = ~SPF_VOICE_MASK
    } SPEAKFLAGS;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpVoice;
    typedef struct ISpVoiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpVoice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpVoice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpVoice * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )(
            ISpVoice * This,
                       ISpNotifySink *pNotifySink);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )(
            ISpVoice * This,
                       HWND hWnd,
                       UINT Msg,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )(
            ISpVoice * This,
                       SPNOTIFYCALLBACK *pfnCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )(
            ISpVoice * This,
                       ISpNotifyCallback *pSpCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )(
            ISpVoice * This);
                      HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )(
            ISpVoice * This,
                       DWORD dwMilliseconds);
                      HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )(
            ISpVoice * This);
        HRESULT ( STDMETHODCALLTYPE *SetInterest )(
            ISpVoice * This,
                       ULONGLONG ullEventInterest,
                       ULONGLONG ullQueuedInterest);
        HRESULT ( STDMETHODCALLTYPE *GetEvents )(
            ISpVoice * This,
                       ULONG ulCount,
                                 SPEVENT *pEventArray,
                        ULONG *pulFetched);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            ISpVoice * This,
                        SPEVENTSOURCEINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *SetOutput )(
            ISpVoice * This,
                       IUnknown *pUnkOutput,
                       BOOL fAllowFormatChanges);
        HRESULT ( STDMETHODCALLTYPE *GetOutputObjectToken )(
            ISpVoice * This,
            _Outptr_ ISpObjectToken **ppObjectToken);
        HRESULT ( STDMETHODCALLTYPE *GetOutputStream )(
            ISpVoice * This,
                        ISpStreamFormat **ppStream);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            ISpVoice * This);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            ISpVoice * This);
        HRESULT ( STDMETHODCALLTYPE *SetVoice )(
            ISpVoice * This,
                       ISpObjectToken *pToken);
        HRESULT ( STDMETHODCALLTYPE *GetVoice )(
            ISpVoice * This,
            _Outptr_ ISpObjectToken **ppToken);
        HRESULT ( STDMETHODCALLTYPE *Speak )(
            ISpVoice * This,
            _In_opt_ LPCWSTR pwcs,
                       DWORD dwFlags,
            _Out_opt_ ULONG *pulStreamNumber);
        HRESULT ( STDMETHODCALLTYPE *SpeakStream )(
            ISpVoice * This,
                       IStream *pStream,
                       DWORD dwFlags,
            _Out_opt_ ULONG *pulStreamNumber);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            ISpVoice * This,
                        SPVOICESTATUS *pStatus,
            _Outptr_ LPWSTR *ppszLastBookmark);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            ISpVoice * This,
                               LPCWSTR pItemType,
                       long lNumItems,
                        ULONG *pulNumSkipped);
        HRESULT ( STDMETHODCALLTYPE *SetPriority )(
            ISpVoice * This,
                       SPVPRIORITY ePriority);
        HRESULT ( STDMETHODCALLTYPE *GetPriority )(
            ISpVoice * This,
                        SPVPRIORITY *pePriority);
        HRESULT ( STDMETHODCALLTYPE *SetAlertBoundary )(
            ISpVoice * This,
                       SPEVENTENUM eBoundary);
        HRESULT ( STDMETHODCALLTYPE *GetAlertBoundary )(
            ISpVoice * This,
                        SPEVENTENUM *peBoundary);
        HRESULT ( STDMETHODCALLTYPE *SetRate )(
            ISpVoice * This,
                       long RateAdjust);
        HRESULT ( STDMETHODCALLTYPE *GetRate )(
            ISpVoice * This,
                        long *pRateAdjust);
        HRESULT ( STDMETHODCALLTYPE *SetVolume )(
            ISpVoice * This,
                       USHORT usVolume);
        HRESULT ( STDMETHODCALLTYPE *GetVolume )(
            ISpVoice * This,
                        USHORT *pusVolume);
        HRESULT ( STDMETHODCALLTYPE *WaitUntilDone )(
            ISpVoice * This,
                       ULONG msTimeout);
        HRESULT ( STDMETHODCALLTYPE *SetSyncSpeakTimeout )(
            ISpVoice * This,
                       ULONG msTimeout);
        HRESULT ( STDMETHODCALLTYPE *GetSyncSpeakTimeout )(
            ISpVoice * This,
                        ULONG *pmsTimeout);
                      HANDLE ( STDMETHODCALLTYPE *SpeakCompleteEvent )(
            ISpVoice * This);
                      HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            ISpVoice * This,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                        BOOL *pfSupported);
                      HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            ISpVoice * This,
                       HWND hwndParent,
                       LPCWSTR pszTitle,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData);
        END_INTERFACE
    } ISpVoiceVtbl;
    interface ISpVoice
    {
        CONST_VTBL struct ISpVoiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) )
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) )
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) )
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) )
    ( (This)->lpVtbl -> SetInterest(This,ullEventInterest,ullQueuedInterest) )
    ( (This)->lpVtbl -> GetEvents(This,ulCount,pEventArray,pulFetched) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> SetOutput(This,pUnkOutput,fAllowFormatChanges) )
    ( (This)->lpVtbl -> GetOutputObjectToken(This,ppObjectToken) )
    ( (This)->lpVtbl -> GetOutputStream(This,ppStream) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> SetVoice(This,pToken) )
    ( (This)->lpVtbl -> GetVoice(This,ppToken) )
    ( (This)->lpVtbl -> Speak(This,pwcs,dwFlags,pulStreamNumber) )
    ( (This)->lpVtbl -> SpeakStream(This,pStream,dwFlags,pulStreamNumber) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus,ppszLastBookmark) )
    ( (This)->lpVtbl -> Skip(This,pItemType,lNumItems,pulNumSkipped) )
    ( (This)->lpVtbl -> SetPriority(This,ePriority) )
    ( (This)->lpVtbl -> GetPriority(This,pePriority) )
    ( (This)->lpVtbl -> SetAlertBoundary(This,eBoundary) )
    ( (This)->lpVtbl -> GetAlertBoundary(This,peBoundary) )
    ( (This)->lpVtbl -> SetRate(This,RateAdjust) )
    ( (This)->lpVtbl -> GetRate(This,pRateAdjust) )
    ( (This)->lpVtbl -> SetVolume(This,usVolume) )
    ( (This)->lpVtbl -> GetVolume(This,pusVolume) )
    ( (This)->lpVtbl -> WaitUntilDone(This,msTimeout) )
    ( (This)->lpVtbl -> SetSyncSpeakTimeout(This,msTimeout) )
    ( (This)->lpVtbl -> GetSyncSpeakTimeout(This,pmsTimeout) )
    ( (This)->lpVtbl -> SpeakCompleteEvent(This) )
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported) )
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData) )
EXTERN_C const IID IID_ISpPhrase;
    typedef struct ISpPhraseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpPhrase * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpPhrase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpPhrase * This);
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )(
            ISpPhrase * This,
            _Outptr_ SPPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )(
            ISpPhrase * This,
            _Outptr_ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            ISpPhrase * This,
                       ULONG ulStart,
                       ULONG ulCount,
                       BOOL fUseTextReplacements,
            _Outptr_ LPWSTR *ppszCoMemText,
            _Out_writes_opt_(1) BYTE *pbDisplayAttributes);
        HRESULT ( STDMETHODCALLTYPE *Discard )(
            ISpPhrase * This,
                       DWORD dwValueTypes);
        END_INTERFACE
    } ISpPhraseVtbl;
    interface ISpPhrase
    {
        CONST_VTBL struct ISpPhraseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) )
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) )
EXTERN_C const IID IID_ISpPhraseAlt;
    typedef struct ISpPhraseAltVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpPhraseAlt * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpPhraseAlt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpPhraseAlt * This);
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )(
            ISpPhraseAlt * This,
            _Outptr_ SPPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )(
            ISpPhraseAlt * This,
            _Outptr_ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            ISpPhraseAlt * This,
                       ULONG ulStart,
                       ULONG ulCount,
                       BOOL fUseTextReplacements,
            _Outptr_ LPWSTR *ppszCoMemText,
            _Out_writes_opt_(1) BYTE *pbDisplayAttributes);
        HRESULT ( STDMETHODCALLTYPE *Discard )(
            ISpPhraseAlt * This,
                       DWORD dwValueTypes);
        HRESULT ( STDMETHODCALLTYPE *GetAltInfo )(
            ISpPhraseAlt * This,
                        ISpPhrase **ppParent,
                        ULONG *pulStartElementInParent,
                        ULONG *pcElementsInParent,
                        ULONG *pcElementsInAlt);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpPhraseAlt * This);
        END_INTERFACE
    } ISpPhraseAltVtbl;
    interface ISpPhraseAlt
    {
        CONST_VTBL struct ISpPhraseAltVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) )
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) )
    ( (This)->lpVtbl -> GetAltInfo(This,ppParent,pulStartElementInParent,pcElementsInParent,pcElementsInAlt) )
    ( (This)->lpVtbl -> Commit(This) )
typedef struct SPRECORESULTTIMES
    {
    FILETIME ftStreamTime;
    ULONGLONG ullLength;
    DWORD dwTickCount;
    ULONGLONG ullStart;
    } SPRECORESULTTIMES;
typedef struct SPSERIALIZEDRESULT
    {
    ULONG ulSerializedSize;
    } SPSERIALIZEDRESULT;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpRecoResult;
    typedef struct ISpRecoResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpRecoResult * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpRecoResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpRecoResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetPhrase )(
            ISpRecoResult * This,
            _Outptr_ SPPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetSerializedPhrase )(
            ISpRecoResult * This,
            _Outptr_ SPSERIALIZEDPHRASE **ppCoMemPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            ISpRecoResult * This,
                       ULONG ulStart,
                       ULONG ulCount,
                       BOOL fUseTextReplacements,
            _Outptr_ LPWSTR *ppszCoMemText,
            _Out_writes_opt_(1) BYTE *pbDisplayAttributes);
        HRESULT ( STDMETHODCALLTYPE *Discard )(
            ISpRecoResult * This,
                       DWORD dwValueTypes);
        HRESULT ( STDMETHODCALLTYPE *GetResultTimes )(
            ISpRecoResult * This,
                        SPRECORESULTTIMES *pTimes);
        HRESULT ( STDMETHODCALLTYPE *GetAlternates )(
            ISpRecoResult * This,
                       ULONG ulStartElement,
                       ULONG cElements,
                       ULONG ulRequestCount,
            _Out_writes_to_(ulRequestCount,*pcPhrasesReturned) ISpPhraseAlt **ppPhrases,
                        ULONG *pcPhrasesReturned);
        HRESULT ( STDMETHODCALLTYPE *GetAudio )(
            ISpRecoResult * This,
                       ULONG ulStartElement,
                       ULONG cElements,
                        ISpStreamFormat **ppStream);
        HRESULT ( STDMETHODCALLTYPE *SpeakAudio )(
            ISpRecoResult * This,
                       ULONG ulStartElement,
                       ULONG cElements,
                       DWORD dwFlags,
                        ULONG *pulStreamNumber);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            ISpRecoResult * This,
                        SPSERIALIZEDRESULT **ppCoMemSerializedResult);
        HRESULT ( STDMETHODCALLTYPE *ScaleAudio )(
            ISpRecoResult * This,
                       const GUID *pAudioFormatId,
                       const WAVEFORMATEX *pWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *GetRecoContext )(
            ISpRecoResult * This,
                        ISpRecoContext **ppRecoContext);
        END_INTERFACE
    } ISpRecoResultVtbl;
    interface ISpRecoResult
    {
        CONST_VTBL struct ISpRecoResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetSerializedPhrase(This,ppCoMemPhrase) )
    ( (This)->lpVtbl -> GetText(This,ulStart,ulCount,fUseTextReplacements,ppszCoMemText,pbDisplayAttributes) )
    ( (This)->lpVtbl -> Discard(This,dwValueTypes) )
    ( (This)->lpVtbl -> GetResultTimes(This,pTimes) )
    ( (This)->lpVtbl -> GetAlternates(This,ulStartElement,cElements,ulRequestCount,ppPhrases,pcPhrasesReturned) )
    ( (This)->lpVtbl -> GetAudio(This,ulStartElement,cElements,ppStream) )
    ( (This)->lpVtbl -> SpeakAudio(This,ulStartElement,cElements,dwFlags,pulStreamNumber) )
    ( (This)->lpVtbl -> Serialize(This,ppCoMemSerializedResult) )
    ( (This)->lpVtbl -> ScaleAudio(This,pAudioFormatId,pWaveFormatEx) )
    ( (This)->lpVtbl -> GetRecoContext(This,ppRecoContext) )
typedef struct tagSPTEXTSELECTIONINFO
    {
    ULONG ulStartActiveOffset;
    ULONG cchActiveChars;
    ULONG ulStartSelection;
    ULONG cchSelection;
    } SPTEXTSELECTIONINFO;
typedef
enum SPWORDPRONOUNCEABLE
    {
        SPWP_UNKNOWN_WORD_UNPRONOUNCEABLE = 0,
        SPWP_UNKNOWN_WORD_PRONOUNCEABLE = 1,
        SPWP_KNOWN_WORD_PRONOUNCEABLE = 2
    } SPWORDPRONOUNCEABLE;
typedef
enum SPGRAMMARSTATE
    {
        SPGS_DISABLED = 0,
        SPGS_ENABLED = 1,
        SPGS_EXCLUSIVE = 3
    } SPGRAMMARSTATE;
typedef
enum SPCONTEXTSTATE
    {
        SPCS_DISABLED = 0,
        SPCS_ENABLED = 1
    } SPCONTEXTSTATE;
typedef
enum SPRULESTATE
    {
        SPRS_INACTIVE = 0,
        SPRS_ACTIVE = 1,
        SPRS_ACTIVE_WITH_AUTO_PAUSE = 3
    } SPRULESTATE;
typedef
enum SPGRAMMARWORDTYPE
    {
        SPWT_DISPLAY = 0,
        SPWT_LEXICAL = ( SPWT_DISPLAY + 1 ) ,
        SPWT_PRONUNCIATION = ( SPWT_LEXICAL + 1 )
    } SPGRAMMARWORDTYPE;
typedef struct tagSPPROPERTYINFO
    {
    LPCWSTR pszName;
    ULONG ulId;
    LPCWSTR pszValue;
    VARIANT vValue;
    } SPPROPERTYINFO;
typedef
enum SPCFGRULEATTRIBUTES
    {
        SPRAF_TopLevel = ( 1 << 0 ) ,
        SPRAF_Active = ( 1 << 1 ) ,
        SPRAF_Export = ( 1 << 2 ) ,
        SPRAF_Import = ( 1 << 3 ) ,
        SPRAF_Interpreter = ( 1 << 4 ) ,
        SPRAF_Dynamic = ( 1 << 5 ) ,
        SPRAF_AutoPause = ( 1 << 16 )
    } SPCFGRULEATTRIBUTES;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpGrammarBuilder;
    typedef struct ISpGrammarBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpGrammarBuilder * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpGrammarBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpGrammarBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *ResetGrammar )(
            ISpGrammarBuilder * This,
                       WORD NewLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetRule )(
            ISpGrammarBuilder * This,
                       LPCWSTR pszRuleName,
                       DWORD dwRuleId,
                       DWORD dwAttributes,
                       BOOL fCreateIfNotExist,
                        SPSTATEHANDLE *phInitialState);
        HRESULT ( STDMETHODCALLTYPE *ClearRule )(
            ISpGrammarBuilder * This,
                       SPSTATEHANDLE hState);
        HRESULT ( STDMETHODCALLTYPE *CreateNewState )(
            ISpGrammarBuilder * This,
                       SPSTATEHANDLE hState,
                        SPSTATEHANDLE *phState);
        HRESULT ( STDMETHODCALLTYPE *AddWordTransition )(
            ISpGrammarBuilder * This,
                       SPSTATEHANDLE hFromState,
                       SPSTATEHANDLE hToState,
            _In_opt_ LPCWSTR psz,
            _In_opt_ LPCWSTR pszSeparators,
                       SPGRAMMARWORDTYPE eWordType,
                       float Weight,
                       const SPPROPERTYINFO *pPropInfo);
        HRESULT ( STDMETHODCALLTYPE *AddRuleTransition )(
            ISpGrammarBuilder * This,
                       SPSTATEHANDLE hFromState,
                       SPSTATEHANDLE hToState,
                       SPSTATEHANDLE hRule,
                       float Weight,
                       const SPPROPERTYINFO *pPropInfo);
        HRESULT ( STDMETHODCALLTYPE *AddResource )(
            ISpGrammarBuilder * This,
                       SPSTATEHANDLE hRuleState,
                       LPCWSTR pszResourceName,
            _In_opt_ LPCWSTR pszResourceValue);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpGrammarBuilder * This,
                       DWORD dwReserved);
        END_INTERFACE
    } ISpGrammarBuilderVtbl;
    interface ISpGrammarBuilder
    {
        CONST_VTBL struct ISpGrammarBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResetGrammar(This,NewLanguage) )
    ( (This)->lpVtbl -> GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) )
    ( (This)->lpVtbl -> ClearRule(This,hState) )
    ( (This)->lpVtbl -> CreateNewState(This,hState,phState) )
    ( (This)->lpVtbl -> AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) )
    ( (This)->lpVtbl -> AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) )
    ( (This)->lpVtbl -> AddResource(This,hRuleState,pszResourceName,pszResourceValue) )
    ( (This)->lpVtbl -> Commit(This,dwReserved) )
typedef
enum SPLOADOPTIONS
    {
        SPLO_STATIC = 0,
        SPLO_DYNAMIC = 1
    } SPLOADOPTIONS;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpRecoGrammar;
    typedef struct ISpRecoGrammarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpRecoGrammar * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpRecoGrammar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpRecoGrammar * This);
        HRESULT ( STDMETHODCALLTYPE *ResetGrammar )(
            ISpRecoGrammar * This,
                       WORD NewLanguage);
        HRESULT ( STDMETHODCALLTYPE *GetRule )(
            ISpRecoGrammar * This,
                       LPCWSTR pszRuleName,
                       DWORD dwRuleId,
                       DWORD dwAttributes,
                       BOOL fCreateIfNotExist,
                        SPSTATEHANDLE *phInitialState);
        HRESULT ( STDMETHODCALLTYPE *ClearRule )(
            ISpRecoGrammar * This,
                       SPSTATEHANDLE hState);
        HRESULT ( STDMETHODCALLTYPE *CreateNewState )(
            ISpRecoGrammar * This,
                       SPSTATEHANDLE hState,
                        SPSTATEHANDLE *phState);
        HRESULT ( STDMETHODCALLTYPE *AddWordTransition )(
            ISpRecoGrammar * This,
                       SPSTATEHANDLE hFromState,
                       SPSTATEHANDLE hToState,
            _In_opt_ LPCWSTR psz,
            _In_opt_ LPCWSTR pszSeparators,
                       SPGRAMMARWORDTYPE eWordType,
                       float Weight,
                       const SPPROPERTYINFO *pPropInfo);
        HRESULT ( STDMETHODCALLTYPE *AddRuleTransition )(
            ISpRecoGrammar * This,
                       SPSTATEHANDLE hFromState,
                       SPSTATEHANDLE hToState,
                       SPSTATEHANDLE hRule,
                       float Weight,
                       const SPPROPERTYINFO *pPropInfo);
        HRESULT ( STDMETHODCALLTYPE *AddResource )(
            ISpRecoGrammar * This,
                       SPSTATEHANDLE hRuleState,
                       LPCWSTR pszResourceName,
            _In_opt_ LPCWSTR pszResourceValue);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            ISpRecoGrammar * This,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetGrammarId )(
            ISpRecoGrammar * This,
                        ULONGLONG *pullGrammarId);
        HRESULT ( STDMETHODCALLTYPE *GetRecoContext )(
            ISpRecoGrammar * This,
            _Outptr_ ISpRecoContext **ppRecoCtxt);
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromFile )(
            ISpRecoGrammar * This,
                               LPCWSTR pszFileName,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromObject )(
            ISpRecoGrammar * This,
                       REFCLSID rcid,
                               LPCWSTR pszGrammarName,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromResource )(
            ISpRecoGrammar * This,
                       HMODULE hModule,
                               LPCWSTR pszResourceName,
                               LPCWSTR pszResourceType,
                       WORD wLanguage,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromMemory )(
            ISpRecoGrammar * This,
                       const SPBINARYGRAMMAR *pGrammar,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *LoadCmdFromProprietaryGrammar )(
            ISpRecoGrammar * This,
                       REFGUID rguidParam,
                               LPCWSTR pszStringParam,
                       const void *pvDataPrarm,
                       ULONG cbDataSize,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *SetRuleState )(
            ISpRecoGrammar * This,
            _In_opt_ LPCWSTR pszName,
                       void *pReserved,
                       SPRULESTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *SetRuleIdState )(
            ISpRecoGrammar * This,
                       ULONG ulRuleId,
                       SPRULESTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *LoadDictation )(
            ISpRecoGrammar * This,
            _In_opt_ LPCWSTR pszTopicName,
                       SPLOADOPTIONS Options);
        HRESULT ( STDMETHODCALLTYPE *UnloadDictation )(
            ISpRecoGrammar * This);
        HRESULT ( STDMETHODCALLTYPE *SetDictationState )(
            ISpRecoGrammar * This,
                       SPRULESTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *SetWordSequenceData )(
            ISpRecoGrammar * This,
            _In_reads_opt_(cchText) const WCHAR *pText,
                       ULONG cchText,
                       const SPTEXTSELECTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *SetTextSelection )(
            ISpRecoGrammar * This,
                       const SPTEXTSELECTIONINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *IsPronounceable )(
            ISpRecoGrammar * This,
                               LPCWSTR pszWord,
                        SPWORDPRONOUNCEABLE *pWordPronounceable);
        HRESULT ( STDMETHODCALLTYPE *SetGrammarState )(
            ISpRecoGrammar * This,
                       SPGRAMMARSTATE eGrammarState);
        HRESULT ( STDMETHODCALLTYPE *SaveCmd )(
            ISpRecoGrammar * This,
                       IStream *pStream,
            _Outptr_opt_ LPWSTR *ppszCoMemErrorText);
        HRESULT ( STDMETHODCALLTYPE *GetGrammarState )(
            ISpRecoGrammar * This,
                        SPGRAMMARSTATE *peGrammarState);
        END_INTERFACE
    } ISpRecoGrammarVtbl;
    interface ISpRecoGrammar
    {
        CONST_VTBL struct ISpRecoGrammarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResetGrammar(This,NewLanguage) )
    ( (This)->lpVtbl -> GetRule(This,pszRuleName,dwRuleId,dwAttributes,fCreateIfNotExist,phInitialState) )
    ( (This)->lpVtbl -> ClearRule(This,hState) )
    ( (This)->lpVtbl -> CreateNewState(This,hState,phState) )
    ( (This)->lpVtbl -> AddWordTransition(This,hFromState,hToState,psz,pszSeparators,eWordType,Weight,pPropInfo) )
    ( (This)->lpVtbl -> AddRuleTransition(This,hFromState,hToState,hRule,Weight,pPropInfo) )
    ( (This)->lpVtbl -> AddResource(This,hRuleState,pszResourceName,pszResourceValue) )
    ( (This)->lpVtbl -> Commit(This,dwReserved) )
    ( (This)->lpVtbl -> GetGrammarId(This,pullGrammarId) )
    ( (This)->lpVtbl -> GetRecoContext(This,ppRecoCtxt) )
    ( (This)->lpVtbl -> LoadCmdFromFile(This,pszFileName,Options) )
    ( (This)->lpVtbl -> LoadCmdFromObject(This,rcid,pszGrammarName,Options) )
    ( (This)->lpVtbl -> LoadCmdFromResource(This,hModule,pszResourceName,pszResourceType,wLanguage,Options) )
    ( (This)->lpVtbl -> LoadCmdFromMemory(This,pGrammar,Options) )
    ( (This)->lpVtbl -> LoadCmdFromProprietaryGrammar(This,rguidParam,pszStringParam,pvDataPrarm,cbDataSize,Options) )
    ( (This)->lpVtbl -> SetRuleState(This,pszName,pReserved,NewState) )
    ( (This)->lpVtbl -> SetRuleIdState(This,ulRuleId,NewState) )
    ( (This)->lpVtbl -> LoadDictation(This,pszTopicName,Options) )
    ( (This)->lpVtbl -> UnloadDictation(This) )
    ( (This)->lpVtbl -> SetDictationState(This,NewState) )
    ( (This)->lpVtbl -> SetWordSequenceData(This,pText,cchText,pInfo) )
    ( (This)->lpVtbl -> SetTextSelection(This,pInfo) )
    ( (This)->lpVtbl -> IsPronounceable(This,pszWord,pWordPronounceable) )
    ( (This)->lpVtbl -> SetGrammarState(This,eGrammarState) )
    ( (This)->lpVtbl -> SaveCmd(This,pStream,ppszCoMemErrorText) )
    ( (This)->lpVtbl -> GetGrammarState(This,peGrammarState) )
typedef struct SPRECOCONTEXTSTATUS
    {
    SPINTERFERENCE eInterference;
    WCHAR szRequestTypeOfUI[ 255 ];
    DWORD dwReserved1;
    DWORD dwReserved2;
    } SPRECOCONTEXTSTATUS;
typedef
enum SPBOOKMARKOPTIONS
    {
        SPBO_NONE = 0,
        SPBO_PAUSE = ( 1 << 0 )
    } SPBOOKMARKOPTIONS;
typedef
enum SPAUDIOOPTIONS
    {
        SPAO_NONE = 0,
        SPAO_RETAIN_AUDIO = ( 1 << 0 )
    } SPAUDIOOPTIONS;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpRecoContext;
    typedef struct ISpRecoContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpRecoContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpRecoContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpRecoContext * This);
        HRESULT ( STDMETHODCALLTYPE *SetNotifySink )(
            ISpRecoContext * This,
                       ISpNotifySink *pNotifySink);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWindowMessage )(
            ISpRecoContext * This,
                       HWND hWnd,
                       UINT Msg,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackFunction )(
            ISpRecoContext * This,
                       SPNOTIFYCALLBACK *pfnCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyCallbackInterface )(
            ISpRecoContext * This,
                       ISpNotifyCallback *pSpCallback,
                       WPARAM wParam,
                       LPARAM lParam);
                      HRESULT ( STDMETHODCALLTYPE *SetNotifyWin32Event )(
            ISpRecoContext * This);
                      HRESULT ( STDMETHODCALLTYPE *WaitForNotifyEvent )(
            ISpRecoContext * This,
                       DWORD dwMilliseconds);
                      HANDLE ( STDMETHODCALLTYPE *GetNotifyEventHandle )(
            ISpRecoContext * This);
        HRESULT ( STDMETHODCALLTYPE *SetInterest )(
            ISpRecoContext * This,
                       ULONGLONG ullEventInterest,
                       ULONGLONG ullQueuedInterest);
        HRESULT ( STDMETHODCALLTYPE *GetEvents )(
            ISpRecoContext * This,
                       ULONG ulCount,
                                 SPEVENT *pEventArray,
                        ULONG *pulFetched);
        HRESULT ( STDMETHODCALLTYPE *GetInfo )(
            ISpRecoContext * This,
                        SPEVENTSOURCEINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *GetRecognizer )(
            ISpRecoContext * This,
                        ISpRecognizer **ppRecognizer);
        HRESULT ( STDMETHODCALLTYPE *CreateGrammar )(
            ISpRecoContext * This,
                       ULONGLONG ullGrammarId,
                        ISpRecoGrammar **ppGrammar);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            ISpRecoContext * This,
                        SPRECOCONTEXTSTATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetMaxAlternates )(
            ISpRecoContext * This,
                       ULONG *pcAlternates);
        HRESULT ( STDMETHODCALLTYPE *SetMaxAlternates )(
            ISpRecoContext * This,
                       ULONG cAlternates);
        HRESULT ( STDMETHODCALLTYPE *SetAudioOptions )(
            ISpRecoContext * This,
                       SPAUDIOOPTIONS Options,
                       const GUID *pAudioFormatId,
                       const WAVEFORMATEX *pWaveFormatEx);
        HRESULT ( STDMETHODCALLTYPE *GetAudioOptions )(
            ISpRecoContext * This,
                       SPAUDIOOPTIONS *pOptions,
                        GUID *pAudioFormatId,
                        WAVEFORMATEX **ppCoMemWFEX);
        HRESULT ( STDMETHODCALLTYPE *DeserializeResult )(
            ISpRecoContext * This,
                       const SPSERIALIZEDRESULT *pSerializedResult,
                        ISpRecoResult **ppResult);
        HRESULT ( STDMETHODCALLTYPE *Bookmark )(
            ISpRecoContext * This,
                       SPBOOKMARKOPTIONS Options,
                       ULONGLONG ullStreamPosition,
                       LPARAM lparamEvent);
        HRESULT ( STDMETHODCALLTYPE *SetAdaptationData )(
            ISpRecoContext * This,
                               LPCWSTR pAdaptationData,
                       const ULONG cch);
        HRESULT ( STDMETHODCALLTYPE *Pause )(
            ISpRecoContext * This,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *Resume )(
            ISpRecoContext * This,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SetVoice )(
            ISpRecoContext * This,
                       ISpVoice *pVoice,
                       BOOL fAllowFormatChanges);
        HRESULT ( STDMETHODCALLTYPE *GetVoice )(
            ISpRecoContext * This,
                        ISpVoice **ppVoice);
        HRESULT ( STDMETHODCALLTYPE *SetVoicePurgeEvent )(
            ISpRecoContext * This,
                       ULONGLONG ullEventInterest);
        HRESULT ( STDMETHODCALLTYPE *GetVoicePurgeEvent )(
            ISpRecoContext * This,
                        ULONGLONG *pullEventInterest);
        HRESULT ( STDMETHODCALLTYPE *SetContextState )(
            ISpRecoContext * This,
                       SPCONTEXTSTATE eContextState);
        HRESULT ( STDMETHODCALLTYPE *GetContextState )(
            ISpRecoContext * This,
                        SPCONTEXTSTATE *peContextState);
        END_INTERFACE
    } ISpRecoContextVtbl;
    interface ISpRecoContext
    {
        CONST_VTBL struct ISpRecoContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetNotifySink(This,pNotifySink) )
    ( (This)->lpVtbl -> SetNotifyWindowMessage(This,hWnd,Msg,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackFunction(This,pfnCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyCallbackInterface(This,pSpCallback,wParam,lParam) )
    ( (This)->lpVtbl -> SetNotifyWin32Event(This) )
    ( (This)->lpVtbl -> WaitForNotifyEvent(This,dwMilliseconds) )
    ( (This)->lpVtbl -> GetNotifyEventHandle(This) )
    ( (This)->lpVtbl -> SetInterest(This,ullEventInterest,ullQueuedInterest) )
    ( (This)->lpVtbl -> GetEvents(This,ulCount,pEventArray,pulFetched) )
    ( (This)->lpVtbl -> GetInfo(This,pInfo) )
    ( (This)->lpVtbl -> GetRecognizer(This,ppRecognizer) )
    ( (This)->lpVtbl -> CreateGrammar(This,ullGrammarId,ppGrammar) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetMaxAlternates(This,pcAlternates) )
    ( (This)->lpVtbl -> SetMaxAlternates(This,cAlternates) )
    ( (This)->lpVtbl -> SetAudioOptions(This,Options,pAudioFormatId,pWaveFormatEx) )
    ( (This)->lpVtbl -> GetAudioOptions(This,pOptions,pAudioFormatId,ppCoMemWFEX) )
    ( (This)->lpVtbl -> DeserializeResult(This,pSerializedResult,ppResult) )
    ( (This)->lpVtbl -> Bookmark(This,Options,ullStreamPosition,lparamEvent) )
    ( (This)->lpVtbl -> SetAdaptationData(This,pAdaptationData,cch) )
    ( (This)->lpVtbl -> Pause(This,dwReserved) )
    ( (This)->lpVtbl -> Resume(This,dwReserved) )
    ( (This)->lpVtbl -> SetVoice(This,pVoice,fAllowFormatChanges) )
    ( (This)->lpVtbl -> GetVoice(This,ppVoice) )
    ( (This)->lpVtbl -> SetVoicePurgeEvent(This,ullEventInterest) )
    ( (This)->lpVtbl -> GetVoicePurgeEvent(This,pullEventInterest) )
    ( (This)->lpVtbl -> SetContextState(This,eContextState) )
    ( (This)->lpVtbl -> GetContextState(This,peContextState) )
EXTERN_C const IID IID_ISpProperties;
    typedef struct ISpPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpProperties * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpProperties * This);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyNum )(
            ISpProperties * This,
                       LPCWSTR pName,
                       LONG lValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNum )(
            ISpProperties * This,
                       LPCWSTR pName,
                        LONG *plValue);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyString )(
            ISpProperties * This,
                       LPCWSTR pName,
                       LPCWSTR pValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyString )(
            ISpProperties * This,
                       LPCWSTR pName,
            _Outptr_ LPWSTR *ppCoMemValue);
        END_INTERFACE
    } ISpPropertiesVtbl;
    interface ISpProperties
    {
        CONST_VTBL struct ISpPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPropertyNum(This,pName,lValue) )
    ( (This)->lpVtbl -> GetPropertyNum(This,pName,plValue) )
    ( (This)->lpVtbl -> SetPropertyString(This,pName,pValue) )
    ( (This)->lpVtbl -> GetPropertyString(This,pName,ppCoMemValue) )
typedef struct SPRECOGNIZERSTATUS
    {
    SPAUDIOSTATUS AudioStatus;
    ULONGLONG ullRecognitionStreamPos;
    ULONG ulStreamNumber;
    ULONG ulNumActive;
    CLSID clsidEngine;
    ULONG cLangIDs;
    WORD aLangID[ 20 ];
    ULONGLONG ullRecognitionStreamTime;
    } SPRECOGNIZERSTATUS;
typedef
enum SPWAVEFORMATTYPE
    {
        SPWF_INPUT = 0,
        SPWF_SRENGINE = ( SPWF_INPUT + 1 )
    } SPSTREAMFORMATTYPE;
typedef
enum SPRECOSTATE
    {
        SPRST_INACTIVE = 0,
        SPRST_ACTIVE = ( SPRST_INACTIVE + 1 ) ,
        SPRST_ACTIVE_ALWAYS = ( SPRST_ACTIVE + 1 ) ,
        SPRST_INACTIVE_WITH_PURGE = ( SPRST_ACTIVE_ALWAYS + 1 ) ,
        SPRST_NUM_STATES = ( SPRST_INACTIVE_WITH_PURGE + 1 )
    } SPRECOSTATE;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpRecognizer;
    typedef struct ISpRecognizerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISpRecognizer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISpRecognizer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISpRecognizer * This);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyNum )(
            ISpRecognizer * This,
                       LPCWSTR pName,
                       LONG lValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyNum )(
            ISpRecognizer * This,
                       LPCWSTR pName,
                        LONG *plValue);
        HRESULT ( STDMETHODCALLTYPE *SetPropertyString )(
            ISpRecognizer * This,
                       LPCWSTR pName,
                       LPCWSTR pValue);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyString )(
            ISpRecognizer * This,
                       LPCWSTR pName,
            _Outptr_ LPWSTR *ppCoMemValue);
        HRESULT ( STDMETHODCALLTYPE *SetRecognizer )(
            ISpRecognizer * This,
                       ISpObjectToken *pRecognizer);
        HRESULT ( STDMETHODCALLTYPE *GetRecognizer )(
            ISpRecognizer * This,
                        ISpObjectToken **ppRecognizer);
        HRESULT ( STDMETHODCALLTYPE *SetInput )(
            ISpRecognizer * This,
            _In_opt_ IUnknown *pUnkInput,
                       BOOL fAllowFormatChanges);
        HRESULT ( STDMETHODCALLTYPE *GetInputObjectToken )(
            ISpRecognizer * This,
            _Outptr_ ISpObjectToken **ppToken);
        HRESULT ( STDMETHODCALLTYPE *GetInputStream )(
            ISpRecognizer * This,
            _Outptr_ ISpStreamFormat **ppStream);
        HRESULT ( STDMETHODCALLTYPE *CreateRecoContext )(
            ISpRecognizer * This,
            _Outptr_ ISpRecoContext **ppNewCtxt);
        HRESULT ( STDMETHODCALLTYPE *GetRecoProfile )(
            ISpRecognizer * This,
            _Outptr_ ISpObjectToken **ppToken);
        HRESULT ( STDMETHODCALLTYPE *SetRecoProfile )(
            ISpRecognizer * This,
                       ISpObjectToken *pToken);
        HRESULT ( STDMETHODCALLTYPE *IsSharedInstance )(
            ISpRecognizer * This);
        HRESULT ( STDMETHODCALLTYPE *GetRecoState )(
            ISpRecognizer * This,
                        SPRECOSTATE *pState);
        HRESULT ( STDMETHODCALLTYPE *SetRecoState )(
            ISpRecognizer * This,
                       SPRECOSTATE NewState);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            ISpRecognizer * This,
                        SPRECOGNIZERSTATUS *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            ISpRecognizer * This,
                       SPSTREAMFORMATTYPE WaveFormatType,
                        GUID *pFormatId,
            _Outptr_ WAVEFORMATEX **ppCoMemWFEX);
                      HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            ISpRecognizer * This,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData,
                        BOOL *pfSupported);
                      HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            ISpRecognizer * This,
                       HWND hwndParent,
            _In_opt_ LPCWSTR pszTitle,
                       LPCWSTR pszTypeOfUI,
                       void *pvExtraData,
                       ULONG cbExtraData);
        HRESULT ( STDMETHODCALLTYPE *EmulateRecognition )(
            ISpRecognizer * This,
                       ISpPhrase *pPhrase);
        END_INTERFACE
    } ISpRecognizerVtbl;
    interface ISpRecognizer
    {
        CONST_VTBL struct ISpRecognizerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetPropertyNum(This,pName,lValue) )
    ( (This)->lpVtbl -> GetPropertyNum(This,pName,plValue) )
    ( (This)->lpVtbl -> SetPropertyString(This,pName,pValue) )
    ( (This)->lpVtbl -> GetPropertyString(This,pName,ppCoMemValue) )
    ( (This)->lpVtbl -> SetRecognizer(This,pRecognizer) )
    ( (This)->lpVtbl -> GetRecognizer(This,ppRecognizer) )
    ( (This)->lpVtbl -> SetInput(This,pUnkInput,fAllowFormatChanges) )
    ( (This)->lpVtbl -> GetInputObjectToken(This,ppToken) )
    ( (This)->lpVtbl -> GetInputStream(This,ppStream) )
    ( (This)->lpVtbl -> CreateRecoContext(This,ppNewCtxt) )
    ( (This)->lpVtbl -> GetRecoProfile(This,ppToken) )
    ( (This)->lpVtbl -> SetRecoProfile(This,pToken) )
    ( (This)->lpVtbl -> IsSharedInstance(This) )
    ( (This)->lpVtbl -> GetRecoState(This,pState) )
    ( (This)->lpVtbl -> SetRecoState(This,NewState) )
    ( (This)->lpVtbl -> GetStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetFormat(This,WaveFormatType,pFormatId,ppCoMemWFEX) )
    ( (This)->lpVtbl -> IsUISupported(This,pszTypeOfUI,pvExtraData,cbExtraData,pfSupported) )
    ( (This)->lpVtbl -> DisplayUI(This,hwndParent,pszTitle,pszTypeOfUI,pvExtraData,cbExtraData) )
    ( (This)->lpVtbl -> EmulateRecognition(This,pPhrase) )
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef long SpeechLanguageId;
typedef
enum DISPID_SpeechDataKey
    {
        DISPID_SDKSetBinaryValue = 1,
        DISPID_SDKGetBinaryValue = ( DISPID_SDKSetBinaryValue + 1 ) ,
        DISPID_SDKSetStringValue = ( DISPID_SDKGetBinaryValue + 1 ) ,
        DISPID_SDKGetStringValue = ( DISPID_SDKSetStringValue + 1 ) ,
        DISPID_SDKSetLongValue = ( DISPID_SDKGetStringValue + 1 ) ,
        DISPID_SDKGetlongValue = ( DISPID_SDKSetLongValue + 1 ) ,
        DISPID_SDKOpenKey = ( DISPID_SDKGetlongValue + 1 ) ,
        DISPID_SDKCreateKey = ( DISPID_SDKOpenKey + 1 ) ,
        DISPID_SDKDeleteKey = ( DISPID_SDKCreateKey + 1 ) ,
        DISPID_SDKDeleteValue = ( DISPID_SDKDeleteKey + 1 ) ,
        DISPID_SDKEnumKeys = ( DISPID_SDKDeleteValue + 1 ) ,
        DISPID_SDKEnumValues = ( DISPID_SDKEnumKeys + 1 )
    } DISPID_SpeechDataKey;
typedef
enum DISPID_SpeechObjectToken
    {
        DISPID_SOTId = 1,
        DISPID_SOTDataKey = ( DISPID_SOTId + 1 ) ,
        DISPID_SOTCategory = ( DISPID_SOTDataKey + 1 ) ,
        DISPID_SOTGetDescription = ( DISPID_SOTCategory + 1 ) ,
        DISPID_SOTSetId = ( DISPID_SOTGetDescription + 1 ) ,
        DISPID_SOTGetAttribute = ( DISPID_SOTSetId + 1 ) ,
        DISPID_SOTCreateInstance = ( DISPID_SOTGetAttribute + 1 ) ,
        DISPID_SOTRemove = ( DISPID_SOTCreateInstance + 1 ) ,
        DISPID_SOTGetStorageFileName = ( DISPID_SOTRemove + 1 ) ,
        DISPID_SOTRemoveStorageFileName = ( DISPID_SOTGetStorageFileName + 1 ) ,
        DISPID_SOTIsUISupported = ( DISPID_SOTRemoveStorageFileName + 1 ) ,
        DISPID_SOTDisplayUI = ( DISPID_SOTIsUISupported + 1 ) ,
        DISPID_SOTMatchesAttributes = ( DISPID_SOTDisplayUI + 1 )
    } DISPID_SpeechObjectToken;
typedef
enum SpeechDataKeyLocation
    {
        SDKLDefaultLocation = SPDKL_DefaultLocation,
        SDKLCurrentUser = SPDKL_CurrentUser,
        SDKLLocalMachine = SPDKL_LocalMachine,
        SDKLCurrentConfig = SPDKL_CurrentConfig
    } SpeechDataKeyLocation;
typedef
enum SpeechTokenContext
    {
        STCInprocServer = CLSCTX_INPROC_SERVER,
        STCInprocHandler = CLSCTX_INPROC_HANDLER,
        STCLocalServer = CLSCTX_LOCAL_SERVER,
        STCRemoteServer = CLSCTX_REMOTE_SERVER,
        STCAll = ( ( ( CLSCTX_INPROC_SERVER | CLSCTX_INPROC_HANDLER ) | CLSCTX_LOCAL_SERVER ) | CLSCTX_REMOTE_SERVER )
    } SpeechTokenContext;
typedef
enum SpeechTokenShellFolder
    {
        STSF_AppData = 0x1a,
        STSF_LocalAppData = 0x1c,
        STSF_CommonAppData = 0x23,
        STSF_FlagCreate = 0x8000
    } SpeechTokenShellFolder;
typedef
enum DISPID_SpeechObjectTokens
    {
        DISPID_SOTsCount = 1,
        DISPID_SOTsItem = DISPID_VALUE,
        DISPID_SOTs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechObjectTokens;
typedef
enum DISPID_SpeechObjectTokenCategory
    {
        DISPID_SOTCId = 1,
        DISPID_SOTCDefault = ( DISPID_SOTCId + 1 ) ,
        DISPID_SOTCSetId = ( DISPID_SOTCDefault + 1 ) ,
        DISPID_SOTCGetDataKey = ( DISPID_SOTCSetId + 1 ) ,
        DISPID_SOTCEnumerateTokens = ( DISPID_SOTCGetDataKey + 1 )
    } DISPID_SpeechObjectTokenCategory;
typedef
enum SpeechAudioFormatType
    {
        SAFTDefault = -1,
        SAFTNoAssignedFormat = 0,
        SAFTText = ( SAFTNoAssignedFormat + 1 ) ,
        SAFTNonStandardFormat = ( SAFTText + 1 ) ,
        SAFTExtendedAudioFormat = ( SAFTNonStandardFormat + 1 ) ,
        SAFT8kHz8BitMono = ( SAFTExtendedAudioFormat + 1 ) ,
        SAFT8kHz8BitStereo = ( SAFT8kHz8BitMono + 1 ) ,
        SAFT8kHz16BitMono = ( SAFT8kHz8BitStereo + 1 ) ,
        SAFT8kHz16BitStereo = ( SAFT8kHz16BitMono + 1 ) ,
        SAFT11kHz8BitMono = ( SAFT8kHz16BitStereo + 1 ) ,
        SAFT11kHz8BitStereo = ( SAFT11kHz8BitMono + 1 ) ,
        SAFT11kHz16BitMono = ( SAFT11kHz8BitStereo + 1 ) ,
        SAFT11kHz16BitStereo = ( SAFT11kHz16BitMono + 1 ) ,
        SAFT12kHz8BitMono = ( SAFT11kHz16BitStereo + 1 ) ,
        SAFT12kHz8BitStereo = ( SAFT12kHz8BitMono + 1 ) ,
        SAFT12kHz16BitMono = ( SAFT12kHz8BitStereo + 1 ) ,
        SAFT12kHz16BitStereo = ( SAFT12kHz16BitMono + 1 ) ,
        SAFT16kHz8BitMono = ( SAFT12kHz16BitStereo + 1 ) ,
        SAFT16kHz8BitStereo = ( SAFT16kHz8BitMono + 1 ) ,
        SAFT16kHz16BitMono = ( SAFT16kHz8BitStereo + 1 ) ,
        SAFT16kHz16BitStereo = ( SAFT16kHz16BitMono + 1 ) ,
        SAFT22kHz8BitMono = ( SAFT16kHz16BitStereo + 1 ) ,
        SAFT22kHz8BitStereo = ( SAFT22kHz8BitMono + 1 ) ,
        SAFT22kHz16BitMono = ( SAFT22kHz8BitStereo + 1 ) ,
        SAFT22kHz16BitStereo = ( SAFT22kHz16BitMono + 1 ) ,
        SAFT24kHz8BitMono = ( SAFT22kHz16BitStereo + 1 ) ,
        SAFT24kHz8BitStereo = ( SAFT24kHz8BitMono + 1 ) ,
        SAFT24kHz16BitMono = ( SAFT24kHz8BitStereo + 1 ) ,
        SAFT24kHz16BitStereo = ( SAFT24kHz16BitMono + 1 ) ,
        SAFT32kHz8BitMono = ( SAFT24kHz16BitStereo + 1 ) ,
        SAFT32kHz8BitStereo = ( SAFT32kHz8BitMono + 1 ) ,
        SAFT32kHz16BitMono = ( SAFT32kHz8BitStereo + 1 ) ,
        SAFT32kHz16BitStereo = ( SAFT32kHz16BitMono + 1 ) ,
        SAFT44kHz8BitMono = ( SAFT32kHz16BitStereo + 1 ) ,
        SAFT44kHz8BitStereo = ( SAFT44kHz8BitMono + 1 ) ,
        SAFT44kHz16BitMono = ( SAFT44kHz8BitStereo + 1 ) ,
        SAFT44kHz16BitStereo = ( SAFT44kHz16BitMono + 1 ) ,
        SAFT48kHz8BitMono = ( SAFT44kHz16BitStereo + 1 ) ,
        SAFT48kHz8BitStereo = ( SAFT48kHz8BitMono + 1 ) ,
        SAFT48kHz16BitMono = ( SAFT48kHz8BitStereo + 1 ) ,
        SAFT48kHz16BitStereo = ( SAFT48kHz16BitMono + 1 ) ,
        SAFTTrueSpeech_8kHz1BitMono = ( SAFT48kHz16BitStereo + 1 ) ,
        SAFTCCITT_ALaw_8kHzMono = ( SAFTTrueSpeech_8kHz1BitMono + 1 ) ,
        SAFTCCITT_ALaw_8kHzStereo = ( SAFTCCITT_ALaw_8kHzMono + 1 ) ,
        SAFTCCITT_ALaw_11kHzMono = ( SAFTCCITT_ALaw_8kHzStereo + 1 ) ,
        SAFTCCITT_ALaw_11kHzStereo = ( SAFTCCITT_ALaw_11kHzMono + 1 ) ,
        SAFTCCITT_ALaw_22kHzMono = ( SAFTCCITT_ALaw_11kHzStereo + 1 ) ,
        SAFTCCITT_ALaw_22kHzStereo = ( SAFTCCITT_ALaw_22kHzMono + 1 ) ,
        SAFTCCITT_ALaw_44kHzMono = ( SAFTCCITT_ALaw_22kHzStereo + 1 ) ,
        SAFTCCITT_ALaw_44kHzStereo = ( SAFTCCITT_ALaw_44kHzMono + 1 ) ,
        SAFTCCITT_uLaw_8kHzMono = ( SAFTCCITT_ALaw_44kHzStereo + 1 ) ,
        SAFTCCITT_uLaw_8kHzStereo = ( SAFTCCITT_uLaw_8kHzMono + 1 ) ,
        SAFTCCITT_uLaw_11kHzMono = ( SAFTCCITT_uLaw_8kHzStereo + 1 ) ,
        SAFTCCITT_uLaw_11kHzStereo = ( SAFTCCITT_uLaw_11kHzMono + 1 ) ,
        SAFTCCITT_uLaw_22kHzMono = ( SAFTCCITT_uLaw_11kHzStereo + 1 ) ,
        SAFTCCITT_uLaw_22kHzStereo = ( SAFTCCITT_uLaw_22kHzMono + 1 ) ,
        SAFTCCITT_uLaw_44kHzMono = ( SAFTCCITT_uLaw_22kHzStereo + 1 ) ,
        SAFTCCITT_uLaw_44kHzStereo = ( SAFTCCITT_uLaw_44kHzMono + 1 ) ,
        SAFTADPCM_8kHzMono = ( SAFTCCITT_uLaw_44kHzStereo + 1 ) ,
        SAFTADPCM_8kHzStereo = ( SAFTADPCM_8kHzMono + 1 ) ,
        SAFTADPCM_11kHzMono = ( SAFTADPCM_8kHzStereo + 1 ) ,
        SAFTADPCM_11kHzStereo = ( SAFTADPCM_11kHzMono + 1 ) ,
        SAFTADPCM_22kHzMono = ( SAFTADPCM_11kHzStereo + 1 ) ,
        SAFTADPCM_22kHzStereo = ( SAFTADPCM_22kHzMono + 1 ) ,
        SAFTADPCM_44kHzMono = ( SAFTADPCM_22kHzStereo + 1 ) ,
        SAFTADPCM_44kHzStereo = ( SAFTADPCM_44kHzMono + 1 ) ,
        SAFTGSM610_8kHzMono = ( SAFTADPCM_44kHzStereo + 1 ) ,
        SAFTGSM610_11kHzMono = ( SAFTGSM610_8kHzMono + 1 ) ,
        SAFTGSM610_22kHzMono = ( SAFTGSM610_11kHzMono + 1 ) ,
        SAFTGSM610_44kHzMono = ( SAFTGSM610_22kHzMono + 1 )
    } SpeechAudioFormatType;
typedef
enum DISPID_SpeechAudioFormat
    {
        DISPID_SAFType = 1,
        DISPID_SAFGuid = ( DISPID_SAFType + 1 ) ,
        DISPID_SAFGetWaveFormatEx = ( DISPID_SAFGuid + 1 ) ,
        DISPID_SAFSetWaveFormatEx = ( DISPID_SAFGetWaveFormatEx + 1 )
    } DISPID_SpeechAudioFormat;
typedef
enum DISPID_SpeechBaseStream
    {
        DISPID_SBSFormat = 1,
        DISPID_SBSRead = ( DISPID_SBSFormat + 1 ) ,
        DISPID_SBSWrite = ( DISPID_SBSRead + 1 ) ,
        DISPID_SBSSeek = ( DISPID_SBSWrite + 1 )
    } DISPID_SpeechBaseStream;
typedef
enum SpeechStreamSeekPositionType
    {
        SSSPTRelativeToStart = STREAM_SEEK_SET,
        SSSPTRelativeToCurrentPosition = STREAM_SEEK_CUR,
        SSSPTRelativeToEnd = STREAM_SEEK_END
    } SpeechStreamSeekPositionType;
typedef
enum DISPID_SpeechAudio
    {
        DISPID_SAStatus = 200,
        DISPID_SABufferInfo = ( DISPID_SAStatus + 1 ) ,
        DISPID_SADefaultFormat = ( DISPID_SABufferInfo + 1 ) ,
        DISPID_SAVolume = ( DISPID_SADefaultFormat + 1 ) ,
        DISPID_SABufferNotifySize = ( DISPID_SAVolume + 1 ) ,
        DISPID_SAEventHandle = ( DISPID_SABufferNotifySize + 1 ) ,
        DISPID_SASetState = ( DISPID_SAEventHandle + 1 )
    } DISPID_SpeechAudio;
typedef
enum SpeechAudioState
    {
        SASClosed = SPAS_CLOSED,
        SASStop = SPAS_STOP,
        SASPause = SPAS_PAUSE,
        SASRun = SPAS_RUN
    } SpeechAudioState;
typedef
enum DISPID_SpeechMMSysAudio
    {
        DISPID_SMSADeviceId = 300,
        DISPID_SMSALineId = ( DISPID_SMSADeviceId + 1 ) ,
        DISPID_SMSAMMHandle = ( DISPID_SMSALineId + 1 )
    } DISPID_SpeechMMSysAudio;
typedef
enum DISPID_SpeechFileStream
    {
        DISPID_SFSOpen = 100,
        DISPID_SFSClose = ( DISPID_SFSOpen + 1 )
    } DISPID_SpeechFileStream;
typedef
enum SpeechStreamFileMode
    {
        SSFMOpenForRead = SPFM_OPEN_READONLY,
        SSFMOpenReadWrite = SPFM_OPEN_READWRITE,
        SSFMCreate = SPFM_CREATE,
        SSFMCreateForWrite = SPFM_CREATE_ALWAYS
    } SpeechStreamFileMode;
typedef
enum DISPID_SpeechCustomStream
    {
        DISPID_SCSBaseStream = 100
    } DISPID_SpeechCustomStream;
typedef
enum DISPID_SpeechMemoryStream
    {
        DISPID_SMSSetData = 100,
        DISPID_SMSGetData = ( DISPID_SMSSetData + 1 )
    } DISPID_SpeechMemoryStream;
typedef
enum DISPID_SpeechAudioStatus
    {
        DISPID_SASFreeBufferSpace = 1,
        DISPID_SASNonBlockingIO = ( DISPID_SASFreeBufferSpace + 1 ) ,
        DISPID_SASState = ( DISPID_SASNonBlockingIO + 1 ) ,
        DISPID_SASCurrentSeekPosition = ( DISPID_SASState + 1 ) ,
        DISPID_SASCurrentDevicePosition = ( DISPID_SASCurrentSeekPosition + 1 )
    } DISPID_SpeechAudioStatus;
typedef
enum DISPID_SpeechAudioBufferInfo
    {
        DISPID_SABIMinNotification = 1,
        DISPID_SABIBufferSize = ( DISPID_SABIMinNotification + 1 ) ,
        DISPID_SABIEventBias = ( DISPID_SABIBufferSize + 1 )
    } DISPID_SpeechAudioBufferInfo;
typedef
enum DISPID_SpeechWaveFormatEx
    {
        DISPID_SWFEFormatTag = 1,
        DISPID_SWFEChannels = ( DISPID_SWFEFormatTag + 1 ) ,
        DISPID_SWFESamplesPerSec = ( DISPID_SWFEChannels + 1 ) ,
        DISPID_SWFEAvgBytesPerSec = ( DISPID_SWFESamplesPerSec + 1 ) ,
        DISPID_SWFEBlockAlign = ( DISPID_SWFEAvgBytesPerSec + 1 ) ,
        DISPID_SWFEBitsPerSample = ( DISPID_SWFEBlockAlign + 1 ) ,
        DISPID_SWFEExtraData = ( DISPID_SWFEBitsPerSample + 1 )
    } DISPID_SpeechWaveFormatEx;
typedef
enum DISPID_SpeechVoice
    {
        DISPID_SVStatus = 1,
        DISPID_SVVoice = ( DISPID_SVStatus + 1 ) ,
        DISPID_SVAudioOutput = ( DISPID_SVVoice + 1 ) ,
        DISPID_SVAudioOutputStream = ( DISPID_SVAudioOutput + 1 ) ,
        DISPID_SVRate = ( DISPID_SVAudioOutputStream + 1 ) ,
        DISPID_SVVolume = ( DISPID_SVRate + 1 ) ,
        DISPID_SVAllowAudioOuputFormatChangesOnNextSet = ( DISPID_SVVolume + 1 ) ,
        DISPID_SVEventInterests = ( DISPID_SVAllowAudioOuputFormatChangesOnNextSet + 1 ) ,
        DISPID_SVPriority = ( DISPID_SVEventInterests + 1 ) ,
        DISPID_SVAlertBoundary = ( DISPID_SVPriority + 1 ) ,
        DISPID_SVSyncronousSpeakTimeout = ( DISPID_SVAlertBoundary + 1 ) ,
        DISPID_SVSpeak = ( DISPID_SVSyncronousSpeakTimeout + 1 ) ,
        DISPID_SVSpeakStream = ( DISPID_SVSpeak + 1 ) ,
        DISPID_SVPause = ( DISPID_SVSpeakStream + 1 ) ,
        DISPID_SVResume = ( DISPID_SVPause + 1 ) ,
        DISPID_SVSkip = ( DISPID_SVResume + 1 ) ,
        DISPID_SVGetVoices = ( DISPID_SVSkip + 1 ) ,
        DISPID_SVGetAudioOutputs = ( DISPID_SVGetVoices + 1 ) ,
        DISPID_SVWaitUntilDone = ( DISPID_SVGetAudioOutputs + 1 ) ,
        DISPID_SVSpeakCompleteEvent = ( DISPID_SVWaitUntilDone + 1 ) ,
        DISPID_SVIsUISupported = ( DISPID_SVSpeakCompleteEvent + 1 ) ,
        DISPID_SVDisplayUI = ( DISPID_SVIsUISupported + 1 )
    } DISPID_SpeechVoice;
typedef
enum SpeechVoicePriority
    {
        SVPNormal = SPVPRI_NORMAL,
        SVPAlert = SPVPRI_ALERT,
        SVPOver = SPVPRI_OVER
    } SpeechVoicePriority;
typedef
enum SpeechVoiceSpeakFlags
    {
        SVSFDefault = SPF_DEFAULT,
        SVSFlagsAsync = SPF_ASYNC,
        SVSFPurgeBeforeSpeak = SPF_PURGEBEFORESPEAK,
        SVSFIsFilename = SPF_IS_FILENAME,
        SVSFIsXML = SPF_IS_XML,
        SVSFIsNotXML = SPF_IS_NOT_XML,
        SVSFPersistXML = SPF_PERSIST_XML,
        SVSFNLPSpeakPunc = SPF_NLP_SPEAK_PUNC,
        SVSFNLPMask = SPF_NLP_MASK,
        SVSFVoiceMask = SPF_VOICE_MASK,
        SVSFUnusedFlags = SPF_UNUSED_FLAGS
    } SpeechVoiceSpeakFlags;
typedef
enum SpeechVoiceEvents
    {
        SVEStartInputStream = ( 1L << 1 ) ,
        SVEEndInputStream = ( 1L << 2 ) ,
        SVEVoiceChange = ( 1L << 3 ) ,
        SVEBookmark = ( 1L << 4 ) ,
        SVEWordBoundary = ( 1L << 5 ) ,
        SVEPhoneme = ( 1L << 6 ) ,
        SVESentenceBoundary = ( 1L << 7 ) ,
        SVEViseme = ( 1L << 8 ) ,
        SVEAudioLevel = ( 1L << 9 ) ,
        SVEPrivate = ( 1L << 15 ) ,
        SVEAllEvents = 0x83fe
    } SpeechVoiceEvents;
typedef
enum DISPID_SpeechVoiceStatus
    {
        DISPID_SVSCurrentStreamNumber = 1,
        DISPID_SVSLastStreamNumberQueued = ( DISPID_SVSCurrentStreamNumber + 1 ) ,
        DISPID_SVSLastResult = ( DISPID_SVSLastStreamNumberQueued + 1 ) ,
        DISPID_SVSRunningState = ( DISPID_SVSLastResult + 1 ) ,
        DISPID_SVSInputWordPosition = ( DISPID_SVSRunningState + 1 ) ,
        DISPID_SVSInputWordLength = ( DISPID_SVSInputWordPosition + 1 ) ,
        DISPID_SVSInputSentencePosition = ( DISPID_SVSInputWordLength + 1 ) ,
        DISPID_SVSInputSentenceLength = ( DISPID_SVSInputSentencePosition + 1 ) ,
        DISPID_SVSLastBookmark = ( DISPID_SVSInputSentenceLength + 1 ) ,
        DISPID_SVSLastBookmarkId = ( DISPID_SVSLastBookmark + 1 ) ,
        DISPID_SVSPhonemeId = ( DISPID_SVSLastBookmarkId + 1 ) ,
        DISPID_SVSVisemeId = ( DISPID_SVSPhonemeId + 1 )
    } DISPID_SpeechVoiceStatus;
typedef
enum SpeechRunState
    {
        SRSEDone = SPRS_DONE,
        SRSEIsSpeaking = SPRS_IS_SPEAKING
    } SpeechRunState;
typedef
enum SpeechVisemeType
    {
        SVP_0 = 0,
        SVP_1 = ( SVP_0 + 1 ) ,
        SVP_2 = ( SVP_1 + 1 ) ,
        SVP_3 = ( SVP_2 + 1 ) ,
        SVP_4 = ( SVP_3 + 1 ) ,
        SVP_5 = ( SVP_4 + 1 ) ,
        SVP_6 = ( SVP_5 + 1 ) ,
        SVP_7 = ( SVP_6 + 1 ) ,
        SVP_8 = ( SVP_7 + 1 ) ,
        SVP_9 = ( SVP_8 + 1 ) ,
        SVP_10 = ( SVP_9 + 1 ) ,
        SVP_11 = ( SVP_10 + 1 ) ,
        SVP_12 = ( SVP_11 + 1 ) ,
        SVP_13 = ( SVP_12 + 1 ) ,
        SVP_14 = ( SVP_13 + 1 ) ,
        SVP_15 = ( SVP_14 + 1 ) ,
        SVP_16 = ( SVP_15 + 1 ) ,
        SVP_17 = ( SVP_16 + 1 ) ,
        SVP_18 = ( SVP_17 + 1 ) ,
        SVP_19 = ( SVP_18 + 1 ) ,
        SVP_20 = ( SVP_19 + 1 ) ,
        SVP_21 = ( SVP_20 + 1 )
    } SpeechVisemeType;
typedef
enum SpeechVisemeFeature
    {
        SVF_None = 0,
        SVF_Stressed = SPVFEATURE_STRESSED,
        SVF_Emphasis = SPVFEATURE_EMPHASIS
    } SpeechVisemeFeature;
typedef
enum DISPID_SpeechVoiceEvent
    {
        DISPID_SVEStreamStart = 1,
        DISPID_SVEStreamEnd = ( DISPID_SVEStreamStart + 1 ) ,
        DISPID_SVEVoiceChange = ( DISPID_SVEStreamEnd + 1 ) ,
        DISPID_SVEBookmark = ( DISPID_SVEVoiceChange + 1 ) ,
        DISPID_SVEWord = ( DISPID_SVEBookmark + 1 ) ,
        DISPID_SVEPhoneme = ( DISPID_SVEWord + 1 ) ,
        DISPID_SVESentenceBoundary = ( DISPID_SVEPhoneme + 1 ) ,
        DISPID_SVEViseme = ( DISPID_SVESentenceBoundary + 1 ) ,
        DISPID_SVEAudioLevel = ( DISPID_SVEViseme + 1 ) ,
        DISPID_SVEEnginePrivate = ( DISPID_SVEAudioLevel + 1 )
    } DISPID_SpeechVoiceEvent;
typedef
enum DISPID_SpeechRecognizer
    {
        DISPID_SRRecognizer = 1,
        DISPID_SRAllowAudioInputFormatChangesOnNextSet = ( DISPID_SRRecognizer + 1 ) ,
        DISPID_SRAudioInput = ( DISPID_SRAllowAudioInputFormatChangesOnNextSet + 1 ) ,
        DISPID_SRAudioInputStream = ( DISPID_SRAudioInput + 1 ) ,
        DISPID_SRIsShared = ( DISPID_SRAudioInputStream + 1 ) ,
        DISPID_SRState = ( DISPID_SRIsShared + 1 ) ,
        DISPID_SRStatus = ( DISPID_SRState + 1 ) ,
        DISPID_SRProfile = ( DISPID_SRStatus + 1 ) ,
        DISPID_SREmulateRecognition = ( DISPID_SRProfile + 1 ) ,
        DISPID_SRCreateRecoContext = ( DISPID_SREmulateRecognition + 1 ) ,
        DISPID_SRGetFormat = ( DISPID_SRCreateRecoContext + 1 ) ,
        DISPID_SRSetPropertyNumber = ( DISPID_SRGetFormat + 1 ) ,
        DISPID_SRGetPropertyNumber = ( DISPID_SRSetPropertyNumber + 1 ) ,
        DISPID_SRSetPropertyString = ( DISPID_SRGetPropertyNumber + 1 ) ,
        DISPID_SRGetPropertyString = ( DISPID_SRSetPropertyString + 1 ) ,
        DISPID_SRIsUISupported = ( DISPID_SRGetPropertyString + 1 ) ,
        DISPID_SRDisplayUI = ( DISPID_SRIsUISupported + 1 ) ,
        DISPID_SRGetRecognizers = ( DISPID_SRDisplayUI + 1 ) ,
        DISPID_SVGetAudioInputs = ( DISPID_SRGetRecognizers + 1 ) ,
        DISPID_SVGetProfiles = ( DISPID_SVGetAudioInputs + 1 )
    } DISPID_SpeechRecognizer;
typedef
enum SpeechRecognizerState
    {
        SRSInactive = SPRST_INACTIVE,
        SRSActive = SPRST_ACTIVE,
        SRSActiveAlways = SPRST_ACTIVE_ALWAYS,
        SRSInactiveWithPurge = SPRST_INACTIVE_WITH_PURGE
    } SpeechRecognizerState;
typedef
enum SpeechDisplayAttributes
    {
        SDA_No_Trailing_Space = 0,
        SDA_One_Trailing_Space = SPAF_ONE_TRAILING_SPACE,
        SDA_Two_Trailing_Spaces = SPAF_TWO_TRAILING_SPACES,
        SDA_Consume_Leading_Spaces = SPAF_CONSUME_LEADING_SPACES
    } SpeechDisplayAttributes;
typedef
enum SpeechFormatType
    {
        SFTInput = SPWF_INPUT,
        SFTSREngine = SPWF_SRENGINE
    } SpeechFormatType;
typedef
enum DISPID_SpeechRecognizerStatus
    {
        DISPID_SRSAudioStatus = 1,
        DISPID_SRSCurrentStreamPosition = ( DISPID_SRSAudioStatus + 1 ) ,
        DISPID_SRSCurrentStreamNumber = ( DISPID_SRSCurrentStreamPosition + 1 ) ,
        DISPID_SRSNumberOfActiveRules = ( DISPID_SRSCurrentStreamNumber + 1 ) ,
        DISPID_SRSClsidEngine = ( DISPID_SRSNumberOfActiveRules + 1 ) ,
        DISPID_SRSSupportedLanguages = ( DISPID_SRSClsidEngine + 1 )
    } DISPID_SpeechRecognizerStatus;
typedef
enum DISPID_SpeechRecoContext
    {
        DISPID_SRCRecognizer = 1,
        DISPID_SRCAudioInInterferenceStatus = ( DISPID_SRCRecognizer + 1 ) ,
        DISPID_SRCRequestedUIType = ( DISPID_SRCAudioInInterferenceStatus + 1 ) ,
        DISPID_SRCVoice = ( DISPID_SRCRequestedUIType + 1 ) ,
        DISPID_SRAllowVoiceFormatMatchingOnNextSet = ( DISPID_SRCVoice + 1 ) ,
        DISPID_SRCVoicePurgeEvent = ( DISPID_SRAllowVoiceFormatMatchingOnNextSet + 1 ) ,
        DISPID_SRCEventInterests = ( DISPID_SRCVoicePurgeEvent + 1 ) ,
        DISPID_SRCCmdMaxAlternates = ( DISPID_SRCEventInterests + 1 ) ,
        DISPID_SRCState = ( DISPID_SRCCmdMaxAlternates + 1 ) ,
        DISPID_SRCRetainedAudio = ( DISPID_SRCState + 1 ) ,
        DISPID_SRCRetainedAudioFormat = ( DISPID_SRCRetainedAudio + 1 ) ,
        DISPID_SRCPause = ( DISPID_SRCRetainedAudioFormat + 1 ) ,
        DISPID_SRCResume = ( DISPID_SRCPause + 1 ) ,
        DISPID_SRCCreateGrammar = ( DISPID_SRCResume + 1 ) ,
        DISPID_SRCCreateResultFromMemory = ( DISPID_SRCCreateGrammar + 1 ) ,
        DISPID_SRCBookmark = ( DISPID_SRCCreateResultFromMemory + 1 ) ,
        DISPID_SRCSetAdaptationData = ( DISPID_SRCBookmark + 1 )
    } DISPID_SpeechRecoContext;
typedef
enum SpeechRetainedAudioOptions
    {
        SRAONone = SPAO_NONE,
        SRAORetainAudio = SPAO_RETAIN_AUDIO
    } SpeechRetainedAudioOptions;
typedef
enum SpeechBookmarkOptions
    {
        SBONone = SPBO_NONE,
        SBOPause = SPBO_PAUSE
    } SpeechBookmarkOptions;
typedef
enum SpeechInterference
    {
        SINone = SPINTERFERENCE_NONE,
        SINoise = SPINTERFERENCE_NOISE,
        SINoSignal = SPINTERFERENCE_NOSIGNAL,
        SITooLoud = SPINTERFERENCE_TOOLOUD,
        SITooQuiet = SPINTERFERENCE_TOOQUIET,
        SITooFast = SPINTERFERENCE_TOOFAST,
        SITooSlow = SPINTERFERENCE_TOOSLOW
    } SpeechInterference;
typedef
enum SpeechRecoEvents
    {
        SREStreamEnd = ( 1L << 0 ) ,
        SRESoundStart = ( 1L << 1 ) ,
        SRESoundEnd = ( 1L << 2 ) ,
        SREPhraseStart = ( 1L << 3 ) ,
        SRERecognition = ( 1L << 4 ) ,
        SREHypothesis = ( 1L << 5 ) ,
        SREBookmark = ( 1L << 6 ) ,
        SREPropertyNumChange = ( 1L << 7 ) ,
        SREPropertyStringChange = ( 1L << 8 ) ,
        SREFalseRecognition = ( 1L << 9 ) ,
        SREInterference = ( 1L << 10 ) ,
        SRERequestUI = ( 1L << 11 ) ,
        SREStateChange = ( 1L << 12 ) ,
        SREAdaptation = ( 1L << 13 ) ,
        SREStreamStart = ( 1L << 14 ) ,
        SRERecoOtherContext = ( 1L << 15 ) ,
        SREAudioLevel = ( 1L << 16 ) ,
        SREPrivate = ( 1L << 18 ) ,
        SREAllEvents = 0x5ffff
    } SpeechRecoEvents;
typedef
enum SpeechRecoContextState
    {
        SRCS_Disabled = SPCS_DISABLED,
        SRCS_Enabled = SPCS_ENABLED
    } SpeechRecoContextState;
typedef
enum DISPIDSPRG
    {
        DISPID_SRGId = 1,
        DISPID_SRGRecoContext = ( DISPID_SRGId + 1 ) ,
        DISPID_SRGState = ( DISPID_SRGRecoContext + 1 ) ,
        DISPID_SRGRules = ( DISPID_SRGState + 1 ) ,
        DISPID_SRGReset = ( DISPID_SRGRules + 1 ) ,
        DISPID_SRGCommit = ( DISPID_SRGReset + 1 ) ,
        DISPID_SRGCmdLoadFromFile = ( DISPID_SRGCommit + 1 ) ,
        DISPID_SRGCmdLoadFromObject = ( DISPID_SRGCmdLoadFromFile + 1 ) ,
        DISPID_SRGCmdLoadFromResource = ( DISPID_SRGCmdLoadFromObject + 1 ) ,
        DISPID_SRGCmdLoadFromMemory = ( DISPID_SRGCmdLoadFromResource + 1 ) ,
        DISPID_SRGCmdLoadFromProprietaryGrammar = ( DISPID_SRGCmdLoadFromMemory + 1 ) ,
        DISPID_SRGCmdSetRuleState = ( DISPID_SRGCmdLoadFromProprietaryGrammar + 1 ) ,
        DISPID_SRGCmdSetRuleIdState = ( DISPID_SRGCmdSetRuleState + 1 ) ,
        DISPID_SRGDictationLoad = ( DISPID_SRGCmdSetRuleIdState + 1 ) ,
        DISPID_SRGDictationUnload = ( DISPID_SRGDictationLoad + 1 ) ,
        DISPID_SRGDictationSetState = ( DISPID_SRGDictationUnload + 1 ) ,
        DISPID_SRGSetWordSequenceData = ( DISPID_SRGDictationSetState + 1 ) ,
        DISPID_SRGSetTextSelection = ( DISPID_SRGSetWordSequenceData + 1 ) ,
        DISPID_SRGIsPronounceable = ( DISPID_SRGSetTextSelection + 1 )
    } DISPIDSPRG;
typedef
enum SpeechLoadOption
    {
        SLOStatic = SPLO_STATIC,
        SLODynamic = SPLO_DYNAMIC
    } SpeechLoadOption;
typedef
enum SpeechWordPronounceable
    {
        SWPUnknownWordUnpronounceable = SPWP_UNKNOWN_WORD_UNPRONOUNCEABLE,
        SWPUnknownWordPronounceable = SPWP_UNKNOWN_WORD_PRONOUNCEABLE,
        SWPKnownWordPronounceable = SPWP_KNOWN_WORD_PRONOUNCEABLE
    } SpeechWordPronounceable;
typedef
enum SpeechGrammarState
    {
        SGSEnabled = SPGS_ENABLED,
        SGSDisabled = SPGS_DISABLED,
        SGSExclusive = SPGS_EXCLUSIVE
    } SpeechGrammarState;
typedef
enum SpeechRuleState
    {
        SGDSInactive = SPRS_INACTIVE,
        SGDSActive = SPRS_ACTIVE,
        SGDSActiveWithAutoPause = SPRS_ACTIVE_WITH_AUTO_PAUSE
    } SpeechRuleState;
typedef
enum SpeechRuleAttributes
    {
        SRATopLevel = SPRAF_TopLevel,
        SRADefaultToActive = SPRAF_Active,
        SRAExport = SPRAF_Export,
        SRAImport = SPRAF_Import,
        SRAInterpreter = SPRAF_Interpreter,
        SRADynamic = SPRAF_Dynamic
    } SpeechRuleAttributes;
typedef
enum SpeechGrammarWordType
    {
        SGDisplay = SPWT_DISPLAY,
        SGLexical = SPWT_LEXICAL,
        SGPronounciation = SPWT_PRONUNCIATION
    } SpeechGrammarWordType;
typedef
enum DISPID_SpeechRecoContextEvents
    {
        DISPID_SRCEStartStream = 1,
        DISPID_SRCEEndStream = ( DISPID_SRCEStartStream + 1 ) ,
        DISPID_SRCEBookmark = ( DISPID_SRCEEndStream + 1 ) ,
        DISPID_SRCESoundStart = ( DISPID_SRCEBookmark + 1 ) ,
        DISPID_SRCESoundEnd = ( DISPID_SRCESoundStart + 1 ) ,
        DISPID_SRCEPhraseStart = ( DISPID_SRCESoundEnd + 1 ) ,
        DISPID_SRCERecognition = ( DISPID_SRCEPhraseStart + 1 ) ,
        DISPID_SRCEHypothesis = ( DISPID_SRCERecognition + 1 ) ,
        DISPID_SRCEPropertyNumberChange = ( DISPID_SRCEHypothesis + 1 ) ,
        DISPID_SRCEPropertyStringChange = ( DISPID_SRCEPropertyNumberChange + 1 ) ,
        DISPID_SRCEFalseRecognition = ( DISPID_SRCEPropertyStringChange + 1 ) ,
        DISPID_SRCEInterference = ( DISPID_SRCEFalseRecognition + 1 ) ,
        DISPID_SRCERequestUI = ( DISPID_SRCEInterference + 1 ) ,
        DISPID_SRCERecognizerStateChange = ( DISPID_SRCERequestUI + 1 ) ,
        DISPID_SRCEAdaptation = ( DISPID_SRCERecognizerStateChange + 1 ) ,
        DISPID_SRCERecognitionForOtherContext = ( DISPID_SRCEAdaptation + 1 ) ,
        DISPID_SRCEAudioLevel = ( DISPID_SRCERecognitionForOtherContext + 1 ) ,
        DISPID_SRCEEnginePrivate = ( DISPID_SRCEAudioLevel + 1 )
    } DISPID_SpeechRecoContextEvents;
typedef
enum SpeechRecognitionType
    {
        SRTStandard = 0,
        SRTAutopause = SPREF_AutoPause,
        SRTEmulated = SPREF_Emulated
    } SpeechRecognitionType;
typedef
enum DISPID_SpeechGrammarRule
    {
        DISPID_SGRAttributes = 1,
        DISPID_SGRInitialState = ( DISPID_SGRAttributes + 1 ) ,
        DISPID_SGRName = ( DISPID_SGRInitialState + 1 ) ,
        DISPID_SGRId = ( DISPID_SGRName + 1 ) ,
        DISPID_SGRClear = ( DISPID_SGRId + 1 ) ,
        DISPID_SGRAddResource = ( DISPID_SGRClear + 1 ) ,
        DISPID_SGRAddState = ( DISPID_SGRAddResource + 1 )
    } DISPID_SpeechGrammarRule;
typedef
enum DISPID_SpeechGrammarRules
    {
        DISPID_SGRsCount = 1,
        DISPID_SGRsDynamic = ( DISPID_SGRsCount + 1 ) ,
        DISPID_SGRsAdd = ( DISPID_SGRsDynamic + 1 ) ,
        DISPID_SGRsCommit = ( DISPID_SGRsAdd + 1 ) ,
        DISPID_SGRsCommitAndSave = ( DISPID_SGRsCommit + 1 ) ,
        DISPID_SGRsFindRule = ( DISPID_SGRsCommitAndSave + 1 ) ,
        DISPID_SGRsItem = DISPID_VALUE,
        DISPID_SGRs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechGrammarRules;
typedef
enum DISPID_SpeechGrammarRuleState
    {
        DISPID_SGRSRule = 1,
        DISPID_SGRSTransitions = ( DISPID_SGRSRule + 1 ) ,
        DISPID_SGRSAddWordTransition = ( DISPID_SGRSTransitions + 1 ) ,
        DISPID_SGRSAddRuleTransition = ( DISPID_SGRSAddWordTransition + 1 ) ,
        DISPID_SGRSAddSpecialTransition = ( DISPID_SGRSAddRuleTransition + 1 )
    } DISPID_SpeechGrammarRuleState;
typedef
enum SpeechSpecialTransitionType
    {
        SSTTWildcard = 1,
        SSTTDictation = ( SSTTWildcard + 1 ) ,
        SSTTTextBuffer = ( SSTTDictation + 1 )
    } SpeechSpecialTransitionType;
typedef
enum DISPID_SpeechGrammarRuleStateTransitions
    {
        DISPID_SGRSTsCount = 1,
        DISPID_SGRSTsItem = DISPID_VALUE,
        DISPID_SGRSTs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechGrammarRuleStateTransitions;
typedef
enum DISPID_SpeechGrammarRuleStateTransition
    {
        DISPID_SGRSTType = 1,
        DISPID_SGRSTText = ( DISPID_SGRSTType + 1 ) ,
        DISPID_SGRSTRule = ( DISPID_SGRSTText + 1 ) ,
        DISPID_SGRSTWeight = ( DISPID_SGRSTRule + 1 ) ,
        DISPID_SGRSTPropertyName = ( DISPID_SGRSTWeight + 1 ) ,
        DISPID_SGRSTPropertyId = ( DISPID_SGRSTPropertyName + 1 ) ,
        DISPID_SGRSTPropertyValue = ( DISPID_SGRSTPropertyId + 1 ) ,
        DISPID_SGRSTNextState = ( DISPID_SGRSTPropertyValue + 1 )
    } DISPID_SpeechGrammarRuleStateTransition;
typedef
enum SpeechGrammarRuleStateTransitionType
    {
        SGRSTTEpsilon = 0,
        SGRSTTWord = ( SGRSTTEpsilon + 1 ) ,
        SGRSTTRule = ( SGRSTTWord + 1 ) ,
        SGRSTTDictation = ( SGRSTTRule + 1 ) ,
        SGRSTTWildcard = ( SGRSTTDictation + 1 ) ,
        SGRSTTTextBuffer = ( SGRSTTWildcard + 1 )
    } SpeechGrammarRuleStateTransitionType;
typedef
enum DISPIDSPTSI
    {
        DISPIDSPTSI_ActiveOffset = 1,
        DISPIDSPTSI_ActiveLength = ( DISPIDSPTSI_ActiveOffset + 1 ) ,
        DISPIDSPTSI_SelectionOffset = ( DISPIDSPTSI_ActiveLength + 1 ) ,
        DISPIDSPTSI_SelectionLength = ( DISPIDSPTSI_SelectionOffset + 1 )
    } DISPIDSPTSI;
typedef
enum DISPID_SpeechRecoResult
    {
        DISPID_SRRRecoContext = 1,
        DISPID_SRRTimes = ( DISPID_SRRRecoContext + 1 ) ,
        DISPID_SRRAudioFormat = ( DISPID_SRRTimes + 1 ) ,
        DISPID_SRRPhraseInfo = ( DISPID_SRRAudioFormat + 1 ) ,
        DISPID_SRRAlternates = ( DISPID_SRRPhraseInfo + 1 ) ,
        DISPID_SRRAudio = ( DISPID_SRRAlternates + 1 ) ,
        DISPID_SRRSpeakAudio = ( DISPID_SRRAudio + 1 ) ,
        DISPID_SRRSaveToMemory = ( DISPID_SRRSpeakAudio + 1 ) ,
        DISPID_SRRDiscardResultInfo = ( DISPID_SRRSaveToMemory + 1 )
    } DISPID_SpeechRecoResult;
typedef
enum SpeechDiscardType
    {
        SDTProperty = SPDF_PROPERTY,
        SDTReplacement = SPDF_REPLACEMENT,
        SDTRule = SPDF_RULE,
        SDTDisplayText = SPDF_DISPLAYTEXT,
        SDTLexicalForm = SPDF_LEXICALFORM,
        SDTPronunciation = SPDF_PRONUNCIATION,
        SDTAudio = SPDF_AUDIO,
        SDTAlternates = SPDF_ALTERNATES,
        SDTAll = SPDF_ALL
    } SpeechDiscardType;
typedef
enum DISPID_SpeechPhraseBuilder
    {
        DISPID_SPPBRestorePhraseFromMemory = 1
    } DISPID_SpeechPhraseBuilder;
typedef
enum DISPID_SpeechRecoResultTimes
    {
        DISPID_SRRTStreamTime = 1,
        DISPID_SRRTLength = ( DISPID_SRRTStreamTime + 1 ) ,
        DISPID_SRRTTickCount = ( DISPID_SRRTLength + 1 ) ,
        DISPID_SRRTOffsetFromStart = ( DISPID_SRRTTickCount + 1 )
    } DISPID_SpeechRecoResultTimes;
typedef
enum DISPID_SpeechPhraseAlternate
    {
        DISPID_SPARecoResult = 1,
        DISPID_SPAStartElementInResult = ( DISPID_SPARecoResult + 1 ) ,
        DISPID_SPANumberOfElementsInResult = ( DISPID_SPAStartElementInResult + 1 ) ,
        DISPID_SPAPhraseInfo = ( DISPID_SPANumberOfElementsInResult + 1 ) ,
        DISPID_SPACommit = ( DISPID_SPAPhraseInfo + 1 )
    } DISPID_SpeechPhraseAlternate;
typedef
enum DISPID_SpeechPhraseAlternates
    {
        DISPID_SPAsCount = 1,
        DISPID_SPAsItem = DISPID_VALUE,
        DISPID_SPAs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechPhraseAlternates;
typedef
enum DISPID_SpeechPhraseInfo
    {
        DISPID_SPILanguageId = 1,
        DISPID_SPIGrammarId = ( DISPID_SPILanguageId + 1 ) ,
        DISPID_SPIStartTime = ( DISPID_SPIGrammarId + 1 ) ,
        DISPID_SPIAudioStreamPosition = ( DISPID_SPIStartTime + 1 ) ,
        DISPID_SPIAudioSizeBytes = ( DISPID_SPIAudioStreamPosition + 1 ) ,
        DISPID_SPIRetainedSizeBytes = ( DISPID_SPIAudioSizeBytes + 1 ) ,
        DISPID_SPIAudioSizeTime = ( DISPID_SPIRetainedSizeBytes + 1 ) ,
        DISPID_SPIRule = ( DISPID_SPIAudioSizeTime + 1 ) ,
        DISPID_SPIProperties = ( DISPID_SPIRule + 1 ) ,
        DISPID_SPIElements = ( DISPID_SPIProperties + 1 ) ,
        DISPID_SPIReplacements = ( DISPID_SPIElements + 1 ) ,
        DISPID_SPIEngineId = ( DISPID_SPIReplacements + 1 ) ,
        DISPID_SPIEnginePrivateData = ( DISPID_SPIEngineId + 1 ) ,
        DISPID_SPISaveToMemory = ( DISPID_SPIEnginePrivateData + 1 ) ,
        DISPID_SPIGetText = ( DISPID_SPISaveToMemory + 1 ) ,
        DISPID_SPIGetDisplayAttributes = ( DISPID_SPIGetText + 1 )
    } DISPID_SpeechPhraseInfo;
typedef
enum DISPID_SpeechPhraseElement
    {
        DISPID_SPEAudioTimeOffset = 1,
        DISPID_SPEAudioSizeTime = ( DISPID_SPEAudioTimeOffset + 1 ) ,
        DISPID_SPEAudioStreamOffset = ( DISPID_SPEAudioSizeTime + 1 ) ,
        DISPID_SPEAudioSizeBytes = ( DISPID_SPEAudioStreamOffset + 1 ) ,
        DISPID_SPERetainedStreamOffset = ( DISPID_SPEAudioSizeBytes + 1 ) ,
        DISPID_SPERetainedSizeBytes = ( DISPID_SPERetainedStreamOffset + 1 ) ,
        DISPID_SPEDisplayText = ( DISPID_SPERetainedSizeBytes + 1 ) ,
        DISPID_SPELexicalForm = ( DISPID_SPEDisplayText + 1 ) ,
        DISPID_SPEPronunciation = ( DISPID_SPELexicalForm + 1 ) ,
        DISPID_SPEDisplayAttributes = ( DISPID_SPEPronunciation + 1 ) ,
        DISPID_SPERequiredConfidence = ( DISPID_SPEDisplayAttributes + 1 ) ,
        DISPID_SPEActualConfidence = ( DISPID_SPERequiredConfidence + 1 ) ,
        DISPID_SPEEngineConfidence = ( DISPID_SPEActualConfidence + 1 )
    } DISPID_SpeechPhraseElement;
typedef
enum SpeechEngineConfidence
    {
        SECLowConfidence = -1,
        SECNormalConfidence = 0,
        SECHighConfidence = 1
    } SpeechEngineConfidence;
typedef
enum DISPID_SpeechPhraseElements
    {
        DISPID_SPEsCount = 1,
        DISPID_SPEsItem = DISPID_VALUE,
        DISPID_SPEs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechPhraseElements;
typedef
enum DISPID_SpeechPhraseReplacement
    {
        DISPID_SPRDisplayAttributes = 1,
        DISPID_SPRText = ( DISPID_SPRDisplayAttributes + 1 ) ,
        DISPID_SPRFirstElement = ( DISPID_SPRText + 1 ) ,
        DISPID_SPRNumberOfElements = ( DISPID_SPRFirstElement + 1 )
    } DISPID_SpeechPhraseReplacement;
typedef
enum DISPID_SpeechPhraseReplacements
    {
        DISPID_SPRsCount = 1,
        DISPID_SPRsItem = DISPID_VALUE,
        DISPID_SPRs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechPhraseReplacements;
typedef
enum DISPID_SpeechPhraseProperty
    {
        DISPID_SPPName = 1,
        DISPID_SPPId = ( DISPID_SPPName + 1 ) ,
        DISPID_SPPValue = ( DISPID_SPPId + 1 ) ,
        DISPID_SPPFirstElement = ( DISPID_SPPValue + 1 ) ,
        DISPID_SPPNumberOfElements = ( DISPID_SPPFirstElement + 1 ) ,
        DISPID_SPPEngineConfidence = ( DISPID_SPPNumberOfElements + 1 ) ,
        DISPID_SPPConfidence = ( DISPID_SPPEngineConfidence + 1 ) ,
        DISPID_SPPParent = ( DISPID_SPPConfidence + 1 ) ,
        DISPID_SPPChildren = ( DISPID_SPPParent + 1 )
    } DISPID_SpeechPhraseProperty;
typedef
enum DISPID_SpeechPhraseProperties
    {
        DISPID_SPPsCount = 1,
        DISPID_SPPsItem = DISPID_VALUE,
        DISPID_SPPs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechPhraseProperties;
typedef
enum DISPID_SpeechPhraseRule
    {
        DISPID_SPRuleName = 1,
        DISPID_SPRuleId = ( DISPID_SPRuleName + 1 ) ,
        DISPID_SPRuleFirstElement = ( DISPID_SPRuleId + 1 ) ,
        DISPID_SPRuleNumberOfElements = ( DISPID_SPRuleFirstElement + 1 ) ,
        DISPID_SPRuleParent = ( DISPID_SPRuleNumberOfElements + 1 ) ,
        DISPID_SPRuleChildren = ( DISPID_SPRuleParent + 1 ) ,
        DISPID_SPRuleConfidence = ( DISPID_SPRuleChildren + 1 ) ,
        DISPID_SPRuleEngineConfidence = ( DISPID_SPRuleConfidence + 1 )
    } DISPID_SpeechPhraseRule;
typedef
enum DISPID_SpeechPhraseRules
    {
        DISPID_SPRulesCount = 1,
        DISPID_SPRulesItem = DISPID_VALUE,
        DISPID_SPRules_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechPhraseRules;
typedef
enum DISPID_SpeechLexicon
    {
        DISPID_SLGenerationId = 1,
        DISPID_SLGetWords = ( DISPID_SLGenerationId + 1 ) ,
        DISPID_SLAddPronunciation = ( DISPID_SLGetWords + 1 ) ,
        DISPID_SLAddPronunciationByPhoneIds = ( DISPID_SLAddPronunciation + 1 ) ,
        DISPID_SLRemovePronunciation = ( DISPID_SLAddPronunciationByPhoneIds + 1 ) ,
        DISPID_SLRemovePronunciationByPhoneIds = ( DISPID_SLRemovePronunciation + 1 ) ,
        DISPID_SLGetPronunciations = ( DISPID_SLRemovePronunciationByPhoneIds + 1 ) ,
        DISPID_SLGetGenerationChange = ( DISPID_SLGetPronunciations + 1 )
    } DISPID_SpeechLexicon;
typedef
enum SpeechLexiconType
    {
        SLTUser = eLEXTYPE_USER,
        SLTApp = eLEXTYPE_APP
    } SpeechLexiconType;
typedef
enum SpeechPartOfSpeech
    {
        SPSNotOverriden = SPPS_NotOverriden,
        SPSUnknown = SPPS_Unknown,
        SPSNoun = SPPS_Noun,
        SPSVerb = SPPS_Verb,
        SPSModifier = SPPS_Modifier,
        SPSFunction = SPPS_Function,
        SPSInterjection = SPPS_Interjection
    } SpeechPartOfSpeech;
typedef
enum DISPID_SpeechLexiconWords
    {
        DISPID_SLWsCount = 1,
        DISPID_SLWsItem = DISPID_VALUE,
        DISPID_SLWs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechLexiconWords;
typedef
enum SpeechWordType
    {
        SWTAdded = eWORDTYPE_ADDED,
        SWTDeleted = eWORDTYPE_DELETED
    } SpeechWordType;
typedef
enum DISPID_SpeechLexiconWord
    {
        DISPID_SLWLangId = 1,
        DISPID_SLWType = ( DISPID_SLWLangId + 1 ) ,
        DISPID_SLWWord = ( DISPID_SLWType + 1 ) ,
        DISPID_SLWPronunciations = ( DISPID_SLWWord + 1 )
    } DISPID_SpeechLexiconWord;
typedef
enum DISPID_SpeechLexiconProns
    {
        DISPID_SLPsCount = 1,
        DISPID_SLPsItem = DISPID_VALUE,
        DISPID_SLPs_NewEnum = DISPID_NEWENUM
    } DISPID_SpeechLexiconProns;
typedef
enum DISPID_SpeechLexiconPronunciation
    {
        DISPID_SLPType = 1,
        DISPID_SLPLangId = ( DISPID_SLPType + 1 ) ,
        DISPID_SLPPartOfSpeech = ( DISPID_SLPLangId + 1 ) ,
        DISPID_SLPPhoneIds = ( DISPID_SLPPartOfSpeech + 1 ) ,
        DISPID_SLPSymbolic = ( DISPID_SLPPhoneIds + 1 )
    } DISPID_SpeechLexiconPronunciation;
typedef
enum DISPID_SpeechPhoneConverter
    {
        DISPID_SPCLangId = 1,
        DISPID_SPCPhoneToId = ( DISPID_SPCLangId + 1 ) ,
        DISPID_SPCIdToPhone = ( DISPID_SPCPhoneToId + 1 )
    } DISPID_SpeechPhoneConverter;
#endif
#pragma endregion
EXTERN_C const IID LIBID_SpeechLib;
EXTERN_C const IID IID_ISpeechDataKey;
    typedef struct ISpeechDataKeyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechDataKey * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechDataKey * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechDataKey * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechDataKey * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechDataKey * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *SetBinaryValue )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR ValueName,
                       VARIANT Value);
                               HRESULT ( STDMETHODCALLTYPE *GetBinaryValue )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR ValueName,
                                __RPC__out VARIANT *Value);
                               HRESULT ( STDMETHODCALLTYPE *SetStringValue )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR ValueName,
                       __RPC__in const BSTR Value);
                               HRESULT ( STDMETHODCALLTYPE *GetStringValue )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR ValueName,
                                __RPC__deref_out_opt BSTR *Value);
                               HRESULT ( STDMETHODCALLTYPE *SetLongValue )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR ValueName,
                       long Value);
                               HRESULT ( STDMETHODCALLTYPE *GetLongValue )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR ValueName,
                                __RPC__out long *Value);
                               HRESULT ( STDMETHODCALLTYPE *OpenKey )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR SubKeyName,
                                __RPC__deref_out_opt ISpeechDataKey **SubKey);
                               HRESULT ( STDMETHODCALLTYPE *CreateKey )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR SubKeyName,
                                __RPC__deref_out_opt ISpeechDataKey **SubKey);
                               HRESULT ( STDMETHODCALLTYPE *DeleteKey )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR SubKeyName);
                               HRESULT ( STDMETHODCALLTYPE *DeleteValue )(
            __RPC__in ISpeechDataKey * This,
                       __RPC__in const BSTR ValueName);
                               HRESULT ( STDMETHODCALLTYPE *EnumKeys )(
            __RPC__in ISpeechDataKey * This,
                       long Index,
                                __RPC__deref_out_opt BSTR *SubKeyName);
                               HRESULT ( STDMETHODCALLTYPE *EnumValues )(
            __RPC__in ISpeechDataKey * This,
                       long Index,
                                __RPC__deref_out_opt BSTR *ValueName);
        END_INTERFACE
    } ISpeechDataKeyVtbl;
    interface ISpeechDataKey
    {
        CONST_VTBL struct ISpeechDataKeyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetBinaryValue(This,ValueName,Value) )
    ( (This)->lpVtbl -> GetBinaryValue(This,ValueName,Value) )
    ( (This)->lpVtbl -> SetStringValue(This,ValueName,Value) )
    ( (This)->lpVtbl -> GetStringValue(This,ValueName,Value) )
    ( (This)->lpVtbl -> SetLongValue(This,ValueName,Value) )
    ( (This)->lpVtbl -> GetLongValue(This,ValueName,Value) )
    ( (This)->lpVtbl -> OpenKey(This,SubKeyName,SubKey) )
    ( (This)->lpVtbl -> CreateKey(This,SubKeyName,SubKey) )
    ( (This)->lpVtbl -> DeleteKey(This,SubKeyName) )
    ( (This)->lpVtbl -> DeleteValue(This,ValueName) )
    ( (This)->lpVtbl -> EnumKeys(This,Index,SubKeyName) )
    ( (This)->lpVtbl -> EnumValues(This,Index,ValueName) )
EXTERN_C const IID IID_ISpeechObjectToken;
    typedef struct ISpeechObjectTokenVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechObjectToken * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechObjectToken * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechObjectToken * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechObjectToken * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechObjectToken * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpeechObjectToken * This,
                                __RPC__deref_out_opt BSTR *ObjectId);
                                                HRESULT ( STDMETHODCALLTYPE *get_DataKey )(
            __RPC__in ISpeechObjectToken * This,
                                __RPC__deref_out_opt ISpeechDataKey **DataKey);
                                        HRESULT ( STDMETHODCALLTYPE *get_Category )(
            __RPC__in ISpeechObjectToken * This,
                                __RPC__deref_out_opt ISpeechObjectTokenCategory **Category);
                               HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in ISpeechObjectToken * This,
                                     long Locale,
                                __RPC__deref_out_opt BSTR *Description);
                                       HRESULT ( STDMETHODCALLTYPE *SetId )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in BSTR Id,
                                     __RPC__in BSTR CategoryID,
                                     VARIANT_BOOL CreateIfNotExist);
                               HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in BSTR AttributeName,
                                __RPC__deref_out_opt BSTR *AttributeValue);
                               HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            __RPC__in ISpeechObjectToken * This,
                                     __RPC__in_opt IUnknown *pUnkOuter,
                                     SpeechTokenContext ClsContext,
                                __RPC__deref_out_opt IUnknown **Object);
                                       HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in BSTR ObjectStorageCLSID);
                                       HRESULT ( STDMETHODCALLTYPE *GetStorageFileName )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in BSTR ObjectStorageCLSID,
                       __RPC__in BSTR KeyName,
                       __RPC__in BSTR FileName,
                       SpeechTokenShellFolder Folder,
                                __RPC__deref_out_opt BSTR *FilePath);
                                       HRESULT ( STDMETHODCALLTYPE *RemoveStorageFileName )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in BSTR ObjectStorageCLSID,
                       __RPC__in BSTR KeyName,
                       VARIANT_BOOL DeleteFile);
                                       HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in const BSTR TypeOfUI,
                                     __RPC__in const VARIANT *ExtraData,
                                     __RPC__in_opt IUnknown *Object,
                                __RPC__out VARIANT_BOOL *Supported);
                                       HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            __RPC__in ISpeechObjectToken * This,
                       long hWnd,
                       __RPC__in BSTR Title,
                       __RPC__in const BSTR TypeOfUI,
                                     __RPC__in const VARIANT *ExtraData,
                                     __RPC__in_opt IUnknown *Object);
                               HRESULT ( STDMETHODCALLTYPE *MatchesAttributes )(
            __RPC__in ISpeechObjectToken * This,
                       __RPC__in BSTR Attributes,
                                __RPC__out VARIANT_BOOL *Matches);
        END_INTERFACE
    } ISpeechObjectTokenVtbl;
    interface ISpeechObjectToken
    {
        CONST_VTBL struct ISpeechObjectTokenVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,ObjectId) )
    ( (This)->lpVtbl -> get_DataKey(This,DataKey) )
    ( (This)->lpVtbl -> get_Category(This,Category) )
    ( (This)->lpVtbl -> GetDescription(This,Locale,Description) )
    ( (This)->lpVtbl -> SetId(This,Id,CategoryID,CreateIfNotExist) )
    ( (This)->lpVtbl -> GetAttribute(This,AttributeName,AttributeValue) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,ClsContext,Object) )
    ( (This)->lpVtbl -> Remove(This,ObjectStorageCLSID) )
    ( (This)->lpVtbl -> GetStorageFileName(This,ObjectStorageCLSID,KeyName,FileName,Folder,FilePath) )
    ( (This)->lpVtbl -> RemoveStorageFileName(This,ObjectStorageCLSID,KeyName,DeleteFile) )
    ( (This)->lpVtbl -> IsUISupported(This,TypeOfUI,ExtraData,Object,Supported) )
    ( (This)->lpVtbl -> DisplayUI(This,hWnd,Title,TypeOfUI,ExtraData,Object) )
    ( (This)->lpVtbl -> MatchesAttributes(This,Attributes,Matches) )
EXTERN_C const IID IID_ISpeechObjectTokens;
    typedef struct ISpeechObjectTokensVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechObjectTokens * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechObjectTokens * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechObjectTokens * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechObjectTokens * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechObjectTokens * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechObjectTokens * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechObjectTokens * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechObjectTokens * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechObjectTokens * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechObjectToken **Token);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechObjectTokens * This,
                                __RPC__deref_out_opt IUnknown **ppEnumVARIANT);
        END_INTERFACE
    } ISpeechObjectTokensVtbl;
    interface ISpeechObjectTokens
    {
        CONST_VTBL struct ISpeechObjectTokensVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Token) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppEnumVARIANT) )
EXTERN_C const IID IID_ISpeechObjectTokenCategory;
    typedef struct ISpeechObjectTokenCategoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechObjectTokenCategory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechObjectTokenCategory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechObjectTokenCategory * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechObjectTokenCategory * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechObjectTokenCategory * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechObjectTokenCategory * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechObjectTokenCategory * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpeechObjectTokenCategory * This,
                                __RPC__deref_out_opt BSTR *Id);
                                        HRESULT ( STDMETHODCALLTYPE *put_Default )(
            __RPC__in ISpeechObjectTokenCategory * This,
                       __RPC__in const BSTR TokenId);
                                        HRESULT ( STDMETHODCALLTYPE *get_Default )(
            __RPC__in ISpeechObjectTokenCategory * This,
                                __RPC__deref_out_opt BSTR *TokenId);
                               HRESULT ( STDMETHODCALLTYPE *SetId )(
            __RPC__in ISpeechObjectTokenCategory * This,
                       __RPC__in const BSTR Id,
                                     VARIANT_BOOL CreateIfNotExist);
                                       HRESULT ( STDMETHODCALLTYPE *GetDataKey )(
            __RPC__in ISpeechObjectTokenCategory * This,
                                     SpeechDataKeyLocation Location,
                                __RPC__deref_out_opt ISpeechDataKey **DataKey);
                               HRESULT ( STDMETHODCALLTYPE *EnumerateTokens )(
            __RPC__in ISpeechObjectTokenCategory * This,
                                     __RPC__in BSTR RequiredAttributes,
                                     __RPC__in BSTR OptionalAttributes,
                                __RPC__deref_out_opt ISpeechObjectTokens **Tokens);
        END_INTERFACE
    } ISpeechObjectTokenCategoryVtbl;
    interface ISpeechObjectTokenCategory
    {
        CONST_VTBL struct ISpeechObjectTokenCategoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> put_Default(This,TokenId) )
    ( (This)->lpVtbl -> get_Default(This,TokenId) )
    ( (This)->lpVtbl -> SetId(This,Id,CreateIfNotExist) )
    ( (This)->lpVtbl -> GetDataKey(This,Location,DataKey) )
    ( (This)->lpVtbl -> EnumerateTokens(This,RequiredAttributes,OptionalAttributes,Tokens) )
EXTERN_C const IID IID_ISpeechAudioBufferInfo;
    typedef struct ISpeechAudioBufferInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechAudioBufferInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechAudioBufferInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechAudioBufferInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechAudioBufferInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechAudioBufferInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechAudioBufferInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechAudioBufferInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_MinNotification )(
            __RPC__in ISpeechAudioBufferInfo * This,
                                __RPC__out long *MinNotification);
                                        HRESULT ( STDMETHODCALLTYPE *put_MinNotification )(
            __RPC__in ISpeechAudioBufferInfo * This,
                       long MinNotification);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferSize )(
            __RPC__in ISpeechAudioBufferInfo * This,
                                __RPC__out long *BufferSize);
                                        HRESULT ( STDMETHODCALLTYPE *put_BufferSize )(
            __RPC__in ISpeechAudioBufferInfo * This,
                       long BufferSize);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventBias )(
            __RPC__in ISpeechAudioBufferInfo * This,
                                __RPC__out long *EventBias);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventBias )(
            __RPC__in ISpeechAudioBufferInfo * This,
                       long EventBias);
        END_INTERFACE
    } ISpeechAudioBufferInfoVtbl;
    interface ISpeechAudioBufferInfo
    {
        CONST_VTBL struct ISpeechAudioBufferInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_MinNotification(This,MinNotification) )
    ( (This)->lpVtbl -> put_MinNotification(This,MinNotification) )
    ( (This)->lpVtbl -> get_BufferSize(This,BufferSize) )
    ( (This)->lpVtbl -> put_BufferSize(This,BufferSize) )
    ( (This)->lpVtbl -> get_EventBias(This,EventBias) )
    ( (This)->lpVtbl -> put_EventBias(This,EventBias) )
EXTERN_C const IID IID_ISpeechAudioStatus;
    typedef struct ISpeechAudioStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechAudioStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechAudioStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechAudioStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechAudioStatus * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechAudioStatus * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechAudioStatus * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechAudioStatus * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FreeBufferSpace )(
            __RPC__in ISpeechAudioStatus * This,
                                __RPC__out long *FreeBufferSpace);
                                        HRESULT ( STDMETHODCALLTYPE *get_NonBlockingIO )(
            __RPC__in ISpeechAudioStatus * This,
                                __RPC__out long *NonBlockingIO);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISpeechAudioStatus * This,
                                __RPC__out SpeechAudioState *State);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentSeekPosition )(
            __RPC__in ISpeechAudioStatus * This,
                                __RPC__out VARIANT *CurrentSeekPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentDevicePosition )(
            __RPC__in ISpeechAudioStatus * This,
                                __RPC__out VARIANT *CurrentDevicePosition);
        END_INTERFACE
    } ISpeechAudioStatusVtbl;
    interface ISpeechAudioStatus
    {
        CONST_VTBL struct ISpeechAudioStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_FreeBufferSpace(This,FreeBufferSpace) )
    ( (This)->lpVtbl -> get_NonBlockingIO(This,NonBlockingIO) )
    ( (This)->lpVtbl -> get_State(This,State) )
    ( (This)->lpVtbl -> get_CurrentSeekPosition(This,CurrentSeekPosition) )
    ( (This)->lpVtbl -> get_CurrentDevicePosition(This,CurrentDevicePosition) )
EXTERN_C const IID IID_ISpeechAudioFormat;
    typedef struct ISpeechAudioFormatVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechAudioFormat * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechAudioFormat * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechAudioFormat * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechAudioFormat * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechAudioFormat * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechAudioFormat * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechAudioFormat * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ISpeechAudioFormat * This,
                                __RPC__out SpeechAudioFormatType *AudioFormat);
                                        HRESULT ( STDMETHODCALLTYPE *put_Type )(
            __RPC__in ISpeechAudioFormat * This,
                       SpeechAudioFormatType AudioFormat);
                                                HRESULT ( STDMETHODCALLTYPE *get_Guid )(
            __RPC__in ISpeechAudioFormat * This,
                                __RPC__deref_out_opt BSTR *Guid);
                                                HRESULT ( STDMETHODCALLTYPE *put_Guid )(
            __RPC__in ISpeechAudioFormat * This,
                       __RPC__in BSTR Guid);
                                       HRESULT ( STDMETHODCALLTYPE *GetWaveFormatEx )(
            __RPC__in ISpeechAudioFormat * This,
                                __RPC__deref_out_opt ISpeechWaveFormatEx **SpeechWaveFormatEx);
                                       HRESULT ( STDMETHODCALLTYPE *SetWaveFormatEx )(
            __RPC__in ISpeechAudioFormat * This,
                       __RPC__in_opt ISpeechWaveFormatEx *SpeechWaveFormatEx);
        END_INTERFACE
    } ISpeechAudioFormatVtbl;
    interface ISpeechAudioFormat
    {
        CONST_VTBL struct ISpeechAudioFormatVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,AudioFormat) )
    ( (This)->lpVtbl -> put_Type(This,AudioFormat) )
    ( (This)->lpVtbl -> get_Guid(This,Guid) )
    ( (This)->lpVtbl -> put_Guid(This,Guid) )
    ( (This)->lpVtbl -> GetWaveFormatEx(This,SpeechWaveFormatEx) )
    ( (This)->lpVtbl -> SetWaveFormatEx(This,SpeechWaveFormatEx) )
EXTERN_C const IID IID_ISpeechWaveFormatEx;
    typedef struct ISpeechWaveFormatExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechWaveFormatEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechWaveFormatEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechWaveFormatEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechWaveFormatEx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechWaveFormatEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechWaveFormatEx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechWaveFormatEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_FormatTag )(
            __RPC__in ISpeechWaveFormatEx * This,
                                __RPC__out short *FormatTag);
                                        HRESULT ( STDMETHODCALLTYPE *put_FormatTag )(
            __RPC__in ISpeechWaveFormatEx * This,
                       short FormatTag);
                                        HRESULT ( STDMETHODCALLTYPE *get_Channels )(
            __RPC__in ISpeechWaveFormatEx * This,
                                __RPC__out short *Channels);
                                        HRESULT ( STDMETHODCALLTYPE *put_Channels )(
            __RPC__in ISpeechWaveFormatEx * This,
                       short Channels);
                                        HRESULT ( STDMETHODCALLTYPE *get_SamplesPerSec )(
            __RPC__in ISpeechWaveFormatEx * This,
                                __RPC__out long *SamplesPerSec);
                                        HRESULT ( STDMETHODCALLTYPE *put_SamplesPerSec )(
            __RPC__in ISpeechWaveFormatEx * This,
                       long SamplesPerSec);
                                        HRESULT ( STDMETHODCALLTYPE *get_AvgBytesPerSec )(
            __RPC__in ISpeechWaveFormatEx * This,
                                __RPC__out long *AvgBytesPerSec);
                                        HRESULT ( STDMETHODCALLTYPE *put_AvgBytesPerSec )(
            __RPC__in ISpeechWaveFormatEx * This,
                       long AvgBytesPerSec);
                                        HRESULT ( STDMETHODCALLTYPE *get_BlockAlign )(
            __RPC__in ISpeechWaveFormatEx * This,
                                __RPC__out short *BlockAlign);
                                        HRESULT ( STDMETHODCALLTYPE *put_BlockAlign )(
            __RPC__in ISpeechWaveFormatEx * This,
                       short BlockAlign);
                                        HRESULT ( STDMETHODCALLTYPE *get_BitsPerSample )(
            __RPC__in ISpeechWaveFormatEx * This,
                                __RPC__out short *BitsPerSample);
                                        HRESULT ( STDMETHODCALLTYPE *put_BitsPerSample )(
            __RPC__in ISpeechWaveFormatEx * This,
                       short BitsPerSample);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExtraData )(
            __RPC__in ISpeechWaveFormatEx * This,
                                __RPC__out VARIANT *ExtraData);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExtraData )(
            __RPC__in ISpeechWaveFormatEx * This,
                       VARIANT ExtraData);
        END_INTERFACE
    } ISpeechWaveFormatExVtbl;
    interface ISpeechWaveFormatEx
    {
        CONST_VTBL struct ISpeechWaveFormatExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_FormatTag(This,FormatTag) )
    ( (This)->lpVtbl -> put_FormatTag(This,FormatTag) )
    ( (This)->lpVtbl -> get_Channels(This,Channels) )
    ( (This)->lpVtbl -> put_Channels(This,Channels) )
    ( (This)->lpVtbl -> get_SamplesPerSec(This,SamplesPerSec) )
    ( (This)->lpVtbl -> put_SamplesPerSec(This,SamplesPerSec) )
    ( (This)->lpVtbl -> get_AvgBytesPerSec(This,AvgBytesPerSec) )
    ( (This)->lpVtbl -> put_AvgBytesPerSec(This,AvgBytesPerSec) )
    ( (This)->lpVtbl -> get_BlockAlign(This,BlockAlign) )
    ( (This)->lpVtbl -> put_BlockAlign(This,BlockAlign) )
    ( (This)->lpVtbl -> get_BitsPerSample(This,BitsPerSample) )
    ( (This)->lpVtbl -> put_BitsPerSample(This,BitsPerSample) )
    ( (This)->lpVtbl -> get_ExtraData(This,ExtraData) )
    ( (This)->lpVtbl -> put_ExtraData(This,ExtraData) )
EXTERN_C const IID IID_ISpeechBaseStream;
    typedef struct ISpeechBaseStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechBaseStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechBaseStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechBaseStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechBaseStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechBaseStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechBaseStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechBaseStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISpeechBaseStream * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **AudioFormat);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Format )(
            __RPC__in ISpeechBaseStream * This,
                       __RPC__in_opt ISpeechAudioFormat *AudioFormat);
                               HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in ISpeechBaseStream * This,
                        __RPC__out VARIANT *Buffer,
                       long NumberOfBytes,
                                __RPC__out long *BytesRead);
                               HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ISpeechBaseStream * This,
                       VARIANT Buffer,
                                __RPC__out long *BytesWritten);
                               HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in ISpeechBaseStream * This,
                       VARIANT Position,
                                     SpeechStreamSeekPositionType Origin,
                                __RPC__out VARIANT *NewPosition);
        END_INTERFACE
    } ISpeechBaseStreamVtbl;
    interface ISpeechBaseStream
    {
        CONST_VTBL struct ISpeechBaseStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> putref_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> Read(This,Buffer,NumberOfBytes,BytesRead) )
    ( (This)->lpVtbl -> Write(This,Buffer,BytesWritten) )
    ( (This)->lpVtbl -> Seek(This,Position,Origin,NewPosition) )
EXTERN_C const IID IID_ISpeechFileStream;
    typedef struct ISpeechFileStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechFileStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechFileStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechFileStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechFileStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechFileStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechFileStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechFileStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISpeechFileStream * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **AudioFormat);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Format )(
            __RPC__in ISpeechFileStream * This,
                       __RPC__in_opt ISpeechAudioFormat *AudioFormat);
                               HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in ISpeechFileStream * This,
                        __RPC__out VARIANT *Buffer,
                       long NumberOfBytes,
                                __RPC__out long *BytesRead);
                               HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ISpeechFileStream * This,
                       VARIANT Buffer,
                                __RPC__out long *BytesWritten);
                               HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in ISpeechFileStream * This,
                       VARIANT Position,
                                     SpeechStreamSeekPositionType Origin,
                                __RPC__out VARIANT *NewPosition);
                               HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in ISpeechFileStream * This,
                       __RPC__in BSTR FileName,
                                     SpeechStreamFileMode FileMode,
                                     VARIANT_BOOL DoEvents);
                               HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in ISpeechFileStream * This);
        END_INTERFACE
    } ISpeechFileStreamVtbl;
    interface ISpeechFileStream
    {
        CONST_VTBL struct ISpeechFileStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> putref_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> Read(This,Buffer,NumberOfBytes,BytesRead) )
    ( (This)->lpVtbl -> Write(This,Buffer,BytesWritten) )
    ( (This)->lpVtbl -> Seek(This,Position,Origin,NewPosition) )
    ( (This)->lpVtbl -> Open(This,FileName,FileMode,DoEvents) )
    ( (This)->lpVtbl -> Close(This) )
EXTERN_C const IID IID_ISpeechMemoryStream;
    typedef struct ISpeechMemoryStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechMemoryStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechMemoryStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechMemoryStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechMemoryStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechMemoryStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechMemoryStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechMemoryStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISpeechMemoryStream * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **AudioFormat);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Format )(
            __RPC__in ISpeechMemoryStream * This,
                       __RPC__in_opt ISpeechAudioFormat *AudioFormat);
                               HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in ISpeechMemoryStream * This,
                        __RPC__out VARIANT *Buffer,
                       long NumberOfBytes,
                                __RPC__out long *BytesRead);
                               HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ISpeechMemoryStream * This,
                       VARIANT Buffer,
                                __RPC__out long *BytesWritten);
                               HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in ISpeechMemoryStream * This,
                       VARIANT Position,
                                     SpeechStreamSeekPositionType Origin,
                                __RPC__out VARIANT *NewPosition);
                               HRESULT ( STDMETHODCALLTYPE *SetData )(
            __RPC__in ISpeechMemoryStream * This,
                       VARIANT Data);
                               HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in ISpeechMemoryStream * This,
                                __RPC__out VARIANT *pData);
        END_INTERFACE
    } ISpeechMemoryStreamVtbl;
    interface ISpeechMemoryStream
    {
        CONST_VTBL struct ISpeechMemoryStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> putref_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> Read(This,Buffer,NumberOfBytes,BytesRead) )
    ( (This)->lpVtbl -> Write(This,Buffer,BytesWritten) )
    ( (This)->lpVtbl -> Seek(This,Position,Origin,NewPosition) )
    ( (This)->lpVtbl -> SetData(This,Data) )
    ( (This)->lpVtbl -> GetData(This,pData) )
EXTERN_C const IID IID_ISpeechCustomStream;
    typedef struct ISpeechCustomStreamVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechCustomStream * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechCustomStream * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechCustomStream * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechCustomStream * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechCustomStream * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechCustomStream * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechCustomStream * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISpeechCustomStream * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **AudioFormat);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Format )(
            __RPC__in ISpeechCustomStream * This,
                       __RPC__in_opt ISpeechAudioFormat *AudioFormat);
                               HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in ISpeechCustomStream * This,
                        __RPC__out VARIANT *Buffer,
                       long NumberOfBytes,
                                __RPC__out long *BytesRead);
                               HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ISpeechCustomStream * This,
                       VARIANT Buffer,
                                __RPC__out long *BytesWritten);
                               HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in ISpeechCustomStream * This,
                       VARIANT Position,
                                     SpeechStreamSeekPositionType Origin,
                                __RPC__out VARIANT *NewPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_BaseStream )(
            __RPC__in ISpeechCustomStream * This,
                                __RPC__deref_out_opt IUnknown **ppUnkStream);
                                           HRESULT ( STDMETHODCALLTYPE *putref_BaseStream )(
            __RPC__in ISpeechCustomStream * This,
                       __RPC__in_opt IUnknown *pUnkStream);
        END_INTERFACE
    } ISpeechCustomStreamVtbl;
    interface ISpeechCustomStream
    {
        CONST_VTBL struct ISpeechCustomStreamVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> putref_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> Read(This,Buffer,NumberOfBytes,BytesRead) )
    ( (This)->lpVtbl -> Write(This,Buffer,BytesWritten) )
    ( (This)->lpVtbl -> Seek(This,Position,Origin,NewPosition) )
    ( (This)->lpVtbl -> get_BaseStream(This,ppUnkStream) )
    ( (This)->lpVtbl -> putref_BaseStream(This,pUnkStream) )
EXTERN_C const IID IID_ISpeechAudio;
    typedef struct ISpeechAudioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechAudio * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechAudio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechAudio * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechAudio * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechAudio * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechAudio * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechAudio * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISpeechAudio * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **AudioFormat);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Format )(
            __RPC__in ISpeechAudio * This,
                       __RPC__in_opt ISpeechAudioFormat *AudioFormat);
                               HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in ISpeechAudio * This,
                        __RPC__out VARIANT *Buffer,
                       long NumberOfBytes,
                                __RPC__out long *BytesRead);
                               HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ISpeechAudio * This,
                       VARIANT Buffer,
                                __RPC__out long *BytesWritten);
                               HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in ISpeechAudio * This,
                       VARIANT Position,
                                     SpeechStreamSeekPositionType Origin,
                                __RPC__out VARIANT *NewPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ISpeechAudio * This,
                                __RPC__deref_out_opt ISpeechAudioStatus **Status);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferInfo )(
            __RPC__in ISpeechAudio * This,
                                __RPC__deref_out_opt ISpeechAudioBufferInfo **BufferInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultFormat )(
            __RPC__in ISpeechAudio * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **StreamFormat);
                                        HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in ISpeechAudio * This,
                                __RPC__out long *Volume);
                                        HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in ISpeechAudio * This,
                       long Volume);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferNotifySize )(
            __RPC__in ISpeechAudio * This,
                                __RPC__out long *BufferNotifySize);
                                        HRESULT ( STDMETHODCALLTYPE *put_BufferNotifySize )(
            __RPC__in ISpeechAudio * This,
                       long BufferNotifySize);
                                                HRESULT ( STDMETHODCALLTYPE *get_EventHandle )(
            __RPC__in ISpeechAudio * This,
                                __RPC__out long *EventHandle);
                                       HRESULT ( STDMETHODCALLTYPE *SetState )(
            __RPC__in ISpeechAudio * This,
                       SpeechAudioState State);
        END_INTERFACE
    } ISpeechAudioVtbl;
    interface ISpeechAudio
    {
        CONST_VTBL struct ISpeechAudioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> putref_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> Read(This,Buffer,NumberOfBytes,BytesRead) )
    ( (This)->lpVtbl -> Write(This,Buffer,BytesWritten) )
    ( (This)->lpVtbl -> Seek(This,Position,Origin,NewPosition) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> get_BufferInfo(This,BufferInfo) )
    ( (This)->lpVtbl -> get_DefaultFormat(This,StreamFormat) )
    ( (This)->lpVtbl -> get_Volume(This,Volume) )
    ( (This)->lpVtbl -> put_Volume(This,Volume) )
    ( (This)->lpVtbl -> get_BufferNotifySize(This,BufferNotifySize) )
    ( (This)->lpVtbl -> put_BufferNotifySize(This,BufferNotifySize) )
    ( (This)->lpVtbl -> get_EventHandle(This,EventHandle) )
    ( (This)->lpVtbl -> SetState(This,State) )
EXTERN_C const IID IID_ISpeechMMSysAudio;
    typedef struct ISpeechMMSysAudioVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechMMSysAudio * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechMMSysAudio * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechMMSysAudio * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechMMSysAudio * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechMMSysAudio * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechMMSysAudio * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechMMSysAudio * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Format )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **AudioFormat);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Format )(
            __RPC__in ISpeechMMSysAudio * This,
                       __RPC__in_opt ISpeechAudioFormat *AudioFormat);
                               HRESULT ( STDMETHODCALLTYPE *Read )(
            __RPC__in ISpeechMMSysAudio * This,
                        __RPC__out VARIANT *Buffer,
                       long NumberOfBytes,
                                __RPC__out long *BytesRead);
                               HRESULT ( STDMETHODCALLTYPE *Write )(
            __RPC__in ISpeechMMSysAudio * This,
                       VARIANT Buffer,
                                __RPC__out long *BytesWritten);
                               HRESULT ( STDMETHODCALLTYPE *Seek )(
            __RPC__in ISpeechMMSysAudio * This,
                       VARIANT Position,
                                     SpeechStreamSeekPositionType Origin,
                                __RPC__out VARIANT *NewPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__deref_out_opt ISpeechAudioStatus **Status);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferInfo )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__deref_out_opt ISpeechAudioBufferInfo **BufferInfo);
                                        HRESULT ( STDMETHODCALLTYPE *get_DefaultFormat )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **StreamFormat);
                                        HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__out long *Volume);
                                        HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in ISpeechMMSysAudio * This,
                       long Volume);
                                        HRESULT ( STDMETHODCALLTYPE *get_BufferNotifySize )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__out long *BufferNotifySize);
                                        HRESULT ( STDMETHODCALLTYPE *put_BufferNotifySize )(
            __RPC__in ISpeechMMSysAudio * This,
                       long BufferNotifySize);
                                                HRESULT ( STDMETHODCALLTYPE *get_EventHandle )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__out long *EventHandle);
                                       HRESULT ( STDMETHODCALLTYPE *SetState )(
            __RPC__in ISpeechMMSysAudio * This,
                       SpeechAudioState State);
                                        HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__out long *DeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *put_DeviceId )(
            __RPC__in ISpeechMMSysAudio * This,
                       long DeviceId);
                                        HRESULT ( STDMETHODCALLTYPE *get_LineId )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__out long *LineId);
                                        HRESULT ( STDMETHODCALLTYPE *put_LineId )(
            __RPC__in ISpeechMMSysAudio * This,
                       long LineId);
                                                HRESULT ( STDMETHODCALLTYPE *get_MMHandle )(
            __RPC__in ISpeechMMSysAudio * This,
                                __RPC__out long *Handle);
        END_INTERFACE
    } ISpeechMMSysAudioVtbl;
    interface ISpeechMMSysAudio
    {
        CONST_VTBL struct ISpeechMMSysAudioVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> putref_Format(This,AudioFormat) )
    ( (This)->lpVtbl -> Read(This,Buffer,NumberOfBytes,BytesRead) )
    ( (This)->lpVtbl -> Write(This,Buffer,BytesWritten) )
    ( (This)->lpVtbl -> Seek(This,Position,Origin,NewPosition) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> get_BufferInfo(This,BufferInfo) )
    ( (This)->lpVtbl -> get_DefaultFormat(This,StreamFormat) )
    ( (This)->lpVtbl -> get_Volume(This,Volume) )
    ( (This)->lpVtbl -> put_Volume(This,Volume) )
    ( (This)->lpVtbl -> get_BufferNotifySize(This,BufferNotifySize) )
    ( (This)->lpVtbl -> put_BufferNotifySize(This,BufferNotifySize) )
    ( (This)->lpVtbl -> get_EventHandle(This,EventHandle) )
    ( (This)->lpVtbl -> SetState(This,State) )
    ( (This)->lpVtbl -> get_DeviceId(This,DeviceId) )
    ( (This)->lpVtbl -> put_DeviceId(This,DeviceId) )
    ( (This)->lpVtbl -> get_LineId(This,LineId) )
    ( (This)->lpVtbl -> put_LineId(This,LineId) )
    ( (This)->lpVtbl -> get_MMHandle(This,Handle) )
EXTERN_C const IID IID_ISpeechVoice;
    typedef struct ISpeechVoiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechVoice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechVoice * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechVoice * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechVoice * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechVoice * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ISpeechVoice * This,
                                __RPC__deref_out_opt ISpeechVoiceStatus **Status);
                                        HRESULT ( STDMETHODCALLTYPE *get_Voice )(
            __RPC__in ISpeechVoice * This,
                                __RPC__deref_out_opt ISpeechObjectToken **Voice);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Voice )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in_opt ISpeechObjectToken *Voice);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioOutput )(
            __RPC__in ISpeechVoice * This,
                                __RPC__deref_out_opt ISpeechObjectToken **AudioOutput);
                                           HRESULT ( STDMETHODCALLTYPE *putref_AudioOutput )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in_opt ISpeechObjectToken *AudioOutput);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioOutputStream )(
            __RPC__in ISpeechVoice * This,
                                __RPC__deref_out_opt ISpeechBaseStream **AudioOutputStream);
                                           HRESULT ( STDMETHODCALLTYPE *putref_AudioOutputStream )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in_opt ISpeechBaseStream *AudioOutputStream);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rate )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out long *Rate);
                                        HRESULT ( STDMETHODCALLTYPE *put_Rate )(
            __RPC__in ISpeechVoice * This,
                       long Rate);
                                        HRESULT ( STDMETHODCALLTYPE *get_Volume )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out long *Volume);
                                        HRESULT ( STDMETHODCALLTYPE *put_Volume )(
            __RPC__in ISpeechVoice * This,
                       long Volume);
                                                HRESULT ( STDMETHODCALLTYPE *put_AllowAudioOutputFormatChangesOnNextSet )(
            __RPC__in ISpeechVoice * This,
                       VARIANT_BOOL Allow);
                                                HRESULT ( STDMETHODCALLTYPE *get_AllowAudioOutputFormatChangesOnNextSet )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out VARIANT_BOOL *Allow);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventInterests )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out SpeechVoiceEvents *EventInterestFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventInterests )(
            __RPC__in ISpeechVoice * This,
                       SpeechVoiceEvents EventInterestFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_Priority )(
            __RPC__in ISpeechVoice * This,
                       SpeechVoicePriority Priority);
                                        HRESULT ( STDMETHODCALLTYPE *get_Priority )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out SpeechVoicePriority *Priority);
                                        HRESULT ( STDMETHODCALLTYPE *put_AlertBoundary )(
            __RPC__in ISpeechVoice * This,
                       SpeechVoiceEvents Boundary);
                                        HRESULT ( STDMETHODCALLTYPE *get_AlertBoundary )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out SpeechVoiceEvents *Boundary);
                                        HRESULT ( STDMETHODCALLTYPE *put_SynchronousSpeakTimeout )(
            __RPC__in ISpeechVoice * This,
                       long msTimeout);
                                        HRESULT ( STDMETHODCALLTYPE *get_SynchronousSpeakTimeout )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out long *msTimeout);
                               HRESULT ( STDMETHODCALLTYPE *Speak )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in BSTR Text,
                                     SpeechVoiceSpeakFlags Flags,
                                __RPC__out long *StreamNumber);
                               HRESULT ( STDMETHODCALLTYPE *SpeakStream )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in_opt ISpeechBaseStream *Stream,
                                     SpeechVoiceSpeakFlags Flags,
                                __RPC__out long *StreamNumber);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in ISpeechVoice * This);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in ISpeechVoice * This);
                               HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in const BSTR Type,
                       long NumItems,
                                __RPC__out long *NumSkipped);
                               HRESULT ( STDMETHODCALLTYPE *GetVoices )(
            __RPC__in ISpeechVoice * This,
                                     __RPC__in BSTR RequiredAttributes,
                                     __RPC__in BSTR OptionalAttributes,
                                __RPC__deref_out_opt ISpeechObjectTokens **ObjectTokens);
                               HRESULT ( STDMETHODCALLTYPE *GetAudioOutputs )(
            __RPC__in ISpeechVoice * This,
                                     __RPC__in BSTR RequiredAttributes,
                                     __RPC__in BSTR OptionalAttributes,
                                __RPC__deref_out_opt ISpeechObjectTokens **ObjectTokens);
                               HRESULT ( STDMETHODCALLTYPE *WaitUntilDone )(
            __RPC__in ISpeechVoice * This,
                       long msTimeout,
                                __RPC__out VARIANT_BOOL *Done);
                                       HRESULT ( STDMETHODCALLTYPE *SpeakCompleteEvent )(
            __RPC__in ISpeechVoice * This,
                                __RPC__out long *Handle);
                               HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            __RPC__in ISpeechVoice * This,
                       __RPC__in const BSTR TypeOfUI,
                                     __RPC__in const VARIANT *ExtraData,
                                __RPC__out VARIANT_BOOL *Supported);
                               HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            __RPC__in ISpeechVoice * This,
                       long hWndParent,
                       __RPC__in BSTR Title,
                       __RPC__in const BSTR TypeOfUI,
                                     __RPC__in const VARIANT *ExtraData);
        END_INTERFACE
    } ISpeechVoiceVtbl;
    interface ISpeechVoice
    {
        CONST_VTBL struct ISpeechVoiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> get_Voice(This,Voice) )
    ( (This)->lpVtbl -> putref_Voice(This,Voice) )
    ( (This)->lpVtbl -> get_AudioOutput(This,AudioOutput) )
    ( (This)->lpVtbl -> putref_AudioOutput(This,AudioOutput) )
    ( (This)->lpVtbl -> get_AudioOutputStream(This,AudioOutputStream) )
    ( (This)->lpVtbl -> putref_AudioOutputStream(This,AudioOutputStream) )
    ( (This)->lpVtbl -> get_Rate(This,Rate) )
    ( (This)->lpVtbl -> put_Rate(This,Rate) )
    ( (This)->lpVtbl -> get_Volume(This,Volume) )
    ( (This)->lpVtbl -> put_Volume(This,Volume) )
    ( (This)->lpVtbl -> put_AllowAudioOutputFormatChangesOnNextSet(This,Allow) )
    ( (This)->lpVtbl -> get_AllowAudioOutputFormatChangesOnNextSet(This,Allow) )
    ( (This)->lpVtbl -> get_EventInterests(This,EventInterestFlags) )
    ( (This)->lpVtbl -> put_EventInterests(This,EventInterestFlags) )
    ( (This)->lpVtbl -> put_Priority(This,Priority) )
    ( (This)->lpVtbl -> get_Priority(This,Priority) )
    ( (This)->lpVtbl -> put_AlertBoundary(This,Boundary) )
    ( (This)->lpVtbl -> get_AlertBoundary(This,Boundary) )
    ( (This)->lpVtbl -> put_SynchronousSpeakTimeout(This,msTimeout) )
    ( (This)->lpVtbl -> get_SynchronousSpeakTimeout(This,msTimeout) )
    ( (This)->lpVtbl -> Speak(This,Text,Flags,StreamNumber) )
    ( (This)->lpVtbl -> SpeakStream(This,Stream,Flags,StreamNumber) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> Skip(This,Type,NumItems,NumSkipped) )
    ( (This)->lpVtbl -> GetVoices(This,RequiredAttributes,OptionalAttributes,ObjectTokens) )
    ( (This)->lpVtbl -> GetAudioOutputs(This,RequiredAttributes,OptionalAttributes,ObjectTokens) )
    ( (This)->lpVtbl -> WaitUntilDone(This,msTimeout,Done) )
    ( (This)->lpVtbl -> SpeakCompleteEvent(This,Handle) )
    ( (This)->lpVtbl -> IsUISupported(This,TypeOfUI,ExtraData,Supported) )
    ( (This)->lpVtbl -> DisplayUI(This,hWndParent,Title,TypeOfUI,ExtraData) )
EXTERN_C const IID IID_ISpeechVoiceStatus;
    typedef struct ISpeechVoiceStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechVoiceStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechVoiceStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechVoiceStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechVoiceStatus * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechVoiceStatus * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechVoiceStatus * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechVoiceStatus * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentStreamNumber )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *StreamNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastStreamNumberQueued )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *StreamNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastHResult )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *HResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_RunningState )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out SpeechRunState *State);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputWordPosition )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *Position);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputWordLength )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *Length);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputSentencePosition )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *Position);
                                        HRESULT ( STDMETHODCALLTYPE *get_InputSentenceLength )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *Length);
                                        HRESULT ( STDMETHODCALLTYPE *get_LastBookmark )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__deref_out_opt BSTR *Bookmark);
                                                HRESULT ( STDMETHODCALLTYPE *get_LastBookmarkId )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out long *BookmarkId);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhonemeId )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out short *PhoneId);
                                        HRESULT ( STDMETHODCALLTYPE *get_VisemeId )(
            __RPC__in ISpeechVoiceStatus * This,
                                __RPC__out short *VisemeId);
        END_INTERFACE
    } ISpeechVoiceStatusVtbl;
    interface ISpeechVoiceStatus
    {
        CONST_VTBL struct ISpeechVoiceStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CurrentStreamNumber(This,StreamNumber) )
    ( (This)->lpVtbl -> get_LastStreamNumberQueued(This,StreamNumber) )
    ( (This)->lpVtbl -> get_LastHResult(This,HResult) )
    ( (This)->lpVtbl -> get_RunningState(This,State) )
    ( (This)->lpVtbl -> get_InputWordPosition(This,Position) )
    ( (This)->lpVtbl -> get_InputWordLength(This,Length) )
    ( (This)->lpVtbl -> get_InputSentencePosition(This,Position) )
    ( (This)->lpVtbl -> get_InputSentenceLength(This,Length) )
    ( (This)->lpVtbl -> get_LastBookmark(This,Bookmark) )
    ( (This)->lpVtbl -> get_LastBookmarkId(This,BookmarkId) )
    ( (This)->lpVtbl -> get_PhonemeId(This,PhoneId) )
    ( (This)->lpVtbl -> get_VisemeId(This,VisemeId) )
EXTERN_C const IID DIID__ISpeechVoiceEvents;
    typedef struct _ISpeechVoiceEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ISpeechVoiceEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ISpeechVoiceEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ISpeechVoiceEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ISpeechVoiceEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ISpeechVoiceEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ISpeechVoiceEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ISpeechVoiceEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _ISpeechVoiceEventsVtbl;
    interface _ISpeechVoiceEvents
    {
        CONST_VTBL struct _ISpeechVoiceEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_ISpeechRecognizer;
    typedef struct ISpeechRecognizerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechRecognizer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechRecognizer * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechRecognizer * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechRecognizer * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechRecognizer * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Recognizer )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in_opt ISpeechObjectToken *Recognizer);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recognizer )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__deref_out_opt ISpeechObjectToken **Recognizer);
                                                HRESULT ( STDMETHODCALLTYPE *put_AllowAudioInputFormatChangesOnNextSet )(
            __RPC__in ISpeechRecognizer * This,
                       VARIANT_BOOL Allow);
                                                HRESULT ( STDMETHODCALLTYPE *get_AllowAudioInputFormatChangesOnNextSet )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__out VARIANT_BOOL *Allow);
                                           HRESULT ( STDMETHODCALLTYPE *putref_AudioInput )(
            __RPC__in ISpeechRecognizer * This,
                                     __RPC__in_opt ISpeechObjectToken *AudioInput);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioInput )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__deref_out_opt ISpeechObjectToken **AudioInput);
                                           HRESULT ( STDMETHODCALLTYPE *putref_AudioInputStream )(
            __RPC__in ISpeechRecognizer * This,
                                     __RPC__in_opt ISpeechBaseStream *AudioInputStream);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioInputStream )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__deref_out_opt ISpeechBaseStream **AudioInputStream);
                                        HRESULT ( STDMETHODCALLTYPE *get_IsShared )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__out VARIANT_BOOL *Shared);
                                        HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in ISpeechRecognizer * This,
                       SpeechRecognizerState State);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__out SpeechRecognizerState *State);
                                        HRESULT ( STDMETHODCALLTYPE *get_Status )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__deref_out_opt ISpeechRecognizerStatus **Status);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Profile )(
            __RPC__in ISpeechRecognizer * This,
                                     __RPC__in_opt ISpeechObjectToken *Profile);
                                        HRESULT ( STDMETHODCALLTYPE *get_Profile )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__deref_out_opt ISpeechObjectToken **Profile);
                               HRESULT ( STDMETHODCALLTYPE *EmulateRecognition )(
            __RPC__in ISpeechRecognizer * This,
                       VARIANT TextElements,
                                     __RPC__in VARIANT *ElementDisplayAttributes,
                                     long LanguageId);
                               HRESULT ( STDMETHODCALLTYPE *CreateRecoContext )(
            __RPC__in ISpeechRecognizer * This,
                                __RPC__deref_out_opt ISpeechRecoContext **NewContext);
                               HRESULT ( STDMETHODCALLTYPE *GetFormat )(
            __RPC__in ISpeechRecognizer * This,
                       SpeechFormatType Type,
                                __RPC__deref_out_opt ISpeechAudioFormat **Format);
                                       HRESULT ( STDMETHODCALLTYPE *SetPropertyNumber )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in const BSTR Name,
                       long Value,
                                __RPC__out VARIANT_BOOL *Supported);
                                       HRESULT ( STDMETHODCALLTYPE *GetPropertyNumber )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in const BSTR Name,
                            __RPC__inout long *Value,
                                __RPC__out VARIANT_BOOL *Supported);
                                       HRESULT ( STDMETHODCALLTYPE *SetPropertyString )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in const BSTR Name,
                       __RPC__in const BSTR Value,
                                __RPC__out VARIANT_BOOL *Supported);
                                       HRESULT ( STDMETHODCALLTYPE *GetPropertyString )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in const BSTR Name,
                            __RPC__deref_inout_opt BSTR *Value,
                                __RPC__out VARIANT_BOOL *Supported);
                               HRESULT ( STDMETHODCALLTYPE *IsUISupported )(
            __RPC__in ISpeechRecognizer * This,
                       __RPC__in const BSTR TypeOfUI,
                                     __RPC__in const VARIANT *ExtraData,
                                __RPC__out VARIANT_BOOL *Supported);
                               HRESULT ( STDMETHODCALLTYPE *DisplayUI )(
            __RPC__in ISpeechRecognizer * This,
                       long hWndParent,
                       __RPC__in BSTR Title,
                       __RPC__in const BSTR TypeOfUI,
                                     __RPC__in const VARIANT *ExtraData);
                               HRESULT ( STDMETHODCALLTYPE *GetRecognizers )(
            __RPC__in ISpeechRecognizer * This,
                                     __RPC__in BSTR RequiredAttributes,
                                     __RPC__in BSTR OptionalAttributes,
                                __RPC__deref_out_opt ISpeechObjectTokens **ObjectTokens);
                               HRESULT ( STDMETHODCALLTYPE *GetAudioInputs )(
            __RPC__in ISpeechRecognizer * This,
                                     __RPC__in BSTR RequiredAttributes,
                                     __RPC__in BSTR OptionalAttributes,
                                __RPC__deref_out_opt ISpeechObjectTokens **ObjectTokens);
                               HRESULT ( STDMETHODCALLTYPE *GetProfiles )(
            __RPC__in ISpeechRecognizer * This,
                                     __RPC__in BSTR RequiredAttributes,
                                     __RPC__in BSTR OptionalAttributes,
                                __RPC__deref_out_opt ISpeechObjectTokens **ObjectTokens);
        END_INTERFACE
    } ISpeechRecognizerVtbl;
    interface ISpeechRecognizer
    {
        CONST_VTBL struct ISpeechRecognizerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> putref_Recognizer(This,Recognizer) )
    ( (This)->lpVtbl -> get_Recognizer(This,Recognizer) )
    ( (This)->lpVtbl -> put_AllowAudioInputFormatChangesOnNextSet(This,Allow) )
    ( (This)->lpVtbl -> get_AllowAudioInputFormatChangesOnNextSet(This,Allow) )
    ( (This)->lpVtbl -> putref_AudioInput(This,AudioInput) )
    ( (This)->lpVtbl -> get_AudioInput(This,AudioInput) )
    ( (This)->lpVtbl -> putref_AudioInputStream(This,AudioInputStream) )
    ( (This)->lpVtbl -> get_AudioInputStream(This,AudioInputStream) )
    ( (This)->lpVtbl -> get_IsShared(This,Shared) )
    ( (This)->lpVtbl -> put_State(This,State) )
    ( (This)->lpVtbl -> get_State(This,State) )
    ( (This)->lpVtbl -> get_Status(This,Status) )
    ( (This)->lpVtbl -> putref_Profile(This,Profile) )
    ( (This)->lpVtbl -> get_Profile(This,Profile) )
    ( (This)->lpVtbl -> EmulateRecognition(This,TextElements,ElementDisplayAttributes,LanguageId) )
    ( (This)->lpVtbl -> CreateRecoContext(This,NewContext) )
    ( (This)->lpVtbl -> GetFormat(This,Type,Format) )
    ( (This)->lpVtbl -> SetPropertyNumber(This,Name,Value,Supported) )
    ( (This)->lpVtbl -> GetPropertyNumber(This,Name,Value,Supported) )
    ( (This)->lpVtbl -> SetPropertyString(This,Name,Value,Supported) )
    ( (This)->lpVtbl -> GetPropertyString(This,Name,Value,Supported) )
    ( (This)->lpVtbl -> IsUISupported(This,TypeOfUI,ExtraData,Supported) )
    ( (This)->lpVtbl -> DisplayUI(This,hWndParent,Title,TypeOfUI,ExtraData) )
    ( (This)->lpVtbl -> GetRecognizers(This,RequiredAttributes,OptionalAttributes,ObjectTokens) )
    ( (This)->lpVtbl -> GetAudioInputs(This,RequiredAttributes,OptionalAttributes,ObjectTokens) )
    ( (This)->lpVtbl -> GetProfiles(This,RequiredAttributes,OptionalAttributes,ObjectTokens) )
EXTERN_C const IID IID_ISpeechRecognizerStatus;
    typedef struct ISpeechRecognizerStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechRecognizerStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechRecognizerStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechRecognizerStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechRecognizerStatus * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechRecognizerStatus * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechRecognizerStatus * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechRecognizerStatus * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioStatus )(
            __RPC__in ISpeechRecognizerStatus * This,
                                __RPC__deref_out_opt ISpeechAudioStatus **AudioStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentStreamPosition )(
            __RPC__in ISpeechRecognizerStatus * This,
                                __RPC__out VARIANT *pCurrentStreamPos);
                                        HRESULT ( STDMETHODCALLTYPE *get_CurrentStreamNumber )(
            __RPC__in ISpeechRecognizerStatus * This,
                                __RPC__out long *StreamNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfActiveRules )(
            __RPC__in ISpeechRecognizerStatus * This,
                                __RPC__out long *NumberOfActiveRules);
                                        HRESULT ( STDMETHODCALLTYPE *get_ClsidEngine )(
            __RPC__in ISpeechRecognizerStatus * This,
                                __RPC__deref_out_opt BSTR *ClsidEngine);
                                        HRESULT ( STDMETHODCALLTYPE *get_SupportedLanguages )(
            __RPC__in ISpeechRecognizerStatus * This,
                                __RPC__out VARIANT *SupportedLanguages);
        END_INTERFACE
    } ISpeechRecognizerStatusVtbl;
    interface ISpeechRecognizerStatus
    {
        CONST_VTBL struct ISpeechRecognizerStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AudioStatus(This,AudioStatus) )
    ( (This)->lpVtbl -> get_CurrentStreamPosition(This,pCurrentStreamPos) )
    ( (This)->lpVtbl -> get_CurrentStreamNumber(This,StreamNumber) )
    ( (This)->lpVtbl -> get_NumberOfActiveRules(This,NumberOfActiveRules) )
    ( (This)->lpVtbl -> get_ClsidEngine(This,ClsidEngine) )
    ( (This)->lpVtbl -> get_SupportedLanguages(This,SupportedLanguages) )
EXTERN_C const IID IID_ISpeechRecoContext;
    typedef struct ISpeechRecoContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechRecoContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechRecoContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechRecoContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechRecoContext * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechRecoContext * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechRecoContext * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechRecoContext * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Recognizer )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__deref_out_opt ISpeechRecognizer **Recognizer);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioInputInterferenceStatus )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__out SpeechInterference *Interference);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequestedUIType )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__deref_out_opt BSTR *UIType);
                                           HRESULT ( STDMETHODCALLTYPE *putref_Voice )(
            __RPC__in ISpeechRecoContext * This,
                       __RPC__in_opt ISpeechVoice *Voice);
                                        HRESULT ( STDMETHODCALLTYPE *get_Voice )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__deref_out_opt ISpeechVoice **Voice);
                                                HRESULT ( STDMETHODCALLTYPE *put_AllowVoiceFormatMatchingOnNextSet )(
            __RPC__in ISpeechRecoContext * This,
                       VARIANT_BOOL Allow);
                                                HRESULT ( STDMETHODCALLTYPE *get_AllowVoiceFormatMatchingOnNextSet )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__out VARIANT_BOOL *pAllow);
                                        HRESULT ( STDMETHODCALLTYPE *put_VoicePurgeEvent )(
            __RPC__in ISpeechRecoContext * This,
                       SpeechRecoEvents EventInterest);
                                        HRESULT ( STDMETHODCALLTYPE *get_VoicePurgeEvent )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__out SpeechRecoEvents *EventInterest);
                                        HRESULT ( STDMETHODCALLTYPE *put_EventInterests )(
            __RPC__in ISpeechRecoContext * This,
                       SpeechRecoEvents EventInterest);
                                        HRESULT ( STDMETHODCALLTYPE *get_EventInterests )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__out SpeechRecoEvents *EventInterest);
                                        HRESULT ( STDMETHODCALLTYPE *put_CmdMaxAlternates )(
            __RPC__in ISpeechRecoContext * This,
                       long MaxAlternates);
                                        HRESULT ( STDMETHODCALLTYPE *get_CmdMaxAlternates )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__out long *MaxAlternates);
                                        HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in ISpeechRecoContext * This,
                       SpeechRecoContextState State);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__out SpeechRecoContextState *State);
                                        HRESULT ( STDMETHODCALLTYPE *put_RetainedAudio )(
            __RPC__in ISpeechRecoContext * This,
                       SpeechRetainedAudioOptions Option);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainedAudio )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__out SpeechRetainedAudioOptions *Option);
                                           HRESULT ( STDMETHODCALLTYPE *putref_RetainedAudioFormat )(
            __RPC__in ISpeechRecoContext * This,
                       __RPC__in_opt ISpeechAudioFormat *Format);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainedAudioFormat )(
            __RPC__in ISpeechRecoContext * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **Format);
                               HRESULT ( STDMETHODCALLTYPE *Pause )(
            __RPC__in ISpeechRecoContext * This);
                               HRESULT ( STDMETHODCALLTYPE *Resume )(
            __RPC__in ISpeechRecoContext * This);
                               HRESULT ( STDMETHODCALLTYPE *CreateGrammar )(
            __RPC__in ISpeechRecoContext * This,
                                     VARIANT GrammarId,
                                __RPC__deref_out_opt ISpeechRecoGrammar **Grammar);
                               HRESULT ( STDMETHODCALLTYPE *CreateResultFromMemory )(
            __RPC__in ISpeechRecoContext * This,
                       __RPC__in VARIANT *ResultBlock,
                                __RPC__deref_out_opt ISpeechRecoResult **Result);
                               HRESULT ( STDMETHODCALLTYPE *Bookmark )(
            __RPC__in ISpeechRecoContext * This,
                       SpeechBookmarkOptions Options,
                       VARIANT StreamPos,
                       VARIANT BookmarkId);
                               HRESULT ( STDMETHODCALLTYPE *SetAdaptationData )(
            __RPC__in ISpeechRecoContext * This,
                       __RPC__in BSTR AdaptationString);
        END_INTERFACE
    } ISpeechRecoContextVtbl;
    interface ISpeechRecoContext
    {
        CONST_VTBL struct ISpeechRecoContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Recognizer(This,Recognizer) )
    ( (This)->lpVtbl -> get_AudioInputInterferenceStatus(This,Interference) )
    ( (This)->lpVtbl -> get_RequestedUIType(This,UIType) )
    ( (This)->lpVtbl -> putref_Voice(This,Voice) )
    ( (This)->lpVtbl -> get_Voice(This,Voice) )
    ( (This)->lpVtbl -> put_AllowVoiceFormatMatchingOnNextSet(This,Allow) )
    ( (This)->lpVtbl -> get_AllowVoiceFormatMatchingOnNextSet(This,pAllow) )
    ( (This)->lpVtbl -> put_VoicePurgeEvent(This,EventInterest) )
    ( (This)->lpVtbl -> get_VoicePurgeEvent(This,EventInterest) )
    ( (This)->lpVtbl -> put_EventInterests(This,EventInterest) )
    ( (This)->lpVtbl -> get_EventInterests(This,EventInterest) )
    ( (This)->lpVtbl -> put_CmdMaxAlternates(This,MaxAlternates) )
    ( (This)->lpVtbl -> get_CmdMaxAlternates(This,MaxAlternates) )
    ( (This)->lpVtbl -> put_State(This,State) )
    ( (This)->lpVtbl -> get_State(This,State) )
    ( (This)->lpVtbl -> put_RetainedAudio(This,Option) )
    ( (This)->lpVtbl -> get_RetainedAudio(This,Option) )
    ( (This)->lpVtbl -> putref_RetainedAudioFormat(This,Format) )
    ( (This)->lpVtbl -> get_RetainedAudioFormat(This,Format) )
    ( (This)->lpVtbl -> Pause(This) )
    ( (This)->lpVtbl -> Resume(This) )
    ( (This)->lpVtbl -> CreateGrammar(This,GrammarId,Grammar) )
    ( (This)->lpVtbl -> CreateResultFromMemory(This,ResultBlock,Result) )
    ( (This)->lpVtbl -> Bookmark(This,Options,StreamPos,BookmarkId) )
    ( (This)->lpVtbl -> SetAdaptationData(This,AdaptationString) )
EXTERN_C const IID IID_ISpeechRecoGrammar;
    typedef struct ISpeechRecoGrammarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechRecoGrammar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechRecoGrammar * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechRecoGrammar * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechRecoGrammar * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechRecoGrammar * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpeechRecoGrammar * This,
                                __RPC__out VARIANT *Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecoContext )(
            __RPC__in ISpeechRecoGrammar * This,
                                __RPC__deref_out_opt ISpeechRecoContext **RecoContext);
                                        HRESULT ( STDMETHODCALLTYPE *put_State )(
            __RPC__in ISpeechRecoGrammar * This,
                       SpeechGrammarState State);
                                        HRESULT ( STDMETHODCALLTYPE *get_State )(
            __RPC__in ISpeechRecoGrammar * This,
                                __RPC__out SpeechGrammarState *State);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rules )(
            __RPC__in ISpeechRecoGrammar * This,
                                __RPC__deref_out_opt ISpeechGrammarRules **Rules);
                               HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ISpeechRecoGrammar * This,
                                     SpeechLanguageId NewLanguage);
                               HRESULT ( STDMETHODCALLTYPE *CmdLoadFromFile )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in const BSTR FileName,
                                     SpeechLoadOption LoadOption);
                               HRESULT ( STDMETHODCALLTYPE *CmdLoadFromObject )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in const BSTR ClassId,
                       __RPC__in const BSTR GrammarName,
                                     SpeechLoadOption LoadOption);
                               HRESULT ( STDMETHODCALLTYPE *CmdLoadFromResource )(
            __RPC__in ISpeechRecoGrammar * This,
                       long hModule,
                       VARIANT ResourceName,
                       VARIANT ResourceType,
                       SpeechLanguageId LanguageId,
                                     SpeechLoadOption LoadOption);
                               HRESULT ( STDMETHODCALLTYPE *CmdLoadFromMemory )(
            __RPC__in ISpeechRecoGrammar * This,
                       VARIANT GrammarData,
                                     SpeechLoadOption LoadOption);
                               HRESULT ( STDMETHODCALLTYPE *CmdLoadFromProprietaryGrammar )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in const BSTR ProprietaryGuid,
                       __RPC__in const BSTR ProprietaryString,
                       VARIANT ProprietaryData,
                                     SpeechLoadOption LoadOption);
                               HRESULT ( STDMETHODCALLTYPE *CmdSetRuleState )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in const BSTR Name,
                       SpeechRuleState State);
                               HRESULT ( STDMETHODCALLTYPE *CmdSetRuleIdState )(
            __RPC__in ISpeechRecoGrammar * This,
                       long RuleId,
                       SpeechRuleState State);
                               HRESULT ( STDMETHODCALLTYPE *DictationLoad )(
            __RPC__in ISpeechRecoGrammar * This,
                                     __RPC__in const BSTR TopicName,
                                     SpeechLoadOption LoadOption);
                               HRESULT ( STDMETHODCALLTYPE *DictationUnload )(
            __RPC__in ISpeechRecoGrammar * This);
                               HRESULT ( STDMETHODCALLTYPE *DictationSetState )(
            __RPC__in ISpeechRecoGrammar * This,
                       SpeechRuleState State);
                               HRESULT ( STDMETHODCALLTYPE *SetWordSequenceData )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in const BSTR Text,
                       long TextLength,
                       __RPC__in_opt ISpeechTextSelectionInformation *Info);
                               HRESULT ( STDMETHODCALLTYPE *SetTextSelection )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in_opt ISpeechTextSelectionInformation *Info);
                               HRESULT ( STDMETHODCALLTYPE *IsPronounceable )(
            __RPC__in ISpeechRecoGrammar * This,
                       __RPC__in const BSTR Word,
                                __RPC__out SpeechWordPronounceable *WordPronounceable);
        END_INTERFACE
    } ISpeechRecoGrammarVtbl;
    interface ISpeechRecoGrammar
    {
        CONST_VTBL struct ISpeechRecoGrammarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> get_RecoContext(This,RecoContext) )
    ( (This)->lpVtbl -> put_State(This,State) )
    ( (This)->lpVtbl -> get_State(This,State) )
    ( (This)->lpVtbl -> get_Rules(This,Rules) )
    ( (This)->lpVtbl -> Reset(This,NewLanguage) )
    ( (This)->lpVtbl -> CmdLoadFromFile(This,FileName,LoadOption) )
    ( (This)->lpVtbl -> CmdLoadFromObject(This,ClassId,GrammarName,LoadOption) )
    ( (This)->lpVtbl -> CmdLoadFromResource(This,hModule,ResourceName,ResourceType,LanguageId,LoadOption) )
    ( (This)->lpVtbl -> CmdLoadFromMemory(This,GrammarData,LoadOption) )
    ( (This)->lpVtbl -> CmdLoadFromProprietaryGrammar(This,ProprietaryGuid,ProprietaryString,ProprietaryData,LoadOption) )
    ( (This)->lpVtbl -> CmdSetRuleState(This,Name,State) )
    ( (This)->lpVtbl -> CmdSetRuleIdState(This,RuleId,State) )
    ( (This)->lpVtbl -> DictationLoad(This,TopicName,LoadOption) )
    ( (This)->lpVtbl -> DictationUnload(This) )
    ( (This)->lpVtbl -> DictationSetState(This,State) )
    ( (This)->lpVtbl -> SetWordSequenceData(This,Text,TextLength,Info) )
    ( (This)->lpVtbl -> SetTextSelection(This,Info) )
    ( (This)->lpVtbl -> IsPronounceable(This,Word,WordPronounceable) )
EXTERN_C const IID DIID__ISpeechRecoContextEvents;
    typedef struct _ISpeechRecoContextEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in _ISpeechRecoContextEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in _ISpeechRecoContextEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in _ISpeechRecoContextEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in _ISpeechRecoContextEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in _ISpeechRecoContextEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in _ISpeechRecoContextEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            _ISpeechRecoContextEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } _ISpeechRecoContextEventsVtbl;
    interface _ISpeechRecoContextEvents
    {
        CONST_VTBL struct _ISpeechRecoContextEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_ISpeechGrammarRule;
    typedef struct ISpeechGrammarRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechGrammarRule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechGrammarRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechGrammarRule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechGrammarRule * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechGrammarRule * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechGrammarRule * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechGrammarRule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Attributes )(
            __RPC__in ISpeechGrammarRule * This,
                                __RPC__out SpeechRuleAttributes *Attributes);
                                        HRESULT ( STDMETHODCALLTYPE *get_InitialState )(
            __RPC__in ISpeechGrammarRule * This,
                                __RPC__deref_out_opt ISpeechGrammarRuleState **State);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISpeechGrammarRule * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpeechGrammarRule * This,
                                __RPC__out long *Id);
                               HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ISpeechGrammarRule * This);
                               HRESULT ( STDMETHODCALLTYPE *AddResource )(
            __RPC__in ISpeechGrammarRule * This,
                       __RPC__in const BSTR ResourceName,
                       __RPC__in const BSTR ResourceValue);
                               HRESULT ( STDMETHODCALLTYPE *AddState )(
            __RPC__in ISpeechGrammarRule * This,
                                __RPC__deref_out_opt ISpeechGrammarRuleState **State);
        END_INTERFACE
    } ISpeechGrammarRuleVtbl;
    interface ISpeechGrammarRule
    {
        CONST_VTBL struct ISpeechGrammarRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Attributes(This,Attributes) )
    ( (This)->lpVtbl -> get_InitialState(This,State) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> AddResource(This,ResourceName,ResourceValue) )
    ( (This)->lpVtbl -> AddState(This,State) )
EXTERN_C const IID IID_ISpeechGrammarRules;
    typedef struct ISpeechGrammarRulesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechGrammarRules * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechGrammarRules * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechGrammarRules * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechGrammarRules * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechGrammarRules * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechGrammarRules * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechGrammarRules * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechGrammarRules * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *FindRule )(
            __RPC__in ISpeechGrammarRules * This,
                       VARIANT RuleNameOrId,
                                __RPC__deref_out_opt ISpeechGrammarRule **Rule);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechGrammarRules * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechGrammarRule **Rule);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechGrammarRules * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
                                        HRESULT ( STDMETHODCALLTYPE *get_Dynamic )(
            __RPC__in ISpeechGrammarRules * This,
                                __RPC__out VARIANT_BOOL *Dynamic);
                               HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISpeechGrammarRules * This,
                       __RPC__in BSTR RuleName,
                       SpeechRuleAttributes Attributes,
                                     long RuleId,
                                __RPC__deref_out_opt ISpeechGrammarRule **Rule);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ISpeechGrammarRules * This);
                               HRESULT ( STDMETHODCALLTYPE *CommitAndSave )(
            __RPC__in ISpeechGrammarRules * This,
                        __RPC__deref_out_opt BSTR *ErrorText,
                                __RPC__out VARIANT *SaveStream);
        END_INTERFACE
    } ISpeechGrammarRulesVtbl;
    interface ISpeechGrammarRules
    {
        CONST_VTBL struct ISpeechGrammarRulesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> FindRule(This,RuleNameOrId,Rule) )
    ( (This)->lpVtbl -> Item(This,Index,Rule) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
    ( (This)->lpVtbl -> get_Dynamic(This,Dynamic) )
    ( (This)->lpVtbl -> Add(This,RuleName,Attributes,RuleId,Rule) )
    ( (This)->lpVtbl -> Commit(This) )
    ( (This)->lpVtbl -> CommitAndSave(This,ErrorText,SaveStream) )
EXTERN_C const IID IID_ISpeechGrammarRuleState;
    typedef struct ISpeechGrammarRuleStateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechGrammarRuleState * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechGrammarRuleState * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechGrammarRuleState * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechGrammarRuleState * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechGrammarRuleState * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechGrammarRuleState * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechGrammarRuleState * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rule )(
            __RPC__in ISpeechGrammarRuleState * This,
                                __RPC__deref_out_opt ISpeechGrammarRule **Rule);
                                        HRESULT ( STDMETHODCALLTYPE *get_Transitions )(
            __RPC__in ISpeechGrammarRuleState * This,
                                __RPC__deref_out_opt ISpeechGrammarRuleStateTransitions **Transitions);
                               HRESULT ( STDMETHODCALLTYPE *AddWordTransition )(
            __RPC__in ISpeechGrammarRuleState * This,
                       __RPC__in_opt ISpeechGrammarRuleState *DestState,
                       __RPC__in const BSTR Words,
                                     __RPC__in const BSTR Separators,
                                     SpeechGrammarWordType Type,
                                     __RPC__in const BSTR PropertyName,
                                     long PropertyId,
                                     __RPC__in VARIANT *PropertyValue,
                                     float Weight);
                               HRESULT ( STDMETHODCALLTYPE *AddRuleTransition )(
            __RPC__in ISpeechGrammarRuleState * This,
                       __RPC__in_opt ISpeechGrammarRuleState *DestinationState,
                       __RPC__in_opt ISpeechGrammarRule *Rule,
                                     __RPC__in const BSTR PropertyName,
                                     long PropertyId,
                                     __RPC__in VARIANT *PropertyValue,
                                     float Weight);
                               HRESULT ( STDMETHODCALLTYPE *AddSpecialTransition )(
            __RPC__in ISpeechGrammarRuleState * This,
                       __RPC__in_opt ISpeechGrammarRuleState *DestinationState,
                       SpeechSpecialTransitionType Type,
                                     __RPC__in const BSTR PropertyName,
                                     long PropertyId,
                                     __RPC__in VARIANT *PropertyValue,
                                     float Weight);
        END_INTERFACE
    } ISpeechGrammarRuleStateVtbl;
    interface ISpeechGrammarRuleState
    {
        CONST_VTBL struct ISpeechGrammarRuleStateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Rule(This,Rule) )
    ( (This)->lpVtbl -> get_Transitions(This,Transitions) )
    ( (This)->lpVtbl -> AddWordTransition(This,DestState,Words,Separators,Type,PropertyName,PropertyId,PropertyValue,Weight) )
    ( (This)->lpVtbl -> AddRuleTransition(This,DestinationState,Rule,PropertyName,PropertyId,PropertyValue,Weight) )
    ( (This)->lpVtbl -> AddSpecialTransition(This,DestinationState,Type,PropertyName,PropertyId,PropertyValue,Weight) )
EXTERN_C const IID IID_ISpeechGrammarRuleStateTransition;
    typedef struct ISpeechGrammarRuleStateTransitionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechGrammarRuleStateTransition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechGrammarRuleStateTransition * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechGrammarRuleStateTransition * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__out SpeechGrammarRuleStateTransitionType *Type);
                                        HRESULT ( STDMETHODCALLTYPE *get_Text )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__deref_out_opt BSTR *Text);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rule )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__deref_out_opt ISpeechGrammarRule **Rule);
                                        HRESULT ( STDMETHODCALLTYPE *get_Weight )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__out VARIANT *Weight);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyName )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__deref_out_opt BSTR *PropertyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyId )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__out long *PropertyId);
                                        HRESULT ( STDMETHODCALLTYPE *get_PropertyValue )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__out VARIANT *PropertyValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_NextState )(
            __RPC__in ISpeechGrammarRuleStateTransition * This,
                                __RPC__deref_out_opt ISpeechGrammarRuleState **NextState);
        END_INTERFACE
    } ISpeechGrammarRuleStateTransitionVtbl;
    interface ISpeechGrammarRuleStateTransition
    {
        CONST_VTBL struct ISpeechGrammarRuleStateTransitionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,Type) )
    ( (This)->lpVtbl -> get_Text(This,Text) )
    ( (This)->lpVtbl -> get_Rule(This,Rule) )
    ( (This)->lpVtbl -> get_Weight(This,Weight) )
    ( (This)->lpVtbl -> get_PropertyName(This,PropertyName) )
    ( (This)->lpVtbl -> get_PropertyId(This,PropertyId) )
    ( (This)->lpVtbl -> get_PropertyValue(This,PropertyValue) )
    ( (This)->lpVtbl -> get_NextState(This,NextState) )
EXTERN_C const IID IID_ISpeechGrammarRuleStateTransitions;
    typedef struct ISpeechGrammarRuleStateTransitionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechGrammarRuleStateTransitions * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechGrammarRuleStateTransition **Transition);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechGrammarRuleStateTransitions * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechGrammarRuleStateTransitionsVtbl;
    interface ISpeechGrammarRuleStateTransitions
    {
        CONST_VTBL struct ISpeechGrammarRuleStateTransitionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Transition) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechTextSelectionInformation;
    typedef struct ISpeechTextSelectionInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechTextSelectionInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechTextSelectionInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechTextSelectionInformation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechTextSelectionInformation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechTextSelectionInformation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechTextSelectionInformation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechTextSelectionInformation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_ActiveOffset )(
            __RPC__in ISpeechTextSelectionInformation * This,
                       long ActiveOffset);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActiveOffset )(
            __RPC__in ISpeechTextSelectionInformation * This,
                                __RPC__out long *ActiveOffset);
                                        HRESULT ( STDMETHODCALLTYPE *put_ActiveLength )(
            __RPC__in ISpeechTextSelectionInformation * This,
                       long ActiveLength);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActiveLength )(
            __RPC__in ISpeechTextSelectionInformation * This,
                                __RPC__out long *ActiveLength);
                                        HRESULT ( STDMETHODCALLTYPE *put_SelectionOffset )(
            __RPC__in ISpeechTextSelectionInformation * This,
                       long SelectionOffset);
                                        HRESULT ( STDMETHODCALLTYPE *get_SelectionOffset )(
            __RPC__in ISpeechTextSelectionInformation * This,
                                __RPC__out long *SelectionOffset);
                                        HRESULT ( STDMETHODCALLTYPE *put_SelectionLength )(
            __RPC__in ISpeechTextSelectionInformation * This,
                       long SelectionLength);
                                        HRESULT ( STDMETHODCALLTYPE *get_SelectionLength )(
            __RPC__in ISpeechTextSelectionInformation * This,
                                __RPC__out long *SelectionLength);
        END_INTERFACE
    } ISpeechTextSelectionInformationVtbl;
    interface ISpeechTextSelectionInformation
    {
        CONST_VTBL struct ISpeechTextSelectionInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_ActiveOffset(This,ActiveOffset) )
    ( (This)->lpVtbl -> get_ActiveOffset(This,ActiveOffset) )
    ( (This)->lpVtbl -> put_ActiveLength(This,ActiveLength) )
    ( (This)->lpVtbl -> get_ActiveLength(This,ActiveLength) )
    ( (This)->lpVtbl -> put_SelectionOffset(This,SelectionOffset) )
    ( (This)->lpVtbl -> get_SelectionOffset(This,SelectionOffset) )
    ( (This)->lpVtbl -> put_SelectionLength(This,SelectionLength) )
    ( (This)->lpVtbl -> get_SelectionLength(This,SelectionLength) )
EXTERN_C const IID IID_ISpeechRecoResult;
    typedef struct ISpeechRecoResultVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechRecoResult * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechRecoResult * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechRecoResult * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechRecoResult * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechRecoResult * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechRecoResult * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechRecoResult * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecoContext )(
            __RPC__in ISpeechRecoResult * This,
                                __RPC__deref_out_opt ISpeechRecoContext **RecoContext);
                                        HRESULT ( STDMETHODCALLTYPE *get_Times )(
            __RPC__in ISpeechRecoResult * This,
                                __RPC__deref_out_opt ISpeechRecoResultTimes **Times);
                                           HRESULT ( STDMETHODCALLTYPE *putref_AudioFormat )(
            __RPC__in ISpeechRecoResult * This,
                       __RPC__in_opt ISpeechAudioFormat *Format);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioFormat )(
            __RPC__in ISpeechRecoResult * This,
                                __RPC__deref_out_opt ISpeechAudioFormat **Format);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhraseInfo )(
            __RPC__in ISpeechRecoResult * This,
                                __RPC__deref_out_opt ISpeechPhraseInfo **PhraseInfo);
                               HRESULT ( STDMETHODCALLTYPE *Alternates )(
            __RPC__in ISpeechRecoResult * This,
                       long RequestCount,
                                     long StartElement,
                                     long Elements,
                                __RPC__deref_out_opt ISpeechPhraseAlternates **Alternates);
                               HRESULT ( STDMETHODCALLTYPE *Audio )(
            __RPC__in ISpeechRecoResult * This,
                                     long StartElement,
                                     long Elements,
                                __RPC__deref_out_opt ISpeechMemoryStream **Stream);
                               HRESULT ( STDMETHODCALLTYPE *SpeakAudio )(
            __RPC__in ISpeechRecoResult * This,
                                     long StartElement,
                                     long Elements,
                                     SpeechVoiceSpeakFlags Flags,
                                __RPC__out long *StreamNumber);
                               HRESULT ( STDMETHODCALLTYPE *SaveToMemory )(
            __RPC__in ISpeechRecoResult * This,
                                __RPC__out VARIANT *ResultBlock);
                               HRESULT ( STDMETHODCALLTYPE *DiscardResultInfo )(
            __RPC__in ISpeechRecoResult * This,
                       SpeechDiscardType ValueTypes);
        END_INTERFACE
    } ISpeechRecoResultVtbl;
    interface ISpeechRecoResult
    {
        CONST_VTBL struct ISpeechRecoResultVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RecoContext(This,RecoContext) )
    ( (This)->lpVtbl -> get_Times(This,Times) )
    ( (This)->lpVtbl -> putref_AudioFormat(This,Format) )
    ( (This)->lpVtbl -> get_AudioFormat(This,Format) )
    ( (This)->lpVtbl -> get_PhraseInfo(This,PhraseInfo) )
    ( (This)->lpVtbl -> Alternates(This,RequestCount,StartElement,Elements,Alternates) )
    ( (This)->lpVtbl -> Audio(This,StartElement,Elements,Stream) )
    ( (This)->lpVtbl -> SpeakAudio(This,StartElement,Elements,Flags,StreamNumber) )
    ( (This)->lpVtbl -> SaveToMemory(This,ResultBlock) )
    ( (This)->lpVtbl -> DiscardResultInfo(This,ValueTypes) )
EXTERN_C const IID IID_ISpeechRecoResultTimes;
    typedef struct ISpeechRecoResultTimesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechRecoResultTimes * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechRecoResultTimes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechRecoResultTimes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechRecoResultTimes * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechRecoResultTimes * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechRecoResultTimes * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechRecoResultTimes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_StreamTime )(
            __RPC__in ISpeechRecoResultTimes * This,
                                __RPC__out VARIANT *Time);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in ISpeechRecoResultTimes * This,
                                __RPC__out VARIANT *Length);
                                        HRESULT ( STDMETHODCALLTYPE *get_TickCount )(
            __RPC__in ISpeechRecoResultTimes * This,
                                __RPC__out long *TickCount);
                                        HRESULT ( STDMETHODCALLTYPE *get_OffsetFromStart )(
            __RPC__in ISpeechRecoResultTimes * This,
                                __RPC__out VARIANT *OffsetFromStart);
        END_INTERFACE
    } ISpeechRecoResultTimesVtbl;
    interface ISpeechRecoResultTimes
    {
        CONST_VTBL struct ISpeechRecoResultTimesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_StreamTime(This,Time) )
    ( (This)->lpVtbl -> get_Length(This,Length) )
    ( (This)->lpVtbl -> get_TickCount(This,TickCount) )
    ( (This)->lpVtbl -> get_OffsetFromStart(This,OffsetFromStart) )
EXTERN_C const IID IID_ISpeechPhraseAlternate;
    typedef struct ISpeechPhraseAlternateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseAlternate * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseAlternate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseAlternate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseAlternate * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseAlternate * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseAlternate * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseAlternate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RecoResult )(
            __RPC__in ISpeechPhraseAlternate * This,
                                __RPC__deref_out_opt ISpeechRecoResult **RecoResult);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartElementInResult )(
            __RPC__in ISpeechPhraseAlternate * This,
                                __RPC__out long *StartElement);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfElementsInResult )(
            __RPC__in ISpeechPhraseAlternate * This,
                                __RPC__out long *NumberOfElements);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhraseInfo )(
            __RPC__in ISpeechPhraseAlternate * This,
                                __RPC__deref_out_opt ISpeechPhraseInfo **PhraseInfo);
                               HRESULT ( STDMETHODCALLTYPE *Commit )(
            __RPC__in ISpeechPhraseAlternate * This);
        END_INTERFACE
    } ISpeechPhraseAlternateVtbl;
    interface ISpeechPhraseAlternate
    {
        CONST_VTBL struct ISpeechPhraseAlternateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RecoResult(This,RecoResult) )
    ( (This)->lpVtbl -> get_StartElementInResult(This,StartElement) )
    ( (This)->lpVtbl -> get_NumberOfElementsInResult(This,NumberOfElements) )
    ( (This)->lpVtbl -> get_PhraseInfo(This,PhraseInfo) )
    ( (This)->lpVtbl -> Commit(This) )
EXTERN_C const IID IID_ISpeechPhraseAlternates;
    typedef struct ISpeechPhraseAlternatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseAlternates * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseAlternates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseAlternates * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseAlternates * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseAlternates * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseAlternates * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseAlternates * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechPhraseAlternates * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechPhraseAlternates * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechPhraseAlternate **PhraseAlternate);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechPhraseAlternates * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechPhraseAlternatesVtbl;
    interface ISpeechPhraseAlternates
    {
        CONST_VTBL struct ISpeechPhraseAlternatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,PhraseAlternate) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechPhraseInfo;
    typedef struct ISpeechPhraseInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseInfo * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseInfo * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseInfo * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_LanguageId )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out long *LanguageId);
                                        HRESULT ( STDMETHODCALLTYPE *get_GrammarId )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out VARIANT *GrammarId);
                                        HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out VARIANT *StartTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioStreamPosition )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out VARIANT *AudioStreamPosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioSizeBytes )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out long *pAudioSizeBytes);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainedSizeBytes )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out long *RetainedSizeBytes);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioSizeTime )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out long *AudioSizeTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_Rule )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__deref_out_opt ISpeechPhraseRule **Rule);
                                        HRESULT ( STDMETHODCALLTYPE *get_Properties )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__deref_out_opt ISpeechPhraseProperties **Properties);
                                        HRESULT ( STDMETHODCALLTYPE *get_Elements )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__deref_out_opt ISpeechPhraseElements **Elements);
                                        HRESULT ( STDMETHODCALLTYPE *get_Replacements )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__deref_out_opt ISpeechPhraseReplacements **Replacements);
                                        HRESULT ( STDMETHODCALLTYPE *get_EngineId )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__deref_out_opt BSTR *EngineIdGuid);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnginePrivateData )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out VARIANT *PrivateData);
                               HRESULT ( STDMETHODCALLTYPE *SaveToMemory )(
            __RPC__in ISpeechPhraseInfo * This,
                                __RPC__out VARIANT *PhraseBlock);
                               HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ISpeechPhraseInfo * This,
                                     long StartElement,
                                     long Elements,
                                     VARIANT_BOOL UseReplacements,
                                __RPC__deref_out_opt BSTR *Text);
                               HRESULT ( STDMETHODCALLTYPE *GetDisplayAttributes )(
            __RPC__in ISpeechPhraseInfo * This,
                                     long StartElement,
                                     long Elements,
                                     VARIANT_BOOL UseReplacements,
                                __RPC__out SpeechDisplayAttributes *DisplayAttributes);
        END_INTERFACE
    } ISpeechPhraseInfoVtbl;
    interface ISpeechPhraseInfo
    {
        CONST_VTBL struct ISpeechPhraseInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_LanguageId(This,LanguageId) )
    ( (This)->lpVtbl -> get_GrammarId(This,GrammarId) )
    ( (This)->lpVtbl -> get_StartTime(This,StartTime) )
    ( (This)->lpVtbl -> get_AudioStreamPosition(This,AudioStreamPosition) )
    ( (This)->lpVtbl -> get_AudioSizeBytes(This,pAudioSizeBytes) )
    ( (This)->lpVtbl -> get_RetainedSizeBytes(This,RetainedSizeBytes) )
    ( (This)->lpVtbl -> get_AudioSizeTime(This,AudioSizeTime) )
    ( (This)->lpVtbl -> get_Rule(This,Rule) )
    ( (This)->lpVtbl -> get_Properties(This,Properties) )
    ( (This)->lpVtbl -> get_Elements(This,Elements) )
    ( (This)->lpVtbl -> get_Replacements(This,Replacements) )
    ( (This)->lpVtbl -> get_EngineId(This,EngineIdGuid) )
    ( (This)->lpVtbl -> get_EnginePrivateData(This,PrivateData) )
    ( (This)->lpVtbl -> SaveToMemory(This,PhraseBlock) )
    ( (This)->lpVtbl -> GetText(This,StartElement,Elements,UseReplacements,Text) )
    ( (This)->lpVtbl -> GetDisplayAttributes(This,StartElement,Elements,UseReplacements,DisplayAttributes) )
EXTERN_C const IID IID_ISpeechPhraseElement;
    typedef struct ISpeechPhraseElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseElement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseElement * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseElement * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseElement * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseElement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioTimeOffset )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out long *AudioTimeOffset);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioSizeTime )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out long *AudioSizeTime);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioStreamOffset )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out long *AudioStreamOffset);
                                        HRESULT ( STDMETHODCALLTYPE *get_AudioSizeBytes )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out long *AudioSizeBytes);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainedStreamOffset )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out long *RetainedStreamOffset);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainedSizeBytes )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out long *RetainedSizeBytes);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__deref_out_opt BSTR *DisplayText);
                                        HRESULT ( STDMETHODCALLTYPE *get_LexicalForm )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__deref_out_opt BSTR *LexicalForm);
                                        HRESULT ( STDMETHODCALLTYPE *get_Pronunciation )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out VARIANT *Pronunciation);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayAttributes )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out SpeechDisplayAttributes *DisplayAttributes);
                                        HRESULT ( STDMETHODCALLTYPE *get_RequiredConfidence )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out SpeechEngineConfidence *RequiredConfidence);
                                        HRESULT ( STDMETHODCALLTYPE *get_ActualConfidence )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out SpeechEngineConfidence *ActualConfidence);
                                        HRESULT ( STDMETHODCALLTYPE *get_EngineConfidence )(
            __RPC__in ISpeechPhraseElement * This,
                                __RPC__out float *EngineConfidence);
        END_INTERFACE
    } ISpeechPhraseElementVtbl;
    interface ISpeechPhraseElement
    {
        CONST_VTBL struct ISpeechPhraseElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_AudioTimeOffset(This,AudioTimeOffset) )
    ( (This)->lpVtbl -> get_AudioSizeTime(This,AudioSizeTime) )
    ( (This)->lpVtbl -> get_AudioStreamOffset(This,AudioStreamOffset) )
    ( (This)->lpVtbl -> get_AudioSizeBytes(This,AudioSizeBytes) )
    ( (This)->lpVtbl -> get_RetainedStreamOffset(This,RetainedStreamOffset) )
    ( (This)->lpVtbl -> get_RetainedSizeBytes(This,RetainedSizeBytes) )
    ( (This)->lpVtbl -> get_DisplayText(This,DisplayText) )
    ( (This)->lpVtbl -> get_LexicalForm(This,LexicalForm) )
    ( (This)->lpVtbl -> get_Pronunciation(This,Pronunciation) )
    ( (This)->lpVtbl -> get_DisplayAttributes(This,DisplayAttributes) )
    ( (This)->lpVtbl -> get_RequiredConfidence(This,RequiredConfidence) )
    ( (This)->lpVtbl -> get_ActualConfidence(This,ActualConfidence) )
    ( (This)->lpVtbl -> get_EngineConfidence(This,EngineConfidence) )
EXTERN_C const IID IID_ISpeechPhraseElements;
    typedef struct ISpeechPhraseElementsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseElements * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseElements * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseElements * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseElements * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseElements * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseElements * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseElements * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechPhraseElements * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechPhraseElements * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechPhraseElement **Element);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechPhraseElements * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechPhraseElementsVtbl;
    interface ISpeechPhraseElements
    {
        CONST_VTBL struct ISpeechPhraseElementsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Element) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechPhraseReplacement;
    typedef struct ISpeechPhraseReplacementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseReplacement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseReplacement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseReplacement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseReplacement * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseReplacement * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseReplacement * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseReplacement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_DisplayAttributes )(
            __RPC__in ISpeechPhraseReplacement * This,
                                __RPC__out SpeechDisplayAttributes *DisplayAttributes);
                                        HRESULT ( STDMETHODCALLTYPE *get_Text )(
            __RPC__in ISpeechPhraseReplacement * This,
                                __RPC__deref_out_opt BSTR *Text);
                                        HRESULT ( STDMETHODCALLTYPE *get_FirstElement )(
            __RPC__in ISpeechPhraseReplacement * This,
                                __RPC__out long *FirstElement);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfElements )(
            __RPC__in ISpeechPhraseReplacement * This,
                                __RPC__out long *NumberOfElements);
        END_INTERFACE
    } ISpeechPhraseReplacementVtbl;
    interface ISpeechPhraseReplacement
    {
        CONST_VTBL struct ISpeechPhraseReplacementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_DisplayAttributes(This,DisplayAttributes) )
    ( (This)->lpVtbl -> get_Text(This,Text) )
    ( (This)->lpVtbl -> get_FirstElement(This,FirstElement) )
    ( (This)->lpVtbl -> get_NumberOfElements(This,NumberOfElements) )
EXTERN_C const IID IID_ISpeechPhraseReplacements;
    typedef struct ISpeechPhraseReplacementsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseReplacements * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseReplacements * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseReplacements * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseReplacements * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseReplacements * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseReplacements * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseReplacements * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechPhraseReplacements * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechPhraseReplacements * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechPhraseReplacement **Reps);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechPhraseReplacements * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechPhraseReplacementsVtbl;
    interface ISpeechPhraseReplacements
    {
        CONST_VTBL struct ISpeechPhraseReplacementsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Reps) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechPhraseProperty;
    typedef struct ISpeechPhrasePropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__out long *Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__out VARIANT *Value);
                                        HRESULT ( STDMETHODCALLTYPE *get_FirstElement )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__out long *FirstElement);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfElements )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__out long *NumberOfElements);
                                        HRESULT ( STDMETHODCALLTYPE *get_EngineConfidence )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__out float *Confidence);
                                        HRESULT ( STDMETHODCALLTYPE *get_Confidence )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__out SpeechEngineConfidence *Confidence);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__deref_out_opt ISpeechPhraseProperty **ParentProperty);
                                        HRESULT ( STDMETHODCALLTYPE *get_Children )(
            __RPC__in ISpeechPhraseProperty * This,
                                __RPC__deref_out_opt ISpeechPhraseProperties **Children);
        END_INTERFACE
    } ISpeechPhrasePropertyVtbl;
    interface ISpeechPhraseProperty
    {
        CONST_VTBL struct ISpeechPhrasePropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> get_Value(This,Value) )
    ( (This)->lpVtbl -> get_FirstElement(This,FirstElement) )
    ( (This)->lpVtbl -> get_NumberOfElements(This,NumberOfElements) )
    ( (This)->lpVtbl -> get_EngineConfidence(This,Confidence) )
    ( (This)->lpVtbl -> get_Confidence(This,Confidence) )
    ( (This)->lpVtbl -> get_Parent(This,ParentProperty) )
    ( (This)->lpVtbl -> get_Children(This,Children) )
EXTERN_C const IID IID_ISpeechPhraseProperties;
    typedef struct ISpeechPhrasePropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseProperties * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseProperties * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseProperties * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseProperties * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseProperties * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechPhraseProperties * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechPhraseProperties * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechPhraseProperty **Property);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechPhraseProperties * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechPhrasePropertiesVtbl;
    interface ISpeechPhraseProperties
    {
        CONST_VTBL struct ISpeechPhrasePropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Property) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechPhraseRule;
    typedef struct ISpeechPhraseRuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseRule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseRule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseRule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseRule * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseRule * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseRule * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseRule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__deref_out_opt BSTR *Name);
                                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__out long *Id);
                                        HRESULT ( STDMETHODCALLTYPE *get_FirstElement )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__out long *FirstElement);
                                        HRESULT ( STDMETHODCALLTYPE *get_NumberOfElements )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__out long *NumberOfElements);
                                        HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__deref_out_opt ISpeechPhraseRule **Parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_Children )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__deref_out_opt ISpeechPhraseRules **Children);
                                        HRESULT ( STDMETHODCALLTYPE *get_Confidence )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__out SpeechEngineConfidence *ActualConfidence);
                                        HRESULT ( STDMETHODCALLTYPE *get_EngineConfidence )(
            __RPC__in ISpeechPhraseRule * This,
                                __RPC__out float *EngineConfidence);
        END_INTERFACE
    } ISpeechPhraseRuleVtbl;
    interface ISpeechPhraseRule
    {
        CONST_VTBL struct ISpeechPhraseRuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_Id(This,Id) )
    ( (This)->lpVtbl -> get_FirstElement(This,FirstElement) )
    ( (This)->lpVtbl -> get_NumberOfElements(This,NumberOfElements) )
    ( (This)->lpVtbl -> get_Parent(This,Parent) )
    ( (This)->lpVtbl -> get_Children(This,Children) )
    ( (This)->lpVtbl -> get_Confidence(This,ActualConfidence) )
    ( (This)->lpVtbl -> get_EngineConfidence(This,EngineConfidence) )
EXTERN_C const IID IID_ISpeechPhraseRules;
    typedef struct ISpeechPhraseRulesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseRules * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseRules * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseRules * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseRules * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseRules * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseRules * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseRules * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechPhraseRules * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechPhraseRules * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechPhraseRule **Rule);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechPhraseRules * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechPhraseRulesVtbl;
    interface ISpeechPhraseRules
    {
        CONST_VTBL struct ISpeechPhraseRulesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Rule) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechLexicon;
    typedef struct ISpeechLexiconVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechLexicon * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechLexicon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechLexicon * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechLexicon * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechLexicon * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechLexicon * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechLexicon * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *get_GenerationId )(
            __RPC__in ISpeechLexicon * This,
                                __RPC__out long *GenerationId);
                               HRESULT ( STDMETHODCALLTYPE *GetWords )(
            __RPC__in ISpeechLexicon * This,
                                     SpeechLexiconType Flags,
                                      __RPC__out long *GenerationID,
                                __RPC__deref_out_opt ISpeechLexiconWords **Words);
                               HRESULT ( STDMETHODCALLTYPE *AddPronunciation )(
            __RPC__in ISpeechLexicon * This,
                       __RPC__in BSTR bstrWord,
                       SpeechLanguageId LangId,
                                     SpeechPartOfSpeech PartOfSpeech,
                                     __RPC__in BSTR bstrPronunciation);
                                       HRESULT ( STDMETHODCALLTYPE *AddPronunciationByPhoneIds )(
            __RPC__in ISpeechLexicon * This,
                       __RPC__in BSTR bstrWord,
                       SpeechLanguageId LangId,
                                     SpeechPartOfSpeech PartOfSpeech,
                                     __RPC__in VARIANT *PhoneIds);
                               HRESULT ( STDMETHODCALLTYPE *RemovePronunciation )(
            __RPC__in ISpeechLexicon * This,
                       __RPC__in BSTR bstrWord,
                       SpeechLanguageId LangId,
                                     SpeechPartOfSpeech PartOfSpeech,
                                     __RPC__in BSTR bstrPronunciation);
                                       HRESULT ( STDMETHODCALLTYPE *RemovePronunciationByPhoneIds )(
            __RPC__in ISpeechLexicon * This,
                       __RPC__in BSTR bstrWord,
                       SpeechLanguageId LangId,
                                     SpeechPartOfSpeech PartOfSpeech,
                                     __RPC__in VARIANT *PhoneIds);
                               HRESULT ( STDMETHODCALLTYPE *GetPronunciations )(
            __RPC__in ISpeechLexicon * This,
                       __RPC__in BSTR bstrWord,
                                     SpeechLanguageId LangId,
                                     SpeechLexiconType TypeFlags,
                                __RPC__deref_out_opt ISpeechLexiconPronunciations **ppPronunciations);
                                       HRESULT ( STDMETHODCALLTYPE *GetGenerationChange )(
            __RPC__in ISpeechLexicon * This,
                            __RPC__inout long *GenerationID,
                                __RPC__deref_out_opt ISpeechLexiconWords **ppWords);
        END_INTERFACE
    } ISpeechLexiconVtbl;
    interface ISpeechLexicon
    {
        CONST_VTBL struct ISpeechLexiconVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_GenerationId(This,GenerationId) )
    ( (This)->lpVtbl -> GetWords(This,Flags,GenerationID,Words) )
    ( (This)->lpVtbl -> AddPronunciation(This,bstrWord,LangId,PartOfSpeech,bstrPronunciation) )
    ( (This)->lpVtbl -> AddPronunciationByPhoneIds(This,bstrWord,LangId,PartOfSpeech,PhoneIds) )
    ( (This)->lpVtbl -> RemovePronunciation(This,bstrWord,LangId,PartOfSpeech,bstrPronunciation) )
    ( (This)->lpVtbl -> RemovePronunciationByPhoneIds(This,bstrWord,LangId,PartOfSpeech,PhoneIds) )
    ( (This)->lpVtbl -> GetPronunciations(This,bstrWord,LangId,TypeFlags,ppPronunciations) )
    ( (This)->lpVtbl -> GetGenerationChange(This,GenerationID,ppWords) )
EXTERN_C const IID IID_ISpeechLexiconWords;
    typedef struct ISpeechLexiconWordsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechLexiconWords * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechLexiconWords * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechLexiconWords * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechLexiconWords * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechLexiconWords * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechLexiconWords * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechLexiconWords * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechLexiconWords * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechLexiconWords * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechLexiconWord **Word);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechLexiconWords * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechLexiconWordsVtbl;
    interface ISpeechLexiconWords
    {
        CONST_VTBL struct ISpeechLexiconWordsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Word) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechLexiconWord;
    typedef struct ISpeechLexiconWordVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechLexiconWord * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechLexiconWord * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechLexiconWord * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechLexiconWord * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechLexiconWord * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechLexiconWord * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechLexiconWord * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_LangId )(
            __RPC__in ISpeechLexiconWord * This,
                                __RPC__out SpeechLanguageId *LangId);
                            HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ISpeechLexiconWord * This,
                                __RPC__out SpeechWordType *WordType);
                            HRESULT ( STDMETHODCALLTYPE *get_Word )(
            __RPC__in ISpeechLexiconWord * This,
                                __RPC__deref_out_opt BSTR *Word);
                            HRESULT ( STDMETHODCALLTYPE *get_Pronunciations )(
            __RPC__in ISpeechLexiconWord * This,
                                __RPC__deref_out_opt ISpeechLexiconPronunciations **Pronunciations);
        END_INTERFACE
    } ISpeechLexiconWordVtbl;
    interface ISpeechLexiconWord
    {
        CONST_VTBL struct ISpeechLexiconWordVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_LangId(This,LangId) )
    ( (This)->lpVtbl -> get_Type(This,WordType) )
    ( (This)->lpVtbl -> get_Word(This,Word) )
    ( (This)->lpVtbl -> get_Pronunciations(This,Pronunciations) )
EXTERN_C const IID IID_ISpeechLexiconPronunciations;
    typedef struct ISpeechLexiconPronunciationsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechLexiconPronunciations * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechLexiconPronunciations * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechLexiconPronunciations * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechLexiconPronunciations * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechLexiconPronunciations * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechLexiconPronunciations * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechLexiconPronunciations * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ISpeechLexiconPronunciations * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in ISpeechLexiconPronunciations * This,
                       long Index,
                                __RPC__deref_out_opt ISpeechLexiconPronunciation **Pronunciation);
                                                    HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ISpeechLexiconPronunciations * This,
                                __RPC__deref_out_opt IUnknown **EnumVARIANT);
        END_INTERFACE
    } ISpeechLexiconPronunciationsVtbl;
    interface ISpeechLexiconPronunciations
    {
        CONST_VTBL struct ISpeechLexiconPronunciationsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,Index,Pronunciation) )
    ( (This)->lpVtbl -> get__NewEnum(This,EnumVARIANT) )
EXTERN_C const IID IID_ISpeechLexiconPronunciation;
    typedef struct ISpeechLexiconPronunciationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechLexiconPronunciation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechLexiconPronunciation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechLexiconPronunciation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechLexiconPronunciation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechLexiconPronunciation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechLexiconPronunciation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechLexiconPronunciation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in ISpeechLexiconPronunciation * This,
                                __RPC__out SpeechLexiconType *LexiconType);
                                        HRESULT ( STDMETHODCALLTYPE *get_LangId )(
            __RPC__in ISpeechLexiconPronunciation * This,
                                __RPC__out SpeechLanguageId *LangId);
                                        HRESULT ( STDMETHODCALLTYPE *get_PartOfSpeech )(
            __RPC__in ISpeechLexiconPronunciation * This,
                                __RPC__out SpeechPartOfSpeech *PartOfSpeech);
                                        HRESULT ( STDMETHODCALLTYPE *get_PhoneIds )(
            __RPC__in ISpeechLexiconPronunciation * This,
                                __RPC__out VARIANT *PhoneIds);
                                        HRESULT ( STDMETHODCALLTYPE *get_Symbolic )(
            __RPC__in ISpeechLexiconPronunciation * This,
                                __RPC__deref_out_opt BSTR *Symbolic);
        END_INTERFACE
    } ISpeechLexiconPronunciationVtbl;
    interface ISpeechLexiconPronunciation
    {
        CONST_VTBL struct ISpeechLexiconPronunciationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Type(This,LexiconType) )
    ( (This)->lpVtbl -> get_LangId(This,LangId) )
    ( (This)->lpVtbl -> get_PartOfSpeech(This,PartOfSpeech) )
    ( (This)->lpVtbl -> get_PhoneIds(This,PhoneIds) )
    ( (This)->lpVtbl -> get_Symbolic(This,Symbolic) )
const BSTR SpeechRegistryUserRoot = L"HKEY_CURRENT_USER\SOFTWARE\Microsoft\Speech";
const BSTR SpeechRegistryLocalMachineRoot = L"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech";
const BSTR SpeechCategoryAudioOut = L"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\AudioOutput";
const BSTR SpeechCategoryAudioIn = L"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\AudioInput";
const BSTR SpeechCategoryVoices = L"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Voices";
const BSTR SpeechCategoryRecognizers = L"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\Recognizers";
const BSTR SpeechCategoryAppLexicons = L"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\AppLexicons";
const BSTR SpeechCategoryPhoneConverters = L"HKEY_LOCAL_MACHINE\SOFTWARE\Microsoft\Speech\PhoneConverters";
const BSTR SpeechCategoryRecoProfiles = L"HKEY_CURRENT_USER\SOFTWARE\Microsoft\Speech\RecoProfiles";
const BSTR SpeechTokenIdUserLexicon = L"HKEY_CURRENT_USER\SOFTWARE\Microsoft\Speech\CurrentUserLexicon";
const BSTR SpeechTokenValueCLSID = L"CLSID";
const BSTR SpeechTokenKeyFiles = L"Files";
const BSTR SpeechTokenKeyUI = L"UI";
const BSTR SpeechTokenKeyAttributes = L"Attributes";
const BSTR SpeechVoiceCategoryTTSRate = L"DefaultTTSRate";
const BSTR SpeechPropertyResourceUsage = L"ResourceUsage";
const BSTR SpeechPropertyHighConfidenceThreshold = L"HighConfidenceThreshold";
const BSTR SpeechPropertyNormalConfidenceThreshold = L"NormalConfidenceThreshold";
const BSTR SpeechPropertyLowConfidenceThreshold = L"LowConfidenceThreshold";
const BSTR SpeechPropertyResponseSpeed = L"ResponseSpeed";
const BSTR SpeechPropertyComplexResponseSpeed = L"ComplexResponseSpeed";
const BSTR SpeechPropertyAdaptationOn = L"AdaptationOn";
const BSTR SpeechDictationTopicSpelling = L"Spelling";
const BSTR SpeechGrammarTagWildcard = L"...";
const BSTR SpeechGrammarTagDictation = L"*";
const BSTR SpeechGrammarTagUnlimitedDictation = L"*+";
const BSTR SpeechEngineProperties = L"EngineProperties";
const BSTR SpeechAddRemoveWord = L"AddRemoveWord";
const BSTR SpeechUserTraining = L"UserTraining";
const BSTR SpeechMicTraining = L"MicTraining";
const BSTR SpeechRecoProfileProperties = L"RecoProfileProperties";
const BSTR SpeechAudioProperties = L"AudioProperties";
const BSTR SpeechAudioVolume = L"AudioVolume";
const BSTR SpeechVoiceSkipTypeSentence = L"Sentence";
const BSTR SpeechAudioFormatGUIDWave = L"{C31ADBAE-527F-4ff5-A230-F62BB61FF70C}";
const BSTR SpeechAudioFormatGUIDText = L"{7CEEF9F9-3D13-11d2-9EE7-00C04F797396}";
const float Speech_Default_Weight = DEFAULT_WEIGHT;
const LONG Speech_Max_Word_Length = SP_MAX_WORD_LENGTH;
const LONG Speech_Max_Pron_Length = SP_MAX_PRON_LENGTH;
const LONG Speech_StreamPos_Asap = SP_STREAMPOS_ASAP;
const LONG Speech_StreamPos_RealTime = SP_STREAMPOS_REALTIME;
const LONG SpeechAllElements = SPPR_ALL_ELEMENTS;
EXTERN_C const IID IID_ISpeechPhraseInfoBuilder;
    typedef struct ISpeechPhraseInfoBuilderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhraseInfoBuilder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhraseInfoBuilder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhraseInfoBuilder * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhraseInfoBuilder * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhraseInfoBuilder * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhraseInfoBuilder * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhraseInfoBuilder * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *RestorePhraseFromMemory )(
            __RPC__in ISpeechPhraseInfoBuilder * This,
                       __RPC__in VARIANT *PhraseInMemory,
                                __RPC__deref_out_opt ISpeechPhraseInfo **PhraseInfo);
        END_INTERFACE
    } ISpeechPhraseInfoBuilderVtbl;
    interface ISpeechPhraseInfoBuilder
    {
        CONST_VTBL struct ISpeechPhraseInfoBuilderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> RestorePhraseFromMemory(This,PhraseInMemory,PhraseInfo) )
EXTERN_C const IID IID_ISpeechPhoneConverter;
    typedef struct ISpeechPhoneConverterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechPhoneConverter * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechPhoneConverter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechPhoneConverter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ISpeechPhoneConverter * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ISpeechPhoneConverter * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ISpeechPhoneConverter * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISpeechPhoneConverter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_LanguageId )(
            __RPC__in ISpeechPhoneConverter * This,
                                __RPC__out SpeechLanguageId *LanguageId);
                                        HRESULT ( STDMETHODCALLTYPE *put_LanguageId )(
            __RPC__in ISpeechPhoneConverter * This,
                       SpeechLanguageId LanguageId);
                               HRESULT ( STDMETHODCALLTYPE *PhoneToId )(
            __RPC__in ISpeechPhoneConverter * This,
                       __RPC__in const BSTR Phonemes,
                                __RPC__out VARIANT *IdArray);
                               HRESULT ( STDMETHODCALLTYPE *IdToPhone )(
            __RPC__in ISpeechPhoneConverter * This,
                       const VARIANT IdArray,
                                __RPC__deref_out_opt BSTR *Phonemes);
        END_INTERFACE
    } ISpeechPhoneConverterVtbl;
    interface ISpeechPhoneConverter
    {
        CONST_VTBL struct ISpeechPhoneConverterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_LanguageId(This,LanguageId) )
    ( (This)->lpVtbl -> put_LanguageId(This,LanguageId) )
    ( (This)->lpVtbl -> PhoneToId(This,Phonemes,IdArray) )
    ( (This)->lpVtbl -> IdToPhone(This,IdArray,Phonemes) )
EXTERN_C const CLSID CLSID_SpNotifyTranslator;
class DECLSPEC_UUID("E2AE5372-5D40-11D2-960E-00C04F8EE628")
SpNotifyTranslator;
EXTERN_C const CLSID CLSID_SpObjectTokenCategory;
class DECLSPEC_UUID("A910187F-0C7A-45AC-92CC-59EDAFB77B53")
SpObjectTokenCategory;
EXTERN_C const CLSID CLSID_SpObjectToken;
class DECLSPEC_UUID("EF411752-3736-4CB4-9C8C-8EF4CCB58EFE")
SpObjectToken;
EXTERN_C const CLSID CLSID_SpResourceManager;
class DECLSPEC_UUID("96749373-3391-11D2-9EE3-00C04F797396")
SpResourceManager;
EXTERN_C const CLSID CLSID_SpStreamFormatConverter;
class DECLSPEC_UUID("7013943A-E2EC-11D2-A086-00C04F8EF9B5")
SpStreamFormatConverter;
EXTERN_C const CLSID CLSID_SpMMAudioEnum;
class DECLSPEC_UUID("AB1890A0-E91F-11D2-BB91-00C04F8EE6C0")
SpMMAudioEnum;
EXTERN_C const CLSID CLSID_SpMMAudioIn;
class DECLSPEC_UUID("CF3D2E50-53F2-11D2-960C-00C04F8EE628")
SpMMAudioIn;
EXTERN_C const CLSID CLSID_SpMMAudioOut;
class DECLSPEC_UUID("A8C680EB-3D32-11D2-9EE7-00C04F797396")
SpMMAudioOut;
EXTERN_C const CLSID CLSID_SpStream;
class DECLSPEC_UUID("715D9C59-4442-11D2-9605-00C04F8EE628")
SpStream;
EXTERN_C const CLSID CLSID_SpVoice;
class DECLSPEC_UUID("96749377-3391-11D2-9EE3-00C04F797396")
SpVoice;
EXTERN_C const CLSID CLSID_SpSharedRecoContext;
class DECLSPEC_UUID("47206204-5ECA-11D2-960F-00C04F8EE628")
SpSharedRecoContext;
EXTERN_C const CLSID CLSID_SpInprocRecognizer;
class DECLSPEC_UUID("41B89B6B-9399-11D2-9623-00C04F8EE628")
SpInprocRecognizer;
EXTERN_C const CLSID CLSID_SpSharedRecognizer;
class DECLSPEC_UUID("3BEE4890-4FE9-4A37-8C1E-5E7E12791C1F")
SpSharedRecognizer;
EXTERN_C const CLSID CLSID_SpLexicon;
class DECLSPEC_UUID("0655E396-25D0-11D3-9C26-00C04F8EF87C")
SpLexicon;
EXTERN_C const CLSID CLSID_SpUnCompressedLexicon;
class DECLSPEC_UUID("C9E37C15-DF92-4727-85D6-72E5EEB6995A")
SpUnCompressedLexicon;
EXTERN_C const CLSID CLSID_SpCompressedLexicon;
class DECLSPEC_UUID("90903716-2F42-11D3-9C26-00C04F8EF87C")
SpCompressedLexicon;
EXTERN_C const CLSID CLSID_SpPhoneConverter;
class DECLSPEC_UUID("9185F743-1143-4C28-86B5-BFF14F20E5C8")
SpPhoneConverter;
EXTERN_C const CLSID CLSID_SpNullPhoneConverter;
class DECLSPEC_UUID("455F24E9-7396-4A16-9715-7C0FDBE3EFE3")
SpNullPhoneConverter;
EXTERN_C const CLSID CLSID_SpTextSelectionInformation;
class DECLSPEC_UUID("0F92030A-CBFD-4AB8-A164-FF5985547FF6")
SpTextSelectionInformation;
EXTERN_C const CLSID CLSID_SpPhraseInfoBuilder;
class DECLSPEC_UUID("C23FC28D-C55F-4720-8B32-91F73C2BD5D1")
SpPhraseInfoBuilder;
EXTERN_C const CLSID CLSID_SpAudioFormat;
class DECLSPEC_UUID("9EF96870-E160-4792-820D-48CF0649E4EC")
SpAudioFormat;
EXTERN_C const CLSID CLSID_SpWaveFormatEx;
class DECLSPEC_UUID("C79A574C-63BE-44b9-801F-283F87F898BE")
SpWaveFormatEx;
EXTERN_C const CLSID CLSID_SpInProcRecoContext;
class DECLSPEC_UUID("73AD6842-ACE0-45E8-A4DD-8795881A2C2A")
SpInProcRecoContext;
EXTERN_C const CLSID CLSID_SpCustomStream;
class DECLSPEC_UUID("8DBEF13F-1948-4aa8-8CF0-048EEBED95D8")
SpCustomStream;
EXTERN_C const CLSID CLSID_SpFileStream;
class DECLSPEC_UUID("947812B3-2AE1-4644-BA86-9E90DED7EC91")
SpFileStream;
EXTERN_C const CLSID CLSID_SpMemoryStream;
class DECLSPEC_UUID("5FB7EF7D-DFF4-468a-B6B7-2FCBD188F994")
SpMemoryStream;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_sapi51_0000_0032_v0_0_s_ifspec;
}
