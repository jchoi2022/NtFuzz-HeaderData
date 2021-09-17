#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IKeywordDetectorOemAdapter IKeywordDetectorOemAdapter;
#include "unknwn.h"
#include "objidl.h"
#include "mfobjects.h"
extern "C"{
#include "ks.h"
#include "ksmedia.h"
typedef struct __MIDL___MIDL_itf_keyworddetectoroemadapter_0000_0000_0001
    {
    ULONG Size;
    GUID PatternType;
    } SOUNDDETECTOR_PATTERNHEADER;
DEFINE_GUID(IID_IKeywordDetectorOemAdapter , 0xa13f4e6a, 0x3bc5, 0x46b4, 0x88, 0xfb, 0xf3, 0x90, 0x14, 0xb5, 0x1a, 0xc9);
extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0000_v0_0_s_ifspec;
typedef
enum __MIDL_IKeywordDetectorOemAdapter_0002
    {
        KwInvalid = 0,
        KwVoiceAssistant = 1,
        KwSelection = 2
    } KEYWORDID;
typedef unsigned short LANGID;
typedef struct __MIDL_IKeywordDetectorOemAdapter_0003
    {
    KEYWORDID KeywordId;
    LANGID LangId;
    } KEYWORDSELECTOR;
EXTERN_C const IID IID_IKeywordDetectorOemAdapter;
    typedef struct IKeywordDetectorOemAdapterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IKeywordDetectorOemAdapter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IKeywordDetectorOemAdapter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IKeywordDetectorOemAdapter * This);
        HRESULT ( STDMETHODCALLTYPE *GetCapabilities )(
            IKeywordDetectorOemAdapter * This,
                             BOOL *SupportsUserModels,
                              KEYWORDID **KeywordIds,
                             ULONG *NumKeywords,
                              LANGID **LangIds,
                             ULONG *NumLanguages,
                              IMFMediaType **ppMediaType);
        HRESULT ( STDMETHODCALLTYPE *VerifyUserKeyword )(
            IKeywordDetectorOemAdapter * This,
                             IStream *ModelData,
                       KEYWORDID KeywordId,
                       LANGID LangId,
                       LONG KeywordEndBytePos,
                             IMFMediaBuffer *UserRecording);
        HRESULT ( STDMETHODCALLTYPE *ComputeAndAddUserModelData )(
            IKeywordDetectorOemAdapter * This,
                                  IStream *ModelData,
                       KEYWORDSELECTOR KeywordSelector,
                             LONG *KeywordEndBytePos,
                             IMFMediaBuffer **UserRecordings,
                       ULONG NumUserRecordings);
        HRESULT ( STDMETHODCALLTYPE *BuildArmingPatternData )(
            IKeywordDetectorOemAdapter * This,
                             IStream *UserModelData,
                             KEYWORDSELECTOR *KeywordSelectors,
                       ULONG NumKeywordSelectors,
                              SOUNDDETECTOR_PATTERNHEADER **ppPatternData);
        HRESULT ( STDMETHODCALLTYPE *ParseDetectionResultData )(
            IKeywordDetectorOemAdapter * This,
                             IStream *UserModelData,
                             SOUNDDETECTOR_PATTERNHEADER *Result,
                              KEYWORDID *KeywordId,
                              LANGID *LangId,
                              BOOL *pIsUserMatch,
                              ULONG64 *KeywordStartPerformanceCounterValue,
                              ULONG64 *KeywordEndPerformanceCounterValue);
        END_INTERFACE
    } IKeywordDetectorOemAdapterVtbl;
    interface IKeywordDetectorOemAdapter
    {
        CONST_VTBL struct IKeywordDetectorOemAdapterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCapabilities(This,SupportsUserModels,KeywordIds,NumKeywords,LangIds,NumLanguages,ppMediaType) )
    ( (This)->lpVtbl -> VerifyUserKeyword(This,ModelData,KeywordId,LangId,KeywordEndBytePos,UserRecording) )
    ( (This)->lpVtbl -> ComputeAndAddUserModelData(This,ModelData,KeywordSelector,KeywordEndBytePos,UserRecordings,NumUserRecordings) )
    ( (This)->lpVtbl -> BuildArmingPatternData(This,UserModelData,KeywordSelectors,NumKeywordSelectors,ppPatternData) )
    ( (This)->lpVtbl -> ParseDetectionResultData(This,UserModelData,Result,KeywordId,LangId,pIsUserMatch,KeywordStartPerformanceCounterValue,KeywordEndPerformanceCounterValue) )
DEFINE_GUID(CLSID_KeywordDetectorOemAdapter, 0x76882aa2, 0x2e80, 0x48f1, 0xa1, 0x4e, 0x4d, 0xb1, 0xfa, 0xc1, 0xf8, 0x49);
extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_keyworddetectoroemadapter_0000_0001_v0_0_s_ifspec;
}
