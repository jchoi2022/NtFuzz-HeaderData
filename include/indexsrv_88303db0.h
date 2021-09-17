#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IPhraseSink IPhraseSink;
typedef interface IWordSink IWordSink;
typedef interface IWordBreaker IWordBreaker;
typedef interface IWordFormSink IWordFormSink;
typedef interface IStemmer IStemmer;
typedef interface ISimpleCommandCreator ISimpleCommandCreator;
typedef interface IColumnMapper IColumnMapper;
typedef interface IColumnMapperCreator IColumnMapperCreator;
#include "oaidl.h"
#include "filter.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IPhraseSink;
    typedef struct IPhraseSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPhraseSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPhraseSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPhraseSink * This);
        HRESULT ( STDMETHODCALLTYPE *PutSmallPhrase )(
            IPhraseSink * This,
                                const WCHAR *pwcNoun,
                       ULONG cwcNoun,
                                const WCHAR *pwcModifier,
                       ULONG cwcModifier,
                       ULONG ulAttachmentType);
        HRESULT ( STDMETHODCALLTYPE *PutPhrase )(
            IPhraseSink * This,
                                const WCHAR *pwcPhrase,
                       ULONG cwcPhrase);
        END_INTERFACE
    } IPhraseSinkVtbl;
    interface IPhraseSink
    {
        CONST_VTBL struct IPhraseSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PutSmallPhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType) )
    ( (This)->lpVtbl -> PutPhrase(This,pwcPhrase,cwcPhrase) )
typedef
enum tagWORDREP_BREAK_TYPE
    {
        WORDREP_BREAK_EOW = 0,
        WORDREP_BREAK_EOS = 1,
        WORDREP_BREAK_EOP = 2,
        WORDREP_BREAK_EOC = 3
    } WORDREP_BREAK_TYPE;
EXTERN_C const IID IID_IWordSink;
    typedef struct IWordSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWordSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWordSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWordSink * This);
        HRESULT ( STDMETHODCALLTYPE *PutWord )(
            IWordSink * This,
                       ULONG cwc,
                                const WCHAR *pwcInBuf,
                       ULONG cwcSrcLen,
                       ULONG cwcSrcPos);
        HRESULT ( STDMETHODCALLTYPE *PutAltWord )(
            IWordSink * This,
                       ULONG cwc,
                                const WCHAR *pwcInBuf,
                       ULONG cwcSrcLen,
                       ULONG cwcSrcPos);
        HRESULT ( STDMETHODCALLTYPE *StartAltPhrase )(
            IWordSink * This);
        HRESULT ( STDMETHODCALLTYPE *EndAltPhrase )(
            IWordSink * This);
        HRESULT ( STDMETHODCALLTYPE *PutBreak )(
            IWordSink * This,
                       WORDREP_BREAK_TYPE breakType);
        END_INTERFACE
    } IWordSinkVtbl;
    interface IWordSink
    {
        CONST_VTBL struct IWordSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PutWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos) )
    ( (This)->lpVtbl -> PutAltWord(This,cwc,pwcInBuf,cwcSrcLen,cwcSrcPos) )
    ( (This)->lpVtbl -> StartAltPhrase(This) )
    ( (This)->lpVtbl -> EndAltPhrase(This) )
    ( (This)->lpVtbl -> PutBreak(This,breakType) )
typedef HRESULT ( __stdcall *PFNFILLTEXTBUFFER )(
    struct tagTEXT_SOURCE *pTextSource);
typedef struct tagTEXT_SOURCE
    {
    PFNFILLTEXTBUFFER pfnFillTextBuffer;
    const WCHAR *awcBuffer;
    ULONG iEnd;
    ULONG iCur;
    } TEXT_SOURCE;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IWordBreaker;
    typedef struct IWordBreakerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWordBreaker * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWordBreaker * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWordBreaker * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            IWordBreaker * This,
                       BOOL fQuery,
                       ULONG ulMaxTokenSize,
                        BOOL *pfLicense);
        HRESULT ( STDMETHODCALLTYPE *BreakText )(
            IWordBreaker * This,
                       TEXT_SOURCE *pTextSource,
                       IWordSink *pWordSink,
                       IPhraseSink *pPhraseSink);
        HRESULT ( STDMETHODCALLTYPE *ComposePhrase )(
            IWordBreaker * This,
                                const WCHAR *pwcNoun,
                       ULONG cwcNoun,
                                const WCHAR *pwcModifier,
                       ULONG cwcModifier,
                       ULONG ulAttachmentType,
                                 WCHAR *pwcPhrase,
                            ULONG *pcwcPhrase);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseToUse )(
            IWordBreaker * This,
                                const WCHAR **ppwcsLicense);
        END_INTERFACE
    } IWordBreakerVtbl;
    interface IWordBreaker
    {
        CONST_VTBL struct IWordBreakerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,fQuery,ulMaxTokenSize,pfLicense) )
    ( (This)->lpVtbl -> BreakText(This,pTextSource,pWordSink,pPhraseSink) )
    ( (This)->lpVtbl -> ComposePhrase(This,pwcNoun,cwcNoun,pwcModifier,cwcModifier,ulAttachmentType,pwcPhrase,pcwcPhrase) )
    ( (This)->lpVtbl -> GetLicenseToUse(This,ppwcsLicense) )
