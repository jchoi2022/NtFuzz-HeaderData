#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITfThreadMgr ITfThreadMgr;
typedef interface ITfThreadMgrEx ITfThreadMgrEx;
typedef interface ITfThreadMgr2 ITfThreadMgr2;
typedef interface ITfThreadMgrEventSink ITfThreadMgrEventSink;
typedef interface ITfConfigureSystemKeystrokeFeed ITfConfigureSystemKeystrokeFeed;
typedef interface IEnumTfDocumentMgrs IEnumTfDocumentMgrs;
typedef interface ITfDocumentMgr ITfDocumentMgr;
typedef interface IEnumTfContexts IEnumTfContexts;
typedef interface ITfCompositionView ITfCompositionView;
typedef interface IEnumITfCompositionView IEnumITfCompositionView;
typedef interface ITfComposition ITfComposition;
typedef interface ITfCompositionSink ITfCompositionSink;
typedef interface ITfContextComposition ITfContextComposition;
typedef interface ITfContextOwnerCompositionServices ITfContextOwnerCompositionServices;
typedef interface ITfContextOwnerCompositionSink ITfContextOwnerCompositionSink;
typedef interface ITfContextView ITfContextView;
typedef interface IEnumTfContextViews IEnumTfContextViews;
typedef interface ITfContext ITfContext;
typedef interface ITfQueryEmbedded ITfQueryEmbedded;
typedef interface ITfInsertAtSelection ITfInsertAtSelection;
typedef interface ITfCleanupContextSink ITfCleanupContextSink;
typedef interface ITfCleanupContextDurationSink ITfCleanupContextDurationSink;
typedef interface ITfReadOnlyProperty ITfReadOnlyProperty;
typedef interface IEnumTfPropertyValue IEnumTfPropertyValue;
typedef interface ITfMouseTracker ITfMouseTracker;
typedef interface ITfMouseTrackerACP ITfMouseTrackerACP;
typedef interface ITfMouseSink ITfMouseSink;
typedef interface ITfEditRecord ITfEditRecord;
typedef interface ITfTextEditSink ITfTextEditSink;
typedef interface ITfTextLayoutSink ITfTextLayoutSink;
typedef interface ITfStatusSink ITfStatusSink;
typedef interface ITfEditTransactionSink ITfEditTransactionSink;
typedef interface ITfContextOwner ITfContextOwner;
typedef interface ITfContextOwnerServices ITfContextOwnerServices;
typedef interface ITfContextKeyEventSink ITfContextKeyEventSink;
typedef interface ITfEditSession ITfEditSession;
typedef interface ITfRange ITfRange;
typedef interface ITfRangeACP ITfRangeACP;
typedef interface ITextStoreACPServices ITextStoreACPServices;
typedef interface ITfRangeBackup ITfRangeBackup;
typedef interface ITfPropertyStore ITfPropertyStore;
typedef interface IEnumTfRanges IEnumTfRanges;
typedef interface ITfCreatePropertyStore ITfCreatePropertyStore;
typedef interface ITfPersistentPropertyLoaderACP ITfPersistentPropertyLoaderACP;
typedef interface ITfProperty ITfProperty;
typedef interface IEnumTfProperties IEnumTfProperties;
typedef interface ITfCompartment ITfCompartment;
typedef interface ITfCompartmentEventSink ITfCompartmentEventSink;
typedef interface ITfCompartmentMgr ITfCompartmentMgr;
typedef interface ITfFunction ITfFunction;
typedef interface ITfFunctionProvider ITfFunctionProvider;
typedef interface IEnumTfFunctionProviders IEnumTfFunctionProviders;
typedef interface ITfInputProcessorProfiles ITfInputProcessorProfiles;
typedef interface ITfInputProcessorProfilesEx ITfInputProcessorProfilesEx;
typedef interface ITfInputProcessorProfileSubstituteLayout ITfInputProcessorProfileSubstituteLayout;
typedef interface ITfActiveLanguageProfileNotifySink ITfActiveLanguageProfileNotifySink;
typedef interface IEnumTfLanguageProfiles IEnumTfLanguageProfiles;
typedef interface ITfLanguageProfileNotifySink ITfLanguageProfileNotifySink;
typedef interface ITfInputProcessorProfileMgr ITfInputProcessorProfileMgr;
typedef interface IEnumTfInputProcessorProfiles IEnumTfInputProcessorProfiles;
typedef interface ITfInputProcessorProfileActivationSink ITfInputProcessorProfileActivationSink;
typedef interface ITfKeystrokeMgr ITfKeystrokeMgr;
typedef interface ITfKeyEventSink ITfKeyEventSink;
typedef interface ITfKeyTraceEventSink ITfKeyTraceEventSink;
typedef interface ITfPreservedKeyNotifySink ITfPreservedKeyNotifySink;
typedef interface ITfMessagePump ITfMessagePump;
typedef interface ITfThreadFocusSink ITfThreadFocusSink;
typedef interface ITfTextInputProcessor ITfTextInputProcessor;
typedef interface ITfTextInputProcessorEx ITfTextInputProcessorEx;
typedef interface ITfClientId ITfClientId;
typedef interface ITfDisplayAttributeInfo ITfDisplayAttributeInfo;
typedef interface IEnumTfDisplayAttributeInfo IEnumTfDisplayAttributeInfo;
typedef interface ITfDisplayAttributeProvider ITfDisplayAttributeProvider;
typedef interface ITfDisplayAttributeMgr ITfDisplayAttributeMgr;
typedef interface ITfDisplayAttributeNotifySink ITfDisplayAttributeNotifySink;
typedef interface ITfCategoryMgr ITfCategoryMgr;
typedef interface ITfSource ITfSource;
typedef interface ITfSourceSingle ITfSourceSingle;
typedef interface ITfUIElementMgr ITfUIElementMgr;
typedef interface IEnumTfUIElements IEnumTfUIElements;
typedef interface ITfUIElementSink ITfUIElementSink;
typedef interface ITfUIElement ITfUIElement;
typedef interface ITfCandidateListUIElement ITfCandidateListUIElement;
typedef interface ITfCandidateListUIElementBehavior ITfCandidateListUIElementBehavior;
typedef interface ITfReadingInformationUIElement ITfReadingInformationUIElement;
typedef interface ITfTransitoryExtensionUIElement ITfTransitoryExtensionUIElement;
typedef interface ITfTransitoryExtensionSink ITfTransitoryExtensionSink;
typedef interface ITfToolTipUIElement ITfToolTipUIElement;
typedef interface ITfReverseConversionList ITfReverseConversionList;
typedef interface ITfReverseConversion ITfReverseConversion;
typedef interface ITfReverseConversionMgr ITfReverseConversionMgr;
#include "oaidl.h"
#include "comcat.h"
#include "textstor.h"
#include "ctfutb.h"
extern "C"{
#include <winapifamily.h>
#include <windows.h>
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
HRESULT WINAPI TF_CreateThreadMgr(ITfThreadMgr **pptim);
HRESULT WINAPI TF_GetThreadMgr(ITfThreadMgr **pptim);
HRESULT WINAPI TF_CreateInputProcessorProfiles(ITfInputProcessorProfiles **ppipr);
HRESULT WINAPI TF_CreateDisplayAttributeMgr(ITfDisplayAttributeMgr **ppdam);
HRESULT WINAPI TF_CreateLangBarMgr(ITfLangBarMgr **pppbm);
HRESULT WINAPI TF_CreateLangBarItemMgr(ITfLangBarItemMgr **pplbim);
HRESULT WINAPI TF_CreateCategoryMgr(ITfCategoryMgr **ppcat);
EXTERN_C const GUID GUID_PROP_TEXTOWNER;
EXTERN_C const GUID GUID_PROP_ATTRIBUTE;
EXTERN_C const GUID GUID_PROP_LANGID;
EXTERN_C const GUID GUID_PROP_READING;
EXTERN_C const GUID GUID_PROP_COMPOSING;
EXTERN_C const GUID GUID_PROP_TKB_ALTERNATES;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_C const CLSID CLSID_TF_ThreadMgr;
EXTERN_C const CLSID CLSID_TF_InputProcessorProfiles;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_TF_LangBarMgr;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_C const CLSID CLSID_TF_DisplayAttributeMgr;
EXTERN_C const CLSID CLSID_TF_CategoryMgr;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
EXTERN_C const CLSID CLSID_TF_LangBarItemMgr;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
EXTERN_C const GUID GUID_SYSTEM_FUNCTIONPROVIDER;
EXTERN_C const GUID GUID_APP_FUNCTIONPROVIDER;
EXTERN_C const GUID GUID_COMPARTMENT_KEYBOARD_DISABLED;
EXTERN_C const GUID GUID_COMPARTMENT_KEYBOARD_OPENCLOSE;
EXTERN_C const GUID GUID_COMPARTMENT_HANDWRITING_OPENCLOSE;
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_DISABLED;
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_OPENCLOSE;
EXTERN_C const GUID GUID_COMPARTMENT_SPEECH_GLOBALSTATE;
EXTERN_C const GUID GUID_COMPARTMENT_PERSISTMENUENABLED;
EXTERN_C const GUID GUID_COMPARTMENT_EMPTYCONTEXT;
EXTERN_C const GUID GUID_COMPARTMENT_TIPUISTATUS;
EXTERN_C const GUID GUID_COMPARTMENT_KEYBOARD_INPUTMODE_CONVERSION;
EXTERN_C const GUID GUID_COMPARTMENT_KEYBOARD_INPUTMODE_SENTENCE;
EXTERN_C const GUID GUID_COMPARTMENT_TRANSITORYEXTENSION;
EXTERN_C const GUID GUID_COMPARTMENT_TRANSITORYEXTENSION_DOCUMENTMANAGER;
EXTERN_C const GUID GUID_COMPARTMENT_TRANSITORYEXTENSION_PARENT;
EXTERN_C const GUID GUID_PROP_MODEBIAS;
EXTERN_C const GUID GUID_MODEBIAS_NONE;
EXTERN_C const GUID GUID_MODEBIAS_URLHISTORY;
EXTERN_C const GUID GUID_MODEBIAS_FILENAME;
EXTERN_C const GUID GUID_MODEBIAS_READING;
EXTERN_C const GUID GUID_MODEBIAS_DATETIME;
EXTERN_C const GUID GUID_MODEBIAS_NAME;
EXTERN_C const GUID GUID_MODEBIAS_CONVERSATION;
EXTERN_C const GUID GUID_MODEBIAS_NUMERIC;
EXTERN_C const GUID GUID_MODEBIAS_HIRAGANA;
EXTERN_C const GUID GUID_MODEBIAS_KATAKANA;
EXTERN_C const GUID GUID_MODEBIAS_HANGUL;
EXTERN_C const GUID GUID_MODEBIAS_CHINESE;
EXTERN_C const GUID GUID_MODEBIAS_HALFWIDTHKATAKANA;
EXTERN_C const GUID GUID_MODEBIAS_FULLWIDTHALPHANUMERIC;
EXTERN_C const GUID GUID_MODEBIAS_HALFWIDTHALPHANUMERIC;
EXTERN_C const GUID GUID_MODEBIAS_FULLWIDTHHANGUL;
EXTERN_C const GUID GUID_TFCAT_CATEGORY_OF_TIP;
EXTERN_C const GUID GUID_TFCAT_TIP_KEYBOARD;
EXTERN_C const GUID GUID_TFCAT_TIP_SPEECH;
EXTERN_C const GUID GUID_TFCAT_TIP_HANDWRITING;
EXTERN_C const GUID GUID_TFCAT_TIPCAP_SECUREMODE;
EXTERN_C const GUID GUID_TFCAT_TIPCAP_UIELEMENTENABLED;
EXTERN_C const GUID GUID_TFCAT_TIPCAP_INPUTMODECOMPARTMENT;
EXTERN_C const GUID GUID_TFCAT_TIPCAP_COMLESS;
EXTERN_C const GUID GUID_TFCAT_TIPCAP_WOW16;
EXTERN_C const GUID GUID_TFCAT_TIPCAP_IMMERSIVESUPPORT;
EXTERN_C const GUID GUID_TFCAT_TIPCAP_SYSTRAYSUPPORT;
EXTERN_C const GUID GUID_TFCAT_PROP_AUDIODATA;
EXTERN_C const GUID GUID_TFCAT_PROP_INKDATA;
EXTERN_C const GUID GUID_TFCAT_PROPSTYLE_CUSTOM;
EXTERN_C const GUID GUID_TFCAT_PROPSTYLE_STATIC;
EXTERN_C const GUID GUID_TFCAT_PROPSTYLE_STATICCOMPACT;
EXTERN_C const GUID GUID_TFCAT_DISPLAYATTRIBUTEPROVIDER;
EXTERN_C const GUID GUID_TFCAT_DISPLAYATTRIBUTEPROPERTY;
#endif
#pragma endregion
}
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#if 0
typedef DECLSPEC_UUID("4f5d560f-5ab5-4dde-8c4d-404592857ab0") UINT_PTR HKL;
#endif
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("7213778c-7bb0-4270-b050-6189ee594e97") DWORD TfEditCookie;
typedef DECLSPEC_UUID("88a9c478-f3ec-4763-8345-cd9250443f8d") DWORD TfGuidAtom;
typedef DECLSPEC_UUID("de403c21-89fd-4f85-8b87-64584d063fbc") DWORD TfClientId;
typedef DECLSPEC_UUID("e26d9e1d-691e-4f29-90d7-338dcf1f8cef") struct TF_PERSISTENT_PROPERTY_HEADER_ACP
    {
    GUID guidType;
    LONG ichStart;
    LONG cch;
    ULONG cb;
    DWORD dwPrivate;
    CLSID clsidTIP;
    } TF_PERSISTENT_PROPERTY_HEADER_ACP;
typedef DECLSPEC_UUID("e1b5808d-1e46-4c19-84dc-68c5f5978cc8") struct TF_LANGUAGEPROFILE
    {
    CLSID clsid;
    LANGID langid;
    GUID catid;
    BOOL fActive;
    GUID guidProfile;
    } TF_LANGUAGEPROFILE;
typedef DECLSPEC_UUID("5a886226-ae9a-489b-b991-2b1e25ee59a9")
enum __MIDL___MIDL_itf_msctf_0000_0000_0001
    {
        TF_ANCHOR_START = 0,
        TF_ANCHOR_END = 1
    } TfAnchor;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfThreadMgr;
    typedef struct ITfThreadMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfThreadMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfThreadMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfThreadMgr * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in ITfThreadMgr * This,
                        __RPC__out TfClientId *ptid);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in ITfThreadMgr * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDocumentMgr )(
            __RPC__in ITfThreadMgr * This,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdim);
        HRESULT ( STDMETHODCALLTYPE *EnumDocumentMgrs )(
            __RPC__in ITfThreadMgr * This,
                        __RPC__deref_out_opt IEnumTfDocumentMgrs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetFocus )(
            __RPC__in ITfThreadMgr * This,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdimFocus);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in ITfThreadMgr * This,
                       __RPC__in_opt ITfDocumentMgr *pdimFocus);
        HRESULT ( STDMETHODCALLTYPE *AssociateFocus )(
            __RPC__in ITfThreadMgr * This,
                       __RPC__in HWND hwnd,
                               __RPC__in_opt ITfDocumentMgr *pdimNew,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdimPrev);
        HRESULT ( STDMETHODCALLTYPE *IsThreadFocus )(
            __RPC__in ITfThreadMgr * This,
                        __RPC__out BOOL *pfThreadFocus);
        HRESULT ( STDMETHODCALLTYPE *GetFunctionProvider )(
            __RPC__in ITfThreadMgr * This,
                       __RPC__in REFCLSID clsid,
                        __RPC__deref_out_opt ITfFunctionProvider **ppFuncProv);
        HRESULT ( STDMETHODCALLTYPE *EnumFunctionProviders )(
            __RPC__in ITfThreadMgr * This,
                        __RPC__deref_out_opt IEnumTfFunctionProviders **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetGlobalCompartment )(
            __RPC__in ITfThreadMgr * This,
                        __RPC__deref_out_opt ITfCompartmentMgr **ppCompMgr);
        END_INTERFACE
    } ITfThreadMgrVtbl;
    interface ITfThreadMgr
    {
        CONST_VTBL struct ITfThreadMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,ptid) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> CreateDocumentMgr(This,ppdim) )
    ( (This)->lpVtbl -> EnumDocumentMgrs(This,ppEnum) )
    ( (This)->lpVtbl -> GetFocus(This,ppdimFocus) )
    ( (This)->lpVtbl -> SetFocus(This,pdimFocus) )
    ( (This)->lpVtbl -> AssociateFocus(This,hwnd,pdimNew,ppdimPrev) )
    ( (This)->lpVtbl -> IsThreadFocus(This,pfThreadFocus) )
    ( (This)->lpVtbl -> GetFunctionProvider(This,clsid,ppFuncProv) )
    ( (This)->lpVtbl -> EnumFunctionProviders(This,ppEnum) )
    ( (This)->lpVtbl -> GetGlobalCompartment(This,ppCompMgr) )
