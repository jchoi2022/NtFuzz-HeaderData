#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITfCandidateString ITfCandidateString;
typedef interface IEnumTfCandidates IEnumTfCandidates;
typedef interface ITfCandidateList ITfCandidateList;
typedef interface ITfFnReconversion ITfFnReconversion;
typedef interface ITfFnPlayBack ITfFnPlayBack;
typedef interface ITfFnLangProfileUtil ITfFnLangProfileUtil;
typedef interface ITfFnConfigure ITfFnConfigure;
typedef interface ITfFnConfigureRegisterWord ITfFnConfigureRegisterWord;
typedef interface ITfFnConfigureRegisterEudc ITfFnConfigureRegisterEudc;
typedef interface ITfFnShowHelp ITfFnShowHelp;
typedef interface ITfFnBalloon ITfFnBalloon;
typedef interface ITfFnGetSAPIObject ITfFnGetSAPIObject;
typedef interface ITfFnPropertyUIStatus ITfFnPropertyUIStatus;
typedef interface IEnumSpeechCommands IEnumSpeechCommands;
typedef interface ISpeechCommandProvider ISpeechCommandProvider;
typedef interface ITfFnCustomSpeechCommand ITfFnCustomSpeechCommand;
typedef interface ITfFnLMProcessor ITfFnLMProcessor;
typedef interface ITfFnLMInternal ITfFnLMInternal;
typedef interface IEnumTfLatticeElements IEnumTfLatticeElements;
typedef interface ITfLMLattice ITfLMLattice;
typedef interface ITfFnAdviseText ITfFnAdviseText;
typedef interface ITfFnSearchCandidateProvider ITfFnSearchCandidateProvider;
typedef interface ITfIntegratableCandidateListUIElement ITfIntegratableCandidateListUIElement;
typedef interface ITfFnGetPreferredTouchKeyboardLayout ITfFnGetPreferredTouchKeyboardLayout;
typedef interface ITfFnGetLinguisticAlternates ITfFnGetLinguisticAlternates;
typedef interface IUIManagerEventSink IUIManagerEventSink;
#include "oaidl.h"
#include "msctf.h"
extern "C"{
#include <winapifamily.h>
#include <windows.h>
extern "C" {
}
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_SapiLayr;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfCandidateString;
    typedef struct ITfCandidateStringVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCandidateString * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCandidateString * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCandidateString * This);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in ITfCandidateString * This,
                        __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *GetIndex )(
            __RPC__in ITfCandidateString * This,
                        __RPC__out ULONG *pnIndex);
        END_INTERFACE
    } ITfCandidateStringVtbl;
    interface ITfCandidateString
    {
        CONST_VTBL struct ITfCandidateStringVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetString(This,pbstr) )
    ( (This)->lpVtbl -> GetIndex(This,pnIndex) )
EXTERN_C const IID IID_IEnumTfCandidates;
    typedef struct IEnumTfCandidatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfCandidates * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfCandidates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfCandidates * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfCandidates * This,
                        __RPC__deref_out_opt IEnumTfCandidates **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfCandidates * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfCandidateString **ppCand,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfCandidates * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfCandidates * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfCandidatesVtbl;
    interface IEnumTfCandidates
    {
        CONST_VTBL struct IEnumTfCandidatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,ppCand,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
typedef DECLSPEC_UUID("baa898f2-0207-4643-92ca-f3f7b0cf6f80")
enum __MIDL_ITfCandidateList_0001
    {
        CAND_FINALIZED = 0,
        CAND_SELECTED = 0x1,
        CAND_CANCELED = 0x2
    } TfCandidateResult;
EXTERN_C const IID IID_ITfCandidateList;
    typedef struct ITfCandidateListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCandidateList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCandidateList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCandidateList * This);
        HRESULT ( STDMETHODCALLTYPE *EnumCandidates )(
            __RPC__in ITfCandidateList * This,
                        __RPC__deref_out_opt IEnumTfCandidates **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetCandidate )(
            __RPC__in ITfCandidateList * This,
                       ULONG nIndex,
                        __RPC__deref_out_opt ITfCandidateString **ppCand);
        HRESULT ( STDMETHODCALLTYPE *GetCandidateNum )(
            __RPC__in ITfCandidateList * This,
                        __RPC__out ULONG *pnCnt);
        HRESULT ( STDMETHODCALLTYPE *SetResult )(
            __RPC__in ITfCandidateList * This,
                       ULONG nIndex,
                       TfCandidateResult imcr);
        END_INTERFACE
    } ITfCandidateListVtbl;
    interface ITfCandidateList
    {
        CONST_VTBL struct ITfCandidateListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumCandidates(This,ppEnum) )
    ( (This)->lpVtbl -> GetCandidate(This,nIndex,ppCand) )
    ( (This)->lpVtbl -> GetCandidateNum(This,pnCnt) )
    ( (This)->lpVtbl -> SetResult(This,nIndex,imcr) )
