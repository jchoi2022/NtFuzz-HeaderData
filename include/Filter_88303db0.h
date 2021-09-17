#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IFilter IFilter;
#include "unknwn.h"
#include "objidl.h"
#include "propidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagFULLPROPSPEC
    {
    GUID guidPropSet;
    PROPSPEC psProperty;
    } FULLPROPSPEC;
extern RPC_IF_HANDLE __MIDL_itf_filter_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filter_0000_0000_v0_0_s_ifspec;
typedef
enum tagIFILTER_INIT
    {
        IFILTER_INIT_CANON_PARAGRAPHS = 1,
        IFILTER_INIT_HARD_LINE_BREAKS = 2,
        IFILTER_INIT_CANON_HYPHENS = 4,
        IFILTER_INIT_CANON_SPACES = 8,
        IFILTER_INIT_APPLY_INDEX_ATTRIBUTES = 16,
        IFILTER_INIT_APPLY_OTHER_ATTRIBUTES = 32,
        IFILTER_INIT_APPLY_CRAWL_ATTRIBUTES = 256,
        IFILTER_INIT_INDEXING_ONLY = 64,
        IFILTER_INIT_SEARCH_LINKS = 128,
        IFILTER_INIT_FILTER_OWNED_VALUE_OK = 512,
        IFILTER_INIT_FILTER_AGGRESSIVE_BREAK = 1024,
        IFILTER_INIT_DISABLE_EMBEDDED = 2048,
        IFILTER_INIT_EMIT_FORMATTING = 4096
    } IFILTER_INIT;
typedef
enum tagIFILTER_FLAGS
    {
        IFILTER_FLAGS_OLE_PROPERTIES = 1
    } IFILTER_FLAGS;
typedef
enum tagCHUNKSTATE
    {
        CHUNK_TEXT = 0x1,
        CHUNK_VALUE = 0x2,
        CHUNK_FILTER_OWNED_VALUE = 0x4
    } CHUNKSTATE;
typedef
enum tagCHUNK_BREAKTYPE
    {
        CHUNK_NO_BREAK = 0,
        CHUNK_EOW = 1,
        CHUNK_EOS = 2,
        CHUNK_EOP = 3,
        CHUNK_EOC = 4
    } CHUNK_BREAKTYPE;
typedef struct tagFILTERREGION
    {
    ULONG idChunk;
    ULONG cwcStart;
    ULONG cwcExtent;
    } FILTERREGION;
typedef struct tagSTAT_CHUNK
    {
    ULONG idChunk;
    CHUNK_BREAKTYPE breakType;
    CHUNKSTATE flags;
    LCID locale;
    FULLPROPSPEC attribute;
    ULONG idChunkSource;
    ULONG cwcStartSource;
    ULONG cwcLenSource;
    } STAT_CHUNK;
EXTERN_C const IID IID_IFilter;
    typedef struct IFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFilter * This);
        SCODE ( STDMETHODCALLTYPE *Init )(
            IFilter * This,
                       ULONG grfFlags,
                       ULONG cAttributes,
                                const FULLPROPSPEC *aAttributes,
                        ULONG *pFlags);
        SCODE ( STDMETHODCALLTYPE *GetChunk )(
            IFilter * This,
                        STAT_CHUNK *pStat);
        SCODE ( STDMETHODCALLTYPE *GetText )(
            IFilter * This,
                            ULONG *pcwcBuffer,
                                 WCHAR *awcBuffer);
        SCODE ( STDMETHODCALLTYPE *GetValue )(
            IFilter * This,
                        PROPVARIANT **ppPropValue);
        SCODE ( STDMETHODCALLTYPE *BindRegion )(
            IFilter * This,
                       FILTERREGION origPos,
                       REFIID riid,
                        void **ppunk);
        END_INTERFACE
    } IFilterVtbl;
    interface IFilter
    {
        CONST_VTBL struct IFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,grfFlags,cAttributes,aAttributes,pFlags) )
    ( (This)->lpVtbl -> GetChunk(This,pStat) )
    ( (This)->lpVtbl -> GetText(This,pcwcBuffer,awcBuffer) )
    ( (This)->lpVtbl -> GetValue(This,ppPropValue) )
    ( (This)->lpVtbl -> BindRegion(This,origPos,riid,ppunk) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_filter_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_filter_0000_0001_v0_0_s_ifspec;
}