EXTERN_C const IID IID_ITfThreadMgrEx;
    typedef struct ITfThreadMgrExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfThreadMgrEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfThreadMgrEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfThreadMgrEx * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__out TfClientId *ptid);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in ITfThreadMgrEx * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDocumentMgr )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdim);
        HRESULT ( STDMETHODCALLTYPE *EnumDocumentMgrs )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__deref_out_opt IEnumTfDocumentMgrs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetFocus )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdimFocus);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in ITfThreadMgrEx * This,
                       __RPC__in_opt ITfDocumentMgr *pdimFocus);
        HRESULT ( STDMETHODCALLTYPE *AssociateFocus )(
            __RPC__in ITfThreadMgrEx * This,
                       __RPC__in HWND hwnd,
                               __RPC__in_opt ITfDocumentMgr *pdimNew,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdimPrev);
        HRESULT ( STDMETHODCALLTYPE *IsThreadFocus )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__out BOOL *pfThreadFocus);
        HRESULT ( STDMETHODCALLTYPE *GetFunctionProvider )(
            __RPC__in ITfThreadMgrEx * This,
                       __RPC__in REFCLSID clsid,
                        __RPC__deref_out_opt ITfFunctionProvider **ppFuncProv);
        HRESULT ( STDMETHODCALLTYPE *EnumFunctionProviders )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__deref_out_opt IEnumTfFunctionProviders **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetGlobalCompartment )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__deref_out_opt ITfCompartmentMgr **ppCompMgr);
        HRESULT ( STDMETHODCALLTYPE *ActivateEx )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__out TfClientId *ptid,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetActiveFlags )(
            __RPC__in ITfThreadMgrEx * This,
                        __RPC__out DWORD *lpdwFlags);
        END_INTERFACE
    } ITfThreadMgrExVtbl;
    interface ITfThreadMgrEx
    {
        CONST_VTBL struct ITfThreadMgrExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,ptid) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> CreateDocumentMgr(This,ppdim) )
    ( (This)->lpVtbl -> EnumDocumentMgrs(This,ppEnum) )
    ( (This)->lpVtbl -> GetFocus(This,ppdimFocus) )
    ( (This)->lpVtbl -> SetFocus(This,pdimFocus) )
    ( (This)->lpVtbl -> AssociateFocus(This,hwnd,pdimNew,ppdimPrev) )
    ( (This)->lpVtbl -> IsThreadFocus(This,pfThreadFocus) )
    ( (This)->lpVtbl -> GetFunctionProvider(This,clsid,ppFuncProv) )
    ( (This)->lpVtbl -> EnumFunctionProviders(This,ppEnum) )
    ( (This)->lpVtbl -> GetGlobalCompartment(This,ppCompMgr) )
    ( (This)->lpVtbl -> ActivateEx(This,ptid,dwFlags) )
    ( (This)->lpVtbl -> GetActiveFlags(This,lpdwFlags) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfThreadMgr2;
    typedef struct ITfThreadMgr2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfThreadMgr2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfThreadMgr2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfThreadMgr2 * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__out TfClientId *ptid);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            __RPC__in ITfThreadMgr2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateDocumentMgr )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdim);
        HRESULT ( STDMETHODCALLTYPE *EnumDocumentMgrs )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__deref_out_opt IEnumTfDocumentMgrs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetFocus )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__deref_out_opt ITfDocumentMgr **ppdimFocus);
        HRESULT ( STDMETHODCALLTYPE *SetFocus )(
            __RPC__in ITfThreadMgr2 * This,
                       __RPC__in_opt ITfDocumentMgr *pdimFocus);
        HRESULT ( STDMETHODCALLTYPE *IsThreadFocus )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__out BOOL *pfThreadFocus);
        HRESULT ( STDMETHODCALLTYPE *GetFunctionProvider )(
            __RPC__in ITfThreadMgr2 * This,
                       __RPC__in REFCLSID clsid,
                        __RPC__deref_out_opt ITfFunctionProvider **ppFuncProv);
        HRESULT ( STDMETHODCALLTYPE *EnumFunctionProviders )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__deref_out_opt IEnumTfFunctionProviders **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetGlobalCompartment )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__deref_out_opt ITfCompartmentMgr **ppCompMgr);
        HRESULT ( STDMETHODCALLTYPE *ActivateEx )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__out TfClientId *ptid,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetActiveFlags )(
            __RPC__in ITfThreadMgr2 * This,
                        __RPC__out DWORD *lpdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SuspendKeystrokeHandling )(
            __RPC__in ITfThreadMgr2 * This);
        HRESULT ( STDMETHODCALLTYPE *ResumeKeystrokeHandling )(
            __RPC__in ITfThreadMgr2 * This);
        END_INTERFACE
    } ITfThreadMgr2Vtbl;
    interface ITfThreadMgr2
    {
        CONST_VTBL struct ITfThreadMgr2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,ptid) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> CreateDocumentMgr(This,ppdim) )
    ( (This)->lpVtbl -> EnumDocumentMgrs(This,ppEnum) )
    ( (This)->lpVtbl -> GetFocus(This,ppdimFocus) )
    ( (This)->lpVtbl -> SetFocus(This,pdimFocus) )
    ( (This)->lpVtbl -> IsThreadFocus(This,pfThreadFocus) )
    ( (This)->lpVtbl -> GetFunctionProvider(This,clsid,ppFuncProv) )
    ( (This)->lpVtbl -> EnumFunctionProviders(This,ppEnum) )
    ( (This)->lpVtbl -> GetGlobalCompartment(This,ppCompMgr) )
    ( (This)->lpVtbl -> ActivateEx(This,ptid,dwFlags) )
    ( (This)->lpVtbl -> GetActiveFlags(This,lpdwFlags) )
    ( (This)->lpVtbl -> SuspendKeystrokeHandling(This) )
    ( (This)->lpVtbl -> ResumeKeystrokeHandling(This) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfThreadMgrEventSink;
    typedef struct ITfThreadMgrEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfThreadMgrEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfThreadMgrEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfThreadMgrEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnInitDocumentMgr )(
            __RPC__in ITfThreadMgrEventSink * This,
                       __RPC__in_opt ITfDocumentMgr *pdim);
        HRESULT ( STDMETHODCALLTYPE *OnUninitDocumentMgr )(
            __RPC__in ITfThreadMgrEventSink * This,
                       __RPC__in_opt ITfDocumentMgr *pdim);
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )(
            __RPC__in ITfThreadMgrEventSink * This,
                       __RPC__in_opt ITfDocumentMgr *pdimFocus,
                       __RPC__in_opt ITfDocumentMgr *pdimPrevFocus);
        HRESULT ( STDMETHODCALLTYPE *OnPushContext )(
            __RPC__in ITfThreadMgrEventSink * This,
                       __RPC__in_opt ITfContext *pic);
        HRESULT ( STDMETHODCALLTYPE *OnPopContext )(
            __RPC__in ITfThreadMgrEventSink * This,
                       __RPC__in_opt ITfContext *pic);
        END_INTERFACE
    } ITfThreadMgrEventSinkVtbl;
    interface ITfThreadMgrEventSink
    {
        CONST_VTBL struct ITfThreadMgrEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnInitDocumentMgr(This,pdim) )
    ( (This)->lpVtbl -> OnUninitDocumentMgr(This,pdim) )
    ( (This)->lpVtbl -> OnSetFocus(This,pdimFocus,pdimPrevFocus) )
    ( (This)->lpVtbl -> OnPushContext(This,pic) )
    ( (This)->lpVtbl -> OnPopContext(This,pic) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfConfigureSystemKeystrokeFeed;
    typedef struct ITfConfigureSystemKeystrokeFeedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfConfigureSystemKeystrokeFeed * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfConfigureSystemKeystrokeFeed * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfConfigureSystemKeystrokeFeed * This);
        HRESULT ( STDMETHODCALLTYPE *DisableSystemKeystrokeFeed )(
            ITfConfigureSystemKeystrokeFeed * This);
        HRESULT ( STDMETHODCALLTYPE *EnableSystemKeystrokeFeed )(
            ITfConfigureSystemKeystrokeFeed * This);
        END_INTERFACE
    } ITfConfigureSystemKeystrokeFeedVtbl;
    interface ITfConfigureSystemKeystrokeFeed
    {
        CONST_VTBL struct ITfConfigureSystemKeystrokeFeedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DisableSystemKeystrokeFeed(This) )
    ( (This)->lpVtbl -> EnableSystemKeystrokeFeed(This) )
EXTERN_C const IID IID_IEnumTfDocumentMgrs;
    typedef struct IEnumTfDocumentMgrsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfDocumentMgrs * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfDocumentMgrs * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfDocumentMgrs * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfDocumentMgrs * This,
                        __RPC__deref_out_opt IEnumTfDocumentMgrs **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfDocumentMgrs * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfDocumentMgr **rgDocumentMgr,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfDocumentMgrs * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfDocumentMgrs * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfDocumentMgrsVtbl;
    interface IEnumTfDocumentMgrs
    {
        CONST_VTBL struct IEnumTfDocumentMgrsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgDocumentMgr,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfDocumentMgr;
    typedef struct ITfDocumentMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfDocumentMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfDocumentMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfDocumentMgr * This);
        HRESULT ( STDMETHODCALLTYPE *CreateContext )(
            __RPC__in ITfDocumentMgr * This,
                       TfClientId tidOwner,
                       DWORD dwFlags,
                               __RPC__in_opt IUnknown *punk,
                        __RPC__deref_out_opt ITfContext **ppic,
                        __RPC__out TfEditCookie *pecTextStore);
        HRESULT ( STDMETHODCALLTYPE *Push )(
            __RPC__in ITfDocumentMgr * This,
                       __RPC__in_opt ITfContext *pic);
        HRESULT ( STDMETHODCALLTYPE *Pop )(
            __RPC__in ITfDocumentMgr * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetTop )(
            __RPC__in ITfDocumentMgr * This,
                        __RPC__deref_out_opt ITfContext **ppic);
        HRESULT ( STDMETHODCALLTYPE *GetBase )(
            __RPC__in ITfDocumentMgr * This,
                        __RPC__deref_out_opt ITfContext **ppic);
        HRESULT ( STDMETHODCALLTYPE *EnumContexts )(
            __RPC__in ITfDocumentMgr * This,
                        __RPC__deref_out_opt IEnumTfContexts **ppEnum);
        END_INTERFACE
    } ITfDocumentMgrVtbl;
    interface ITfDocumentMgr
    {
        CONST_VTBL struct ITfDocumentMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateContext(This,tidOwner,dwFlags,punk,ppic,pecTextStore) )
    ( (This)->lpVtbl -> Push(This,pic) )
    ( (This)->lpVtbl -> Pop(This,dwFlags) )
    ( (This)->lpVtbl -> GetTop(This,ppic) )
    ( (This)->lpVtbl -> GetBase(This,ppic) )
    ( (This)->lpVtbl -> EnumContexts(This,ppEnum) )
EXTERN_C const IID IID_IEnumTfContexts;
    typedef struct IEnumTfContextsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfContexts * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfContexts * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfContexts * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfContexts * This,
                        __RPC__deref_out_opt IEnumTfContexts **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfContexts * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfContext **rgContext,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfContexts * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfContexts * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfContextsVtbl;
    interface IEnumTfContexts
    {
        CONST_VTBL struct IEnumTfContextsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgContext,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfCompositionView;
    typedef struct ITfCompositionViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCompositionView * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCompositionView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCompositionView * This);
        HRESULT ( STDMETHODCALLTYPE *GetOwnerClsid )(
            __RPC__in ITfCompositionView * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *GetRange )(
            __RPC__in ITfCompositionView * This,
                        __RPC__deref_out_opt ITfRange **ppRange);
        END_INTERFACE
    } ITfCompositionViewVtbl;
    interface ITfCompositionView
    {
        CONST_VTBL struct ITfCompositionViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOwnerClsid(This,pclsid) )
    ( (This)->lpVtbl -> GetRange(This,ppRange) )
EXTERN_C const IID IID_IEnumITfCompositionView;
    typedef struct IEnumITfCompositionViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumITfCompositionView * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumITfCompositionView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumITfCompositionView * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumITfCompositionView * This,
                        __RPC__deref_out_opt IEnumITfCompositionView **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumITfCompositionView * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfCompositionView **rgCompositionView,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumITfCompositionView * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumITfCompositionView * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumITfCompositionViewVtbl;
    interface IEnumITfCompositionView
    {
        CONST_VTBL struct IEnumITfCompositionViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgCompositionView,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfComposition;
    typedef struct ITfCompositionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfComposition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfComposition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfComposition * This);
        HRESULT ( STDMETHODCALLTYPE *GetRange )(
            __RPC__in ITfComposition * This,
                        __RPC__deref_out_opt ITfRange **ppRange);
        HRESULT ( STDMETHODCALLTYPE *ShiftStart )(
            __RPC__in ITfComposition * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfRange *pNewStart);
        HRESULT ( STDMETHODCALLTYPE *ShiftEnd )(
            __RPC__in ITfComposition * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfRange *pNewEnd);
        HRESULT ( STDMETHODCALLTYPE *EndComposition )(
            __RPC__in ITfComposition * This,
                       TfEditCookie ecWrite);
        END_INTERFACE
    } ITfCompositionVtbl;
    interface ITfComposition
    {
        CONST_VTBL struct ITfCompositionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRange(This,ppRange) )
    ( (This)->lpVtbl -> ShiftStart(This,ecWrite,pNewStart) )
    ( (This)->lpVtbl -> ShiftEnd(This,ecWrite,pNewEnd) )
    ( (This)->lpVtbl -> EndComposition(This,ecWrite) )
EXTERN_C const IID IID_ITfCompositionSink;
    typedef struct ITfCompositionSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCompositionSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCompositionSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCompositionSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnCompositionTerminated )(
            __RPC__in ITfCompositionSink * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfComposition *pComposition);
        END_INTERFACE
    } ITfCompositionSinkVtbl;
    interface ITfCompositionSink
    {
        CONST_VTBL struct ITfCompositionSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCompositionTerminated(This,ecWrite,pComposition) )
EXTERN_C const IID IID_ITfContextComposition;
    typedef struct ITfContextCompositionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfContextComposition * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfContextComposition * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfContextComposition * This);
        HRESULT ( STDMETHODCALLTYPE *StartComposition )(
            __RPC__in ITfContextComposition * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfRange *pCompositionRange,
                       __RPC__in_opt ITfCompositionSink *pSink,
                        __RPC__deref_out_opt ITfComposition **ppComposition);
        HRESULT ( STDMETHODCALLTYPE *EnumCompositions )(
            __RPC__in ITfContextComposition * This,
                        __RPC__deref_out_opt IEnumITfCompositionView **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindComposition )(
            __RPC__in ITfContextComposition * This,
                       TfEditCookie ecRead,
                       __RPC__in_opt ITfRange *pTestRange,
                        __RPC__deref_out_opt IEnumITfCompositionView **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            __RPC__in ITfContextComposition * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfCompositionView *pComposition,
                       __RPC__in_opt ITfCompositionSink *pSink,
                        __RPC__deref_out_opt ITfComposition **ppComposition);
        END_INTERFACE
    } ITfContextCompositionVtbl;
    interface ITfContextComposition
    {
        CONST_VTBL struct ITfContextCompositionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartComposition(This,ecWrite,pCompositionRange,pSink,ppComposition) )
    ( (This)->lpVtbl -> EnumCompositions(This,ppEnum) )
    ( (This)->lpVtbl -> FindComposition(This,ecRead,pTestRange,ppEnum) )
    ( (This)->lpVtbl -> TakeOwnership(This,ecWrite,pComposition,pSink,ppComposition) )
EXTERN_C const IID IID_ITfContextOwnerCompositionServices;
    typedef struct ITfContextOwnerCompositionServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfContextOwnerCompositionServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfContextOwnerCompositionServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfContextOwnerCompositionServices * This);
        HRESULT ( STDMETHODCALLTYPE *StartComposition )(
            __RPC__in ITfContextOwnerCompositionServices * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfRange *pCompositionRange,
                       __RPC__in_opt ITfCompositionSink *pSink,
                        __RPC__deref_out_opt ITfComposition **ppComposition);
        HRESULT ( STDMETHODCALLTYPE *EnumCompositions )(
            __RPC__in ITfContextOwnerCompositionServices * This,
                        __RPC__deref_out_opt IEnumITfCompositionView **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindComposition )(
            __RPC__in ITfContextOwnerCompositionServices * This,
                       TfEditCookie ecRead,
                       __RPC__in_opt ITfRange *pTestRange,
                        __RPC__deref_out_opt IEnumITfCompositionView **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *TakeOwnership )(
            __RPC__in ITfContextOwnerCompositionServices * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfCompositionView *pComposition,
                       __RPC__in_opt ITfCompositionSink *pSink,
                        __RPC__deref_out_opt ITfComposition **ppComposition);
        HRESULT ( STDMETHODCALLTYPE *TerminateComposition )(
            __RPC__in ITfContextOwnerCompositionServices * This,
                       __RPC__in_opt ITfCompositionView *pComposition);
        END_INTERFACE
    } ITfContextOwnerCompositionServicesVtbl;
    interface ITfContextOwnerCompositionServices
    {
        CONST_VTBL struct ITfContextOwnerCompositionServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> StartComposition(This,ecWrite,pCompositionRange,pSink,ppComposition) )
    ( (This)->lpVtbl -> EnumCompositions(This,ppEnum) )
    ( (This)->lpVtbl -> FindComposition(This,ecRead,pTestRange,ppEnum) )
    ( (This)->lpVtbl -> TakeOwnership(This,ecWrite,pComposition,pSink,ppComposition) )
    ( (This)->lpVtbl -> TerminateComposition(This,pComposition) )
EXTERN_C const IID IID_ITfContextOwnerCompositionSink;
    typedef struct ITfContextOwnerCompositionSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfContextOwnerCompositionSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfContextOwnerCompositionSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfContextOwnerCompositionSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnStartComposition )(
            __RPC__in ITfContextOwnerCompositionSink * This,
                       __RPC__in_opt ITfCompositionView *pComposition,
                        __RPC__out BOOL *pfOk);
        HRESULT ( STDMETHODCALLTYPE *OnUpdateComposition )(
            __RPC__in ITfContextOwnerCompositionSink * This,
                       __RPC__in_opt ITfCompositionView *pComposition,
                       __RPC__in_opt ITfRange *pRangeNew);
        HRESULT ( STDMETHODCALLTYPE *OnEndComposition )(
            __RPC__in ITfContextOwnerCompositionSink * This,
                       __RPC__in_opt ITfCompositionView *pComposition);
        END_INTERFACE
    } ITfContextOwnerCompositionSinkVtbl;
    interface ITfContextOwnerCompositionSink
    {
        CONST_VTBL struct ITfContextOwnerCompositionSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStartComposition(This,pComposition,pfOk) )
    ( (This)->lpVtbl -> OnUpdateComposition(This,pComposition,pRangeNew) )
    ( (This)->lpVtbl -> OnEndComposition(This,pComposition) )
