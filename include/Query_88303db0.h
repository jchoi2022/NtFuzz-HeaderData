#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISearchQueryHits ISearchQueryHits;
typedef interface IRowsetQueryStatus IRowsetQueryStatus;
#include "oaidl.h"
#include "filter.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_query_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0000_0000_v0_0_s_ifspec;
                       0x7E17, 0x101A, \
                       0xA9, 0x1C, 0x08, 0x00, 0x2B, \
                       0x2E, 0xCD, 0xA9 }
                                0x93D0, 0x11CF, \
                                0xA7, 0x87, 0x00, 0x00, 0x4C, \
                                0x75, 0x27, 0x52 }
                 0x5CF3, 0x11CE, \
                 {0xAD, 0xE5, 0x00, 0xAA, 0x00, \
                  0x44, 0x77, 0x3D } }
                                  0x503a, 0x11cf, \
                                  0xba, 0xa1, 0x00, 0x00, \
                                  0x4c, 0x75, 0x2a, 0x9a }
typedef struct tagRESTRICTION RESTRICTION;
typedef struct tagNOTRESTRICTION
    {
    RESTRICTION *pRes;
    } NOTRESTRICTION;
typedef struct tagNODERESTRICTION
    {
    ULONG cRes;
                    RESTRICTION **paRes;
    ULONG reserved;
    } NODERESTRICTION;
typedef struct tagVECTORRESTRICTION
    {
    NODERESTRICTION Node;
    ULONG RankMethod;
    } VECTORRESTRICTION;
typedef struct tagCONTENTRESTRICTION
    {
    FULLPROPSPEC prop;
                   WCHAR *pwcsPhrase;
    LCID lcid;
    ULONG ulGenerateMethod;
    } CONTENTRESTRICTION;
typedef struct tagNATLANGUAGERESTRICTION
    {
    FULLPROPSPEC prop;
                   WCHAR *pwcsPhrase;
    LCID lcid;
    } NATLANGUAGERESTRICTION;
typedef struct tagPROPERTYRESTRICTION
    {
    ULONG rel;
    FULLPROPSPEC prop;
    PROPVARIANT prval;
    } PROPERTYRESTRICTION;
       
struct tagRESTRICTION
    {
    ULONG rt;
    ULONG weight;
                                   union _URes
        {
                       NODERESTRICTION ar;
                       NODERESTRICTION orRestrictionName;
                       NODERESTRICTION pxr;
                       VECTORRESTRICTION vr;
                       NOTRESTRICTION nr;
                       CONTENTRESTRICTION cr;
                       NATLANGUAGERESTRICTION nlr;
                       PROPERTYRESTRICTION pr;
        } res;
    } ;
       
typedef struct tagCOLUMNSET
    {
    ULONG cCol;
                    FULLPROPSPEC *aCol;
    } COLUMNSET;
typedef struct tagSORTKEY
    {
    FULLPROPSPEC propColumn;
    ULONG dwOrder;
    LCID locale;
    } SORTKEY;
typedef struct tagSORTSET
    {
    ULONG cCol;
                    SORTKEY *aCol;
    } SORTSET;
typedef struct tagBUCKETCATEGORIZE
    {
    ULONG cBuckets;
    ULONG Distribution;
    } BUCKETCATEGORIZE;
typedef struct tagRANGECATEGORIZE
    {
    ULONG cRange;
                    PROPVARIANT *aRangeBegin;
    } RANGECATEGORIZE;
typedef struct tagCATEGORIZATION
    {
    ULONG ulCatType;
                                   union
        {
                       ULONG cClusters;
                       BUCKETCATEGORIZE bucket;
                       RANGECATEGORIZE range;
        } ;
    COLUMNSET csColumns;
    } CATEGORIZATION;
typedef struct tagCATEGORIZATIONSET
    {
    ULONG cCat;
                    CATEGORIZATION *aCat;
    } CATEGORIZATIONSET;
typedef unsigned long OCCURRENCE;
extern RPC_IF_HANDLE IQueryStructures_v0_0_c_ifspec;
extern RPC_IF_HANDLE IQueryStructures_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchQueryHits;
    typedef struct ISearchQueryHitsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISearchQueryHits * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISearchQueryHits * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISearchQueryHits * This);
        SCODE ( STDMETHODCALLTYPE *Init )(
            ISearchQueryHits * This,
                       IFilter *pflt,
                       ULONG ulFlags);
        SCODE ( STDMETHODCALLTYPE *NextHitMoniker )(
            ISearchQueryHits * This,
                            ULONG *pcMnk,
                                 IMoniker ***papMnk);
        SCODE ( STDMETHODCALLTYPE *NextHitOffset )(
            ISearchQueryHits * This,
                            ULONG *pcRegion,
                                 FILTERREGION **paRegion);
        END_INTERFACE
    } ISearchQueryHitsVtbl;
    interface ISearchQueryHits
    {
        CONST_VTBL struct ISearchQueryHitsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Init(This,pflt,ulFlags) )
    ( (This)->lpVtbl -> NextHitMoniker(This,pcMnk,papMnk) )
    ( (This)->lpVtbl -> NextHitOffset(This,pcRegion,paRegion) )
EXTERN_C const IID IID_IRowsetQueryStatus;
    typedef struct IRowsetQueryStatusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRowsetQueryStatus * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRowsetQueryStatus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRowsetQueryStatus * This);
        HRESULT ( STDMETHODCALLTYPE *GetStatus )(
            IRowsetQueryStatus * This,
                        DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *GetStatusEx )(
            IRowsetQueryStatus * This,
                        DWORD *pdwStatus,
                        DWORD *pcFilteredDocuments,
                        DWORD *pcDocumentsToFilter,
                        ULONG_PTR *pdwRatioFinishedDenominator,
                        ULONG_PTR *pdwRatioFinishedNumerator,
                       ULONG_PTR cbBmk,
                                const BYTE *pBmk,
                        ULONG_PTR *piRowBmk,
                        ULONG_PTR *pcRowsTotal);
        END_INTERFACE
    } IRowsetQueryStatusVtbl;
    interface IRowsetQueryStatus
    {
        CONST_VTBL struct IRowsetQueryStatusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> GetStatusEx(This,pdwStatus,pcFilteredDocuments,pcDocumentsToFilter,pdwRatioFinishedDenominator,pdwRatioFinishedNumerator,cbBmk,pBmk,piRowBmk,pcRowsTotal) )
#include <indexsrv.h>
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_query_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_query_0000_0003_v0_0_s_ifspec;
}