EXTERN_C const IID IID_ITfFnReconversion;
    typedef struct ITfFnReconversionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnReconversion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnReconversion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnReconversion * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnReconversion * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *QueryRange )(
            __RPC__in ITfFnReconversion * This,
                       __RPC__in_opt ITfRange *pRange,
                                    __RPC__deref_opt_inout_opt ITfRange **ppNewRange,
                        __RPC__out BOOL *pfConvertable);
        HRESULT ( STDMETHODCALLTYPE *GetReconversion )(
            __RPC__in ITfFnReconversion * This,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfCandidateList **ppCandList);
        HRESULT ( STDMETHODCALLTYPE *Reconvert )(
            __RPC__in ITfFnReconversion * This,
                       __RPC__in_opt ITfRange *pRange);
        END_INTERFACE
    } ITfFnReconversionVtbl;
    interface ITfFnReconversion
    {
        CONST_VTBL struct ITfFnReconversionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfConvertable) )
    ( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) )
    ( (This)->lpVtbl -> Reconvert(This,pRange) )
EXTERN_C const GUID GUID_COMPARTMENT_SAPI_AUDIO;
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_DICTATIONSTAT;
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_UI_STATUS;
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_CFGMENU;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const GUID GUID_LBI_SAPILAYR_CFGMENUBUTTON;
EXTERN_C const GUID GUID_LBI_INPUTMODE;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfFnPlayBack;
    typedef struct ITfFnPlayBackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnPlayBack * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnPlayBack * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnPlayBack * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnPlayBack * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *QueryRange )(
            __RPC__in ITfFnPlayBack * This,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfRange **ppNewRange,
                        __RPC__out BOOL *pfPlayable);
        HRESULT ( STDMETHODCALLTYPE *Play )(
            __RPC__in ITfFnPlayBack * This,
                       __RPC__in_opt ITfRange *pRange);
        END_INTERFACE
    } ITfFnPlayBackVtbl;
    interface ITfFnPlayBack
    {
        CONST_VTBL struct ITfFnPlayBackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfPlayable) )
    ( (This)->lpVtbl -> Play(This,pRange) )
EXTERN_C const IID IID_ITfFnLangProfileUtil;
    typedef struct ITfFnLangProfileUtilVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnLangProfileUtil * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnLangProfileUtil * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnLangProfileUtil * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnLangProfileUtil * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *RegisterActiveProfiles )(
            __RPC__in ITfFnLangProfileUtil * This);
        HRESULT ( STDMETHODCALLTYPE *IsProfileAvailableForLang )(
            __RPC__in ITfFnLangProfileUtil * This,
                       LANGID langid,
                        __RPC__out BOOL *pfAvailable);
        END_INTERFACE
    } ITfFnLangProfileUtilVtbl;
    interface ITfFnLangProfileUtil
    {
        CONST_VTBL struct ITfFnLangProfileUtilVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> RegisterActiveProfiles(This) )
    ( (This)->lpVtbl -> IsProfileAvailableForLang(This,langid,pfAvailable) )
EXTERN_C const IID IID_ITfFnConfigure;
    typedef struct ITfFnConfigureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnConfigure * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnConfigure * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnConfigure * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnConfigure * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfFnConfigure * This,
                       __RPC__in HWND hwndParent,
                       LANGID langid,
                       __RPC__in REFGUID rguidProfile);
        END_INTERFACE
    } ITfFnConfigureVtbl;
    interface ITfFnConfigure
    {
        CONST_VTBL struct ITfFnConfigureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile) )