EXTERN_C const IID IID_ITfContextView;
    typedef struct ITfContextViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfContextView * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfContextView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfContextView * This);
        HRESULT ( STDMETHODCALLTYPE *GetRangeFromPoint )(
            __RPC__in ITfContextView * This,
                       TfEditCookie ec,
                       __RPC__in const POINT *ppt,
                       DWORD dwFlags,
                        __RPC__deref_out_opt ITfRange **ppRange);
        HRESULT ( STDMETHODCALLTYPE *GetTextExt )(
            __RPC__in ITfContextView * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__out RECT *prc,
                        __RPC__out BOOL *pfClipped);
        HRESULT ( STDMETHODCALLTYPE *GetScreenExt )(
            __RPC__in ITfContextView * This,
                        __RPC__out RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *GetWnd )(
            __RPC__in ITfContextView * This,
                        __RPC__deref_out_opt HWND *phwnd);
        END_INTERFACE
    } ITfContextViewVtbl;
    interface ITfContextView
    {
        CONST_VTBL struct ITfContextViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRangeFromPoint(This,ec,ppt,dwFlags,ppRange) )
    ( (This)->lpVtbl -> GetTextExt(This,ec,pRange,prc,pfClipped) )
    ( (This)->lpVtbl -> GetScreenExt(This,prc) )
    ( (This)->lpVtbl -> GetWnd(This,phwnd) )
EXTERN_C const IID IID_IEnumTfContextViews;
    typedef struct IEnumTfContextViewsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfContextViews * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfContextViews * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfContextViews * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfContextViews * This,
                        __RPC__deref_out_opt IEnumTfContextViews **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfContextViews * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfContextView **rgViews,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfContextViews * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfContextViews * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfContextViewsVtbl;
    interface IEnumTfContextViews
    {
        CONST_VTBL struct IEnumTfContextViewsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgViews,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
typedef DECLSPEC_UUID("1690be9b-d3e9-49f6-8d8b-51b905af4c43")
enum __MIDL_ITfContext_0001
    {
        TF_AE_NONE = 0,
        TF_AE_START = 1,
        TF_AE_END = 2
    } TfActiveSelEnd;
typedef DECLSPEC_UUID("36ae42a4-6989-4bdc-b48a-6137b7bf2e42") struct TF_SELECTIONSTYLE
    {
    TfActiveSelEnd ase;
    BOOL fInterimChar;
    } TF_SELECTIONSTYLE;
typedef DECLSPEC_UUID("75eb22f2-b0bf-46a8-8006-975a3b6efcf1") struct TF_SELECTION
    {
    ITfRange *range;
    TF_SELECTIONSTYLE style;
    } TF_SELECTION;
typedef DECLSPEC_UUID("bc7d979a-846a-444d-afef-0a9bfa82b961") TS_STATUS TF_STATUS;
EXTERN_C const IID IID_ITfContext;
    typedef struct ITfContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfContext * This);
        HRESULT ( STDMETHODCALLTYPE *RequestEditSession )(
            __RPC__in ITfContext * This,
                       TfClientId tid,
                       __RPC__in_opt ITfEditSession *pes,
                       DWORD dwFlags,
                        __RPC__out HRESULT *phrSession);
        HRESULT ( STDMETHODCALLTYPE *InWriteSession )(
            __RPC__in ITfContext * This,
                       TfClientId tid,
                        __RPC__out BOOL *pfWriteSession);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            __RPC__in ITfContext * This,
                       TfEditCookie ec,
                       ULONG ulIndex,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TF_SELECTION *pSelection,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *SetSelection )(
            __RPC__in ITfContext * This,
                       TfEditCookie ec,
                       ULONG ulCount,
                                __RPC__in_ecount_full(ulCount) const TF_SELECTION *pSelection);
        HRESULT ( STDMETHODCALLTYPE *GetStart )(
            __RPC__in ITfContext * This,
                       TfEditCookie ec,
                        __RPC__deref_out_opt ITfRange **ppStart);
        HRESULT ( STDMETHODCALLTYPE *GetEnd )(
            __RPC__in ITfContext * This,
                       TfEditCookie ec,
                        __RPC__deref_out_opt ITfRange **ppEnd);
        HRESULT ( STDMETHODCALLTYPE *GetActiveView )(
            __RPC__in ITfContext * This,
                        __RPC__deref_out_opt ITfContextView **ppView);
        HRESULT ( STDMETHODCALLTYPE *EnumViews )(
            __RPC__in ITfContext * This,
                        __RPC__deref_out_opt IEnumTfContextViews **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfContext * This,
                        __RPC__out TF_STATUS *pdcs);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ITfContext * This,
                       __RPC__in REFGUID guidProp,
                        __RPC__deref_out_opt ITfProperty **ppProp);
        HRESULT ( STDMETHODCALLTYPE *GetAppProperty )(
            __RPC__in ITfContext * This,
                       __RPC__in REFGUID guidProp,
                        __RPC__deref_out_opt ITfReadOnlyProperty **ppProp);
        HRESULT ( STDMETHODCALLTYPE *TrackProperties )(
            __RPC__in ITfContext * This,
                                __RPC__in_ecount_full(cProp) const GUID **prgProp,
                       ULONG cProp,
                                __RPC__in_ecount_full(cAppProp) const GUID **prgAppProp,
                       ULONG cAppProp,
                        __RPC__deref_out_opt ITfReadOnlyProperty **ppProperty);
        HRESULT ( STDMETHODCALLTYPE *EnumProperties )(
            __RPC__in ITfContext * This,
                        __RPC__deref_out_opt IEnumTfProperties **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentMgr )(
            __RPC__in ITfContext * This,
                        __RPC__deref_out_opt ITfDocumentMgr **ppDm);
        HRESULT ( STDMETHODCALLTYPE *CreateRangeBackup )(
            __RPC__in ITfContext * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfRangeBackup **ppBackup);
        END_INTERFACE
    } ITfContextVtbl;
    interface ITfContext
    {
        CONST_VTBL struct ITfContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RequestEditSession(This,tid,pes,dwFlags,phrSession) )
    ( (This)->lpVtbl -> InWriteSession(This,tid,pfWriteSession) )
    ( (This)->lpVtbl -> GetSelection(This,ec,ulIndex,ulCount,pSelection,pcFetched) )
    ( (This)->lpVtbl -> SetSelection(This,ec,ulCount,pSelection) )
    ( (This)->lpVtbl -> GetStart(This,ec,ppStart) )
    ( (This)->lpVtbl -> GetEnd(This,ec,ppEnd) )
    ( (This)->lpVtbl -> GetActiveView(This,ppView) )
    ( (This)->lpVtbl -> EnumViews(This,ppEnum) )
    ( (This)->lpVtbl -> GetStatus(This,pdcs) )
    ( (This)->lpVtbl -> GetProperty(This,guidProp,ppProp) )
    ( (This)->lpVtbl -> GetAppProperty(This,guidProp,ppProp) )
    ( (This)->lpVtbl -> TrackProperties(This,prgProp,cProp,prgAppProp,cAppProp,ppProperty) )
    ( (This)->lpVtbl -> EnumProperties(This,ppEnum) )
    ( (This)->lpVtbl -> GetDocumentMgr(This,ppDm) )
    ( (This)->lpVtbl -> CreateRangeBackup(This,ec,pRange,ppBackup) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0018_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0018_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfQueryEmbedded;
    typedef struct ITfQueryEmbeddedVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfQueryEmbedded * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfQueryEmbedded * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfQueryEmbedded * This);
        HRESULT ( STDMETHODCALLTYPE *QueryInsertEmbedded )(
            __RPC__in ITfQueryEmbedded * This,
                       __RPC__in const GUID *pguidService,
                       __RPC__in const FORMATETC *pFormatEtc,
                        __RPC__out BOOL *pfInsertable);
        END_INTERFACE
    } ITfQueryEmbeddedVtbl;
    interface ITfQueryEmbedded
    {
        CONST_VTBL struct ITfQueryEmbeddedVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryInsertEmbedded(This,pguidService,pFormatEtc,pfInsertable) )
EXTERN_C const IID IID_ITfInsertAtSelection;
    typedef struct ITfInsertAtSelectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfInsertAtSelection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfInsertAtSelection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfInsertAtSelection * This);
        HRESULT ( STDMETHODCALLTYPE *InsertTextAtSelection )(
            __RPC__in ITfInsertAtSelection * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                                __RPC__in_ecount_full(cch) const WCHAR *pchText,
                       LONG cch,
                        __RPC__deref_out_opt ITfRange **ppRange);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbeddedAtSelection )(
            __RPC__in ITfInsertAtSelection * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                       __RPC__in_opt IDataObject *pDataObject,
                        __RPC__deref_out_opt ITfRange **ppRange);
        END_INTERFACE
    } ITfInsertAtSelectionVtbl;
    interface ITfInsertAtSelection
    {
        CONST_VTBL struct ITfInsertAtSelectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertTextAtSelection(This,ec,dwFlags,pchText,cch,ppRange) )
    ( (This)->lpVtbl -> InsertEmbeddedAtSelection(This,ec,dwFlags,pDataObject,ppRange) )
EXTERN_C const IID IID_ITfCleanupContextSink;
    typedef struct ITfCleanupContextSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCleanupContextSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCleanupContextSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCleanupContextSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnCleanupContext )(
            __RPC__in ITfCleanupContextSink * This,
                       TfEditCookie ecWrite,
                       __RPC__in_opt ITfContext *pic);
        END_INTERFACE
    } ITfCleanupContextSinkVtbl;
    interface ITfCleanupContextSink
    {
        CONST_VTBL struct ITfCleanupContextSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnCleanupContext(This,ecWrite,pic) )
EXTERN_C const IID IID_ITfCleanupContextDurationSink;
    typedef struct ITfCleanupContextDurationSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCleanupContextDurationSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCleanupContextDurationSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCleanupContextDurationSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnStartCleanupContext )(
            __RPC__in ITfCleanupContextDurationSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnEndCleanupContext )(
            __RPC__in ITfCleanupContextDurationSink * This);
        END_INTERFACE
    } ITfCleanupContextDurationSinkVtbl;
    interface ITfCleanupContextDurationSink
    {
        CONST_VTBL struct ITfCleanupContextDurationSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStartCleanupContext(This) )
    ( (This)->lpVtbl -> OnEndCleanupContext(This) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfReadOnlyProperty;
    typedef struct ITfReadOnlyPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfReadOnlyProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfReadOnlyProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfReadOnlyProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITfReadOnlyProperty * This,
                        __RPC__out GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *EnumRanges )(
            __RPC__in ITfReadOnlyProperty * This,
                       TfEditCookie ec,
                        __RPC__deref_out_opt IEnumTfRanges **ppEnum,
                       __RPC__in_opt ITfRange *pTargetRange);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ITfReadOnlyProperty * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__out VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in ITfReadOnlyProperty * This,
                        __RPC__deref_out_opt ITfContext **ppContext);
        END_INTERFACE
    } ITfReadOnlyPropertyVtbl;
    interface ITfReadOnlyProperty
    {
        CONST_VTBL struct ITfReadOnlyPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguid) )
    ( (This)->lpVtbl -> EnumRanges(This,ec,ppEnum,pTargetRange) )
    ( (This)->lpVtbl -> GetValue(This,ec,pRange,pvarValue) )
    ( (This)->lpVtbl -> GetContext(This,ppContext) )
typedef DECLSPEC_UUID("d678c645-eb6a-45c9-b4ee-0f3e3a991348") struct TF_PROPERTYVAL
    {
    GUID guidId;
    VARIANT varValue;
    } TF_PROPERTYVAL;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumTfPropertyValue;
    typedef struct IEnumTfPropertyValueVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfPropertyValue * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfPropertyValue * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfPropertyValue * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfPropertyValue * This,
                        __RPC__deref_out_opt IEnumTfPropertyValue **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfPropertyValue * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) TF_PROPERTYVAL *rgValues,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfPropertyValue * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfPropertyValue * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfPropertyValueVtbl;
    interface IEnumTfPropertyValue
    {
        CONST_VTBL struct IEnumTfPropertyValueVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgValues,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfMouseTracker;
    typedef struct ITfMouseTrackerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfMouseTracker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfMouseTracker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfMouseTracker * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseMouseSink )(
            __RPC__in ITfMouseTracker * This,
                       __RPC__in_opt ITfRange *range,
                       __RPC__in_opt ITfMouseSink *pSink,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *UnadviseMouseSink )(
            __RPC__in ITfMouseTracker * This,
                       DWORD dwCookie);
        END_INTERFACE
    } ITfMouseTrackerVtbl;
    interface ITfMouseTracker
    {
        CONST_VTBL struct ITfMouseTrackerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseMouseSink(This,range,pSink,pdwCookie) )
    ( (This)->lpVtbl -> UnadviseMouseSink(This,dwCookie) )
EXTERN_C const IID IID_ITfMouseTrackerACP;
    typedef struct ITfMouseTrackerACPVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfMouseTrackerACP * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfMouseTrackerACP * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfMouseTrackerACP * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseMouseSink )(
            __RPC__in ITfMouseTrackerACP * This,
                       __RPC__in_opt ITfRangeACP *range,
                       __RPC__in_opt ITfMouseSink *pSink,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *UnadviseMouseSink )(
            __RPC__in ITfMouseTrackerACP * This,
                       DWORD dwCookie);
        END_INTERFACE
    } ITfMouseTrackerACPVtbl;
    interface ITfMouseTrackerACP
    {
        CONST_VTBL struct ITfMouseTrackerACPVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseMouseSink(This,range,pSink,pdwCookie) )
    ( (This)->lpVtbl -> UnadviseMouseSink(This,dwCookie) )
EXTERN_C const IID IID_ITfMouseSink;
    typedef struct ITfMouseSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfMouseSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfMouseSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfMouseSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnMouseEvent )(
            ITfMouseSink * This,
                       ULONG uEdge,
                       ULONG uQuadrant,
                       DWORD dwBtnStatus,
                        BOOL *pfEaten);
        END_INTERFACE
    } ITfMouseSinkVtbl;
    interface ITfMouseSink
    {
        CONST_VTBL struct ITfMouseSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnMouseEvent(This,uEdge,uQuadrant,dwBtnStatus,pfEaten) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfEditRecord;
    typedef struct ITfEditRecordVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfEditRecord * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfEditRecord * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfEditRecord * This);
        HRESULT ( STDMETHODCALLTYPE *GetSelectionStatus )(
            __RPC__in ITfEditRecord * This,
                        __RPC__out BOOL *pfChanged);
        HRESULT ( STDMETHODCALLTYPE *GetTextAndPropertyUpdates )(
            __RPC__in ITfEditRecord * This,
                       DWORD dwFlags,
                                __RPC__in_ecount_full(cProperties) const GUID **prgProperties,
                       ULONG cProperties,
                        __RPC__deref_out_opt IEnumTfRanges **ppEnum);
        END_INTERFACE
    } ITfEditRecordVtbl;
    interface ITfEditRecord
    {
        CONST_VTBL struct ITfEditRecordVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelectionStatus(This,pfChanged) )
    ( (This)->lpVtbl -> GetTextAndPropertyUpdates(This,dwFlags,prgProperties,cProperties,ppEnum) )
EXTERN_C const IID IID_ITfTextEditSink;
    typedef struct ITfTextEditSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfTextEditSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfTextEditSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfTextEditSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnEndEdit )(
            __RPC__in ITfTextEditSink * This,
                       __RPC__in_opt ITfContext *pic,
                       TfEditCookie ecReadOnly,
                       __RPC__in_opt ITfEditRecord *pEditRecord);
        END_INTERFACE
    } ITfTextEditSinkVtbl;
    interface ITfTextEditSink
    {
        CONST_VTBL struct ITfTextEditSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnEndEdit(This,pic,ecReadOnly,pEditRecord) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0029_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0029_v0_0_s_ifspec;
typedef DECLSPEC_UUID("603553cf-9edd-4cc1-9ecc-069e4a427734")
enum __MIDL_ITfTextLayoutSink_0001
    {
        TF_LC_CREATE = 0,
        TF_LC_CHANGE = 1,
        TF_LC_DESTROY = 2
    } TfLayoutCode;
EXTERN_C const IID IID_ITfTextLayoutSink;
    typedef struct ITfTextLayoutSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfTextLayoutSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfTextLayoutSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfTextLayoutSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnLayoutChange )(
            __RPC__in ITfTextLayoutSink * This,
                       __RPC__in_opt ITfContext *pic,
                       TfLayoutCode lcode,
                       __RPC__in_opt ITfContextView *pView);
        END_INTERFACE
    } ITfTextLayoutSinkVtbl;
    interface ITfTextLayoutSink
    {
        CONST_VTBL struct ITfTextLayoutSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnLayoutChange(This,pic,lcode,pView) )
EXTERN_C const IID IID_ITfStatusSink;
    typedef struct ITfStatusSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfStatusSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfStatusSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfStatusSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in ITfStatusSink * This,
                       __RPC__in_opt ITfContext *pic,
                       DWORD dwFlags);
        END_INTERFACE
    } ITfStatusSinkVtbl;
    interface ITfStatusSink
    {
        CONST_VTBL struct ITfStatusSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStatusChange(This,pic,dwFlags) )
EXTERN_C const IID IID_ITfEditTransactionSink;
    typedef struct ITfEditTransactionSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfEditTransactionSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfEditTransactionSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfEditTransactionSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnStartEditTransaction )(
            __RPC__in ITfEditTransactionSink * This,
                       __RPC__in_opt ITfContext *pic);
        HRESULT ( STDMETHODCALLTYPE *OnEndEditTransaction )(
            __RPC__in ITfEditTransactionSink * This,
                       __RPC__in_opt ITfContext *pic);
        END_INTERFACE
    } ITfEditTransactionSinkVtbl;
    interface ITfEditTransactionSink
    {
        CONST_VTBL struct ITfEditTransactionSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnStartEditTransaction(This,pic) )
    ( (This)->lpVtbl -> OnEndEditTransaction(This,pic) )
