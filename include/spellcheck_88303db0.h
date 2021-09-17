#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISpellingError ISpellingError;
typedef interface IEnumSpellingError IEnumSpellingError;
typedef interface IOptionDescription IOptionDescription;
typedef interface ISpellCheckerChangedEventHandler ISpellCheckerChangedEventHandler;
typedef interface ISpellChecker ISpellChecker;
typedef interface ISpellChecker2 ISpellChecker2;
typedef interface ISpellCheckerFactory ISpellCheckerFactory;
typedef interface IUserDictionariesRegistrar IUserDictionariesRegistrar;
typedef class SpellCheckerFactory SpellCheckerFactory;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum WORDLIST_TYPE
    {
        WORDLIST_TYPE_IGNORE = 0,
        WORDLIST_TYPE_ADD = 1,
        WORDLIST_TYPE_EXCLUDE = 2,
        WORDLIST_TYPE_AUTOCORRECT = 3
    } WORDLIST_TYPE;
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0000_v0_0_s_ifspec;
typedef
enum CORRECTIVE_ACTION
    {
        CORRECTIVE_ACTION_NONE = 0,
        CORRECTIVE_ACTION_GET_SUGGESTIONS = 1,
        CORRECTIVE_ACTION_REPLACE = 2,
        CORRECTIVE_ACTION_DELETE = 3
    } CORRECTIVE_ACTION;
EXTERN_C const IID IID_ISpellingError;
    typedef struct ISpellingErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpellingError * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpellingError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpellingError * This);
                        HRESULT ( STDMETHODCALLTYPE *get_StartIndex )(
            __RPC__in ISpellingError * This,
                                __RPC__out ULONG *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in ISpellingError * This,
                                __RPC__out ULONG *value);
                        HRESULT ( STDMETHODCALLTYPE *get_CorrectiveAction )(
            __RPC__in ISpellingError * This,
                                __RPC__out CORRECTIVE_ACTION *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Replacement )(
            __RPC__in ISpellingError * This,
                                __RPC__deref_out_opt LPWSTR *value);
        END_INTERFACE
    } ISpellingErrorVtbl;
    interface ISpellingError
    {
        CONST_VTBL struct ISpellingErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_StartIndex(This,value) )
    ( (This)->lpVtbl -> get_Length(This,value) )
    ( (This)->lpVtbl -> get_CorrectiveAction(This,value) )
    ( (This)->lpVtbl -> get_Replacement(This,value) )
EXTERN_C const IID IID_IEnumSpellingError;
    typedef struct IEnumSpellingErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSpellingError * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSpellingError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSpellingError * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSpellingError * This,
                                __RPC__deref_out_opt ISpellingError **value);
        END_INTERFACE
    } IEnumSpellingErrorVtbl;
    interface IEnumSpellingError
    {
        CONST_VTBL struct IEnumSpellingErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,value) )
EXTERN_C const IID IID_IOptionDescription;
    typedef struct IOptionDescriptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOptionDescription * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOptionDescription * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOptionDescription * This);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in IOptionDescription * This,
                                __RPC__deref_out_opt LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Heading )(
            __RPC__in IOptionDescription * This,
                                __RPC__deref_out_opt LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Description )(
            __RPC__in IOptionDescription * This,
                                __RPC__deref_out_opt LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_Labels )(
            __RPC__in IOptionDescription * This,
                                __RPC__deref_out_opt IEnumString **value);
        END_INTERFACE
    } IOptionDescriptionVtbl;
    interface IOptionDescription
    {
        CONST_VTBL struct IOptionDescriptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_Id(This,value) )
    ( (This)->lpVtbl -> get_Heading(This,value) )
    ( (This)->lpVtbl -> get_Description(This,value) )
    ( (This)->lpVtbl -> get_Labels(This,value) )
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpellCheckerChangedEventHandler;
    typedef struct ISpellCheckerChangedEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpellCheckerChangedEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpellCheckerChangedEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpellCheckerChangedEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in ISpellCheckerChangedEventHandler * This,
                       __RPC__in_opt ISpellChecker *sender);
        END_INTERFACE
    } ISpellCheckerChangedEventHandlerVtbl;
    interface ISpellCheckerChangedEventHandler
    {
        CONST_VTBL struct ISpellCheckerChangedEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender) )