EXTERN_C const IID IID_ITfFnConfigureRegisterWord;
    typedef struct ITfFnConfigureRegisterWordVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnConfigureRegisterWord * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnConfigureRegisterWord * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnConfigureRegisterWord * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnConfigureRegisterWord * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfFnConfigureRegisterWord * This,
                       __RPC__in HWND hwndParent,
                       LANGID langid,
                       __RPC__in REFGUID rguidProfile,
                               __RPC__in_opt BSTR bstrRegistered);
        END_INTERFACE
    } ITfFnConfigureRegisterWordVtbl;
    interface ITfFnConfigureRegisterWord
    {
        CONST_VTBL struct ITfFnConfigureRegisterWordVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile,bstrRegistered) )
EXTERN_C const IID IID_ITfFnConfigureRegisterEudc;
    typedef struct ITfFnConfigureRegisterEudcVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnConfigureRegisterEudc * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnConfigureRegisterEudc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnConfigureRegisterEudc * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnConfigureRegisterEudc * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfFnConfigureRegisterEudc * This,
                       __RPC__in HWND hwndParent,
                       LANGID langid,
                       __RPC__in REFGUID rguidProfile,
                               __RPC__in_opt BSTR bstrRegistered);
        END_INTERFACE
    } ITfFnConfigureRegisterEudcVtbl;
    interface ITfFnConfigureRegisterEudc
    {
        CONST_VTBL struct ITfFnConfigureRegisterEudcVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> Show(This,hwndParent,langid,rguidProfile,bstrRegistered) )
EXTERN_C const IID IID_ITfFnShowHelp;
    typedef struct ITfFnShowHelpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnShowHelp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnShowHelp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnShowHelp * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnShowHelp * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITfFnShowHelp * This,
                       __RPC__in HWND hwndParent);
        END_INTERFACE
    } ITfFnShowHelpVtbl;
    interface ITfFnShowHelp
    {
        CONST_VTBL struct ITfFnShowHelpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> Show(This,hwndParent) )
EXTERN_C const IID IID_ITfFnBalloon;
    typedef struct ITfFnBalloonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnBalloon * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnBalloon * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnBalloon * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateBalloon )(
            __RPC__in ITfFnBalloon * This,
                       TfLBBalloonStyle style,
                                __RPC__in_ecount_full(cch) const WCHAR *pch,
                       ULONG cch);
        END_INTERFACE
    } ITfFnBalloonVtbl;
    interface ITfFnBalloon
    {
        CONST_VTBL struct ITfFnBalloonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UpdateBalloon(This,style,pch,cch) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("36adb6d9-da1f-45d8-a499-86167e0f936b")
enum __MIDL___MIDL_itf_ctffunc_0000_0011_0001
    {
        GETIF_RESMGR = 0,
        GETIF_RECOCONTEXT = 0x1,
        GETIF_RECOGNIZER = 0x2,
        GETIF_VOICE = 0x3,
        GETIF_DICTGRAM = 0x4,
        GETIF_RECOGNIZERNOINIT = 0x5
    } TfSapiObject;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfFnGetSAPIObject;
    typedef struct ITfFnGetSAPIObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnGetSAPIObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnGetSAPIObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnGetSAPIObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnGetSAPIObject * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *Get )(
            __RPC__in ITfFnGetSAPIObject * This,
                       TfSapiObject sObj,
                        __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } ITfFnGetSAPIObjectVtbl;
    interface ITfFnGetSAPIObject
    {
        CONST_VTBL struct ITfFnGetSAPIObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> Get(This,sObj,ppunk) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfFnPropertyUIStatus;
    typedef struct ITfFnPropertyUIStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnPropertyUIStatus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnPropertyUIStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnPropertyUIStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnPropertyUIStatus * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfFnPropertyUIStatus * This,
                       __RPC__in REFGUID refguidProp,
                        __RPC__out DWORD *pdw);
        HRESULT ( STDMETHODCALLTYPE *SetStatus )(
            __RPC__in ITfFnPropertyUIStatus * This,
                       __RPC__in REFGUID refguidProp,
                       DWORD dw);
        END_INTERFACE
    } ITfFnPropertyUIStatusVtbl;
    interface ITfFnPropertyUIStatus
    {
        CONST_VTBL struct ITfFnPropertyUIStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> GetStatus(This,refguidProp,pdw) )
    ( (This)->lpVtbl -> SetStatus(This,refguidProp,dw) )
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumSpeechCommands;
    typedef struct IEnumSpeechCommandsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSpeechCommands * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSpeechCommands * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSpeechCommands * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSpeechCommands * This,
                        __RPC__deref_out_opt IEnumSpeechCommands **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSpeechCommands * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) WCHAR **pSpCmds,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSpeechCommands * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSpeechCommands * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumSpeechCommandsVtbl;
    interface IEnumSpeechCommands
    {
        CONST_VTBL struct IEnumSpeechCommandsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,pSpCmds,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ISpeechCommandProvider;
    typedef struct ISpeechCommandProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpeechCommandProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpeechCommandProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpeechCommandProvider * This);
        HRESULT ( STDMETHODCALLTYPE *EnumSpeechCommands )(
            __RPC__in ISpeechCommandProvider * This,
                       LANGID langid,
                        __RPC__deref_out_opt IEnumSpeechCommands **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *ProcessCommand )(
            __RPC__in ISpeechCommandProvider * This,
                                __RPC__in_ecount_full(cch) const WCHAR *pszCommand,
                       ULONG cch,
                       LANGID langid);
        END_INTERFACE
    } ISpeechCommandProviderVtbl;
    interface ISpeechCommandProvider
    {
        CONST_VTBL struct ISpeechCommandProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumSpeechCommands(This,langid,ppEnum) )
    ( (This)->lpVtbl -> ProcessCommand(This,pszCommand,cch,langid) )