EXTERN_C const IID IID_ITfContextOwner;
    typedef struct ITfContextOwnerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfContextOwner * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfContextOwner * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfContextOwner * This);
        HRESULT ( STDMETHODCALLTYPE *GetACPFromPoint )(
            __RPC__in ITfContextOwner * This,
                       __RPC__in const POINT *ptScreen,
                       DWORD dwFlags,
                        __RPC__out LONG *pacp);
        HRESULT ( STDMETHODCALLTYPE *GetTextExt )(
            __RPC__in ITfContextOwner * This,
                       LONG acpStart,
                       LONG acpEnd,
                        __RPC__out RECT *prc,
                        __RPC__out BOOL *pfClipped);
        HRESULT ( STDMETHODCALLTYPE *GetScreenExt )(
            __RPC__in ITfContextOwner * This,
                        __RPC__out RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            __RPC__in ITfContextOwner * This,
                        __RPC__out TF_STATUS *pdcs);
        HRESULT ( STDMETHODCALLTYPE *GetWnd )(
            __RPC__in ITfContextOwner * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *GetAttribute )(
            __RPC__in ITfContextOwner * This,
                       __RPC__in REFGUID rguidAttribute,
                        __RPC__out VARIANT *pvarValue);
        END_INTERFACE
    } ITfContextOwnerVtbl;
    interface ITfContextOwner
    {
        CONST_VTBL struct ITfContextOwnerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetACPFromPoint(This,ptScreen,dwFlags,pacp) )
    ( (This)->lpVtbl -> GetTextExt(This,acpStart,acpEnd,prc,pfClipped) )
    ( (This)->lpVtbl -> GetScreenExt(This,prc) )
    ( (This)->lpVtbl -> GetStatus(This,pdcs) )
    ( (This)->lpVtbl -> GetWnd(This,phwnd) )
    ( (This)->lpVtbl -> GetAttribute(This,rguidAttribute,pvarValue) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0033_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfContextOwnerServices;
    typedef struct ITfContextOwnerServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfContextOwnerServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfContextOwnerServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfContextOwnerServices * This);
        HRESULT ( STDMETHODCALLTYPE *OnLayoutChange )(
            __RPC__in ITfContextOwnerServices * This);
        HRESULT ( STDMETHODCALLTYPE *OnStatusChange )(
            __RPC__in ITfContextOwnerServices * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnAttributeChange )(
            __RPC__in ITfContextOwnerServices * This,
                       __RPC__in REFGUID rguidAttribute);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            __RPC__in ITfContextOwnerServices * This,
                       __RPC__in_opt ITfProperty *pProp,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__out TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr,
                       __RPC__in_opt IStream *pStream);
        HRESULT ( STDMETHODCALLTYPE *Unserialize )(
            __RPC__in ITfContextOwnerServices * This,
                       __RPC__in_opt ITfProperty *pProp,
                       __RPC__in const TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr,
                       __RPC__in_opt IStream *pStream,
                       __RPC__in_opt ITfPersistentPropertyLoaderACP *pLoader);
        HRESULT ( STDMETHODCALLTYPE *ForceLoadProperty )(
            __RPC__in ITfContextOwnerServices * This,
                       __RPC__in_opt ITfProperty *pProp);
        HRESULT ( STDMETHODCALLTYPE *CreateRange )(
            __RPC__in ITfContextOwnerServices * This,
                       LONG acpStart,
                       LONG acpEnd,
                        __RPC__deref_out_opt ITfRangeACP **ppRange);
        END_INTERFACE
    } ITfContextOwnerServicesVtbl;
    interface ITfContextOwnerServices
    {
        CONST_VTBL struct ITfContextOwnerServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnLayoutChange(This) )
    ( (This)->lpVtbl -> OnStatusChange(This,dwFlags) )
    ( (This)->lpVtbl -> OnAttributeChange(This,rguidAttribute) )
    ( (This)->lpVtbl -> Serialize(This,pProp,pRange,pHdr,pStream) )
    ( (This)->lpVtbl -> Unserialize(This,pProp,pHdr,pStream,pLoader) )
    ( (This)->lpVtbl -> ForceLoadProperty(This,pProp) )
    ( (This)->lpVtbl -> CreateRange(This,acpStart,acpEnd,ppRange) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfContextKeyEventSink;
    typedef struct ITfContextKeyEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfContextKeyEventSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfContextKeyEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfContextKeyEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnKeyDown )(
            ITfContextKeyEventSink * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *OnKeyUp )(
            ITfContextKeyEventSink * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *OnTestKeyDown )(
            ITfContextKeyEventSink * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *OnTestKeyUp )(
            ITfContextKeyEventSink * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        END_INTERFACE
    } ITfContextKeyEventSinkVtbl;
    interface ITfContextKeyEventSink
    {
        CONST_VTBL struct ITfContextKeyEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnKeyDown(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> OnKeyUp(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> OnTestKeyDown(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> OnTestKeyUp(This,wParam,lParam,pfEaten) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfEditSession;
    typedef struct ITfEditSessionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfEditSession * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfEditSession * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfEditSession * This);
        HRESULT ( STDMETHODCALLTYPE *DoEditSession )(
            __RPC__in ITfEditSession * This,
                       TfEditCookie ec);
        END_INTERFACE
    } ITfEditSessionVtbl;
    interface ITfEditSession
    {
        CONST_VTBL struct ITfEditSessionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DoEditSession(This,ec) )
typedef DECLSPEC_UUID("cf610f06-2882-46f6-abe5-298568b664c4")
enum __MIDL_ITfRange_0001
    {
        TF_GRAVITY_BACKWARD = 0,
        TF_GRAVITY_FORWARD = 1
    } TfGravity;
typedef DECLSPEC_UUID("1e512533-bbdc-4530-9a8e-a1dc0af67468")
enum __MIDL_ITfRange_0002
    {
        TF_SD_BACKWARD = 0,
        TF_SD_FORWARD = 1
    } TfShiftDir;
typedef DECLSPEC_UUID("49930d51-7d93-448c-a48c-fea5dac192b1") struct TF_HALTCOND
    {
    ITfRange *pHaltRange;
    TfAnchor aHaltPos;
    DWORD dwFlags;
    } TF_HALTCOND;
EXTERN_C const IID IID_ITfRange;
    typedef struct ITfRangeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfRange * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfRange * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfRange * This);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                                            __RPC__out_ecount_part(cchMax, *pcch) WCHAR *pchText,
                       ULONG cchMax,
                        __RPC__out ULONG *pcch);
        HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                                        __RPC__in_ecount_full_opt(cch) const WCHAR *pchText,
                       LONG cch);
        HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                        __RPC__deref_out_opt IDataObject **ppDataObject);
        HRESULT ( STDMETHODCALLTYPE *GetEmbedded )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       __RPC__in REFGUID rguidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbedded )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                       __RPC__in_opt IDataObject *pDataObject);
        HRESULT ( STDMETHODCALLTYPE *ShiftStart )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       LONG cchReq,
                        __RPC__out LONG *pcch,
                               __RPC__in_opt const TF_HALTCOND *pHalt);
        HRESULT ( STDMETHODCALLTYPE *ShiftEnd )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       LONG cchReq,
                        __RPC__out LONG *pcch,
                               __RPC__in_opt const TF_HALTCOND *pHalt);
        HRESULT ( STDMETHODCALLTYPE *ShiftStartToRange )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                       TfAnchor aPos);
        HRESULT ( STDMETHODCALLTYPE *ShiftEndToRange )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                       TfAnchor aPos);
        HRESULT ( STDMETHODCALLTYPE *ShiftStartRegion )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       TfShiftDir dir,
                        __RPC__out BOOL *pfNoRegion);
        HRESULT ( STDMETHODCALLTYPE *ShiftEndRegion )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       TfShiftDir dir,
                        __RPC__out BOOL *pfNoRegion);
        HRESULT ( STDMETHODCALLTYPE *IsEmpty )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                        __RPC__out BOOL *pfEmpty);
        HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       TfAnchor aPos);
        HRESULT ( STDMETHODCALLTYPE *IsEqualStart )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out BOOL *pfEqual);
        HRESULT ( STDMETHODCALLTYPE *IsEqualEnd )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out BOOL *pfEqual);
        HRESULT ( STDMETHODCALLTYPE *CompareStart )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out LONG *plResult);
        HRESULT ( STDMETHODCALLTYPE *CompareEnd )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out LONG *plResult);
        HRESULT ( STDMETHODCALLTYPE *AdjustForInsert )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       ULONG cchInsert,
                        __RPC__out BOOL *pfInsertOk);
        HRESULT ( STDMETHODCALLTYPE *GetGravity )(
            __RPC__in ITfRange * This,
                        __RPC__out TfGravity *pgStart,
                        __RPC__out TfGravity *pgEnd);
        HRESULT ( STDMETHODCALLTYPE *SetGravity )(
            __RPC__in ITfRange * This,
                       TfEditCookie ec,
                       TfGravity gStart,
                       TfGravity gEnd);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITfRange * This,
                        __RPC__deref_out_opt ITfRange **ppClone);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in ITfRange * This,
                        __RPC__deref_out_opt ITfContext **ppContext);
        END_INTERFACE
    } ITfRangeVtbl;
    interface ITfRange
    {
        CONST_VTBL struct ITfRangeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetText(This,ec,dwFlags,pchText,cchMax,pcch) )
    ( (This)->lpVtbl -> SetText(This,ec,dwFlags,pchText,cch) )
    ( (This)->lpVtbl -> GetFormattedText(This,ec,ppDataObject) )
    ( (This)->lpVtbl -> GetEmbedded(This,ec,rguidService,riid,ppunk) )
    ( (This)->lpVtbl -> InsertEmbedded(This,ec,dwFlags,pDataObject) )
    ( (This)->lpVtbl -> ShiftStart(This,ec,cchReq,pcch,pHalt) )
    ( (This)->lpVtbl -> ShiftEnd(This,ec,cchReq,pcch,pHalt) )
    ( (This)->lpVtbl -> ShiftStartToRange(This,ec,pRange,aPos) )
    ( (This)->lpVtbl -> ShiftEndToRange(This,ec,pRange,aPos) )
    ( (This)->lpVtbl -> ShiftStartRegion(This,ec,dir,pfNoRegion) )
    ( (This)->lpVtbl -> ShiftEndRegion(This,ec,dir,pfNoRegion) )
    ( (This)->lpVtbl -> IsEmpty(This,ec,pfEmpty) )
    ( (This)->lpVtbl -> Collapse(This,ec,aPos) )
    ( (This)->lpVtbl -> IsEqualStart(This,ec,pWith,aPos,pfEqual) )
    ( (This)->lpVtbl -> IsEqualEnd(This,ec,pWith,aPos,pfEqual) )
    ( (This)->lpVtbl -> CompareStart(This,ec,pWith,aPos,plResult) )
    ( (This)->lpVtbl -> CompareEnd(This,ec,pWith,aPos,plResult) )
    ( (This)->lpVtbl -> AdjustForInsert(This,ec,cchInsert,pfInsertOk) )
    ( (This)->lpVtbl -> GetGravity(This,pgStart,pgEnd) )
    ( (This)->lpVtbl -> SetGravity(This,ec,gStart,gEnd) )
    ( (This)->lpVtbl -> Clone(This,ppClone) )
    ( (This)->lpVtbl -> GetContext(This,ppContext) )
EXTERN_C const IID IID_ITfRangeACP;
    typedef struct ITfRangeACPVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfRangeACP * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfRangeACP * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfRangeACP * This);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                                            __RPC__out_ecount_part(cchMax, *pcch) WCHAR *pchText,
                       ULONG cchMax,
                        __RPC__out ULONG *pcch);
        HRESULT ( STDMETHODCALLTYPE *SetText )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                                        __RPC__in_ecount_full_opt(cch) const WCHAR *pchText,
                       LONG cch);
        HRESULT ( STDMETHODCALLTYPE *GetFormattedText )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                        __RPC__deref_out_opt IDataObject **ppDataObject);
        HRESULT ( STDMETHODCALLTYPE *GetEmbedded )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       __RPC__in REFGUID rguidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        HRESULT ( STDMETHODCALLTYPE *InsertEmbedded )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       DWORD dwFlags,
                       __RPC__in_opt IDataObject *pDataObject);
        HRESULT ( STDMETHODCALLTYPE *ShiftStart )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       LONG cchReq,
                        __RPC__out LONG *pcch,
                               __RPC__in_opt const TF_HALTCOND *pHalt);
        HRESULT ( STDMETHODCALLTYPE *ShiftEnd )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       LONG cchReq,
                        __RPC__out LONG *pcch,
                               __RPC__in_opt const TF_HALTCOND *pHalt);
        HRESULT ( STDMETHODCALLTYPE *ShiftStartToRange )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                       TfAnchor aPos);
        HRESULT ( STDMETHODCALLTYPE *ShiftEndToRange )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                       TfAnchor aPos);
        HRESULT ( STDMETHODCALLTYPE *ShiftStartRegion )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       TfShiftDir dir,
                        __RPC__out BOOL *pfNoRegion);
        HRESULT ( STDMETHODCALLTYPE *ShiftEndRegion )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       TfShiftDir dir,
                        __RPC__out BOOL *pfNoRegion);
        HRESULT ( STDMETHODCALLTYPE *IsEmpty )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                        __RPC__out BOOL *pfEmpty);
        HRESULT ( STDMETHODCALLTYPE *Collapse )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       TfAnchor aPos);
        HRESULT ( STDMETHODCALLTYPE *IsEqualStart )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out BOOL *pfEqual);
        HRESULT ( STDMETHODCALLTYPE *IsEqualEnd )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out BOOL *pfEqual);
        HRESULT ( STDMETHODCALLTYPE *CompareStart )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out LONG *plResult);
        HRESULT ( STDMETHODCALLTYPE *CompareEnd )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pWith,
                       TfAnchor aPos,
                        __RPC__out LONG *plResult);
        HRESULT ( STDMETHODCALLTYPE *AdjustForInsert )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       ULONG cchInsert,
                        __RPC__out BOOL *pfInsertOk);
        HRESULT ( STDMETHODCALLTYPE *GetGravity )(
            __RPC__in ITfRangeACP * This,
                        __RPC__out TfGravity *pgStart,
                        __RPC__out TfGravity *pgEnd);
        HRESULT ( STDMETHODCALLTYPE *SetGravity )(
            __RPC__in ITfRangeACP * This,
                       TfEditCookie ec,
                       TfGravity gStart,
                       TfGravity gEnd);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITfRangeACP * This,
                        __RPC__deref_out_opt ITfRange **ppClone);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in ITfRangeACP * This,
                        __RPC__deref_out_opt ITfContext **ppContext);
        HRESULT ( STDMETHODCALLTYPE *GetExtent )(
            __RPC__in ITfRangeACP * This,
                        __RPC__out LONG *pacpAnchor,
                        __RPC__out LONG *pcch);
        HRESULT ( STDMETHODCALLTYPE *SetExtent )(
            __RPC__in ITfRangeACP * This,
                       LONG acpAnchor,
                       LONG cch);
        END_INTERFACE
    } ITfRangeACPVtbl;
    interface ITfRangeACP
    {
        CONST_VTBL struct ITfRangeACPVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetText(This,ec,dwFlags,pchText,cchMax,pcch) )
    ( (This)->lpVtbl -> SetText(This,ec,dwFlags,pchText,cch) )
    ( (This)->lpVtbl -> GetFormattedText(This,ec,ppDataObject) )
    ( (This)->lpVtbl -> GetEmbedded(This,ec,rguidService,riid,ppunk) )
    ( (This)->lpVtbl -> InsertEmbedded(This,ec,dwFlags,pDataObject) )
    ( (This)->lpVtbl -> ShiftStart(This,ec,cchReq,pcch,pHalt) )
    ( (This)->lpVtbl -> ShiftEnd(This,ec,cchReq,pcch,pHalt) )
    ( (This)->lpVtbl -> ShiftStartToRange(This,ec,pRange,aPos) )
    ( (This)->lpVtbl -> ShiftEndToRange(This,ec,pRange,aPos) )
    ( (This)->lpVtbl -> ShiftStartRegion(This,ec,dir,pfNoRegion) )
    ( (This)->lpVtbl -> ShiftEndRegion(This,ec,dir,pfNoRegion) )
    ( (This)->lpVtbl -> IsEmpty(This,ec,pfEmpty) )
    ( (This)->lpVtbl -> Collapse(This,ec,aPos) )
    ( (This)->lpVtbl -> IsEqualStart(This,ec,pWith,aPos,pfEqual) )
    ( (This)->lpVtbl -> IsEqualEnd(This,ec,pWith,aPos,pfEqual) )
    ( (This)->lpVtbl -> CompareStart(This,ec,pWith,aPos,plResult) )
    ( (This)->lpVtbl -> CompareEnd(This,ec,pWith,aPos,plResult) )
    ( (This)->lpVtbl -> AdjustForInsert(This,ec,cchInsert,pfInsertOk) )
    ( (This)->lpVtbl -> GetGravity(This,pgStart,pgEnd) )
    ( (This)->lpVtbl -> SetGravity(This,ec,gStart,gEnd) )
    ( (This)->lpVtbl -> Clone(This,ppClone) )
    ( (This)->lpVtbl -> GetContext(This,ppContext) )
    ( (This)->lpVtbl -> GetExtent(This,pacpAnchor,pcch) )
    ( (This)->lpVtbl -> SetExtent(This,acpAnchor,cch) )
EXTERN_C const IID IID_ITextStoreACPServices;
    typedef struct ITextStoreACPServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITextStoreACPServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITextStoreACPServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITextStoreACPServices * This);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            __RPC__in ITextStoreACPServices * This,
                       __RPC__in_opt ITfProperty *pProp,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__out TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr,
                       __RPC__in_opt IStream *pStream);
        HRESULT ( STDMETHODCALLTYPE *Unserialize )(
            __RPC__in ITextStoreACPServices * This,
                       __RPC__in_opt ITfProperty *pProp,
                       __RPC__in const TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr,
                       __RPC__in_opt IStream *pStream,
                       __RPC__in_opt ITfPersistentPropertyLoaderACP *pLoader);
        HRESULT ( STDMETHODCALLTYPE *ForceLoadProperty )(
            __RPC__in ITextStoreACPServices * This,
                       __RPC__in_opt ITfProperty *pProp);
        HRESULT ( STDMETHODCALLTYPE *CreateRange )(
            __RPC__in ITextStoreACPServices * This,
                       LONG acpStart,
                       LONG acpEnd,
                        __RPC__deref_out_opt ITfRangeACP **ppRange);
        END_INTERFACE
    } ITextStoreACPServicesVtbl;
    interface ITextStoreACPServices
    {
        CONST_VTBL struct ITextStoreACPServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Serialize(This,pProp,pRange,pHdr,pStream) )
    ( (This)->lpVtbl -> Unserialize(This,pProp,pHdr,pStream,pLoader) )
    ( (This)->lpVtbl -> ForceLoadProperty(This,pProp) )
    ( (This)->lpVtbl -> CreateRange(This,acpStart,acpEnd,ppRange) )