EXTERN_C const IID IID_IWordFormSink;
    typedef struct IWordFormSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWordFormSink * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWordFormSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWordFormSink * This);
        HRESULT ( STDMETHODCALLTYPE *PutAltWord )(
            IWordFormSink * This,
                                const WCHAR *pwcInBuf,
                       ULONG cwc);
        HRESULT ( STDMETHODCALLTYPE *PutWord )(
            IWordFormSink * This,
                                const WCHAR *pwcInBuf,
                       ULONG cwc);
        END_INTERFACE
    } IWordFormSinkVtbl;
    interface IWordFormSink
    {
        CONST_VTBL struct IWordFormSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PutAltWord(This,pwcInBuf,cwc) )
    ( (This)->lpVtbl -> PutWord(This,pwcInBuf,cwc) )
EXTERN_C const IID IID_IStemmer;
    typedef struct IStemmerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IStemmer * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IStemmer * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IStemmer * This);
        HRESULT ( STDMETHODCALLTYPE *Init )(
            IStemmer * This,
                       ULONG ulMaxTokenSize,
                        BOOL *pfLicense);
        HRESULT ( STDMETHODCALLTYPE *GenerateWordForms )(
            IStemmer * This,
                       const WCHAR *pwcInBuf,
                       ULONG cwc,
                       IWordFormSink *pStemSink);
        HRESULT ( STDMETHODCALLTYPE *GetLicenseToUse )(
            IStemmer * This,
                                const WCHAR **ppwcsLicense);
        END_INTERFACE
    } IStemmerVtbl;
    interface IStemmer
    {
        CONST_VTBL struct IStemmerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,ulMaxTokenSize,pfLicense) )
    ( (This)->lpVtbl -> GenerateWordForms(This,pwcInBuf,cwc,pStemSink) )
    ( (This)->lpVtbl -> GetLicenseToUse(This,ppwcsLicense) )
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ISimpleCommandCreator;
    typedef struct ISimpleCommandCreatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimpleCommandCreator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimpleCommandCreator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimpleCommandCreator * This);
        HRESULT ( STDMETHODCALLTYPE *CreateICommand )(
            ISimpleCommandCreator * This,
            IUnknown **ppIUnknown,
            IUnknown *pOuterUnk);
        HRESULT ( STDMETHODCALLTYPE *VerifyCatalog )(
            ISimpleCommandCreator * This,
            const WCHAR *pwszMachine,
            const WCHAR *pwszCatalogName);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultCatalog )(
            ISimpleCommandCreator * This,
            WCHAR *pwszCatalogName,
            ULONG cwcIn,
            ULONG *pcwcOut);
        END_INTERFACE
    } ISimpleCommandCreatorVtbl;
    interface ISimpleCommandCreator
    {
        CONST_VTBL struct ISimpleCommandCreatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateICommand(This,ppIUnknown,pOuterUnk) )
    ( (This)->lpVtbl -> VerifyCatalog(This,pwszMachine,pwszCatalogName) )
    ( (This)->lpVtbl -> GetDefaultCatalog(This,pwszCatalogName,cwcIn,pcwcOut) )
typedef struct tagDBID DBID;
typedef WORD DBTYPE;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IColumnMapper;
    typedef struct IColumnMapperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IColumnMapper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IColumnMapper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IColumnMapper * This);
        HRESULT ( STDMETHODCALLTYPE *GetPropInfoFromName )(
            IColumnMapper * This,
                               const WCHAR *wcsPropName,
                        DBID **ppPropId,
                        DBTYPE *pPropType,
                        unsigned int *puiWidth);
        HRESULT ( STDMETHODCALLTYPE *GetPropInfoFromId )(
            IColumnMapper * This,
                       const DBID *pPropId,
                        WCHAR **pwcsName,
                        DBTYPE *pPropType,
                        unsigned int *puiWidth);
        HRESULT ( STDMETHODCALLTYPE *EnumPropInfo )(
            IColumnMapper * This,
                       ULONG iEntry,
                        const WCHAR **pwcsName,
                        DBID **ppPropId,
                        DBTYPE *pPropType,
                        unsigned int *puiWidth);
        HRESULT ( STDMETHODCALLTYPE *IsMapUpToDate )(
            IColumnMapper * This);
        END_INTERFACE
    } IColumnMapperVtbl;
    interface IColumnMapper
    {
        CONST_VTBL struct IColumnMapperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropInfoFromName(This,wcsPropName,ppPropId,pPropType,puiWidth) )
    ( (This)->lpVtbl -> GetPropInfoFromId(This,pPropId,pwcsName,pPropType,puiWidth) )
    ( (This)->lpVtbl -> EnumPropInfo(This,iEntry,pwcsName,ppPropId,pPropType,puiWidth) )
    ( (This)->lpVtbl -> IsMapUpToDate(This) )
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IColumnMapperCreator;
    typedef struct IColumnMapperCreatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IColumnMapperCreator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IColumnMapperCreator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IColumnMapperCreator * This);
        HRESULT ( STDMETHODCALLTYPE *GetColumnMapper )(
            IColumnMapperCreator * This,
                               const WCHAR *wcsMachineName,
                               const WCHAR *wcsCatalogName,
                        IColumnMapper **ppColumnMapper);
        END_INTERFACE
    } IColumnMapperCreatorVtbl;
    interface IColumnMapperCreator
    {
        CONST_VTBL struct IColumnMapperCreatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetColumnMapper(This,wcsMachineName,wcsCatalogName,ppColumnMapper) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_indexsrv_0000_0008_v0_0_s_ifspec;
}