EXTERN_C const IID IID_ITfFnCustomSpeechCommand;
    typedef struct ITfFnCustomSpeechCommandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnCustomSpeechCommand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnCustomSpeechCommand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnCustomSpeechCommand * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnCustomSpeechCommand * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *SetSpeechCommandProvider )(
            __RPC__in ITfFnCustomSpeechCommand * This,
                       __RPC__in_opt IUnknown *pspcmdProvider);
        END_INTERFACE
    } ITfFnCustomSpeechCommandVtbl;
    interface ITfFnCustomSpeechCommand
    {
        CONST_VTBL struct ITfFnCustomSpeechCommandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> SetSpeechCommandProvider(This,pspcmdProvider) )
EXTERN_C const GUID GUID_TFCAT_TIP_MASTERLM;
EXTERN_C const GUID GUID_MASTERLM_FUNCTIONPROVIDER;
EXTERN_C const GUID GUID_LMLATTICE_VER1_0;
EXTERN_C const GUID GUID_PROP_LMLATTICE;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfFnLMProcessor;
    typedef struct ITfFnLMProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnLMProcessor * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnLMProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnLMProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnLMProcessor * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *QueryRange )(
            __RPC__in ITfFnLMProcessor * This,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfRange **ppNewRange,
                        __RPC__out BOOL *pfAccepted);
        HRESULT ( STDMETHODCALLTYPE *QueryLangID )(
            __RPC__in ITfFnLMProcessor * This,
                       LANGID langid,
                        __RPC__out BOOL *pfAccepted);
        HRESULT ( STDMETHODCALLTYPE *GetReconversion )(
            __RPC__in ITfFnLMProcessor * This,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfCandidateList **ppCandList);
        HRESULT ( STDMETHODCALLTYPE *Reconvert )(
            __RPC__in ITfFnLMProcessor * This,
                       __RPC__in_opt ITfRange *pRange);
        HRESULT ( STDMETHODCALLTYPE *QueryKey )(
            __RPC__in ITfFnLMProcessor * This,
                       BOOL fUp,
                       WPARAM vKey,
                       LPARAM lparamKeydata,
                        __RPC__out BOOL *pfInterested);
        HRESULT ( STDMETHODCALLTYPE *InvokeKey )(
            __RPC__in ITfFnLMProcessor * This,
                       BOOL fUp,
                       WPARAM vKey,
                       LPARAM lparamKeyData);
        HRESULT ( STDMETHODCALLTYPE *InvokeFunc )(
            __RPC__in ITfFnLMProcessor * This,
                       __RPC__in_opt ITfContext *pic,
                       __RPC__in REFGUID refguidFunc);
        END_INTERFACE
    } ITfFnLMProcessorVtbl;
    interface ITfFnLMProcessor
    {
        CONST_VTBL struct ITfFnLMProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfAccepted) )
    ( (This)->lpVtbl -> QueryLangID(This,langid,pfAccepted) )
    ( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) )
    ( (This)->lpVtbl -> Reconvert(This,pRange) )
    ( (This)->lpVtbl -> QueryKey(This,fUp,vKey,lparamKeydata,pfInterested) )
    ( (This)->lpVtbl -> InvokeKey(This,fUp,vKey,lparamKeyData) )
    ( (This)->lpVtbl -> InvokeFunc(This,pic,refguidFunc) )