EXTERN_C const IID IID_ITfRangeBackup;
    typedef struct ITfRangeBackupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfRangeBackup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfRangeBackup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfRangeBackup * This);
        HRESULT ( STDMETHODCALLTYPE *Restore )(
            __RPC__in ITfRangeBackup * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange);
        END_INTERFACE
    } ITfRangeBackupVtbl;
    interface ITfRangeBackup
    {
        CONST_VTBL struct ITfRangeBackupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Restore(This,ec,pRange) )
EXTERN_C const IID IID_ITfPropertyStore;
    typedef struct ITfPropertyStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfPropertyStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfPropertyStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfPropertyStore * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITfPropertyStore * This,
                        __RPC__out GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *GetDataType )(
            __RPC__in ITfPropertyStore * This,
                        __RPC__out DWORD *pdwReserved);
        HRESULT ( STDMETHODCALLTYPE *GetData )(
            __RPC__in ITfPropertyStore * This,
                        __RPC__out VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *OnTextUpdated )(
            __RPC__in ITfPropertyStore * This,
                       DWORD dwFlags,
                       __RPC__in_opt ITfRange *pRangeNew,
                        __RPC__out BOOL *pfAccept);
        HRESULT ( STDMETHODCALLTYPE *Shrink )(
            __RPC__in ITfPropertyStore * This,
                       __RPC__in_opt ITfRange *pRangeNew,
                        __RPC__out BOOL *pfFree);
        HRESULT ( STDMETHODCALLTYPE *Divide )(
            __RPC__in ITfPropertyStore * This,
                       __RPC__in_opt ITfRange *pRangeThis,
                       __RPC__in_opt ITfRange *pRangeNew,
                        __RPC__deref_out_opt ITfPropertyStore **ppPropStore);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITfPropertyStore * This,
                        __RPC__deref_out_opt ITfPropertyStore **pPropStore);
        HRESULT ( STDMETHODCALLTYPE *GetPropertyRangeCreator )(
            __RPC__in ITfPropertyStore * This,
                        __RPC__out CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *Serialize )(
            __RPC__in ITfPropertyStore * This,
                       __RPC__in_opt IStream *pStream,
                        __RPC__out ULONG *pcb);
        END_INTERFACE
    } ITfPropertyStoreVtbl;
    interface ITfPropertyStore
    {
        CONST_VTBL struct ITfPropertyStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguid) )
    ( (This)->lpVtbl -> GetDataType(This,pdwReserved) )
    ( (This)->lpVtbl -> GetData(This,pvarValue) )
    ( (This)->lpVtbl -> OnTextUpdated(This,dwFlags,pRangeNew,pfAccept) )
    ( (This)->lpVtbl -> Shrink(This,pRangeNew,pfFree) )
    ( (This)->lpVtbl -> Divide(This,pRangeThis,pRangeNew,ppPropStore) )
    ( (This)->lpVtbl -> Clone(This,pPropStore) )
    ( (This)->lpVtbl -> GetPropertyRangeCreator(This,pclsid) )
    ( (This)->lpVtbl -> Serialize(This,pStream,pcb) )
EXTERN_C const IID IID_IEnumTfRanges;
    typedef struct IEnumTfRangesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfRanges * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfRanges * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfRanges * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfRanges * This,
                        __RPC__deref_out_opt IEnumTfRanges **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfRanges * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfRange **ppRange,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfRanges * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfRanges * This,
            ULONG ulCount);
        END_INTERFACE
    } IEnumTfRangesVtbl;
    interface IEnumTfRanges
    {
        CONST_VTBL struct IEnumTfRangesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,ppRange,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0042_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0042_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfCreatePropertyStore;
    typedef struct ITfCreatePropertyStoreVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCreatePropertyStore * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCreatePropertyStore * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCreatePropertyStore * This);
        HRESULT ( STDMETHODCALLTYPE *IsStoreSerializable )(
            __RPC__in ITfCreatePropertyStore * This,
                       __RPC__in REFGUID guidProp,
                       __RPC__in_opt ITfRange *pRange,
                       __RPC__in_opt ITfPropertyStore *pPropStore,
                        __RPC__out BOOL *pfSerializable);
        HRESULT ( STDMETHODCALLTYPE *CreatePropertyStore )(
            __RPC__in ITfCreatePropertyStore * This,
                       __RPC__in REFGUID guidProp,
                       __RPC__in_opt ITfRange *pRange,
                       ULONG cb,
                       __RPC__in_opt IStream *pStream,
                        __RPC__deref_out_opt ITfPropertyStore **ppStore);
        END_INTERFACE
    } ITfCreatePropertyStoreVtbl;
    interface ITfCreatePropertyStore
    {
        CONST_VTBL struct ITfCreatePropertyStoreVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsStoreSerializable(This,guidProp,pRange,pPropStore,pfSerializable) )
    ( (This)->lpVtbl -> CreatePropertyStore(This,guidProp,pRange,cb,pStream,ppStore) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0043_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0043_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfPersistentPropertyLoaderACP;
    typedef struct ITfPersistentPropertyLoaderACPVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfPersistentPropertyLoaderACP * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfPersistentPropertyLoaderACP * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfPersistentPropertyLoaderACP * This);
        HRESULT ( STDMETHODCALLTYPE *LoadProperty )(
            __RPC__in ITfPersistentPropertyLoaderACP * This,
                       __RPC__in const TF_PERSISTENT_PROPERTY_HEADER_ACP *pHdr,
                        __RPC__deref_out_opt IStream **ppStream);
        END_INTERFACE
    } ITfPersistentPropertyLoaderACPVtbl;
    interface ITfPersistentPropertyLoaderACP
    {
        CONST_VTBL struct ITfPersistentPropertyLoaderACPVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadProperty(This,pHdr,ppStream) )
EXTERN_C const IID IID_ITfProperty;
    typedef struct ITfPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITfProperty * This,
                        __RPC__out GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *EnumRanges )(
            __RPC__in ITfProperty * This,
                       TfEditCookie ec,
                        __RPC__deref_out_opt IEnumTfRanges **ppEnum,
                       __RPC__in_opt ITfRange *pTargetRange);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ITfProperty * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__out VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            __RPC__in ITfProperty * This,
                        __RPC__deref_out_opt ITfContext **ppContext);
        HRESULT ( STDMETHODCALLTYPE *FindRange )(
            __RPC__in ITfProperty * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                        __RPC__deref_out_opt ITfRange **ppRange,
                       TfAnchor aPos);
        HRESULT ( STDMETHODCALLTYPE *SetValueStore )(
            __RPC__in ITfProperty * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                       __RPC__in_opt ITfPropertyStore *pPropStore);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ITfProperty * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange,
                       __RPC__in const VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in ITfProperty * This,
                       TfEditCookie ec,
                       __RPC__in_opt ITfRange *pRange);
        END_INTERFACE
    } ITfPropertyVtbl;
    interface ITfProperty
    {
        CONST_VTBL struct ITfPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguid) )
    ( (This)->lpVtbl -> EnumRanges(This,ec,ppEnum,pTargetRange) )
    ( (This)->lpVtbl -> GetValue(This,ec,pRange,pvarValue) )
    ( (This)->lpVtbl -> GetContext(This,ppContext) )
    ( (This)->lpVtbl -> FindRange(This,ec,pRange,ppRange,aPos) )
    ( (This)->lpVtbl -> SetValueStore(This,ec,pRange,pPropStore) )
    ( (This)->lpVtbl -> SetValue(This,ec,pRange,pvarValue) )
    ( (This)->lpVtbl -> Clear(This,ec,pRange) )
EXTERN_C const IID IID_IEnumTfProperties;
    typedef struct IEnumTfPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfProperties * This,
                        __RPC__deref_out_opt IEnumTfProperties **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfProperties * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfProperty **ppProp,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfProperties * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfProperties * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfPropertiesVtbl;
    interface IEnumTfProperties
    {
        CONST_VTBL struct IEnumTfPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,ppProp,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfCompartment;
    typedef struct ITfCompartmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCompartment * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCompartment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCompartment * This);
        HRESULT ( STDMETHODCALLTYPE *SetValue )(
            __RPC__in ITfCompartment * This,
                       TfClientId tid,
                       __RPC__in const VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in ITfCompartment * This,
                        __RPC__out VARIANT *pvarValue);
        END_INTERFACE
    } ITfCompartmentVtbl;
    interface ITfCompartment
    {
        CONST_VTBL struct ITfCompartmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetValue(This,tid,pvarValue) )
    ( (This)->lpVtbl -> GetValue(This,pvarValue) )
EXTERN_C const IID IID_ITfCompartmentEventSink;
    typedef struct ITfCompartmentEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCompartmentEventSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCompartmentEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCompartmentEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnChange )(
            __RPC__in ITfCompartmentEventSink * This,
                       __RPC__in REFGUID rguid);
        END_INTERFACE
    } ITfCompartmentEventSinkVtbl;
    interface ITfCompartmentEventSink
    {
        CONST_VTBL struct ITfCompartmentEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnChange(This,rguid) )
EXTERN_C const IID IID_ITfCompartmentMgr;
    typedef struct ITfCompartmentMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfCompartmentMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfCompartmentMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfCompartmentMgr * This);
        HRESULT ( STDMETHODCALLTYPE *GetCompartment )(
            __RPC__in ITfCompartmentMgr * This,
                       __RPC__in REFGUID rguid,
                        __RPC__deref_out_opt ITfCompartment **ppcomp);
        HRESULT ( STDMETHODCALLTYPE *ClearCompartment )(
            __RPC__in ITfCompartmentMgr * This,
                       TfClientId tid,
                       __RPC__in REFGUID rguid);
        HRESULT ( STDMETHODCALLTYPE *EnumCompartments )(
            __RPC__in ITfCompartmentMgr * This,
                        __RPC__deref_out_opt IEnumGUID **ppEnum);
        END_INTERFACE
    } ITfCompartmentMgrVtbl;
    interface ITfCompartmentMgr
    {
        CONST_VTBL struct ITfCompartmentMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCompartment(This,rguid,ppcomp) )
    ( (This)->lpVtbl -> ClearCompartment(This,tid,rguid) )
    ( (This)->lpVtbl -> EnumCompartments(This,ppEnum) )
EXTERN_C const IID IID_ITfFunction;
    typedef struct ITfFunctionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFunction * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFunction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFunction * This);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayName )(
            __RPC__in ITfFunction * This,
                        __RPC__deref_out_opt BSTR *pbstrName);
        END_INTERFACE
    } ITfFunctionVtbl;
    interface ITfFunction
    {
        CONST_VTBL struct ITfFunctionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDisplayName(This,pbstrName) )
EXTERN_C const IID IID_ITfFunctionProvider;
    typedef struct ITfFunctionProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfFunctionProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfFunctionProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfFunctionProvider * This);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in ITfFunctionProvider * This,
                        __RPC__out GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in ITfFunctionProvider * This,
                        __RPC__deref_out_opt BSTR *pbstrDesc);
        HRESULT ( STDMETHODCALLTYPE *GetFunction )(
            __RPC__in ITfFunctionProvider * This,
                       __RPC__in REFGUID rguid,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } ITfFunctionProviderVtbl;
    interface ITfFunctionProvider
    {
        CONST_VTBL struct ITfFunctionProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetType(This,pguid) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDesc) )
    ( (This)->lpVtbl -> GetFunction(This,rguid,riid,ppunk) )
EXTERN_C const IID IID_IEnumTfFunctionProviders;
    typedef struct IEnumTfFunctionProvidersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfFunctionProviders * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfFunctionProviders * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfFunctionProviders * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfFunctionProviders * This,
                        __RPC__deref_out_opt IEnumTfFunctionProviders **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfFunctionProviders * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetch) ITfFunctionProvider **ppCmdobj,
                        __RPC__out ULONG *pcFetch);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfFunctionProviders * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfFunctionProviders * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfFunctionProvidersVtbl;
    interface IEnumTfFunctionProviders
    {
        CONST_VTBL struct IEnumTfFunctionProvidersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,ppCmdobj,pcFetch) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0052_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0052_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfInputProcessorProfiles;
    typedef struct ITfInputProcessorProfilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfInputProcessorProfiles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfInputProcessorProfiles * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid);
        HRESULT ( STDMETHODCALLTYPE *Unregister )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid);
        HRESULT ( STDMETHODCALLTYPE *AddLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                                __RPC__in_ecount_full(cchDesc) const WCHAR *pchDesc,
                       ULONG cchDesc,
                                __RPC__in_ecount_full(cchFile) const WCHAR *pchIconFile,
                       ULONG cchFile,
                       ULONG uIconIndex);
        HRESULT ( STDMETHODCALLTYPE *RemoveLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile);
        HRESULT ( STDMETHODCALLTYPE *EnumInputProcessorInfo )(
            __RPC__in ITfInputProcessorProfiles * This,
                        __RPC__deref_out_opt IEnumGUID **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       LANGID langid,
                       __RPC__in REFGUID catid,
                        __RPC__out CLSID *pclsid,
                        __RPC__out GUID *pguidProfile);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       LANGID langid,
                       __RPC__in REFCLSID rclsid,
                       __RPC__in REFGUID guidProfiles);
        HRESULT ( STDMETHODCALLTYPE *ActivateLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfiles);
        HRESULT ( STDMETHODCALLTYPE *GetActiveLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                        __RPC__out LANGID *plangid,
                        __RPC__out GUID *pguidProfile);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageProfileDescription )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                        __RPC__deref_out_opt BSTR *pbstrProfile);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLanguage )(
            __RPC__in ITfInputProcessorProfiles * This,
                        __RPC__out LANGID *plangid);
        HRESULT ( STDMETHODCALLTYPE *ChangeCurrentLanguage )(
            __RPC__in ITfInputProcessorProfiles * This,
                       LANGID langid);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageList )(
            __RPC__in ITfInputProcessorProfiles * This,
                                          __RPC__deref_out_ecount_full_opt(*pulCount) LANGID **ppLangId,
                        __RPC__out ULONG *pulCount);
        HRESULT ( STDMETHODCALLTYPE *EnumLanguageProfiles )(
            __RPC__in ITfInputProcessorProfiles * This,
                       LANGID langid,
                        __RPC__deref_out_opt IEnumTfLanguageProfiles **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *EnableLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *IsEnabledLanguageProfile )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                        __RPC__out BOOL *pfEnable);
        HRESULT ( STDMETHODCALLTYPE *EnableLanguageProfileByDefault )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *SubstituteKeyboardLayout )(
            __RPC__in ITfInputProcessorProfiles * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       HKL hKL);
        END_INTERFACE
    } ITfInputProcessorProfilesVtbl;
    interface ITfInputProcessorProfiles
    {
        CONST_VTBL struct ITfInputProcessorProfilesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,rclsid) )
    ( (This)->lpVtbl -> Unregister(This,rclsid) )
    ( (This)->lpVtbl -> AddLanguageProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex) )
    ( (This)->lpVtbl -> RemoveLanguageProfile(This,rclsid,langid,guidProfile) )
    ( (This)->lpVtbl -> EnumInputProcessorInfo(This,ppEnum) )
    ( (This)->lpVtbl -> GetDefaultLanguageProfile(This,langid,catid,pclsid,pguidProfile) )
    ( (This)->lpVtbl -> SetDefaultLanguageProfile(This,langid,rclsid,guidProfiles) )
    ( (This)->lpVtbl -> ActivateLanguageProfile(This,rclsid,langid,guidProfiles) )
    ( (This)->lpVtbl -> GetActiveLanguageProfile(This,rclsid,plangid,pguidProfile) )
    ( (This)->lpVtbl -> GetLanguageProfileDescription(This,rclsid,langid,guidProfile,pbstrProfile) )
    ( (This)->lpVtbl -> GetCurrentLanguage(This,plangid) )
    ( (This)->lpVtbl -> ChangeCurrentLanguage(This,langid) )
    ( (This)->lpVtbl -> GetLanguageList(This,ppLangId,pulCount) )
    ( (This)->lpVtbl -> EnumLanguageProfiles(This,langid,ppEnum) )
    ( (This)->lpVtbl -> EnableLanguageProfile(This,rclsid,langid,guidProfile,fEnable) )
    ( (This)->lpVtbl -> IsEnabledLanguageProfile(This,rclsid,langid,guidProfile,pfEnable) )
    ( (This)->lpVtbl -> EnableLanguageProfileByDefault(This,rclsid,langid,guidProfile,fEnable) )
    ( (This)->lpVtbl -> SubstituteKeyboardLayout(This,rclsid,langid,guidProfile,hKL) )
