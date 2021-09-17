#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISpellCheckProvider ISpellCheckProvider;
typedef interface IComprehensiveSpellCheckProvider IComprehensiveSpellCheckProvider;
typedef interface ISpellCheckProviderFactory ISpellCheckProviderFactory;
#include "SpellCheck.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_spellcheckprovider_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spellcheckprovider_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISpellCheckProvider;
    typedef struct ISpellCheckProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpellCheckProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpellCheckProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpellCheckProvider * This);
                        HRESULT ( STDMETHODCALLTYPE *get_LanguageTag )(
            __RPC__in ISpellCheckProvider * This,
                                __RPC__deref_out_opt LPWSTR *value);
        HRESULT ( STDMETHODCALLTYPE *Check )(
            __RPC__in ISpellCheckProvider * This,
                       __RPC__in LPCWSTR text,
                                __RPC__deref_out_opt IEnumSpellingError **value);
        HRESULT ( STDMETHODCALLTYPE *Suggest )(
            __RPC__in ISpellCheckProvider * This,
                       __RPC__in LPCWSTR word,
                                __RPC__deref_out_opt IEnumString **value);
        HRESULT ( STDMETHODCALLTYPE *GetOptionValue )(
            __RPC__in ISpellCheckProvider * This,
                       __RPC__in LPCWSTR optionId,
                                __RPC__out BYTE *value);
        HRESULT ( STDMETHODCALLTYPE *SetOptionValue )(
            __RPC__in ISpellCheckProvider * This,
                       __RPC__in LPCWSTR optionId,
                       BYTE value);
                        HRESULT ( STDMETHODCALLTYPE *get_OptionIds )(
            __RPC__in ISpellCheckProvider * This,
                                __RPC__deref_out_opt IEnumString **value);
                        HRESULT ( STDMETHODCALLTYPE *get_Id )(
            __RPC__in ISpellCheckProvider * This,
                                __RPC__deref_out_opt LPWSTR *value);
                        HRESULT ( STDMETHODCALLTYPE *get_LocalizedName )(
            __RPC__in ISpellCheckProvider * This,
                                __RPC__deref_out_opt LPWSTR *value);
        HRESULT ( STDMETHODCALLTYPE *GetOptionDescription )(
            __RPC__in ISpellCheckProvider * This,
                       __RPC__in LPCWSTR optionId,
                                __RPC__deref_out_opt IOptionDescription **value);
        HRESULT ( STDMETHODCALLTYPE *InitializeWordlist )(
            __RPC__in ISpellCheckProvider * This,
                       WORDLIST_TYPE wordlistType,
                       __RPC__in_opt IEnumString *words);
        END_INTERFACE
    } ISpellCheckProviderVtbl;
    interface ISpellCheckProvider
    {
        CONST_VTBL struct ISpellCheckProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_LanguageTag(This,value) )
    ( (This)->lpVtbl -> Check(This,text,value) )
    ( (This)->lpVtbl -> Suggest(This,word,value) )
    ( (This)->lpVtbl -> GetOptionValue(This,optionId,value) )
    ( (This)->lpVtbl -> SetOptionValue(This,optionId,value) )
    ( (This)->lpVtbl -> get_OptionIds(This,value) )
    ( (This)->lpVtbl -> get_Id(This,value) )
    ( (This)->lpVtbl -> get_LocalizedName(This,value) )
    ( (This)->lpVtbl -> GetOptionDescription(This,optionId,value) )
    ( (This)->lpVtbl -> InitializeWordlist(This,wordlistType,words) )
EXTERN_C const IID IID_IComprehensiveSpellCheckProvider;
    typedef struct IComprehensiveSpellCheckProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComprehensiveSpellCheckProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComprehensiveSpellCheckProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComprehensiveSpellCheckProvider * This);
        HRESULT ( STDMETHODCALLTYPE *ComprehensiveCheck )(
            __RPC__in IComprehensiveSpellCheckProvider * This,
                       __RPC__in LPCWSTR text,
                                __RPC__deref_out_opt IEnumSpellingError **value);
        END_INTERFACE
    } IComprehensiveSpellCheckProviderVtbl;
    interface IComprehensiveSpellCheckProvider
    {
        CONST_VTBL struct IComprehensiveSpellCheckProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ComprehensiveCheck(This,text,value) )
EXTERN_C const IID IID_ISpellCheckProviderFactory;
    typedef struct ISpellCheckProviderFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISpellCheckProviderFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISpellCheckProviderFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISpellCheckProviderFactory * This);
                        HRESULT ( STDMETHODCALLTYPE *get_SupportedLanguages )(
            __RPC__in ISpellCheckProviderFactory * This,
                                __RPC__deref_out_opt IEnumString **value);
        HRESULT ( STDMETHODCALLTYPE *IsSupported )(
            __RPC__in ISpellCheckProviderFactory * This,
                       __RPC__in LPCWSTR languageTag,
                                __RPC__out BOOL *value);
        HRESULT ( STDMETHODCALLTYPE *CreateSpellCheckProvider )(
            __RPC__in ISpellCheckProviderFactory * This,
                       __RPC__in LPCWSTR languageTag,
                                __RPC__deref_out_opt ISpellCheckProvider **value);
        END_INTERFACE
    } ISpellCheckProviderFactoryVtbl;
    interface ISpellCheckProviderFactory
    {
        CONST_VTBL struct ISpellCheckProviderFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> get_SupportedLanguages(This,value) )
    ( (This)->lpVtbl -> IsSupported(This,languageTag,value) )
    ( (This)->lpVtbl -> CreateSpellCheckProvider(This,languageTag,value) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_spellcheckprovider_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_spellcheckprovider_0000_0003_v0_0_s_ifspec;
}