EXTERN_C const IID IID_ITfFnLMInternal;
    typedef struct ITfFnLMInternalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnLMInternal * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnLMInternal * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnLMInternal * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnLMInternal * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *QueryRange )(
            __RPC__in ITfFnLMInternal * This,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfRange **ppNewRange,
                        __RPC__out BOOL *pfAccepted);
        HRESULT ( STDMETHODCALLTYPE *QueryLangID )(
            __RPC__in ITfFnLMInternal * This,
                       LANGID langid,
                        __RPC__out BOOL *pfAccepted);
        HRESULT ( STDMETHODCALLTYPE *GetReconversion )(
            __RPC__in ITfFnLMInternal * This,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfCandidateList **ppCandList);
        HRESULT ( STDMETHODCALLTYPE *Reconvert )(
            __RPC__in ITfFnLMInternal * This,
                       __RPC__in_opt ITfRange *pRange);
        HRESULT ( STDMETHODCALLTYPE *QueryKey )(
            __RPC__in ITfFnLMInternal * This,
                       BOOL fUp,
                       WPARAM vKey,
                       LPARAM lparamKeydata,
                        __RPC__out BOOL *pfInterested);
        HRESULT ( STDMETHODCALLTYPE *InvokeKey )(
            __RPC__in ITfFnLMInternal * This,
                       BOOL fUp,
                       WPARAM vKey,
                       LPARAM lparamKeyData);
        HRESULT ( STDMETHODCALLTYPE *InvokeFunc )(
            __RPC__in ITfFnLMInternal * This,
                       __RPC__in_opt ITfContext *pic,
                       __RPC__in REFGUID refguidFunc);
        HRESULT ( STDMETHODCALLTYPE *ProcessLattice )(
            __RPC__in ITfFnLMInternal * This,
                       __RPC__in_opt ITfRange *pRange);
        END_INTERFACE
    } ITfFnLMInternalVtbl;
    interface ITfFnLMInternal
    {
        CONST_VTBL struct ITfFnLMInternalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> QueryRange(This,pRange,ppNewRange,pfAccepted) )
    ( (This)->lpVtbl -> QueryLangID(This,langid,pfAccepted) )
    ( (This)->lpVtbl -> GetReconversion(This,pRange,ppCandList) )
    ( (This)->lpVtbl -> Reconvert(This,pRange) )
    ( (This)->lpVtbl -> QueryKey(This,fUp,vKey,lparamKeydata,pfInterested) )
    ( (This)->lpVtbl -> InvokeKey(This,fUp,vKey,lparamKeyData) )
    ( (This)->lpVtbl -> InvokeFunc(This,pic,refguidFunc) )
    ( (This)->lpVtbl -> ProcessLattice(This,pRange) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("1b646efe-3ce3-4ce2-b41f-35b93fe5552f") struct TF_LMLATTELEMENT
    {
    DWORD dwFrameStart;
    DWORD dwFrameLen;
    DWORD dwFlags;
                                   union
        {
                       INT iCost;
        } ;
    BSTR bstrText;
    } TF_LMLATTELEMENT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumTfLatticeElements;
    typedef struct IEnumTfLatticeElementsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfLatticeElements * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfLatticeElements * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfLatticeElements * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfLatticeElements * This,
                        __RPC__deref_out_opt IEnumTfLatticeElements **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfLatticeElements * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TF_LMLATTELEMENT *rgsElements,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfLatticeElements * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfLatticeElements * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfLatticeElementsVtbl;
    interface IEnumTfLatticeElements
    {
        CONST_VTBL struct IEnumTfLatticeElementsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgsElements,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfLMLattice;
    typedef struct ITfLMLatticeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLMLattice * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLMLattice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLMLattice * This);
        HRESULT ( STDMETHODCALLTYPE *QueryType )(
            __RPC__in ITfLMLattice * This,
                       __RPC__in REFGUID rguidType,
                        __RPC__out BOOL *pfSupported);
        HRESULT ( STDMETHODCALLTYPE *EnumLatticeElements )(
            __RPC__in ITfLMLattice * This,
                       DWORD dwFrameStart,
                       __RPC__in REFGUID rguidType,
                        __RPC__deref_out_opt IEnumTfLatticeElements **ppEnum);
        END_INTERFACE
    } ITfLMLatticeVtbl;
    interface ITfLMLattice
    {
        CONST_VTBL struct ITfLMLatticeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryType(This,rguidType,pfSupported) )
    ( (This)->lpVtbl -> EnumLatticeElements(This,dwFrameStart,rguidType,ppEnum) )