EXTERN_C const IID IID_ITfInputProcessorProfilesEx;
    typedef struct ITfInputProcessorProfilesExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfInputProcessorProfilesEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfInputProcessorProfilesEx * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid);
        HRESULT ( STDMETHODCALLTYPE *Unregister )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid);
        HRESULT ( STDMETHODCALLTYPE *AddLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                                __RPC__in_ecount_full(cchDesc) const WCHAR *pchDesc,
                       ULONG cchDesc,
                                __RPC__in_ecount_full(cchFile) const WCHAR *pchIconFile,
                       ULONG cchFile,
                       ULONG uIconIndex);
        HRESULT ( STDMETHODCALLTYPE *RemoveLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile);
        HRESULT ( STDMETHODCALLTYPE *EnumInputProcessorInfo )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                        __RPC__deref_out_opt IEnumGUID **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       LANGID langid,
                       __RPC__in REFGUID catid,
                        __RPC__out CLSID *pclsid,
                        __RPC__out GUID *pguidProfile);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       LANGID langid,
                       __RPC__in REFCLSID rclsid,
                       __RPC__in REFGUID guidProfiles);
        HRESULT ( STDMETHODCALLTYPE *ActivateLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfiles);
        HRESULT ( STDMETHODCALLTYPE *GetActiveLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                        __RPC__out LANGID *plangid,
                        __RPC__out GUID *pguidProfile);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageProfileDescription )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                        __RPC__deref_out_opt BSTR *pbstrProfile);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentLanguage )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                        __RPC__out LANGID *plangid);
        HRESULT ( STDMETHODCALLTYPE *ChangeCurrentLanguage )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       LANGID langid);
        HRESULT ( STDMETHODCALLTYPE *GetLanguageList )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                                          __RPC__deref_out_ecount_full_opt(*pulCount) LANGID **ppLangId,
                        __RPC__out ULONG *pulCount);
        HRESULT ( STDMETHODCALLTYPE *EnumLanguageProfiles )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       LANGID langid,
                        __RPC__deref_out_opt IEnumTfLanguageProfiles **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *EnableLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *IsEnabledLanguageProfile )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                        __RPC__out BOOL *pfEnable);
        HRESULT ( STDMETHODCALLTYPE *EnableLanguageProfileByDefault )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *SubstituteKeyboardLayout )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       HKL hKL);
        HRESULT ( STDMETHODCALLTYPE *SetLanguageProfileDisplayName )(
            __RPC__in ITfInputProcessorProfilesEx * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                                __RPC__in_ecount_full(cchFile) const WCHAR *pchFile,
                       ULONG cchFile,
                       ULONG uResId);
        END_INTERFACE
    } ITfInputProcessorProfilesExVtbl;
    interface ITfInputProcessorProfilesEx
    {
        CONST_VTBL struct ITfInputProcessorProfilesExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,rclsid) )
    ( (This)->lpVtbl -> Unregister(This,rclsid) )
    ( (This)->lpVtbl -> AddLanguageProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex) )
    ( (This)->lpVtbl -> RemoveLanguageProfile(This,rclsid,langid,guidProfile) )
    ( (This)->lpVtbl -> EnumInputProcessorInfo(This,ppEnum) )
    ( (This)->lpVtbl -> GetDefaultLanguageProfile(This,langid,catid,pclsid,pguidProfile) )
    ( (This)->lpVtbl -> SetDefaultLanguageProfile(This,langid,rclsid,guidProfiles) )
    ( (This)->lpVtbl -> ActivateLanguageProfile(This,rclsid,langid,guidProfiles) )
    ( (This)->lpVtbl -> GetActiveLanguageProfile(This,rclsid,plangid,pguidProfile) )
    ( (This)->lpVtbl -> GetLanguageProfileDescription(This,rclsid,langid,guidProfile,pbstrProfile) )
    ( (This)->lpVtbl -> GetCurrentLanguage(This,plangid) )
    ( (This)->lpVtbl -> ChangeCurrentLanguage(This,langid) )
    ( (This)->lpVtbl -> GetLanguageList(This,ppLangId,pulCount) )
    ( (This)->lpVtbl -> EnumLanguageProfiles(This,langid,ppEnum) )
    ( (This)->lpVtbl -> EnableLanguageProfile(This,rclsid,langid,guidProfile,fEnable) )
    ( (This)->lpVtbl -> IsEnabledLanguageProfile(This,rclsid,langid,guidProfile,pfEnable) )
    ( (This)->lpVtbl -> EnableLanguageProfileByDefault(This,rclsid,langid,guidProfile,fEnable) )
    ( (This)->lpVtbl -> SubstituteKeyboardLayout(This,rclsid,langid,guidProfile,hKL) )
    ( (This)->lpVtbl -> SetLanguageProfileDisplayName(This,rclsid,langid,guidProfile,pchFile,cchFile,uResId) )
EXTERN_C const IID IID_ITfInputProcessorProfileSubstituteLayout;
    typedef struct ITfInputProcessorProfileSubstituteLayoutVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfInputProcessorProfileSubstituteLayout * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfInputProcessorProfileSubstituteLayout * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfInputProcessorProfileSubstituteLayout * This);
        HRESULT ( STDMETHODCALLTYPE *GetSubstituteKeyboardLayout )(
            __RPC__in ITfInputProcessorProfileSubstituteLayout * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                        __RPC__out HKL *phKL);
        END_INTERFACE
    } ITfInputProcessorProfileSubstituteLayoutVtbl;
    interface ITfInputProcessorProfileSubstituteLayout
    {
        CONST_VTBL struct ITfInputProcessorProfileSubstituteLayoutVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSubstituteKeyboardLayout(This,rclsid,langid,guidProfile,phKL) )
EXTERN_C const IID IID_ITfActiveLanguageProfileNotifySink;
    typedef struct ITfActiveLanguageProfileNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfActiveLanguageProfileNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfActiveLanguageProfileNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfActiveLanguageProfileNotifySink * This);
        HRESULT ( STDMETHODCALLTYPE *OnActivated )(
            __RPC__in ITfActiveLanguageProfileNotifySink * This,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFGUID guidProfile,
                       BOOL fActivated);
        END_INTERFACE
    } ITfActiveLanguageProfileNotifySinkVtbl;
    interface ITfActiveLanguageProfileNotifySink
    {
        CONST_VTBL struct ITfActiveLanguageProfileNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnActivated(This,clsid,guidProfile,fActivated) )
EXTERN_C const IID IID_IEnumTfLanguageProfiles;
    typedef struct IEnumTfLanguageProfilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfLanguageProfiles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfLanguageProfiles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfLanguageProfiles * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfLanguageProfiles * This,
                        __RPC__deref_out_opt IEnumTfLanguageProfiles **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfLanguageProfiles * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetch) TF_LANGUAGEPROFILE *pProfile,
                        __RPC__out ULONG *pcFetch);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfLanguageProfiles * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfLanguageProfiles * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfLanguageProfilesVtbl;
    interface IEnumTfLanguageProfiles
    {
        CONST_VTBL struct IEnumTfLanguageProfilesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,pProfile,pcFetch) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0057_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0057_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfLanguageProfileNotifySink;
    typedef struct ITfLanguageProfileNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfLanguageProfileNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfLanguageProfileNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfLanguageProfileNotifySink * This);
        HRESULT ( STDMETHODCALLTYPE *OnLanguageChange )(
            __RPC__in ITfLanguageProfileNotifySink * This,
                       LANGID langid,
                        __RPC__out BOOL *pfAccept);
        HRESULT ( STDMETHODCALLTYPE *OnLanguageChanged )(
            __RPC__in ITfLanguageProfileNotifySink * This);
        END_INTERFACE
    } ITfLanguageProfileNotifySinkVtbl;
    interface ITfLanguageProfileNotifySink
    {
        CONST_VTBL struct ITfLanguageProfileNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnLanguageChange(This,langid,pfAccept) )
    ( (This)->lpVtbl -> OnLanguageChanged(This) )
typedef DECLSPEC_UUID("44d2825a-10e5-43b2-877f-6cb2f43b7e7e") struct TF_INPUTPROCESSORPROFILE
    {
    DWORD dwProfileType;
    LANGID langid;
    CLSID clsid;
    GUID guidProfile;
    GUID catid;
    HKL hklSubstitute;
    DWORD dwCaps;
    HKL hkl;
    DWORD dwFlags;
    } TF_INPUTPROCESSORPROFILE;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0058_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0058_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfInputProcessorProfileMgr;
    typedef struct ITfInputProcessorProfileMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfInputProcessorProfileMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfInputProcessorProfileMgr * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateProfile )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       DWORD dwProfileType,
                       LANGID langid,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFGUID guidProfile,
                       HKL hkl,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DeactivateProfile )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       DWORD dwProfileType,
                       LANGID langid,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFGUID guidProfile,
                       HKL hkl,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetProfile )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       DWORD dwProfileType,
                       LANGID langid,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFGUID guidProfile,
                       HKL hkl,
                        __RPC__out TF_INPUTPROCESSORPROFILE *pProfile);
        HRESULT ( STDMETHODCALLTYPE *EnumProfiles )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       LANGID langid,
                        __RPC__deref_out_opt IEnumTfInputProcessorProfiles **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *ReleaseInputProcessor )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       __RPC__in REFCLSID rclsid,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *RegisterProfile )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                                __RPC__in_ecount_full(cchDesc) const WCHAR *pchDesc,
                       ULONG cchDesc,
                                __RPC__in_ecount_full(cchFile) const WCHAR *pchIconFile,
                       ULONG cchFile,
                       ULONG uIconIndex,
                       HKL hklsubstitute,
                       DWORD dwPreferredLayout,
                       BOOL bEnabledByDefault,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *UnregisterProfile )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       __RPC__in REFCLSID rclsid,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetActiveProfile )(
            __RPC__in ITfInputProcessorProfileMgr * This,
                       __RPC__in REFGUID catid,
                        __RPC__out TF_INPUTPROCESSORPROFILE *pProfile);
        END_INTERFACE
    } ITfInputProcessorProfileMgrVtbl;
    interface ITfInputProcessorProfileMgr
    {
        CONST_VTBL struct ITfInputProcessorProfileMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ActivateProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,dwFlags) )
    ( (This)->lpVtbl -> DeactivateProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,dwFlags) )
    ( (This)->lpVtbl -> GetProfile(This,dwProfileType,langid,clsid,guidProfile,hkl,pProfile) )
    ( (This)->lpVtbl -> EnumProfiles(This,langid,ppEnum) )
    ( (This)->lpVtbl -> ReleaseInputProcessor(This,rclsid,dwFlags) )
    ( (This)->lpVtbl -> RegisterProfile(This,rclsid,langid,guidProfile,pchDesc,cchDesc,pchIconFile,cchFile,uIconIndex,hklsubstitute,dwPreferredLayout,bEnabledByDefault,dwFlags) )
    ( (This)->lpVtbl -> UnregisterProfile(This,rclsid,langid,guidProfile,dwFlags) )
    ( (This)->lpVtbl -> GetActiveProfile(This,catid,pProfile) )
EXTERN_C const IID IID_IEnumTfInputProcessorProfiles;
    typedef struct IEnumTfInputProcessorProfilesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfInputProcessorProfiles * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfInputProcessorProfiles * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfInputProcessorProfiles * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfInputProcessorProfiles * This,
                        __RPC__deref_out_opt IEnumTfInputProcessorProfiles **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfInputProcessorProfiles * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetch) TF_INPUTPROCESSORPROFILE *pProfile,
                        __RPC__out ULONG *pcFetch);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfInputProcessorProfiles * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfInputProcessorProfiles * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfInputProcessorProfilesVtbl;
    interface IEnumTfInputProcessorProfiles
    {
        CONST_VTBL struct IEnumTfInputProcessorProfilesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,pProfile,pcFetch) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfInputProcessorProfileActivationSink;
    typedef struct ITfInputProcessorProfileActivationSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfInputProcessorProfileActivationSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfInputProcessorProfileActivationSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfInputProcessorProfileActivationSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnActivated )(
            __RPC__in ITfInputProcessorProfileActivationSink * This,
                       DWORD dwProfileType,
                       LANGID langid,
                       __RPC__in REFCLSID clsid,
                       __RPC__in REFGUID catid,
                       __RPC__in REFGUID guidProfile,
                       HKL hkl,
                       DWORD dwFlags);
        END_INTERFACE
    } ITfInputProcessorProfileActivationSinkVtbl;
    interface ITfInputProcessorProfileActivationSink
    {
        CONST_VTBL struct ITfInputProcessorProfileActivationSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnActivated(This,dwProfileType,langid,clsid,catid,guidProfile,hkl,dwFlags) )
typedef DECLSPEC_UUID("77c12f95-b783-450d-879f-1cd2362c6521") struct TF_PRESERVEDKEY
    {
    UINT uVKey;
    UINT uModifiers;
    } TF_PRESERVEDKEY;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0061_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0061_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfKeystrokeMgr;
    typedef struct ITfKeystrokeMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfKeystrokeMgr * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfKeystrokeMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfKeystrokeMgr * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseKeyEventSink )(
            ITfKeystrokeMgr * This,
                       TfClientId tid,
                       ITfKeyEventSink *pSink,
                       BOOL fForeground);
        HRESULT ( STDMETHODCALLTYPE *UnadviseKeyEventSink )(
            ITfKeystrokeMgr * This,
                       TfClientId tid);
        HRESULT ( STDMETHODCALLTYPE *GetForeground )(
            ITfKeystrokeMgr * This,
                        CLSID *pclsid);
        HRESULT ( STDMETHODCALLTYPE *TestKeyDown )(
            ITfKeystrokeMgr * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *TestKeyUp )(
            ITfKeystrokeMgr * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *KeyDown )(
            ITfKeystrokeMgr * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *KeyUp )(
            ITfKeystrokeMgr * This,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *GetPreservedKey )(
            ITfKeystrokeMgr * This,
                       ITfContext *pic,
                       const TF_PRESERVEDKEY *pprekey,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *IsPreservedKey )(
            ITfKeystrokeMgr * This,
                       REFGUID rguid,
                       const TF_PRESERVEDKEY *pprekey,
                        BOOL *pfRegistered);
        HRESULT ( STDMETHODCALLTYPE *PreserveKey )(
            ITfKeystrokeMgr * This,
                       TfClientId tid,
                       REFGUID rguid,
                       const TF_PRESERVEDKEY *prekey,
                                const WCHAR *pchDesc,
                       ULONG cchDesc);
        HRESULT ( STDMETHODCALLTYPE *UnpreserveKey )(
            ITfKeystrokeMgr * This,
                       REFGUID rguid,
                       const TF_PRESERVEDKEY *pprekey);
        HRESULT ( STDMETHODCALLTYPE *SetPreservedKeyDescription )(
            ITfKeystrokeMgr * This,
                       REFGUID rguid,
                                const WCHAR *pchDesc,
                       ULONG cchDesc);
        HRESULT ( STDMETHODCALLTYPE *GetPreservedKeyDescription )(
            ITfKeystrokeMgr * This,
                       REFGUID rguid,
                        BSTR *pbstrDesc);
        HRESULT ( STDMETHODCALLTYPE *SimulatePreservedKey )(
            ITfKeystrokeMgr * This,
                       ITfContext *pic,
                       REFGUID rguid,
                        BOOL *pfEaten);
        END_INTERFACE
    } ITfKeystrokeMgrVtbl;
    interface ITfKeystrokeMgr
    {
        CONST_VTBL struct ITfKeystrokeMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseKeyEventSink(This,tid,pSink,fForeground) )
    ( (This)->lpVtbl -> UnadviseKeyEventSink(This,tid) )
    ( (This)->lpVtbl -> GetForeground(This,pclsid) )
    ( (This)->lpVtbl -> TestKeyDown(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> TestKeyUp(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> KeyDown(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> KeyUp(This,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> GetPreservedKey(This,pic,pprekey,pguid) )
    ( (This)->lpVtbl -> IsPreservedKey(This,rguid,pprekey,pfRegistered) )
    ( (This)->lpVtbl -> PreserveKey(This,tid,rguid,prekey,pchDesc,cchDesc) )
    ( (This)->lpVtbl -> UnpreserveKey(This,rguid,pprekey) )
    ( (This)->lpVtbl -> SetPreservedKeyDescription(This,rguid,pchDesc,cchDesc) )
    ( (This)->lpVtbl -> GetPreservedKeyDescription(This,rguid,pbstrDesc) )
    ( (This)->lpVtbl -> SimulatePreservedKey(This,pic,rguid,pfEaten) )
EXTERN_C const IID IID_ITfKeyEventSink;
    typedef struct ITfKeyEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfKeyEventSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfKeyEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfKeyEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )(
            ITfKeyEventSink * This,
                       BOOL fForeground);
        HRESULT ( STDMETHODCALLTYPE *OnTestKeyDown )(
            ITfKeyEventSink * This,
                       ITfContext *pic,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *OnTestKeyUp )(
            ITfKeyEventSink * This,
                       ITfContext *pic,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *OnKeyDown )(
            ITfKeyEventSink * This,
                       ITfContext *pic,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *OnKeyUp )(
            ITfKeyEventSink * This,
                       ITfContext *pic,
                       WPARAM wParam,
                       LPARAM lParam,
                        BOOL *pfEaten);
        HRESULT ( STDMETHODCALLTYPE *OnPreservedKey )(
            ITfKeyEventSink * This,
                       ITfContext *pic,
                       REFGUID rguid,
                        BOOL *pfEaten);
        END_INTERFACE
    } ITfKeyEventSinkVtbl;
    interface ITfKeyEventSink
    {
        CONST_VTBL struct ITfKeyEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSetFocus(This,fForeground) )
    ( (This)->lpVtbl -> OnTestKeyDown(This,pic,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> OnTestKeyUp(This,pic,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> OnKeyDown(This,pic,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> OnKeyUp(This,pic,wParam,lParam,pfEaten) )
    ( (This)->lpVtbl -> OnPreservedKey(This,pic,rguid,pfEaten) )
EXTERN_C const IID IID_ITfKeyTraceEventSink;
    typedef struct ITfKeyTraceEventSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfKeyTraceEventSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfKeyTraceEventSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfKeyTraceEventSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnKeyTraceDown )(
            ITfKeyTraceEventSink * This,
                       WPARAM wParam,
                       LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *OnKeyTraceUp )(
            ITfKeyTraceEventSink * This,
                       WPARAM wParam,
                       LPARAM lParam);
        END_INTERFACE
    } ITfKeyTraceEventSinkVtbl;
    interface ITfKeyTraceEventSink
    {
        CONST_VTBL struct ITfKeyTraceEventSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnKeyTraceDown(This,wParam,lParam) )
    ( (This)->lpVtbl -> OnKeyTraceUp(This,wParam,lParam) )
EXTERN_C const IID IID_ITfPreservedKeyNotifySink;
    typedef struct ITfPreservedKeyNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfPreservedKeyNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfPreservedKeyNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfPreservedKeyNotifySink * This);
        HRESULT ( STDMETHODCALLTYPE *OnUpdated )(
            __RPC__in ITfPreservedKeyNotifySink * This,
                       __RPC__in const TF_PRESERVEDKEY *pprekey);
        END_INTERFACE
    } ITfPreservedKeyNotifySinkVtbl;
    interface ITfPreservedKeyNotifySink
    {
        CONST_VTBL struct ITfPreservedKeyNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdated(This,pprekey) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0065_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0065_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfMessagePump;
    typedef struct ITfMessagePumpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfMessagePump * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfMessagePump * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfMessagePump * This);
        HRESULT ( STDMETHODCALLTYPE *PeekMessageA )(
            ITfMessagePump * This,
                        LPMSG pMsg,
                       HWND hwnd,
                       UINT wMsgFilterMin,
                       UINT wMsgFilterMax,
                       UINT wRemoveMsg,
                        BOOL *pfResult);
        HRESULT ( STDMETHODCALLTYPE *GetMessageA )(
            ITfMessagePump * This,
                        LPMSG pMsg,
                       HWND hwnd,
                       UINT wMsgFilterMin,
                       UINT wMsgFilterMax,
                        BOOL *pfResult);
        HRESULT ( STDMETHODCALLTYPE *PeekMessageW )(
            ITfMessagePump * This,
                        LPMSG pMsg,
                       HWND hwnd,
                       UINT wMsgFilterMin,
                       UINT wMsgFilterMax,
                       UINT wRemoveMsg,
                        BOOL *pfResult);
        HRESULT ( STDMETHODCALLTYPE *GetMessageW )(
            ITfMessagePump * This,
                        LPMSG pMsg,
                       HWND hwnd,
                       UINT wMsgFilterMin,
                       UINT wMsgFilterMax,
                        BOOL *pfResult);
        END_INTERFACE
    } ITfMessagePumpVtbl;
    interface ITfMessagePump
    {
        CONST_VTBL struct ITfMessagePumpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PeekMessageA(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg,pfResult) )
    ( (This)->lpVtbl -> GetMessageA(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,pfResult) )
    ( (This)->lpVtbl -> PeekMessageW(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,wRemoveMsg,pfResult) )
    ( (This)->lpVtbl -> GetMessageW(This,pMsg,hwnd,wMsgFilterMin,wMsgFilterMax,pfResult) )