EXTERN_C const IID IID_ISpellChecker;
    typedef struct ISpellCheckerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpellChecker * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpellChecker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpellChecker * This);
                        HRESULT ( STDMETHODCALLTYPE *get_LanguageTag )(
            __RPC__in ISpellChecker * This,
                                __RPC__deref_out_opt LPWSTR *value);
        HRESULT ( STDMETHODCALLTYPE *Check )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR text,
                                __RPC__deref_out_opt IEnumSpellingError **value);
        HRESULT ( STDMETHODCALLTYPE *Suggest )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR word,
                                __RPC__deref_out_opt IEnumString **value);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR word);
        HRESULT ( STDMETHODCALLTYPE *Ignore )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR word);
        HRESULT ( STDMETHODCALLTYPE *AutoCorrect )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR from,
                       __RPC__in LPCWSTR to);
        HRESULT ( STDMETHODCALLTYPE *GetOptionValue )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR optionId,
                                __RPC__out BYTE *value);
                        HRESULT ( STDMETHODCALLTYPE *get_OptionIds )(
            __RPC__in ISpellChecker * This,
                                __RPC__deref_out_opt IEnumString **value);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpellChecker * This,
                                __RPC__deref_out_opt LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_LocalizedName )(
            __RPC__in ISpellChecker * This,
                                __RPC__deref_out_opt LPWSTR *value);
        HRESULT ( STDMETHODCALLTYPE *add_SpellCheckerChanged )(
            __RPC__in ISpellChecker * This,
                       __RPC__in_opt ISpellCheckerChangedEventHandler *handler,
                                __RPC__out DWORD *eventCookie);
        HRESULT ( STDMETHODCALLTYPE *remove_SpellCheckerChanged )(
            __RPC__in ISpellChecker * This,
                       DWORD eventCookie);
        HRESULT ( STDMETHODCALLTYPE *GetOptionDescription )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR optionId,
                                __RPC__deref_out_opt IOptionDescription **value);
        HRESULT ( STDMETHODCALLTYPE *ComprehensiveCheck )(
            __RPC__in ISpellChecker * This,
                       __RPC__in LPCWSTR text,
                                __RPC__deref_out_opt IEnumSpellingError **value);
        END_INTERFACE
    } ISpellCheckerVtbl;
    interface ISpellChecker
    {
        CONST_VTBL struct ISpellCheckerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_LanguageTag(This,value) )
    ( (This)->lpVtbl -> Check(This,text,value) )
    ( (This)->lpVtbl -> Suggest(This,word,value) )
    ( (This)->lpVtbl -> Add(This,word) )
    ( (This)->lpVtbl -> Ignore(This,word) )
    ( (This)->lpVtbl -> AutoCorrect(This,from,to) )
    ( (This)->lpVtbl -> GetOptionValue(This,optionId,value) )
    ( (This)->lpVtbl -> get_OptionIds(This,value) )
    ( (This)->lpVtbl -> get_Id(This,value) )
    ( (This)->lpVtbl -> get_LocalizedName(This,value) )
    ( (This)->lpVtbl -> add_SpellCheckerChanged(This,handler,eventCookie) )
    ( (This)->lpVtbl -> remove_SpellCheckerChanged(This,eventCookie) )
    ( (This)->lpVtbl -> GetOptionDescription(This,optionId,value) )
    ( (This)->lpVtbl -> ComprehensiveCheck(This,text,value) )