EXTERN_C const IID IID_ITfFnAdviseText;
    typedef struct ITfFnAdviseTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnAdviseText * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnAdviseText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnAdviseText * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnAdviseText * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *OnTextUpdate )(
            __RPC__in ITfFnAdviseText * This,
                       __RPC__in_opt ITfRange *pRange,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       LONG cch);
        HRESULT ( STDMETHODCALLTYPE *OnLatticeUpdate )(
            __RPC__in ITfFnAdviseText * This,
                       __RPC__in_opt ITfRange *pRange,
                       __RPC__in_opt ITfLMLattice *pLattice);
        END_INTERFACE
    } ITfFnAdviseTextVtbl;
    interface ITfFnAdviseText
    {
        CONST_VTBL struct ITfFnAdviseTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> OnTextUpdate(This,pRange,pchText,cch) )
    ( (This)->lpVtbl -> OnLatticeUpdate(This,pRange,pLattice) )
EXTERN_C const IID IID_ITfFnSearchCandidateProvider;
    typedef struct ITfFnSearchCandidateProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnSearchCandidateProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnSearchCandidateProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnSearchCandidateProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnSearchCandidateProvider * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetSearchCandidates )(
            __RPC__in ITfFnSearchCandidateProvider * This,
                       __RPC__in BSTR bstrQuery,
                       __RPC__in BSTR bstrApplicationId,
                        __RPC__deref_out_opt ITfCandidateList **pplist);
        HRESULT ( STDMETHODCALLTYPE *SetResult )(
            __RPC__in ITfFnSearchCandidateProvider * This,
                       __RPC__in BSTR bstrQuery,
                       __RPC__in BSTR bstrApplicationID,
                       __RPC__in BSTR bstrResult);
        END_INTERFACE
    } ITfFnSearchCandidateProviderVtbl;
    interface ITfFnSearchCandidateProvider
    {
        CONST_VTBL struct ITfFnSearchCandidateProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> GetSearchCandidates(This,bstrQuery,bstrApplicationId,pplist) )
    ( (This)->lpVtbl -> SetResult(This,bstrQuery,bstrApplicationID,bstrResult) )