EXTERN_C const IID IID_ITfThreadFocusSink;
    typedef struct ITfThreadFocusSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfThreadFocusSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfThreadFocusSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfThreadFocusSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnSetThreadFocus )(
            ITfThreadFocusSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnKillThreadFocus )(
            ITfThreadFocusSink * This);
        END_INTERFACE
    } ITfThreadFocusSinkVtbl;
    interface ITfThreadFocusSink
    {
        CONST_VTBL struct ITfThreadFocusSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnSetThreadFocus(This) )
    ( (This)->lpVtbl -> OnKillThreadFocus(This) )
EXTERN_C const IID IID_ITfTextInputProcessor;
    typedef struct ITfTextInputProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfTextInputProcessor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfTextInputProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfTextInputProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            ITfTextInputProcessor * This,
                       ITfThreadMgr *ptim,
                       TfClientId tid);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            ITfTextInputProcessor * This);
        END_INTERFACE
    } ITfTextInputProcessorVtbl;
    interface ITfTextInputProcessor
    {
        CONST_VTBL struct ITfTextInputProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,ptim,tid) )
    ( (This)->lpVtbl -> Deactivate(This) )
EXTERN_C const IID IID_ITfTextInputProcessorEx;
    typedef struct ITfTextInputProcessorExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfTextInputProcessorEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfTextInputProcessorEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfTextInputProcessorEx * This);
        HRESULT ( STDMETHODCALLTYPE *Activate )(
            ITfTextInputProcessorEx * This,
                       ITfThreadMgr *ptim,
                       TfClientId tid);
        HRESULT ( STDMETHODCALLTYPE *Deactivate )(
            ITfTextInputProcessorEx * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateEx )(
            ITfTextInputProcessorEx * This,
                       ITfThreadMgr *ptim,
                       TfClientId tid,
                       DWORD dwFlags);
        END_INTERFACE
    } ITfTextInputProcessorExVtbl;
    interface ITfTextInputProcessorEx
    {
        CONST_VTBL struct ITfTextInputProcessorExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,ptim,tid) )
    ( (This)->lpVtbl -> Deactivate(This) )
    ( (This)->lpVtbl -> ActivateEx(This,ptim,tid,dwFlags) )
EXTERN_C const IID IID_ITfClientId;
    typedef struct ITfClientIdVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfClientId * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfClientId * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfClientId * This);
        HRESULT ( STDMETHODCALLTYPE *GetClientId )(
            ITfClientId * This,
                       REFCLSID rclsid,
                        TfClientId *ptid);
        END_INTERFACE
    } ITfClientIdVtbl;
    interface ITfClientId
    {
        CONST_VTBL struct ITfClientIdVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetClientId(This,rclsid,ptid) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef DECLSPEC_UUID("c4cc07f1-80cc-4a7b-bc54-98512782cbe3")
enum __MIDL___MIDL_itf_msctf_0000_0070_0001
    {
        TF_LS_NONE = 0,
        TF_LS_SOLID = 1,
        TF_LS_DOT = 2,
        TF_LS_DASH = 3,
        TF_LS_SQUIGGLE = 4
    } TF_DA_LINESTYLE;
typedef DECLSPEC_UUID("d9b92e21-084a-401b-9c64-1e6dad91a1ab")
enum __MIDL___MIDL_itf_msctf_0000_0070_0002
    {
        TF_CT_NONE = 0,
        TF_CT_SYSCOLOR = 1,
        TF_CT_COLORREF = 2
    } TF_DA_COLORTYPE;
typedef DECLSPEC_UUID("90d0cb5e-6520-4a0f-b47c-c39bd955f0d6") struct TF_DA_COLOR
    {
    TF_DA_COLORTYPE type;
                                   union
        {
                       int nIndex;
                       COLORREF cr;
        } ;
    } TF_DA_COLOR;
typedef DECLSPEC_UUID("33d2fe4b-6c24-4f67-8d75-3bc1819e4126")
enum __MIDL___MIDL_itf_msctf_0000_0070_0004
    {
        TF_ATTR_INPUT = 0,
        TF_ATTR_TARGET_CONVERTED = 1,
        TF_ATTR_CONVERTED = 2,
        TF_ATTR_TARGET_NOTCONVERTED = 3,
        TF_ATTR_INPUT_ERROR = 4,
        TF_ATTR_FIXEDCONVERTED = 5,
        TF_ATTR_OTHER = -1
    } TF_DA_ATTR_INFO;
typedef DECLSPEC_UUID("1bf1c305-419b-4182-a4d2-9bfadc3f021f") struct TF_DISPLAYATTRIBUTE
    {
    TF_DA_COLOR crText;
    TF_DA_COLOR crBk;
    TF_DA_LINESTYLE lsStyle;
    BOOL fBoldLine;
    TF_DA_COLOR crLine;
    TF_DA_ATTR_INFO bAttr;
    } TF_DISPLAYATTRIBUTE;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0070_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0070_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfDisplayAttributeInfo;
    typedef struct ITfDisplayAttributeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfDisplayAttributeInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfDisplayAttributeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfDisplayAttributeInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            __RPC__in ITfDisplayAttributeInfo * This,
                        __RPC__out GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in ITfDisplayAttributeInfo * This,
                        __RPC__deref_out_opt BSTR *pbstrDesc);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeInfo )(
            __RPC__in ITfDisplayAttributeInfo * This,
                        __RPC__out TF_DISPLAYATTRIBUTE *pda);
        HRESULT ( STDMETHODCALLTYPE *SetAttributeInfo )(
            __RPC__in ITfDisplayAttributeInfo * This,
                       __RPC__in const TF_DISPLAYATTRIBUTE *pda);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ITfDisplayAttributeInfo * This);
        END_INTERFACE
    } ITfDisplayAttributeInfoVtbl;
    interface ITfDisplayAttributeInfo
    {
        CONST_VTBL struct ITfDisplayAttributeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetGUID(This,pguid) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDesc) )
    ( (This)->lpVtbl -> GetAttributeInfo(This,pda) )
    ( (This)->lpVtbl -> SetAttributeInfo(This,pda) )
    ( (This)->lpVtbl -> Reset(This) )
EXTERN_C const IID IID_IEnumTfDisplayAttributeInfo;
    typedef struct IEnumTfDisplayAttributeInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumTfDisplayAttributeInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumTfDisplayAttributeInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumTfDisplayAttributeInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumTfDisplayAttributeInfo * This,
                        __RPC__deref_out_opt IEnumTfDisplayAttributeInfo **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumTfDisplayAttributeInfo * This,
                       ULONG ulCount,
                                            __RPC__out_ecount_part(ulCount, *pcFetched) ITfDisplayAttributeInfo **rgInfo,
                        __RPC__out ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumTfDisplayAttributeInfo * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumTfDisplayAttributeInfo * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfDisplayAttributeInfoVtbl;
    interface IEnumTfDisplayAttributeInfo
    {
        CONST_VTBL struct IEnumTfDisplayAttributeInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,rgInfo,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfDisplayAttributeProvider;
    typedef struct ITfDisplayAttributeProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfDisplayAttributeProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfDisplayAttributeProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfDisplayAttributeProvider * This);
        HRESULT ( STDMETHODCALLTYPE *EnumDisplayAttributeInfo )(
            __RPC__in ITfDisplayAttributeProvider * This,
                        __RPC__deref_out_opt IEnumTfDisplayAttributeInfo **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayAttributeInfo )(
            __RPC__in ITfDisplayAttributeProvider * This,
                       __RPC__in REFGUID guid,
                        __RPC__deref_out_opt ITfDisplayAttributeInfo **ppInfo);
        END_INTERFACE
    } ITfDisplayAttributeProviderVtbl;
    interface ITfDisplayAttributeProvider
    {
        CONST_VTBL struct ITfDisplayAttributeProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumDisplayAttributeInfo(This,ppEnum) )
    ( (This)->lpVtbl -> GetDisplayAttributeInfo(This,guid,ppInfo) )
EXTERN_C const IID IID_ITfDisplayAttributeMgr;
    typedef struct ITfDisplayAttributeMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfDisplayAttributeMgr * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfDisplayAttributeMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfDisplayAttributeMgr * This);
        HRESULT ( STDMETHODCALLTYPE *OnUpdateInfo )(
            ITfDisplayAttributeMgr * This);
        HRESULT ( STDMETHODCALLTYPE *EnumDisplayAttributeInfo )(
            ITfDisplayAttributeMgr * This,
                        IEnumTfDisplayAttributeInfo **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *GetDisplayAttributeInfo )(
            ITfDisplayAttributeMgr * This,
                       REFGUID guid,
                        ITfDisplayAttributeInfo **ppInfo,
                        CLSID *pclsidOwner);
        END_INTERFACE
    } ITfDisplayAttributeMgrVtbl;
    interface ITfDisplayAttributeMgr
    {
        CONST_VTBL struct ITfDisplayAttributeMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdateInfo(This) )
    ( (This)->lpVtbl -> EnumDisplayAttributeInfo(This,ppEnum) )
    ( (This)->lpVtbl -> GetDisplayAttributeInfo(This,guid,ppInfo,pclsidOwner) )
EXTERN_C const IID IID_ITfDisplayAttributeNotifySink;
    typedef struct ITfDisplayAttributeNotifySinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfDisplayAttributeNotifySink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfDisplayAttributeNotifySink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfDisplayAttributeNotifySink * This);
        HRESULT ( STDMETHODCALLTYPE *OnUpdateInfo )(
            __RPC__in ITfDisplayAttributeNotifySink * This);
        END_INTERFACE
    } ITfDisplayAttributeNotifySinkVtbl;
    interface ITfDisplayAttributeNotifySink
    {
        CONST_VTBL struct ITfDisplayAttributeNotifySinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnUpdateInfo(This) )
EXTERN_C const IID IID_ITfCategoryMgr;
    typedef struct ITfCategoryMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfCategoryMgr * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfCategoryMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfCategoryMgr * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterCategory )(
            ITfCategoryMgr * This,
                       REFCLSID rclsid,
                       REFGUID rcatid,
                       REFGUID rguid);
        HRESULT ( STDMETHODCALLTYPE *UnregisterCategory )(
            ITfCategoryMgr * This,
                       REFCLSID rclsid,
                       REFGUID rcatid,
                       REFGUID rguid);
        HRESULT ( STDMETHODCALLTYPE *EnumCategoriesInItem )(
            ITfCategoryMgr * This,
                       REFGUID rguid,
                        IEnumGUID **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *EnumItemsInCategory )(
            ITfCategoryMgr * This,
                       REFGUID rcatid,
                        IEnumGUID **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *FindClosestCategory )(
            ITfCategoryMgr * This,
                       REFGUID rguid,
                        GUID *pcatid,
                                const GUID **ppcatidList,
                       ULONG ulCount);
        HRESULT ( STDMETHODCALLTYPE *RegisterGUIDDescription )(
            ITfCategoryMgr * This,
                       REFCLSID rclsid,
                       REFGUID rguid,
                                const WCHAR *pchDesc,
                       ULONG cch);
        HRESULT ( STDMETHODCALLTYPE *UnregisterGUIDDescription )(
            ITfCategoryMgr * This,
                       REFCLSID rclsid,
                       REFGUID rguid);
        HRESULT ( STDMETHODCALLTYPE *GetGUIDDescription )(
            ITfCategoryMgr * This,
                       REFGUID rguid,
                        BSTR *pbstrDesc);
        HRESULT ( STDMETHODCALLTYPE *RegisterGUIDDWORD )(
            ITfCategoryMgr * This,
                       REFCLSID rclsid,
                       REFGUID rguid,
                       DWORD dw);
        HRESULT ( STDMETHODCALLTYPE *UnregisterGUIDDWORD )(
            ITfCategoryMgr * This,
                       REFCLSID rclsid,
                       REFGUID rguid);
        HRESULT ( STDMETHODCALLTYPE *GetGUIDDWORD )(
            ITfCategoryMgr * This,
                       REFGUID rguid,
                        DWORD *pdw);
        HRESULT ( STDMETHODCALLTYPE *RegisterGUID )(
            ITfCategoryMgr * This,
                       REFGUID rguid,
                        TfGuidAtom *pguidatom);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            ITfCategoryMgr * This,
                       TfGuidAtom guidatom,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *IsEqualTfGuidAtom )(
            ITfCategoryMgr * This,
                       TfGuidAtom guidatom,
                       REFGUID rguid,
                        BOOL *pfEqual);
        END_INTERFACE
    } ITfCategoryMgrVtbl;
    interface ITfCategoryMgr
    {
        CONST_VTBL struct ITfCategoryMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterCategory(This,rclsid,rcatid,rguid) )
    ( (This)->lpVtbl -> UnregisterCategory(This,rclsid,rcatid,rguid) )
    ( (This)->lpVtbl -> EnumCategoriesInItem(This,rguid,ppEnum) )
    ( (This)->lpVtbl -> EnumItemsInCategory(This,rcatid,ppEnum) )
    ( (This)->lpVtbl -> FindClosestCategory(This,rguid,pcatid,ppcatidList,ulCount) )
    ( (This)->lpVtbl -> RegisterGUIDDescription(This,rclsid,rguid,pchDesc,cch) )
    ( (This)->lpVtbl -> UnregisterGUIDDescription(This,rclsid,rguid) )
    ( (This)->lpVtbl -> GetGUIDDescription(This,rguid,pbstrDesc) )
    ( (This)->lpVtbl -> RegisterGUIDDWORD(This,rclsid,rguid,dw) )
    ( (This)->lpVtbl -> UnregisterGUIDDWORD(This,rclsid,rguid) )
    ( (This)->lpVtbl -> GetGUIDDWORD(This,rguid,pdw) )
    ( (This)->lpVtbl -> RegisterGUID(This,rguid,pguidatom) )
    ( (This)->lpVtbl -> GetGUID(This,guidatom,pguid) )
    ( (This)->lpVtbl -> IsEqualTfGuidAtom(This,guidatom,rguid,pfEqual) )
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0076_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0076_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfSource;
    typedef struct ITfSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfSource * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseSink )(
            __RPC__in ITfSource * This,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *UnadviseSink )(
            __RPC__in ITfSource * This,
                       DWORD dwCookie);
        END_INTERFACE
    } ITfSourceVtbl;
    interface ITfSource
    {
        CONST_VTBL struct ITfSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseSink(This,riid,punk,pdwCookie) )
    ( (This)->lpVtbl -> UnadviseSink(This,dwCookie) )
EXTERN_C const IID IID_ITfSourceSingle;
    typedef struct ITfSourceSingleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfSourceSingle * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfSourceSingle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfSourceSingle * This);
        HRESULT ( STDMETHODCALLTYPE *AdviseSingleSink )(
            __RPC__in ITfSourceSingle * This,
                       TfClientId tid,
                       __RPC__in REFIID riid,
                               __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *UnadviseSingleSink )(
            __RPC__in ITfSourceSingle * This,
                       TfClientId tid,
                       __RPC__in REFIID riid);
        END_INTERFACE
    } ITfSourceSingleVtbl;
    interface ITfSourceSingle
    {
        CONST_VTBL struct ITfSourceSingleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseSingleSink(This,tid,riid,punk) )
    ( (This)->lpVtbl -> UnadviseSingleSink(This,tid,riid) )
EXTERN_C const IID IID_ITfUIElementMgr;
    typedef struct ITfUIElementMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfUIElementMgr * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfUIElementMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfUIElementMgr * This);
        HRESULT ( STDMETHODCALLTYPE *BeginUIElement )(
            ITfUIElementMgr * This,
                       ITfUIElement *pElement,
                            BOOL *pbShow,
                        DWORD *pdwUIElementId);
        HRESULT ( STDMETHODCALLTYPE *UpdateUIElement )(
            ITfUIElementMgr * This,
                       DWORD dwUIElementId);
        HRESULT ( STDMETHODCALLTYPE *EndUIElement )(
            ITfUIElementMgr * This,
                       DWORD dwUIElementId);
        HRESULT ( STDMETHODCALLTYPE *GetUIElement )(
            ITfUIElementMgr * This,
                       DWORD dwUIELementId,
                        ITfUIElement **ppElement);
        HRESULT ( STDMETHODCALLTYPE *EnumUIElements )(
            ITfUIElementMgr * This,
                        IEnumTfUIElements **ppEnum);
        END_INTERFACE
    } ITfUIElementMgrVtbl;
    interface ITfUIElementMgr
    {
        CONST_VTBL struct ITfUIElementMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginUIElement(This,pElement,pbShow,pdwUIElementId) )
    ( (This)->lpVtbl -> UpdateUIElement(This,dwUIElementId) )
    ( (This)->lpVtbl -> EndUIElement(This,dwUIElementId) )
    ( (This)->lpVtbl -> GetUIElement(This,dwUIELementId,ppElement) )
    ( (This)->lpVtbl -> EnumUIElements(This,ppEnum) )