EXTERN_C const IID IID_ISpellChecker2;
    typedef struct ISpellChecker2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpellChecker2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpellChecker2 * This);
                        HRESULT ( STDMETHODCALLTYPE *get_LanguageTag )(
            __RPC__in ISpellChecker2 * This,
                                __RPC__deref_out_opt LPWSTR *value);
        HRESULT ( STDMETHODCALLTYPE *Check )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR text,
                                __RPC__deref_out_opt IEnumSpellingError **value);
        HRESULT ( STDMETHODCALLTYPE *Suggest )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR word,
                                __RPC__deref_out_opt IEnumString **value);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR word);
        HRESULT ( STDMETHODCALLTYPE *Ignore )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR word);
        HRESULT ( STDMETHODCALLTYPE *AutoCorrect )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR from,
                       __RPC__in LPCWSTR to);
        HRESULT ( STDMETHODCALLTYPE *GetOptionValue )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR optionId,
                                __RPC__out BYTE *value);
                        HRESULT ( STDMETHODCALLTYPE *get_OptionIds )(
            __RPC__in ISpellChecker2 * This,
                                __RPC__deref_out_opt IEnumString **value);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpellChecker2 * This,
                                __RPC__deref_out_opt LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_LocalizedName )(
            __RPC__in ISpellChecker2 * This,
                                __RPC__deref_out_opt LPWSTR *value);
        HRESULT ( STDMETHODCALLTYPE *add_SpellCheckerChanged )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in_opt ISpellCheckerChangedEventHandler *handler,
                                __RPC__out DWORD *eventCookie);
        HRESULT ( STDMETHODCALLTYPE *remove_SpellCheckerChanged )(
            __RPC__in ISpellChecker2 * This,
                       DWORD eventCookie);
        HRESULT ( STDMETHODCALLTYPE *GetOptionDescription )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR optionId,
                                __RPC__deref_out_opt IOptionDescription **value);
        HRESULT ( STDMETHODCALLTYPE *ComprehensiveCheck )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR text,
                                __RPC__deref_out_opt IEnumSpellingError **value);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            __RPC__in ISpellChecker2 * This,
                       __RPC__in LPCWSTR word);
        END_INTERFACE
    } ISpellChecker2Vtbl;
    interface ISpellChecker2
    {
        CONST_VTBL struct ISpellChecker2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_LanguageTag(This,value) )
    ( (This)->lpVtbl -> Check(This,text,value) )
    ( (This)->lpVtbl -> Suggest(This,word,value) )
    ( (This)->lpVtbl -> Add(This,word) )
    ( (This)->lpVtbl -> Ignore(This,word) )
    ( (This)->lpVtbl -> AutoCorrect(This,from,to) )
    ( (This)->lpVtbl -> GetOptionValue(This,optionId,value) )
    ( (This)->lpVtbl -> get_OptionIds(This,value) )
    ( (This)->lpVtbl -> get_Id(This,value) )
    ( (This)->lpVtbl -> get_LocalizedName(This,value) )
    ( (This)->lpVtbl -> add_SpellCheckerChanged(This,handler,eventCookie) )
    ( (This)->lpVtbl -> remove_SpellCheckerChanged(This,eventCookie) )
    ( (This)->lpVtbl -> GetOptionDescription(This,optionId,value) )
    ( (This)->lpVtbl -> ComprehensiveCheck(This,text,value) )
    ( (This)->lpVtbl -> Remove(This,word) )
EXTERN_C const IID IID_ISpellCheckerFactory;
    typedef struct ISpellCheckerFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpellCheckerFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpellCheckerFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpellCheckerFactory * This);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedLanguages )(
            __RPC__in ISpellCheckerFactory * This,
                                __RPC__deref_out_opt IEnumString **value);
        HRESULT ( STDMETHODCALLTYPE *IsSupported )(
            __RPC__in ISpellCheckerFactory * This,
                       __RPC__in LPCWSTR languageTag,
                                __RPC__out BOOL *value);
        HRESULT ( STDMETHODCALLTYPE *CreateSpellChecker )(
            __RPC__in ISpellCheckerFactory * This,
                       __RPC__in LPCWSTR languageTag,
                                __RPC__deref_out_opt ISpellChecker **value);
        END_INTERFACE
    } ISpellCheckerFactoryVtbl;
    interface ISpellCheckerFactory
    {
        CONST_VTBL struct ISpellCheckerFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SupportedLanguages(This,value) )
    ( (This)->lpVtbl -> IsSupported(This,languageTag,value) )
    ( (This)->lpVtbl -> CreateSpellChecker(This,languageTag,value) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IUserDictionariesRegistrar;
    typedef struct IUserDictionariesRegistrarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUserDictionariesRegistrar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUserDictionariesRegistrar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUserDictionariesRegistrar * This);
        HRESULT ( STDMETHODCALLTYPE *RegisterUserDictionary )(
            __RPC__in IUserDictionariesRegistrar * This,
                       __RPC__in LPCWSTR dictionaryPath,
                       __RPC__in LPCWSTR languageTag);
        HRESULT ( STDMETHODCALLTYPE *UnregisterUserDictionary )(
            __RPC__in IUserDictionariesRegistrar * This,
                       __RPC__in LPCWSTR dictionaryPath,
                       __RPC__in LPCWSTR languageTag);
        END_INTERFACE
    } IUserDictionariesRegistrarVtbl;
    interface IUserDictionariesRegistrar
    {
        CONST_VTBL struct IUserDictionariesRegistrarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterUserDictionary(This,dictionaryPath,languageTag) )
    ( (This)->lpVtbl -> UnregisterUserDictionary(This,dictionaryPath,languageTag) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID LIBID_MsSpellCheckLib;
EXTERN_C const CLSID CLSID_SpellCheckerFactory;
class DECLSPEC_UUID("7AB36653-1796-484B-BDFA-E74F1DB7C1DC")
SpellCheckerFactory;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spellcheck_0000_0009_v0_0_s_ifspec;
}