DEFINE_GUID(GUID_INTEGRATIONSTYLE_SEARCHBOX, 0xe6d1bd11, 0x82f7, 0x4903, 0xae, 0x21, 0x1a, 0x63, 0x97, 0xcd, 0xe2, 0xeb);
typedef DECLSPEC_UUID("AF8F5D86-0615-4af3-90FA-5DCBB407A5D4")
enum __MIDL___MIDL_itf_ctffunc_0000_0022_0001
    {
        STYLE_ACTIVE_SELECTION = 0,
        STYLE_IMPLIED_SELECTION = 0x1
    } TfIntegratableCandidateListSelectionStyle;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfIntegratableCandidateListUIElement;
    typedef struct ITfIntegratableCandidateListUIElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfIntegratableCandidateListUIElement * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfIntegratableCandidateListUIElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfIntegratableCandidateListUIElement * This);
        HRESULT ( STDMETHODCALLTYPE *SetIntegrationStyle )(
            __RPC__in ITfIntegratableCandidateListUIElement * This,
                       GUID guidIntegrationStyle);
        HRESULT ( STDMETHODCALLTYPE *GetSelectionStyle )(
            __RPC__in ITfIntegratableCandidateListUIElement * This,
                        __RPC__out TfIntegratableCandidateListSelectionStyle *ptfSelectionStyle);
        HRESULT ( STDMETHODCALLTYPE *OnKeyDown )(
            __RPC__in ITfIntegratableCandidateListUIElement * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        __RPC__out BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *ShowCandidateNumbers )(
            __RPC__in ITfIntegratableCandidateListUIElement * This,
                        __RPC__out BOOL *pfShow);
        HRESULT ( STDMETHODCALLTYPE *FinalizeExactCompositionString )(
            __RPC__in ITfIntegratableCandidateListUIElement * This);
        END_INTERFACE
    } ITfIntegratableCandidateListUIElementVtbl;
    interface ITfIntegratableCandidateListUIElement
    {
        CONST_VTBL struct ITfIntegratableCandidateListUIElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetIntegrationStyle(This,guidIntegrationStyle) )
    ( (This)->lpVtbl -> GetSelectionStyle(This,ptfSelectionStyle) )
    ( (This)->lpVtbl -> OnKeyDown(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> ShowCandidateNumbers(This,pfShow) )
    ( (This)->lpVtbl -> FinalizeExactCompositionString(This) )
typedef DECLSPEC_UUID("E9967127-FB3C-4978-9008-FB3060D92730")
enum __MIDL_ITfFnGetPreferredTouchKeyboardLayout_0001
    {
        TKBLT_UNDEFINED = 0,
        TKBLT_CLASSIC = 1,
        TKBLT_OPTIMIZED = 2
    } TKBLayoutType;
EXTERN_C const IID IID_ITfFnGetPreferredTouchKeyboardLayout;
    typedef struct ITfFnGetPreferredTouchKeyboardLayoutVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFnGetPreferredTouchKeyboardLayout * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFnGetPreferredTouchKeyboardLayout * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFnGetPreferredTouchKeyboardLayout * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFnGetPreferredTouchKeyboardLayout * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetLayout )(
            __RPC__in ITfFnGetPreferredTouchKeyboardLayout * This,
                        __RPC__out TKBLayoutType *pTKBLayoutType,
            __RPC__in WORD *pwPreferredLayoutId);
        END_INTERFACE
    } ITfFnGetPreferredTouchKeyboardLayoutVtbl;
    interface ITfFnGetPreferredTouchKeyboardLayout
    {
        CONST_VTBL struct ITfFnGetPreferredTouchKeyboardLayoutVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> GetLayout(This,pTKBLayoutType,pwPreferredLayoutId) )
EXTERN_C const IID IID_ITfFnGetLinguisticAlternates;
    typedef struct ITfFnGetLinguisticAlternatesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfFnGetLinguisticAlternates * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfFnGetLinguisticAlternates * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfFnGetLinguisticAlternates * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            ITfFnGetLinguisticAlternates * This,
                        BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetAlternates )(
            ITfFnGetLinguisticAlternates * This,
            _In_ ITfRange *pRange,
            _COM_Outptr_ ITfCandidateList **ppCandidateList);
        END_INTERFACE
    } ITfFnGetLinguisticAlternatesVtbl;
    interface ITfFnGetLinguisticAlternates
    {
        CONST_VTBL struct ITfFnGetLinguisticAlternatesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
    ( (This)->lpVtbl -> GetAlternates(This,pRange,ppCandidateList) )
EXTERN_C const IID IID_IUIManagerEventSink;
    typedef struct IUIManagerEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUIManagerEventSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUIManagerEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUIManagerEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnWindowOpening )(
            IUIManagerEventSink * This,
            _In_ RECT *prcBounds);
        HRESULT ( STDMETHODCALLTYPE *OnWindowOpened )(
            IUIManagerEventSink * This,
            _In_ RECT *prcBounds);
        HRESULT ( STDMETHODCALLTYPE *OnWindowUpdating )(
            IUIManagerEventSink * This,
            _In_ RECT *prcUpdatedBounds);
        HRESULT ( STDMETHODCALLTYPE *OnWindowUpdated )(
            IUIManagerEventSink * This,
            _In_ RECT *prcUpdatedBounds);
        HRESULT ( STDMETHODCALLTYPE *OnWindowClosing )(
            IUIManagerEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnWindowClosed )(
            IUIManagerEventSink * This);
        END_INTERFACE
    } IUIManagerEventSinkVtbl;
    interface IUIManagerEventSink
    {
        CONST_VTBL struct IUIManagerEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnWindowOpening(This,prcBounds) )
    ( (This)->lpVtbl -> OnWindowOpened(This,prcBounds) )
    ( (This)->lpVtbl -> OnWindowUpdating(This,prcUpdatedBounds) )
    ( (This)->lpVtbl -> OnWindowUpdated(This,prcUpdatedBounds) )
    ( (This)->lpVtbl -> OnWindowClosing(This) )
    ( (This)->lpVtbl -> OnWindowClosed(This) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_ctffunc_0000_0026_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