EXTERN_C const IID IID_IEnumTfUIElements;
    typedef struct IEnumTfUIElementsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumTfUIElements * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumTfUIElements * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumTfUIElements * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumTfUIElements * This,
                        IEnumTfUIElements **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumTfUIElements * This,
                       ULONG ulCount,
                                            ITfUIElement **ppElement,
                        ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumTfUIElements * This);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumTfUIElements * This,
                       ULONG ulCount);
        END_INTERFACE
    } IEnumTfUIElementsVtbl;
    interface IEnumTfUIElements
    {
        CONST_VTBL struct IEnumTfUIElementsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
    ( (This)->lpVtbl -> Next(This,ulCount,ppElement,pcFetched) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Skip(This,ulCount) )
EXTERN_C const IID IID_ITfUIElementSink;
    typedef struct ITfUIElementSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfUIElementSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfUIElementSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfUIElementSink * This);
        HRESULT ( STDMETHODCALLTYPE *BeginUIElement )(
            ITfUIElementSink * This,
                       DWORD dwUIElementId,
                            BOOL *pbShow);
        HRESULT ( STDMETHODCALLTYPE *UpdateUIElement )(
            ITfUIElementSink * This,
                       DWORD dwUIElementId);
        HRESULT ( STDMETHODCALLTYPE *EndUIElement )(
            ITfUIElementSink * This,
                       DWORD dwUIElementId);
        END_INTERFACE
    } ITfUIElementSinkVtbl;
    interface ITfUIElementSink
    {
        CONST_VTBL struct ITfUIElementSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> BeginUIElement(This,dwUIElementId,pbShow) )
    ( (This)->lpVtbl -> UpdateUIElement(This,dwUIElementId) )
    ( (This)->lpVtbl -> EndUIElement(This,dwUIElementId) )
EXTERN_C const IID IID_ITfUIElement;
    typedef struct ITfUIElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfUIElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfUIElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfUIElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            ITfUIElement * This,
                        BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            ITfUIElement * This,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            ITfUIElement * This,
                       BOOL bShow);
        HRESULT ( STDMETHODCALLTYPE *IsShown )(
            ITfUIElement * This,
                        BOOL *pbShow);
        END_INTERFACE
    } ITfUIElementVtbl;
    interface ITfUIElement
    {
        CONST_VTBL struct ITfUIElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> GetGUID(This,pguid) )
    ( (This)->lpVtbl -> Show(This,bShow) )
    ( (This)->lpVtbl -> IsShown(This,pbShow) )
EXTERN_C const IID IID_ITfCandidateListUIElement;
    typedef struct ITfCandidateListUIElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfCandidateListUIElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfCandidateListUIElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfCandidateListUIElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            ITfCandidateListUIElement * This,
                        BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            ITfCandidateListUIElement * This,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            ITfCandidateListUIElement * This,
                       BOOL bShow);
        HRESULT ( STDMETHODCALLTYPE *IsShown )(
            ITfCandidateListUIElement * This,
                        BOOL *pbShow);
        HRESULT ( STDMETHODCALLTYPE *GetUpdatedFlags )(
            ITfCandidateListUIElement * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentMgr )(
            ITfCandidateListUIElement * This,
                        ITfDocumentMgr **ppdim);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            ITfCandidateListUIElement * This,
                        UINT *puCount);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            ITfCandidateListUIElement * This,
                        UINT *puIndex);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            ITfCandidateListUIElement * This,
                       UINT uIndex,
                        BSTR *pstr);
        HRESULT ( STDMETHODCALLTYPE *GetPageIndex )(
            ITfCandidateListUIElement * This,
                                            UINT *pIndex,
                       UINT uSize,
                        UINT *puPageCnt);
        HRESULT ( STDMETHODCALLTYPE *SetPageIndex )(
            ITfCandidateListUIElement * This,
                                UINT *pIndex,
                       UINT uPageCnt);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPage )(
            ITfCandidateListUIElement * This,
                        UINT *puPage);
        END_INTERFACE
    } ITfCandidateListUIElementVtbl;
    interface ITfCandidateListUIElement
    {
        CONST_VTBL struct ITfCandidateListUIElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> GetGUID(This,pguid) )
    ( (This)->lpVtbl -> Show(This,bShow) )
    ( (This)->lpVtbl -> IsShown(This,pbShow) )
    ( (This)->lpVtbl -> GetUpdatedFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> GetDocumentMgr(This,ppdim) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
    ( (This)->lpVtbl -> GetSelection(This,puIndex) )
    ( (This)->lpVtbl -> GetString(This,uIndex,pstr) )
    ( (This)->lpVtbl -> GetPageIndex(This,pIndex,uSize,puPageCnt) )
    ( (This)->lpVtbl -> SetPageIndex(This,pIndex,uPageCnt) )
    ( (This)->lpVtbl -> GetCurrentPage(This,puPage) )
EXTERN_C const IID IID_ITfCandidateListUIElementBehavior;
    typedef struct ITfCandidateListUIElementBehaviorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfCandidateListUIElementBehavior * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfCandidateListUIElementBehavior * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfCandidateListUIElementBehavior * This);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            ITfCandidateListUIElementBehavior * This,
                        BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            ITfCandidateListUIElementBehavior * This,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            ITfCandidateListUIElementBehavior * This,
                       BOOL bShow);
        HRESULT ( STDMETHODCALLTYPE *IsShown )(
            ITfCandidateListUIElementBehavior * This,
                        BOOL *pbShow);
        HRESULT ( STDMETHODCALLTYPE *GetUpdatedFlags )(
            ITfCandidateListUIElementBehavior * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentMgr )(
            ITfCandidateListUIElementBehavior * This,
                        ITfDocumentMgr **ppdim);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            ITfCandidateListUIElementBehavior * This,
                        UINT *puCount);
        HRESULT ( STDMETHODCALLTYPE *GetSelection )(
            ITfCandidateListUIElementBehavior * This,
                        UINT *puIndex);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            ITfCandidateListUIElementBehavior * This,
                       UINT uIndex,
                        BSTR *pstr);
        HRESULT ( STDMETHODCALLTYPE *GetPageIndex )(
            ITfCandidateListUIElementBehavior * This,
                                            UINT *pIndex,
                       UINT uSize,
                        UINT *puPageCnt);
        HRESULT ( STDMETHODCALLTYPE *SetPageIndex )(
            ITfCandidateListUIElementBehavior * This,
                                UINT *pIndex,
                       UINT uPageCnt);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPage )(
            ITfCandidateListUIElementBehavior * This,
                        UINT *puPage);
        HRESULT ( STDMETHODCALLTYPE *SetSelection )(
            ITfCandidateListUIElementBehavior * This,
                       UINT nIndex);
        HRESULT ( STDMETHODCALLTYPE *Finalize )(
            ITfCandidateListUIElementBehavior * This);
        HRESULT ( STDMETHODCALLTYPE *Abort )(
            ITfCandidateListUIElementBehavior * This);
        END_INTERFACE
    } ITfCandidateListUIElementBehaviorVtbl;
    interface ITfCandidateListUIElementBehavior
    {
        CONST_VTBL struct ITfCandidateListUIElementBehaviorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> GetGUID(This,pguid) )
    ( (This)->lpVtbl -> Show(This,bShow) )
    ( (This)->lpVtbl -> IsShown(This,pbShow) )
    ( (This)->lpVtbl -> GetUpdatedFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> GetDocumentMgr(This,ppdim) )
    ( (This)->lpVtbl -> GetCount(This,puCount) )
    ( (This)->lpVtbl -> GetSelection(This,puIndex) )
    ( (This)->lpVtbl -> GetString(This,uIndex,pstr) )
    ( (This)->lpVtbl -> GetPageIndex(This,pIndex,uSize,puPageCnt) )
    ( (This)->lpVtbl -> SetPageIndex(This,pIndex,uPageCnt) )
    ( (This)->lpVtbl -> GetCurrentPage(This,puPage) )
    ( (This)->lpVtbl -> SetSelection(This,nIndex) )
    ( (This)->lpVtbl -> Finalize(This) )
    ( (This)->lpVtbl -> Abort(This) )
EXTERN_C const IID IID_ITfReadingInformationUIElement;
    typedef struct ITfReadingInformationUIElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfReadingInformationUIElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfReadingInformationUIElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfReadingInformationUIElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            ITfReadingInformationUIElement * This,
                        BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            ITfReadingInformationUIElement * This,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            ITfReadingInformationUIElement * This,
                       BOOL bShow);
        HRESULT ( STDMETHODCALLTYPE *IsShown )(
            ITfReadingInformationUIElement * This,
                        BOOL *pbShow);
        HRESULT ( STDMETHODCALLTYPE *GetUpdatedFlags )(
            ITfReadingInformationUIElement * This,
                        DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetContext )(
            ITfReadingInformationUIElement * This,
                        ITfContext **ppic);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            ITfReadingInformationUIElement * This,
                        BSTR *pstr);
        HRESULT ( STDMETHODCALLTYPE *GetMaxReadingStringLength )(
            ITfReadingInformationUIElement * This,
                        UINT *pcchMax);
        HRESULT ( STDMETHODCALLTYPE *GetErrorIndex )(
            ITfReadingInformationUIElement * This,
                        UINT *pErrorIndex);
        HRESULT ( STDMETHODCALLTYPE *IsVerticalOrderPreferred )(
            ITfReadingInformationUIElement * This,
                        BOOL *pfVertical);
        END_INTERFACE
    } ITfReadingInformationUIElementVtbl;
    interface ITfReadingInformationUIElement
    {
        CONST_VTBL struct ITfReadingInformationUIElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> GetGUID(This,pguid) )
    ( (This)->lpVtbl -> Show(This,bShow) )
    ( (This)->lpVtbl -> IsShown(This,pbShow) )
    ( (This)->lpVtbl -> GetUpdatedFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> GetContext(This,ppic) )
    ( (This)->lpVtbl -> GetString(This,pstr) )
    ( (This)->lpVtbl -> GetMaxReadingStringLength(This,pcchMax) )
    ( (This)->lpVtbl -> GetErrorIndex(This,pErrorIndex) )
    ( (This)->lpVtbl -> IsVerticalOrderPreferred(This,pfVertical) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0085_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0085_v0_0_s_ifspec;
EXTERN_C const IID IID_ITfTransitoryExtensionUIElement;
    typedef struct ITfTransitoryExtensionUIElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfTransitoryExtensionUIElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfTransitoryExtensionUIElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfTransitoryExtensionUIElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            ITfTransitoryExtensionUIElement * This,
                        BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            ITfTransitoryExtensionUIElement * This,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            ITfTransitoryExtensionUIElement * This,
                       BOOL bShow);
        HRESULT ( STDMETHODCALLTYPE *IsShown )(
            ITfTransitoryExtensionUIElement * This,
                        BOOL *pbShow);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentMgr )(
            ITfTransitoryExtensionUIElement * This,
                        ITfDocumentMgr **ppdim);
        END_INTERFACE
    } ITfTransitoryExtensionUIElementVtbl;
    interface ITfTransitoryExtensionUIElement
    {
        CONST_VTBL struct ITfTransitoryExtensionUIElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> GetGUID(This,pguid) )
    ( (This)->lpVtbl -> Show(This,bShow) )
    ( (This)->lpVtbl -> IsShown(This,pbShow) )
    ( (This)->lpVtbl -> GetDocumentMgr(This,ppdim) )
EXTERN_C const IID IID_ITfTransitoryExtensionSink;
    typedef struct ITfTransitoryExtensionSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfTransitoryExtensionSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfTransitoryExtensionSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfTransitoryExtensionSink * This);
        HRESULT ( STDMETHODCALLTYPE *OnTransitoryExtensionUpdated )(
            ITfTransitoryExtensionSink * This,
                       ITfContext *pic,
                       TfEditCookie ecReadOnly,
                       ITfRange *pResultRange,
                       ITfRange *pCompositionRange,
                        BOOL *pfDeleteResultRange);
        END_INTERFACE
    } ITfTransitoryExtensionSinkVtbl;
    interface ITfTransitoryExtensionSink
    {
        CONST_VTBL struct ITfTransitoryExtensionSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnTransitoryExtensionUpdated(This,pic,ecReadOnly,pResultRange,pCompositionRange,pfDeleteResultRange) )
EXTERN_C const IID IID_ITfToolTipUIElement;
    typedef struct ITfToolTipUIElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITfToolTipUIElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITfToolTipUIElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITfToolTipUIElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            ITfToolTipUIElement * This,
                        BSTR *pbstrDescription);
        HRESULT ( STDMETHODCALLTYPE *GetGUID )(
            ITfToolTipUIElement * This,
                        GUID *pguid);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            ITfToolTipUIElement * This,
                       BOOL bShow);
        HRESULT ( STDMETHODCALLTYPE *IsShown )(
            ITfToolTipUIElement * This,
                        BOOL *pbShow);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            ITfToolTipUIElement * This,
                        BSTR *pstr);
        END_INTERFACE
    } ITfToolTipUIElementVtbl;
    interface ITfToolTipUIElement
    {
        CONST_VTBL struct ITfToolTipUIElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
    ( (This)->lpVtbl -> GetGUID(This,pguid) )
    ( (This)->lpVtbl -> Show(This,bShow) )
    ( (This)->lpVtbl -> IsShown(This,pbShow) )
    ( (This)->lpVtbl -> GetString(This,pstr) )
EXTERN_C const IID IID_ITfReverseConversionList;
    typedef struct ITfReverseConversionListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfReverseConversionList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfReverseConversionList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfReverseConversionList * This);
        HRESULT ( STDMETHODCALLTYPE *GetLength )(
            __RPC__in ITfReverseConversionList * This,
                        __RPC__out UINT *puIndex);
        HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in ITfReverseConversionList * This,
                       UINT uIndex,
                        __RPC__deref_out_opt BSTR *pbstr);
        END_INTERFACE
    } ITfReverseConversionListVtbl;
    interface ITfReverseConversionList
    {
        CONST_VTBL struct ITfReverseConversionListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLength(This,puIndex) )
    ( (This)->lpVtbl -> GetString(This,uIndex,pbstr) )
EXTERN_C const IID IID_ITfReverseConversion;
    typedef struct ITfReverseConversionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfReverseConversion * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfReverseConversion * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfReverseConversion * This);
        HRESULT ( STDMETHODCALLTYPE *DoReverseConversion )(
            __RPC__in ITfReverseConversion * This,
                       __RPC__in LPCWSTR lpstr,
                        __RPC__deref_out_opt ITfReverseConversionList **ppList);
        END_INTERFACE
    } ITfReverseConversionVtbl;
    interface ITfReverseConversion
    {
        CONST_VTBL struct ITfReverseConversionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DoReverseConversion(This,lpstr,ppList) )
EXTERN_C const IID IID_ITfReverseConversionMgr;
    typedef struct ITfReverseConversionMgrVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITfReverseConversionMgr * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITfReverseConversionMgr * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITfReverseConversionMgr * This);
        HRESULT ( STDMETHODCALLTYPE *GetReverseConversion )(
            __RPC__in ITfReverseConversionMgr * This,
                       LANGID langid,
                       __RPC__in REFGUID guidProfile,
                       DWORD dwflag,
                        __RPC__deref_out_opt ITfReverseConversion **ppReverseConversion);
        END_INTERFACE
    } ITfReverseConversionMgrVtbl;
    interface ITfReverseConversionMgr
    {
        CONST_VTBL struct ITfReverseConversionMgrVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetReverseConversion(This,langid,guidProfile,dwflag,ppReverseConversion) )
DEFINE_GUID( TF_PROFILE_NEWPHONETIC, 0xB2F9C502, 0x1742, 0x11D4, 0x97, 0x90, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_PHONETIC, 0x761309DE, 0x317A, 0x11D4, 0x9B, 0x5D, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_NEWCHANGJIE, 0xF3BA907A, 0x6C7E, 0x11D4, 0x97, 0xFA, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_CHANGJIE, 0x4BDF9F03, 0xC7D3, 0x11D4, 0xB2, 0xAB, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_NEWQUICK, 0x0B883BA0, 0xC1C7, 0x11D4, 0x87, 0xF9, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_QUICK, 0x6024B45F, 0x5C54, 0x11D4, 0xB9, 0x21, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_CANTONESE, 0x0AEC109C, 0x7E96, 0x11D4, 0xB2, 0xEF, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_PINYIN, 0xF3BA9077, 0x6C7E, 0x11D4, 0x97, 0xFA, 0x00, 0x80, 0xC8, 0x82, 0x68, 0x7E);
DEFINE_GUID( TF_PROFILE_SIMPLEFAST, 0xFA550B04, 0x5AD7, 0x411F, 0xA5, 0xAC, 0xCA, 0x03, 0x8E, 0xC5, 0x15, 0xD7);
DEFINE_GUID( TF_PROFILE_WUBI, 0x82590C13, 0xF4DD, 0x44F4, 0xBA, 0x1D, 0x86, 0x67, 0x24, 0x6F, 0xDF, 0x8E);
DEFINE_GUID( TF_PROFILE_DAYI, 0x037B2C25, 0x480C, 0x4D7F, 0xB0, 0x27, 0xD6, 0xCA, 0x6B, 0x69, 0x78, 0x8A);
DEFINE_GUID( TF_PROFILE_ARRAY, 0xD38EFF65, 0xAA46, 0x4FD5, 0x91, 0xA7, 0x67, 0x84, 0x5F, 0xB0, 0x2F, 0x5B);
DEFINE_GUID( TF_PROFILE_YI, 0x409C8376, 0x007B, 0x4357, 0xAE, 0x8E, 0x26, 0x31, 0x6E, 0xE3, 0xFB, 0x0D);
DEFINE_GUID( TF_PROFILE_TIGRINYA, 0x3CAB88B7, 0xCC3E, 0x46A6, 0x97, 0x65, 0xB7, 0x72, 0xAD, 0x77, 0x61, 0xFF);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0091_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msctf_0000_0091_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER CLIPFORMAT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
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
unsigned long __RPC_USER CLIPFORMAT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in CLIPFORMAT * );
unsigned char * __RPC_USER CLIPFORMAT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out CLIPFORMAT * );
void __RPC_USER CLIPFORMAT_UserFree64( __RPC__in unsigned long *, __RPC__in CLIPFORMAT * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
